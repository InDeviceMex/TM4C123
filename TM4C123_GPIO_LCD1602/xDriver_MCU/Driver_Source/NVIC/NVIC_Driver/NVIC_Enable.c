/**
 *
 * @file NVIC_Enable.c
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


#include <xDriver_MCU/Driver_Header/NVIC/NVIC_Driver/NVIC_Enable.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/NVIC/NVIC_Driver/NVIC_Priority.h>
#include <xDriver_MCU/Driver_Header/NVIC/NVIC_Peripheral/NVIC_Peripheral.h>




inline NVIC_nENABLE NVIC__enGetEnableIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nENABLE enStatus= NVIC_enDISABLE;
    uint32_t u32IsrIndex=0;
    uint32_t u32IsrBit=0;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        u32IsrBit=(uint32_t)enIRQ%32u;
        u32IsrIndex=(uint32_t)enIRQ/32u;
        if((NVICw->ISER[u32IsrIndex]&((uint32_t)1u<<u32IsrBit)) == ((uint32_t)1u<<u32IsrBit))
        {
            enStatus= NVIC_enENABLE;
        }
    }

    return enStatus;
}

inline NVIC_nSTATUS NVIC__enSetEnableIRQ(NVIC_nSTIR enIRQ, NVIC_nPRIORITY enPriority)
{
    NVIC_nSTATUS enStatus= NVIC_enERROR;
    uint32_t u32IsrIndex=0;
    uint32_t u32IsrBit=0;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        u32IsrBit=(uint32_t)enIRQ%32u;
        u32IsrIndex=(uint32_t)enIRQ/32u;
        enStatus = NVIC__enSetPriorityIRQ(enIRQ,enPriority);
        if(enStatus == NVIC_enOK)
        {
            NVICw->ISER[u32IsrIndex]|=((uint32_t)1u<<u32IsrBit);
        }
    }
    return enStatus;

}

inline NVIC_nSTATUS NVIC__enClearEnableIRQ(NVIC_nSTIR enIRQ)
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
        NVICw->ICER[u32IsrIndex]|=u32IsrBitAux;
        enStatus = NVIC_enOK;
    }
    return enStatus;
}

