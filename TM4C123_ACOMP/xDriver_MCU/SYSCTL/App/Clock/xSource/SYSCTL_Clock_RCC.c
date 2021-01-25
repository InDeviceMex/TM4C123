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
#include <xDriver_MCU/SYSCTL/App/Clock/xHeader/SYSCTL_Clock_Utils.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

static uint32_t SYSCTL_enGetPLLFreq_RCC(void);
static SYSCTL_nBYPASS SYSCTL_enGetOSCSourceFreq_RCC(uint32_t *pu32Frequency);

static SYSCTL_nBYPASS SYSCTL_enGetOSCSourceFreq_RCC(uint32_t *pu32Frequency)
{
    uint32_t u32RegRCC=SYSCTL_RCC_R;
    uint32_t u32Frequency = *pu32Frequency;
    uint32_t u32RCC = 0;
    SYSCTL_nBYPASS enBypass = SYSCTL_enPLL;
    u32RCC= (u32RegRCC&SYSCTL_RCC_R_BYPASS_MASK);
    if((uint32_t) 0u != (uint32_t) pu32Frequency)
    {
        if(SYSCTL_RCC_R_BYPASS_OSC==u32RCC)
        {
            /*OSC source/div*/
            u32Frequency= SYSCTL__u32GetOSCSourceFreq_Div(u32Frequency);
            enBypass=SYSCTL_enOSC;
        }
        else
        {

        }
        *pu32Frequency =u32Frequency;
    }
    return enBypass;
}

static uint32_t SYSCTL_enGetPLLFreq_RCC(void)
{
    uint32_t u32Frequency = 0;
    uint32_t u32RegAux= 0;

    uint32_t u32RCC = 0;

    uint32_t u32RegRCC=SYSCTL_RCC_R;
    uint32_t u32RegRCC2=SYSCTL_RCC2_R;
    uint32_t u32RegSYSDIV2=u32RegRCC2&SYSCTL_RCC2_R_SYSDIV2_MASK;
    u32RegSYSDIV2>>=SYSCTL_RCC2_R_SYSDIV2_BIT;

    u32RCC= (u32RegRCC&SYSCTL_RCC_R_PWRDN_MASK);

    if(SYSCTL_RCC_R_PWRDN_ON==u32RCC)
    {
        /*Initial Frequencyof PLL*/
        u32Frequency=200000000U;
        u32RegAux =u32RegSYSDIV2+1U;
        u32Frequency/=u32RegAux;
    }
    return u32Frequency;
}

uint32_t SYSCTL__u32GetClock_RCC(void)
{
    uint32_t u32Frequency=0;

    uint32_t u32RegRCC=SYSCTL_RCC_R;
    uint32_t u32RegOSCSRC=u32RegRCC&SYSCTL_RCC_R_OSCSRC_MASK;

    uint32_t u32RegXTAL=u32RegRCC&SYSCTL_RCC_R_XTAL_MASK;
    u32RegXTAL>>=SYSCTL_RCC_R_XTAL_BIT;

    SYSCTL_nBYPASS enBypass = SYSCTL_enPLL;
    switch(u32RegOSCSRC)
    {
    case SYSCTL_RCC_R_OSCSRC_MOSC:
        u32Frequency = SYSCTL__u32GetFreqXtal(u32RegXTAL);
        enBypass = SYSCTL_enGetOSCSourceFreq_RCC(&u32Frequency);
        if(SYSCTL_enPLL == enBypass)
        {
            u32Frequency= SYSCTL_enGetPLLFreq_RCC();
        }
        break;
    case SYSCTL_RCC_R_OSCSRC_PIOSC:
        u32Frequency= 16000000U;
        enBypass = SYSCTL_enGetOSCSourceFreq_RCC(&u32Frequency);
        if(SYSCTL_enPLL == enBypass)
        {
            u32Frequency= SYSCTL_enGetPLLFreq_RCC();
        }
        break;
    case SYSCTL_RCC_R_OSCSRC_PIOSC4:
        u32Frequency= 4000000U;
        (void)SYSCTL_enGetOSCSourceFreq_RCC(&u32Frequency);
        break;
    case SYSCTL_RCC_R_OSCSRC_LFIOSC:
        u32Frequency= 33000U;            /*OSC source*/
        (void)SYSCTL_enGetOSCSourceFreq_RCC(&u32Frequency);

        break;
    default:
        break;
    }

    return u32Frequency;
}


