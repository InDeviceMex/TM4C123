/**
 *
 * @file SYSCTL_Clock.c
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

#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL_App/SYSCTL_Clock.h>

uint32_t SYSCTL_u32FreqXtal[27]=
{ 0       ,0       ,0       ,0       ,0       ,0       ,
  4000000 ,4096000 ,4915200 ,5000000 ,5120000 ,6000000 ,
  6144000 ,7372800 ,8000000 ,8192000 ,10000000,12000000,
  12288000,13560000,14318180,16000000,16384000,18000000,
  20000000,24000000,25000000
};

#define SYSCTL_vNoOperation()   {__asm(" NOP");}


uint32_t SYSCTL__u32GetClock(void)
{
    uint32_t u32RegRCC2=SYSCTL_RCC2_R;
    uint32_t u32RegRCC=SYSCTL_RCC_R;
    uint32_t u32RegXTAL=u32RegRCC&SYSCTL_RCC_R_XTAL_MASK;
    uint32_t u32RegOSCSRC2=u32RegRCC2&SYSCTL_RCC2_R_OSCSRC2_MASK;
    uint32_t u32RegSYSDIV2=u32RegRCC2&SYSCTL_RCC2_R_SYSDIV2_MASK;
    uint32_t u32RegSYSDIVLSB2=u32RegRCC2&SYSCTL_RCC2_R_SYSDIV2LSB_MASK;
    uint32_t u32RegOSCSRC=u32RegRCC&SYSCTL_RCC_R_OSCSRC_MASK;
    uint32_t u32RegSYSDIV=u32RegRCC&SYSCTL_RCC_R_SYSDIV_MASK;
    uint32_t u32Frequency=0;
    uint32_t u32RegAux= 0;

    u32RegXTAL>>=SYSCTL_RCC_R_XTAL_BIT;
    u32RegSYSDIV2>>=SYSCTL_RCC2_R_SYSDIV2_BIT;
    u32RegSYSDIVLSB2>>=SYSCTL_RCC2_R_SYSDIV2LSB_BIT;
    u32RegSYSDIV>>=SYSCTL_RCC_R_SYSDIV_BIT;
    /*Identify if RCC2 is priority*/
    if(SYSCTL_RCC2_R_USERCC2_RCC2==(u32RegRCC2&SYSCTL_RCC2_R_USERCC2_MASK))
    {
        /*Identift Oscillator Source*/
        switch(u32RegOSCSRC2)
        {
        /*MOSC as OSC source*/
        case SYSCTL_RCC2_R_OSCSRC2_MOSC:
            /*Verify is MOSC is enable*/
            if(SYSCTL_RCC_R_MOSCDIS_EN==(u32RegRCC&SYSCTL_RCC_R_MOSCDIS_MASK))
            {
                /*Initial Frequency, from XTAL configuration*/
                u32Frequency=SYSCTL_u32FreqXtal[u32RegXTAL];
                /*OSC source*/
                if(SYSCTL_RCC2_R_BYPASS2_OSC==(u32RegRCC2&SYSCTL_RCC2_R_BYPASS2_MASK))
                {
                    /*OSC source/div*/
                    if(SYSCTL_RCC_R_USESYSDIV_SYSDIV==(u32RegRCC&SYSCTL_RCC_R_USESYSDIV_MASK))
                    {
                        u32RegAux = u32RegSYSDIV2+1u;
                        u32Frequency/= u32RegAux;
                    }
                    else
                    {
                        /*Noithing to do*/
                    }
                }
                /*PLL source*/
                else
                {
                    /*Verify if PLL is enable*/
                    if(SYSCTL_RCC2_R_PWRDN2_ON==(u32RegRCC2&SYSCTL_RCC2_R_PWRDN2_MASK))
                    {
                        /*Initial Frequencyof PLL*/
                        u32Frequency=200000000u;

                        /*If PLL 400MHz is enabled, SYSDIV2LSB needs to be considered*/
                        if(SYSCTL_RCC2_R_DIV400_400MHZ==(u32RegRCC2&SYSCTL_RCC2_R_DIV400_MASK))
                        {
                            u32Frequency*=2u;

                            u32RegAux = (u32RegSYSDIV2<<1);
                            u32RegAux += u32RegSYSDIVLSB2;
                            u32RegAux += 1u;

                            u32Frequency/= u32RegAux;
                        }
                        else
                        {
                            u32RegAux=u32RegSYSDIV2+1u;
                            u32Frequency/= u32RegAux;
                        }
                    }
                    else
                    {
                        u32Frequency = 0u; /*Invalid configuration*/
                    }
                }
            }
            else
            {
                u32Frequency = 0u; /*Invalid configuration*/
            }
            break;

        case SYSCTL_RCC2_R_OSCSRC2_PIOSC:
            u32Frequency= 16000000u;
            /*OSC source*/
            if(SYSCTL_RCC2_R_BYPASS2_OSC==(u32RegRCC2&SYSCTL_RCC2_R_BYPASS2_MASK))
            {
                /*OSC source/div*/
                if(SYSCTL_RCC_R_USESYSDIV_SYSDIV==(u32RegRCC&SYSCTL_RCC_R_USESYSDIV_MASK))
                {
                    u32RegAux = u32RegSYSDIV2+1u;
                    u32Frequency/= u32RegAux;
                }
                else
                {
                    /*Noithing to do*/
                }
            }
            else /*PLL*/
            {
                /*Verify if PLL is enable*/
                if(SYSCTL_RCC2_R_PWRDN2_ON==(u32RegRCC2&SYSCTL_RCC2_R_PWRDN2_MASK))
                {
                    /*Initial Frequencyof PLL*/
                    u32Frequency=200000000u;

                    /*If PLL 400MHz is enabled, SYSDIV2LSB needs to be considered*/
                    if(SYSCTL_RCC2_R_DIV400_400MHZ==(u32RegRCC2&SYSCTL_RCC2_R_DIV400_MASK))
                    {
                        u32Frequency*=2u;
                        u32RegAux= (u32RegSYSDIV2<<1u);
                        u32RegAux+=u32RegSYSDIVLSB2;
                        u32RegAux+= 1u;
                        u32Frequency/= u32RegAux;
                    }
                    else
                    {
                        u32RegAux= u32RegSYSDIV2+1u;
                        u32Frequency/= u32RegAux;
                    }
                }
                else
                {
                    u32Frequency = 0u; /*Invalid configuration*/
                }
            }
            break;
        case SYSCTL_RCC2_R_OSCSRC2_PIOSC4:
            u32Frequency= 4000000u;
            /*OSC source*/
            if(SYSCTL_RCC2_R_BYPASS2_OSC==(u32RegRCC2&SYSCTL_RCC2_R_BYPASS2_MASK))
            {
                /*OSC source/div*/
                if(SYSCTL_RCC_R_USESYSDIV_SYSDIV==(u32RegRCC&SYSCTL_RCC_R_USESYSDIV_MASK))
                {
                    u32RegAux =  u32RegSYSDIV2+1u;
                    u32Frequency/=u32RegAux;
                }
                else
                {
                    /*Noithing to do*/
                }
            }
            else
            {
                /*Noithing to do*/
            }
            break;
        case SYSCTL_RCC2_R_OSCSRC2_LFIOSC:
            u32Frequency= 33000u;
            /*OSC source*/
            if(SYSCTL_RCC2_R_BYPASS2_OSC==(u32RegRCC2&SYSCTL_RCC2_R_BYPASS2_MASK))
            {
                /*OSC source/div*/
                if(SYSCTL_RCC_R_USESYSDIV_SYSDIV==(u32RegRCC&SYSCTL_RCC_R_USESYSDIV_MASK))
                {
                    u32RegAux =u32RegSYSDIV2+1u;
                    u32Frequency/= u32RegAux;
                }
                else
                {
                    /*Noithing to do*/
                }
            }
            else
            {
                /*Noithing to do*/
            }
            break;
        case SYSCTL_RCC2_R_OSCSRC2_32_768KHZ:
            u32Frequency= 32768u;
            /*OSC source*/
            if(SYSCTL_RCC2_R_BYPASS2_OSC==(u32RegRCC2&SYSCTL_RCC2_R_BYPASS2_MASK))
            {
                /*OSC source/div*/
                if(SYSCTL_RCC_R_USESYSDIV_SYSDIV==(u32RegRCC&SYSCTL_RCC_R_USESYSDIV_MASK))
                {
                    u32RegAux = u32RegSYSDIV2+1u;
                    u32Frequency/= u32RegAux;
                }
                else
                {
                    /*Noithing to do*/
                }
            }
            else
            {
                /*Noithing to do*/
            }
            break;
        default:
            break;
        }
    }
    else
    {
        switch(u32RegOSCSRC)
        {
        case SYSCTL_RCC_R_OSCSRC_MOSC:
            u32Frequency=SYSCTL_u32FreqXtal[u32RegXTAL];
            if(SYSCTL_RCC_R_BYPASS_OSC==(u32RegRCC&SYSCTL_RCC_R_BYPASS_MASK))
             {
                 /*OSC source/div*/
                 if(SYSCTL_RCC_R_USESYSDIV_SYSDIV==(u32RegRCC&SYSCTL_RCC_R_USESYSDIV_MASK))
                 {
                     u32RegAux= u32RegSYSDIV2+1u;
                     u32Frequency/=u32RegAux;
                 }
                 else
                 {
                     /*Noithing to do*/
                 }
             }
             else
             {                /*Verify if PLL is enable*/
                 if(SYSCTL_RCC_R_PWRDN_ON==(u32RegRCC&SYSCTL_RCC_R_PWRDN_MASK))
                 {
                     /*Initial Frequencyof PLL*/
                     u32Frequency=200000000u;
                     u32RegAux =u32RegSYSDIV2+1u;
                     u32Frequency/=u32RegAux;
                 }
                 else
                 {
                     u32Frequency = 0u; /*Invalid configuration*/
                 }
             }
            break;
        case SYSCTL_RCC_R_OSCSRC_PIOSC:
            u32Frequency= 16000000u;
            if(SYSCTL_RCC_R_BYPASS_OSC==(u32RegRCC&SYSCTL_RCC_R_BYPASS_MASK))
            {
                /*OSC source/div*/
                if(SYSCTL_RCC_R_USESYSDIV_SYSDIV==(u32RegRCC&SYSCTL_RCC_R_USESYSDIV_MASK))
                {
                    u32RegAux = u32RegSYSDIV2+1u;
                    u32Frequency/= u32RegAux;
                }
                else
                {
                    /*Noithing to do*/
                }
            }
            else
            {                /*Verify if PLL is enable*/
                if(SYSCTL_RCC_R_PWRDN_ON==(u32RegRCC&SYSCTL_RCC_R_PWRDN_MASK))
                {
                    /*Initial Frequencyof PLL*/
                    u32Frequency=200000000u;
                    u32RegAux= u32RegSYSDIV2+1u;
                    u32Frequency/= u32RegAux;
                }
                else
                {
                    u32Frequency = 0u; /*Invalid configuration*/
                }
            }
            break;
        case SYSCTL_RCC_R_OSCSRC_PIOSC4:
            u32Frequency= 4000000u;
            if(SYSCTL_RCC_R_BYPASS_OSC==(u32RegRCC&SYSCTL_RCC_R_BYPASS_MASK))
            {
                /*OSC source/div*/
                if(SYSCTL_RCC_R_USESYSDIV_SYSDIV==(u32RegRCC&SYSCTL_RCC_R_USESYSDIV_MASK))
                {
                    u32RegAux = u32RegSYSDIV2+1u;
                    u32Frequency/=u32RegAux;
                }
                else
                {
                    /*Noithing to do*/
                }
            }
            else
            {
                /*Noithing to do*/
            }
            break;
        case SYSCTL_RCC_R_OSCSRC_LFIOSC:
            u32Frequency= 33000u;            /*OSC source*/
            if(SYSCTL_RCC_R_BYPASS_OSC==(u32RegRCC&SYSCTL_RCC_R_BYPASS_MASK))
            {
                /*OSC source/div*/
                if(SYSCTL_RCC_R_USESYSDIV_SYSDIV==(u32RegRCC&SYSCTL_RCC_R_USESYSDIV_MASK))
                {
                    u32RegAux=u32RegSYSDIV2+1u;
                    u32Frequency/= u32RegAux;
                }
                else
                {
                    /*Noithing to do*/
                }
            }
            else
            {
                /*Noithing to do*/
            }
            break;
        default:
            break;
        }
    }
    return u32Frequency;
}



