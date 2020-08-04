/**
 *
 * @file GPIO_InterruptRoutine_ModuleF.c
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
 * @verbatim 30 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <stdint.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_ModuleF.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Pines.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>


void GPIOF__vISRHandler(void)
{
    volatile uint32_t u32Reg=0;
     uint32_t u32RegBUS=SYSCTL_GPIOHBCTL_R&(uint32_t)((uint32_t)1u<<2u);
     if(GPIO_enAPB ==u32RegBUS)
     {
         u32Reg=GPIOF_APB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN0)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN0;
             GPIO[5][0]();
         }
         if(u32Reg & GPIO_enPIN1)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN1;
             GPIO[5][1]();
         }
         if(u32Reg & GPIO_enPIN2)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN2;
             GPIO[5][2]();
         }
         if(u32Reg & GPIO_enPIN3)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN3;
             GPIO[5][3]();
         }
         if(u32Reg & GPIO_enPIN4)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN4;
             GPIO[5][4]();
         }
         if(u32Reg & GPIO_enPIN5)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN5;
             GPIO[5][5]();
         }
         if(u32Reg & GPIO_enPIN6)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN6;
             GPIO[5][6]();
         }
         if(u32Reg & GPIO_enPIN7)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN7;
             GPIO[5][7]();
         }
     }
     else
     {
         u32Reg=GPIOF_AHB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN0)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN0;
             GPIO[5][0]();
         }
         if(u32Reg & GPIO_enPIN1)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN1;
             GPIO[5][1]();
         }
         if(u32Reg & GPIO_enPIN2)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN2;
             GPIO[5][2]();
         }
         if(u32Reg & GPIO_enPIN3)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN3;
             GPIO[5][3]();
         }
         if(u32Reg & GPIO_enPIN4)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN4;
             GPIO[5][4]();
         }
         if(u32Reg & GPIO_enPIN5)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN5;
             GPIO[5][5]();
         }
         if(u32Reg & GPIO_enPIN6)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN6;
             GPIO[5][6]();
         }
         if(u32Reg & GPIO_enPIN7)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN7;
             GPIO[5][7]();
         }
     }
}



