/**
 *
 * @file TIMER_Ready.c
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
#include <stdint.h>
#include <xDriver_MCU/SYSCTL/SYSCTL.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/xHeader/TIMER_Ready.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

static SYSCTL_nPERIPHERAL SYSCTL_VECTOR_TIMER[2][6]={
                                               {SYSCTL_enTIMER0,SYSCTL_enTIMER1,SYSCTL_enTIMER2,SYSCTL_enTIMER3,SYSCTL_enTIMER4,SYSCTL_enTIMER5},
                                               {SYSCTL_enWTIMER0,SYSCTL_enWTIMER1,SYSCTL_enWTIMER2,SYSCTL_enWTIMER3,SYSCTL_enWTIMER4,SYSCTL_enWTIMER5}
                                            };
void TIMER__vSetReady(TIMER_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enTIMER0;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
     uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    if(TIMER_enMISC_MAX<u32Number)
    {
        u32Number=TIMER_enMISC_MAX;
    }
    enPeripheral=SYSCTL_VECTOR_TIMER[u32Wide][u32Number];
    SYSCTL__vSetReady(enPeripheral);
}

void TIMER__vClearReady(TIMER_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enTIMER0;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
     uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    if(TIMER_enMISC_MAX<u32Number)
    {
        u32Number=TIMER_enMISC_MAX;
    }
    enPeripheral=SYSCTL_VECTOR_TIMER[u32Wide][u32Number];
    SYSCTL__vClearReady(enPeripheral);
}

TIMER_nREADY TIMER__enIsReady(TIMER_nMODULE enModule)
{
    TIMER_nREADY enReady=TIMER_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enTIMER0;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    if(TIMER_enMISC_MAX<u32Number)
    {
        u32Number=TIMER_enMISC_MAX;
    }
    enPeripheral=SYSCTL_VECTOR_TIMER[u32Wide][u32Number];
    enReady=(TIMER_nREADY)SYSCTL__enIsReady(enPeripheral);
    return enReady;
}


