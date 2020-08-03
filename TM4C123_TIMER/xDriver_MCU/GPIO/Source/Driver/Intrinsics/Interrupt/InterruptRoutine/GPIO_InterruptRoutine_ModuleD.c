/**
 *
 * @file GPIO_InterruptRoutine_ModuleD.c
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
#include <xDriver_MCU/GPIO/Header/Driver/Intrinsics/Interrupt/InterruptRoutine/GPIO_InterruptRoutine_ModuleD.h>
#include <xDriver_MCU/GPIO/Header/Driver/Intrinsics/Interrupt/InterruptRoutine/GPIO_InterruptRoutine_Pines.h>
#include <xDriver_MCU/GPIO/Header/Peripheral/GPIO_Peripheral.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void GPIOD__vISRHandler(void)
{
    volatile uint32_t u32Reg=0;
     uint32_t u32RegBUS=SYSCTL_GPIOHBCTL_R&(uint32_t)((uint32_t)1u<<2u);
     if(GPIO_enAPB ==u32RegBUS)
     {
         u32Reg=GPIOD_APB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN0)
         {
             GPIOD_APB_GPIOICR_R=GPIO_enPIN0;
             GPIO[3][0]();
         }
         if(u32Reg & GPIO_enPIN1)
         {
             GPIOD_APB_GPIOICR_R=GPIO_enPIN1;
             GPIO[3][1]();
         }
         if(u32Reg & GPIO_enPIN2)
         {
             GPIOD_APB_GPIOICR_R=GPIO_enPIN2;
             GPIO[3][2]();
         }
         if(u32Reg & GPIO_enPIN3)
         {
             GPIOD_APB_GPIOICR_R=GPIO_enPIN3;
             GPIO[3][3]();
         }
         if(u32Reg & GPIO_enPIN4)
         {
             GPIOD_APB_GPIOICR_R=GPIO_enPIN4;
             GPIO[3][4]();
         }
         if(u32Reg & GPIO_enPIN5)
         {
             GPIOD_APB_GPIOICR_R=GPIO_enPIN5;
             GPIO[3][5]();
         }
         if(u32Reg & GPIO_enPIN6)
         {
             GPIOD_APB_GPIOICR_R=GPIO_enPIN6;
             GPIO[3][6]();
         }
         if(u32Reg & GPIO_enPIN7)
         {
             GPIOD_APB_GPIOICR_R=GPIO_enPIN7;
             GPIO[3][7]();
         }
     }
     else
     {
         u32Reg=GPIOD_AHB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN0)
         {
             GPIOD_AHB_GPIOICR_R=GPIO_enPIN0;
             GPIO[3][0]();
         }
         if(u32Reg & GPIO_enPIN1)
         {
             GPIOD_AHB_GPIOICR_R=GPIO_enPIN1;
             GPIO[3][1]();
         }
         if(u32Reg & GPIO_enPIN2)
         {
             GPIOD_AHB_GPIOICR_R=GPIO_enPIN2;
             GPIO[3][2]();
         }
         if(u32Reg & GPIO_enPIN3)
         {
             GPIOD_AHB_GPIOICR_R=GPIO_enPIN3;
             GPIO[3][3]();
         }
         if(u32Reg & GPIO_enPIN4)
         {
             GPIOD_AHB_GPIOICR_R=GPIO_enPIN4;
             GPIO[3][4]();
         }
         if(u32Reg & GPIO_enPIN5)
         {
             GPIOD_AHB_GPIOICR_R=GPIO_enPIN5;
             GPIO[3][5]();
         }
         if(u32Reg & GPIO_enPIN6)
         {
             GPIOD_AHB_GPIOICR_R=GPIO_enPIN6;
             GPIO[3][6]();
         }
         if(u32Reg & GPIO_enPIN7)
         {
             GPIOD_AHB_GPIOICR_R=GPIO_enPIN7;
             GPIO[3][7]();
         }
     }
}


