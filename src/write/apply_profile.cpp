/* -*- C++ -*-
 * Copyright 2019-2024 LibRaw LLC (info@libraw.org)
 *
 LibRaw uses code from dcraw.c -- Dave Coffin's raw photo decoder,
 dcraw.c is copyright 1997-2018 by Dave Coffin, dcoffin a cybercom o net.
 LibRaw do not use RESTRICTED code from dcraw.c

 LibRaw is free software; you can redistribute it and/or modify
 it under the terms of the one of two licenses as you choose:

1. GNU LESSER GENERAL PUBLIC LICENSE version 2.1
   (See file LICENSE.LGPL provided in LibRaw distribution archive for details).

2. COMMON DEVELOPMENT AND DISTRIBUTION LICENSE (CDDL) Version 1.0
   (See file LICENSE.CDDL provided in LibRaw distribution archive for details).

 */

#include "../../internal/dcraw_fileio_defs.h"

#ifndef NO_LCMS
void LibRaw::apply_profile(const char *input, const char *output)
{
  char *prof;
  cmsHPROFILE hInProfile = 0, hOutProfile = 0;
  cmsHTRANSFORM hTransform;
  FILE *fp;
  unsigned size;

  if (strcmp(input, "embed"))
    hInProfile = cmsOpenProfileFromFile(cmsContextID(), input, "r");
  else if (profile_length)
  {
    hInProfile = cmsOpenProfileFromMem(cmsContextID(), imgdata.color.profile, profile_length);
  }
  else
  {
    imgdata.process_warnings |= LIBRAW_WARN_NO_EMBEDDED_PROFILE;
  }
  if (!hInProfile)
  {
    imgdata.process_warnings |= LIBRAW_WARN_NO_INPUT_PROFILE;
    return;
  }
  if (!output)
    hOutProfile = cmsCreate_sRGBProfile(cmsContextID());
  else if ((fp = fopen(output, "rb")))
  {
    fread(&size, 4, 1, fp);
    fseek(fp, 0, SEEK_SET);
    oprof = (unsigned *)calloc(size = ntohl(size),1);
    fread(oprof, 1, size, fp);
    fclose(fp);
    if (!(hOutProfile = cmsOpenProfileFromMem(cmsContextID(), oprof, size)))
    {
      free(oprof);
      oprof = 0;
    }
  }
  if (!hOutProfile)
  {
    imgdata.process_warnings |= LIBRAW_WARN_BAD_OUTPUT_PROFILE;
    goto quit;
  }
  RUN_CALLBACK(LIBRAW_PROGRESS_APPLY_PROFILE, 0, 2);
  hTransform = cmsCreateTransform(cmsContextID(), hInProfile, TYPE_RGBA_16, hOutProfile,
                                  TYPE_RGBA_16, INTENT_PERCEPTUAL, 0);
  cmsDoTransform(cmsContextID(), hTransform, image, image, width * height);
  raw_color = 1; /* Don't use rgb_cam with a profile */
  cmsDeleteTransform(cmsContextID(), hTransform);
  cmsCloseProfile(cmsContextID(), hOutProfile);
quit:
  cmsCloseProfile(cmsContextID(), hInProfile);
  RUN_CALLBACK(LIBRAW_PROGRESS_APPLY_PROFILE, 1, 2);
}

cmsContext LibRaw::cmsContextID() {
	if (!_cmsContextID) {
      _cmsContextID = cmsCreateContext(NULL, NULL);
	}
	return _cmsContextID;
}

void LibRaw::destroy_cmsContextID() {
  if (_cmsContextID)
  {
    cmsDeleteContext(_cmsContextID);
  }
}

#endif
