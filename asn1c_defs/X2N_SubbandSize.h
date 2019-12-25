/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_X2N_SubbandSize_H_
#define	_X2N_SubbandSize_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2N_SubbandSize {
	X2N_SubbandSize_size2	= 0,
	X2N_SubbandSize_size3	= 1,
	X2N_SubbandSize_size4	= 2,
	X2N_SubbandSize_size6	= 3,
	X2N_SubbandSize_size8	= 4
	/*
	 * Enumeration is extensible
	 */
} e_X2N_SubbandSize;

/* X2N_SubbandSize */
typedef long	 X2N_SubbandSize_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2N_SubbandSize_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2N_SubbandSize;
extern const asn_INTEGER_specifics_t asn_SPC_SubbandSize_specs_1;
asn_struct_free_f SubbandSize_free;
asn_struct_print_f SubbandSize_print;
asn_constr_check_f SubbandSize_constraint;
ber_type_decoder_f SubbandSize_decode_ber;
der_type_encoder_f SubbandSize_encode_der;
xer_type_decoder_f SubbandSize_decode_xer;
xer_type_encoder_f SubbandSize_encode_xer;
per_type_decoder_f SubbandSize_decode_uper;
per_type_encoder_f SubbandSize_encode_uper;
per_type_decoder_f SubbandSize_decode_aper;
per_type_encoder_f SubbandSize_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2N_SubbandSize_H_ */
#include <asn_internal.h>