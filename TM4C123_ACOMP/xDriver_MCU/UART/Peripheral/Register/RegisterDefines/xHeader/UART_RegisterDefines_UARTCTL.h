/**
 *
 * @file UART_RegisterDefines_UARTCTL.h
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
 * @verbatim 23 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTCTL_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTCTL_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 8 UARTCTL *********************************************
******************************************************************************************/

/*--------*/
#define UART_UARTCTL_R_UARTEN_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTCTL_R_UARTEN_BIT    ((uint32_t) 0U)
#define UART_UARTCTL_R_UARTEN_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_R_UARTEN_ENA    ((uint32_t) 0x00000001U)

#define UART_UARTCTL_UARTEN_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTCTL_UARTEN_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_UARTEN_ENA    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTCTL_R_SIREN_MASK    ((uint32_t) 0x00000002U)
#define UART_UARTCTL_R_SIREN_BIT    ((uint32_t) 1U)
#define UART_UARTCTL_R_SIREN_NORMAL    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_R_SIREN_SIR    ((uint32_t) 0x00000002U)

#define UART_UARTCTL_SIREN_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTCTL_SIREN_NORMAL    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_SIREN_SIR    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTCTL_R_SIRLP_MASK    ((uint32_t) 0x00000004U)
#define UART_UARTCTL_R_SIRLP_BIT    ((uint32_t) 2U)
#define UART_UARTCTL_R_SIRLP_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_R_SIRLP_ENA    ((uint32_t) 0x00000004U)

#define UART_UARTCTL_SIRLP_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTCTL_SIRLP_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_SIRLP_ENA    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTCTL_R_SMART_MASK    ((uint32_t) 0x00000008U)
#define UART_UARTCTL_R_SMART_BIT    ((uint32_t) 3U)
#define UART_UARTCTL_R_SMART_NORMAL    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_R_SMART_SMART    ((uint32_t) 0x00000008U)

#define UART_UARTCTL_SMART_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTCTL_SMART_NORMAL    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_SMART_SMART    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTCTL_R_EOT_MASK    ((uint32_t) 0x00000010U)
#define UART_UARTCTL_R_EOT_BIT    ((uint32_t) 4U)
#define UART_UARTCTL_R_EOT_FIFO    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_R_EOT_ALL    ((uint32_t) 0x00000010U)

#define UART_UARTCTL_EOT_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTCTL_EOT_FIFO    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_EOT_ALL    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTCTL_R_HSE_MASK    ((uint32_t) 0x00000020U)
#define UART_UARTCTL_R_HSE_BIT    ((uint32_t) 5U)
#define UART_UARTCTL_R_HSE_DIV16    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_R_HSE_DIV8    ((uint32_t) 0x00000020U)

#define UART_UARTCTL_HSE_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTCTL_HSE_DIV16    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_HSE_DIV8    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTCTL_R_LBE_MASK    ((uint32_t) 0x00000080U)
#define UART_UARTCTL_R_LBE_BIT    ((uint32_t) 7U)
#define UART_UARTCTL_R_LBE_NORMAL    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_R_LBE_LOOPBACK    ((uint32_t) 0x00000080U)

#define UART_UARTCTL_LBE_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTCTL_LBE_NORMAL    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_LBE_LOOPBACK    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTCTL_R_TXE_MASK    ((uint32_t) 0x00000100U)
#define UART_UARTCTL_R_TXE_BIT    ((uint32_t) 8U)
#define UART_UARTCTL_R_TXE_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_R_TXE_ENA    ((uint32_t) 0x00000100U)

#define UART_UARTCTL_TXE_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTCTL_TXE_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_TXE_ENA    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTCTL_R_RXE_MASK    ((uint32_t) 0x00000200U)
#define UART_UARTCTL_R_RXE_BIT    ((uint32_t) 9U)
#define UART_UARTCTL_R_RXE_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_R_RXE_ENA    ((uint32_t) 0x00000200U)

#define UART_UARTCTL_RXE_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTCTL_RXE_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_RXE_ENA    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTCTL_R_RTS_MASK    ((uint32_t) 0x00000800U)
#define UART_UARTCTL_R_RTS_BIT    ((uint32_t) 11U)
#define UART_UARTCTL_R_RTS_LOW    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_R_RTS_HIGH    ((uint32_t) 0x00000800U)

#define UART_UARTCTL_RTS_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTCTL_RTS_LOW    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_RTS_HIGH    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTCTL_R_RTSEN_MASK    ((uint32_t) 0x00004000U)
#define UART_UARTCTL_R_RTSEN_BIT    ((uint32_t) 14U)
#define UART_UARTCTL_R_RTSEN_SOFT    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_R_RTSEN_HARD    ((uint32_t) 0x00004000U)

#define UART_UARTCTL_RTSEN_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTCTL_RTSEN_SOFT    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_RTSEN_HARD    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTCTL_R_CTSEN_MASK    ((uint32_t) 0x00008000U)
#define UART_UARTCTL_R_CTSEN_BIT    ((uint32_t) 15U)
#define UART_UARTCTL_R_CTSEN_SOFT    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_R_CTSEN_HARD    ((uint32_t) 0x00008000U)

#define UART_UARTCTL_CTSEN_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTCTL_CTSEN_SOFT    ((uint32_t) 0x00000000U)
#define UART_UARTCTL_CTSEN_HARD    ((uint32_t) 0x00000001U)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTCTL_H_ */
