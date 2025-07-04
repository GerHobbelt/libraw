/* -*- C++ -*-
 * Copyright 2019-2024 LibRaw LLC (info@libraw.org)
 *
 LibRaw is free software; you can redistribute it and/or modify
 it under the terms of the one of two licenses as you choose:

1. GNU LESSER GENERAL PUBLIC LICENSE version 2.1
   (See file LICENSE.LGPL provided in LibRaw distribution archive for details).

2. COMMON DEVELOPMENT AND DISTRIBUTION LICENSE (CDDL) Version 1.0
   (See file LICENSE.CDDL provided in LibRaw distribution archive for details).

 */

#include "../../internal/libraw_cxx_defs.h"
// clang-format off
// Supported cameras:
static const char *static_camera_list[] = {
	"Adobe Digital Negative (DNG)",
	"AgfaPhoto DC-833m",
	"Alcatel 5035D",
	"Apple iPad Pro",
	"Apple iPhone SE",
	"Apple iPhone 6s",
	"Apple iPhone 6 plus",
	"Apple iPhone 7",
	"Apple iPhone 7 plus",
	"Apple iPhone 8",
	"Apple iPhone 8 plus",
	"Apple iPhone X",
	"Apple iPhone 12 Pro",
	"Apple iPhone 12 Pro Max",
	"Apple iPhone 13",
	"Apple iPhone 14",
	"Apple QuickTake 100",
	"Apple QuickTake 150",
	"Apple QuickTake 200",
	"ASUS ZenPhone4",
	"ASUS ZenPhone6",
	"AutelRobotics XB015",
	"AutelRobotics XT705 (EVO II)",
	"AutelRobotics XL720 (EVO Lite+)",
	"AVT F-080C",
	"AVT F-145C",
	"AVT F-201C",
	"AVT F-510C",
	"AVT F-810C",
	"Baumer TXG14",
	"BlackMagic Cinema Camera",
	"BlackMagic Micro Cinema Camera",
	"BlackMagic Pocket Cinema Camera",
	"BlackMagic Production Camera 4k",
	"BlackMagic URSA",
	"BlackMagic URSA Mini 4k",
	"BlackMagic URSA Mini 4.6k",
	"BlackMagic URSA Mini Pro 4.6k",
	"BQ Aquarius U",
	"Canon PowerShot 600",
	"Canon PowerShot A5",
	"Canon PowerShot A5 Zoom",
	"Canon PowerShot A50",
	"Canon PowerShot A410 (CHDK hack)",
	"Canon PowerShot A460 (CHDK hack)",
	"Canon PowerShot A470 (CHDK hack)",
	"Canon PowerShot A480 (CHDK hack)",
	"Canon PowerShot A530 (CHDK hack)",
	"Canon PowerShot A540 (CHDK hack)",
	"Canon PowerShot A550 (CHDK hack)",
	"Canon PowerShot A560 (CHDK hack)",
	"Canon PowerShot A570 IS (CHDK hack)",
	"Canon PowerShot A590 IS (CHDK hack)",
	"Canon PowerShot A610 (CHDK hack)",
	"Canon PowerShot A620 (CHDK hack)",
	"Canon PowerShot A630 (CHDK hack)",
	"Canon PowerShot A640 (CHDK hack)",
	"Canon PowerShot A650 IS (CHDK hack)",
	"Canon PowerShot A710 IS (CHDK hack)",
	"Canon PowerShot A720 IS (CHDK hack)",
	"Canon PowerShot A3300 IS (CHDK hack)",
	"Canon PowerShot D10 (CHDK hack)",
	"Canon PowerShot ELPH 130 IS / IXUS 140 / IXY 110F (CHDK hack)",
	"Canon PowerShot ELPH 160 / IXUS 160 (CHDK hack)",
	"Canon PowerShot Pro70",
	"Canon PowerShot Pro90 IS",
	"Canon PowerShot Pro1",
	"Canon PowerShot G1",
	"Canon PowerShot G1 X",
	"Canon PowerShot G1 X Mark II",
	"Canon PowerShot G1 X Mark III",
	"Canon PowerShot G2",
	"Canon PowerShot G3",
	"Canon PowerShot G3 X",
	"Canon PowerShot G5",
	"Canon PowerShot G5 X",
	"Canon PowerShot G5 X Mark II",
	"Canon PowerShot G6",
	"Canon PowerShot G7 (CHDK hack)",
	"Canon PowerShot G7 X",
	"Canon PowerShot G7 X Mark II",
	"Canon PowerShot G7 X Mark III",
	"Canon PowerShot G9",
	"Canon PowerShot G9 X",
	"Canon PowerShot G9 X Mark II",
	"Canon PowerShot G10",
	"Canon PowerShot G11",
	"Canon PowerShot G12",
	"Canon PowerShot G15",
	"Canon PowerShot G16",
	"Canon PowerShot S2 IS (CHDK hack)",
	"Canon PowerShot S3 IS (CHDK hack)",
	"Canon PowerShot S5 IS (CHDK hack)",
	"Canon PowerShot SD300 / IXUS 40 / IXY Digital 50 (CHDK hack)",
	"Canon PowerShot SD750 / IXUS 75 / IXY Digital 90 (CHDK hack)",
	"Canon PowerShot SD900 / Digital IXUS 900 Ti / IXY Digital 1000 (CHDK hack)",
	"Canon PowerShot SD950 IS / Digital IXUS 960 IS / IXY Digital 2000 IS (CHDK hack)",
	"Canon PowerShot SD1200 IS / Digital IXUS 95 IS / IXY Digital 110 IS (CHDK hack)",
	"Canon PowerShot S30",
	"Canon PowerShot S40",
	"Canon PowerShot S45",
	"Canon PowerShot S50",
	"Canon PowerShot S60",
	"Canon PowerShot S70",
	"Canon PowerShot S90",
	"Canon PowerShot S95",
	"Canon PowerShot S100",
	"Canon PowerShot S110",
	"Canon PowerShot S120",
	"Canon PowerShot SX1 IS",
	"Canon PowerShot SX40 HS (CHDK hack, CR2)",
	"Canon PowerShot SX50 HS",
	"Canon PowerShot SX60 HS",
	"Canon PowerShot SX70 HS",
	"Canon PowerShot SX100 IS (CHDK hack)",
	"Canon PowerShot SX110 IS (CHDK hack)",
	"Canon PowerShot SX120 IS (CHDK hack)",
	"Canon PowerShot SX130 IS (CHDK hack)",
	"Canon PowerShot SX160 IS (CHDK hack)",
	"Canon PowerShot SX220 HS (CHDK hack)",
	"Canon PowerShot SX510 HS (CHDK hack)",
	"Canon PowerShot SX710 HS (CHDK hack)",
	"Canon PowerShot SX10 IS (CHDK hack)",
	"Canon PowerShot SX20 IS (CHDK hack)",
	"Canon PowerShot SX30 IS (CHDK hack)",
	"Canon EOS R",
	"Canon EOS Ra",
	"Canon EOS RP",
	"Canon EOS R3",
	"Canon EOS R5",
	"Canon EOS R5 Mark II",
	"Canon EOS R6",
	"Canon EOS R6 Mark II",
	"Canon EOS R7",
	"Canon EOS R8",
	"Canon EOS R10",
	"Canon EOS R50",
	"Canon EOS R100",
	"Canon EOS D30",
	"Canon EOS D60",
	"Canon EOS 5DS",
	"Canon EOS 5DS R",
	"Canon EOS 5D",
	"Canon EOS 5D Mark II",
	"Canon EOS 5D Mark III",
	"Canon EOS 5D Mark IV",
	"Canon EOS 6D",
	"Canon EOS 6D Mark II",
	"Canon EOS 7D",
	"Canon EOS 7D Mark II",
	"Canon EOS 10D",
	"Canon EOS 20D",
	"Canon EOS 20Da",
	"Canon EOS 30D",
	"Canon EOS 40D",
	"Canon EOS 50D",
	"Canon EOS 60D",
	"Canon EOS 60Da",
	"Canon EOS 70D",
	"Canon EOS 77D / 9000D",
	"Canon EOS 80D",
	"Canon EOS 90D",
	"Canon EOS 100D / Rebel SL1 / Kiss X7",
	"Canon EOS 200D / Rebel SL2 / Kiss X9",
	"Canon EOS 250D / 200D II / Rebel SL3 / Kiss X10",
	"Canon EOS 300D / Digital Rebel / Kiss Digital",
	"Canon EOS 350D / Digital Rebel XT / Kiss Digital N",
	"Canon EOS 400D / Digital Rebel XTi / Kiss Digital X",
	"Canon EOS 450D / Digital Rebel XSi / Kiss X2",
	"Canon EOS 500D / Rebel T1i / Kiss X3",
	"Canon EOS 550D / Rebel T2i / Kiss X4",
	"Canon EOS 600D / Rebel T3i / Kiss X5",
	"Canon EOS 650D / Rebel T4i / Kiss X6i",
	"Canon EOS 700D / Rebel T5i / Kiss X7i",
	"Canon EOS 750D / Rebel T6i / Kiss X8i",
	"Canon EOS 760D / Rebel T6S / 8000D",
	"Canon EOS 800D / Rebel T7i / Kiss X9i",
	"Canon EOS 850D / Rebel T8i / Kiss X10i",
	"Canon EOS 1000D / Digital Rebel XS / Kiss F",
	"Canon EOS 1100D / Rebel T3 / Kiss X50",
	"Canon EOS 1200D / Kiss X70 / REBEL T5 / Hi",
	"Canon EOS 1300D / Rebel T6 / Kiss X80",
	"Canon EOS 1500D / 2000D / Rebel T7 / Kiss X90",
	"Canon EOS 3000D / 4000D / Rebel T100",
	"Canon EOS D2000",
	"Canon EOS M",
	"Canon EOS M2",
	"Canon EOS M3",
	"Canon EOS M5",
	"Canon EOS M6",
	"Canon EOS M6 Mark II",
	"Canon EOS M10",
	"Canon EOS M50 / Kiss M",
	"Canon EOS M50 Mark II",
	"Canon EOS M100",
	"Canon EOS M200",
	"Canon EOS-1D C",
	"Canon EOS-1D X",
	"Canon EOS-1D X Mark II",
	"Canon EOS-1D X Mark III",
	"Canon EOS-1D",
	"Canon EOS-1D Mark II",
	"Canon EOS-1D Mark II N",
	"Canon EOS-1D Mark III",
	"Canon EOS-1D Mark IV",
	"Canon EOS-1Ds",
	"Canon EOS-1Ds Mark II",
	"Canon EOS-1Ds Mark III",
	"Casio QV-2000UX (secret menu hack)",
	"Casio QV-3000EX (secret menu hack)",
	"Casio QV-3500EX (secret menu hack)",
	"Casio QV-4000 (secret menu hack)",
	"Casio QV-5700 (secret menu hack)",
	"Casio QV-R41",
	"Casio QV-R51",
	"Casio QV-R61",
	"Casio EX-F1",
	"Casio EX-FC300S",
	"Casio EX-FC400S",
	"Casio EX-FH20",
	"Casio EX-FH25",
	"Casio EX-FH100",
	"Casio EX-S20 / M20",
	"Casio EX-S100",
	"Casio EX-Z4",
	"Casio EX-Z50",
	"Casio EX-Z500",
	"Casio EX-Z55",
	"Casio EX-Z60",
	"Casio EX-Z75",
	"Casio EX-Z750",
	"Casio EX-Z8",
	"Casio EX-Z850",
	"Casio EX-Z1050",
	"Casio EX-ZR100",
	"Casio EX-Z1080",
	"Casio EX-ZR700",
	"Casio EX-ZR710",
	"Casio EX-ZR750",
	"Casio EX-ZR800",
	"Casio EX-ZR850",
	"Casio EX-ZR1000",
	"Casio EX-ZR1100",
	"Casio EX-ZR1200",
	"Casio EX-ZR1300",
	"Casio EX-ZR1500",
	"Casio EX-ZR3000",
	"Casio EX-ZR3100",
	"Casio EX-ZR3200",
	"Casio EX-ZR3500",
	"Casio EX-ZR3600",
	"Casio EX-ZR3700",
	"Casio EX-ZR4000 / 5000",
	"Casio EX-ZR4100 / 5100",
	"Casio EX-100",
	"Casio EX-100F",
	"Casio EX-100PRO",
	"Casio EX-10",
	"Casio EX-P505 (secret menu hack)",
	"Casio EX-P600 (secret menu hack)",
	"Casio EX-P700 (secret menu hack)",
	"CLAUSS pix500",
	"Contax N Digital",
	"Creative PC-CAM 600",
	"Digital Bolex D16",
	"Digital Bolex D16M",
	"DJI 4384x3288",
	"DJI Inspire 3",
	"DJI Mavic Air",
	"DJI Mavic Air 2",
	"DJI Mavic Air 2S",
	"DJI Mavic Air 3",
	"DJI Mavic Mini 2",
	"DJI Mavic Mini 3",
	"DJI Mavic Mini 3 Pro",
	"DJI Mavic 2 Pro",
	"DJI Mavic 3",
	"DJI Mavic 3 Classic",
	"DJI Mavic 3 Pro",
	"DJI Osmo Action",
	"DJI Pocket",
	"DJI Phantom4 Pro/Pro+",
	"DJI Zenmuse X5",
	"DJI Zenmuse X5R",
	"DXO One",
	"Epson R-D1",
	"Epson R-D1s",
	"Epson R-D1x",
	"Eyedeas E1",
	"Foculus 531C",
	"FujiFilm DBP for GX680 / DX-2000",
	"FujiFilm E550",
	"FujiFilm E900",
	"FujiFilm F500EXR / F505EXR",
	"FujiFilm F550EXR",
	"FujiFilm F600EXR / F605EXR",
	"FujiFilm F700",
	"FujiFilm F710",
	"FujiFilm F770EXR / F775EXR",
	"FujiFilm F800EXR",
	"FujiFilm F810",
	"FujiFilm F900EXR",
	"FujiFilm S2Pro",
	"FujiFilm S3Pro",
	"FujiFilm S5Pro",
	"FujiFilm S20Pro",
	"FujiFilm S1",
	"FujiFilm S100FS",
	"FujiFilm S5000",
	"FujiFilm S5100 / S5500",
	"FujiFilm S5200 / S5600",
	"FujiFilm S6000fd / S6500fd",
	"FujiFilm S7000",
	"FujiFilm S9000 / S9500",
	"FujiFilm S9100 / S9600",
	"FujiFilm S200EXR / S205EXR",
	"FujiFilm SL1000",
	"FujiFilm HS10/HS11",
	"FujiFilm HS20EXR / HS22EXR",
	"FujiFilm HS30EXR / HS33EXR / HS35EXR",
	"FujiFilm HS50EXR",
	"FujiFilm GFX 50S",
	"FujiFilm GFX 50S II",
	"FujiFilm GFX 50R",
	"FujiFilm GFX 100",
	"FujiFilm GFX 100 II",
	"FujiFilm GFX 100S",
	"FujiFilm X-Pro1",
	"FujiFilm X-Pro2",
	"FujiFilm X-Pro3",
	"FujiFilm X-S1",
	"FujiFilm X-S20",
	"FujiFilm XQ1",
	"FujiFilm XQ2",
	"FujiFilm X100",
	"FujiFilm X100F",
	"FujiFilm X100S",
	"FujiFilm X100T",
	"FujiFilm X100V",
	"FujiFilm X10",
	"FujiFilm X20",
	"FujiFilm X30",
	"FujiFilm X70",
	"FujiFilm X-A1",
	"FujiFilm X-A2",
	"FujiFilm X-A3",
	"FujiFilm X-A5",
	"FujiFilm X-A7",
	"FujiFilm X-A10",
	"FujiFilm X-A20",
	"FujiFilm X-E1",
	"FujiFilm X-E2",
	"FujiFilm X-E2S",
	"FujiFilm X-E3",
	"FujiFilm X-E4",
	"FujiFilm X-M1",
	"FujiFilm XF1",
	"FujiFilm XF10",
	"FujiFilm X-H1",
	"FujiFilm X-H2",
	"FujiFilm X-H2S",
	"FujiFilm X-T1",
	"FujiFilm X-S10",
	"FujiFilm X-T1 Graphite Silver",
	"FujiFilm X-T2",
	"FujiFilm X-T3",
	"FujiFilm X-T4",
	"FujiFilm X-T5",
	"FujiFilm X-T10",
	"FujiFilm X-T20",
	"FujiFilm X-T30",
	"FujiFilm X-T30 II",
	"FujiFilm X-T100",
	"FujiFilm X-T200",
	"FujiFilm IS-1",
	"Gione E7",
	"GITUP GIT2",
	"GITUP GIT2P",
	"GITUP G3 DUO (16:9 mode only)",
	"Google Pixel",
	"Google Pixel XL",
	"Google Pixel 3a",
	"Google Pixel 4 XL",
	"Google Pixel 4a (5G)",
	"Google Pixel 5",
	"Google Pixel 7a",
#ifdef  USE_GPRSDK
	"GoPro Fusion",
	"GoPro HERO5",
	"GoPro HERO6",
	"GoPro HERO7",
	"GoPro HERO8",
	"GoPro HERO9",
	"GoPro HERO10",
	"GoPro HERO11",
	"GoPro HERO12",
#endif
	"Hasselblad H2D-22",
	"Hasselblad H2D-39",
	"Hasselblad H3DII-22",
	"Hasselblad H3DII-31",
	"Hasselblad H3DII-39",
	"Hasselblad H3DII-50",
	"Hasselblad H3D-22",
	"Hasselblad H3D-31",
	"Hasselblad H3D-39",
	"Hasselblad H4D-60",
	"Hasselblad H4D-50",
	"Hasselblad H4D-40",
	"Hasselblad H4D-31",
	"Hasselblad H5D-60",
	"Hasselblad H5D-50",
	"Hasselblad H5D-50c",
	"Hasselblad H5D-40",
	"Hasselblad H6D-100c",
	"Hasselblad A6D-100c", // Aerial camera
	"Hasselblad CFV",
	"Hasselblad CFV-50",
	"Hasselblad CFV II 50C",
	"Hasselblad CFH",
	"Hasselblad CF-22",
	"Hasselblad CF-31",
	"Hasselblad CF-39",
	"Hasselblad V96C",
	"Hasselblad L1D-20c (DJI Mavic 2 Pro)",
	"Hasselblad Lusso",
	"Hasselblad Lunar",
	"Hasselblad True Zoom",
	"Hasselblad Stellar",
	"Hasselblad Stellar II",
	"Hasselblad HV",
	"Hasselblad X1D",
	"Hasselblad X1D II 50C",
	"Hasselblad X2D 100C",
	"HTC UltraPixel",
	"HTC MyTouch 4G",
	"HTC One (A9)",
	"HTC One (M9)",
	"HTC 10",
	"HTC U12",
	"Huawei P8 Lite (PRA-LX1)",
	"Huawei P9 (EVA-L09/AL00)",
	"Huawei P10 (VTR-L09)",
	"Huawei P10+ (VKY-L09)",
	"Huawei P10 Lite (WAS-LX1A)",
	"Huawei P20 (EML-L09)",
	"Huawei P20 Lite (ANE-LX1)",
	"Huawei P20 Pro (CLT-L29/L09)",
	"Huawei P30 Pro (VOG-L29)",
	"Huawei Honor6a",
	"Huawei Honor7a pro",
	"Huawei Honor8 (FRD-L09)",
	"Huawei Honor9",
	"Huawei Honor10",
	"Huawei Honor20",
	"Huawei Honor View 10 (BKL-L09)",
	"Huawei Honor View 20 (PCT-L29)",
	"Huawei Honor 20 Pro (YAL-L41)",
	"Huawei Mate8 (NXT-L29)",
	"Huawei Mate10 (BLA-L29)",
	"Huawei Mate20 Pro (LYA-L29)",
	"Huawei Mate20 Lite (SNE-LX1)",
	"Imacon Ixpress 96, 96C",
	"Imacon Ixpress 384, 384C (single shot only)",
	"Imacon Ixpress 132C",
	"Imacon Ixpress 528C (single shot only)",
	"ISG 2020x1520",
	"Ikonoskop A-Cam dII Panchromatic",
	"Ikonoskop A-Cam dII",
	"Kandao QooCam 8K",
	"Kinefinity KineMINI",
	"Kinefinity KineRAW Mini",
	"Kinefinity KineRAW S35",
	"Kodak DC20",
	"Kodak DC25",
	"Kodak DC40",
	"Kodak DC50",
	"Kodak DC120",
	"Kodak DCS200",
	"Kodak DCS315C",
	"Kodak DCS330C",
	"Kodak DCS420",
	"Kodak DCS460",
	"Kodak DCS460M",
	"Kodak DCS520C",
	"Kodak DCS560C",
	"Kodak DCS620C",
	"Kodak DCS620X",
	"Kodak DCS660C",
	"Kodak DCS660M",
	"Kodak DCS720X",
	"Kodak DCS760C",
	"Kodak DCS760M",
	"Kodak EOSDCS1",
	"Kodak EOSDCS3",
	"Kodak NC2000",
	"Kodak ProBack",
	"Kodak PB645C",
	"Kodak PB645H",
	"Kodak PB645M",
	"Kodak DCS Pro 14n",
	"Kodak DCS Pro 14nx",
	"Kodak DCS Pro SLR/c",
	"Kodak DCS Pro SLR/n",
	"Kodak C330",
	"Kodak C603",
	"Kodak P850",
	"Kodak P880",
	"Kodak PIXPRO AZ901",
	"Kodak PIXPRO S-1",
	"Kodak Z980",
	"Kodak Z981",
	"Kodak Z990",
	"Kodak Z1015",
	"Kodak KAI-0340",
	"Konica KD-400Z",
	"Konica KD-510Z",
	"Leaf AFi 5",
	"Leaf AFi 6",
	"Leaf AFi 7",
	"Leaf AFi-II 6",
	"Leaf AFi-II 7",
	"Leaf AFi-II 10",
	"Leaf AFi-II 10R",
	"Leaf Aptus-II 5",
	"Leaf Aptus-II 6",
	"Leaf Aptus-II 7",
	"Leaf Aptus-II 8",
	"Leaf Aptus-II 10",
	"Leaf Aptus-II 12",
	"Leaf Aptus-II 12R",
	"Leaf Aptus 17",
	"Leaf Aptus 22",
	"Leaf Aptus 54S",
	"Leaf Aptus 65",
	"Leaf Aptus 65S",
	"Leaf Aptus 75",
	"Leaf Aptus 75S",
	"Leaf Cantare",
	"Leaf Cantare XY",
	"Leaf CatchLight",
	"Leaf CMost",
	"Leaf Credo 40",
	"Leaf Credo 50",
	"Leaf Credo 60",
	"Leaf Credo 80",
	"Leaf DCB-II",
	"Leaf Valeo 6",
	"Leaf Valeo 11",
	"Leaf Valeo 17",
	"Leaf Valeo 17wi",
	"Leaf Valeo 22",
	"Leaf Valeo 22wi",
	"Leaf Volare",
	"Lenovo a820",
	"Leica C (Typ 112)",
	"Leica CL",
	"Leica C-Lux / CAM-DC25",
	"Leica Digilux 2",
	"Leica Digilux 3",
	"Leica Digital-Modul-R",
	"Leica D-LUX2",
	"Leica D-LUX3",
	"Leica D-LUX4",
	"Leica D-LUX5",
	"Leica D-LUX6",
	"Leica D-LUX7",
	"Leica D-Lux (Typ 109)",
	"Leica M8",
	"Leica M8.2",
	"Leica M9",
	"Leica M10",
	"Leica M10-D",
	"Leica M10-P",
	"Leica M10-R",
	"Leica M10 Monochrom",
	"Leica M11",
	"Leica M11 Monochrom",
	"Leica M (Typ 240)",
	"Leica M (Typ 262)",
	"Leica Monochrom (Typ 240)",
	"Leica Monochrom (Typ 246)",
	"Leica M-D (Typ 262)",
	"Leica M-E",
	"Leica M-P",
	"Leica R8",
	"Leica Q (Typ 116)",
	"Leica Q-P",
	"Leica Q2",
	"Leica Q2 Monochrom",
	"Leica Q3",
	"Leica S",
	"Leica S2",
	"Leica S3",
	"Leica S (Typ 007)",
	"Leica SL (Typ 601)",
	"Leica SL2",
	"Leica SL2-S",
	"Leica T (Typ 701)",
	"Leica TL",
	"Leica TL2",
	"Leica X1",
	"Leica X (Typ 113)",
	"Leica X2",
	"Leica X-E (Typ 102)",
	"Leica X-U (Typ 113)",
	"Leica V-LUX1",
	"Leica V-LUX2",
	"Leica V-LUX3",
	"Leica V-LUX4",
	"Leica V-LUX5",
	"Leica V-Lux (Typ 114)",
	"Leica X VARIO (Typ 107)",
	"LG G3",
	"LG G4",
	"LG G5 (H850)",
	"LG G6",
	"LG V20 (F800K)",
	"LG V20 (H910)",
	"LG VS995",
	"Logitech Fotoman Pixtura",
	"Mamiya ZD",
	"Matrix 4608x3288",
	"Meizy MX4",
	"Micron 2010",
	"Minolta RD175 / Agfa ActionCam",
	"Minolta DiMAGE 5",
	"Minolta DiMAGE 7",
	"Minolta DiMAGE 7i",
	"Minolta DiMAGE 7Hi",
	"Minolta DiMAGE A1",
	"Minolta DiMAGE A2",
	"Minolta DiMAGE A200",
	"Minolta DiMAGE G400",
	"Minolta DiMAGE G500",
	"Minolta DiMAGE G530",
	"Minolta DiMAGE G600",
	"Minolta DiMAGE Z2",
	"Minolta Alpha/Dynax/Maxxum 5D",
	"Minolta Alpha/Dynax/Maxxum 7D",
	"Motorola PIXL",
	"Motorola Moto G (5S)",
	"Motorola Moto G7 Play",
	"Nikon D1",
	"Nikon D1H",
	"Nikon D1X",
	"Nikon D2H",
	"Nikon D2Hs",
	"Nikon D2X",
	"Nikon D2Xs",
	"Nikon D3",
	"Nikon D3s",
	"Nikon D3X",
	"Nikon D4",
	"Nikon D4s",
	"Nikon D40",
	"Nikon D40X",
	"Nikon D5",
	"Nikon D50",
	"Nikon D6",
	"Nikon D60",
	"Nikon D70",
	"Nikon D70s",
	"Nikon D80",
	"Nikon D90",
	"Nikon D100",
	"Nikon D200",
	"Nikon D300",
	"Nikon D300s",
	"Nikon D500",
	"Nikon D600",
	"Nikon D610",
	"Nikon D700",
	"Nikon D750",
	"Nikon D780",
	"Nikon D800",
	"Nikon D800E",
	"Nikon D810",
	"Nikon D810A",
	"Nikon D850",
	"Nikon D3000",
	"Nikon D3100",
	"Nikon D3200",
	"Nikon D3300",
	"Nikon D3400",
	"Nikon D3500",
	"Nikon D5000",
	"Nikon D5100",
	"Nikon D5200",
	"Nikon D5300",
	"Nikon D5500",
	"Nikon D5600",
	"Nikon D7000",
	"Nikon D7100",
	"Nikon D7200",
	"Nikon D7500",
	"Nikon Df",
	"Nikon Z 5",
	"Nikon Z 6",
	"Nikon Z 6 II",
	"Nikon Z 7",
	"Nikon Z 7 II",
	"Nikon Z 8 (HE/HE* formats are not supported yet)",
	"Nikon Z 9 (HE/HE* formats are not supported yet)",
	"Nikon Z 30",
	"Nikon Z 50",
	"Nikon Z fc",
	"Nikon 1 AW1",
	"Nikon 1 J1",
	"Nikon 1 J2",
	"Nikon 1 J3",
	"Nikon 1 J4",
	"Nikon 1 J5",
	"Nikon 1 S1",
	"Nikon 1 S2",
	"Nikon 1 V1",
	"Nikon 1 V2",
	"Nikon 1 V3",
	"Nikon Coolpix 700 (\"DIAG RAW\" hack)",
	"Nikon Coolpix 800 (\"DIAG RAW\" hack)",
	"Nikon Coolpix 880 (\"DIAG RAW\" hack)",
	"Nikon Coolpix 900 (\"DIAG RAW\" hack)",
	"Nikon Coolpix 950 (\"DIAG RAW\" hack)",
	"Nikon Coolpix 990 (\"DIAG RAW\" hack)",
	"Nikon Coolpix 995 (\"DIAG RAW\" hack)",
	"Nikon Coolpix 2100 (\"DIAG RAW\" hack)",
	"Nikon Coolpix 2500 (\"DIAG RAW\" hack)",
	"Nikon Coolpix 3200 (\"DIAG RAW\" hack)",
	"Nikon Coolpix 3700 (\"DIAG RAW\" hack)",
	"Nikon Coolpix 4300 (\"DIAG RAW\" hack)",
	"Nikon Coolpix 4500 (\"DIAG RAW\" hack)",
	"Nikon Coolpix 5000",
	"Nikon Coolpix 5400",
	"Nikon Coolpix 5700",
	"Nikon Coolpix 8400",
	"Nikon Coolpix 8700",
	"Nikon Coolpix 8800",
	"Nikon Coolpix A",
	"Nikon Coolpix A1000",
	"Nikon Coolpix B700",
	"Nikon Coolpix P330",
	"Nikon Coolpix P340",
	"Nikon Coolpix P950",
	"Nikon Coolpix P6000",
	"Nikon Coolpix P1000",
	"Nikon Coolpix P7000",
	"Nikon Coolpix P7100",
	"Nikon Coolpix P7700",
	"Nikon Coolpix P7800",
	"Nikon Coolpix S6 (\"DIAG RAW\" hack)",
	"Nikon Coolscan NEF",
	"Nokia 7 Plus",
	"Nokia 8.3 5G",
	"Nokia 9",
	"Nokia N95",
	"Nokia X2",
	"Nokia 1200x1600",
	"Nokia Lumia 930",
	"Nokia Lumia 950 XL",
	"Nokia Lumia 1020",
	"Nokia Lumia 1520",
	"Olympus AIR A01",
	"Olympus C-3030Z",
	"Olympus C-5050Z",
	"Olympus C-5060WZ",
	"Olympus C-7070WZ",
	"Olympus C-70Z / C-7000Z",
	"Olympus C-740UZ",
	"Olympus C-770UZ",
	"Olympus C-8080WZ",
	"Olympus X200 / D-560Z / C-350Z",
	"Olympus E-1",
	"Olympus E-3",
	"Olympus E-5",
	"Olympus E-10",
	"Olympus E-20 / E-20N / E-20P",
	"Olympus E-30",
	"Olympus E-300",
	"Olympus E-330",
	"Olympus E-400",
	"Olympus E-410",
	"Olympus E-420",
	"Olympus E-450",
	"Olympus E-500",
	"Olympus E-510",
	"Olympus E-520",
	"Olympus E-600",
	"Olympus E-620",
	"Olympus E-P1",
	"Olympus E-P2",
	"Olympus E-P3",
	"Olympus E-P5",
	"Olympus E-P7",
	"Olympus E-PL1",
	"Olympus E-PL1s",
	"Olympus E-PL2",
	"Olympus E-PL3",
	"Olympus E-PL5",
	"Olympus E-PL6",
	"Olympus E-PL7",
	"Olympus E-PL8",
	"Olympus E-PL9",
	"Olympus E-PL10",
	"Olympus E-PM1",
	"Olympus E-PM2",
	"Olympus E-M1",
	"Olympus E-M1 Mark II",
	"Olympus E-M1 Mark III",
	"Olympus E-M1X",
	"Olympus E-M10",
	"Olympus E-M10 Mark II",
	"Olympus E-M10 Mark III",
	"Olympus E-M10 Mark IV",
	"Olympus E-M5",
	"Olympus E-M5 Mark II",
	"Olympus E-M5 Mark III",
	"Olympus Pen-F",
	"Olympus SP-310",
	"Olympus SP-320",
	"Olympus SP-350",
	"Olympus SP-500UZ",
	"Olympus SP-510UZ",
	"Olympus SP-550UZ",
	"Olympus SP-560UZ",
	"Olympus SP-565UZ",
	"Olympus SP-570UZ",
	"Olympus Stylus 1",
	"Olympus Stylus 1s",
	"Olympus SH-2",
	"Olympus SH-3",
	"Olympus TG-4",
	"Olympus TG-5",
	"Olympus TG-6",
	"Olympus XZ-1",
	"Olympus XZ-2",
	"Olympus XZ-10",
	"OM Digital Solutions OM-1",
	"OM Digital Solutions OM-5",
	"OmniVision 4688",
	"OmniVision OV5647",
	"OmniVision OV5648",
	"OmniVision OV8850",
	"OmniVision 13860",
	"OnePlus 6 (A6003)",
	"OnePlus 6T",
	"OnePlus 7 Pro (GM1913)",
	"OnePlus 8 Pro (IN2023)",
	"OnePlus One",
	"OnePlus A3303",
	"OnePlus A5000",
	"Panasonic DMC-CM1",
	"Panasonic DMC-FZ8",
	"Panasonic DMC-FZ18",
	"Panasonic DMC-FZ28",
	"Panasonic DMC-FZ30",
	"Panasonic DMC-FZ35 / FZ38",
	"Panasonic DMC-FZ40 / FZ42 / FZ45",
	"Panasonic DMC-FZ50",
	"Panasonic DMC-FZ70 / FZ72",
	"Panasonic DC-FZ80 / FZ81 / FZ82 / FZ83 / FZ85",
	"Panasonic DMC-FZ100",
	"Panasonic DMC-FZ150",
	"Panasonic DMC-FZ200",
	"Panasonic DMC-FZ300 / FZ330",
	"Panasonic DMC-FZ1000",
	"Panasonic DC-FZ1000 II / FZ1000M2 / DC-FZ10002",
	"Panasonic DMC-FZ2000 / FZ2500 / FZH1",
	"Panasonic DMC-FX150 / FX180",
	"Panasonic DMC-G1",
	"Panasonic DMC-G10",
	"Panasonic DMC-G2",
	"Panasonic DMC-G3",
	"Panasonic DMC-G5",
	"Panasonic DMC-G6",
	"Panasonic DMC-G7 / G70",
	"Panasonic DMC-G8 / G80 / G81 / G85",
	"Panasonic DC-G9",
	"Panasonic DC-G9 Mark II",
	"Panasonic DC-G90 / G95 / G91 / G99",
	"Panasonic DC-G100 / G110",
	"Panasonic DMC-GF1",
	"Panasonic DMC-GF2",
	"Panasonic DMC-GF3",
	"Panasonic DMC-GF5",
	"Panasonic DMC-GF6",
	"Panasonic DMC-GF7",
	"Panasonic DC-GF10 / GF90",
	"Panasonic DMC-GH1",
	"Panasonic DMC-GH2",
	"Panasonic DMC-GH3",
	"Panasonic DMC-GH4",
	"Panasonic AG-GH4",
	"Panasonic DC-GH5",
	"Panasonic DC-GH5S",
	"Panasonic DC-GH5 Mark II",
	"Panasonic DC-GH6",
	"Panasonic DMC-GM1",
	"Panasonic DMC-GM1s",
	"Panasonic DMC-GM5",
	"Panasonic DMC-GX1",
	"Panasonic DMC-GX7",
	"Panasonic DMC-GX8",
	"Panasonic DC-GX9 / GX7mkIII",
	"Panasonic DMC-GX80 / GX85, DMC-GX7mkII",
	"Panasonic DC-GX800 / GX850, DC-GF9",
	"Panasonic DMC-L1",
	"Panasonic DMC-L10",
	"Panasonic DMC-LC1",
	"Panasonic DMC-LF1",
	"Panasonic DMC-LX1",
	"Panasonic DMC-LX2",
	"Panasonic DMC-LX3",
	"Panasonic DMC-LX5",
	"Panasonic DMC-LX7",
	"Panasonic DMC-LX9 / LX10 / LX15",
	"Panasonic DMC-LX100",
	"Panasonic DC-LX100M2",
	"Panasonic DC-S1",
	"Panasonic DC-S1H",
	"Panasonic DC-S1R",
	"Panasonic DC-S5",
	"Panasonic DC-S5 MkII",
	"Panasonic DC-S9",
	"Panasonic DMC-ZS40, DMC-TZ60 / TZ61",
	"Panasonic DMC-ZS50, DMC-TZ70 / TZ71",
	"Panasonic DMC-ZS60, DMC-TZ80 / TZ81 / TZ82 / TZ85",
	"Panasonic DC-ZS70, DC-TZ90 / TZ91 / TZ92 / TZ93",
	"Panasonic DC-ZS80, DC-TZ95 / TZ96 / TZ97",
	"Panasonic DMC-ZS100 / ZS110, DMC-TZ100 / TZ101 / TZ110, DMC-TX1",
	"Panasonic DC-ZS200 / ZS220, DC-TZ200 / TZ202 / TZ220, DC-TX2",
	"Panasonic DC-ZS200D / ZS220D, DC-TZ200D / TZ202D / TZ220D",
	"PARROT Anafi",
	"PARROT Bebop 2",
	"PARROT Bebop Drone",
	"Pentax *ist D",
	"Pentax *ist DL",
	"Pentax *ist DL2",
	"Pentax *ist DS",
	"Pentax *ist DS2",
	"Pentax K10D",
	"Pentax K20D",
	"Pentax K100D",
	"Pentax K100D Super",
	"Pentax K110D",
	"Pentax K200D",
	"Pentax K2000/K-m",
	"Pentax KP",
	"Pentax K-x",
	"Pentax K-r",
	"Pentax K-01",
	"Pentax K-1",
	"Pentax K-1 Mark II",
	"Pentax K-3",
	"Pentax K-3 Mark II",
	"Pentax K-3 Mark III",
//	"Pentax K-3 Mark III Monochrome",
	"Pentax K-30",
	"Pentax K-5",
	"Pentax K-5 II",
	"Pentax K-5 IIs",
	"Pentax K-50",
	"Pentax K-500",
	"Pentax K-7",
	"Pentax K-70",
	"Pentax K-S1",
	"Pentax K-S2",
	"Pentax MX-1",
	"Pentax Q",
	"Pentax Q7",
	"Pentax Q10",
	"Pentax QS-1",
	"Pentax Optio S (secret menu or hack)",
	"Pentax Optio S4 (secret menu or hack)",
	"Pentax Optio 33WR (secret menu or hack)",
	"Pentax Optio 750Z (secret menu or hack)",
	"Pentax 645D",
	"Pentax 645Z",
	"PhaseOne IQ140",
	"PhaseOne IQ150",
	"PhaseOne IQ160",
	"PhaseOne IQ180",
	"PhaseOne IQ180 IR",
	"PhaseOne IQ250",
	"PhaseOne IQ260",
	"PhaseOne IQ260 Achromatic",
	"PhaseOne IQ280",
	"PhaseOne IQ3 50MP",
	"PhaseOne IQ3 60MP",
	"PhaseOne IQ3 80MP",
	"PhaseOne IQ3 100MP",
	"PhaseOne IQ3 100MP Trichromatic",
	"PhaseOne IQ4 150MP",
	"PhaseOne LightPhase",
	"PhaseOne Achromatic+",
	"PhaseOne H 10",
	"PhaseOne H 20",
	"PhaseOne H 25",
	"PhaseOne P 20",
	"PhaseOne P 20+",
	"PhaseOne P 21",
	"PhaseOne P 25",
	"PhaseOne P 25+",
	"PhaseOne P 30",
	"PhaseOne P 30+",
	"PhaseOne P 40+",
	"PhaseOne P 45",
	"PhaseOne P 45+",
	"PhaseOne P 65",
	"PhaseOne P 65+",
	"Photron BC2-HD",
	"Pixelink A782",
#ifdef USE_X3FTOOLS
	"Polaroid x530",
#endif
	"RaspberryPi Camera",
	"RaspberryPi Camera V2",
#ifdef USE_6BY9RPI
	"RaspberryPi HQ Camera",
#endif
	"Ricoh GR",
	"Realme 3 Pro",
	"Ricoh GR II",
	"Ricoh GR III",
	"Ricoh GR IIIx",
	"Ricoh GR Digital",
	"Ricoh GR Digital II",
	"Ricoh GR Digital III",
	"Ricoh GR Digital IV",
	"Ricoh Caplio GX100",
	"Ricoh Caplio GX200",
	"Ricoh GXR Mount A12",
	"Ricoh GXR GR Lens A12 50mm F2.5 Macro",
	"Ricoh GXR GR Lens A12 28mm F2.5",
	"Ricoh GXR Ricoh Lens A16 24-85mm F3.5-5.5",
	"Ricoh GXR Ricoh Lens S10 24-72mm F2.5-4.4 VC",
	"Ricoh GXR Ricoh Lens P10 28-300 mm F3.5-5.6 VC",
	"Rollei d530flex",
	"RoverShot 3320af",
	"Samsung EX1 / TL500",
	"Samsung EX2F",
	"Samsung GX-1L",
	"Samsung GX-1S",
	"Samsung GX10",
	"Samsung GX20",
	"Samsung Galaxy Nexus",
	"Samsung Galaxy Note 9",
	"Samsung Galaxy NX (EK-GN120)",
	"Samsung Galaxy S3",
	"Samsung Galaxy S6 (SM-G920F)",
	"Samsung Galaxy S7",
	"Samsung Galaxy S7 Edge",
	"Samsung Galaxy S8 (SM-G950U)",
	"Samsung Galaxy S9 (SM-G960F)",
	"Samsung Galaxy S9+ (SM-G965U / 965F)",
	"Samsung Galaxy S10 (SM-G973F)",
	"Samsung Galaxy S10+ (SM-G975U)",
	"Samsung Galaxy S22 Ultra (SM-S908B)",
	"Samsung NX1",
	"Samsung NX5",
	"Samsung NX10",
	"Samsung NX11",
	"Samsung NX100",
	"Samsung NX1000",
	"Samsung NX1100",
	"Samsung NX20",
	"Samsung NX200",
	"Samsung NX210",
	"Samsung NX2000",
	"Samsung NX30",
	"Samsung NX300",
	"Samsung NX300M",
	"Samsung NX3000",
	"Samsung NX500",
	"Samsung NX mini / NXF1",
	"Samsung Pro815",
	"Samsung WB550 / WB560 / HZ15W",
	"Samsung WB2000 / TL350",
	"Samsung WB5000 / HZ25W",
	"Samsung S85 (hacked)",
	"Samsung S850 (hacked)",
	"Sarnoff 4096x5440",
	"Seitz 6x17",
	"Seitz Roundshot D3",
	"Seitz Roundshot D2X",
	"Seitz Roundshot D2Xs",
	"Skydio 2+",
	"Sigma fp",
#ifdef USE_X3FTOOLS
	"Sigma SD9 (raw decode only)",
	"Sigma SD10 (raw decode only)",
	"Sigma SD14 (raw decode only)",
	"Sigma SD15 (raw decode only)",
	"Sigma SD1",
	"Sigma SD1 Merrill",
	"Sigma DP1",
	"Sigma DP1 Merrill",
	"Sigma DP1S",
	"Sigma DP1X",
	"Sigma DP2",
	"Sigma DP2 Merrill",
	"Sigma DP2S",
	"Sigma DP2X",
	"Sigma DP3 Merrill",
	"Sigma dp0 Quattro",
	"Sigma dp1 Quattro",
	"Sigma dp2 Quattro",
	"Sigma dp3 Quattro",
	"Sigma sd Quattro",
	"Sigma sd Quattro H",
#else
		"Sigma dp0 Quattro (DNG only)",
		"Sigma dp1 Quattro (DNG only)",
		"Sigma dp2 Quattro (DNG only)",
		"Sigma dp3 Quattro (DNG only)",
		"Sigma sd Quattro (DNG only)",
		"Sigma sd Quattro H (DNG only)",
#endif
	"Sinar eMotion 22",
	"Sinar eMotion 54",
	"Sinar eSpirit 65",
	"Sinar eMotion 75",
	"Sinar eVolution 75",
	"Sinar 3072x2048 (Sinarback 23)",
	"Sinar 4080x4080 (Sinarback 44)",
	"Sinar 4080x5440",
	"Sinar STI format",
	"Sinar Sinarback 54",
	"SMaL Ultra-Pocket 3",
	"SMaL Ultra-Pocket 4",
	"SMaL Ultra-Pocket 5",
	"Sony ILCE-1 (A1)",
	"Sony ILCE-7 (A7)",
	"Sony ILCE-7M2 (A7 II)",
	"Sony ILCE-7M3 (A7 III)",
	"Sony ILCE-7M4 (A7 IV)",
	"Sony ILCE-7C (A7C)",
	"Sony ILCE-7CR (A7CR)",
	"Sony ILCE-7CM2 (A7C II)",
	"Sony ILCE-7R (A7R)",
	"Sony ILCE-7RM2 (A7R II)",
	"Sony ILCE-7RM3 (A7R III)",
	"Sony ILCE-7RM3A (A7R IIIA)",
	"Sony ILCE-7RM4 (A7R IV)",
	"Sony ILCE-7RM4A (A7R IVA)",
	"Sony ILCE-7RM5 (A7R V)",
	"Sony ILCE-7S (A7S)",
	"Sony ILCE-7SM2 (A7S II)",
	"Sony ILCE-7SM3 (A7S III)",
	"Sony ILCE-9 (A9)",
	"Sony ILCE-9M2 (A9 II)",
	"Sony ILCA-68 (A68)",
	"Sony ILCA-77M2 (A77-II)",
	"Sony ILCA-99M2 (A99-II)",
	"Sony ILCE-3000 / 3500",
	"Sony ILCE-5000",
	"Sony ILCE-5100",
	"Sony ILCE-6000",
	"Sony ILCE-6100",
	"Sony ILCE-6300",
	"Sony ILCE-6400",
	"Sony ILCE-6500",
	"Sony ILCE-6600",
	"Sony ILCE-6700",
	"Sony ILCE-QX1",
	"Sony DSC-F828",
	"Sony DSC-HX95",
	"Sony DSC-HX99",
	"Sony DSC-R1",
	"Sony DSC-RX0",
	"Sony DSC-RX0 II",
	"Sony DSC-RX1",
	"Sony DSC-RX1R",
	"Sony DSC-RX1R II",
	"Sony DSC-RX10",
	"Sony DSC-RX10 II",
	"Sony DSC-RX10 III",
	"Sony DSC-RX10 IV",
	"Sony DSC-RX100",
	"Sony DSC-RX100 II",
	"Sony DSC-RX100 III",
	"Sony DSC-RX100 IV",
	"Sony DSC-RX100 V",
	"Sony DSC-RX100 VA",
	"Sony DSC-RX100 VI",
	"Sony DSC-RX100 VII",
	"Sony DSC-V3",
	"Sony DSLR-A100",
	"Sony DSLR-A200",
	"Sony DSLR-A230",
	"Sony DSLR-A290",
	"Sony DSLR-A300",
	"Sony DSLR-A330",
	"Sony DSLR-A350",
	"Sony DSLR-A380 / A390",
	"Sony DSLR-A450",
	"Sony DSLR-A500",
	"Sony DSLR-A550",
	"Sony DSLR-A560",
	"Sony DSLR-A580",
	"Sony DSLR-A700",
	"Sony DSLR-A850",
	"Sony DSLR-A900",
	"Sony NEX-3",
	"Sony NEX-3N",
	"Sony NEX-5",
	"Sony NEX-5N",
	"Sony NEX-5R",
	"Sony NEX-5T",
	"Sony NEX-6",
	"Sony NEX-7",
	"Sony NEX-C3",
	"Sony NEX-F3",
	"Sony NEX-VG20",
	"Sony NEX-VG30",
	"Sony NEX-VG900",
	"Sony SLT-A33",
	"Sony SLT-A35",
	"Sony SLT-A37",
	"Sony SLT-A55(V)",
	"Sony SLT-A57",
	"Sony SLT-A58",
	"Sony SLT-A65(V)",
	"Sony SLT-A77(V)",
	"Sony SLT-A99(V)",
	"Sony XCD-SX910CR",
	"Sony IMX135-mipi 13mp",
	"Sony IMX135-QCOM",
	"Sony IMX072-mipi",
	"Sony IMX214",
	"Sony IMX219",
	"Sony IMX230",
	"Sony IMX298-mipi 16mp",
	"Sony IMX219-mipi 8mp",
	"Sony Xperia 5 II (XQ-AS52)",
	"Sony Xperia L",
	"Sony Xperia 1 III",
	"Sony Xperia 1 IV (XQ-CT54)",
	"Sony ZV-1 (DCZV1/B)",
	"Sony ZV-1M2",
	"Sony ZV-E1",
	"Sony ZV-E10",
	"STV680 VGA",
	"PtGrey GRAS-50S5C",
	"JaiPulnix BB-500CL",
	"JaiPulnix BB-500GE",
	"SVS SVS625CL",
	"Vivo X51 5G (V2006)",
	"Yi M1",
	"YUNEEC CGO3",
	"YUNEEC CGO3P",
	"YUNEEC CGO4",
	"Xiaomi 12S Ultra (2203121C)",
	"Xiaomi 13 Pro (2210132G)",
	"Xiaomi MI3",
	"Xiaomi MI 8",
	"Xiaomi MI 9 Lite",
	"Xiaomi MI MAX",
	"Xiaomi POCO M3",
	"Xiaomi RedMi Note3 Pro",
	"Xiaomi RedMi Note7",
	"Xiaomi RedMi Note 8T",
	"Xiaomi FIMI X8SE",
	"Xiaoyi YIAC3 (YI 4k)",
	"Zeiss ZX1",
	"Zenit M",
	NULL
};
// clang-format on

const char **LibRaw::cameraList() { return static_camera_list; }
int LibRaw::cameraCount()
{
  return (sizeof(static_camera_list) / sizeof(static_camera_list[0])) - 1;
}
