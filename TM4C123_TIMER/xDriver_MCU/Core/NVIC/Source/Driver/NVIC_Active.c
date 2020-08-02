/**
 *
 * @file NVIC_Active.c
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

#include <xDriver_MCU/Core/NVIC/Header/Driver/NVIC_Active.h>

#include <stdint.h>
#include <xDriver_MCU/Core/NVIC/Header/Peripheral/NVIC_Peripheral.h>

inline NVIC_nACTIVE NVIC__enGetActiveIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nACTIVE enStatus= NVIC_enNOACTIVE;
    uint32_t u32IsrIndex=0;
    uint32_t u32IsrBit=0;
    uint32_t u32IsrBitAux=0;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        u32IsrBit=(uint32_t)enIRQ%32u;
        u32IsrIndex=(uint32_t)enIRQ/32u;
        u32IsrBitAux =((uint32_t)1u<<u32IsrBit);
        if((NVICw->IABR[u32IsrIndex]&u32IsrBitAux) ==u32IsrBitAux)
        {
            enStatus= NVIC_enACTIVE;
        }
    }

    return enStatus;
}
