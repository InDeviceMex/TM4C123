/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_Standard_64_Module3.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_STANDARD_64_TIMER_REGISTERPERIPHERAL_BITBANDING_STANDARD_64_MODULE3_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_STANDARD_64_TIMER_REGISTERPERIPHERAL_BITBANDING_STANDARD_64_MODULE3_H_

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Register/TIMER_RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Register/TIMER_RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral_Bitbanding/TIMER_StructPeripheral_Bitbanding_Standard.h>

#define GPWTM3_BITBANDING         (((GPTM_BITBANDING_TypeDef*) (GPWTM_BITBANDING_BASE+(GPWTM3_OFFSET*32u))))

/******************************************************************************************
************************************ 1 GPTMCFG *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMCFG       (((BITBANDING_GPTMCFG_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMCFG_OFFSET)*32u))))

/******************************************************************************************
************************************ 2 GPTMTAMR *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMTAMR       (((BITBANDING_GPTMTAMR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAMR_OFFSET)*32u))))

#define GPWTM3_BITBANDING_GPTMTAMR_TACMR        (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAMR_OFFSET)*32u)+(GPWTM_GPTMTAMR_R_TACMR_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMTAMR_TAAMS        (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAMR_OFFSET)*32u)+(GPWTM_GPTMTAMR_R_TAAMS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMTAMR_TACDIR       (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAMR_OFFSET)*32u)+(GPWTM_GPTMTAMR_R_TACDIR_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMTAMR_TAMIE        (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAMR_OFFSET)*32u)+(GPWTM_GPTMTAMR_R_TAMIE_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMTAMR_TAWOT        (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAMR_OFFSET)*32u)+(GPWTM_GPTMTAMR_R_TAWOT_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMTAMR_TASNAPS      (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAMR_OFFSET)*32u)+(GPWTM_GPTMTAMR_R_TASNAPS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMTAMR_TAILD        (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAMR_OFFSET)*32u)+(GPWTM_GPTMTAMR_R_TAILD_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMTAMR_TAPWMIE      (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAMR_OFFSET)*32u)+(GPWTM_GPTMTAMR_R_TAPWMIE_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMTAMR_TAMRSU       (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAMR_OFFSET)*32u)+(GPWTM_GPTMTAMR_R_TAMRSU_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMTAMR_TAPLO        (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAMR_OFFSET)*32u)+(GPWTM_GPTMTAMR_R_TAPLO_BIT*4u))))

/******************************************************************************************
************************************ 3 GPTMTBMR *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMTBMR       (((BITBANDING_GPTMTBMR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBMR_OFFSET)*32u))))

#define GPWTM3_BITBANDING_GPTMTBMR_TBCMR        (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBMR_OFFSET)*32u)+(GPWTM_GPTMTBMR_R_TBCMR_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMTBMR_TBAMS        (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBMR_OFFSET)*32u)+(GPWTM_GPTMTBMR_R_TBAMS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMTBMR_TBCDIR       (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBMR_OFFSET)*32u)+(GPWTM_GPTMTBMR_R_TBCDIR_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMTBMR_TBMIE        (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBMR_OFFSET)*32u)+(GPWTM_GPTMTBMR_R_TBMIE_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMTBMR_TBWOT        (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBMR_OFFSET)*32u)+(GPWTM_GPTMTBMR_R_TBWOT_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMTBMR_TBSNAPS      (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBMR_OFFSET)*32u)+(GPWTM_GPTMTBMR_R_TBSNAPS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMTBMR_TBILD        (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBMR_OFFSET)*32u)+(GPWTM_GPTMTBMR_R_TBILD_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMTBMR_TBPWMIE      (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBMR_OFFSET)*32u)+(GPWTM_GPTMTBMR_R_TBPWMIE_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMTBMR_TBMRSU       (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBMR_OFFSET)*32u)+(GPWTM_GPTMTBMR_R_TBMRSU_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMTBMR_TBPLO        (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBMR_OFFSET)*32u)+(GPWTM_GPTMTBMR_R_TBPLO_BIT*4u))))

/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMCTL           (((BITBANDING_GPTMCTL_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMCTL_OFFSET)*32u))))

#define GPWTM3_BITBANDING_GPTMCTL_TAEN           (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMCTL_OFFSET)*32u)+(GPWTM_GPTMCTL_R_TAEN_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMCTL_TASTALL        (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMCTL_OFFSET)*32u)+(GPWTM_GPTMCTL_R_TASTALL_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMCTL_RTCEN          (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMCTL_OFFSET)*32u)+(GPWTM_GPTMCTL_R_RTCEN_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMCTL_TAOTE          (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMCTL_OFFSET)*32u)+(GPWTM_GPTMCTL_R_TAOTE_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMCTL_TAPWML         (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMCTL_OFFSET)*32u)+(GPWTM_GPTMCTL_R_TAPWML_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMCTL_TBEN           (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMCTL_OFFSET)*32u)+(GPWTM_GPTMCTL_R_TBEN_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMCTL_TBSTALL        (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMCTL_OFFSET)*32u)+(GPWTM_GPTMCTL_R_TBSTALL_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMCTL_TBOTE          (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMCTL_OFFSET)*32u)+(GPWTM_GPTMCTL_R_TBOTE_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMCTL_TBPWML         (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMCTL_OFFSET)*32u)+(GPWTM_GPTMCTL_R_TBPWML_BIT*4u))))

/******************************************************************************************
************************************ 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMIMR           (((BITBANDING_GPTMIMR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMIMR_OFFSET)*32u))))

#define GPWTM3_BITBANDING_GPTMIMR_TATOIM             (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMIMR_OFFSET)*32u)+(GPWTM_GPTMIMR_R_TATOIM_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMIMR_CAMIM              (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMIMR_OFFSET)*32u)+(GPWTM_GPTMIMR_R_CAMIM_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMIMR_CAEIM              (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMIMR_OFFSET)*32u)+(GPWTM_GPTMIMR_R_CAEIM_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMIMR_RTCIM              (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMIMR_OFFSET)*32u)+(GPWTM_GPTMIMR_R_RTCIM_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMIMR_TAMIM              (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMIMR_OFFSET)*32u)+(GPWTM_GPTMIMR_R_TAMIM_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMIMR_TBTOIM             (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMIMR_OFFSET)*32u)+(GPWTM_GPTMIMR_R_TBTOIM_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMIMR_CBMIM              (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMIMR_OFFSET)*32u)+(GPWTM_GPTMIMR_R_CBMIM_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMIMR_CBEIM              (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMIMR_OFFSET)*32u)+(GPWTM_GPTMIMR_R_CBEIM_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMIMR_TBMIM              (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMIMR_OFFSET)*32u)+(GPWTM_GPTMIMR_R_TBMIM_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMIMR_WUEIM              (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMIMR_OFFSET)*32u)+(GPWTM_GPTMIMR_R_WUEIM_BIT*4u))))

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMRIS           (((BITBANDING_GPTMRIS_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMRIS_OFFSET)*32u))))

#define GPWTM3_BITBANDING_GPTMRIS_TATORIS             (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMRIS_OFFSET)*32u)+(GPWTM_GPTMRIS_R_TATORIS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMRIS_CAMRIS              (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMRIS_OFFSET)*32u)+(GPWTM_GPTMRIS_R_CAMRIS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMRIS_CAERIS              (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMRIS_OFFSET)*32u)+(GPWTM_GPTMRIS_R_CAERIS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMRIS_RTCRIS              (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMRIS_OFFSET)*32u)+(GPWTM_GPTMRIS_R_RTCRIS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMRIS_TAMRIS              (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMRIS_OFFSET)*32u)+(GPWTM_GPTMRIS_R_TAMRIS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMRIS_TBTORIS             (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMRIS_OFFSET)*32u)+(GPWTM_GPTMRIS_R_TBTORIS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMRIS_CBMRIS              (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMRIS_OFFSET)*32u)+(GPWTM_GPTMRIS_R_CBMRIS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMRIS_CBERIS              (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMRIS_OFFSET)*32u)+(GPWTM_GPTMRIS_R_CBERIS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMRIS_TBMRIS              (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMRIS_OFFSET)*32u)+(GPWTM_GPTMRIS_R_TBMRIS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMRIS_WUERIS              (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMRIS_OFFSET)*32u)+(GPWTM_GPTMRIS_R_WUERIS_BIT*4u))))

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMMIS           (((BITBANDING_GPTMMIS_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMMIS_OFFSET)*32u))))

#define GPWTM3_BITBANDING_GPTMMIS_TATOMIS             (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMMIS_OFFSET)*32u)+(GPWTM_GPTMMIS_R_TATOMIS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMMIS_CAMMIS              (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMMIS_OFFSET)*32u)+(GPWTM_GPTMMIS_R_CAMMIS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMMIS_CAEMIS              (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMMIS_OFFSET)*32u)+(GPWTM_GPTMMIS_R_CAEMIS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMMIS_RTCMIS              (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMMIS_OFFSET)*32u)+(GPWTM_GPTMMIS_R_RTCMIS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMMIS_TAMMIS              (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMMIS_OFFSET)*32u)+(GPWTM_GPTMMIS_R_TAMMIS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMMIS_TBTOMIS             (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMMIS_OFFSET)*32u)+(GPWTM_GPTMMIS_R_TBTOMIS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMMIS_CBMMIS              (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMMIS_OFFSET)*32u)+(GPWTM_GPTMMIS_R_CBMMIS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMMIS_CBEMIS              (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMMIS_OFFSET)*32u)+(GPWTM_GPTMMIS_R_CBEMIS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMMIS_TBMMIS              (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMMIS_OFFSET)*32u)+(GPWTM_GPTMMIS_R_TBMMIS_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMMIS_WUEMIS              (*((volatile const uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMMIS_OFFSET)*32u)+(GPWTM_GPTMMIS_R_WUEMIS_BIT*4u))))

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMICR           (((BITBANDING_GPTMICR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMICR_OFFSET)*32u))))

#define GPWTM3_BITBANDING_GPTMICR_TATOCINT             (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMICR_OFFSET)*32u)+(GPWTM_GPTMICR_R_TATOCINT_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMICR_CAMCINT              (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMICR_OFFSET)*32u)+(GPWTM_GPTMICR_R_CAMCINT_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMICR_CAECINT              (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMICR_OFFSET)*32u)+(GPWTM_GPTMICR_R_CAECINT_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMICR_RTCCINT              (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMICR_OFFSET)*32u)+(GPWTM_GPTMICR_R_RTCCINT_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMICR_TAMCINT              (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMICR_OFFSET)*32u)+(GPWTM_GPTMICR_R_TAMCINT_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMICR_TBTOCINT             (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMICR_OFFSET)*32u)+(GPWTM_GPTMICR_R_TBTOCINT_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMICR_CBMCINT              (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMICR_OFFSET)*32u)+(GPWTM_GPTMICR_R_CBMCINT_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMICR_CBECINT              (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMICR_OFFSET)*32u)+(GPWTM_GPTMICR_R_CBECINT_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMICR_TBMCINT              (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMICR_OFFSET)*32u)+(GPWTM_GPTMICR_R_TBMCINT_BIT*4u))))
#define GPWTM3_BITBANDING_GPTMICR_WUECINT              (*((volatile uint32_t *)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMICR_OFFSET)*32u)+(GPWTM_GPTMICR_R_WUECINT_BIT*4u))))

/******************************************************************************************
************************************ 10 GPTMTAILR *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMTAILR             (((BITBANDING_GPTMTAILR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAILR_OFFSET)*32u))))

/******************************************************************************************
************************************ 11 GPTMTBILR *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMTBILR             (((BITBANDING_GPTMTBILR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBILR_OFFSET)*32u))))

/******************************************************************************************
************************************ 12 GPTMTAMATCHR *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMTAMATCHR              (((BITBANDING_GPTMTAMATCHR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAMATCHR_OFFSET)*32u))))

/******************************************************************************************
************************************ 13 GPTMTBMATCHR *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMTBMATCHR              (((BITBANDING_GPTMTBMATCHR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBMATCHR_OFFSET)*32u))))

/******************************************************************************************
************************************ 14 GPTMTAPR *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMTAPR               (((BITBANDING_GPTMTAPR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAPR_OFFSET)*32u))))

/******************************************************************************************
************************************ 15 GPTMTBPR *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMTBPR               (((BITBANDING_GPTMTBPR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBPR_OFFSET)*32u))))

/******************************************************************************************
************************************ 16 GPTMTAPMR *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMTAPMR               (((BITBANDING_GPTMTAPMR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAPMR_OFFSET)*32u))))

/******************************************************************************************
************************************ 17 GPTMTBPMR *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMTBPMR               (((BITBANDING_GPTMTBPMR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBPMR_OFFSET)*32u))))

/******************************************************************************************
************************************ 18 GPTMTAR *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMTAR              (((BITBANDING_GPTMTAR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAR_OFFSET)*32u))))

/******************************************************************************************
************************************ 19 GPTMTBR *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMTBR              (((BITBANDING_GPTMTBR_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBR_OFFSET)*32u))))

/******************************************************************************************
************************************ 20 GPTMTAV *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMTAV              (((BITBANDING_GPTMTAV_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAV_OFFSET)*32u))))

/******************************************************************************************
************************************ 21 GPTMTBV *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMTBV              (((BITBANDING_GPTMTBV_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBV_OFFSET)*32u))))

/******************************************************************************************
************************************ 22 GPTMRTCPD *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMRTCPD              (((BITBANDING_GPTMRTCPD_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMRTCPD_OFFSET)*32u))))

/******************************************************************************************
************************************ 23 GPTMTAPS *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMTAPS               (((BITBANDING_GPTMTAPS_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAPS_OFFSET)*32u))))

/******************************************************************************************
************************************ 24 GPTMTBPS *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMTBPS               (((BITBANDING_GPTMTBPS_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBPS_OFFSET)*32u))))

/******************************************************************************************
************************************ 25 GPTMTAPV *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMTAPV               (((BITBANDING_GPTMTAPV_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTAPV_OFFSET)*32u))))

/******************************************************************************************
************************************ 26 GPTMTBPV *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMTBPV               (((BITBANDING_GPTMTBPV_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMTBPV_OFFSET)*32u))))

/******************************************************************************************
************************************ 27 GPTMPP *********************************************
******************************************************************************************/
#define GPWTM3_BITBANDING_GPTMPP       (((BITBANDING_GPTMPP_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM3_OFFSET+GPWTM_GPTMPP_OFFSET)*32u))))






#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_STANDARD_64_TIMER_REGISTERPERIPHERAL_BITBANDING_STANDARD_64_MODULE3_H_ */
