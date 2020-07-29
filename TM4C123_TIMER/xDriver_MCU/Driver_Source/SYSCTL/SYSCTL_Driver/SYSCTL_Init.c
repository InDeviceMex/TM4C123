/**
 *
 * @file SYSCTL_Init.c
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

#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL_Driver/SYSCTL_Init.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL_Peripheral/SYSCTL_Peripheral.h>
#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL_Driver/SYSCTL_GPIOBus.h>

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


