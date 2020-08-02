/**
 *
 * @file WDT_RegisterPeripheral_Module1.h
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
 * @verbatim 19 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_WDT_REGISTERPERIPHERAL_MODULE1_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_WDT_REGISTERPERIPHERAL_MODULE1_H_

#include <xDriver_MCU/WDT/Header/Peripheral/Register/WDT_RegisterAddress.h>
#include <xDriver_MCU/WDT/Header/Peripheral/Register/WDT_RegisterDefines.h>
#include <xDriver_MCU/WDT/Header/Peripheral/Struct/WDT_StructPeripheral.h>

/******************************************************************************************
************************************ WDT1 *********************************************
******************************************************************************************/
#define WDT1              (((WDT_TypeDef*)(WDT1_BASE)))

/******************************************************************************************
************************************ 1 WDTLOAD *********************************************
******************************************************************************************/
#define WDT1_WDTLOAD            (((WDTLOAD_TypeDef*)(WDT1_BASE + WDT_WDTLOAD_OFFSET )))
#define WDT1_WDTLOAD_R          (*((volatile uint32_t *)(WDT1_BASE +WDT_WDTLOAD_OFFSET)))

/******************************************************************************************
************************************ 2 WDTVALUE *********************************************
******************************************************************************************/
#define WDT1_WDTVALUE            (((WDTVALUE_TypeDef*)(WDT1_BASE + WDT_WDTVALUE_OFFSET )))
#define WDT1_WDTVALUE_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTVALUE_OFFSET)))

/******************************************************************************************
************************************ 3 WDTCTL *********************************************
******************************************************************************************/
#define WDT1_WDTCTL            (((WDTCTL_TypeDef*)(WDT1_BASE + WDT_WDTCTL_OFFSET )))
#define WDT1_WDTCTL_R          (*((volatile uint32_t *)(WDT1_BASE +WDT_WDTCTL_OFFSET)))

/******************************************************************************************
************************************ 4 WDTICR *********************************************
******************************************************************************************/
#define WDT1_WDTICR            (((WDTICR_TypeDef*)(WDT1_BASE + WDT_WDTICR_OFFSET )))
#define WDT1_WDTICR_R          (*((volatile uint32_t *)(WDT1_BASE +WDT_WDTICR_OFFSET)))

/******************************************************************************************
************************************ 5 WDTRIS *********************************************
******************************************************************************************/
#define WDT1_WDTRIS            (((WDTRIS_TypeDef*)(WDT1_BASE + WDT_WDTRIS_OFFSET )))
#define WDT1_WDTRIS_R          (*((volatile uint32_t *)(WDT1_BASE +WDT_WDTRIS_OFFSET)))

/******************************************************************************************
************************************ 6 WDTMIS *********************************************
******************************************************************************************/
#define WDT1_WDTMIS            (((WDTMIS_TypeDef*)(WDT1_BASE + WDT_WDTMIS_OFFSET )))
#define WDT1_WDTMIS_R          (*((volatile uint32_t *)(WDT1_BASE +WDT_WDTMIS_OFFSET)))

/******************************************************************************************
************************************ 7 WDTTEST *********************************************
******************************************************************************************/
#define WDT1_WDTTEST            (((WDTTEST_TypeDef*)(WDT1_BASE + WDT_WDTTEST_OFFSET )))
#define WDT1_WDTTEST_R          (*((volatile uint32_t *)(WDT1_BASE +WDT_WDTTEST_OFFSET)))

/******************************************************************************************
************************************ 8 WDTLOCK *********************************************
******************************************************************************************/
#define WDT1_WDTLOCK            (((WDTLOCK_TypeDef*)(WDT1_BASE + WDT_WDTLOCK_OFFSET )))
#define WDT1_WDTLOCK_R          (*((volatile uint32_t *)(WDT1_BASE +WDT_WDTLOCK_OFFSET)))

/******************************************************************************************
************************************ 9 WDTPeriphID4 *********************************************
******************************************************************************************/
#define WDT1_WDTPeriphID4            (((WDTPeriphID4_TypeDef*)(WDT1_BASE + WDT_WDTPeriphID4_OFFSET )))
#define WDT1_WDTPeriphID4_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPeriphID4_OFFSET)))

/******************************************************************************************
************************************ 10 WDTPeriphID5 *********************************************
******************************************************************************************/
#define WDT1_WDTPeriphID5            (((WDTPeriphID5_TypeDef*)(WDT1_BASE + WDT_WDTPeriphID5_OFFSET )))
#define WDT1_WDTPeriphID5_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPeriphID5_OFFSET)))

/******************************************************************************************
************************************ 11 WDTPeriphID6 *********************************************
******************************************************************************************/
#define WDT1_WDTPeriphID6            (((WDTPeriphID6_TypeDef*)(WDT1_BASE + WDT_WDTPeriphID6_OFFSET )))
#define WDT1_WDTPeriphID6_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPeriphID6_OFFSET)))

/******************************************************************************************
************************************ 12 WDTPeriphID7 *********************************************
******************************************************************************************/
#define WDT1_WDTPeriphID7            (((WDTPeriphID7_TypeDef*)(WDT1_BASE + WDT_WDTPeriphID7_OFFSET )))
#define WDT1_WDTPeriphID7_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPeriphID7_OFFSET)))

/******************************************************************************************
************************************ 13 WDTPeriphID0 *********************************************
******************************************************************************************/
#define WDT1_WDTPeriphID0            (((WDTPeriphID0_TypeDef*)(WDT1_BASE + WDT_WDTPeriphID0_OFFSET )))
#define WDT1_WDTPeriphID0_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPeriphID0_OFFSET)))

/******************************************************************************************
************************************ 14 WDTPeriphID1 *********************************************
******************************************************************************************/
#define WDT1_WDTPeriphID1            (((WDTPeriphID1_TypeDef*)(WDT1_BASE + WDT_WDTPeriphID1_OFFSET )))
#define WDT1_WDTPeriphID1_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPeriphID1_OFFSET)))

/******************************************************************************************
************************************ 15 WDTPeriphID2 *********************************************
******************************************************************************************/
#define WDT1_WDTPeriphID2            (((WDTPeriphID2_TypeDef*)(WDT1_BASE + WDT_WDTPeriphID2_OFFSET )))
#define WDT1_WDTPeriphID2_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPeriphID2_OFFSET)))

/******************************************************************************************
************************************ 16 WDTPeriphID3 *********************************************
******************************************************************************************/
#define WDT1_WDTPeriphID3            (((WDTPeriphID3_TypeDef*)(WDT1_BASE + WDT_WDTPeriphID3_OFFSET )))
#define WDT1_WDTPeriphID3_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPeriphID3_OFFSET)))

/******************************************************************************************
************************************ 17 WDTPCellID0 *********************************************
******************************************************************************************/
#define WDT1_WDTPCellID0            (((WDTPCellID0_TypeDef*)(WDT1_BASE + WDT_WDTPCellID0_OFFSET )))
#define WDT1_WDTPCellID0_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPCellID0_OFFSET)))


/******************************************************************************************
************************************ 18 WDTPCellID1 *********************************************
******************************************************************************************/
#define WDT1_WDTPCellID1            (((WDTPCellID1_TypeDef*)(WDT1_BASE + WDT_WDTPCellID1_OFFSET )))
#define WDT1_WDTPCellID1_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPCellID1_OFFSET)))

/******************************************************************************************
************************************ 19 WDTPCellID2 *********************************************
******************************************************************************************/
#define WDT1_WDTPCellID2            (((WDTPCellID2_TypeDef*)(WDT1_BASE + WDT_WDTPCellID2_OFFSET )))
#define WDT1_WDTPCellID2_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPCellID2_OFFSET)))

/******************************************************************************************
************************************ 20 WDTPCellID3 *********************************************
******************************************************************************************/
#define WDT1_WDTPCellID3            (((WDTPCellID3_TypeDef*)(WDT1_BASE + WDT_WDTPCellID3_OFFSET )))
#define WDT1_WDTPCellID3_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPCellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_WDT_REGISTERPERIPHERAL_MODULE1_H_ */
