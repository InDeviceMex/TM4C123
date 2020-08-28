/**
 *
 * @file TIMER_Reload.c
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
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_Reload.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

void TIMER__vSetReload(TIMER_nMODULE enModule, uint32_t u32PrescalerRTC, uint64_t u64Reload)
{
    uint64_t pu64TimerSize[2]={0xFFFFFF,0xFFFFFFFFFFFF};
    uint32_t pu32PrescalerMask[2]={0xFF,0xFFFF};
    uint32_t pu32SizeMask[2]={0xFFFF,0xFFFFFFFF};
    uint32_t pu32PrescalerShift[2]={8,16};
    uint32_t pu32SizeShift[2]={16,32};

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
    volatile uint32_t* pu32TimerILRLow=0;
    volatile uint32_t* pu32TimerILRHigh=0;
    volatile uint32_t* pu32TimerPR=0;
    volatile uint32_t* pu32TimerRTCPD=0;
    if(TIMER_enMISC_MAX<u32Number)
    {
        u32Number=TIMER_enMISC_MAX;
    }
    TIMER__vSetReady(enModule);

    enConfig=TIMER__enGetConfiguration(enModule);
    switch (enConfig)
    {
    case TIMER_enCONFIG_WIDE:
        pu32TimerILRHigh=TIMER_TnILR_BLOCK[u32Wide][1][u32Number];
        pu32TimerILRLow=TIMER_TnILR_BLOCK[u32Wide][0][u32Number];

        *pu32TimerILRHigh = (uint32_t)((u64Reload>>32)&0xFFFFFFFFu);
        *pu32TimerILRLow =  (uint32_t) (u64Reload&0xFFFFFFFFu);
        break;
    case TIMER_enCONFIG_RTC:
        pu32TimerILRLow=TIMER_TnILR_BLOCK[u32Wide][0][u32Number];
        pu32TimerILRHigh=TIMER_TnILR_BLOCK[u32Wide][1][u32Number];
        pu32TimerRTCPD=TIMER_RTCPD_BLOCK[u32Number];

        *pu32TimerRTCPD=u32PrescalerRTC&0xFFFFu;
        *pu32TimerILRHigh = (uint32_t)((u64Reload>>32)&0xFFFFFFFFu);
        *pu32TimerILRLow =  (uint32_t) (u64Reload&0xFFFFFFFFu);
        break;
    case TIMER_enCONFIG_INDIVIDUAL:

        enSubMode=TIMER__enGetSubMode(enModule);
        enAltMode=TIMER__enGetAltMode(enModule);
        enDirection=TIMER__enGetCountDir(enModule);

        pu32TimerILRLow=TIMER_TnILR_BLOCK[u32Wide][u32Letter][u32Number];
        pu32TimerPR=TIMER_TnPR_BLOCK[u32Wide][u32Letter][u32Number];
        /*Prescaler*/
        if((TIMER_enALT_MODE_CC==enAltMode)&&(TIMER_enSUB_MODE_CAPTURE!=enSubMode) && (TIMER_enCOUNT_DIR_DOWN==enDirection))
        {
            u64Reload&=pu64TimerSize[u32Wide];
            u32RegPrescaler=(uint32_t)(u64Reload&(uint64_t)pu32PrescalerMask[u32Wide]);
            u32Reg=(uint32_t)(u64Reload>>pu32PrescalerShift[u32Wide]);
            u32Reg&=pu32SizeMask[u32Wide];
            *pu32TimerPR=u32RegPrescaler;
            *pu32TimerILRLow=u32Reg;
        }
        /*Time Extension*/
        else
        {
            u64Reload&=pu64TimerSize[u32Wide];
            u32Reg=(uint32_t)(u64Reload&(uint64_t)pu32SizeMask[u32Wide]);
            u32RegPrescaler=(uint32_t)(u64Reload>>pu32SizeShift[u32Wide]);
            u32RegPrescaler&=pu32PrescalerMask[u32Wide];
            *pu32TimerPR=u32RegPrescaler;
            *pu32TimerILRLow=u32Reg;
        }
        break;
    default:
        break;
    }
}

TIMER_nSTATUS TIMER__enGetReload(TIMER_nMODULE enModule, uint32_t* pu32PrescalerRTC, uint64_t* pu64Reload)
{
    uint64_t pu64TimerSize[2]={0xFFFFFF,0xFFFFFFFFFFFF};
    uint32_t pu32PrescalerMask[2]={0xFF,0xFFFF};
    uint32_t pu32SizeMask[2]={0xFFFF,0xFFFFFFFF};
    uint32_t pu32PrescalerShift[2]={8,16};
    uint32_t pu32SizeShift[2]={16,32};

    TIMER_nSTATUS enStatus = TIMER_enERROR;
    TIMER_nREADY enReady = TIMER_enNOREADY;
    TIMER_nCONFIG enConfig=TIMER_enCONFIG_WIDE;
    TIMER_nSUB_MODE enSubMode=TIMER_enSUB_MODE_RESERVED;
    TIMER_nALT_MODE enAltMode=TIMER_enALT_MODE_CC;
    TIMER_nCOUNT_DIR enDirection=TIMER_enCOUNT_DIR_DOWN;
    /*Erase*/
    uint64_t u64Reg=0u;
    uint32_t u32Reg=0u;
    uint32_t u32RegPrescaler=0u;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x1u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    volatile uint32_t* pu32TimerILRLow=0u;
    volatile uint32_t* pu32TimerILRHigh=0u;
    volatile uint32_t* pu32TimerPR=0u;
    volatile uint32_t* pu32TimerRTCPD=0u;
    if(TIMER_enMISC_MAX<u32Number)
    {
        u32Number=TIMER_enMISC_MAX;
    }
    enReady = TIMER__enIsReady(enModule);
    if((TIMER_enREADY == enReady) && (0u != (uint32_t)pu32PrescalerRTC)&& (0u != (uint32_t)pu64Reload))
    {
        enStatus = TIMER_enOK;

        enConfig=TIMER__enGetConfiguration(enModule);
        switch (enConfig)
        {
        case TIMER_enCONFIG_WIDE:
            pu32TimerILRHigh=TIMER_TnILR_BLOCK[u32Wide][1][u32Number];
            pu32TimerILRLow=TIMER_TnILR_BLOCK[u32Wide][0][u32Number];
            u32Reg = (uint32_t)(*pu32TimerILRHigh);
            u64Reg = (uint64_t) u32Reg;
            u64Reg<<=32u;
            u32Reg = (uint32_t)(*pu32TimerILRLow);
            u64Reg|= (uint64_t)u32Reg;

            *pu64Reload= u64Reg;
            break;
        case TIMER_enCONFIG_RTC:
            pu32TimerILRLow=TIMER_TnILR_BLOCK[u32Wide][0][u32Number];
            pu32TimerILRHigh=TIMER_TnILR_BLOCK[u32Wide][1][u32Number];
            pu32TimerRTCPD=TIMER_RTCPD_BLOCK[u32Number];

            u32Reg = (uint32_t)(*pu32TimerILRHigh);
            u64Reg = (uint64_t) u32Reg;
            u64Reg<<=32u;
            u32Reg = (uint32_t)(*pu32TimerILRLow);
            u64Reg|= (uint64_t)u32Reg;

            *pu32PrescalerRTC = *pu32TimerRTCPD &0xFFFFu;
            *pu64Reload= u64Reg;

            break;
        case TIMER_enCONFIG_INDIVIDUAL:

            enSubMode=TIMER__enGetSubMode(enModule);
            enAltMode=TIMER__enGetAltMode(enModule);
            enDirection=TIMER__enGetCountDir(enModule);

            pu32TimerILRLow=TIMER_TnILR_BLOCK[u32Wide][u32Letter][u32Number];
            pu32TimerPR=TIMER_TnPR_BLOCK[u32Wide][u32Letter][u32Number];
            /*Prescaler*/
            if((TIMER_enALT_MODE_CC==enAltMode)&&(TIMER_enSUB_MODE_CAPTURE!=enSubMode) && (TIMER_enCOUNT_DIR_DOWN==enDirection))
            {
                u32Reg  = *pu32TimerILRLow;
                u32Reg &= pu32SizeMask[u32Wide];
                u64Reg  = (uint64_t)u32Reg;
                u64Reg<<= pu32PrescalerShift[u32Wide];

                u32RegPrescaler  = *pu32TimerPR;
                u32RegPrescaler &= pu32PrescalerMask[u32Wide];
                u64Reg |= (uint64_t)u32RegPrescaler;
                u64Reg &= pu64TimerSize[u32Wide];

                *pu64Reload = u64Reg;
            }
            /*Time Extension*/
            else
            {
                u32RegPrescaler = *pu32TimerPR;
                u32RegPrescaler&= pu32PrescalerMask[u32Wide];
                u64Reg  = (uint64_t)u32RegPrescaler;
                u64Reg<<= pu32SizeShift[u32Wide];

                u32Reg  = *pu32TimerILRLow;
                u32Reg &= pu32SizeMask[u32Wide];
                u64Reg |= (uint64_t)u32Reg;

                *pu64Reload= u64Reg;
            }
            break;
        default:
            break;
        }
    }
    return enStatus;
}
