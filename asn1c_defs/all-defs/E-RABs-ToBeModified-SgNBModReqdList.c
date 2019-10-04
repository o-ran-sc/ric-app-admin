/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "E-RABs-ToBeModified-SgNBModReqdList.h"

#include "ProtocolIE-Single-Container.h"
static asn_per_constraints_t asn_PER_type_E_RABs_ToBeModified_SgNBModReqdList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_E_RABs_ToBeModified_SgNBModReqdList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ProtocolIE_Single_Container_8183P37,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_E_RABs_ToBeModified_SgNBModReqdList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_E_RABs_ToBeModified_SgNBModReqdList_specs_1 = {
	sizeof(struct E_RABs_ToBeModified_SgNBModReqdList),
	offsetof(struct E_RABs_ToBeModified_SgNBModReqdList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_E_RABs_ToBeModified_SgNBModReqdList = {
	"E-RABs-ToBeModified-SgNBModReqdList",
	"E-RABs-ToBeModified-SgNBModReqdList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_E_RABs_ToBeModified_SgNBModReqdList_tags_1,
	sizeof(asn_DEF_E_RABs_ToBeModified_SgNBModReqdList_tags_1)
		/sizeof(asn_DEF_E_RABs_ToBeModified_SgNBModReqdList_tags_1[0]), /* 1 */
	asn_DEF_E_RABs_ToBeModified_SgNBModReqdList_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_RABs_ToBeModified_SgNBModReqdList_tags_1)
		/sizeof(asn_DEF_E_RABs_ToBeModified_SgNBModReqdList_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_E_RABs_ToBeModified_SgNBModReqdList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_E_RABs_ToBeModified_SgNBModReqdList_1,
	1,	/* Single element */
	&asn_SPC_E_RABs_ToBeModified_SgNBModReqdList_specs_1	/* Additional specs */
};

