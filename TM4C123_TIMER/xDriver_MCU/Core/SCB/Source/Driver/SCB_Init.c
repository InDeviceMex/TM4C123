/**
 *
 * @file SCB_Init.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */





#include <xDriver_MCU/Core/SCB/Header/Driver/Exception/SCB_Exception.h>
#include <xDriver_MCU/Core/SCB/Header/Driver/InterruptRoutine/SCB_InterruptRoutine.h>
#include <xDriver_MCU/Core/SCB/Header/Driver/SCB_Init.h>


#include <xDriver_MCU/Core/SCB/Header/Driver/SCB_VectorOffset.h>
#include <xDriver_MCU/Core/SCB/Header/Driver/SCB_Traps.h>
#include <xDriver_MCU/Core/SCB/Header/Driver/SCB_PriorityGroup.h>
#include <xDriver_MCU/Core/SCB/Header/Driver/SCB_StackAligment.h>
#include <xDriver_MCU/Core/SCB/Header/Driver/SCB_RegisterISR.h>



inline void SCB__vInit(void)
{
    SCB__vSetVectorOffset(0x20000000u);
    SCB__vRegisterISR(&NMI__vISR,SCB_enVECISR_NMI);
    SCB__vRegisterISR(&PendSV__vISR,SCB_enVECISR_PENDSV);
    SCB__vRegisterISR(&UsageFault__vISR,SCB_enVECISR_USAGEFAULT);
    SCB__vRegisterISR(&BusFault__vISR,SCB_enVECISR_BUSFAULT);
    SCB__vRegisterISR(&MemoryFault__vISR,SCB_enVECISR_MEMMANAGE);
    SCB__vRegisterISR(&HardFault__vISR,SCB_enVECISR_HARDFAULT);
    SCB__vRegisterISR(&SVCall__vISR,SCB_enVECISR_SVCALL);
    SCB__vEnableTraps();
    SCB__vEnableExceptions();
    SCB__enSetPriorityGroup(SCB_enPRIGROUP_XXX);
    SCB__enSetStackAligment(SCB_enALIGN_4BYTE);
}
