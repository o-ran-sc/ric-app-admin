/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_ServedCells_H_
#define	_ServedCells_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "ServedCell-Information.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Neighbour_Information;
struct ProtocolExtensionContainer;

/* Forward definitions */
typedef struct ServedCells__Member {
	ServedCell_Information_t	 servedCellInfo;
	struct Neighbour_Information	*neighbour_Info;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServedCells__Member;

/* ServedCells */
typedef struct ServedCells {
	A_SEQUENCE_OF(ServedCells__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServedCells_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServedCells;

#ifdef __cplusplus
}
#endif

#endif	/* _ServedCells_H_ */
#include <asn_internal.h>
