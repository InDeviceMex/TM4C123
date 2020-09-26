/*
 * COMP.h
 *
 *  Created on: 26 abr. 2018
 *      Author: InDev
 */

#ifndef COMP_H_
#define COMP_H_


#include "SYSCTL.h"
#include "GPIO.h"
#include "NVIC.h"
#include <stdint.h>




#define COMP_BASE            (0x4003C000)
#define COMP_OFFSET          (0x0003C000)

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// COMP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

typedef volatile struct
{
    volatile uint32_t  IN0      : 1;
    volatile uint32_t  IN1      : 1;
    const    uint32_t  reserved : 30;
}ACMIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t  IN0      : 1;
    volatile const uint32_t  IN1      : 1;
    const    uint32_t        reserved : 30;
}ACRIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t  IN0      : 1;
    volatile uint32_t  IN1      : 1;
    const    uint32_t  reserved : 30;
}ACINTEN_TypeDef;


typedef volatile struct
{
    volatile uint32_t       VREF        : 4;
    volatile const uint32_t reserved    : 4;
    volatile uint32_t       RNG         : 1;
    volatile uint32_t       EN          : 1;
    volatile const uint32_t reserved1   : 22;
}ACREFCTL_TypeDef;

typedef volatile struct
{
    const    uint32_t       reserved : 1;
    volatile const uint32_t OVAL     : 1;
    const    uint32_t       reserved1: 30;
}ACSTAT0_TypeDef;


typedef volatile struct
{
    const    uint32_t       reserved : 1;
    volatile const uint32_t OVAL     : 1;
    const    uint32_t       reserved1: 30;
}ACSTAT1_TypeDef;


typedef volatile struct
{
    const    uint32_t reserved : 1;
    volatile uint32_t CINV     : 1;
    volatile uint32_t ISEN     : 2;
    volatile uint32_t ISLVAL   : 1;
    volatile uint32_t TSEN     : 2;
    volatile uint32_t TSLVAL   : 1;
    const    uint32_t reserved1: 1;
    volatile uint32_t ASRCP    : 2;
    volatile uint32_t TOEN     : 1;
    const    uint32_t reserved2: 20;
}ACCTL0_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved : 1;
    volatile uint32_t CINV     : 1;
    volatile uint32_t ISEN     : 2;
    volatile uint32_t ISLVAL   : 1;
    volatile uint32_t TSEN     : 2;
    volatile uint32_t TSLVAL   : 1;
    const    uint32_t reserved1: 1;
    volatile uint32_t ASRCP    : 2;
    volatile uint32_t TOEN     : 1;
    const    uint32_t reserved2: 20;
}ACCTL1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CMP0        : 1;
    volatile const uint32_t CMP1        : 1;
    const    uint32_t       reserved    : 14;
    volatile const uint32_t C0O         : 1;
    volatile const uint32_t C1O         : 1;
    const     uint32_t      reserved1   : 14;
}ACMPPP_TypeDef;



typedef volatile struct
{
    union
    {
        volatile uint32_t           ACMIS;
        ACMIS_TypeDef               ACMIS_Bit;
    };
    union
    {
        volatile const uint32_t     ACRIS;
        ACRIS_TypeDef               ACRIS_Bit;
    };
    union
    {
        volatile uint32_t           ACINTEN;
        ACINTEN_TypeDef             ACINTEN_Bit;
    };

    const uint32_t                  reserved;
    union
    {
        volatile uint32_t           ACREFCTL;
        ACREFCTL_TypeDef            ACREFCTL_Bit;
    };

    const uint32_t                  reserved1[3];
    union
    {
        volatile uint32_t           ACSTAT0;
        ACSTAT0_TypeDef             ACSTAT0_Bit;
    };
    union
    {
        volatile uint32_t           ACCTL0;
        ACCTL0_TypeDef              ACCTL0_Bit;
    };

    const uint32_t                  reserved2[6];
    union
    {
        volatile uint32_t           ACSTAT1;
        ACSTAT1_TypeDef             ACSTAT1_Bit;
    };
    union
    {
        volatile uint32_t           ACCTL1;
        ACCTL1_TypeDef              ACCTL1_Bit;
    };
    const uint32_t                  reserved3[990];
    union
    {
        volatile uint32_t           ACMPPP;
        ACMPPP_TypeDef              ACMPPP_Bit;
    };
}COMP_TypeDef;


#define COMP               (((COMP_TypeDef*)(COMP_BASE)))

#define COMP_ACMIS_OFFSET     (0x0000)
#define COMP_ACRIS_OFFSET     (0x0004)
#define COMP_ACINTEN_OFFSET   (0x0008)
#define COMP_ACREFCTL_OFFSET  (0x0010)
#define COMP_ACSTAT0_OFFSET   (0x0020)
#define COMP_ACSTAT1_OFFSET   (0x0040)
#define COMP_ACCTL0_OFFSET    (0x0024)
#define COMP_ACCTL1_OFFSET    (0x0044)
#define COMP_ACMPPP_OFFSET    (0x0FC0)


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0 COMP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.1 ACMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define COMP_ACMIS            (((ACMIS_TypeDef*)(COMP_BASE + COMP_ACMIS_OFFSET )))
#define COMP_ACMIS_R          (*((volatile uint32_t *)(COMP_BASE +COMP_ACMIS_OFFSET)))

//--------
#define COMP_ACMIS_R_IN0_MASK       (0x00000001)
#define COMP_ACMIS_R_IN0_BIT        (0)
#define COMP_ACMIS_R_IN0_NOOCCUR    (0x00000000)
#define COMP_ACMIS_R_IN0_OCCUR      (0x00000001)
#define COMP_ACMIS_R_IN0_CLEAR      (0x00000001)

#define COMP_ACMIS_IN0_MASK       (0x00000001)
#define COMP_ACMIS_IN0_NOOCCUR    (0x00000000)
#define COMP_ACMIS_IN0_OCCUR      (0x00000001)
#define COMP_ACMIS_IN0_CLEAR      (0x00000001)
//--------

//--------
#define COMP_ACMIS_R_IN1_MASK       (0x00000002)
#define COMP_ACMIS_R_IN1_BIT        (1)
#define COMP_ACMIS_R_IN1_NOOCCUR    (0x00000000)
#define COMP_ACMIS_R_IN1_OCCUR      (0x00000002)
#define COMP_ACMIS_R_IN1_CLEAR      (0x00000002)

#define COMP_ACMIS_IN1_MASK       (0x00000001)
#define COMP_ACMIS_IN1_NOOCCUR    (0x00000000)
#define COMP_ACMIS_IN1_OCCUR      (0x00000001)
#define COMP_ACMIS_IN1_CLEAR      (0x00000002)
//--------

#define COMP_ACMIS_IN0_BB     (*((volatile uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACMIS_OFFSET)*32)+(0*4))))
#define COMP_ACMIS_IN1_BB     (*((volatile uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACMIS_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.2 ACRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define COMP_ACRIS            (((ACRIS_TypeDef*)(COMP_BASE + COMP_ACRIS_OFFSET )))
#define COMP_ACRIS_R          (*((volatile const uint32_t *)(COMP_BASE +COMP_ACRIS_OFFSET)))

//--------
#define COMP_ACRIS_R_IN0_MASK       (0x00000001)
#define COMP_ACRIS_R_IN0_BIT        (0)
#define COMP_ACRIS_R_IN0_NOACTIVE   (0x00000000)
#define COMP_ACRIS_R_IN0_ACTIVE     (0x00000001)

#define COMP_ACRIS_IN0_MASK       (0x00000001)
#define COMP_ACRIS_IN0_NOACTIVE   (0x00000000)
#define COMP_ACRIS_IN0_ACTIVE     (0x00000001)
//--------

//--------
#define COMP_ACRIS_R_IN1_MASK       (0x00000002)
#define COMP_ACRIS_R_IN1_BIT        (1)
#define COMP_ACRIS_R_IN1_NOACTIVE   (0x00000000)
#define COMP_ACRIS_R_IN1_ACTIVE     (0x00000002)

#define COMP_ACRIS_IN1_MASK       (0x00000001)
#define COMP_ACRIS_IN1_NOACTIVE   (0x00000000)
#define COMP_ACRIS_IN1_ACTIVE     (0x00000001)
//--------

#define COMP_ACRIS_IN0_BB     (*((volatile const uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACRIS_OFFSET)*32)+(0*4))))
#define COMP_ACRIS_IN1_BB     (*((volatile const uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACRIS_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.3 ACINTEN ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define COMP_ACINTEN            (((ACINTEN_TypeDef*)(COMP_BASE + COMP_ACINTEN_OFFSET )))
#define COMP_ACINTEN_R          (*((volatile uint32_t *)(COMP_BASE +COMP_ACINTEN_OFFSET)))
//--------
#define COMP_ACINTEN_R_IN0_MASK       (0x00000001)
#define COMP_ACINTEN_R_IN0_BIT        (0)
#define COMP_ACINTEN_R_IN0_DIS        (0x00000000)
#define COMP_ACINTEN_R_IN0_EN         (0x00000001)

#define COMP_ACINTEN_IN0_MASK       (0x00000001)
#define COMP_ACINTEN_IN0_DIS        (0x00000000)
#define COMP_ACINTEN_IN0_EN         (0x00000001)
//--------

//--------
#define COMP_ACINTEN_R_IN1_MASK       (0x00000002)
#define COMP_ACINTEN_R_IN1_BIT        (1)
#define COMP_ACINTEN_R_IN1_DIS        (0x00000000)
#define COMP_ACINTEN_R_IN1_EN         (0x00000002)

#define COMP_ACINTEN_IN1_MASK       (0x00000001)
#define COMP_ACINTEN_IN1_DIS        (0x00000000)
#define COMP_ACINTEN_IN1_EN         (0x00000001)
//--------

#define COMP_ACINTEN_IN0_BB     (*((volatile uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACINTEN_OFFSET)*32)+(0*4))))
#define COMP_ACINTEN_IN1_BB     (*((volatile uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACINTEN_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.4 ACREFCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define COMP_ACREFCTL            (((ACREFCTL_TypeDef*)(COMP_BASE + COMP_ACREFCTL_OFFSET )))
#define COMP_ACREFCTL_R          (*((volatile uint32_t *)(COMP_BASE +COMP_ACREFCTL_OFFSET)))

//--------
#define COMP_ACREFCTL_R_VREF_MASK       (0x0000000F)
#define COMP_ACREFCTL_R_VREF_BIT        (0)

#define COMP_ACREFCTL_VREF_MASK       (0x0000000F)
//--------

//--------
#define COMP_ACREFCTL_R_RNG_MASK       (0x00000100)
#define COMP_ACREFCTL_R_RNG_BIT        (8)
#define COMP_ACREFCTL_R_RNG_29_4       (0x00000000)
#define COMP_ACREFCTL_R_RNG_22_12      (0x00000100)

#define COMP_ACREFCTL_RNG_MASK        (0x00000001)
#define COMP_ACREFCTL_RNG_29_4        (0x00000000)
#define COMP_ACREFCTL_RNG_22_12       (0x00000001)
//--------

//--------
#define COMP_ACREFCTL_R_EN_MASK       (0x00000200)
#define COMP_ACREFCTL_R_EN_BIT        (9)
#define COMP_ACREFCTL_R_EN_DIS        (0x00000000)
#define COMP_ACREFCTL_R_EN_EN         (0x00000200)

#define COMP_ACREFCTL_EN_MASK        (0x00000001)
#define COMP_ACREFCTL_EN_DIS         (0x00000000)
#define COMP_ACREFCTL_EN_EN          (0x00000001)
//--------

#define COMP_ACREFCTL_RNG_BB     (*((volatile uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACREFCTL_OFFSET)*32)+(8*4))))
#define COMP_ACREFCTL_EN_BB      (*((volatile uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACREFCTL_OFFSET)*32)+(9*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.5 ACSTAT0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define COMP_ACSTAT0            (((ACSTAT0_TypeDef*)(COMP_BASE + COMP_ACSTAT0_OFFSET )))
#define COMP_ACSTAT0_R          (*((volatile uint32_t *)(COMP_BASE +COMP_ACSTAT0_OFFSET)))

//--------
#define COMP_ACSTAT0_R_OVAL_MASK       (0x00000002)
#define COMP_ACSTAT0_R_OVAL_BIT        (1)
#define COMP_ACSTAT0_R_OVAL_LOW        (0x00000000)
#define COMP_ACSTAT0_R_OVAL_HIGH       (0x00000002)

#define COMP_ACSTAT0_OVAL_MASK        (0x00000001)
#define COMP_ACSTAT0_OVAL_LOW         (0x00000000)
#define COMP_ACSTAT0_OVAL_HIGH        (0x00000001)
//--------

#define COMP_ACSTAT0_OVAL_BB     (*((volatile uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACSTAT0_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.6 ACSTAT1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define COMP_ACSTAT1            (((ACSTAT1_TypeDef*)(COMP_BASE + COMP_ACSTAT1_OFFSET )))
#define COMP_ACSTAT1_R          (*((volatile uint32_t *)(COMP_BASE +COMP_ACSTAT1_OFFSET)))

//--------
#define COMP_ACSTAT1_R_OVAL_MASK       (0x00000002)
#define COMP_ACSTAT1_R_OVAL_BIT        (1)
#define COMP_ACSTAT1_R_OVAL_LOW        (0x00000000)
#define COMP_ACSTAT1_R_OVAL_HIGH       (0x00000002)

#define COMP_ACSTAT1_OVAL_MASK        (0x00000001)
#define COMP_ACSTAT1_OVAL_LOW         (0x00000000)
#define COMP_ACSTAT1_OVAL_HIGH        (0x00000001)
//--------

#define COMP_ACSTAT1_OVAL_BB     (*((volatile uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACSTAT1_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.7 ACCTL0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define COMP_ACCTL0            (((ACCTL0_TypeDef*)(COMP_BASE + COMP_ACCTL0_OFFSET )))
#define COMP_ACCTL0_R          (*((volatile uint32_t *)(COMP_BASE +COMP_ACCTL0_OFFSET)))

//--------
#define COMP_ACCTL0_R_CINV_MASK       (0x00000002)
#define COMP_ACCTL0_R_CINV_BIT        (1)
#define COMP_ACCTL0_R_CINV_NORMAL     (0x00000000)
#define COMP_ACCTL0_R_CINV_INVERTED   (0x00000002)

#define COMP_ACCTL0_CINV_MASK        (0x00000001)
#define COMP_ACCTL0_CINV_NORMAL      (0x00000000)
#define COMP_ACCTL0_CINV_INVERTED    (0x00000001)
//--------

//--------
#define COMP_ACCTL0_R_ISEN_MASK       (0x0000000C)
#define COMP_ACCTL0_R_ISEN_BIT        (2)
#define COMP_ACCTL0_R_ISEN_LEVEL      (0x00000000)
#define COMP_ACCTL0_R_ISEN_FALLING    (0x00000004)
#define COMP_ACCTL0_R_ISEN_RISING     (0x00000008)
#define COMP_ACCTL0_R_ISEN_EITHER     (0x0000000C)

#define COMP_ACCTL0_ISEN_MASK       (0x00000003)
#define COMP_ACCTL0_ISEN_LEVEL      (0x00000000)
#define COMP_ACCTL0_ISEN_FALLING    (0x00000001)
#define COMP_ACCTL0_ISEN_RISING     (0x00000002)
#define COMP_ACCTL0_ISEN_EITHER     (0x00000003)
//--------

//--------
#define COMP_ACCTL0_R_ISLVAL_MASK       (0x00000010)
#define COMP_ACCTL0_R_ISLVAL_BIT        (4)
#define COMP_ACCTL0_R_ISLVAL_LOW        (0x00000000)
#define COMP_ACCTL0_R_ISLVAL_HIGH       (0x00000010)

#define COMP_ACCTL0_ISLVAL_MASK        (0x00000001)
#define COMP_ACCTL0_ISLVAL_LOW         (0x00000000)
#define COMP_ACCTL0_ISLVAL_HIGH        (0x00000001)
//--------

//--------
#define COMP_ACCTL0_R_TSEN_MASK       (0x00000060)
#define COMP_ACCTL0_R_TSEN_BIT        (5)
#define COMP_ACCTL0_R_TSEN_LEVEL      (0x00000000)
#define COMP_ACCTL0_R_TSEN_FALLING    (0x00000020)
#define COMP_ACCTL0_R_TSEN_RISING     (0x00000040)
#define COMP_ACCTL0_R_TSEN_EITHER     (0x00000060)

#define COMP_ACCTL0_TSEN_MASK       (0x00000003)
#define COMP_ACCTL0_TSEN_LEVEL      (0x00000000)
#define COMP_ACCTL0_TSEN_FALLING    (0x00000001)
#define COMP_ACCTL0_TSEN_RISING     (0x00000002)
#define COMP_ACCTL0_TSEN_EITHER     (0x00000003)
//--------

//--------
#define COMP_ACCTL0_R_TSLVAL_MASK       (0x00000080)
#define COMP_ACCTL0_R_TSLVAL_BIT        (7)
#define COMP_ACCTL0_R_TSLVAL_LOW        (0x00000000)
#define COMP_ACCTL0_R_TSLVAL_HIGH       (0x00000080)

#define COMP_ACCTL0_TSLVAL_MASK        (0x00000001)
#define COMP_ACCTL0_TSLVAL_LOW         (0x00000000)
#define COMP_ACCTL0_TSLVAL_HIGH        (0x00000001)
//--------

//--------
#define COMP_ACCTL0_R_ASRCP_MASK       (0x00000300)
#define COMP_ACCTL0_R_ASRCP_BIT        (9)
#define COMP_ACCTL0_R_ASRCP_Cn         (0x00000000)
#define COMP_ACCTL0_R_ASRCP_C0         (0x00000100)
#define COMP_ACCTL0_R_ASRCP_VREF       (0x00000200)

#define COMP_ACCTL0_ASRCP_MASK        (0x00000003)
#define COMP_ACCTL0_ASRCP_Cn          (0x00000000)
#define COMP_ACCTL0_ASRCP_C0          (0x00000001)
#define COMP_ACCTL0_ASRCP_VREF        (0x00000002)
//--------

//--------
#define COMP_ACCTL0_R_TOEN_MASK       (0x00000400)
#define COMP_ACCTL0_R_TOEN_BIT        (11)
#define COMP_ACCTL0_R_TOEN_DIS        (0x00000000)
#define COMP_ACCTL0_R_TOEN_EN         (0x00000400)

#define COMP_ACCTL0_TOEN_MASK        (0x00000001)
#define COMP_ACCTL0_TOEN_DIS         (0x00000000)
#define COMP_ACCTL0_TOEN_EN          (0x00000001)
//--------

#define COMP_ACCTL0_CINV_BB       (*((volatile uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACCTL0_OFFSET)*32)+(1*4))))
#define COMP_ACCTL0_ISLVAL_BB     (*((volatile uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACCTL0_OFFSET)*32)+(4*4))))
#define COMP_ACCTL0_TSLVAL_BB     (*((volatile uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACCTL0_OFFSET)*32)+(7*4))))
#define COMP_ACCTL0_TOEN_BB       (*((volatile uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACCTL0_OFFSET)*32)+(11*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.8 ACCTL1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define COMP_ACCTL1            (((ACCTL1_TypeDef*)(COMP_BASE + COMP_ACCTL1_OFFSET )))
#define COMP_ACCTL1_R          (*((volatile uint32_t *)(COMP_BASE +COMP_ACCTL1_OFFSET)))

//--------
#define COMP_ACCTL1_R_CINV_MASK       (0x00000002)
#define COMP_ACCTL1_R_CINV_BIT        (1)
#define COMP_ACCTL1_R_CINV_NORMAL     (0x00000000)
#define COMP_ACCTL1_R_CINV_INVERTED   (0x00000002)

#define COMP_ACCTL1_CINV_MASK        (0x00000001)
#define COMP_ACCTL1_CINV_NORMAL      (0x00000000)
#define COMP_ACCTL1_CINV_INVERTED    (0x00000001)
//--------

//--------
#define COMP_ACCTL1_R_ISEN_MASK       (0x0000000C)
#define COMP_ACCTL1_R_ISEN_BIT        (2)
#define COMP_ACCTL1_R_ISEN_LEVEL      (0x00000000)
#define COMP_ACCTL1_R_ISEN_FALLING    (0x00000004)
#define COMP_ACCTL1_R_ISEN_RISING     (0x00000008)
#define COMP_ACCTL1_R_ISEN_EITHER     (0x0000000C)

#define COMP_ACCTL1_ISEN_MASK       (0x00000003)
#define COMP_ACCTL1_ISEN_LEVEL      (0x00000000)
#define COMP_ACCTL1_ISEN_FALLING    (0x00000001)
#define COMP_ACCTL1_ISEN_RISING     (0x00000002)
#define COMP_ACCTL1_ISEN_EITHER     (0x00000003)
//--------

//--------
#define COMP_ACCTL1_R_ISLVAL_MASK       (0x00000010)
#define COMP_ACCTL1_R_ISLVAL_BIT        (4)
#define COMP_ACCTL1_R_ISLVAL_LOW        (0x00000000)
#define COMP_ACCTL1_R_ISLVAL_HIGH       (0x00000010)

#define COMP_ACCTL1_ISLVAL_MASK        (0x00000001)
#define COMP_ACCTL1_ISLVAL_LOW         (0x00000000)
#define COMP_ACCTL1_ISLVAL_HIGH        (0x00000001)
//--------

//--------
#define COMP_ACCTL1_R_TSEN_MASK       (0x00000060)
#define COMP_ACCTL1_R_TSEN_BIT        (5)
#define COMP_ACCTL1_R_TSEN_LEVEL      (0x00000000)
#define COMP_ACCTL1_R_TSEN_FALLING    (0x00000020)
#define COMP_ACCTL1_R_TSEN_RISING     (0x00000040)
#define COMP_ACCTL1_R_TSEN_EITHER     (0x00000060)

#define COMP_ACCTL1_TSEN_MASK       (0x00000003)
#define COMP_ACCTL1_TSEN_LEVEL      (0x00000000)
#define COMP_ACCTL1_TSEN_FALLING    (0x00000001)
#define COMP_ACCTL1_TSEN_RISING     (0x00000002)
#define COMP_ACCTL1_TSEN_EITHER     (0x00000003)
//--------

//--------
#define COMP_ACCTL1_R_TSLVAL_MASK       (0x00000080)
#define COMP_ACCTL1_R_TSLVAL_BIT        (7)
#define COMP_ACCTL1_R_TSLVAL_LOW        (0x00000000)
#define COMP_ACCTL1_R_TSLVAL_HIGH       (0x00000080)

#define COMP_ACCTL1_TSLVAL_MASK        (0x00000001)
#define COMP_ACCTL1_TSLVAL_LOW         (0x00000000)
#define COMP_ACCTL1_TSLVAL_HIGH        (0x00000001)
//--------

//--------
#define COMP_ACCTL1_R_ASRCP_MASK       (0x00000300)
#define COMP_ACCTL1_R_ASRCP_BIT        (9)
#define COMP_ACCTL1_R_ASRCP_Cn         (0x00000000)
#define COMP_ACCTL1_R_ASRCP_C0         (0x00000100)
#define COMP_ACCTL1_R_ASRCP_VREF       (0x00000200)

#define COMP_ACCTL1_ASRCP_MASK        (0x00000003)
#define COMP_ACCTL1_ASRCP_Cn          (0x00000000)
#define COMP_ACCTL1_ASRCP_C0          (0x00000001)
#define COMP_ACCTL1_ASRCP_VREF        (0x00000002)
//--------

//--------
#define COMP_ACCTL1_R_TOEN_MASK       (0x00000400)
#define COMP_ACCTL1_R_TOEN_BIT        (11)
#define COMP_ACCTL1_R_TOEN_DIS        (0x00000000)
#define COMP_ACCTL1_R_TOEN_EN         (0x00000400)

#define COMP_ACCTL1_TOEN_MASK        (0x00000001)
#define COMP_ACCTL1_TOEN_DIS         (0x00000000)
#define COMP_ACCTL1_TOEN_EN          (0x00000001)
//--------


#define COMP_ACCTL1_CINV_BB       (*((volatile uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACCTL1_OFFSET)*32)+(1*4))))
#define COMP_ACCTL1_ISLVAL_BB     (*((volatile uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACCTL1_OFFSET)*32)+(4*4))))
#define COMP_ACCTL1_TSLVAL_BB     (*((volatile uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACCTL1_OFFSET)*32)+(7*4))))
#define COMP_ACCTL1_TOEN_BB       (*((volatile uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACCTL1_OFFSET)*32)+(11*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.9 ACMPPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define COMP_ACMPPP            (((ACMPPP_TypeDef*)(COMP_BASE + COMP_ACMPPP_OFFSET )))
#define COMP_ACMPPP_R          (*((volatile const uint32_t *)(COMP_BASE +COMP_ACMPPP_OFFSET)))

//--------
#define COMP_ACMPPP_R_CMP0_MASK       (0x00000001)
#define COMP_ACMPPP_R_CMP0_BIT        (0)
#define COMP_ACMPPP_R_CMP0_NOPRESENT  (0x00000000)
#define COMP_ACMPPP_R_CMP0_PRESENT    (0x00000001)

#define COMP_ACMPPP_CMP0_MASK        (0x00000001)
#define COMP_ACMPPP_CMP0_NOPRESENT   (0x00000000)
#define COMP_ACMPPP_CMP0_PRESENT     (0x00000001)
//--------

//--------
#define COMP_ACMPPP_R_CMP1_MASK       (0x00000002)
#define COMP_ACMPPP_R_CMP1_BIT        (1)
#define COMP_ACMPPP_R_CMP1_NOPRESENT  (0x00000000)
#define COMP_ACMPPP_R_CMP1_PRESENT    (0x00000002)

#define COMP_ACMPPP_CMP1_MASK        (0x00000001)
#define COMP_ACMPPP_CMP1_NOPRESENT   (0x00000000)
#define COMP_ACMPPP_CMP1_PRESENT     (0x00000001)
//--------

//--------
#define COMP_ACMPPP_R_C0O_MASK       (0x00010000)
#define COMP_ACMPPP_R_C0O_BIT        (0)
#define COMP_ACMPPP_R_C0O_NOPRESENT  (0x00000000)
#define COMP_ACMPPP_R_C0O_PRESENT    (0x00010000)

#define COMP_ACMPPP_C0O_MASK        (0x00000001)
#define COMP_ACMPPP_C0O_NOPRESENT   (0x00000000)
#define COMP_ACMPPP_C0O_PRESENT     (0x00000001)
//--------

//--------
#define COMP_ACMPPP_R_C1O_MASK       (0x00020000)
#define COMP_ACMPPP_R_C1O_BIT        (0)
#define COMP_ACMPPP_R_C1O_NOPRESENT  (0x00000000)
#define COMP_ACMPPP_R_C1O_PRESENT    (0x00020000)

#define COMP_ACMPPP_C1O_MASK        (0x00000001)
#define COMP_ACMPPP_C1O_NOPRESENT   (0x00000000)
#define COMP_ACMPPP_C1O_PRESENT     (0x00000001)
//--------

#define COMP_ACMPPP_CMP0_BB      (*((volatile const uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACMPPP_OFFSET)*32)+(0*4))))
#define COMP_ACMPPP_CMP1_BB      (*((volatile const uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACMPPP_OFFSET)*32)+(1*4))))
#define COMP_ACMPPP_C0O_BB       (*((volatile const uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACMPPP_OFFSET)*32)+(16*4))))
#define COMP_ACMPPP_C1O_BB       (*((volatile const uint32_t *)(0x42000000+((COMP_OFFSET+COMP_ACMPPP_OFFSET)*32)+(17*4))))

//todo Functions
int32_t COMP_Init(void);


#endif /* COMP_H_ */
