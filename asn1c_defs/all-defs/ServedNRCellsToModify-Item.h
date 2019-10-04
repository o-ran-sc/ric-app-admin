/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_ServedNRCellsToModify_Item_H_
#define	_ServedNRCellsToModify_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NRCGI.h"
#include "ServedNRCell-Information.h"
#include "DeactivationIndication.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NRNeighbour_Information;
struct ProtocolExtensionContainer;

/* ServedNRCellsToModify-Item */
typedef struct ServedNRCellsToModify_Item {
	NRCGI_t	 old_nrcgi;
	ServedNRCell_Information_t	 servedNRCellInformation;
	struct NRNeighbour_Information	*nrNeighbourInformation;	/* OPTIONAL */
	DeactivationIndication_t	*nrDeactivationIndication;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServedNRCellsToModify_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServedNRCellsToModify_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_ServedNRCellsToModify_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_ServedNRCellsToModify_Item_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _ServedNRCellsToModify_Item_H_ */
#include <asn_internal.h>
