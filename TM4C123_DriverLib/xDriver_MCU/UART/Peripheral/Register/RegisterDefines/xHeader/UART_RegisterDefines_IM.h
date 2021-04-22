/**
 *
 * @file UART_RegisterDefines_IM.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_IM_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_IM_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 10 IM *********************************************
******************************************************************************************/

/*--------*/
#define UART_IM_R_CTSIM_MASK    ((uint32_t) 0x00000002UL)
#define UART_IM_R_CTSIM_BIT    ((uint32_t) 1UL)
#define UART_IM_R_CTSIM_DIS    ((uint32_t) 0x00000000UL)
#define UART_IM_R_CTSIM_ENA    ((uint32_t) 0x00000002UL)

#define UART_IM_CTSIM_MASK    ((uint32_t) 0x00000001UL)
#define UART_IM_CTSIM_DIS    ((uint32_t) 0x00000000UL)
#define UART_IM_CTSIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_RXIM_MASK    ((uint32_t) 0x00000010UL)
#define UART_IM_R_RXIM_BIT    ((uint32_t) 4UL)
#define UART_IM_R_RXIM_DIS    ((uint32_t) 0x00000000UL)
#define UART_IM_R_RXIM_ENA    ((uint32_t) 0x00000010UL)

#define UART_IM_RXIM_MASK    ((uint32_t) 0x00000001UL)
#define UART_IM_RXIM_DIS    ((uint32_t) 0x00000000UL)
#define UART_IM_RXIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_TXIM_MASK    ((uint32_t) 0x00000020UL)
#define UART_IM_R_TXIM_BIT    ((uint32_t) 5UL)
#define UART_IM_R_TXIM_DIS    ((uint32_t) 0x00000000UL)
#define UART_IM_R_TXIM_ENA    ((uint32_t) 0x00000020UL)

#define UART_IM_TXIM_MASK    ((uint32_t) 0x00000001UL)
#define UART_IM_TXIM_DIS    ((uint32_t) 0x00000000UL)
#define UART_IM_TXIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_RTIM_MASK    ((uint32_t) 0x00000040UL)
#define UART_IM_R_RTIM_BIT    ((uint32_t) 6UL)
#define UART_IM_R_RTIM_DIS    ((uint32_t) 0x00000000UL)
#define UART_IM_R_RTIM_ENA    ((uint32_t) 0x00000040UL)

#define UART_IM_RTIM_MASK    ((uint32_t) 0x00000001UL)
#define UART_IM_RTIM_DIS    ((uint32_t) 0x00000000UL)
#define UART_IM_RTIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_FEIM_MASK    ((uint32_t) 0x00000080UL)
#define UART_IM_R_FEIM_BIT    ((uint32_t) 7UL)
#define UART_IM_R_FEIM_DIS    ((uint32_t) 0x00000000UL)
#define UART_IM_R_FEIM_ENA    ((uint32_t) 0x00000080UL)

#define UART_IM_FEIM_MASK    ((uint32_t) 0x00000001UL)
#define UART_IM_FEIM_DIS    ((uint32_t) 0x00000000UL)
#define UART_IM_FEIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_PEIM_MASK    ((uint32_t) 0x00000100UL)
#define UART_IM_R_PEIM_BIT    ((uint32_t) 8UL)
#define UART_IM_R_PEIM_DIS    ((uint32_t) 0x00000000UL)
#define UART_IM_R_PEIM_ENA    ((uint32_t) 0x00000100UL)

#define UART_IM_PEIM_MASK    ((uint32_t) 0x00000001UL)
#define UART_IM_PEIM_DIS    ((uint32_t) 0x00000000UL)
#define UART_IM_PEIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_BEIM_MASK    ((uint32_t) 0x00000200UL)
#define UART_IM_R_BEIM_BIT    ((uint32_t) 9UL)
#define UART_IM_R_BEIM_DIS    ((uint32_t) 0x00000000UL)
#define UART_IM_R_BEIM_ENA    ((uint32_t) 0x00000200UL)

#define UART_IM_BEIM_MASK    ((uint32_t) 0x00000001UL)
#define UART_IM_BEIM_DIS    ((uint32_t) 0x00000000UL)
#define UART_IM_BEIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_OEIM_MASK    ((uint32_t) 0x00000400UL)
#define UART_IM_R_OEIM_BIT    ((uint32_t) 10UL)
#define UART_IM_R_OEIM_DIS    ((uint32_t) 0x00000000UL)
#define UART_IM_R_OEIM_ENA    ((uint32_t) 0x00000400UL)

#define UART_IM_OEIM_MASK    ((uint32_t) 0x00000001UL)
#define UART_IM_OEIM_DIS    ((uint32_t) 0x00000000UL)
#define UART_IM_OEIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_IM_R_BIT9IM_MASK    ((uint32_t) 0x00008000UL)
#define UART_IM_R_BIT9IM_BIT    ((uint32_t) 12UL)
#define UART_IM_R_BIT9IM_DIS    ((uint32_t) 0x00000000UL)
#define UART_IM_R_BIT9IM_ENA    ((uint32_t) 0x00008000UL)

#define UART_IM_BIT9IM_MASK    ((uint32_t) 0x00000001UL)
#define UART_IM_BIT9IM_DIS    ((uint32_t) 0x00000000UL)
#define UART_IM_BIT9IM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_IM_H_ */
