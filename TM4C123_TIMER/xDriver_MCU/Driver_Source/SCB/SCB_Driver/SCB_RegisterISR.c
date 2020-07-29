/**
 *
 * @file SCB_RegisterISR.c
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

#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_RegisterISR.h>


#include <stdint.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Peripheral/SCB_Peripheral.h>
#include <xDriver_MCU/Driver_Header/FLASH/FLASH_Driver/FLASH_Write.h>

void SCB__vRegisterISR(void (*Isr) (void),SCB_nVECISR enVector)
{
    uint32_t u32BaseVector = SCB_VTOR_R;

    if((uint32_t)Isr !=0u)
    {
        if(u32BaseVector<=0x00010000u)
        {
            __asm(" cpsid i");
            FLASH__enWriteWorld((uint32_t)Isr|1u,u32BaseVector+((uint32_t)enVector*4u));
            __asm(" cpsie i");
        }
        else if((u32BaseVector>=0x20000000u) && (u32BaseVector<=0x20000400u) )
        {
            *((uint32_t*)u32BaseVector+(uint32_t)enVector)=(uint32_t)Isr|1u;
        }
        else{}
    }
}

/*
void SCB__vUnRegisterISR(SCB_nVECISR enVector)
{
    uint32_t u32BaseVector = SCB_VTOR_R;

    if(u32BaseVector<=0x00010000u)
    {
        __asm(" cpsid i");
        FLASH__enWrite((uint32_t)IntDefaultHandler|1,u32BaseVector+((uint32_t)enVector*4u));
        __asm(" cpsie i");
    }
    else if((u32BaseVector>=0x20000000u) && (u32BaseVector<=0x20000400u) )
    {
        *((uint32_t*)u32BaseVector+(uint32_t)enVector)=(uint32_t)IntDefaultHandler|1;
    }
}
*/


