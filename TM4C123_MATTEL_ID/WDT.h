/*
 * WDT.h
 *
 *  Created on: 20 abr. 2018
 *      Author: InDev
 */

#ifndef WDT_H_
#define WDT_H_



#include "SYSCTL.h"
#include "GPIO.h"
#include "NVIC.h"
#include <stdint.h>

#define WDT_BASE            (0x40000000)
#define WDT_OFFSET          (0x00000000)

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// WDT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

typedef volatile struct
{
    volatile uint32_t WDTLOAD : 32;
}WDTLOAD_TypeDef;

typedef volatile struct
{
    volatile const uint32_t WDTVALUE   : 32;
}WDTVALUE_TypeDef;

typedef volatile struct
{
    volatile uint32_t       INTEN   : 1;
    volatile uint32_t       RESEN   : 1;
    volatile uint32_t       INTTYPE : 1;
    const    uint32_t       reserved: 28;
    volatile const uint32_t WRC     : 1;
}WDTCTL_TypeDef;


typedef volatile struct
{
    volatile uint32_t WDTINTCLR : 32;
}WDTICR_TypeDef;



typedef volatile struct
{
    volatile const uint32_t WDTRIS  : 1;
    const    uint32_t       reserved: 31;
}WDTRIS_TypeDef;



typedef volatile struct
{
    volatile const uint32_t WDTMIS    : 1;
    const    uint32_t       reserved  : 31;
}WDTMIS_TypeDef;

typedef volatile struct
{
    const    uint32_t     reserved : 8;
    volatile uint32_t     STALL    : 1;
    const    uint32_t     reserved1: 23;
}WDTTEST_TypeDef;

typedef volatile struct
{
    volatile uint32_t WDTLOCK    : 32;
}WDTLOCK_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID4    : 8;
    const    uint32_t       reserved: 24;
}WDTPeriphID4_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID5    : 8;
    const    uint32_t       reserved: 24;
}WDTPeriphID5_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID6    : 8;
    const    uint32_t       reserved: 24;
}WDTPeriphID6_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID7    : 8;
    const    uint32_t       reserved: 24;
}WDTPeriphID7_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID0    : 8;
    const    uint32_t       reserved: 24;
}WDTPeriphID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID1    : 8;
    const    uint32_t       reserved: 24;
}WDTPeriphID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID2    : 8;
    const    uint32_t       reserved: 24;
}WDTPeriphID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID3    : 8;
    const    uint32_t       reserved: 24;
}WDTPeriphID3_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID0    : 8;
    const    uint32_t       reserved: 24;
}WDTPCellID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID1    : 8;
    const    uint32_t       reserved: 24;
}WDTPCellID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID2    : 8;
    const    uint32_t       reserved: 24;
}WDTPCellID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID3    : 8;
    const    uint32_t       reserved: 24;
}WDTPCellID3_TypeDef;



typedef volatile struct
{
    union
    {
        volatile uint32_t          WDTLOAD;
        WDTLOAD_TypeDef                 WDTLOAD_Bit;
    };
    union
    {
        volatile const uint32_t    WDTVALUE;
        WDTVALUE_TypeDef                WDTVALUE_Bit;
    };
    union
    {
        volatile uint32_t          WDTCTL;
        WDTCTL_TypeDef                  WDTCTL_Bit;
    };
    union
    {
        volatile uint32_t          WDTICR;
        WDTICR_TypeDef                  WDTICR_Bit;
    };
    union
    {
    volatile const uint32_t        WDTRIS;
    WDTRIS_TypeDef                      WDTRIS_Bit;
    };
    union
    {
    volatile const uint32_t        WDTMIS;
    WDTMIS_TypeDef                      WDTMIS_Bit;
    };

    const uint32_t                 reserved[256];
    union
    {
    volatile uint32_t              WDTTEST;
    WDTTEST_TypeDef                     WDTTEST_Bit;
    };

    const uint32_t                 reserved1[505];
    union
    {
        volatile uint32_t          WDTLOCK;
        WDTLOCK_TypeDef                 WDTLOCK_Bit;
    };
    const uint32_t                 reserved2[243];
    union
    {
        volatile uint32_t          WDTPeriphID4;
        WDTPeriphID4_TypeDef            WDTPeriphID4_Bit;
    };
    union
    {
        volatile uint32_t          WDTPeriphID5;
        WDTPeriphID5_TypeDef            WDTPeriphID5_Bit;
    };
    union
    {
        volatile uint32_t          WDTPeriphID6;
        WDTPeriphID6_TypeDef            WDTPeriphID6_Bit;
    };
    union
    {
        volatile uint32_t          WDTPeriphID7;
        WDTPeriphID7_TypeDef            WDTPeriphID7_Bit;
    };
    union
    {
        volatile uint32_t          WDTPeriphID0;
        WDTPeriphID0_TypeDef            WDTPeriphID0_Bit;
    };
    union
    {
        volatile uint32_t          WDTPeriphID1;
        WDTPeriphID1_TypeDef            WDTPeriphID1_Bit;
    };
    union
    {
        volatile uint32_t          WDTPeriphID2;
        WDTPeriphID2_TypeDef            WDTPeriphID2_Bit;
    };
    union
    {
        volatile uint32_t          WDTPeriphID3;
        WDTPeriphID3_TypeDef            WDTPeriphID3_Bit;
    };
    union
    {
        volatile uint32_t          WDTPCellID0;
        WDTPCellID0_TypeDef             WDTPCellID0_Bit;
    };
    union
    {
        volatile uint32_t          WDTPCellID1;
        WDTPCellID1_TypeDef             WDTPCellID1_Bit;
    };
    union
    {
        volatile uint32_t          WDTPCellID2;
        WDTPCellID2_TypeDef             WDTPCellID2_Bit;
    };
    union
    {
        volatile uint32_t          WDTPCellID3;
        WDTPCellID3_TypeDef             WDTPCellID3_Bit;
    };
}WDT_TypeDef;

typedef volatile struct
{
     WDT_TypeDef W[2];
}WDTS_TypeDef;



#define WDT0_BASE         (0x40000000)
#define WDT0_OFFSET       (0x00000000)
#define WDT1_BASE         (0x40001000)
#define WDT1_OFFSET       (0x00001000)


#define WDT               (((WDTS_TypeDef*)(WDT_BASE)))
#define WDT0              (((WDT_TypeDef*)(WDT0_BASE)))
#define WDT1              (((WDT_TypeDef*)(WDT1_BASE)))


#define WDT_WDTLOAD_OFFSET      (0x0000)
#define WDT_WDTVALUE_OFFSET     (0x0004)
#define WDT_WDTCTL_OFFSET       (0x0008)
#define WDT_WDTICR_OFFSET       (0x000C)
#define WDT_WDTRIS_OFFSET       (0x0010)
#define WDT_WDTMIS_OFFSET       (0x0014)
#define WDT_WDTTEST_OFFSET      (0x0418)
#define WDT_WDTLOCK_OFFSET      (0x0C00)
#define WDT_WDTPeriphID4_OFFSET (0x0FD0)
#define WDT_WDTPeriphID5_OFFSET (0x0FD4)
#define WDT_WDTPeriphID6_OFFSET (0x0FD8)
#define WDT_WDTPeriphID7_OFFSET (0x0FDC)
#define WDT_WDTPeriphID0_OFFSET (0x0FE0)
#define WDT_WDTPeriphID1_OFFSET (0x0FE4)
#define WDT_WDTPeriphID2_OFFSET (0x0FE8)
#define WDT_WDTPeriphID3_OFFSET (0x0FEC)
#define WDT_WDTPCellID0_OFFSET  (0x0FF0)
#define WDT_WDTPCellID1_OFFSET  (0x0FF4)
#define WDT_WDTPCellID2_OFFSET  (0x0FF8)
#define WDT_WDTPCellID3_OFFSET  (0x0FFC)


//todo

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0 WDT0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.1 WDTLOAD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTLOAD            (((WDTLOAD_TypeDef*)(WDT0_BASE + WDT_WDTLOAD_OFFSET )))
#define WDT0_WDTLOAD_R          (*((volatile uint32_t *)(WDT0_BASE +WDT_WDTLOAD_OFFSET)))

//--------
#define WDT0_WDTLOAD_R_WDTLOAD_MASK      (0xFFFFFFFF)
#define WDT0_WDTLOAD_R_WDTLOAD_BIT       (0)

#define WDT0_WDTLOAD_WDTLOAD_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.2 WDTVALUE ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTVALUE            (((WDTVALUE_TypeDef*)(WDT0_BASE + WDT_WDTVALUE_OFFSET )))
#define WDT0_WDTVALUE_R          (*((volatile const uint32_t *)(WDT0_BASE +WDT_WDTVALUE_OFFSET)))

//--------
#define WDT0_WDTVALUE_R_WDTVALUE_MASK      (0xFFFFFFFF)
#define WDT0_WDTVALUE_R_WDTVALUE_BIT       (0)

#define WDT0_WDTVALUE_WDTVALUE_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.3 WDTCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTCTL            (((WDTCTL_TypeDef*)(WDT0_BASE + WDT_WDTCTL_OFFSET )))
#define WDT0_WDTCTL_R          (*((volatile uint32_t *)(WDT0_BASE +WDT_WDTCTL_OFFSET)))


//--------
#define WDT0_WDTCTL_R_INTEN_MASK      (0x00000001)
#define WDT0_WDTCTL_R_INTEN_BIT       (0)
#define WDT0_WDTCTL_R_INTEN_DIS       (0x00000000)
#define WDT0_WDTCTL_R_INTEN_EN        (0x00000001)

#define WDT0_WDTCTL_INTEN_MASK        (0x00000001)
#define WDT0_WDTCTL_INTEN_DIS         (0x00000000)
#define WDT0_WDTCTL_INTEN_EN          (0x00000001)
//--------

//--------
#define WDT0_WDTCTL_R_RESEN_MASK      (0x00000002)
#define WDT0_WDTCTL_R_RESEN_BIT       (1)
#define WDT0_WDTCTL_R_RESEN_DIS       (0x00000000)
#define WDT0_WDTCTL_R_RESEN_EN        (0x00000002)

#define WDT0_WDTCTL_RESEN_MASK        (0x00000001)
#define WDT0_WDTCTL_RESEN_DIS         (0x00000000)
#define WDT0_WDTCTL_RESEN_EN          (0x00000001)
//--------

//--------
#define WDT0_WDTCTL_R_INTTYPE_MASK      (0x00000004)
#define WDT0_WDTCTL_R_INTTYPE_BIT       (2)
#define WDT0_WDTCTL_R_INTTYPE_STD       (0x00000000)
#define WDT0_WDTCTL_R_INTTYPE_NMI       (0x00000004)

#define WDT0_WDTCTL_INTTYPE_MASK        (0x00000001)
#define WDT0_WDTCTL_INTTYPE_STD         (0x00000000)
#define WDT0_WDTCTL_INTTYPE_NMI         (0x00000001)
//--------

//--------
#define WDT0_WDTCTL_R_WRC_MASK      (0x80000000)
#define WDT0_WDTCTL_R_WRC_BIT       (31)
#define WDT0_WDTCTL_R_WRC_PROGRESS  (0x00000000)
#define WDT0_WDTCTL_R_WRC_DONE      (0x80000000)

#define WDT0_WDTCTL_WRC_MASK        (0x00000001)
#define WDT0_WDTCTL_WRC_PROGRESS    (0x00000000)
#define WDT0_WDTCTL_WRC_DONE        (0x00000001)
//--------

#define WDT0_WDTCTL_INTEN_BB       (*((volatile uint32_t *)(0x42000000+((WDT0_OFFSET+WDT_WDTCTL_OFFSET)*32)+(0*4))))
#define WDT0_WDTCTL_RESEN_BB       (*((volatile uint32_t *)(0x42000000+((WDT0_OFFSET+WDT_WDTCTL_OFFSET)*32)+(1*4))))
#define WDT0_WDTCTL_INTTYPE_BB     (*((volatile uint32_t *)(0x42000000+((WDT0_OFFSET+WDT_WDTCTL_OFFSET)*32)+(2*4))))
#define WDT0_WDTCTL_WRC_BB         (*((volatile const uint32_t *)(0x42000000+((WDT0_OFFSET+WDT_WDTCTL_OFFSET)*32)+(31*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.4 WDTICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTICR            (((WDTICR_TypeDef*)(WDT0_BASE + WDT_WDTICR_OFFSET )))
#define WDT0_WDTICR_R          (*((volatile uint32_t *)(WDT0_BASE +WDT_WDTICR_OFFSET)))

//--------
#define WDT0_WDTICR_R_WDTINTCLR_MASK      (0xFFFFFFFF)
#define WDT0_WDTICR_R_WDTINTCLR_BIT       (0)
#define WDT0_WDTICR_R_WDTINTCLR_CLEAR     (0xFFFFFFFF)

#define WDT0_WDTICR_WDTINTCLR_MASK        (0xFFFFFFFF)
#define WDT0_WDTICR_WDTINTCLR_CLEAR       (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.5 WDTRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTRIS            (((WDTRIS_TypeDef*)(WDT0_BASE + WDT_WDTRIS_OFFSET )))
#define WDT0_WDTRIS_R          (*((volatile uint32_t *)(WDT0_BASE +WDT_WDTRIS_OFFSET)))

//--------
#define WDT0_WDTRIS_R_WDTRIS_MASK      (0x00000001)
#define WDT0_WDTRIS_R_WDTRIS_BIT       (0)
#define WDT0_WDTRIS_R_WDTRIS_NOACTIVE  (0x00000000)
#define WDT0_WDTRIS_R_WDTRIS_ACTIVE    (0x00000001)

#define WDT0_WDTRIS_WDTRIS_MASK        (0x00000001)
#define WDT0_WDTRIS_WDTRIS_NOACTIVE    (0x00000000)
#define WDT0_WDTRIS_WDTRIS_ACTIVE      (0x00000001)
//--------

#define WDT0_WDTRIS_WDTRIS_BB       (*((volatile uint32_t *)(0x42000000+((WDT0_OFFSET+WDT_WDTRIS_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.6 WDTMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTMIS            (((WDTMIS_TypeDef*)(WDT0_BASE + WDT_WDTMIS_OFFSET )))
#define WDT0_WDTMIS_R          (*((volatile uint32_t *)(WDT0_BASE +WDT_WDTMIS_OFFSET)))

//--------
#define WDT0_WDTMIS_R_WDTMIS_MASK      (0x00000001)
#define WDT0_WDTMIS_R_WDTMIS_BIT       (0)
#define WDT0_WDTMIS_R_WDTMIS_NOOCCUR  (0x00000000)
#define WDT0_WDTMIS_R_WDTMIS_OCCUR    (0x00000001)

#define WDT0_WDTMIS_WDTMIS_MASK        (0x00000001)
#define WDT0_WDTMIS_WDTMIS_NOOCCUR    (0x00000000)
#define WDT0_WDTMIS_WDTMIS_OCCUR      (0x00000001)
//--------


#define WDT0_WDTMIS_WDTMIS_BB       (*((volatile uint32_t *)(0x42000000+((WDT0_OFFSET+WDT_WDTMIS_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.7 WDTTEST ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTTEST            (((WDTTEST_TypeDef*)(WDT0_BASE + WDT_WDTTEST_OFFSET )))
#define WDT0_WDTTEST_R          (*((volatile uint32_t *)(WDT0_BASE +WDT_WDTTEST_OFFSET)))


//--------
#define WDT0_WDTTEST_R_STALL_MASK      (0x00000100)
#define WDT0_WDTTEST_R_STALL_BIT       (8)
#define WDT0_WDTTEST_R_STALL_CONTINUE  (0x00000000)
#define WDT0_WDTTEST_R_STALL_FREEZE    (0x00000100)

#define WDT0_WDTTEST_STALL_MASK        (0x00000001)
#define WDT0_WDTTEST_STALL_CONTINUE    (0x00000000)
#define WDT0_WDTTEST_STALL_FREEZE      (0x00000001)
//--------
#define WDT0_WDTTEST_STALL_BB    (*((volatile uint32_t *)(0x42000000+((WDT0_OFFSET+WDT_WDTTEST_OFFSET)*32)+(8*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.8 WDTLOCK ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTLOCK            (((WDTLOCK_TypeDef*)(WDT0_BASE + WDT_WDTLOCK_OFFSET )))
#define WDT0_WDTLOCK_R          (*((volatile uint32_t *)(WDT0_BASE +WDT_WDTLOCK_OFFSET)))


//--------
#define WDT0_WDTLOCK_R_WDTLOCK_MASK      (0xFFFFFFFF)
#define WDT0_WDTLOCK_R_WDTLOCK_BIT       (0)
#define WDT0_WDTLOCK_R_WDTLOCK_KEY       (0x1ACCE551)
#define WDT0_WDTLOCK_R_WDTLOCK_LOCK      (0x00000001)
#define WDT0_WDTLOCK_R_WDTLOCK_UNLOCK    (0x00000000)

#define WDT0_WDTLOCK_WDTLOCK_MASK        (0xFFFFFFFF)
#define WDT0_WDTLOCK_WDTLOCK_KEY         (0x1ACCE551)
#define WDT0_WDTLOCK_WDTLOCK_LOCK        (0x00000001)
#define WDT0_WDTLOCK_WDTLOCK_UNLOCK      (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.9 WDTPeriphID4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTPeriphID4            (((WDTPeriphID4_TypeDef*)(WDT0_BASE + WDT_WDTPeriphID4_OFFSET )))
#define WDT0_WDTPeriphID4_R          (*((volatile const uint32_t *)(WDT0_BASE +WDT_WDTPeriphID4_OFFSET)))

//--------
#define WDT0_WDTPeriphID4_R_PID4_MASK     (0x000000FF)
#define WDT0_WDTPeriphID4_R_PID4_BIT      (0)
#define WDT0_WDTPeriphID4_R_PID4_DEFAULT  (0x00000000)

#define WDT0_WDTPeriphID4_PID4_MASK       (0x000000FF)
#define WDT0_WDTPeriphID4_PID4_DEFAULT    (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.10 WDTPeriphID5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTPeriphID5            (((WDTPeriphID5_TypeDef*)(WDT0_BASE + WDT_WDTPeriphID5_OFFSET )))
#define WDT0_WDTPeriphID5_R          (*((volatile const uint32_t *)(WDT0_BASE +WDT_WDTPeriphID5_OFFSET)))

//--------
#define WDT0_WDTPeriphID5_R_PID5_MASK     (0x000000FF)
#define WDT0_WDTPeriphID5_R_PID5_BIT      (0)
#define WDT0_WDTPeriphID5_R_PID5_DEFAULT  (0x00000000)

#define WDT0_WDTPeriphID5_PID5_MASK       (0x000000FF)
#define WDT0_WDTPeriphID5_PID5_DEFAULT    (0x00000000)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.11 WDTPeriphID6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTPeriphID6            (((WDTPeriphID6_TypeDef*)(WDT0_BASE + WDT_WDTPeriphID6_OFFSET )))
#define WDT0_WDTPeriphID6_R          (*((volatile const uint32_t *)(WDT0_BASE +WDT_WDTPeriphID6_OFFSET)))

//--------
#define WDT0_WDTPeriphID6_R_PID6_MASK     (0x000000FF)
#define WDT0_WDTPeriphID6_R_PID6_BIT      (0)
#define WDT0_WDTPeriphID6_R_PID6_DEFAULT  (0x00000000)

#define WDT0_WDTPeriphID6_PID6_MASK       (0x000000FF)
#define WDT0_WDTPeriphID6_PID6_DEFAULT    (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.12 WDTPeriphID7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTPeriphID7            (((WDTPeriphID7_TypeDef*)(WDT0_BASE + WDT_WDTPeriphID7_OFFSET )))
#define WDT0_WDTPeriphID7_R          (*((volatile const uint32_t *)(WDT0_BASE +WDT_WDTPeriphID7_OFFSET)))

//--------
#define WDT0_WDTPeriphID7_R_PID7_MASK     (0x000000FF)
#define WDT0_WDTPeriphID7_R_PID7_BIT      (0)
#define WDT0_WDTPeriphID7_R_PID7_DEFAULT  (0x00000000)

#define WDT0_WDTPeriphID7_PID7_MASK       (0x000000FF)
#define WDT0_WDTPeriphID7_PID7_DEFAULT    (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.13 WDTPeriphID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTPeriphID0            (((WDTPeriphID0_TypeDef*)(WDT0_BASE + WDT_WDTPeriphID0_OFFSET )))
#define WDT0_WDTPeriphID0_R          (*((volatile const uint32_t *)(WDT0_BASE +WDT_WDTPeriphID0_OFFSET)))

//--------
#define WDT0_WDTPeriphID0_R_PID0_MASK     (0x000000FF)
#define WDT0_WDTPeriphID0_R_PID0_BIT      (0)
#define WDT0_WDTPeriphID0_R_PID0_DEFAULT  (0x00000005)

#define WDT0_WDTPeriphID0_PID0_MASK       (0x000000FF)
#define WDT0_WDTPeriphID0_PID0_DEFAULT    (0x00000005)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.14 WDTPeriphID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTPeriphID1            (((WDTPeriphID1_TypeDef*)(WDT0_BASE + WDT_WDTPeriphID1_OFFSET )))
#define WDT0_WDTPeriphID1_R          (*((volatile const uint32_t *)(WDT0_BASE +WDT_WDTPeriphID1_OFFSET)))

//--------
#define WDT0_WDTPeriphID1_R_PID1_MASK     (0x000000FF)
#define WDT0_WDTPeriphID1_R_PID1_BIT      (0)
#define WDT0_WDTPeriphID1_R_PID1_DEFAULT  (0x00000018)

#define WDT0_WDTPeriphID1_PID1_MASK       (0x000000FF)
#define WDT0_WDTPeriphID1_PID1_DEFAULT    (0x00000018)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.15 WDTPeriphID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTPeriphID2            (((WDTPeriphID2_TypeDef*)(WDT0_BASE + WDT_WDTPeriphID2_OFFSET )))
#define WDT0_WDTPeriphID2_R          (*((volatile const uint32_t *)(WDT0_BASE +WDT_WDTPeriphID2_OFFSET)))

//--------
#define WDT0_WDTPeriphID2_R_PID2_MASK     (0x000000FF)
#define WDT0_WDTPeriphID2_R_PID2_BIT      (0)
#define WDT0_WDTPeriphID2_R_PID2_DEFAULT  (0x00000018)

#define WDT0_WDTPeriphID2_PID2_MASK       (0x000000FF)
#define WDT0_WDTPeriphID2_PID2_DEFAULT    (0x00000018)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.16 WDTPeriphID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTPeriphID3            (((WDTPeriphID3_TypeDef*)(WDT0_BASE + WDT_WDTPeriphID3_OFFSET )))
#define WDT0_WDTPeriphID3_R          (*((volatile const uint32_t *)(WDT0_BASE +WDT_WDTPeriphID3_OFFSET)))

//--------
#define WDT0_WDTPeriphID3_R_PID3_MASK     (0x000000FF)
#define WDT0_WDTPeriphID3_R_PID3_BIT      (0)
#define WDT0_WDTPeriphID3_R_PID3_DEFAULT  (0x00000001)

#define WDT0_WDTPeriphID3_PID3_MASK       (0x000000FF)
#define WDT0_WDTPeriphID3_PID3_DEFAULT    (0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.17 WDTPCellID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTPCellID0            (((WDTPCellID0_TypeDef*)(WDT0_BASE + WDT_WDTPCellID0_OFFSET )))
#define WDT0_WDTPCellID0_R          (*((volatile const uint32_t *)(WDT0_BASE +WDT_WDTPCellID0_OFFSET)))

//--------
#define WDT0_WDTPCellID0_R_CID0_MASK     (0x000000FF)
#define WDT0_WDTPCellID0_R_CID0_BIT      (0)
#define WDT0_WDTPCellID0_R_CID0_DEFAULT  (0x0000000D)

#define WDT0_WDTPCellID0_CID0_MASK       (0x000000FF)
#define WDT0_WDTPCellID0_CID0_DEFAULT    (0x0000000D)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.18 WDTPCellID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTPCellID1            (((WDTPCellID1_TypeDef*)(WDT0_BASE + WDT_WDTPCellID1_OFFSET )))
#define WDT0_WDTPCellID1_R          (*((volatile const uint32_t *)(WDT0_BASE +WDT_WDTPCellID1_OFFSET)))

//--------
#define WDT0_WDTPCellID1_R_CID1_MASK     (0x000000FF)
#define WDT0_WDTPCellID1_R_CID1_BIT      (0)
#define WDT0_WDTPCellID1_R_CID1_DEFAULT  (0x000000F0)

#define WDT0_WDTPCellID1_CID1_MASK       (0x000000FF)
#define WDT0_WDTPCellID1_CID1_DEFAULT    (0x000000F0)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.19 WDTPCellID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTPCellID2            (((WDTPCellID2_TypeDef*)(WDT0_BASE + WDT_WDTPCellID2_OFFSET )))
#define WDT0_WDTPCellID2_R          (*((volatile const uint32_t *)(WDT0_BASE +WDT_WDTPCellID2_OFFSET)))

//--------
#define WDT0_WDTPCellID2_R_CID2_MASK     (0x000000FF)
#define WDT0_WDTPCellID2_R_CID2_BIT      (0)
#define WDT0_WDTPCellID2_R_CID2_DEFAULT  (0x00000006)

#define WDT0_WDTPCellID2_CID2_MASK       (0x000000FF)
#define WDT0_WDTPCellID2_CID2_DEFAULT    (0x00000006)


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.20 WDTPCellID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT0_WDTPCellID3            (((WDTPCellID3_TypeDef*)(WDT0_BASE + WDT_WDTPCellID3_OFFSET )))
#define WDT0_WDTPCellID3_R          (*((volatile const uint32_t *)(WDT0_BASE +WDT_WDTPCellID3_OFFSET)))

//--------
#define WDT0_WDTPCellID3_R_CID3_MASK     (0x000000FF)
#define WDT0_WDTPCellID3_R_CID3_BIT      (0)
#define WDT0_WDTPCellID3_R_CID3_DEFAULT  (0x000000B1)

#define WDT0_WDTPCellID3_CID3_MASK       (0x000000FF)
#define WDT0_WDTPCellID3_CID3_DEFAULT    (0x000000B1)

//todo

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 WDT1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.1 WDTLOAD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTLOAD            (((WDTLOAD_TypeDef*)(WDT1_BASE + WDT_WDTLOAD_OFFSET )))
#define WDT1_WDTLOAD_R          (*((volatile uint32_t *)(WDT1_BASE +WDT_WDTLOAD_OFFSET)))

//--------
#define WDT1_WDTLOAD_R_WDTLOAD_MASK      (0xFFFFFFFF)
#define WDT1_WDTLOAD_R_WDTLOAD_BIT       (0)

#define WDT1_WDTLOAD_WDTLOAD_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.2 WDTVALUE ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTVALUE            (((WDTVALUE_TypeDef*)(WDT1_BASE + WDT_WDTVALUE_OFFSET )))
#define WDT1_WDTVALUE_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTVALUE_OFFSET)))

//--------
#define WDT1_WDTVALUE_R_WDTVALUE_MASK      (0xFFFFFFFF)
#define WDT1_WDTVALUE_R_WDTVALUE_BIT       (0)

#define WDT1_WDTVALUE_WDTVALUE_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.3 WDTCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTCTL            (((WDTCTL_TypeDef*)(WDT1_BASE + WDT_WDTCTL_OFFSET )))
#define WDT1_WDTCTL_R          (*((volatile uint32_t *)(WDT1_BASE +WDT_WDTCTL_OFFSET)))


//--------
#define WDT1_WDTCTL_R_INTEN_MASK      (0x00000001)
#define WDT1_WDTCTL_R_INTEN_BIT       (0)
#define WDT1_WDTCTL_R_INTEN_DIS       (0x00000000)
#define WDT1_WDTCTL_R_INTEN_EN        (0x00000001)

#define WDT1_WDTCTL_INTEN_MASK        (0x00000001)
#define WDT1_WDTCTL_INTEN_DIS         (0x00000000)
#define WDT1_WDTCTL_INTEN_EN          (0x00000001)
//--------

//--------
#define WDT1_WDTCTL_R_RESEN_MASK      (0x00000002)
#define WDT1_WDTCTL_R_RESEN_BIT       (1)
#define WDT1_WDTCTL_R_RESEN_DIS       (0x00000000)
#define WDT1_WDTCTL_R_RESEN_EN        (0x00000002)

#define WDT1_WDTCTL_RESEN_MASK        (0x00000001)
#define WDT1_WDTCTL_RESEN_DIS         (0x00000000)
#define WDT1_WDTCTL_RESEN_EN          (0x00000001)
//--------

//--------
#define WDT1_WDTCTL_R_INTTYPE_MASK      (0x00000004)
#define WDT1_WDTCTL_R_INTTYPE_BIT       (2)
#define WDT1_WDTCTL_R_INTTYPE_STD       (0x00000000)
#define WDT1_WDTCTL_R_INTTYPE_NMI       (0x00000004)

#define WDT1_WDTCTL_INTTYPE_MASK        (0x00000001)
#define WDT1_WDTCTL_INTTYPE_STD         (0x00000000)
#define WDT1_WDTCTL_INTTYPE_NMI         (0x00000001)
//--------

//--------
#define WDT1_WDTCTL_R_WRC_MASK      (0x80000000)
#define WDT1_WDTCTL_R_WRC_BIT       (31)
#define WDT1_WDTCTL_R_WRC_PROGRESS  (0x00000000)
#define WDT1_WDTCTL_R_WRC_DONE      (0x80000000)

#define WDT1_WDTCTL_WRC_MASK        (0x00000001)
#define WDT1_WDTCTL_WRC_PROGRESS    (0x00000000)
#define WDT1_WDTCTL_WRC_DONE        (0x00000001)
//--------

#define WDT1_WDTCTL_INTEN_BB       (*((volatile uint32_t *)(0x42000000+((WDT1_OFFSET+WDT_WDTCTL_OFFSET)*32)+(0*4))))
#define WDT1_WDTCTL_RESEN_BB       (*((volatile uint32_t *)(0x42000000+((WDT1_OFFSET+WDT_WDTCTL_OFFSET)*32)+(1*4))))
#define WDT1_WDTCTL_INTTYPE_BB     (*((volatile uint32_t *)(0x42000000+((WDT1_OFFSET+WDT_WDTCTL_OFFSET)*32)+(2*4))))
#define WDT1_WDTCTL_WRC_BB         (*((volatile const uint32_t *)(0x42000000+((WDT1_OFFSET+WDT_WDTCTL_OFFSET)*32)+(31*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.4 WDTICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTICR            (((WDTICR_TypeDef*)(WDT1_BASE + WDT_WDTICR_OFFSET )))
#define WDT1_WDTICR_R          (*((volatile uint32_t *)(WDT1_BASE +WDT_WDTICR_OFFSET)))

//--------
#define WDT1_WDTICR_R_WDTINTCLR_MASK      (0xFFFFFFFF)
#define WDT1_WDTICR_R_WDTINTCLR_BIT       (0)
#define WDT1_WDTICR_R_WDTINTCLR_CLEAR     (0xFFFFFFFF)

#define WDT1_WDTICR_WDTINTCLR_MASK        (0xFFFFFFFF)
#define WDT1_WDTICR_WDTINTCLR_CLEAR       (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.5 WDTRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTRIS            (((WDTRIS_TypeDef*)(WDT1_BASE + WDT_WDTRIS_OFFSET )))
#define WDT1_WDTRIS_R          (*((volatile uint32_t *)(WDT1_BASE +WDT_WDTRIS_OFFSET)))

//--------
#define WDT1_WDTRIS_R_WDTRIS_MASK      (0x00000001)
#define WDT1_WDTRIS_R_WDTRIS_BIT       (0)
#define WDT1_WDTRIS_R_WDTRIS_NOACTIVE  (0x00000000)
#define WDT1_WDTRIS_R_WDTRIS_ACTIVE    (0x00000001)

#define WDT1_WDTRIS_WDTRIS_MASK        (0x00000001)
#define WDT1_WDTRIS_WDTRIS_NOACTIVE    (0x00000000)
#define WDT1_WDTRIS_WDTRIS_ACTIVE      (0x00000001)
//--------

#define WDT1_WDTRIS_WDTRIS_BB       (*((volatile uint32_t *)(0x42000000+((WDT1_OFFSET+WDT_WDTRIS_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.6 WDTMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTMIS            (((WDTMIS_TypeDef*)(WDT1_BASE + WDT_WDTMIS_OFFSET )))
#define WDT1_WDTMIS_R          (*((volatile uint32_t *)(WDT1_BASE +WDT_WDTMIS_OFFSET)))

//--------
#define WDT1_WDTMIS_R_WDTMIS_MASK      (0x00000001)
#define WDT1_WDTMIS_R_WDTMIS_BIT       (0)
#define WDT1_WDTMIS_R_WDTMIS_NOOCCUR  (0x00000000)
#define WDT1_WDTMIS_R_WDTMIS_OCCUR    (0x00000001)

#define WDT1_WDTMIS_WDTMIS_MASK        (0x00000001)
#define WDT1_WDTMIS_WDTMIS_NOOCCUR    (0x00000000)
#define WDT1_WDTMIS_WDTMIS_OCCUR      (0x00000001)
//--------


#define WDT1_WDTMIS_WDTMIS_BB       (*((volatile uint32_t *)(0x42000000+((WDT1_OFFSET+WDT_WDTMIS_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.7 WDTTEST ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTTEST            (((WDTTEST_TypeDef*)(WDT1_BASE + WDT_WDTTEST_OFFSET )))
#define WDT1_WDTTEST_R          (*((volatile uint32_t *)(WDT1_BASE +WDT_WDTTEST_OFFSET)))


//--------
#define WDT1_WDTTEST_R_STALL_MASK      (0x00000100)
#define WDT1_WDTTEST_R_STALL_BIT       (8)
#define WDT1_WDTTEST_R_STALL_CONTINUE  (0x00000000)
#define WDT1_WDTTEST_R_STALL_FREEZE    (0x00000100)

#define WDT1_WDTTEST_STALL_MASK        (0x00000001)
#define WDT1_WDTTEST_STALL_CONTINUE    (0x00000000)
#define WDT1_WDTTEST_STALL_FREEZE      (0x00000001)
//--------
#define WDT1_WDTTEST_STALL_BB    (*((volatile uint32_t *)(0x42000000+((WDT1_OFFSET+WDT_WDTTEST_OFFSET)*32)+(8*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.8 WDTLOCK ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTLOCK            (((WDTLOCK_TypeDef*)(WDT1_BASE + WDT_WDTLOCK_OFFSET )))
#define WDT1_WDTLOCK_R          (*((volatile uint32_t *)(WDT1_BASE +WDT_WDTLOCK_OFFSET)))


//--------
#define WDT1_WDTLOCK_R_WDTLOCK_MASK      (0xFFFFFFFF)
#define WDT1_WDTLOCK_R_WDTLOCK_BIT       (0)
#define WDT1_WDTLOCK_R_WDTLOCK_KEY       (0x1ACCE551)
#define WDT1_WDTLOCK_R_WDTLOCK_LOCK      (0x00000001)
#define WDT1_WDTLOCK_R_WDTLOCK_UNLOCK    (0x00000000)

#define WDT1_WDTLOCK_WDTLOCK_MASK        (0xFFFFFFFF)
#define WDT1_WDTLOCK_WDTLOCK_KEY         (0x1ACCE551)
#define WDT1_WDTLOCK_WDTLOCK_LOCK        (0x00000001)
#define WDT1_WDTLOCK_WDTLOCK_UNLOCK      (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.9 WDTPeriphID4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTPeriphID4            (((WDTPeriphID4_TypeDef*)(WDT1_BASE + WDT_WDTPeriphID4_OFFSET )))
#define WDT1_WDTPeriphID4_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPeriphID4_OFFSET)))

//--------
#define WDT1_WDTPeriphID4_R_PID4_MASK     (0x000000FF)
#define WDT1_WDTPeriphID4_R_PID4_BIT      (0)
#define WDT1_WDTPeriphID4_R_PID4_DEFAULT  (0x00000000)

#define WDT1_WDTPeriphID4_PID4_MASK       (0x000000FF)
#define WDT1_WDTPeriphID4_PID4_DEFAULT    (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.10 WDTPeriphID5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTPeriphID5            (((WDTPeriphID5_TypeDef*)(WDT1_BASE + WDT_WDTPeriphID5_OFFSET )))
#define WDT1_WDTPeriphID5_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPeriphID5_OFFSET)))

//--------
#define WDT1_WDTPeriphID5_R_PID5_MASK     (0x000000FF)
#define WDT1_WDTPeriphID5_R_PID5_BIT      (0)
#define WDT1_WDTPeriphID5_R_PID5_DEFAULT  (0x00000000)

#define WDT1_WDTPeriphID5_PID5_MASK       (0x000000FF)
#define WDT1_WDTPeriphID5_PID5_DEFAULT    (0x00000000)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.11 WDTPeriphID6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTPeriphID6            (((WDTPeriphID6_TypeDef*)(WDT1_BASE + WDT_WDTPeriphID6_OFFSET )))
#define WDT1_WDTPeriphID6_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPeriphID6_OFFSET)))

//--------
#define WDT1_WDTPeriphID6_R_PID6_MASK     (0x000000FF)
#define WDT1_WDTPeriphID6_R_PID6_BIT      (0)
#define WDT1_WDTPeriphID6_R_PID6_DEFAULT  (0x00000000)

#define WDT1_WDTPeriphID6_PID6_MASK       (0x000000FF)
#define WDT1_WDTPeriphID6_PID6_DEFAULT    (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.12 WDTPeriphID7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTPeriphID7            (((WDTPeriphID7_TypeDef*)(WDT1_BASE + WDT_WDTPeriphID7_OFFSET )))
#define WDT1_WDTPeriphID7_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPeriphID7_OFFSET)))

//--------
#define WDT1_WDTPeriphID7_R_PID7_MASK     (0x000000FF)
#define WDT1_WDTPeriphID7_R_PID7_BIT      (0)
#define WDT1_WDTPeriphID7_R_PID7_DEFAULT  (0x00000000)

#define WDT1_WDTPeriphID7_PID7_MASK       (0x000000FF)
#define WDT1_WDTPeriphID7_PID7_DEFAULT    (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.13 WDTPeriphID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTPeriphID0            (((WDTPeriphID0_TypeDef*)(WDT1_BASE + WDT_WDTPeriphID0_OFFSET )))
#define WDT1_WDTPeriphID0_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPeriphID0_OFFSET)))

//--------
#define WDT1_WDTPeriphID0_R_PID0_MASK     (0x000000FF)
#define WDT1_WDTPeriphID0_R_PID0_BIT      (0)
#define WDT1_WDTPeriphID0_R_PID0_DEFAULT  (0x00000005)

#define WDT1_WDTPeriphID0_PID0_MASK       (0x000000FF)
#define WDT1_WDTPeriphID0_PID0_DEFAULT    (0x00000005)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.14 WDTPeriphID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTPeriphID1            (((WDTPeriphID1_TypeDef*)(WDT1_BASE + WDT_WDTPeriphID1_OFFSET )))
#define WDT1_WDTPeriphID1_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPeriphID1_OFFSET)))

//--------
#define WDT1_WDTPeriphID1_R_PID1_MASK     (0x000000FF)
#define WDT1_WDTPeriphID1_R_PID1_BIT      (0)
#define WDT1_WDTPeriphID1_R_PID1_DEFAULT  (0x00000018)

#define WDT1_WDTPeriphID1_PID1_MASK       (0x000000FF)
#define WDT1_WDTPeriphID1_PID1_DEFAULT    (0x00000018)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.15 WDTPeriphID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTPeriphID2            (((WDTPeriphID2_TypeDef*)(WDT1_BASE + WDT_WDTPeriphID2_OFFSET )))
#define WDT1_WDTPeriphID2_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPeriphID2_OFFSET)))

//--------
#define WDT1_WDTPeriphID2_R_PID2_MASK     (0x000000FF)
#define WDT1_WDTPeriphID2_R_PID2_BIT      (0)
#define WDT1_WDTPeriphID2_R_PID2_DEFAULT  (0x00000018)

#define WDT1_WDTPeriphID2_PID2_MASK       (0x000000FF)
#define WDT1_WDTPeriphID2_PID2_DEFAULT    (0x00000018)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.16 WDTPeriphID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTPeriphID3            (((WDTPeriphID3_TypeDef*)(WDT1_BASE + WDT_WDTPeriphID3_OFFSET )))
#define WDT1_WDTPeriphID3_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPeriphID3_OFFSET)))

//--------
#define WDT1_WDTPeriphID3_R_PID3_MASK     (0x000000FF)
#define WDT1_WDTPeriphID3_R_PID3_BIT      (0)
#define WDT1_WDTPeriphID3_R_PID3_DEFAULT  (0x00000001)

#define WDT1_WDTPeriphID3_PID3_MASK       (0x000000FF)
#define WDT1_WDTPeriphID3_PID3_DEFAULT    (0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.17 WDTPCellID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTPCellID0            (((WDTPCellID0_TypeDef*)(WDT1_BASE + WDT_WDTPCellID0_OFFSET )))
#define WDT1_WDTPCellID0_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPCellID0_OFFSET)))

//--------
#define WDT1_WDTPCellID0_R_CID0_MASK     (0x000000FF)
#define WDT1_WDTPCellID0_R_CID0_BIT      (0)
#define WDT1_WDTPCellID0_R_CID0_DEFAULT  (0x0000000D)

#define WDT1_WDTPCellID0_CID0_MASK       (0x000000FF)
#define WDT1_WDTPCellID0_CID0_DEFAULT    (0x0000000D)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.18 WDTPCellID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTPCellID1            (((WDTPCellID1_TypeDef*)(WDT1_BASE + WDT_WDTPCellID1_OFFSET )))
#define WDT1_WDTPCellID1_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPCellID1_OFFSET)))

//--------
#define WDT1_WDTPCellID1_R_CID1_MASK     (0x000000FF)
#define WDT1_WDTPCellID1_R_CID1_BIT      (0)
#define WDT1_WDTPCellID1_R_CID1_DEFAULT  (0x000000F0)

#define WDT1_WDTPCellID1_CID1_MASK       (0x000000FF)
#define WDT1_WDTPCellID1_CID1_DEFAULT    (0x000000F0)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.19 WDTPCellID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTPCellID2            (((WDTPCellID2_TypeDef*)(WDT1_BASE + WDT_WDTPCellID2_OFFSET )))
#define WDT1_WDTPCellID2_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPCellID2_OFFSET)))

//--------
#define WDT1_WDTPCellID2_R_CID2_MASK     (0x000000FF)
#define WDT1_WDTPCellID2_R_CID2_BIT      (0)
#define WDT1_WDTPCellID2_R_CID2_DEFAULT  (0x00000006)

#define WDT1_WDTPCellID2_CID2_MASK       (0x000000FF)
#define WDT1_WDTPCellID2_CID2_DEFAULT    (0x00000006)


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.20 WDTPCellID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define WDT1_WDTPCellID3            (((WDTPCellID3_TypeDef*)(WDT1_BASE + WDT_WDTPCellID3_OFFSET )))
#define WDT1_WDTPCellID3_R          (*((volatile const uint32_t *)(WDT1_BASE +WDT_WDTPCellID3_OFFSET)))

//--------
#define WDT1_WDTPCellID3_R_CID3_MASK     (0x000000FF)
#define WDT1_WDTPCellID3_R_CID3_BIT      (0)
#define WDT1_WDTPCellID3_R_CID3_DEFAULT  (0x000000B1)

#define WDT1_WDTPCellID3_CID3_MASK       (0x000000FF)
#define WDT1_WDTPCellID3_CID3_DEFAULT    (0x000000B1)


int32_t WDT0_Init(void);


void WDTHandler(void);
void NmiSR(void);

#endif /* WDT_H_ */
