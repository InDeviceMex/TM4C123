/**
 *
 * @file TIMER_SubMode.c
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
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Mode/TIMER_SubMode.h>



void TIMER__vSetSubMode(TIMER_nMODULE enModule, TIMER_nSUB_MODE enSubMode)
{
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x3u;
    if(TIMER_enW != u32Letter)
    {
        TIMER__vSetModeGeneric(enModule, (uint32_t) enSubMode, GPTM_TA_GPTMTnMR_TnMR_MASK, GPTM_TA_GPTMTnMR_R_TnMR_BIT);
    }
    else
    {
        if(TIMER_enSUB_MODE_CAPTURE>enSubMode)
        {
            TIMER__vSetModeGeneric(enModule, (uint32_t) enSubMode, GPTM_TA_GPTMTnMR_TnMR_MASK, GPTM_TA_GPTMTnMR_R_TnMR_BIT);
        }
    }
}

TIMER_nSUB_MODE TIMER__enGetSubMode(TIMER_nMODULE enModule)
{
    return (TIMER_nSUB_MODE)TIMER__u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_TnMR_MASK, GPTM_TA_GPTMTnMR_R_TnMR_BIT);
}

