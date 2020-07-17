/**
 *
 * @file TIMER_InterruptRegisterISR.c
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
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Intrinsics/TIMER_Interrupt/TIMER_InterruptRegister/TIMER_InterruptRegisterISR.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Intrinsics/TIMER_Interrupt/TIMER_InterruptRoutine/TIMER_InterruptRoutine.h>


void TIMER__vRegisterISR(void (*Isr) (void),TIMER_nMODULE enModule,TIMER_nINTERRUPT enInterrupt)
{
    uint32_t u32Interrupt =(uint32_t) enInterrupt;

    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x1u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    uint32_t u32Isr=0;


    if((uint32_t)Isr !=0u)
    {
        if(TIMER_MAX<u32Number)
        {
            u32Number=TIMER_MAX;
        }
        if(TIMER_INT<u32Interrupt)
        {
            u32Interrupt=TIMER_INT;
        }

        u32Isr=((uint32_t)Isr|1u);
        TIMER__vSOURCEISR[u32Wide][u32Letter][u32Number][u32Interrupt]= (void (*) (void))u32Isr;
    }
}
