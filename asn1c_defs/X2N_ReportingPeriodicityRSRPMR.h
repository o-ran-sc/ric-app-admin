/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_X2N_ReportingPeriodicityRSRPMR_H_
#define	_X2N_ReportingPeriodicityRSRPMR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2N_ReportingPeriodicityRSRPMR {
	X2N_ReportingPeriodicityRSRPMR_one_hundred_20_ms	= 0,
	X2N_ReportingPeriodicityRSRPMR_two_hundred_40_ms	= 1,
	X2N_ReportingPeriodicityRSRPMR_four_hundred_80_ms	= 2,
	X2N_ReportingPeriodicityRSRPMR_six_hundred_40_ms	= 3
	/*
	 * Enumeration is extensible
	 */
} e_X2N_ReportingPeriodicityRSRPMR;

/* X2N_ReportingPeriodicityRSRPMR */
typedef long	 X2N_ReportingPeriodicityRSRPMR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2N_ReportingPeriodicityRSRPMR;
asn_struct_free_f X2N_ReportingPeriodicityRSRPMR_free;
asn_struct_print_f X2N_ReportingPeriodicityRSRPMR_print;
asn_constr_check_f X2N_ReportingPeriodicityRSRPMR_constraint;
ber_type_decoder_f X2N_ReportingPeriodicityRSRPMR_decode_ber;
der_type_encoder_f X2N_ReportingPeriodicityRSRPMR_encode_der;
xer_type_decoder_f X2N_ReportingPeriodicityRSRPMR_decode_xer;
xer_type_encoder_f X2N_ReportingPeriodicityRSRPMR_encode_xer;
per_type_decoder_f X2N_ReportingPeriodicityRSRPMR_decode_uper;
per_type_encoder_f X2N_ReportingPeriodicityRSRPMR_encode_uper;
per_type_decoder_f X2N_ReportingPeriodicityRSRPMR_decode_aper;
per_type_encoder_f X2N_ReportingPeriodicityRSRPMR_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2N_ReportingPeriodicityRSRPMR_H_ */
#include <asn_internal.h>
