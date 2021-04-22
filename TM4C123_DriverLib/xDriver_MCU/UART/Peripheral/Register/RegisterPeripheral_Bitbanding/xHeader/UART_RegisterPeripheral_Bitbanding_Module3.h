/**
 *
 * @file UART_RegisterPeripheral_Bitbanding_Module3.h
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
 * @verbatim 22 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description * 22 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_UART_REGISTERPERIPHERAL_BITBANDING_MODULE3_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_UART_REGISTERPERIPHERAL_BITBANDING_MODULE3_H_

#include <xDriver_MCU/UART/Peripheral/Register/xHeader/UART_RegisterAddress.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterDefines/UART_RegisterDefines.h>
#include <xDriver_MCU/UART/Peripheral/Struct/xHeader/UART_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ UART3 *********************************************
******************************************************************************************/
#define UART3_BITBANDING    ((UART_BITBANDING_TypeDef*) (UART_BITBANDING_BASE + (UART3_OFFSET * 32U)))

/******************************************************************************************
*********************************** * 1 DR *********************************************
******************************************************************************************/
#define UART3_BITBANDING_DR    ((BITBANDING_UARTDR_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_DR_OFFSET) * 32U)))

#define UART3_BITBANDING_DR_FE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_DR_OFFSET) * 32U) + (UART_DR_R_FE_BIT * 4U))))
#define UART3_BITBANDING_DR_PE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_DR_OFFSET) * 32U) + (UART_DR_R_PE_BIT * 4U))))
#define UART3_BITBANDING_DR_BE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_DR_OFFSET) * 32U) + (UART_DR_R_BE_BIT * 4U))))
#define UART3_BITBANDING_DR_OE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_DR_OFFSET) * 32U) + (UART_DR_R_OE_BIT * 4U))))

/******************************************************************************************
*********************************** * 2 RSR *********************************************
******************************************************************************************/
#define UART3_BITBANDING_RSR    ((BITBANDING_UARTRSR_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_RSR_OFFSET) * 32U)))
#define UART3_BITBANDING_ECR    ((BITBANDING_UARTECR_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_ECR_OFFSET) * 32U)))

#define UART3_BITBANDING_RSR_FE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_RSR_OFFSET) * 32U) + (UART_RSR_R_FE_BIT * 4U))))
#define UART3_BITBANDING_RSR_PE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_RSR_OFFSET) * 32U) + (UART_RSR_R_PE_BIT * 4U))))
#define UART3_BITBANDING_RSR_BE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_RSR_OFFSET) * 32U) + (UART_RSR_R_BE_BIT * 4U))))
#define UART3_BITBANDING_RSR_OE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_RSR_OFFSET) * 32U) + (UART_RSR_R_OE_BIT * 4U))))
#define UART3_BITBANDING_RSR_INRDC    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_RSR_OFFSET) * 32U) + (UART_RSR_R_INRDC_BIT * 4U))))

/******************************************************************************************
*********************************** * 3 FR *********************************************
******************************************************************************************/
#define UART3_BITBANDING_FR    ((BITBANDING_UARTFR_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_FR_OFFSET) * 32U)))

#define UART3_BITBANDING_FR_CTS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_CTS_BIT * 4U))))
#define UART3_BITBANDING_FR_BUSY    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_BUSY_BIT * 4U))))
#define UART3_BITBANDING_FR_RXFE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_RXFE_BIT * 4U))))
#define UART3_BITBANDING_FR_TXFF    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_TXFF_BIT * 4U))))
#define UART3_BITBANDING_FR_RXFF    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_RXFF_BIT * 4U))))
#define UART3_BITBANDING_FR_TXFE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_TXFE_BIT * 4U))))

/******************************************************************************************
*********************************** * 4 ILPR *********************************************
******************************************************************************************/
#define UART3_BITBANDING_ILPR    ((BITBANDING_UARTILPR_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_ILPR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 5 IBRD *********************************************
******************************************************************************************/
#define UART3_BITBANDING_IBRD    ((BITBANDING_UARTIBRD_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IBRD_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 6 FBRD *********************************************
******************************************************************************************/
#define UART3_BITBANDING_FBRD    ((BITBANDING_UARTFBRD_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_FBRD_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 7 LCRH *********************************************
******************************************************************************************/
#define UART3_BITBANDING_LCRH    ((BITBANDING_UARTLCRH_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_LCRH_OFFSET) * 32U)))

#define UART3_BITBANDING_LCRH_BRK    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_LCRH_OFFSET) * 32U) + (UART_LCRH_R_BRK_BIT * 4U))))
#define UART3_BITBANDING_LCRH_PEN    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_LCRH_OFFSET) * 32U) + (UART_LCRH_R_PEN_BIT * 4U))))
#define UART3_BITBANDING_LCRH_EPS    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_LCRH_OFFSET) * 32U) + (UART_LCRH_R_EPS_BIT * 4U))))
#define UART3_BITBANDING_LCRH_STP2    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_LCRH_OFFSET) * 32U) + (UART_LCRH_R_STP2_BIT * 4U))))
#define UART3_BITBANDING_LCRH_FEN    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_LCRH_OFFSET) * 32U) + (UART_LCRH_R_FEN_BIT * 4U))))
#define UART3_BITBANDING_LCRH_WLEN_1    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_LCRH_OFFSET) * 32U) + ((UART_LCRH_R_WLEN_BIT + 0U) * 4U))))
#define UART3_BITBANDING_LCRH_WLEN_2    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_LCRH_OFFSET) * 32U) + ((UART_LCRH_R_WLEN_BIT + 1U) * 4U))))
#define UART3_BITBANDING_LCRH_SPS    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_LCRH_OFFSET) * 32U) + (UART_LCRH_R_SPS_BIT * 4U))))

/******************************************************************************************
*********************************** * 8 CTL *********************************************
******************************************************************************************/
#define UART3_BITBANDING_CTL    ((BITBANDING_UARTCTL_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CTL_OFFSET) * 32U)))

#define UART3_BITBANDING_CTL_EN    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_EN_BIT * 4U))))
#define UART3_BITBANDING_CTL_SIREN    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_SIREN_BIT * 4U))))
#define UART3_BITBANDING_CTL_SIRLP    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_SIRLP_BIT * 4U))))
#define UART3_BITBANDING_CTL_SMART    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_SMART_BIT * 4U))))
#define UART3_BITBANDING_CTL_EOT    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_EOT_BIT * 4U))))
#define UART3_BITBANDING_CTL_HSE    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_HSE_BIT * 4U))))
#define UART3_BITBANDING_CTL_LBE    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_LBE_BIT * 4U))))
#define UART3_BITBANDING_CTL_TXE    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_TXE_BIT * 4U))))
#define UART3_BITBANDING_CTL_RXE    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_RXE_BIT * 4U))))
#define UART3_BITBANDING_CTL_RTS    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_RTS_BIT * 4U))))
#define UART3_BITBANDING_CTL_RTSEN    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_RTSEN_BIT * 4U))))
#define UART3_BITBANDING_CTL_CTSEN    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_CTSEN_BIT * 4U))))

/******************************************************************************************
*********************************** * 9 IFLS *********************************************
******************************************************************************************/
#define UART3_BITBANDING_IFLS    ((BITBANDING_UARTIFLS_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IFLS_OFFSET) * 32U)))

#define UART3_BITBANDING_IFLS_TXIFLSEL_0    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_TXIFLSEL_BIT + 0U) * 4U))))
#define UART3_BITBANDING_IFLS_TXIFLSEL_1    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_TXIFLSEL_BIT + 1U) * 4U))))
#define UART3_BITBANDING_IFLS_TXIFLSEL_2    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_TXIFLSEL_BIT + 2U) * 4U))))
#define UART3_BITBANDING_IFLS_TXIFLSEL_3    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_TXIFLSEL_BIT + 3U) * 4U))))
#define UART3_BITBANDING_IFLS_RXIFLSEL_0    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_RXIFLSEL_BIT + 0U) * 4U))))
#define UART3_BITBANDING_IFLS_RXIFLSEL_1    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_RXIFLSEL_BIT + 1U) * 4U))))
#define UART3_BITBANDING_IFLS_RXIFLSEL_2    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_RXIFLSEL_BIT + 2U) * 4U))))
#define UART3_BITBANDING_IFLS_RXIFLSEL_3    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_RXIFLSEL_BIT + 3U) * 4U))))

/******************************************************************************************
*********************************** * 10 IM *********************************************
******************************************************************************************/
#define UART3_BITBANDING_IM    ((BITBANDING_UARTIM_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IM_OFFSET) * 32U)))

#define UART3_BITBANDING_IM_CTSIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_CTSIM_BIT * 4U))))
#define UART3_BITBANDING_IM_RXIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_RXIM_BIT * 4U))))
#define UART3_BITBANDING_IM_TXIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_TXIM_BIT * 4U))))
#define UART3_BITBANDING_IM_RTIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_RTIM_BIT * 4U))))
#define UART3_BITBANDING_IM_FEIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_FEIM_BIT * 4U))))
#define UART3_BITBANDING_IM_PEIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_PEIM_BIT * 4U))))
#define UART3_BITBANDING_IM_BEIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_BEIM_BIT * 4U))))
#define UART3_BITBANDING_IM_OEIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_OEIM_BIT * 4U))))
#define UART3_BITBANDING_IM_BIT9IM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_BIT9IM_BIT * 4U))))

/******************************************************************************************
*********************************** * 11 RIS *********************************************
******************************************************************************************/
#define UART3_BITBANDING_RIS    ((BITBANDING_UARTRIS_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_RIS_OFFSET) * 32U)))

#define UART3_BITBANDING_RIS_CTSRIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_CTSRIS_BIT * 4U))))
#define UART3_BITBANDING_RIS_RXRIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_RXRIS_BIT * 4U))))
#define UART3_BITBANDING_RIS_TXRIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_TXRIS_BIT * 4U))))
#define UART3_BITBANDING_RIS_RTRIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_RTRIS_BIT * 4U))))
#define UART3_BITBANDING_RIS_FERIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_FERIS_BIT * 4U))))
#define UART3_BITBANDING_RIS_PERIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_PERIS_BIT * 4U))))
#define UART3_BITBANDING_RIS_BERIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_BERIS_BIT * 4U))))
#define UART3_BITBANDING_RIS_OERIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_OERIS_BIT * 4U))))
#define UART3_BITBANDING_RIS_BIT9RIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_BIT9RIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 12 MIS *********************************************
******************************************************************************************/
#define UART3_BITBANDING_MIS    ((BITBANDING_UARTMIS_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_MIS_OFFSET) * 32U)))

#define UART3_BITBANDING_MIS_CTSMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_CTSMIS_BIT * 4U))))
#define UART3_BITBANDING_MIS_RXMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_RXMIS_BIT * 4U))))
#define UART3_BITBANDING_MIS_TXMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_TXMIS_BIT * 4U))))
#define UART3_BITBANDING_MIS_RTMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_RTMIS_BIT * 4U))))
#define UART3_BITBANDING_MIS_FEMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_FEMIS_BIT * 4U))))
#define UART3_BITBANDING_MIS_PEMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_PEMIS_BIT * 4U))))
#define UART3_BITBANDING_MIS_BEMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_BEMIS_BIT * 4U))))
#define UART3_BITBANDING_MIS_OEMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_OEMIS_BIT * 4U))))
#define UART3_BITBANDING_MIS_BIT9MIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_BIT9MIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 13 ICR *********************************************
******************************************************************************************/
#define UART3_BITBANDING_ICR    ((BITBANDING_UARTICR_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_ICR_OFFSET) * 32U)))

#define UART3_BITBANDING_ICR_CTSMIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_CTSMIC_BIT * 4U))))
#define UART3_BITBANDING_ICR_RXIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_RXIC_BIT * 4U))))
#define UART3_BITBANDING_ICR_TXIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_TXIC_BIT * 4U))))
#define UART3_BITBANDING_ICR_RTIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_RTIC_BIT * 4U))))
#define UART3_BITBANDING_ICR_FEIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_FEIC_BIT * 4U))))
#define UART3_BITBANDING_ICR_PEIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_PEIC_BIT * 4U))))
#define UART3_BITBANDING_ICR_BEIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_BEIC_BIT * 4U))))
#define UART3_BITBANDING_ICR_OEIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_OEIC_BIT * 4U))))
#define UART3_BITBANDING_ICR_BIT9IC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_BIT9IC_BIT * 4U))))

/******************************************************************************************
*********************************** * 14 DMACTL *********************************************
******************************************************************************************/
#define UART3_BITBANDING_DMACTL    ((BITBANDING_UARTDMACTL_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_DMACTL_OFFSET) * 32U)))

#define UART3_BITBANDING_DMACTL_RXDMAE    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_DMACTL_OFFSET) * 32U) + (UART_DMACTL_R_RXDMAE_BIT * 4U))))
#define UART3_BITBANDING_DMACTL_TXDMAE    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_DMACTL_OFFSET) * 32U) + (UART_DMACTL_R_TXDMAE_BIT * 4U))))
#define UART3_BITBANDING_DMACTL_DMAERR    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_DMACTL_OFFSET) * 32U) + (UART_DMACTL_R_DMAERR_BIT * 4U))))

/******************************************************************************************
*********************************** * 15 9BITADDR *********************************************
******************************************************************************************/
#define UART3_BITBANDING_9BITADDR    ((BITBANDING_UART9BITADDR_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_9BITADDR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 16 9BITAMASK *********************************************
******************************************************************************************/
#define UART3_BITBANDING_9BITAMASK    ((BITBANDING_UART9BITAMASK_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_9BITAMASK_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 17 PP *********************************************
******************************************************************************************/
#define UART3_BITBANDING_PP    ((BITBANDING_UARTPP_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_PP_OFFSET) * 32U)))

#define UART3_BITBANDING_PP_SC    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_PP_OFFSET) * 32U) + (UART_PP_R_SC_BIT * 4U))))
#define UART3_BITBANDING_PP_NB    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_PP_OFFSET) * 32U) + (UART_PP_R_NB_BIT * 4U))))

/******************************************************************************************
*********************************** * 18 CC *********************************************
******************************************************************************************/
#define UART3_BITBANDING_CC    ((BITBANDING_UARTCC_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CC_OFFSET) * 32U)))

#define UART3_BITBANDING_CC_CS_0    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CC_OFFSET) * 32U) + ((UART_CC_R_CS_BIT + 0U) * 4U))))
#define UART3_BITBANDING_CC_CS_1    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CC_OFFSET) * 32U) + ((UART_CC_R_CS_BIT + 1U) * 4U))))
#define UART3_BITBANDING_CC_CS_2    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CC_OFFSET) * 32U) + ((UART_CC_R_CS_BIT + 2U) * 4U))))
#define UART3_BITBANDING_CC_CS_3    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CC_OFFSET) * 32U) + ((UART_CC_R_CS_BIT + 3U) * 4U))))


/******************************************************************************************
 *********************************** * 19 PeriphID4 *********************************************
 ******************************************************************************************/
/* UART3 APB PID4*/
#define UART3_BITBANDING_PeriphID4    ((BITBANDING_UARTPeriphID4_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_PeriphID4_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 20 PeriphID5 *********************************************
 ******************************************************************************************/
/* UART3 APB PID5*/
#define UART3_BITBANDING_PeriphID5    ((BITBANDING_UARTPeriphID5_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_PeriphID5_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 21 PeriphID6 *********************************************
 ******************************************************************************************/
/* UART3 APB PID6*/
#define UART3_BITBANDING_PeriphID6    ((BITBANDING_UARTPeriphID6_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_PeriphID6_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 22 PeriphID7 *********************************************
 ******************************************************************************************/
/* UART3 APB PID7*/
#define UART3_BITBANDING_PeriphID7    ((BITBANDING_UARTPeriphID7_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_PeriphID7_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 23 PeriphID0 *********************************************
 ******************************************************************************************/
/* UART3 APB PID0*/
#define UART3_BITBANDING_PeriphID0    ((BITBANDING_UARTPeriphID0_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_PeriphID0_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 24 PeriphID1 *********************************************
 ******************************************************************************************/
/* UART3 APB PID1*/
#define UART3_BITBANDING_PeriphID1    ((BITBANDING_UARTPeriphID1_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_PeriphID1_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 25 PeriphID2 *********************************************
 ******************************************************************************************/
/* UART3 APB PID2*/
#define UART3_BITBANDING_PeriphID2    ((BITBANDING_UARTPeriphID2_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_PeriphID2_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 26 PeriphID3 *********************************************
 ******************************************************************************************/
/* UART3 APB PID3*/
#define UART3_BITBANDING_PeriphID3    ((BITBANDING_UARTPeriphID3_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_PeriphID3_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 27 CellID0 *********************************************
 ******************************************************************************************/
/* UART3 APB CID0*/
#define UART3_BITBANDING_CellID0    ((BITBANDING_UARTCellID0_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CellID0_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 28 CellID1 *********************************************
 ******************************************************************************************/
/* UART3 APB CID1*/
#define UART3_BITBANDING_CellID1    ((BITBANDING_UARTCellID1_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CellID1_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 29 CellID2 *********************************************
 ******************************************************************************************/
/* UART3 APB CID2*/
#define UART3_BITBANDING_CellID2    ((BITBANDING_UARTCellID2_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CellID2_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 30 CellID3 *********************************************
 ******************************************************************************************/
/* UART3 APB CID3*/
#define UART3_BITBANDING_CellID3    ((BITBANDING_UARTCellID3_TypeDef*) (UART_BITBANDING_BASE + ((UART3_OFFSET + UART_CellID3_OFFSET) * 32U)))

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_UART_REGISTERPERIPHERAL_BITBANDING_MODULE3_H_ */
