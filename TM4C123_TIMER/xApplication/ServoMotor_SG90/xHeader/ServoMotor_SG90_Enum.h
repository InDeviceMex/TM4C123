/**
 *
 * @file ServoMotor_SG90_Enum.h
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
#ifndef XAPPLICATION_SERVOMOTOR_SG90_XHEADER_SERVOMOTOR_SG90_ENUM_H_
#define XAPPLICATION_SERVOMOTOR_SG90_XHEADER_SERVOMOTOR_SG90_ENUM_H_

#include <xDriver_MCU/TIMER/TIMER.h>
#include <xDriver_MCU/GPIO/GPIO.h>


typedef enum
{
    ServoMoto_SG90_enOK=0u,
    ServoMoto_SG90_enERROR=1u,
    ServoMoto_SG90_enSTATUS_UNDEF=0xFFu,
}ServoMoto_SG90_nSTATUS;
typedef enum
{
    ServoMoto_SG90_enDISABLE=0u,
    ServoMoto_SG90_enENABLE=1u,
    ServoMoto_SG90_enENABLE_UNDEF=0xFFu,
}ServoMoto_SG90_nENABLE;

typedef struct
{
    uint32_t u32DeltaCount;
    uint32_t u32MinCount;
    TIMER_nMODULE enTimerModule;
    GPIO_nDIGITAL_FUNCTION enGpioDigital;
}ServoMoto_SG90_Typedef;


#endif /* XAPPLICATION_SERVOMOTOR_SG90_XHEADER_SERVOMOTOR_SG90_ENUM_H_ */
