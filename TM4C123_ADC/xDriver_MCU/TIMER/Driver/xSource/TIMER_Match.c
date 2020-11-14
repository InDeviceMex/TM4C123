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

    TIMER_nCONFIG enConfigVar=TIMER_enCONFIG_WIDE;
    TIMER_nSUB_MODE enSubModeVar=TIMER_enSUB_MODE_RESERVED;
    TIMER_nALT_MODE enAltModeVar=TIMER_enALT_MODE_CC;
    TIMER_nCOUNT_DIR enDirectionVar=TIMER_enCOUNT_DIR_DOWN;
    /*Erase*/
    uint32_t u32Reg=0;
    uint32_t u32RegPrescaler=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x1u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    volatile uint32_t* pu32TimerMATCHRLow=0;
    volatile uint32_t* pu32TimerMATCHRHigh=0;
    volatile uint32_t* pu32TimerPMR=0;
    if((uint32_t)TIMER_enMISC_MAX<u32Number)
    {
        u32Number=(uint32_t)TIMER_enMISC_MAX;
    }
    TIMER__vSetReady(enModule);

    enConfigVar=TIMER__enGetConfiguration(enModule);

    switch (enConfigVar)
    {
    case TIMER_enCONFIG_WIDE:
        if((uint32_t)TIMER_en64 == (uint32_t)u32Wide)
        {
            pu32TimerMATCHRHigh=TIMER_TnMATCHR_BLOCK[u32Wide][1][u32Number];
            pu32TimerMATCHRLow=TIMER_TnMATCHR_BLOCK[u32Wide][0][u32Number];

            *pu32TimerMATCHRHigh = (uint32_t)((u64Match>>32u)&0xFFFFFFFFu);
            *pu32TimerMATCHRLow =  (uint32_t) (u64Match&0xFFFFFFFFu);
        }
        else
        {
            pu32TimerMATCHRLow=TIMER_TnMATCHR_BLOCK[u32Wide][0][u32Number];
            u64Match&= 0xFFFFFFFFu;
            *pu32TimerMATCHRLow =  (uint32_t) (u64Match);

        }
        break;
    case TIMER_enCONFIG_RTC:
        pu32TimerMATCHRLow=TIMER_TnMATCHR_BLOCK[u32Wide][0][u32Number];
        pu32TimerMATCHRHigh=TIMER_TnMATCHR_BLOCK[u32Wide][1][u32Number];

        *pu32TimerMATCHRHigh = (uint32_t)((u64Match>>32)&0xFFFFFFFFu);
        *pu32TimerMATCHRLow =  (uint32_t) (u64Match&0xFFFFFFFFu);
        break;
    case TIMER_enCONFIG_INDIVIDUAL:

        enSubModeVar=TIMER__enGetSubMode(enModule);
        enAltModeVar=TIMER__enGetAltMode(enModule);
        enDirectionVar=TIMER__enGetCountDir(enModule);

        pu32TimerMATCHRLow=TIMER_TnMATCHR_BLOCK[u32Wide][u32Letter][u32Number];
        pu32TimerPMR=TIMER_TnPMR_BLOCK[u32Wide][u32Letter][u32Number];
        /*Prescaler*/
        if((TIMER_enALT_MODE_CC==enAltModeVar)&&(TIMER_enSUB_MODE_CAPTURE!=enSubModeVar) && (TIMER_enCOUNT_DIR_DOWN==enDirectionVar))
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

TIMER_nSTATUS TIMER__enGetMatch(TIMER_nMODULE enModule,uint64_t* pu64Match)
{
    uint32_t pu32PrescalerMask[2]={0xFFu,0xFFFFu};
    uint32_t pu32PrescalerShift[2]={8u,16u};
    uint32_t pu32SizeMask[2]={0xFFFFu,0xFFFFFFFFu};
    uint32_t pu32SizeShift[2]={16u,32u};
    uint64_t pu64TimerSize[2]={0xFFFFFFu,0xFFFFFFFFFFFFu};

    TIMER_nSTATUS enStatus = TIMER_enERROR;
    TIMER_nREADY enReady = TIMER_enNOREADY;
    TIMER_nCONFIG enConfigVar=TIMER_enCONFIG_WIDE;
    TIMER_nSUB_MODE enSubModeVar=TIMER_enSUB_MODE_RESERVED;
    TIMER_nALT_MODE enAltModeVar=TIMER_enALT_MODE_CC;
    TIMER_nCOUNT_DIR enDirectionVar=TIMER_enCOUNT_DIR_DOWN;
    /*Erase*/
    uint64_t u64Reg=0u;
    uint32_t u32Reg=0u;
    uint32_t u32RegPrescaler=0u;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x1u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    volatile uint32_t* pu32TimerMATCHRLow=0u;
    volatile uint32_t* pu32TimerMATCHRHigh=0u;
    volatile uint32_t* pu32TimerPMR=0u;

    if((uint32_t)TIMER_enMISC_MAX<u32Number)
    {
        u32Number=(uint32_t)TIMER_enMISC_MAX;
    }
    enReady = TIMER__enIsReady(enModule);
    if((TIMER_enREADY == enReady) && (0u != (uint32_t)pu64Match))
    {
        enStatus = TIMER_enOK;

        enConfigVar=TIMER__enGetConfiguration(enModule);
        switch (enConfigVar)
        {
        case TIMER_enCONFIG_WIDE:
            if((uint32_t)TIMER_en64 == (uint32_t)u32Wide)
            {
                pu32TimerMATCHRHigh=TIMER_TnMATCHR_BLOCK[u32Wide][1][u32Number];
                pu32TimerMATCHRLow=TIMER_TnMATCHR_BLOCK[u32Wide][0][u32Number];

                u32Reg = (uint32_t)(*pu32TimerMATCHRHigh);
                u64Reg = (uint64_t) u32Reg;
                u64Reg<<=32u;
                u32Reg = (uint32_t)(*pu32TimerMATCHRLow);
                u64Reg|= (uint64_t)u32Reg;

                *pu64Match= u64Reg;
            }
            else
            {
                pu32TimerMATCHRLow=TIMER_TnMATCHR_BLOCK[u32Wide][0][u32Number];

                u32Reg = (uint32_t)(*pu32TimerMATCHRLow);
                u64Reg = (uint64_t)u32Reg;

                *pu64Match= u64Reg;

            }
            break;
        case TIMER_enCONFIG_RTC:
            pu32TimerMATCHRLow=TIMER_TnMATCHR_BLOCK[u32Wide][0][u32Number];
            pu32TimerMATCHRHigh=TIMER_TnMATCHR_BLOCK[u32Wide][1][u32Number];

            u32Reg = (uint32_t)(*pu32TimerMATCHRHigh);
            u64Reg = (uint64_t) u32Reg;
            u64Reg<<=32u;
            u32Reg = (uint32_t)(*pu32TimerMATCHRLow);
            u64Reg|= (uint64_t)u32Reg;

            *pu64Match= u64Reg;

            break;
        case TIMER_enCONFIG_INDIVIDUAL:

            enSubModeVar=TIMER__enGetSubMode(enModule);
            enAltModeVar=TIMER__enGetAltMode(enModule);
            enDirectionVar=TIMER__enGetCountDir(enModule);

            pu32TimerMATCHRLow=TIMER_TnMATCHR_BLOCK[u32Wide][u32Letter][u32Number];
            pu32TimerPMR=TIMER_TnPMR_BLOCK[u32Wide][u32Letter][u32Number];
            /*Prescaler*/
            if((TIMER_enALT_MODE_CC==enAltModeVar)&&(TIMER_enSUB_MODE_CAPTURE!=enSubModeVar) && (TIMER_enCOUNT_DIR_DOWN==enDirectionVar))
            {
                u32Reg  = *pu32TimerMATCHRLow;
                u32Reg &= pu32SizeMask[u32Wide];
                u64Reg  = (uint64_t)u32Reg;
                u64Reg<<= pu32PrescalerShift[u32Wide];

                u32RegPrescaler  = *pu32TimerPMR;
                u32RegPrescaler &= pu32PrescalerMask[u32Wide];
                u64Reg |= (uint64_t)u32RegPrescaler;
                u64Reg &= pu64TimerSize[u32Wide];

                *pu64Match = u64Reg;
            }
            /*Time Extension*/
            else
            {
                u32RegPrescaler = *pu32TimerPMR;
                u32RegPrescaler&= pu32PrescalerMask[u32Wide];
                u64Reg  = (uint64_t)u32RegPrescaler;
                u64Reg<<= pu32SizeShift[u32Wide];

                u32Reg  = *pu32TimerMATCHRLow;
                u32Reg &= pu32SizeMask[u32Wide];
                u64Reg |= (uint64_t)u32Reg;

                *pu64Match= u64Reg;
            }
            break;
        default:
            break;
        }
    }
    return enStatus;
}

