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
#include <xUtils/Standard/Standard.h>

#include <xDriver_MCU/GPIO/GPIO.h>

#define HIB_TIMEOUT_MAX (1200000u)

void HIB_vRTCALTSourceHandler(void);

HIB_nSTATUS HIB__enInit(uint32_t u32Match, uint32_t u32SubMatch)
{
    volatile HIB_nSTATUS enReturn = HIB_enSTATUS_ERROR;
    HIB__vClearReady();
    HIB__vRegisterIRQVectorHandler(&HIB__vIRQVectorHandler);
    HIB__vRegisterIRQSourceHandler(&HIB_vRTCALTSourceHandler,HIB_enINTERRUPT_RTCALT);

    HIB__vSetReady();
    HIB__enDisInterruptSource(HIB_enINT_ALL);
    HIB__enClearInterruptSource(HIB_enINT_ALL);
    HIB__enSetRTCTimer(HIB_enRTC_DIS);
    HIB__enSetBatteryComparator(HIB_enBATCOMP_1_9V);
    HIB__enSetModuleClock(HIB_enCLOCK_DIS);

    /*Enable WC Interrupt*/
    HIB__enSetModuleClock(HIB_enCLOCK_EN);
    HIB__enSetTrim(0x7FFFu);
    HIB__enSetBatteryComparator(HIB_enBATCOMP_2_5V);
    HIB__enSetOscillatorBypass(HIB_enOSCBYP_INTERNAL);
    HIB__enSetMatch(u32Match,u32SubMatch);
    HIB__vEnInterruptVector(HIB_enPRI7);
    HIB__enClearInterruptSource(HIB_enINT_ALL);
    HIB__enEnInterruptSource(HIB_enINT_RTCALT);
    HIB__enSetLoad(0u);
    HIB__enEnRTCTimer();

    return enReturn;
}


void HIB_vRTCALTSourceHandler(void)
{
    static uint32_t u32Value=GPIO_enPIN_2;
    HIB__enSetLoad(0u);
    GPIO__vSetData(GPIO_enPORT_F,(GPIO_nPIN) (GPIO_enPIN_2), u32Value);
    u32Value^=GPIO_enPIN_2;

}

