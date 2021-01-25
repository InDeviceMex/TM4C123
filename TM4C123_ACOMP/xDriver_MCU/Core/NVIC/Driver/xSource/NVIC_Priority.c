/**
 *
 * @file NVIC_Priority.c
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
 * @verbatim 20 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_Priority.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Core/NVIC/Peripheral/NVIC_Peripheral.h>

inline NVIC_nSTATUS NVIC__enSetPriorityIRQ(NVIC_nSTIR enIRQ,NVIC_nPRIORITY enPriority)
{
    NVIC_nSTATUS enStatus= NVIC_enERROR;
    uint32_t u32RegisterOffset = NVIC_STIR_OFFSET;
    uint32_t u32IsrIndex=0UL;
    uint32_t u32IsrBit=0UL;
    if((uint8_t)enPriority <=NVIC_PRI_MAX)
    {
        if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
        {
            enStatus = NVIC_enOK;
            u32IsrBit=(uint32_t)enIRQ%4UL;
            u32IsrBit*= 8UL;
            u32IsrIndex=(uint32_t)enIRQ/4UL;
            u32IsrIndex*=4UL;
            u32RegisterOffset += u32IsrIndex;
            MCU__vWriteRegister(NVIC_BASE, u32RegisterOffset, (uint32_t)enPriority, NVIC_PRI_MASK, u32IsrBit);
            enStatus= NVIC_enOK;
        }
    }
    return enStatus;

}


inline NVIC_nPRIORITY  NVIC__enGetPriorityIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nPRIORITY enPriority= NVIC_enDEFAULT;
    uint8_t u8Priority = 0U;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        u8Priority = (uint8_t) NVIC_IPRb->IPR[(uint8_t) enIRQ].IP;
        u8Priority &=  (uint8_t) NVIC_PRI_MASK;
        enPriority= (NVIC_nPRIORITY)((uint32_t)u8Priority );
    }
    return enPriority;

}


