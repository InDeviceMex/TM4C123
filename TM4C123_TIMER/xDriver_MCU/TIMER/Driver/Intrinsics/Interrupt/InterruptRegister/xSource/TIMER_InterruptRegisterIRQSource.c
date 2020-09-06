/**
 *
 * @file TIMER_InterruptRegisterIRQSource.c
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
 * @verbatim 15 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/TIMER_InterruptRegisterIRQSource.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/TIMER_InterruptRoutine.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>


void TIMER__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),TIMER_nMODULE enModule,TIMER_nINTERRUPT enInterrupt)
{
    uint32_t u32Interrupt =(uint32_t) enInterrupt;

    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x1u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    uint32_t u32IrqSourceHandler=0;


    if((uint32_t)pfIrqSourceHandler !=0u)
    {
        if(TIMER_enMISC_MAX<u32Number)
        {
            u32Number=TIMER_enMISC_MAX;
        }
        if(TIMER_enMISC_INT<u32Interrupt)
        {
            u32Interrupt=TIMER_enMISC_INT;
        }

        u32IrqSourceHandler=((uint32_t)pfIrqSourceHandler|1u);
        TIMER__vIRQSourceHandler[u32Wide][u32Letter][u32Number][u32Interrupt]= (void (*) (void))u32IrqSourceHandler;
    }
}
