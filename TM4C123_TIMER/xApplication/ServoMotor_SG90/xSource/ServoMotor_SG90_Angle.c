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


ServoMoto_SG90_nSTATUS ServoMotor_SG90__enSetAngle(const ServoMoto_SG90_Typedef* const psServoMotor,int8_t s8Angle)
{
    ServoMoto_SG90_nSTATUS enServoStatus= ServoMoto_SG90_enERROR;
    TIMER_nMODULE enTimerModule= TIMER_enMODULE_UNDEF;

    uint32_t u32Count=0u;
    uint32_t u32ServoMinCount= 0u;
    uint32_t u32DegreeCount=0u;
    int32_t s32AngleAbsolute=90; /*Center*/
    if(0u != psServoMotor)
    {
        u32ServoMinCount= psServoMotor->u32MinCount;
        enTimerModule = psServoMotor->enTimerModule;
        u32Count =u32ServoMinCount;/*1 ms min value*/
        u32DegreeCount=psServoMotor->u32DegreeCount;
        if((s8Angle>=-90) && (s8Angle <=90))
        {
            s32AngleAbsolute+=(int32_t)s8Angle;
            s32AngleAbsolute*=(int32_t)u32DegreeCount;
            u32Count-=(uint32_t)s32AngleAbsolute;
            TIMER__vSetMatch(enTimerModule,(uint64_t)u32Count);
            enServoStatus = ServoMoto_SG90_enOK;
        }
    }
    return enServoStatus;
}

ServoMoto_SG90_nSTATUS ServoMotor_SG90__enSetAngleAbsolute(const ServoMoto_SG90_Typedef* const psServoMotor,uint8_t u8Angle)
{
    ServoMoto_SG90_nSTATUS enServoStatus= ServoMoto_SG90_enERROR;
    TIMER_nMODULE enTimerModule= TIMER_enMODULE_UNDEF;

    uint32_t u32Count=0u;
    uint32_t u32ServoMinCount= 0;
    uint32_t u32DegreeCount=0u;
    uint32_t u32AngleAbsolute=0u; /*Lowest*/
    if(0u != psServoMotor)
    {
        u32ServoMinCount= psServoMotor->u32MinCount;
        enTimerModule = psServoMotor->enTimerModule;
        u32Count =u32ServoMinCount;/*1 ms min value*/
        u32DegreeCount=psServoMotor->u32DegreeCount;
        if(u8Angle <=180u)
        {
            u32AngleAbsolute=(uint32_t)u8Angle;
            u32AngleAbsolute*=(uint32_t)u32DegreeCount;
            u32Count-=u32AngleAbsolute;
            TIMER__vSetMatch(enTimerModule,(uint64_t)u32Count);
            enServoStatus = ServoMoto_SG90_enOK;
        }
    }
    return enServoStatus;
}

ServoMoto_SG90_nSTATUS ServoMotor_SG90__enSetAngleFloat(const ServoMoto_SG90_Typedef* const psServoMotor,float32_t fAngle)
{
    ServoMoto_SG90_nSTATUS enServoStatus= ServoMoto_SG90_enERROR;
    TIMER_nMODULE enTimerModule= TIMER_enMODULE_UNDEF;

    uint32_t u32Count=0u;
    uint32_t u32ServoMinCount= 0;
    float32_t fDegreeCount=0.0f;
    float32_t fAngleAbsolute=90.0f; /*Center*/
    if(0u != psServoMotor)
    {
        u32ServoMinCount= psServoMotor->u32MinCount;
        enTimerModule = psServoMotor->enTimerModule;
        u32Count =u32ServoMinCount;/*1 ms min value*/
        fDegreeCount=psServoMotor->fDegreeCount;
        if((fAngle>=-90.0f) && (fAngle <=90.0f))
        {
            fAngleAbsolute+=fAngle;
            fAngleAbsolute*=fDegreeCount;
            u32Count-=(uint32_t)fAngleAbsolute;
            TIMER__vSetMatch(enTimerModule,(uint64_t)u32Count);
            enServoStatus = ServoMoto_SG90_enOK;
        }
    }
    return enServoStatus;
}

ServoMoto_SG90_nSTATUS ServoMotor_SG90__enSetAngleAbsoluteFloat(const ServoMoto_SG90_Typedef* const psServoMotor,float32_t fAngle)
{
    ServoMoto_SG90_nSTATUS enServoStatus= ServoMoto_SG90_enERROR;
    TIMER_nMODULE enTimerModule= TIMER_enMODULE_UNDEF;

    uint32_t u32Count=0u; /*1 ms min value*/
    uint32_t u32ServoMinCount= 0u;
    float32_t fDegreeCount=0.0f;
    float32_t fAngleAbsolute=0.0f; /*Lowest*/
    if(0u != psServoMotor)
    {
        u32ServoMinCount= psServoMotor->u32MinCount;
        enTimerModule = psServoMotor->enTimerModule;
        u32Count =u32ServoMinCount;/*1 ms min value*/
        fDegreeCount=psServoMotor->fDegreeCount;
        if(fAngle <=180.0)
        {
            fAngleAbsolute=fAngle;
            fAngleAbsolute*=fDegreeCount;
            u32Count-=(uint32_t)fAngleAbsolute;
            TIMER__vSetMatch(enTimerModule,(uint64_t)u32Count);
            enServoStatus = ServoMoto_SG90_enOK;
        }
    }
    return enServoStatus;
}

