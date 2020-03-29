/*
 * QEI.h
 *
 *  Created on: 3 may. 2018
 *      Author: InDev
 */

#ifndef QEI_H_
#define QEI_H_

#include <stdint.h>

#define QEI_BASE            (0x4002C000)
#define QEI_OFFSET          (0x0002C000)

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// QEI ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

typedef volatile struct
{
    volatile uint32_t ENABLE   : 1;
    volatile uint32_t SWAP     : 1;
    volatile uint32_t SIGMODE  : 1;
    volatile uint32_t CAPMODE  : 1;
    volatile uint32_t RESMODE  : 1;
    volatile uint32_t VELEN    : 1;
    volatile uint32_t VELDIV   : 3;
    volatile uint32_t INVA     : 1;
    volatile uint32_t INVB     : 1;
    volatile uint32_t INVI     : 1;
    volatile uint32_t STALLEN  : 1;
    volatile uint32_t FILTEN   : 1;
    const    uint32_t reserved : 2;
    volatile uint32_t FILTCNT  : 4;
    const    uint32_t reserved1: 12;
}QEICTL_TypeDef;

typedef volatile struct
{
    volatile const uint32_t ERROR    : 1;
    volatile const uint32_t DIRECTION: 1;
    const    uint32_t       reserved : 30;
}QEISTAT_TypeDef;

typedef volatile struct
{
    volatile uint32_t  POSITION   : 32;
}QEIPOS_TypeDef;


typedef volatile struct
{
    volatile uint32_t  MAXPOS : 32;
}QEIMAXPOS_TypeDef;

typedef volatile struct
{
    volatile uint32_t  LOAD: 32;
}QEILOAD_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TIME: 32;
}QEITIME_TypeDef;

typedef volatile struct
{
    volatile const uint32_t COUNT:32;
}QEICOUNT_TypeDef;


typedef volatile struct
{
    volatile const uint32_t SPEED: 32;
}QEISPEED_TypeDef;


typedef volatile struct
{
    volatile uint32_t INTINDEX    : 1;
    volatile uint32_t INTTIMER    : 1;
    volatile uint32_t INTDIR      : 1;
    volatile uint32_t INTERROR    : 1;
    const    uint32_t reserved    : 28;
}QEIINTEN_TypeDef;

typedef volatile struct
{
    volatile const uint32_t INTINDEX    : 1;
    volatile const uint32_t INTTIMER    : 1;
    volatile const uint32_t INTDIR      : 1;
    volatile const uint32_t INTERROR    : 1;
    const    uint32_t       reserved    : 28;
}QEIRIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t INTINDEX    : 1;
    volatile uint32_t INTTIMER    : 1;
    volatile uint32_t INTDIR      : 1;
    volatile uint32_t INTERROR    : 1;
    const uint32_t    reserved    : 28;
}QEIISC_TypeDef;


typedef volatile struct
{
    union
    {
        volatile uint32_t          QEICTL;
        QEICTL_TypeDef                  QEICTL_Bit;
    };
    union
    {
        volatile const uint32_t    QEISTAT;
        QEISTAT_TypeDef                 QEISTAT_Bit;
    };
    union
    {
        volatile uint32_t          QEIPOS;
        QEIPOS_TypeDef                  QEIPOS_Bit;
    };
    union
    {
        volatile uint32_t          QEIMAXPOS;
        QEIMAXPOS_TypeDef               QEIMAXPOS_Bit;
    };
    union
    {
        volatile uint32_t          QEILOAD;
        QEILOAD_TypeDef                 QEILOAD_Bit;
    };
    union
    {
        volatile const uint32_t    QEITIME;
        QEITIME_TypeDef                 QEITIME_Bit;
    };
    union
    {
        volatile const uint32_t    QEICOUNT;
        QEICOUNT_TypeDef                QEICOUNT_Bit;
    };
    union
    {
        volatile const uint32_t    QEISPEED;
        QEISPEED_TypeDef                QEISPEED_Bit;
    };
    union
    {
        volatile uint32_t          QEIINTEN;
        QEIINTEN_TypeDef                QEIINTEN_Bit;
    };
    union
    {
        volatile const uint32_t    QEIRIS;
        QEIRIS_TypeDef                  QEIRIS_Bit;
    };
    union
    {
        volatile uint32_t          QEIISC;
        QEIISC_TypeDef                  QEIISC_Bit;
    };
    const uint32_t                 reserved[1013];
}QEI_TypeDef;

typedef volatile struct
{
    QEI_TypeDef Q[2];
}QEIS_TypeDef;




#define QEI0_BASE         (0x4002C000)
#define QEI0_OFFSET       (0x0002C000)
#define QEI1_BASE         (0x4002D000)
#define QEI1_OFFSET       (0x0002D000)


#define QEI               (((QEIS_TypeDef*)(QEI0_BASE)))
#define QEI0              (((QEI_TypeDef*)(QEI0_BASE)))
#define QEI1              (((QEI_TypeDef*)(QEI1_BASE)))


#define QEI_QEICTL_OFFSET     (0x0000)
#define QEI_QEISTAT_OFFSET    (0x0004)
#define QEI_QEIPOS_OFFSET     (0x0008)
#define QEI_QEIMAXPOS_OFFSET  (0x000C)
#define QEI_QEILOAD_OFFSET    (0x0010)
#define QEI_QEITIME_OFFSET    (0x0014)
#define QEI_QEICOUNT_OFFSET   (0x0018)
#define QEI_QEISPEED_OFFSET   (0x001C)
#define QEI_QEIINTEN_OFFSET   (0x0020)
#define QEI_QEIRIS_OFFSET     (0x0024)
#define QEI_QEIISC_OFFSET     (0x0028)

//ToDO QEI0

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0 QEI0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.1 QEICTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI0_QEICTL            (((QEICTL_TypeDef*)(QEI0_BASE + QEI_QEICTL_OFFSET )))
#define QEI0_QEICTL_R          (*((volatile uint32_t *)(QEI0_BASE +QEI_QEICTL_OFFSET)))

//--------
#define QEI0_QEICTL_R_ENABLE_MASK       (0x00000001)
#define QEI0_QEICTL_R_ENABLE_BIT        (0)
#define QEI0_QEICTL_R_ENABLE_NA         (0x00000000)
#define QEI0_QEICTL_R_ENABLE_EN         (0x00000001)

#define QEI0_QEICTL_ENABLE_MASK         (0x00000001)
#define QEI0_QEICTL_ENABLE_NA           (0x00000000)
#define QEI0_QEICTL_ENABLE_EN           (0x00000001)
//--------

//--------
#define QEI0_QEICTL_R_SWAP_MASK       (0x00000002)
#define QEI0_QEICTL_R_SWAP_BIT        (1)
#define QEI0_QEICTL_R_SWAP_NA         (0x00000000)
#define QEI0_QEICTL_R_SWAP_SWAP       (0x00000002)

#define QEI0_QEICTL_SWAP_MASK         (0x00000001)
#define QEI0_QEICTL_SWAP_NA           (0x00000000)
#define QEI0_QEICTL_SWAP_SWAP         (0x00000001)
//--------

//--------
#define QEI0_QEICTL_R_SIGMODE_MASK       (0x00000004)
#define QEI0_QEICTL_R_SIGMODE_BIT        (2)
#define QEI0_QEICTL_R_SIGMODE_PHASE      (0x00000000)
#define QEI0_QEICTL_R_SIGMODE_CLK        (0x00000004)

#define QEI0_QEICTL_SIGMODE_MASK         (0x00000001)
#define QEI0_QEICTL_SIGMODE_PHASE        (0x00000000)
#define QEI0_QEICTL_SIGMODE_CLK          (0x00000001)
//--------

//--------
#define QEI0_QEICTL_R_CAPMODE_MASK       (0x00000008)
#define QEI0_QEICTL_R_CAPMODE_BIT        (3)
#define QEI0_QEICTL_R_CAPMODE_FULL       (0x00000000)
#define QEI0_QEICTL_R_CAPMODE_HALF       (0x00000008)

#define QEI0_QEICTL_CAPMODE_MASK         (0x00000001)
#define QEI0_QEICTL_CAPMODE_FULL         (0x00000000)
#define QEI0_QEICTL_CAPMODE_HALF         (0x00000001)
//--------

//--------
#define QEI0_QEICTL_R_RESMODE_MASK       (0x00000010)
#define QEI0_QEICTL_R_RESMODE_BIT        (4)
#define QEI0_QEICTL_R_RESMODE_MAXPOS     (0x00000000)
#define QEI0_QEICTL_R_RESMODE_INDEX      (0x00000010)

#define QEI0_QEICTL_RESMODE_MASK         (0x00000001)
#define QEI0_QEICTL_RESMODE_MAXPOS       (0x00000000)
#define QEI0_QEICTL_RESMODE_INDEX        (0x00000001)
//--------

//--------
#define QEI0_QEICTL_R_VELEN_MASK       (0x00000020)
#define QEI0_QEICTL_R_VELEN_BIT        (5)
#define QEI0_QEICTL_R_VELEN_NA         (0x00000000)
#define QEI0_QEICTL_R_VELEN_EN         (0x00000020)

#define QEI0_QEICTL_VELEN_MASK         (0x00000001)
#define QEI0_QEICTL_VELEN_NA           (0x00000000)
#define QEI0_QEICTL_VELEN_EN           (0x00000001)
//--------

//--------
#define QEI0_QEICTL_R_VELDIV_MASK       (0x000001C0)
#define QEI0_QEICTL_R_VELDIV_BIT        (6)
#define QEI0_QEICTL_R_VELDIV_1          (0x00000000)
#define QEI0_QEICTL_R_VELDIV_2          (0x00000040)
#define QEI0_QEICTL_R_VELDIV_4          (0x00000080)
#define QEI0_QEICTL_R_VELDIV_8          (0x000000C0)
#define QEI0_QEICTL_R_VELDIV_16         (0x00000100)
#define QEI0_QEICTL_R_VELDIV_32         (0x00000140)
#define QEI0_QEICTL_R_VELDIV_64         (0x00000180)
#define QEI0_QEICTL_R_VELDIV_128        (0x000001C0)

#define QEI0_QEICTL_VELDIV_MASK         (0x00000007)
#define QEI0_QEICTL_VELDIV_1            (0x00000000)
#define QEI0_QEICTL_VELDIV_2            (0x00000001)
#define QEI0_QEICTL_VELDIV_4            (0x00000002)
#define QEI0_QEICTL_VELDIV_8            (0x00000003)
#define QEI0_QEICTL_VELDIV_16           (0x00000004)
#define QEI0_QEICTL_VELDIV_32           (0x00000005)
#define QEI0_QEICTL_VELDIV_64           (0x00000006)
#define QEI0_QEICTL_VELDIV_128          (0x00000007)
//--------

//--------
#define QEI0_QEICTL_R_INVA_MASK       (0x00000200)
#define QEI0_QEICTL_R_INVA_BIT        (9)
#define QEI0_QEICTL_R_INVA_NA         (0x00000000)
#define QEI0_QEICTL_R_INVA_INV        (0x00000200)

#define QEI0_QEICTL_INVA_MASK         (0x00000001)
#define QEI0_QEICTL_INVA_NA           (0x00000000)
#define QEI0_QEICTL_INVA_INV          (0x00000001)
//--------

//--------
#define QEI0_QEICTL_R_INVB_MASK       (0x00000400)
#define QEI0_QEICTL_R_INVB_BIT        (10)
#define QEI0_QEICTL_R_INVB_NA         (0x00000000)
#define QEI0_QEICTL_R_INVB_INV        (0x00000400)

#define QEI0_QEICTL_INVB_MASK         (0x00000001)
#define QEI0_QEICTL_INVB_NA           (0x00000000)
#define QEI0_QEICTL_INVB_INV          (0x00000001)
//--------

//--------
#define QEI0_QEICTL_R_INVI_MASK       (0x00000800)
#define QEI0_QEICTL_R_INVI_BIT        (11)
#define QEI0_QEICTL_R_INVI_NA         (0x00000000)
#define QEI0_QEICTL_R_INVI_INV        (0x00000800)

#define QEI0_QEICTL_INVI_MASK         (0x00000001)
#define QEI0_QEICTL_INVI_NA           (0x00000000)
#define QEI0_QEICTL_INVI_INV          (0x00000001)
//--------

//--------
#define QEI0_QEICTL_R_STALLEN_MASK       (0x00001000)
#define QEI0_QEICTL_R_STALLEN_BIT        (12)
#define QEI0_QEICTL_R_STALLEN_DIS        (0x00000000)
#define QEI0_QEICTL_R_STALLEN_EN         (0x00001000)

#define QEI0_QEICTL_STALLEN_MASK         (0x00000001)
#define QEI0_QEICTL_STALLEN_DIS          (0x00000000)
#define QEI0_QEICTL_STALLEN_EN           (0x00000001)
//--------

//--------
#define QEI0_QEICTL_R_FILTEN_MASK       (0x00002000)
#define QEI0_QEICTL_R_FILTEN_BIT        (13)
#define QEI0_QEICTL_R_FILTEN_DIS        (0x00000000)
#define QEI0_QEICTL_R_FILTEN_EN         (0x00002000)

#define QEI0_QEICTL_FILTEN_MASK         (0x00000001)
#define QEI0_QEICTL_FILTEN_DIS          (0x00000000)
#define QEI0_QEICTL_FILTEN_EN           (0x00000001)
//--------

//--------
#define QEI0_QEICTL_R_FILTCNT_MASK       (0x000F0000)
#define QEI0_QEICTL_R_FILTCNT_BIT        (0)

#define QEI0_QEICTL_FILTCNT_MASK         (0x0000000F)
//--------

#define QEI0_QEICTL_ENABLE_BB     (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEICTL_OFFSET)*32)+(0*4))))
#define QEI0_QEICTL_SWAP_BB       (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEICTL_OFFSET)*32)+(1*4))))
#define QEI0_QEICTL_SIGMODE_BB    (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEICTL_OFFSET)*32)+(2*4))))
#define QEI0_QEICTL_CAPMODE_BB    (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEICTL_OFFSET)*32)+(3*4))))
#define QEI0_QEICTL_RESMODE_BB    (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEICTL_OFFSET)*32)+(4*4))))
#define QEI0_QEICTL_VELEN_BB      (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEICTL_OFFSET)*32)+(5*4))))
#define QEI0_QEICTL_INVA_BB       (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEICTL_OFFSET)*32)+(9*4))))
#define QEI0_QEICTL_INVB_BB       (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEICTL_OFFSET)*32)+(10*4))))
#define QEI0_QEICTL_INVI_BB       (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEICTL_OFFSET)*32)+(11*4))))
#define QEI0_QEICTL_STALLEN_BB    (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEICTL_OFFSET)*32)+(12*4))))
#define QEI0_QEICTL_FILTEN_BB     (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEICTL_OFFSET)*32)+(13*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.2 QEISTAT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI0_QEISTAT            (((QEISTAT_TypeDef*)(QEI0_BASE + QEI_QEISTAT_OFFSET )))
#define QEI0_QEISTAT_R          (*((volatile uint32_t *)(QEI0_BASE +QEI_QEISTAT_OFFSET)))

//--------
#define QEI0_QEISTAT_R_ERROR_MASK       (0x00000001)
#define QEI0_QEISTAT_R_ERROR_BIT        (0)
#define QEI0_QEISTAT_R_ERROR_NOERROR    (0x00000000)
#define QEI0_QEISTAT_R_ERROR_ERROR      (0x00000001)

#define QEI0_QEISTAT_ERROR_MASK         (0x00000001)
#define QEI0_QEISTAT_ERROR_NOERROR      (0x00000000)
#define QEI0_QEISTAT_ERROR_ERROR        (0x00000001)
//--------

//--------
#define QEI0_QEISTAT_R_DIRECTION_MASK       (0x00000002)
#define QEI0_QEISTAT_R_DIRECTION_BIT        (1)
#define QEI0_QEISTAT_R_DIRECTION_FORWARD    (0x00000000)
#define QEI0_QEISTAT_R_DIRECTION_REVERSE    (0x00000002)

#define QEI0_QEISTAT_DIRECTION_MASK         (0x00000001)
#define QEI0_QEISTAT_DIRECTION_FORWARD      (0x00000000)
#define QEI0_QEISTAT_DIRECTION_REVERSE      (0x00000001)
//--------

#define QEI0_QEISTAT_ERROR_BB     (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEISTAT_OFFSET)*32)+(0*4))))
#define QEI0_QEISTAT_DIRECTION_BB (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEISTAT_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.3 QEIPOS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI0_QEIPOS            (((QEIPOS_TypeDef*)(QEI0_BASE + QEI_QEIPOS_OFFSET )))
#define QEI0_QEIPOS_R          (*((volatile uint32_t *)(QEI0_BASE +QEI_QEIPOS_OFFSET)))

//--------
#define QEI0_QEIPOS_R_POS_MASK       (0xFFFFFFFF)
#define QEI0_QEIPOS_R_POS_BIT        (0)

#define QEI0_QEIPOS_POS_MASK         (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.4 QEIMAXPOS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define QEI0_QEIMAXPOS            (((QEIMAXPOS_TypeDef*)(QEI0_BASE + QEI_QEIMAXPOS_OFFSET )))
#define QEI0_QEIMAXPOS_R          (*((volatile uint32_t *)(QEI0_BASE +QEI_QEIMAXPOS_OFFSET)))

//--------
#define QEI0_QEIMAXPOS_R_MAXPOS_MASK       (0xFFFFFFFF)
#define QEI0_QEIMAXPOS_R_MAXPOS_BIT        (0)

#define QEI0_QEIMAXPOS_MAXPOS_MASK         (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.5 QEILOAD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI0_QEILOAD            (((QEILOAD_TypeDef*)(QEI0_BASE + QEI_QEILOAD_OFFSET )))
#define QEI0_QEILOAD_R          (*((volatile uint32_t *)(QEI0_BASE +QEI_QEILOAD_OFFSET)))

//--------
#define QEI0_QEILOAD_R_LOAD_MASK       (0xFFFFFFFF)
#define QEI0_QEILOAD_R_LOAD_BIT        (0)

#define QEI0_QEILOAD_LOAD_MASK         (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.6 QEITIME ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI0_QEITIME            (((QEITIME_TypeDef*)(QEI0_BASE + QEI_QEITIME_OFFSET )))
#define QEI0_QEITIME_R          (*((volatile const uint32_t *)(QEI0_BASE +QEI_QEITIME_OFFSET)))

//--------
#define QEI0_QEITIME_R_TIME_MASK       (0xFFFFFFFF)
#define QEI0_QEITIME_R_TIME_BIT        (0)

#define QEI0_QEITIME_TIME_MASK         (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.7 QEICOUNT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI0_QEICOUNT            (((QEICOUNT_TypeDef*)(QEI0_BASE + QEI_QEICOUNT_OFFSET )))
#define QEI0_QEICOUNT_R          (*((volatile const uint32_t *)(QEI0_BASE +QEI_QEICOUNT_OFFSET)))


//--------
#define QEI0_QEICOUNT_R_COUNT_MASK       (0xFFFFFFFF)
#define QEI0_QEICOUNT_R_COUNT_BIT        (0)

#define QEI0_QEICOUNT_COUNT_MASK         (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.8 QEISPEED ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI0_QEISPEED            (((QEISPEED_TypeDef*)(QEI0_BASE + QEI_QEISPEED_OFFSET )))
#define QEI0_QEISPEED_R          (*((volatile const uint32_t *)(QEI0_BASE +QEI_QEISPEED_OFFSET)))

//--------
#define QEI0_QEISPEED_R_SPEED_MASK       (0xFFFFFFFF)
#define QEI0_QEISPEED_R_SPEED_BIT        (0)

#define QEI0_QEISPEED_SPEED_MASK         (0xFFFFFFFF)
//--------

//////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.9 QEIINTEN ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI0_QEIINTEN            (((QEIINTEN_TypeDef*)(QEI0_BASE + QEI_QEIINTEN_OFFSET )))
#define QEI0_QEIINTEN_R          (*((volatile uint32_t *)(QEI0_BASE +QEI_QEIINTEN_OFFSET)))

//--------
#define QEI0_QEIINTEN_R_INTINDEX_MASK       (0x00000001)
#define QEI0_QEIINTEN_R_INTINDEX_BIT        (0)
#define QEI0_QEIINTEN_R_INTINDEX_DIS        (0x00000000)
#define QEI0_QEIINTEN_R_INTINDEX_EN         (0x00000001)

#define QEI0_QEIINTEN_INTINDEX_MASK         (0x00000001)
#define QEI0_QEIINTEN_INTINDEX_DIS          (0x00000000)
#define QEI0_QEIINTEN_INTINDEX_EN           (0x00000001)
//--------

//--------
#define QEI0_QEIINTEN_R_INTTIMER_MASK       (0x00000002)
#define QEI0_QEIINTEN_R_INTTIMER_BIT        (1)
#define QEI0_QEIINTEN_R_INTTIMER_DIS        (0x00000000)
#define QEI0_QEIINTEN_R_INTTIMER_EN         (0x00000002)

#define QEI0_QEIINTEN_INTTIMER_MASK         (0x00000001)
#define QEI0_QEIINTEN_INTTIMER_DIS          (0x00000000)
#define QEI0_QEIINTEN_INTTIMER_EN           (0x00000001)
//--------

//--------
#define QEI0_QEIINTEN_R_INTDIR_MASK       (0x00000004)
#define QEI0_QEIINTEN_R_INTDIR_BIT        (2)
#define QEI0_QEIINTEN_R_INTDIR_DIS        (0x00000000)
#define QEI0_QEIINTEN_R_INTDIR_EN         (0x00000004)

#define QEI0_QEIINTEN_INTDIR_MASK         (0x00000001)
#define QEI0_QEIINTEN_INTDIR_DIS          (0x00000000)
#define QEI0_QEIINTEN_INTDIR_EN           (0x00000001)
//--------

//--------
#define QEI0_QEIINTEN_R_INTERROR_MASK       (0x00000008)
#define QEI0_QEIINTEN_R_INTERROR_BIT        (3)
#define QEI0_QEIINTEN_R_INTERROR_DIS        (0x00000000)
#define QEI0_QEIINTEN_R_INTERROR_EN         (0x00000008)

#define QEI0_QEIINTEN_INTERROR_MASK         (0x00000001)
#define QEI0_QEIINTEN_INTERROR_DIS          (0x00000000)
#define QEI0_QEIINTEN_INTERROR_EN           (0x00000001)
//--------

#define QEI0_QEIINTEN_INTINDEX_BB     (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEIINTEN_OFFSET)*32)+(0*4))))
#define QEI0_QEIINTEN_INTTIMER_BB     (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEIINTEN_OFFSET)*32)+(1*4))))
#define QEI0_QEIINTEN_INTDIR_BB       (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEIINTEN_OFFSET)*32)+(2*4))))
#define QEI0_QEIINTEN_INTERROR_BB     (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEIINTEN_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.10 QEIRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI0_QEIRIS            (((QEIRIS_TypeDef*)(QEI0_BASE + QEI_QEIRIS_OFFSET )))
#define QEI0_QEIRIS_R          (*((volatile uint32_t *)(QEI0_BASE +QEI_QEIRIS_OFFSET)))

//--------
#define QEI0_QEIRIS_R_INTINDEX_MASK      (0x00000001)
#define QEI0_QEIRIS_R_INTINDEX_BIT       (0)
#define QEI0_QEIRIS_R_INTINDEX_NOACTIVE  (0x00000000)
#define QEI0_QEIRIS_R_INTINDEX_ACTIVE    (0x00000001)

#define QEI0_QEIRIS_INTINDEX_MASK        (0x00000001)
#define QEI0_QEIRIS_INTINDEX_NOACTIVE    (0x00000000)
#define QEI0_QEIRIS_INTINDEX_ACTIVE      (0x00000001)
//--------

//--------
#define QEI0_QEIRIS_R_INTTIMER_MASK      (0x00000002)
#define QEI0_QEIRIS_R_INTTIMER_BIT       (1)
#define QEI0_QEIRIS_R_INTTIMER_NOACTIVE  (0x00000000)
#define QEI0_QEIRIS_R_INTTIMER_ACTIVE    (0x00000002)

#define QEI0_QEIRIS_INTTIMER_MASK        (0x00000001)
#define QEI0_QEIRIS_INTTIMER_NOACTIVE    (0x00000000)
#define QEI0_QEIRIS_INTTIMER_ACTIVE      (0x00000001)
//--------

//--------
#define QEI0_QEIRIS_R_INTDIR_MASK      (0x00000004)
#define QEI0_QEIRIS_R_INTDIR_BIT       (2)
#define QEI0_QEIRIS_R_INTDIR_NOACTIVE  (0x00000000)
#define QEI0_QEIRIS_R_INTDIR_ACTIVE    (0x00000004)

#define QEI0_QEIRIS_INTDIR_MASK        (0x00000001)
#define QEI0_QEIRIS_INTDIR_NOACTIVE    (0x00000000)
#define QEI0_QEIRIS_INTDIR_ACTIVE      (0x00000001)
//--------

//--------
#define QEI0_QEIRIS_R_INTERROR_MASK      (0x00000008)
#define QEI0_QEIRIS_R_INTERROR_BIT       (3)
#define QEI0_QEIRIS_R_INTERROR_NOACTIVE  (0x00000000)
#define QEI0_QEIRIS_R_INTERROR_ACTIVE    (0x00000008)

#define QEI0_QEIRIS_INTERROR_MASK        (0x00000001)
#define QEI0_QEIRIS_INTERROR_NOACTIVE    (0x00000000)
#define QEI0_QEIRIS_INTERROR_ACTIVE      (0x00000001)
//--------

#define QEI0_QEIRIS_INTINDEX_BB     (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEIRIS_OFFSET)*32)+(0*4))))
#define QEI0_QEIRIS_INTTIMER_BB     (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEIRIS_OFFSET)*32)+(1*4))))
#define QEI0_QEIRIS_INTDIR_BB       (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEIRIS_OFFSET)*32)+(2*4))))
#define QEI0_QEIRIS_INTERROR_BB     (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEIRIS_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.11 QEIISC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI0_QEIISC            (((QEIISC_TypeDef*)(QEI0_BASE + QEI_QEIISC_OFFSET )))
#define QEI0_QEIISC_R          (*((volatile uint32_t *)(QEI0_BASE +QEI_QEIISC_OFFSET)))

//--------
#define QEI0_QEIISC_R_INTINDEX_MASK       (0x00000001)
#define QEI0_QEIISC_R_INTINDEX_BIT        (0)
#define QEI0_QEIISC_R_INTINDEX_NOOCCUR    (0x00000000)
#define QEI0_QEIISC_R_INTINDEX_OCCUR      (0x00000001)
#define QEI0_QEIISC_R_INTINDEX_CLEAR      (0x00000001)

#define QEI0_QEIISC_INTINDEX_MASK       (0x00000001)
#define QEI0_QEIISC_INTINDEX_NOOCCUR    (0x00000000)
#define QEI0_QEIISC_INTINDEX_OCCUR      (0x00000001)
#define QEI0_QEIISC_INTINDEX_CLEAR      (0x00000001)
//--------

//--------
#define QEI0_QEIISC_R_INTTIMER_MASK       (0x00000002)
#define QEI0_QEIISC_R_INTTIMER_BIT        (1)
#define QEI0_QEIISC_R_INTTIMER_NOOCCUR    (0x00000000)
#define QEI0_QEIISC_R_INTTIMER_OCCUR      (0x00000002)
#define QEI0_QEIISC_R_INTTIMER_CLEAR      (0x00000002)

#define QEI0_QEIISC_INTTIMER_MASK       (0x00000001)
#define QEI0_QEIISC_INTTIMER_NOOCCUR    (0x00000000)
#define QEI0_QEIISC_INTTIMER_OCCUR      (0x00000001)
#define QEI0_QEIISC_INTTIMER_CLEAR      (0x00000001)
//--------

//--------
#define QEI0_QEIISC_R_INTDIR_MASK       (0x00000004)
#define QEI0_QEIISC_R_INTDIR_BIT        (2)
#define QEI0_QEIISC_R_INTDIR_NOOCCUR    (0x00000000)
#define QEI0_QEIISC_R_INTDIR_OCCUR      (0x00000004)
#define QEI0_QEIISC_R_INTDIR_CLEAR      (0x00000004)

#define QEI0_QEIISC_INTDIR_MASK       (0x00000001)
#define QEI0_QEIISC_INTDIR_NOOCCUR    (0x00000000)
#define QEI0_QEIISC_INTDIR_OCCUR      (0x00000001)
#define QEI0_QEIISC_INTDIR_CLEAR      (0x00000001)
//--------

//--------
#define QEI0_QEIISC_R_INTERROR_MASK       (0x00000008)
#define QEI0_QEIISC_R_INTERROR_BIT        (3)
#define QEI0_QEIISC_R_INTERROR_NOOCCUR    (0x00000000)
#define QEI0_QEIISC_R_INTERROR_OCCUR      (0x00000008)
#define QEI0_QEIISC_R_INTERROR_CLEAR      (0x00000008)

#define QEI0_QEIISC_INTERROR_MASK       (0x00000001)
#define QEI0_QEIISC_INTERROR_NOOCCUR    (0x00000000)
#define QEI0_QEIISC_INTERROR_OCCUR      (0x00000001)
#define QEI0_QEIISC_INTERROR_CLEAR      (0x00000001)
//--------

#define QEI0_QEIISC_INTINDEX_BB     (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEIISC_OFFSET)*32)+(0*4))))
#define QEI0_QEIISC_INTTIMER_BB     (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEIISC_OFFSET)*32)+(1*4))))
#define QEI0_QEIISC_INTDIR_BB       (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEIISC_OFFSET)*32)+(2*4))))
#define QEI0_QEIISC_INTERROR_BB     (*((volatile uint32_t *)(0x42000000+((QEI0_OFFSET+QEI_QEIISC_OFFSET)*32)+(3*4))))


//ToDO QEI1

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 QEI1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.1 QEICTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI1_QEICTL            (((QEICTL_TypeDef*)(QEI1_BASE + QEI_QEICTL_OFFSET )))
#define QEI1_QEICTL_R          (*((volatile uint32_t *)(QEI1_BASE +QEI_QEICTL_OFFSET)))

//--------
#define QEI1_QEICTL_R_ENABLE_MASK       (0x00000001)
#define QEI1_QEICTL_R_ENABLE_BIT        (0)
#define QEI1_QEICTL_R_ENABLE_NA         (0x00000000)
#define QEI1_QEICTL_R_ENABLE_EN         (0x00000001)

#define QEI1_QEICTL_ENABLE_MASK         (0x00000001)
#define QEI1_QEICTL_ENABLE_NA           (0x00000000)
#define QEI1_QEICTL_ENABLE_EN           (0x00000001)
//--------

//--------
#define QEI1_QEICTL_R_SWAP_MASK       (0x00000002)
#define QEI1_QEICTL_R_SWAP_BIT        (1)
#define QEI1_QEICTL_R_SWAP_NA         (0x00000000)
#define QEI1_QEICTL_R_SWAP_SWAP       (0x00000002)

#define QEI1_QEICTL_SWAP_MASK         (0x00000001)
#define QEI1_QEICTL_SWAP_NA           (0x00000000)
#define QEI1_QEICTL_SWAP_SWAP         (0x00000001)
//--------

//--------
#define QEI1_QEICTL_R_SIGMODE_MASK       (0x00000004)
#define QEI1_QEICTL_R_SIGMODE_BIT        (2)
#define QEI1_QEICTL_R_SIGMODE_PHASE      (0x00000000)
#define QEI1_QEICTL_R_SIGMODE_CLK        (0x00000004)

#define QEI1_QEICTL_SIGMODE_MASK         (0x00000001)
#define QEI1_QEICTL_SIGMODE_PHASE        (0x00000000)
#define QEI1_QEICTL_SIGMODE_CLK          (0x00000001)
//--------

//--------
#define QEI1_QEICTL_R_CAPMODE_MASK       (0x00000008)
#define QEI1_QEICTL_R_CAPMODE_BIT        (3)
#define QEI1_QEICTL_R_CAPMODE_FULL       (0x00000000)
#define QEI1_QEICTL_R_CAPMODE_HALF       (0x00000008)

#define QEI1_QEICTL_CAPMODE_MASK         (0x00000001)
#define QEI1_QEICTL_CAPMODE_FULL         (0x00000000)
#define QEI1_QEICTL_CAPMODE_HALF         (0x00000001)
//--------

//--------
#define QEI1_QEICTL_R_RESMODE_MASK       (0x00000010)
#define QEI1_QEICTL_R_RESMODE_BIT        (4)
#define QEI1_QEICTL_R_RESMODE_MAXPOS     (0x00000000)
#define QEI1_QEICTL_R_RESMODE_INDEX      (0x00000010)

#define QEI1_QEICTL_RESMODE_MASK         (0x00000001)
#define QEI1_QEICTL_RESMODE_MAXPOS       (0x00000000)
#define QEI1_QEICTL_RESMODE_INDEX        (0x00000001)
//--------

//--------
#define QEI1_QEICTL_R_VELEN_MASK       (0x00000020)
#define QEI1_QEICTL_R_VELEN_BIT        (5)
#define QEI1_QEICTL_R_VELEN_NA         (0x00000000)
#define QEI1_QEICTL_R_VELEN_EN         (0x00000020)

#define QEI1_QEICTL_VELEN_MASK         (0x00000001)
#define QEI1_QEICTL_VELEN_NA           (0x00000000)
#define QEI1_QEICTL_VELEN_EN           (0x00000001)
//--------

//--------
#define QEI1_QEICTL_R_VELDIV_MASK       (0x000001C0)
#define QEI1_QEICTL_R_VELDIV_BIT        (6)
#define QEI1_QEICTL_R_VELDIV_1          (0x00000000)
#define QEI1_QEICTL_R_VELDIV_2          (0x00000040)
#define QEI1_QEICTL_R_VELDIV_4          (0x00000080)
#define QEI1_QEICTL_R_VELDIV_8          (0x000000C0)
#define QEI1_QEICTL_R_VELDIV_16         (0x00000100)
#define QEI1_QEICTL_R_VELDIV_32         (0x00000140)
#define QEI1_QEICTL_R_VELDIV_64         (0x00000180)
#define QEI1_QEICTL_R_VELDIV_128        (0x000001C0)

#define QEI1_QEICTL_VELDIV_MASK         (0x00000007)
#define QEI1_QEICTL_VELDIV_1            (0x00000000)
#define QEI1_QEICTL_VELDIV_2            (0x00000001)
#define QEI1_QEICTL_VELDIV_4            (0x00000002)
#define QEI1_QEICTL_VELDIV_8            (0x00000003)
#define QEI1_QEICTL_VELDIV_16           (0x00000004)
#define QEI1_QEICTL_VELDIV_32           (0x00000005)
#define QEI1_QEICTL_VELDIV_64           (0x00000006)
#define QEI1_QEICTL_VELDIV_128          (0x00000007)
//--------

//--------
#define QEI1_QEICTL_R_INVA_MASK       (0x00000200)
#define QEI1_QEICTL_R_INVA_BIT        (9)
#define QEI1_QEICTL_R_INVA_NA         (0x00000000)
#define QEI1_QEICTL_R_INVA_INV        (0x00000200)

#define QEI1_QEICTL_INVA_MASK         (0x00000001)
#define QEI1_QEICTL_INVA_NA           (0x00000000)
#define QEI1_QEICTL_INVA_INV          (0x00000001)
//--------

//--------
#define QEI1_QEICTL_R_INVB_MASK       (0x00000400)
#define QEI1_QEICTL_R_INVB_BIT        (10)
#define QEI1_QEICTL_R_INVB_NA         (0x00000000)
#define QEI1_QEICTL_R_INVB_INV        (0x00000400)

#define QEI1_QEICTL_INVB_MASK         (0x00000001)
#define QEI1_QEICTL_INVB_NA           (0x00000000)
#define QEI1_QEICTL_INVB_INV          (0x00000001)
//--------

//--------
#define QEI1_QEICTL_R_INVI_MASK       (0x00000800)
#define QEI1_QEICTL_R_INVI_BIT        (11)
#define QEI1_QEICTL_R_INVI_NA         (0x00000000)
#define QEI1_QEICTL_R_INVI_INV        (0x00000800)

#define QEI1_QEICTL_INVI_MASK         (0x00000001)
#define QEI1_QEICTL_INVI_NA           (0x00000000)
#define QEI1_QEICTL_INVI_INV          (0x00000001)
//--------

//--------
#define QEI1_QEICTL_R_STALLEN_MASK       (0x00001000)
#define QEI1_QEICTL_R_STALLEN_BIT        (12)
#define QEI1_QEICTL_R_STALLEN_DIS        (0x00000000)
#define QEI1_QEICTL_R_STALLEN_EN         (0x00001000)

#define QEI1_QEICTL_STALLEN_MASK         (0x00000001)
#define QEI1_QEICTL_STALLEN_DIS          (0x00000000)
#define QEI1_QEICTL_STALLEN_EN           (0x00000001)
//--------

//--------
#define QEI1_QEICTL_R_FILTEN_MASK       (0x00002000)
#define QEI1_QEICTL_R_FILTEN_BIT        (13)
#define QEI1_QEICTL_R_FILTEN_DIS        (0x00000000)
#define QEI1_QEICTL_R_FILTEN_EN         (0x00002000)

#define QEI1_QEICTL_FILTEN_MASK         (0x00000001)
#define QEI1_QEICTL_FILTEN_DIS          (0x00000000)
#define QEI1_QEICTL_FILTEN_EN           (0x00000001)
//--------

//--------
#define QEI1_QEICTL_R_FILTCNT_MASK       (0x000F0000)
#define QEI1_QEICTL_R_FILTCNT_BIT        (0)

#define QEI1_QEICTL_FILTCNT_MASK         (0x0000000F)
//--------

#define QEI1_QEICTL_ENABLE_BB     (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEICTL_OFFSET)*32)+(0*4))))
#define QEI1_QEICTL_SWAP_BB       (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEICTL_OFFSET)*32)+(1*4))))
#define QEI1_QEICTL_SIGMODE_BB    (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEICTL_OFFSET)*32)+(2*4))))
#define QEI1_QEICTL_CAPMODE_BB    (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEICTL_OFFSET)*32)+(3*4))))
#define QEI1_QEICTL_RESMODE_BB    (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEICTL_OFFSET)*32)+(4*4))))
#define QEI1_QEICTL_VELEN_BB      (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEICTL_OFFSET)*32)+(5*4))))
#define QEI1_QEICTL_INVA_BB       (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEICTL_OFFSET)*32)+(9*4))))
#define QEI1_QEICTL_INVB_BB       (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEICTL_OFFSET)*32)+(10*4))))
#define QEI1_QEICTL_INVI_BB       (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEICTL_OFFSET)*32)+(11*4))))
#define QEI1_QEICTL_STALLEN_BB    (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEICTL_OFFSET)*32)+(12*4))))
#define QEI1_QEICTL_FILTEN_BB     (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEICTL_OFFSET)*32)+(13*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.2 QEISTAT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI1_QEISTAT            (((QEISTAT_TypeDef*)(QEI1_BASE + QEI_QEISTAT_OFFSET )))
#define QEI1_QEISTAT_R          (*((volatile uint32_t *)(QEI1_BASE +QEI_QEISTAT_OFFSET)))

//--------
#define QEI1_QEISTAT_R_ERROR_MASK       (0x00000001)
#define QEI1_QEISTAT_R_ERROR_BIT        (0)
#define QEI1_QEISTAT_R_ERROR_NOERROR    (0x00000000)
#define QEI1_QEISTAT_R_ERROR_ERROR      (0x00000001)

#define QEI1_QEISTAT_ERROR_MASK         (0x00000001)
#define QEI1_QEISTAT_ERROR_NOERROR      (0x00000000)
#define QEI1_QEISTAT_ERROR_ERROR        (0x00000001)
//--------

//--------
#define QEI1_QEISTAT_R_DIRECTION_MASK       (0x00000002)
#define QEI1_QEISTAT_R_DIRECTION_BIT        (1)
#define QEI1_QEISTAT_R_DIRECTION_FORWARD    (0x00000000)
#define QEI1_QEISTAT_R_DIRECTION_REVERSE    (0x00000002)

#define QEI1_QEISTAT_DIRECTION_MASK         (0x00000001)
#define QEI1_QEISTAT_DIRECTION_FORWARD      (0x00000000)
#define QEI1_QEISTAT_DIRECTION_REVERSE      (0x00000001)
//--------

#define QEI1_QEISTAT_ERROR_BB     (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEISTAT_OFFSET)*32)+(0*4))))
#define QEI1_QEISTAT_DIRECTION_BB (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEISTAT_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.3 QEIPOS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI1_QEIPOS            (((QEIPOS_TypeDef*)(QEI1_BASE + QEI_QEIPOS_OFFSET )))
#define QEI1_QEIPOS_R          (*((volatile uint32_t *)(QEI1_BASE +QEI_QEIPOS_OFFSET)))

//--------
#define QEI1_QEIPOS_R_POS_MASK       (0xFFFFFFFF)
#define QEI1_QEIPOS_R_POS_BIT        (0)

#define QEI1_QEIPOS_POS_MASK         (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.4 QEIMAXPOS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define QEI1_QEIMAXPOS            (((QEIMAXPOS_TypeDef*)(QEI1_BASE + QEI_QEIMAXPOS_OFFSET )))
#define QEI1_QEIMAXPOS_R          (*((volatile uint32_t *)(QEI1_BASE +QEI_QEIMAXPOS_OFFSET)))

//--------
#define QEI1_QEIMAXPOS_R_MAXPOS_MASK       (0xFFFFFFFF)
#define QEI1_QEIMAXPOS_R_MAXPOS_BIT        (0)

#define QEI1_QEIMAXPOS_MAXPOS_MASK         (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.5 QEILOAD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI1_QEILOAD            (((QEILOAD_TypeDef*)(QEI1_BASE + QEI_QEILOAD_OFFSET )))
#define QEI1_QEILOAD_R          (*((volatile uint32_t *)(QEI1_BASE +QEI_QEILOAD_OFFSET)))

//--------
#define QEI1_QEILOAD_R_LOAD_MASK       (0xFFFFFFFF)
#define QEI1_QEILOAD_R_LOAD_BIT        (0)

#define QEI1_QEILOAD_LOAD_MASK         (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.6 QEITIME ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI1_QEITIME            (((QEITIME_TypeDef*)(QEI1_BASE + QEI_QEITIME_OFFSET )))
#define QEI1_QEITIME_R          (*((volatile const uint32_t *)(QEI1_BASE +QEI_QEITIME_OFFSET)))

//--------
#define QEI1_QEITIME_R_TIME_MASK       (0xFFFFFFFF)
#define QEI1_QEITIME_R_TIME_BIT        (0)

#define QEI1_QEITIME_TIME_MASK         (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.7 QEICOUNT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI1_QEICOUNT            (((QEICOUNT_TypeDef*)(QEI1_BASE + QEI_QEICOUNT_OFFSET )))
#define QEI1_QEICOUNT_R          (*((volatile const uint32_t *)(QEI1_BASE +QEI_QEICOUNT_OFFSET)))


//--------
#define QEI1_QEICOUNT_R_COUNT_MASK       (0xFFFFFFFF)
#define QEI1_QEICOUNT_R_COUNT_BIT        (0)

#define QEI1_QEICOUNT_COUNT_MASK         (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.8 QEISPEED ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI1_QEISPEED            (((QEISPEED_TypeDef*)(QEI1_BASE + QEI_QEISPEED_OFFSET )))
#define QEI1_QEISPEED_R          (*((volatile const uint32_t *)(QEI1_BASE +QEI_QEISPEED_OFFSET)))

//--------
#define QEI1_QEISPEED_R_SPEED_MASK       (0xFFFFFFFF)
#define QEI1_QEISPEED_R_SPEED_BIT        (0)

#define QEI1_QEISPEED_SPEED_MASK         (0xFFFFFFFF)
//--------

//////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.9 QEIINTEN ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI1_QEIINTEN            (((QEIINTEN_TypeDef*)(QEI1_BASE + QEI_QEIINTEN_OFFSET )))
#define QEI1_QEIINTEN_R          (*((volatile uint32_t *)(QEI1_BASE +QEI_QEIINTEN_OFFSET)))

//--------
#define QEI1_QEIINTEN_R_INTINDEX_MASK       (0x00000001)
#define QEI1_QEIINTEN_R_INTINDEX_BIT        (0)
#define QEI1_QEIINTEN_R_INTINDEX_DIS        (0x00000000)
#define QEI1_QEIINTEN_R_INTINDEX_EN         (0x00000001)

#define QEI1_QEIINTEN_INTINDEX_MASK         (0x00000001)
#define QEI1_QEIINTEN_INTINDEX_DIS          (0x00000000)
#define QEI1_QEIINTEN_INTINDEX_EN           (0x00000001)
//--------

//--------
#define QEI1_QEIINTEN_R_INTTIMER_MASK       (0x00000002)
#define QEI1_QEIINTEN_R_INTTIMER_BIT        (1)
#define QEI1_QEIINTEN_R_INTTIMER_DIS        (0x00000000)
#define QEI1_QEIINTEN_R_INTTIMER_EN         (0x00000002)

#define QEI1_QEIINTEN_INTTIMER_MASK         (0x00000001)
#define QEI1_QEIINTEN_INTTIMER_DIS          (0x00000000)
#define QEI1_QEIINTEN_INTTIMER_EN           (0x00000001)
//--------

//--------
#define QEI1_QEIINTEN_R_INTDIR_MASK       (0x00000004)
#define QEI1_QEIINTEN_R_INTDIR_BIT        (2)
#define QEI1_QEIINTEN_R_INTDIR_DIS        (0x00000000)
#define QEI1_QEIINTEN_R_INTDIR_EN         (0x00000004)

#define QEI1_QEIINTEN_INTDIR_MASK         (0x00000001)
#define QEI1_QEIINTEN_INTDIR_DIS          (0x00000000)
#define QEI1_QEIINTEN_INTDIR_EN           (0x00000001)
//--------

//--------
#define QEI1_QEIINTEN_R_INTERROR_MASK       (0x00000008)
#define QEI1_QEIINTEN_R_INTERROR_BIT        (3)
#define QEI1_QEIINTEN_R_INTERROR_DIS        (0x00000000)
#define QEI1_QEIINTEN_R_INTERROR_EN         (0x00000008)

#define QEI1_QEIINTEN_INTERROR_MASK         (0x00000001)
#define QEI1_QEIINTEN_INTERROR_DIS          (0x00000000)
#define QEI1_QEIINTEN_INTERROR_EN           (0x00000001)
//--------

#define QEI1_QEIINTEN_INTINDEX_BB     (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEIINTEN_OFFSET)*32)+(0*4))))
#define QEI1_QEIINTEN_INTTIMER_BB     (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEIINTEN_OFFSET)*32)+(1*4))))
#define QEI1_QEIINTEN_INTDIR_BB       (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEIINTEN_OFFSET)*32)+(2*4))))
#define QEI1_QEIINTEN_INTERROR_BB     (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEIINTEN_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.10 QEIRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI1_QEIRIS            (((QEIRIS_TypeDef*)(QEI1_BASE + QEI_QEIRIS_OFFSET )))
#define QEI1_QEIRIS_R          (*((volatile uint32_t *)(QEI1_BASE +QEI_QEIRIS_OFFSET)))

//--------
#define QEI1_QEIRIS_R_INTINDEX_MASK      (0x00000001)
#define QEI1_QEIRIS_R_INTINDEX_BIT       (0)
#define QEI1_QEIRIS_R_INTINDEX_NOACTIVE  (0x00000000)
#define QEI1_QEIRIS_R_INTINDEX_ACTIVE    (0x00000001)

#define QEI1_QEIRIS_INTINDEX_MASK        (0x00000001)
#define QEI1_QEIRIS_INTINDEX_NOACTIVE    (0x00000000)
#define QEI1_QEIRIS_INTINDEX_ACTIVE      (0x00000001)
//--------

//--------
#define QEI1_QEIRIS_R_INTTIMER_MASK      (0x00000002)
#define QEI1_QEIRIS_R_INTTIMER_BIT       (1)
#define QEI1_QEIRIS_R_INTTIMER_NOACTIVE  (0x00000000)
#define QEI1_QEIRIS_R_INTTIMER_ACTIVE    (0x00000002)

#define QEI1_QEIRIS_INTTIMER_MASK        (0x00000001)
#define QEI1_QEIRIS_INTTIMER_NOACTIVE    (0x00000000)
#define QEI1_QEIRIS_INTTIMER_ACTIVE      (0x00000001)
//--------

//--------
#define QEI1_QEIRIS_R_INTDIR_MASK      (0x00000004)
#define QEI1_QEIRIS_R_INTDIR_BIT       (2)
#define QEI1_QEIRIS_R_INTDIR_NOACTIVE  (0x00000000)
#define QEI1_QEIRIS_R_INTDIR_ACTIVE    (0x00000004)

#define QEI1_QEIRIS_INTDIR_MASK        (0x00000001)
#define QEI1_QEIRIS_INTDIR_NOACTIVE    (0x00000000)
#define QEI1_QEIRIS_INTDIR_ACTIVE      (0x00000001)
//--------

//--------
#define QEI1_QEIRIS_R_INTERROR_MASK      (0x00000008)
#define QEI1_QEIRIS_R_INTERROR_BIT       (3)
#define QEI1_QEIRIS_R_INTERROR_NOACTIVE  (0x00000000)
#define QEI1_QEIRIS_R_INTERROR_ACTIVE    (0x00000008)

#define QEI1_QEIRIS_INTERROR_MASK        (0x00000001)
#define QEI1_QEIRIS_INTERROR_NOACTIVE    (0x00000000)
#define QEI1_QEIRIS_INTERROR_ACTIVE      (0x00000001)
//--------

#define QEI1_QEIRIS_INTINDEX_BB     (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEIRIS_OFFSET)*32)+(0*4))))
#define QEI1_QEIRIS_INTTIMER_BB     (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEIRIS_OFFSET)*32)+(1*4))))
#define QEI1_QEIRIS_INTDIR_BB       (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEIRIS_OFFSET)*32)+(2*4))))
#define QEI1_QEIRIS_INTERROR_BB     (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEIRIS_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.11 QEIISC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define QEI1_QEIISC            (((QEIISC_TypeDef*)(QEI1_BASE + QEI_QEIISC_OFFSET )))
#define QEI1_QEIISC_R          (*((volatile uint32_t *)(QEI1_BASE +QEI_QEIISC_OFFSET)))

//--------
#define QEI1_QEIISC_R_INTINDEX_MASK       (0x00000001)
#define QEI1_QEIISC_R_INTINDEX_BIT        (0)
#define QEI1_QEIISC_R_INTINDEX_NOOCCUR    (0x00000000)
#define QEI1_QEIISC_R_INTINDEX_OCCUR      (0x00000001)
#define QEI1_QEIISC_R_INTINDEX_CLEAR      (0x00000001)

#define QEI1_QEIISC_INTINDEX_MASK       (0x00000001)
#define QEI1_QEIISC_INTINDEX_NOOCCUR    (0x00000000)
#define QEI1_QEIISC_INTINDEX_OCCUR      (0x00000001)
#define QEI1_QEIISC_INTINDEX_CLEAR      (0x00000001)
//--------

//--------
#define QEI1_QEIISC_R_INTTIMER_MASK       (0x00000002)
#define QEI1_QEIISC_R_INTTIMER_BIT        (1)
#define QEI1_QEIISC_R_INTTIMER_NOOCCUR    (0x00000000)
#define QEI1_QEIISC_R_INTTIMER_OCCUR      (0x00000002)
#define QEI1_QEIISC_R_INTTIMER_CLEAR      (0x00000002)

#define QEI1_QEIISC_INTTIMER_MASK       (0x00000001)
#define QEI1_QEIISC_INTTIMER_NOOCCUR    (0x00000000)
#define QEI1_QEIISC_INTTIMER_OCCUR      (0x00000001)
#define QEI1_QEIISC_INTTIMER_CLEAR      (0x00000001)
//--------

//--------
#define QEI1_QEIISC_R_INTDIR_MASK       (0x00000004)
#define QEI1_QEIISC_R_INTDIR_BIT        (2)
#define QEI1_QEIISC_R_INTDIR_NOOCCUR    (0x00000000)
#define QEI1_QEIISC_R_INTDIR_OCCUR      (0x00000004)
#define QEI1_QEIISC_R_INTDIR_CLEAR      (0x00000004)

#define QEI1_QEIISC_INTDIR_MASK       (0x00000001)
#define QEI1_QEIISC_INTDIR_NOOCCUR    (0x00000000)
#define QEI1_QEIISC_INTDIR_OCCUR      (0x00000001)
#define QEI1_QEIISC_INTDIR_CLEAR      (0x00000001)
//--------

//--------
#define QEI1_QEIISC_R_INTERROR_MASK       (0x00000008)
#define QEI1_QEIISC_R_INTERROR_BIT        (3)
#define QEI1_QEIISC_R_INTERROR_NOOCCUR    (0x00000000)
#define QEI1_QEIISC_R_INTERROR_OCCUR      (0x00000008)
#define QEI1_QEIISC_R_INTERROR_CLEAR      (0x00000008)

#define QEI1_QEIISC_INTERROR_MASK       (0x00000001)
#define QEI1_QEIISC_INTERROR_NOOCCUR    (0x00000000)
#define QEI1_QEIISC_INTERROR_OCCUR      (0x00000001)
#define QEI1_QEIISC_INTERROR_CLEAR      (0x00000001)
//--------

#define QEI1_QEIISC_INTINDEX_BB     (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEIISC_OFFSET)*32)+(0*4))))
#define QEI1_QEIISC_INTTIMER_BB     (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEIISC_OFFSET)*32)+(1*4))))
#define QEI1_QEIISC_INTDIR_BB       (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEIISC_OFFSET)*32)+(2*4))))
#define QEI1_QEIISC_INTERROR_BB     (*((volatile uint32_t *)(0x42000000+((QEI1_OFFSET+QEI_QEIISC_OFFSET)*32)+(3*4))))



#endif /* QEI_H_ */
