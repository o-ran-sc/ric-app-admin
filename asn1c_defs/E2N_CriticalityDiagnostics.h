/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/X2AP-minimized.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_E2N_CriticalityDiagnostics_H_
#define	_E2N_CriticalityDiagnostics_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E2N_ProcedureCode.h"
#include "E2N_TriggeringMessage.h"
#include "E2N_Criticality.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E2N_CriticalityDiagnostics_IE_List;
struct E2N_ProtocolExtensionContainer;

/* E2N_CriticalityDiagnostics */
typedef struct E2N_CriticalityDiagnostics {
	E2N_ProcedureCode_t	*procedureCode;	/* OPTIONAL */
	E2N_TriggeringMessage_t	*triggeringMessage;	/* OPTIONAL */
	E2N_Criticality_t	*procedureCriticality;	/* OPTIONAL */
	struct E2N_CriticalityDiagnostics_IE_List	*iEsCriticalityDiagnostics;	/* OPTIONAL */
	struct E2N_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2N_CriticalityDiagnostics_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2N_CriticalityDiagnostics;

#ifdef __cplusplus
}
#endif

#endif	/* _E2N_CriticalityDiagnostics_H_ */
#include <asn_internal.h>
