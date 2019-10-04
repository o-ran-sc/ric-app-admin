/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_E_RABs_ToBeReleased_SgNBChaConf_Item_H_
#define	_E_RABs_ToBeReleased_SgNBChaConf_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E-RAB-ID.h"
#include "EN-DC-ResourceConfiguration.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E_RABs_ToBeReleased_SgNBChaConf_Item__resource_configuration_PR {
	E_RABs_ToBeReleased_SgNBChaConf_Item__resource_configuration_PR_NOTHING,	/* No components present */
	E_RABs_ToBeReleased_SgNBChaConf_Item__resource_configuration_PR_sgNBPDCPpresent,
	E_RABs_ToBeReleased_SgNBChaConf_Item__resource_configuration_PR_sgNBPDCPnotpresent
	/* Extensions may appear below */
	
} E_RABs_ToBeReleased_SgNBChaConf_Item__resource_configuration_PR;

/* Forward declarations */
struct ProtocolExtensionContainer;
struct E_RABs_ToBeReleased_SgNBChaConf_Item_SgNBPDCPpresent;
struct E_RABs_ToBeReleased_SgNBChaConf_Item_SgNBPDCPnotpresent;

/* E-RABs-ToBeReleased-SgNBChaConf-Item */
typedef struct E_RABs_ToBeReleased_SgNBChaConf_Item {
	E_RAB_ID_t	 e_RAB_ID;
	EN_DC_ResourceConfiguration_t	 en_DC_ResourceConfiguration;
	struct E_RABs_ToBeReleased_SgNBChaConf_Item__resource_configuration {
		E_RABs_ToBeReleased_SgNBChaConf_Item__resource_configuration_PR present;
		union E_RABs_ToBeReleased_SgNBChaConf_Item__resource_configuration_u {
			struct E_RABs_ToBeReleased_SgNBChaConf_Item_SgNBPDCPpresent	*sgNBPDCPpresent;
			struct E_RABs_ToBeReleased_SgNBChaConf_Item_SgNBPDCPnotpresent	*sgNBPDCPnotpresent;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} resource_configuration;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_RABs_ToBeReleased_SgNBChaConf_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_RABs_ToBeReleased_SgNBChaConf_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _E_RABs_ToBeReleased_SgNBChaConf_Item_H_ */
#include <asn_internal.h>
