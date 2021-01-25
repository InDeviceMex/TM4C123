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


#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_Enable.h>
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_ReadReg.h>
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_WriteReg.h>

#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_Priority.h>
#include <xDriver_MCU/Core/NVIC/Peripheral/NVIC_Peripheral.h>

inline NVIC_nENABLE NVIC__enGetEnableIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nENABLE enStatus= NVIC_enDISABLE;
    uint32_t u32Reg=0UL;

    u32Reg = NVIC__u32ReadRegister(enIRQ, NVIC_ISER0_OFFSET);
    enStatus= (NVIC_nENABLE)u32Reg;

    return enStatus;
}

inline NVIC_nSTATUS NVIC__enSetEnableIRQ(NVIC_nSTIR enIRQ, NVIC_nPRIORITY enPriority)
{
    NVIC_nSTATUS enStatus= NVIC_enERROR;

    enStatus = NVIC__enSetPriorityIRQ(enIRQ,enPriority);
    if(enStatus == NVIC_enOK)
    {
        enStatus = NVIC__enWriteRegister(enIRQ,NVIC_ISER0_OFFSET, (uint32_t)NVIC_enENABLE);
    }
    return enStatus;

}

inline NVIC_nSTATUS NVIC__enClearEnableIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nSTATUS enStatus= NVIC_enERROR;

    enStatus = NVIC__enWriteRegister(enIRQ,NVIC_ICER0_OFFSET, (uint32_t)NVIC_enENABLE);

    return enStatus;
}

