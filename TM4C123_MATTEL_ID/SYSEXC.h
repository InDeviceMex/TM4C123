/*
 * SYSEXC.h
 *
 *  Created on: 23 ene. 2018
 *      Author: InDev
 */

#ifndef SYSEXC_H_
#define SYSEXC_H_

#include <stdint.h>

#define SYSEXC_BASE            (0x400F9000)
#define SYSEXC_OFFSET          (0x000F9000)


typedef volatile struct
{
    volatile const uint32_t FPIDCRIS      :1;
    volatile const uint32_t FPDZCRIS      :1;
    volatile const uint32_t FPIOCRIS      :1;
    volatile const uint32_t FPUFCRIS      :1;
    volatile const uint32_t FPOFCRIS      :1;
    volatile const uint32_t FPIXCRIS      :1;
    const    uint32_t       res           :26;
}SYSEXCRIS_TypeDef;


typedef volatile struct
{
    volatile uint32_t FPIDCIM      :1;
    volatile uint32_t FPDZCIM      :1;
    volatile uint32_t FPIOCIM      :1;
    volatile uint32_t FPUFCIM      :1;
    volatile uint32_t FPOFCIM      :1;
    volatile uint32_t FPIXCIM      :1;
    const    uint32_t res          :26;
}SYSEXCIM_TypeDef;


typedef volatile struct
{
    volatile const uint32_t FPIDCMIS      :1;
    volatile const uint32_t FPDZCMIS      :1;
    volatile const uint32_t FPIOCMIS      :1;
    volatile const uint32_t FPUFCMIS      :1;
    volatile const uint32_t FPOFCMIS      :1;
    volatile const uint32_t FPIXCMIS      :1;
    const    uint32_t       res          :26;
}SYSEXCMIS_TypeDef;


typedef volatile struct
{
    volatile uint32_t FPIDCCIC      :1;
    volatile uint32_t FPDZCCIC      :1;
    volatile uint32_t FPIOCCIC      :1;
    volatile uint32_t FPUFCCIC      :1;
    volatile uint32_t FPOFCCIC      :1;
    volatile uint32_t FPIXCCIC      :1;
    const    uint32_t res           :26;
}SYSEXCIC_TypeDef;


typedef volatile struct
{
    union
    {
        volatile const uint32_t    SYSEXCRIS;
        SYSEXCRIS_TypeDef               SYSEXCRIS_Bit;
    };
    union
    {
        volatile uint32_t          SYSEXCIM;
        SYSEXCIM_TypeDef                SYSEXCIM_Bit;
    };
    union
    {
        volatile const uint32_t    SYSEXCMIS;
        SYSEXCMIS_TypeDef               SYSEXCMIS_Bit;
    };
    union
    {
        volatile uint32_t          SYSEXCIC;
        SYSEXCIC_TypeDef                SYSEXCIC_Bit;
    };
}SYSEXC_TypeDef;

#define SYSEXC                 (((SYSEXC_TypeDef*)(SYSEXC_BASE)))




#define SYSEXC_SYSEXCRIS_OFFSET    (0x0000)
#define SYSEXC_SYSEXCIM_OFFSET     (0x0004)
#define SYSEXC_SYSEXCMIS_OFFSET    (0x0008)
#define SYSEXC_SYSEXCIC_OFFSET     (0x000C)


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 SYSEXCRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSEXC_SYSEXCRIS           (((SYSEXCRIS_TypeDef*)(SYSEXC_BASE+SYSEXC_SYSEXCRIS_OFFSET )))
#define SYSEXC_SYSEXCRIS_R          (*((volatile const uint32_t *)(SYSEXC_BASE+SYSEXC_SYSEXCRIS_OFFSET)))

//--------
#define SYSEXC_SYSEXCRIS_R_FPIDCRIS_MASK        (0x00000001)
#define SYSEXC_SYSEXCRIS_R_FPIDCRIS_BIT         (0)
#define SYSEXC_SYSEXCRIS_R_FPIDCRIS_NOACTIVE    (0x00000000)
#define SYSEXC_SYSEXCRIS_R_FPIDCRIS_ACTIVE      (0x00000001)

#define SYSEXC_SYSEXCRIS_FPIDCRIS_MASK        (0x00000001)
#define SYSEXC_SYSEXCRIS_FPIDCRIS_NOACTIVE    (0x00000000)
#define SYSEXC_SYSEXCRIS_FPIDCRIS_ACTIVE      (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCRIS_R_FPDZCRIS_MASK        (0x00000002)
#define SYSEXC_SYSEXCRIS_R_FPDZCRIS_BIT         (1)
#define SYSEXC_SYSEXCRIS_R_FPDZCRIS_NOACTIVE    (0x00000000)
#define SYSEXC_SYSEXCRIS_R_FPDZCRIS_ACTIVE      (0x00000002)

#define SYSEXC_SYSEXCRIS_FPDZCRIS_MASK        (0x00000001)
#define SYSEXC_SYSEXCRIS_FPDZCRIS_NOACTIVE    (0x00000000)
#define SYSEXC_SYSEXCRIS_FPDZCRIS_ACTIVE      (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCRIS_R_FPIOCRIS_MASK        (0x00000004)
#define SYSEXC_SYSEXCRIS_R_FPIOCRIS_BIT         (2)
#define SYSEXC_SYSEXCRIS_R_FPIOCRIS_NOACTIVE    (0x00000000)
#define SYSEXC_SYSEXCRIS_R_FPIOCRIS_ACTIVE      (0x00000004)

#define SYSEXC_SYSEXCRIS_FPIOCRIS_MASK        (0x00000001)
#define SYSEXC_SYSEXCRIS_FPIOCRIS_NOACTIVE    (0x00000000)
#define SYSEXC_SYSEXCRIS_FPIOCRIS_ACTIVE      (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCRIS_R_FPUFCRIS_MASK        (0x00000008)
#define SYSEXC_SYSEXCRIS_R_FPUFCRIS_BIT         (3)
#define SYSEXC_SYSEXCRIS_R_FPUFCRIS_NOACTIVE    (0x00000000)
#define SYSEXC_SYSEXCRIS_R_FPUFCRIS_ACTIVE      (0x00000008)

#define SYSEXC_SYSEXCRIS_FPUFCRIS_MASK        (0x00000001)
#define SYSEXC_SYSEXCRIS_FPUFCRIS_NOACTIVE    (0x00000000)
#define SYSEXC_SYSEXCRIS_FPUFCRIS_ACTIVE      (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCRIS_R_FPOFCRIS_MASK        (0x00000010)
#define SYSEXC_SYSEXCRIS_R_FPOFCRIS_BIT         (4)
#define SYSEXC_SYSEXCRIS_R_FPOFCRIS_NOACTIVE    (0x00000000)
#define SYSEXC_SYSEXCRIS_R_FPOFCRIS_ACTIVE      (0x00000010)

#define SYSEXC_SYSEXCRIS_FPOFCRIS_MASK        (0x00000001)
#define SYSEXC_SYSEXCRIS_FPOFCRIS_NOACTIVE    (0x00000000)
#define SYSEXC_SYSEXCRIS_FPOFCRIS_ACTIVE      (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCRIS_R_FPIXCRIS_MASK        (0x00000020)
#define SYSEXC_SYSEXCRIS_R_FPIXCRIS_BIT         (5)
#define SYSEXC_SYSEXCRIS_R_FPIXCRIS_NOACTIVE    (0x00000000)
#define SYSEXC_SYSEXCRIS_R_FPIXCRIS_ACTIVE      (0x00000010)

#define SYSEXC_SYSEXCRIS_FPIXCRIS_MASK        (0x00000001)
#define SYSEXC_SYSEXCRIS_FPIXCRIS_NOACTIVE    (0x00000000)
#define SYSEXC_SYSEXCRIS_FPIXCRIS_ACTIVE      (0x00000001)
//--------

#define SYSEXC_SYSEXCRIS_FPIDCRIS_BB (*((volatile const uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCRIS_OFFSET)*32)+(0*4))))
#define SYSEXC_SYSEXCRIS_FPDZCRIS_BB (*((volatile const uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCRIS_OFFSET)*32)+(1*4))))
#define SYSEXC_SYSEXCRIS_FPIOCRIS_BB (*((volatile const uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCRIS_OFFSET)*32)+(2*4))))
#define SYSEXC_SYSEXCRIS_FPUFCRIS_BB (*((volatile const uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCRIS_OFFSET)*32)+(3*4))))
#define SYSEXC_SYSEXCRIS_FPOFCRIS_BB (*((volatile const uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCRIS_OFFSET)*32)+(4*4))))
#define SYSEXC_SYSEXCRIS_FPIXCRIS_BB (*((volatile const uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCRIS_OFFSET)*32)+(5*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 SYSEXCIM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSEXC_SYSEXCIM           (((SYSEXCIM_TypeDef*)(SYSEXC_BASE+SYSEXC_SYSEXCIM_OFFSET )))
#define SYSEXC_SYSEXCIM_R          (*((volatile uint32_t *)(SYSEXC_BASE+SYSEXC_SYSEXCIM_OFFSET)))



//--------
#define SYSEXC_SYSEXCIM_R_FPIDCIM_MASK        (0x00000001)
#define SYSEXC_SYSEXCIM_R_FPIDCIM_BIT         (0)
#define SYSEXC_SYSEXCIM_R_FPIDCIM_DIS         (0x00000000)
#define SYSEXC_SYSEXCIM_R_FPIDCIM_EN          (0x00000001)

#define SYSEXC_SYSEXCIM_FPIDCIM_MASK        (0x00000001)
#define SYSEXC_SYSEXCIM_FPIDCIM_DIS         (0x00000000)
#define SYSEXC_SYSEXCIM_FPIDCIM_EN          (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCIM_R_FPDZCIM_MASK        (0x00000002)
#define SYSEXC_SYSEXCIM_R_FPDZCIM_BIT         (1)
#define SYSEXC_SYSEXCIM_R_FPDZCIM_DIS         (0x00000000)
#define SYSEXC_SYSEXCIM_R_FPDZCIM_EN          (0x00000002)

#define SYSEXC_SYSEXCIM_FPDZCIM_MASK        (0x00000001)
#define SYSEXC_SYSEXCIM_FPDZCIM_DIS         (0x00000000)
#define SYSEXC_SYSEXCIM_FPDZCIM_EN          (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCIM_R_FPIOCIM_MASK        (0x00000004)
#define SYSEXC_SYSEXCIM_R_FPIOCIM_BIT         (2)
#define SYSEXC_SYSEXCIM_R_FPIOCIM_DIS         (0x00000000)
#define SYSEXC_SYSEXCIM_R_FPIOCIM_EN          (0x00000004)

#define SYSEXC_SYSEXCIM_FPIOCIM_MASK        (0x00000001)
#define SYSEXC_SYSEXCIM_FPIOCIM_DIS         (0x00000000)
#define SYSEXC_SYSEXCIM_FPIOCIM_EN          (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCIM_R_FPUFCIM_MASK        (0x00000008)
#define SYSEXC_SYSEXCIM_R_FPUFCIM_BIT         (3)
#define SYSEXC_SYSEXCIM_R_FPUFCIM_DIS         (0x00000000)
#define SYSEXC_SYSEXCIM_R_FPUFCIM_EN          (0x00000008)

#define SYSEXC_SYSEXCIM_FPUFCIM_MASK        (0x00000001)
#define SYSEXC_SYSEXCIM_FPUFCIM_DIS         (0x00000000)
#define SYSEXC_SYSEXCIM_FPUFCIM_EN          (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCIM_R_FPOFCIM_MASK        (0x00000010)
#define SYSEXC_SYSEXCIM_R_FPOFCIM_BIT         (4)
#define SYSEXC_SYSEXCIM_R_FPOFCIM_DIS         (0x00000000)
#define SYSEXC_SYSEXCIM_R_FPOFCIM_EN          (0x00000010)

#define SYSEXC_SYSEXCIM_FPOFCIM_MASK        (0x00000001)
#define SYSEXC_SYSEXCIM_FPOFCIM_DIS         (0x00000000)
#define SYSEXC_SYSEXCIM_FPOFCIM_EN          (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCIM_R_FPIXCIM_MASK        (0x00000020)
#define SYSEXC_SYSEXCIM_R_FPIXCIM_BIT         (5)
#define SYSEXC_SYSEXCIM_R_FPIXCIM_DIS         (0x00000000)
#define SYSEXC_SYSEXCIM_R_FPIXCIM_EN          (0x00000010)

#define SYSEXC_SYSEXCIM_FPIXCIM_MASK        (0x00000001)
#define SYSEXC_SYSEXCIM_FPIXCIM_DIS         (0x00000000)
#define SYSEXC_SYSEXCIM_FPIXCIM_EN          (0x00000001)
//--------

#define SYSEXC_SYSEXCIM_FPIDCIM_BB (*((volatile uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCIM_OFFSET)*32)+(0*4))))
#define SYSEXC_SYSEXCIM_FPDZCIM_BB (*((volatile uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCIM_OFFSET)*32)+(1*4))))
#define SYSEXC_SYSEXCIM_FPIOCIM_BB (*((volatile uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCIM_OFFSET)*32)+(2*4))))
#define SYSEXC_SYSEXCIM_FPUFCIM_BB (*((volatile uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCIM_OFFSET)*32)+(3*4))))
#define SYSEXC_SYSEXCIM_FPOFCIM_BB (*((volatile uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCIM_OFFSET)*32)+(4*4))))
#define SYSEXC_SYSEXCIM_FPIXCIM_BB (*((volatile uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCIM_OFFSET)*32)+(5*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 SYSEXCMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSEXC_SYSEXCMIS           (((SYSEXCMIS_TypeDef*)(SYSEXC_BASE+SYSEXC_SYSEXCMIS_OFFSET )))
#define SYSEXC_SYSEXCMIS_R          (*((volatile const uint32_t *)(SYSEXC_BASE+SYSEXC_SYSEXCMIS_OFFSET)))
//--------
#define SYSEXC_SYSEXCMIS_R_FPIDCMIS_MASK        (0x00000001)
#define SYSEXC_SYSEXCMIS_R_FPIDCMIS_BIT         (0)
#define SYSEXC_SYSEXCMIS_R_FPIDCMIS_NOOCCUR    (0x00000000)
#define SYSEXC_SYSEXCMIS_R_FPIDCMIS_OCCUR      (0x00000001)

#define SYSEXC_SYSEXCMIS_FPIDCMIS_MASK        (0x00000001)
#define SYSEXC_SYSEXCMIS_FPIDCMIS_NOOCCUR    (0x00000000)
#define SYSEXC_SYSEXCMIS_FPIDCMIS_OCCUR      (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCMIS_R_FPDZCMIS_MASK        (0x00000002)
#define SYSEXC_SYSEXCMIS_R_FPDZCMIS_BIT         (1)
#define SYSEXC_SYSEXCMIS_R_FPDZCMIS_NOOCCUR    (0x00000000)
#define SYSEXC_SYSEXCMIS_R_FPDZCMIS_OCCUR      (0x00000002)

#define SYSEXC_SYSEXCMIS_FPDZCMIS_MASK        (0x00000001)
#define SYSEXC_SYSEXCMIS_FPDZCMIS_NOOCCUR    (0x00000000)
#define SYSEXC_SYSEXCMIS_FPDZCMIS_OCCUR      (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCMIS_R_FPIOCMIS_MASK        (0x00000004)
#define SYSEXC_SYSEXCMIS_R_FPIOCMIS_BIT         (2)
#define SYSEXC_SYSEXCMIS_R_FPIOCMIS_NOOCCUR    (0x00000000)
#define SYSEXC_SYSEXCMIS_R_FPIOCMIS_OCCUR      (0x00000004)

#define SYSEXC_SYSEXCMIS_FPIOCMIS_MASK        (0x00000001)
#define SYSEXC_SYSEXCMIS_FPIOCMIS_NOOCCUR    (0x00000000)
#define SYSEXC_SYSEXCMIS_FPIOCMIS_OCCUR      (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCMIS_R_FPUFCMIS_MASK        (0x00000008)
#define SYSEXC_SYSEXCMIS_R_FPUFCMIS_BIT         (3)
#define SYSEXC_SYSEXCMIS_R_FPUFCMIS_NOOCCUR    (0x00000000)
#define SYSEXC_SYSEXCMIS_R_FPUFCMIS_OCCUR      (0x00000008)

#define SYSEXC_SYSEXCMIS_FPUFCMIS_MASK        (0x00000001)
#define SYSEXC_SYSEXCMIS_FPUFCMIS_NOOCCUR    (0x00000000)
#define SYSEXC_SYSEXCMIS_FPUFCMIS_OCCUR      (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCMIS_R_FPOFCMIS_MASK        (0x00000010)
#define SYSEXC_SYSEXCMIS_R_FPOFCMIS_BIT         (4)
#define SYSEXC_SYSEXCMIS_R_FPOFCMIS_NOOCCUR    (0x00000000)
#define SYSEXC_SYSEXCMIS_R_FPOFCMIS_OCCUR      (0x00000010)

#define SYSEXC_SYSEXCMIS_FPOFCMIS_MASK        (0x00000001)
#define SYSEXC_SYSEXCMIS_FPOFCMIS_NOOCCUR    (0x00000000)
#define SYSEXC_SYSEXCMIS_FPOFCMIS_OCCUR      (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCMIS_R_FPIXCMIS_MASK        (0x00000020)
#define SYSEXC_SYSEXCMIS_R_FPIXCMIS_BIT         (5)
#define SYSEXC_SYSEXCMIS_R_FPIXCMIS_NOOCCUR    (0x00000000)
#define SYSEXC_SYSEXCMIS_R_FPIXCMIS_OCCUR      (0x00000010)

#define SYSEXC_SYSEXCMIS_FPIXCMIS_MASK        (0x00000001)
#define SYSEXC_SYSEXCMIS_FPIXCMIS_NOOCCUR    (0x00000000)
#define SYSEXC_SYSEXCMIS_FPIXCMIS_OCCUR      (0x00000001)
//--------

#define SYSEXC_SYSEXCMIS_FPIDCMIS_BB (*((volatile const uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCMIS_OFFSET)*32)+(0*4))))
#define SYSEXC_SYSEXCMIS_FPDZCMIS_BB (*((volatile const uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCMIS_OFFSET)*32)+(1*4))))
#define SYSEXC_SYSEXCMIS_FPIOCMIS_BB (*((volatile const uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCMIS_OFFSET)*32)+(2*4))))
#define SYSEXC_SYSEXCMIS_FPUFCMIS_BB (*((volatile const uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCMIS_OFFSET)*32)+(3*4))))
#define SYSEXC_SYSEXCMIS_FPOFCMIS_BB (*((volatile const uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCMIS_OFFSET)*32)+(4*4))))
#define SYSEXC_SYSEXCMIS_FPIXCMIS_BB (*((volatile const uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCMIS_OFFSET)*32)+(5*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 SYSEXCCIC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define SYSEXC_SYSEXCIC           (((SYSEXCIC_TypeDef*)(SYSEXC_BASE+SYSEXC_SYSEXCCIC_OFFSET )))
#define SYSEXC_SYSEXCIC_R          (*((volatile uint32_t *)(SYSEXC_BASE+SYSEXC_SYSEXCCIC_OFFSET)))


//--------
#define SYSEXC_SYSEXCIC_R_FPIDCIC_MASK        (0x00000001)
#define SYSEXC_SYSEXCIC_R_FPIDCIC_BIT         (0)
#define SYSEXC_SYSEXCIC_R_FPIDCIC_CLEAR      (0x00000001)

#define SYSEXC_SYSEXCIC_FPIDCIC_MASK        (0x00000001)
#define SYSEXC_SYSEXCIC_FPIDCIC_CLEAR      (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCIC_R_FPDZCIC_MASK        (0x00000002)
#define SYSEXC_SYSEXCIC_R_FPDZCIC_BIT         (1)
#define SYSEXC_SYSEXCIC_R_FPDZCIC_CLEAR      (0x00000002)

#define SYSEXC_SYSEXCIC_FPDZCIC_MASK        (0x00000001)
#define SYSEXC_SYSEXCIC_FPDZCIC_CLEAR      (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCIC_R_FPIOCIC_MASK        (0x00000004)
#define SYSEXC_SYSEXCIC_R_FPIOCIC_BIT         (2)
#define SYSEXC_SYSEXCIC_R_FPIOCIC_CLEAR      (0x00000004)

#define SYSEXC_SYSEXCIC_FPIOCIC_MASK        (0x00000001)
#define SYSEXC_SYSEXCIC_FPIOCIC_CLEAR      (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCIC_R_FPUFCIC_MASK        (0x00000008)
#define SYSEXC_SYSEXCIC_R_FPUFCIC_BIT         (3)
#define SYSEXC_SYSEXCIC_R_FPUFCIC_CLEAR      (0x00000008)

#define SYSEXC_SYSEXCIC_FPUFCIC_MASK        (0x00000001)
#define SYSEXC_SYSEXCIC_FPUFCIC_CLEAR      (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCIC_R_FPOFCIC_MASK        (0x00000010)
#define SYSEXC_SYSEXCIC_R_FPOFCIC_BIT         (4)
#define SYSEXC_SYSEXCIC_R_FPOFCIC_CLEAR      (0x00000010)

#define SYSEXC_SYSEXCIC_FPOFCIC_MASK        (0x00000001)
#define SYSEXC_SYSEXCIC_FPOFCIC_CLEAR      (0x00000001)
//--------

//--------
#define SYSEXC_SYSEXCIC_R_FPIXCIC_MASK        (0x00000020)
#define SYSEXC_SYSEXCIC_R_FPIXCIC_BIT         (5)
#define SYSEXC_SYSEXCIC_R_FPIXCIC_CLEAR      (0x00000010)

#define SYSEXC_SYSEXCIC_FPIXCIC_MASK        (0x00000001)
#define SYSEXC_SYSEXCIC_FPIXCIC_CLEAR      (0x00000001)
//--------


#define SYSEXC_SYSEXCCIC_FPIDCIC_BB (*((volatile uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCCIC_OFFSET)*32)+(0*4))))
#define SYSEXC_SYSEXCCIC_FPDZCIC_BB (*((volatile uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCCIC_OFFSET)*32)+(1*4))))
#define SYSEXC_SYSEXCCIC_FPIOCIC_BB (*((volatile uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCCIC_OFFSET)*32)+(2*4))))
#define SYSEXC_SYSEXCCIC_FPUFCIC_BB (*((volatile uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCCIC_OFFSET)*32)+(3*4))))
#define SYSEXC_SYSEXCCIC_FPOFCIC_BB (*((volatile uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCCIC_OFFSET)*32)+(4*4))))
#define SYSEXC_SYSEXCCIC_FPIXCIC_BB (*((volatile uint32_t *)(0x42000000+((SYSEXC_OFFSET+SYSEXC_SYSEXCCIC_OFFSET)*32)+(5*4))))


#endif /* SYSEXC_H_ */
