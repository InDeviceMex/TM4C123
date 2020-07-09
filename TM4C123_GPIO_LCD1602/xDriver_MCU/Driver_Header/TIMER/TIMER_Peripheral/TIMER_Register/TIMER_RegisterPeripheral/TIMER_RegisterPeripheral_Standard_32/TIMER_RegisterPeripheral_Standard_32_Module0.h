/**
 *
 * @file TIMER_RegisterPeripheral_Standard_32_Module0.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE0_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE0_H_

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral/TIMER_StructPeripheral_Standard.h>

#define GPTM0                    (((GPTM_TypeDef*)(GPTM0_BASE)))

/******************************************************************************************
************************************ 1 GPTMCFG *********************************************
******************************************************************************************/
#define GPTM0_GPTMCFG                   (((GPTMCFG_TypeDef*)(GPTM0_BASE + GPTM_GPTMCFG_OFFSET )))
#define GPTM0_GPTMCFG_R                 (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMCFG_OFFSET)))

/******************************************************************************************
************************************ 2 GPTMTAMR *********************************************
******************************************************************************************/
#define GPTM0_GPTMTAMR                  (((GPTMTAMR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTAMR_OFFSET )))
#define GPTM0_GPTMTAMR_R                (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTAMR_OFFSET)))

/******************************************************************************************
************************************ 3 GPTMTBMR *********************************************
******************************************************************************************/
#define GPTM0_GPTMTBMR                  (((GPTMTBMR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTBMR_OFFSET )))
#define GPTM0_GPTMTBMR_R                (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTBMR_OFFSET)))


/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPTM0_GPTMCTL                       (((GPTMCTL_TypeDef*)(GPTM0_BASE + GPTM_GPTMCTL_OFFSET )))
#define GPTM0_GPTMCTL_R                     (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMCTL_OFFSET)))

/******************************************************************************************
************************************ 5 GPTMSYNC *********************************************
******************************************************************************************/
#define GPTM0_GPTMSYNC                      (((GPTMSYNC_TypeDef*)(GPTM0_BASE + GPTM_GPTMSYNC_OFFSET )))
#define GPTM0_GPTMSYNC_R                    (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMSYNC_OFFSET)))

/******************************************************************************************
************************************ 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPTM0_GPTMIMR                       (((GPTMIMR_TypeDef*)(GPTM0_BASE + GPTM_GPTMIMR_OFFSET )))
#define GPTM0_GPTMIMR_R                     (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMIMR_OFFSET)))

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPTM0_GPTMRIS                       (((GPTMRIS_TypeDef*)(GPTM0_BASE + GPTM_GPTMRIS_OFFSET )))
#define GPTM0_GPTMRIS_R                     (*((volatile const uint32_t *)(GPTM0_BASE +GPTM_GPTMRIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPTM0_GPTMMIS                       (((GPTMMIS_TypeDef*)(GPTM0_BASE + GPTM_GPTMMIS_OFFSET )))
#define GPTM0_GPTMMIS_R                     (*((volatile const uint32_t *)(GPTM0_BASE +GPTM_GPTMMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/
#define GPTM0_GPTMICR                       (((GPTMICR_TypeDef*)(GPTM0_BASE + GPTM_GPTMICR_OFFSET )))
#define GPTM0_GPTMICR_R                     (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMICR_OFFSET)))

/******************************************************************************************
************************************ 10 GPTMTAILR *********************************************
******************************************************************************************/
#define GPTM0_GPTMTAILR                         (((GPTMTAILR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTAILR_OFFSET )))
#define GPTM0_GPTMTAILR_R                       (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTAILR_OFFSET)))

/******************************************************************************************
************************************ 11 GPTMTBILR *********************************************
******************************************************************************************/
#define GPTM0_GPTMTBILR                         (((GPTMTBILR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTBILR_OFFSET )))
#define GPTM0_GPTMTBILR_R                       (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTBILR_OFFSET)))

/******************************************************************************************
************************************ 12 GPTMTAMATCHR *********************************************
******************************************************************************************/
#define GPTM0_GPTMTAMATCHR                          (((GPTMTAMATCHR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTAMATCHR_OFFSET )))
#define GPTM0_GPTMTAMATCHR_R                        (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTAMATCHR_OFFSET)))

/******************************************************************************************
************************************ 13 GPTMTBMATCHR *********************************************
******************************************************************************************/
#define GPTM0_GPTMTBMATCHR                          (((GPTMTBMATCHR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTBMATCHR_OFFSET )))
#define GPTM0_GPTMTBMATCHR_R                        (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTBMATCHR_OFFSET)))

/******************************************************************************************
************************************ 14 GPTMTAPR *********************************************
******************************************************************************************/
#define GPTM0_GPTMTAPR                          (((GPTMTAPR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTAPR_OFFSET )))
#define GPTM0_GPTMTAPR_R                        (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTAPR_OFFSET)))

/******************************************************************************************
************************************ 15 GPTMTBPR *********************************************
******************************************************************************************/
#define GPTM0_GPTMTBPR                          (((GPTMTBPR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTBPR_OFFSET )))
#define GPTM0_GPTMTBPR_R                        (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTBPR_OFFSET)))

/******************************************************************************************
************************************ 16 GPTMTAPMR *********************************************
******************************************************************************************/
#define GPTM0_GPTMTAPMR                          (((GPTMTAPMR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTAPMR_OFFSET )))
#define GPTM0_GPTMTAPMR_R                        (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTAPMR_OFFSET)))

/******************************************************************************************
************************************ 17 GPTMTBPMR *********************************************
******************************************************************************************/
#define GPTM0_GPTMTBPMR                          (((GPTMTBPMR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTBPMR_OFFSET )))
#define GPTM0_GPTMTBPMR_R                        (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTBPMR_OFFSET)))

/******************************************************************************************
************************************ 18 GPTMTAR *********************************************
******************************************************************************************/
#define GPTM0_GPTMTAR                          (((GPTMTAR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTAR_OFFSET )))
#define GPTM0_GPTMTAR_R                        (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTAR_OFFSET)))

/******************************************************************************************
************************************ 19 GPTMTBR *********************************************
******************************************************************************************/
#define GPTM0_GPTMTBR                          (((GPTMTBR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTBR_OFFSET )))
#define GPTM0_GPTMTBR_R                        (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTBR_OFFSET)))

/******************************************************************************************
************************************ 20 GPTMTAV *********************************************
******************************************************************************************/
#define GPTM0_GPTMTAV                          (((GPTMTAV_TypeDef*)(GPTM0_BASE + GPTM_GPTMTAV_OFFSET )))
#define GPTM0_GPTMTAV_R                        (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTAV_OFFSET)))

/******************************************************************************************
************************************ 21 GPTMTBV *********************************************
******************************************************************************************/
#define GPTM0_GPTMTBV                          (((GPTMTBV_TypeDef*)(GPTM0_BASE + GPTM_GPTMTBV_OFFSET )))
#define GPTM0_GPTMTBV_R                        (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTBV_OFFSET)))

/******************************************************************************************
************************************ 22 GPTMRTCPD *********************************************
******************************************************************************************/
#define GPTM0_GPTMRTCPD                          (((GPTMRTCPD_TypeDef*)(GPTM0_BASE + GPTM_GPTMRTCPD_OFFSET )))
#define GPTM0_GPTMRTCPD_R                        (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMRTCPD_OFFSET)))

/******************************************************************************************
************************************ 23 GPTMTAPS *********************************************
******************************************************************************************/
#define GPTM0_GPTMTAPS                          (((GPTMTAPS_TypeDef*)(GPTM0_BASE + GPTM_GPTMTAPS_OFFSET )))
#define GPTM0_GPTMTAPS_R                        (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTAPS_OFFSET)))

/******************************************************************************************
************************************ 24 GPTMTBPS *********************************************
******************************************************************************************/
#define GPTM0_GPTMTBPS                          (((GPTMTBPS_TypeDef*)(GPTM0_BASE + GPTM_GPTMTBPS_OFFSET )))
#define GPTM0_GPTMTBPS_R                        (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTBPS_OFFSET)))

/******************************************************************************************
************************************ 25 GPTMTAPV *********************************************
******************************************************************************************/
#define GPTM0_GPTMTAPV                          (((GPTMTAPV_TypeDef*)(GPTM0_BASE + GPTM_GPTMTAPV_OFFSET )))
#define GPTM0_GPTMTAPV_R                        (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTAPV_OFFSET)))

/******************************************************************************************
************************************ 26 GPTMTBPV *********************************************
******************************************************************************************/
#define GPTM0_GPTMTBPV                          (((GPTMTBPV_TypeDef*)(GPTM0_BASE + GPTM_GPTMTBPV_OFFSET )))
#define GPTM0_GPTMTBPV_R                        (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTBPV_OFFSET)))

/******************************************************************************************
************************************ 27 GPTMPP *********************************************
******************************************************************************************/
#define GPTM0_GPTMPP                   (((GPTMPP_TypeDef*)(GPTM0_BASE + GPTM_GPTMPP_OFFSET )))
#define GPTM0_GPTMPP_R                 (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMPP_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE0_H_ */
