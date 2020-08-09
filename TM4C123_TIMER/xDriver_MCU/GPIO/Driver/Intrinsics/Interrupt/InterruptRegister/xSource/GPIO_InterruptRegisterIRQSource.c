/**
 *
 * @file GPIO_InterruptRegisterISR.c
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
 * @verbatim 2 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <stdint.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/GPIO_InterruptRegisterIRQSource.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Pines.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),GPIO_nPORT enPort,GPIO_nPIN enPin)
{
    uint32_t u32Count=0;
    uint32_t u32Pin =(uint32_t) enPin;
    uint32_t u32IrqSourceHandler=0;
    if((uint32_t)pfIrqSourceHandler !=0u)
    {
        if(enPort>GPIO_enMAX)
        {
            enPort=GPIO_enMAX;
        }

        enPin&=GPIO_enALL;
        while((u32Pin&0x1u) ==0u)
        {
            u32Count++;
            u32Pin>>=1;
        }
        u32IrqSourceHandler=((uint32_t)pfIrqSourceHandler|(uint32_t)1u);
        GPIO__vIRQSourceHandler[(uint32_t)enPort][u32Count]=(void (*) (void))u32IrqSourceHandler;
    }
}


