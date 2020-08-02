/**
 *
 * @file SYSEXC_Interrupt.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */


#include <xDriver_MCU/SYSEXC/Header/Driver/SYSEXC_Interrupt.h>

#include <stdint.h>
#include <xDriver_MCU/SYSEXC/Header/Peripheral/SYSEXC_Peripheral.h>

void SYSEXC__vEnInterrupt(SYSEXC_nINTERRUPT enInt)
{
    uint32_t u32Reg= (uint32_t)enInt & (uint32_t)0x3F;
    SYSEXC_SYSEXCIM_R|=(u32Reg);
}

void SYSEXC__vDisInterrupt(SYSEXC_nINTERRUPT enInt)
{
    uint32_t u32Reg= (uint32_t)enInt & (uint32_t)0x3F;
    SYSEXC_SYSEXCIM_R&=~(u32Reg);
}

void SYSEXC__vClearInterrupt(SYSEXC_nINTERRUPT enInt)
{
    uint32_t u32Reg= (uint32_t)enInt & (uint32_t)0x3F;
    SYSEXC_SYSEXCIC_R=(u32Reg);
}

SYSEXC_nSTATUS SYSEXC__enStatusInterrupt(SYSEXC_nINTERRUPT enInt)
{
    SYSEXC_nSTATUS enStatus=SYSEXC_enNOOCCUR;
    uint32_t u32Reg= (uint32_t)enInt & (uint32_t)0x3F;
    if((uint32_t)0!=(SYSEXC_SYSEXCRIS_R&u32Reg))
    {
        enStatus=SYSEXC_enOCCUR;
    }
    return enStatus;
}
