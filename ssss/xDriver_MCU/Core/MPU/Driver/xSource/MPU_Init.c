/**
 *
 * @file MPU_Init.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/MPU/Driver/xHeader/MPU_Init.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/MPU/Peripheral/MPU_Peripheral.h>

#define MPU_FLASH_CODE_ADDR    (0x00000000UL)
#define MPU_FLASH_CODE_SIZE    (18UL-1UL)

void MPU_vBlocking(void);

void MPU_vBlocking(void)
{
  {
    __asm(" DSB");
    __asm(" ISB");
  }
}

void MPU__vInit(void)
{
    uint32_t u32AddressBit = 0UL;
    MPU_vBlocking();

    MCU__vWriteRegister(MPU_BASE, MPU_CTRL_OFFSET, 0UL, MPU_CTRL_ENABLE_MASK, MPU_CTRL_R_ENABLE_BIT);

    /*all mode only Read  64KB*/
    /*could be executed*/
    /*no shareable, no cacheable, no bufeable*/
    /*normal memory*/
    /*64Kb size*/
    /*enable region*/
    MCU__vWriteRegister(MPU_BASE, MPU_RNR_OFFSET, 0UL, MPU_RNR_REGION_MASK, MPU_RNR_R_REGION_BIT);
    MCU__vWriteRegister(MPU_BASE, MPU_RBAR_OFFSET,
    0x00000000UL | MPU_RBAR_R_VALID_EN | MPU_RBAR_R_REGION_REG0,
    MPU_RBAR_R_ADDR_MASK | MPU_RBAR_R_VALID_MASK | MPU_RBAR_R_REGION_MASK, 0UL);/*FLASH_CODE (size 0x00040000UL)*/

    u32AddressBit = MPU_FLASH_CODE_SIZE;
    u32AddressBit <<= 1U;
    MCU__vWriteRegister(MPU_BASE, MPU_RASR_OFFSET,
    MPU_RASR_R_XN_DIS | MPU_RASR_R_AP_RORO | MPU_RASR_R_S_DIS | MPU_RASR_R_C_DIS | MPU_RASR_R_B_DIS | MPU_RASR_R_TEX_WB_WRA | MPU_RASR_R_ENABLE_EN | u32AddressBit | MPU_RASR_R_SRD_EN,
    MPU_RASR_R_XN_MASK | MPU_RASR_R_AP_MASK | MPU_RASR_R_S_MASK | MPU_RASR_R_C_MASK | MPU_RASR_R_B_MASK | MPU_RASR_R_TEX_MASK | MPU_RASR_R_ENABLE_MASK | MPU_RASR_R_SIZE_MASK | MPU_RASR_R_SRD_MASK, 0UL);


    /*all mode only Read Only 256KB*/
    /*could be not executed*/
    /*no shareable, no cacheable, no bufeable*/
    /*normal memory*/
    /*256KB size*/
    /*enable region*/
    /*FLASH_CONSTANT (size 0x00010000U)*/
    MCU__vWriteRegister(MPU_BASE, MPU_RNR_OFFSET, 1UL, MPU_RNR_REGION_MASK, MPU_RNR_R_REGION_BIT);
    MCU__vWriteRegister(MPU_BASE, MPU_RBAR_OFFSET,
    0x00030000UL | MPU_RBAR_R_VALID_EN | MPU_RBAR_R_REGION_REG1,
    MPU_RBAR_R_ADDR_MASK | MPU_RBAR_R_VALID_MASK | MPU_RBAR_R_REGION_MASK, 0UL);/*FLASH_CODE (size 0x00030000UL)*/

    u32AddressBit = 16UL - 1UL;
    u32AddressBit <<= 1U;
    MCU__vWriteRegister(MPU_BASE, MPU_RASR_OFFSET,
    MPU_RASR_R_XN_EN | MPU_RASR_R_AP_RWRW | MPU_RASR_R_S_DIS | MPU_RASR_R_C_DIS | MPU_RASR_R_B_DIS | MPU_RASR_R_TEX_WB_WRA | MPU_RASR_R_ENABLE_EN | u32AddressBit | MPU_RASR_R_SRD_EN,
    MPU_RASR_R_XN_MASK | MPU_RASR_R_AP_MASK | MPU_RASR_R_S_MASK | MPU_RASR_R_C_MASK | MPU_RASR_R_B_MASK | MPU_RASR_R_TEX_MASK | MPU_RASR_R_ENABLE_MASK | MPU_RASR_R_SIZE_MASK | MPU_RASR_R_SRD_MASK, 0UL);

    /*all mode read and write*/
    /*could be not executed*/
    /*no shareable, no cacheable, no bufeable*/
    /*normal memory*/
    /*32Kb size*/
    /*enable region*/
    MCU__vWriteRegister(MPU_BASE, MPU_RNR_OFFSET, 2UL, MPU_RNR_REGION_MASK, MPU_RNR_R_REGION_BIT);
    MCU__vWriteRegister(MPU_BASE, MPU_RBAR_OFFSET,
    0x20000000UL | MPU_RBAR_R_VALID_EN | MPU_RBAR_R_REGION_REG2,
    MPU_RBAR_R_ADDR_MASK | MPU_RBAR_R_VALID_MASK | MPU_RBAR_R_REGION_MASK, 0UL);/*SRAM_VARIABLE (size 0x00007000UL)*/

    u32AddressBit = 15UL - 1UL;
    u32AddressBit <<= 1U;
    MCU__vWriteRegister(MPU_BASE, MPU_RASR_OFFSET,
    MPU_RASR_R_XN_DIS | MPU_RASR_R_AP_RWRW | MPU_RASR_R_S_DIS | MPU_RASR_R_C_DIS | MPU_RASR_R_B_DIS | MPU_RASR_R_TEX_WB_WRA | MPU_RASR_R_ENABLE_EN | u32AddressBit | MPU_RASR_R_SRD_EN,
    MPU_RASR_R_XN_MASK | MPU_RASR_R_AP_MASK | MPU_RASR_R_S_MASK | MPU_RASR_R_C_MASK | MPU_RASR_R_B_MASK | MPU_RASR_R_TEX_MASK | MPU_RASR_R_ENABLE_MASK | MPU_RASR_R_SIZE_MASK | MPU_RASR_R_SRD_MASK, 0UL);

    /*all mode read and write*/
    /*could be executed*/
    /*no shareable, no cacheable, no bufeable*/
    /*normal memory*/
    /*5Kb size*/
    /*enable region*/
    MCU__vWriteRegister(MPU_BASE, MPU_RNR_OFFSET, 3UL, MPU_RNR_REGION_MASK, MPU_RNR_R_REGION_BIT);
    MCU__vWriteRegister(MPU_BASE, MPU_RBAR_OFFSET,
    0x20000000UL | MPU_RBAR_R_VALID_EN | MPU_RBAR_R_REGION_REG3,
    MPU_RBAR_R_ADDR_MASK | MPU_RBAR_R_VALID_MASK | MPU_RBAR_R_REGION_MASK, 0UL);/*SRAM_CODE (size 0x00001400UL)*/

    u32AddressBit = 13UL - 1UL;
    u32AddressBit <<= 1U;
    MCU__vWriteRegister(MPU_BASE, MPU_RASR_OFFSET,
    MPU_RASR_R_XN_DIS | MPU_RASR_R_AP_RWRW | MPU_RASR_R_S_DIS | MPU_RASR_R_C_DIS | MPU_RASR_R_B_DIS | MPU_RASR_R_TEX_WB_WRA | MPU_RASR_R_ENABLE_EN | u32AddressBit | MPU_RASR_R_SRD0_DIS | MPU_RASR_R_SRD6_DIS | MPU_RASR_R_SRD7_DIS,
    MPU_RASR_R_XN_MASK | MPU_RASR_R_AP_MASK | MPU_RASR_R_S_MASK | MPU_RASR_R_C_MASK | MPU_RASR_R_B_MASK | MPU_RASR_R_TEX_MASK | MPU_RASR_R_ENABLE_MASK | MPU_RASR_R_SIZE_MASK | MPU_RASR_R_SRD_MASK, 0UL);

    MCU__vWriteRegister(MPU_BASE, MPU_CTRL_OFFSET, MPU_CTRL_R_ENABLE_EN | MPU_CTRL_R_PRIVDEFENA_EN , MPU_CTRL_ENABLE_MASK | MPU_CTRL_R_PRIVDEFENA_MASK, 0UL);

    MPU_vBlocking();
}
