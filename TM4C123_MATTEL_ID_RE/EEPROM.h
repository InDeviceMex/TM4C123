/*
 * EEPROM.h
 *
 *  Created on: 8 feb. 2018
 *      Author: InDev
 */

#ifndef EEPROM_H_
#define EEPROM_H_

#include <stdint.h>

#define EEPROM_BASE            (0x400AF000)
#define EEPROM_OFFSET          (0x000AF000)
//#define EEPROM_LIMIT           (0x00040000)


typedef volatile struct
{
    volatile const uint32_t WORDCNT    :16;
    volatile const uint32_t BLKCNT     :11;
    const    uint32_t       reserved   :5;
}EESIZE_TypeDef;

typedef volatile struct
{
    volatile uint32_t BLOCK       :16;
    const    uint32_t reserved    :16;
}EEBLOCK_TypeDef;

typedef volatile struct
{
    volatile uint32_t OFFSET      :4;
    const    uint32_t reserved    :28;
}EEOFFSET_TypeDef;

typedef volatile struct
{
    volatile uint32_t VALUE      :32;
}EERDWR_TypeDef;

typedef volatile struct
{
    volatile uint32_t VALUE      :32;
}EERDWRINC_TypeDef;


typedef volatile struct
{
    volatile const uint32_t WORKING      :1;
    const    uint32_t       reserved     :1;
    volatile const uint32_t WKERASE      :1;
    volatile const uint32_t WKCOPY       :1;
    volatile const uint32_t NOPERM       :1;
    volatile const uint32_t WRBUSY       :1;
    const    uint32_t       reserved1    :26;
}EEDONE_TypeDef;

typedef volatile struct
{
    volatile uint32_t       START        :1;
    volatile const uint32_t EREQ         :1;
    volatile const uint32_t ERETRY       :1;
    volatile const uint32_t PRETRY       :1;
    const    uint32_t       reserved     :28;
}EESUPP_TypeDef;

typedef volatile struct
{
    volatile uint32_t       UNLOCK        :32;
}EEUNLOCK_TypeDef;

typedef volatile struct
{
    volatile uint32_t       PROT        :3;
    volatile uint32_t       ACC         :1;
    const    uint32_t       reserved    :28;
}EEPROT_TypeDef;

typedef volatile struct
{
    volatile uint32_t       PASS        :32;
}EEPASS0_TypeDef;

typedef volatile struct
{
    volatile uint32_t       PASS        :32;
}EEPASS1_TypeDef;

typedef volatile struct
{
    volatile uint32_t       PASS        :32;
}EEPASS2_TypeDef;

typedef volatile struct
{
    volatile uint32_t       INT        :1;
    const    uint32_t       reserved   :31;
}EEINT_TypeDef;


typedef volatile struct
{
    const    uint32_t       reserved   :1;
    volatile uint32_t       H1         :1;
    volatile uint32_t       H2         :1;
    volatile uint32_t       H3         :1;
    volatile uint32_t       H4         :1;
    volatile uint32_t       H5         :1;
    volatile uint32_t       H6         :1;
    volatile uint32_t       H7         :1;
    volatile uint32_t       H8         :1;
    volatile uint32_t       H9         :1;
    volatile uint32_t       H10        :1;
    volatile uint32_t       H11        :1;
    volatile uint32_t       H12        :1;
    volatile uint32_t       H13        :1;
    volatile uint32_t       H14        :1;
    volatile uint32_t       H15        :1;
    volatile uint32_t       H16        :1;
    volatile uint32_t       H17        :1;
    volatile uint32_t       H18        :1;
    volatile uint32_t       H19        :1;
    volatile uint32_t       H20        :1;
    volatile uint32_t       H21        :1;
    volatile uint32_t       H22        :1;
    volatile uint32_t       H23        :1;
    volatile uint32_t       H24        :1;
    volatile uint32_t       H25        :1;
    volatile uint32_t       H26        :1;
    volatile uint32_t       H27        :1;
    volatile uint32_t       H28        :1;
    volatile uint32_t       H29        :1;
    volatile uint32_t       H30        :1;
    volatile uint32_t       H31        :1;
    volatile uint32_t       H32        :1;
}EEHIDE_TypeDef;

typedef volatile struct
{
    volatile uint32_t       ME         :1;
    const    uint32_t       reserved   :15;
    volatile uint32_t       KEY        :16;
}EEDBGME_TypeDef;

typedef volatile struct
{
    volatile const uint32_t SIZE       :5;
    const    uint32_t       reserved   :27;
}EEPROMPP_TypeDef;


// ToDo Registros
typedef volatile struct
{
    union
    {
        volatile const uint32_t    EESIZE;
        EESIZE_TypeDef                  EESIZE_Bit;
    };
    union
    {
        volatile uint32_t          EEBLOCK;
        EEBLOCK_TypeDef                 EEBLOCK_Bit;
    };
    union
    {
        volatile uint32_t          EEOFFSET;
        EEOFFSET_TypeDef                EEOFFSET_Bit;
    };
    const uint32_t                 reserved[1];
    union
    {
        volatile uint32_t          EERDWR;
        EERDWR_TypeDef                  EERDWR_Bit;
    };
    union
    {
        volatile uint32_t          EERDWRINC;
        EERDWRINC_TypeDef               EERDWRINC_Bit;
    };
    union
    {
        volatile const uint32_t    EEDONE;
        EEDONE_TypeDef                  EEDONE_Bit;
    };
    union
    {
        volatile uint32_t          EESUPP;
        EESUPP_TypeDef                  EESUPP_Bit;
    };
    union
    {
        volatile uint32_t          EEUNLOCK;
        EEUNLOCK_TypeDef                EEUNLOCK_Bit;
    };
    const uint32_t                 reserved1[3];
    union
    {
        volatile uint32_t          EEPROT;
        EEPROT_TypeDef                  EEPROT_Bit;
    };
    union
    {
        volatile uint32_t          EEPASS0;
        EEPASS0_TypeDef                 EEPASS0_Bit;
    };
    union
    {
        volatile uint32_t          EEPASS1;
        EEPASS1_TypeDef                 EEPASS1_Bit;
    };
    union
    {
        volatile uint32_t          EEPASS2;
        EEPASS2_TypeDef                 EEPASS2_Bit;
    };
    union
    {
        volatile uint32_t          EEINT;
        EEINT_TypeDef                   EEINT_Bit;
    };
    const uint32_t                 reserved2[3];
    union
    {
        volatile uint32_t          EEHIDE;
        EEHIDE_TypeDef                  EEHIDE_Bit;
    };
    const uint32_t                 reserved3[11];
    union
    {
        volatile uint32_t          EEDBGME;
        EEDBGME_TypeDef                 EEDBGME_Bit;
    };
    const uint32_t                 reserved4[975];
    union
    {
        volatile const uint32_t    EEPROMPP;
        EEPROMPP_TypeDef                EEPROMPP_Bit;
    };
}EEPROM_TypeDef;

#define EEPROM                 (((EEPROM_TypeDef*)(EEPPROM_BASE)))


#define EEPROM_EESIZE_OFFSET     (0x0000)
#define EEPROM_EEBLOCK_OFFSET    (0x0004)
#define EEPROM_EEOFFSET_OFFSET   (0x0008)
#define EEPROM_EERDWR_OFFSET     (0x0010)
#define EEPROM_EERDWRINC_OFFSET  (0x0014)
#define EEPROM_EEDONE_OFFSET     (0x0018)
#define EEPROM_EESUPP_OFFSET     (0x001C)
#define EEPROM_EEUNLOCK_OFFSET   (0x0020)
#define EEPROM_EEPROT_OFFSET     (0x0030)
#define EEPROM_EEPASS0_OFFSET    (0x0034)
#define EEPROM_EEPASS1_OFFSET    (0x0038)
#define EEPROM_EEPASS2_OFFSET    (0x003C)
#define EEPROM_EEINT_OFFSET      (0x0040)
#define EEPROM_EEHIDE_OFFSET     (0x0050)
#define EEPROM_EEDBGME_OFFSET    (0x0080)
#define EEPROM_EEPROMPP_OFFSET   (0x0FC0)
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 EESIZE ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define EEPROM_EESIZE            (((EESIZE_TypeDef*)(EEPROM_BASE+EEPROM_EESIZE_OFFSET )))
#define EEPROM_EESIZE_R          (*((volatile const uint32_t *)(EEPROM_BASE+EEPROM_EESIZE_OFFSET)))

//--------
#define EEPROM_EESIZE_R_WORDCNT_MASK     (0x0000FFFF)
#define EEPROM_EESIZE_R_WORDCNT_BIT      (0)
#define EEPROM_EESIZE_R_WORDCNT_NUMBER   (0x00000200)

#define EEPROM_EESIZE_WORDCNT_MASK       (0x0000FFFF)
#define EEPROM_EESIZE_WORDCNT_NUMBER     (0x00000200)
//--------

//--------
#define EEPROM_EESIZE_R_BLKCNT_MASK     (0x07FF0000)
#define EEPROM_EESIZE_R_BLKCNT_BIT      (0)
#define EEPROM_EESIZE_R_BLKCNT_NUMBER   (0x00200000)

#define EEPROM_EESIZE_BLKCNT_MASK       (0x000007FF)
#define EEPROM_EESIZE_BLKCNT_NUMBER     (0x00000020)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 EEBLOCK ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define EEPROM_EEBLOCK            (((EEBLOCK_TypeDef*)(EEPROM_BASE+EEPROM_EEBLOCK_OFFSET )))
#define EEPROM_EEBLOCK_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEBLOCK_OFFSET)))

//--------
#define EEPROM_EEBLOCK_R_BLOCK_MASK     (0x0000FFFF)
#define EEPROM_EEBLOCK_R_BLOCK_BIT      (0)

#define EEPROM_EEBLOCK_BLOCK_MASK       (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 EEOFFSET ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define EEPROM_EEOFFSET            (((EEOFFSET_TypeDef*)(EEPROM_BASE+EEPROM_EEOFFSET_OFFSET )))
#define EEPROM_EEOFFSET_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEOFFSET_OFFSET)))

//--------
#define EEPROM_EEOFFSET_R_OFFSET_MASK     (0x0000000F)
#define EEPROM_EEOFFSET_R_OFFSET_BIT      (0)

#define EEPROM_EEOFFSET_OFFSET_MASK       (0x0000000F)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 EERDWR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define EEPROM_EERDWR            (((EERDWR_TypeDef*)(EEPROM_BASE+EEPROM_EERDWR_OFFSET )))
#define EEPROM_EERDWR_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EERDWR_OFFSET)))

//--------
#define EEPROM_EERDWR_R_VALUE_MASK     (0xFFFFFFFF)
#define EEPROM_EERDWR_R_VALUE_BIT      (0)

#define EEPROM_EERDWR_VALUE_MASK       (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 EERDWRINC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define EEPROM_EERDWRINC            (((EERDWRINC_TypeDef*)(EEPROM_BASE+EEPROM_EERDWRINC_OFFSET )))
#define EEPROM_EERDWRINC_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EERDWRINC_OFFSET)))

//--------
#define EEPROM_EERDWRINC_R_VALUE_MASK     (0xFFFFFFFF)
#define EEPROM_EERDWRINC_R_VALUE_BIT      (0)

#define EEPROM_EERDWRINC_VALUE_MASK       (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 EEDONE ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define EEPROM_EEDONE            (((EEDONE_TypeDef*)(EEPROM_BASE+EEPROM_EEDONE_OFFSET )))
#define EEPROM_EEDONE_R          (*((volatile const uint32_t *)(EEPROM_BASE+EEPROM_EEDONE_OFFSET)))

//--------
#define EEPROM_EEDONE_R_WORKING_MASK     (0x00000001)
#define EEPROM_EEDONE_R_WORKING_BIT      (0)
#define EEPROM_EEDONE_R_WORKING_DIS      (0x00000000)
#define EEPROM_EEDONE_R_WORKING_EN       (0x00000001)

#define EEPROM_EEDONE_WORKING_MASK       (0x00000001)
#define EEPROM_EEDONE_WORKING_DIS        (0x00000000)
#define EEPROM_EEDONE_WORKING_EN         (0x00000001)
//--------

//--------
#define EEPROM_EEDONE_R_WKERASE_MASK     (0x00000004)
#define EEPROM_EEDONE_R_WKERASE_BIT      (2)
#define EEPROM_EEDONE_R_WKERASE_DIS      (0x00000000)
#define EEPROM_EEDONE_R_WKERASE_EN       (0x00000004)

#define EEPROM_EEDONE_WKERASE_MASK       (0x00000001)
#define EEPROM_EEDONE_WKERASE_DIS        (0x00000000)
#define EEPROM_EEDONE_WKERASE_EN         (0x00000001)
//--------

//--------
#define EEPROM_EEDONE_R_WKCOPY_MASK     (0x00000008)
#define EEPROM_EEDONE_R_WKCOPY_BIT      (3)
#define EEPROM_EEDONE_R_WKCOPY_DIS      (0x00000000)
#define EEPROM_EEDONE_R_WKCOPY_EN       (0x00000008)

#define EEPROM_EEDONE_WKCOPY_MASK       (0x00000001)
#define EEPROM_EEDONE_WKCOPY_DIS        (0x00000000)
#define EEPROM_EEDONE_WKCOPY_EN         (0x00000001)
//--------

//--------
#define EEPROM_EEDONE_R_NOPERM_MASK     (0x00000010)
#define EEPROM_EEDONE_R_NOPERM_BIT      (4)
#define EEPROM_EEDONE_R_NOPERM_NOERROR  (0x00000000)
#define EEPROM_EEDONE_R_NOPERM_ERROR    (0x00000010)

#define EEPROM_EEDONE_NOPERM_MASK       (0x00000001)
#define EEPROM_EEDONE_NOPERM_NOERROR    (0x00000000)
#define EEPROM_EEDONE_NOPERM_ERROR      (0x00000001)
//--------

//--------
#define EEPROM_EEDONE_R_WRBUSY_MASK     (0x00000020)
#define EEPROM_EEDONE_R_WRBUSY_BIT      (5)
#define EEPROM_EEDONE_R_WRBUSY_NOERROR  (0x00000000)
#define EEPROM_EEDONE_R_WRBUSY_ERROR    (0x00000020)

#define EEPROM_EEDONE_WRBUSY_MASK       (0x00000001)
#define EEPROM_EEDONE_WRBUSY_NOERROR    (0x00000000)
#define EEPROM_EEDONE_WRBUSY_ERROR      (0x00000001)
//--------

#define EEPROM_EEDONE_WORKING_BB     (*((volatile const uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEDONE_OFFSET)*32)+(0*4))))
#define EEPROM_EEDONE_WKERASE_BB     (*((volatile const uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEDONE_OFFSET)*32)+(2*4))))
#define EEPROM_EEDONE_WKCOPY_BB      (*((volatile const uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEDONE_OFFSET)*32)+(3*4))))
#define EEPROM_EEDONE_NOPERM_BB      (*((volatile const uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEDONE_OFFSET)*32)+(4*4))))
#define EEPROM_EEDONE_WRBUSY_BB      (*((volatile const uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEDONE_OFFSET)*32)+(5*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 EESUPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define EEPROM_EESUPP            (((EESUPP_TypeDef*)(EEPROM_BASE+EEPROM_EESUPP_OFFSET )))
#define EEPROM_EESUPP_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EESUPP_OFFSET)))

//--------
#define EEPROM_EESUPP_R_START_MASK     (0x00000001)
#define EEPROM_EESUPP_R_START_BIT      (0)
#define EEPROM_EESUPP_R_START_DIS      (0x00000000)
#define EEPROM_EESUPP_R_START_EN       (0x00000001)

#define EEPROM_EESUPP_START_MASK       (0x00000001)
#define EEPROM_EESUPP_START_DIS        (0x00000000)
#define EEPROM_EESUPP_START_EN         (0x00000001)
//--------

//--------
#define EEPROM_EESUPP_R_EREQ_MASK     (0x00000002)
#define EEPROM_EESUPP_R_EREQ_BIT      (1)
#define EEPROM_EESUPP_R_EREQ_DIS      (0x00000000)
#define EEPROM_EESUPP_R_EREQ_EN       (0x00000002)

#define EEPROM_EESUPP_EREQ_MASK       (0x00000001)
#define EEPROM_EESUPP_EREQ_DIS        (0x00000000)
#define EEPROM_EESUPP_EREQ_EN         (0x00000001)
//--------

//--------
#define EEPROM_EESUPP_R_ERETRY_MASK     (0x00000004)
#define EEPROM_EESUPP_R_ERETRY_BIT      (2)
#define EEPROM_EESUPP_R_ERETRY_DIS      (0x00000000)
#define EEPROM_EESUPP_R_ERETRY_EN       (0x00000004)

#define EEPROM_EESUPP_ERETRY_MASK       (0x00000001)
#define EEPROM_EESUPP_ERETRY_DIS        (0x00000000)
#define EEPROM_EESUPP_ERETRY_EN         (0x00000001)
//--------

//--------
#define EEPROM_EESUPP_R_PRETRY_MASK     (0x00000008)
#define EEPROM_EESUPP_R_PRETRY_BIT      (3)
#define EEPROM_EESUPP_R_PRETRY_NOERROR  (0x00000000)
#define EEPROM_EESUPP_R_PRETRY_ERROR    (0x00000008)

#define EEPROM_EESUPP_PRETRY_MASK       (0x00000001)
#define EEPROM_EESUPP_PRETRY_NOERROR    (0x00000000)
#define EEPROM_EESUPP_PRETRY_ERROR      (0x00000001)
//--------

#define EEPROM_EESUPP_START_BB       (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EESUPP_OFFSET)*32)+(0*4))))
#define EEPROM_EESUPP_EREQ_BB        (*((volatile const uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EESUPP_OFFSET)*32)+(1*4))))
#define EEPROM_EESUPP_ERETRY_BB      (*((volatile const uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EESUPP_OFFSET)*32)+(2*4))))
#define EEPROM_EESUPP_PRETRY_BB      (*((volatile const uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EESUPP_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 EEUNLOCK ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define EEPROM_EEUNLOCK            (((EEUNLOCK_TypeDef*)(EEPROM_BASE+EEPROM_EEUNLOCK_OFFSET )))
#define EEPROM_EEUNLOCK_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEUNLOCK_OFFSET)))

//--------
#define EEPROM_EEUNLOCK_R_UNLOCK_MASK     (0xFFFFFFFF)
#define EEPROM_EEUNLOCK_R_UNLOCK_BIT      (0)

#define EEPROM_EEUNLOCK_UNLOCK_MASK       (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 9 EEPROT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define EEPROM_EEPROT            (((EEPROT_TypeDef*)(EEPROM_BASE+EEPROM_EEPROT_OFFSET )))
#define EEPROM_EEPROT_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEPROT_OFFSET)))

//--------
#define EEPROM_EEPROT_R_PROT_MASK           (0x00000007)
#define EEPROM_EEPROT_R_PROT_BIT            (0)
#define EEPROM_EEPROT_R_PROT_NOPASS_RDWR    (0x00000000)
#define EEPROM_EEPROT_R_PROT_PASS_RDWR      (0x00000001)
#define EEPROM_EEPROT_R_PROT_NOPASS_RD      (0x00000002)

#define EEPROM_EEPROT_PROT_MASK           (0x00000007)
#define EEPROM_EEPROT_PROT_NOPASS_RDWR    (0x00000000)
#define EEPROM_EEPROT_PROT_PASS_RDWR      (0x00000001)
#define EEPROM_EEPROT_PROT_NOPASS_RD      (0x00000002)
//--------

//--------
#define EEPROM_EEPROT_R_ACC_MASK           (0x00000008)
#define EEPROM_EEPROT_R_ACC_BIT            (3)
#define EEPROM_EEPROT_R_ACC_BOTH           (0x00000000)
#define EEPROM_EEPROT_R_ACC_SUPERVISOR     (0x00000008)

#define EEPROM_EEPROT_ACC_MASK           (0x00000001)
#define EEPROM_EEPROT_ACC_BOTH           (0x00000000)
#define EEPROM_EEPROT_ACC_SUPERVISOR     (0x00000001)
//--------

#define EEPROM_EEPROT_ACC_BB       (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEPROT_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 10 EEPASS0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define EEPROM_EEPASS0            (((EEPASS0_TypeDef*)(EEPROM_BASE+EEPROM_EEPASS0_OFFSET )))
#define EEPROM_EEPASS0_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEPASS0_OFFSET)))

//--------
#define EEPROM_EEPASS0_R_PASS_MASK     (0xFFFFFFFF)
#define EEPROM_EEPASS0_R_PASS_BIT      (0)
#define EEPROM_EEPASS0_R_PASS_NOSET    (0x00000000)
#define EEPROM_EEPASS0_R_PASS_SET      (0x00000001)

#define EEPROM_EEPASS0_PASS_MASK       (0xFFFFFFFF)
#define EEPROM_EEPASS0_PASS_NOSET      (0x00000000)
#define EEPROM_EEPASS0_PASS_SET        (0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 11 EEPASS1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define EEPROM_EEPASS1            (((EEPASS1_TypeDef*)(EEPROM_BASE+EEPROM_EEPASS1_OFFSET )))
#define EEPROM_EEPASS1_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEPASS1_OFFSET)))

//--------
#define EEPROM_EEPASS1_R_PASS_MASK     (0xFFFFFFFF)
#define EEPROM_EEPASS1_R_PASS_BIT      (0)
#define EEPROM_EEPASS1_R_PASS_NOSET    (0x00000000)
#define EEPROM_EEPASS1_R_PASS_SET      (0x00000001)

#define EEPROM_EEPASS1_PASS_MASK       (0xFFFFFFFF)
#define EEPROM_EEPASS1_PASS_NOSET      (0x00000000)
#define EEPROM_EEPASS1_PASS_SET        (0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 12 EEPASS2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define EEPROM_EEPASS2            (((EEPASS2_TypeDef*)(EEPROM_BASE+EEPROM_EEPASS2_OFFSET )))
#define EEPROM_EEPASS2_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEPASS2_OFFSET)))

//--------
#define EEPROM_EEPASS2_R_PASS_MASK     (0xFFFFFFFF)
#define EEPROM_EEPASS2_R_PASS_BIT      (0)
#define EEPROM_EEPASS2_R_PASS_NOSET    (0x00000000)
#define EEPROM_EEPASS2_R_PASS_SET      (0x00000001)

#define EEPROM_EEPASS2_PASS_MASK       (0xFFFFFFFF)
#define EEPROM_EEPASS2_PASS_NOSET      (0x00000000)
#define EEPROM_EEPASS2_PASS_SET        (0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 13 EEINT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define EEPROM_EEINT            (((EEINT_TypeDef*)(EEPROM_BASE+EEPROM_EEINT_OFFSET )))
#define EEPROM_EEINT_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEINT_OFFSET)))

//--------
#define EEPROM_EEINT_R_INT_MASK       (0x00000001)
#define EEPROM_EEINT_R_INT_BIT        (0)
#define EEPROM_EEINT_R_INT_NOOCCUR    (0x00000000)
#define EEPROM_EEINT_R_INT_OCCUR      (0x00000001)

#define EEPROM_EEINT_INT_MASK         (0x00000001)
#define EEPROM_EEINT_INT_NOOCCUR      (0x00000000)
#define EEPROM_EEINT_INT_OCCUR        (0x00000001)
//--------

#define EEPROM_EEINT_INT_BB       (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEINT_OFFSET)*32)+(0*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 14 EEHIDE ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define EEPROM_EEHIDE            (((EEHIDE_TypeDef*)(EEPROM_BASE+EEPROM_EEHIDE_OFFSET )))
#define EEPROM_EEHIDE_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEHIDE_OFFSET)))

//--------
#define EEPROM_EEHIDE_R_H1_MASK       (0x00000002)
#define EEPROM_EEHIDE_R_H1_BIT        (1)
#define EEPROM_EEHIDE_R_H1_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H1_HIDE       (0x00000002)

#define EEPROM_EEHIDE_H1_MASK         (0x00000001)
#define EEPROM_EEHIDE_H1_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H1_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H2_MASK       (0x00000004)
#define EEPROM_EEHIDE_R_H2_BIT        (2)
#define EEPROM_EEHIDE_R_H2_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H2_HIDE       (0x00000004)

#define EEPROM_EEHIDE_H2_MASK         (0x00000001)
#define EEPROM_EEHIDE_H2_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H2_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H3_MASK       (0x00000008)
#define EEPROM_EEHIDE_R_H3_BIT        (3)
#define EEPROM_EEHIDE_R_H3_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H3_HIDE       (0x00000008)

#define EEPROM_EEHIDE_H3_MASK         (0x00000001)
#define EEPROM_EEHIDE_H3_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H3_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H4_MASK       (0x00000010)
#define EEPROM_EEHIDE_R_H4_BIT        (4)
#define EEPROM_EEHIDE_R_H4_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H4_HIDE       (0x000000010)

#define EEPROM_EEHIDE_H4_MASK         (0x00000001)
#define EEPROM_EEHIDE_H4_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H4_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H5_MASK       (0x00000020)
#define EEPROM_EEHIDE_R_H5_BIT        (5)
#define EEPROM_EEHIDE_R_H5_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H5_HIDE       (0x00000020)

#define EEPROM_EEHIDE_H5_MASK         (0x00000001)
#define EEPROM_EEHIDE_H5_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H5_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H6_MASK       (0x00000040)
#define EEPROM_EEHIDE_R_H6_BIT        (6)
#define EEPROM_EEHIDE_R_H6_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H6_HIDE       (0x00000040)

#define EEPROM_EEHIDE_H6_MASK         (0x00000001)
#define EEPROM_EEHIDE_H6_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H6_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H7_MASK       (0x00000080)
#define EEPROM_EEHIDE_R_H7_BIT        (7)
#define EEPROM_EEHIDE_R_H7_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H7_HIDE       (0x00000080)

#define EEPROM_EEHIDE_H7_MASK         (0x00000001)
#define EEPROM_EEHIDE_H7_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H7_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H8_MASK       (0x00000100)
#define EEPROM_EEHIDE_R_H8_BIT        (8)
#define EEPROM_EEHIDE_R_H8_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H8_HIDE       (0x00000100)

#define EEPROM_EEHIDE_H8_MASK         (0x00000001)
#define EEPROM_EEHIDE_H8_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H8_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H9_MASK       (0x00000200)
#define EEPROM_EEHIDE_R_H9_BIT        (9)
#define EEPROM_EEHIDE_R_H9_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H9_HIDE       (0x00000200)

#define EEPROM_EEHIDE_H9_MASK         (0x00000001)
#define EEPROM_EEHIDE_H9_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H9_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H10_MASK       (0x00000400)
#define EEPROM_EEHIDE_R_H10_BIT        (10)
#define EEPROM_EEHIDE_R_H10_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H10_HIDE       (0x00000400)

#define EEPROM_EEHIDE_H10_MASK         (0x00000001)
#define EEPROM_EEHIDE_H10_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H10_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H11_MASK       (0x00000800)
#define EEPROM_EEHIDE_R_H11_BIT        (11)
#define EEPROM_EEHIDE_R_H11_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H11_HIDE       (0x00000800)

#define EEPROM_EEHIDE_H11_MASK         (0x00000001)
#define EEPROM_EEHIDE_H11_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H11_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H12_MASK       (0x00001000)
#define EEPROM_EEHIDE_R_H12_BIT        (12)
#define EEPROM_EEHIDE_R_H12_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H12_HIDE       (0x00001000)

#define EEPROM_EEHIDE_H12_MASK         (0x00000001)
#define EEPROM_EEHIDE_H12_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H12_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H13_MASK       (0x00002000)
#define EEPROM_EEHIDE_R_H13_BIT        (13)
#define EEPROM_EEHIDE_R_H13_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H13_HIDE       (0x00002000)

#define EEPROM_EEHIDE_H13_MASK         (0x00000001)
#define EEPROM_EEHIDE_H13_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H13_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H14_MASK       (0x00004000)
#define EEPROM_EEHIDE_R_H14_BIT        (14)
#define EEPROM_EEHIDE_R_H14_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H14_HIDE       (0x00004000)

#define EEPROM_EEHIDE_H14_MASK         (0x00000001)
#define EEPROM_EEHIDE_H14_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H14_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H15_MASK       (0x00008000)
#define EEPROM_EEHIDE_R_H15_BIT        (15)
#define EEPROM_EEHIDE_R_H15_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H15_HIDE       (0x00008000)

#define EEPROM_EEHIDE_H15_MASK         (0x00000001)
#define EEPROM_EEHIDE_H15_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H15_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H16_MASK       (0x00010000)
#define EEPROM_EEHIDE_R_H16_BIT        (16)
#define EEPROM_EEHIDE_R_H16_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H16_HIDE       (0x00010000)

#define EEPROM_EEHIDE_H16_MASK         (0x00000001)
#define EEPROM_EEHIDE_H16_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H16_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H17_MASK       (0x00020000)
#define EEPROM_EEHIDE_R_H17_BIT        (17)
#define EEPROM_EEHIDE_R_H17_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H17_HIDE       (0x00020000)

#define EEPROM_EEHIDE_H17_MASK         (0x00000001)
#define EEPROM_EEHIDE_H17_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H17_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H18_MASK       (0x00040000)
#define EEPROM_EEHIDE_R_H18_BIT        (18)
#define EEPROM_EEHIDE_R_H18_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H18_HIDE       (0x00040000)

#define EEPROM_EEHIDE_H18_MASK         (0x00000001)
#define EEPROM_EEHIDE_H18_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H18_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H19_MASK       (0x00080000)
#define EEPROM_EEHIDE_R_H19_BIT        (19)
#define EEPROM_EEHIDE_R_H19_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H19_HIDE       (0x00080000)

#define EEPROM_EEHIDE_H19_MASK         (0x00000001)
#define EEPROM_EEHIDE_H19_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H19_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H20_MASK       (0x00100000)
#define EEPROM_EEHIDE_R_H20_BIT        (20)
#define EEPROM_EEHIDE_R_H20_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H20_HIDE       (0x00100000)

#define EEPROM_EEHIDE_H20_MASK         (0x00000001)
#define EEPROM_EEHIDE_H20_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H20_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H21_MASK       (0x00200000)
#define EEPROM_EEHIDE_R_H21_BIT        (21)
#define EEPROM_EEHIDE_R_H21_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H21_HIDE       (0x00200000)

#define EEPROM_EEHIDE_H21_MASK         (0x00000001)
#define EEPROM_EEHIDE_H21_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H21_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H22_MASK       (0x00400000)
#define EEPROM_EEHIDE_R_H22_BIT        (22)
#define EEPROM_EEHIDE_R_H22_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H22_HIDE       (0x00400000)

#define EEPROM_EEHIDE_H22_MASK         (0x00000001)
#define EEPROM_EEHIDE_H22_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H22_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H23_MASK       (0x00800000)
#define EEPROM_EEHIDE_R_H23_BIT        (23)
#define EEPROM_EEHIDE_R_H23_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H23_HIDE       (0x00800000)

#define EEPROM_EEHIDE_H23_MASK         (0x00000001)
#define EEPROM_EEHIDE_H23_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H23_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H24_MASK       (0x01000000)
#define EEPROM_EEHIDE_R_H24_BIT        (24)
#define EEPROM_EEHIDE_R_H24_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H24_HIDE       (0x01000000)

#define EEPROM_EEHIDE_H24_MASK         (0x00000001)
#define EEPROM_EEHIDE_H24_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H24_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H25_MASK       (0x02000000)
#define EEPROM_EEHIDE_R_H25_BIT        (25)
#define EEPROM_EEHIDE_R_H25_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H25_HIDE       (0x02000000)

#define EEPROM_EEHIDE_H25_MASK         (0x00000001)
#define EEPROM_EEHIDE_H25_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H25_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H26_MASK       (0x04000000)
#define EEPROM_EEHIDE_R_H26_BIT        (26)
#define EEPROM_EEHIDE_R_H26_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H26_HIDE       (0x04000000)

#define EEPROM_EEHIDE_H26_MASK         (0x00000001)
#define EEPROM_EEHIDE_H26_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H26_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H27_MASK       (0x08000000)
#define EEPROM_EEHIDE_R_H27_BIT        (27)
#define EEPROM_EEHIDE_R_H27_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H27_HIDE       (0x08000000)

#define EEPROM_EEHIDE_H27_MASK         (0x00000001)
#define EEPROM_EEHIDE_H27_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H27_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H28_MASK       (0x10000000)
#define EEPROM_EEHIDE_R_H28_BIT        (28)
#define EEPROM_EEHIDE_R_H28_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H28_HIDE       (0x10000000)

#define EEPROM_EEHIDE_H28_MASK         (0x00000001)
#define EEPROM_EEHIDE_H28_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H28_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H29_MASK       (0x20000000)
#define EEPROM_EEHIDE_R_H29_BIT        (29)
#define EEPROM_EEHIDE_R_H29_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H29_HIDE       (0x20000000)

#define EEPROM_EEHIDE_H29_MASK         (0x00000001)
#define EEPROM_EEHIDE_H29_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H29_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H30_MASK       (0x40000000)
#define EEPROM_EEHIDE_R_H30_BIT        (30)
#define EEPROM_EEHIDE_R_H30_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H30_HIDE       (0x40000000)

#define EEPROM_EEHIDE_H30_MASK         (0x00000001)
#define EEPROM_EEHIDE_H30_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H30_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H31_MASK       (0x80000000)
#define EEPROM_EEHIDE_R_H31_BIT        (31)
#define EEPROM_EEHIDE_R_H31_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H31_HIDE       (0x80000000)

#define EEPROM_EEHIDE_H31_MASK         (0x00000001)
#define EEPROM_EEHIDE_H31_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H31_HIDE         (0x00000001)
//--------


#define EEPROM_EEHIDE_H1_BB       (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(1*4))))
#define EEPROM_EEHIDE_H2_BB       (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(2*4))))
#define EEPROM_EEHIDE_H3_BB       (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(3*4))))
#define EEPROM_EEHIDE_H4_BB       (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(4*4))))
#define EEPROM_EEHIDE_H5_BB       (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(5*4))))
#define EEPROM_EEHIDE_H6_BB       (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(6*4))))
#define EEPROM_EEHIDE_H7_BB       (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(7*4))))
#define EEPROM_EEHIDE_H8_BB       (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(8*4))))
#define EEPROM_EEHIDE_H9_BB       (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(9*4))))
#define EEPROM_EEHIDE_H10_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(10*4))))
#define EEPROM_EEHIDE_H11_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(11*4))))
#define EEPROM_EEHIDE_H12_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(12*4))))
#define EEPROM_EEHIDE_H13_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(13*4))))
#define EEPROM_EEHIDE_H14_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(14*4))))
#define EEPROM_EEHIDE_H15_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(15*4))))
#define EEPROM_EEHIDE_H16_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(16*4))))
#define EEPROM_EEHIDE_H17_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(17*4))))
#define EEPROM_EEHIDE_H18_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(18*4))))
#define EEPROM_EEHIDE_H19_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(19*4))))
#define EEPROM_EEHIDE_H20_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(20*4))))
#define EEPROM_EEHIDE_H21_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(21*4))))
#define EEPROM_EEHIDE_H22_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(22*4))))
#define EEPROM_EEHIDE_H23_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(23*4))))
#define EEPROM_EEHIDE_H24_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(24*4))))
#define EEPROM_EEHIDE_H25_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(25*4))))
#define EEPROM_EEHIDE_H26_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(26*4))))
#define EEPROM_EEHIDE_H27_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(27*4))))
#define EEPROM_EEHIDE_H28_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(28*4))))
#define EEPROM_EEHIDE_H29_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(29*4))))
#define EEPROM_EEHIDE_H30_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(30*4))))
#define EEPROM_EEHIDE_H31_BB      (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(31*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 15 EEDBGME ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define EEPROM_EEDBGME            (((EEDBGME_TypeDef*)(EEPROM_BASE+EEPROM_EEDBGME_OFFSET )))
#define EEPROM_EEDBGME_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEDBGME_OFFSET)))

//--------
#define EEPROM_EEDBGME_R_ME_MASK       (0x00000001)
#define EEPROM_EEDBGME_R_ME_BIT        (0)
#define EEPROM_EEDBGME_R_ME_NA         (0x00000000)
#define EEPROM_EEDBGME_R_ME_ERASE      (0x00000001)

#define EEPROM_EEDBGME_ME_MASK         (0x00000001)
#define EEPROM_EEDBGME_ME_NA           (0x00000000)
#define EEPROM_EEDBGME_ME_ERASE        (0x00000001)
//--------

//--------
#define EEPROM_EEDBGME_R_KEY_MASK       (0xFFFF0000)
#define EEPROM_EEDBGME_R_KEY_BIT        (0)
#define EEPROM_EEDBGME_R_KEY_ERASE      (0xE37B0000)

#define EEPROM_EEDBGME_KEY_MASK         (0x0000FFFF)
#define EEPROM_EEDBGME_KEY_ERASE        (0x0000E37B)
//--------

#define EEPROM_EEDBGME_ME_BB       (*((volatile uint32_t *)(0x42000000+((EEPROM_OFFSET+EEPROM_EEDBGME_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 16 EEPROMPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define EEPROM_EEPROMPP            (((EEPROMPP_TypeDef*)(EEPROM_BASE+EEPROM_EEPROMPP_OFFSET )))
#define EEPROM_EEPROMPP_R          (*((volatile const uint32_t *)(EEPROM_BASE+EEPROM_EEPROMPP_OFFSET)))

//--------
#define EEPROM_EEPROMPP_R_SIZE_MASK       (0x0000001F)
#define EEPROM_EEPROMPP_R_SIZE_BIT        (0)
#define EEPROM_EEPROMPP_R_SIZE_2KB        (0x0000001F)

#define EEPROM_EEPROMPP_SIZE_MASK         (0x0000001F)
#define EEPROM_EEPROMPP_SIZE_2KB          (0x0000001F)
//--------

#endif /* EEPROM_H_ */
