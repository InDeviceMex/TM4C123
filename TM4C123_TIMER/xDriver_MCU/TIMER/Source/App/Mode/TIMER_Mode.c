/**
 *
 * @file TIMER_Mode.c
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


#include <stdlib.h>
#include <xDriver_MCU/TIMER/Header/App/Mode/TIMER_Mode.h>
#include <xDriver_MCU/TIMER/Header/App/Mode/TIMER_ModeStruct.h>
#include <xDriver_MCU/TIMER/Header/Driver/TIMER_Driver.h>


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
    psMode = (TIMER_MODE_Typedef*) memalign((size_t)4,(size_t)sizeof(TIMER_MODE_Typedef)*sizeof(uint32_t));
    #elif defined ( __GNUC__ )
    psMode = (TIMER_MODE_Typedef*) malloc(sizeof(TIMER_MODE_Typedef)*sizeof(uint32_t));
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


