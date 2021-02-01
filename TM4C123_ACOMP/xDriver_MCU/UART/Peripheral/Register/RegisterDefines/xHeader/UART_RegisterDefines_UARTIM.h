/**
 *
 * @file UART_RegisterDefines_UARTIM.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTIM_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTIM_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 10 UARTIM *********************************************
******************************************************************************************/

/*--------*/
#define UART_UARTIM_R_CTSIM_MASK    ((uint32_t) 0x00000002U)
#define UART_UARTIM_R_CTSIM_BIT    ((uint32_t) 1U)
#define UART_UARTIM_R_CTSIM_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTIM_R_CTSIM_ENA    ((uint32_t) 0x00000002U)

#define UART_UARTIM_CTSIM_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTIM_CTSIM_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTIM_CTSIM_ENA    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTIM_R_RXIM_MASK    ((uint32_t) 0x00000010U)
#define UART_UARTIM_R_RXIM_BIT    ((uint32_t) 4U)
#define UART_UARTIM_R_RXIM_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTIM_R_RXIM_ENA    ((uint32_t) 0x00000010U)

#define UART_UARTIM_RXIM_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTIM_RXIM_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTIM_RXIM_ENA    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTIM_R_TXIM_MASK    ((uint32_t) 0x00000020U)
#define UART_UARTIM_R_TXIM_BIT    ((uint32_t) 5U)
#define UART_UARTIM_R_TXIM_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTIM_R_TXIM_ENA    ((uint32_t) 0x00000020U)

#define UART_UARTIM_TXIM_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTIM_TXIM_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTIM_TXIM_ENA    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTIM_R_RTIM_MASK    ((uint32_t) 0x00000040U)
#define UART_UARTIM_R_RTIM_BIT    ((uint32_t) 6U)
#define UART_UARTIM_R_RTIM_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTIM_R_RTIM_ENA    ((uint32_t) 0x00000040U)

#define UART_UARTIM_RTIM_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTIM_RTIM_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTIM_RTIM_ENA    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTIM_R_FEIM_MASK    ((uint32_t) 0x00000080U)
#define UART_UARTIM_R_FEIM_BIT    ((uint32_t) 7U)
#define UART_UARTIM_R_FEIM_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTIM_R_FEIM_ENA    ((uint32_t) 0x00000080U)

#define UART_UARTIM_FEIM_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTIM_FEIM_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTIM_FEIM_ENA    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTIM_R_PEIM_MASK    ((uint32_t) 0x00000100U)
#define UART_UARTIM_R_PEIM_BIT    ((uint32_t) 8U)
#define UART_UARTIM_R_PEIM_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTIM_R_PEIM_ENA    ((uint32_t) 0x00000100U)

#define UART_UARTIM_PEIM_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTIM_PEIM_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTIM_PEIM_ENA    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTIM_R_BEIM_MASK    ((uint32_t) 0x00000200U)
#define UART_UARTIM_R_BEIM_BIT    ((uint32_t) 9U)
#define UART_UARTIM_R_BEIM_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTIM_R_BEIM_ENA    ((uint32_t) 0x00000200U)

#define UART_UARTIM_BEIM_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTIM_BEIM_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTIM_BEIM_ENA    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTIM_R_OEIM_MASK    ((uint32_t) 0x00000400U)
#define UART_UARTIM_R_OEIM_BIT    ((uint32_t) 10U)
#define UART_UARTIM_R_OEIM_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTIM_R_OEIM_ENA    ((uint32_t) 0x00000400U)

#define UART_UARTIM_OEIM_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTIM_OEIM_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTIM_OEIM_ENA    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTIM_R_BIT9IM_MASK    ((uint32_t) 0x00008000U)
#define UART_UARTIM_R_BIT9IM_BIT    ((uint32_t) 12U)
#define UART_UARTIM_R_BIT9IM_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTIM_R_BIT9IM_ENA    ((uint32_t) 0x00008000U)

#define UART_UARTIM_BIT9IM_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTIM_BIT9IM_DIS    ((uint32_t) 0x00000000U)
#define UART_UARTIM_BIT9IM_ENA    ((uint32_t) 0x00000001U)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTIM_H_ */
