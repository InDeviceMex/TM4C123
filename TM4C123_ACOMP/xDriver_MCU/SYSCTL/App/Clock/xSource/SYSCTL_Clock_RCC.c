/**
 *
 * @file SYSCTL_Clock_RCC.c
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
#include <xDriver_MCU/SYSCTL/App/Clock/xHeader/SYSCTL_Clock_RCC.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/App/Clock/xHeader/SYSCTL_Clock_Utils.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

static uint32_t SYSCTL_enGetPLLFreq_RCC(void);
static SYSCTL_nBYPASS SYSCTL_enGetOSCSourceFreq_RCC(uint32_t *pu32Frequency);

static SYSCTL_nBYPASS SYSCTL_enGetOSCSourceFreq_RCC(uint32_t *pu32Frequency)
{
    uint32_t u32Frequency = 0UL;
    uint32_t u32RCC = 0UL;
    SYSCTL_nBYPASS enBypass = SYSCTL_enPLL;

    if((uint32_t) 0UL != (uint32_t) pu32Frequency)
    {
        u32RCC = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_RCC_OFFSET, SYSCTL_RCC_BYPASS_MASK, SYSCTL_RCC_R_BYPASS_BIT);
        if(SYSCTL_RCC_BYPASS_OSC == u32RCC)
        {
            /*OSC source/div*/
            u32Frequency = SYSCTL__u32GetOSCSourceFreq_Div(*pu32Frequency);
            enBypass = SYSCTL_enOSC;
            *pu32Frequency = u32Frequency;
        }
        else{}
    }
    return enBypass;
}

static uint32_t SYSCTL_enGetPLLFreq_RCC(void)
{
    uint32_t u32Frequency = 0UL;
    uint32_t u32RegAux = 0UL;
    uint32_t u32RCC = 0UL;
    uint32_t u32RegSYSDIV2 = 0UL;

    u32RCC = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_RCC_OFFSET, SYSCTL_RCC_PWRDN_MASK, SYSCTL_RCC_R_PWRDN_BIT);
    if(SYSCTL_RCC_PWRDN_ON == u32RCC)
    {
        u32RegSYSDIV2 = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_RCC2_OFFSET, SYSCTL_RCC2_SYSDIV2_MASK, SYSCTL_RCC2_R_SYSDIV2_BIT);
        /*Initial Frequency of PLL*/
        u32Frequency = 200000000U;
        u32RegAux = u32RegSYSDIV2 + 1U;
        u32Frequency /= u32RegAux;
    }
    return u32Frequency;
}

uint32_t SYSCTL__u32GetClock_RCC(void)
{
    SYSCTL_nBYPASS enBypass = SYSCTL_enPLL;
    uint32_t u32Frequency = 0UL;
    uint32_t u32RegOSCSRC = 0UL;
    uint32_t u32RegXTAL = 0UL;

    u32RegOSCSRC = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_RCC_OFFSET, SYSCTL_RCC_OSCSRC_MASK, SYSCTL_RCC_R_OSCSRC_BIT);
    switch(u32RegOSCSRC)
    {
    case SYSCTL_RCC_OSCSRC_MOSC:
        u32RegXTAL = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_RCC_OFFSET, SYSCTL_RCC_XTAL_MASK, SYSCTL_RCC_R_XTAL_BIT);
        u32Frequency = SYSCTL__u32GetFreqXtal(u32RegXTAL);
        enBypass = SYSCTL_enGetOSCSourceFreq_RCC( &u32Frequency);
        if(SYSCTL_enPLL == enBypass)
        {
            u32Frequency = SYSCTL_enGetPLLFreq_RCC();
        }
        break;
    case SYSCTL_RCC_OSCSRC_PIOSC:
        u32Frequency = 16000000UL;
        enBypass = SYSCTL_enGetOSCSourceFreq_RCC( &u32Frequency);
        if(SYSCTL_enPLL == enBypass)
        {
            u32Frequency = SYSCTL_enGetPLLFreq_RCC();
        }
        break;
    case SYSCTL_RCC_OSCSRC_PIOSC4:
        u32Frequency = 4000000UL;
        (void)SYSCTL_enGetOSCSourceFreq_RCC( &u32Frequency);
        break;
    case SYSCTL_RCC_OSCSRC_LFIOSC:
        u32Frequency = 33000UL;            /*OSC source*/
        (void)SYSCTL_enGetOSCSourceFreq_RCC( &u32Frequency);
        break;
    default:
        break;
    }
    return u32Frequency;
}
