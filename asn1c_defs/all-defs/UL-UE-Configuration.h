/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_UL_UE_Configuration_H_
#define	_UL_UE_Configuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_UE_Configuration {
	UL_UE_Configuration_no_data	= 0,
	UL_UE_Configuration_shared	= 1,
	UL_UE_Configuration_only	= 2
	/*
	 * Enumeration is extensible
	 */
} e_UL_UE_Configuration;

/* UL-UE-Configuration */
typedef long	 UL_UE_Configuration_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_UL_UE_Configuration_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_UL_UE_Configuration;
extern const asn_INTEGER_specifics_t asn_SPC_UL_UE_Configuration_specs_1;
asn_struct_free_f UL_UE_Configuration_free;
asn_struct_print_f UL_UE_Configuration_print;
asn_constr_check_f UL_UE_Configuration_constraint;
ber_type_decoder_f UL_UE_Configuration_decode_ber;
der_type_encoder_f UL_UE_Configuration_encode_der;
xer_type_decoder_f UL_UE_Configuration_decode_xer;
xer_type_encoder_f UL_UE_Configuration_encode_xer;
per_type_decoder_f UL_UE_Configuration_decode_uper;
per_type_encoder_f UL_UE_Configuration_encode_uper;
per_type_decoder_f UL_UE_Configuration_decode_aper;
per_type_encoder_f UL_UE_Configuration_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_UE_Configuration_H_ */
#include <asn_internal.h>
