/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_CoverageModification_Item_H_
#define	_CoverageModification_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ECGI.h"
#include <NativeInteger.h>
#include "CellDeploymentStatusIndicator.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellReplacingInfo;

/* CoverageModification-Item */
typedef struct CoverageModification_Item {
	ECGI_t	 eCGI;
	long	 coverageState;
	CellDeploymentStatusIndicator_t	*cellDeploymentStatusIndicator;	/* OPTIONAL */
	struct CellReplacingInfo	*cellReplacingInfo;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CoverageModification_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CoverageModification_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_CoverageModification_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_CoverageModification_Item_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _CoverageModification_Item_H_ */
#include <asn_internal.h>
