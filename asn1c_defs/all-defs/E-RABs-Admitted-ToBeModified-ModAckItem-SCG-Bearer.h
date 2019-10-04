/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_E_RABs_Admitted_ToBeModified_ModAckItem_SCG_Bearer_H_
#define	_E_RABs_Admitted_ToBeModified_ModAckItem_SCG_Bearer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E-RAB-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GTPtunnelEndpoint;
struct ProtocolExtensionContainer;

/* E-RABs-Admitted-ToBeModified-ModAckItem-SCG-Bearer */
typedef struct E_RABs_Admitted_ToBeModified_ModAckItem_SCG_Bearer {
	E_RAB_ID_t	 e_RAB_ID;
	struct GTPtunnelEndpoint	*s1_DL_GTPtunnelEndpoint;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_RABs_Admitted_ToBeModified_ModAckItem_SCG_Bearer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_RABs_Admitted_ToBeModified_ModAckItem_SCG_Bearer;
extern asn_SEQUENCE_specifics_t asn_SPC_E_RABs_Admitted_ToBeModified_ModAckItem_SCG_Bearer_specs_1;
extern asn_TYPE_member_t asn_MBR_E_RABs_Admitted_ToBeModified_ModAckItem_SCG_Bearer_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _E_RABs_Admitted_ToBeModified_ModAckItem_SCG_Bearer_H_ */
#include <asn_internal.h>
