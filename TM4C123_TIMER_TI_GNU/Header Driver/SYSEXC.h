/*
 * SYSEXC.h
 *
 *  Created on: 23 ene. 2018
 *      Author: InDev
 */

#ifndef SYSEXC_H_
#define SYSEXC_H_

#include "stdint.h"
#include "NVIC.h"
#include "SCB.h"

#define SYSEXC_BASE            (0x400F9000u)
#define SYSEXC_BITBANDING_BASE (0x42000000u)
#define SYSEXC_OFFSET          (0x000F9000u)


typedef volatile struct
{
    volatile const uint32_t FPIDCRIS      :1;
    volatile const uint32_t FPDZCRIS      :1;
    volatile const uint32_t FPIOCRIS      :1;
    volatile const uint32_t FPUFCRIS      :1;
    volatile const uint32_t FPOFCRIS      :1;
    volatile const uint32_t FPIXCRIS      :1;
    const          uint32_t reserved      :26;
}SYSEXCRIS_TypeDef;


typedef volatile struct
{
    volatile uint32_t FPIDCIM      :1;
    volatile uint32_t FPDZCIM      :1;
    volatile uint32_t FPIOCIM      :1;
    volatile uint32_t FPUFCIM      :1;
    volatile uint32_t FPOFCIM      :1;
    volatile uint32_t FPIXCIM      :1;
    const    uint32_t reserved     :26;
}SYSEXCIM_TypeDef;


typedef volatile struct
{
    volatile const uint32_t FPIDCMIS      :1;
    volatile const uint32_t FPDZCMIS      :1;
    volatile const uint32_t FPIOCMIS      :1;
    volatile const uint32_t FPUFCMIS      :1;
    volatile const uint32_t FPOFCMIS      :1;
    volatile const uint32_t FPIXCMIS      :1;
    const    uint32_t       reserved     :26;
}SYSEXCMIS_TypeDef;


typedef volatile struct
{
    volatile uint32_t FPIDCCIC      :1;
    volatile uint32_t FPDZCCIC      :1;
    volatile uint32_t FPIOCCIC      :1;
    volatile uint32_t FPUFCCIC      :1;
    volatile uint32_t FPOFCCIC      :1;
    volatile uint32_t FPIXCCIC      :1;
    const    uint32_t reserved      :26;
}SYSEXCIC_TypeDef;


typedef volatile struct
{
    volatile const uint32_t FPIDCRIS      ;
    volatile const uint32_t FPDZCRIS      ;
    volatile const uint32_t FPIOCRIS      ;
    volatile const uint32_t FPUFCRIS      ;
    volatile const uint32_t FPOFCRIS      ;
    volatile const uint32_t FPIXCRIS      ;
    const          uint32_t reserved      [26];
}BITBANDING_SYSEXCRIS_TypeDef;


typedef volatile struct
{
    volatile uint32_t FPIDCIM      ;
    volatile uint32_t FPDZCIM      ;
    volatile uint32_t FPIOCIM      ;
    volatile uint32_t FPUFCIM      ;
    volatile uint32_t FPOFCIM      ;
    volatile uint32_t FPIXCIM      ;
    const    uint32_t reserved     [26];
}BITBANDING_SYSEXCIM_TypeDef;


typedef volatile struct
{
    volatile const uint32_t FPIDCMIS      ;
    volatile const uint32_t FPDZCMIS      ;
    volatile const uint32_t FPIOCMIS      ;
    volatile const uint32_t FPUFCMIS      ;
    volatile const uint32_t FPOFCMIS      ;
    volatile const uint32_t FPIXCMIS      ;
    const    uint32_t       reserved     [26];
}BITBANDING_SYSEXCMIS_TypeDef;


typedef volatile struct
{
    volatile uint32_t FPIDCCIC      ;
    volatile uint32_t FPDZCCIC      ;
    volatile uint32_t FPIOCCIC      ;
    volatile uint32_t FPUFCCIC      ;
    volatile uint32_t FPOFCCIC      ;
    volatile uint32_t FPIXCCIC      ;
    const    uint32_t reserved      [26];
}BITBANDING_SYSEXCIC_TypeDef;


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



typedef volatile struct
{
    union
    {
        volatile const uint32_t    SYSEXCRIS[32];
        BITBANDING_SYSEXCRIS_TypeDef               SYSEXCRIS_Bit;
    };
    union
    {
        volatile uint32_t          SYSEXCIM[32];
        BITBANDING_SYSEXCIM_TypeDef                SYSEXCIM_Bit;
    };
    union
    {
        volatile const uint32_t    SYSEXCMIS[32];
        BITBANDING_SYSEXCMIS_TypeDef               SYSEXCMIS_Bit;
    };
    union
    {
        volatile uint32_t          SYSEXCIC[32];
        BITBANDING_SYSEXCIC_TypeDef                SYSEXCIC_Bit;
    };
}SYSEXC_BITBANDING_TypeDef;

#define SYSEXC                 (((SYSEXC_TypeDef*)(SYSEXC_BASE)))
#define SYSEXC_BITBANDING      (((SYSEXC_BITBANDING_TypeDef*)(SYSEXC_BITBANDING_BASE+(SYSEXC_OFFSET*32u))))


#define SYSEXC_SYSEXCRIS_OFFSET    (0x0000u)
#define SYSEXC_SYSEXCIM_OFFSET     (0x0004u)
#define SYSEXC_SYSEXCMIS_OFFSET    (0x0008u)
#define SYSEXC_SYSEXCIC_OFFSET     (0x000Cu)

/******************************************************************************************
************************************ 1 SYSEXCRIS *********************************************
******************************************************************************************/
#define SYSEXC_SYSEXCRIS           (((SYSEXCRIS_TypeDef*)(SYSEXC_BASE+SYSEXC_SYSEXCRIS_OFFSET )))
#define SYSEXC_SYSEXCRIS_R          (*((volatile const uint32_t *)(SYSEXC_BASE+SYSEXC_SYSEXCRIS_OFFSET)))
#define SYSEXC_BITBANDING_SYSEXCRIS      (((BITBANDING_SYSEXCRIS_TypeDef*)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCRIS_OFFSET)*32u))))

/*----------*/
#define SYSEXC_SYSEXCRIS_R_FPIDCRIS_MASK        (0x00000001u)
#define SYSEXC_SYSEXCRIS_R_FPIDCRIS_BIT         (0u)
#define SYSEXC_SYSEXCRIS_R_FPIDCRIS_NOACTIVE    (0x00000000u)
#define SYSEXC_SYSEXCRIS_R_FPIDCRIS_ACTIVE      (0x00000001u)

#define SYSEXC_SYSEXCRIS_FPIDCRIS_MASK        (0x00000001u)
#define SYSEXC_SYSEXCRIS_FPIDCRIS_NOACTIVE    (0x00000000u)
#define SYSEXC_SYSEXCRIS_FPIDCRIS_ACTIVE      (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCRIS_R_FPDZCRIS_MASK        (0x00000002u)
#define SYSEXC_SYSEXCRIS_R_FPDZCRIS_BIT         (1u)
#define SYSEXC_SYSEXCRIS_R_FPDZCRIS_NOACTIVE    (0x00000000u)
#define SYSEXC_SYSEXCRIS_R_FPDZCRIS_ACTIVE      (0x00000002u)

#define SYSEXC_SYSEXCRIS_FPDZCRIS_MASK        (0x00000001u)
#define SYSEXC_SYSEXCRIS_FPDZCRIS_NOACTIVE    (0x00000000u)
#define SYSEXC_SYSEXCRIS_FPDZCRIS_ACTIVE      (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCRIS_R_FPIOCRIS_MASK        (0x00000004u)
#define SYSEXC_SYSEXCRIS_R_FPIOCRIS_BIT         (2u)
#define SYSEXC_SYSEXCRIS_R_FPIOCRIS_NOACTIVE    (0x00000000u)
#define SYSEXC_SYSEXCRIS_R_FPIOCRIS_ACTIVE      (0x00000004u)

#define SYSEXC_SYSEXCRIS_FPIOCRIS_MASK        (0x00000001u)
#define SYSEXC_SYSEXCRIS_FPIOCRIS_NOACTIVE    (0x00000000u)
#define SYSEXC_SYSEXCRIS_FPIOCRIS_ACTIVE      (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCRIS_R_FPUFCRIS_MASK        (0x00000008u)
#define SYSEXC_SYSEXCRIS_R_FPUFCRIS_BIT         (3u)
#define SYSEXC_SYSEXCRIS_R_FPUFCRIS_NOACTIVE    (0x00000000u)
#define SYSEXC_SYSEXCRIS_R_FPUFCRIS_ACTIVE      (0x00000008u)

#define SYSEXC_SYSEXCRIS_FPUFCRIS_MASK        (0x00000001u)
#define SYSEXC_SYSEXCRIS_FPUFCRIS_NOACTIVE    (0x00000000u)
#define SYSEXC_SYSEXCRIS_FPUFCRIS_ACTIVE      (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCRIS_R_FPOFCRIS_MASK        (0x00000010u)
#define SYSEXC_SYSEXCRIS_R_FPOFCRIS_BIT         (4u)
#define SYSEXC_SYSEXCRIS_R_FPOFCRIS_NOACTIVE    (0x00000000u)
#define SYSEXC_SYSEXCRIS_R_FPOFCRIS_ACTIVE      (0x00000010u)

#define SYSEXC_SYSEXCRIS_FPOFCRIS_MASK        (0x00000001u)
#define SYSEXC_SYSEXCRIS_FPOFCRIS_NOACTIVE    (0x00000000u)
#define SYSEXC_SYSEXCRIS_FPOFCRIS_ACTIVE      (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCRIS_R_FPIXCRIS_MASK        (0x00000020u)
#define SYSEXC_SYSEXCRIS_R_FPIXCRIS_BIT         (5u)
#define SYSEXC_SYSEXCRIS_R_FPIXCRIS_NOACTIVE    (0x00000000u)
#define SYSEXC_SYSEXCRIS_R_FPIXCRIS_ACTIVE      (0x00000010u)

#define SYSEXC_SYSEXCRIS_FPIXCRIS_MASK        (0x00000001u)
#define SYSEXC_SYSEXCRIS_FPIXCRIS_NOACTIVE    (0x00000000u)
#define SYSEXC_SYSEXCRIS_FPIXCRIS_ACTIVE      (0x00000001u)
/*----------*/

#define SYSEXC_BITBANDING_SYSEXCRIS_FPIDCRIS (*((volatile const uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCRIS_OFFSET)*32u)+(SYSEXC_SYSEXCRIS_R_FPIDCRIS_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCRIS_FPDZCRIS (*((volatile const uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCRIS_OFFSET)*32u)+(SYSEXC_SYSEXCRIS_R_FPDZCRIS_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCRIS_FPIOCRIS (*((volatile const uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCRIS_OFFSET)*32u)+(SYSEXC_SYSEXCRIS_R_FPIOCRIS_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCRIS_FPUFCRIS (*((volatile const uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCRIS_OFFSET)*32u)+(SYSEXC_SYSEXCRIS_R_FPUFCRIS_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCRIS_FPOFCRIS (*((volatile const uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCRIS_OFFSET)*32u)+(SYSEXC_SYSEXCRIS_R_FPOFCRIS_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCRIS_FPIXCRIS (*((volatile const uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCRIS_OFFSET)*32u)+(SYSEXC_SYSEXCRIS_R_FPIXCRIS_BIT*4u))))

/******************************************************************************************
************************************ 2 SYSEXCIM *********************************************
******************************************************************************************/
#define SYSEXC_SYSEXCIM           (((SYSEXCIM_TypeDef*)(SYSEXC_BASE+SYSEXC_SYSEXCIM_OFFSET )))
#define SYSEXC_SYSEXCIM_R          (*((volatile uint32_t *)(SYSEXC_BASE+SYSEXC_SYSEXCIM_OFFSET)))
#define SYSEXC_BITBANDING_SYSEXCIM      (((BITBANDING_SYSEXCIM_TypeDef*)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCIM_OFFSET)*32u))))



/*----------*/
#define SYSEXC_SYSEXCIM_R_FPIDCIM_MASK        (0x00000001u)
#define SYSEXC_SYSEXCIM_R_FPIDCIM_BIT         (0u)
#define SYSEXC_SYSEXCIM_R_FPIDCIM_DIS         (0x00000000u)
#define SYSEXC_SYSEXCIM_R_FPIDCIM_EN          (0x00000001u)

#define SYSEXC_SYSEXCIM_FPIDCIM_MASK        (0x00000001u)
#define SYSEXC_SYSEXCIM_FPIDCIM_DIS         (0x00000000u)
#define SYSEXC_SYSEXCIM_FPIDCIM_EN          (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIM_R_FPDZCIM_MASK        (0x00000002u)
#define SYSEXC_SYSEXCIM_R_FPDZCIM_BIT         (1u)
#define SYSEXC_SYSEXCIM_R_FPDZCIM_DIS         (0x00000000u)
#define SYSEXC_SYSEXCIM_R_FPDZCIM_EN          (0x00000002u)

#define SYSEXC_SYSEXCIM_FPDZCIM_MASK        (0x00000001u)
#define SYSEXC_SYSEXCIM_FPDZCIM_DIS         (0x00000000u)
#define SYSEXC_SYSEXCIM_FPDZCIM_EN          (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIM_R_FPIOCIM_MASK        (0x00000004u)
#define SYSEXC_SYSEXCIM_R_FPIOCIM_BIT         (2u)
#define SYSEXC_SYSEXCIM_R_FPIOCIM_DIS         (0x00000000u)
#define SYSEXC_SYSEXCIM_R_FPIOCIM_EN          (0x00000004u)

#define SYSEXC_SYSEXCIM_FPIOCIM_MASK        (0x00000001u)
#define SYSEXC_SYSEXCIM_FPIOCIM_DIS         (0x00000000u)
#define SYSEXC_SYSEXCIM_FPIOCIM_EN          (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIM_R_FPUFCIM_MASK        (0x00000008u)
#define SYSEXC_SYSEXCIM_R_FPUFCIM_BIT         (3u)
#define SYSEXC_SYSEXCIM_R_FPUFCIM_DIS         (0x00000000u)
#define SYSEXC_SYSEXCIM_R_FPUFCIM_EN          (0x00000008u)

#define SYSEXC_SYSEXCIM_FPUFCIM_MASK        (0x00000001u)
#define SYSEXC_SYSEXCIM_FPUFCIM_DIS         (0x00000000u)
#define SYSEXC_SYSEXCIM_FPUFCIM_EN          (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIM_R_FPOFCIM_MASK        (0x00000010u)
#define SYSEXC_SYSEXCIM_R_FPOFCIM_BIT         (4u)
#define SYSEXC_SYSEXCIM_R_FPOFCIM_DIS         (0x00000000u)
#define SYSEXC_SYSEXCIM_R_FPOFCIM_EN          (0x00000010u)

#define SYSEXC_SYSEXCIM_FPOFCIM_MASK        (0x00000001u)
#define SYSEXC_SYSEXCIM_FPOFCIM_DIS         (0x00000000u)
#define SYSEXC_SYSEXCIM_FPOFCIM_EN          (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIM_R_FPIXCIM_MASK        (0x00000020u)
#define SYSEXC_SYSEXCIM_R_FPIXCIM_BIT         (5u)
#define SYSEXC_SYSEXCIM_R_FPIXCIM_DIS         (0x00000000u)
#define SYSEXC_SYSEXCIM_R_FPIXCIM_EN          (0x00000010u)

#define SYSEXC_SYSEXCIM_FPIXCIM_MASK        (0x00000001u)
#define SYSEXC_SYSEXCIM_FPIXCIM_DIS         (0x00000000u)
#define SYSEXC_SYSEXCIM_FPIXCIM_EN          (0x00000001u)
/*----------*/

#define SYSEXC_BITBANDING_SYSEXCIM_FPIDCIM (*((volatile uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCIM_OFFSET)*32u)+(SYSEXC_SYSEXCIM_R_FPIDCIM_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCIM_FPDZCIM (*((volatile uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCIM_OFFSET)*32u)+(SYSEXC_SYSEXCIM_R_FPDZCIM_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCIM_FPIOCIM (*((volatile uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCIM_OFFSET)*32u)+(SYSEXC_SYSEXCIM_R_FPIOCIM_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCIM_FPUFCIM (*((volatile uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCIM_OFFSET)*32u)+(SYSEXC_SYSEXCIM_R_FPUFCIM_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCIM_FPOFCIM (*((volatile uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCIM_OFFSET)*32u)+(SYSEXC_SYSEXCIM_R_FPOFCIM_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCIM_FPIXCIM (*((volatile uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCIM_OFFSET)*32u)+(SYSEXC_SYSEXCIM_R_FPIXCIM_BIT*4u))))

/******************************************************************************************
************************************ 3 SYSEXCMIS *********************************************
******************************************************************************************/
#define SYSEXC_SYSEXCMIS           (((SYSEXCMIS_TypeDef*)(SYSEXC_BASE+SYSEXC_SYSEXCMIS_OFFSET )))
#define SYSEXC_SYSEXCMIS_R          (*((volatile const uint32_t *)(SYSEXC_BASE+SYSEXC_SYSEXCMIS_OFFSET)))
#define SYSEXC_BITBANDING_SYSEXCMIS      (((BITBANDING_SYSEXCMIS_TypeDef*)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCMIS_OFFSET)*32u))))

/*----------*/
#define SYSEXC_SYSEXCMIS_R_FPIDCMIS_MASK        (0x00000001u)
#define SYSEXC_SYSEXCMIS_R_FPIDCMIS_BIT         (0u)
#define SYSEXC_SYSEXCMIS_R_FPIDCMIS_NOOCCUR    (0x00000000u)
#define SYSEXC_SYSEXCMIS_R_FPIDCMIS_OCCUR      (0x00000001u)

#define SYSEXC_SYSEXCMIS_FPIDCMIS_MASK        (0x00000001u)
#define SYSEXC_SYSEXCMIS_FPIDCMIS_NOOCCUR    (0x00000000u)
#define SYSEXC_SYSEXCMIS_FPIDCMIS_OCCUR      (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCMIS_R_FPDZCMIS_MASK        (0x00000002u)
#define SYSEXC_SYSEXCMIS_R_FPDZCMIS_BIT         (1u)
#define SYSEXC_SYSEXCMIS_R_FPDZCMIS_NOOCCUR    (0x00000000u)
#define SYSEXC_SYSEXCMIS_R_FPDZCMIS_OCCUR      (0x00000002u)

#define SYSEXC_SYSEXCMIS_FPDZCMIS_MASK        (0x00000001u)
#define SYSEXC_SYSEXCMIS_FPDZCMIS_NOOCCUR    (0x00000000u)
#define SYSEXC_SYSEXCMIS_FPDZCMIS_OCCUR      (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCMIS_R_FPIOCMIS_MASK        (0x00000004u)
#define SYSEXC_SYSEXCMIS_R_FPIOCMIS_BIT         (2u)
#define SYSEXC_SYSEXCMIS_R_FPIOCMIS_NOOCCUR    (0x00000000u)
#define SYSEXC_SYSEXCMIS_R_FPIOCMIS_OCCUR      (0x00000004u)

#define SYSEXC_SYSEXCMIS_FPIOCMIS_MASK        (0x00000001u)
#define SYSEXC_SYSEXCMIS_FPIOCMIS_NOOCCUR    (0x00000000u)
#define SYSEXC_SYSEXCMIS_FPIOCMIS_OCCUR      (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCMIS_R_FPUFCMIS_MASK        (0x00000008u)
#define SYSEXC_SYSEXCMIS_R_FPUFCMIS_BIT         (3u)
#define SYSEXC_SYSEXCMIS_R_FPUFCMIS_NOOCCUR    (0x00000000u)
#define SYSEXC_SYSEXCMIS_R_FPUFCMIS_OCCUR      (0x00000008u)

#define SYSEXC_SYSEXCMIS_FPUFCMIS_MASK        (0x00000001u)
#define SYSEXC_SYSEXCMIS_FPUFCMIS_NOOCCUR    (0x00000000u)
#define SYSEXC_SYSEXCMIS_FPUFCMIS_OCCUR      (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCMIS_R_FPOFCMIS_MASK        (0x00000010u)
#define SYSEXC_SYSEXCMIS_R_FPOFCMIS_BIT         (4u)
#define SYSEXC_SYSEXCMIS_R_FPOFCMIS_NOOCCUR    (0x00000000u)
#define SYSEXC_SYSEXCMIS_R_FPOFCMIS_OCCUR      (0x00000010u)

#define SYSEXC_SYSEXCMIS_FPOFCMIS_MASK        (0x00000001u)
#define SYSEXC_SYSEXCMIS_FPOFCMIS_NOOCCUR    (0x00000000u)
#define SYSEXC_SYSEXCMIS_FPOFCMIS_OCCUR      (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCMIS_R_FPIXCMIS_MASK        (0x00000020u)
#define SYSEXC_SYSEXCMIS_R_FPIXCMIS_BIT         (5u)
#define SYSEXC_SYSEXCMIS_R_FPIXCMIS_NOOCCUR    (0x00000000u)
#define SYSEXC_SYSEXCMIS_R_FPIXCMIS_OCCUR      (0x00000010u)

#define SYSEXC_SYSEXCMIS_FPIXCMIS_MASK        (0x00000001u)
#define SYSEXC_SYSEXCMIS_FPIXCMIS_NOOCCUR    (0x00000000u)
#define SYSEXC_SYSEXCMIS_FPIXCMIS_OCCUR      (0x00000001u)
/*----------*/

#define SYSEXC_BITBANDING_SYSEXCMIS_FPIDCMIS (*((volatile const uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCMIS_OFFSET)*32u)+(SYSEXC_SYSEXCMIS_R_FPIDCMIS_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCMIS_FPDZCMIS (*((volatile const uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCMIS_OFFSET)*32u)+(SYSEXC_SYSEXCMIS_R_FPDZCMIS_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCMIS_FPIOCMIS (*((volatile const uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCMIS_OFFSET)*32u)+(SYSEXC_SYSEXCMIS_R_FPIOCMIS_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCMIS_FPUFCMIS (*((volatile const uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCMIS_OFFSET)*32u)+(SYSEXC_SYSEXCMIS_R_FPUFCMIS_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCMIS_FPOFCMIS (*((volatile const uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCMIS_OFFSET)*32u)+(SYSEXC_SYSEXCMIS_R_FPOFCMIS_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCMIS_FPIXCMIS (*((volatile const uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCMIS_OFFSET)*32u)+(SYSEXC_SYSEXCMIS_R_FPIXCMIS_BIT*4u))))

/******************************************************************************************
************************************ 4 SYSEXCIC *********************************************
******************************************************************************************/
#define SYSEXC_SYSEXCIC           (((SYSEXCIC_TypeDef*)(SYSEXC_BASE+SYSEXC_SYSEXCIC_OFFSET )))
#define SYSEXC_SYSEXCIC_R          (*((volatile uint32_t *)(SYSEXC_BASE+SYSEXC_SYSEXCIC_OFFSET)))
#define SYSEXC_BITBANDING_SYSEXCIC      (((BITBANDING_SYSEXCIC_TypeDef*)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCIC_OFFSET)*32u))))


/*----------*/
#define SYSEXC_SYSEXCIC_R_FPIDCIC_MASK        (0x00000001u)
#define SYSEXC_SYSEXCIC_R_FPIDCIC_BIT         (0u)
#define SYSEXC_SYSEXCIC_R_FPIDCIC_CLEAR      (0x00000001u)

#define SYSEXC_SYSEXCIC_FPIDCIC_MASK        (0x00000001u)
#define SYSEXC_SYSEXCIC_FPIDCIC_CLEAR      (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIC_R_FPDZCIC_MASK        (0x00000002u)
#define SYSEXC_SYSEXCIC_R_FPDZCIC_BIT         (1u)
#define SYSEXC_SYSEXCIC_R_FPDZCIC_CLEAR      (0x00000002u)

#define SYSEXC_SYSEXCIC_FPDZCIC_MASK        (0x00000001u)
#define SYSEXC_SYSEXCIC_FPDZCIC_CLEAR      (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIC_R_FPIOCIC_MASK        (0x00000004u)
#define SYSEXC_SYSEXCIC_R_FPIOCIC_BIT         (2u)
#define SYSEXC_SYSEXCIC_R_FPIOCIC_CLEAR      (0x00000004u)

#define SYSEXC_SYSEXCIC_FPIOCIC_MASK        (0x00000001u)
#define SYSEXC_SYSEXCIC_FPIOCIC_CLEAR      (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIC_R_FPUFCIC_MASK        (0x00000008u)
#define SYSEXC_SYSEXCIC_R_FPUFCIC_BIT         (3u)
#define SYSEXC_SYSEXCIC_R_FPUFCIC_CLEAR      (0x00000008u)

#define SYSEXC_SYSEXCIC_FPUFCIC_MASK        (0x00000001u)
#define SYSEXC_SYSEXCIC_FPUFCIC_CLEAR      (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIC_R_FPOFCIC_MASK        (0x00000010u)
#define SYSEXC_SYSEXCIC_R_FPOFCIC_BIT         (4u)
#define SYSEXC_SYSEXCIC_R_FPOFCIC_CLEAR      (0x00000010u)

#define SYSEXC_SYSEXCIC_FPOFCIC_MASK        (0x00000001u)
#define SYSEXC_SYSEXCIC_FPOFCIC_CLEAR      (0x00000001u)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIC_R_FPIXCIC_MASK        (0x00000020u)
#define SYSEXC_SYSEXCIC_R_FPIXCIC_BIT         (5u)
#define SYSEXC_SYSEXCIC_R_FPIXCIC_CLEAR      (0x00000010u)

#define SYSEXC_SYSEXCIC_FPIXCIC_MASK        (0x00000001u)
#define SYSEXC_SYSEXCIC_FPIXCIC_CLEAR      (0x00000001u)
/*----------*/


#define SYSEXC_BITBANDING_SYSEXCIC_FPIDCIC (*((volatile uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCIC_OFFSET)*32u)+(SYSEXC_SYSEXCIC_R_FPIDCIC_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCIC_FPDZCIC (*((volatile uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCIC_OFFSET)*32u)+(SYSEXC_SYSEXCIC_R_FPDZCIC_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCIC_FPIOCIC (*((volatile uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCIC_OFFSET)*32u)+(SYSEXC_SYSEXCIC_R_FPIOCIC_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCIC_FPUFCIC (*((volatile uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCIC_OFFSET)*32u)+(SYSEXC_SYSEXCIC_R_FPUFCIC_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCIC_FPOFCIC (*((volatile uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCIC_OFFSET)*32u)+(SYSEXC_SYSEXCIC_R_FPOFCIC_BIT*4u))))
#define SYSEXC_BITBANDING_SYSEXCIC_FPIXCIC (*((volatile uint32_t *)(SYSEXC_BITBANDING_BASE+((SYSEXC_OFFSET+SYSEXC_SYSEXCIC_OFFSET)*32u)+(SYSEXC_SYSEXCIC_R_FPIXCIC_BIT*4u))))

typedef enum
{
    SYSEXC_enDENORMAL =0x1u,
    SYSEXC_enDIV0     =0x2u,
    SYSEXC_enINVALID  =0x4u,
    SYSEXC_enUNDERFLOW=0x8u,
    SYSEXC_enOVERFLOW =0x10u,
    SYSEXC_enINEXACT  =0x20u,

}SYSEXC_nINTERRUPT;

typedef enum
{
    SYSEXC_enNOOCCUR    =0u,
    SYSEXC_enOCCUR      =1u,

}SYSEXC_nSTATUS;

typedef enum
{
    SYSEXC_enPRI0=0u,
    SYSEXC_enPRI1=1u,
    SYSEXC_enPRI2=2u,
    SYSEXC_enPRI3=3u,
    SYSEXC_enPRI4=4u,
    SYSEXC_enPRI5=5u,
    SYSEXC_enPRI6=6u,
    SYSEXC_enPRI7=7u,
    SYSEXC_enDEFAULT=0xFFu,
}SYSEXC_nPRIORITY;

/* ToDo meake a better handle of interupt as GPIO*/
void SYSEXC__vInit(SYSEXC_nINTERRUPT enInt,SYSEXC_nPRIORITY enPri);
void SYSEXC__vEnInterrupt(SYSEXC_nINTERRUPT enInt);
void SYSEXC__vDisInterrupt(SYSEXC_nINTERRUPT enInt);
void SYSEXC__vClearInterrupt(SYSEXC_nINTERRUPT enInt);
SYSEXC_nSTATUS SYSEXC__enStatusInterrupt(SYSEXC_nINTERRUPT enInt);



#endif /* SYSEXC_H_ */
