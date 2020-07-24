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
#include <xDriver_MCU/Driver_Header/WDT/WDT_App/WDT_Init.h>


#include <xDriver_MCU/Driver_Header/WDT/WDT_Driver/WDT_Intrinsics/WDT_Interrupt/WDT_InterruptRegister/WDT_InterruptRegisterMODULE.h>
#include <xDriver_MCU/Driver_Header/WDT/WDT_Driver/WDT_Intrinsics/WDT_Interrupt/WDT_InterruptRoutine/WDT_InterruptRoutine.h>
#include <xDriver_MCU/Driver_Header/WDT/WDT_Driver/WDT_Driver.h>
#include <xDriver_MCU/Driver_Header/WDT/WDT_App/WDT_ModeLoad/WDT_ModeLoad.h>

void WDT__vInit(uint32_t u32ReloadValue)
{
    WDT__vRegisterMODULEISR(&WDT_NMI__vISR,WDT_enINT_TYPE_NMI);
    WDT__vEnInterruptMODULE(WDT_enPRI4);
    WDT__vEnInterrupt(WDT_enMODULE_0);
    WDT__enSetMode_Load(WDT_enMODULE_0,WDT_enMODE_NORESET_NMI_FREEZE_EN,u32ReloadValue);
}




