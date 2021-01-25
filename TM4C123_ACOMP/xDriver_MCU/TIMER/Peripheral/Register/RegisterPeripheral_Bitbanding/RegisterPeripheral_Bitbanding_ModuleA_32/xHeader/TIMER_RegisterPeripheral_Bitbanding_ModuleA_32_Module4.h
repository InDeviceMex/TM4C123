/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_ModuleA_32_Module4.h
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
 * @verbatim 9 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_32_MODULE4_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_32_MODULE4_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_ModuleA_32.h>

#define GPWTM4_BITBANDING_TA      (((GPWTM_BITBANDING_TA_TypeDef*)  (GPWTM_BITBANDING_BASE+(GPWTM4_OFFSET*32U))))

/******************************************************************************************
************************************ 2 GPTMTAMR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TA_GPTMTnMR    (((BITBANDING_TA_GPTMMR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnMR_OFFSET)*32U))))

#define GPWTM4_BITBANDING_TA_GPTMTnMR_TnCMR     (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnMR_OFFSET)*32U)+(GPWTM_TA_GPTMTnMR_R_TnCMR_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnMR_TnAMS     (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnMR_OFFSET)*32U)+(GPWTM_TA_GPTMTnMR_R_TnAMS_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnMR_TnCDIR    (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnMR_OFFSET)*32U)+(GPWTM_TA_GPTMTnMR_R_TnCDIR_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnMR_TnMIE     (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnMR_OFFSET)*32U)+(GPWTM_TA_GPTMTnMR_R_TnMIE_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnMR_TnWOT     (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnMR_OFFSET)*32U)+(GPWTM_TA_GPTMTnMR_R_TnWOT_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnMR_TnSNAPS   (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnMR_OFFSET)*32U)+(GPWTM_TA_GPTMTnMR_R_TnSNAPS_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnMR_TnILD     (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnMR_OFFSET)*32U)+(GPWTM_TA_GPTMTnMR_R_TnILD_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnMR_TnPWMIE   (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnMR_OFFSET)*32U)+(GPWTM_TA_GPTMTnMR_R_TnPWMIE_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnMR_TnMRSU    (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnMR_OFFSET)*32U)+(GPWTM_TA_GPTMTnMR_R_TnMRSU_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnMR_TnPLO     (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnMR_OFFSET)*32U)+(GPWTM_TA_GPTMTnMR_R_TnPLO_BIT*4U))))

/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TA_GPTMTnCTL      (((BITBANDING_TA_GPTMCTL_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnCTL_OFFSET)*32U))))

#define GPWTM4_BITBANDING_TA_GPTMTnCTL_TnEN      (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnCTL_OFFSET)*32U)+(GPWTM_TA_GPTMTnCTL_R_TnEN_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnCTL_TnSTALL   (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnCTL_OFFSET)*32U)+(GPWTM_TA_GPTMTnCTL_R_TnSTALL_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnCTL_TnOTE     (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnCTL_OFFSET)*32U)+(GPWTM_TA_GPTMTnCTL_R_TnOTE_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnCTL_TnPWML    (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnCTL_OFFSET)*32U)+(GPWTM_TA_GPTMTnCTL_R_TnPWML_BIT*4U))))

/******************************************************************************************
************************************ 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TA_GPTMTnIMR      (((BITBANDING_TA_GPTMIMR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnIMR_OFFSET)*32U))))

#define GPWTM4_BITBANDING_TA_GPTMTnIMR_TnTOIM        (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnIMR_OFFSET)*32U)+(GPWTM_TA_GPTMTnIMR_R_TnTOIM_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnIMR_CnMIM         (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnIMR_OFFSET)*32U)+(GPWTM_TA_GPTMTnIMR_R_CnMIM_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnIMR_CnEIM         (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnIMR_OFFSET)*32U)+(GPWTM_TA_GPTMTnIMR_R_CnEIM_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnIMR_TnMIM         (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnIMR_OFFSET)*32U)+(GPWTM_TA_GPTMTnIMR_R_TnMIM_BIT*4U))))

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TA_GPTMTnRIS      (((BITBANDING_TA_GPTMRIS_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnRIS_OFFSET)*32U))))


#define GPWTM4_BITBANDING_TA_GPTMTnRIS_TnTORIS        (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnRIS_OFFSET)*32U)+(GPWTM_TA_GPTMTnRIS_R_TnTORIS_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnRIS_CnMRIS         (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnRIS_OFFSET)*32U)+(GPWTM_TA_GPTMTnRIS_R_CnMRIS_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnRIS_CnERIS         (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnRIS_OFFSET)*32U)+(GPWTM_TA_GPTMTnRIS_R_CnERIS_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnRIS_TnMRIS         (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnRIS_OFFSET)*32U)+(GPWTM_TA_GPTMTnRIS_R_TnMRIS_BIT*4U))))

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TA_GPTMTnMIS      (((BITBANDING_TA_GPTMMIS_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnMIS_OFFSET)*32U))))

#define GPWTM4_BITBANDING_TA_GPTMTnMIS_TnTOMIS        (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnMIS_OFFSET)*32U)+(GPWTM_TA_GPTMTnMIS_R_TnTOMIS_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnMIS_CnMMIS         (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnMIS_OFFSET)*32U)+(GPWTM_TA_GPTMTnMIS_R_CnMMIS_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnMIS_CnEMIS         (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnMIS_OFFSET)*32U)+(GPWTM_TA_GPTMTnMIS_R_CnEMIS_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnMIS_TnMMIS         (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnMIS_OFFSET)*32U)+(GPWTM_TA_GPTMTnMIS_R_TnMMIS_BIT*4U))))

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TA_GPTMTnICR      (((BITBANDING_TA_GPTMICR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnICR_OFFSET)*32U))))

#define GPWTM4_BITBANDING_TA_GPTMTnICR_TnTOCINT        (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnICR_OFFSET)*32U)+(GPWTM_TA_GPTMTnICR_R_TnTOCINT_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnICR_CnMCINT         (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnICR_OFFSET)*32U)+(GPWTM_TA_GPTMTnICR_R_CnMCINT_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnICR_CnECINT         (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnICR_OFFSET)*32U)+(GPWTM_TA_GPTMTnICR_R_CnECINT_BIT*4U))))
#define GPWTM4_BITBANDING_TA_GPTMTnICR_TnMCINT         (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnICR_OFFSET)*32U)+(GPWTM_TA_GPTMTnICR_R_TnMCINT_BIT*4U))))

/******************************************************************************************
************************************ 10 GPTMTAILR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TA_GPTMTnILR          (((BITBANDING_TA_GPWTMILR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnILR_OFFSET)*32U))))

/******************************************************************************************
************************************ 12 GPTMTAMATCHR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TA_GPTMTnMATCHR           (((BITBANDING_TA_GPWTMMATCHR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnMATCHR_OFFSET)*32U))))

/******************************************************************************************
************************************ 14 GPTMTAPR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TA_GPTMTnPR            (((BITBANDING_TA_GPWTMPR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnPR_OFFSET)*32U))))

/******************************************************************************************
************************************ 16 GPTMTAPMR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TA_GPTMTnPMR            (((BITBANDING_TA_GPWTMPMR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnPMR_OFFSET)*32U))))

/******************************************************************************************
************************************ 18 GPTMTAR *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TA_GPTMTnR           (((BITBANDING_TA_GPTMR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnR_OFFSET)*32U))))

/******************************************************************************************
************************************ 20 GPTMTAV *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TA_GPTMTnV           (((BITBANDING_TA_GPTMV_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnV_OFFSET)*32U))))

/******************************************************************************************
************************************ 23 GPTMTAPS *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TA_GPTMTnPS            (((BITBANDING_TA_GPWTMPS_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnPS_OFFSET)*32U))))

/******************************************************************************************
************************************ 25 GPTMTAPV *********************************************
******************************************************************************************/
#define GPWTM4_BITBANDING_TA_GPTMTnPV            (((BITBANDING_TA_GPWTMPV_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM4_OFFSET+GPWTM_TA_GPTMTnPV_OFFSET)*32U))))





#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_32_MODULE4_H_ */
