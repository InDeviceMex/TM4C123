/**
 *
 * @file TIMER_PWMOutputInit.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_MODE_TIMER_PWMOUTPUTINIT_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_MODE_TIMER_PWMOUTPUTINIT_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

void TIMER__vSetPWMOutputInit(TIMER_nMODULE enModule, TIMER_nPWM_OUT_INIT enPWMOutputInit);
TIMER_nPWM_OUT_INIT TIMER__enGetPWMOutputInit(TIMER_nMODULE enModule);


#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_MODE_TIMER_PWMOUTPUTINIT_H_ */
