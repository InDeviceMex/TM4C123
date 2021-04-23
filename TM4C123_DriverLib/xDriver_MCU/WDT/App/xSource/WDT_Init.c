/**
 *
 * @file WDT_Init.c
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
 * @verbatim 24 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/App/xHeader/WDT_Init.h>

#include <xDriver_MCU/WDT/App/ModeLoad/WDT_ModeLoad.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/WDT_InterruptRegisterIRQVector.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRoutine/WDT_InterruptRoutine.h>
#include <xDriver_MCU/WDT/Driver/WDT_Driver.h>

void WDT__vInit(uint32_t u32ReloadValue)
{
    WDT__vRegisterIRQVectorHandler( &WDT_NMI__vIRQVectorHandler, WDT_enINT_TYPE_NMI);
    WDT__vEnInterruptVector(WDT_enPRI4);
    WDT__vEnInterruptSource(WDT_enMODULE_0);
    WDT__enSetMode_Load(WDT_enMODULE_0, WDT_enMODE_NORESET_NMI_FREEZE_ENA, u32ReloadValue);
}
