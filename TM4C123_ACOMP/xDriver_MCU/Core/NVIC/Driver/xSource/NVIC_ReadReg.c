/**
 *
 * @file NVIC_ReadReg.c
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
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_ReadReg.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/NVIC/Peripheral/NVIC_Peripheral.h>

inline uint32_t NVIC__u32ReadRegister(NVIC_nSTIR enIRQ, uint32_t u32RegisterOffset)
{
    uint32_t u32Reg=0UL;
    uint32_t u32IsrIndex=0UL;
    uint32_t u32IsrBit=0UL;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        u32IsrBit=(uint32_t)enIRQ%32UL;
        u32IsrIndex=(uint32_t)enIRQ/32UL;
        u32IsrIndex *=4UL;
        u32RegisterOffset += u32IsrIndex;
        u32Reg = MCU__u32ReadRegister(NVIC_BASE, u32RegisterOffset, 0x1, u32IsrBit);
    }
    return u32Reg;
}


