/**
 *
 * @file ServoMotor_SG90_Angle.h
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
#ifndef XAPPLICATION_SERVOMOTOR_SG90_XHEADER_SERVOMOTOR_SG90_ANGLE_H_
#define XAPPLICATION_SERVOMOTOR_SG90_XHEADER_SERVOMOTOR_SG90_ANGLE_H_

#include <xApplication/ServoMotor_SG90/xHeader/ServoMotor_SG90_Enum.h>

ServoMoto_SG90_nSTATUS ServoMotor_SG90__enSetAngleAbsoluteFloat(const ServoMoto_SG90_Typedef* const psServoMotor,float fAngle);
ServoMoto_SG90_nSTATUS ServoMotor_SG90__enSetAngleAbsolute(const ServoMoto_SG90_Typedef* const psServoMotor,uint8_t u8Angle);

ServoMoto_SG90_nSTATUS ServoMotor_SG90__enSetAngle(const ServoMoto_SG90_Typedef* const psServoMotor,int8_t s8Angle);
ServoMoto_SG90_nSTATUS ServoMotor_SG90__enSetAngleFloat(const ServoMoto_SG90_Typedef* const psServoMotor,float fAngle);



#endif /* XAPPLICATION_SERVOMOTOR_SG90_XHEADER_SERVOMOTOR_SG90_ANGLE_H_ */
