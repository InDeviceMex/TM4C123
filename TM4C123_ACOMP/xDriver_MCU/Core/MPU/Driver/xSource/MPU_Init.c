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
#include <xDriver_MCU/Core/MPU/Peripheral/MPU_Peripheral.h>
#include <xUtils/Standard/Standard.h>

#define MPU_FLASH_CODE_ADDR (0x00000000U)
#define MPU_FLASH_CODE_SIZE (18u-1U)

inline void MPU_vBlocking(void);

inline void MPU_vBlocking(void)
{
  {
    __asm(" DSB");
    __asm(" ISB");
  }
}


void MPU__vInit(void)
{
    uint32_t u32RegRASR=0;
    MPU_vBlocking();


    MPU_CTRL_R&=~MPU_CTRL_R_ENABLE_MASK;


    /*all mode only Read  64KB*/
    /*could be executed*/
    /*no shareable, no cacheable, no bufeable*/
    /*normal memory*/
    /*64Kb size*/
    /*enable region*/
    MPU_RNR_R=0U;
    MPU_RBAR_R=0x00000000u|MPU_RBAR_R_VALID_MASK|0U;/*FLASH_CODE (size 0x00040000U)*/
    u32RegRASR =MPU_RASR_R_XN_DIS|
            MPU_RASR_R_AP_RORO|MPU_RASR_R_S_DIS|MPU_RASR_R_C_DIS|MPU_RASR_R_B_DIS|
            MPU_RASR_R_TEX_WB_WRA|MPU_RASR_R_ENABLE_EN|
            ((uint32_t)MPU_FLASH_CODE_SIZE<<1U);
    MPU_RASR_R = u32RegRASR;


    /*all mode only Read Only 256KB*/
    /*could be not executed*/
    /*no shareable, no cacheable, no bufeable*/
    /*normal memory*/
    /*256KB size*/
    /*enable region*/
    /*FLASH_CONSTANT (size 0x00010000U)*/
    MPU_RNR_R=1U;
    MPU_RBAR_R=0x00030000u|MPU_RBAR_R_VALID_MASK|1U;
    u32RegRASR =MPU_RASR_R_XN_EN|
            MPU_RASR_R_AP_RWRW|MPU_RASR_R_S_DIS|MPU_RASR_R_C_DIS|MPU_RASR_R_B_DIS|
            MPU_RASR_R_TEX_WB_WRA|MPU_RASR_R_ENABLE_EN|
            ((uint32_t)(16u-1U)<<1U);
    MPU_RASR_R = u32RegRASR;

    /*all mode read and write*/
    /*could be not executed*/
    /*no shareable, no cacheable, no bufeable*/
    /*normal memory*/
    /*32Kb size*/
    /*enable region*/
    MPU_RNR_R=2U;
    MPU_RBAR_R=0x20000000u|MPU_RBAR_R_VALID_MASK|2U;/*SRAM_VARIABLE (size 0x00007000U)*/
    u32RegRASR =MPU_RASR_R_XN_EN|MPU_RASR_R_AP_RWRW|MPU_RASR_R_S_DIS|MPU_RASR_R_C_DIS|
            MPU_RASR_R_B_DIS|MPU_RASR_R_TEX_WB_WRA|MPU_RASR_R_ENABLE_EN|((uint32_t)(15u-1U)<<1U);
    MPU_RASR_R = u32RegRASR;



    /*all mode read and write*/
    /*could be executed*/
    /*no shareable, no cacheable, no bufeable*/
    /*normal memory*/
    /*5Kb size*/
    /*enable region*/
    MPU_RNR_R=3U;
    MPU_RBAR_R=0x20000000u|MPU_RBAR_R_VALID_MASK|3U;/*SRAM_CODE (size 0x00001400U)*/
    u32RegRASR =MPU_RASR_R_XN_DIS|MPU_RASR_R_AP_RORO|MPU_RASR_R_S_DIS|MPU_RASR_R_C_DIS|
            MPU_RASR_R_SRD0_DIS|MPU_RASR_R_SRD6_DIS|MPU_RASR_R_SRD7_DIS|
            MPU_RASR_R_B_DIS|MPU_RASR_R_TEX_WB_WRA|MPU_RASR_R_ENABLE_EN|((uint32_t)(13u-1U)<<1U);
    MPU_RASR_R = u32RegRASR;



    MPU_CTRL->PRIVDEFENA=1U;
    MPU_CTRL->ENABLE=1U;

    MPU_vBlocking();

}



