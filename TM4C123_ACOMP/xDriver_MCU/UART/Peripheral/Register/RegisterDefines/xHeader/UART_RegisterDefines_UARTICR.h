/**
 *
 * @file UART_RegisterDefines_UARTICR.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTICR_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTICR_H_


#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 13 UARTICR *********************************************
******************************************************************************************/

/*--------*/
#define UART_UARTICR_R_CTSIC_MASK    ((uint32_t) 0x00000002U)
#define UART_UARTICR_R_CTSIC_BIT    ((uint32_t) 1U)
#define UART_UARTICR_R_CTSIC_NOEFFECT    ((uint32_t) 0x00000000U)
#define UART_UARTICR_R_CTSIC_CLEAR    ((uint32_t) 0x00000002U)

#define UART_UARTICR_CTSIC_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTICR_CTSIC_NOEFFECT    ((uint32_t) 0x00000000U)
#define UART_UARTICR_CTSIC_CLEAR    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTICR_R_RXIC_MASK    ((uint32_t) 0x00000010U)
#define UART_UARTICR_R_RXIC_BIT    ((uint32_t) 4U)
#define UART_UARTICR_R_RXIC_NOEFFECT    ((uint32_t) 0x00000000U)
#define UART_UARTICR_R_RXIC_CLEAR    ((uint32_t) 0x00000010U)

#define UART_UARTICR_RXIC_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTICR_RXIC_NOEFFECT    ((uint32_t) 0x00000000U)
#define UART_UARTICR_RXIC_CLEAR    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTICR_R_TXIC_MASK    ((uint32_t) 0x00000020U)
#define UART_UARTICR_R_TXIC_BIT    ((uint32_t) 5U)
#define UART_UARTICR_R_TXIC_NOEFFECT    ((uint32_t) 0x00000000U)
#define UART_UARTICR_R_TXIC_CLEAR    ((uint32_t) 0x00000020U)

#define UART_UARTICR_TXIC_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTICR_TXIC_NOEFFECT    ((uint32_t) 0x00000000U)
#define UART_UARTICR_TXIC_CLEAR    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTICR_R_RTIC_MASK    ((uint32_t) 0x00000040U)
#define UART_UARTICR_R_RTIC_BIT    ((uint32_t) 6U)
#define UART_UARTICR_R_RTIC_NOEFFECT    ((uint32_t) 0x00000000U)
#define UART_UARTICR_R_RTIC_CLEAR    ((uint32_t) 0x00000040U)

#define UART_UARTICR_RTIC_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTICR_RTIC_NOEFFECT    ((uint32_t) 0x00000000U)
#define UART_UARTICR_RTIC_CLEAR    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTICR_R_FEIC_MASK    ((uint32_t) 0x00000080U)
#define UART_UARTICR_R_FEIC_BIT    ((uint32_t) 7U)
#define UART_UARTICR_R_FEIC_NOEFFECT    ((uint32_t) 0x00000000U)
#define UART_UARTICR_R_FEIC_CLEAR    ((uint32_t) 0x00000080U)

#define UART_UARTICR_FEIC_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTICR_FEIC_NOEFFECT    ((uint32_t) 0x00000000U)
#define UART_UARTICR_FEIC_CLEAR    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTICR_R_PEIC_MASK    ((uint32_t) 0x00000100U)
#define UART_UARTICR_R_PEIC_BIT    ((uint32_t) 8U)
#define UART_UARTICR_R_PEIC_NOEFFECT    ((uint32_t) 0x00000000U)
#define UART_UARTICR_R_PEIC_CLEAR    ((uint32_t) 0x00000100U)

#define UART_UARTICR_PEIC_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTICR_PEIC_NOEFFECT    ((uint32_t) 0x00000000U)
#define UART_UARTICR_PEIC_CLEAR    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTICR_R_BEIC_MASK    ((uint32_t) 0x00000200U)
#define UART_UARTICR_R_BEIC_BIT    ((uint32_t) 9U)
#define UART_UARTICR_R_BEIC_NOEFFECT    ((uint32_t) 0x00000000U)
#define UART_UARTICR_R_BEIC_CLEAR    ((uint32_t) 0x00000200U)

#define UART_UARTICR_BEIC_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTICR_BEIC_NOEFFECT    ((uint32_t) 0x00000000U)
#define UART_UARTICR_BEIC_CLEAR    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTICR_R_OEIC_MASK    ((uint32_t) 0x00000400U)
#define UART_UARTICR_R_OEIC_BIT    ((uint32_t) 10U)
#define UART_UARTICR_R_OEIC_NOEFFECT    ((uint32_t) 0x00000000U)
#define UART_UARTICR_R_OEIC_CLEAR    ((uint32_t) 0x00000400U)

#define UART_UARTICR_OEIC_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTICR_OEIC_NOEFFECT    ((uint32_t) 0x00000000U)
#define UART_UARTICR_OEIC_CLEAR    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTICR_R_BIT9IC_MASK    ((uint32_t) 0x00008000U)
#define UART_UARTICR_R_BIT9IC_BIT    ((uint32_t) 12U)
#define UART_UARTICR_R_BIT9IC_NOEFFECT    ((uint32_t) 0x00000000U)
#define UART_UARTICR_R_BIT9IC_CLEAR    ((uint32_t) 0x00008000U)

#define UART_UARTICR_BIT9IC_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTICR_BIT9IC_NOEFFECT    ((uint32_t) 0x00000000U)
#define UART_UARTICR_BIT9IC_CLEAR    ((uint32_t) 0x00000001U)
/*--------*/




#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTICR_H_ */
