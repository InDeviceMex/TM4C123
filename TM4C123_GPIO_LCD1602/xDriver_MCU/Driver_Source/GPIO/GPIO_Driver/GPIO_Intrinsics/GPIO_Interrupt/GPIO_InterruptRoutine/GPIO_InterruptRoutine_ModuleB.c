/**
 *
 * @file GPIO_InterruptRoutine_ModuleB.c
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

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Intrinsics/GPIO_Interrupt/GPIO_InterruptRoutine/GPIO_InterruptRoutine_ModuleB.h>


void GPIOB__vISR(void)
{
    volatile uint32_t u32Reg=0;
    uint32_t u32RegBUS=SYSCTL_GPIOHBCTL_R&(uint32_t)((uint32_t)1u<<1u);
    if(GPIO_enAPB ==u32RegBUS)
    {
        u32Reg=GPIOB_APB_GPIOMIS_R;
        if(u32Reg & GPIO_enPIN0)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN0;
            GPIO[1][0]();
        }
        if(u32Reg & GPIO_enPIN1)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN1;
            GPIO[1][1]();
        }
        if(u32Reg & GPIO_enPIN2)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN2;
            GPIO[1][2]();
        }
        if(u32Reg & GPIO_enPIN3)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN3;
            GPIO[1][3]();
        }
        if(u32Reg & GPIO_enPIN4)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN4;
            GPIO[1][4]();
        }
        if(u32Reg & GPIO_enPIN5)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN5;
            GPIO[1][5]();
        }
        if(u32Reg & GPIO_enPIN6)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN6;
            GPIO[1][6]();
        }
        if(u32Reg & GPIO_enPIN7)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN7;
            GPIO[1][7]();
        }
    }
    else
    {
        u32Reg=GPIOB_AHB_GPIOMIS_R;
        if(u32Reg & GPIO_enPIN0)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN0;
            GPIO[1][0]();
        }
        if(u32Reg & GPIO_enPIN1)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN1;
            GPIO[1][1]();
        }
        if(u32Reg & GPIO_enPIN2)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN2;
            GPIO[1][2]();
        }
        if(u32Reg & GPIO_enPIN3)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN3;
            GPIO[1][3]();
        }
        if(u32Reg & GPIO_enPIN4)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN4;
            GPIO[1][4]();
        }
        if(u32Reg & GPIO_enPIN5)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN5;
            GPIO[1][5]();
        }
        if(u32Reg & GPIO_enPIN6)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN6;
            GPIO[1][6]();
        }
        if(u32Reg & GPIO_enPIN7)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN7;
            GPIO[1][7]();
        }
    }
}

