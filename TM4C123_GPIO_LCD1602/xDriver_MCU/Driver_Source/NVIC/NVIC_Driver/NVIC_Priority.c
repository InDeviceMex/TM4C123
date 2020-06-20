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

#include <xDriver_MCU/Driver_Header/NVIC/NVIC_Driver/NVIC_Priority.h>

inline NVIC_nSTATUS NVIC__enSetPriorityIRQ(NVIC_nSTIR enIRQ,NVIC_nPRIORITY enPriority)
{
    NVIC_nSTATUS enStatus= NVIC_enERROR;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        if((uint8_t)enPriority <=NVIC_PRI_MAX)
        {
            NVIC_IPRb->IPR[(uint8_t) enIRQ].IP=(uint8_t)enPriority & NVIC_PRI_MASK;
            enStatus= NVIC_enOK;
        }

    }
    return enStatus;

}


inline NVIC_nPRIORITY  NVIC__enGetPriorityIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nPRIORITY enPriority= NVIC_enDEFAULT;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        enPriority= (NVIC_nPRIORITY)(NVIC_IPRb->IPR[(uint8_t) enIRQ].IP & NVIC_PRI_MASK );
    }
    return enPriority;

}


