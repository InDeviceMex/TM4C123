/**
 *
 * @file TIMER_RegisterPeripheral_Standard_32_Module5.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE5_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE5_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Standard.h>

#define GPTM5                    (((GPTM_TypeDef*)(GPTM5_BASE)))

/******************************************************************************************
************************************ 1 GPTMCFG *********************************************
******************************************************************************************/
#define GPTM5_GPTMCFG                   (((GPTMCFG_TypeDef*)(GPTM5_BASE + GPTM_GPTMCFG_OFFSET )))
#define GPTM5_GPTMCFG_R                 (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMCFG_OFFSET)))

/******************************************************************************************
************************************ 2 GPTMTAMR *********************************************
******************************************************************************************/
#define GPTM5_GPTMTAMR                  (((GPTMTAMR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTAMR_OFFSET )))
#define GPTM5_GPTMTAMR_R                (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTAMR_OFFSET)))

/******************************************************************************************
************************************ 3 GPTMTBMR *********************************************
******************************************************************************************/
#define GPTM5_GPTMTBMR                  (((GPTMTBMR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTBMR_OFFSET )))
#define GPTM5_GPTMTBMR_R                (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTBMR_OFFSET)))


/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPTM5_GPTMCTL                       (((GPTMCTL_TypeDef*)(GPTM5_BASE + GPTM_GPTMCTL_OFFSET )))
#define GPTM5_GPTMCTL_R                     (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMCTL_OFFSET)))

/******************************************************************************************
************************************ 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPTM5_GPTMIMR                       (((GPTMIMR_TypeDef*)(GPTM5_BASE + GPTM_GPTMIMR_OFFSET )))
#define GPTM5_GPTMIMR_R                     (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMIMR_OFFSET)))

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPTM5_GPTMRIS                       (((GPTMRIS_TypeDef*)(GPTM5_BASE + GPTM_GPTMRIS_OFFSET )))
#define GPTM5_GPTMRIS_R                     (*((volatile const uint32_t *)(GPTM5_BASE +GPTM_GPTMRIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPTM5_GPTMMIS                       (((GPTMMIS_TypeDef*)(GPTM5_BASE + GPTM_GPTMMIS_OFFSET )))
#define GPTM5_GPTMMIS_R                     (*((volatile const uint32_t *)(GPTM5_BASE +GPTM_GPTMMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/
#define GPTM5_GPTMICR                       (((GPTMICR_TypeDef*)(GPTM5_BASE + GPTM_GPTMICR_OFFSET )))
#define GPTM5_GPTMICR_R                     (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMICR_OFFSET)))

/******************************************************************************************
************************************ 10 GPTMTAILR *********************************************
******************************************************************************************/
#define GPTM5_GPTMTAILR                         (((GPTMTAILR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTAILR_OFFSET )))
#define GPTM5_GPTMTAILR_R                       (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTAILR_OFFSET)))

/******************************************************************************************
************************************ 11 GPTMTBILR *********************************************
******************************************************************************************/
#define GPTM5_GPTMTBILR                         (((GPTMTBILR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTBILR_OFFSET )))
#define GPTM5_GPTMTBILR_R                       (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTBILR_OFFSET)))

/******************************************************************************************
************************************ 12 GPTMTAMATCHR *********************************************
******************************************************************************************/
#define GPTM5_GPTMTAMATCHR                          (((GPTMTAMATCHR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTAMATCHR_OFFSET )))
#define GPTM5_GPTMTAMATCHR_R                        (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTAMATCHR_OFFSET)))

/******************************************************************************************
************************************ 13 GPTMTBMATCHR *********************************************
******************************************************************************************/
#define GPTM5_GPTMTBMATCHR                          (((GPTMTBMATCHR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTBMATCHR_OFFSET )))
#define GPTM5_GPTMTBMATCHR_R                        (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTBMATCHR_OFFSET)))

/******************************************************************************************
************************************ 14 GPTMTAPR *********************************************
******************************************************************************************/
#define GPTM5_GPTMTAPR                          (((GPTMTAPR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTAPR_OFFSET )))
#define GPTM5_GPTMTAPR_R                        (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTAPR_OFFSET)))

/******************************************************************************************
************************************ 15 GPTMTBPR *********************************************
******************************************************************************************/
#define GPTM5_GPTMTBPR                          (((GPTMTBPR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTBPR_OFFSET )))
#define GPTM5_GPTMTBPR_R                        (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTBPR_OFFSET)))

/******************************************************************************************
************************************ 16 GPTMTAPMR *********************************************
******************************************************************************************/
#define GPTM5_GPTMTAPMR                          (((GPTMTAPMR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTAPMR_OFFSET )))
#define GPTM5_GPTMTAPMR_R                        (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTAPMR_OFFSET)))

/******************************************************************************************
************************************ 17 GPTMTBPMR *********************************************
******************************************************************************************/
#define GPTM5_GPTMTBPMR                          (((GPTMTBPMR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTBPMR_OFFSET )))
#define GPTM5_GPTMTBPMR_R                        (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTBPMR_OFFSET)))

/******************************************************************************************
************************************ 18 GPTMTAR *********************************************
******************************************************************************************/
#define GPTM5_GPTMTAR                          (((GPTMTAR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTAR_OFFSET )))
#define GPTM5_GPTMTAR_R                        (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTAR_OFFSET)))

/******************************************************************************************
************************************ 19 GPTMTBR *********************************************
******************************************************************************************/
#define GPTM5_GPTMTBR                          (((GPTMTBR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTBR_OFFSET )))
#define GPTM5_GPTMTBR_R                        (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTBR_OFFSET)))

/******************************************************************************************
************************************ 20 GPTMTAV *********************************************
******************************************************************************************/
#define GPTM5_GPTMTAV                          (((GPTMTAV_TypeDef*)(GPTM5_BASE + GPTM_GPTMTAV_OFFSET )))
#define GPTM5_GPTMTAV_R                        (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTAV_OFFSET)))

/******************************************************************************************
************************************ 21 GPTMTBV *********************************************
******************************************************************************************/
#define GPTM5_GPTMTBV                          (((GPTMTBV_TypeDef*)(GPTM5_BASE + GPTM_GPTMTBV_OFFSET )))
#define GPTM5_GPTMTBV_R                        (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTBV_OFFSET)))

/******************************************************************************************
************************************ 22 GPTMRTCPD *********************************************
******************************************************************************************/
#define GPTM5_GPTMRTCPD                          (((GPTMRTCPD_TypeDef*)(GPTM5_BASE + GPTM_GPTMRTCPD_OFFSET )))
#define GPTM5_GPTMRTCPD_R                        (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMRTCPD_OFFSET)))

/******************************************************************************************
************************************ 23 GPTMTAPS *********************************************
******************************************************************************************/
#define GPTM5_GPTMTAPS                          (((GPTMTAPS_TypeDef*)(GPTM5_BASE + GPTM_GPTMTAPS_OFFSET )))
#define GPTM5_GPTMTAPS_R                        (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTAPS_OFFSET)))

/******************************************************************************************
************************************ 24 GPTMTBPS *********************************************
******************************************************************************************/
#define GPTM5_GPTMTBPS                          (((GPTMTBPS_TypeDef*)(GPTM5_BASE + GPTM_GPTMTBPS_OFFSET )))
#define GPTM5_GPTMTBPS_R                        (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTBPS_OFFSET)))

/******************************************************************************************
************************************ 25 GPTMTAPV *********************************************
******************************************************************************************/
#define GPTM5_GPTMTAPV                          (((GPTMTAPV_TypeDef*)(GPTM5_BASE + GPTM_GPTMTAPV_OFFSET )))
#define GPTM5_GPTMTAPV_R                        (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTAPV_OFFSET)))

/******************************************************************************************
************************************ 26 GPTMTBPV *********************************************
******************************************************************************************/
#define GPTM5_GPTMTBPV                          (((GPTMTBPV_TypeDef*)(GPTM5_BASE + GPTM_GPTMTBPV_OFFSET )))
#define GPTM5_GPTMTBPV_R                        (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTBPV_OFFSET)))

/******************************************************************************************
************************************ 27 GPTMPP *********************************************
******************************************************************************************/
#define GPTM5_GPTMPP                   (((GPTMPP_TypeDef*)(GPTM5_BASE + GPTM_GPTMPP_OFFSET )))
#define GPTM5_GPTMPP_R                 (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMPP_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE5_H_ */
