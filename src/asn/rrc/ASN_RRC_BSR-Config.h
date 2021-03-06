/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_BSR_Config_H_
#define	_ASN_RRC_BSR_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_BSR_Config__periodicBSR_Timer {
	ASN_RRC_BSR_Config__periodicBSR_Timer_sf1	= 0,
	ASN_RRC_BSR_Config__periodicBSR_Timer_sf5	= 1,
	ASN_RRC_BSR_Config__periodicBSR_Timer_sf10	= 2,
	ASN_RRC_BSR_Config__periodicBSR_Timer_sf16	= 3,
	ASN_RRC_BSR_Config__periodicBSR_Timer_sf20	= 4,
	ASN_RRC_BSR_Config__periodicBSR_Timer_sf32	= 5,
	ASN_RRC_BSR_Config__periodicBSR_Timer_sf40	= 6,
	ASN_RRC_BSR_Config__periodicBSR_Timer_sf64	= 7,
	ASN_RRC_BSR_Config__periodicBSR_Timer_sf80	= 8,
	ASN_RRC_BSR_Config__periodicBSR_Timer_sf128	= 9,
	ASN_RRC_BSR_Config__periodicBSR_Timer_sf160	= 10,
	ASN_RRC_BSR_Config__periodicBSR_Timer_sf320	= 11,
	ASN_RRC_BSR_Config__periodicBSR_Timer_sf640	= 12,
	ASN_RRC_BSR_Config__periodicBSR_Timer_sf1280	= 13,
	ASN_RRC_BSR_Config__periodicBSR_Timer_sf2560	= 14,
	ASN_RRC_BSR_Config__periodicBSR_Timer_infinity	= 15
} e_ASN_RRC_BSR_Config__periodicBSR_Timer;
typedef enum ASN_RRC_BSR_Config__retxBSR_Timer {
	ASN_RRC_BSR_Config__retxBSR_Timer_sf10	= 0,
	ASN_RRC_BSR_Config__retxBSR_Timer_sf20	= 1,
	ASN_RRC_BSR_Config__retxBSR_Timer_sf40	= 2,
	ASN_RRC_BSR_Config__retxBSR_Timer_sf80	= 3,
	ASN_RRC_BSR_Config__retxBSR_Timer_sf160	= 4,
	ASN_RRC_BSR_Config__retxBSR_Timer_sf320	= 5,
	ASN_RRC_BSR_Config__retxBSR_Timer_sf640	= 6,
	ASN_RRC_BSR_Config__retxBSR_Timer_sf1280	= 7,
	ASN_RRC_BSR_Config__retxBSR_Timer_sf2560	= 8,
	ASN_RRC_BSR_Config__retxBSR_Timer_sf5120	= 9,
	ASN_RRC_BSR_Config__retxBSR_Timer_sf10240	= 10,
	ASN_RRC_BSR_Config__retxBSR_Timer_spare5	= 11,
	ASN_RRC_BSR_Config__retxBSR_Timer_spare4	= 12,
	ASN_RRC_BSR_Config__retxBSR_Timer_spare3	= 13,
	ASN_RRC_BSR_Config__retxBSR_Timer_spare2	= 14,
	ASN_RRC_BSR_Config__retxBSR_Timer_spare1	= 15
} e_ASN_RRC_BSR_Config__retxBSR_Timer;
typedef enum ASN_RRC_BSR_Config__logicalChannelSR_DelayTimer {
	ASN_RRC_BSR_Config__logicalChannelSR_DelayTimer_sf20	= 0,
	ASN_RRC_BSR_Config__logicalChannelSR_DelayTimer_sf40	= 1,
	ASN_RRC_BSR_Config__logicalChannelSR_DelayTimer_sf64	= 2,
	ASN_RRC_BSR_Config__logicalChannelSR_DelayTimer_sf128	= 3,
	ASN_RRC_BSR_Config__logicalChannelSR_DelayTimer_sf512	= 4,
	ASN_RRC_BSR_Config__logicalChannelSR_DelayTimer_sf1024	= 5,
	ASN_RRC_BSR_Config__logicalChannelSR_DelayTimer_sf2560	= 6,
	ASN_RRC_BSR_Config__logicalChannelSR_DelayTimer_spare1	= 7
} e_ASN_RRC_BSR_Config__logicalChannelSR_DelayTimer;

/* ASN_RRC_BSR-Config */
typedef struct ASN_RRC_BSR_Config {
	long	 periodicBSR_Timer;
	long	 retxBSR_Timer;
	long	*logicalChannelSR_DelayTimer;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_BSR_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_periodicBSR_Timer_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_retxBSR_Timer_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_logicalChannelSR_DelayTimer_36;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_BSR_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_BSR_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_BSR_Config_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_BSR_Config_H_ */
#include <asn_internal.h>
