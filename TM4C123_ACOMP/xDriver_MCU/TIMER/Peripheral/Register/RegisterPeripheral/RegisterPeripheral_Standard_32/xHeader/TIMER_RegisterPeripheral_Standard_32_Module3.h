/**
 *
 * @file TIMER_RegisterPeripheral_Standard_32_Module3.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE3_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE3_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Standard.h>

#define GPTM3    (((GPTM_TypeDef*) (GPTM3_BASE)))

/******************************************************************************************
************************************ 1 GPTMCFG *********************************************
******************************************************************************************/
#define GPTM3_GPTMCFG    ((GPTMCFG_TypeDef*) (GPTM3_BASE + GPTM_GPTMCFG_OFFSET))
#define GPTM3_GPTMCFG_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMCFG_OFFSET)))

/******************************************************************************************
************************************ 2 GPTMTAMR *********************************************
******************************************************************************************/
#define GPTM3_GPTMTAMR    ((GPTMTAMR_TypeDef*) (GPTM3_BASE + GPTM_GPTMTAMR_OFFSET))
#define GPTM3_GPTMTAMR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMTAMR_OFFSET)))

/******************************************************************************************
************************************ 3 GPTMTBMR *********************************************
******************************************************************************************/
#define GPTM3_GPTMTBMR    ((GPTMTBMR_TypeDef*) (GPTM3_BASE + GPTM_GPTMTBMR_OFFSET))
#define GPTM3_GPTMTBMR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMTBMR_OFFSET)))


/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPTM3_GPTMCTL    ((GPTMCTL_TypeDef*) (GPTM3_BASE + GPTM_GPTMCTL_OFFSET))
#define GPTM3_GPTMCTL_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMCTL_OFFSET)))

/******************************************************************************************
************************************ 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPTM3_GPTMIMR    ((GPTMIMR_TypeDef*) (GPTM3_BASE + GPTM_GPTMIMR_OFFSET))
#define GPTM3_GPTMIMR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMIMR_OFFSET)))

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPTM3_GPTMRIS    ((GPTMRIS_TypeDef*) (GPTM3_BASE + GPTM_GPTMRIS_OFFSET))
#define GPTM3_GPTMRIS_R    (*((volatile const uint32_t*) (GPTM3_BASE + GPTM_GPTMRIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPTM3_GPTMMIS    ((GPTMMIS_TypeDef*) (GPTM3_BASE + GPTM_GPTMMIS_OFFSET))
#define GPTM3_GPTMMIS_R    (*((volatile const uint32_t*) (GPTM3_BASE + GPTM_GPTMMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/
#define GPTM3_GPTMICR    ((GPTMICR_TypeDef*) (GPTM3_BASE + GPTM_GPTMICR_OFFSET))
#define GPTM3_GPTMICR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMICR_OFFSET)))

/******************************************************************************************
************************************ 10 GPTMTAILR *********************************************
******************************************************************************************/
#define GPTM3_GPTMTAILR    ((GPTMTAILR_TypeDef*) (GPTM3_BASE + GPTM_GPTMTAILR_OFFSET))
#define GPTM3_GPTMTAILR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMTAILR_OFFSET)))

/******************************************************************************************
************************************ 11 GPTMTBILR *********************************************
******************************************************************************************/
#define GPTM3_GPTMTBILR    ((GPTMTBILR_TypeDef*) (GPTM3_BASE + GPTM_GPTMTBILR_OFFSET))
#define GPTM3_GPTMTBILR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMTBILR_OFFSET)))

/******************************************************************************************
************************************ 12 GPTMTAMATCHR *********************************************
******************************************************************************************/
#define GPTM3_GPTMTAMATCHR    ((GPTMTAMATCHR_TypeDef*) (GPTM3_BASE + GPTM_GPTMTAMATCHR_OFFSET))
#define GPTM3_GPTMTAMATCHR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMTAMATCHR_OFFSET)))

/******************************************************************************************
************************************ 13 GPTMTBMATCHR *********************************************
******************************************************************************************/
#define GPTM3_GPTMTBMATCHR    ((GPTMTBMATCHR_TypeDef*) (GPTM3_BASE + GPTM_GPTMTBMATCHR_OFFSET))
#define GPTM3_GPTMTBMATCHR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMTBMATCHR_OFFSET)))

/******************************************************************************************
************************************ 14 GPTMTAPR *********************************************
******************************************************************************************/
#define GPTM3_GPTMTAPR    ((GPTMTAPR_TypeDef*) (GPTM3_BASE + GPTM_GPTMTAPR_OFFSET))
#define GPTM3_GPTMTAPR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMTAPR_OFFSET)))

/******************************************************************************************
************************************ 15 GPTMTBPR *********************************************
******************************************************************************************/
#define GPTM3_GPTMTBPR    ((GPTMTBPR_TypeDef*) (GPTM3_BASE + GPTM_GPTMTBPR_OFFSET))
#define GPTM3_GPTMTBPR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMTBPR_OFFSET)))

/******************************************************************************************
************************************ 16 GPTMTAPMR *********************************************
******************************************************************************************/
#define GPTM3_GPTMTAPMR    ((GPTMTAPMR_TypeDef*) (GPTM3_BASE + GPTM_GPTMTAPMR_OFFSET))
#define GPTM3_GPTMTAPMR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMTAPMR_OFFSET)))

/******************************************************************************************
************************************ 17 GPTMTBPMR *********************************************
******************************************************************************************/
#define GPTM3_GPTMTBPMR    ((GPTMTBPMR_TypeDef*) (GPTM3_BASE + GPTM_GPTMTBPMR_OFFSET))
#define GPTM3_GPTMTBPMR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMTBPMR_OFFSET)))

/******************************************************************************************
************************************ 18 GPTMTAR *********************************************
******************************************************************************************/
#define GPTM3_GPTMTAR    ((GPTMTAR_TypeDef*) (GPTM3_BASE + GPTM_GPTMTAR_OFFSET))
#define GPTM3_GPTMTAR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMTAR_OFFSET)))

/******************************************************************************************
************************************ 19 GPTMTBR *********************************************
******************************************************************************************/
#define GPTM3_GPTMTBR    ((GPTMTBR_TypeDef*) (GPTM3_BASE + GPTM_GPTMTBR_OFFSET))
#define GPTM3_GPTMTBR_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMTBR_OFFSET)))

/******************************************************************************************
************************************ 20 GPTMTAV *********************************************
******************************************************************************************/
#define GPTM3_GPTMTAV    ((GPTMTAV_TypeDef*) (GPTM3_BASE + GPTM_GPTMTAV_OFFSET))
#define GPTM3_GPTMTAV_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMTAV_OFFSET)))

/******************************************************************************************
************************************ 21 GPTMTBV *********************************************
******************************************************************************************/
#define GPTM3_GPTMTBV    ((GPTMTBV_TypeDef*) (GPTM3_BASE + GPTM_GPTMTBV_OFFSET))
#define GPTM3_GPTMTBV_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMTBV_OFFSET)))

/******************************************************************************************
************************************ 22 GPTMRTCPD *********************************************
******************************************************************************************/
#define GPTM3_GPTMRTCPD    ((GPTMRTCPD_TypeDef*) (GPTM3_BASE + GPTM_GPTMRTCPD_OFFSET))
#define GPTM3_GPTMRTCPD_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMRTCPD_OFFSET)))

/******************************************************************************************
************************************ 23 GPTMTAPS *********************************************
******************************************************************************************/
#define GPTM3_GPTMTAPS    ((GPTMTAPS_TypeDef*) (GPTM3_BASE + GPTM_GPTMTAPS_OFFSET))
#define GPTM3_GPTMTAPS_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMTAPS_OFFSET)))

/******************************************************************************************
************************************ 24 GPTMTBPS *********************************************
******************************************************************************************/
#define GPTM3_GPTMTBPS    ((GPTMTBPS_TypeDef*) (GPTM3_BASE + GPTM_GPTMTBPS_OFFSET))
#define GPTM3_GPTMTBPS_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMTBPS_OFFSET)))

/******************************************************************************************
************************************ 25 GPTMTAPV *********************************************
******************************************************************************************/
#define GPTM3_GPTMTAPV    ((GPTMTAPV_TypeDef*) (GPTM3_BASE + GPTM_GPTMTAPV_OFFSET))
#define GPTM3_GPTMTAPV_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMTAPV_OFFSET)))

/******************************************************************************************
************************************ 26 GPTMTBPV *********************************************
******************************************************************************************/
#define GPTM3_GPTMTBPV    ((GPTMTBPV_TypeDef*) (GPTM3_BASE + GPTM_GPTMTBPV_OFFSET))
#define GPTM3_GPTMTBPV_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMTBPV_OFFSET)))

/******************************************************************************************
************************************ 27 GPTMPP *********************************************
******************************************************************************************/
#define GPTM3_GPTMPP    ((GPTMPP_TypeDef*) (GPTM3_BASE + GPTM_GPTMPP_OFFSET))
#define GPTM3_GPTMPP_R    (*((volatile uint32_t*) (GPTM3_BASE + GPTM_GPTMPP_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_STANDARD_32_TIMER_REGISTERPERIPHERAL_STANDARD_32_MODULE3_H_ */
