/**
 *
 * @file QEI_RegisterPeripheral_Module1.h
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

#ifndef XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_QEI_REGISTERPERIPHERAL_MODULE1_H_
#define XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_QEI_REGISTERPERIPHERAL_MODULE1_H_

#include <xDriver_MCU/QEI/Peripheral/Register/xHeader/QEI_RegisterAddress.h>
#include <xDriver_MCU/QEI/Peripheral/Register/xHeader/QEI_RegisterDefines.h>
#include <xDriver_MCU/QEI/Peripheral/Struct/xHeader/QEI_StructPeripheral.h>

/******************************************************************************************
************************************ QEI *********************************************
******************************************************************************************/

#define QEI1    (((QEI_TypeDef*) (QEI1_BASE)))

/******************************************************************************************
************************************ 1 QEICTL *********************************************
******************************************************************************************/
#define QEI1_QEICTL    (((QEICTL_TypeDef*) (QEI1_BASE + QEI_QEICTL_OFFSET )))
#define QEI1_QEICTL_R    (*((volatile uint32_t*) (QEI1_BASE + QEI_QEICTL_OFFSET)))

/******************************************************************************************
************************************ 2 QEISTAT *********************************************
******************************************************************************************/
#define QEI1_QEISTAT    (((QEISTAT_TypeDef*) (QEI1_BASE + QEI_QEISTAT_OFFSET )))
#define QEI1_QEISTAT_R    (*((volatile const uint32_t*) (QEI1_BASE + QEI_QEISTAT_OFFSET)))

/******************************************************************************************
************************************ 3 QEIPOS *********************************************
******************************************************************************************/
#define QEI1_QEIPOS    (((QEIPOS_TypeDef*) (QEI1_BASE + QEI_QEIPOS_OFFSET )))
#define QEI1_QEIPOS_R    (*((volatile uint32_t*) (QEI1_BASE + QEI_QEIPOS_OFFSET)))

/******************************************************************************************
************************************ 4 QEIMAXPOS *********************************************
******************************************************************************************/
#define QEI1_QEIMAXPOS    (((QEIMAXPOS_TypeDef*) (QEI1_BASE + QEI_QEIMAXPOS_OFFSET )))
#define QEI1_QEIMAXPOS_R    (*((volatile uint32_t*) (QEI1_BASE + QEI_QEIMAXPOS_OFFSET)))

/******************************************************************************************
************************************ 5 QEILOAD *********************************************
******************************************************************************************/
#define QEI1_QEILOAD    (((QEILOAD_TypeDef*) (QEI1_BASE + QEI_QEILOAD_OFFSET )))
#define QEI1_QEILOAD_R    (*((volatile uint32_t*) (QEI1_BASE + QEI_QEILOAD_OFFSET)))

/******************************************************************************************
************************************ 6 QEITIME *********************************************
******************************************************************************************/
#define QEI1_QEITIME    (((QEITIME_TypeDef*) (QEI1_BASE + QEI_QEITIME_OFFSET )))
#define QEI1_QEITIME_R    (*((volatile const uint32_t*) (QEI1_BASE + QEI_QEITIME_OFFSET)))

/******************************************************************************************
************************************ 7 QEICOUNT *********************************************
******************************************************************************************/
#define QEI1_QEICOUNT    (((QEICOUNT_TypeDef*) (QEI1_BASE + QEI_QEICOUNT_OFFSET )))
#define QEI1_QEICOUNT_R    (*((volatile const uint32_t*) (QEI1_BASE + QEI_QEICOUNT_OFFSET)))

/******************************************************************************************
************************************ 8 QEISPEED *********************************************
******************************************************************************************/
#define QEI1_QEISPEED    (((QEISPEED_TypeDef*) (QEI1_BASE + QEI_QEISPEED_OFFSET )))
#define QEI1_QEISPEED_R    (*((volatile const uint32_t*) (QEI1_BASE + QEI_QEISPEED_OFFSET)))

/******************************************************************************************
************************************ 9 QEIINTEN *********************************************
******************************************************************************************/
#define QEI1_QEIINTEN    (((QEIINTEN_TypeDef*) (QEI1_BASE + QEI_QEIINTEN_OFFSET )))
#define QEI1_QEIINTEN_R    (*((volatile uint32_t*) (QEI1_BASE + QEI_QEIINTEN_OFFSET)))

/******************************************************************************************
************************************ 10 QEIRIS *********************************************
******************************************************************************************/
#define QEI1_QEIRIS    (((QEIRIS_TypeDef*) (QEI1_BASE + QEI_QEIRIS_OFFSET )))
#define QEI1_QEIRIS_R    (*((volatile const uint32_t*) (QEI1_BASE + QEI_QEIRIS_OFFSET)))

/******************************************************************************************
************************************ 11 QEIISC *********************************************
******************************************************************************************/
#define QEI1_QEIISC    (((QEIISC_TypeDef*) (QEI1_BASE + QEI_QEIISC_OFFSET )))
#define QEI1_QEIISC_R    (*((volatile uint32_t*) (QEI1_BASE + QEI_QEIISC_OFFSET)))


#endif /* XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_QEI_REGISTERPERIPHERAL_MODULE1_H_ */
