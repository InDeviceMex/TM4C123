/**
 *
 * @file HIB_InterruptRegisterIRQSource.c
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
#include <xDriver_MCU/HIB/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/HIB_InterruptRegisterIRQSource.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/HIB_InterruptRoutine_Source.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

void HIB__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),HIB_nINT enInterrupt)
{
    uint32_t u32Interrupt =(uint32_t) enInterrupt;
    uint32_t u32IrqSourceHandler=0;
    if((uint32_t)pfIrqSourceHandler !=0u)
    {
        if(HIB_enINTERRUPT_MAX<=u32Interrupt)
        {
            u32IrqSourceHandler=((uint32_t)pfIrqSourceHandler|(uint32_t)1u);
            HIB__vIRQSourceHandler[u32Interrupt]=(void (*) (void))u32IrqSourceHandler;
        }
    }
}




