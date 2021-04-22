/**
 *
 * @file SSI_RegisterPeripheral_Bitbanding_Module3.h
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_SSI_REGISTERPERIPHERAL_BITBANDING_MODULE3_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_SSI_REGISTERPERIPHERAL_BITBANDING_MODULE3_H_

#include <xDriver_MCU/SSI/Peripheral/Register/xHeader/SSI_RegisterAddress.h>
#include <xDriver_MCU/SSI/Peripheral/Register/RegisterDefines/SSI_RegisterDefines.h>
#include <xDriver_MCU/SSI/Peripheral/Struct/xHeader/SSI_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ SSI3 *********************************************
******************************************************************************************/
#define SSI3_BITBANDING    ((SSI_BITBANDING_TypeDef*) (SSI_BITBANDING_BASE + (SSI3_OFFSET * 32U)))

/******************************************************************************************
*********************************** * 1 CR0 *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_CR0    ((BITBANDING_SSICR0_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U)))

#define SSI3_BITBANDING_CR0_DSS_0    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 0UL) * 4U))))
#define SSI3_BITBANDING_CR0_DSS_1    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 1UL) * 4U))))
#define SSI3_BITBANDING_CR0_DSS_2    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 2UL) * 4U))))
#define SSI3_BITBANDING_CR0_DSS_3    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 3UL) * 4U))))
#define SSI3_BITBANDING_CR0_DSS_4    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 4UL) * 4U))))
#define SSI3_BITBANDING_CR0_DSS_5    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 5UL) * 4U))))
#define SSI3_BITBANDING_CR0_DSS_6    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 6UL) * 4U))))
#define SSI3_BITBANDING_CR0_DSS_7    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 7UL) * 4U))))
#define SSI3_BITBANDING_CR0_DSS_8    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 8UL) * 4U))))
#define SSI3_BITBANDING_CR0_DSS_9    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 9UL) * 4U))))
#define SSI3_BITBANDING_CR0_DSS_10    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 10UL) * 4U))))
#define SSI3_BITBANDING_CR0_DSS_11    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 11UL) * 4U))))
#define SSI3_BITBANDING_CR0_DSS_12    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 12UL) * 4U))))
#define SSI3_BITBANDING_CR0_DSS_13    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 13UL) * 4U))))
#define SSI3_BITBANDING_CR0_DSS_14    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 14UL) * 4U))))
#define SSI3_BITBANDING_CR0_DSS_15    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 15UL) * 4U))))
#define SSI3_BITBANDING_CR0_FRF_0    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_FRF_BIT + 0UL) * 4U))))
#define SSI3_BITBANDING_CR0_FRF_1    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_FRF_BIT + 1UL) * 4U))))
#define SSI3_BITBANDING_CR0_FRF_2    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_FRF_BIT + 2UL) * 4U))))
#define SSI3_BITBANDING_CR0_FRF_3    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_FRF_BIT + 3UL) * 4U))))
#define SSI3_BITBANDING_CR0_SPO    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + (SSI_CR0_R_SPO_BIT * 4U))))
#define SSI3_BITBANDING_CR0_SPH    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR0_OFFSET) * 32U) + (SSI_CR0_R_SPH_BIT * 4U))))

/******************************************************************************************
*********************************** * 2 CR1 *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_CR1    ((BITBANDING_SSICR1_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR1_OFFSET) * 32U)))

#define SSI3_BITBANDING_CR1_LBM    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR1_OFFSET) * 32U) + (SSI_CR1_R_LBM_BIT * 4U))))
#define SSI3_BITBANDING_CR1_SSE    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR1_OFFSET) * 32U) + (SSI_CR1_R_SSE_BIT * 4U))))
#define SSI3_BITBANDING_CR1_MS    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR1_OFFSET) * 32U) + (SSI_CR1_R_MS_BIT * 4U))))
#define SSI3_BITBANDING_CR1_EOT    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CR1_OFFSET) * 32U) + (SSI_CR1_R_EOT_BIT * 4U))))

/******************************************************************************************
*********************************** * 3 DR *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_DR    ((BITBANDING_SSIDR_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_DR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 4 SR *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_SR    ((BITBANDING_SSISR_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SR_OFFSET) * 32U)))

#define SSI3_BITBANDING_SR_TFE    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SR_OFFSET) * 32U) + (SSI_SR_R_TFE_BIT * 4U))))
#define SSI3_BITBANDING_SR_TNF    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SR_OFFSET) * 32U) + (SSI_SR_R_TNF_BIT * 4U))))
#define SSI3_BITBANDING_SR_RNE    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SR_OFFSET) * 32U) + (SSI_SR_R_RNE_BIT * 4U))))
#define SSI3_BITBANDING_SR_RFF    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SR_OFFSET) * 32U) + (SSI_SR_R_RFF_BIT * 4U))))
#define SSI3_BITBANDING_SR_BSY    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SR_OFFSET) * 32U) + (SSI_SR_R_BSY_BIT * 4U))))

/******************************************************************************************
*********************************** * 5 CPSR *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_CPSR    ((BITBANDING_SSICPSR_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CPSR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 6 IM *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_IM    ((BITBANDING_SSIIM_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_IM_OFFSET) * 32U)))

#define SSI3_BITBANDING_IM_RORIM    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_IM_OFFSET) * 32U) + (SSI_IM_R_RORIM_BIT * 4U))))
#define SSI3_BITBANDING_IM_RTIM    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_IM_OFFSET) * 32U) + (SSI_IM_R_RTIM_BIT * 4U))))
#define SSI3_BITBANDING_IM_RXIM    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_IM_OFFSET) * 32U) + (SSI_IM_R_RXIM_BIT * 4U))))
#define SSI3_BITBANDING_IM_TXIM    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_IM_OFFSET) * 32U) + (SSI_IM_R_TXIM_BIT * 4U))))

/******************************************************************************************
*********************************** * 7 RIS *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_RIS    ((BITBANDING_SSIRIS_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_RIS_OFFSET) * 32U)))

#define SSI3_BITBANDING_RIS_RORRIS    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_RIS_OFFSET) * 32U) + (SSI_RIS_R_RORRIS_BIT * 4U))))
#define SSI3_BITBANDING_RIS_RTRIS    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_RIS_OFFSET) * 32U) + (SSI_RIS_R_RTRIS_BIT * 4U))))
#define SSI3_BITBANDING_RIS_RXRIS    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_RIS_OFFSET) * 32U) + (SSI_RIS_R_RXRIS_BIT * 4U))))
#define SSI3_BITBANDING_RIS_TXRIS    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_RIS_OFFSET) * 32U) + (SSI_RIS_R_TXRIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 8 MIS *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_MIS    ((BITBANDING_SSIMIS_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_MIS_OFFSET) * 32U)))

#define SSI3_BITBANDING_MIS_RORMIS    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_MIS_OFFSET) * 32U) + (SSI_MIS_R_RORMIS_BIT * 4U))))
#define SSI3_BITBANDING_MIS_RTMIS    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_MIS_OFFSET) * 32U) + (SSI_MIS_R_RTMIS_BIT * 4U))))
#define SSI3_BITBANDING_MIS_RXMIS    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_MIS_OFFSET) * 32U) + (SSI_MIS_R_RXMIS_BIT * 4U))))
#define SSI3_BITBANDING_MIS_TXMIS    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_MIS_OFFSET) * 32U) + (SSI_MIS_R_TXMIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 9 ICR *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_ICR    ((BITBANDING_SSIICR_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_ICR_OFFSET) * 32U)))

#define SSI3_BITBANDING_ICR_RORMIC    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_ICR_OFFSET) * 32U) + (SSI_ICR_R_RORMIC_BIT * 4U))))
#define SSI3_BITBANDING_ICR_RTIC    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_ICR_OFFSET) * 32U) + (SSI_ICR_R_RTIC_BIT * 4U))))

/******************************************************************************************
*********************************** * 10 DMACTL *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_DMACTL    ((BITBANDING_SSIDMACTL_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_DMACTL_OFFSET) * 32U)))

#define SSI3_BITBANDING_DMACTL_RXDMAE    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_DMACTL_OFFSET) * 32U) + (SSI_DMACTL_R_RXDMAE_BIT * 4U))))
#define SSI3_BITBANDING_DMACTL_TXDMAE    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_DMACTL_OFFSET) * 32U) + (SSI_DMACTL_R_TXDMAE_BIT * 4U))))

/******************************************************************************************
*********************************** * 11 CC *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_CC    ((BITBANDING_SSICC_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CC_OFFSET) * 32U)))

#define SSI3_BITBANDING_CC_CS_0    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CC_OFFSET) * 32U) + ((SSI_CC_R_CS_BIT + 0U) * 4U))))
#define SSI3_BITBANDING_CC_CS_1    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CC_OFFSET) * 32U) + ((SSI_CC_R_CS_BIT + 1U) * 4U))))
#define SSI3_BITBANDING_CC_CS_2    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CC_OFFSET) * 32U) + ((SSI_CC_R_CS_BIT + 2U) * 4U))))
#define SSI3_BITBANDING_CC_CS_3    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CC_OFFSET) * 32U) + ((SSI_CC_R_CS_BIT + 3U) * 4U))))

/******************************************************************************************
 *********************************** * 19 PeriphID4 *********************************************
 ******************************************************************************************/
/* SSI3 APB PID4*/
#define SSI3_BITBANDING_PeriphID4    ((BITBANDING_SSIPeriphID4_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_PeriphID4_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 20 PeriphID5 *********************************************
 ******************************************************************************************/
/* SSI3 APB PID5*/
#define SSI3_BITBANDING_PeriphID5    ((BITBANDING_SSIPeriphID5_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_PeriphID5_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 21 PeriphID6 *********************************************
 ******************************************************************************************/
/* SSI3 APB PID6*/
#define SSI3_BITBANDING_PeriphID6    ((BITBANDING_SSIPeriphID6_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_PeriphID6_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 22 PeriphID7 *********************************************
 ******************************************************************************************/
/* SSI3 APB PID7*/
#define SSI3_BITBANDING_PeriphID7    ((BITBANDING_SSIPeriphID7_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_PeriphID7_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 23 PeriphID0 *********************************************
 ******************************************************************************************/
/* SSI3 APB PID0*/
#define SSI3_BITBANDING_PeriphID0    ((BITBANDING_SSIPeriphID0_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_PeriphID0_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 24 PeriphID1 *********************************************
 ******************************************************************************************/
/* SSI3 APB PID1*/
#define SSI3_BITBANDING_PeriphID1    ((BITBANDING_SSIPeriphID1_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_PeriphID1_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 25 PeriphID2 *********************************************
 ******************************************************************************************/
/* SSI3 APB PID2*/
#define SSI3_BITBANDING_PeriphID2    ((BITBANDING_SSIPeriphID2_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_PeriphID2_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 26 PeriphID3 *********************************************
 ******************************************************************************************/
/* SSI3 APB PID3*/
#define SSI3_BITBANDING_PeriphID3    ((BITBANDING_SSIPeriphID3_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_PeriphID3_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 27 CellID0 *********************************************
 ******************************************************************************************/
/* SSI3 APB CID0*/
#define SSI3_BITBANDING_CellID0    ((BITBANDING_SSICellID0_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CellID0_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 28 CellID1 *********************************************
 ******************************************************************************************/
/* SSI3 APB CID1*/
#define SSI3_BITBANDING_CellID1    ((BITBANDING_SSICellID1_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CellID1_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 29 CellID2 *********************************************
 ******************************************************************************************/
/* SSI3 APB CID2*/
#define SSI3_BITBANDING_CellID2    ((BITBANDING_SSICellID2_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CellID2_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 30 CellID3 *********************************************
 ******************************************************************************************/
/* SSI3 APB CID3*/
#define SSI3_BITBANDING_CellID3    ((BITBANDING_SSICellID3_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_CellID3_OFFSET) * 32U)))

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_SSI_REGISTERPERIPHERAL_BITBANDING_MODULE3_H_ */
