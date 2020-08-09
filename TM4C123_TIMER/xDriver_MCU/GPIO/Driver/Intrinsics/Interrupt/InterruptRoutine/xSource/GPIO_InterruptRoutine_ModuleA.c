/**
 *
 * @file GPIO_InterruptRoutine_ModuleA.c
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
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_ModuleA.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Pines.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void GPIOA__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0;
    uint32_t u32RegBUS=SYSCTL_GPIOHBCTL_R&(uint32_t)((uint32_t)1u<<0u);
    if(GPIO_enAPB ==u32RegBUS)
    {
        u32Reg=GPIOA_APB_GPIOMIS_R;
        if(u32Reg & GPIO_enPIN0)
        {
            GPIOA_APB_GPIOICR_R=GPIO_enPIN0;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORTA][(uint32_t)GPIO_enPIN_NUMBER0]();
        }
        if(u32Reg & GPIO_enPIN1)
        {
            GPIOA_APB_GPIOICR_R=GPIO_enPIN1;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORTA][(uint32_t)GPIO_enPIN_NUMBER1]();
        }
        if(u32Reg & GPIO_enPIN2)
        {
            GPIOA_APB_GPIOICR_R=GPIO_enPIN2;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORTA][(uint32_t)GPIO_enPIN_NUMBER2]();
        }
        if(u32Reg & GPIO_enPIN3)
        {
            GPIOA_APB_GPIOICR_R=GPIO_enPIN3;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORTA][(uint32_t)GPIO_enPIN_NUMBER3]();
        }
        if(u32Reg & GPIO_enPIN4)
        {
            GPIOA_APB_GPIOICR_R=GPIO_enPIN4;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORTA][(uint32_t)GPIO_enPIN_NUMBER4]();
        }
        if(u32Reg & GPIO_enPIN5)
        {
            GPIOA_APB_GPIOICR_R=GPIO_enPIN5;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORTA][(uint32_t)GPIO_enPIN_NUMBER5]();
        }
        if(u32Reg & GPIO_enPIN6)
        {
            GPIOA_APB_GPIOICR_R=GPIO_enPIN6;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORTA][(uint32_t)GPIO_enPIN_NUMBER6]();
        }
        if(u32Reg & GPIO_enPIN7)
        {
            GPIOA_APB_GPIOICR_R=GPIO_enPIN7;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORTA][(uint32_t)GPIO_enPIN_NUMBER7]();
        }
    }
    else
    {
        u32Reg=GPIOA_AHB_GPIOMIS_R;
        if(u32Reg & GPIO_enPIN0)
        {
            GPIOA_AHB_GPIOICR_R=GPIO_enPIN0;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORTA][(uint32_t)GPIO_enPIN_NUMBER0]();
        }
        if(u32Reg & GPIO_enPIN1)
        {
            GPIOA_AHB_GPIOICR_R=GPIO_enPIN1;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORTA][(uint32_t)GPIO_enPIN_NUMBER1]();
        }
        if(u32Reg & GPIO_enPIN2)
        {
            GPIOA_AHB_GPIOICR_R=GPIO_enPIN2;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORTA][(uint32_t)GPIO_enPIN_NUMBER2]();
        }
        if(u32Reg & GPIO_enPIN3)
        {
            GPIOA_AHB_GPIOICR_R=GPIO_enPIN3;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORTA][(uint32_t)GPIO_enPIN_NUMBER3]();
        }
        if(u32Reg & GPIO_enPIN4)
        {
            GPIOA_AHB_GPIOICR_R=GPIO_enPIN4;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORTA][(uint32_t)GPIO_enPIN_NUMBER4]();
        }
        if(u32Reg & GPIO_enPIN5)
        {
            GPIOA_AHB_GPIOICR_R=GPIO_enPIN5;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORTA][(uint32_t)GPIO_enPIN_NUMBER5]();
        }
        if(u32Reg & GPIO_enPIN6)
        {
            GPIOA_AHB_GPIOICR_R=GPIO_enPIN6;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORTA][(uint32_t)GPIO_enPIN_NUMBER6]();
        }
        if(u32Reg & GPIO_enPIN7)
        {
            GPIOA_AHB_GPIOICR_R=GPIO_enPIN7;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORTA][(uint32_t)GPIO_enPIN_NUMBER7]();
        }
    }
}

