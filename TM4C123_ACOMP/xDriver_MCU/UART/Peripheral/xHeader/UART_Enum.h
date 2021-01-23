/**
 *
 * @file UART_Enum.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_XHEADER_UART_ENUM_H_
#define XDRIVER_MCU_UART_PERIPHERAL_XHEADER_UART_ENUM_H_

typedef enum
{
    UART_enOK = 0u,
    UART_enERROR = 1u,
}UART_nSTATUS;

typedef enum
{
    UART_enNOREADY = 0u,
    UART_enREADY = 1u,
}UART_nREADY;

typedef enum
{
    UART_enMODULE_0 = 0u,
    UART_enMODULE_1 = 1u,
    UART_enMODULE_2 = 2u,
    UART_enMODULE_3 = 3u,
    UART_enMODULE_4 = 4u,
    UART_enMODULE_5 = 5u,
    UART_enMODULE_6 = 6u,
    UART_enMODULE_7 = 7u,
    UART_enMODULE_MAX = 7u,
}UART_nMODULE;



#endif /* XDRIVER_MCU_UART_PERIPHERAL_XHEADER_UART_ENUM_H_ */
