/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_X2N_CellAssistanceInformation_H_
#define	_X2N_CellAssistanceInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2N_CellAssistanceInformation_PR {
	X2N_CellAssistanceInformation_PR_NOTHING,	/* No components present */
	X2N_CellAssistanceInformation_PR_limited_list,
	X2N_CellAssistanceInformation_PR_full_list
	/* Extensions may appear below */
	
} X2N_CellAssistanceInformation_PR;
typedef enum X2N_CellAssistanceInformation__full_list {
	X2N_CellAssistanceInformation__full_list_allServedNRcells	= 0
	/*
	 * Enumeration is extensible
	 */
} e_X2N_CellAssistanceInformation__full_list;

/* Forward declarations */
struct X2N_Limited_list;

/* X2N_CellAssistanceInformation */
typedef struct X2N_CellAssistanceInformation {
	X2N_CellAssistanceInformation_PR present;
	union X2N_CellAssistanceInformation_u {
		struct X2N_Limited_list	*limited_list;
		long	 full_list;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2N_CellAssistanceInformation_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_X2N_full_list_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_X2N_CellAssistanceInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _X2N_CellAssistanceInformation_H_ */
#include <asn_internal.h>
