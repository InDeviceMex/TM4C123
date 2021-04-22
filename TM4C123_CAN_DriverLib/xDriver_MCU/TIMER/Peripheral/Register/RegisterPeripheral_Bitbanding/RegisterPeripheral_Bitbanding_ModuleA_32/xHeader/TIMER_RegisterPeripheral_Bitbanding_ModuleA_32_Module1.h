/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_ModuleA_32_Module1.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_32_MODULE1_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_32_MODULE1_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_ModuleA_32.h>

#define GPWTM1_BITBANDING_TA    ((GPWTM_BITBANDING_TA_TypeDef*) (GPWTM_BITBANDING_BASE + (GPWTM1_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 2 TAMR *********************************************
******************************************************************************************/
#define GPWTM1_BITBANDING_TA_TnMR    ((BITBANDING_TA_GPTMMR_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnMR_OFFSET) * 32UL)))

#define GPWTM1_BITBANDING_TA_TnMR_TnCMR    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnMR_OFFSET) * 32UL) + (GPWTM_TA_TnMR_R_TnCMR_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnMR_TnAMS    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnMR_OFFSET) * 32UL) + (GPWTM_TA_TnMR_R_TnAMS_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnMR_TnCDIR    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnMR_OFFSET) * 32UL) + (GPWTM_TA_TnMR_R_TnCDIR_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnMR_TnMIE    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnMR_OFFSET) * 32UL) + (GPWTM_TA_TnMR_R_TnMIE_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnMR_TnWOT    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnMR_OFFSET) * 32UL) + (GPWTM_TA_TnMR_R_TnWOT_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnMR_TnSNAPS    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnMR_OFFSET) * 32UL) + (GPWTM_TA_TnMR_R_TnSNAPS_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnMR_TnILD    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnMR_OFFSET) * 32UL) + (GPWTM_TA_TnMR_R_TnILD_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnMR_TnPWMIE    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnMR_OFFSET) * 32UL) + (GPWTM_TA_TnMR_R_TnPWMIE_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnMR_TnMRSU    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnMR_OFFSET) * 32UL) + (GPWTM_TA_TnMR_R_TnMRSU_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnMR_TnPLO    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnMR_OFFSET) * 32UL) + (GPWTM_TA_TnMR_R_TnPLO_BIT * 4UL))))

/******************************************************************************************
*********************************** * 4 CTL *********************************************
******************************************************************************************/
#define GPWTM1_BITBANDING_TA_TnCTL    ((BITBANDING_TA_GPTMCTL_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnCTL_OFFSET) * 32UL)))

#define GPWTM1_BITBANDING_TA_TnCTL_TnEN    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnCTL_OFFSET) * 32UL) + (GPWTM_TA_TnCTL_R_TnEN_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnCTL_TnSTALL    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnCTL_OFFSET) * 32UL) + (GPWTM_TA_TnCTL_R_TnSTALL_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnCTL_TnOTE    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnCTL_OFFSET) * 32UL) + (GPWTM_TA_TnCTL_R_TnOTE_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnCTL_TnPWML    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnCTL_OFFSET) * 32UL) + (GPWTM_TA_TnCTL_R_TnPWML_BIT * 4UL))))

/******************************************************************************************
*********************************** * 6 IMR *********************************************
******************************************************************************************/
#define GPWTM1_BITBANDING_TA_TnIMR    ((BITBANDING_TA_GPTMIMR_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnIMR_OFFSET) * 32UL)))

#define GPWTM1_BITBANDING_TA_TnIMR_TnTOIM    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnIMR_OFFSET) * 32UL) + (GPWTM_TA_TnIMR_R_TnTOIM_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnIMR_CnMIM    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnIMR_OFFSET) * 32UL) + (GPWTM_TA_TnIMR_R_CnMIM_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnIMR_CnEIM    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnIMR_OFFSET) * 32UL) + (GPWTM_TA_TnIMR_R_CnEIM_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnIMR_TnMIM    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnIMR_OFFSET) * 32UL) + (GPWTM_TA_TnIMR_R_TnMIM_BIT * 4UL))))

/******************************************************************************************
*********************************** * 7 RIS *********************************************
******************************************************************************************/
#define GPWTM1_BITBANDING_TA_TnRIS    ((BITBANDING_TA_GPTMRIS_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnRIS_OFFSET) * 32UL)))


#define GPWTM1_BITBANDING_TA_TnRIS_TnTORIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnRIS_OFFSET) * 32UL) + (GPWTM_TA_TnRIS_R_TnTORIS_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnRIS_CnMRIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnRIS_OFFSET) * 32UL) + (GPWTM_TA_TnRIS_R_CnMRIS_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnRIS_CnERIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnRIS_OFFSET) * 32UL) + (GPWTM_TA_TnRIS_R_CnERIS_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnRIS_TnMRIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnRIS_OFFSET) * 32UL) + (GPWTM_TA_TnRIS_R_TnMRIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 8 MIS *********************************************
******************************************************************************************/
#define GPWTM1_BITBANDING_TA_TnMIS    ((BITBANDING_TA_GPTMMIS_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnMIS_OFFSET) * 32UL)))

#define GPWTM1_BITBANDING_TA_TnMIS_TnTOMIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnMIS_OFFSET) * 32UL) + (GPWTM_TA_TnMIS_R_TnTOMIS_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnMIS_CnMMIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnMIS_OFFSET) * 32UL) + (GPWTM_TA_TnMIS_R_CnMMIS_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnMIS_CnEMIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnMIS_OFFSET) * 32UL) + (GPWTM_TA_TnMIS_R_CnEMIS_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnMIS_TnMMIS    (*((volatile const uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnMIS_OFFSET) * 32UL) + (GPWTM_TA_TnMIS_R_TnMMIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 9 ICR *********************************************
******************************************************************************************/
#define GPWTM1_BITBANDING_TA_TnICR    ((BITBANDING_TA_GPTMICR_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnICR_OFFSET) * 32UL)))

#define GPWTM1_BITBANDING_TA_TnICR_TnTOCINT    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnICR_OFFSET) * 32UL) + (GPWTM_TA_TnICR_R_TnTOCINT_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnICR_CnMCINT    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnICR_OFFSET) * 32UL) + (GPWTM_TA_TnICR_R_CnMCINT_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnICR_CnECINT    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnICR_OFFSET) * 32UL) + (GPWTM_TA_TnICR_R_CnECINT_BIT * 4UL))))
#define GPWTM1_BITBANDING_TA_TnICR_TnMCINT    (*((volatile uint32_t*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnICR_OFFSET) * 32UL) + (GPWTM_TA_TnICR_R_TnMCINT_BIT * 4UL))))

/******************************************************************************************
*********************************** * 10 TAILR *********************************************
******************************************************************************************/
#define GPWTM1_BITBANDING_TA_TnILR    ((BITBANDING_TA_GPWTMILR_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnILR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 12 TAMATCHR *********************************************
******************************************************************************************/
#define GPWTM1_BITBANDING_TA_TnMATCHR    ((BITBANDING_TA_GPWTMMATCHR_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnMATCHR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 14 TAPR *********************************************
******************************************************************************************/
#define GPWTM1_BITBANDING_TA_TnPR    ((BITBANDING_TA_GPWTMPR_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnPR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 16 TAPMR *********************************************
******************************************************************************************/
#define GPWTM1_BITBANDING_TA_TnPMR    ((BITBANDING_TA_GPWTMPMR_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnPMR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 18 TAR *********************************************
******************************************************************************************/
#define GPWTM1_BITBANDING_TA_TnR    ((BITBANDING_TA_GPTMR_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 20 TAV *********************************************
******************************************************************************************/
#define GPWTM1_BITBANDING_TA_TnV    ((BITBANDING_TA_GPTMV_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnV_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 23 TAPS *********************************************
******************************************************************************************/
#define GPWTM1_BITBANDING_TA_TnPS    ((BITBANDING_TA_GPWTMPS_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnPS_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 25 TAPV *********************************************
******************************************************************************************/
#define GPWTM1_BITBANDING_TA_TnPV    ((BITBANDING_TA_GPWTMPV_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM1_OFFSET + GPWTM_TA_TnPV_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_32_MODULE1_H_ */
