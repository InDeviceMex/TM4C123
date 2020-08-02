/**
 *
 * @file TIMER_RegisterPeripheral_Standard_32_Module2.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE2_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE2_H_

#include <xDriver_MCU/TIMER/Header/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Header/Peripheral/Struct/StructPeripheral/TIMER_StructPeripheral_Standard.h>

#define GPTM2                    (((GPTM_TypeDef*)(GPTM2_BASE)))

/******************************************************************************************
************************************ 1 GPTMCFG *********************************************
******************************************************************************************/
#define GPTM2_GPTMCFG                   (((GPTMCFG_TypeDef*)(GPTM2_BASE + GPTM_GPTMCFG_OFFSET )))
#define GPTM2_GPTMCFG_R                 (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMCFG_OFFSET)))

/******************************************************************************************
************************************ 2 GPTMTAMR *********************************************
******************************************************************************************/
#define GPTM2_GPTMTAMR                  (((GPTMTAMR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTAMR_OFFSET )))
#define GPTM2_GPTMTAMR_R                (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTAMR_OFFSET)))

/******************************************************************************************
************************************ 3 GPTMTBMR *********************************************
******************************************************************************************/
#define GPTM2_GPTMTBMR                  (((GPTMTBMR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTBMR_OFFSET )))
#define GPTM2_GPTMTBMR_R                (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTBMR_OFFSET)))


/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPTM2_GPTMCTL                       (((GPTMCTL_TypeDef*)(GPTM2_BASE + GPTM_GPTMCTL_OFFSET )))
#define GPTM2_GPTMCTL_R                     (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMCTL_OFFSET)))

/******************************************************************************************
************************************ 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPTM2_GPTMIMR                       (((GPTMIMR_TypeDef*)(GPTM2_BASE + GPTM_GPTMIMR_OFFSET )))
#define GPTM2_GPTMIMR_R                     (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMIMR_OFFSET)))

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPTM2_GPTMRIS                       (((GPTMRIS_TypeDef*)(GPTM2_BASE + GPTM_GPTMRIS_OFFSET )))
#define GPTM2_GPTMRIS_R                     (*((volatile const uint32_t *)(GPTM2_BASE +GPTM_GPTMRIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPTM2_GPTMMIS                       (((GPTMMIS_TypeDef*)(GPTM2_BASE + GPTM_GPTMMIS_OFFSET )))
#define GPTM2_GPTMMIS_R                     (*((volatile const uint32_t *)(GPTM2_BASE +GPTM_GPTMMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/
#define GPTM2_GPTMICR                       (((GPTMICR_TypeDef*)(GPTM2_BASE + GPTM_GPTMICR_OFFSET )))
#define GPTM2_GPTMICR_R                     (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMICR_OFFSET)))

/******************************************************************************************
************************************ 10 GPTMTAILR *********************************************
******************************************************************************************/
#define GPTM2_GPTMTAILR                         (((GPTMTAILR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTAILR_OFFSET )))
#define GPTM2_GPTMTAILR_R                       (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTAILR_OFFSET)))

/******************************************************************************************
************************************ 11 GPTMTBILR *********************************************
******************************************************************************************/
#define GPTM2_GPTMTBILR                         (((GPTMTBILR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTBILR_OFFSET )))
#define GPTM2_GPTMTBILR_R                       (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTBILR_OFFSET)))

/******************************************************************************************
************************************ 12 GPTMTAMATCHR *********************************************
******************************************************************************************/
#define GPTM2_GPTMTAMATCHR                          (((GPTMTAMATCHR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTAMATCHR_OFFSET )))
#define GPTM2_GPTMTAMATCHR_R                        (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTAMATCHR_OFFSET)))

/******************************************************************************************
************************************ 13 GPTMTBMATCHR *********************************************
******************************************************************************************/
#define GPTM2_GPTMTBMATCHR                          (((GPTMTBMATCHR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTBMATCHR_OFFSET )))
#define GPTM2_GPTMTBMATCHR_R                        (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTBMATCHR_OFFSET)))

/******************************************************************************************
************************************ 14 GPTMTAPR *********************************************
******************************************************************************************/
#define GPTM2_GPTMTAPR                          (((GPTMTAPR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTAPR_OFFSET )))
#define GPTM2_GPTMTAPR_R                        (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTAPR_OFFSET)))

/******************************************************************************************
************************************ 15 GPTMTBPR *********************************************
******************************************************************************************/
#define GPTM2_GPTMTBPR                          (((GPTMTBPR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTBPR_OFFSET )))
#define GPTM2_GPTMTBPR_R                        (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTBPR_OFFSET)))

/******************************************************************************************
************************************ 16 GPTMTAPMR *********************************************
******************************************************************************************/
#define GPTM2_GPTMTAPMR                          (((GPTMTAPMR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTAPMR_OFFSET )))
#define GPTM2_GPTMTAPMR_R                        (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTAPMR_OFFSET)))

/******************************************************************************************
************************************ 17 GPTMTBPMR *********************************************
******************************************************************************************/
#define GPTM2_GPTMTBPMR                          (((GPTMTBPMR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTBPMR_OFFSET )))
#define GPTM2_GPTMTBPMR_R                        (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTBPMR_OFFSET)))

/******************************************************************************************
************************************ 18 GPTMTAR *********************************************
******************************************************************************************/
#define GPTM2_GPTMTAR                          (((GPTMTAR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTAR_OFFSET )))
#define GPTM2_GPTMTAR_R                        (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTAR_OFFSET)))

/******************************************************************************************
************************************ 19 GPTMTBR *********************************************
******************************************************************************************/
#define GPTM2_GPTMTBR                          (((GPTMTBR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTBR_OFFSET )))
#define GPTM2_GPTMTBR_R                        (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTBR_OFFSET)))

/******************************************************************************************
************************************ 20 GPTMTAV *********************************************
******************************************************************************************/
#define GPTM2_GPTMTAV                          (((GPTMTAV_TypeDef*)(GPTM2_BASE + GPTM_GPTMTAV_OFFSET )))
#define GPTM2_GPTMTAV_R                        (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTAV_OFFSET)))

/******************************************************************************************
************************************ 21 GPTMTBV *********************************************
******************************************************************************************/
#define GPTM2_GPTMTBV                          (((GPTMTBV_TypeDef*)(GPTM2_BASE + GPTM_GPTMTBV_OFFSET )))
#define GPTM2_GPTMTBV_R                        (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTBV_OFFSET)))

/******************************************************************************************
************************************ 22 GPTMRTCPD *********************************************
******************************************************************************************/
#define GPTM2_GPTMRTCPD                          (((GPTMRTCPD_TypeDef*)(GPTM2_BASE + GPTM_GPTMRTCPD_OFFSET )))
#define GPTM2_GPTMRTCPD_R                        (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMRTCPD_OFFSET)))

/******************************************************************************************
************************************ 23 GPTMTAPS *********************************************
******************************************************************************************/
#define GPTM2_GPTMTAPS                          (((GPTMTAPS_TypeDef*)(GPTM2_BASE + GPTM_GPTMTAPS_OFFSET )))
#define GPTM2_GPTMTAPS_R                        (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTAPS_OFFSET)))

/******************************************************************************************
************************************ 24 GPTMTBPS *********************************************
******************************************************************************************/
#define GPTM2_GPTMTBPS                          (((GPTMTBPS_TypeDef*)(GPTM2_BASE + GPTM_GPTMTBPS_OFFSET )))
#define GPTM2_GPTMTBPS_R                        (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTBPS_OFFSET)))

/******************************************************************************************
************************************ 25 GPTMTAPV *********************************************
******************************************************************************************/
#define GPTM2_GPTMTAPV                          (((GPTMTAPV_TypeDef*)(GPTM2_BASE + GPTM_GPTMTAPV_OFFSET )))
#define GPTM2_GPTMTAPV_R                        (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTAPV_OFFSET)))

/******************************************************************************************
************************************ 26 GPTMTBPV *********************************************
******************************************************************************************/
#define GPTM2_GPTMTBPV                          (((GPTMTBPV_TypeDef*)(GPTM2_BASE + GPTM_GPTMTBPV_OFFSET )))
#define GPTM2_GPTMTBPV_R                        (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTBPV_OFFSET)))

/******************************************************************************************
************************************ 27 GPTMPP *********************************************
******************************************************************************************/
#define GPTM2_GPTMPP                   (((GPTMPP_TypeDef*)(GPTM2_BASE + GPTM_GPTMPP_OFFSET )))
#define GPTM2_GPTMPP_R                 (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMPP_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE2_H_ */
