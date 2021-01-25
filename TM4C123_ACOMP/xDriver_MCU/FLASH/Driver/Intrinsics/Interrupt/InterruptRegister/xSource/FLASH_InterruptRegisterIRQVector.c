/**
 *
 * @file FLASH_InterruptRegisterIRQVector.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <FLASH/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/FLASH_InterruptRegisterIRQVector.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Dependencies.h>
#include <xDriver_MCU/FLASH/Driver/Intrinsics/Interrupt/InterruptRoutine/FLASH_InterruptRoutine.h>

void FLASH__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void))
{
    SCB_nVECISR enVector=SCB_enVECISR_FLASH;
    uint32_t u32IrqVectorHandler=0;
    if(0u != (uint32_t)pfIrqVectorHandler)
    {
        u32IrqVectorHandler=((uint32_t)pfIrqVectorHandler|(uint32_t)1U);
        FLASH__pvIRQVectorHandler=(void (*) (void))u32IrqVectorHandler;
        SCB__vRegisterIRQVectorHandler(FLASH__pvIRQVectorHandler,enVector);
    }
}




