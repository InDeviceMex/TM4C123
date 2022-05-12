
/**
 *
 * @file Commands_Defines.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 16 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XCARMODULES_COMMANDS_XHEADER_COMMANDS_DEFINES_H_
#define XCARMODULES_COMMANDS_XHEADER_COMMANDS_DEFINES_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/xDriver_MCU.h>

#define BLUETOTH_MODULE (UART_enMODULE_1)
#define BLUETOTH_BAUDARATE (921600UL)
#define BLUETOTH_RX_FUNCTION (GPIO_enU1Rx)
#define BLUETOTH_RX_PORT (GPIO_enPORT_B)
#define BLUETOTH_RX_PIN (GPIO_enPIN_0)

#define BLUETOTH_TX_FUNCTION (GPIO_enU1Rx)
#define BLUETOTH_TX_PORT (GPIO_enPORT_B)
#define BLUETOTH_TX_PIN (GPIO_enPIN_1)


#endif /* XCARMODULES_COMMANDS_XHEADER_COMMANDS_DEFINES_H_ */
