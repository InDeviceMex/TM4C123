/**
 *
 * @file NVIC_WriteReg.c
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_WriteReg.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/NVIC/Peripheral/NVIC_Peripheral.h>

inline NVIC_nSTATUS NVIC__enWriteRegister(NVIC_nSTIR enIRQ, uint32_t u32RegisterOffset, uint32_t u32Value)
{
    NVIC_nSTATUS enStatus = NVIC_enERROR;
    uint32_t u32IsrIndex=0UL;
    uint32_t u32IsrBit=0UL;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        enStatus = NVIC_enOK;
        u32IsrBit=(uint32_t)enIRQ%32UL;
        u32IsrIndex=(uint32_t)enIRQ/32UL;
        u32IsrIndex *=4UL;
        u32RegisterOffset += u32IsrIndex;
        MCU__vWriteRegister(NVIC_BASE, u32RegisterOffset, u32Value, 0x1UL, u32IsrBit);
    }
    return enStatus;
}


