/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "LastVisitedGERANCellInformation.h"

asn_per_constraints_t asn_PER_type_LastVisitedGERANCellInformation_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LastVisitedGERANCellInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LastVisitedGERANCellInformation, choice.undefined),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"undefined"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LastVisitedGERANCellInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* undefined */
};
asn_CHOICE_specifics_t asn_SPC_LastVisitedGERANCellInformation_specs_1 = {
	sizeof(struct LastVisitedGERANCellInformation),
	offsetof(struct LastVisitedGERANCellInformation, _asn_ctx),
	offsetof(struct LastVisitedGERANCellInformation, present),
	sizeof(((struct LastVisitedGERANCellInformation *)0)->present),
	asn_MAP_LastVisitedGERANCellInformation_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0,
	1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LastVisitedGERANCellInformation = {
	"LastVisitedGERANCellInformation",
	"LastVisitedGERANCellInformation",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LastVisitedGERANCellInformation_constr_1, CHOICE_constraint },
	asn_MBR_LastVisitedGERANCellInformation_1,
	1,	/* Elements count */
	&asn_SPC_LastVisitedGERANCellInformation_specs_1	/* Additional specs */
};

