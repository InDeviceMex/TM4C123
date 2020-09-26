/**
 *
 * @file TIMER_ExtraMode.c
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
#include <xDriver_MCU/TIMER/App/ExtraMode/TIMER_ExtraMode.h>
#include <xDriver_MCU/TIMER/App/Mode/xHeader/TIMER_ModeStruct.h>
#include <xDriver_MCU/TIMER/Driver/TIMER_Driver.h>

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
    psExtraMode = (TIMER_EXTRAMODE_Typedef*) memalign((size_t)4,(size_t)sizeof(TIMER_EXTRAMODE_Typedef)*sizeof(uint32_t));
    #elif defined ( __GNUC__ )
    psExtraMode = (TIMER_EXTRAMODE_Typedef*) malloc((size_t)sizeof(TIMER_EXTRAMODE_Typedef)*sizeof(uint32_t));
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






