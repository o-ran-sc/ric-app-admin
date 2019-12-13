/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_X2N_CoMPInformationStartTime_H_
#define	_X2N_CoMPInformationStartTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2N_ProtocolExtensionContainer;

/* Forward definitions */
typedef struct X2N_CoMPInformationStartTime__Member {
	long	 startSFN;
	long	 startSubframeNumber;
	struct X2N_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CoMPInformationStartTime__Member;

/* X2N_CoMPInformationStartTime */
typedef struct X2N_CoMPInformationStartTime {
	A_SEQUENCE_OF(CoMPInformationStartTime__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2N_CoMPInformationStartTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2N_CoMPInformationStartTime;
extern asn_SET_OF_specifics_t asn_SPC_X2N_CoMPInformationStartTime_specs_1;
extern asn_TYPE_member_t asn_MBR_X2N_CoMPInformationStartTime_1[1];
extern asn_per_constraints_t asn_PER_type_X2N_CoMPInformationStartTime_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _X2N_CoMPInformationStartTime_H_ */
#include <asn_internal.h>