/**
 *
 * @file PWM_Enum.h
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
 * @verbatim May 26, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * May 26, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_XHEADER_PWM_ENUM_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_XHEADER_PWM_ENUM_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    PWM_enINT_NOOCCUR = 0UL,
    PWM_enINT_OCCUR = 1UL,
    PWM_enINT_STATUS_UNDEF = 0xFFFFFFFFUL,
}PWM_nINT_STATUS;

typedef enum
{
    PWM_enSTATUS_OK = 0UL,
    PWM_enSTATUS_ERROR = 1UL,
    PWM_enSTATUS_UNDEF = 0xFFFFFFFFUL,
}PWM_nSTATUS;

typedef enum
{
    PWM_enNOREADY = 0UL,
    PWM_enREADY = 1UL,
}PWM_nREADY;


#endif /* XDRIVER_MCU_PWM_PERIPHERAL_XHEADER_PWM_ENUM_H_ */
