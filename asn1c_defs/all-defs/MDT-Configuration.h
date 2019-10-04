/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_MDT_Configuration_H_
#define	_MDT_Configuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MDT-Activation.h"
#include "AreaScopeOfMDT.h"
#include "MeasurementsToActivate.h"
#include "M1ReportingTrigger.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct M1ThresholdEventA2;
struct M1PeriodicReporting;
struct ProtocolExtensionContainer;

/* MDT-Configuration */
typedef struct MDT_Configuration {
	MDT_Activation_t	 mdt_Activation;
	AreaScopeOfMDT_t	 areaScopeOfMDT;
	MeasurementsToActivate_t	 measurementsToActivate;
	M1ReportingTrigger_t	 m1reportingTrigger;
	struct M1ThresholdEventA2	*m1thresholdeventA2;	/* OPTIONAL */
	struct M1PeriodicReporting	*m1periodicReporting;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MDT_Configuration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MDT_Configuration;

#ifdef __cplusplus
}
#endif

#endif	/* _MDT_Configuration_H_ */
#include <asn_internal.h>
