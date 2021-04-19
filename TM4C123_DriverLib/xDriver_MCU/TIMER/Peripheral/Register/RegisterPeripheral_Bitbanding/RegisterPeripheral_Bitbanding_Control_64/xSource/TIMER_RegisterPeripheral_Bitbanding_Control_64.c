/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_Control_64.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_Control_64/TIMER_RegisterPeripheral_Bitbanding_Control_64.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

GPWTM_BITBANDING_CTL_TypeDef* GPWTM_BITBANDING_CTL_BLOCK[(uint32_t) TIMER_enMODULE_NUM_MAX] = { GPWTM0_BITBANDING_CTL, GPWTM1_BITBANDING_CTL, GPWTM2_BITBANDING_CTL, GPWTM3_BITBANDING_CTL, GPWTM4_BITBANDING_CTL, GPWTM5_BITBANDING_CTL};
