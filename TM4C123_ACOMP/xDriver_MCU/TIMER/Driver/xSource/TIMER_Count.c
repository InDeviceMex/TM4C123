/**
 *
 * @file TIMER_Count.c
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
 * @verbatim 26 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_AltMode.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_CountDir.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_SubMode.h>
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_SnapShot.h>
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_Configuration.h>
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_Count.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

TIMER_nSTATUS TIMER__enGetCount(TIMER_nMODULE enModule,uint64_t* pu64Count)
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
    TIMER_nSNAPSHOT enSnapshotVar=TIMER_enSNAPSHOT_UNDEF;
    /*Erase*/
    uint64_t u64Reg=0U;
    uint32_t u32Reg=0U;
    uint32_t u32RegPrescaler=0U;
    uint32_t u32Number= (uint32_t) enModule & 0x7U;
    uint32_t u32Letter= ((uint32_t) enModule>>8U) & 0x1U;
    uint32_t u32Wide= ((uint32_t) enModule>>16U) & 0x1U;
    volatile uint32_t* pu32TimerCOUNTLow=0U;
    volatile uint32_t* pu32TimerCOUNTHigh=0U;
    volatile uint32_t* pu32TimerCOUNTFREE=0U;
    volatile uint32_t* pu32TimerPS=0U;

    if((uint32_t)TIMER_enMISC_MAX<u32Number)
    {
        u32Number=(uint32_t)TIMER_enMISC_MAX;
    }
    enReady = TIMER__enIsReady(enModule);
    if((TIMER_enREADY == enReady) && (0u != (uint32_t)pu64Count))
    {
        enStatus = TIMER_enOK;

        enConfigVar=TIMER__enGetConfiguration(enModule);
        switch (enConfigVar)
        {
        case TIMER_enCONFIG_WIDE:
            if((uint32_t)TIMER_en64 == (uint32_t)u32Wide)
            {
                pu32TimerCOUNTHigh=TIMER_TnR_BLOCK[u32Wide][1][u32Number];
                pu32TimerCOUNTLow=TIMER_TnR_BLOCK[u32Wide][0][u32Number];

                u32Reg = (uint32_t)(*pu32TimerCOUNTHigh);
                u64Reg = (uint64_t) u32Reg;
                u64Reg<<=32U;
                u32Reg = (uint32_t)(*pu32TimerCOUNTLow);
                u64Reg|= (uint64_t)u32Reg;

                *pu64Count= u64Reg;
            }
            else
            {
                pu32TimerCOUNTLow=TIMER_TnR_BLOCK[u32Wide][0][u32Number];

                u32Reg = (uint32_t)(*pu32TimerCOUNTLow);
                u64Reg = (uint64_t)u32Reg;

                *pu64Count= u64Reg;
            }

            break;
        case TIMER_enCONFIG_RTC:
            pu32TimerCOUNTLow=TIMER_TnR_BLOCK[u32Wide][0][u32Number];
            pu32TimerCOUNTHigh=TIMER_TnR_BLOCK[u32Wide][1][u32Number];

            u32Reg = (uint32_t)(*pu32TimerCOUNTHigh);
            u64Reg = (uint64_t) u32Reg;
            u64Reg<<=32U;
            u32Reg = (uint32_t)(*pu32TimerCOUNTLow);
            u64Reg|= (uint64_t)u32Reg;

            *pu64Count= u64Reg;

            break;
        case TIMER_enCONFIG_INDIVIDUAL:

            enSubModeVar=TIMER__enGetSubMode(enModule);
            enAltModeVar=TIMER__enGetAltMode(enModule);
            enDirectionVar=TIMER__enGetCountDir(enModule);

            pu32TimerCOUNTLow=TIMER_TnR_BLOCK[u32Wide][u32Letter][u32Number];
            pu32TimerPS=TIMER_TnPS_BLOCK[u32Wide][u32Letter][u32Number];
            pu32TimerCOUNTFREE=TIMER_TnV_BLOCK[u32Wide][u32Letter][u32Number];
            /*Prescaler*/
            if((TIMER_enALT_MODE_CC==enAltModeVar)&& (TIMER_enSUB_MODE_CAPTURE!=enSubModeVar) && (TIMER_enCOUNT_DIR_DOWN==enDirectionVar))
            {

                if((uint32_t)TIMER_en64 == (uint32_t)u32Wide)
                {
                    u32Reg  = *pu32TimerCOUNTLow;
                    u32Reg &= pu32SizeMask[u32Wide];
                    u64Reg  = (uint64_t)u32Reg;
                    u64Reg<<= pu32PrescalerShift[u32Wide];

                    u32RegPrescaler  = *pu32TimerPS;
                    u32RegPrescaler &= pu32PrescalerMask[u32Wide];
                    u64Reg |= (uint64_t)u32RegPrescaler;
                    u64Reg &= pu64TimerSize[u32Wide];

                    *pu64Count = u64Reg;
                }
                else
                {
                    u32Reg  = *pu32TimerCOUNTLow;
                    u32Reg &= pu32SizeMask[u32Wide];
                    u64Reg  = (uint64_t)u32Reg;
                    u64Reg<<= pu32PrescalerShift[u32Wide];

                    u32RegPrescaler= *pu32TimerCOUNTFREE;
                    u32RegPrescaler >>= pu32SizeShift[u32Wide];
                    u32RegPrescaler&= pu32PrescalerMask[u32Wide];
                    u64Reg |= (uint64_t)u32RegPrescaler;
                    u64Reg &= pu64TimerSize[u32Wide];

                    *pu64Count = u64Reg;

                }
            }
            /*Time Extension*/
            else
            {

                if((uint32_t)TIMER_en64 == (uint32_t)u32Wide)
                {
                    u32RegPrescaler = *pu32TimerPS;
                    u32RegPrescaler&= pu32PrescalerMask[u32Wide];
                    u64Reg  = (uint64_t)u32RegPrescaler;
                    u64Reg<<= pu32SizeShift[u32Wide];

                    u32Reg  = *pu32TimerCOUNTLow;
                    u32Reg &= pu32SizeMask[u32Wide];
                    u64Reg |= (uint64_t)u32Reg;

                    *pu64Count= u64Reg;
                }
                else
                {
                    if( (uint32_t)TIMER_enSUB_MODE_CAPTURE==enSubModeVar )
                    {
                        u32Reg  = *pu32TimerCOUNTLow;
                        u64Reg  = (uint64_t)u32Reg;
                        u64Reg &= pu64TimerSize[u32Wide];
                        *pu64Count= u64Reg;
                    }
                    else
                    {
                        enSnapshotVar= TIMER__enGetSnapShot(enModule);
                        if(TIMER_enSNAPSHOT_DIS== enSnapshotVar)
                        {
                            u32Reg  = *pu32TimerCOUNTLow;
                            u32Reg &= pu32SizeMask[u32Wide];
                            u64Reg  = (uint64_t)u32Reg;
                            u32Reg  = *pu32TimerCOUNTFREE;
                            u32Reg &= (pu32PrescalerMask[u32Wide]<<pu32SizeShift[u32Wide]);
                            u64Reg |= (uint64_t)u32Reg;
                            *pu64Count= u64Reg;
                        }
                        else
                        {
                            u32Reg  = *pu32TimerCOUNTLow;
                            u32Reg &= pu32SizeMask[u32Wide];
                            u64Reg  = (uint64_t)u32Reg;
                            u32Reg  = *pu32TimerPS;
                            u32Reg &= pu32PrescalerMask[u32Wide];
                            u32Reg <<=pu32SizeShift[u32Wide];
                            u64Reg |= (uint64_t)u32Reg;
                            *pu64Count= u64Reg;

                        }

                    }
                }
            }
            break;
        default:
            break;
        }
    }
    return enStatus;
}



