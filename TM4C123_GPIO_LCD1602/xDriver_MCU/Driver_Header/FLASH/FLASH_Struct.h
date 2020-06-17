/*
 * FLASH_Strcut.h
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_STRUCT_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_STRUCT_H_

#include <stdint.h>

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
    volatile uint32_t OFFSET    [18];
    const    uint32_t reserved  [14];
}BITBANDING_FMA_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA   [32];
}BITBANDING_FMD_TypeDef;

typedef volatile struct
{
    volatile uint32_t WRITE   ;
    volatile uint32_t ERASE   ;
    volatile uint32_t MERASE  ;
    volatile uint32_t COMT    ;
    const    uint32_t reserved[12];
    volatile uint32_t WRKEY   [16];
}BITBANDING_FMC_TypeDef;

typedef volatile struct
{
    volatile const uint32_t ARIS     ;
    volatile const uint32_t PRIS     ;
    volatile const uint32_t ERIS     ;
    const    uint32_t       reserved [6];
    volatile const uint32_t VOLTRIS  ;
    volatile const uint32_t INVDRIS  ;
    volatile const uint32_t ERRIS    ;
    const    uint32_t       reserved1;
    volatile const uint32_t PROGRIS  ;
    const    uint32_t       reserved2[18];
}BITBANDING_FCRIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t AMASK     ;
    volatile uint32_t PMASK     ;
    volatile uint32_t EMASK     ;
    const    uint32_t reserved  [6];
    volatile uint32_t VOLTMASK  ;
    volatile uint32_t INVDMASK  ;
    volatile uint32_t ERMASK    ;
    const    uint32_t reserved1 ;
    volatile uint32_t PROGMASK  ;
    const    uint32_t reserved2 [18];
}BITBANDING_FCIM_TypeDef;

typedef volatile struct
{
    volatile uint32_t AMISC     ;
    volatile uint32_t PMISC     ;
    volatile uint32_t EMISC     ;
    const    uint32_t reserved  [6];
    volatile uint32_t VOLTMISC  ;
    volatile uint32_t INVDMISC  ;
    volatile uint32_t ERMISC    ;
    const    uint32_t reserved1 ;
    volatile uint32_t PROGMISC  ;
    const    uint32_t reserved2 [18];
}BITBANDING_FCMISC_TypeDef;

typedef volatile struct
{
    volatile uint32_t WRBUF   ;
    const    uint32_t reserved[15];
    volatile uint32_t WRKEY   [16];
}BITBANDING_FMC2_TypeDef;

typedef volatile struct
{
    volatile uint32_t FWB0   ;
    volatile uint32_t FWB1   ;
    volatile uint32_t FWB2   ;
    volatile uint32_t FWB3   ;
    volatile uint32_t FWB4   ;
    volatile uint32_t FWB5   ;
    volatile uint32_t FWB6   ;
    volatile uint32_t FWB7   ;
    volatile uint32_t FWB8   ;
    volatile uint32_t FWB9   ;
    volatile uint32_t FWB10   ;
    volatile uint32_t FWB11   ;
    volatile uint32_t FWB12   ;
    volatile uint32_t FWB13   ;
    volatile uint32_t FWB14   ;
    volatile uint32_t FWB15   ;
    volatile uint32_t FWB16   ;
    volatile uint32_t FWB17   ;
    volatile uint32_t FWB18   ;
    volatile uint32_t FWB19   ;
    volatile uint32_t FWB20   ;
    volatile uint32_t FWB21   ;
    volatile uint32_t FWB22   ;
    volatile uint32_t FWB23   ;
    volatile uint32_t FWB24   ;
    volatile uint32_t FWB25   ;
    volatile uint32_t FWB26   ;
    volatile uint32_t FWB27   ;
    volatile uint32_t FWB28   ;
    volatile uint32_t FWB29   ;
    volatile uint32_t FWB30   ;
    volatile uint32_t FWB31   ;
}BITBANDING_FWBVAL_TypeDef;

typedef volatile struct
{
    volatile uint32_t FWB[32][32];
}BITBANDING_FWBn_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA   [32];
}BITBANDING_FWB_TypeDef;

typedef volatile struct
{
volatile const uint32_t SIZE      [16];
const    uint32_t       reserved  [16];
}BITBANDING_FSIZE_TypeDef;

typedef volatile struct
{
volatile const uint32_t SIZE      [16];
const    uint32_t       reserved  [16];
}BITBANDING_SSIZE_TypeDef;


typedef volatile struct
{
volatile const uint32_t SAFERTOS ;
const    uint32_t       reserved [31];
}BITBANDING_ROMSWMAP_TypeDef;

typedef volatile struct
{
    union
    {
        volatile uint32_t           FMA;
        FMA_TypeDef                 FMA_Bit;
    };
    union
    {
        volatile uint32_t           FMD;
        FMD_TypeDef                 FMD_Bit;
    };
    union
    {
        volatile uint32_t           FMC;
        FMC_TypeDef                 FMC_Bit;
    };
    union
    {
        volatile const uint32_t     FCRIS;
        FCRIS_TypeDef               FCRIS_Bit;
    };
    union
    {
        volatile uint32_t           FCIM;
        FCIM_TypeDef                FCIM_Bit;
    };
    union
    {
        volatile uint32_t           FCMISC;
        FCMISC_TypeDef              FCMISC_Bit;
    };
    const uint32_t                  reserved[2];
    union
    {
        volatile uint32_t           FMC2;
        FMC2_TypeDef                FMC2_Bit;
    };
    union
    {
        volatile uint32_t           FWBVAL;
        FWBVAL_TypeDef              FWBVAL_Bit;
    };
    const uint32_t                  reserved1[51];
    union
    {
        volatile uint32_t           FWBn[32];
        FWB_TypeDef                 FWBn_Bit[32];
    };


    const uint32_t                  reserved2[912];
    union
    {
        volatile const uint32_t     FSIZE;
        FSIZE_TypeDef               FSIZE_Bit;
    };
    union
    {
        volatile const uint32_t     SSIZE;
        SSIZE_TypeDef               SSIZE_Bit;
    };
    const uint32_t                  reserved3[2];
    union
    {
        volatile const uint32_t     ROMSWMAP;
        ROMSWMAP_TypeDef            ROMSWMAP_Bit;
    };
}FLASH_TypeDef;



typedef volatile struct
{
    union
    {
        volatile uint32_t           FMA[32];
        BITBANDING_FMA_TypeDef      FMA_Bit;
    };
    union
    {
        volatile uint32_t           FMD[32];
        BITBANDING_FMD_TypeDef      FMD_Bit;
    };
    union
    {
        volatile uint32_t           FMC[32];
        BITBANDING_FMC_TypeDef      FMC_Bit;
    };
    union
    {
        volatile const uint32_t     FCRIS[32];
        BITBANDING_FCRIS_TypeDef    FCRIS_Bit;
    };
    union
    {
        volatile uint32_t           FCIM[32];
        BITBANDING_FCIM_TypeDef     FCIM_Bit;
    };
    union
    {
        volatile uint32_t           FCMISC[32];
        BITBANDING_FCMISC_TypeDef   FCMISC_Bit;
    };
    const uint32_t                  reserved[2*32];
    union
    {
        volatile uint32_t           FMC2[32];
        BITBANDING_FMC2_TypeDef     FMC2_Bit;
    };
    union
    {
        volatile uint32_t           FWBVAL[32];
        BITBANDING_FWBVAL_TypeDef   FWBVAL_Bit;
    };
    const uint32_t                  reserved1[51*32];
    union
    {
        volatile uint32_t           FWBn[32][32];
        BITBANDING_FWB_TypeDef      FWBn_Bit[32];
    };


    const uint32_t                  reserved2[912*32];
    union
    {
        volatile const uint32_t     FSIZE[32];
        BITBANDING_FSIZE_TypeDef    FSIZE_Bit;
    };
    union
    {
        volatile const uint32_t     SSIZE[32];
        BITBANDING_SSIZE_TypeDef    SSIZE_Bit;
    };
    const uint32_t                  reserved3[2*32];
    union
    {
        volatile const uint32_t     ROMSWMAP[32];
        BITBANDING_ROMSWMAP_TypeDef ROMSWMAP_Bit;
    };
}FLASH_BITBANDING_TypeDef;





#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_STRUCT_H_ */
