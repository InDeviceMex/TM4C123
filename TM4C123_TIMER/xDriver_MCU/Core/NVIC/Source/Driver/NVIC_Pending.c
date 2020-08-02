/**
 *
 * @file NVIC_Pending.c
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
#include <xDriver_MCU/Core/NVIC/Header/Driver/NVIC_Pending.h>

#include <stdint.h>
#include <xDriver_MCU/Core/NVIC/Header/Peripheral/NVIC_Peripheral.h>

inline NVIC_nPENDING NVIC__enGetPendingIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nPENDING enStatus= NVIC_enNOPENDING;
    uint32_t u32IsrIndex=0;
    uint32_t u32IsrBit=0;
    uint32_t u32IsrBitAux=0;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        u32IsrBit=(uint32_t)enIRQ%32u;
        u32IsrIndex=(uint32_t)enIRQ/32u;
        u32IsrBitAux =((uint32_t)1u<<u32IsrBit);
        if((NVICw->ISPR[u32IsrIndex]&u32IsrBitAux) == (u32IsrBitAux))
        {
            enStatus= NVIC_enPENDING;
        }
    }

    return enStatus;
}


inline NVIC_nSTATUS NVIC__enSetPendingIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nSTATUS enStatus= NVIC_enERROR;
    uint32_t u32IsrIndex=0;
    uint32_t u32IsrBit=0;
    uint32_t u32IsrBitAux=0;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        u32IsrBit=(uint32_t)enIRQ%32u;
        u32IsrIndex=(uint32_t)enIRQ/32u;
        u32IsrBitAux =((uint32_t)1u<<u32IsrBit);
        NVICw->ISPR[u32IsrIndex]|=u32IsrBitAux;
        enStatus= NVIC_enOK;
    }
    return enStatus;
}



inline NVIC_nSTATUS NVIC__enClearPendingIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nSTATUS enStatus= NVIC_enERROR;
    uint32_t u32IsrIndex=0;
    uint32_t u32IsrBit=0;
    uint32_t u32IsrBitAux=0;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        u32IsrBit=(uint32_t)enIRQ%32u;
        u32IsrIndex=(uint32_t)enIRQ/32u;
        u32IsrBitAux =((uint32_t)1u<<u32IsrBit);
        NVICw->ICPR[u32IsrIndex]|=u32IsrBitAux;
        enStatus= NVIC_enOK;
    }
    return enStatus;
}
