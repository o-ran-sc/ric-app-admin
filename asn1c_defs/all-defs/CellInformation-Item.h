/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_CellInformation_Item_H_
#define	_CellInformation_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ECGI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UL_InterferenceOverloadIndication;
struct UL_HighInterferenceIndicationInfo;
struct RelativeNarrowbandTxPower;
struct ProtocolExtensionContainer;

/* CellInformation-Item */
typedef struct CellInformation_Item {
	ECGI_t	 cell_ID;
	struct UL_InterferenceOverloadIndication	*ul_InterferenceOverloadIndication;	/* OPTIONAL */
	struct UL_HighInterferenceIndicationInfo	*ul_HighInterferenceIndicationInfo;	/* OPTIONAL */
	struct RelativeNarrowbandTxPower	*relativeNarrowbandTxPower;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellInformation_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellInformation_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _CellInformation_Item_H_ */
#include <asn_internal.h>
