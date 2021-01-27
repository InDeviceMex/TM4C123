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

#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Dependencies.h>
#include <xDriver_MCU/HIB/App/xHeader/HIB_GlobalCountStatus.h>
#include <xDriver_MCU/HIB/App/xHeader/HIB_GlobalStatus.h>
#include <xDriver_MCU/HIB/Driver/HIB_Driver.h>

#define HIB_TIMEOUT_MAX (1200000UL)

void HIB_vRTCALTSourceHandler(void);

HIB_nSTATUS HIB__enInit(uint32_t u32Match, uint32_t u32SubMatch, void (*pfIrqrRTCALTHandler) (void))
{
    volatile HIB_nSTATUS enReturn = HIB_enSTATUS_ERROR;

    HIB__vClearReady();
    HIB__vRegisterIRQVectorHandler( &HIB__vIRQVectorHandler);
    HIB__vRegisterIRQSourceHandler( pfIrqrRTCALTHandler, HIB_enINTERRUPT_RTCALT);

    HIB__vSetReady();
    HIB__enDisInterruptSource( HIB_enINT_ALL);
    HIB__enClearInterruptSource( HIB_enINT_ALL);
    HIB__enSetRTCTimer( HIB_enRTC_DIS);
    HIB__enSetBatteryComparator( HIB_enBATCOMP_1_9V);
    HIB__enSetModuleClock( HIB_enCLOCK_DIS);

    /*Enable WC Interrupt*/
    HIB__enSetModuleClock( HIB_enCLOCK_EN);
    HIB__enSetTrim( 0x7FFFUL);
    HIB__enSetBatteryComparator( HIB_enBATCOMP_2_5V);
    HIB__enSetOscillatorBypass( HIB_enOSCBYP_INTERNAL);
    HIB__enSetMatch( u32Match, u32SubMatch);
    HIB__vEnInterruptVector( HIB_enPRI7);
    HIB__enClearInterruptSource( HIB_enINT_ALL);
    HIB__enEnInterruptSource( HIB_enINT_RTCALT);
    HIB__enSetLoad( 0UL);
    HIB__enEnRTCTimer();

    return enReturn;
}
