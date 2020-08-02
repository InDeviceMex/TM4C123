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
#include <xDriver_MCU/TIMER/Header/Peripheral/Register/RegisterPeripheral/TIMER_RegisterPeripheral.h>

GPTM_TypeDef *TIMER_BLOCK[2][6]={
                                     {GPTM0,GPTM1,GPTM2,GPTM3,GPTM4,GPTM5},
                                     {GPWTM0,GPWTM1,GPWTM2,GPWTM3,GPWTM4,GPWTM5},
                                  };

volatile uint32_t * TIMER_TnMR_BLOCK[2][2][6]=
{
 {
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TA_GPTMTnMR_OFFSET)},
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TB_GPTMTnMR_OFFSET)},
 },
 {
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TA_GPTMTnMR_OFFSET)},
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TB_GPTMTnMR_OFFSET)},
 }
};

volatile uint32_t * TIMER_TnILR_BLOCK[2][2][6]=
{
 {
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TA_GPTMTnILR_OFFSET)},
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TB_GPTMTnILR_OFFSET)},
 },
 {
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TA_GPTMTnILR_OFFSET)},
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TB_GPTMTnILR_OFFSET)},
 }
};

volatile uint32_t * TIMER_TnPR_BLOCK[2][2][6]=
{
 {
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TA_GPTMTnPR_OFFSET)},
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TB_GPTMTnPR_OFFSET)},
 },
 {
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TA_GPTMTnPR_OFFSET)},
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TB_GPTMTnPR_OFFSET)},
 }
};

volatile uint32_t * TIMER_TnMATCHR_BLOCK[2][2][6]=
{
 {
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET)},
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET)},
 },
 {
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET)},
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET)},
 }
};

volatile uint32_t * TIMER_TnPMR_BLOCK[2][2][6]=
{
 {
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TA_GPTMTnPMR_OFFSET)},
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TB_GPTMTnPMR_OFFSET)},
 },
 {
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TA_GPTMTnPMR_OFFSET)},
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TB_GPTMTnPMR_OFFSET)},
 }
};

volatile uint32_t * TIMER_RTCPD_BLOCK[6]=
{
     (volatile uint32_t *)(GPWTM0_BASE + GPWTM_TW_GPTMRTCPD_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TW_GPTMRTCPD_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TW_GPTMRTCPD_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TW_GPTMRTCPD_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TW_GPTMRTCPD_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TW_GPTMRTCPD_OFFSET),
 };


