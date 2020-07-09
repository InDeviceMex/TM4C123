/**
 *
 * @file TIMER_RegisterPeripheral_Standard_64_Module3.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_64_TIMER_REGISTERPERIPHERAL_STANDARD_64_MODULE3_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_64_TIMER_REGISTERPERIPHERAL_STANDARD_64_MODULE3_H_

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral/TIMER_StructPeripheral_Standard.h>

#define GPWTM3                    (((GPTM_TypeDef*)(GPWTM3_BASE)))

/******************************************************************************************
************************************ 1 GPTMCFG *********************************************
******************************************************************************************/
#define GPWTM3_GPTMCFG                   (((GPTMCFG_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMCFG_OFFSET )))
#define GPWTM3_GPTMCFG_R                 (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMCFG_OFFSET)))

/******************************************************************************************
************************************ 2 GPTMTAMR *********************************************
******************************************************************************************/
#define GPWTM3_GPTMTAMR                  (((GPTMTAMR_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMTAMR_OFFSET )))
#define GPWTM3_GPTMTAMR_R                (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMTAMR_OFFSET)))

/******************************************************************************************
************************************ 3 GPTMTBMR *********************************************
******************************************************************************************/
#define GPWTM3_GPTMTBMR                  (((GPTMTBMR_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMTBMR_OFFSET )))
#define GPWTM3_GPTMTBMR_R                (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMTBMR_OFFSET)))


/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPWTM3_GPTMCTL                       (((GPTMCTL_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMCTL_OFFSET )))
#define GPWTM3_GPTMCTL_R                     (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMCTL_OFFSET)))

/******************************************************************************************
************************************ 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPWTM3_GPTMIMR                       (((GPTMIMR_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMIMR_OFFSET )))
#define GPWTM3_GPTMIMR_R                     (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMIMR_OFFSET)))

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPWTM3_GPTMRIS                       (((GPTMRIS_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMRIS_OFFSET )))
#define GPWTM3_GPTMRIS_R                     (*((volatile const uint32_t *)(GPWTM3_BASE +GPWTM_GPTMRIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPWTM3_GPTMMIS                       (((GPTMMIS_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMMIS_OFFSET )))
#define GPWTM3_GPTMMIS_R                     (*((volatile const uint32_t *)(GPWTM3_BASE +GPWTM_GPTMMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/
#define GPWTM3_GPTMICR                       (((GPTMICR_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMICR_OFFSET )))
#define GPWTM3_GPTMICR_R                     (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMICR_OFFSET)))

/******************************************************************************************
************************************ 10 GPTMTAILR *********************************************
******************************************************************************************/
#define GPWTM3_GPTMTAILR                         (((GPTMTAILR_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMTAILR_OFFSET )))
#define GPWTM3_GPTMTAILR_R                       (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMTAILR_OFFSET)))

/******************************************************************************************
************************************ 11 GPTMTBILR *********************************************
******************************************************************************************/
#define GPWTM3_GPTMTBILR                         (((GPTMTBILR_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMTBILR_OFFSET )))
#define GPWTM3_GPTMTBILR_R                       (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMTBILR_OFFSET)))

/******************************************************************************************
************************************ 12 GPTMTAMATCHR *********************************************
******************************************************************************************/
#define GPWTM3_GPTMTAMATCHR                          (((GPTMTAMATCHR_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMTAMATCHR_OFFSET )))
#define GPWTM3_GPTMTAMATCHR_R                        (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMTAMATCHR_OFFSET)))

/******************************************************************************************
************************************ 13 GPTMTBMATCHR *********************************************
******************************************************************************************/
#define GPWTM3_GPTMTBMATCHR                          (((GPTMTBMATCHR_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMTBMATCHR_OFFSET )))
#define GPWTM3_GPTMTBMATCHR_R                        (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMTBMATCHR_OFFSET)))

/******************************************************************************************
************************************ 14 GPTMTAPR *********************************************
******************************************************************************************/
#define GPWTM3_GPTMTAPR                          (((GPTMTAPR_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMTAPR_OFFSET )))
#define GPWTM3_GPTMTAPR_R                        (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMTAPR_OFFSET)))

/******************************************************************************************
************************************ 15 GPTMTBPR *********************************************
******************************************************************************************/
#define GPWTM3_GPTMTBPR                          (((GPTMTBPR_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMTBPR_OFFSET )))
#define GPWTM3_GPTMTBPR_R                        (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMTBPR_OFFSET)))

/******************************************************************************************
************************************ 16 GPTMTAPMR *********************************************
******************************************************************************************/
#define GPWTM3_GPTMTAPMR                          (((GPTMTAPMR_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMTAPMR_OFFSET )))
#define GPWTM3_GPTMTAPMR_R                        (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMTAPMR_OFFSET)))

/******************************************************************************************
************************************ 17 GPTMTBPMR *********************************************
******************************************************************************************/
#define GPWTM3_GPTMTBPMR                          (((GPTMTBPMR_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMTBPMR_OFFSET )))
#define GPWTM3_GPTMTBPMR_R                        (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMTBPMR_OFFSET)))

/******************************************************************************************
************************************ 18 GPTMTAR *********************************************
******************************************************************************************/
#define GPWTM3_GPTMTAR                          (((GPTMTAR_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMTAR_OFFSET )))
#define GPWTM3_GPTMTAR_R                        (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMTAR_OFFSET)))

/******************************************************************************************
************************************ 19 GPTMTBR *********************************************
******************************************************************************************/
#define GPWTM3_GPTMTBR                          (((GPTMTBR_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMTBR_OFFSET )))
#define GPWTM3_GPTMTBR_R                        (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMTBR_OFFSET)))

/******************************************************************************************
************************************ 20 GPTMTAV *********************************************
******************************************************************************************/
#define GPWTM3_GPTMTAV                          (((GPTMTAV_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMTAV_OFFSET )))
#define GPWTM3_GPTMTAV_R                        (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMTAV_OFFSET)))

/******************************************************************************************
************************************ 21 GPTMTBV *********************************************
******************************************************************************************/
#define GPWTM3_GPTMTBV                          (((GPTMTBV_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMTBV_OFFSET )))
#define GPWTM3_GPTMTBV_R                        (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMTBV_OFFSET)))

/******************************************************************************************
************************************ 22 GPTMRTCPD *********************************************
******************************************************************************************/
#define GPWTM3_GPTMRTCPD                          (((GPTMRTCPD_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMRTCPD_OFFSET )))
#define GPWTM3_GPTMRTCPD_R                        (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMRTCPD_OFFSET)))

/******************************************************************************************
************************************ 23 GPTMTAPS *********************************************
******************************************************************************************/
#define GPWTM3_GPTMTAPS                          (((GPTMTAPS_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMTAPS_OFFSET )))
#define GPWTM3_GPTMTAPS_R                        (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMTAPS_OFFSET)))

/******************************************************************************************
************************************ 24 GPTMTBPS *********************************************
******************************************************************************************/
#define GPWTM3_GPTMTBPS                          (((GPTMTBPS_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMTBPS_OFFSET )))
#define GPWTM3_GPTMTBPS_R                        (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMTBPS_OFFSET)))

/******************************************************************************************
************************************ 25 GPTMTAPV *********************************************
******************************************************************************************/
#define GPWTM3_GPTMTAPV                          (((GPTMTAPV_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMTAPV_OFFSET )))
#define GPWTM3_GPTMTAPV_R                        (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMTAPV_OFFSET)))

/******************************************************************************************
************************************ 26 GPTMTBPV *********************************************
******************************************************************************************/
#define GPWTM3_GPTMTBPV                          (((GPTMTBPV_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMTBPV_OFFSET )))
#define GPWTM3_GPTMTBPV_R                        (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMTBPV_OFFSET)))

/******************************************************************************************
************************************ 27 GPTMPP *********************************************
******************************************************************************************/
#define GPWTM3_GPTMPP                   (((GPTMPP_TypeDef*)(GPWTM3_BASE + GPWTM_GPTMPP_OFFSET )))
#define GPWTM3_GPTMPP_R                 (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_GPTMPP_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_64_TIMER_REGISTERPERIPHERAL_STANDARD_64_MODULE3_H_ */
