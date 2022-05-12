/**
 *
 * @file Commands_Init.h
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

#ifndef XCARMODULES_COMMANDS_XHEADER_COMMANDS_INIT_H_
#define XCARMODULES_COMMANDS_XHEADER_COMMANDS_INIT_H_

#include <xCarModules/Commands/xHeader/Commands_Defines.h>

void Commands__vInit(UART_nMODULE enUARTModuleArg, uint32_t u32BaudRateArg);

#endif /* XCARMODULES_COMMANDS_XHEADER_COMMANDS_INIT_H_ */
