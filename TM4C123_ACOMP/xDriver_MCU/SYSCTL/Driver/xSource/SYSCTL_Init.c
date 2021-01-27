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
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_GPIOBus.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_Init.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nSTATUS SYSCTL__enInit(void)
{
    SYSCTL_nSTATUS enStatus = SYSCTL_enOK;
    uint32_t u32Reg = 0UL;
    uint32_t u32TimeOut = 50000UL;
    uint32_t u32SivDiv2 = 0UL;

   SYSCTL__vSetGPIOBus_AHB( SYSCTL_enGPIOBUSALL);

    /*
     * DEEP-SLEEP Clock config
     * PIOSC/64 source DEEP-SLEEP
     */
   MCU__vWriteRegister( SYSCTL_BASE, SYSCTL_DSLPCLKCFG_OFFSET,
   (SYSCTL_DSLPCLKCFG_R_DSDIVORIDE_MASK |SYSCTL_DSLPCLKCFG_R_DSOSCSRC_PIOSC),
   (SYSCTL_DSLPCLKCFG_R_DSDIVORIDE_MASK | SYSCTL_DSLPCLKCFG_R_DSOSCSRC_MASK),
   0UL);

    /*
     * Initial SYSCLK PIOSC bypass
     * XTAL 16MHZ
     */
   MCU__vWriteRegister( SYSCTL_BASE, SYSCTL_RCC_OFFSET,
   (SYSCTL_RCC_R_XTAL_16MHZ           |SYSCTL_RCC_R_OSCSRC_PIOSC          |SYSCTL_RCC_R_BYPASS_OSC   |
   SYSCTL_RCC_R_USESYSDIV_SYSCLK |SYSCTL_RCC_R_USEPWMDIV_SYSCLK|SYSCTL_RCC_R_ACG_RCGCn     | SYSCTL_RCC_R_MOSCDIS_EN|SYSCTL_RCC_R_PWRDN_ON),
   (SYSCTL_RCC_R_XTAL_MASK             |SYSCTL_RCC_R_OSCSRC_MASK           |SYSCTL_RCC_R_BYPASS_MASK |
   SYSCTL_RCC_R_USESYSDIV_MASK   |SYSCTL_RCC_R_USEPWMDIV_MASK    |SYSCTL_RCC_R_ACG_MASK      | SYSCTL_RCC_R_MOSCDIS_MASK|SYSCTL_RCC_R_PWRDN_MASK),
   0UL);

   MCU__vWriteRegister( SYSCTL_BASE, SYSCTL_RCC_OFFSET, 0UL ,SYSCTL_RCC_OSCSRC_MASK ,SYSCTL_RCC_R_OSCSRC_BIT);

    /*
     * Select config div prior Enable PLLs
     * XTAL 16MHZ
     */
   u32SivDiv2 = 2UL;
   u32SivDiv2 <<= SYSCTL_RCC2_R_SYSDIV2_BIT;
   MCU__vWriteRegister( SYSCTL_BASE, SYSCTL_RCC2_OFFSET,
   (SYSCTL_RCC2_R_BYPASS2_OSC    |SYSCTL_RCC2_R_DIV400_400MHZ |SYSCTL_RCC2_R_USERCC2_RCC2      | u32SivDiv2 |
   SYSCTL_RCC2_R_OSCSRC2_MOSC |SYSCTL_RCC2_R_PWRDN2_ON      |SYSCTL_RCC2_R_USBPWRDN_ON     |SYSCTL_RCC2_R_SYSDIV2LSB_CLEAR),
   (SYSCTL_RCC2_R_BYPASS2_MASK |SYSCTL_RCC2_R_DIV400_MASK     |SYSCTL_RCC2_R_USERCC2_MASK      | SYSCTL_RCC2_R_SYSDIV2_MASK |
   SYSCTL_RCC2_R_OSCSRC2_MASK |SYSCTL_RCC2_R_PWRDN2_MASK  |SYSCTL_RCC2_R_USBPWRDN_MASK |SYSCTL_RCC2_R_SYSDIV2LSB_MASK),
   0UL);

   do{
       u32Reg = MCU__u32ReadRegister( SYSCTL_BASE, SYSCTL_PLLSTAT_OFFSET, SYSCTL_PLLSTAT_LOCK_MASK, SYSCTL_PLLSTAT_R_LOCK_BIT);
       u32TimeOut--;
       if(0UL == u32TimeOut)
       {
           enStatus = SYSCTL_enERROR;
       }
   }while((SYSCTL_PLLSTAT_LOCK_NOLOCK == u32Reg) && ( SYSCTL_enOK == enStatus));

    if(SYSCTL_enOK == enStatus)
    {
        MCU__vWriteRegister( SYSCTL_BASE, SYSCTL_RCC_OFFSET, 0UL, SYSCTL_RCC_BYPASS_MASK, SYSCTL_RCC_R_BYPASS_BIT);
        MCU__vWriteRegister( SYSCTL_BASE, SYSCTL_RCC2_OFFSET, 0UL, SYSCTL_RCC2_BYPASS2_MASK, SYSCTL_RCC2_R_BYPASS2_BIT);
    }
    return enStatus;
}
