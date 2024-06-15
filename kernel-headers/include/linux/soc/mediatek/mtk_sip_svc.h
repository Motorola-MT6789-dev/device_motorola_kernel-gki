/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2019 MediaTek Inc.
 */
#ifndef __MTK_SIP_SVC_H
#define __MTK_SIP_SVC_H

/* Error Code */
#define SIP_SVC_E_SUCCESS               0
#define SIP_SVC_E_NOT_SUPPORTED         -1
#define SIP_SVC_E_INVALID_PARAMS        -2
#define SIP_SVC_E_INVALID_RANGE         -3
#define SIP_SVC_E_PERMISSION_DENIED     -4

#ifdef CONFIG_ARM64
#define MTK_SIP_SMC_CONVENTION          ARM_SMCCC_SMC_64
#else
#define MTK_SIP_SMC_CONVENTION          ARM_SMCCC_SMC_32
#endif

#define MTK_SIP_SMC_CMD(fn_id) \
	ARM_SMCCC_CALL_VAL(ARM_SMCCC_FAST_CALL, MTK_SIP_SMC_CONVENTION, \
			   ARM_SMCCC_OWNER_SIP, fn_id)

/* VCOREFS */
#define MTK_SIP_VCOREFS_CONTROL \
	MTK_SIP_SMC_CMD(0x506)

/* EMI MPU */
#define MTK_SIP_EMIMPU_CONTROL \
	MTK_SIP_SMC_CMD(0x50B)
#define MTK_SIP_KERNEL_EMIMPU_WRITE \
	MTK_SIP_SMC_CMD(0x260)
#define MTK_SIP_KERNEL_EMIMPU_READ \
	MTK_SIP_SMC_CMD(0x261)
#define MTK_SIP_KERNEL_EMIMPU_SET \
	MTK_SIP_SMC_CMD(0x262)

/* SDA */
#define MTK_SIP_SDA_CONTROL \
	MTK_SIP_SMC_CMD(0x525)

#if IS_ENABLED(CONFIG_MTK_IRQ_DBG)
#define MTK_SIP_KERNEL_GIC_DUMP \
	MTK_SIP_SMC_CMD(0x526)
#endif
/* LEGACY chip with sysirq */
#if IS_ENABLED(CONFIG_MTK_IRQ_DBG_LEGACY)
#define MTK_SIP_KERNEL_GIC_DUMP \
	MTK_SIP_SMC_CMD(0x201)
#endif

/* Debug feature and ATF related */
#define MTK_SIP_KERNEL_WDT \
	MTK_SIP_SMC_CMD(0x200)
#define MTK_SIP_KERNEL_TIME_SYNC \
	MTK_SIP_SMC_CMD(0x202)
#define MTK_SIP_KERNEL_ATF_DEBUG \
	MTK_SIP_SMC_CMD(0x204)

/* CCCI debug feature */
#define MTK_SIP_KERNEL_CCCI_GET_INFO \
	MTK_SIP_SMC_CMD(0x206)

/* DCM Security SMC call */
#define MTK_SIP_KERNEL_DCM \
	MTK_SIP_SMC_CMD(0x230)

/* AMMS related SMC call */
#define MTK_SIP_KERNEL_AMMS_GET_FREE_ADDR \
	MTK_SIP_SMC_CMD(0x250)
#define MTK_SIP_KERNEL_AMMS_GET_FREE_LENGTH \
	MTK_SIP_SMC_CMD(0x251)
#define MTK_SIP_KERNEL_AMMS_GET_PENDING \
	MTK_SIP_SMC_CMD(0x252)
#define MTK_SIP_KERNEL_AMMS_ACK_PENDING \
	MTK_SIP_SMC_CMD(0x253)
#define MTK_SIP_KERNEL_AMMS_GET_SEQ_ID \
	MTK_SIP_SMC_CMD(0x258)

/* Security related SMC call */
/* DEVMPU */
#define MTK_SIP_KERNEL_DEVMPU_VIO_GET \
	MTK_SIP_SMC_CMD(0x264)
#define MTK_SIP_KERNEL_DEVMPU_PERM_GET \
	MTK_SIP_SMC_CMD(0x265)
#define MTK_SIP_KERNEL_DEVMPU_VIO_CLR \
	MTK_SIP_SMC_CMD(0x268)
/* TRNG */
#define MTK_SIP_KERNEL_GET_RND \
	MTK_SIP_SMC_CMD(0x26A)
/* DEVAPC */
#define MTK_SIP_KERNEL_DAPC_PERM_GET \
	MTK_SIP_SMC_CMD(0x26B)
#define MTK_SIP_KERNEL_CLR_SRAMROM_VIO \
	MTK_SIP_SMC_CMD(0x26C)
#define MTK_SIP_KERNEL_DAPC_CAM_CONTROL \
	MTK_SIP_SMC_CMD(0x52D)
#define MTK_SIP_KERNEL_DAPC_MMUP_CONTROL \
	MTK_SIP_SMC_CMD(0x52E)
#define MTK_SIP_KERNEL_DAPC_MMUP_GET \
	MTK_SIP_SMC_CMD(0x531)

/* Debug related SMC call */
#define MTK_SIP_KERNEL_CCCI_CONTROL \
	MTK_SIP_SMC_CMD(0x505)

/* AUDIO related SMC call */
#define MTK_SIP_AUDIO_CONTROL \
	MTK_SIP_SMC_CMD(0x517)

#define MTK_SIP_CMDQ_CONTROL \
	MTK_SIP_SMC_CMD(0x518)

#define MTK_SIP_APUSYS_MNOC_CONTROL \
	MTK_SIP_SMC_CMD(0x519)

#define MTK_SIP_IMGSYS_CONTROL \
	MTK_SIP_SMC_CMD(0x532)

/* MTK LPM */
#define MTK_SIP_MTK_LPM_CONTROL \
	MTK_SIP_SMC_CMD(0x507)

/* FM */
#define MTK_SIP_KERNEL_FM_CONTROL \
	MTK_SIP_SMC_CMD(0x538)

/* MTK SSC */
#define MTK_SIP_MTK_SSC_CONTROL \
	MTK_SIP_SMC_CMD(0x529)

/* MMSRAM */
#define MTK_SIP_MMSRAM_CONTROL \
	MTK_SIP_SMC_CMD(0x51D)

/* for APUSYS SMC call */
#define MTK_SIP_APUSYS_CONTROL \
	MTK_SIP_SMC_CMD(0x51E)

/* SCP DVFS */
#define MTK_SIP_SCP_DVFS_CONTROL \
	MTK_SIP_SMC_CMD(0x232)

/* IOMMU related SMC call */
#define MTK_IOMMU_SECURE_CONTROL \
	MTK_SIP_SMC_CMD(0x514)

/* USB related SMC call */
#define MTK_SIP_KERNEL_USB_CONTROL \
	MTK_SIP_SMC_CMD(0x527)

#define MTK_SIP_KERNEL_CCU_CONTROL	\
	MTK_SIP_SMC_CMD(0x52A)

/* ADSP */
#define MTK_SIP_KERNEL_ADSP_CONTROL \
	MTK_SIP_SMC_CMD(0x52B)
#endif

/* SCP */
#define MTK_SIP_TINYSYS_SCP_CONTROL \
	MTK_SIP_SMC_CMD(0x528)

/* VCP */
#define MTK_SIP_TINYSYS_VCP_CONTROL \
		MTK_SIP_SMC_CMD(0x52C)

/* PCIe related SMC call */
#define MTK_SIP_KERNEL_PCIE_CONTROL \
	MTK_SIP_SMC_CMD(0x52F)

/* GPUEB */
#define MTK_SIP_KERNEL_GPUEB_CONTROL \
	MTK_SIP_SMC_CMD(0x530)
