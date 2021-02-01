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

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

#if defined ( __TI_ARM__ )

#pragma DATA_SECTION(SCB__pfnVectors, ".vtable")
void (*SCB__pfnVectors[SCB_VECTOR_TABLE_SIZE]) (void) = {0UL};

#elif defined ( __GNUC__ )
__attribute__((section(".vtable"))) void (*SCB__pfnVectors[SCB_VECTOR_TABLE_SIZE]) (void) = {0UL};
#endif

inline void SCB__vSetVectorOffset(uint32_t u32Offset)
{
    uint32_t* pu32Ram = 0UL;
    const uint32_t* pu32Flash = 0UL;
    uint32_t u32FlashTemp = 0UL;
    uint32_t u32Count = 0UL;

    u32Offset &= ~(uint32_t) 0x3FFUL;
    u32FlashTemp = MCU__u32ReadRegister( SCB_BASE, SCB_VTOR_OFFSET, SCB_VTOR_R_TBLOFF_MASK, 0UL);
    if(SCB_FLASH_MAX > u32Offset)
    {
        MCU__vDisGlobalInterrupt();
        FLASH__enWriteMultiWorld( (uint32_t*) u32FlashTemp, u32Offset, SCB_VECTOR_TABLE_SIZE);
        MCU__vEnGlobalInterrupt();
    }
    else
    {
        pu32Flash = (const uint32_t*) u32FlashTemp;
        pu32Ram = (uint32_t*) &SCB__pfnVectors;
        for(u32Count = 0UL; u32Count < SCB_VECTOR_TABLE_SIZE; u32Count++ )
        {
            *pu32Ram = *pu32Flash;
            pu32Ram += 1U;
            pu32Flash += 1U;
        }
    }
    MCU__vDisGlobalInterrupt();
    MCU__vWriteRegister( SCB_BASE, SCB_VTOR_OFFSET, (uint32_t) &SCB__pfnVectors, SCB_VTOR_R_TBLOFF_MASK, 0UL);
    SCB_vBarrier();
    MCU__vEnGlobalInterrupt();
}
