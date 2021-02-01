/**
 *
 * @file UART_RegisterPeripheral_Bitbanding.c
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
#include <xDriver_MCU/UART/Peripheral/Register/RegisterPeripheral_Bitbanding/UART_RegisterPeripheral_Bitbanding.h>

UART_BITBANDING_TypeDef *UART_BITBANDING_BLOCK[(uint32_t) UART_enMODULE_MAX + 1U] = { UART0_BITBANDING,
                                                          UART1_BITBANDING,
                                                          UART2_BITBANDING,
                                                          UART3_BITBANDING,
                                                          UART4_BITBANDING,
                                                          UART5_BITBANDING,
                                                          UART6_BITBANDING,
                                                          UART7_BITBANDING };


