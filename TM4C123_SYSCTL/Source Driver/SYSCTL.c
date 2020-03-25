/*
 * SYSCTL.c
 *
 *  Created on: 27 feb. 2018
 *      Author: InDev
 */

#include <SYSCTL.h>

unsigned long freqXtal[27]=
{ 0       ,0       ,0       ,0       ,0       ,0       ,
  4000000 ,4096000 ,4915200 ,5000000 ,5120000 ,6000000 ,
  6144000 ,7372800 ,8000000 ,8192000 ,10000000,12000000,
  12288000,13560000,14318180,16000000,16384000,18000000,
  20000000,24000000,25000000
};


uint32_t SYSCTL__u32GetClock(void)
{
    volatile uint32_t frequency=0;
    if(SYSCTL_RCC2_USERCC2_BITBANDING)
    {
        switch(SYSCTL_RCC2->OSCSRC2)
        {
        case 0:
            if(SYSCTL_RCC_MOSCDIS_BITBANDING==0)
            {

                frequency=freqXtal[SYSCTL_RCC->XTAL];
                if(SYSCTL_RCC2_BYPASS2_BITBANDING)//Clock source
                {
                    if(SYSCTL_RCC_USESYSDIV_BITBANDING)
                    {
                        frequency/= SYSCTL_RCC2->SYSDIV2+1;
                        return frequency;
                    }
                }
                else //PLL
                {
                    if(SYSCTL_RCC2_PWRDN2_BITBANDING==0)
                    {
                        frequency=400000000;
                        if(SYSCTL_RCC2_DIV400_BITBANDING)
                        {
                            frequency/= ((SYSCTL_RCC2->SYSDIV2<<1)+SYSCTL_RCC2->SYSDIV2LSB)+1;
                            return frequency;
                        }
                        else
                        {
                            frequency/=2;
                            frequency/= SYSCTL_RCC2->SYSDIV2+1;
                            return frequency;
                        }
                    }
                }
            }
            break;
        case 1:
            frequency= 16000000;
            if(SYSCTL_RCC2_BYPASS2_BITBANDING)//Clock source
            {
                if(SYSCTL_RCC_USESYSDIV_BITBANDING)
                {
                    frequency/= SYSCTL_RCC2->SYSDIV2+1;
                    return frequency;
                }
            }
            else //PLL
            {
                if(SYSCTL_RCC2_PWRDN2_BITBANDING==0)
                {
                    frequency=400000000;
                    if(SYSCTL_RCC2_DIV400_BITBANDING)
                    {
                        frequency/= ((SYSCTL_RCC2->SYSDIV2<<1)+SYSCTL_RCC2->SYSDIV2LSB)+1;
                        return frequency;
                    }
                    else
                    {
                        frequency/=2;
                        frequency/= SYSCTL_RCC2->SYSDIV2+1;
                        return frequency;
                    }
                }
            }
            break;
        case 2:
            frequency= 4000000;
            break;
        case 3:
            frequency= 33000;
            break;
        case 7:
            frequency= 32768;
            break;
        default:
            break;
        }
        if(SYSCTL_RCC2_BYPASS2_BITBANDING)//Clock source
            if(SYSCTL_RCC_USESYSDIV_BITBANDING)
                frequency/= SYSCTL_RCC2->SYSDIV2+1;
        return frequency;
    }
    else
    {
        switch(SYSCTL_RCC->OSCSRC)
        {
        case 0:
            frequency=freqXtal[SYSCTL_RCC->XTAL];
            if(SYSCTL_RCC_MOSCDIS_BITBANDING==0)
            {
                if(SYSCTL_RCC_BYPASS_BITBANDING) //clock source
                {
                    if(SYSCTL_RCC_USESYSDIV_BITBANDING)
                    {
                     frequency/= SYSCTL_RCC->SYSDIV+1;
                    }

                }
                else //PLL
                {
                    if(SYSCTL_RCC_PWRDN_BITBANDING==0)
                    {
                        if(SYSCTL_RCC_USESYSDIV_BITBANDING)
                        {
                         frequency/= SYSCTL_RCC->SYSDIV+1;
                        }
                    }

                }
            }
            break;
        case 1:
            frequency= 16000000;
            if(SYSCTL_RCC_BYPASS_BITBANDING==0)//Clock source
            {
                if(SYSCTL_RCC_USESYSDIV_BITBANDING)
                  {
                   frequency/=SYSCTL_RCC->SYSDIV+1;
                  }
            }
            break;
        case 2:
            frequency= 4000000;
            break;
        case 3:
            frequency= 33000;
            break;
        default:
            break;
        }
    }
    return frequency;
}

SYSCTL_nSTATUS SYSCTL__enInit(void)
{

    volatile uint16_t u16TimeOut=50000;
    SYSCTL_GPIOHBCTL_PORTA_BITBANDING=1;
    SYSCTL_GPIOHBCTL_PORTB_BITBANDING=1;
    SYSCTL_GPIOHBCTL_PORTC_BITBANDING=1;
    SYSCTL_GPIOHBCTL_PORTD_BITBANDING=1;
    SYSCTL_GPIOHBCTL_PORTE_BITBANDING=1;
    SYSCTL_GPIOHBCTL_PORTF_BITBANDING=1;


    SYSCTL_DSLPCLKCFG->DSOSCSRC=0;//MOSC source DEEP-SLEEP
    SYSCTL_DSLPCLKCFG->DSDIVORIDE=0x3F;// /64 DEEP-SLEEP
    SYSCTL_DSLPCLKCFG->PIOSCPD=1;//turn down PIOSC
    SYSCTL_RCC2_USERCC2_BITBANDING=1;
    SYSCTL_RCC2_BYPASS2_BITBANDING=1;
    SYSCTL_RCC->XTAL=0x15;
    SYSCTL_RCC2->OSCSRC2=0;
    SYSCTL_RCC2_PWRDN2_BITBANDING=0;

    SYSCTL_RCC2_DIV400_BITBANDING=1;
    SYSCTL_RCC2->SYSDIV2=2;
    SYSCTL_RCC2->SYSDIV2LSB=0;

    while(SYSCTL_RIS_PLLLRIS_BITBANDING==0);
    {
        if(!(u16TimeOut--))
            return SYSCTL_enERROR;

    }
    SYSCTL_RCC2_BYPASS2_BITBANDING=0;
    return SYSCTL_enOK;

}

