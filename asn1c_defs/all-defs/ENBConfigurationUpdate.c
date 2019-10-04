/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "ENBConfigurationUpdate.h"

asn_TYPE_member_t asn_MBR_ENBConfigurationUpdate_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ENBConfigurationUpdate, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_Container_8180P28,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_ENBConfigurationUpdate_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ENBConfigurationUpdate_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_ENBConfigurationUpdate_specs_1 = {
	sizeof(struct ENBConfigurationUpdate),
	offsetof(struct ENBConfigurationUpdate, _asn_ctx),
	asn_MAP_ENBConfigurationUpdate_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ENBConfigurationUpdate = {
	"ENBConfigurationUpdate",
	"ENBConfigurationUpdate",
	&asn_OP_SEQUENCE,
	asn_DEF_ENBConfigurationUpdate_tags_1,
	sizeof(asn_DEF_ENBConfigurationUpdate_tags_1)
		/sizeof(asn_DEF_ENBConfigurationUpdate_tags_1[0]), /* 1 */
	asn_DEF_ENBConfigurationUpdate_tags_1,	/* Same as above */
	sizeof(asn_DEF_ENBConfigurationUpdate_tags_1)
		/sizeof(asn_DEF_ENBConfigurationUpdate_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ENBConfigurationUpdate_1,
	1,	/* Elements count */
	&asn_SPC_ENBConfigurationUpdate_specs_1	/* Additional specs */
};

