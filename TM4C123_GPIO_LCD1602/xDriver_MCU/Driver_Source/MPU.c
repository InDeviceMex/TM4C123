/*
 * MPU.c
 *
 *  Created on: 12 ago. 2018
 *      Author: InDev
 */

#include <xDriver_MCU/Driver_Header/MPU.h>

#define MPU_FLASH_CODE_ADDR (0x00000000)
#define MPU_FLASH_CODE_SIZE (16-1)

void MPU__vInit(void)
{
    uint32_t u32RegRASR=0;
    __asm(" DSB");
    __asm(" ISB");


	MPU_CTRL_R&=~MPU_CTRL_R_ENABLE_MASK;

    //all mode only Read Only 256KB
    //could be not executed
    //no shareable, no cacheable, no bufeable
    //normal memory
    //256KB size
	//enable region
    MPU_RNR_R=0;
	MPU_RBAR_R=0x00000000|MPU_RBAR_R_VALID_MASK|0; //FLASH_CONSTANT (size 0x00040000)
	u32RegRASR =MPU_RASR_R_XN_EN|MPU_RASR_R_SRD0_DIS|MPU_RASR_R_SRD1_DIS|
	        MPU_RASR_R_AP_RWRW|MPU_RASR_R_S_DIS|MPU_RASR_R_C_DIS|MPU_RASR_R_B_DIS|
	        MPU_RASR_R_TEX_WB_WRA|MPU_RASR_R_ENABLE_EN|((18-1)<<1);
	MPU_RASR_R = u32RegRASR;

    //all mode only Read  64KB
    //could be executed
    //no shareable, no cacheable, no bufeable
    //normal memory
    //64Kb size
    //enable region
    MPU_RNR_R=1;
    MPU_RBAR_R=0x00000000|MPU_RBAR_R_VALID_MASK|1; //FLASH_CODE (size 0x00010000)
    u32RegRASR =MPU_RASR_R_XN_DIS|MPU_RASR_R_AP_RORO|MPU_RASR_R_S_DIS|
            MPU_RASR_R_C_DIS|MPU_RASR_R_B_DIS|MPU_RASR_R_TEX_WB_WRA|MPU_RASR_R_ENABLE_EN|
            (MPU_FLASH_CODE_SIZE<<1);
    MPU_RASR_R = u32RegRASR;

    //all mode read and write
    //could be not executed
    //no shareable, no cacheable, no bufeable
    //normal memory
    //32Kb size
    //enable region
    MPU_RNR_R=2;
    MPU_RBAR_R=0x20000000|MPU_RBAR_R_VALID_MASK|2; //SRAM_VARIABLE (size 0x00007000)
    u32RegRASR =MPU_RASR_R_XN_EN|MPU_RASR_R_AP_RWRW|MPU_RASR_R_S_DIS|MPU_RASR_R_C_DIS|
            MPU_RASR_R_B_DIS|MPU_RASR_R_TEX_WB_WRA|MPU_RASR_R_ENABLE_EN|((15-1)<<1);
    MPU_RASR_R = u32RegRASR;



    //all mode read and write
    //could be executed
    //no shareable, no cacheable, no bufeable
    //normal memory
    //5Kb size
    //enable region
    MPU_RNR_R=3;
    MPU_RBAR_R=0x20000000|MPU_RBAR_R_VALID_MASK|3; //SRAM_CODE (size 0x00001400)
    u32RegRASR =MPU_RASR_R_XN_DIS|MPU_RASR_R_AP_RORO|MPU_RASR_R_S_DIS|MPU_RASR_R_C_DIS|
            MPU_RASR_R_SRD0_DIS|MPU_RASR_R_SRD6_DIS|MPU_RASR_R_SRD7_DIS|
            MPU_RASR_R_B_DIS|MPU_RASR_R_TEX_WB_WRA|MPU_RASR_R_ENABLE_EN|((13-1)<<1);
    MPU_RASR_R = u32RegRASR;



	MPU_CTRL->PRIVDEFENA=1;
	MPU_CTRL->ENABLE=1;

    __asm(" DSB");
    __asm(" ISB");

}

