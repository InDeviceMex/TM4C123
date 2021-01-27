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
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_Pending.h>

#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_ReadReg.h>
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_WriteReg.h>
#include <xDriver_MCU/Core/NVIC/Peripheral/NVIC_Peripheral.h>

inline NVIC_nPENDING NVIC__enGetPendingIRQ( NVIC_nSTIR enIRQ)
{
    NVIC_nPENDING enStatus = NVIC_enNOPENDING;
    uint32_t u32Reg = 0UL;

    u32Reg = NVIC__u32ReadRegister( enIRQ, NVIC_ISPR_OFFSET);
    enStatus = (NVIC_nPENDING) u32Reg;

    return enStatus;
}

inline NVIC_nSTATUS NVIC__enSetPendingIRQ( NVIC_nSTIR enIRQ)
{
    NVIC_nSTATUS enStatus = NVIC_enERROR;
    enStatus = NVIC__enWriteRegister( enIRQ, NVIC_ISPR_OFFSET, (uint32_t) NVIC_enENABLE);

    return enStatus;
}

inline NVIC_nSTATUS NVIC__enClearPendingIRQ( NVIC_nSTIR enIRQ)
{
    NVIC_nSTATUS enStatus = NVIC_enERROR;
    enStatus = NVIC__enWriteRegister( enIRQ, NVIC_ICPR_OFFSET, (uint32_t) NVIC_enENABLE);

    return enStatus;
}
