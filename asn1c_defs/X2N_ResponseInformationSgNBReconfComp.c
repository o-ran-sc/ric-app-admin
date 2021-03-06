/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "X2N_ResponseInformationSgNBReconfComp.h"

#include "X2N_ResponseInformationSgNBReconfComp-SuccessItem.h"
#include "X2N_ResponseInformationSgNBReconfComp-RejectByMeNBItem.h"
static asn_per_constraints_t asn_PER_type_X2N_ResponseInformationSgNBReconfComp_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_X2N_ResponseInformationSgNBReconfComp_1[] = {
	{ ATF_POINTER, 0, offsetof(struct X2N_ResponseInformationSgNBReconfComp, choice.success_SgNBReconfComp),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2N_ResponseInformationSgNBReconfComp_SuccessItem,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"success-SgNBReconfComp"
		},
	{ ATF_POINTER, 0, offsetof(struct X2N_ResponseInformationSgNBReconfComp, choice.reject_by_MeNB_SgNBReconfComp),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2N_ResponseInformationSgNBReconfComp_RejectByMeNBItem,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reject-by-MeNB-SgNBReconfComp"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_X2N_ResponseInformationSgNBReconfComp_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* success-SgNBReconfComp */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reject-by-MeNB-SgNBReconfComp */
};
static asn_CHOICE_specifics_t asn_SPC_X2N_ResponseInformationSgNBReconfComp_specs_1 = {
	sizeof(struct X2N_ResponseInformationSgNBReconfComp),
	offsetof(struct X2N_ResponseInformationSgNBReconfComp, _asn_ctx),
	offsetof(struct X2N_ResponseInformationSgNBReconfComp, present),
	sizeof(((struct X2N_ResponseInformationSgNBReconfComp *)0)->present),
	asn_MAP_X2N_ResponseInformationSgNBReconfComp_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_X2N_ResponseInformationSgNBReconfComp = {
	"ResponseInformationSgNBReconfComp",
	"ResponseInformationSgNBReconfComp",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_X2N_ResponseInformationSgNBReconfComp_constr_1, CHOICE_constraint },
	asn_MBR_X2N_ResponseInformationSgNBReconfComp_1,
	2,	/* Elements count */
	&asn_SPC_X2N_ResponseInformationSgNBReconfComp_specs_1	/* Additional specs */
};

