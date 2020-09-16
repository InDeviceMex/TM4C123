/**
 *
 * @file DMA_InterruptRoutine_Vector_Software.c
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
 * @verbatim 21 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Vector_Software.h>
#include <xUtils/Standard/Standard.h>
//#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Source.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void DMA_SW__vIRQVectorHandler(void)
{
/*  volatile uint32_t u32Reg=0;
  u32Reg=DMA_DMAMIS_R;
  if(u32Reg & GPIO_enPIN_0)
  {
      DMA_SW_APB_GPIOICR_R=GPIO_enPIN_0;
      GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_A][(uint32_t)GPIO_enPIN_NUMBER0]();
  }
  if(u32Reg & GPIO_enPIN_1)
  {
      DMA_SW_APB_GPIOICR_R=GPIO_enPIN_1;
      GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_A][(uint32_t)GPIO_enPIN_NUMBER1]();
  }
  if(u32Reg & GPIO_enPIN_2)
  {
      DMA_SW_APB_GPIOICR_R=GPIO_enPIN_2;
      GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_A][(uint32_t)GPIO_enPIN_NUMBER2]();
  }
  if(u32Reg & GPIO_enPIN_3)
  {
      DMA_SW_APB_GPIOICR_R=GPIO_enPIN_3;
      GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_A][(uint32_t)GPIO_enPIN_NUMBER3]();
  }
  if(u32Reg & GPIO_enPIN_4)
  {
      DMA_SW_APB_GPIOICR_R=GPIO_enPIN_4;
      GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_A][(uint32_t)GPIO_enPIN_NUMBER4]();
  }
  if(u32Reg & GPIO_enPIN_5)
  {
      DMA_SW_APB_GPIOICR_R=GPIO_enPIN_5;
      GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_A][(uint32_t)GPIO_enPIN_NUMBER5]();
  }
  if(u32Reg & GPIO_enPIN_6)
  {
      DMA_SW_APB_GPIOICR_R=GPIO_enPIN_6;
      GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_A][(uint32_t)GPIO_enPIN_NUMBER6]();
  }
  if(u32Reg & GPIO_enPIN_7)
  {
      DMA_SW_APB_GPIOICR_R=GPIO_enPIN_7;
      GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_A][(uint32_t)GPIO_enPIN_NUMBER7]();
  }
  */
}

