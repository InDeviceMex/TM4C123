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
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>
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


    HIB__enEnModule();
    HIB_HIBCTL_R|=HIB_HIBCTL_R_CLK32EN_EN;
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
        enReturn= HIB__enEnControlGeneric((uint32_t)(HIB_HIBCTL_R_RTCEN_EN|HIB_HIBCTL_R_VABORT_EN));
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
    do
    {
        u32Reg = HIB_HIBRTCC_R;
    }while (HIB_HIBRTCC_R != u32Reg );

    HIB__enWait();
    HIB__enSetMatch(u32Reg+(uint32_t)10u, 0u);
    HIB__enSetGlobalCountStatus(HIB_enREADY);
}

