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

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

void SCB__vRegisterIRQVectorHandler( void (*pfIrqVectorHandler) (void), void (**pfIrqVectorHandlerExtern) (void), SCB_nVECISR enVector)
{
    uint32_t u32Vector = 0UL;
    uint32_t u32BaseVector = 0UL;
    uint32_t u32BaseOffsetVector = 0UL;
    uint32_t* pu32BaseVector = 0UL;
    uint32_t u32IrqVectorHandler = 0UL;

    if(0UL != (uint32_t)pfIrqVectorHandler)
    {
        u32IrqVectorHandler = (uint32_t)pfIrqVectorHandler;
        u32IrqVectorHandler |= 1UL;

        u32BaseVector = MCU__u32ReadRegister( SCB_BASE, SCB_VTOR_OFFSET, SCB_VTOR_R_TBLOFF_MASK, 0UL);

        u32Vector = (uint32_t) enVector;
        u32Vector *= 4UL;
        u32BaseOffsetVector = u32BaseVector;
        u32BaseOffsetVector += u32Vector;

        if(SCB_FLASH_MAX > u32BaseOffsetVector)
        {
            MCU__vDisGlobalInterrupt();
            FLASH__enWriteWorld( u32IrqVectorHandler, u32BaseOffsetVector);
            MCU__vEnGlobalInterrupt();
        }
        else
        {
            pu32BaseVector = (uint32_t*) u32BaseOffsetVector;
            *pu32BaseVector = u32IrqVectorHandler;
        }
        if(0UL != (uint32_t) pfIrqVectorHandlerExtern)
        {
            *pfIrqVectorHandlerExtern = (void (*) (void)) u32IrqVectorHandler;
        }
    }
}

/*
void SCB__vUnRegisterIRQVectorHandler(SCB_nVECISR enVector)
{
    uint32_t u32BaseVector = SCB_VTOR_R;

    if(u32BaseVector<=0x00010000U)
    {
        MCU__vDisGlobalInterrupt();
        FLASH__enWrite((uint32_t)IntDefaultHandler|1,u32BaseVector+((uint32_t)enVector*4U));
        MCU__vEnGlobalInterrupt();
    }
    else if((u32BaseVector>=0x20000000U) && (u32BaseVector<=0x20000400U) )
    {
        *((uint32_t*)u32BaseVector+(uint32_t)enVector)=(uint32_t)IntDefaultHandler|1;
    }
}
*/


