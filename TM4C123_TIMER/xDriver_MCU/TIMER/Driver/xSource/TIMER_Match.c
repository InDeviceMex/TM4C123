/**
 *
 * @file TIMER_Match.c
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

#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_AltMode.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_CountDir.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_SubMode.h>
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_Configuration.h>
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_Match.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

void TIMER__vSetMatch(TIMER_nMODULE enModule,uint64_t u64Match)
{

    uint32_t MATCH_pu32PrescalerMask[2]={0xFF,0xFFFF};
    uint32_t MATCH_pu32PrescalerShift[2]={8,16};
    uint32_t MATCH_pu32SizeMask[2]={0xFFFF,0xFFFFFFFF};
    uint32_t MATCH_pu32SizeShift[2]={16,32};
    uint64_t MATCH_pu64TimerSize[2]={0xFFFFFF,0xFFFFFFFFFFFF};

    TIMER_nCONFIG enConfig=TIMER_enCONFIG_WIDE;
    TIMER_nSUB_MODE enSubMode=TIMER_enSUB_MODE_RESERVED;
    TIMER_nALT_MODE enAltMode=TIMER_enALT_MODE_CC;
    TIMER_nCOUNT_DIR enDirection=TIMER_enCOUNT_DIR_DOWN;
    /*Erase*/
    uint32_t u32Reg=0;
    uint32_t u32RegPrescaler=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x1u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    volatile uint32_t* pu32TimerMATCHRLow=0;
    volatile uint32_t* pu32TimerMATCHRHigh=0;
    volatile uint32_t* pu32TimerPMR=0;
    if(TIMER_enMISC_MAX<u32Number)
    {
        u32Number=TIMER_enMISC_MAX;
    }
    TIMER__vSetReady(enModule);

    enConfig=TIMER__enGetConfiguration(enModule);
    enSubMode=TIMER__enGetSubMode(enModule);
    enAltMode=TIMER__enGetAltMode(enModule);
    enDirection=TIMER__enGetCountDir(enModule);

    switch (enConfig)
    {
    case TIMER_enCONFIG_WIDE:
        pu32TimerMATCHRHigh=TIMER_TnMATCHR_BLOCK[u32Wide][1][u32Number];
        pu32TimerMATCHRLow=TIMER_TnMATCHR_BLOCK[u32Wide][0][u32Number];

        *pu32TimerMATCHRHigh = (uint32_t)((u64Match>>32)&0xFFFFFFFFu);
        *pu32TimerMATCHRLow =  (uint32_t) (u64Match&0xFFFFFFFFu);
        break;
    case TIMER_enCONFIG_RTC:
        pu32TimerMATCHRLow=TIMER_TnMATCHR_BLOCK[u32Wide][0][u32Number];
        pu32TimerMATCHRHigh=TIMER_TnMATCHR_BLOCK[u32Wide][1][u32Number];

        *pu32TimerMATCHRHigh = (uint32_t)((u64Match>>32)&0xFFFFFFFFu);
        *pu32TimerMATCHRLow =  (uint32_t) (u64Match&0xFFFFFFFFu);
        break;
    case TIMER_enCONFIG_INDIVIDUAL:

        pu32TimerMATCHRLow=TIMER_TnMATCHR_BLOCK[u32Wide][u32Letter][u32Number];
        pu32TimerPMR=TIMER_TnPMR_BLOCK[u32Wide][u32Letter][u32Number];
        /*Prescaler*/
        if((TIMER_enALT_MODE_CC==enAltMode)&&(TIMER_enSUB_MODE_CAPTURE!=enSubMode) && (TIMER_enCOUNT_DIR_DOWN==enDirection))
        {
            u64Match&=MATCH_pu64TimerSize[u32Wide];
            u32RegPrescaler=(uint32_t)(u64Match&(uint64_t)MATCH_pu32PrescalerMask[u32Wide]);
            u32Reg=(uint32_t)(u64Match>>MATCH_pu32PrescalerShift[u32Wide]);
            u32Reg&=MATCH_pu32SizeMask[u32Wide];
            *pu32TimerPMR=u32RegPrescaler;
            *pu32TimerMATCHRLow=u32Reg;
        }
        /*Time Extension*/
        else
        {
            u64Match&=MATCH_pu64TimerSize[u32Wide];
            u32Reg=(uint32_t)(u64Match&(uint64_t)MATCH_pu32SizeMask[u32Wide]);
            u32RegPrescaler=(uint32_t)(u64Match>>MATCH_pu32SizeShift[u32Wide]);
            u32RegPrescaler&=MATCH_pu32PrescalerMask[u32Wide];
            *pu32TimerPMR=u32RegPrescaler;
            *pu32TimerMATCHRLow=u32Reg;
        }
        break;
    default:
        break;
    }
}
