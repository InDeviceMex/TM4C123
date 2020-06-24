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

#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL_Driver/SYSCTL_ResetCause.h>

SYSCTL_nRESET SYSCTL__enGetResetCause(void)
{
    uint32_t u32Reg=0;
    uint32_t u32BitBanding=0;
    u32BitBanding=(uint32_t)SYSCTL_BITBANDING_RESC_EXT;
    u32Reg=u32BitBanding;

    u32BitBanding=SYSCTL_BITBANDING_RESC_POR<<1u;
    u32Reg|=u32BitBanding;

    u32BitBanding=SYSCTL_BITBANDING_RESC_BOR<<2u;
    u32Reg|=u32BitBanding;

    u32BitBanding=SYSCTL_BITBANDING_RESC_WDT0<<3u;
    u32Reg|=u32BitBanding;

    u32BitBanding=SYSCTL_BITBANDING_RESC_SW<<4u;
    u32Reg|=u32BitBanding;

    u32BitBanding=SYSCTL_BITBANDING_RESC_WDT1<<5u;
    u32Reg|=u32BitBanding;

    u32BitBanding=SYSCTL_BITBANDING_RESC_MOSCFAIL<<6u;
    u32Reg|=u32BitBanding;

    return (SYSCTL_nRESET)u32Reg;
}

void SYSCTL__vClearResetCause(SYSCTL_nRESET enReset)
{

    if(SYSCTL_enRESET_EXT == (enReset&SYSCTL_enRESET_EXT))
    {
        SYSCTL_BITBANDING_RESC_EXT=0u;
    }

    if(SYSCTL_enRESET_POR == (enReset&SYSCTL_enRESET_POR))
    {
        SYSCTL_BITBANDING_RESC_POR=0u;
    }

    if(SYSCTL_enRESET_BOR == (enReset&SYSCTL_enRESET_BOR))
    {
        SYSCTL_BITBANDING_RESC_BOR=0u;
    }

    if(SYSCTL_enRESET_WDT0 == (enReset&SYSCTL_enRESET_WDT0))
    {
        SYSCTL_BITBANDING_RESC_WDT0=0u;
    }

    if(SYSCTL_enRESET_SW == (enReset&SYSCTL_enRESET_SW))
    {
        SYSCTL_BITBANDING_RESC_SW=0u;
    }

    if(SYSCTL_enRESET_WDT1 == (enReset&SYSCTL_enRESET_WDT1))
    {
        SYSCTL_BITBANDING_RESC_WDT1=0u;
    }

    if(SYSCTL_enRESET_MOSCFAIL== (enReset&SYSCTL_enRESET_MOSCFAIL))
    {
        SYSCTL_BITBANDING_RESC_MOSCFAIL=0u;
    }
}

