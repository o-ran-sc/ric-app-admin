/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "RSRPMeasurementResult.h"

#include "ProtocolExtensionContainer.h"
static int
memb_rSRPMeasured_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 97)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_rSRPMeasured_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  7,  7,  0,  97 }	/* (0..97,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_RSRPMeasurementResult_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RSRPMeasurementResult__Member, rSRPCellID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ECGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rSRPCellID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSRPMeasurementResult__Member, rSRPMeasured),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rSRPMeasured_constr_4,  memb_rSRPMeasured_constraint_2 },
		0, 0, /* No default value */
		"rSRPMeasured"
		},
	{ ATF_POINTER, 1, offsetof(struct RSRPMeasurementResult__Member, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_8231P187,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Member_oms_2[] = { 2 };
static const ber_tlv_tag_t asn_DEF_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rSRPCellID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rSRPMeasured */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct RSRPMeasurementResult__Member),
	offsetof(struct RSRPMeasurementResult__Member, _asn_ctx),
	asn_MAP_Member_tag2el_2,
	3,	/* Count of tags in the map */
	asn_MAP_Member_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
	&asn_OP_SEQUENCE,
	asn_DEF_Member_tags_2,
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	asn_DEF_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Member_2,
	3,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RSRPMeasurementResult_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_RSRPMeasurementResult_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_RSRPMeasurementResult_specs_1 = {
	sizeof(struct RSRPMeasurementResult),
	offsetof(struct RSRPMeasurementResult, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_RSRPMeasurementResult = {
	"RSRPMeasurementResult",
	"RSRPMeasurementResult",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_RSRPMeasurementResult_tags_1,
	sizeof(asn_DEF_RSRPMeasurementResult_tags_1)
		/sizeof(asn_DEF_RSRPMeasurementResult_tags_1[0]), /* 1 */
	asn_DEF_RSRPMeasurementResult_tags_1,	/* Same as above */
	sizeof(asn_DEF_RSRPMeasurementResult_tags_1)
		/sizeof(asn_DEF_RSRPMeasurementResult_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_RSRPMeasurementResult_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_RSRPMeasurementResult_1,
	1,	/* Single element */
	&asn_SPC_RSRPMeasurementResult_specs_1	/* Additional specs */
};

