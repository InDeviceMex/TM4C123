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
#include <xDriver_MCU/WDT/Header/App/ModeLoad/WDT_ModeLoad.h>
#include <xDriver_MCU/WDT/Header/App/WDT_Init.h>
#include <xDriver_MCU/WDT/Header/Driver/Intrinsics/Interrupt/InterruptRegister/WDT_InterruptRegisterMODULE.h>
#include <xDriver_MCU/WDT/Header/Driver/Intrinsics/Interrupt/InterruptRoutine/WDT_InterruptRoutine.h>
#include <xDriver_MCU/WDT/Header/Driver/WDT_Driver.h>

void WDT__vInit(uint32_t u32ReloadValue)
{
    WDT__vRegisterMODULEISR(&WDT_NMI__vISR,WDT_enINT_TYPE_NMI);
    WDT__vEnInterruptMODULE(WDT_enPRI4);
    WDT__vEnInterrupt(WDT_enMODULE_0);
    WDT__enSetMode_Load(WDT_enMODULE_0,WDT_enMODE_NORESET_NMI_FREEZE_EN,u32ReloadValue);
}




