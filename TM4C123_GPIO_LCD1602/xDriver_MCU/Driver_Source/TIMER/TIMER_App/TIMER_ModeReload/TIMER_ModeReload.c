/**
 *
 * @file TIMER_ModeReload.c
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
 * @verbatim 16 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_App/TIMER_ModeReload/TIMER_ModeReload.h>


TIMER_nSTATUS TIMER__enSetMode_Reload(TIMER_nMODULE enModule, TIMER_nMODE enMode, uint32_t u32PrescalerRTC, uint64_t u64Reload)
{
    TIMER_nSTATUS enReturn= TIMER_enERROR;
    enReturn =TIMER__enSetMode(enModule,enMode);
    if(TIMER_enOK == enReturn)
    {
        TIMER__vSetReload(enModule,u32PrescalerRTC,u64Reload);
    }
    return enReturn;
}

TIMER_nSTATUS TIMER__enSetModeStruct_Reload(TIMER_nMODULE enModule, const TIMER_MODE_Typedef* psMode, uint32_t u32PrescalerRTC, uint64_t u64Reload)
{
    TIMER_nSTATUS enReturn= TIMER_enERROR;
    enReturn =TIMER__enSetModeStruct(enModule,psMode);
    if(TIMER_enOK == enReturn)
    {
        TIMER__vSetReload(enModule,u32PrescalerRTC,u64Reload);
    }
    return enReturn;
}
