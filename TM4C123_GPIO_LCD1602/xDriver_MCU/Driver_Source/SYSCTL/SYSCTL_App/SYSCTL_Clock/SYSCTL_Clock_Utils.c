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

#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL_App/SYSCTL_Clock/SYSCTL_Clock_Utils.h>


#define  SYSCTL_FREQXTAL_INDEXMAX ((uint32_t)27u)



uint32_t SYSCTL__u32GetFreqXtal(uint32_t u32Index)
{

    uint32_t SYSCTL_u32FreqXtal[SYSCTL_FREQXTAL_INDEXMAX]=
    { 0       ,0       ,0       ,0       ,0       ,0       ,
      4000000 ,4096000 ,4915200 ,5000000 ,5120000 ,6000000 ,
      6144000 ,7372800 ,8000000 ,8192000 ,10000000,12000000,
      12288000,13560000,14318180,16000000,16384000,18000000,
      20000000,24000000,25000000
    };
    uint32_t u32Return=0;
    if (u32Index<SYSCTL_FREQXTAL_INDEXMAX)
    {
        u32Return = SYSCTL_u32FreqXtal[u32Index];
    }
    return u32Return;
}

uint32_t SYSCTL__u32GetOSCSourceFreq_Div(uint32_t u32Frequency)
{
    uint32_t u32RegAux= 0;
    uint32_t u32RegFreq= u32Frequency;

    uint32_t u32RegRCC=SYSCTL_RCC_R;
    uint32_t u32RegRCC2=SYSCTL_RCC2_R;

    uint32_t u32RegSYSDIV2=u32RegRCC2&SYSCTL_RCC2_R_SYSDIV2_MASK;
    u32RegSYSDIV2>>=SYSCTL_RCC2_R_SYSDIV2_BIT;
    /*OSC source/div*/
    if(SYSCTL_RCC_R_USESYSDIV_SYSDIV==(u32RegRCC&SYSCTL_RCC_R_USESYSDIV_MASK))
    {
        u32RegAux= u32RegSYSDIV2+1u;
        u32RegFreq/=u32RegAux;
    }
    else
    {
        /*Noithing to do*/
    }
    return u32RegFreq;
}





