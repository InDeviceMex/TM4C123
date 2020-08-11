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
#include <stdint.h>
#include <xDriver_MCU/FLASH/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/FLASH_InterruptRegisterIRQSource.h>
#include <xDriver_MCU/FLASH/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/FLASH_InterruptRoutine_Source.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>

void FLASH__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),FLASH_nINTERRUPT enInterrupt)
{
    uint32_t u32Interrupt =(uint32_t) enInterrupt;
    uint32_t u32IrqSourceHandler=0;
    if((uint32_t)pfIrqSourceHandler !=0u)
    {
        if(FLASH_enINTERRUPT_MAX<=u32Interrupt)
        {
            u32IrqSourceHandler=((uint32_t)pfIrqSourceHandler|(uint32_t)1u);
            FLASH__vIRQSourceHandler[u32Interrupt]=(void (*) (void))u32IrqSourceHandler;
        }
    }
}



