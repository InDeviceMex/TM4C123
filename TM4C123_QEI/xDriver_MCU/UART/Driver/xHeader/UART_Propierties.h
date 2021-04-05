/**
 *
 * @file UART_Propierties.h
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
 * @verbatim 7 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_DRIVER_XHEADER_UART_PROPIERTIES_H_
#define XDRIVER_MCU_UART_DRIVER_XHEADER_UART_PROPIERTIES_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

UART_nSTATUS UART__enIsBit9Supported(UART_nMODULE enModule);
UART_nSTATUS UART__enIsSmartCardSupported(UART_nMODULE enModule);

#endif /* XDRIVER_MCU_UART_DRIVER_XHEADER_UART_PROPIERTIES_H_ */
