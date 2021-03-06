/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_X2N_M1ReportingTrigger_H_
#define	_X2N_M1ReportingTrigger_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2N_M1ReportingTrigger {
	X2N_M1ReportingTrigger_periodic	= 0,
	X2N_M1ReportingTrigger_a2eventtriggered	= 1,
	/*
	 * Enumeration is extensible
	 */
	X2N_M1ReportingTrigger_a2eventtriggered_periodic	= 2
} e_X2N_M1ReportingTrigger;

/* X2N_M1ReportingTrigger */
typedef long	 X2N_M1ReportingTrigger_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2N_M1ReportingTrigger_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2N_M1ReportingTrigger;
extern const asn_INTEGER_specifics_t asn_SPC_M1ReportingTrigger_specs_1;
asn_struct_free_f M1ReportingTrigger_free;
asn_struct_print_f M1ReportingTrigger_print;
asn_constr_check_f M1ReportingTrigger_constraint;
ber_type_decoder_f M1ReportingTrigger_decode_ber;
der_type_encoder_f M1ReportingTrigger_encode_der;
xer_type_decoder_f M1ReportingTrigger_decode_xer;
xer_type_encoder_f M1ReportingTrigger_encode_xer;
per_type_decoder_f M1ReportingTrigger_decode_uper;
per_type_encoder_f M1ReportingTrigger_encode_uper;
per_type_decoder_f M1ReportingTrigger_decode_aper;
per_type_encoder_f M1ReportingTrigger_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2N_M1ReportingTrigger_H_ */
#include <asn_internal.h>
