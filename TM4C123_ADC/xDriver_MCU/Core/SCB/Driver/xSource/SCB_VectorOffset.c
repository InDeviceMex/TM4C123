/**
 *
 * @file SCB_VectorOffset.c
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

#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_VectorOffset.h>

#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

#if defined ( __TI_ARM__ )

#pragma DATA_SECTION(SCB__pfnVectors, ".vtable")
void (*SCB__pfnVectors[0x100u])(void) = {0};

#elif defined ( __GNUC__ )
__attribute__((section(".vtable"))) void (*SCB__pfnVectors[0x100u])(void) = {0};
#endif

inline void SCB__vSetVectorOffset(uint32_t u32Offset)
{
    uint32_t* pu32Ram=0;
    const uint32_t* pu32Flash=0;
    uint32_t u32FlashTemp=0;
    uint32_t u32Count=0;

    u32Offset&=~(uint32_t)0x3FFu;
    if(u32Offset<0x00010000u)
    {
        u32FlashTemp=(uint32_t)SCB_VTOR_R;
        FLASH__enWriteMultiWorld((uint32_t*)u32FlashTemp,u32Offset,(uint32_t)0x100u);
        __asm(" cpsid i");
        SCB_VTOR_R= u32Offset;
        SCB_vBarrier();
        __asm(" cpsie i");
    }
    else if((u32Offset>=(uint32_t)&SCB__pfnVectors))
    {
        u32FlashTemp=(uint32_t)SCB_VTOR_R;
        pu32Flash=(const uint32_t*)u32FlashTemp;
        pu32Ram=(uint32_t*)&SCB__pfnVectors;
        for(u32Count=0u; u32Count<0x100u;u32Count++ )
        {
            *pu32Ram=*pu32Flash;
            pu32Ram+=1u;
            pu32Flash+=1u;
        }
        __asm(" cpsid i");
        SCB_VTOR_R= (uint32_t)&SCB__pfnVectors;
        SCB_vBarrier();
        __asm(" cpsie i");
    }
    else{}

}

