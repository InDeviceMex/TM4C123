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


#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/SYSEXC/Driver/Intrinsics/Interrupt/xHeader/SYSEXC_InterruptSource.h>
#include <xDriver_MCU/SYSEXC/Peripheral/SYSEXC_Peripheral.h>

void SYSEXC__vEnInterruptSource(SYSEXC_nINT enInterrupt)
{
    uint32_t u32Reg=0;
    enInterrupt&=(uint32_t)SYSEXC_enINT_ALL;
    u32Reg=SYSEXC_SYSEXCIM_R;
    u32Reg|=(uint32_t)enInterrupt;
    SYSEXC_SYSEXCIM_R=u32Reg;
}

void SYSEXC__vDisInterruptSource(SYSEXC_nINT enInterrupt)
{
    uint32_t u32Reg=0;
    enInterrupt&=(uint32_t)SYSEXC_enINT_ALL;
    u32Reg=SYSEXC_SYSEXCIM_R;
    u32Reg&=~(uint32_t)enInterrupt;
    SYSEXC_SYSEXCIM_R=u32Reg;
}


void SYSEXC__vClearInterruptSource(SYSEXC_nINT enInterrupt)
{
    enInterrupt&=(uint32_t)SYSEXC_enINT_ALL;
    SYSEXC_SYSEXCIC_R=(uint32_t)enInterrupt;

}

SYSEXC_nINT_STATUS SYSEXC__enStatusInterruptSource(SYSEXC_nINT enInterrupt)
{
    SYSEXC_nINT_STATUS enStatus= SYSEXC_enINT_STATUS_UNDEF;
    uint32_t u32Reg=0;
    enInterrupt&=(uint32_t)SYSEXC_enINT_ALL;

    u32Reg=SYSEXC_SYSEXCRIS_R;
    u32Reg&=(uint32_t)enInterrupt;
    if(u32Reg!=0u)
    {
        enStatus= SYSEXC_enINT_OCCUR;
    }
    else
    {
        enStatus= SYSEXC_enINT_NOOCCUR;
    }

    return enStatus;
}


