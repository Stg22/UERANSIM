/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_CSI_RS_IM_ReceptionForFeedback_H_
#define	_ASN_RRC_CSI_RS_IM_ReceptionForFeedback_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_CSI_RS_IM_ReceptionForFeedback__maxConfigNumberCSI_IM_PerCC {
	ASN_RRC_CSI_RS_IM_ReceptionForFeedback__maxConfigNumberCSI_IM_PerCC_n1	= 0,
	ASN_RRC_CSI_RS_IM_ReceptionForFeedback__maxConfigNumberCSI_IM_PerCC_n2	= 1,
	ASN_RRC_CSI_RS_IM_ReceptionForFeedback__maxConfigNumberCSI_IM_PerCC_n4	= 2,
	ASN_RRC_CSI_RS_IM_ReceptionForFeedback__maxConfigNumberCSI_IM_PerCC_n8	= 3,
	ASN_RRC_CSI_RS_IM_ReceptionForFeedback__maxConfigNumberCSI_IM_PerCC_n16	= 4,
	ASN_RRC_CSI_RS_IM_ReceptionForFeedback__maxConfigNumberCSI_IM_PerCC_n32	= 5
} e_ASN_RRC_CSI_RS_IM_ReceptionForFeedback__maxConfigNumberCSI_IM_PerCC;

/* ASN_RRC_CSI-RS-IM-ReceptionForFeedback */
typedef struct ASN_RRC_CSI_RS_IM_ReceptionForFeedback {
	long	 maxConfigNumberNZP_CSI_RS_PerCC;
	long	 maxConfigNumberPortsAcrossNZP_CSI_RS_PerCC;
	long	 maxConfigNumberCSI_IM_PerCC;
	long	 maxNumberSimultaneousNZP_CSI_RS_PerCC;
	long	 totalNumberPortsSimultaneousNZP_CSI_RS_PerCC;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_CSI_RS_IM_ReceptionForFeedback_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_maxConfigNumberCSI_IM_PerCC_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_CSI_RS_IM_ReceptionForFeedback;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_CSI_RS_IM_ReceptionForFeedback_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_CSI_RS_IM_ReceptionForFeedback_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_CSI_RS_IM_ReceptionForFeedback_H_ */
#include <asn_internal.h>
