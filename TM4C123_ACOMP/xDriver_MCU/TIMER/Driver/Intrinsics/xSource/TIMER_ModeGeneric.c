/**
 *
 * @file TIMER_ModeGeneric.c
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
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/xHeader/TIMER_ModeGeneric.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>

void TIMER__vSetModeGeneric(TIMER_nMODULE enModule, uint32_t u32ModeGeneric,uint32_t u32Mask, uint32_t u32Bit)
{
    uint32_t u32En=0;
    uint32_t u32Reg=0;
    uint32_t u32Shift=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x1u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    uint32_t u32RegAux=0;
    GPTM_TypeDef* psTimerCTL=0;
    volatile uint32_t* pu32TimerMR=0;
    if((uint32_t)TIMER_enMISC_MAX<u32Number)
    {
        u32Number=(uint32_t)TIMER_enMISC_MAX;
    }
    TIMER__vSetReady(enModule);

    if((uint32_t)TIMER_enB==u32Letter)
    {
        u32Shift=8u;
    }
    psTimerCTL=TIMER_BLOCK[u32Wide][u32Number];
    pu32TimerMR=TIMER_TnMR_BLOCK[u32Wide][u32Letter][u32Number];

    u32En=psTimerCTL->GPTMCTL;
    u32Reg=(u32En&~(GPTM_GPTMCTL_TAEN_MASK<<u32Shift));
    psTimerCTL->GPTMCTL=u32Reg;

    u32Reg=*pu32TimerMR;
    u32Reg&=~(u32Mask<<u32Bit);
    u32RegAux=((uint32_t)u32ModeGeneric&u32Mask);
    u32RegAux<<=u32Bit;
    u32Reg|=u32RegAux;
    *pu32TimerMR=u32Reg;

    psTimerCTL->GPTMCTL=u32En;
}

uint32_t TIMER__u32GetModeGeneric(TIMER_nMODULE enModule,uint32_t u32Mask, uint32_t u32Bit)
{
    uint32_t u32Reg=0;
    uint32_t u32ModeGeneric=0xFF;
    TIMER_nREADY enReady= TIMER_enNOREADY;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x1u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    volatile uint32_t* pu32TimerMR=0;
    if((uint32_t)TIMER_enMISC_MAX<u32Number)
    {
        u32Number=(uint32_t)TIMER_enMISC_MAX;
    }
    enReady=TIMER__enIsReady(enModule);

    if(TIMER_enREADY == enReady)
    {
        pu32TimerMR=TIMER_TnMR_BLOCK[u32Wide][u32Letter][u32Number];
        u32Reg=*pu32TimerMR;
        u32Reg>>=u32Bit;
        u32Reg&=u32Mask;
        u32ModeGeneric=(uint32_t)(u32Reg);
    }
    return u32ModeGeneric;
}


