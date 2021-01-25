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

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_ResetCause.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nRESET SYSCTL__enGetResetCause(void)
{
    uint32_t u32Reg=0;
    uint32_t u32BitBanding=0;
    u32BitBanding=(uint32_t)SYSCTL_BITBANDING_RESC_EXT;
    u32Reg=u32BitBanding;

    u32BitBanding=SYSCTL_BITBANDING_RESC_POR<<1U;
    u32Reg|=u32BitBanding;

    u32BitBanding=SYSCTL_BITBANDING_RESC_BOR<<2U;
    u32Reg|=u32BitBanding;

    u32BitBanding=SYSCTL_BITBANDING_RESC_WDT0<<3U;
    u32Reg|=u32BitBanding;

    u32BitBanding=SYSCTL_BITBANDING_RESC_SW<<4U;
    u32Reg|=u32BitBanding;

    u32BitBanding=SYSCTL_BITBANDING_RESC_WDT1<<5U;
    u32Reg|=u32BitBanding;

    u32BitBanding=SYSCTL_BITBANDING_RESC_MOSCFAIL<<6U;
    u32Reg|=u32BitBanding;

    return (SYSCTL_nRESET)u32Reg;
}

void SYSCTL__vClearResetCause(SYSCTL_nRESET enReset)
{

    if((uint32_t)SYSCTL_enRESET_EXT == ((uint32_t)enReset&(uint32_t)SYSCTL_enRESET_EXT))
    {
        SYSCTL_BITBANDING_RESC_EXT=0U;
    }

    if((uint32_t)SYSCTL_enRESET_POR == ((uint32_t)enReset&(uint32_t)SYSCTL_enRESET_POR))
    {
        SYSCTL_BITBANDING_RESC_POR=0U;
    }

    if((uint32_t)SYSCTL_enRESET_BOR == ((uint32_t)enReset&(uint32_t)SYSCTL_enRESET_BOR))
    {
        SYSCTL_BITBANDING_RESC_BOR=0U;
    }

    if((uint32_t)SYSCTL_enRESET_WDT0 == ((uint32_t)enReset&(uint32_t)SYSCTL_enRESET_WDT0))
    {
        SYSCTL_BITBANDING_RESC_WDT0=0U;
    }

    if((uint32_t)SYSCTL_enRESET_SW == ((uint32_t)enReset&(uint32_t)SYSCTL_enRESET_SW))
    {
        SYSCTL_BITBANDING_RESC_SW=0U;
    }

    if((uint32_t)SYSCTL_enRESET_WDT1 == ((uint32_t)enReset&(uint32_t)SYSCTL_enRESET_WDT1))
    {
        SYSCTL_BITBANDING_RESC_WDT1=0U;
    }

    if((uint32_t)SYSCTL_enRESET_MOSCFAIL== ((uint32_t)enReset&(uint32_t)SYSCTL_enRESET_MOSCFAIL))
    {
        SYSCTL_BITBANDING_RESC_MOSCFAIL=0U;
    }
}

