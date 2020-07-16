/*
 * TIMER.c
 *
 *  Created on: 5 may. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/Driver_Header/TIMER/TIMER.h>


void TIMER__vInit(void)
{
    TIMER__vRegisterMODULEISR(&TIMER0A__vISR,TIMER_enT0A);
    TIMER__vRegisterMODULEISR(&TIMER0B__vISR,TIMER_enT0B);
    TIMER__vRegisterMODULEISR(&TIMER1A__vISR,TIMER_enT1A);
    TIMER__vRegisterMODULEISR(&TIMER1B__vISR,TIMER_enT1B);
    TIMER__vRegisterMODULEISR(&TIMER2A__vISR,TIMER_enT2A);
    TIMER__vRegisterMODULEISR(&TIMER2B__vISR,TIMER_enT2B);
    TIMER__vRegisterMODULEISR(&TIMER3A__vISR,TIMER_enT3A);
    TIMER__vRegisterMODULEISR(&TIMER3B__vISR,TIMER_enT3B);
    TIMER__vRegisterMODULEISR(&TIMER4A__vISR,TIMER_enT4A);
    TIMER__vRegisterMODULEISR(&TIMER4B__vISR,TIMER_enT4B);
    TIMER__vRegisterMODULEISR(&TIMER5A__vISR,TIMER_enT5A);
    TIMER__vRegisterMODULEISR(&TIMER5B__vISR,TIMER_enT5B);

    TIMER__vRegisterMODULEISR(&WTIMER0A__vISR,TIMER_enWT0A);
    TIMER__vRegisterMODULEISR(&WTIMER0B__vISR,TIMER_enWT0B);
    TIMER__vRegisterMODULEISR(&WTIMER1A__vISR,TIMER_enWT1A);
    TIMER__vRegisterMODULEISR(&WTIMER1B__vISR,TIMER_enWT1B);
    TIMER__vRegisterMODULEISR(&WTIMER2A__vISR,TIMER_enWT2A);
    TIMER__vRegisterMODULEISR(&WTIMER2B__vISR,TIMER_enWT2B);
    TIMER__vRegisterMODULEISR(&WTIMER3A__vISR,TIMER_enWT3A);
    TIMER__vRegisterMODULEISR(&WTIMER3B__vISR,TIMER_enWT3B);
    TIMER__vRegisterMODULEISR(&WTIMER4A__vISR,TIMER_enWT4A);
    TIMER__vRegisterMODULEISR(&WTIMER4B__vISR,TIMER_enWT4B);
    TIMER__vRegisterMODULEISR(&WTIMER5A__vISR,TIMER_enWT5A);
    TIMER__vRegisterMODULEISR(&WTIMER5B__vISR,TIMER_enWT5B);
}






void TIMER__vCreateModeStructPointer(TIMER_nMODE enMode,TIMER_MODE_Typedef* psMode)
{

    if(psMode!=0)
    {
        psMode->enDirection=(TIMER_nCOUNT_DIR)((uint32_t)enMode&1u);
        psMode->enAltMode=(TIMER_nALT_MODE)(((uint32_t)enMode>>4u)&1u);
        psMode->enEdgeMode=(TIMER_nEDGE_MODE)(((uint32_t)enMode>>8u)&1u);
        psMode->enSubMode=(TIMER_nSUB_MODE)(((uint32_t)enMode>>12u)&3u);
        psMode->enConfig=(TIMER_nCONFIG)(((uint32_t)enMode>>16u)&7u);
        psMode->enPWMOut=(TIMER_nPWM_OUTPUT)(((uint32_t)enMode>>20u)&1u);
        psMode->enPWMOutInit=(TIMER_nPWM_OUT_INIT)(((uint32_t)enMode>>24u)&1u);
        psMode->enEdgeEvent=(TIMER_nEDGE_EVENT)(((uint32_t)enMode>>28u)&3u);
        psMode->enSnapShot=(TIMER_nSNAPSHOT)(((uint32_t)enMode>>30u)&1u);
    }
}

TIMER_MODE_Typedef* TIMER__psCreateModeStruct(TIMER_nMODE enMode)
{
    TIMER_MODE_Typedef* psMode=0;
    #if defined ( __TI_ARM__ )
    psMode = (TIMER_MODE_Typedef*) memalign((size_t)4,(size_t)sizeof(TIMER_MODE_Typedef));
    #elif defined ( __GNUC__ )
    psMode = (TIMER_MODE_Typedef*) malloc((size_t)sizeof(TIMER_MODE_Typedef));
    #endif
    if(psMode!=0)
    {
        psMode->enDirection=(TIMER_nCOUNT_DIR)((uint32_t)enMode&1u);
        psMode->enAltMode=(TIMER_nALT_MODE)(((uint32_t)enMode>>4u)&1u);
        psMode->enEdgeMode=(TIMER_nEDGE_MODE)(((uint32_t)enMode>>8u)&1u);
        psMode->enSubMode=(TIMER_nSUB_MODE)(((uint32_t)enMode>>12u)&3u);
        psMode->enConfig=(TIMER_nCONFIG)(((uint32_t)enMode>>16u)&7u);
        psMode->enPWMOut=(TIMER_nPWM_OUTPUT)(((uint32_t)enMode>>20u)&1u);
        psMode->enPWMOutInit=(TIMER_nPWM_OUT_INIT)(((uint32_t)enMode>>24u)&1u);
        psMode->enEdgeEvent=(TIMER_nEDGE_EVENT)(((uint32_t)enMode>>28u)&3u);
        psMode->enSnapShot=(TIMER_nSNAPSHOT)(((uint32_t)enMode>>30u)&1u);
    }
    return psMode;
}

void TIMER__vDeleteModeStruct(TIMER_MODE_Typedef* psMode)
{
    free(psMode);
}








TIMER_nSTATUS TIMER__enSetMode(TIMER_nMODULE enModule, TIMER_nMODE enMode)
{
    TIMER_nSTATUS enReturn=TIMER_enERROR;
    TIMER_MODE_Typedef* psMode=TIMER__psCreateModeStruct(enMode);

    if(psMode!=0)
    {
        TIMER__vSetConfiguration(enModule,psMode->enConfig);
        TIMER__vSetSubMode(enModule,psMode->enSubMode);
        TIMER__vSetEdgeMode(enModule,psMode->enEdgeMode);
        TIMER__vSetAltMode(enModule,psMode->enAltMode);
        TIMER__vSetCountDir(enModule,psMode->enDirection);
        TIMER__vSetSnapShot(enModule,psMode->enSnapShot);
        TIMER__vSetPWMOutputInit(enModule,psMode->enPWMOutInit);
        TIMER__vSetEdgeEvent(enModule,psMode->enEdgeEvent);
        TIMER__vSetPWMOutputLevel(enModule,psMode->enPWMOut);
        TIMER__vDeleteModeStruct(psMode);
        enReturn = TIMER_enOK;
    }
    return enReturn;
    /*Configure Reload and Match*/

    /*TIMER__vSetEnable(enModule,TIMER_enENABLE_START);*/

}

TIMER_nSTATUS TIMER__enSetModeStruct(TIMER_nMODULE enModule, const TIMER_MODE_Typedef* psMode)
{
    TIMER_nSTATUS enReturn=TIMER_enERROR;
    if(psMode!=0)
    {
        TIMER__vSetConfiguration(enModule,psMode->enConfig);
        TIMER__vSetSubMode(enModule,psMode->enSubMode);
        TIMER__vSetEdgeMode(enModule,psMode->enEdgeMode);
        TIMER__vSetAltMode(enModule,psMode->enAltMode);
        TIMER__vSetCountDir(enModule,psMode->enDirection);
        TIMER__vSetSnapShot(enModule,psMode->enSnapShot);
        TIMER__vSetPWMOutputInit(enModule,psMode->enPWMOutInit);
        TIMER__vSetEdgeEvent(enModule,psMode->enEdgeEvent);
        TIMER__vSetPWMOutputLevel(enModule,psMode->enPWMOut);
        enReturn = TIMER_enOK;
    }
    return enReturn;
    /*Configure Reload and Match*/

    /*TIMER__vSetEnable(enModule,TIMER_enENABLE_START);*/


}


TIMER_nMODE TIMER__enGetMode(TIMER_nMODULE enModule)
{
    TIMER_nMODE enMode=TIMER_enMODE_UNDEF;

    TIMER_nCONFIG       enConfig=TIMER_enCONFIG_WIDE;
    TIMER_nSUB_MODE     enSubMode=TIMER_enSUB_MODE_RESERVED;
    TIMER_nEDGE_MODE    enEdgeMode=TIMER_enEDGE_MODE_COUNT;
    TIMER_nALT_MODE     enAltMode=TIMER_enALT_MODE_CC;
    TIMER_nCOUNT_DIR    enDirection=TIMER_enCOUNT_DIR_DOWN;
    TIMER_nSNAPSHOT     enSnapShot=TIMER_enSNAPSHOT_DIS;
    TIMER_nPWM_OUT_INIT enPWMOutInit=TIMER_enPWM_OUT_INIT_LOW;
    TIMER_nEDGE_EVENT   enEdgeEvent=TIMER_enEDGE_EVENT_POSITIVE;
    TIMER_nPWM_OUTPUT   enPWMOut=TIMER_enPWM_OUTPUT_STRAIGHT;

    uint32_t u32Reg=0;

    enConfig=TIMER__enGetConfiguration(enModule);
    enSubMode=TIMER__enGetSubMode(enModule);
    enEdgeMode=TIMER__enGetEdgeMode(enModule);
    enAltMode=TIMER__enGetAltMode(enModule);
    enDirection=TIMER__enGetCountDir(enModule);
    enSnapShot=TIMER__enGetSnapShot(enModule);
    enPWMOutInit=TIMER__enGetPWMOutputInit(enModule);
    enEdgeEvent=TIMER__enGetEdgeEvent(enModule);
    enPWMOut=TIMER__enGetPWMOutputLevel(enModule);

    u32Reg = ((uint32_t)enDirection <<0);
    u32Reg|= ((uint32_t)enAltMode   <<4);
    u32Reg|= ((uint32_t)enEdgeMode  <<8);
    u32Reg|= ((uint32_t)enSubMode   <<12);
    u32Reg|= ((uint32_t)enConfig    <<16);
    u32Reg|= ((uint32_t)enPWMOut    <<20);
    u32Reg|= ((uint32_t)enPWMOutInit<<24);
    u32Reg|= ((uint32_t)enEdgeEvent <<28);
    u32Reg|= ((uint32_t)enSnapShot  <<30);

    enMode = (TIMER_nMODE)u32Reg;
    return enMode;
}


void TIMER__vGetMode(TIMER_nMODULE enModule, TIMER_MODE_Typedef* psMode)
{
    psMode->enConfig=TIMER__enGetConfiguration(enModule);
    psMode->enSubMode=TIMER__enGetSubMode(enModule);
    psMode->enEdgeMode=TIMER__enGetEdgeMode(enModule);
    psMode->enAltMode=TIMER__enGetAltMode(enModule);
    psMode->enDirection=TIMER__enGetCountDir(enModule);
    psMode->enSnapShot=TIMER__enGetSnapShot(enModule);
    psMode->enPWMOutInit=TIMER__enGetPWMOutputInit(enModule);
    psMode->enEdgeEvent=TIMER__enGetEdgeEvent(enModule);
    psMode->enPWMOut=TIMER__enGetPWMOutputLevel(enModule);

}



TIMER_MODE_Typedef* TIMER__psGetMode(TIMER_nMODULE enModule)
{
    TIMER_MODE_Typedef* psMode=0;
    #if defined ( __TI_ARM__ )
    psMode = (TIMER_MODE_Typedef*) memalign((size_t)4,(size_t)sizeof(TIMER_MODE_Typedef));
    #elif defined ( __GNUC__ )
    psMode = (TIMER_MODE_Typedef*) malloc(sizeof(TIMER_MODE_Typedef));
    #endif
    if(0!= psMode)
    {
        psMode->enConfig=TIMER__enGetConfiguration(enModule);
        psMode->enSubMode=TIMER__enGetSubMode(enModule);
        psMode->enEdgeMode=TIMER__enGetEdgeMode(enModule);
        psMode->enAltMode=TIMER__enGetAltMode(enModule);
        psMode->enDirection=TIMER__enGetCountDir(enModule);
        psMode->enSnapShot=TIMER__enGetSnapShot(enModule);
        psMode->enPWMOutInit=TIMER__enGetPWMOutputInit(enModule);
        psMode->enEdgeEvent=TIMER__enGetEdgeEvent(enModule);
        psMode->enPWMOut=TIMER__enGetPWMOutputLevel(enModule);
    }
    return psMode;

}


TIMER_nSTATUS TIMER__enSetExtraModeStruct(TIMER_nMODULE enModule, const TIMER_EXTRAMODE_Typedef* psExtraMode)
{
    TIMER_nSTATUS enReturn=TIMER_enERROR;
    if(psExtraMode!=0)
    {
        TIMER__vSetWaitTrigger(enModule,psExtraMode->enWaitTrigger);
        TIMER__vSetUpdateIntervalMode(enModule,psExtraMode->enUpdateInterval);
        TIMER__vSetPWMInterrupt(enModule,psExtraMode->enPWMInterrupt);
        TIMER__vSetMatchEventInterrupt(enModule,psExtraMode->enEventInterrupt);
        TIMER__vSetUpdateMatchMode(enModule,psExtraMode->enUpdateMatch);
        TIMER__vSetStall(enModule,psExtraMode->enStall);
        TIMER__vSetRTCStall(enModule,psExtraMode->enRTCStall);
        TIMER__vSetADCTrigger(enModule,psExtraMode->enADCTrigger);
        enReturn = TIMER_enOK;
    }
    return enReturn;
    /*Configure Reload and Match*/

    /*TIMER__vSetEnable(enModule,TIMER_enENABLE_START);*/


}

void TIMER__vGetExtraMode(TIMER_nMODULE enModule, TIMER_EXTRAMODE_Typedef* psExtraMode)
{
    psExtraMode->enWaitTrigger=TIMER__enGetWaitTrigger(enModule);
    psExtraMode->enUpdateInterval=TIMER__enGetUpdateIntervalMode(enModule);
    psExtraMode->enPWMInterrupt=TIMER__enGetPWMInterrupt(enModule);
    psExtraMode->enEventInterrupt=TIMER__enGetMatchEventInterrupt(enModule);
    psExtraMode->enUpdateMatch=TIMER__enGetUpdateMatchMode(enModule);
    psExtraMode->enStall=TIMER__enGetStall(enModule);
    psExtraMode->enRTCStall=TIMER__enGetRTCStall(enModule);
    psExtraMode->enADCTrigger=TIMER__enGetADCTrigger(enModule);
}



TIMER_EXTRAMODE_Typedef* TIMER__psGetExtraMode(TIMER_nMODULE enModule)
{
    TIMER_EXTRAMODE_Typedef* psExtraMode=0;
    #if defined ( __TI_ARM__ )
    psExtraMode = (TIMER_EXTRAMODE_Typedef*) memalign((size_t)4,(size_t)sizeof(TIMER_EXTRAMODE_Typedef));
    #elif defined ( __GNUC__ )
    psExtraMode = (TIMER_EXTRAMODE_Typedef*) malloc((size_t)sizeof(TIMER_EXTRAMODE_Typedef));
    #endif

    if(0!=psExtraMode)
    {
        psExtraMode->enWaitTrigger=TIMER__enGetWaitTrigger(enModule);
        psExtraMode->enUpdateInterval=TIMER__enGetUpdateIntervalMode(enModule);
        psExtraMode->enPWMInterrupt=TIMER__enGetPWMInterrupt(enModule);
        psExtraMode->enEventInterrupt=TIMER__enGetMatchEventInterrupt(enModule);
        psExtraMode->enUpdateMatch=TIMER__enGetUpdateMatchMode(enModule);
        psExtraMode->enStall=TIMER__enGetStall(enModule);
        psExtraMode->enRTCStall=TIMER__enGetRTCStall(enModule);
        psExtraMode->enADCTrigger=TIMER__enGetADCTrigger(enModule);
    }

    return psExtraMode;

}

uint64_t pu64TimerSize[2]={0xFFFFFF,0xFFFFFFFFFFFF};
uint32_t pu32PrescalerMask[2]={0xFF,0xFFFF};
uint32_t pu32SizeMask[2]={0xFFFF,0xFFFFFFFF};
uint32_t pu32PrescalerShift[2]={8,16};
uint32_t pu32SizeShift[2]={16,32};

void TIMER__vSetReload(TIMER_nMODULE enModule, uint32_t u32PrescalerRTC, uint64_t u64Reload)
{
    TIMER_MODE_Typedef psMode=
    {
        .enConfig  = TIMER_enCONFIG_WIDE,
        .enSubMode = TIMER_enSUB_MODE_RESERVED,
        .enEdgeMode= TIMER_enEDGE_MODE_COUNT,
        .enAltMode = TIMER_enALT_MODE_CC,
        .enDirection= TIMER_enCOUNT_DIR_DOWN,
        .enSnapShot = TIMER_enSNAPSHOT_DIS,
        .enPWMOutInit = TIMER_enPWM_OUT_INIT_LOW,
        .enPWMOut = TIMER_enPWM_OUTPUT_STRAIGHT,
        .enEdgeEvent = TIMER_enEDGE_EVENT_POSITIVE
    };

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
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    TIMER__vSetReady(enModule);
    TIMER__vGetMode(enModule, &psMode);

    switch (psMode.enConfig)
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
        if((TIMER_enALT_MODE_CC==psMode.enAltMode)&&(TIMER_enSUB_MODE_CAPTURE!=psMode.enSubMode) && (TIMER_enCOUNT_DIR_DOWN==psMode.enDirection))
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

void TIMER__vSetMatch(TIMER_nMODULE enModule,uint64_t u64Match)
{
    TIMER_MODE_Typedef psMode=
    {
        .enConfig  = TIMER_enCONFIG_WIDE,
        .enSubMode = TIMER_enSUB_MODE_RESERVED,
        .enEdgeMode= TIMER_enEDGE_MODE_COUNT,
        .enAltMode = TIMER_enALT_MODE_CC,
        .enDirection= TIMER_enCOUNT_DIR_DOWN,
        .enSnapShot = TIMER_enSNAPSHOT_DIS,
        .enPWMOutInit = TIMER_enPWM_OUT_INIT_LOW,
        .enPWMOut = TIMER_enPWM_OUTPUT_STRAIGHT,
        .enEdgeEvent = TIMER_enEDGE_EVENT_POSITIVE
    };
    /*Erase*/
    uint32_t u32Reg=0;
    uint32_t u32RegPrescaler=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x1u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    volatile uint32_t* pu32TimerMATCHRLow=0;
    volatile uint32_t* pu32TimerMATCHRHigh=0;
    volatile uint32_t* pu32TimerPMR=0;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    TIMER__vSetReady(enModule);
    TIMER__vGetMode(enModule, &psMode);

    switch (psMode.enConfig)
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
        if((TIMER_enALT_MODE_CC==psMode.enAltMode)&&(TIMER_enSUB_MODE_CAPTURE!=psMode.enSubMode) && (TIMER_enCOUNT_DIR_DOWN==psMode.enDirection))
        {
            u64Match&=pu64TimerSize[u32Wide];
            u32RegPrescaler=(uint32_t)(u64Match&(uint64_t)pu32PrescalerMask[u32Wide]);
            u32Reg=(uint32_t)(u64Match>>pu32PrescalerShift[u32Wide]);
            u32Reg&=pu32SizeMask[u32Wide];
            *pu32TimerPMR=u32RegPrescaler;
            *pu32TimerMATCHRLow=u32Reg;
        }
        /*Time Extension*/
        else
        {
            u64Match&=pu64TimerSize[u32Wide];
            u32Reg=(uint32_t)(u64Match&(uint64_t)pu32SizeMask[u32Wide]);
            u32RegPrescaler=(uint32_t)(u64Match>>pu32SizeShift[u32Wide]);
            u32RegPrescaler&=pu32PrescalerMask[u32Wide];
            *pu32TimerPMR=u32RegPrescaler;
            *pu32TimerMATCHRLow=u32Reg;
        }
        break;
    default:
        break;
    }
}


TIMER_nSTATUS TIMER__enSetMode_Reload(TIMER_nMODULE enModule, TIMER_nMODE enMode, uint32_t u32PrescalerRTC, uint64_t u64Reload)
{
    TIMER_nSTATUS enReturn= TIMER_enERROR;
    enReturn =TIMER__enSetMode(enModule,enMode);
    if(TIMER_enOK == enReturn)
    {
        TIMER__vSetReload(enModule,u32PrescalerRTC,u64Reload);
    }
    return enReturn;
}

TIMER_nSTATUS TIMER__enSetModeStruct_Reload(TIMER_nMODULE enModule, const TIMER_MODE_Typedef* psMode, uint32_t u32PrescalerRTC, uint64_t u64Reload)
{
    TIMER_nSTATUS enReturn= TIMER_enERROR;
    enReturn =TIMER__enSetModeStruct(enModule,psMode);
    if(TIMER_enOK == enReturn)
    {
        TIMER__vSetReload(enModule,u32PrescalerRTC,u64Reload);
    }
    return enReturn;
}

TIMER_nSTATUS TIMER__enSetMode_Match(TIMER_nMODULE enModule, TIMER_nMODE enMode,uint64_t u64Match)
{
    TIMER_nSTATUS enReturn= TIMER_enERROR;
    enReturn =TIMER__enSetMode(enModule,enMode);
    if(TIMER_enOK == enReturn)
    {
        TIMER__vSetMatch(enModule,u64Match);
    }
    return enReturn;
}

TIMER_nSTATUS TIMER__enSetModeStruct_Match(TIMER_nMODULE enModule, const TIMER_MODE_Typedef* psMode,uint64_t u64Match)
{
    TIMER_nSTATUS enReturn= TIMER_enERROR;
    enReturn =TIMER__enSetModeStruct(enModule,psMode);
    if(TIMER_enOK == enReturn)
    {
        TIMER__vSetMatch(enModule,u64Match);
    }
    return enReturn;
}

TIMER_nSTATUS TIMER__enSetMode_ReloadMatch(TIMER_nMODULE enModule, TIMER_nMODE enMode, uint32_t u32PrescalerRTC, uint64_t u64Reload,uint64_t u64Match)
{
    TIMER_nSTATUS enReturn= TIMER_enERROR;
    enReturn =TIMER__enSetMode(enModule,enMode);
    if(TIMER_enOK == enReturn)
    {
        TIMER__vSetReload(enModule,u32PrescalerRTC,u64Reload);
        TIMER__vSetMatch(enModule,u64Match);
    }
    return enReturn;
}

TIMER_nSTATUS TIMER__enSetModeStruct_ReloadMatch(TIMER_nMODULE enModule, const TIMER_MODE_Typedef* psMode, uint32_t u32PrescalerRTC, uint64_t u64Reload,uint64_t u64Match)
{
    TIMER_nSTATUS enReturn= TIMER_enERROR;
    enReturn =TIMER__enSetModeStruct(enModule,psMode);
    if(TIMER_enOK == enReturn)
    {
        TIMER__vSetReload(enModule,u32PrescalerRTC,u64Reload);
        TIMER__vSetMatch(enModule,u64Match);
    }
    return enReturn;
}


