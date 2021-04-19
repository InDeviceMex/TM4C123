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
*********************************** * 1 SSICR0 *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_SSICR0    ((BITBANDING_SSICR0_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U)))

#define SSI3_BITBANDING_SSICR0_DSS_0    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_DSS_BIT + 0UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_DSS_1    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_DSS_BIT + 1UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_DSS_2    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_DSS_BIT + 2UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_DSS_3    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_DSS_BIT + 3UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_DSS_4    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_DSS_BIT + 4UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_DSS_5    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_DSS_BIT + 5UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_DSS_6    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_DSS_BIT + 6UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_DSS_7    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_DSS_BIT + 7UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_DSS_8    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_DSS_BIT + 8UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_DSS_9    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_DSS_BIT + 9UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_DSS_10    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_DSS_BIT + 10UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_DSS_11    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_DSS_BIT + 11UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_DSS_12    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_DSS_BIT + 12UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_DSS_13    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_DSS_BIT + 13UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_DSS_14    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_DSS_BIT + 14UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_DSS_15    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_DSS_BIT + 15UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_FRF_0    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_FRF_BIT + 0UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_FRF_1    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_FRF_BIT + 1UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_FRF_2    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_FRF_BIT + 2UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_FRF_3    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + ((SSI_SSICR0_R_FRF_BIT + 3UL) * 4U))))
#define SSI3_BITBANDING_SSICR0_SPO    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + (SSI_SSICR0_R_SPO_BIT * 4U))))
#define SSI3_BITBANDING_SSICR0_SPH    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR0_OFFSET) * 32U) + (SSI_SSICR0_R_SPH_BIT * 4U))))

/******************************************************************************************
*********************************** * 2 SSICR1 *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_SSICR1    ((BITBANDING_SSICR1_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR1_OFFSET) * 32U)))

#define SSI3_BITBANDING_SSICR1_LBM    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR1_OFFSET) * 32U) + (SSI_SSICR1_R_LBM_BIT * 4U))))
#define SSI3_BITBANDING_SSICR1_SSE    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR1_OFFSET) * 32U) + (SSI_SSICR1_R_SSE_BIT * 4U))))
#define SSI3_BITBANDING_SSICR1_MS    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR1_OFFSET) * 32U) + (SSI_SSICR1_R_MS_BIT * 4U))))
#define SSI3_BITBANDING_SSICR1_EOT    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICR1_OFFSET) * 32U) + (SSI_SSICR1_R_EOT_BIT * 4U))))

/******************************************************************************************
*********************************** * 3 SSIDR *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_SSIDR    ((BITBANDING_SSIDR_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIDR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 4 SSISR *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_SSISR    ((BITBANDING_SSISR_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSISR_OFFSET) * 32U)))

#define SSI3_BITBANDING_SSISR_TFE    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSISR_OFFSET) * 32U) + (SSI_SSISR_R_TFE_BIT * 4U))))
#define SSI3_BITBANDING_SSISR_TNF    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSISR_OFFSET) * 32U) + (SSI_SSISR_R_TNF_BIT * 4U))))
#define SSI3_BITBANDING_SSISR_RNE    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSISR_OFFSET) * 32U) + (SSI_SSISR_R_RNE_BIT * 4U))))
#define SSI3_BITBANDING_SSISR_RFF    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSISR_OFFSET) * 32U) + (SSI_SSISR_R_RFF_BIT * 4U))))
#define SSI3_BITBANDING_SSISR_BSY    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSISR_OFFSET) * 32U) + (SSI_SSISR_R_BSY_BIT * 4U))))

/******************************************************************************************
*********************************** * 5 SSICPSR *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_SSICPSR    ((BITBANDING_SSICPSR_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICPSR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 6 SSIIM *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_SSIIM    ((BITBANDING_SSIIM_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIIM_OFFSET) * 32U)))

#define SSI3_BITBANDING_SSIIM_RORIM    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIIM_OFFSET) * 32U) + (SSI_SSIIM_R_RORIM_BIT * 4U))))
#define SSI3_BITBANDING_SSIIM_RTIM    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIIM_OFFSET) * 32U) + (SSI_SSIIM_R_RTIM_BIT * 4U))))
#define SSI3_BITBANDING_SSIIM_RXIM    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIIM_OFFSET) * 32U) + (SSI_SSIIM_R_RXIM_BIT * 4U))))
#define SSI3_BITBANDING_SSIIM_TXIM    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIIM_OFFSET) * 32U) + (SSI_SSIIM_R_TXIM_BIT * 4U))))

/******************************************************************************************
*********************************** * 7 SSIRIS *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_SSIRIS    ((BITBANDING_SSIRIS_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIRIS_OFFSET) * 32U)))

#define SSI3_BITBANDING_SSIRIS_RORRIS    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIRIS_OFFSET) * 32U) + (SSI_SSIRIS_R_RORRIS_BIT * 4U))))
#define SSI3_BITBANDING_SSIRIS_RTRIS    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIRIS_OFFSET) * 32U) + (SSI_SSIRIS_R_RTRIS_BIT * 4U))))
#define SSI3_BITBANDING_SSIRIS_RXRIS    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIRIS_OFFSET) * 32U) + (SSI_SSIRIS_R_RXRIS_BIT * 4U))))
#define SSI3_BITBANDING_SSIRIS_TXRIS    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIRIS_OFFSET) * 32U) + (SSI_SSIRIS_R_TXRIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 8 SSIMIS *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_SSIMIS    ((BITBANDING_SSIMIS_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIMIS_OFFSET) * 32U)))

#define SSI3_BITBANDING_SSIMIS_RORMIS    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIMIS_OFFSET) * 32U) + (SSI_SSIMIS_R_RORMIS_BIT * 4U))))
#define SSI3_BITBANDING_SSIMIS_RTMIS    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIMIS_OFFSET) * 32U) + (SSI_SSIMIS_R_RTMIS_BIT * 4U))))
#define SSI3_BITBANDING_SSIMIS_RXMIS    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIMIS_OFFSET) * 32U) + (SSI_SSIMIS_R_RXMIS_BIT * 4U))))
#define SSI3_BITBANDING_SSIMIS_TXMIS    (*((volatile const uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIMIS_OFFSET) * 32U) + (SSI_SSIMIS_R_TXMIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 9 SSIICR *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_SSIICR    ((BITBANDING_SSIICR_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIICR_OFFSET) * 32U)))

#define SSI3_BITBANDING_SSIICR_RORMIC    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIICR_OFFSET) * 32U) + (SSI_SSIICR_R_RORMIC_BIT * 4U))))
#define SSI3_BITBANDING_SSIICR_RTIC    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIICR_OFFSET) * 32U) + (SSI_SSIICR_R_RTIC_BIT * 4U))))

/******************************************************************************************
*********************************** * 10 SSIDMACTL *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_SSIDMACTL    ((BITBANDING_SSIDMACTL_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIDMACTL_OFFSET) * 32U)))

#define SSI3_BITBANDING_SSIDMACTL_RXDMAE    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIDMACTL_OFFSET) * 32U) + (SSI_SSIDMACTL_R_RXDMAE_BIT * 4U))))
#define SSI3_BITBANDING_SSIDMACTL_TXDMAE    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIDMACTL_OFFSET) * 32U) + (SSI_SSIDMACTL_R_TXDMAE_BIT * 4U))))

/******************************************************************************************
*********************************** * 11 SSICC *********************************************
******************************************************************************************/
#define SSI3_BITBANDING_SSICC    ((BITBANDING_SSICC_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICC_OFFSET) * 32U)))

#define SSI3_BITBANDING_SSICC_CS_0    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICC_OFFSET) * 32U) + ((SSI_SSICC_R_CS_BIT + 0U) * 4U))))
#define SSI3_BITBANDING_SSICC_CS_1    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICC_OFFSET) * 32U) + ((SSI_SSICC_R_CS_BIT + 1U) * 4U))))
#define SSI3_BITBANDING_SSICC_CS_2    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICC_OFFSET) * 32U) + ((SSI_SSICC_R_CS_BIT + 2U) * 4U))))
#define SSI3_BITBANDING_SSICC_CS_3    (*((volatile uint32_t *) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICC_OFFSET) * 32U) + ((SSI_SSICC_R_CS_BIT + 3U) * 4U))))

/******************************************************************************************
 *********************************** * 19 SSIPeriphID4 *********************************************
 ******************************************************************************************/
/* SSI3 APB PID4*/
#define SSI3_BITBANDING_SSIPeriphID4    ((BITBANDING_SSIPeriphID4_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIPeriphID4_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 20 SSIPeriphID5 *********************************************
 ******************************************************************************************/
/* SSI3 APB PID5*/
#define SSI3_BITBANDING_SSIPeriphID5    ((BITBANDING_SSIPeriphID5_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIPeriphID5_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 21 SSIPeriphID6 *********************************************
 ******************************************************************************************/
/* SSI3 APB PID6*/
#define SSI3_BITBANDING_SSIPeriphID6    ((BITBANDING_SSIPeriphID6_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIPeriphID6_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 22 SSIPeriphID7 *********************************************
 ******************************************************************************************/
/* SSI3 APB PID7*/
#define SSI3_BITBANDING_SSIPeriphID7    ((BITBANDING_SSIPeriphID7_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIPeriphID7_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 23 SSIPeriphID0 *********************************************
 ******************************************************************************************/
/* SSI3 APB PID0*/
#define SSI3_BITBANDING_SSIPeriphID0    ((BITBANDING_SSIPeriphID0_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIPeriphID0_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 24 SSIPeriphID1 *********************************************
 ******************************************************************************************/
/* SSI3 APB PID1*/
#define SSI3_BITBANDING_SSIPeriphID1    ((BITBANDING_SSIPeriphID1_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIPeriphID1_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 25 SSIPeriphID2 *********************************************
 ******************************************************************************************/
/* SSI3 APB PID2*/
#define SSI3_BITBANDING_SSIPeriphID2    ((BITBANDING_SSIPeriphID2_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIPeriphID2_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 26 SSIPeriphID3 *********************************************
 ******************************************************************************************/
/* SSI3 APB PID3*/
#define SSI3_BITBANDING_SSIPeriphID3    ((BITBANDING_SSIPeriphID3_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSIPeriphID3_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 27 SSICellID0 *********************************************
 ******************************************************************************************/
/* SSI3 APB CID0*/
#define SSI3_BITBANDING_SSICellID0    ((BITBANDING_SSICellID0_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICellID0_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 28 SSICellID1 *********************************************
 ******************************************************************************************/
/* SSI3 APB CID1*/
#define SSI3_BITBANDING_SSICellID1    ((BITBANDING_SSICellID1_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICellID1_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 29 SSICellID2 *********************************************
 ******************************************************************************************/
/* SSI3 APB CID2*/
#define SSI3_BITBANDING_SSICellID2    ((BITBANDING_SSICellID2_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICellID2_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 30 SSICellID3 *********************************************
 ******************************************************************************************/
/* SSI3 APB CID3*/
#define SSI3_BITBANDING_SSICellID3    ((BITBANDING_SSICellID3_TypeDef*) (SSI_BITBANDING_BASE + ((SSI3_OFFSET + SSI_SSICellID3_OFFSET) * 32U)))

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_SSI_REGISTERPERIPHERAL_BITBANDING_MODULE3_H_ */
