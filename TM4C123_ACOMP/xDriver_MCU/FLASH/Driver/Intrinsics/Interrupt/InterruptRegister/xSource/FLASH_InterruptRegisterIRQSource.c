/**
 *
 * @file FLASH_InterruptRegisterIRQSource.c
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
#include <xDriver_MCU/FLASH/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/FLASH_InterruptRegisterIRQSource.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Common/xHeader/MCU_RegisterSourceIRQ.h>
#include <xDriver_MCU/FLASH/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/FLASH_InterruptRoutine_Source.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>

void FLASH__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void), FLASH_nINTERRUPT enInterruptParam)
{
    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        MCU__vRegisterIRQSourceHandler( pfIrqSourceHandler, FLASH__vIRQSourceHandler, (uint32_t) enInterruptParam, (uint32_t) FLASH_enINTERRUPT_MAX);
    }
}
