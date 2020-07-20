/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_ModuleB_32_Module5.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEB_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEB_32_MODULE5_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEB_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEB_32_MODULE5_H_

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Register/TIMER_RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Register/TIMER_RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral_Bitbanding/TIMER_StructPeripheral_Bitbanding_ModuleB_32.h>

#define GPWTM5_BITBANDING_TB      (((GPWTM_BITBANDING_TB_TypeDef*)  (GPWTM_BITBANDING_BASE+(GPWTM5_OFFSET*32u))))

/******************************************************************************************
************************************ 3 GPTMTBMR *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TB_GPTMTnMR    (((BITBANDING_TB_GPTMMR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnMR_OFFSET)*32u))))

#define GPWTM5_BITBANDING_TB_GPTMTnMR_TnCMR     (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnMR_OFFSET)*32u)+(GPWTM_TB_GPTMTnMR_R_TnCMR_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnMR_TnAMS     (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnMR_OFFSET)*32u)+(GPWTM_TB_GPTMTnMR_R_TnAMS_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnMR_TnCDIR    (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnMR_OFFSET)*32u)+(GPWTM_TB_GPTMTnMR_R_TnCDIR_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnMR_TnMIE     (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnMR_OFFSET)*32u)+(GPWTM_TB_GPTMTnMR_R_TnMIE_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnMR_TnWOT     (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnMR_OFFSET)*32u)+(GPWTM_TB_GPTMTnMR_R_TnWOT_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnMR_TnSNAPS   (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnMR_OFFSET)*32u)+(GPWTM_TB_GPTMTnMR_R_TnSNAPS_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnMR_TnILD     (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnMR_OFFSET)*32u)+(GPWTM_TB_GPTMTnMR_R_TnILD_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnMR_TnPWMIE   (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnMR_OFFSET)*32u)+(GPWTM_TB_GPTMTnMR_R_TnPWMIE_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnMR_TnMRSU    (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnMR_OFFSET)*32u)+(GPWTM_TB_GPTMTnMR_R_TnMRSU_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnMR_TnPLO     (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnMR_OFFSET)*32u)+(GPWTM_TB_GPTMTnMR_R_TnPLO_BIT*4u))))

/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TB_GPTMTnCTL      (((BITBANDING_TB_GPTMCTL_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnCTL_OFFSET)*32u))))

#define GPWTM5_BITBANDING_TB_GPTMTnCTL_TnEN      (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnCTL_OFFSET)*32u)+(GPWTM_TB_GPTMTnCTL_R_TnEN_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnCTL_TnSTALL   (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnCTL_OFFSET)*32u)+(GPWTM_TB_GPTMTnCTL_R_TnSTALL_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnCTL_TnOTE     (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnCTL_OFFSET)*32u)+(GPWTM_TB_GPTMTnCTL_R_TnOTE_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnCTL_TnPWML    (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnCTL_OFFSET)*32u)+(GPWTM_TB_GPTMTnCTL_R_TnPWML_BIT*4u))))

/******************************************************************************************
************************************ 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TB_GPTMTnIMR      (((BITBANDING_TB_GPTMIMR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnIMR_OFFSET)*32u))))

#define GPWTM5_BITBANDING_TB_GPTMTnIMR_TnTOIM        (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnIMR_OFFSET)*32u)+(GPWTM_TB_GPTMTnIMR_R_TnTOIM_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnIMR_CnMIM         (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnIMR_OFFSET)*32u)+(GPWTM_TB_GPTMTnIMR_R_CnMIM_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnIMR_CnEIM         (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnIMR_OFFSET)*32u)+(GPWTM_TB_GPTMTnIMR_R_CnEIM_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnIMR_TnMIM         (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnIMR_OFFSET)*32u)+(GPWTM_TB_GPTMTnIMR_R_TnMIM_BIT*4u))))

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TB_GPTMTnRIS      (((BITBANDING_TB_GPTMRIS_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnRIS_OFFSET)*32u))))

#define GPWTM5_BITBANDING_TB_GPTMTnRIS_TnTORIS        (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnRIS_OFFSET)*32u)+(GPWTM_TB_GPTMTnRIS_R_TnTORIS_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnRIS_CnMRIS         (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnRIS_OFFSET)*32u)+(GPWTM_TB_GPTMTnRIS_R_CnMRIS_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnRIS_CnERIS         (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnRIS_OFFSET)*32u)+(GPWTM_TB_GPTMTnRIS_R_CnERIS_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnRIS_TnMRIS         (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnRIS_OFFSET)*32u)+(GPWTM_TB_GPTMTnRIS_R_TnMRIS_BIT*4u))))

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TB_GPTMTnMIS      (((BITBANDING_TB_GPTMMIS_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnMIS_OFFSET)*32u))))

#define GPWTM5_BITBANDING_TB_GPTMTnMIS_TnTOMIS        (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnMIS_OFFSET)*32u)+(GPWTM_TB_GPTMTnMIS_R_TnTOMIS_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnMIS_CnMMIS         (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnMIS_OFFSET)*32u)+(GPWTM_TB_GPTMTnMIS_R_CnMMIS_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnMIS_CnEMIS         (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnMIS_OFFSET)*32u)+(GPWTM_TB_GPTMTnMIS_R_CnEMIS_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnMIS_TnMMIS         (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnMIS_OFFSET)*32u)+(GPWTM_TB_GPTMTnMIS_R_TnMMIS_BIT*4u))))

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TB_GPTMTnICR      (((BITBANDING_TB_GPTMICR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnICR_OFFSET)*32u))))

#define GPWTM5_BITBANDING_TB_GPTMTnICR_TnTOCINT        (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnICR_OFFSET)*32u)+(GPWTM_TB_GPTMTnICR_R_TnTOCINT_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnICR_CnMCINT         (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnICR_OFFSET)*32u)+(GPWTM_TB_GPTMTnICR_R_CnMCINT_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnICR_CnECINT         (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnICR_OFFSET)*32u)+(GPWTM_TB_GPTMTnICR_R_CnECINT_BIT*4u))))
#define GPWTM5_BITBANDING_TB_GPTMTnICR_TnMCINT         (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnICR_OFFSET)*32u)+(GPWTM_TB_GPTMTnICR_R_TnMCINT_BIT*4u))))

/******************************************************************************************
************************************ 11 GPTMTBILR *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TB_GPTMTnILR          (((BITBANDING_TB_GPWTMILR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnILR_OFFSET)*32u))))

/******************************************************************************************
************************************ 13 GPTMTBMATCHR *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TB_GPTMTnMATCHR           (((BITBANDING_TB_GPWTMMATCHR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnMATCHR_OFFSET)*32u))))

/******************************************************************************************
************************************ 15 GPTMTBPR *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TB_GPTMTnPR            (((BITBANDING_TB_GPWTMPR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnPR_OFFSET)*32u))))

/******************************************************************************************
************************************ 17 GPTMTBPMR *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TB_GPTMTnPMR            (((BITBANDING_TB_GPWTMPMR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnPMR_OFFSET)*32u))))

/******************************************************************************************
************************************ 19 GPTMTBR *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TB_GPTMTnR           (((BITBANDING_TB_GPTMR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnR_OFFSET)*32u))))

/******************************************************************************************
************************************ 21 GPTMTBV *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TB_GPTMTnV           (((BITBANDING_TB_GPTMV_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnV_OFFSET)*32u))))

/******************************************************************************************
************************************ 24 GPTMTBPS *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TB_GPTMTnPS            (((BITBANDING_TB_GPWTMPS_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnPS_OFFSET)*32u))))

/******************************************************************************************
************************************ 26 GPTMTBPV *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TB_GPTMTnPV            (((BITBANDING_TB_GPWTMPV_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_TB_GPTMTnPV_OFFSET)*32u))))





#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEB_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEB_32_MODULE5_H_ */
