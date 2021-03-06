/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-X2-IEs"
 * 	found in "../../asn_defs/asn1/e2sm-gNB-X2-release-1-v041.asn.txt"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_E2N_InterfaceDirection_H_
#define	_E2N_InterfaceDirection_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E2N_InterfaceDirection {
	E2N_InterfaceDirection_incoming	= 0,
	E2N_InterfaceDirection_outgoing	= 1
	/*
	 * Enumeration is extensible
	 */
} e_E2N_InterfaceDirection;

/* E2N_InterfaceDirection */
typedef long	 E2N_InterfaceDirection_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_E2N_InterfaceDirection_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_E2N_InterfaceDirection;
extern const asn_INTEGER_specifics_t asn_SPC_InterfaceDirection_specs_1;
asn_struct_free_f InterfaceDirection_free;
asn_struct_print_f InterfaceDirection_print;
asn_constr_check_f InterfaceDirection_constraint;
ber_type_decoder_f InterfaceDirection_decode_ber;
der_type_encoder_f InterfaceDirection_encode_der;
xer_type_decoder_f InterfaceDirection_decode_xer;
xer_type_encoder_f InterfaceDirection_encode_xer;
per_type_decoder_f InterfaceDirection_decode_uper;
per_type_encoder_f InterfaceDirection_encode_uper;
per_type_decoder_f InterfaceDirection_decode_aper;
per_type_encoder_f InterfaceDirection_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _E2N_InterfaceDirection_H_ */
#include <asn_internal.h>
