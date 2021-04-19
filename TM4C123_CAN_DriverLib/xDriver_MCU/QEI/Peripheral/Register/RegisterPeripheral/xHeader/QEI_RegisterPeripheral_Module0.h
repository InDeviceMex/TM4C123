/**
 *
 * @file QEI_RegisterPeripheral_Module0.h
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
 * @verbatim Apr 5, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 5, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_QEI_REGISTERPERIPHERAL_MODULE0_H_
#define XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_QEI_REGISTERPERIPHERAL_MODULE0_H_

#include <xDriver_MCU/QEI/Peripheral/Register/xHeader/QEI_RegisterAddress.h>
#include <xDriver_MCU/QEI/Peripheral/Register/xHeader/QEI_RegisterDefines.h>
#include <xDriver_MCU/QEI/Peripheral/Struct/xHeader/QEI_StructPeripheral.h>

/******************************************************************************************
************************************ QEI *********************************************
******************************************************************************************/

#define QEI0    (((QEI_TypeDef*) (QEI0_BASE)))

/******************************************************************************************
************************************ 1 QEICTL *********************************************
******************************************************************************************/
#define QEI0_QEICTL    (((QEICTL_TypeDef*) (QEI0_BASE + QEI_QEICTL_OFFSET )))
#define QEI0_QEICTL_R    (*((volatile uint32_t*) (QEI0_BASE + QEI_QEICTL_OFFSET)))

/******************************************************************************************
************************************ 2 QEISTAT *********************************************
******************************************************************************************/
#define QEI0_QEISTAT    (((QEISTAT_TypeDef*) (QEI0_BASE + QEI_QEISTAT_OFFSET )))
#define QEI0_QEISTAT_R    (*((volatile const uint32_t*) (QEI0_BASE + QEI_QEISTAT_OFFSET)))

/******************************************************************************************
************************************ 3 QEIPOS *********************************************
******************************************************************************************/
#define QEI0_QEIPOS    (((QEIPOS_TypeDef*) (QEI0_BASE + QEI_QEIPOS_OFFSET )))
#define QEI0_QEIPOS_R    (*((volatile uint32_t*) (QEI0_BASE + QEI_QEIPOS_OFFSET)))

/******************************************************************************************
************************************ 4 QEIMAXPOS *********************************************
******************************************************************************************/
#define QEI0_QEIMAXPOS    (((QEIMAXPOS_TypeDef*) (QEI0_BASE + QEI_QEIMAXPOS_OFFSET )))
#define QEI0_QEIMAXPOS_R    (*((volatile uint32_t*) (QEI0_BASE + QEI_QEIMAXPOS_OFFSET)))

/******************************************************************************************
************************************ 5 QEILOAD *********************************************
******************************************************************************************/
#define QEI0_QEILOAD    (((QEILOAD_TypeDef*) (QEI0_BASE + QEI_QEILOAD_OFFSET )))
#define QEI0_QEILOAD_R    (*((volatile uint32_t*) (QEI0_BASE + QEI_QEILOAD_OFFSET)))

/******************************************************************************************
************************************ 6 QEITIME *********************************************
******************************************************************************************/
#define QEI0_QEITIME    (((QEITIME_TypeDef*) (QEI0_BASE + QEI_QEITIME_OFFSET )))
#define QEI0_QEITIME_R    (*((volatile const uint32_t*) (QEI0_BASE + QEI_QEITIME_OFFSET)))

/******************************************************************************************
************************************ 7 QEICOUNT *********************************************
******************************************************************************************/
#define QEI0_QEICOUNT    (((QEICOUNT_TypeDef*) (QEI0_BASE + QEI_QEICOUNT_OFFSET )))
#define QEI0_QEICOUNT_R    (*((volatile const uint32_t*) (QEI0_BASE + QEI_QEICOUNT_OFFSET)))

/******************************************************************************************
************************************ 8 QEISPEED *********************************************
******************************************************************************************/
#define QEI0_QEISPEED    (((QEISPEED_TypeDef*) (QEI0_BASE + QEI_QEISPEED_OFFSET )))
#define QEI0_QEISPEED_R    (*((volatile const uint32_t*) (QEI0_BASE + QEI_QEISPEED_OFFSET)))

/******************************************************************************************
************************************ 9 QEIINTEN *********************************************
******************************************************************************************/
#define QEI0_QEIINTEN    (((QEIINTEN_TypeDef*) (QEI0_BASE + QEI_QEIINTEN_OFFSET )))
#define QEI0_QEIINTEN_R    (*((volatile uint32_t*) (QEI0_BASE + QEI_QEIINTEN_OFFSET)))

/******************************************************************************************
************************************ 10 QEIRIS *********************************************
******************************************************************************************/
#define QEI0_QEIRIS    (((QEIRIS_TypeDef*) (QEI0_BASE + QEI_QEIRIS_OFFSET )))
#define QEI0_QEIRIS_R    (*((volatile const uint32_t*) (QEI0_BASE + QEI_QEIRIS_OFFSET)))

/******************************************************************************************
************************************ 11 QEIISC *********************************************
******************************************************************************************/
#define QEI0_QEIISC    (((QEIISC_TypeDef*) (QEI0_BASE + QEI_QEIISC_OFFSET )))
#define QEI0_QEIISC_R    (*((volatile uint32_t*) (QEI0_BASE + QEI_QEIISC_OFFSET)))

#endif /* XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_QEI_REGISTERPERIPHERAL_MODULE0_H_ */
