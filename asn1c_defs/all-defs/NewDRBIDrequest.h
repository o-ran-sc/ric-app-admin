/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_NewDRBIDrequest_H_
#define	_NewDRBIDrequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NewDRBIDrequest {
	NewDRBIDrequest_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_NewDRBIDrequest;

/* NewDRBIDrequest */
typedef long	 NewDRBIDrequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NewDRBIDrequest;
asn_struct_free_f NewDRBIDrequest_free;
asn_struct_print_f NewDRBIDrequest_print;
asn_constr_check_f NewDRBIDrequest_constraint;
ber_type_decoder_f NewDRBIDrequest_decode_ber;
der_type_encoder_f NewDRBIDrequest_encode_der;
xer_type_decoder_f NewDRBIDrequest_decode_xer;
xer_type_encoder_f NewDRBIDrequest_encode_xer;
per_type_decoder_f NewDRBIDrequest_decode_uper;
per_type_encoder_f NewDRBIDrequest_encode_uper;
per_type_decoder_f NewDRBIDrequest_decode_aper;
per_type_encoder_f NewDRBIDrequest_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NewDRBIDrequest_H_ */
#include <asn_internal.h>
