/*
 * FLASH.h
 *
 *  Created on: 3 feb. 2018
 *      Author: InDev
 */

#ifndef FLASH_H_
#define FLASH_H_


#include <stdint.h>

#define FLASH_BASE            (0x400FD000)
#define FLASH_OFFSET          (0x000FD000)
#define FLASH_LIMIT           (0x00040000)


typedef volatile struct
{
    volatile uint32_t OFFSET    :18;
    const    uint32_t reserved  :14;
}FMA_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA   :32;
}FMD_TypeDef;

typedef volatile struct
{
    volatile uint32_t WRITE   :1;
    volatile uint32_t ERASE   :1;
    volatile uint32_t MERASE  :1;
    volatile uint32_t COMT    :1;
    const    uint32_t reserved:12;
    volatile uint32_t WRKEY   :16;
}FMC_TypeDef;

typedef volatile struct
{
    volatile const uint32_t ARIS     :1;
    volatile const uint32_t PRIS     :1;
    volatile const uint32_t ERIS     :1;
    const    uint32_t       reserved :6;
    volatile const uint32_t VOLTRIS  :1;
    volatile const uint32_t INVDRIS  :1;
    volatile const uint32_t ERRIS    :1;
    const    uint32_t       reserved1:1;
    volatile const uint32_t PROGRIS  :1;
    const    uint32_t       reserved2:18;
}FCRIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t AMASK     :1;
    volatile uint32_t PMASK     :1;
    volatile uint32_t EMASK     :1;
    const    uint32_t reserved  :6;
    volatile uint32_t VOLTMASK  :1;
    volatile uint32_t INVDMASK  :1;
    volatile uint32_t ERMASK    :1;
    const    uint32_t reserved1 :1;
    volatile uint32_t PROGMASK  :1;
    const    uint32_t reserved2 :18;
}FCIM_TypeDef;

typedef volatile struct
{
    volatile uint32_t AMISC     :1;
    volatile uint32_t PMISC     :1;
    volatile uint32_t EMISC     :1;
    const    uint32_t reserved  :6;
    volatile uint32_t VOLTMISC  :1;
    volatile uint32_t INVDMISC  :1;
    volatile uint32_t ERMISC    :1;
    const    uint32_t reserved1 :1;
    volatile uint32_t PROGMISC  :1;
    const    uint32_t reserved2 :18;
}FCMISC_TypeDef;

typedef volatile struct
{
    volatile uint32_t WRBUF   :1;
    const    uint32_t reserved:15;
    volatile uint32_t WRKEY   :16;
}FMC2_TypeDef;

typedef volatile struct
{
    volatile uint32_t FWB0   :1;
    volatile uint32_t FWB1   :1;
    volatile uint32_t FWB2   :1;
    volatile uint32_t FWB3   :1;
    volatile uint32_t FWB4   :1;
    volatile uint32_t FWB5   :1;
    volatile uint32_t FWB6   :1;
    volatile uint32_t FWB7   :1;
    volatile uint32_t FWB8   :1;
    volatile uint32_t FWB9   :1;
    volatile uint32_t FWB10   :1;
    volatile uint32_t FWB11   :1;
    volatile uint32_t FWB12   :1;
    volatile uint32_t FWB13   :1;
    volatile uint32_t FWB14   :1;
    volatile uint32_t FWB15   :1;
    volatile uint32_t FWB16   :1;
    volatile uint32_t FWB17   :1;
    volatile uint32_t FWB18   :1;
    volatile uint32_t FWB19   :1;
    volatile uint32_t FWB20   :1;
    volatile uint32_t FWB21   :1;
    volatile uint32_t FWB22   :1;
    volatile uint32_t FWB23   :1;
    volatile uint32_t FWB24   :1;
    volatile uint32_t FWB25   :1;
    volatile uint32_t FWB26   :1;
    volatile uint32_t FWB27   :1;
    volatile uint32_t FWB28   :1;
    volatile uint32_t FWB29   :1;
    volatile uint32_t FWB30   :1;
    volatile uint32_t FWB31   :1;
}FWBVAL_TypeDef;

typedef volatile struct
{
    volatile uint32_t FWB[32];
}FWBn_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA   :32;
}FWB_TypeDef;

typedef volatile struct
{
volatile const uint32_t SIZE      :16;
const    uint32_t       reserved  :16;
}FSIZE_TypeDef;

typedef volatile struct
{
volatile const uint32_t SIZE      :16;
const    uint32_t       reserved  :16;
}SSIZE_TypeDef;


typedef volatile struct
{
volatile const uint32_t SAFERTOS :1;
const    uint32_t       reserved :31;
}ROMSWMAP_TypeDef;

typedef volatile struct
{
    union
    {
        volatile uint32_t          FMA;
        FMA_TypeDef                     FMA_Bit;
    };
    union
    {
        volatile uint32_t          FMD;
        FMD_TypeDef                     FMD_Bit;
    };
    union
    {
        volatile uint32_t          FMC;
        FMC_TypeDef                     FMC_Bit;
    };
    union
    {
        volatile const uint32_t    FCRIS;
        FCRIS_TypeDef                   FCRIS_Bit;
    };
    union
    {
        volatile uint32_t          FCIM;
        FCIM_TypeDef                    FCIM_Bit;
    };
    union
    {
        volatile uint32_t          FCMISC;
        FCMISC_TypeDef                  FCMISC_Bit;
    };
    const uint32_t                 reserved[2];
    union
    {
        volatile uint32_t          FMC2;
        FMC2_TypeDef                    FMC2_Bit;
    };
    union
    {
        volatile uint32_t          FWBVAL;
        FWBVAL_TypeDef                  FWBVAL_Bit;
    };
    const uint32_t                 reserved1[51];
    volatile uint32_t              FWBn[32];
    const uint32_t                 reserved2[912];
    union
    {
        volatile const uint32_t    FSIZE;
        FSIZE_TypeDef                   FSIZE_Bit;
    };
    union
    {
        volatile const uint32_t    SSIZE;
        SSIZE_TypeDef                   SSIZE_Bit;
    };
    const uint32_t                 reserved3[2];
    union
    {
        volatile const uint32_t    ROMSWMAP;
        ROMSWMAP_TypeDef                ROMSWMAP_Bit;
    };

}FLASH_TypeDef;

#define FLASH                 (((FLASH_TypeDef*)(FLASH_BASE)))





#define FLASH_FMA_OFFSET     (0x0000)
#define FLASH_FMD_OFFSET     (0x0004)
#define FLASH_FMC_OFFSET     (0x0008)
#define FLASH_FCRIS_OFFSET   (0x000C)
#define FLASH_FCIM_OFFSET    (0x0010)
#define FLASH_FCMISC_OFFSET  (0x0014)
#define FLASH_FMC2_OFFSET    (0x0020)
#define FLASH_FWBVAL_OFFSET  (0x0030)
#define FLASH_FWBn_OFFSET    (0x0100)
#define FLASH_FWB0_OFFSET    (0x0100)
#define FLASH_FWB1_OFFSET    (0x0104)
#define FLASH_FWB2_OFFSET    (0x0108)
#define FLASH_FWB3_OFFSET    (0x010C)
#define FLASH_FWB4_OFFSET    (0x0110)
#define FLASH_FWB5_OFFSET    (0x0114)
#define FLASH_FWB6_OFFSET    (0x0118)
#define FLASH_FWB7_OFFSET    (0x011C)
#define FLASH_FWB8_OFFSET    (0x0120)
#define FLASH_FWB9_OFFSET    (0x0124)
#define FLASH_FWB10_OFFSET   (0x0128)
#define FLASH_FWB11_OFFSET   (0x012C)
#define FLASH_FWB12_OFFSET   (0x0130)
#define FLASH_FWB13_OFFSET   (0x0134)
#define FLASH_FWB14_OFFSET   (0x0138)
#define FLASH_FWB15_OFFSET   (0x013C)
#define FLASH_FWB16_OFFSET   (0x0140)
#define FLASH_FWB17_OFFSET   (0x0144)
#define FLASH_FWB18_OFFSET   (0x0148)
#define FLASH_FWB19_OFFSET   (0x014C)
#define FLASH_FWB20_OFFSET   (0x0150)
#define FLASH_FWB21_OFFSET   (0x0154)
#define FLASH_FWB22_OFFSET   (0x0158)
#define FLASH_FWB23_OFFSET   (0x015C)
#define FLASH_FWB24_OFFSET   (0x0160)
#define FLASH_FWB25_OFFSET   (0x0164)
#define FLASH_FWB26_OFFSET   (0x0168)
#define FLASH_FWB27_OFFSET   (0x016C)
#define FLASH_FWB28_OFFSET   (0x0170)
#define FLASH_FWB29_OFFSET   (0x0174)
#define FLASH_FWB30_OFFSET   (0x0178)
#define FLASH_FWB31_OFFSET   (0x017C)
#define FLASH_FSIZE_OFFSET   (0x0FC0)
#define FLASH_SSIZE_OFFSET   (0x0FC4)
#define FLASH_ROMSWMAP_OFFSET (0x0FCC)

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 FMA ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FMA            (((FMA_TypeDef*)(FLASH_BASE+FLASH_FMA_OFFSET )))
#define FLASH_FMA_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FMA_OFFSET)))

//--------
#define FLASH_FMA_R_OFFSET_MASK     (0x0003FFFF)
#define FLASH_FMA_R_OFFSET_BIT      (0)

#define FLASH_FMA_OFFSET_MASK       (0x0003FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 FMD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FMD            (((FMD_TypeDef*)(FLASH_BASE+FLASH_FMD_OFFSET )))
#define FLASH_FMD_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FMD_OFFSET)))

//--------
#define FLASH_FMD_R_DATA_MASK     (0x0003FFFF)
#define FLASH_FMD_R_DATA_BIT      (0)

#define FLASH_FMD_DATA_MASK       (0x0003FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 FMC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FMC            (((FMC_TypeDef*)(FLASH_BASE+FLASH_FMC_OFFSET )))
#define FLASH_FMC_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FMC_OFFSET)))


//--------
#define FLASH_FMC_R_WRITE_MASK          (0x00000001)
#define FLASH_FMC_R_WRITE_BIT           (0)
#define FLASH_FMC_R_WRITE_COMPLETE      (0x00000000)
#define FLASH_FMC_R_WRITE_NOCOMPLETE    (0x00000001)
#define FLASH_FMC_R_WRITE_WRITE         (0x00000001)

#define FLASH_FMC_WRITE_MASK       (0x00000001)
#define FLASH_FMC_WRITE_COMPLETE   (0x00000000)
#define FLASH_FMC_WRITE_NOCOMPLETE (0x00000001)
#define FLASH_FMC_WRITE_WRITE      (0x00000001)
//--------

//--------
#define FLASH_FMC_R_ERASE_MASK          (0x00000002)
#define FLASH_FMC_R_ERASE_BIT           (1)
#define FLASH_FMC_R_ERASE_COMPLETE      (0x00000000)
#define FLASH_FMC_R_ERASE_NOCOMPLETE    (0x00000002)
#define FLASH_FMC_R_ERASE_ERASE         (0x00000002)

#define FLASH_FMC_ERASE_MASK       (0x00000001)
#define FLASH_FMC_ERASE_COMPLETE   (0x00000000)
#define FLASH_FMC_ERASE_NOCOMPLETE (0x00000001)
#define FLASH_FMC_ERASE_ERASE      (0x00000001)
//--------

//--------
#define FLASH_FMC_R_MERASE_MASK          (0x00000004)
#define FLASH_FMC_R_MERASE_BIT           (2)
#define FLASH_FMC_R_MERASE_COMPLETE      (0x00000000)
#define FLASH_FMC_R_MERASE_NOCOMPLETE    (0x00000004)
#define FLASH_FMC_R_MERASE_MERASE        (0x00000004)

#define FLASH_FMC_MERASE_MASK       (0x00000001)
#define FLASH_FMC_MERASE_COMPLETE   (0x00000000)
#define FLASH_FMC_MERASE_NOCOMPLETE (0x00000001)
#define FLASH_FMC_MERASE_MERASE     (0x00000001)
//--------

//--------
#define FLASH_FMC_R_COMT_MASK          (0x00000008)
#define FLASH_FMC_R_COMT_BIT           (3)
#define FLASH_FMC_R_COMT_COMPLETE      (0x00000000)
#define FLASH_FMC_R_COMT_NOCOMPLETE    (0x00000008)
#define FLASH_FMC_R_COMT_WRITE         (0x00000008)

#define FLASH_FMC_COMT_MASK       (0x00000001)
#define FLASH_FMC_COMT_COMPLETE   (0x00000000)
#define FLASH_FMC_COMT_NOCOMPLETE (0x00000001)
#define FLASH_FMC_COMT_WRITE      (0x00000001)
//--------

//--------
#define FLASH_FMC_R_WRKEY_MASK          (0xFFFF0000)
#define FLASH_FMC_R_WRKEY_BIT           (16)
#define FLASH_FMC_R_WRKEY_KEY1          (0xA4420000)
#define FLASH_FMC_R_WRKEY_KEY2          (0x71D50000)

#define FLASH_FMC_WRKEY_MASK       (0x0000FFFF)
#define FLASH_FMC_WRKEY_KEY1       (0x0000A442)
#define FLASH_FMC_WRKEY_KEY2       (0x000071D5)
//--------

#define FLASH_FMC_WRITE_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FMC_OFFSET)*32)+(0*4))))
#define FLASH_FMC_ERASE_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FMC_OFFSET)*32)+(1*4))))
#define FLASH_FMC_MERASE_BB    (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FMC_OFFSET)*32)+(2*4))))
#define FLASH_FMC_COMT_BB      (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FMC_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 FCRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FCRIS            (((FCRIS_TypeDef*)(FLASH_BASE+FLASH_FCRIS_OFFSET )))
#define FLASH_FCRIS_R          (*((volatile const uint32_t *)(FLASH_BASE+FLASH_FCRIS_OFFSET)))

//--------
#define FLASH_FCRIS_R_ARIS_MASK       (0x00000001)
#define FLASH_FCRIS_R_ARIS_BIT        (0)
#define FLASH_FCRIS_R_ARIS_NOACTIVE   (0x00000000)
#define FLASH_FCRIS_R_ARIS_ACTIVE     (0x00000001)

#define FLASH_FCRIS_ARIS_MASK       (0x00000001)
#define FLASH_FCRIS_ARIS_NOACTIVE   (0x00000000)
#define FLASH_FCRIS_ARIS_ACTIVE     (0x00000001)
//--------

//--------
#define FLASH_FCRIS_R_PRIS_MASK       (0x00000002)
#define FLASH_FCRIS_R_PRIS_BIT        (1)
#define FLASH_FCRIS_R_PRIS_NOACTIVE   (0x00000000)
#define FLASH_FCRIS_R_PRIS_ACTIVE     (0x00000002)

#define FLASH_FCRIS_PRIS_MASK       (0x00000001)
#define FLASH_FCRIS_PRIS_NOACTIVE   (0x00000000)
#define FLASH_FCRIS_PRIS_ACTIVE     (0x00000001)
//--------

//--------
#define FLASH_FCRIS_R_ERIS_MASK       (0x00000004)
#define FLASH_FCRIS_R_ERIS_BIT        (2)
#define FLASH_FCRIS_R_ERIS_NOACTIVE   (0x00000000)
#define FLASH_FCRIS_R_ERIS_ACTIVE     (0x00000004)

#define FLASH_FCRIS_ERIS_MASK       (0x00000001)
#define FLASH_FCRIS_ERIS_NOACTIVE   (0x00000000)
#define FLASH_FCRIS_ERIS_ACTIVE     (0x00000001)
//--------

//--------
#define FLASH_FCRIS_R_VOLTRIS_MASK       (0x00000020)
#define FLASH_FCRIS_R_VOLTRIS_BIT        (9)
#define FLASH_FCRIS_R_VOLTRIS_NOACTIVE   (0x00000000)
#define FLASH_FCRIS_R_VOLTRIS_ACTIVE     (0x00000020)

#define FLASH_FCRIS_VOLTRIS_MASK       (0x00000001)
#define FLASH_FCRIS_VOLTRIS_NOACTIVE   (0x00000000)
#define FLASH_FCRIS_VOLTRIS_ACTIVE     (0x00000001)
//--------

//--------
#define FLASH_FCRIS_R_INVDRIS_MASK       (0x00000040)
#define FLASH_FCRIS_R_INVDRIS_BIT        (10)
#define FLASH_FCRIS_R_INVDRIS_NOACTIVE   (0x00000000)
#define FLASH_FCRIS_R_INVDRIS_ACTIVE     (0x00000040)

#define FLASH_FCRIS_INVDRIS_MASK       (0x00000001)
#define FLASH_FCRIS_INVDRIS_NOACTIVE   (0x00000000)
#define FLASH_FCRIS_INVDRIS_ACTIVE     (0x00000001)
//--------

//--------
#define FLASH_FCRIS_R_ERRIS_MASK       (0x00000080)
#define FLASH_FCRIS_R_ERRIS_BIT        (11)
#define FLASH_FCRIS_R_ERRIS_NOACTIVE   (0x00000000)
#define FLASH_FCRIS_R_ERRIS_ACTIVE     (0x00000080)

#define FLASH_FCRIS_ERRIS_MASK       (0x00000001)
#define FLASH_FCRIS_ERRIS_NOACTIVE   (0x00000000)
#define FLASH_FCRIS_ERRIS_ACTIVE     (0x00000001)
//--------

//--------
#define FLASH_FCRIS_R_PROGRIS_MASK       (0x00000200)
#define FLASH_FCRIS_R_PROGRIS_BIT        (13)
#define FLASH_FCRIS_R_PROGRIS_NOACTIVE   (0x00000000)
#define FLASH_FCRIS_R_PROGRIS_ACTIVE     (0x00000200)

#define FLASH_FCRIS_PROGRIS_MASK       (0x00000001)
#define FLASH_FCRIS_PROGRIS_NOACTIVE   (0x00000000)
#define FLASH_FCRIS_PROGRIS_ACTIVE     (0x00000001)
//--------

#define FLASH_FCRIS_ARIS_BB     (*((volatile const uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(0*4))))
#define FLASH_FCRIS_PRIS_BB     (*((volatile const uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(1*4))))
#define FLASH_FCRIS_ERIS_BB     (*((volatile const uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(2*4))))
#define FLASH_FCRIS_VOLTRIS_BB  (*((volatile const uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(9*4))))
#define FLASH_FCRIS_INVDRIS_BB  (*((volatile const uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(10*4))))
#define FLASH_FCRIS_ERRIS_BB    (*((volatile const uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(11*4))))
#define FLASH_FCRIS_PROGRIS_BB  (*((volatile const uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(13*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 FCIM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FCIM            (((FCIM_TypeDef*)(FLASH_BASE+FLASH_FCIM_OFFSET )))
#define FLASH_FCIM_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FCIM_OFFSET)))



//--------
#define FLASH_FCIM_R_AMASK_MASK       (0x00000001)
#define FLASH_FCIM_R_AMASK_BIT        (0)
#define FLASH_FCIM_R_AMASK_DIS        (0x00000000)
#define FLASH_FCIM_R_AMASK_EN         (0x00000001)

#define FLASH_FCIM_AMASK_MASK       (0x00000001)
#define FLASH_FCIM_AMASK_DIS        (0x00000000)
#define FLASH_FCIM_AMASK_EN         (0x00000001)
//--------

//--------
#define FLASH_FCIM_R_PMASK_MASK       (0x00000002)
#define FLASH_FCIM_R_PMASK_BIT        (1)
#define FLASH_FCIM_R_PMASK_DIS        (0x00000000)
#define FLASH_FCIM_R_PMASK_EN         (0x00000002)

#define FLASH_FCIM_PMASK_MASK       (0x00000001)
#define FLASH_FCIM_PMASK_DIS        (0x00000000)
#define FLASH_FCIM_PMASK_EN         (0x00000001)
//--------

//--------
#define FLASH_FCIM_R_EMASK_MASK       (0x00000004)
#define FLASH_FCIM_R_EMASK_BIT        (2)
#define FLASH_FCIM_R_EMASK_DIS        (0x00000000)
#define FLASH_FCIM_R_EMASK_EN         (0x00000004)

#define FLASH_FCIM_EMASK_MASK       (0x00000001)
#define FLASH_FCIM_EMASK_DIS        (0x00000000)
#define FLASH_FCIM_EMASK_EN         (0x00000001)
//--------

//--------
#define FLASH_FCIM_R_VOLTMASK_MASK       (0x00000020)
#define FLASH_FCIM_R_VOLTMASK_BIT        (9)
#define FLASH_FCIM_R_VOLTMASK_DIS        (0x00000000)
#define FLASH_FCIM_R_VOLTMASK_EN         (0x00000020)

#define FLASH_FCIM_VOLTMASK_MASK       (0x00000001)
#define FLASH_FCIM_VOLTMASK_DIS        (0x00000000)
#define FLASH_FCIM_VOLTMASK_EN         (0x00000001)
//--------

//--------
#define FLASH_FCIM_R_INVDMASK_MASK       (0x00000040)
#define FLASH_FCIM_R_INVDMASK_BIT        (10)
#define FLASH_FCIM_R_INVDMASK_DIS        (0x00000000)
#define FLASH_FCIM_R_INVDMASK_EN         (0x00000040)

#define FLASH_FCIM_INVDMASK_MASK       (0x00000001)
#define FLASH_FCIM_INVDMASK_DIS        (0x00000000)
#define FLASH_FCIM_INVDMASK_EN         (0x00000001)
//--------

//--------
#define FLASH_FCIM_R_ERMASK_MASK       (0x00000080)
#define FLASH_FCIM_R_ERMASK_BIT        (11)
#define FLASH_FCIM_R_ERMASK_DIS        (0x00000000)
#define FLASH_FCIM_R_ERMASK_EN         (0x00000080)

#define FLASH_FCIM_ERMASK_MASK       (0x00000001)
#define FLASH_FCIM_ERMASK_DIS        (0x00000000)
#define FLASH_FCIM_ERMASK_EN         (0x00000001)
//--------

//--------
#define FLASH_FCIM_R_PROGMASK_MASK       (0x00000200)
#define FLASH_FCIM_R_PROGMASK_BIT        (13)
#define FLASH_FCIM_R_PROGMASK_DIS        (0x00000000)
#define FLASH_FCIM_R_PROGMASK_EN         (0x00000200)

#define FLASH_FCIM_PROGMASK_MASK       (0x00000001)
#define FLASH_FCIM_PROGMASK_DIS        (0x00000000)
#define FLASH_FCIM_PROGMASK_EN         (0x00000001)
//--------


#define FLASH_FCIM_AMASK_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(0*4))))
#define FLASH_FCIM_PMASK_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(1*4))))
#define FLASH_FCIM_EMASK_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(2*4))))
#define FLASH_FCIM_VOLTMASK_BB  (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(9*4))))
#define FLASH_FCIM_INVDMASK_BB  (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(10*4))))
#define FLASH_FCIM_ERMASK_BB    (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(11*4))))
#define FLASH_FCIM_PROGMASK_BB  (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(13*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 FCMISC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FCMISC            (((FCMISC_TypeDef*)(FLASH_BASE+FLASH_FCMISC_OFFSET )))
#define FLASH_FCMISC_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FCMISC_OFFSET)))

//--------
#define FLASH_FCMISC_R_AMISC_MASK       (0x00000001)
#define FLASH_FCMISC_R_AMISC_BIT        (0)
#define FLASH_FCMISC_R_AMISC_NOOCCUR    (0x00000000)
#define FLASH_FCMISC_R_AMISC_OCCUR      (0x00000001)
#define FLASH_FCMISC_R_AMISC_CLEAR      (0x00000001)

#define FLASH_FCMISC_AMISC_MASK       (0x00000001)
#define FLASH_FCMISC_AMISC_NOOCCUR    (0x00000000)
#define FLASH_FCMISC_AMISC_OCCUR      (0x00000001)
#define FLASH_FCMISC_AMISC_CLEAR      (0x00000001)
//--------

//--------
#define FLASH_FCMISC_R_PMISC_MASK       (0x00000002)
#define FLASH_FCMISC_R_PMISC_BIT        (1)
#define FLASH_FCMISC_R_PMISC_NOOCCUR    (0x00000000)
#define FLASH_FCMISC_R_PMISC_OCCUR      (0x00000002)
#define FLASH_FCMISC_R_PMISC_CLEAR      (0x00000002)

#define FLASH_FCMISC_PMISC_MASK       (0x00000001)
#define FLASH_FCMISC_PMISC_NOOCCUR    (0x00000000)
#define FLASH_FCMISC_PMISC_OCCUR      (0x00000001)
#define FLASH_FCMISC_PMISC_CLEAR      (0x00000001)
//--------

//--------
#define FLASH_FCMISC_R_EMISC_MASK       (0x00000004)
#define FLASH_FCMISC_R_EMISC_BIT        (2)
#define FLASH_FCMISC_R_EMISC_NOOCCUR    (0x00000000)
#define FLASH_FCMISC_R_EMISC_OCCUR      (0x00000004)
#define FLASH_FCMISC_R_EMISC_CLEAR      (0x00000004)

#define FLASH_FCMISC_EMISC_MASK       (0x00000001)
#define FLASH_FCMISC_EMISC_NOOCCUR    (0x00000000)
#define FLASH_FCMISC_EMISC_OCCUR      (0x00000001)
#define FLASH_FCMISC_EMISC_CLEAR      (0x00000001)
//--------

//--------
#define FLASH_FCMISC_R_VOLTMISC_MASK       (0x00000020)
#define FLASH_FCMISC_R_VOLTMISC_BIT        (9)
#define FLASH_FCMISC_R_VOLTMISC_NOOCCUR    (0x00000000)
#define FLASH_FCMISC_R_VOLTMISC_OCCUR      (0x00000020)
#define FLASH_FCMISC_R_VOLTMISC_CLEAR      (0x00000020)

#define FLASH_FCMISC_VOLTMISC_MASK       (0x00000001)
#define FLASH_FCMISC_VOLTMISC_NOOCCUR    (0x00000000)
#define FLASH_FCMISC_VOLTMISC_OCCUR      (0x00000001)
#define FLASH_FCMISC_VOLTMISC_CLEAR      (0x00000001)
//--------

//--------
#define FLASH_FCMISC_R_INVDMISC_MASK       (0x00000040)
#define FLASH_FCMISC_R_INVDMISC_BIT        (10)
#define FLASH_FCMISC_R_INVDMISC_NOOCCUR    (0x00000000)
#define FLASH_FCMISC_R_INVDMISC_OCCUR      (0x00000040)
#define FLASH_FCMISC_R_INVDMISC_CLEAR      (0x00000040)

#define FLASH_FCMISC_INVDMISC_MASK       (0x00000001)
#define FLASH_FCMISC_INVDMISC_NOOCCUR    (0x00000000)
#define FLASH_FCMISC_INVDMISC_OCCUR      (0x00000001)
#define FLASH_FCMISC_INVDMISC_CLEAR      (0x00000001)
//--------

//--------
#define FLASH_FCMISC_R_ERMISC_MASK       (0x00000080)
#define FLASH_FCMISC_R_ERMISC_BIT        (11)
#define FLASH_FCMISC_R_ERMISC_NOOCCUR    (0x00000000)
#define FLASH_FCMISC_R_ERMISC_OCCUR      (0x00000080)
#define FLASH_FCMISC_R_ERMISC_CLEAR      (0x00000080)

#define FLASH_FCMISC_ERMISC_MASK       (0x00000001)
#define FLASH_FCMISC_ERMISC_NOOCCUR    (0x00000000)
#define FLASH_FCMISC_ERMISC_OCCUR      (0x00000001)
#define FLASH_FCMISC_ERMISC_CLEAR      (0x00000001)
//--------

//--------
#define FLASH_FCMISC_R_PROGMISC_MASK       (0x0000200)
#define FLASH_FCMISC_R_PROGMISC_BIT        (13)
#define FLASH_FCMISC_R_PROGMISC_NOOCCUR    (0x00000000)
#define FLASH_FCMISC_R_PROGMISC_OCCUR      (0x00000200)
#define FLASH_FCMISC_R_PROGMISC_CLEAR      (0x00000200)

#define FLASH_FCMISC_PROGMISC_MASK       (0x00000001)
#define FLASH_FCMISC_PROGMISC_NOOCCUR    (0x00000000)
#define FLASH_FCMISC_PROGMISC_OCCUR      (0x00000001)
#define FLASH_FCMISC_PROGMISC_CLEAR      (0x00000001)
//--------

#define FLASH_FCMISC_AMISC_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(0*4))))
#define FLASH_FCMISC_PMISC_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(1*4))))
#define FLASH_FCMISC_EMISC_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(2*4))))
#define FLASH_FCMISC_VOLTMISC_BB  (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(9*4))))
#define FLASH_FCMISC_INVDMISC_BB  (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(10*4))))
#define FLASH_FCMISC_ERMISC_BB    (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(11*4))))
#define FLASH_FCMISC_PROGMISC_BB  (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(13*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 FMC2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FMC2            (((FMC2_TypeDef*)(FLASH_BASE+FLASH_FMC2_OFFSET )))
#define FLASH_FMC2_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FMC2_OFFSET)))



//--------
#define FLASH_FMC2_R_WRBUF_MASK          (0x00000001)
#define FLASH_FMC2_R_WRBUF_BIT           (0)
#define FLASH_FMC2_R_WRBUF_COMPLETE      (0x00000000)
#define FLASH_FMC2_R_WRBUF_NOCOMPLETE    (0x00000001)
#define FLASH_FMC2_R_WRBUF_WRITE         (0x00000001)

#define FLASH_FMC2_WRBUF_MASK       (0x00000001)
#define FLASH_FMC2_WRBUF_COMPLETE   (0x00000000)
#define FLASH_FMC2_WRBUF_NOCOMPLETE (0x00000001)
#define FLASH_FMC2_WRBUF_WRITE      (0x00000001)
//--------

//--------
#define FLASH_FMC2_R_WRKEY_MASK          (0xFFFF0000)
#define FLASH_FMC2_R_WRKEY_BIT           (16)
#define FLASH_FMC2_R_WRKEY_KEY1          (0xA4420000)
#define FLASH_FMC2_R_WRKEY_KEY2          (0x71D50000)

#define FLASH_FMC2_WRKEY_MASK       (0x0000FFFF)
#define FLASH_FMC2_WRKEY_KEY1       (0x0000A442)
#define FLASH_FMC2_WRKEY_KEY2       (0x000071D5)
//--------

#define FLASH_FMC2_WRBUF_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FMC2_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 FWBVAL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FWBVAL            (((FWBVAL_TypeDef*)(FLASH_BASE+FLASH_FWBVAL_OFFSET )))
#define FLASH_FWBVAL_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWBVAL_OFFSET)))

#define FLASH_FWBVAL_FWB0_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(0*4))))
#define FLASH_FWBVAL_FWB1_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(1*4))))
#define FLASH_FWBVAL_FWB2_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(2*4))))
#define FLASH_FWBVAL_FWB3_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(3*4))))
#define FLASH_FWBVAL_FWB4_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(4*4))))
#define FLASH_FWBVAL_FWB5_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(5*4))))
#define FLASH_FWBVAL_FWB6_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(6*4))))
#define FLASH_FWBVAL_FWB7_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(7*4))))
#define FLASH_FWBVAL_FWB8_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(8*4))))
#define FLASH_FWBVAL_FWB9_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(9*4))))
#define FLASH_FWBVAL_FWB10_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(10*4))))
#define FLASH_FWBVAL_FWB11_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(11*4))))
#define FLASH_FWBVAL_FWB12_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(12*4))))
#define FLASH_FWBVAL_FWB13_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(13*4))))
#define FLASH_FWBVAL_FWB14_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(14*4))))
#define FLASH_FWBVAL_FWB15_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(15*4))))
#define FLASH_FWBVAL_FWB16_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(16*4))))
#define FLASH_FWBVAL_FWB17_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(17*4))))
#define FLASH_FWBVAL_FWB18_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(18*4))))
#define FLASH_FWBVAL_FWB19_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(19*4))))
#define FLASH_FWBVAL_FWB20_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(20*4))))
#define FLASH_FWBVAL_FWB21_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(21*4))))
#define FLASH_FWBVAL_FWB22_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(22*4))))
#define FLASH_FWBVAL_FWB23_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(23*4))))
#define FLASH_FWBVAL_FWB24_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(24*4))))
#define FLASH_FWBVAL_FWB25_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(25*4))))
#define FLASH_FWBVAL_FWB26_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(26*4))))
#define FLASH_FWBVAL_FWB27_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(27*4))))
#define FLASH_FWBVAL_FWB28_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(28*4))))
#define FLASH_FWBVAL_FWB29_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(29*4))))
#define FLASH_FWBVAL_FWB30_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(30*4))))
#define FLASH_FWBVAL_FWB31_BB     (*((volatile uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(31*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// FWBn ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_FWBn            (((FWBn_TypeDef*)(FLASH_BASE+FLASH_FWBn_OFFSET )))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 9 FWB0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_FWB0            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB0_OFFSET )))
#define FLASH_FWB0_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB0_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 10 FWB1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FWB1            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB1_OFFSET )))
#define FLASH_FWB1_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB1_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 11 FWB2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FWB2            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB2_OFFSET )))
#define FLASH_FWB2_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB2_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 12 FWB3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_FWB3            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB3_OFFSET )))
#define FLASH_FWB3_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB3_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 13 FWB4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define FLASH_FWB4            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB4_OFFSET )))
#define FLASH_FWB4_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB4_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 14 FWB5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_FWB5            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB5_OFFSET )))
#define FLASH_FWB5_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB5_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 15 FWB6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_FWB6            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB6_OFFSET )))
#define FLASH_FWB6_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB6_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 16 FWB7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_FWB7            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB7_OFFSET )))
#define FLASH_FWB7_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB7_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 17 FWB8 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FWB8            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB8_OFFSET )))
#define FLASH_FWB8_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB8_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 18 FWB9 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_FWB9            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB9_OFFSET )))
#define FLASH_FWB9_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB9_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 19 FWB10 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_FWB10            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB10_OFFSET )))
#define FLASH_FWB10_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB10_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 20 FWB11 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_FWB11            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB11_OFFSET )))
#define FLASH_FWB11_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB11_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 21 FWB12 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define FLASH_FWB12            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB12_OFFSET )))
#define FLASH_FWB12_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB12_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 22 FWB13 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FWB13            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB13_OFFSET )))
#define FLASH_FWB13_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB13_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 23 FWB14 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_FWB14            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB14_OFFSET )))
#define FLASH_FWB14_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB14_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 24 FWB15 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FWB15            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB15_OFFSET )))
#define FLASH_FWB15_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB15_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 25 FWB16 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_FWB16            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB16_OFFSET )))
#define FLASH_FWB16_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB16_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 26 FWB17 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_FWB17            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB17_OFFSET )))
#define FLASH_FWB17_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB17_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 27 FWB18 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_FWB18            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB18_OFFSET )))
#define FLASH_FWB18_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB18_OFFSET)))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 28 FWB19 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FWB19            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB19_OFFSET )))
#define FLASH_FWB19_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB19_OFFSET)))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 29 FWB20 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////




#define FLASH_FWB20            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB20_OFFSET )))
#define FLASH_FWB20_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB20_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 30 FWB21 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////




#define FLASH_FWB21            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB21_OFFSET )))
#define FLASH_FWB21_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB21_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 31 FWB22 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FWB22            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB22_OFFSET )))
#define FLASH_FWB22_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB22_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 32 FWB23 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FWB23            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB23_OFFSET )))
#define FLASH_FWB23_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB23_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 33 FWB24 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FWB24            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB24_OFFSET )))
#define FLASH_FWB24_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB24_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 34 FWB25 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FWB25            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB25_OFFSET )))
#define FLASH_FWB25_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB25_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 35 FWB26 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FWB26            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB26_OFFSET )))
#define FLASH_FWB26_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB26_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 36 FWB27 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define FLASH_FWB27            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB27_OFFSET )))
#define FLASH_FWB27_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB27_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 37 FWB28 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FLASH_FWB28            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB28_OFFSET )))
#define FLASH_FWB28_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB28_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 38 FWB29 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_FWB29            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB29_OFFSET )))
#define FLASH_FWB29_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB29_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 39 FWB30 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_FWB30            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB30_OFFSET )))
#define FLASH_FWB30_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB30_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 40 FWB31 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_FWB31            (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB31_OFFSET )))
#define FLASH_FWB31_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB31_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 41 FSIZE ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_FSIZE            (((FSIZE_TypeDef*)(FLASH_BASE+FLASH_FSIZE_OFFSET )))
#define FLASH_FSIZE_R          (*((volatile const uint32_t *)(FLASH_BASE+FLASH_FSIZE_OFFSET)))


//--------
#define FLASH_FSIZE_R_SIZE_MASK     (0x0000FFFF)
#define FLASH_FSIZE_R_SIZE_BIT      (0)
#define FLASH_FSIZE_R_SIZE_256KB    (0x0000007F)

#define FLASH_FSIZE_SIZE_MASK       (0x0000FFFF)
#define FLASH_FSIZE_SIZE_256KB      (0x0000007F)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 42 SSIZE ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_SSIZE            (((SSIZE_TypeDef*)(FLASH_BASE+FLASH_SSIZE_OFFSET )))
#define FLASH_SSIZE_R          (*((volatile const uint32_t *)(FLASH_BASE+FLASH_SSIZE_OFFSET)))

//--------
#define FLASH_SSIZE_R_SIZE_MASK     (0x0000FFFF)
#define FLASH_SSIZE_R_SIZE_BIT      (0)
#define FLASH_SSIZE_R_SIZE_32KB     (0x0000007F)

#define FLASH_SSIZE_SIZE_MASK       (0x0000FFFF)
#define FLASH_SSIZE_SIZE_32KB       (0x0000007F)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 43 ROMSWMAP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FLASH_ROMSWMAP            (((ROMSWMAP_TypeDef*)(FLASH_BASE+FLASH_ROMSWMAP_OFFSET )))
#define FLASH_ROMSWMAP_R          (*((volatile const uint32_t *)(FLASH_BASE+FLASH_ROMSWMAP_OFFSET)))


//--------
#define FLASH_ROMSWMAP_R_SAFERTOS_MASK      (0x00000001)
#define FLASH_ROMSWMAP_R_SAFERTOS_BIT       (0)
#define FLASH_ROMSWMAP_R_SAFERTOS_NOPRESENT (0x00000000)
#define FLASH_ROMSWMAP_R_SAFERTOS_PRESENT   (0x00000001)

#define FLASH_ROMSWMAP_SAFERTOS_MASK       (0x00000001)
#define FLASH_ROMSWMAP_SAFERTOS_NOPRESENT  (0x00000000)
#define FLASH_ROMSWMAP_SAFERTOS_PRESENT    (0x00000001)
//--------

#define FLASH_ROMSWMAP_SAFERTOS_BB     (*((volatile const uint32_t *)(0x42000000+((FLASH_OFFSET+FLASH_ROMSWMAP_OFFSET)*32)+(0*4))))



int32_t FLASH_Write(int32_t data, int32_t address);
int32_t FLASH_ErasePage(int32_t address);
int32_t FLASH_Erase(void);
int32_t FLASH_WriteBuf(int32_t* data,int32_t* pos,int32_t cant, int32_t address);
int32_t FLASH_ErasePagePos(int32_t page);

#endif /* FLASH_H_ */
