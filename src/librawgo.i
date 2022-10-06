%module librawgo
%{
#define LIBRAW_LIBRARY_BUILD
/* Put headers and other declarations here */
#include "libraw/libraw.h"
#include "libraw/libraw_alloc.h"
#include "libraw/libraw_const.h"
#include "libraw/libraw_datastream.h"
#include "libraw/libraw_internal.h"
#include "libraw/libraw_types.h"
#include "libraw/libraw_version.h"
%}

%include "libraw/libraw.h"
%include "libraw/libraw_alloc.h"
%include "libraw/libraw_const.h"
%include "libraw/libraw_datastream.h"
%include "libraw/libraw_internal.h"
%include "libraw/libraw_types.h"
%include "libraw/libraw_version.h"


