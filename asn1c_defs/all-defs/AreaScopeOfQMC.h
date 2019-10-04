/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_AreaScopeOfQMC_H_
#define	_AreaScopeOfQMC_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AreaScopeOfQMC_PR {
	AreaScopeOfQMC_PR_NOTHING,	/* No components present */
	AreaScopeOfQMC_PR_cellBased,
	AreaScopeOfQMC_PR_tABased,
	AreaScopeOfQMC_PR_tAIBased,
	AreaScopeOfQMC_PR_pLMNAreaBased
	/* Extensions may appear below */
	
} AreaScopeOfQMC_PR;

/* Forward declarations */
struct CellBasedQMC;
struct TABasedQMC;
struct TAIBasedQMC;
struct PLMNAreaBasedQMC;

/* AreaScopeOfQMC */
typedef struct AreaScopeOfQMC {
	AreaScopeOfQMC_PR present;
	union AreaScopeOfQMC_u {
		struct CellBasedQMC	*cellBased;
		struct TABasedQMC	*tABased;
		struct TAIBasedQMC	*tAIBased;
		struct PLMNAreaBasedQMC	*pLMNAreaBased;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AreaScopeOfQMC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AreaScopeOfQMC;
extern asn_CHOICE_specifics_t asn_SPC_AreaScopeOfQMC_specs_1;
extern asn_TYPE_member_t asn_MBR_AreaScopeOfQMC_1[4];
extern asn_per_constraints_t asn_PER_type_AreaScopeOfQMC_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _AreaScopeOfQMC_H_ */
#include <asn_internal.h>
