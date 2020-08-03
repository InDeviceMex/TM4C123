/**
 *
 * @file NVIC_Trigger.c
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

#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_Trigger.h>

#include <stdint.h>
#include <xDriver_MCU/Core/NVIC/Peripheral/NVIC_Peripheral.h>

NVIC_nSTATUS    NVIC__enTriggerIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nSTATUS enStatus= NVIC_enERROR;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        NVIC_STIR_R=(uint32_t)enIRQ;
        enStatus= NVIC_enOK;
    }
    return enStatus;
}
