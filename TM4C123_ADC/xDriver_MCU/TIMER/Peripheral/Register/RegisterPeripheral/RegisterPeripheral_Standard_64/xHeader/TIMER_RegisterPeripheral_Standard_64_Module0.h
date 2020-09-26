/**
 *
 * @file TIMER_RegisterPeripheral_Standard_64_Module0.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_64_TIMER_REGISTERPERIPHERAL_STANDARD_64_MODULE0_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_64_TIMER_REGISTERPERIPHERAL_STANDARD_64_MODULE0_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Standard.h>

#define GPWTM0                    (((GPTM_TypeDef*)(GPWTM0_BASE)))

/******************************************************************************************
************************************ 1 GPTMCFG *********************************************
******************************************************************************************/
#define GPWTM0_GPTMCFG                   (((GPTMCFG_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMCFG_OFFSET )))
#define GPWTM0_GPTMCFG_R                 (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMCFG_OFFSET)))

/******************************************************************************************
************************************ 2 GPTMTAMR *********************************************
******************************************************************************************/
#define GPWTM0_GPTMTAMR                  (((GPTMTAMR_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMTAMR_OFFSET )))
#define GPWTM0_GPTMTAMR_R                (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMTAMR_OFFSET)))

/******************************************************************************************
************************************ 3 GPTMTBMR *********************************************
******************************************************************************************/
#define GPWTM0_GPTMTBMR                  (((GPTMTBMR_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMTBMR_OFFSET )))
#define GPWTM0_GPTMTBMR_R                (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMTBMR_OFFSET)))


/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPWTM0_GPTMCTL                       (((GPTMCTL_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMCTL_OFFSET )))
#define GPWTM0_GPTMCTL_R                     (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMCTL_OFFSET)))

/******************************************************************************************
************************************ 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPWTM0_GPTMIMR                       (((GPTMIMR_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMIMR_OFFSET )))
#define GPWTM0_GPTMIMR_R                     (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMIMR_OFFSET)))

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPWTM0_GPTMRIS                       (((GPTMRIS_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMRIS_OFFSET )))
#define GPWTM0_GPTMRIS_R                     (*((volatile const uint32_t *)(GPWTM0_BASE +GPWTM_GPTMRIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPWTM0_GPTMMIS                       (((GPTMMIS_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMMIS_OFFSET )))
#define GPWTM0_GPTMMIS_R                     (*((volatile const uint32_t *)(GPWTM0_BASE +GPWTM_GPTMMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/
#define GPWTM0_GPTMICR                       (((GPTMICR_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMICR_OFFSET )))
#define GPWTM0_GPTMICR_R                     (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMICR_OFFSET)))

/******************************************************************************************
************************************ 10 GPTMTAILR *********************************************
******************************************************************************************/
#define GPWTM0_GPTMTAILR                         (((GPTMTAILR_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMTAILR_OFFSET )))
#define GPWTM0_GPTMTAILR_R                       (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMTAILR_OFFSET)))

/******************************************************************************************
************************************ 11 GPTMTBILR *********************************************
******************************************************************************************/
#define GPWTM0_GPTMTBILR                         (((GPTMTBILR_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMTBILR_OFFSET )))
#define GPWTM0_GPTMTBILR_R                       (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMTBILR_OFFSET)))

/******************************************************************************************
************************************ 12 GPTMTAMATCHR *********************************************
******************************************************************************************/
#define GPWTM0_GPTMTAMATCHR                          (((GPTMTAMATCHR_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMTAMATCHR_OFFSET )))
#define GPWTM0_GPTMTAMATCHR_R                        (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMTAMATCHR_OFFSET)))

/******************************************************************************************
************************************ 13 GPTMTBMATCHR *********************************************
******************************************************************************************/
#define GPWTM0_GPTMTBMATCHR                          (((GPTMTBMATCHR_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMTBMATCHR_OFFSET )))
#define GPWTM0_GPTMTBMATCHR_R                        (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMTBMATCHR_OFFSET)))

/******************************************************************************************
************************************ 14 GPTMTAPR *********************************************
******************************************************************************************/
#define GPWTM0_GPTMTAPR                          (((GPTMTAPR_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMTAPR_OFFSET )))
#define GPWTM0_GPTMTAPR_R                        (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMTAPR_OFFSET)))

/******************************************************************************************
************************************ 15 GPTMTBPR *********************************************
******************************************************************************************/
#define GPWTM0_GPTMTBPR                          (((GPTMTBPR_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMTBPR_OFFSET )))
#define GPWTM0_GPTMTBPR_R                        (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMTBPR_OFFSET)))

/******************************************************************************************
************************************ 16 GPTMTAPMR *********************************************
******************************************************************************************/
#define GPWTM0_GPTMTAPMR                          (((GPTMTAPMR_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMTAPMR_OFFSET )))
#define GPWTM0_GPTMTAPMR_R                        (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMTAPMR_OFFSET)))

/******************************************************************************************
************************************ 17 GPTMTBPMR *********************************************
******************************************************************************************/
#define GPWTM0_GPTMTBPMR                          (((GPTMTBPMR_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMTBPMR_OFFSET )))
#define GPWTM0_GPTMTBPMR_R                        (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMTBPMR_OFFSET)))

/******************************************************************************************
************************************ 18 GPTMTAR *********************************************
******************************************************************************************/
#define GPWTM0_GPTMTAR                          (((GPTMTAR_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMTAR_OFFSET )))
#define GPWTM0_GPTMTAR_R                        (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMTAR_OFFSET)))

/******************************************************************************************
************************************ 19 GPTMTBR *********************************************
******************************************************************************************/
#define GPWTM0_GPTMTBR                          (((GPTMTBR_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMTBR_OFFSET )))
#define GPWTM0_GPTMTBR_R                        (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMTBR_OFFSET)))

/******************************************************************************************
************************************ 20 GPTMTAV *********************************************
******************************************************************************************/
#define GPWTM0_GPTMTAV                          (((GPTMTAV_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMTAV_OFFSET )))
#define GPWTM0_GPTMTAV_R                        (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMTAV_OFFSET)))

/******************************************************************************************
************************************ 21 GPTMTBV *********************************************
******************************************************************************************/
#define GPWTM0_GPTMTBV                          (((GPTMTBV_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMTBV_OFFSET )))
#define GPWTM0_GPTMTBV_R                        (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMTBV_OFFSET)))

/******************************************************************************************
************************************ 22 GPTMRTCPD *********************************************
******************************************************************************************/
#define GPWTM0_GPTMRTCPD                          (((GPTMRTCPD_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMRTCPD_OFFSET )))
#define GPWTM0_GPTMRTCPD_R                        (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMRTCPD_OFFSET)))

/******************************************************************************************
************************************ 23 GPTMTAPS *********************************************
******************************************************************************************/
#define GPWTM0_GPTMTAPS                          (((GPTMTAPS_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMTAPS_OFFSET )))
#define GPWTM0_GPTMTAPS_R                        (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMTAPS_OFFSET)))

/******************************************************************************************
************************************ 24 GPTMTBPS *********************************************
******************************************************************************************/
#define GPWTM0_GPTMTBPS                          (((GPTMTBPS_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMTBPS_OFFSET )))
#define GPWTM0_GPTMTBPS_R                        (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMTBPS_OFFSET)))

/******************************************************************************************
************************************ 25 GPTMTAPV *********************************************
******************************************************************************************/
#define GPWTM0_GPTMTAPV                          (((GPTMTAPV_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMTAPV_OFFSET )))
#define GPWTM0_GPTMTAPV_R                        (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMTAPV_OFFSET)))

/******************************************************************************************
************************************ 26 GPTMTBPV *********************************************
******************************************************************************************/
#define GPWTM0_GPTMTBPV                          (((GPTMTBPV_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMTBPV_OFFSET )))
#define GPWTM0_GPTMTBPV_R                        (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMTBPV_OFFSET)))

/******************************************************************************************
************************************ 27 GPTMPP *********************************************
******************************************************************************************/
#define GPWTM0_GPTMPP                   (((GPTMPP_TypeDef*)(GPWTM0_BASE + GPWTM_GPTMPP_OFFSET )))
#define GPWTM0_GPTMPP_R                 (*((volatile uint32_t *)(GPWTM0_BASE +GPWTM_GPTMPP_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_64_TIMER_REGISTERPERIPHERAL_STANDARD_64_MODULE0_H_ */
