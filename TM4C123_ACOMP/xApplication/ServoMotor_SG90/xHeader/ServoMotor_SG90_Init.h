/**
 *
 * @file ServoMotor_SG90_Init.h
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
 * @verbatim 6 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XAPPLICATION_SERVOMOTOR_SG90_XHEADER_SERVOMOTOR_SG90_INIT_H_
#define XAPPLICATION_SERVOMOTOR_SG90_XHEADER_SERVOMOTOR_SG90_INIT_H_

#include <xApplication/ServoMotor_SG90/xHeader/ServoMotor_SG90_Enum.h>
#include <xDriver_MCU/TIMER/TIMER.h>
#include <xDriver_MCU/GPIO/GPIO.h>

ServoMoto_SG90_nSTATUS ServoMotor_SG90__enInit(ServoMoto_SG90_Typedef* psServoMotor, TIMER_nMODULE enTimerModuleParam, GPIO_nDIGITAL_FUNCTION enGpioDigitalParam, uint32_t u32MinTime, uint32_t u32MaxTime);




#endif /* XAPPLICATION_SERVOMOTOR_SG90_XHEADER_SERVOMOTOR_SG90_INIT_H_ */
