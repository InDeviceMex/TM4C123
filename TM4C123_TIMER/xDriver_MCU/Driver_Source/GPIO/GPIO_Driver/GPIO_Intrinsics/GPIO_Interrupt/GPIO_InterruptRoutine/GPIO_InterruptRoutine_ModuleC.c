/**
 *
 * @file GPIO_InterruptRoutine_ModuleC.c
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

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Intrinsics/GPIO_Interrupt/GPIO_InterruptRoutine/GPIO_InterruptRoutine_ModuleC.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL_Peripheral/SYSCTL_Peripheral.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Peripheral.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Intrinsics/GPIO_Interrupt/GPIO_InterruptRoutine/GPIO_InterruptRoutine_Pines.h>

void GPIOC__vISR(void)
{
    volatile uint32_t u32Reg=0;
     uint32_t u32RegBUS=SYSCTL_GPIOHBCTL_R&(uint32_t)((uint32_t)1u<<2u);
     if(GPIO_enAPB ==u32RegBUS)
     {
         u32Reg=GPIOC_APB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN0)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN0;
             GPIO[2][0]();
         }
         if(u32Reg & GPIO_enPIN1)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN1;
             GPIO[2][1]();
         }
         if(u32Reg & GPIO_enPIN2)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN2;
             GPIO[2][2]();
         }
         if(u32Reg & GPIO_enPIN3)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN3;
             GPIO[2][3]();
         }
         if(u32Reg & GPIO_enPIN4)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN4;
             GPIO[2][4]();
         }
         if(u32Reg & GPIO_enPIN5)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN5;
             GPIO[2][5]();
         }
         if(u32Reg & GPIO_enPIN6)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN6;
             GPIO[2][6]();
         }
         if(u32Reg & GPIO_enPIN7)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN7;
             GPIO[2][7]();
         }
     }
     else
     {
         u32Reg=GPIOC_AHB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN0)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN0;
             GPIO[2][0]();
         }
         if(u32Reg & GPIO_enPIN1)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN1;
             GPIO[2][1]();
         }
         if(u32Reg & GPIO_enPIN2)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN2;
             GPIO[2][2]();
         }
         if(u32Reg & GPIO_enPIN3)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN3;
             GPIO[2][3]();
         }
         if(u32Reg & GPIO_enPIN4)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN4;
             GPIO[2][4]();
         }
         if(u32Reg & GPIO_enPIN5)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN5;
             GPIO[2][5]();
         }
         if(u32Reg & GPIO_enPIN6)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN6;
             GPIO[2][6]();
         }
         if(u32Reg & GPIO_enPIN7)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN7;
             GPIO[2][7]();
         }
     }
}



