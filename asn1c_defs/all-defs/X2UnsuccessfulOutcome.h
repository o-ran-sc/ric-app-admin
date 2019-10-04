/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Descriptions"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_X2UnsuccessfulOutcome_H_
#define	_X2UnsuccessfulOutcome_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProcedureCode.h"
#include "Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "HandoverRequest.h"
#include "HandoverRequestAcknowledge.h"
#include "HandoverPreparationFailure.h"
#include "ResetRequest.h"
#include "ResetResponse.h"
#include "X2SetupRequest.h"
#include "X2SetupResponse.h"
#include "X2SetupFailure.h"
#include "ResourceStatusRequest.h"
#include "ResourceStatusResponse.h"
#include "ResourceStatusFailure.h"
#include "ENBConfigurationUpdate.h"
#include "ENBConfigurationUpdateAcknowledge.h"
#include "ENBConfigurationUpdateFailure.h"
#include "MobilityChangeRequest.h"
#include "MobilityChangeAcknowledge.h"
#include "MobilityChangeFailure.h"
#include "CellActivationRequest.h"
#include "CellActivationResponse.h"
#include "CellActivationFailure.h"
#include "SeNBAdditionRequest.h"
#include "SeNBAdditionRequestAcknowledge.h"
#include "SeNBAdditionRequestReject.h"
#include "SeNBModificationRequest.h"
#include "SeNBModificationRequestAcknowledge.h"
#include "SeNBModificationRequestReject.h"
#include "SeNBModificationRequired.h"
#include "SeNBModificationConfirm.h"
#include "SeNBModificationRefuse.h"
#include "SeNBReleaseRequired.h"
#include "SeNBReleaseConfirm.h"
#include "X2RemovalRequest.h"
#include "X2RemovalResponse.h"
#include "X2RemovalFailure.h"
#include "RetrieveUEContextRequest.h"
#include "RetrieveUEContextResponse.h"
#include "RetrieveUEContextFailure.h"
#include "SgNBAdditionRequest.h"
#include "SgNBAdditionRequestAcknowledge.h"
#include "SgNBAdditionRequestReject.h"
#include "SgNBModificationRequest.h"
#include "SgNBModificationRequestAcknowledge.h"
#include "SgNBModificationRequestReject.h"
#include "SgNBModificationRequired.h"
#include "SgNBModificationConfirm.h"
#include "SgNBModificationRefuse.h"
#include "SgNBReleaseRequest.h"
#include "SgNBReleaseRequestAcknowledge.h"
#include "SgNBReleaseRequestReject.h"
#include "SgNBReleaseRequired.h"
#include "SgNBReleaseConfirm.h"
#include "SgNBChangeRequired.h"
#include "SgNBChangeConfirm.h"
#include "SgNBChangeRefuse.h"
#include "ENDCX2SetupRequest.h"
#include "ENDCX2SetupResponse.h"
#include "ENDCX2SetupFailure.h"
#include "ENDCConfigurationUpdate.h"
#include "ENDCConfigurationUpdateAcknowledge.h"
#include "ENDCConfigurationUpdateFailure.h"
#include "ENDCCellActivationRequest.h"
#include "ENDCCellActivationResponse.h"
#include "ENDCCellActivationFailure.h"
#include "ENDCPartialResetRequired.h"
#include "ENDCPartialResetConfirm.h"
#include "EUTRANRCellResourceCoordinationRequest.h"
#include "EUTRANRCellResourceCoordinationResponse.h"
#include "ENDCX2RemovalRequest.h"
#include "ENDCX2RemovalResponse.h"
#include "ENDCX2RemovalFailure.h"
#include "SNStatusTransfer.h"
#include "UEContextRelease.h"
#include "HandoverCancel.h"
#include "ErrorIndication.h"
#include "ResourceStatusUpdate.h"
#include "LoadInformation.h"
#include "PrivateMessage.h"
#include "RLFIndication.h"
#include "HandoverReport.h"
#include "X2Release.h"
#include "X2APMessageTransfer.h"
#include "SeNBReconfigurationComplete.h"
#include "SeNBReleaseRequest.h"
#include "SeNBCounterCheckRequest.h"
#include "SgNBReconfigurationComplete.h"
#include "SgNBCounterCheckRequest.h"
#include "RRCTransfer.h"
#include "SecondaryRATDataUsageReport.h"
#include "SgNBActivityNotification.h"
#include "DataForwardingAddressIndication.h"
#include "GNBStatusIndication.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2UnsuccessfulOutcome__value_PR {
	X2UnsuccessfulOutcome__value_PR_NOTHING,	/* No components present */
	X2UnsuccessfulOutcome__value_PR_HandoverPreparationFailure,
	X2UnsuccessfulOutcome__value_PR_X2SetupFailure,
	X2UnsuccessfulOutcome__value_PR_ResourceStatusFailure,
	X2UnsuccessfulOutcome__value_PR_ENBConfigurationUpdateFailure,
	X2UnsuccessfulOutcome__value_PR_MobilityChangeFailure,
	X2UnsuccessfulOutcome__value_PR_CellActivationFailure,
	X2UnsuccessfulOutcome__value_PR_SeNBAdditionRequestReject,
	X2UnsuccessfulOutcome__value_PR_SeNBModificationRequestReject,
	X2UnsuccessfulOutcome__value_PR_SeNBModificationRefuse,
	X2UnsuccessfulOutcome__value_PR_X2RemovalFailure,
	X2UnsuccessfulOutcome__value_PR_RetrieveUEContextFailure,
	X2UnsuccessfulOutcome__value_PR_SgNBAdditionRequestReject,
	X2UnsuccessfulOutcome__value_PR_SgNBModificationRequestReject,
	X2UnsuccessfulOutcome__value_PR_SgNBModificationRefuse,
	X2UnsuccessfulOutcome__value_PR_SgNBReleaseRequestReject,
	X2UnsuccessfulOutcome__value_PR_SgNBChangeRefuse,
	X2UnsuccessfulOutcome__value_PR_ENDCX2SetupFailure,
	X2UnsuccessfulOutcome__value_PR_ENDCConfigurationUpdateFailure,
	X2UnsuccessfulOutcome__value_PR_ENDCCellActivationFailure,
	X2UnsuccessfulOutcome__value_PR_ENDCX2RemovalFailure
} X2UnsuccessfulOutcome__value_PR;

/* X2UnsuccessfulOutcome */
typedef struct X2UnsuccessfulOutcome {
	ProcedureCode_t	 procedureCode;
	Criticality_t	 criticality;
	struct X2UnsuccessfulOutcome__value {
		X2UnsuccessfulOutcome__value_PR present;
		union X2UnsuccessfulOutcome__value_u {
			HandoverPreparationFailure_t	 HandoverPreparationFailure;
			X2SetupFailure_t	 X2SetupFailure;
			ResourceStatusFailure_t	 ResourceStatusFailure;
			ENBConfigurationUpdateFailure_t	 ENBConfigurationUpdateFailure;
			MobilityChangeFailure_t	 MobilityChangeFailure;
			CellActivationFailure_t	 CellActivationFailure;
			SeNBAdditionRequestReject_t	 SeNBAdditionRequestReject;
			SeNBModificationRequestReject_t	 SeNBModificationRequestReject;
			SeNBModificationRefuse_t	 SeNBModificationRefuse;
			X2RemovalFailure_t	 X2RemovalFailure;
			RetrieveUEContextFailure_t	 RetrieveUEContextFailure;
			SgNBAdditionRequestReject_t	 SgNBAdditionRequestReject;
			SgNBModificationRequestReject_t	 SgNBModificationRequestReject;
			SgNBModificationRefuse_t	 SgNBModificationRefuse;
			SgNBReleaseRequestReject_t	 SgNBReleaseRequestReject;
			SgNBChangeRefuse_t	 SgNBChangeRefuse;
			ENDCX2SetupFailure_t	 ENDCX2SetupFailure;
			ENDCConfigurationUpdateFailure_t	 ENDCConfigurationUpdateFailure;
			ENDCCellActivationFailure_t	 ENDCCellActivationFailure;
			ENDCX2RemovalFailure_t	 ENDCX2RemovalFailure;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2UnsuccessfulOutcome_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2UnsuccessfulOutcome;
extern asn_SEQUENCE_specifics_t asn_SPC_X2UnsuccessfulOutcome_specs_1;
extern asn_TYPE_member_t asn_MBR_X2UnsuccessfulOutcome_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _X2UnsuccessfulOutcome_H_ */
#include <asn_internal.h>
