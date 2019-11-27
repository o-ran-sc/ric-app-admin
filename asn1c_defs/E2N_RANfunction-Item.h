/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/e2ap-v031-subset.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_E2N_RANfunction_Item_H_
#define	_E2N_RANfunction_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E2N_RANfunctionID.h"
#include "E2N_RANfunctionDefinition.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E2N_RANfunction-Item */
typedef struct E2N_RANfunction_Item {
	E2N_RANfunctionID_t	 ranFunctionID;
	E2N_RANfunctionDefinition_t	 ranFunctionDefinition;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2N_RANfunction_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2N_RANfunction_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _E2N_RANfunction_Item_H_ */
#include <asn_internal.h>