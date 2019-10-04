/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_COUNTvaluePDCP_SNlength18_H_
#define	_COUNTvaluePDCP_SNlength18_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDCP-SNlength18.h"
#include "HFNforPDCP-SNlength18.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* COUNTvaluePDCP-SNlength18 */
typedef struct COUNTvaluePDCP_SNlength18 {
	PDCP_SNlength18_t	 pDCP_SNlength18;
	HFNforPDCP_SNlength18_t	 hFNforPDCP_SNlength18;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} COUNTvaluePDCP_SNlength18_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_COUNTvaluePDCP_SNlength18;

#ifdef __cplusplus
}
#endif

#endif	/* _COUNTvaluePDCP_SNlength18_H_ */
#include <asn_internal.h>
