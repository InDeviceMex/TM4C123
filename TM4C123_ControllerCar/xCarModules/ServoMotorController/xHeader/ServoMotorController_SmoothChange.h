/**
 *
 * @file ServoMotorController_SmoothChange.h
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

#ifndef XCARMODULES_SERVOMOTORCONTROLLER_XHEADER_SERVOMOTORCONTROLLER_SMOOTHCHANGE_H_
#define XCARMODULES_SERVOMOTORCONTROLLER_XHEADER_SERVOMOTORCONTROLLER_SMOOTHCHANGE_H_

#include <xCarModules/ServoMotorController/xHeader/ServoMotorController_Defines.h>

void (*ServoMotorController__pvfGetIRQFunction(void))(void);
void ServoMotorController__vStartSmoothChange(uint32_t u32NewValueArg, SERVO_nUPDATETYPE enTypeArg);
boolean_t ServoMotorController__boIsBusy(void);
void ServoMotorController__vSet2Zero(void);

uint32_t ServoMotorController__u32GetCurrentPWMValue(void);
void ServoMotorController__vSetCurrentPWMValue(uint32_t u32CurrentPWMCValueArg);
uint32_t ServoMotorController__u32GetNewPWMValue(void);
void ServoMotorController__vSetNewPWMValue(uint32_t u32NewPWMCValueArg);

#endif /* XCARMODULES_SERVOMOTORCONTROLLER_XHEADER_SERVOMOTORCONTROLLER_SMOOTHCHANGE_H_ */
