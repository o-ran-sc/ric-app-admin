/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_ListofNRCellsinNRCoordinationReq_H_
#define	_ListofNRCellsinNRCoordinationReq_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NRCGI;

/* ListofNRCellsinNRCoordinationReq */
typedef struct ListofNRCellsinNRCoordinationReq {
	A_SEQUENCE_OF(struct NRCGI) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ListofNRCellsinNRCoordinationReq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ListofNRCellsinNRCoordinationReq;

#ifdef __cplusplus
}
#endif

#endif	/* _ListofNRCellsinNRCoordinationReq_H_ */
#include <asn_internal.h>
