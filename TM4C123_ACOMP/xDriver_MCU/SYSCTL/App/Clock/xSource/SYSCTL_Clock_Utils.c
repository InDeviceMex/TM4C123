/**
 *
 * @file SYSCTL_Clock_Utils.c
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
#include <xDriver_MCU/SYSCTL/App/Clock/xHeader/SYSCTL_Clock_Utils.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

#define  SYSCTL_FREQXTAL_INDEXMAX ((uint32_t) 27UL)

const uint32_t SYSCTL_u32FreqXtal [SYSCTL_FREQXTAL_INDEXMAX]=
    { 0UL       ,0UL       ,0UL       ,0UL       ,0UL       ,0UL       ,
      4000000UL ,4096000UL ,4915200UL ,5000000UL ,5120000UL ,6000000UL ,
      6144000UL ,7372800UL ,8000000UL ,8192000UL ,10000000UL,12000000UL,
      12288000UL,13560000UL,14318180UL,16000000UL,16384000UL,18000000UL,
      20000000UL,24000000UL,25000000UL
    };

uint32_t SYSCTL__u32GetFreqXtal(uint32_t u32Index)
{
    uint32_t u32Return = 0UL;
    if (SYSCTL_FREQXTAL_INDEXMAX > u32Index)
    {
        u32Return = SYSCTL_u32FreqXtal[u32Index];
    }
    return u32Return;
}

uint32_t SYSCTL__u32GetOSCSourceFreq_Div(uint32_t u32Frequency)
{
    uint32_t u32RegAux = 0UL;
    uint32_t u32RegFreq = u32Frequency;
    uint32_t u32RegRCC = 0UL;
    uint32_t u32RegSYSDIV2 = 0UL;

    u32RegRCC = MCU__u32ReadRegister( SYSCTL_BASE, SYSCTL_RCC_OFFSET, SYSCTL_RCC_USESYSDIV_MASK, SYSCTL_RCC_R_USESYSDIV_BIT);
    /*OSC source/div*/
    if(SYSCTL_RCC_USESYSDIV_SYSDIV == u32RegRCC)
    {
        u32RegSYSDIV2 = MCU__u32ReadRegister( SYSCTL_BASE, SYSCTL_RCC2_OFFSET, SYSCTL_RCC2_SYSDIV2_MASK, SYSCTL_RCC2_R_SYSDIV2_BIT);
        u32RegAux = u32RegSYSDIV2 + 1U;
        u32RegFreq /= u32RegAux;
    }
    else
    {
        /*Noithing to do*/
    }
    return u32RegFreq;
}
