/**
 *
 * @file ServoMotor_SG90_Angle.c
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

#include <xApplication/ServoMotor_SG90/xHeader/ServoMotor_SG90_Angle.h>
#include <xUtils/Standard/Standard.h>


ServoMoto_SG90_nSTATUS ServoMotor_SG90__enSetAngle(const ServoMoto_SG90_Typedef* const pstServoMotor, int8_t s8Angle)
{
    ServoMoto_SG90_nSTATUS enServoStatus = ServoMoto_SG90_enERROR;
    TIMER_nMODULE enTimerModuleVar = TIMER_enMODULE_UNDEF;

    uint32_t u32Count = 0U;
    uint32_t u32ServoMinCount = 0U;
    uint32_t u32DegreeCountVar = 0U;
    int32_t s32AngleAbsolute = 90; /*Center*/
    if(0UL != (uint32_t) pstServoMotor)
    {
        u32ServoMinCount = pstServoMotor->u32MinCount;
        enTimerModuleVar = pstServoMotor->enTimerModule;
        u32Count = u32ServoMinCount;/*1 ms min value*/
        u32DegreeCountVar = pstServoMotor->u32DegreeCount;
        if((s8Angle >= -90) && (s8Angle <= 90))
        {
            s32AngleAbsolute += (int32_t) s8Angle;
            s32AngleAbsolute *= (int32_t) u32DegreeCountVar;
            u32Count -= (uint32_t) s32AngleAbsolute;
            TIMER__vSetMatch(enTimerModuleVar, (uint64_t) u32Count);
            enServoStatus = ServoMoto_SG90_enOK;
        }
    }
    return enServoStatus;
}

ServoMoto_SG90_nSTATUS ServoMotor_SG90__enSetAngleAbsolute(const ServoMoto_SG90_Typedef* const pstServoMotor, uint8_t u8Angle)
{
    ServoMoto_SG90_nSTATUS enServoStatus = ServoMoto_SG90_enERROR;
    TIMER_nMODULE enTimerModuleVar = TIMER_enMODULE_UNDEF;

    uint32_t u32Count = 0U;
    uint32_t u32ServoMinCount = 0;
    uint32_t u32DegreeCountVar = 0U;
    uint32_t u32AngleAbsolute = 0U; /*Lowest*/
    if(0UL != (uint32_t) pstServoMotor)
    {
        u32ServoMinCount = pstServoMotor->u32MinCount;
        enTimerModuleVar = pstServoMotor->enTimerModule;
        u32Count = u32ServoMinCount;/*1 ms min value*/
        u32DegreeCountVar = pstServoMotor->u32DegreeCount;
        if(u8Angle <= 180U)
        {
            u32AngleAbsolute = (uint32_t) u8Angle;
            u32AngleAbsolute *= (uint32_t) u32DegreeCountVar;
            u32Count -= u32AngleAbsolute;
            TIMER__vSetMatch(enTimerModuleVar, (uint64_t) u32Count);
            enServoStatus = ServoMoto_SG90_enOK;
        }
    }
    return enServoStatus;
}

ServoMoto_SG90_nSTATUS ServoMotor_SG90__enSetAngleFloat(const ServoMoto_SG90_Typedef* const pstServoMotor, float32_t fAngle)
{
    ServoMoto_SG90_nSTATUS enServoStatus = ServoMoto_SG90_enERROR;
    TIMER_nMODULE enTimerModuleVar = TIMER_enMODULE_UNDEF;

    uint32_t u32Count = 0U;
    uint32_t u32ServoMinCount = 0;
    float32_t fDegreeCountVar = 0.0f;
    float32_t fAngleAbsolute = 90.0f; /*Center*/
    if(0UL != (uint32_t) pstServoMotor)
    {
        u32ServoMinCount = pstServoMotor->u32MinCount;
        enTimerModuleVar = pstServoMotor->enTimerModule;
        u32Count = u32ServoMinCount;/*1 ms min value*/
        fDegreeCountVar = pstServoMotor->fDegreeCount;
        if((-90.0f <= fAngle) && (90.0f >= fAngle))
        {
            fAngleAbsolute += fAngle;
            fAngleAbsolute *= fDegreeCountVar;
            u32Count -= (uint32_t) fAngleAbsolute;
            TIMER__vSetMatch(enTimerModuleVar, (uint64_t) u32Count);
            enServoStatus = ServoMoto_SG90_enOK;
        }
    }
    return enServoStatus;
}

ServoMoto_SG90_nSTATUS ServoMotor_SG90__enSetAngleAbsoluteFloat(const ServoMoto_SG90_Typedef* const pstServoMotor, float32_t fAngle)
{
    ServoMoto_SG90_nSTATUS enServoStatus = ServoMoto_SG90_enERROR;
    TIMER_nMODULE enTimerModuleVar = TIMER_enMODULE_UNDEF;

    uint32_t u32Count = 0U; /*1 ms min value*/
    uint32_t u32ServoMinCount = 0U;
    float32_t fDegreeCountVar = 0.0f;
    float32_t fAngleAbsolute = 0.0f; /*Lowest*/
    if(0UL != (uint32_t) pstServoMotor)
    {
        u32ServoMinCount = pstServoMotor->u32MinCount;
        enTimerModuleVar = pstServoMotor->enTimerModule;
        u32Count = u32ServoMinCount;/*1 ms min value*/
        fDegreeCountVar = pstServoMotor->fDegreeCount;
        if(fAngle <= 180.0)
        {
            fAngleAbsolute = fAngle;
            fAngleAbsolute *= fDegreeCountVar;
            u32Count -= (uint32_t) fAngleAbsolute;
            TIMER__vSetMatch(enTimerModuleVar, (uint64_t) u32Count);
            enServoStatus = ServoMoto_SG90_enOK;
        }
    }
    return enServoStatus;
}

