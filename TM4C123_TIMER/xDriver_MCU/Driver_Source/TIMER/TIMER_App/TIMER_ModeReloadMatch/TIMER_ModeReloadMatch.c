/**
 *
 * @file TIMER_ModeReloadMatch.c
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
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_App/TIMER_ModeReloadMatch/TIMER_ModeReloadMatch.h>


#include <xDriver_MCU/Driver_Header/TIMER/TIMER_App/TIMER_ModeReloadMatch/TIMER_ModeReloadMatchStruct.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_App/TIMER_Mode/TIMER_Mode.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Reload.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Match.h>

TIMER_nSTATUS TIMER__enSetMode_ReloadMatch(TIMER_nMODULE enModule, TIMER_nMODE enMode, uint32_t u32PrescalerRTC, uint64_t u64Reload,uint64_t u64Match)
{
    TIMER_nSTATUS enReturn= TIMER_enERROR;
    enReturn =TIMER__enSetMode(enModule,enMode);
    if(TIMER_enOK == enReturn)
    {
        TIMER__vSetReload(enModule,u32PrescalerRTC,u64Reload);
        TIMER__vSetMatch(enModule,u64Match);
    }
    return enReturn;
}

TIMER_nSTATUS TIMER__enSetModeStruct_ReloadMatch(TIMER_nMODULE enModule, const TIMER_MODE_Typedef* psMode, uint32_t u32PrescalerRTC, uint64_t u64Reload,uint64_t u64Match)
{
    TIMER_nSTATUS enReturn= TIMER_enERROR;
    enReturn =TIMER__enSetModeStruct(enModule,psMode);
    if(TIMER_enOK == enReturn)
    {
        TIMER__vSetReload(enModule,u32PrescalerRTC,u64Reload);
        TIMER__vSetMatch(enModule,u64Match);
    }
    return enReturn;
}


