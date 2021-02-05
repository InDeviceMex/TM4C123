/**
 *
 * @file WDT_RegisterPeripheral_Bitbanding_Module1.h
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
 * Date           Author     Version     Description * 19 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_BITBANDING_WDT_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_BITBANDING_WDT_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_

#include <xDriver_MCU/WDT/Peripheral/Register/xHeader/WDT_RegisterAddress.h>
#include <xDriver_MCU/WDT/Peripheral/Register/xHeader/WDT_RegisterDefines.h>
#include <xDriver_MCU/WDT/Peripheral/Struct/xHeader/WDT_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ WDT1 *********************************************
******************************************************************************************/
#define WDT1_BITBANDING    ((WDT_BITBANDING_TypeDef*) (WDT_BITBANDING_BASE + (WDT1_OFFSET * 32UL)))

/******************************************************************************************
************************************ 1 WDTLOAD *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTLOAD     ((BITBANDING_WDTLOAD_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTLOAD_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 2 WDTVALUE *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTVALUE     ((BITBANDING_WDTVALUE_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTVALUE_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 3 WDTCTL *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTCTL     ((BITBANDING_WDTCTL_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTCTL_OFFSET) * 32UL)))

#define WDT1_BITBANDING_WDTCTL_INTEN    (*((volatile uint32_t*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTCTL_OFFSET) * 32UL) + (WDT_WDTCTL_R_INTEN_BIT * 4UL))))
#define WDT1_BITBANDING_WDTCTL_RESEN    (*((volatile uint32_t*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTCTL_OFFSET) * 32UL) + (WDT_WDTCTL_R_RESEN_BIT * 4UL))))
#define WDT1_BITBANDING_WDTCTL_INTTYPE    (*((volatile uint32_t*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTCTL_OFFSET) * 32UL) + (WDT_WDTCTL_R_INTTYPE_BIT * 4UL))))
#define WDT1_BITBANDING_WDTCTL_WRC    (*((volatile uint32_t*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTCTL_OFFSET) * 32UL) + (WDT_WDTCTL_R_WRC_BIT * 4UL))))

/******************************************************************************************
************************************ 4 WDTICR *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTICR     ((BITBANDING_WDTICR_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTICR_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 5 WDTRIS *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTRIS     ((BITBANDING_WDTRIS_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTRIS_OFFSET) * 32UL)))

#define WDT1_BITBANDING_WDTRIS_WDTRIS    (*((volatile uint32_t*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTRIS_OFFSET) * 32UL) + (WDT_WDTRIS_R_WDTRIS_BIT * 4UL))))

/******************************************************************************************
************************************ 6 WDTMIS *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTMIS     ((BITBANDING_WDTMIS_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTMIS_OFFSET) * 32UL)))

#define WDT1_BITBANDING_WDTMIS_WDTMIS    (*((volatile uint32_t*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTMIS_OFFSET) * 32UL) + (WDT_WDTMIS_R_WDTMIS_BIT * 4UL))))

/******************************************************************************************
************************************ 7 WDTTEST *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTTEST     ((BITBANDING_WDTTEST_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTTEST_OFFSET) * 32UL)))

#define WDT1_BITBANDING_STALL_WDTTEST    (*((volatile uint32_t*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTTEST_OFFSET) * 32UL) + (WDT_WDTTEST_R_STALL_BIT * 4UL))))

/******************************************************************************************
************************************ 8 WDTLOCK *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTLOCK     ((BITBANDING_WDTLOCK_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTLOCK_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 9 WDTPeriphID4 *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTPeriphID4     ((BITBANDING_WDTPeriphID4_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTPeriphID4_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 10 WDTPeriphID5 *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTPeriphID5     ((BITBANDING_WDTPeriphID5_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTPeriphID5_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 11 WDTPeriphID6 *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTPeriphID6     ((BITBANDING_WDTPeriphID6_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTPeriphID6_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 12 WDTPeriphID7 *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTPeriphID7     ((BITBANDING_WDTPeriphID7_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTPeriphID7_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 13 WDTPeriphID0 *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTPeriphID0     ((BITBANDING_WDTPeriphID0_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTPeriphID0_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 14 WDTPeriphID1 *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTPeriphID1     ((BITBANDING_WDTPeriphID1_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTPeriphID1_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 15 WDTPeriphID2 *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTPeriphID2     ((BITBANDING_WDTPeriphID2_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTPeriphID2_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 16 WDTPeriphID3 *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTPeriphID3     ((BITBANDING_WDTPeriphID3_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTPeriphID3_OFFSET) * 32UL)))

/*****************************************************************************************
************************************ 17 WDTPCellID0 *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTPCellID0     ((BITBANDING_WDTPCellID0_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTPCellID0_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 18 WDTPCellID1 *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTPCellID1     ((BITBANDING_WDTPCellID1_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTPCellID1_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 19 WDTPCellID2 *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTPCellID2     ((BITBANDING_WDTPCellID2_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTPCellID2_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 20 WDTPCellID3 *********************************************
******************************************************************************************/
#define WDT1_BITBANDING_WDTPCellID3     ((BITBANDING_WDTPCellID3_TypeDef*) (WDT_BITBANDING_BASE + ((WDT1_OFFSET + WDT_WDTPCellID3_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_BITBANDING_WDT_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_ */
