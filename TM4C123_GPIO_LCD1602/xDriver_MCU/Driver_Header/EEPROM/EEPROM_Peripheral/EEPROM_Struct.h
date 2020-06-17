/*
 * EEPROM_Strcut.h
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_STRUCT_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_STRUCT_H_

#include <stdint.h>

typedef volatile struct
{
    volatile const uint32_t     WORDCNT    :16;
    volatile const uint32_t     BLKCNT     :11;
    const          uint32_t     reserved   :5;
}EESIZE_TypeDef;

typedef volatile struct
{
    volatile uint32_t   BLOCK       :16;
    const    uint32_t   reserved    :16;
}EEBLOCK_TypeDef;

typedef volatile struct
{
    volatile uint32_t   OFFSET      :4;
    const    uint32_t   reserved    :28;
}EEOFFSET_TypeDef;

typedef volatile struct
{
    volatile uint32_t   VALUE      :32;
}EERDWR_TypeDef;

typedef volatile struct
{
    volatile uint32_t   VALUE      :32;
}EERDWRINC_TypeDef;


typedef volatile struct
{
    volatile const uint32_t     WORKING      :1;
    const          uint32_t     reserved     :1;
    volatile const uint32_t     WKERASE      :1;
    volatile const uint32_t     WKCOPY       :1;
    volatile const uint32_t     NOPERM       :1;
    volatile const uint32_t     WRBUSY       :1;
    const    uint32_t           reserved1    :26;
}EEDONE_TypeDef;

typedef volatile struct
{
    volatile uint32_t           START        :1;
    volatile const uint32_t     EREQ         :1;
    volatile const uint32_t     ERETRY       :1;
    volatile const uint32_t     PRETRY       :1;
    const    uint32_t           reserved     :28;
}EESUPP_TypeDef;

typedef volatile struct
{
    volatile uint32_t           UNLOCK        :32;
}EEUNLOCK_TypeDef;

typedef volatile struct
{
    volatile uint32_t           PROT        :3;
    volatile uint32_t           ACC         :1;
    const    uint32_t           reserved    :28;
}EEPROT_TypeDef;

typedef volatile struct
{
    volatile uint32_t           PASS        :32;
}EEPASS_TypeDef;

typedef volatile struct
{
    volatile uint32_t           INT        :1;
    const    uint32_t           reserved   :31;
}EEINT_TypeDef;


typedef volatile struct
{
    const    uint32_t           reserved   :1;
    volatile uint32_t           H1         :1;
    volatile uint32_t           H2         :1;
    volatile uint32_t           H3         :1;
    volatile uint32_t           H4         :1;
    volatile uint32_t           H5         :1;
    volatile uint32_t           H6         :1;
    volatile uint32_t           H7         :1;
    volatile uint32_t           H8         :1;
    volatile uint32_t           H9         :1;
    volatile uint32_t           H10        :1;
    volatile uint32_t           H11        :1;
    volatile uint32_t           H12        :1;
    volatile uint32_t           H13        :1;
    volatile uint32_t           H14        :1;
    volatile uint32_t           H15        :1;
    volatile uint32_t           H16        :1;
    volatile uint32_t           H17        :1;
    volatile uint32_t           H18        :1;
    volatile uint32_t           H19        :1;
    volatile uint32_t           H20        :1;
    volatile uint32_t           H21        :1;
    volatile uint32_t           H22        :1;
    volatile uint32_t           H23        :1;
    volatile uint32_t           H24        :1;
    volatile uint32_t           H25        :1;
    volatile uint32_t           H26        :1;
    volatile uint32_t           H27        :1;
    volatile uint32_t           H28        :1;
    volatile uint32_t           H29        :1;
    volatile uint32_t           H30        :1;
    volatile uint32_t           H31        :1;
    volatile uint32_t           H32        :1;
}EEHIDE_TypeDef;

typedef volatile struct
{
    volatile uint32_t           ME         :1;
    const    uint32_t           reserved   :15;
    volatile uint32_t           KEY        :16;
}EEDBGME_TypeDef;

typedef volatile struct
{
    volatile const uint32_t     SIZE       :5;
    const    uint32_t           reserved   :27;
}EEPROMPP_TypeDef;

typedef volatile struct
{
    volatile const uint32_t     WORDCNT    [16];
    volatile const uint32_t     BLKCNT     [11];
    const          uint32_t     reserved   [5];
}BITBANDING_EESIZE_TypeDef;

typedef volatile struct
{
    volatile uint32_t   BLOCK       [16];
    const    uint32_t   reserved    [16];
}BITBANDING_EEBLOCK_TypeDef;

typedef volatile struct
{
    volatile uint32_t   OFFSET      [4];
    const    uint32_t   reserved    [28];
}BITBANDING_EEOFFSET_TypeDef;

typedef volatile struct
{
    volatile uint32_t   VALUE      [32];
}BITBANDING_EERDWR_TypeDef;

typedef volatile struct
{
    volatile uint32_t   VALUE      [32];
}BITBANDING_EERDWRINC_TypeDef;


typedef volatile struct
{
    volatile const uint32_t     WORKING      ;
    const          uint32_t     reserved     ;
    volatile const uint32_t     WKERASE      ;
    volatile const uint32_t     WKCOPY       ;
    volatile const uint32_t     NOPERM       ;
    volatile const uint32_t     WRBUSY       ;
    const    uint32_t           reserved1    [26];
}BITBANDING_EEDONE_TypeDef;

typedef volatile struct
{
    volatile uint32_t           START        ;
    volatile const uint32_t     EREQ         ;
    volatile const uint32_t     ERETRY       ;
    volatile const uint32_t     PRETRY       ;
    const    uint32_t           reserved     [28];
}BITBANDING_EESUPP_TypeDef;

typedef volatile struct
{
    volatile uint32_t           UNLOCK        [32];
}BITBANDING_EEUNLOCK_TypeDef;

typedef volatile struct
{
    volatile uint32_t           PROT        [3];
    volatile uint32_t           ACC         ;
    const    uint32_t           reserved    [28];
}BITBANDING_EEPROT_TypeDef;

typedef volatile struct
{
    volatile uint32_t           PASS        [32];
}BITBANDING_EEPASS_TypeDef;

typedef volatile struct
{
    volatile uint32_t           INT        ;
    const    uint32_t           reserved   [31];
}BITBANDING_EEINT_TypeDef;


typedef volatile struct
{
    const    uint32_t           reserved   ;
    volatile uint32_t           H1         ;
    volatile uint32_t           H2         ;
    volatile uint32_t           H3         ;
    volatile uint32_t           H4         ;
    volatile uint32_t           H5         ;
    volatile uint32_t           H6         ;
    volatile uint32_t           H7         ;
    volatile uint32_t           H8         ;
    volatile uint32_t           H9         ;
    volatile uint32_t           H10        ;
    volatile uint32_t           H11        ;
    volatile uint32_t           H12        ;
    volatile uint32_t           H13        ;
    volatile uint32_t           H14        ;
    volatile uint32_t           H15        ;
    volatile uint32_t           H16        ;
    volatile uint32_t           H17        ;
    volatile uint32_t           H18        ;
    volatile uint32_t           H19        ;
    volatile uint32_t           H20        ;
    volatile uint32_t           H21        ;
    volatile uint32_t           H22        ;
    volatile uint32_t           H23        ;
    volatile uint32_t           H24        ;
    volatile uint32_t           H25        ;
    volatile uint32_t           H26        ;
    volatile uint32_t           H27        ;
    volatile uint32_t           H28        ;
    volatile uint32_t           H29        ;
    volatile uint32_t           H30        ;
    volatile uint32_t           H31        ;
    volatile uint32_t           H32        ;
}BITBANDING_EEHIDE_TypeDef;

typedef volatile struct
{
    volatile uint32_t           ME         ;
    const    uint32_t           reserved   [15];
    volatile uint32_t           KEY        [16];
}BITBANDING_EEDBGME_TypeDef;

typedef volatile struct
{
    volatile const uint32_t     SIZE       [5];
    const    uint32_t           reserved   [27];
}BITBANDING_EEPROMPP_TypeDef;


typedef volatile struct
{
    union
    {
        volatile const uint32_t     EESIZE;
        EESIZE_TypeDef              EESIZE_Bit;
    };
    union
    {
        volatile uint32_t           EEBLOCK;
        EEBLOCK_TypeDef             EEBLOCK_Bit;
    };
    union
    {
        volatile uint32_t           EEOFFSET;
        EEOFFSET_TypeDef            EEOFFSET_Bit;
    };
    const uint32_t                  reserved[1];
    union
    {
        volatile uint32_t           EERDWR;
        EERDWR_TypeDef              EERDWR_Bit;
    };
    union
    {
        volatile uint32_t           EERDWRINC;
        EERDWRINC_TypeDef           EERDWRINC_Bit;
    };
    union
    {
        volatile const uint32_t     EEDONE;
        EEDONE_TypeDef              EEDONE_Bit;
    };
    union
    {
        volatile uint32_t           EESUPP;
        EESUPP_TypeDef              EESUPP_Bit;
    };
    union
    {
        volatile uint32_t           EEUNLOCK;
        EEUNLOCK_TypeDef            EEUNLOCK_Bit;
    };
    const uint32_t                  reserved1[3];
    union
    {
        volatile uint32_t           EEPROT;
        EEPROT_TypeDef              EEPROT_Bit;
    };
    union
    {
        volatile uint32_t           EEPASS0;
        EEPASS_TypeDef             EEPASS0_Bit;
    };
    union
    {
        volatile uint32_t           EEPASS1;
        EEPASS_TypeDef             EEPASS1_Bit;
    };
    union
    {
        volatile uint32_t           EEPASS2;
        EEPASS_TypeDef             EEPASS2_Bit;
    };
    union
    {
        volatile uint32_t           EEINT;
        EEINT_TypeDef               EEINT_Bit;
    };
    const uint32_t                  reserved2[3];
    union
    {
        volatile uint32_t           EEHIDE;
        EEHIDE_TypeDef              EEHIDE_Bit;
    };
    const uint32_t                  reserved3[11];
    union
    {
        volatile uint32_t           EEDBGME;
        EEDBGME_TypeDef             EEDBGME_Bit;
    };
    const uint32_t                  reserved4[975];
    union
    {
        volatile const uint32_t     EEPROMPP;
        EEPROMPP_TypeDef            EEPROMPP_Bit;
    };
}EEPROM_TypeDef;


typedef volatile struct
{
    union
    {
        volatile const uint32_t     EESIZE[32];
        BITBANDING_EESIZE_TypeDef   EESIZE_Bit;
    };
    union
    {
        volatile uint32_t           EEBLOCK[32];
        BITBANDING_EEBLOCK_TypeDef  EEBLOCK_Bit;
    };
    union
    {
        volatile uint32_t           EEOFFSET[32];
        BITBANDING_EEOFFSET_TypeDef EEOFFSET_Bit;
    };
    const uint32_t                  reserved[1*32];
    union
    {
        volatile uint32_t           EERDWR[32];
        BITBANDING_EERDWR_TypeDef   EERDWR_Bit;
    };
    union
    {
        volatile uint32_t           EERDWRINC[32];
        BITBANDING_EERDWRINC_TypeDef           EERDWRINC_Bit;
    };
    union
    {
        volatile const uint32_t     EEDONE[32];
        BITBANDING_EEDONE_TypeDef   EEDONE_Bit;
    };
    union
    {
        volatile uint32_t           EESUPP[32];
        BITBANDING_EESUPP_TypeDef   EESUPP_Bit;
    };
    union
    {
        volatile uint32_t           EEUNLOCK[32];
        BITBANDING_EEUNLOCK_TypeDef EEUNLOCK_Bit;
    };
    const uint32_t                  reserved1[3*32];
    union
    {
        volatile uint32_t           EEPROT[32];
        BITBANDING_EEPROT_TypeDef   EEPROT_Bit;
    };
    union
    {
        volatile uint32_t           EEPASS0[32];
        BITBANDING_EEPASS_TypeDef   EEPASS0_Bit;
    };
    union
    {
        volatile uint32_t           EEPASS1[32];
        BITBANDING_EEPASS_TypeDef   EEPASS1_Bit;
    };
    union
    {
        volatile uint32_t           EEPASS2[32];
        BITBANDING_EEPASS_TypeDef   EEPASS2_Bit;
    };
    union
    {
        volatile uint32_t           EEINT[32];
        BITBANDING_EEINT_TypeDef    EEINT_Bit;
    };
    const uint32_t                  reserved2[3*32];
    union
    {
        volatile uint32_t           EEHIDE[32];
        BITBANDING_EEHIDE_TypeDef   EEHIDE_Bit;
    };
    const uint32_t                  reserved3[11*32];
    union
    {
        volatile uint32_t           EEDBGME[32];
        BITBANDING_EEDBGME_TypeDef  EEDBGME_Bit;
    };
    const uint32_t                  reserved4[975*32];
    union
    {
        volatile const uint32_t     EEPROMPP[32];
        BITBANDING_EEPROMPP_TypeDef EEPROMPP_Bit;
    };
}EEPROM_BITBANDING_TypeDef;


#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_STRUCT_H_ */
