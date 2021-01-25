/**
 *
 * @file WDT_RegisterDefines.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERDEFINES_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERDEFINES_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 1 WDTLOAD *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTLOAD_R_WDTLOAD_MASK      ((uint32_t)0xFFFFFFFFU)
#define WDT_WDTLOAD_R_WDTLOAD_BIT       ((uint32_t)0U)

#define WDT_WDTLOAD_WDTLOAD_MASK        ((uint32_t)0xFFFFFFFFU)
/*--------*/

/******************************************************************************************
************************************ 2 WDTVALUE *********************************************
******************************************************************************************/
/*--------*/
#define WDT_WDTVALUE_R_WDTVALUE_MASK      ((uint32_t)0xFFFFFFFFU)
#define WDT_WDTVALUE_R_WDTVALUE_BIT       ((uint32_t)0U)

#define WDT_WDTVALUE_WDTVALUE_MASK        ((uint32_t)0xFFFFFFFFU)
/*--------*/

/******************************************************************************************
************************************ 3 WDTCTL *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTCTL_R_INTEN_MASK      ((uint32_t)0x00000001U)
#define WDT_WDTCTL_R_INTEN_BIT       ((uint32_t)0U)
#define WDT_WDTCTL_R_INTEN_DIS       ((uint32_t)0x00000000U)
#define WDT_WDTCTL_R_INTEN_EN        ((uint32_t)0x00000001U)

#define WDT_WDTCTL_INTEN_MASK        ((uint32_t)0x00000001U)
#define WDT_WDTCTL_INTEN_DIS         ((uint32_t)0x00000000U)
#define WDT_WDTCTL_INTEN_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define WDT_WDTCTL_R_RESEN_MASK      ((uint32_t)0x00000002U)
#define WDT_WDTCTL_R_RESEN_BIT       ((uint32_t)1U)
#define WDT_WDTCTL_R_RESEN_DIS       ((uint32_t)0x00000000U)
#define WDT_WDTCTL_R_RESEN_EN        ((uint32_t)0x00000002U)

#define WDT_WDTCTL_RESEN_MASK        ((uint32_t)0x00000001U)
#define WDT_WDTCTL_RESEN_DIS         ((uint32_t)0x00000000U)
#define WDT_WDTCTL_RESEN_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define WDT_WDTCTL_R_INTTYPE_MASK      ((uint32_t)0x00000004U)
#define WDT_WDTCTL_R_INTTYPE_BIT       ((uint32_t)2U)
#define WDT_WDTCTL_R_INTTYPE_STD       ((uint32_t)0x00000000U)
#define WDT_WDTCTL_R_INTTYPE_NMI       ((uint32_t)0x00000004U)

#define WDT_WDTCTL_INTTYPE_MASK        ((uint32_t)0x00000001U)
#define WDT_WDTCTL_INTTYPE_STD         ((uint32_t)0x00000000U)
#define WDT_WDTCTL_INTTYPE_NMI         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define WDT_WDTCTL_R_WRC_MASK      ((uint32_t)0x80000000U)
#define WDT_WDTCTL_R_WRC_BIT       ((uint32_t)31U)
#define WDT_WDTCTL_R_WRC_PROGRESS  ((uint32_t)0x00000000U)
#define WDT_WDTCTL_R_WRC_DONE      ((uint32_t)0x80000000U)

#define WDT_WDTCTL_WRC_MASK        ((uint32_t)0x00000001U)
#define WDT_WDTCTL_WRC_PROGRESS    ((uint32_t)0x00000000U)
#define WDT_WDTCTL_WRC_DONE        ((uint32_t)0x00000001U)
/*--------*/

/******************************************************************************************
************************************ 4 WDTICR *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTICR_R_WDTINTCLR_MASK      ((uint32_t)0xFFFFFFFFU)
#define WDT_WDTICR_R_WDTINTCLR_BIT       ((uint32_t)0U)
#define WDT_WDTICR_R_WDTINTCLR_CLEAR     ((uint32_t)0xFFFFFFFFU)

#define WDT_WDTICR_WDTINTCLR_MASK        ((uint32_t)0xFFFFFFFFU)
#define WDT_WDTICR_WDTINTCLR_CLEAR       ((uint32_t)0xFFFFFFFFU)
/*--------*/

/******************************************************************************************
************************************ 5 WDTRIS *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTRIS_R_WDTRIS_MASK      ((uint32_t)0x00000001U)
#define WDT_WDTRIS_R_WDTRIS_BIT       ((uint32_t)0U)
#define WDT_WDTRIS_R_WDTRIS_NOACTIVE  ((uint32_t)0x00000000U)
#define WDT_WDTRIS_R_WDTRIS_ACTIVE    ((uint32_t)0x00000001U)

#define WDT_WDTRIS_WDTRIS_MASK        ((uint32_t)0x00000001U)
#define WDT_WDTRIS_WDTRIS_NOACTIVE    ((uint32_t)0x00000000U)
#define WDT_WDTRIS_WDTRIS_ACTIVE      ((uint32_t)0x00000001U)
/*--------*/

/******************************************************************************************
************************************ 6 WDTMIS *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTMIS_R_WDTMIS_MASK      ((uint32_t)0x00000001U)
#define WDT_WDTMIS_R_WDTMIS_BIT       ((uint32_t)0U)
#define WDT_WDTMIS_R_WDTMIS_NOOCCUR  ((uint32_t)0x00000000U)
#define WDT_WDTMIS_R_WDTMIS_OCCUR    ((uint32_t)0x00000001U)

#define WDT_WDTMIS_WDTMIS_MASK        ((uint32_t)0x00000001U)
#define WDT_WDTMIS_WDTMIS_NOOCCUR    ((uint32_t)0x00000000U)
#define WDT_WDTMIS_WDTMIS_OCCUR      ((uint32_t)0x00000001U)
/*--------*/

/******************************************************************************************
************************************ 7 WDTTEST *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTTEST_R_STALL_MASK      ((uint32_t)0x00000100U)
#define WDT_WDTTEST_R_STALL_BIT       ((uint32_t)8U)
#define WDT_WDTTEST_R_STALL_CONTINUE  ((uint32_t)0x00000000U)
#define WDT_WDTTEST_R_STALL_FREEZE    ((uint32_t)0x00000100U)

#define WDT_WDTTEST_STALL_MASK        ((uint32_t)0x00000001U)
#define WDT_WDTTEST_STALL_CONTINUE    ((uint32_t)0x00000000U)
#define WDT_WDTTEST_STALL_FREEZE      ((uint32_t)0x00000001U)
/*--------*/

/******************************************************************************************
************************************ 8 WDTLOCK *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTLOCK_R_WDTLOCK_MASK      ((uint32_t)0xFFFFFFFFU)
#define WDT_WDTLOCK_R_WDTLOCK_BIT       ((uint32_t)0U)
#define WDT_WDTLOCK_R_WDTLOCK_KEY       ((uint32_t)0x1ACCE551U)
#define WDT_WDTLOCK_R_WDTLOCK_LOCK      ((uint32_t)0x00000001U)
#define WDT_WDTLOCK_R_WDTLOCK_UNLOCK    ((uint32_t)0x00000000U)

#define WDT_WDTLOCK_WDTLOCK_MASK        ((uint32_t)0xFFFFFFFFU)
#define WDT_WDTLOCK_WDTLOCK_KEY         ((uint32_t)0x1ACCE551U)
#define WDT_WDTLOCK_WDTLOCK_LOCK        ((uint32_t)0x00000001U)
#define WDT_WDTLOCK_WDTLOCK_UNLOCK      ((uint32_t)0x00000000U)
/*--------*/

/******************************************************************************************
************************************ 9 WDTPeriphID4 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTPeriphID4_R_PID4_MASK     ((uint32_t)0x000000FFU)
#define WDT_WDTPeriphID4_R_PID4_BIT      ((uint32_t)0U)
#define WDT_WDTPeriphID4_R_PID4_DEFAULT  ((uint32_t)0x00000000U)

#define WDT_WDTPeriphID4_PID4_MASK       ((uint32_t)0x000000FFU)
#define WDT_WDTPeriphID4_PID4_DEFAULT    ((uint32_t)0x00000000U)
/*--------*/

/******************************************************************************************
************************************ 10 WDTPeriphID5 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTPeriphID5_R_PID5_MASK     ((uint32_t)0x000000FFU)
#define WDT_WDTPeriphID5_R_PID5_BIT      ((uint32_t)0U)
#define WDT_WDTPeriphID5_R_PID5_DEFAULT  ((uint32_t)0x00000000U)

#define WDT_WDTPeriphID5_PID5_MASK       ((uint32_t)0x000000FFU)
#define WDT_WDTPeriphID5_PID5_DEFAULT    ((uint32_t)0x00000000U)
/*--------*/

/******************************************************************************************
************************************ 11 WDTPeriphID6 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTPeriphID6_R_PID6_MASK     ((uint32_t)0x000000FFU)
#define WDT_WDTPeriphID6_R_PID6_BIT      ((uint32_t)0U)
#define WDT_WDTPeriphID6_R_PID6_DEFAULT  ((uint32_t)0x00000000U)

#define WDT_WDTPeriphID6_PID6_MASK       ((uint32_t)0x000000FFU)
#define WDT_WDTPeriphID6_PID6_DEFAULT    ((uint32_t)0x00000000U)
/*--------*/

/******************************************************************************************
************************************ 12 WDTPeriphID7 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTPeriphID7_R_PID7_MASK     ((uint32_t)0x000000FFU)
#define WDT_WDTPeriphID7_R_PID7_BIT      ((uint32_t)0U)
#define WDT_WDTPeriphID7_R_PID7_DEFAULT  ((uint32_t)0x00000000U)

#define WDT_WDTPeriphID7_PID7_MASK       ((uint32_t)0x000000FFU)
#define WDT_WDTPeriphID7_PID7_DEFAULT    ((uint32_t)0x00000000U)
/*--------*/

/******************************************************************************************
************************************ 13 WDTPeriphID0 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTPeriphID0_R_PID0_MASK     ((uint32_t)0x000000FFU)
#define WDT_WDTPeriphID0_R_PID0_BIT      ((uint32_t)0U)
#define WDT_WDTPeriphID0_R_PID0_DEFAULT  ((uint32_t)0x00000005U)

#define WDT_WDTPeriphID0_PID0_MASK       ((uint32_t)0x000000FFU)
#define WDT_WDTPeriphID0_PID0_DEFAULT    ((uint32_t)0x00000005U)
/*--------*/

/******************************************************************************************
************************************ 14 WDTPeriphID1 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTPeriphID1_R_PID1_MASK     ((uint32_t)0x000000FFU)
#define WDT_WDTPeriphID1_R_PID1_BIT      ((uint32_t)0U)
#define WDT_WDTPeriphID1_R_PID1_DEFAULT  ((uint32_t)0x00000018U)

#define WDT_WDTPeriphID1_PID1_MASK       ((uint32_t)0x000000FFU)
#define WDT_WDTPeriphID1_PID1_DEFAULT    ((uint32_t)0x00000018U)
/*--------*/

/******************************************************************************************
************************************ 15 WDTPeriphID2 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTPeriphID2_R_PID2_MASK     ((uint32_t)0x000000FFU)
#define WDT_WDTPeriphID2_R_PID2_BIT      ((uint32_t)0U)
#define WDT_WDTPeriphID2_R_PID2_DEFAULT  ((uint32_t)0x00000018U)

#define WDT_WDTPeriphID2_PID2_MASK       ((uint32_t)0x000000FFU)
#define WDT_WDTPeriphID2_PID2_DEFAULT    ((uint32_t)0x00000018U)
/*--------*/

/******************************************************************************************
************************************ 16 WDTPeriphID3 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTPeriphID3_R_PID3_MASK     ((uint32_t)0x000000FFU)
#define WDT_WDTPeriphID3_R_PID3_BIT      ((uint32_t)0U)
#define WDT_WDTPeriphID3_R_PID3_DEFAULT  ((uint32_t)0x00000001U)

#define WDT_WDTPeriphID3_PID3_MASK       ((uint32_t)0x000000FFU)
#define WDT_WDTPeriphID3_PID3_DEFAULT    ((uint32_t)0x00000001U)
/*--------*/

/******************************************************************************************
************************************ 17 WDTPCellID0 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTPCellID0_R_CID0_MASK     ((uint32_t)0x000000FFU)
#define WDT_WDTPCellID0_R_CID0_BIT      ((uint32_t)0U)
#define WDT_WDTPCellID0_R_CID0_DEFAULT  ((uint32_t)0x0000000DU)

#define WDT_WDTPCellID0_CID0_MASK       ((uint32_t)0x000000FFU)
#define WDT_WDTPCellID0_CID0_DEFAULT    ((uint32_t)0x0000000DU)
/*--------*/

/******************************************************************************************
************************************ 18 WDTPCellID1 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTPCellID1_R_CID1_MASK     ((uint32_t)0x000000FFU)
#define WDT_WDTPCellID1_R_CID1_BIT      ((uint32_t)0U)
#define WDT_WDTPCellID1_R_CID1_DEFAULT  ((uint32_t)0x000000F0U)

#define WDT_WDTPCellID1_CID1_MASK       ((uint32_t)0x000000FFU)
#define WDT_WDTPCellID1_CID1_DEFAULT    ((uint32_t)0x000000F0U)
/*--------*/

/******************************************************************************************
************************************ 19 WDTPCellID2 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTPCellID2_R_CID2_MASK     ((uint32_t)0x000000FFU)
#define WDT_WDTPCellID2_R_CID2_BIT      ((uint32_t)0U)
#define WDT_WDTPCellID2_R_CID2_DEFAULT  ((uint32_t)0x00000006U)

#define WDT_WDTPCellID2_CID2_MASK       ((uint32_t)0x000000FFU)
#define WDT_WDTPCellID2_CID2_DEFAULT    ((uint32_t)0x00000006U)
/*--------*/

/******************************************************************************************
************************************ 20 WDTPCellID3 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_WDTPCellID3_R_CID3_MASK     ((uint32_t)0x000000FFU)
#define WDT_WDTPCellID3_R_CID3_BIT      ((uint32_t)0U)
#define WDT_WDTPCellID3_R_CID3_DEFAULT  ((uint32_t)0x000000B1U)

#define WDT_WDTPCellID3_CID3_MASK       ((uint32_t)0x000000FFU)
#define WDT_WDTPCellID3_CID3_DEFAULT    ((uint32_t)0x000000B1U)
/*--------*/


#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERDEFINES_H_ */
