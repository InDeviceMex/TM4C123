/**
 *
 * @file TIMER_Configuration.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_Configuration.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

void TIMER__vSetConfiguration(TIMER_nMODULE enModule, TIMER_nCONFIG enConf)
{
    uint32_t u32En=0;
    uint32_t u32Reg=0;
    uint32_t u32Conf=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;

    GPTM_TypeDef* psTimer=0;
    if((uint32_t)TIMER_enMISC_MAX<u32Number)
    {
        u32Number=(uint32_t)TIMER_enMISC_MAX;
    }
    TIMER__vSetReady(enModule);
    psTimer=TIMER_BLOCK[u32Wide][u32Number];

    u32En=psTimer->GPTMCTL;
    u32Reg=(u32En&~(GPTM_GPTMCTL_R_TAEN_MASK|GPTM_GPTMCTL_R_TBEN_MASK));
    psTimer->GPTMCTL=u32Reg;

    u32Conf=(uint32_t)enConf;
    u32Conf&=GPTM_CTL_GPTMCFG_GPTMCFG_MASK;
    u32Conf<<=GPTM_CTL_GPTMCFG_R_GPTMCFG_BIT;
    psTimer->GPTMCFG=u32Conf;

    psTimer->GPTMCTL=u32En;
}

TIMER_nCONFIG TIMER__enGetConfiguration(TIMER_nMODULE enModule)
{
    uint32_t u32Reg=0;
    TIMER_nCONFIG enConf=TIMER_enCONFIG_UNDEF;
    TIMER_nREADY enReady= TIMER_enNOREADY;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;

    GPTM_TypeDef* psTimer=0;
    if((uint32_t)TIMER_enMISC_MAX<u32Number)
    {
        u32Number=(uint32_t)TIMER_enMISC_MAX;
    }
    enReady=TIMER__enIsReady(enModule);

    if(TIMER_enREADY == enReady)
    {
        psTimer=TIMER_BLOCK[u32Wide][u32Number];
        u32Reg=psTimer->GPTMCFG;
        u32Reg&=GPTM_CTL_GPTMCFG_R_GPTMCFG_MASK;
        u32Reg>>=GPTM_CTL_GPTMCFG_R_GPTMCFG_BIT;
        enConf=(TIMER_nCONFIG)(u32Reg);
    }
    return enConf;
}
