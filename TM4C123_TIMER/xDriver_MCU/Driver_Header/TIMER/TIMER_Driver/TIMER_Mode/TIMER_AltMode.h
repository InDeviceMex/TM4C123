/**
 *
 * @file TIMER_AltMode.h
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
 * @verbatim 15 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_MODE_TIMER_ALTMODE_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_MODE_TIMER_ALTMODE_H_

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Enum.h>

void TIMER__vSetAltMode(TIMER_nMODULE enModule, TIMER_nALT_MODE enAltMode);
TIMER_nALT_MODE TIMER__enGetAltMode(TIMER_nMODULE enModule);


#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_MODE_TIMER_ALTMODE_H_ */
