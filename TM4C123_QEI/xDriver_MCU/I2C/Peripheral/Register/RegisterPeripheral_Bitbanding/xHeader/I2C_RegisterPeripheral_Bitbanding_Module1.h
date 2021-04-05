/**
 *
 * @file I2C_RegisterPeripheral_Bitbanding_Module1.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 7 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_I2C_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_I2C_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_

#include <xDriver_MCU/I2C/Peripheral/Register/xHeader/I2C_RegisterAddress.h>
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterDefines/I2C_RegisterDefines.h>
#include <xDriver_MCU/I2C/Peripheral/Struct/xHeader/I2C_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ I2C1 *********************************************
******************************************************************************************/
#define I2C1_BITBANDING    ((I2C_BITBANDING_TypeDef*) (I2C_BITBANDING_BASE + (I2C1_OFFSET * 32U)))

/******************************************************************************************
*********************************** * 1 I2CMSA *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CMSA    ((BITBANDING_I2CMSA_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMSA_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CMSA_RS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMSA_OFFSET) * 32U) + (I2C_I2CMSA_R_RS_BIT * 4U))))

/******************************************************************************************
*********************************** * 2 I2CMCS *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CMCS_STATUS    ((BITBANDING_I2CMCS_STATUS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCS_OFFSET) * 32U)))
#define I2C1_BITBANDING_I2CMCS_CONTROL    ((BITBANDING_I2CMCS_CONTROL_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCS_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CMCS_STATUS_BUSY    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCS_OFFSET) * 32U) + (I2C_I2CMCS_R_BUSY_BIT * 4U))))
#define I2C1_BITBANDING_I2CMCS_STATUS_ERROR    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCS_OFFSET) * 32U) + (I2C_I2CMCS_R_ERROR_BIT * 4U))))
#define I2C1_BITBANDING_I2CMCS_STATUS_ADRACK    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCS_OFFSET) * 32U) + (I2C_I2CMCS_R_ADRACK_BIT * 4U))))
#define I2C1_BITBANDING_I2CMCS_STATUS_DATACK    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCS_OFFSET) * 32U) + (I2C_I2CMCS_R_DATACK_BIT * 4U))))
#define I2C1_BITBANDING_I2CMCS_STATUS_ARBLST    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCS_OFFSET) * 32U) + (I2C_I2CMCS_R_ARBLST_BIT * 4U))))
#define I2C1_BITBANDING_I2CMCS_STATUS_IDLE    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCS_OFFSET) * 32U) + (I2C_I2CMCS_R_IDLE_BIT * 4U))))
#define I2C1_BITBANDING_I2CMCS_STATUS_BUSBSY    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCS_OFFSET) * 32U) + (I2C_I2CMCS_R_BUSBSY_BIT * 4U))))
#define I2C1_BITBANDING_I2CMCS_STATUS_CLKTO    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCS_OFFSET) * 32U) + (I2C_I2CMCS_R_CLKTO_BIT * 4U))))

#define I2C1_BITBANDING_I2CMCS_CONTROL_RUN    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCS_OFFSET) * 32U) + (I2C_I2CMCS_R_RUN_BIT * 4U))))
#define I2C1_BITBANDING_I2CMCS_CONTROL_START    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCS_OFFSET) * 32U) + (I2C_I2CMCS_R_START_BIT * 4U))))
#define I2C1_BITBANDING_I2CMCS_CONTROL_STOP    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCS_OFFSET) * 32U) + (I2C_I2CMCS_R_STOP_BIT * 4U))))
#define I2C1_BITBANDING_I2CMCS_CONTROL_ACK    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCS_OFFSET) * 32U) + (I2C_I2CMCS_R_ACK_BIT * 4U))))
#define I2C1_BITBANDING_I2CMCS_CONTROL_HS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCS_OFFSET) * 32U) + (I2C_I2CMCS_R_HS_BIT * 4U))))

/******************************************************************************************
*********************************** * 3 I2CMDR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CMDR    ((BITBANDING_I2CMDR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMDR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 4 I2CMTPR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CMTPR    ((BITBANDING_I2CMTPR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMTPR_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CMTPR_HS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMTPR_OFFSET) * 32U) + (I2C_I2CMTPR_R_HS_BIT * 4U))))

/******************************************************************************************
*********************************** * 5 I2CMIMR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CMIMR    ((BITBANDING_I2CMIMR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMIMR_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CMIMR_IM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMIMR_OFFSET) * 32U) + (I2C_I2CMIMR_R_IM_BIT * 4U))))
#define I2C1_BITBANDING_I2CMIMR_CLKIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMIMR_OFFSET) * 32U) + (I2C_I2CMIMR_R_CLKIM_BIT * 4U))))

/******************************************************************************************
*********************************** * 6 I2CMRIS *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CMRIS    ((BITBANDING_I2CMRIS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMRIS_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CMRIS_RIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMRIS_OFFSET) * 32U) + (I2C_I2CMRIS_R_RIS_BIT * 4U))))
#define I2C1_BITBANDING_I2CMRIS_CLKRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMRIS_OFFSET) * 32U) + (I2C_I2CMRIS_R_CLKRIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 7 I2CMMIS *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CMMIS    ((BITBANDING_I2CMMIS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMMIS_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CMMIS_MIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMMIS_OFFSET) * 32U) + (I2C_I2CMMIS_R_MIS_BIT * 4U))))
#define I2C1_BITBANDING_I2CMMIS_CLKMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMMIS_OFFSET) * 32U) + (I2C_I2CMMIS_R_CLKMIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 8 I2CMICR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CMICR    ((BITBANDING_I2CMICR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMICR_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CMICR_IC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMICR_OFFSET) * 32U) + (I2C_I2CMICR_R_IC_BIT * 4U))))
#define I2C1_BITBANDING_I2CMICR_CLKIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMICR_OFFSET) * 32U) + (I2C_I2CMICR_R_CLKIC_BIT * 4U))))

/******************************************************************************************
*********************************** * 9 I2CMCR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CMCR    ((BITBANDING_I2CMCR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCR_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CMCR_LPBK    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCR_OFFSET) * 32U) + (I2C_I2CMCR_R_LPBK_BIT * 4U))))
#define I2C1_BITBANDING_I2CMCR_MFE    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCR_OFFSET) * 32U) + (I2C_I2CMCR_R_MFE_BIT * 4U))))
#define I2C1_BITBANDING_I2CMCR_SFE    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCR_OFFSET) * 32U) + (I2C_I2CMCR_R_SFE_BIT * 4U))))
#define I2C1_BITBANDING_I2CMCR_GFE    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCR_OFFSET) * 32U) + (I2C_I2CMCR_R_GFE_BIT * 4U))))

/******************************************************************************************
*********************************** * 10 I2CMCLKOCNT *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CMCLKOCNT    ((BITBANDING_I2CMCLKOCNT_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCLKOCNT_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 11 I2CMBMON *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CMBMON    ((BITBANDING_I2CMBMON_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMBMON_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CMBMON_SCL    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMBMON_OFFSET) * 32U) + (I2C_I2CMBMON_R_SCL_BIT * 4U))))
#define I2C1_BITBANDING_I2CMBMON_SDA    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMBMON_OFFSET) * 32U) + (I2C_I2CMBMON_R_SDA_BIT * 4U))))

/******************************************************************************************
*********************************** * 12 I2CMCR2 *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CMCR2    ((BITBANDING_I2CMCR2_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCR2_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CMCR2_GFPW_0    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCR2_OFFSET) * 32U) + ((I2C_I2CMCR2_R_GFPW_BIT + 0U) * 4U))))
#define I2C1_BITBANDING_I2CMCR2_GFPW_1    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCR2_OFFSET) * 32U) + ((I2C_I2CMCR2_R_GFPW_BIT + 1U) * 4U))))
#define I2C1_BITBANDING_I2CMCR2_GFPW_2    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CMCR2_OFFSET) * 32U) + ((I2C_I2CMCR2_R_GFPW_BIT + 2U) * 4U))))

/******************************************************************************************
*********************************** * 13 I2CSOAR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CSOAR    ((BITBANDING_I2CSOAR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSOAR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 14 I2CSCSR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CSCSR_STATUS    ((BITBANDING_I2CSCSR_STATUS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSCSR_OFFSET) * 32U)))
#define I2C1_BITBANDING_I2CSCSR_CONTROL    ((BITBANDING_I2CSCSR_CONTROL_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSCSR_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CSCSR_STATUS_RREQ    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSCSR_OFFSET) * 32U) + (I2C_I2CSCSR_R_RREQ_BIT * 4U))))
#define I2C1_BITBANDING_I2CSCSR_STATUS_TREQ    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSCSR_OFFSET) * 32U) + (I2C_I2CSCSR_R_TREQ_BIT * 4U))))
#define I2C1_BITBANDING_I2CSCSR_STATUS_FBR    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSCSR_OFFSET) * 32U) + (I2C_I2CSCSR_R_FBR_BIT * 4U))))
#define I2C1_BITBANDING_I2CSCSR_STATUS_OAR2SEL    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSCSR_OFFSET) * 32U) + (I2C_I2CSCSR_R_OAR2SEL_BIT * 4U))))

#define I2C1_BITBANDING_I2CSCSR_CONTROL_DA    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSCSR_OFFSET) * 32U) + (I2C_I2CSCSR_R_DA_BIT * 4U))))

/******************************************************************************************
*********************************** * 15 I2CSDR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CSDR    ((BITBANDING_I2CSDR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSDR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 16 I2CSIMR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CSIMR    ((BITBANDING_I2CSIMR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSIMR_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CSIMR_DATAIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSIMR_OFFSET) * 32U) + (I2C_I2CSIMR_R_DATAIM_BIT * 4U))))
#define I2C1_BITBANDING_I2CSIMR_STARTIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSIMR_OFFSET) * 32U) + (I2C_I2CSIMR_R_STARTIM_BIT * 4U))))
#define I2C1_BITBANDING_I2CSIMR_STOPIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSIMR_OFFSET) * 32U) + (I2C_I2CSIMR_R_STOPIM_BIT * 4U))))

/******************************************************************************************
*********************************** * 17 I2CSRIS *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CSRIS    ((BITBANDING_I2CSRIS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSRIS_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CSRIS_DATARIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSRIS_OFFSET) * 32U) + (I2C_I2CSRIS_R_DATARIS_BIT * 4U))))
#define I2C1_BITBANDING_I2CSRIS_STARTRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSRIS_OFFSET) * 32U) + (I2C_I2CSRIS_R_STARTRIS_BIT * 4U))))
#define I2C1_BITBANDING_I2CSIMR_STOPRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSIMR_OFFSET) * 32U) + (I2C_I2CSIMR_R_STOPRIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 18 I2CSMIS *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CSMIS    ((BITBANDING_I2CSMIS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSMIS_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CSMIS_DATAMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSMIS_OFFSET) * 32U) + (I2C_I2CSMIS_R_DATAMIS_BIT * 4U))))
#define I2C1_BITBANDING_I2CSMIS_STARTMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSMIS_OFFSET) * 32U) + (I2C_I2CSMIS_R_STARTMIS_BIT * 4U))))
#define I2C1_BITBANDING_I2CSIMR_STOPMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSIMR_OFFSET) * 32U) + (I2C_I2CSIMR_R_STOPMIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 19 I2CSICR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CSICR    ((BITBANDING_I2CSICR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSICR_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CSICR_DATAIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSICR_OFFSET) * 32U) + (I2C_I2CSICR_R_DATAIC_BIT * 4U))))
#define I2C1_BITBANDING_I2CSICR_STARTIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSICR_OFFSET) * 32U) + (I2C_I2CSICR_R_STARTIC_BIT * 4U))))
#define I2C1_BITBANDING_I2CSIMR_STOPIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSIMR_OFFSET) * 32U) + (I2C_I2CSIMR_R_STOPIC_BIT * 4U))))

/******************************************************************************************
*********************************** * 20 I2CSOAR2 *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CSOAR2    ((BITBANDING_I2CSOAR2_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSOAR2_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CSOAR2_OAR2EN    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSOAR2_OFFSET) * 32U) + (I2C_I2CSOAR2_R_OAR2EN_BIT * 4U))))

/******************************************************************************************
*********************************** * 21 I2CSACKCTL *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CSACKCTL    ((BITBANDING_I2CSACKCTL_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSACKCTL_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CSACKCTL_ACKOEN    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSACKCTL_OFFSET) * 32U) + (I2C_I2CSACKCTL_R_ACKOEN_BIT * 4U))))
#define I2C1_BITBANDING_I2CSACKCTL_ACKOVAL    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CSACKCTL_OFFSET) * 32U) + (I2C_I2CSACKCTL_R_ACKOVAL_BIT * 4U))))

/******************************************************************************************
*********************************** * 22 I2CPP *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CPP    ((BITBANDING_I2CPP_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CPP_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CPP_HS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CPP_OFFSET) * 32U) + (I2C_I2CPP_R_HS_BIT * 4U))))

/******************************************************************************************
*********************************** * 23 I2CPC *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_I2CPC    ((BITBANDING_I2CPC_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CPC_OFFSET) * 32U)))

#define I2C1_BITBANDING_I2CPC_HS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_I2CPC_OFFSET) * 32U) + (I2C_I2CPC_R_HS_BIT * 4U))))

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_I2C_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_ */
