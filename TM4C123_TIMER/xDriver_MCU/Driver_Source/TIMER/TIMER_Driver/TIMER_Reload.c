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

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Reload.h>


#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Intrinsics/TIMER_Primitives/TIMER_Primitives.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Configuration.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Mode/TIMER_AltMode.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Mode/TIMER_CountDir.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Mode/TIMER_SubMode.h>

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
    enSubMode=TIMER__enGetSubMode(enModule);
    enAltMode=TIMER__enGetAltMode(enModule);
    enDirection=TIMER__enGetCountDir(enModule);
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
