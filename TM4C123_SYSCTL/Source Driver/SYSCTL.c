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


SYSCTL_nRESET SYSCTL__enGetResetCause(void)
{
    uint32_t u32Reg=0;
    uint32_t u32BitBanding=0;
    u32BitBanding=SYSCTL_RESC_EXT_BITBANDING;
    u32Reg=u32BitBanding;

    u32BitBanding=SYSCTL_RESC_POR_BITBANDING<<1;
    u32Reg|=u32BitBanding;

    u32BitBanding=SYSCTL_RESC_BOR_BITBANDING<<2;
    u32Reg|=u32BitBanding;

    u32BitBanding=SYSCTL_RESC_WDT0_BITBANDING<<3;
    u32Reg|=u32BitBanding;

    u32BitBanding=SYSCTL_RESC_SW_BITBANDING<<4;
    u32Reg|=u32BitBanding;

    u32BitBanding=SYSCTL_RESC_WDT1_BITBANDING<<5;
    u32Reg|=u32BitBanding;

    u32BitBanding=SYSCTL_RESC_MOSCFAIL_BITBANDING<<6;
    u32Reg|=u32BitBanding;

    return (SYSCTL_nRESET)u32Reg;
}

void SYSCTL__vClearResetCause(SYSCTL_nRESET enReset)
{

    if(SYSCTL_enRESET_EXT == (enReset&SYSCTL_enRESET_EXT))
        SYSCTL_RESC_EXT_BITBANDING=0;

    if(SYSCTL_enRESET_POR == (enReset&SYSCTL_enRESET_POR))
        SYSCTL_RESC_POR_BITBANDING=0;

    if(SYSCTL_enRESET_BOR == (enReset&SYSCTL_enRESET_BOR))
        SYSCTL_RESC_BOR_BITBANDING=0;

    if(SYSCTL_enRESET_WDT0 == (enReset&SYSCTL_enRESET_WDT0))
        SYSCTL_RESC_WDT0_BITBANDING=0;

    if(SYSCTL_enRESET_SW == (enReset&SYSCTL_enRESET_SW))
        SYSCTL_RESC_SW_BITBANDING=0;

    if(SYSCTL_enRESET_WDT1 == (enReset&SYSCTL_enRESET_WDT1))
        SYSCTL_RESC_WDT1_BITBANDING=0;

    if(SYSCTL_enRESET_MOSCFAIL== (enReset&SYSCTL_enRESET_MOSCFAIL))
        SYSCTL_RESC_MOSCFAIL_BITBANDING=0;
}


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

void SYSCTL__vSetGPIOBus_AHB(SYSCTL_nGPIOBUS enGPIO)
{
    SYSCTL_GPIOHBCTL_R|=enGPIO;
}

void SYSCTL__vSetGPIOBus_APB(SYSCTL_nGPIOBUS enGPIO)
{
    SYSCTL_GPIOHBCTL_R&=~(enGPIO);
}

SYSCTL_nSTATUS SYSCTL__enInit(void)
{
    uint32_t u32Reg=0;
    uint16_t u16TimeOut=50000;

    SYSCTL__vSetGPIOBus_AHB(SYSCTL_enGPIOBUSALL);

    /*
     * DEEP-SLEEP Clock config
     * PIOSC/64 source DEEP-SLEEP
     */
    u32Reg=SYSCTL_DSLPCLKCFG_R;
    u32Reg&=~SYSCTL_DSLPCLKCFG_R_DSOSCSRC_MASK;
    u32Reg|=SYSCTL_DSLPCLKCFG_R_DSOSCSRC_PIOSC;
    u32Reg|=SYSCTL_DSLPCLKCFG_R_DSDIVORIDE_MASK;
    SYSCTL_DSLPCLKCFG_R=u32Reg;

    /*
     * Initial SYSCLK PIOSC bypass
     * XTAL 16MHZ
     */
    u32Reg=SYSCTL_RCC_R;
    u32Reg&=~SYSCTL_RCC_R_XTAL_MASK;
    u32Reg|=SYSCTL_RCC_R_XTAL_16MHZ;        //XTAL 16MHz
    u32Reg&=~SYSCTL_RCC_R_OSCSRC_MASK;
    u32Reg|=SYSCTL_RCC_R_OSCSRC_PIOSC;      //PIOSC OscillatorSource
    u32Reg|=SYSCTL_RCC_R_BYPASS_MASK;       //Bypass PIOSC
    u32Reg&=~SYSCTL_RCC_R_USESYSDIV_MASK;   //PIOSC SYSCLK undivided
    u32Reg&=~SYSCTL_RCC_R_USEPWMDIV_MASK;   //PIOSC PWMCLK undivided
    u32Reg&=~SYSCTL_RCC_R_ACG_MASK;         //RCGCn used
    u32Reg&=~SYSCTL_RCC_R_MOSCDIS_MASK;     //enable MOSC
    u32Reg&=~SYSCTL_RCC_R_PWRDN_MASK;       //enable PLL
    SYSCTL_RCC_R=u32Reg;

    SYSCTL_RCC_R&=~SYSCTL_RCC_R_OSCSRC_MASK; // MOSC OscillatorSource

    /*
     * Select config div prior Enable PLLs
     * XTAL 16MHZ
     */
    u32Reg=SYSCTL_RCC2_R;
    u32Reg&=~SYSCTL_RCC2_R_OSCSRC2_MASK; // MOSC OscillatorSource
    u32Reg|=SYSCTL_RCC2_R_BYPASS2_MASK;  //Bypass MOSC
    u32Reg&=~SYSCTL_RCC2_R_PWRDN2_MASK;  //Enable PLL
    u32Reg&=~SYSCTL_RCC2_R_USBPWRDN_MASK;  //Enable USBPLL
    u32Reg&=~SYSCTL_RCC2_R_SYSDIV2LSB_MASK;  //LSB div 0
    u32Reg&=~SYSCTL_RCC2_R_SYSDIV2_MASK;
    u32Reg|=(2<<SYSCTL_RCC2_R_SYSDIV2_BIT);  //div 5
    u32Reg|=SYSCTL_RCC2_R_DIV400_MASK;    //400MHz
    u32Reg|=SYSCTL_RCC2_R_USERCC2_MASK;    //enable RCC2
    SYSCTL_RCC2_R=u32Reg;



    while((SYSCTL_PLLSTAT_R&SYSCTL_PLLSTAT_R_LOCK_MASK)==SYSCTL_PLLSTAT_R_LOCK_NOLOCK);
    {
        if(!(u16TimeOut--))
            return SYSCTL_enERROR;

    }
    SYSCTL_RCC_R&=~SYSCTL_RCC_R_BYPASS_MASK;
    SYSCTL_RCC2_R&=~SYSCTL_RCC2_R_BYPASS2_MASK;
    return SYSCTL_enOK;

}

