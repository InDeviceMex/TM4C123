/**
 *
 * @file HIB_Init.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 *
 * @date
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @verbatim 1.0 @endverbatim
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/HIB/App/xHeader/HIB_Init.h>
#include <xDriver_MCU/HIB/App/xHeader/HIB_GlobalCountStatus.h>
#include <xDriver_MCU/HIB/App/xHeader/HIB_GlobalStatus.h>
#include <xDriver_MCU/HIB/Driver/HIB_Driver.h>
#include <stdint.h>

#define HIB_TIMEOUT_MAX (1200000u)

void HIB_vRTCALTSourceHandler(void);
void HIB_vWCSourceHandler(void);

HIB_nSTATUS HIB__enInit(uint32_t u32Match, uint32_t u32SubMatch)
{
    volatile HIB_nSTATUS enReturn = HIB_enSTATUS_ERROR;
    HIB_nREADY enReady= HIB_enNOREADY;
    uint32_t u32TimeOut=HIB_TIMEOUT_MAX;
    HIB__vRegisterIRQVectorHandler(&HIB__vIRQVectorHandler);
    HIB__vRegisterIRQSourceHandler(&HIB_vRTCALTSourceHandler,HIB_enINT_RTCALT);
    HIB__vRegisterIRQSourceHandler(&HIB_vWCSourceHandler,HIB_enINT_WC);
    HIB__vSetReady();
    HIB__vEnInterruptVector(HIB_enPRI7);


    HIB__enEnRTCTimer();
    HIB__enEnModuleClock();
    HIB__enClearInterruptSource(HIB_enINT_WC);
    HIB__enEnInterruptSource(HIB_enINT_WC);

    while((HIB_enNOREADY == enReady) && (0u != u32TimeOut))
    {
        enReady = HIB__enGetGlobalStatus();
        u32TimeOut--;
    }

    if(HIB_enNOREADY != enReady)
    {
        enReturn = HIB_enSTATUS_OK;
    }

    enReturn=HIB__enDisInterruptSource(HIB_enINT_WC);
    if(HIB_enSTATUS_OK == enReturn)
    {
        enReturn= HIB__enSetMatch(u32Match,u32SubMatch);
    }
    if(HIB_enSTATUS_OK == enReturn)
    {
        enReturn= HIB__enSetLoad(0u);
    }

    if(HIB_enSTATUS_OK == enReturn)
    {
        enReturn= HIB__enClearInterruptSource(HIB_enINT_ALL);
    }

    if(HIB_enSTATUS_OK == enReturn)
    {
        enReturn= HIB__enEnInterruptSource(HIB_enINT_RTCALT);
    }

    enReturn= HIB__enWait();
    if(HIB_enSTATUS_OK == enReturn)
    {

        enReturn= HIB__enSetPowerCut(HIB_enVABORT_LOWVOLT);
    }
    if(HIB_enSTATUS_OK == enReturn)
    {

        enReturn= HIB__enEnRTCTimer();
    }
    return enReturn;
}


void HIB_vWCSourceHandler(void)
{
        HIB__enSetGlobalStatus(HIB_enREADY);
}

void HIB_vRTCALTSourceHandler(void)
{
    uint32_t u32Reg=0;
    uint32_t u32RegSub=0;
    HIB__enGetCounter(&u32Reg,&u32RegSub);
    HIB__enSetMatch(u32Reg+(uint32_t)10u, 0u);
    HIB__enSetGlobalCountStatus(HIB_enREADY);
}

