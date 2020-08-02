/**
 *
 * @file TIMER_ModeMatch.c
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
#include <xDriver_MCU/TIMER/Header/App/Mode/TIMER_Mode.h>
#include <xDriver_MCU/TIMER/Header/App/ModeMatch/TIMER_ModeMatch.h>
#include <xDriver_MCU/TIMER/Header/App/ModeMatch/TIMER_ModeMatchStruct.h>
#include <xDriver_MCU/TIMER/Header/Driver/TIMER_Match.h>
#include <xDriver_MCU/TIMER/Header/App/ModeMatch/TIMER_ModeMatchStruct.h>


TIMER_nSTATUS TIMER__enSetMode_Match(TIMER_nMODULE enModule, TIMER_nMODE enMode,uint64_t u64Match)
{
    TIMER_nSTATUS enReturn= TIMER_enERROR;
    enReturn =TIMER__enSetMode(enModule,enMode);
    if(TIMER_enOK == enReturn)
    {
        TIMER__vSetMatch(enModule,u64Match);
    }
    return enReturn;
}

TIMER_nSTATUS TIMER__enSetModeStruct_Match(TIMER_nMODULE enModule, const TIMER_MODE_Typedef* psMode,uint64_t u64Match)
{
    TIMER_nSTATUS enReturn= TIMER_enERROR;
    enReturn =TIMER__enSetModeStruct(enModule,psMode);
    if(TIMER_enOK == enReturn)
    {
        TIMER__vSetMatch(enModule,u64Match);
    }
    return enReturn;
}
