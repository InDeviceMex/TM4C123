/**
 *
 * @file TIMER_InterruptSource.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/xHeader/TIMER_InterruptSource.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>

static uint32_t u32IntMask[3]={(uint32_t)TIMER_enINT_TA_ALL,(uint32_t)TIMER_enINT_TB_ALL,(uint32_t)TIMER_enINT_TW_ALL};

void TIMER__vEnInterruptSource(TIMER_nMODULE enModule, TIMER_nINT enInterrupt)
{
    uint32_t u32Reg=0;
    uint32_t u32Int=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x3u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    GPTM_TypeDef* psTimerIMR=0;

    if(TIMER_enMISC_MAX<u32Number)
    {
        u32Number=TIMER_enMISC_MAX;
    }
    TIMER__vSetReady(enModule);
#if 0
    if(enInterrupt&TIMER_enINT_MATCH)
    {
        if(TIMER_enEVENT_INT_DIS == TIMER__enGetMatchEventInterrupt)
        {
            TIMER__vSetMatchEventInterrupt(enModule,TIMER_enEVENT_INT_EN);
        }
    }

    if(enInterrupt&TIMER_enINT_CAPTURE_EVENT)
    {
        if(TIMER_enPWM_INT_DIS == TIMER__enGetPWMInterrupt)
        {
            TIMER__vSetPWMInterrupt(enModule,TIMER_enPWM_INT_EN);
        }
    }
#endif
    psTimerIMR=TIMER_BLOCK[u32Wide][u32Number];
    u32Int=(uint32_t)enInterrupt;
    if(TIMER_enB==u32Letter)
    {
        u32Int&=~(uint32_t)TIMER_enINT_RTC;
        if(u32Int& (uint32_t) TIMER_enINT_MATCH)
        {
            u32Int&=~(uint32_t)(TIMER_enINT_MATCH);
            u32Int|=(uint32_t)TIMER_enINT_RTC;
        }
        u32Int<<=8;
    }
    u32Int&=(uint32_t)u32IntMask[u32Letter];


    u32Reg=psTimerIMR->GPTMIMR;
    u32Reg|=u32Int;
    psTimerIMR->GPTMIMR=u32Reg;
}



void TIMER__vDisInterruptSource(TIMER_nMODULE enModule, TIMER_nINT enInterrupt)
{
    uint32_t u32Reg=0;
    uint32_t u32Int=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x3u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    GPTM_TypeDef* psTimerIMR=0;

    if(TIMER_enMISC_MAX<u32Number)
    {
        u32Number=TIMER_enMISC_MAX;
    }
    TIMER__vSetReady(enModule);
#if 0
    if(enInterrupt&TIMER_enINT_MATCH)
    {
        if(TIMER_enEVENT_INT_EN == TIMER__enGetMatchEventInterrupt)
        {
            TIMER__vSetMatchEventInterrupt(enModule,TIMER_enEVENT_INT_DIS);
        }
    }

    if(enInterrupt&TIMER_enINT_CAPTURE_EVENT)
    {
        if(TIMER_enPWM_INT_EN == TIMER__enGetPWMInterrupt)
        {
            TIMER__vSetPWMInterrupt(enModule,TIMER_enPWM_INT_DIS);
        }
    }
#endif
    psTimerIMR=TIMER_BLOCK[u32Wide][u32Number];
    u32Int=(uint32_t)enInterrupt;
    if(TIMER_enB==u32Letter)
    {
        u32Int&=~(uint32_t)TIMER_enINT_RTC;
        if(u32Int& (uint32_t) TIMER_enINT_MATCH)
        {
            u32Int&=~(uint32_t)(TIMER_enINT_MATCH);
            u32Int|=(uint32_t)TIMER_enINT_RTC;
        }
        u32Int<<=8;
    }
    u32Int&=(uint32_t)u32IntMask[u32Letter];


    u32Reg=psTimerIMR->GPTMIMR;
    u32Reg&=~u32Int;
    psTimerIMR->GPTMIMR=u32Reg;
}

void TIMER__vClearInterruptSource(TIMER_nMODULE enModule, TIMER_nINT enInterrupt)
{
    uint32_t u32Reg=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x3u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    GPTM_TypeDef* psTimerICR=0;

    if(TIMER_enMISC_MAX<u32Number)
    {
        u32Number=TIMER_enMISC_MAX;
    }
    TIMER__vSetReady(enModule);

    psTimerICR=TIMER_BLOCK[u32Wide][u32Number];
    u32Reg=(uint32_t)enInterrupt;
    if(TIMER_enB==u32Letter)
    {
        u32Reg&=~(uint32_t)TIMER_enINT_RTC;
        if(u32Reg&(uint32_t)TIMER_enINT_MATCH)
        {
            u32Reg&=~(uint32_t)(TIMER_enINT_MATCH);
            u32Reg|=(uint32_t)TIMER_enINT_RTC;
        }
        u32Reg<<=8;
    }
    u32Reg&=(uint32_t)u32IntMask[u32Letter];

    psTimerICR->GPTMICR=u32Reg;
}

TIMER_nINT_STATUS TIMER__enStatusInterruptSource(TIMER_nMODULE enModule, TIMER_nINT enInterrupt)
{
    TIMER_nINT_STATUS enInt=TIMER_enINT_STATUS_UNDEF;
    uint32_t u32Reg=0;
    uint32_t u32Int=0;
    TIMER_nREADY enReady=TIMER_enNOREADY;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x3u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    GPTM_TypeDef* psTimerRIS=0;
    if(TIMER_enMISC_MAX<u32Number)
    {
        u32Number=TIMER_enMISC_MAX;
    }
    enReady=TIMER__enIsReady(enModule);

    if(TIMER_enREADY == enReady)
    {
        psTimerRIS=TIMER_BLOCK[u32Wide][u32Number];
        u32Int=(uint32_t)enInterrupt;
        if(TIMER_enB==u32Letter)
        {
            u32Int&=~(uint32_t)TIMER_enINT_RTC;
            if(u32Int&(uint32_t)TIMER_enINT_MATCH)
            {
                u32Int&=~(uint32_t)(TIMER_enINT_MATCH);
                u32Int|=(uint32_t)TIMER_enINT_RTC;
            }
            u32Int<<=8;
        }
        u32Int&=(uint32_t)u32IntMask[u32Letter];

        u32Reg=psTimerRIS->GPTMRIS;
        u32Reg&=u32Int;

        if(0u!=u32Reg)
        {
            enInt=TIMER_enINT_OCCUR;
        }
        else
        {
            enInt=TIMER_enINT_NOOCCUR;
        }
    }
    return enInt;
}




