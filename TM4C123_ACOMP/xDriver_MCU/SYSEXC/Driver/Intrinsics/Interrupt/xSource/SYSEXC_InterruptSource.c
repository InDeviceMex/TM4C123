/**
 *
 * @file SYSEXC_InterruptSource.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSEXC/Driver/Intrinsics/Interrupt/xHeader/SYSEXC_InterruptSource.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSEXC/Peripheral/SYSEXC_Peripheral.h>

void SYSEXC__vEnInterruptSource(SYSEXC_nINT enInterruptParam)
{
    enInterruptParam&=(uint32_t)SYSEXC_enINT_ALL;
    MCU__vWriteRegister(SYSEXC_BASE, SYSEXC_SYSEXCIM_OFFSET, (uint32_t)enInterruptParam, (uint32_t)enInterruptParam, 0UL);
}

void SYSEXC__vDisInterruptSource(SYSEXC_nINT enInterruptParam)
{
    enInterruptParam&=(uint32_t)SYSEXC_enINT_ALL;
    MCU__vWriteRegister(SYSEXC_BASE, SYSEXC_SYSEXCIM_OFFSET, 0UL, (uint32_t)enInterruptParam, 0UL);
}


void SYSEXC__vClearInterruptSource(SYSEXC_nINT enInterruptParam)
{
    enInterruptParam&=(uint32_t)SYSEXC_enINT_ALL;
    MCU__vWriteRegister(SYSEXC_BASE, SYSEXC_SYSEXCIC_OFFSET, (uint32_t)enInterruptParam, (uint32_t)enInterruptParam, 0UL);
}

SYSEXC_nINT_STATUS SYSEXC__enStatusInterruptSource(SYSEXC_nINT enInterruptParam)
{
    SYSEXC_nINT_STATUS enStatus= SYSEXC_enINT_STATUS_UNDEF;
    uint32_t u32Reg=0;

    enInterruptParam&=(uint32_t)SYSEXC_enINT_ALL;
    u32Reg = MCU__u32ReadRegister(SYSEXC_BASE, SYSEXC_SYSEXCRIS_OFFSET, enInterruptParam, 0UL);

    if(0u != u32Reg)
    {
        enStatus= SYSEXC_enINT_OCCUR;
    }
    else
    {
        enStatus= SYSEXC_enINT_NOOCCUR;
    }

    return enStatus;
}


