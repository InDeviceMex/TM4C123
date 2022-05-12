/**
 *
 * @file DCMotorController_Direction.h
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
 * @verbatim 18 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XCARMODULES_DCMOTORCONTROLLER_XHEADER_DCMOTORCONTROLLER_DIRECTION_H_
#define XCARMODULES_DCMOTORCONTROLLER_XHEADER_DCMOTORCONTROLLER_DIRECTION_H_

#include <xCarModules/DCMotorController/xHeader/DCMotorController_Defines.h>

void DCMotorController__vSetDirection(DCMOTOR_nMOTOR enMotorArg, DCMOTOR_nDIRECTION enDirectionArg);
void DCMotorController__vSetEnable(DCMOTOR_nMOTOR enMotorArg, DCMOTOR_nENABLE enEnableArg);
void DCMotorController__vSetDirection(DCMOTOR_nMOTOR enMotorArg, DCMOTOR_nDIRECTION enDirectionArg);
void DCMotorController__vSetPWMTicks(DCMOTOR_nMOTOR enMotorArg, uint32_t u32PWMValueTicks);
void DCMotorController__vStartSmoothChange(DCMOTOR_nMOTOR enMotorArg, uint32_t u32PWMValue);
void DCMotorController__vSet2Zero(DCMOTOR_nMOTOR enMotorArg);
boolean_t DCMotorController__boIsBusy(void);
void (*DCMotorController__pvfGetIRQFunction(void))(void);

#endif /* XCARMODULES_DCMOTORCONTROLLER_XHEADER_DCMOTORCONTROLLER_DIRECTION_H_ */
