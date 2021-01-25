/**
 *
 * @file SCB_RegisterIRQVector.c
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

#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_RegisterIRQVector.h>
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_VectorOffset.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

void SCB__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),SCB_nVECISR enVector)
{
    uint32_t u32BaseVector = SCB_VTOR_R;
    uint32_t* pu32BaseVector = 0U;

    if((uint32_t)pfIrqVectorHandler !=0U)
    {
        if(u32BaseVector<=0x00010000U)
        {
            __asm(" cpsid i");
            FLASH__enWriteWorld((uint32_t)pfIrqVectorHandler|1U,u32BaseVector+((uint32_t)enVector*4U));
            __asm(" cpsie i");
        }
        else if((u32BaseVector>=(uint32_t)&SCB__pfnVectors[0]) && (u32BaseVector<=(uint32_t)&SCB__pfnVectors[0x100]) )
        {
            pu32BaseVector= (uint32_t*)u32BaseVector;
            pu32BaseVector+=(uint32_t)enVector;
            *(pu32BaseVector)=(uint32_t)pfIrqVectorHandler|1U;
        }
        else{}
    }
}

/*
void SCB__vUnRegisterIRQVectorHandler(SCB_nVECISR enVector)
{
    uint32_t u32BaseVector = SCB_VTOR_R;

    if(u32BaseVector<=0x00010000U)
    {
        __asm(" cpsid i");
        FLASH__enWrite((uint32_t)IntDefaultHandler|1,u32BaseVector+((uint32_t)enVector*4U));
        __asm(" cpsie i");
    }
    else if((u32BaseVector>=0x20000000U) && (u32BaseVector<=0x20000400U) )
    {
        *((uint32_t*)u32BaseVector+(uint32_t)enVector)=(uint32_t)IntDefaultHandler|1;
    }
}
*/


