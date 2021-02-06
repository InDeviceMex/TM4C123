/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_ModuleW_64_Module5.h
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
 * Date           Author     Version     Description * 9 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_64_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_64_MODULE5_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_64_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_64_MODULE5_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_ModuleW_64.h>

#define GPWTM5_BITBANDING_TW    ((GPWTM_BITBANDING_TW_TypeDef*) (GPWTM_BITBANDING_BASE + (GPWTM5_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 2 GPTMTAMR *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TW_GPTMTnMR    ((BITBANDING_TW_GPTMMR_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMR_OFFSET) * 32UL)))

#define GPWTM5_BITBANDING_TW_GPTMTnMR_TnCMR    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnMR_R_TnCMR_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnMR_TnAMS    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnMR_R_TnAMS_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnMR_TnCDIR    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnMR_R_TnCDIR_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnMR_TnMIE    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnMR_R_TnMIE_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnMR_TnWOT    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnMR_R_TnWOT_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnMR_TnSNAPS    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnMR_R_TnSNAPS_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnMR_TnILD    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnMR_R_TnILD_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnMR_TnPWMIE    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnMR_R_TnPWMIE_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnMR_TnMRSU    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnMR_R_TnMRSU_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnMR_TnPLO    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnMR_R_TnPLO_BIT * 4UL))))

/******************************************************************************************
*********************************** * 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TW_GPTMTnCTL    ((BITBANDING_TW_GPTMCTL_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnCTL_OFFSET) * 32UL)))

#define GPWTM5_BITBANDING_TW_GPTMTnCTL_TnEN    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnCTL_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnCTL_R_TnEN_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnCTL_TnSTALL    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnCTL_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnCTL_R_TnSTALL_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnCTL_RTCEN    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnCTL_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnCTL_R_RTCEN_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnCTL_TnOTE    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnCTL_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnCTL_R_TnOTE_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnCTL_TnPWML    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnCTL_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnCTL_R_TnPWML_BIT * 4UL))))

/******************************************************************************************
*********************************** * 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TW_GPTMTnIMR    ((BITBANDING_TW_GPWTMIMR_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnIMR_OFFSET) * 32UL)))

#define GPWTM5_BITBANDING_TW_GPTMTnIMR_TnTOIM    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnIMR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnIMR_R_TnTOIM_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnIMR_CnMIM    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnIMR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnIMR_R_CnMIM_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnIMR_RTCIM    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnIMR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnIMR_R_RTCIM_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnIMR_CnEIM    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnIMR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnIMR_R_CnEIM_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnIMR_TnMIM    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnIMR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnIMR_R_TnMIM_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnIMR_WUEIM    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnIMR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnIMR_R_WUEIM_BIT * 4UL))))

/******************************************************************************************
*********************************** * 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TW_GPTMTnRIS    ((BITBANDING_TW_GPWTMRIS_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnRIS_OFFSET) * 32UL)))

#define GPWTM5_BITBANDING_TW_GPTMTnRIS_TnTORIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnRIS_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnRIS_R_TnTORIS_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnRIS_CnMRIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnRIS_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnRIS_R_CnMRIS_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnRIS_RTCRIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnRIS_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnRIS_R_RTCRIS_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnRIS_CnERIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnRIS_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnRIS_R_CnERIS_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnRIS_TnMRIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnRIS_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnRIS_R_TnMRIS_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnRIS_WUERIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnRIS_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnRIS_R_WUERIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TW_GPTMTnMIS    ((BITBANDING_TW_GPWTMMIS_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMIS_OFFSET) * 32UL)))

#define GPWTM5_BITBANDING_TW_GPTMTnMIS_TnTOMIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMIS_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnMIS_R_TnTOMIS_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnMIS_CnMMIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMIS_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnMIS_R_CnMMIS_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnMIS_RTCMIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMIS_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnMIS_R_RTCMIS_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnMIS_CnEMIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMIS_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnMIS_R_CnEMIS_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnMIS_TnMMIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMIS_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnMIS_R_TnMMIS_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnMIS_WUEMIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMIS_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnMIS_R_WUEMIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 9 GPTMICR *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TW_GPTMTnICR    ((BITBANDING_TW_GPWTMICR_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnICR_OFFSET) * 32UL)))

#define GPWTM5_BITBANDING_TW_GPTMTnICR_TnTOCINT    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnICR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnICR_R_TnTOCINT_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnICR_CnMCINT    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnICR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnICR_R_CnMCINT_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnICR_RTCCINT    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnICR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnICR_R_RTCCINT_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnICR_CnECINT    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnICR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnICR_R_CnECINT_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnICR_TnMCINT    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnICR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnICR_R_TnMCINT_BIT * 4UL))))
#define GPWTM5_BITBANDING_TW_GPTMTnICR_WUECINT    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnICR_OFFSET) * 32UL) + (GPWTM_TW_GPTMTnICR_R_WUECINT_BIT * 4UL))))

/******************************************************************************************
*********************************** * 10 GPTMTAILR *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TW_GPTMTnILR_LOW    ((BITBANDING_TW_GPWTMILR_LOW_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnILR_LOW_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 11 GPTMTBILR *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TW_GPTMTnILR_HIGH    ((BITBANDING_TW_GPWTMILR_HIGH_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnILR_HIGH_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 12 GPTMTAMATCHR *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TW_GPTMTnMATCHR_LOW    ((BITBANDING_TW_GPWTMMATCHR_LOW_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMATCHR_LOW_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 13 GPTMTBMATCHR *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TW_GPTMTnMATCHR_HIGH    ((BITBANDING_TW_GPWTMMATCHR_HIGH_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnMATCHR_HIGH_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 18 GPTMTAR *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TW_GPTMTnR_LOW    ((BITBANDING_TW_GPWTMR_LOW_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnR_LOW_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 19 GPTMTBR *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TW_GPTMTnR_HIGH    ((BITBANDING_TW_GPWTMR_HIGH_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnR_HIGH_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 20 GPTMTAV *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TW_GPTMTnV_LOW    ((BITBANDING_TW_GPWTMV_LOW_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnV_LOW_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 21 GPTMTBV *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TW_GPTMTnV_HIGH    ((BITBANDING_TW_GPWTMV_HIGH_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMTnV_HIGH_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 22 GPTMRTCPD *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_TW_GPTMRTCPD    ((BITBANDING_TW_GPTMRTCPD_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM5_OFFSET + GPWTM_TW_GPTMRTCPD_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_64_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_64_MODULE5_H_ */
