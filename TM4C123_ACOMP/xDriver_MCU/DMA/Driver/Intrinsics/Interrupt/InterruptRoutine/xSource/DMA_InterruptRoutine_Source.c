/**
 *
 * @file DMA_InterruptRoutine_Source.c
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
 * @verbatim 23 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Source.h>

void DMA_CH_vIRQSourceHandler_Dummy(void);


void (*DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_MAX+1U][(uint32_t)DMA_enCH_MODULE_MAX+1U]) (void)=
{
    {
         &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
         &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
         &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
         &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
         &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
         &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
         &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
     },
    {
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
    },
    {
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
    },
    {
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
    },
    {
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
        &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
    }
};

void DMA_CH_vIRQSourceHandler_Dummy(void)
{

}


