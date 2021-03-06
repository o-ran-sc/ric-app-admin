/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_X2N_ReportIntervalMDT_H_
#define	_X2N_ReportIntervalMDT_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2N_ReportIntervalMDT {
	X2N_ReportIntervalMDT_ms120	= 0,
	X2N_ReportIntervalMDT_ms240	= 1,
	X2N_ReportIntervalMDT_ms480	= 2,
	X2N_ReportIntervalMDT_ms640	= 3,
	X2N_ReportIntervalMDT_ms1024	= 4,
	X2N_ReportIntervalMDT_ms2048	= 5,
	X2N_ReportIntervalMDT_ms5120	= 6,
	X2N_ReportIntervalMDT_ms10240	= 7,
	X2N_ReportIntervalMDT_min1	= 8,
	X2N_ReportIntervalMDT_min6	= 9,
	X2N_ReportIntervalMDT_min12	= 10,
	X2N_ReportIntervalMDT_min30	= 11,
	X2N_ReportIntervalMDT_min60	= 12
} e_X2N_ReportIntervalMDT;

/* X2N_ReportIntervalMDT */
typedef long	 X2N_ReportIntervalMDT_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2N_ReportIntervalMDT_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2N_ReportIntervalMDT;
extern const asn_INTEGER_specifics_t asn_SPC_ReportIntervalMDT_specs_1;
asn_struct_free_f ReportIntervalMDT_free;
asn_struct_print_f ReportIntervalMDT_print;
asn_constr_check_f ReportIntervalMDT_constraint;
ber_type_decoder_f ReportIntervalMDT_decode_ber;
der_type_encoder_f ReportIntervalMDT_encode_der;
xer_type_decoder_f ReportIntervalMDT_decode_xer;
xer_type_encoder_f ReportIntervalMDT_encode_xer;
per_type_decoder_f ReportIntervalMDT_decode_uper;
per_type_encoder_f ReportIntervalMDT_encode_uper;
per_type_decoder_f ReportIntervalMDT_decode_aper;
per_type_encoder_f ReportIntervalMDT_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2N_ReportIntervalMDT_H_ */
#include <asn_internal.h>
