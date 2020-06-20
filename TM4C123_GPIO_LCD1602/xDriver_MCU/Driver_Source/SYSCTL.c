/*
 * SYSCTL.c
 *
 *  Created on: 27 feb. 2018
 *      Author: InDev
 */

#include <xDriver_MCU/Driver_Header/SYSCTL.h>

uint32_t SYSCTL_u32FreqXtal[27]=
{ 0       ,0       ,0       ,0       ,0       ,0       ,
  4000000 ,4096000 ,4915200 ,5000000 ,5120000 ,6000000 ,
  6144000 ,7372800 ,8000000 ,8192000 ,10000000,12000000,
  12288000,13560000,14318180,16000000,16384000,18000000,
  20000000,24000000,25000000
};

#define SYSCTL_vNoOperation()   {__asm(" NOP");}



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

void SYSCTL__vSetGPIOBus_AHB(SYSCTL_nGPIOBUS enGPIO)
{
    SYSCTL_GPIOHBCTL_R|=enGPIO;
}

void SYSCTL__vSetGPIOBus_APB(SYSCTL_nGPIOBUS enGPIO)
{
    SYSCTL_GPIOHBCTL_R&=~((uint32_t)enGPIO);
}

SYSCTL_nGPIOBUS_CURRENT SYSCTL__vGetGPIOBus(SYSCTL_nGPIOBUS enGPIO)
{
    SYSCTL_nGPIOBUS_CURRENT enCurrent =SYSCTL_enGPIOBUS_APB;
    uint32_t u32Reg=SYSCTL_GPIOHBCTL_R;
    u32Reg&=enGPIO;
    if(0u!=u32Reg)
    {
        enCurrent=SYSCTL_enGPIOBUS_AHB;
    }
    return enCurrent;
}
SYSCTL_nSTATUS SYSCTL__enInit(void)
{
    SYSCTL_nSTATUS enStatus=SYSCTL_enOK;
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
    u32Reg|=SYSCTL_RCC_R_XTAL_16MHZ;/*XTAL 16MHz*/
    u32Reg&=~SYSCTL_RCC_R_OSCSRC_MASK;
    u32Reg|=SYSCTL_RCC_R_OSCSRC_PIOSC;/*PIOSC OscillatorSource*/
    u32Reg|=SYSCTL_RCC_R_BYPASS_MASK;/*Bypass PIOSC*/
    u32Reg&=~SYSCTL_RCC_R_USESYSDIV_MASK;/*PIOSC SYSCLK undivided*/
    u32Reg&=~SYSCTL_RCC_R_USEPWMDIV_MASK;/*PIOSC PWMCLK undivided*/
    u32Reg&=~SYSCTL_RCC_R_ACG_MASK;/*RCGCn used*/
    u32Reg&=~SYSCTL_RCC_R_MOSCDIS_MASK;/*enable MOSC*/
    u32Reg&=~SYSCTL_RCC_R_PWRDN_MASK;/*enable PLL*/
    SYSCTL_RCC_R=u32Reg;

    SYSCTL_RCC_R&=~SYSCTL_RCC_R_OSCSRC_MASK;/* MOSC OscillatorSource*/

    /*
     * Select config div prior Enable PLLs
     * XTAL 16MHZ
     */
    u32Reg=SYSCTL_RCC2_R;
    u32Reg&=~SYSCTL_RCC2_R_OSCSRC2_MASK;/* MOSC OscillatorSource*/
    u32Reg|=SYSCTL_RCC2_R_BYPASS2_MASK;/*Bypass MOSC*/
    u32Reg&=~SYSCTL_RCC2_R_PWRDN2_MASK;/*Enable PLL*/
    u32Reg&=~SYSCTL_RCC2_R_USBPWRDN_MASK;/*Enable USBPLL*/
    u32Reg&=~SYSCTL_RCC2_R_SYSDIV2LSB_MASK;/*LSB div 0*/
    u32Reg&=~SYSCTL_RCC2_R_SYSDIV2_MASK;
    u32Reg|=((uint32_t)2u<<SYSCTL_RCC2_R_SYSDIV2_BIT);/*div 5*/
    u32Reg|=SYSCTL_RCC2_R_DIV400_MASK;/*400MHz*/
    u32Reg|=SYSCTL_RCC2_R_USERCC2_MASK;/*enable RCC2*/
    SYSCTL_RCC2_R=u32Reg;



    while((SYSCTL_PLLSTAT_R&SYSCTL_PLLSTAT_R_LOCK_MASK)==SYSCTL_PLLSTAT_R_LOCK_NOLOCK)
    {
        u16TimeOut--;
        if(0u == u16TimeOut)
        {
            enStatus=SYSCTL_enERROR;
        }

    }
    if(SYSCTL_enOK ==enStatus)
    {
        SYSCTL_RCC_R&=~SYSCTL_RCC_R_BYPASS_MASK;
        SYSCTL_RCC2_R&=~SYSCTL_RCC2_R_BYPASS2_MASK;
    }
    return enStatus;

}

SYSCTL_nPERIPHERAL_PRESENT SYSCTL__enIsPeripheralPresent(SYSCTL_nPERIPHERAL enPeripheral)
{
    uint32_t u32NoRegister = ((uint32_t)enPeripheral>>8u)& 0x1Fu;
    uint32_t u32NoPeripheral= ((uint32_t)enPeripheral)& 0x1Fu;
    uint32_t u32Reg=0u;
    SYSCTL_nPERIPHERAL_PRESENT enReturn = SYSCTL_enNOPRESENT;

    u32Reg= SYSCTL->PP[u32NoRegister];
    u32Reg>>=u32NoPeripheral;
    enReturn=(SYSCTL_nPERIPHERAL_PRESENT)(u32Reg&1u);

    return enReturn;

}

SYSCTL_nPERIPHERAL_READY SYSCTL__enIsPeripheralReady(SYSCTL_nPERIPHERAL enPeripheral)
{
    uint32_t u32NoRegister = ((uint32_t)enPeripheral>>8u)& 0x1Fu;
    uint32_t u32NoPeripheral= ((uint32_t)enPeripheral)& 0x1Fu;
    uint32_t u32Reg=0;
    SYSCTL_nPERIPHERAL_READY enReturn = SYSCTL_enNOREADY;

    u32Reg= SYSCTL->PR[u32NoRegister];
    u32Reg>>=u32NoPeripheral;
    enReturn=(SYSCTL_nPERIPHERAL_READY)(u32Reg&1u);

    return enReturn;

}


void SYSCTL__vResetPeripheral(SYSCTL_nPERIPHERAL enPeripheral)
{
    uint32_t u32NoRegister = ((uint32_t)enPeripheral>>8u)& 0x1Fu;
    uint32_t u32NoPeripheral= ((uint32_t)enPeripheral)& 0x1Fu;
    uint32_t u32PeripheralValue=0;

    u32PeripheralValue = ((uint32_t)1u<<u32NoPeripheral);
    SYSCTL->SR[u32NoRegister]|=u32PeripheralValue;
    SYSCTL_vNoOperation();
    SYSCTL_vNoOperation();
    SYSCTL_vNoOperation();
    SYSCTL_vNoOperation();
    u32PeripheralValue = ((uint32_t)1<<u32NoPeripheral);
    SYSCTL->SR[u32NoRegister]&=~u32PeripheralValue;
    SYSCTL_vNoOperation();
    SYSCTL_vNoOperation();
    SYSCTL_vNoOperation();
    SYSCTL_vNoOperation();
}

void SYSCTL__vEnRunModePeripheral(SYSCTL_nPERIPHERAL enPeripheral)
{
    uint32_t u32NoRegister = ((uint32_t)enPeripheral>>8u)& 0x1Fu;
    uint32_t u32NoPeripheral= ((uint32_t)enPeripheral)& 0x1Fu;
    uint32_t u32PeripheralValue=0;



    if(0u==(uint32_t)(SYSCTL->RCGC[u32NoRegister]&(uint32_t)((uint32_t)1u<<u32NoPeripheral)))
    {
        u32PeripheralValue = ((uint32_t)1u<<u32NoPeripheral);
        SYSCTL->RCGC[u32NoRegister]|=u32PeripheralValue;
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        while(0u==(uint32_t)(SYSCTL->PR[u32NoRegister]&(uint32_t)((uint32_t)1u<<u32NoPeripheral))){}
    }
}

void SYSCTL__vDisRunModePeripheral(SYSCTL_nPERIPHERAL enPeripheral)
{
    uint32_t u32NoRegister = ((uint32_t)enPeripheral>>8u)& 0x1Fu;
    uint32_t u32NoPeripheral= ((uint32_t)enPeripheral)& 0x1Fu;
    uint32_t u32PeripheralValue=0;


    u32PeripheralValue = ((uint32_t)1u<<u32NoPeripheral);
    if(u32PeripheralValue==(SYSCTL->RCGC[u32NoRegister]&u32PeripheralValue))
    {
        SYSCTL__vResetPeripheral(enPeripheral);
        SYSCTL->RCGC[u32NoRegister]&=~u32PeripheralValue;
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
    }
}

void SYSCTL__vEnSleepModePeripheral(SYSCTL_nPERIPHERAL enPeripheral)
{
    uint32_t u32NoRegister = ((uint32_t)enPeripheral>>8u)& 0x1Fu;
    uint32_t u32NoPeripheral= ((uint32_t)enPeripheral)& 0x1Fu;


    if(0u==(SYSCTL->SCGC[u32NoRegister]&(uint32_t)((uint32_t)1u<<u32NoPeripheral)))
    {
        SYSCTL->SCGC[u32NoRegister]|=(uint32_t)((uint32_t)1u<<u32NoPeripheral);
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        while(0u==(SYSCTL->PR[u32NoRegister]&(uint32_t)((uint32_t)1u<<u32NoPeripheral))){}
    }
}

void SYSCTL__vDisSleepModePeripheral(SYSCTL_nPERIPHERAL enPeripheral)
{
    uint32_t u32NoRegister = ((uint32_t)enPeripheral>>8u)& 0x1Fu;
    uint32_t u32NoPeripheral= ((uint32_t)enPeripheral)& 0x1Fu;
    uint32_t u32PeripheralValue=0;


    u32PeripheralValue = ((uint32_t)1u<<u32NoPeripheral);

    if(u32PeripheralValue==(SYSCTL->SCGC[u32NoRegister]&u32PeripheralValue))
    {
        SYSCTL->SCGC[u32NoRegister]&=~u32PeripheralValue;
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
    }
}

void SYSCTL__vEnDeepSleepModePeripheral(SYSCTL_nPERIPHERAL enPeripheral)
{
    uint32_t u32NoRegister = ((uint32_t)enPeripheral>>8u)& 0x1Fu;
    uint32_t u32NoPeripheral= ((uint32_t)enPeripheral)& 0x1Fu;
    uint32_t u32PeripheralValue=0;


    u32PeripheralValue = ((uint32_t)1u<<u32NoPeripheral);
    if(0u==(SYSCTL->DCGC[u32NoRegister]&(uint32_t)u32PeripheralValue))
    {
        SYSCTL->DCGC[u32NoRegister]|=u32PeripheralValue;
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        while(0u==(SYSCTL->PR[u32NoRegister]&(uint32_t)((uint32_t)1u<<u32NoPeripheral))){}
    }
}

void SYSCTL__vDisDeepSleepModePeripheral(SYSCTL_nPERIPHERAL enPeripheral)
{
    uint32_t u32NoRegister = ((uint32_t)enPeripheral>>8u)& 0x1Fu;
    uint32_t u32NoPeripheral= ((uint32_t)enPeripheral)& 0x1Fu;
    uint32_t u32PeripheralValue=0;


    u32PeripheralValue = ((uint32_t)1u<<u32NoPeripheral);

    if(u32PeripheralValue==(SYSCTL->DCGC[u32NoRegister]&u32PeripheralValue))
    {
        SYSCTL->DCGC[u32NoRegister]&=~u32PeripheralValue;
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
    }
}

