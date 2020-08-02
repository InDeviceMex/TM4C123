/**
 *
 * @file DMA_InterruptRegisterISRVector.c
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
 * @verbatim 1 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Driver_Header/DMA/DMA_Driver/DMA_Intrinsics/DMA_Interrupt/DMA_InterruptRegister/DMA_InterruptRegisterISRVector.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/DMA/DMA_Peripheral/DMA_Enum.h>
#include <xDriver_MCU/Driver_Header/DMA/DMA_Driver/DMA_Intrinsics/DMA_Interrupt/DMA_InterruptRoutine/DMA_InterruptRoutine_Modules.h>

void DMA__vRegisterISRVector(void (*Isr) (void),DMA_nMODULE enModule)
{
    uint32_t u32Isr=0u;
    if((uint32_t)Isr !=0u)
    {
        if(enModule>DMA_enMODULE_MAX)
        {
            enModule=DMA_enMODULE_MAX;
        }
        u32Isr=((uint32_t)Isr|(uint32_t)1u);
        DMA__MODULE[(uint32_t)enModule]=(void (*) (void))u32Isr;
    }
}



