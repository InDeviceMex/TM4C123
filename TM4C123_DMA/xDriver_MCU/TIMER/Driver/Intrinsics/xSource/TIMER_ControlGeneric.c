/**
 *
 * @file TIMER_ControlGeneric.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/xHeader/TIMER_ControlGeneric.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>

void TIMER__vSetControlGeneric(TIMER_nMODULE enModule, uint32_t u32ControlGeneric,uint32_t u32Mask, uint32_t u32Bit)
{
    uint32_t u32Reg=0;
    uint32_t u32RegControl=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x1u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    uint32_t u32Shift=8u*u32Letter;
    uint32_t u32RegAux=0;
    GPTM_TypeDef* psTimerCTL=0;
    if(TIMER_enMISC_MAX<u32Number)
    {
        u32Number=TIMER_enMISC_MAX;
    }
    TIMER__vSetReady(enModule);

    psTimerCTL=TIMER_BLOCK[u32Wide][u32Number];

    u32Reg=psTimerCTL->GPTMCTL;
    u32RegControl=u32Reg;
    u32RegControl&=~(GPTM_GPTMCTL_TAEN_MASK<<u32Shift);
    psTimerCTL->GPTMCTL=u32RegControl;
    u32Shift+=u32Bit;
    u32Reg&=~(u32Mask<<u32Shift);
    u32RegAux =((uint32_t)u32ControlGeneric&u32Mask) ;
    u32RegAux<<=(u32Shift);
    u32Reg|=u32RegAux;
    psTimerCTL->GPTMCTL=u32Reg;
}

uint32_t TIMER__u32GetControlGeneric(TIMER_nMODULE enModule,uint32_t u32Mask, uint32_t u32Bit)
{
    uint32_t u32Reg=0;
    uint32_t u32ControlGeneric=0xFF;
    TIMER_nREADY enReady= TIMER_enNOREADY;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x1u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    uint32_t u32Shift=8u*u32Letter;
    GPTM_TypeDef* psTimerCTL=0;
    if(TIMER_enMISC_MAX<u32Number)
    {
        u32Number=TIMER_enMISC_MAX;
    }
    enReady=TIMER__enIsReady(enModule);

    if(TIMER_enREADY == enReady)
    {
        psTimerCTL=TIMER_BLOCK[u32Wide][u32Number];
        u32Reg=psTimerCTL->GPTMCTL;
        u32Shift+=u32Bit;
        u32Reg>>=u32Shift;
        u32Reg&=(u32Mask);
        u32ControlGeneric=(uint32_t)(u32Reg);
    }
    return u32ControlGeneric;
}
