/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.2
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

// source: libraw.i

package libraw

/*
#define intgo swig_intgo
typedef void *swig_voidp;

#include <stdint.h>


typedef long long intgo;
typedef unsigned long long uintgo;



typedef struct { char *p; intgo n; } _gostring_;
typedef struct { void* array; intgo len; intgo cap; } _goslice_;


typedef long long swig_type_1;
typedef _gostring_ swig_type_2;
typedef _gostring_ swig_type_3;
typedef _gostring_ swig_type_4;
typedef _gostring_ swig_type_5;
typedef long long swig_type_6;
typedef _gostring_ swig_type_7;
typedef _gostring_ swig_type_8;
typedef _gostring_ swig_type_9;
typedef _gostring_ swig_type_10;
extern void _wrap_Swig_free_libraw_30a0215858b2f737(uintptr_t arg1);
extern uintptr_t _wrap_Swig_malloc_libraw_30a0215858b2f737(swig_intgo arg1);
extern swig_type_1 _wrap_LIBRAW_USE_STREAMS_DATASTREAM_MAXSIZE_libraw_30a0215858b2f737(void);
extern swig_type_2 _wrap_libraw_strerror_libraw_30a0215858b2f737(swig_intgo arg1);
extern swig_type_3 _wrap_libraw_strprogress_libraw_30a0215858b2f737(swig_intgo arg1);
extern uintptr_t _wrap_libraw_init_libraw_30a0215858b2f737(swig_intgo arg1);
extern swig_intgo _wrap_libraw_open_file_libraw_30a0215858b2f737(uintptr_t arg1, swig_type_4 arg2);
extern swig_intgo _wrap_libraw_open_file_ex_libraw_30a0215858b2f737(uintptr_t arg1, swig_type_5 arg2, uintptr_t arg3);
extern swig_intgo _wrap_libraw_open_buffer_libraw_30a0215858b2f737(uintptr_t arg1, uintptr_t arg2, swig_type_6 arg3);
extern swig_intgo _wrap_libraw_unpack_libraw_30a0215858b2f737(uintptr_t arg1);
extern swig_intgo _wrap_libraw_unpack_thumb_libraw_30a0215858b2f737(uintptr_t arg1);
extern void _wrap_libraw_recycle_datastream_libraw_30a0215858b2f737(uintptr_t arg1);
extern void _wrap_libraw_recycle_libraw_30a0215858b2f737(uintptr_t arg1);
extern void _wrap_libraw_close_libraw_30a0215858b2f737(uintptr_t arg1);
extern void _wrap_libraw_subtract_black_libraw_30a0215858b2f737(uintptr_t arg1);
extern swig_intgo _wrap_libraw_raw2image_libraw_30a0215858b2f737(uintptr_t arg1);
extern void _wrap_libraw_free_image_libraw_30a0215858b2f737(uintptr_t arg1);
extern swig_type_7 _wrap_libraw_version_libraw_30a0215858b2f737(void);
extern swig_intgo _wrap_libraw_versionNumber_libraw_30a0215858b2f737(void);
extern swig_voidp _wrap_libraw_cameraList_libraw_30a0215858b2f737(void);
extern swig_intgo _wrap_libraw_cameraCount_libraw_30a0215858b2f737(void);
extern void _wrap_libraw_set_memerror_handler_libraw_30a0215858b2f737(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3);
extern void _wrap_libraw_set_exifparser_handler_libraw_30a0215858b2f737(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3);
extern void _wrap_libraw_set_dataerror_handler_libraw_30a0215858b2f737(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3);
extern void _wrap_libraw_set_progress_handler_libraw_30a0215858b2f737(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3);
extern swig_type_8 _wrap_libraw_unpack_function_name_libraw_30a0215858b2f737(uintptr_t arg1);
extern swig_intgo _wrap_libraw_get_decoder_info_libraw_30a0215858b2f737(uintptr_t arg1, uintptr_t arg2);
extern swig_intgo _wrap_libraw_COLOR_libraw_30a0215858b2f737(uintptr_t arg1, swig_intgo arg2, swig_intgo arg3);
extern swig_intgo _wrap_libraw_capabilities_libraw_30a0215858b2f737(void);
extern swig_intgo _wrap_libraw_adjust_sizes_info_only_libraw_30a0215858b2f737(uintptr_t arg1);
extern swig_intgo _wrap_libraw_dcraw_ppm_tiff_writer_libraw_30a0215858b2f737(uintptr_t arg1, swig_type_9 arg2);
extern swig_intgo _wrap_libraw_dcraw_thumb_writer_libraw_30a0215858b2f737(uintptr_t arg1, swig_type_10 arg2);
extern swig_intgo _wrap_libraw_dcraw_process_libraw_30a0215858b2f737(uintptr_t arg1);
extern uintptr_t _wrap_libraw_dcraw_make_mem_image_libraw_30a0215858b2f737(uintptr_t arg1, swig_voidp arg2);
extern uintptr_t _wrap_libraw_dcraw_make_mem_thumb_libraw_30a0215858b2f737(uintptr_t arg1, swig_voidp arg2);
extern void _wrap_libraw_dcraw_clear_mem_libraw_30a0215858b2f737(uintptr_t arg1);
extern void _wrap_libraw_set_demosaic_libraw_30a0215858b2f737(uintptr_t arg1, swig_intgo arg2);
extern void _wrap_libraw_set_output_color_libraw_30a0215858b2f737(uintptr_t arg1, swig_intgo arg2);
extern void _wrap_libraw_set_user_mul_libraw_30a0215858b2f737(uintptr_t arg1, swig_intgo arg2, float arg3);
extern void _wrap_libraw_set_output_bps_libraw_30a0215858b2f737(uintptr_t arg1, swig_intgo arg2);
extern void _wrap_libraw_set_gamma_libraw_30a0215858b2f737(uintptr_t arg1, swig_intgo arg2, float arg3);
extern void _wrap_libraw_set_no_auto_bright_libraw_30a0215858b2f737(uintptr_t arg1, swig_intgo arg2);
extern void _wrap_libraw_set_bright_libraw_30a0215858b2f737(uintptr_t arg1, float arg2);
extern void _wrap_libraw_set_highlight_libraw_30a0215858b2f737(uintptr_t arg1, swig_intgo arg2);
extern void _wrap_libraw_set_fbdd_noiserd_libraw_30a0215858b2f737(uintptr_t arg1, swig_intgo arg2);
extern swig_intgo _wrap_libraw_get_raw_height_libraw_30a0215858b2f737(uintptr_t arg1);
extern swig_intgo _wrap_libraw_get_raw_width_libraw_30a0215858b2f737(uintptr_t arg1);
extern swig_intgo _wrap_libraw_get_iheight_libraw_30a0215858b2f737(uintptr_t arg1);
extern swig_intgo _wrap_libraw_get_iwidth_libraw_30a0215858b2f737(uintptr_t arg1);
extern float _wrap_libraw_get_cam_mul_libraw_30a0215858b2f737(uintptr_t arg1, swig_intgo arg2);
extern float _wrap_libraw_get_pre_mul_libraw_30a0215858b2f737(uintptr_t arg1, swig_intgo arg2);
extern float _wrap_libraw_get_rgb_cam_libraw_30a0215858b2f737(uintptr_t arg1, swig_intgo arg2, swig_intgo arg3);
extern swig_intgo _wrap_libraw_get_color_maximum_libraw_30a0215858b2f737(uintptr_t arg1);
extern void _wrap_libraw_set_output_tif_libraw_30a0215858b2f737(uintptr_t arg1, swig_intgo arg2);
extern uintptr_t _wrap_libraw_get_iparams_libraw_30a0215858b2f737(uintptr_t arg1);
extern uintptr_t _wrap_libraw_get_lensinfo_libraw_30a0215858b2f737(uintptr_t arg1);
extern uintptr_t _wrap_libraw_get_imgother_libraw_30a0215858b2f737(uintptr_t arg1);
#undef intgo
*/
import "C"

import "unsafe"
import _ "runtime/cgo"
import "sync"


type _ unsafe.Pointer



var Swig_escape_always_false bool
var Swig_escape_val interface{}


type _swig_fnptr *byte
type _swig_memberptr *byte


type _ sync.Mutex


type swig_gostring struct { p uintptr; n int }
func swigCopyString(s string) string {
  p := *(*swig_gostring)(unsafe.Pointer(&s))
  r := string((*[0x7fffffff]byte)(unsafe.Pointer(p.p))[:p.n])
  Swig_free(p.p)
  return r
}

func Swig_free(arg1 uintptr) {
	_swig_i_0 := arg1
	C._wrap_Swig_free_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0))
}

func Swig_malloc(arg1 int) (_swig_ret uintptr) {
	var swig_r uintptr
	_swig_i_0 := arg1
	swig_r = (uintptr)(C._wrap_Swig_malloc_libraw_30a0215858b2f737(C.swig_intgo(_swig_i_0)))
	return swig_r
}

func _swig_getLIBRAW_USE_STREAMS_DATASTREAM_MAXSIZE() (_swig_ret int64) {
	var swig_r int64
	swig_r = (int64)(C._wrap_LIBRAW_USE_STREAMS_DATASTREAM_MAXSIZE_libraw_30a0215858b2f737())
	return swig_r
}

var LIBRAW_USE_STREAMS_DATASTREAM_MAXSIZE int64 = _swig_getLIBRAW_USE_STREAMS_DATASTREAM_MAXSIZE()
func Libraw_strerror(arg1 int) (_swig_ret string) {
	var swig_r string
	_swig_i_0 := arg1
	swig_r_p := C._wrap_libraw_strerror_libraw_30a0215858b2f737(C.swig_intgo(_swig_i_0))
	swig_r = *(*string)(unsafe.Pointer(&swig_r_p))
	var swig_r_1 string
 swig_r_1 = swigCopyString(swig_r) 
	return swig_r_1
}

func Libraw_strprogress(arg1 LibRaw_progress) (_swig_ret string) {
	var swig_r string
	_swig_i_0 := arg1
	swig_r_p := C._wrap_libraw_strprogress_libraw_30a0215858b2f737(C.swig_intgo(_swig_i_0))
	swig_r = *(*string)(unsafe.Pointer(&swig_r_p))
	var swig_r_1 string
 swig_r_1 = swigCopyString(swig_r) 
	return swig_r_1
}

func Libraw_init(arg1 uint) (_swig_ret Libraw_data_t) {
	var swig_r Libraw_data_t
	_swig_i_0 := arg1
	swig_r = (Libraw_data_t)(SwigcptrLibraw_data_t(C._wrap_libraw_init_libraw_30a0215858b2f737(C.swig_intgo(_swig_i_0))))
	return swig_r
}

func Libraw_open_file(arg1 Libraw_data_t, arg2 string) (_swig_ret int) {
	var swig_r int
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	swig_r = (int)(C._wrap_libraw_open_file_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), *(*C.swig_type_4)(unsafe.Pointer(&_swig_i_1))))
	if Swig_escape_always_false {
		Swig_escape_val = arg2
	}
	return swig_r
}

func Libraw_open_file_ex(arg1 Libraw_data_t, arg2 string, arg3 INT64) (_swig_ret int) {
	var swig_r int
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	_swig_i_2 := arg3.Swigcptr()
	swig_r = (int)(C._wrap_libraw_open_file_ex_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), *(*C.swig_type_5)(unsafe.Pointer(&_swig_i_1)), C.uintptr_t(_swig_i_2)))
	if Swig_escape_always_false {
		Swig_escape_val = arg2
	}
	return swig_r
}

func Libraw_open_buffer(arg1 Libraw_data_t, arg2 uintptr, arg3 int64) (_swig_ret int) {
	var swig_r int
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	_swig_i_2 := arg3
	swig_r = (int)(C._wrap_libraw_open_buffer_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.uintptr_t(_swig_i_1), C.swig_type_6(_swig_i_2)))
	return swig_r
}

func Libraw_unpack(arg1 Libraw_data_t) (_swig_ret int) {
	var swig_r int
	_swig_i_0 := arg1.Swigcptr()
	swig_r = (int)(C._wrap_libraw_unpack_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0)))
	return swig_r
}

func Libraw_unpack_thumb(arg1 Libraw_data_t) (_swig_ret int) {
	var swig_r int
	_swig_i_0 := arg1.Swigcptr()
	swig_r = (int)(C._wrap_libraw_unpack_thumb_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0)))
	return swig_r
}

func Libraw_recycle_datastream(arg1 Libraw_data_t) {
	_swig_i_0 := arg1.Swigcptr()
	C._wrap_libraw_recycle_datastream_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0))
}

func Libraw_recycle(arg1 Libraw_data_t) {
	_swig_i_0 := arg1.Swigcptr()
	C._wrap_libraw_recycle_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0))
}

func Libraw_close(arg1 Libraw_data_t) {
	_swig_i_0 := arg1.Swigcptr()
	C._wrap_libraw_close_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0))
}

func Libraw_subtract_black(arg1 Libraw_data_t) {
	_swig_i_0 := arg1.Swigcptr()
	C._wrap_libraw_subtract_black_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0))
}

func Libraw_raw2image(arg1 Libraw_data_t) (_swig_ret int) {
	var swig_r int
	_swig_i_0 := arg1.Swigcptr()
	swig_r = (int)(C._wrap_libraw_raw2image_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0)))
	return swig_r
}

func Libraw_free_image(arg1 Libraw_data_t) {
	_swig_i_0 := arg1.Swigcptr()
	C._wrap_libraw_free_image_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0))
}

func Libraw_version() (_swig_ret string) {
	var swig_r string
	swig_r_p := C._wrap_libraw_version_libraw_30a0215858b2f737()
	swig_r = *(*string)(unsafe.Pointer(&swig_r_p))
	var swig_r_1 string
 swig_r_1 = swigCopyString(swig_r) 
	return swig_r_1
}

func Libraw_versionNumber() (_swig_ret int) {
	var swig_r int
	swig_r = (int)(C._wrap_libraw_versionNumber_libraw_30a0215858b2f737())
	return swig_r
}

func Libraw_cameraList() (_swig_ret *string) {
	var swig_r *string
	swig_r = (*string)(C._wrap_libraw_cameraList_libraw_30a0215858b2f737())
	return swig_r
}

func Libraw_cameraCount() (_swig_ret int) {
	var swig_r int
	swig_r = (int)(C._wrap_libraw_cameraCount_libraw_30a0215858b2f737())
	return swig_r
}

func Libraw_set_memerror_handler(arg1 Libraw_data_t, arg2 Memory_callback, arg3 uintptr) {
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2.Swigcptr()
	_swig_i_2 := arg3
	C._wrap_libraw_set_memerror_handler_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.uintptr_t(_swig_i_1), C.uintptr_t(_swig_i_2))
}

func Libraw_set_exifparser_handler(arg1 Libraw_data_t, arg2 Exif_parser_callback, arg3 uintptr) {
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2.Swigcptr()
	_swig_i_2 := arg3
	C._wrap_libraw_set_exifparser_handler_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.uintptr_t(_swig_i_1), C.uintptr_t(_swig_i_2))
}

func Libraw_set_dataerror_handler(arg1 Libraw_data_t, arg2 Data_callback, arg3 uintptr) {
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2.Swigcptr()
	_swig_i_2 := arg3
	C._wrap_libraw_set_dataerror_handler_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.uintptr_t(_swig_i_1), C.uintptr_t(_swig_i_2))
}

func Libraw_set_progress_handler(arg1 Libraw_data_t, arg2 Progress_callback, arg3 uintptr) {
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2.Swigcptr()
	_swig_i_2 := arg3
	C._wrap_libraw_set_progress_handler_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.uintptr_t(_swig_i_1), C.uintptr_t(_swig_i_2))
}

func Libraw_unpack_function_name(arg1 Libraw_data_t) (_swig_ret string) {
	var swig_r string
	_swig_i_0 := arg1.Swigcptr()
	swig_r_p := C._wrap_libraw_unpack_function_name_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0))
	swig_r = *(*string)(unsafe.Pointer(&swig_r_p))
	var swig_r_1 string
 swig_r_1 = swigCopyString(swig_r) 
	return swig_r_1
}

func Libraw_get_decoder_info(arg1 Libraw_data_t, arg2 Libraw_decoder_info_t) (_swig_ret int) {
	var swig_r int
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2.Swigcptr()
	swig_r = (int)(C._wrap_libraw_get_decoder_info_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.uintptr_t(_swig_i_1)))
	return swig_r
}

func Libraw_COLOR(arg1 Libraw_data_t, arg2 int, arg3 int) (_swig_ret int) {
	var swig_r int
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	_swig_i_2 := arg3
	swig_r = (int)(C._wrap_libraw_COLOR_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.swig_intgo(_swig_i_1), C.swig_intgo(_swig_i_2)))
	return swig_r
}

func Libraw_capabilities() (_swig_ret uint) {
	var swig_r uint
	swig_r = (uint)(C._wrap_libraw_capabilities_libraw_30a0215858b2f737())
	return swig_r
}

func Libraw_adjust_sizes_info_only(arg1 Libraw_data_t) (_swig_ret int) {
	var swig_r int
	_swig_i_0 := arg1.Swigcptr()
	swig_r = (int)(C._wrap_libraw_adjust_sizes_info_only_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0)))
	return swig_r
}

func Libraw_dcraw_ppm_tiff_writer(arg1 Libraw_data_t, arg2 string) (_swig_ret int) {
	var swig_r int
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	swig_r = (int)(C._wrap_libraw_dcraw_ppm_tiff_writer_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), *(*C.swig_type_9)(unsafe.Pointer(&_swig_i_1))))
	if Swig_escape_always_false {
		Swig_escape_val = arg2
	}
	return swig_r
}

func Libraw_dcraw_thumb_writer(arg1 Libraw_data_t, arg2 string) (_swig_ret int) {
	var swig_r int
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	swig_r = (int)(C._wrap_libraw_dcraw_thumb_writer_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), *(*C.swig_type_10)(unsafe.Pointer(&_swig_i_1))))
	if Swig_escape_always_false {
		Swig_escape_val = arg2
	}
	return swig_r
}

func Libraw_dcraw_process(arg1 Libraw_data_t) (_swig_ret int) {
	var swig_r int
	_swig_i_0 := arg1.Swigcptr()
	swig_r = (int)(C._wrap_libraw_dcraw_process_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0)))
	return swig_r
}

func Libraw_dcraw_make_mem_image(arg1 Libraw_data_t, arg2 *int) (_swig_ret Libraw_processed_image_t) {
	var swig_r Libraw_processed_image_t
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	swig_r = (Libraw_processed_image_t)(SwigcptrLibraw_processed_image_t(C._wrap_libraw_dcraw_make_mem_image_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.swig_voidp(_swig_i_1))))
	return swig_r
}

func Libraw_dcraw_make_mem_thumb(arg1 Libraw_data_t, arg2 *int) (_swig_ret Libraw_processed_image_t) {
	var swig_r Libraw_processed_image_t
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	swig_r = (Libraw_processed_image_t)(SwigcptrLibraw_processed_image_t(C._wrap_libraw_dcraw_make_mem_thumb_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.swig_voidp(_swig_i_1))))
	return swig_r
}

func Libraw_dcraw_clear_mem(arg1 Libraw_processed_image_t) {
	_swig_i_0 := arg1.Swigcptr()
	C._wrap_libraw_dcraw_clear_mem_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0))
}

func Libraw_set_demosaic(arg1 Libraw_data_t, arg2 int) {
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	C._wrap_libraw_set_demosaic_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.swig_intgo(_swig_i_1))
}

func Libraw_set_output_color(arg1 Libraw_data_t, arg2 int) {
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	C._wrap_libraw_set_output_color_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.swig_intgo(_swig_i_1))
}

func Libraw_set_user_mul(arg1 Libraw_data_t, arg2 int, arg3 float32) {
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	_swig_i_2 := arg3
	C._wrap_libraw_set_user_mul_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.swig_intgo(_swig_i_1), C.float(_swig_i_2))
}

func Libraw_set_output_bps(arg1 Libraw_data_t, arg2 int) {
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	C._wrap_libraw_set_output_bps_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.swig_intgo(_swig_i_1))
}

func Libraw_set_gamma(arg1 Libraw_data_t, arg2 int, arg3 float32) {
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	_swig_i_2 := arg3
	C._wrap_libraw_set_gamma_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.swig_intgo(_swig_i_1), C.float(_swig_i_2))
}

func Libraw_set_no_auto_bright(arg1 Libraw_data_t, arg2 int) {
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	C._wrap_libraw_set_no_auto_bright_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.swig_intgo(_swig_i_1))
}

func Libraw_set_bright(arg1 Libraw_data_t, arg2 float32) {
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	C._wrap_libraw_set_bright_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.float(_swig_i_1))
}

func Libraw_set_highlight(arg1 Libraw_data_t, arg2 int) {
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	C._wrap_libraw_set_highlight_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.swig_intgo(_swig_i_1))
}

func Libraw_set_fbdd_noiserd(arg1 Libraw_data_t, arg2 int) {
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	C._wrap_libraw_set_fbdd_noiserd_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.swig_intgo(_swig_i_1))
}

func Libraw_get_raw_height(arg1 Libraw_data_t) (_swig_ret int) {
	var swig_r int
	_swig_i_0 := arg1.Swigcptr()
	swig_r = (int)(C._wrap_libraw_get_raw_height_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0)))
	return swig_r
}

func Libraw_get_raw_width(arg1 Libraw_data_t) (_swig_ret int) {
	var swig_r int
	_swig_i_0 := arg1.Swigcptr()
	swig_r = (int)(C._wrap_libraw_get_raw_width_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0)))
	return swig_r
}

func Libraw_get_iheight(arg1 Libraw_data_t) (_swig_ret int) {
	var swig_r int
	_swig_i_0 := arg1.Swigcptr()
	swig_r = (int)(C._wrap_libraw_get_iheight_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0)))
	return swig_r
}

func Libraw_get_iwidth(arg1 Libraw_data_t) (_swig_ret int) {
	var swig_r int
	_swig_i_0 := arg1.Swigcptr()
	swig_r = (int)(C._wrap_libraw_get_iwidth_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0)))
	return swig_r
}

func Libraw_get_cam_mul(arg1 Libraw_data_t, arg2 int) (_swig_ret float32) {
	var swig_r float32
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	swig_r = (float32)(C._wrap_libraw_get_cam_mul_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.swig_intgo(_swig_i_1)))
	return swig_r
}

func Libraw_get_pre_mul(arg1 Libraw_data_t, arg2 int) (_swig_ret float32) {
	var swig_r float32
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	swig_r = (float32)(C._wrap_libraw_get_pre_mul_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.swig_intgo(_swig_i_1)))
	return swig_r
}

func Libraw_get_rgb_cam(arg1 Libraw_data_t, arg2 int, arg3 int) (_swig_ret float32) {
	var swig_r float32
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	_swig_i_2 := arg3
	swig_r = (float32)(C._wrap_libraw_get_rgb_cam_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.swig_intgo(_swig_i_1), C.swig_intgo(_swig_i_2)))
	return swig_r
}

func Libraw_get_color_maximum(arg1 Libraw_data_t) (_swig_ret int) {
	var swig_r int
	_swig_i_0 := arg1.Swigcptr()
	swig_r = (int)(C._wrap_libraw_get_color_maximum_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0)))
	return swig_r
}

func Libraw_set_output_tif(arg1 Libraw_data_t, arg2 int) {
	_swig_i_0 := arg1.Swigcptr()
	_swig_i_1 := arg2
	C._wrap_libraw_set_output_tif_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0), C.swig_intgo(_swig_i_1))
}

func Libraw_get_iparams(arg1 Libraw_data_t) (_swig_ret Libraw_iparams_t) {
	var swig_r Libraw_iparams_t
	_swig_i_0 := arg1.Swigcptr()
	swig_r = (Libraw_iparams_t)(SwigcptrLibraw_iparams_t(C._wrap_libraw_get_iparams_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0))))
	return swig_r
}

func Libraw_get_lensinfo(arg1 Libraw_data_t) (_swig_ret Libraw_lensinfo_t) {
	var swig_r Libraw_lensinfo_t
	_swig_i_0 := arg1.Swigcptr()
	swig_r = (Libraw_lensinfo_t)(SwigcptrLibraw_lensinfo_t(C._wrap_libraw_get_lensinfo_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0))))
	return swig_r
}

func Libraw_get_imgother(arg1 Libraw_data_t) (_swig_ret Libraw_imgother_t) {
	var swig_r Libraw_imgother_t
	_swig_i_0 := arg1.Swigcptr()
	swig_r = (Libraw_imgother_t)(SwigcptrLibraw_imgother_t(C._wrap_libraw_get_imgother_libraw_30a0215858b2f737(C.uintptr_t(_swig_i_0))))
	return swig_r
}


type LibRaw_progress int

type SwigcptrLibraw_imgother_t uintptr
type Libraw_imgother_t interface {
	Swigcptr() uintptr;
}
func (p SwigcptrLibraw_imgother_t) Swigcptr() uintptr {
	return uintptr(p)
}

type SwigcptrINT64 uintptr
type INT64 interface {
	Swigcptr() uintptr;
}
func (p SwigcptrINT64) Swigcptr() uintptr {
	return uintptr(p)
}

type SwigcptrLibraw_decoder_info_t uintptr
type Libraw_decoder_info_t interface {
	Swigcptr() uintptr;
}
func (p SwigcptrLibraw_decoder_info_t) Swigcptr() uintptr {
	return uintptr(p)
}

type SwigcptrLibraw_processed_image_t uintptr
type Libraw_processed_image_t interface {
	Swigcptr() uintptr;
}
func (p SwigcptrLibraw_processed_image_t) Swigcptr() uintptr {
	return uintptr(p)
}

type SwigcptrLibraw_lensinfo_t uintptr
type Libraw_lensinfo_t interface {
	Swigcptr() uintptr;
}
func (p SwigcptrLibraw_lensinfo_t) Swigcptr() uintptr {
	return uintptr(p)
}

type SwigcptrLibraw_data_t uintptr
type Libraw_data_t interface {
	Swigcptr() uintptr;
}
func (p SwigcptrLibraw_data_t) Swigcptr() uintptr {
	return uintptr(p)
}

type SwigcptrMemory_callback uintptr
type Memory_callback interface {
	Swigcptr() uintptr;
}
func (p SwigcptrMemory_callback) Swigcptr() uintptr {
	return uintptr(p)
}

type SwigcptrExif_parser_callback uintptr
type Exif_parser_callback interface {
	Swigcptr() uintptr;
}
func (p SwigcptrExif_parser_callback) Swigcptr() uintptr {
	return uintptr(p)
}

type SwigcptrData_callback uintptr
type Data_callback interface {
	Swigcptr() uintptr;
}
func (p SwigcptrData_callback) Swigcptr() uintptr {
	return uintptr(p)
}

type SwigcptrProgress_callback uintptr
type Progress_callback interface {
	Swigcptr() uintptr;
}
func (p SwigcptrProgress_callback) Swigcptr() uintptr {
	return uintptr(p)
}

type SwigcptrLibraw_iparams_t uintptr
type Libraw_iparams_t interface {
	Swigcptr() uintptr;
}
func (p SwigcptrLibraw_iparams_t) Swigcptr() uintptr {
	return uintptr(p)
}

