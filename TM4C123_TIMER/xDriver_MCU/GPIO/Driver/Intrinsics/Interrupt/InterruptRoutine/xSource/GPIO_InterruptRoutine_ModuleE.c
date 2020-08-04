/**
 *
 * @file GPIO_InterruptRoutine_ModuleE.c
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
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_ModuleE.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Pines.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void GPIOE__vISRHandler(void)
{
    volatile uint32_t u32Reg=0;
     uint32_t u32RegBUS=SYSCTL_GPIOHBCTL_R&(uint32_t)((uint32_t)1u<<2u);
     if(GPIO_enAPB ==u32RegBUS)
     {
         u32Reg=GPIOE_APB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN0)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN0;
             GPIO[4][0]();
         }
         if(u32Reg & GPIO_enPIN1)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN1;
             GPIO[4][1]();
         }
         if(u32Reg & GPIO_enPIN2)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN2;
             GPIO[4][2]();
         }
         if(u32Reg & GPIO_enPIN3)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN3;
             GPIO[4][3]();
         }
         if(u32Reg & GPIO_enPIN4)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN4;
             GPIO[4][4]();
         }
         if(u32Reg & GPIO_enPIN5)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN5;
             GPIO[4][5]();
         }
         if(u32Reg & GPIO_enPIN6)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN6;
             GPIO[4][6]();
         }
         if(u32Reg & GPIO_enPIN7)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN7;
             GPIO[4][7]();
         }
     }
     else
     {
         u32Reg=GPIOE_AHB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN0)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN0;
             GPIO[4][0]();
         }
         if(u32Reg & GPIO_enPIN1)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN1;
             GPIO[4][1]();
         }
         if(u32Reg & GPIO_enPIN2)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN2;
             GPIO[4][2]();
         }
         if(u32Reg & GPIO_enPIN3)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN3;
             GPIO[4][3]();
         }
         if(u32Reg & GPIO_enPIN4)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN4;
             GPIO[4][4]();
         }
         if(u32Reg & GPIO_enPIN5)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN5;
             GPIO[4][5]();
         }
         if(u32Reg & GPIO_enPIN6)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN6;
             GPIO[4][6]();
         }
         if(u32Reg & GPIO_enPIN7)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN7;
             GPIO[4][7]();
         }
     }
}


