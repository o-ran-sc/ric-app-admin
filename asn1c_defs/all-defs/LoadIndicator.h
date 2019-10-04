/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_LoadIndicator_H_
#define	_LoadIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LoadIndicator {
	LoadIndicator_lowLoad	= 0,
	LoadIndicator_mediumLoad	= 1,
	LoadIndicator_highLoad	= 2,
	LoadIndicator_overLoad	= 3
	/*
	 * Enumeration is extensible
	 */
} e_LoadIndicator;

/* LoadIndicator */
typedef long	 LoadIndicator_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LoadIndicator_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LoadIndicator;
extern const asn_INTEGER_specifics_t asn_SPC_LoadIndicator_specs_1;
asn_struct_free_f LoadIndicator_free;
asn_struct_print_f LoadIndicator_print;
asn_constr_check_f LoadIndicator_constraint;
ber_type_decoder_f LoadIndicator_decode_ber;
der_type_encoder_f LoadIndicator_encode_der;
xer_type_decoder_f LoadIndicator_decode_xer;
xer_type_encoder_f LoadIndicator_encode_xer;
per_type_decoder_f LoadIndicator_decode_uper;
per_type_encoder_f LoadIndicator_encode_uper;
per_type_decoder_f LoadIndicator_decode_aper;
per_type_encoder_f LoadIndicator_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LoadIndicator_H_ */
#include <asn_internal.h>
