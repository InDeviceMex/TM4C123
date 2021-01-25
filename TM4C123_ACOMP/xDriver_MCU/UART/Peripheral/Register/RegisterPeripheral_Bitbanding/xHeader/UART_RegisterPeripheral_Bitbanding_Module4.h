/**
 *
 * @file UART_RegisterPeripheral_Bitbanding_Module4.h
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
 * Date           Author     Version     Description
 * 22 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_UART_REGISTERPERIPHERAL_BITBANDING_MODULE4_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_UART_REGISTERPERIPHERAL_BITBANDING_MODULE4_H_

#include <xDriver_MCU/UART/Peripheral/Register/xHeader/UART_RegisterAddress.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterDefines/UART_RegisterDefines.h>
#include <xDriver_MCU/UART/Peripheral/Struct/xHeader/UART_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ UART4 *********************************************
******************************************************************************************/
#define UART4_BITBANDING        (((UART_BITBANDING_TypeDef*)(UART_BITBANDING_BASE+(UART4_OFFSET*32U))))

/******************************************************************************************
************************************ 1 UARTDR *********************************************
******************************************************************************************/
#define UART4_BITBANDING_UARTDR       (((BITBANDING_UARTDR_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTDR_OFFSET)*32U))))

#define UART4_BITBANDING_UARTDR_FE        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTDR_OFFSET)*32U)+(UART_UARTDR_R_FE_BIT*4U))))
#define UART4_BITBANDING_UARTDR_PE        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTDR_OFFSET)*32U)+(UART_UARTDR_R_PE_BIT*4U))))
#define UART4_BITBANDING_UARTDR_BE        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTDR_OFFSET)*32U)+(UART_UARTDR_R_BE_BIT*4U))))
#define UART4_BITBANDING_UARTDR_OE        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTDR_OFFSET)*32U)+(UART_UARTDR_R_OE_BIT*4U))))

/******************************************************************************************
************************************ 2 UARTRSR *********************************************
******************************************************************************************/
#define UART4_BITBANDING_UARTRSR      (((BITBANDING_UARTRSR_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTRSR_OFFSET)*32U))))
#define UART4_BITBANDING_UARTECR      (((BITBANDING_UARTECR_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTECR_OFFSET)*32U))))

#define UART4_BITBANDING_UARTRSR_FE        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTRSR_OFFSET)*32U)+(UART_UARTRSR_R_FE_BIT*4U))))
#define UART4_BITBANDING_UARTRSR_PE        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTRSR_OFFSET)*32U)+(UART_UARTRSR_R_PE_BIT*4U))))
#define UART4_BITBANDING_UARTRSR_BE       (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTRSR_OFFSET)*32U)+(UART_UARTRSR_R_BE_BIT*4U))))
#define UART4_BITBANDING_UARTRSR_OE        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTRSR_OFFSET)*32U)+(UART_UARTRSR_R_OE_BIT*4U))))
#define UART4_BITBANDING_UARTRSR_INRDC     (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTRSR_OFFSET)*32U)+(UART_UARTRSR_R_INRDC_BIT*4U))))

/******************************************************************************************
************************************ 3 UARTFR *********************************************
******************************************************************************************/
#define UART4_BITBANDING_UARTFR       (((BITBANDING_UARTFR_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTFR_OFFSET)*32U))))

#define UART4_BITBANDING_UARTFR_CTS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTFR_OFFSET)*32U)+(UART_UARTFR_R_CTS_BIT*4U))))
#define UART4_BITBANDING_UARTFR_BUSY        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTFR_OFFSET)*32U)+(UART_UARTFR_R_BUSY_BIT*4U))))
#define UART4_BITBANDING_UARTFR_RXFE        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTFR_OFFSET)*32U)+(UART_UARTFR_R_RXFE_BIT*4U))))
#define UART4_BITBANDING_UARTFR_TXFF        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTFR_OFFSET)*32U)+(UART_UARTFR_R_TXFF_BIT*4U))))
#define UART4_BITBANDING_UARTFR_RXFF     (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTFR_OFFSET)*32U)+(UART_UARTFR_R_RXFF_BIT*4U))))
#define UART4_BITBANDING_UARTFR_TXFE     (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTFR_OFFSET)*32U)+(UART_UARTFR_R_TXFE_BIT*4U))))

/******************************************************************************************
************************************ 4 UARTILPR *********************************************
******************************************************************************************/
#define UART4_BITBANDING_UARTILPR       (((BITBANDING_UARTILPR_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTILPR_OFFSET)*32U))))

/******************************************************************************************
************************************ 5 UARTIBRD *********************************************
******************************************************************************************/
#define UART4_BITBANDING_UARTIBRD       (((BITBANDING_UARTIBRD_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIBRD_OFFSET)*32U))))

/******************************************************************************************
************************************6 UARTFBRD *********************************************
******************************************************************************************/
#define UART4_BITBANDING_UARTFBRD       (((BITBANDING_UARTFBRD_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTFBRD_OFFSET)*32U))))

/******************************************************************************************
************************************ 7 UARTLCRH *********************************************
******************************************************************************************/
#define UART4_BITBANDING_UARTLCRH       (((BITBANDING_UARTLCRH_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTLCRH_OFFSET)*32U))))

#define UART4_BITBANDING_UARTLCRH_BRK        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTLCRH_OFFSET)*32U)+(UART_UARTLCRH_R_BRK_BIT*4U))))
#define UART4_BITBANDING_UARTLCRH_PEN        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTLCRH_OFFSET)*32U)+(UART_UARTLCRH_R_PEN_BIT*4U))))
#define UART4_BITBANDING_UARTLCRH_EPS        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTLCRH_OFFSET)*32U)+(UART_UARTLCRH_R_EPS_BIT*4U))))
#define UART4_BITBANDING_UARTLCRH_STP2        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTLCRH_OFFSET)*32U)+(UART_UARTLCRH_R_STP2_BIT*4U))))
#define UART4_BITBANDING_UARTLCRH_FEN     (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTLCRH_OFFSET)*32U)+(UART_UARTLCRH_R_FEN_BIT*4U))))
#define UART4_BITBANDING_UARTLCRH_WLEN_1     (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTLCRH_OFFSET)*32U)+((UART_UARTLCRH_R_WLEN_BIT + 0U)*4U))))
#define UART4_BITBANDING_UARTLCRH_WLEN_2     (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTLCRH_OFFSET)*32U)+((UART_UARTLCRH_R_WLEN_BIT + 1U)*4U))))
#define UART4_BITBANDING_UARTLCRH_SPS     (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTLCRH_OFFSET)*32U)+(UART_UARTLCRH_R_SPS_BIT*4U))))

/******************************************************************************************
************************************ 8 UARTCTL *********************************************
******************************************************************************************/
#define UART4_BITBANDING_UARTCTL       (((BITBANDING_UARTCTL_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32U))))

#define UART4_BITBANDING_UARTCTL_UARTEN        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32U)+(UART_UARTCTL_R_UARTEN_BIT*4U))))
#define UART4_BITBANDING_UARTCTL_SIREN        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32U)+(UART_UARTCTL_R_SIREN_BIT*4U))))
#define UART4_BITBANDING_UARTCTL_SIRLP        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32U)+(UART_UARTCTL_R_SIRLP_BIT*4U))))
#define UART4_BITBANDING_UARTCTL_SMART        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32U)+(UART_UARTCTL_R_SMART_BIT*4U))))
#define UART4_BITBANDING_UARTCTL_EOT        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32U)+(UART_UARTCTL_R_EOT_BIT*4U))))
#define UART4_BITBANDING_UARTCTL_HSE        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32U)+(UART_UARTCTL_R_HSE_BIT*4U))))
#define UART4_BITBANDING_UARTCTL_LBE        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32U)+(UART_UARTCTL_R_LBE_BIT*4U))))
#define UART4_BITBANDING_UARTCTL_TXE        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32U)+(UART_UARTCTL_R_TXE_BIT*4U))))
#define UART4_BITBANDING_UARTCTL_RXE        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32U)+(UART_UARTCTL_R_RXE_BIT*4U))))
#define UART4_BITBANDING_UARTCTL_RTS        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32U)+(UART_UARTCTL_R_RTS_BIT*4U))))
#define UART4_BITBANDING_UARTCTL_RTSEN        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32U)+(UART_UARTCTL_R_RTSEN_BIT*4U))))
#define UART4_BITBANDING_UARTCTL_CTSEN        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32U)+(UART_UARTCTL_R_CTSEN_BIT*4U))))

/******************************************************************************************
************************************ 9 UARTIFLS *********************************************
******************************************************************************************/
#define UART4_BITBANDING_UARTIFLS       (((BITBANDING_UARTIFLS_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIFLS_OFFSET)*32U))))

#define UART4_BITBANDING_UARTIFLS_TXIFLSEL_0       (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIFLS_OFFSET)*32U)+((UART_UARTIFLS_R_TXIFLSEL_BIT+0U)*4U))))
#define UART4_BITBANDING_UARTIFLS_TXIFLSEL_1       (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIFLS_OFFSET)*32U)+((UART_UARTIFLS_R_TXIFLSEL_BIT+1U)*4U))))
#define UART4_BITBANDING_UARTIFLS_TXIFLSEL_2       (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIFLS_OFFSET)*32U)+((UART_UARTIFLS_R_TXIFLSEL_BIT+2U)*4U))))
#define UART4_BITBANDING_UARTIFLS_TXIFLSEL_3       (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIFLS_OFFSET)*32U)+((UART_UARTIFLS_R_TXIFLSEL_BIT+3U)*4U))))
#define UART4_BITBANDING_UARTIFLS_RXIFLSEL_0        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIFLS_OFFSET)*32U)+((UART_UARTIFLS_R_RXIFLSEL_BIT+0U)*4U))))
#define UART4_BITBANDING_UARTIFLS_RXIFLSEL_1        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIFLS_OFFSET)*32U)+((UART_UARTIFLS_R_RXIFLSEL_BIT+1U)*4U))))
#define UART4_BITBANDING_UARTIFLS_RXIFLSEL_2        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIFLS_OFFSET)*32U)+((UART_UARTIFLS_R_RXIFLSEL_BIT+2U)*4U))))
#define UART4_BITBANDING_UARTIFLS_RXIFLSEL_3        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIFLS_OFFSET)*32U)+((UART_UARTIFLS_R_RXIFLSEL_BIT+3U)*4U))))

/******************************************************************************************
************************************ 10 UARTIM *********************************************
******************************************************************************************/
#define UART4_BITBANDING_UARTIM       (((BITBANDING_UARTIM_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIM_OFFSET)*32U))))

#define UART4_BITBANDING_UARTIM_CTSIM        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIM_OFFSET)*32U)+(UART_UARTIM_R_CTSIM_BIT*4U))))
#define UART4_BITBANDING_UARTIM_RXIM        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIM_OFFSET)*32U)+(UART_UARTIM_R_RXIM_BIT*4U))))
#define UART4_BITBANDING_UARTIM_TXIM        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIM_OFFSET)*32U)+(UART_UARTIM_R_TXIM_BIT*4U))))
#define UART4_BITBANDING_UARTIM_RTIM        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIM_OFFSET)*32U)+(UART_UARTIM_R_RTIM_BIT*4U))))
#define UART4_BITBANDING_UARTIM_FEIM        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIM_OFFSET)*32U)+(UART_UARTIM_R_FEIM_BIT*4U))))
#define UART4_BITBANDING_UARTIM_PEIM        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIM_OFFSET)*32U)+(UART_UARTIM_R_PEIM_BIT*4U))))
#define UART4_BITBANDING_UARTIM_BEIM        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIM_OFFSET)*32U)+(UART_UARTIM_R_BEIM_BIT*4U))))
#define UART4_BITBANDING_UARTIM_OEIM        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIM_OFFSET)*32U)+(UART_UARTIM_R_OEIM_BIT*4U))))
#define UART4_BITBANDING_UARTIM_BIT9IM        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTIM_OFFSET)*32U)+(UART_UARTIM_R_BIT9IM_BIT*4U))))

/******************************************************************************************
************************************ 11 UARTRIS *********************************************
******************************************************************************************/
#define UART4_BITBANDING_UARTRIS       (((BITBANDING_UARTRIS_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32U))))

#define UART4_BITBANDING_UARTRIS_CTSRIS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32U)+(UART_UARTRIS_R_CTSRIS_BIT*4U))))
#define UART4_BITBANDING_UARTRIS_RXRIS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32U)+(UART_UARTRIS_R_RXRIS_BIT*4U))))
#define UART4_BITBANDING_UARTRIS_TXRIS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32U)+(UART_UARTRIS_R_TXRIS_BIT*4U))))
#define UART4_BITBANDING_UARTRIS_RTRIS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32U)+(UART_UARTRIS_R_RTRIS_BIT*4U))))
#define UART4_BITBANDING_UARTRIS_FERIS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32U)+(UART_UARTRIS_R_FERIS_BIT*4U))))
#define UART4_BITBANDING_UARTRIS_PERIS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32U)+(UART_UARTRIS_R_PERIS_BIT*4U))))
#define UART4_BITBANDING_UARTRIS_BERIS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32U)+(UART_UARTRIS_R_BERIS_BIT*4U))))
#define UART4_BITBANDING_UARTRIS_OERIS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32U)+(UART_UARTRIS_R_OERIS_BIT*4U))))
#define UART4_BITBANDING_UARTRIS_BIT9RIS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32U)+(UART_UARTRIS_R_BIT9RIS_BIT*4U))))

/******************************************************************************************
************************************ 12 UARTMIS *********************************************
******************************************************************************************/
#define UART4_BITBANDING_UARTMIS       (((BITBANDING_UARTMIS_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32U))))

#define UART4_BITBANDING_UARTMIS_CTSMIS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32U)+(UART_UARTMIS_R_CTSMIS_BIT*4U))))
#define UART4_BITBANDING_UARTMIS_RXMIS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32U)+(UART_UARTMIS_R_RXMIS_BIT*4U))))
#define UART4_BITBANDING_UARTMIS_TXMIS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32U)+(UART_UARTMIS_R_TXMIS_BIT*4U))))
#define UART4_BITBANDING_UARTMIS_RTMIS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32U)+(UART_UARTMIS_R_RTMIS_BIT*4U))))
#define UART4_BITBANDING_UARTMIS_FEMIS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32U)+(UART_UARTMIS_R_FEMIS_BIT*4U))))
#define UART4_BITBANDING_UARTMIS_PEMIS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32U)+(UART_UARTMIS_R_PEMIS_BIT*4U))))
#define UART4_BITBANDING_UARTMIS_BEMIS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32U)+(UART_UARTMIS_R_BEMIS_BIT*4U))))
#define UART4_BITBANDING_UARTMIS_OEMIS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32U)+(UART_UARTMIS_R_OEMIS_BIT*4U))))
#define UART4_BITBANDING_UARTMIS_BIT9MIS        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32U)+(UART_UARTMIS_R_BIT9MIS_BIT*4U))))

/******************************************************************************************
************************************ 13 UARTICR *********************************************
******************************************************************************************/
#define UART4_BITBANDING_UARTICR       (((BITBANDING_UARTICR_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTICR_OFFSET)*32U))))

#define UART4_BITBANDING_UARTICR_CTSMIC        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTICR_OFFSET)*32U)+(UART_UARTICR_R_CTSMIC_BIT*4U))))
#define UART4_BITBANDING_UARTICR_RXIC        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTICR_OFFSET)*32U)+(UART_UARTICR_R_RXIC_BIT*4U))))
#define UART4_BITBANDING_UARTICR_TXIC        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTICR_OFFSET)*32U)+(UART_UARTICR_R_TXIC_BIT*4U))))
#define UART4_BITBANDING_UARTICR_RTIC        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTICR_OFFSET)*32U)+(UART_UARTICR_R_RTIC_BIT*4U))))
#define UART4_BITBANDING_UARTICR_FEIC        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTICR_OFFSET)*32U)+(UART_UARTICR_R_FEIC_BIT*4U))))
#define UART4_BITBANDING_UARTICR_PEIC        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTICR_OFFSET)*32U)+(UART_UARTICR_R_PEIC_BIT*4U))))
#define UART4_BITBANDING_UARTICR_BEIC        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTICR_OFFSET)*32U)+(UART_UARTICR_R_BEIC_BIT*4U))))
#define UART4_BITBANDING_UARTICR_OEIC        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTICR_OFFSET)*32U)+(UART_UARTICR_R_OEIC_BIT*4U))))
#define UART4_BITBANDING_UARTICR_BIT9IC        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTICR_OFFSET)*32U)+(UART_UARTICR_R_BIT9IC_BIT*4U))))

/******************************************************************************************
************************************ 14 UARTDMACTL *********************************************
******************************************************************************************/
#define UART4_BITBANDING_UARTDMACTL       (((BITBANDING_UARTDMACTL_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTDMACTL_OFFSET)*32U))))

#define UART4_BITBANDING_UARTDMACTL_RXDMAE        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTDMACTL_OFFSET)*32U)+(UART_UARTDMACTL_R_RXDMAE_BIT*4U))))
#define UART4_BITBANDING_UARTDMACTL_TXDMAE       (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTDMACTL_OFFSET)*32U)+(UART_UARTDMACTL_R_TXDMAE_BIT*4U))))
#define UART4_BITBANDING_UARTDMACTL_DMAERR        (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTDMACTL_OFFSET)*32U)+(UART_UARTDMACTL_R_DMAERR_BIT*4U))))

/******************************************************************************************
************************************ 15 UART9BITADDR *********************************************
******************************************************************************************/
#define UART4_BITBANDING_UART9BITADDR       (((BITBANDING_UART9BITADDR_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UART9BITADDR_OFFSET)*32U))))

/******************************************************************************************
************************************ 16 UART9BITAMASK *********************************************
******************************************************************************************/
#define UART4_BITBANDING_UART9BITAMASK       (((BITBANDING_UART9BITAMASK_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UART9BITAMASK_OFFSET)*32U))))

/******************************************************************************************
************************************ 17 UARTPP *********************************************
******************************************************************************************/
#define UART4_BITBANDING_UARTPP       (((BITBANDING_UARTPP_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTPP_OFFSET)*32U))))

#define UART4_BITBANDING_UARTPP_SC        (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTPP_OFFSET)*32U)+(UART_UARTPP_R_SC_BIT*4U))))
#define UART4_BITBANDING_UARTPP_NB       (*((volatile const uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTPP_OFFSET)*32U)+(UART_UARTPP_R_NB_BIT*4U))))

/******************************************************************************************
************************************ 18 UARTCC *********************************************
******************************************************************************************/
#define UART4_BITBANDING_UARTCC       (((BITBANDING_UARTCC_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCC_OFFSET)*32U))))

#define UART4_BITBANDING_UARTCC_CS_0       (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCC_OFFSET)*32U)+((UART_UARTCC_R_CS_BIT+0U)*4U))))
#define UART4_BITBANDING_UARTCC_CS_1       (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCC_OFFSET)*32U)+((UART_UARTCC_R_CS_BIT+1U)*4U))))
#define UART4_BITBANDING_UARTCC_CS_2       (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCC_OFFSET)*32U)+((UART_UARTCC_R_CS_BIT+2U)*4U))))
#define UART4_BITBANDING_UARTCC_CS_3       (*((volatile uint32_t *)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCC_OFFSET)*32U)+((UART_UARTCC_R_CS_BIT+3U)*4U))))


/******************************************************************************************
 ************************************ 19 UARTPeriphID4 *********************************************
 ******************************************************************************************/
/* UART4 APB PID4*/
#define UART4_BITBANDING_UARTPeriphID4       (((BITBANDING_UARTPeriphID4_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTPeriphID4_OFFSET)*32U))))

/******************************************************************************************
 ************************************ 20 UARTPeriphID5 *********************************************
 ******************************************************************************************/
/* UART4 APB PID5*/
#define UART4_BITBANDING_UARTPeriphID5       (((BITBANDING_UARTPeriphID5_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTPeriphID5_OFFSET)*32U))))

/******************************************************************************************
 ************************************ 21 UARTPeriphID6 *********************************************
 ******************************************************************************************/
/* UART4 APB PID6*/
#define UART4_BITBANDING_UARTPeriphID6       (((BITBANDING_UARTPeriphID6_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTPeriphID6_OFFSET)*32U))))

/******************************************************************************************
 ************************************ 22 UARTPeriphID7 *********************************************
 ******************************************************************************************/
/* UART4 APB PID7*/
#define UART4_BITBANDING_UARTPeriphID7       (((BITBANDING_UARTPeriphID7_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTPeriphID7_OFFSET)*32U))))

/******************************************************************************************
 ************************************ 23 UARTPeriphID0 *********************************************
 ******************************************************************************************/
/* UART4 APB PID0*/
#define UART4_BITBANDING_UARTPeriphID0       (((BITBANDING_UARTPeriphID0_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTPeriphID0_OFFSET)*32U))))

/******************************************************************************************
 ************************************ 24 UARTPeriphID1 *********************************************
 ******************************************************************************************/
/* UART4 APB PID1*/
#define UART4_BITBANDING_UARTPeriphID1       (((BITBANDING_UARTPeriphID1_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTPeriphID1_OFFSET)*32U))))

/******************************************************************************************
 ************************************ 25 UARTPeriphID2 *********************************************
 ******************************************************************************************/
/* UART4 APB PID2*/
#define UART4_BITBANDING_UARTPeriphID2       (((BITBANDING_UARTPeriphID2_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTPeriphID2_OFFSET)*32U))))

/******************************************************************************************
 ************************************ 26 UARTPeriphID3 *********************************************
 ******************************************************************************************/
/* UART4 APB PID3*/
#define UART4_BITBANDING_UARTPeriphID3       (((BITBANDING_UARTPeriphID3_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTPeriphID3_OFFSET)*32U))))

/******************************************************************************************
 ************************************ 27 UARTCellID0 *********************************************
 ******************************************************************************************/
/* UART4 APB CID0*/
#define UART4_BITBANDING_UARTCellID0       (((BITBANDING_UARTCellID0_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCellID0_OFFSET)*32U))))

/******************************************************************************************
 ************************************ 28 UARTCellID1 *********************************************
 ******************************************************************************************/
/* UART4 APB CID1*/
#define UART4_BITBANDING_UARTCellID1       (((BITBANDING_UARTCellID1_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCellID1_OFFSET)*32U))))

/******************************************************************************************
 ************************************ 29 UARTCellID2 *********************************************
 ******************************************************************************************/
/* UART4 APB CID2*/
#define UART4_BITBANDING_UARTCellID2       (((BITBANDING_UARTCellID2_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCellID2_OFFSET)*32U))))

/******************************************************************************************
 ************************************ 30 UARTCellID3 *********************************************
 ******************************************************************************************/
/* UART4 APB CID3*/
#define UART4_BITBANDING_UARTCellID3       (((BITBANDING_UARTCellID3_TypeDef*)(UART_BITBANDING_BASE+((UART4_OFFSET+UART_UARTCellID3_OFFSET)*32U))))






#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_UART_REGISTERPERIPHERAL_BITBANDING_MODULE4_H_ */
