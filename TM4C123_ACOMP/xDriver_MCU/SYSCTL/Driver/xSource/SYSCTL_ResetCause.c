/**
 *
 * @file SYSCTL_ResetCause.c
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_ResetCause.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nRESET SYSCTL__enGetResetCause(void)
{
    uint32_t u32ResetWitoutMosc = (uint32_t) SYSCTL_enRESET_ALL;
    uint32_t u32Reg = 0UL;
    uint32_t u32BitMoscFail = 0UL;

    u32ResetWitoutMosc &= ~(uint32_t) SYSCTL_enRESET_MOSCFAIL;
    u32Reg = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_RESC_OFFSET, (uint32_t) u32ResetWitoutMosc, 0UL);

    u32BitMoscFail = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_RESC_OFFSET, SYSCTL_RESC_MOSCFAIL_MASK, SYSCTL_RESC_R_MOSCFAIL_BIT);
    u32BitMoscFail = u32BitMoscFail << 6UL;

    u32Reg |= u32BitMoscFail;

    return (SYSCTL_nRESET) u32Reg;
}

void SYSCTL__vClearResetCause(SYSCTL_nRESET enReset)
{
    uint32_t u32ResetMosc = (uint32_t) enReset;
    uint32_t u32ResetWitoutMosc = (uint32_t) enReset;

    u32ResetWitoutMosc &= ~(uint32_t) SYSCTL_enRESET_MOSCFAIL;
    u32ResetMosc &= (uint32_t) SYSCTL_enRESET_MOSCFAIL;
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RESC_OFFSET, (uint32_t) 0UL, (uint32_t) u32ResetWitoutMosc, 0UL);

    if(0UL != u32ResetMosc)
    {
        MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RESC_OFFSET, (uint32_t) 0UL, SYSCTL_RESC_MOSCFAIL_MASK, SYSCTL_RESC_R_MOSCFAIL_BIT);
    }
}
