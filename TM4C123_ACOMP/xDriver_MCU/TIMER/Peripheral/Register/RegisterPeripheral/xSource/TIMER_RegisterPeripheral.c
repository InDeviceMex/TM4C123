/**
 *
 * @file TIMER_RegisterPeripheral.c
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
 * @verbatim 15 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral/TIMER_RegisterPeripheral.h>

GPTM_TypeDef *TIMER_BLOCK[(uint32_t) TIMER_enSIZE_MAX][(uint32_t) TIMER_enMODULE_NUM_MAX] = {
    {
    GPTM0,
    GPTM1,
    GPTM2,
    GPTM3,
    GPTM4,
    GPTM5},
    {
    GPWTM0,
    GPWTM1,
    GPWTM2,
    GPWTM3,
    GPWTM4,
    GPWTM5
    },
};


uint32_t TIMER_BLOCK_BASE[(uint32_t) TIMER_enSIZE_MAX][(uint32_t) TIMER_enMODULE_NUM_MAX] = {
    {
    GPTM0_BASE,
    GPTM1_BASE,
    GPTM2_BASE,
    GPTM3_BASE,
    GPTM4_BASE,
    GPTM5_BASE,
    },
    {
    GPWTM0_BASE,
    GPWTM1_BASE,
    GPWTM2_BASE,
    GPWTM3_BASE,
    GPWTM4_BASE,
    GPWTM5_BASE,
    },
};


volatile uint32_t* TIMER_TnILR_BLOCK[(uint32_t) TIMER_enSIZE_MAX][(uint32_t) TIMER_enSUBMODULE_MAX][(uint32_t) TIMER_enMODULE_NUM_MAX] = {
 {
     {
     (volatile uint32_t*) (GPTM0_BASE + GPTM_TA_GPTMTnILR_OFFSET) , (volatile uint32_t*) (GPTM1_BASE + GPTM_TA_GPTMTnILR_OFFSET) ,
     (volatile uint32_t*) (GPTM2_BASE + GPTM_TA_GPTMTnILR_OFFSET) , (volatile uint32_t*) (GPTM3_BASE + GPTM_TA_GPTMTnILR_OFFSET) ,
     (volatile uint32_t*) (GPTM4_BASE + GPTM_TA_GPTMTnILR_OFFSET) , (volatile uint32_t*) (GPTM5_BASE + GPTM_TA_GPTMTnILR_OFFSET)
     },
     {
     (volatile uint32_t*) (GPTM0_BASE + GPTM_TB_GPTMTnILR_OFFSET) , (volatile uint32_t*) (GPTM1_BASE + GPTM_TB_GPTMTnILR_OFFSET) ,
     (volatile uint32_t*) (GPTM2_BASE + GPTM_TB_GPTMTnILR_OFFSET) , (volatile uint32_t*) (GPTM3_BASE + GPTM_TB_GPTMTnILR_OFFSET) ,
     (volatile uint32_t*) (GPTM4_BASE + GPTM_TB_GPTMTnILR_OFFSET) , (volatile uint32_t*) (GPTM5_BASE + GPTM_TB_GPTMTnILR_OFFSET)
     },
 },
 {
     {
     (volatile uint32_t*) (GPWTM0_BASE + GPWTM_TA_GPTMTnILR_OFFSET) , (volatile uint32_t*) (GPWTM1_BASE + GPWTM_TA_GPTMTnILR_OFFSET) ,
     (volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_GPTMTnILR_OFFSET) , (volatile uint32_t*) (GPWTM3_BASE + GPWTM_TA_GPTMTnILR_OFFSET) ,
     (volatile uint32_t*) (GPWTM4_BASE + GPWTM_TA_GPTMTnILR_OFFSET) , (volatile uint32_t*) (GPWTM5_BASE + GPWTM_TA_GPTMTnILR_OFFSET)
     },
     {
     (volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_GPTMTnILR_OFFSET) , (volatile uint32_t*) (GPWTM1_BASE + GPWTM_TB_GPTMTnILR_OFFSET) ,
     (volatile uint32_t*) (GPWTM2_BASE + GPWTM_TB_GPTMTnILR_OFFSET) , (volatile uint32_t*) (GPWTM3_BASE + GPWTM_TB_GPTMTnILR_OFFSET) ,
     (volatile uint32_t*) (GPWTM4_BASE + GPWTM_TB_GPTMTnILR_OFFSET) , (volatile uint32_t*) (GPWTM5_BASE + GPWTM_TB_GPTMTnILR_OFFSET)
     },
 }
};

volatile uint32_t* TIMER_TnPR_BLOCK[(uint32_t) TIMER_enSIZE_MAX][(uint32_t) TIMER_enSUBMODULE_MAX][(uint32_t) TIMER_enMODULE_NUM_MAX] = {
 {
     {
     (volatile uint32_t*) (GPTM0_BASE + GPTM_TA_GPTMTnPR_OFFSET) , (volatile uint32_t*) (GPTM1_BASE + GPTM_TA_GPTMTnPR_OFFSET) ,
     (volatile uint32_t*) (GPTM2_BASE + GPTM_TA_GPTMTnPR_OFFSET) , (volatile uint32_t*) (GPTM3_BASE + GPTM_TA_GPTMTnPR_OFFSET) ,
     (volatile uint32_t*) (GPTM4_BASE + GPTM_TA_GPTMTnPR_OFFSET) , (volatile uint32_t*) (GPTM5_BASE + GPTM_TA_GPTMTnPR_OFFSET)
     },
     {
     (volatile uint32_t*) (GPTM0_BASE + GPTM_TB_GPTMTnPR_OFFSET) , (volatile uint32_t*) (GPTM1_BASE + GPTM_TB_GPTMTnPR_OFFSET) ,
     (volatile uint32_t*) (GPTM2_BASE + GPTM_TB_GPTMTnPR_OFFSET) , (volatile uint32_t*) (GPTM3_BASE + GPTM_TB_GPTMTnPR_OFFSET) ,
     (volatile uint32_t*) (GPTM4_BASE + GPTM_TB_GPTMTnPR_OFFSET) , (volatile uint32_t*) (GPTM5_BASE + GPTM_TB_GPTMTnPR_OFFSET)
     },
 },
 {
     {
     (volatile uint32_t*) (GPWTM0_BASE + GPWTM_TA_GPTMTnPR_OFFSET) , (volatile uint32_t*) (GPWTM1_BASE + GPWTM_TA_GPTMTnPR_OFFSET) ,
     (volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_GPTMTnPR_OFFSET) , (volatile uint32_t*) (GPWTM3_BASE + GPWTM_TA_GPTMTnPR_OFFSET) ,
     (volatile uint32_t*) (GPWTM4_BASE + GPWTM_TA_GPTMTnPR_OFFSET) , (volatile uint32_t*) (GPWTM5_BASE + GPWTM_TA_GPTMTnPR_OFFSET)
     },
     {
     (volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_GPTMTnPR_OFFSET) , (volatile uint32_t*) (GPWTM1_BASE + GPWTM_TB_GPTMTnPR_OFFSET) ,
     (volatile uint32_t*) (GPWTM2_BASE + GPWTM_TB_GPTMTnPR_OFFSET) , (volatile uint32_t*) (GPWTM3_BASE + GPWTM_TB_GPTMTnPR_OFFSET) ,
     (volatile uint32_t*) (GPWTM4_BASE + GPWTM_TB_GPTMTnPR_OFFSET) , (volatile uint32_t*) (GPWTM5_BASE + GPWTM_TB_GPTMTnPR_OFFSET)
     },
 }
};

volatile uint32_t* TIMER_TnMATCHR_BLOCK[(uint32_t) TIMER_enSIZE_MAX][(uint32_t) TIMER_enSUBMODULE_MAX][(uint32_t) TIMER_enMODULE_NUM_MAX] = {
 {
     {
     (volatile uint32_t*) (GPTM0_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET) , (volatile uint32_t*) (GPTM1_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET) ,
     (volatile uint32_t*) (GPTM2_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET) , (volatile uint32_t*) (GPTM3_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET) ,
     (volatile uint32_t*) (GPTM4_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET) , (volatile uint32_t*) (GPTM5_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET)
     },
     {
     (volatile uint32_t*) (GPTM0_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET) , (volatile uint32_t*) (GPTM1_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET) ,
     (volatile uint32_t*) (GPTM2_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET) , (volatile uint32_t*) (GPTM3_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET) ,
     (volatile uint32_t*) (GPTM4_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET) , (volatile uint32_t*) (GPTM5_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET)
     },
 },
 {
     {
     (volatile uint32_t*) (GPWTM0_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET) , (volatile uint32_t*) (GPWTM1_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET) ,
     (volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET) , (volatile uint32_t*) (GPWTM3_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET) ,
     (volatile uint32_t*) (GPWTM4_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET) , (volatile uint32_t*) (GPWTM5_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET)
     },
     {
     (volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET) , (volatile uint32_t*) (GPWTM1_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET) ,
     (volatile uint32_t*) (GPWTM2_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET) , (volatile uint32_t*) (GPWTM3_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET) ,
     (volatile uint32_t*) (GPWTM4_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET) , (volatile uint32_t*) (GPWTM5_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET)
     },
 }
};

volatile uint32_t* TIMER_TnPMR_BLOCK[(uint32_t) TIMER_enSIZE_MAX][(uint32_t) TIMER_enSUBMODULE_MAX][(uint32_t) TIMER_enMODULE_NUM_MAX] = {
 {
     {
     (volatile uint32_t*) (GPTM0_BASE + GPTM_TA_GPTMTnPMR_OFFSET) , (volatile uint32_t*) (GPTM1_BASE + GPTM_TA_GPTMTnPMR_OFFSET) ,
     (volatile uint32_t*) (GPTM2_BASE + GPTM_TA_GPTMTnPMR_OFFSET) , (volatile uint32_t*) (GPTM3_BASE + GPTM_TA_GPTMTnPMR_OFFSET) ,
     (volatile uint32_t*) (GPTM4_BASE + GPTM_TA_GPTMTnPMR_OFFSET) , (volatile uint32_t*) (GPTM5_BASE + GPTM_TA_GPTMTnPMR_OFFSET)
     },
     {
     (volatile uint32_t*) (GPTM0_BASE + GPTM_TB_GPTMTnPMR_OFFSET) , (volatile uint32_t*) (GPTM1_BASE + GPTM_TB_GPTMTnPMR_OFFSET) ,
     (volatile uint32_t*) (GPTM2_BASE + GPTM_TB_GPTMTnPMR_OFFSET) , (volatile uint32_t*) (GPTM3_BASE + GPTM_TB_GPTMTnPMR_OFFSET) ,
     (volatile uint32_t*) (GPTM4_BASE + GPTM_TB_GPTMTnPMR_OFFSET) , (volatile uint32_t*) (GPTM5_BASE + GPTM_TB_GPTMTnPMR_OFFSET)
     },
 },
 {
     {
     (volatile uint32_t*) (GPWTM0_BASE + GPWTM_TA_GPTMTnPMR_OFFSET) , (volatile uint32_t*) (GPWTM1_BASE + GPWTM_TA_GPTMTnPMR_OFFSET) ,
     (volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_GPTMTnPMR_OFFSET) , (volatile uint32_t*) (GPWTM3_BASE + GPWTM_TA_GPTMTnPMR_OFFSET) ,
     (volatile uint32_t*) (GPWTM4_BASE + GPWTM_TA_GPTMTnPMR_OFFSET) , (volatile uint32_t*) (GPWTM5_BASE + GPWTM_TA_GPTMTnPMR_OFFSET)
     },
     {
     (volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_GPTMTnPMR_OFFSET) , (volatile uint32_t*) (GPWTM1_BASE + GPWTM_TB_GPTMTnPMR_OFFSET) ,
     (volatile uint32_t*) (GPWTM2_BASE + GPWTM_TB_GPTMTnPMR_OFFSET) , (volatile uint32_t*) (GPWTM3_BASE + GPWTM_TB_GPTMTnPMR_OFFSET) ,
     (volatile uint32_t*) (GPWTM4_BASE + GPWTM_TB_GPTMTnPMR_OFFSET) , (volatile uint32_t*) (GPWTM5_BASE + GPWTM_TB_GPTMTnPMR_OFFSET)
     },
 }
};

volatile uint32_t* TIMER_TnR_BLOCK[(uint32_t) TIMER_enSIZE_MAX][(uint32_t) TIMER_enSUBMODULE_MAX][(uint32_t) TIMER_enMODULE_NUM_MAX] = {
 {
     {
     (volatile uint32_t*) (GPTM0_BASE + GPTM_TA_GPTMTnR_OFFSET) , (volatile uint32_t*) (GPTM1_BASE + GPTM_TA_GPTMTnR_OFFSET) ,
     (volatile uint32_t*) (GPTM2_BASE + GPTM_TA_GPTMTnR_OFFSET) , (volatile uint32_t*) (GPTM3_BASE + GPTM_TA_GPTMTnR_OFFSET) ,
     (volatile uint32_t*) (GPTM4_BASE + GPTM_TA_GPTMTnR_OFFSET) , (volatile uint32_t*) (GPTM5_BASE + GPTM_TA_GPTMTnR_OFFSET)
     },
     {
     (volatile uint32_t*) (GPTM0_BASE + GPTM_TB_GPTMTnR_OFFSET) , (volatile uint32_t*) (GPTM1_BASE + GPTM_TB_GPTMTnR_OFFSET) ,
     (volatile uint32_t*) (GPTM2_BASE + GPTM_TB_GPTMTnR_OFFSET) , (volatile uint32_t*) (GPTM3_BASE + GPTM_TB_GPTMTnR_OFFSET) ,
     (volatile uint32_t*) (GPTM4_BASE + GPTM_TB_GPTMTnR_OFFSET) , (volatile uint32_t*) (GPTM5_BASE + GPTM_TB_GPTMTnR_OFFSET)
     },
 },
 {
     {
     (volatile uint32_t*) (GPWTM0_BASE + GPWTM_TA_GPTMTnR_OFFSET) , (volatile uint32_t*) (GPWTM1_BASE + GPWTM_TA_GPTMTnR_OFFSET) ,
     (volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_GPTMTnR_OFFSET) , (volatile uint32_t*) (GPWTM3_BASE + GPWTM_TA_GPTMTnR_OFFSET) ,
     (volatile uint32_t*) (GPWTM4_BASE + GPWTM_TA_GPTMTnR_OFFSET) , (volatile uint32_t*) (GPWTM5_BASE + GPWTM_TA_GPTMTnR_OFFSET)
     },
     {
     (volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_GPTMTnR_OFFSET) , (volatile uint32_t*) (GPWTM1_BASE + GPWTM_TB_GPTMTnR_OFFSET) ,
     (volatile uint32_t*) (GPWTM2_BASE + GPWTM_TB_GPTMTnR_OFFSET) , (volatile uint32_t*) (GPWTM3_BASE + GPWTM_TB_GPTMTnR_OFFSET) ,
     (volatile uint32_t*) (GPWTM4_BASE + GPWTM_TB_GPTMTnR_OFFSET) , (volatile uint32_t*) (GPWTM5_BASE + GPWTM_TB_GPTMTnR_OFFSET)
     },
 }
};

volatile uint32_t* TIMER_TnPS_BLOCK[(uint32_t) TIMER_enSIZE_MAX][(uint32_t) TIMER_enSUBMODULE_MAX][(uint32_t) TIMER_enMODULE_NUM_MAX] = {
 {
     {
     (volatile uint32_t*) (GPTM0_BASE + GPTM_TA_GPTMTnPS_OFFSET) , (volatile uint32_t*) (GPTM1_BASE + GPTM_TA_GPTMTnPS_OFFSET) ,
     (volatile uint32_t*) (GPTM2_BASE + GPTM_TA_GPTMTnPS_OFFSET) , (volatile uint32_t*) (GPTM3_BASE + GPTM_TA_GPTMTnPS_OFFSET) ,
     (volatile uint32_t*) (GPTM4_BASE + GPTM_TA_GPTMTnPS_OFFSET) , (volatile uint32_t*) (GPTM5_BASE + GPTM_TA_GPTMTnPS_OFFSET)
     },
     {
     (volatile uint32_t*) (GPTM0_BASE + GPTM_TB_GPTMTnPS_OFFSET) , (volatile uint32_t*) (GPTM1_BASE + GPTM_TB_GPTMTnPS_OFFSET) ,
     (volatile uint32_t*) (GPTM2_BASE + GPTM_TB_GPTMTnPS_OFFSET) , (volatile uint32_t*) (GPTM3_BASE + GPTM_TB_GPTMTnPS_OFFSET) ,
     (volatile uint32_t*) (GPTM4_BASE + GPTM_TB_GPTMTnPS_OFFSET) , (volatile uint32_t*) (GPTM5_BASE + GPTM_TB_GPTMTnPS_OFFSET)
     },
 },
 {
     {
     (volatile uint32_t*) (GPWTM0_BASE + GPWTM_TA_GPTMTnPS_OFFSET) , (volatile uint32_t*) (GPWTM1_BASE + GPWTM_TA_GPTMTnPS_OFFSET) ,
     (volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_GPTMTnPS_OFFSET) , (volatile uint32_t*) (GPWTM3_BASE + GPWTM_TA_GPTMTnPS_OFFSET) ,
     (volatile uint32_t*) (GPWTM4_BASE + GPWTM_TA_GPTMTnPS_OFFSET) , (volatile uint32_t*) (GPWTM5_BASE + GPWTM_TA_GPTMTnPS_OFFSET)
     },
     {
     (volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_GPTMTnPS_OFFSET) , (volatile uint32_t*) (GPWTM1_BASE + GPWTM_TB_GPTMTnPS_OFFSET) ,
     (volatile uint32_t*) (GPWTM2_BASE + GPWTM_TB_GPTMTnPS_OFFSET) , (volatile uint32_t*) (GPWTM3_BASE + GPWTM_TB_GPTMTnPS_OFFSET) ,
     (volatile uint32_t*) (GPWTM4_BASE + GPWTM_TB_GPTMTnPS_OFFSET) , (volatile uint32_t*) (GPWTM5_BASE + GPWTM_TB_GPTMTnPS_OFFSET)
     },
 }
};
volatile uint32_t* TIMER_TnV_BLOCK[(uint32_t) TIMER_enSIZE_MAX][(uint32_t) TIMER_enSUBMODULE_MAX][(uint32_t) TIMER_enMODULE_NUM_MAX] = {
 {
     {
     (volatile uint32_t*) (GPTM0_BASE + GPTM_TA_GPTMTnV_OFFSET) , (volatile uint32_t*) (GPTM1_BASE + GPTM_TA_GPTMTnV_OFFSET) ,
     (volatile uint32_t*) (GPTM2_BASE + GPTM_TA_GPTMTnV_OFFSET) , (volatile uint32_t*) (GPTM3_BASE + GPTM_TA_GPTMTnV_OFFSET) ,
     (volatile uint32_t*) (GPTM4_BASE + GPTM_TA_GPTMTnV_OFFSET) , (volatile uint32_t*) (GPTM5_BASE + GPTM_TA_GPTMTnV_OFFSET)
     },
     {
     (volatile uint32_t*) (GPTM0_BASE + GPTM_TB_GPTMTnV_OFFSET) , (volatile uint32_t*) (GPTM1_BASE + GPTM_TB_GPTMTnV_OFFSET) ,
     (volatile uint32_t*) (GPTM2_BASE + GPTM_TB_GPTMTnV_OFFSET) , (volatile uint32_t*) (GPTM3_BASE + GPTM_TB_GPTMTnV_OFFSET) ,
     (volatile uint32_t*) (GPTM4_BASE + GPTM_TB_GPTMTnV_OFFSET) , (volatile uint32_t*) (GPTM5_BASE + GPTM_TB_GPTMTnV_OFFSET)
     },
 },
 {
     {
     (volatile uint32_t*) (GPWTM0_BASE + GPWTM_TA_GPTMTnV_OFFSET) , (volatile uint32_t*) (GPWTM1_BASE + GPWTM_TA_GPTMTnV_OFFSET) ,
     (volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_GPTMTnV_OFFSET) , (volatile uint32_t*) (GPWTM3_BASE + GPWTM_TA_GPTMTnV_OFFSET) ,
     (volatile uint32_t*) (GPWTM4_BASE + GPWTM_TA_GPTMTnV_OFFSET) , (volatile uint32_t*) (GPWTM5_BASE + GPWTM_TA_GPTMTnV_OFFSET)
     },
     {
     (volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_GPTMTnV_OFFSET) , (volatile uint32_t*) (GPWTM1_BASE + GPWTM_TB_GPTMTnV_OFFSET) ,
     (volatile uint32_t*) (GPWTM2_BASE + GPWTM_TB_GPTMTnV_OFFSET) , (volatile uint32_t*) (GPWTM3_BASE + GPWTM_TB_GPTMTnV_OFFSET) ,
     (volatile uint32_t*) (GPWTM4_BASE + GPWTM_TB_GPTMTnV_OFFSET) , (volatile uint32_t*) (GPWTM5_BASE + GPWTM_TB_GPTMTnV_OFFSET)
     },
 }
};

volatile uint32_t* TIMER_TnPV_BLOCK[(uint32_t) TIMER_enSIZE_MAX][(uint32_t) TIMER_enSUBMODULE_MAX][(uint32_t) TIMER_enMODULE_NUM_MAX] = {
 {
     {
     (volatile uint32_t*) (GPTM0_BASE + GPTM_TA_GPTMTnPV_OFFSET) , (volatile uint32_t*) (GPTM1_BASE + GPTM_TA_GPTMTnPV_OFFSET) ,
     (volatile uint32_t*) (GPTM2_BASE + GPTM_TA_GPTMTnPV_OFFSET) , (volatile uint32_t*) (GPTM3_BASE + GPTM_TA_GPTMTnPV_OFFSET) ,
     (volatile uint32_t*) (GPTM4_BASE + GPTM_TA_GPTMTnPV_OFFSET) , (volatile uint32_t*) (GPTM5_BASE + GPTM_TA_GPTMTnPV_OFFSET)
     },
     {
     (volatile uint32_t*) (GPTM0_BASE + GPTM_TB_GPTMTnPV_OFFSET) , (volatile uint32_t*) (GPTM1_BASE + GPTM_TB_GPTMTnPV_OFFSET) ,
     (volatile uint32_t*) (GPTM2_BASE + GPTM_TB_GPTMTnPV_OFFSET) , (volatile uint32_t*) (GPTM3_BASE + GPTM_TB_GPTMTnPV_OFFSET) ,
     (volatile uint32_t*) (GPTM4_BASE + GPTM_TB_GPTMTnPV_OFFSET) , (volatile uint32_t*) (GPTM5_BASE + GPTM_TB_GPTMTnPV_OFFSET)
     },
 },
 {
     {
     (volatile uint32_t*) (GPWTM0_BASE + GPWTM_TA_GPTMTnPV_OFFSET) , (volatile uint32_t*) (GPWTM1_BASE + GPWTM_TA_GPTMTnPV_OFFSET) ,
     (volatile uint32_t*) (GPWTM2_BASE + GPWTM_TA_GPTMTnPV_OFFSET) , (volatile uint32_t*) (GPWTM3_BASE + GPWTM_TA_GPTMTnPV_OFFSET) ,
     (volatile uint32_t*) (GPWTM4_BASE + GPWTM_TA_GPTMTnPV_OFFSET) , (volatile uint32_t*) (GPWTM5_BASE + GPWTM_TA_GPTMTnPV_OFFSET)
     },
     {
     (volatile uint32_t*) (GPWTM0_BASE + GPWTM_TB_GPTMTnPV_OFFSET) , (volatile uint32_t*) (GPWTM1_BASE + GPWTM_TB_GPTMTnPV_OFFSET) ,
     (volatile uint32_t*) (GPWTM2_BASE + GPWTM_TB_GPTMTnPV_OFFSET) , (volatile uint32_t*) (GPWTM3_BASE + GPWTM_TB_GPTMTnPV_OFFSET) ,
     (volatile uint32_t*) (GPWTM4_BASE + GPWTM_TB_GPTMTnPV_OFFSET) , (volatile uint32_t*) (GPWTM5_BASE + GPWTM_TB_GPTMTnPV_OFFSET)
     },
 }
};

volatile uint32_t* TIMER_RTCPD_BLOCK[(uint32_t) TIMER_enMODULE_NUM_MAX] = {
     (volatile uint32_t*) (GPWTM0_BASE + GPWTM_TW_GPTMRTCPD_OFFSET) , (volatile uint32_t*) (GPWTM1_BASE + GPWTM_TW_GPTMRTCPD_OFFSET) ,
     (volatile uint32_t*) (GPWTM2_BASE + GPWTM_TW_GPTMRTCPD_OFFSET) , (volatile uint32_t*) (GPWTM3_BASE + GPWTM_TW_GPTMRTCPD_OFFSET) ,
     (volatile uint32_t*) (GPWTM4_BASE + GPWTM_TW_GPTMRTCPD_OFFSET) , (volatile uint32_t*) (GPWTM5_BASE + GPWTM_TW_GPTMRTCPD_OFFSET),
 };


