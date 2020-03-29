/*
 * SYSCTL.c
 *
 *  Created on: 27 feb. 2018
 *      Author: InDev
 */

#include "SYSCTL.h"




uint32_t SYSCTL_ClockGet(void)
{

    uint32_t freqXtal[27]=
    { 0       ,0       ,0       ,0       ,0       ,0       ,
      4000000 ,4096000 ,4915200 ,5000000 ,5120000 ,6000000 ,
      6144000 ,7372800 ,8000000 ,8192000 ,10000000,12000000,
      12288000,13560000,14318180,16000000,16384000,18000000,
      20000000,24000000,25000000
    };
    volatile uint32_t frequency=0;
    if(SYSCTL_RCC2_USERCC2_BB)
    {
        switch(SYSCTL_RCC2->OSCSRC2)
        {
        case 0:
            if(SYSCTL_RCC_MOSCDIS_BB==0)
            {

                frequency=freqXtal[SYSCTL_RCC->XTAL];
                if(SYSCTL_RCC2_BYPASS2_BB)//Clock source
                {
                    if(SYSCTL_RCC_USESYSDIV_BB)
                    {
                        frequency/= SYSCTL_RCC2->SYSDIV2+1;
                        return frequency;
                    }
                }
                else //PLL
                {
                    if(SYSCTL_RCC2_PWRDN2_BB==0)
                    {
                        frequency=400000000;
                        if(SYSCTL_RCC2_DIV400_BB)
                        {
                            frequency/= (uint32_t)(((SYSCTL_RCC2->SYSDIV2<<1)+SYSCTL_RCC2->SYSDIV2LSB)+1);;
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
            if(SYSCTL_RCC2_BYPASS2_BB)//Clock source
            {
                if(SYSCTL_RCC_USESYSDIV_BB)
                {
                    frequency/= SYSCTL_RCC2->SYSDIV2+1;
                    return frequency;
                }
            }
            else //PLL
            {
                if(SYSCTL_RCC2_PWRDN2_BB==0)
                {
                    frequency=400000000;
                    if(SYSCTL_RCC2_DIV400_BB)
                    {
                        frequency/= (uint32_t)(((SYSCTL_RCC2->SYSDIV2<<1)+SYSCTL_RCC2->SYSDIV2LSB)+1);
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
        if(SYSCTL_RCC2_BYPASS2_BB)//Clock source
            if(SYSCTL_RCC_USESYSDIV_BB)
                frequency/= SYSCTL_RCC2->SYSDIV2+1;
        return frequency;
    }
    else
    {
        switch(SYSCTL_RCC->OSCSRC)
        {
        case 0:
            frequency=freqXtal[SYSCTL_RCC->XTAL];
            if(SYSCTL_RCC_MOSCDIS_BB==0)
            {
                if(SYSCTL_RCC_BYPASS_BB) //clock source
                {
                    if(SYSCTL_RCC_USESYSDIV_BB)
                    {
                     frequency/= SYSCTL_RCC->SYSDIV+1;
                    }

                }
                else //PLL
                {
                    if(SYSCTL_RCC_PWRDN_BB==0)
                    {
                        if(SYSCTL_RCC_USESYSDIV_BB)
                        {
                         frequency/= SYSCTL_RCC->SYSDIV+1;
                        }
                    }

                }
            }
            break;
        case 1:
            frequency= 16000000;
            if(SYSCTL_RCC_BYPASS_BB==0)//Clock source
            {
                if(SYSCTL_RCC_USESYSDIV_BB)
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

int32_t SYSCTL_Init(void)
{

    volatile uint32_t timeOut=5000;

    SYSCTL_GPIOHBCTL_PORTA_BB=SYSCTL_GPIOHBCTL_PORTA_AHB;
    SYSCTL_GPIOHBCTL_PORTB_BB=SYSCTL_GPIOHBCTL_PORTB_AHB;
    SYSCTL_GPIOHBCTL_PORTC_BB=SYSCTL_GPIOHBCTL_PORTC_AHB;
    SYSCTL_GPIOHBCTL_PORTD_BB=SYSCTL_GPIOHBCTL_PORTD_AHB;
    SYSCTL_GPIOHBCTL_PORTE_BB=SYSCTL_GPIOHBCTL_PORTE_AHB;
    SYSCTL_GPIOHBCTL_PORTF_BB=SYSCTL_GPIOHBCTL_PORTF_AHB;


    SYSCTL_DSLPCLKCFG->DSOSCSRC=SYSCTL_DSLPCLKCFG_DSOSCSRC_MOSC;//MOSC source DEEP-SLEEP
    SYSCTL_DSLPCLKCFG->DSDIVORIDE=0x3F;// /64 DEEP-SLEEP
    SYSCTL_DSLPCLKCFG->PIOSCPD=SYSCTL_DSLPCLKCFG_PIOSCPD_PWRDN;//turn down PIOSC
    SYSCTL_RCC2_USERCC2_BB=SYSCTL_RCC2_USERCC2_RCC2;
    SYSCTL_RCC2_BYPASS2_BB=SYSCTL_RCC2_BYPASS2_OSC;
    SYSCTL_RCC->XTAL=SYSCTL_RCC_XTAL_16000KHz;
    SYSCTL_RCC2->OSCSRC2=SYSCTL_RCC2_OSCSRC2_MOSC;
    SYSCTL_RCC2_PWRDN2_BB=SYSCTL_RCC2_PWRDN2_ON;

    SYSCTL_RCC2_DIV400_BB=SYSCTL_RCC2_DIV400_EN;
    SYSCTL_RCC2->SYSDIV2=2;
    SYSCTL_RCC2->SYSDIV2LSB=SYSCTL_RCC2_SYSDIV2LSB_DIS;

    while(SYSCTL_RIS_PLLLRIS_BB==SYSCTL_RIS_PLLRIS_NOACTIVE)
    {
        if(!(timeOut--))
            return 0;

    }
    SYSCTL_RCC2_BYPASS2_BB=SYSCTL_RCC2_BYPASS2_PLL;
    return 1;

}

