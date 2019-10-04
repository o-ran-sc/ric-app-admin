/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_ReportCharacteristics_H_
#define	_ReportCharacteristics_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ReportCharacteristics */
typedef BIT_STRING_t	 ReportCharacteristics_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ReportCharacteristics_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ReportCharacteristics;
asn_struct_free_f ReportCharacteristics_free;
asn_struct_print_f ReportCharacteristics_print;
asn_constr_check_f ReportCharacteristics_constraint;
ber_type_decoder_f ReportCharacteristics_decode_ber;
der_type_encoder_f ReportCharacteristics_encode_der;
xer_type_decoder_f ReportCharacteristics_decode_xer;
xer_type_encoder_f ReportCharacteristics_encode_xer;
per_type_decoder_f ReportCharacteristics_decode_uper;
per_type_encoder_f ReportCharacteristics_encode_uper;
per_type_decoder_f ReportCharacteristics_decode_aper;
per_type_encoder_f ReportCharacteristics_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ReportCharacteristics_H_ */
#include <asn_internal.h>
