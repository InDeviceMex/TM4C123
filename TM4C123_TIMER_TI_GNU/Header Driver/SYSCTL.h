/*
 * SYSCTL.h
 *
 *  Created on: Jan 22, 2018
 *      Author: Vyldram
 */

#ifndef SYSCTL_H_
#define SYSCTL_H_

#include <stdint.h>

#define SYSCTL_BASE            (0x400FE000u)
#define SYSCTL_BITBANDING_BASE (0x42000000u)
#define SYSCTL_OFFSET          (0x000FE000u)

typedef volatile struct
{
    volatile const  uint32_t MINOR      :8;
    volatile const  uint32_t MAJOR      :8;
    volatile const  uint32_t CLASS      :8;
    const           uint32_t reserved   :4;
    volatile const  uint32_t VER        :3;
    const           uint32_t reserved1  :1;
}DID0_TypeDef;

typedef volatile struct
{
    volatile const  uint32_t MINOR[8];
    volatile const  uint32_t MAJOR[8];
    volatile const  uint32_t CLASS[8];
    const           uint32_t reserved[4];
    volatile const  uint32_t VER[3];
    const           uint32_t reserved1;
}BITBANDING_DID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t QUAL      :2;
    volatile const uint32_t ROHS      :1;
    volatile const uint32_t PKG       :2;
    volatile const uint32_t TEMP      :3;
    const          uint32_t reserved  :5;
    volatile const uint32_t PINCOUNT  :3;
    volatile const uint32_t PARTNO    :8;
    volatile const uint32_t FAM       :4;
    volatile const uint32_t VER       :4;
}DID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t QUAL      [2];
    volatile const uint32_t ROHS      ;
    volatile const uint32_t PKG       [2];
    volatile const uint32_t TEMP      [3];
    const          uint32_t reserved  [5];
    volatile const uint32_t PINCOUNT  [3];
    volatile const uint32_t PARTNO    [8];
    volatile const uint32_t FAM       [4];
    volatile const uint32_t VER       [4];
}BITBANDING_DID1_TypeDef;

typedef volatile struct
{
    const       uint32_t reserved   :1;
    volatile    uint32_t BOR1       :1;
    volatile    uint32_t BOR0       :1;
    const       uint32_t reserved1  :29;
}PBORCTL_TypeDef;

typedef volatile struct
{
    const       uint32_t reserved   ;
    volatile    uint32_t BOR1       ;
    volatile    uint32_t BOR0       ;
    const       uint32_t reserved1  [29];
}BITBANDING_PBORCTL_TypeDef;

typedef volatile struct
{
    const           uint32_t reserved   :1;
    volatile const  uint32_t BOR1RIS    :1;
    const           uint32_t reserved1  :1;
    volatile const  uint32_t MOFRIS     :1;
    const           uint32_t reserved2  :2;
    volatile const  uint32_t PLLLRIS    :1;
    volatile const  uint32_t USBPLLLRIS :1;
    volatile const  uint32_t MOSCPUPRIS :1;
    const           uint32_t reserved3  :1;
    volatile const  uint32_t VDDARIS    :1;
    volatile const  uint32_t BOR0RIS    :1;
    const           uint32_t reserved4  :20;
}RIS_TypeDef;

typedef volatile struct
{
    const           uint32_t reserved   ;
    volatile const  uint32_t BOR1RIS    ;
    const           uint32_t reserved1  ;
    volatile const  uint32_t MOFRIS     ;
    const           uint32_t reserved2  [2];
    volatile const  uint32_t PLLLRIS    ;
    volatile const  uint32_t USBPLLLRIS ;
    volatile const  uint32_t MOSCPUPRIS ;
    const           uint32_t reserved3  ;
    volatile const  uint32_t VDDARIS    ;
    volatile const  uint32_t BOR0RIS    ;
    const           uint32_t reserved4  [20];
}BITBANDING_RIS_TypeDef;

typedef volatile struct
{
    const       uint32_t reserved   :1;
    volatile    uint32_t BOR1IM     :1;
    const       uint32_t reserved1  :1;
    volatile    uint32_t MOFIM      :1;
    const       uint32_t reserved2  :2;
    volatile    uint32_t PLLLIM     :1;
    volatile    uint32_t USBPLLLIM  :1;
    volatile    uint32_t MOSCPUPIM  :1;
    const       uint32_t reserved3  :1;
    volatile    uint32_t VDDAIM     :1;
    volatile    uint32_t BOR0IM     :1;
    const       uint32_t reserved4  :20;
}IMC_TypeDef;

typedef volatile struct
{
    const       uint32_t reserved   ;
    volatile    uint32_t BOR1IM     ;
    const       uint32_t reserved1  ;
    volatile    uint32_t MOFIM      ;
    const       uint32_t reserved2  [2];
    volatile    uint32_t PLLLIM     ;
    volatile    uint32_t USBPLLLIM  ;
    volatile    uint32_t MOSCPUPIM  ;
    const       uint32_t reserved3  ;
    volatile    uint32_t VDDAIM     ;
    volatile    uint32_t BOR0IM     ;
    const       uint32_t reserved4  [20];
}BITBANDING_IMC_TypeDef;


typedef volatile struct
{
    const       uint32_t reserved   :1;
    volatile    uint32_t BOR1MIS    :1;
    const       uint32_t reserved1  :1;
    volatile    uint32_t MOFMIS     :1;
    const       uint32_t reserved2  :2;
    volatile    uint32_t PLLLMIS    :1;
    volatile    uint32_t USBPLLLMIS :1;
    volatile    uint32_t MOSCPUPMIS :1;
    const       uint32_t reserved3  :1;
    volatile    uint32_t VDDAMIS    :1;
    volatile    uint32_t BOR0MIS    :1;
    const       uint32_t reserved4  :20;
}MISC_TypeDef;


typedef volatile struct
{
    const       uint32_t reserved   ;
    volatile    uint32_t BOR1MIS    ;
    const       uint32_t reserved1  ;
    volatile    uint32_t MOFMIS     ;
    const       uint32_t reserved2  [2];
    volatile    uint32_t PLLLMIS    ;
    volatile    uint32_t USBPLLLMIS ;
    volatile    uint32_t MOSCPUPMIS ;
    const       uint32_t reserved3  ;
    volatile    uint32_t VDDAMIS    ;
    volatile    uint32_t BOR0MIS    ;
    const       uint32_t reserved4  [20];
}BITBANDING_MISC_TypeDef;


typedef volatile struct
{
    volatile    uint32_t EXT      :1;
    volatile    uint32_t POR      :1;
    volatile    uint32_t BOR      :1;
    volatile    uint32_t WDT0     :1;
    volatile    uint32_t SW       :1;
    volatile    uint32_t WDT1     :1;
    const       uint32_t reserved :10;
    volatile    uint32_t MOSCFAIL :1;
    const       uint32_t reserved1:15;
}RESC_TypeDef;


typedef volatile struct
{
    volatile    uint32_t EXT      ;
    volatile    uint32_t POR      ;
    volatile    uint32_t BOR      ;
    volatile    uint32_t WDT0     ;
    volatile    uint32_t SW       ;
    volatile    uint32_t WDT1     ;
    const       uint32_t reserved [10];
    volatile    uint32_t MOSCFAIL ;
    const       uint32_t reserved1[15];
}BITBANDING_RESC_TypeDef;


typedef volatile struct
{
    volatile    uint32_t MOSCDIS        :1;
    const       uint32_t reserved       :3;
    volatile    uint32_t OSCSRC         :2;
    volatile    uint32_t XTAL           :5;
    volatile    uint32_t BYPASS         :1;
    const       uint32_t reserved1      :1;
    volatile    uint32_t PWRDN          :1;
    const       uint32_t reserved2      :3;
    volatile    uint32_t PWMDIV         :3;
    volatile    uint32_t USEPWMDIV      :1;
    const       uint32_t reserved3      :1;
    volatile    uint32_t USESYSDIV      :1;
    volatile    uint32_t SYSDIV         :4;
    volatile    uint32_t ACG            :1;
    const       uint32_t reserved4      :4;
}RCC_TypeDef;


typedef volatile struct
{
    volatile    uint32_t MOSCDIS        ;
    const       uint32_t reserved       [3];
    volatile    uint32_t OSCSRC         [2];
    volatile    uint32_t XTAL           [5];
    volatile    uint32_t BYPASS         ;
    const       uint32_t reserved1      ;
    volatile    uint32_t PWRDN          ;
    const       uint32_t reserved2      [3];
    volatile    uint32_t PWMDIV         [3];
    volatile    uint32_t USEPWMDIV      ;
    const       uint32_t reserved3      ;
    volatile    uint32_t USESYSDIV      ;
    volatile    uint32_t SYSDIV         [4];
    volatile    uint32_t ACG            ;
    const       uint32_t reserved4      [4];
}BITBANDING_RCC_TypeDef;

typedef volatile struct
{
    volatile uint32_t PORTA        :1;
    volatile uint32_t PORTB        :1;
    volatile uint32_t PORTC        :1;
    volatile uint32_t PORTD        :1;
    volatile uint32_t PORTE        :1;
    volatile uint32_t PORTF        :1;
    const    uint32_t reserved     :26;
}GPIOHBCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t PORTA        ;
    volatile uint32_t PORTB        ;
    volatile uint32_t PORTC        ;
    volatile uint32_t PORTD        ;
    volatile uint32_t PORTE        ;
    volatile uint32_t PORTF        ;
    const    uint32_t reserved     [26];
}BITBANDING_GPIOHBCTL_TypeDef;


typedef volatile struct
{
    const    uint32_t reserved  :4;
    volatile uint32_t OSCSRC2   :3;
    const    uint32_t reserved1 :4;
    volatile uint32_t BYPASS2   :1;
    const    uint32_t reserved2 :1;
    volatile uint32_t PWRDN2    :1;
    volatile uint32_t USBPWRDN  :1;
    const    uint32_t reserved3 :7;
    volatile uint32_t SYSDIV2LSB:1;
    volatile uint32_t SYSDIV2   :6;
    const    uint32_t reserved4 :1;
    volatile uint32_t DIV400    :1;
    volatile uint32_t USERCC2   :1;
}RCC2_TypeDef;


typedef volatile struct
{
    const    uint32_t reserved  [4];
    volatile uint32_t OSCSRC2   [3];
    const    uint32_t reserved1 [4];
    volatile uint32_t BYPASS2   ;
    const    uint32_t reserved2 ;
    volatile uint32_t PWRDN2    ;
    volatile uint32_t USBPWRDN  ;
    const    uint32_t reserved3 [7];
    volatile uint32_t SYSDIV2LSB;
    volatile uint32_t SYSDIV2   [6];
    const    uint32_t reserved4 ;
    volatile uint32_t DIV400    ;
    volatile uint32_t USERCC2   ;
}BITBANDING_RCC2_TypeDef;


typedef volatile struct
{
    volatile uint32_t CVAL         :1;
    volatile uint32_t MOSCIM       :1;
    volatile uint32_t NOXTAL       :1;
    const    uint32_t reserved     :29;
}MOSCCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t BA            :1;
    const    uint32_t reserved      :31;
}RMCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t READ_ENABLE0   :1;
    volatile uint32_t READ_ENABLE1   :1;
    volatile uint32_t READ_ENABLE2   :1;
    volatile uint32_t READ_ENABLE3   :1;
    volatile uint32_t READ_ENABLE4   :1;
    volatile uint32_t READ_ENABLE5   :1;
    volatile uint32_t READ_ENABLE6   :1;
    volatile uint32_t READ_ENABLE7   :1;
    volatile uint32_t READ_ENABLE8   :1;
    volatile uint32_t READ_ENABLE9   :1;
    volatile uint32_t READ_ENABLE10  :1;
    volatile uint32_t READ_ENABLE11  :1;
    volatile uint32_t READ_ENABLE12  :1;
    volatile uint32_t READ_ENABLE13  :1;
    volatile uint32_t READ_ENABLE14  :1;
    volatile uint32_t READ_ENABLE15  :1;
    volatile uint32_t READ_ENABLE16  :1;
    volatile uint32_t READ_ENABLE17  :1;
    volatile uint32_t READ_ENABLE18  :1;
    volatile uint32_t READ_ENABLE19  :1;
    volatile uint32_t READ_ENABLE20  :1;
    volatile uint32_t READ_ENABLE21  :1;
    volatile uint32_t READ_ENABLE22  :1;
    volatile uint32_t READ_ENABLE23  :1;
    volatile uint32_t READ_ENABLE24  :1;
    volatile uint32_t READ_ENABLE25  :1;
    volatile uint32_t READ_ENABLE26  :1;
    volatile uint32_t READ_ENABLE27  :1;
    volatile uint32_t READ_ENABLE28  :1;
    volatile uint32_t READ_ENABLE29  :1;
    volatile uint32_t READ_ENABLE30  :1;
    volatile uint32_t READ_ENABLE31  :1;
}FMPRE_TypeDef;

typedef volatile struct
{
    volatile uint32_t PROG_ENABLE0   :1;
    volatile uint32_t PROG_ENABLE1   :1;
    volatile uint32_t PROG_ENABLE2   :1;
    volatile uint32_t PROG_ENABLE3   :1;
    volatile uint32_t PROG_ENABLE4   :1;
    volatile uint32_t PROG_ENABLE5   :1;
    volatile uint32_t PROG_ENABLE6   :1;
    volatile uint32_t PROG_ENABLE7   :1;
    volatile uint32_t PROG_ENABLE8   :1;
    volatile uint32_t PROG_ENABLE9   :1;
    volatile uint32_t PROG_ENABLE10  :1;
    volatile uint32_t PROG_ENABLE11  :1;
    volatile uint32_t PROG_ENABLE12  :1;
    volatile uint32_t PROG_ENABLE13  :1;
    volatile uint32_t PROG_ENABLE14  :1;
    volatile uint32_t PROG_ENABLE15  :1;
    volatile uint32_t PROG_ENABLE16  :1;
    volatile uint32_t PROG_ENABLE17  :1;
    volatile uint32_t PROG_ENABLE18  :1;
    volatile uint32_t PROG_ENABLE19  :1;
    volatile uint32_t PROG_ENABLE20  :1;
    volatile uint32_t PROG_ENABLE21  :1;
    volatile uint32_t PROG_ENABLE22  :1;
    volatile uint32_t PROG_ENABLE23  :1;
    volatile uint32_t PROG_ENABLE24  :1;
    volatile uint32_t PROG_ENABLE25  :1;
    volatile uint32_t PROG_ENABLE26  :1;
    volatile uint32_t PROG_ENABLE27  :1;
    volatile uint32_t PROG_ENABLE28  :1;
    volatile uint32_t PROG_ENABLE29  :1;
    volatile uint32_t PROG_ENABLE30  :1;
    volatile uint32_t PROG_ENABLE31  :1;
}FMPPE_TypeDef;

typedef volatile struct
{
    volatile uint32_t CVAL         ;
    volatile uint32_t MOSCIM       ;
    volatile uint32_t NOXTAL       ;
    const    uint32_t reserved     [29];
}BITBANDING_MOSCCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t BA            ;
    const    uint32_t reserved      [31];
}BITBANDING_RMCTL_TypeDef;


typedef volatile struct
{
    volatile uint32_t READ_ENABLE0   ;
    volatile uint32_t READ_ENABLE1   ;
    volatile uint32_t READ_ENABLE2   ;
    volatile uint32_t READ_ENABLE3   ;
    volatile uint32_t READ_ENABLE4   ;
    volatile uint32_t READ_ENABLE5   ;
    volatile uint32_t READ_ENABLE6   ;
    volatile uint32_t READ_ENABLE7   ;
    volatile uint32_t READ_ENABLE8   ;
    volatile uint32_t READ_ENABLE9   ;
    volatile uint32_t READ_ENABLE10  ;
    volatile uint32_t READ_ENABLE11  ;
    volatile uint32_t READ_ENABLE12  ;
    volatile uint32_t READ_ENABLE13  ;
    volatile uint32_t READ_ENABLE14  ;
    volatile uint32_t READ_ENABLE15  ;
    volatile uint32_t READ_ENABLE16  ;
    volatile uint32_t READ_ENABLE17  ;
    volatile uint32_t READ_ENABLE18  ;
    volatile uint32_t READ_ENABLE19  ;
    volatile uint32_t READ_ENABLE20  ;
    volatile uint32_t READ_ENABLE21  ;
    volatile uint32_t READ_ENABLE22  ;
    volatile uint32_t READ_ENABLE23  ;
    volatile uint32_t READ_ENABLE24  ;
    volatile uint32_t READ_ENABLE25  ;
    volatile uint32_t READ_ENABLE26  ;
    volatile uint32_t READ_ENABLE27  ;
    volatile uint32_t READ_ENABLE28  ;
    volatile uint32_t READ_ENABLE29  ;
    volatile uint32_t READ_ENABLE30  ;
    volatile uint32_t READ_ENABLE31  ;
}BITBANDING_FMPRE_TypeDef;

typedef volatile struct
{
    volatile uint32_t PROG_ENABLE0   ;
    volatile uint32_t PROG_ENABLE1   ;
    volatile uint32_t PROG_ENABLE2   ;
    volatile uint32_t PROG_ENABLE3   ;
    volatile uint32_t PROG_ENABLE4   ;
    volatile uint32_t PROG_ENABLE5   ;
    volatile uint32_t PROG_ENABLE6   ;
    volatile uint32_t PROG_ENABLE7   ;
    volatile uint32_t PROG_ENABLE8   ;
    volatile uint32_t PROG_ENABLE9   ;
    volatile uint32_t PROG_ENABLE10  ;
    volatile uint32_t PROG_ENABLE11  ;
    volatile uint32_t PROG_ENABLE12  ;
    volatile uint32_t PROG_ENABLE13  ;
    volatile uint32_t PROG_ENABLE14  ;
    volatile uint32_t PROG_ENABLE15  ;
    volatile uint32_t PROG_ENABLE16  ;
    volatile uint32_t PROG_ENABLE17  ;
    volatile uint32_t PROG_ENABLE18  ;
    volatile uint32_t PROG_ENABLE19  ;
    volatile uint32_t PROG_ENABLE20  ;
    volatile uint32_t PROG_ENABLE21  ;
    volatile uint32_t PROG_ENABLE22  ;
    volatile uint32_t PROG_ENABLE23  ;
    volatile uint32_t PROG_ENABLE24  ;
    volatile uint32_t PROG_ENABLE25  ;
    volatile uint32_t PROG_ENABLE26  ;
    volatile uint32_t PROG_ENABLE27  ;
    volatile uint32_t PROG_ENABLE28  ;
    volatile uint32_t PROG_ENABLE29  ;
    volatile uint32_t PROG_ENABLE30  ;
    volatile uint32_t PROG_ENABLE31  ;
}BITBANDING_FMPPE_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved      :1;
    volatile uint32_t PIOSCPD       :1;
    const    uint32_t reserved1     :2;
    volatile uint32_t DSOSCSRC      :3;
    const    uint32_t reserved2     :16;
    volatile uint32_t DSDIVORIDE    :6;
    const    uint32_t reserved3     :3;
}DSLPCLKCFG_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved      ;
    volatile uint32_t PIOSCPD       ;
    const    uint32_t reserved1     [2];
    volatile uint32_t DSOSCSRC      [3];
    const    uint32_t reserved2     [16];
    volatile uint32_t DSDIVORIDE    [6];
    const    uint32_t reserved3     [3];
}BITBANDING_DSLPCLKCFG_TypeDef;

typedef volatile struct
{
    volatile const  uint32_t FPU_         :1;
    const           uint32_t reserved    :7;
    volatile const  uint32_t FLASHLPM    :1;
    const           uint32_t reserved1   :1;
    volatile const  uint32_t SRAMLPM     :1;
    volatile const  uint32_t SRAMSM      :1;
    volatile const  uint32_t PIOSCPDE    :1;
    const           uint32_t reserved2   :19;
}SYSPROP_TypeDef;

typedef volatile struct
{
    volatile const  uint32_t FPU_         ;
    const           uint32_t reserved    [7];
    volatile const  uint32_t FLASHLPM    ;
    const           uint32_t reserved1   ;
    volatile const  uint32_t SRAMLPM     ;
    volatile const  uint32_t SRAMSM      ;
    volatile const  uint32_t PIOSCPDE    ;
    const           uint32_t reserved2   [19];
}BITBANDING_SYSPROP_TypeDef;

typedef volatile struct
{
    volatile    uint32_t UT         :7;
    const       uint32_t reserved   :1;
    volatile    uint32_t UPDATE     :1;
    volatile    uint32_t CAL        :1;
    const       uint32_t reserved1  :21;
    volatile    uint32_t UTEN       :1;
}PIOSCCAL_TypeDef;

typedef volatile struct
{
    volatile    uint32_t UT         [7];
    const       uint32_t reserved   ;
    volatile    uint32_t UPDATE     ;
    volatile    uint32_t CAL        ;
    const       uint32_t reserved1  [21];
    volatile    uint32_t UTEN       ;
}BITBANDING_PIOSCCAL_TypeDef;

typedef volatile struct
{
    volatile const  uint32_t CT         :7;
    const           uint32_t reserved   :1;
    volatile const  uint32_t RESULT     :2;
    const           uint32_t reserved1  :6;
    volatile const  uint32_t DT         :7;
    const           uint32_t reserved2  :9;
}PIOSCSTAT_TypeDef;

typedef volatile struct
{
    volatile const  uint32_t CT         [7];
    const           uint32_t reserved   ;
    volatile const  uint32_t RESULT     [2];
    const           uint32_t reserved1  [6];
    volatile const  uint32_t DT         [7];
    const           uint32_t reserved2  [9];
}BITBANDING_PIOSCSTAT_TypeDef;


typedef volatile struct
{
    volatile const  uint32_t MINT          :10;
    volatile const  uint32_t MFRAC         :10;
    const           uint32_t reserved      :12;
}PLLFREQ0_TypeDef;


typedef volatile struct
{
    volatile const  uint32_t MINT          [10];
    volatile const  uint32_t MFRAC         [10];
    const           uint32_t reserved      [12];
}BITBANDING_PLLFREQ0_TypeDef;


typedef volatile struct
{
    volatile uint32_t N             :5;
    const    uint32_t reserved      :3;
    volatile uint32_t Q             :5;
    const    uint32_t reserved1     :19;
}PLLFREQ1_TypeDef;

typedef volatile struct
{
    volatile uint32_t N             [5];
    const    uint32_t reserved      [3];
    volatile uint32_t Q             [5];
    const    uint32_t reserved1     [19];
}BITBANDING_PLLFREQ1_TypeDef;


typedef volatile struct
{
    volatile const uint32_t LOCK          :1;
    const          uint32_t reserved      :31;
}PLLSTAT_TypeDef;


typedef volatile struct
{
    volatile const uint32_t LOCK          ;
    const          uint32_t reserved      [31];
}BITBANDING_PLLSTAT_TypeDef;


typedef volatile struct
{
    volatile uint32_t SRAMPM        :2;
    const    uint32_t reserved      :2;
    volatile uint32_t FLASHPM       :2;
    const    uint32_t reserved1     :26;
}SLSRWRCFG_TypeDef;


typedef volatile struct
{
    volatile uint32_t SRAMPM        [2];
    const    uint32_t reserved      [2];
    volatile uint32_t FLASHPM       [2];
    const    uint32_t reserved1     [26];
}BITBANDING_SLSRWRCFG_TypeDef;

typedef volatile struct
{
    volatile uint32_t SRAMPM        :2;
    const    uint32_t reserved      :2;
    volatile uint32_t FLASHPM       :2;
    const    uint32_t reserved1     :26;
}DSLSRWRCFG_TypeDef;

typedef volatile struct
{
    volatile uint32_t SRAMPM        [2];
    const    uint32_t reserved      [2];
    volatile uint32_t FLASHPM       [2];
    const    uint32_t reserved1     [26];
}BITBANDING_DSLSRWRCFG_TypeDef;


typedef volatile struct
{
    volatile    uint32_t VLDO          :8;
    const       uint32_t reserved      :23;
    volatile    uint32_t VADJEN        :1;
}LDOSPCTL_TypeDef;


typedef volatile struct
{
    volatile    uint32_t VLDO          [8];
    const       uint32_t reserved      [23];
    volatile    uint32_t VADJEN        ;
}BITBANDING_LDOSPCTL_TypeDef;


typedef volatile struct
{
    volatile const uint32_t NOPLL         :8;
    volatile const uint32_t WITHPLL       :8;
    const          uint32_t reserved      :16;
}LDOSPCAL_TypeDef;


typedef volatile struct
{
    volatile const uint32_t NOPLL         [8];
    volatile const uint32_t WITHPLL       [8];
    const          uint32_t reserved      [16];
}BITBANDING_LDOSPCAL_TypeDef;


typedef volatile struct
{
    volatile    uint32_t VLDO          :8;
    const       uint32_t reserved      :23;
    volatile    uint32_t VADJEN        :1;
}LDODPCTL_TypeDef;


typedef volatile struct
{
    volatile    uint32_t VLDO          [8];
    const       uint32_t reserved      [23];
    volatile    uint32_t VADJEN        ;
}BITBANDING_LDODPCTL_TypeDef;


typedef volatile struct
{
    volatile const uint32_t KHZ30         :8;
    volatile const uint32_t WITHPLL       :8;
    const          uint32_t reserved      :16;
}LDODPCAL_TypeDef;


typedef volatile struct
{
    volatile const uint32_t KHZ30         [8];
    volatile const uint32_t WITHPLL       [8];
    const          uint32_t reserved      [16];
}BITBANDING_LDODPCAL_TypeDef;


typedef volatile struct
{
    volatile const uint32_t SPDERR   :1;
    volatile const uint32_t FPDERR   :1;
    volatile const uint32_t SRDERR   :1;
    volatile const uint32_t LDMINERR :1;
    volatile const uint32_t LSMINERR :1;
    const          uint32_t reserved :1;
    volatile const uint32_t LMAXERR  :1;
    volatile const uint32_t SRDW     :1;
    const          uint32_t reserved1:8;
    volatile const uint32_t PRACT    :1;
    volatile const uint32_t LOWPWR   :1;
    volatile const uint32_t FLASHLP  :1;
    volatile const uint32_t LDOUA    :1;
    const          uint32_t reserved2:12;
}SDPMST_TypeDef;


typedef volatile struct
{
    volatile const uint32_t SPDERR   ;
    volatile const uint32_t FPDERR   ;
    volatile const uint32_t SRDERR   ;
    volatile const uint32_t LDMINERR ;
    volatile const uint32_t LSMINERR ;
    const          uint32_t reserved ;
    volatile const uint32_t LMAXERR  ;
    volatile const uint32_t SRDW     ;
    const          uint32_t reserved1[8];
    volatile const uint32_t PRACT    ;
    volatile const uint32_t LOWPWR   ;
    volatile const uint32_t FLASHLP  ;
    volatile const uint32_t LDOUA    ;
    const          uint32_t reserved2[12];
}BITBANDING_SDPMST_TypeDef;

typedef volatile struct
{
    volatile const uint32_t DBG0        :1;
    volatile const uint32_t DBG1        :1;
    const          uint32_t reserved    :2;
    volatile const uint32_t KEY         :1;
    const          uint32_t reserved1   :3;
    volatile const uint32_t EN          :1;
    volatile const uint32_t POL         :1;
    volatile const uint32_t PIN         :3;
    volatile const uint32_t PORT        :3;
    const          uint32_t reserved2   :15;
    volatile const uint32_t NW          :1;
}BOOTCFG_TypeDef;

typedef volatile struct
{
    volatile const uint32_t DBG0        ;
    volatile const uint32_t DBG1        ;
    const          uint32_t reserved    [2];
    volatile const uint32_t KEY         ;
    const          uint32_t reserved1   [3];
    volatile const uint32_t EN          ;
    volatile const uint32_t POL         ;
    volatile const uint32_t PIN         [3];
    volatile const uint32_t PORT        [3];
    const          uint32_t reserved2   [15];
    volatile const uint32_t NW          ;
}BITBANDING_BOOTCFG_TypeDef;

typedef volatile struct
{
    volatile const uint32_t DATA        :32;
}USER_REG_TypeDef;

typedef volatile struct
{
    volatile const uint32_t DATA        [32];
}BITBANDING_USER_REG_TypeDef;


typedef volatile struct
{
    volatile uint32_t P0   :1;
    volatile uint32_t P1   :1;
    volatile uint32_t P2   :1;
    volatile uint32_t P3   :1;
    volatile uint32_t P4   :1;
    volatile uint32_t P5   :1;
    volatile uint32_t P6   :1;
    volatile uint32_t P7   :1;
    volatile uint32_t P8   :1;
    volatile uint32_t P9   :1;
    volatile uint32_t P10   :1;
    volatile uint32_t P11   :1;
    volatile uint32_t P12   :1;
    volatile uint32_t P13   :1;
    volatile uint32_t P14   :1;
    volatile uint32_t P15   :1;
    volatile uint32_t P16   :1;
    volatile uint32_t P17   :1;
    volatile uint32_t P18   :1;
    volatile uint32_t P19   :1;
    volatile uint32_t P20   :1;
    volatile uint32_t P21   :1;
    volatile uint32_t P22   :1;
    volatile uint32_t P23   :1;
    volatile uint32_t P24   :1;
    volatile uint32_t P25   :1;
    volatile uint32_t P26   :1;
    volatile uint32_t P27   :1;
    volatile uint32_t P28   :1;
    volatile uint32_t P29   :1;
    volatile uint32_t P30   :1;
    volatile uint32_t P31   :1;
}PERIPHERAL_TypeDef;

typedef volatile struct
{
    volatile uint32_t P0   ;
    volatile uint32_t P1   ;
    volatile uint32_t P2   ;
    volatile uint32_t P3   ;
    volatile uint32_t P4   ;
    volatile uint32_t P5   ;
    volatile uint32_t P6   ;
    volatile uint32_t P7   ;
    volatile uint32_t P8   ;
    volatile uint32_t P9   ;
    volatile uint32_t P10   ;
    volatile uint32_t P11   ;
    volatile uint32_t P12   ;
    volatile uint32_t P13   ;
    volatile uint32_t P14   ;
    volatile uint32_t P15   ;
    volatile uint32_t P16   ;
    volatile uint32_t P17   ;
    volatile uint32_t P18   ;
    volatile uint32_t P19   ;
    volatile uint32_t P20   ;
    volatile uint32_t P21   ;
    volatile uint32_t P22   ;
    volatile uint32_t P23   ;
    volatile uint32_t P24   ;
    volatile uint32_t P25   ;
    volatile uint32_t P26   ;
    volatile uint32_t P27   ;
    volatile uint32_t P28   ;
    volatile uint32_t P29   ;
    volatile uint32_t P30   ;
    volatile uint32_t P31   ;
}BITBANDING_PERIPHERAL_TypeDef;

typedef volatile struct
{
    volatile uint32_t WDT0_   :1;
    volatile uint32_t WDT1_   :1;
    const    uint32_t reserved:30;
}PERIPHERAL_WD_TypeDef;

typedef volatile struct
{
    volatile uint32_t WDT0_   ;
    volatile uint32_t WDT1_   ;
    const    uint32_t reserved[30];
}BITBANDING_PERIPHERAL_WD_TypeDef;

typedef volatile struct
{
    volatile uint32_t TIMER0_   :1;
    volatile uint32_t TIMER1_   :1;
    volatile uint32_t TIMER2_   :1;
    volatile uint32_t TIMER3_   :1;
    volatile uint32_t TIMER4_   :1;
    volatile uint32_t TIMER5_   :1;
    const    uint32_t reserved  :26;
}PERIPHERAL_TIMER_TypeDef;

typedef volatile struct
{
    volatile uint32_t TIMER0_   ;
    volatile uint32_t TIMER1_   ;
    volatile uint32_t TIMER2_   ;
    volatile uint32_t TIMER3_   ;
    volatile uint32_t TIMER4_   ;
    volatile uint32_t TIMER5_   ;
    const    uint32_t reserved  [26];
}BITBANDING_PERIPHERAL_TIMER_TypeDef;


typedef volatile struct
{
    volatile uint32_t GPIOA_   :1;
    volatile uint32_t GPIOB_   :1;
    volatile uint32_t GPIOC_   :1;
    volatile uint32_t GPIOD_   :1;
    volatile uint32_t GPIOE_   :1;
    volatile uint32_t GPIOF_   :1;
    volatile uint32_t GPIOG_   :1;
    volatile uint32_t GPIOH_   :1;
    volatile uint32_t GPIOJ_   :1;
    volatile uint32_t GPIOK_   :1;
    volatile uint32_t GPIOL_   :1;
    volatile uint32_t GPIOM_   :1;
    volatile uint32_t GPION_   :1;
    volatile uint32_t GPIOP_   :1;
    volatile uint32_t GPIOQ_   :1;
    const    uint32_t reserved :17;
}PERIPHERAL_GPIO_TypeDef;


typedef volatile struct
{
    volatile uint32_t GPIOA_   ;
    volatile uint32_t GPIOB_   ;
    volatile uint32_t GPIOC_   ;
    volatile uint32_t GPIOD_   ;
    volatile uint32_t GPIOE_   ;
    volatile uint32_t GPIOF_   ;
    volatile uint32_t GPIOG_   ;
    volatile uint32_t GPIOH_   ;
    volatile uint32_t GPIOJ_   ;
    volatile uint32_t GPIOK_   ;
    volatile uint32_t GPIOL_   ;
    volatile uint32_t GPIOM_   ;
    volatile uint32_t GPION_   ;
    volatile uint32_t GPIOP_   ;
    volatile uint32_t GPIOQ_   ;
    const    uint32_t reserved [17];
}BITBANDING_PERIPHERAL_GPIO_TypeDef;


typedef volatile struct
{
    volatile uint32_t UDMA_      :1;
    const    uint32_t reserved  :31;
}PERIPHERAL_DMA_TypeDef;


typedef volatile struct
{
    volatile uint32_t UDMA_      ;
    const    uint32_t reserved  [31];
}BITBANDING_PERIPHERAL_DMA_TypeDef;


typedef volatile struct
{
    volatile uint32_t HIB_       :1;
    const    uint32_t reserved  :31;
}PERIPHERAL_HIB_TypeDef;


typedef volatile struct
{
    volatile uint32_t HIB_      ;
    const    uint32_t reserved  [31];
}BITBANDING_PERIPHERAL_HIB_TypeDef;


typedef volatile struct
{
    volatile uint32_t UART0_    :1;
    volatile uint32_t UART1_    :1;
    volatile uint32_t UART2_    :1;
    volatile uint32_t UART3_    :1;
    volatile uint32_t UART4_    :1;
    volatile uint32_t UART5_    :1;
    volatile uint32_t UART6_    :1;
    volatile uint32_t UART7_    :1;
    const    uint32_t reserved :24;
}PERIPHERAL_UART_TypeDef;


typedef volatile struct
{
    volatile uint32_t UART0_    ;
    volatile uint32_t UART1_    ;
    volatile uint32_t UART2_    ;
    volatile uint32_t UART3_    ;
    volatile uint32_t UART4_    ;
    volatile uint32_t UART5_    ;
    volatile uint32_t UART6_    ;
    volatile uint32_t UART7_    ;
    const    uint32_t reserved [24];
}BITBANDING_PERIPHERAL_UART_TypeDef;


typedef volatile struct
{
    volatile uint32_t SSI0_    :1;
    volatile uint32_t SSI1_    :1;
    volatile uint32_t SSI2_    :1;
    volatile uint32_t SSI3_    :1;
    const    uint32_t reserved :28;
}PERIPHERAL_SSI_TypeDef;


typedef volatile struct
{
    volatile uint32_t SSI0_    ;
    volatile uint32_t SSI1_    ;
    volatile uint32_t SSI2_    ;
    volatile uint32_t SSI3_    ;
    const    uint32_t reserved [28];
}BITBANDING_PERIPHERAL_SSI_TypeDef;


typedef volatile struct
{
    volatile uint32_t I2C0_    :1;
    volatile uint32_t I2C1_    :1;
    volatile uint32_t I2C2_    :1;
    volatile uint32_t I2C3_    :1;
    volatile uint32_t I2C4_    :1;
    volatile uint32_t I2C5_    :1;
    const    uint32_t reserved :26;
}PERIPHERAL_I2C_TypeDef;

typedef volatile struct
{
    volatile uint32_t I2C0_    ;
    volatile uint32_t I2C1_    ;
    volatile uint32_t I2C2_    ;
    volatile uint32_t I2C3_    ;
    volatile uint32_t I2C4_    ;
    volatile uint32_t I2C5_    ;
    const    uint32_t reserved [26];
}BITBANDING_PERIPHERAL_I2C_TypeDef;


typedef volatile struct
{
    volatile uint32_t USB_       :1;
    const    uint32_t reserved  :31;
}PERIPHERAL_USB_TypeDef;


typedef volatile struct
{
    volatile uint32_t USB_       ;
    const    uint32_t reserved  [31];
}BITBANDING_PERIPHERAL_USB_TypeDef;

typedef volatile struct
{
    volatile uint32_t CAN0_    :1;
    volatile uint32_t CAN1_    :1;
    const    uint32_t reserved :30;
}PERIPHERAL_CAN_TypeDef;

typedef volatile struct
{
    volatile uint32_t CAN0_    ;
    volatile uint32_t CAN1_    ;
    const    uint32_t reserved [30];
}BITBANDING_PERIPHERAL_CAN_TypeDef;

typedef volatile struct
{
    volatile uint32_t ADC0_    :1;
    volatile uint32_t ADC1_    :1;
    const    uint32_t reserved:30;
}PERIPHERAL_ADC_TypeDef;

typedef volatile struct
{
    volatile uint32_t ADC0_    ;
    volatile uint32_t ADC1_    ;
    const    uint32_t reserved[30];
}BITBANDING_PERIPHERAL_ADC_TypeDef;

typedef volatile struct
{
    volatile uint32_t ACMP    :1;
    const    uint32_t reserved:31;
}PERIPHERAL_ACMP_TypeDef;

typedef volatile struct
{
    volatile uint32_t ACMP    ;
    const    uint32_t reserved[31];
}BITBANDING_PERIPHERAL_ACMP_TypeDef;

typedef volatile struct
{
    volatile uint32_t PWM0_    :1;
    volatile uint32_t PWM1_    :1;
    const    uint32_t reserved:30;
}PERIPHERAL_PWM_TypeDef;

typedef volatile struct
{
    volatile uint32_t PWM0_    ;
    volatile uint32_t PWM1_    ;
    const    uint32_t reserved[30];
}BITBANDING_PERIPHERAL_PWM_TypeDef;

typedef volatile struct
{
    volatile uint32_t QEI0_    :1;
    volatile uint32_t QEI1_    :1;
    const    uint32_t reserved:30;
}PERIPHERAL_QEI_TypeDef;

typedef volatile struct
{
    volatile uint32_t QEI0_    ;
    volatile uint32_t QEI1_    ;
    const    uint32_t reserved[30];
}BITBANDING_PERIPHERAL_QEI_TypeDef;

typedef volatile struct
{
    volatile uint32_t EEPROM_    :1;
    const    uint32_t reserved:31;
}PERIPHERAL_EEPROM_TypeDef;

typedef volatile struct
{
    volatile uint32_t EEPROM_ ;
    const    uint32_t reserved[31];
}BITBANDING_PERIPHERAL_EEPROM_TypeDef;

typedef volatile struct
{
    volatile uint32_t WTIMER0_   :1;
    volatile uint32_t WTIMER1_   :1;
    volatile uint32_t WTIMER2_   :1;
    volatile uint32_t WTIMER3_   :1;
    volatile uint32_t WTIMER4_   :1;
    volatile uint32_t WTIMER5_   :1;
    const    uint32_t reserved  :26;
}PERIPHERAL_WTIMER_TypeDef;

typedef volatile struct
{
    volatile uint32_t WTIMER0_   ;
    volatile uint32_t WTIMER1_   ;
    volatile uint32_t WTIMER2_   ;
    volatile uint32_t WTIMER3_   ;
    volatile uint32_t WTIMER4_   ;
    volatile uint32_t WTIMER5_   ;
    const    uint32_t reserved  [26];
}BITBANDING_PERIPHERAL_WTIMER_TypeDef;

typedef volatile struct
{
    volatile const uint32_t SRAMSZ    :16;
    volatile const uint32_t FLASHSZ   :16;
}DC0_TypeDef;/*0x00000008*/

typedef volatile struct
{
    volatile const uint32_t SRAMSZ    [16];
    volatile const uint32_t FLASHSZ   [16];
}BITBANDING_DC0_TypeDef;/*0x00000008*/

typedef volatile struct
{
    volatile const uint32_t DCJTAG      :1;
    volatile const uint32_t DCSWD       :1;
    volatile const uint32_t DCSWO       :1;
    volatile const uint32_t DCWDT0      :1;
    volatile const uint32_t DCPLL       :1;
    volatile const uint32_t DCTEMPSNS   :1;
    volatile const uint32_t DCHIB       :1;
    volatile const uint32_t DCMPU       :1;
    volatile const uint32_t DCMAXADC0SPD:2;
    volatile const uint32_t DCMAXADC1SPD:2;
    volatile const uint32_t DCMINSYSDIV :4;
    volatile const uint32_t DCADC0      :1;
    volatile const uint32_t DCADC1      :1;
    const    uint32_t       reserved    :2;
    volatile const uint32_t DCPWM0      :1;
    volatile const uint32_t DCPWM1      :1;
    const    uint32_t       reserved1   :2;
    volatile const uint32_t DCCAN0      :1;
    volatile const uint32_t DCCAN1      :1;
    const    uint32_t       reserved2   :2;
    volatile const uint32_t DCWDT1      :1;
    const    uint32_t       reserved3   :3;
}DC1_TypeDef;/*0x00000010*/

typedef volatile struct
{
    volatile const uint32_t DCJTAG      ;
    volatile const uint32_t DCSWD       ;
    volatile const uint32_t DCSWO       ;
    volatile const uint32_t DCWDT0      ;
    volatile const uint32_t DCPLL       ;
    volatile const uint32_t DCTEMPSNS   ;
    volatile const uint32_t DCHIB       ;
    volatile const uint32_t DCMPU       ;
    volatile const uint32_t DCMAXADC0SPD[2];
    volatile const uint32_t DCMAXADC1SPD[2];
    volatile const uint32_t DCMINSYSDIV [4];
    volatile const uint32_t DCADC0      ;
    volatile const uint32_t DCADC1      ;
    const    uint32_t       reserved    [2];
    volatile const uint32_t DCPWM0      ;
    volatile const uint32_t DCPWM1      ;
    const    uint32_t       reserved1   [2];
    volatile const uint32_t DCCAN0      ;
    volatile const uint32_t DCCAN1      ;
    const    uint32_t       reserved2   [2];
    volatile const uint32_t DCWDT1      ;
    const    uint32_t       reserved3   [3];
}BITBANDING_DC1_TypeDef;/*0x00000010*/

typedef volatile struct
{
    volatile const uint32_t DCUART0      :1;
    volatile const uint32_t DCUART1      :1;
    volatile const uint32_t DCUART2      :1;
    const    uint32_t       reserved     :1;
    volatile const uint32_t DCSSI0       :1;
    volatile const uint32_t DCSSI1       :1;
    const    uint32_t       reserved1    :2;
    volatile const uint32_t DCQEI0       :1;
    volatile const uint32_t DCQEI1       :1;
    const    uint32_t       reserved2    :2;
    volatile const uint32_t DCI2C0       :1;
    volatile const uint32_t DCI2C0HS     :1;
    volatile const uint32_t DCI2C1       :1;
    volatile const uint32_t DCI2C1HS     :1;
    volatile const uint32_t DCTIMER0     :1;
    volatile const uint32_t DCTIMER1     :1;
    volatile const uint32_t DCTIMER2     :1;
    volatile const uint32_t DCTIMER3     :1;
    const    uint32_t       reserved3    :4;
    volatile const uint32_t DCCOMP0      :1;
    volatile const uint32_t DCCOMP1      :1;
    volatile const uint32_t DCCOMP2      :1;
    const    uint32_t       reserved4    :1;
    volatile const uint32_t DCI2S0       :1;
    const    uint32_t       reserved5    :1;
    volatile const uint32_t DCEPI0       :1;
    const    uint32_t       reserved6    :1;
}DC2_TypeDef;/*0x00000014*/

typedef volatile struct
{
    volatile const uint32_t DCUART0      ;
    volatile const uint32_t DCUART1      ;
    volatile const uint32_t DCUART2      ;
    const    uint32_t       reserved     ;
    volatile const uint32_t DCSSI0       ;
    volatile const uint32_t DCSSI1       ;
    const    uint32_t       reserved1    [2];
    volatile const uint32_t DCQEI0       ;
    volatile const uint32_t DCQEI1       ;
    const    uint32_t       reserved2    [2];
    volatile const uint32_t DCI2C0       ;
    volatile const uint32_t DCI2C0HS     ;
    volatile const uint32_t DCI2C1       ;
    volatile const uint32_t DCI2C1HS     ;
    volatile const uint32_t DCTIMER0     ;
    volatile const uint32_t DCTIMER1     ;
    volatile const uint32_t DCTIMER2     ;
    volatile const uint32_t DCTIMER3     ;
    const    uint32_t       reserved3    [4];
    volatile const uint32_t DCCOMP0      ;
    volatile const uint32_t DCCOMP1      ;
    volatile const uint32_t DCCOMP2      ;
    const    uint32_t       reserved4    ;
    volatile const uint32_t DCI2S0       ;
    const    uint32_t       reserved5    ;
    volatile const uint32_t DCEPI0       ;
    const    uint32_t       reserved6    ;
}BITBANDING_DC2_TypeDef;/*0x00000014*/


typedef volatile struct
{
    volatile const uint32_t DCPWM0       :1;
    volatile const uint32_t DCPWM1       :1;
    volatile const uint32_t DCPWM2       :1;
    volatile const uint32_t DCPWM3       :1;
    volatile const uint32_t DCPWM4       :1;
    volatile const uint32_t DCPWM5       :1;
    volatile const uint32_t DCC0MINUS    :1;
    volatile const uint32_t DCC0PLUS     :1;
    volatile const uint32_t DCC0O        :1;
    volatile const uint32_t DCC1MINUS    :1;
    volatile const uint32_t DCC1PLUS     :1;
    volatile const uint32_t DCC1O        :1;
    volatile const uint32_t DCC2MINUS    :1;
    volatile const uint32_t DCC2PLUS     :1;
    volatile const uint32_t DCC2O        :1;
    volatile const uint32_t DCPWMFAULT   :1;
    volatile const uint32_t DCADC0AIN0   :1;
    volatile const uint32_t DCADC0AIN1   :1;
    volatile const uint32_t DCADC0AIN2   :1;
    volatile const uint32_t DCADC0AIN3   :1;
    volatile const uint32_t DCADC0AIN4   :1;
    volatile const uint32_t DCADC0AIN5   :1;
    volatile const uint32_t DCADC0AIN6   :1;
    volatile const uint32_t DCADC0AIN7   :1;
    volatile const uint32_t DCCCP0       :1;
    volatile const uint32_t DCCCP1       :1;
    volatile const uint32_t DCCCP2       :1;
    volatile const uint32_t DCCCP3       :1;
    volatile const uint32_t DCCCP4       :1;
    volatile const uint32_t DCCCP5       :1;
    const    uint32_t       reserved     :1;
    volatile const uint32_t DCHZ32       :1;
}DC3_TypeDef;/*0x00000018*/


typedef volatile struct
{
    volatile const uint32_t DCPWM0       ;
    volatile const uint32_t DCPWM1       ;
    volatile const uint32_t DCPWM2       ;
    volatile const uint32_t DCPWM3       ;
    volatile const uint32_t DCPWM4       ;
    volatile const uint32_t DCPWM5       ;
    volatile const uint32_t DCC0MINUS    ;
    volatile const uint32_t DCC0PLUS     ;
    volatile const uint32_t DCC0O        ;
    volatile const uint32_t DCC1MINUS    ;
    volatile const uint32_t DCC1PLUS     ;
    volatile const uint32_t DCC1O        ;
    volatile const uint32_t DCC2MINUS    ;
    volatile const uint32_t DCC2PLUS     ;
    volatile const uint32_t DCC2O        ;
    volatile const uint32_t DCPWMFAULT   ;
    volatile const uint32_t DCADC0AIN0   ;
    volatile const uint32_t DCADC0AIN1   ;
    volatile const uint32_t DCADC0AIN2   ;
    volatile const uint32_t DCADC0AIN3   ;
    volatile const uint32_t DCADC0AIN4   ;
    volatile const uint32_t DCADC0AIN5   ;
    volatile const uint32_t DCADC0AIN6   ;
    volatile const uint32_t DCADC0AIN7   ;
    volatile const uint32_t DCCCP0       ;
    volatile const uint32_t DCCCP1       ;
    volatile const uint32_t DCCCP2       ;
    volatile const uint32_t DCCCP3       ;
    volatile const uint32_t DCCCP4       ;
    volatile const uint32_t DCCCP5       ;
    const    uint32_t       reserved     ;
    volatile const uint32_t DCHZ32       ;
}BITBANDING_DC3_TypeDef;/*0x00000018*/


typedef volatile struct
{
    volatile const uint32_t DCGPIOA      :1;
    volatile const uint32_t DCGPIOB      :1;
    volatile const uint32_t DCGPIOC      :1;
    volatile const uint32_t DCGPIOD      :1;
    volatile const uint32_t DCGPIOE      :1;
    volatile const uint32_t DCGPIOF      :1;
    volatile const uint32_t DCGPIOG      :1;
    volatile const uint32_t DCGPIOH      :1;
    volatile const uint32_t DCGPIOJ      :1;
    const    uint32_t       reserved     :3;
    volatile const uint32_t DCROM        :1;
    volatile const uint32_t DCUDMA       :1;
    volatile const uint32_t DCCCP6       :1;
    volatile const uint32_t DCCCP7       :1;
    const    uint32_t       reserved1    :2;
    volatile const uint32_t DCPICAL      :1;
    const    uint32_t       reserved2    :5;
    volatile const uint32_t DCE1588      :1;
    const    uint32_t       reserved3    :3;
    volatile const uint32_t DCEMAC0      :1;
    const    uint32_t       reserved4    :1;
    volatile const uint32_t DCEPHY0      :1;
    const    uint32_t       reserved5    :1;
}DC4_TypeDef;/*0x0000001C*/


typedef volatile struct
{
    volatile const uint32_t DCGPIOA      ;
    volatile const uint32_t DCGPIOB      ;
    volatile const uint32_t DCGPIOC      ;
    volatile const uint32_t DCGPIOD      ;
    volatile const uint32_t DCGPIOE      ;
    volatile const uint32_t DCGPIOF      ;
    volatile const uint32_t DCGPIOG      ;
    volatile const uint32_t DCGPIOH      ;
    volatile const uint32_t DCGPIOJ      ;
    const    uint32_t       reserved     [3];
    volatile const uint32_t DCROM        ;
    volatile const uint32_t DCUDMA       ;
    volatile const uint32_t DCCCP6       ;
    volatile const uint32_t DCCCP7       ;
    const    uint32_t       reserved1    [2];
    volatile const uint32_t DCPICAL      ;
    const    uint32_t       reserved2    [5];
    volatile const uint32_t DCE1588      ;
    const    uint32_t       reserved3    [3];
    volatile const uint32_t DCEMAC0      ;
    const    uint32_t       reserved4    ;
    volatile const uint32_t DCEPHY0      ;
    const    uint32_t       reserved5    ;
}BITBANDING_DC4_TypeDef;/*0x0000001C*/


typedef volatile struct
{
    volatile const uint32_t DCPWM0      :1;
    volatile const uint32_t DCPWM1      :1;
    volatile const uint32_t DCPWM2      :1;
    volatile const uint32_t DCPWM3      :1;
    volatile const uint32_t DCPWM4      :1;
    volatile const uint32_t DCPWM5      :1;
    volatile const uint32_t DCPWM6      :1;
    volatile const uint32_t DCPWM7      :1;
    const    uint32_t       reserved    :12;
    volatile const uint32_t DCPWMESYNC  :1;
    volatile const uint32_t DCPWMEFLT   :1;
    const    uint32_t       reserved1   :2;
    volatile const uint32_t DCPWMFAULT0 :1;
    volatile const uint32_t DCPWMFAULT1 :1;
    volatile const uint32_t DCPWMFAULT2 :1;
    volatile const uint32_t DCPWMFAULT3 :1;
    const    uint32_t       reserved2   :4;
}DC5_TypeDef;/*0x00000020*/


typedef volatile struct
{
    volatile const uint32_t DCPWM0      ;
    volatile const uint32_t DCPWM1      ;
    volatile const uint32_t DCPWM2      ;
    volatile const uint32_t DCPWM3      ;
    volatile const uint32_t DCPWM4      ;
    volatile const uint32_t DCPWM5      ;
    volatile const uint32_t DCPWM6      ;
    volatile const uint32_t DCPWM7      ;
    const    uint32_t       reserved    [12];
    volatile const uint32_t DCPWMESYNC  ;
    volatile const uint32_t DCPWMEFLT   ;
    const    uint32_t       reserved1   [2];
    volatile const uint32_t DCPWMFAULT0 ;
    volatile const uint32_t DCPWMFAULT1 ;
    volatile const uint32_t DCPWMFAULT2 ;
    volatile const uint32_t DCPWMFAULT3 ;
    const    uint32_t       reserved2   [4];
}BITBANDING_DC5_TypeDef;/*0x00000020*/


typedef volatile struct
{
    volatile const uint32_t DCUSB0      :2;
    const    uint32_t       reserved    :2;
    volatile const uint32_t DCUSB0PHY   :1;
    const    uint32_t       reserved1   :27;
}DC6_TypeDef;/*0x00000024*/


typedef volatile struct
{
    volatile const uint32_t DCUSB0      [2];
    const    uint32_t       reserved    [2];
    volatile const uint32_t DCUSB0PHY   ;
    const    uint32_t       reserved1   [27];
}BITBANDING_DC6_TypeDef;/*0x00000024*/

typedef volatile struct
{
    volatile const uint32_t DCDMACH0        :1;
    volatile const uint32_t DCDMACH1        :1;
    volatile const uint32_t DCDMACH2        :1;
    volatile const uint32_t DCDMACH3        :1;
    volatile const uint32_t DCDMACH4        :1;
    volatile const uint32_t DCDMACH5        :1;
    volatile const uint32_t DCDMACH6        :1;
    volatile const uint32_t DCDMACH7        :1;
    volatile const uint32_t DCDMACH8        :1;
    volatile const uint32_t DCDMACH9        :1;
    volatile const uint32_t DCDMACH10       :1;
    volatile const uint32_t DCDMACH11       :1;
    volatile const uint32_t DCDMACH12       :1;
    volatile const uint32_t DCDMACH13       :1;
    volatile const uint32_t DCDMACH14       :1;
    volatile const uint32_t DCDMACH15       :1;
    volatile const uint32_t DCDMACH16       :1;
    volatile const uint32_t DCDMACH17       :1;
    volatile const uint32_t DCDMACH18       :1;
    volatile const uint32_t DCDMACH19       :1;
    volatile const uint32_t DCDMACH20       :1;
    volatile const uint32_t DCDMACH21       :1;
    volatile const uint32_t DCDMACH22       :1;
    volatile const uint32_t DCDMACH23       :1;
    volatile const uint32_t DCDMACH24       :1;
    volatile const uint32_t DCDMACH25       :1;
    volatile const uint32_t DCDMACH26       :1;
    volatile const uint32_t DCDMACH27       :1;
    volatile const uint32_t DCDMACH28       :1;
    volatile const uint32_t DCDMACH29       :1;
    volatile const uint32_t DCDMACH30       :1;
    const    uint32_t       reserved        :1;
}DC7_TypeDef;/*0x00000028*/

typedef volatile struct
{
    volatile const uint32_t DCDMACH0        ;
    volatile const uint32_t DCDMACH1        ;
    volatile const uint32_t DCDMACH2        ;
    volatile const uint32_t DCDMACH3        ;
    volatile const uint32_t DCDMACH4        ;
    volatile const uint32_t DCDMACH5        ;
    volatile const uint32_t DCDMACH6        ;
    volatile const uint32_t DCDMACH7        ;
    volatile const uint32_t DCDMACH8        ;
    volatile const uint32_t DCDMACH9        ;
    volatile const uint32_t DCDMACH10       ;
    volatile const uint32_t DCDMACH11       ;
    volatile const uint32_t DCDMACH12       ;
    volatile const uint32_t DCDMACH13       ;
    volatile const uint32_t DCDMACH14       ;
    volatile const uint32_t DCDMACH15       ;
    volatile const uint32_t DCDMACH16       ;
    volatile const uint32_t DCDMACH17       ;
    volatile const uint32_t DCDMACH18       ;
    volatile const uint32_t DCDMACH19       ;
    volatile const uint32_t DCDMACH20       ;
    volatile const uint32_t DCDMACH21       ;
    volatile const uint32_t DCDMACH22       ;
    volatile const uint32_t DCDMACH23       ;
    volatile const uint32_t DCDMACH24       ;
    volatile const uint32_t DCDMACH25       ;
    volatile const uint32_t DCDMACH26       ;
    volatile const uint32_t DCDMACH27       ;
    volatile const uint32_t DCDMACH28       ;
    volatile const uint32_t DCDMACH29       ;
    volatile const uint32_t DCDMACH30       ;
    const    uint32_t       reserved        ;
}BITBANDING_DC7_TypeDef;/*0x00000028*/




typedef volatile struct
{
    volatile const uint32_t DCADC0AIN0        :1;
    volatile const uint32_t DCADC0AIN1        :1;
    volatile const uint32_t DCADC0AIN2        :1;
    volatile const uint32_t DCADC0AIN3        :1;
    volatile const uint32_t DCADC0AIN4        :1;
    volatile const uint32_t DCADC0AIN5        :1;
    volatile const uint32_t DCADC0AIN6        :1;
    volatile const uint32_t DCADC0AIN7        :1;
    volatile const uint32_t DCADC0AIN8        :1;
    volatile const uint32_t DCADC0AIN9        :1;
    volatile const uint32_t DCADC0AIN10       :1;
    volatile const uint32_t DCADC0AIN11       :1;
    volatile const uint32_t DCADC0AIN12       :1;
    volatile const uint32_t DCADC0AIN13       :1;
    volatile const uint32_t DCADC0AIN14       :1;
    volatile const uint32_t DCADC0AIN15       :1;
    volatile const uint32_t DCADC1AIN0        :1;
    volatile const uint32_t DCADC1AIN1        :1;
    volatile const uint32_t DCADC1AIN2        :1;
    volatile const uint32_t DCADC1AIN3        :1;
    volatile const uint32_t DCADC1AIN4        :1;
    volatile const uint32_t DCADC1AIN5        :1;
    volatile const uint32_t DCADC1AIN6        :1;
    volatile const uint32_t DCADC1AIN7        :1;
    volatile const uint32_t DCADC1AIN8        :1;
    volatile const uint32_t DCADC1AIN9        :1;
    volatile const uint32_t DCADC1AIN10       :1;
    volatile const uint32_t DCADC1AIN11       :1;
    volatile const uint32_t DCADC1AIN12       :1;
    volatile const uint32_t DCADC1AIN13       :1;
    volatile const uint32_t DCADC1AIN14       :1;
    volatile const uint32_t DCADC1AIN15       :1;
}DC8_TypeDef;/*0x0000002C*/

typedef volatile struct
{
    volatile const uint32_t DCADC0AIN0        ;
    volatile const uint32_t DCADC0AIN1        ;
    volatile const uint32_t DCADC0AIN2        ;
    volatile const uint32_t DCADC0AIN3        ;
    volatile const uint32_t DCADC0AIN4        ;
    volatile const uint32_t DCADC0AIN5        ;
    volatile const uint32_t DCADC0AIN6        ;
    volatile const uint32_t DCADC0AIN7        ;
    volatile const uint32_t DCADC0AIN8        ;
    volatile const uint32_t DCADC0AIN9        ;
    volatile const uint32_t DCADC0AIN10       ;
    volatile const uint32_t DCADC0AIN11       ;
    volatile const uint32_t DCADC0AIN12       ;
    volatile const uint32_t DCADC0AIN13       ;
    volatile const uint32_t DCADC0AIN14       ;
    volatile const uint32_t DCADC0AIN15       ;
    volatile const uint32_t DCADC1AIN0        ;
    volatile const uint32_t DCADC1AIN1        ;
    volatile const uint32_t DCADC1AIN2        ;
    volatile const uint32_t DCADC1AIN3        ;
    volatile const uint32_t DCADC1AIN4        ;
    volatile const uint32_t DCADC1AIN5        ;
    volatile const uint32_t DCADC1AIN6        ;
    volatile const uint32_t DCADC1AIN7        ;
    volatile const uint32_t DCADC1AIN8        ;
    volatile const uint32_t DCADC1AIN9        ;
    volatile const uint32_t DCADC1AIN10       ;
    volatile const uint32_t DCADC1AIN11       ;
    volatile const uint32_t DCADC1AIN12       ;
    volatile const uint32_t DCADC1AIN13       ;
    volatile const uint32_t DCADC1AIN14       ;
    volatile const uint32_t DCADC1AIN15       ;
}BITBANDING_DC8_TypeDef;/*0x0000002C*/

typedef volatile struct
{
    const    uint32_t       reserved  :3;
    volatile const uint32_t SRCRWDT0      :1;
    const    uint32_t       reserved1 :2;
    volatile const uint32_t SRCRHIB       :1;
    const    uint32_t       reserved2 :9;
    volatile const uint32_t SRCRADC0      :1;
    volatile const uint32_t SRCRADC1      :1;
    const    uint32_t       reserved3 :2;
    volatile const uint32_t SRCRPWM0      :1;
    const    uint32_t       reserved4 :3;
    volatile const uint32_t SRCRCAN0      :1;
    volatile const uint32_t SRCRCAN1      :1;
    const    uint32_t       reserved5 :2;
    volatile const uint32_t SRCRWDT1      :1;
    const    uint32_t       reserved6 :3;
}SRCR0_TypeDef;/*0x00000040*/

typedef volatile struct
{
    const    uint32_t       reserved  [3];
    volatile const uint32_t SRCRWDT0      ;
    const    uint32_t       reserved1 [2];
    volatile const uint32_t SRCRHIB       ;
    const    uint32_t       reserved2 [9];
    volatile const uint32_t SRCRADC0      ;
    volatile const uint32_t SRCRADC1      ;
    const    uint32_t       reserved3 [2];
    volatile const uint32_t SRCRPWM0      ;
    const    uint32_t       reserved4 [3];
    volatile const uint32_t SRCRCAN0      ;
    volatile const uint32_t SRCRCAN1      ;
    const    uint32_t       reserved5 [2];
    volatile const uint32_t SRCRWDT1      ;
    const    uint32_t       reserved6 [3];
}BITBANDING_SRCR0_TypeDef;/*0x00000040*/


typedef volatile struct
{
    volatile const uint32_t SRCRUART0      :1;
    volatile const uint32_t SRCRUART1      :1;
    volatile const uint32_t SRCRUART2      :1;
    const    uint32_t       reserved   :1;
    volatile const uint32_t SRCRSSI0       :1;
    volatile const uint32_t SRCRSSI1       :1;
    const    uint32_t       reserved1  :2;
    volatile const uint32_t SRCRQEI0       :1;
    volatile const uint32_t SRCRQEI1       :1;
    const    uint32_t       reserved2  :2;
    volatile const uint32_t SRCRI2C0       :1;
    const    uint32_t       reserved3  :1;
    volatile const uint32_t SRCRI2C1       :1;
    const    uint32_t       reserved4  :1;
    volatile const uint32_t SRCRTIMER0     :1;
    volatile const uint32_t SRCRTIMER1     :1;
    volatile const uint32_t SRCRTIMER2     :1;
    volatile const uint32_t SRCRTIMER3     :1;
    const    uint32_t       reserved5  :4;
    volatile const uint32_t SRCRCOMP0      :1;
    volatile const uint32_t SRCRCOMP1      :1;
    const    uint32_t       reserved6  :6;
}SRCR1_TypeDef;/*0x00000044*/


typedef volatile struct
{
    volatile const uint32_t SRCRUART0      ;
    volatile const uint32_t SRCRUART1      ;
    volatile const uint32_t SRCRUART2      ;
    const    uint32_t       reserved   ;
    volatile const uint32_t SRCRSSI0       ;
    volatile const uint32_t SRCRSSI1       ;
    const    uint32_t       reserved1  [2];
    volatile const uint32_t SRCRQEI0       ;
    volatile const uint32_t SRCRQEI1       ;
    const    uint32_t       reserved2  [2];
    volatile const uint32_t SRCRI2C0       ;
    const    uint32_t       reserved3  ;
    volatile const uint32_t SRCRI2C1       ;
    const    uint32_t       reserved4  ;
    volatile const uint32_t SRCRTIMER0     ;
    volatile const uint32_t SRCRTIMER1     ;
    volatile const uint32_t SRCRTIMER2     ;
    volatile const uint32_t SRCRTIMER3     ;
    const    uint32_t       reserved5  [4];
    volatile const uint32_t SRCRCOMP0      ;
    volatile const uint32_t SRCRCOMP1      ;
    const    uint32_t       reserved6  [6];
}BITBANDING_SRCR1_TypeDef;/*0x00000044*/


typedef volatile struct
{
    volatile const uint32_t SRCRGPIOA      :1;
    volatile const uint32_t SRCRGPIOB      :1;
    volatile const uint32_t SRCRGPIOC      :1;
    volatile const uint32_t SRCRGPIOD      :1;
    volatile const uint32_t SRCRGPIOE      :1;
    volatile const uint32_t SRCRGPIOF      :1;
    const    uint32_t       reserved   :7;
    volatile const uint32_t SRCRUDMA       :1;
    const    uint32_t       reserved1  :2;
    volatile const uint32_t SRCRUSB0       :1;
    const    uint32_t       reserved2  :15;
}SRCR2_TypeDef;/*0x00000048*/


typedef volatile struct
{
    volatile const uint32_t SRCRGPIOA      ;
    volatile const uint32_t SRCRGPIOB      ;
    volatile const uint32_t SRCRGPIOC      ;
    volatile const uint32_t SRCRGPIOD      ;
    volatile const uint32_t SRCRGPIOE      ;
    volatile const uint32_t SRCRGPIOF      ;
    const    uint32_t       reserved   [7];
    volatile const uint32_t SRCRUDMA       ;
    const    uint32_t       reserved1  [2];
    volatile const uint32_t SRCRUSB0       ;
    const    uint32_t       reserved2  [15];
}BITBANDING_SRCR2_TypeDef;/*0x00000048*/


typedef volatile struct
{
    const    uint32_t       reserved  :3;
    volatile const uint32_t RCGCWDT0      :1;
    const    uint32_t       reserved1 :2;
    volatile const uint32_t RCGCHIB       :1;
    const    uint32_t       reserved2 :1;
    volatile const uint32_t RCGCMAXADC0SPD:2;
    volatile const uint32_t RCGCMAXADC1SPD:2;
    const    uint32_t       reserved3 :4;
    volatile const uint32_t RCGCADC0      :1;
    volatile const uint32_t RCGCADC1      :1;
    const    uint32_t       reserved5 :2;
    volatile const uint32_t RCGCPWM0      :1;
    const    uint32_t       reserved6 :3;
    volatile const uint32_t RCGCCAN0      :1;
    volatile const uint32_t RCGCCAN1      :1;
    const    uint32_t       reserved7 :2;
    volatile const uint32_t RCGCWDT1      :1;
    const    uint32_t       reserved8 :3;
}RCGC0_TypeDef;/*0x00000100*/


typedef volatile struct
{
    const    uint32_t       reserved  [3];
    volatile const uint32_t RCGCWDT0      ;
    const    uint32_t       reserved1 [2];
    volatile const uint32_t RCGCHIB       ;
    const    uint32_t       reserved2 ;
    volatile const uint32_t RCGCMAXADC0SPD[2];
    volatile const uint32_t RCGCMAXADC1SPD[2];
    const    uint32_t       reserved3 [4];
    volatile const uint32_t RCGCADC0      ;
    volatile const uint32_t RCGCADC1      ;
    const    uint32_t       reserved5 [2];
    volatile const uint32_t RCGCPWM0      ;
    const    uint32_t       reserved6 [3];
    volatile const uint32_t RCGCCAN0      ;
    volatile const uint32_t RCGCCAN1      ;
    const    uint32_t       reserved7 [2];
    volatile const uint32_t RCGCWDT1      ;
    const    uint32_t       reserved8 [3];
}BITBANDING_RCGC0_TypeDef;/*0x00000100*/


typedef volatile struct
{
    volatile const uint32_t RCGCUART0      :1;
    volatile const uint32_t RCGCUART1      :1;
    volatile const uint32_t RCGCUART2      :1;
    const    uint32_t       reserved   :1;
    volatile const uint32_t RCGCSSI0       :1;
    volatile const uint32_t RCGCSSI1       :1;
    const    uint32_t       reserved1  :2;
    volatile const uint32_t RCGCQEI0       :1;
    volatile const uint32_t RCGCQEI1       :1;
    const    uint32_t       reserved2  :2;
    volatile const uint32_t RCGCI2C0       :1;
    const    uint32_t       reserved3  :1;
    volatile const uint32_t RCGCI2C1       :1;
    const    uint32_t       reserved4  :1;
    volatile const uint32_t RCGCTIMER0     :1;
    volatile const uint32_t RCGCTIMER1     :1;
    volatile const uint32_t RCGCTIMER2     :1;
    volatile const uint32_t RCGCTIMER3     :1;
    const    uint32_t       reserved5  :4;
    volatile const uint32_t RCGCCOMP0      :1;
    volatile const uint32_t RCGCCOMP1      :1;
    const    uint32_t       reserved6  :6;
}RCGC1_TypeDef;/*0x00000104*/


typedef volatile struct
{
    volatile const uint32_t RCGCUART0      ;
    volatile const uint32_t RCGCUART1      ;
    volatile const uint32_t RCGCUART2      ;
    const    uint32_t       reserved   ;
    volatile const uint32_t RCGCSSI0       ;
    volatile const uint32_t RCGCSSI1       ;
    const    uint32_t       reserved1  [2];
    volatile const uint32_t RCGCQEI0       ;
    volatile const uint32_t RCGCQEI1       ;
    const    uint32_t       reserved2  [2];
    volatile const uint32_t RCGCI2C0       ;
    const    uint32_t       reserved3  ;
    volatile const uint32_t RCGCI2C1       ;
    const    uint32_t       reserved4  ;
    volatile const uint32_t RCGCTIMER0     ;
    volatile const uint32_t RCGCTIMER1     ;
    volatile const uint32_t RCGCTIMER2     ;
    volatile const uint32_t RCGCTIMER3     ;
    const    uint32_t       reserved5  [4];
    volatile const uint32_t RCGCCOMP0      ;
    volatile const uint32_t RCGCCOMP1      ;
    const    uint32_t       reserved6  [6];
}BITBANDING_RCGC1_TypeDef;/*0x00000104*/


typedef volatile struct
{
    volatile const uint32_t RCGCGPIOA      :1;
    volatile const uint32_t RCGCGPIOB      :1;
    volatile const uint32_t RCGCGPIOC      :1;
    volatile const uint32_t RCGCGPIOD      :1;
    volatile const uint32_t RCGCGPIOE      :1;
    volatile const uint32_t RCGCGPIOF      :1;
    const    uint32_t       reserved   :7;
    volatile const uint32_t RCGCUDMA       :1;
    const    uint32_t       reserved1  :2;
    volatile const uint32_t RCGCUSB0       :1;
    const    uint32_t       reserved2  :15;
}RCGC2_TypeDef;/*0x00000108*/


typedef volatile struct
{
    volatile const uint32_t RCGCGPIOA      ;
    volatile const uint32_t RCGCGPIOB      ;
    volatile const uint32_t RCGCGPIOC      ;
    volatile const uint32_t RCGCGPIOD      ;
    volatile const uint32_t RCGCGPIOE      ;
    volatile const uint32_t RCGCGPIOF      ;
    const    uint32_t       reserved   [7];
    volatile const uint32_t RCGCUDMA       ;
    const    uint32_t       reserved1  [2];
    volatile const uint32_t RCGCUSB0       ;
    const    uint32_t       reserved2  [15];
}BITBANDING_RCGC2_TypeDef;/*0x00000108*/



typedef volatile struct
{
    const    uint32_t       reserved  :3;
    volatile const uint32_t SCGCWDT0      :1;
    const    uint32_t       reserved1 :2;
    volatile const uint32_t SCGCHIB       :1;
    const    uint32_t       reserved2 :9;
    volatile const uint32_t SCGCADC0      :1;
    volatile const uint32_t SCGCADC1      :1;
    const    uint32_t       reserved3 :2;
    volatile const uint32_t SCGCPWM0      :1;
    const    uint32_t       reserved4 :3;
    volatile const uint32_t SCGCCAN0      :1;
    volatile const uint32_t SCGCCAN1      :1;
    const    uint32_t       reserved5 :2;
    volatile const uint32_t SCGCWDT1      :1;
    const    uint32_t       reserved6 :3;
}SCGC0_TypeDef;/*0x00000110*/



typedef volatile struct
{
    const    uint32_t       reserved  [3];
    volatile const uint32_t SCGCWDT0      ;
    const    uint32_t       reserved1 [2];
    volatile const uint32_t SCGCHIB       ;
    const    uint32_t       reserved2 [9];
    volatile const uint32_t SCGCADC0      ;
    volatile const uint32_t SCGCADC1      ;
    const    uint32_t       reserved3 [2];
    volatile const uint32_t SCGCPWM0      ;
    const    uint32_t       reserved4 [3];
    volatile const uint32_t SCGCCAN0      ;
    volatile const uint32_t SCGCCAN1      ;
    const    uint32_t       reserved5 [2];
    volatile const uint32_t SCGCWDT1      ;
    const    uint32_t       reserved6 [3];
}BITBANDING_SCGC0_TypeDef;/*0x00000110*/


typedef volatile struct
{
    volatile const uint32_t SCGCUART0      :1;
    volatile const uint32_t SCGCUART1      :1;
    volatile const uint32_t SCGCUART2      :1;
    const    uint32_t       reserved   :1;
    volatile const uint32_t SCGCSSI0       :1;
    volatile const uint32_t SCGCSSI1       :1;
    const    uint32_t       reserved1  :2;
    volatile const uint32_t SCGCQEI0       :1;
    volatile const uint32_t SCGCQEI1       :1;
    const    uint32_t       reserved2  :2;
    volatile const uint32_t SCGCI2C0       :1;
    const    uint32_t       reserved3  :1;
    volatile const uint32_t SCGCI2C1       :1;
    const    uint32_t       reserved4  :1;
    volatile const uint32_t SCGCTIMER0     :1;
    volatile const uint32_t SCGCTIMER1     :1;
    volatile const uint32_t SCGCTIMER2     :1;
    volatile const uint32_t SCGCTIMER3     :1;
    const    uint32_t       reserved5  :4;
    volatile const uint32_t SCGCCOMP0      :1;
    volatile const uint32_t SCGCCOMP1      :1;
    const    uint32_t       reserved6  :6;
}SCGC1_TypeDef;/*0x00000104*/


typedef volatile struct
{
    volatile const uint32_t SCGCUART0      ;
    volatile const uint32_t SCGCUART1      ;
    volatile const uint32_t SCGCUART2      ;
    const    uint32_t       reserved   ;
    volatile const uint32_t SCGCSSI0       ;
    volatile const uint32_t SCGCSSI1       ;
    const    uint32_t       reserved1  [2];
    volatile const uint32_t SCGCQEI0       ;
    volatile const uint32_t SCGCQEI1       ;
    const    uint32_t       reserved2  [2];
    volatile const uint32_t SCGCI2C0       ;
    const    uint32_t       reserved3  ;
    volatile const uint32_t SCGCI2C1       ;
    const    uint32_t       reserved4  ;
    volatile const uint32_t SCGCTIMER0     ;
    volatile const uint32_t SCGCTIMER1     ;
    volatile const uint32_t SCGCTIMER2     ;
    volatile const uint32_t SCGCTIMER3     ;
    const    uint32_t       reserved5  [4];
    volatile const uint32_t SCGCCOMP0      ;
    volatile const uint32_t SCGCCOMP1      ;
    const    uint32_t       reserved6  [6];
}BITBANDING_SCGC1_TypeDef;/*0x00000104*/


typedef volatile struct
{
    volatile const uint32_t SCGCGPIOA      :1;
    volatile const uint32_t SCGCGPIOB      :1;
    volatile const uint32_t SCGCGPIOC      :1;
    volatile const uint32_t SCGCGPIOD      :1;
    volatile const uint32_t SCGCGPIOE      :1;
    volatile const uint32_t SCGCGPIOF      :1;
    const    uint32_t       reserved   :7;
    volatile const uint32_t SCGCUDMA       :1;
    const    uint32_t       reserved1  :2;
    volatile const uint32_t SCGCUSB0       :1;
    const    uint32_t       reserved2  :15;
}SCGC2_TypeDef;/*0x00000108*/


typedef volatile struct
{
    volatile const uint32_t SCGCGPIOA      ;
    volatile const uint32_t SCGCGPIOB      ;
    volatile const uint32_t SCGCGPIOC      ;
    volatile const uint32_t SCGCGPIOD      ;
    volatile const uint32_t SCGCGPIOE      ;
    volatile const uint32_t SCGCGPIOF      ;
    const    uint32_t       reserved   [7];
    volatile const uint32_t SCGCUDMA       ;
    const    uint32_t       reserved1  [2];
    volatile const uint32_t SCGCUSB0       ;
    const    uint32_t       reserved2  [15];
}BITBANDING_SCGC2_TypeDef;/*0x00000108*/



typedef volatile struct
{
    const    uint32_t       reserved  :3;
    volatile const uint32_t DCGCWDT0      :1;
    const    uint32_t       reserved1 :2;
    volatile const uint32_t DCGCHIB       :1;
    const    uint32_t       reserved2 :9;
    volatile const uint32_t DCGCADC0      :1;
    volatile const uint32_t DCGCADC1      :1;
    const    uint32_t       reserved3 :2;
    volatile const uint32_t DCGCPWM0      :1;
    const    uint32_t       reserved4 :3;
    volatile const uint32_t DCGCCAN0      :1;
    volatile const uint32_t DCGCCAN1      :1;
    const    uint32_t       reserved5 :2;
    volatile const uint32_t DCGCWDT1      :1;
    const    uint32_t       reserved6 :3;
}DCGC0_TypeDef;/*0x00000120*/



typedef volatile struct
{
    const    uint32_t       reserved  [3];
    volatile const uint32_t DCGCWDT0      ;
    const    uint32_t       reserved1 [2];
    volatile const uint32_t DCGCHIB       ;
    const    uint32_t       reserved2 [9];
    volatile const uint32_t DCGCADC0      ;
    volatile const uint32_t DCGCADC1      ;
    const    uint32_t       reserved3 [2];
    volatile const uint32_t DCGCPWM0      ;
    const    uint32_t       reserved4 [3];
    volatile const uint32_t DCGCCAN0      ;
    volatile const uint32_t DCGCCAN1      ;
    const    uint32_t       reserved5 [2];
    volatile const uint32_t DCGCWDT1      ;
    const    uint32_t       reserved6 [3];
}BITBANDING_DCGC0_TypeDef;/*0x00000120*/



typedef volatile struct
{
    volatile const uint32_t DCGCUART0      :1;
    volatile const uint32_t DCGCUART1      :1;
    volatile const uint32_t DCGCUART2      :1;
    const    uint32_t       reserved   :1;
    volatile const uint32_t DCGCSSI0       :1;
    volatile const uint32_t DCGCSSI1       :1;
    const    uint32_t       reserved1  :2;
    volatile const uint32_t DCGCQEI0       :1;
    volatile const uint32_t DCGCQEI1       :1;
    const    uint32_t       reserved2  :2;
    volatile const uint32_t DCGCI2C0       :1;
    const    uint32_t       reserved3  :1;
    volatile const uint32_t DCGCI2C1       :1;
    const    uint32_t       reserved4  :1;
    volatile const uint32_t DCGCTIMER0     :1;
    volatile const uint32_t DCGCTIMER1     :1;
    volatile const uint32_t DCGCTIMER2     :1;
    volatile const uint32_t DCGCTIMER3     :1;
    const    uint32_t       reserved5  :4;
    volatile const uint32_t DCGCCOMP0      :1;
    volatile const uint32_t DCGCCOMP1      :1;
    const    uint32_t       reserved6  :6;
}DCGC1_TypeDef;/*0x00000124*/



typedef volatile struct
{
    volatile const uint32_t DCGCUART0      ;
    volatile const uint32_t DCGCUART1      ;
    volatile const uint32_t DCGCUART2      ;
    const    uint32_t       reserved   ;
    volatile const uint32_t DCGCSSI0       ;
    volatile const uint32_t DCGCSSI1       ;
    const    uint32_t       reserved1  [2];
    volatile const uint32_t DCGCQEI0       ;
    volatile const uint32_t DCGCQEI1       ;
    const    uint32_t       reserved2  [2];
    volatile const uint32_t DCGCI2C0       ;
    const    uint32_t       reserved3  ;
    volatile const uint32_t DCGCI2C1       ;
    const    uint32_t       reserved4  ;
    volatile const uint32_t DCGCTIMER0     ;
    volatile const uint32_t DCGCTIMER1     ;
    volatile const uint32_t DCGCTIMER2     ;
    volatile const uint32_t DCGCTIMER3     ;
    const    uint32_t       reserved5  [4];
    volatile const uint32_t DCGCCOMP0      ;
    volatile const uint32_t DCGCCOMP1      ;
    const    uint32_t       reserved6  [6];
}BITBANDING_DCGC1_TypeDef;/*0x00000124*/


typedef volatile struct
{
    volatile const uint32_t DCGCGPIOA      :1;
    volatile const uint32_t DCGCGPIOB      :1;
    volatile const uint32_t DCGCGPIOC      :1;
    volatile const uint32_t DCGCGPIOD      :1;
    volatile const uint32_t DCGCGPIOE      :1;
    volatile const uint32_t DCGCGPIOF      :1;
    const    uint32_t       reserved   :7;
    volatile const uint32_t DCGCUDMA       :1;
    const    uint32_t       reserved1  :2;
    volatile const uint32_t DCGCUSB0       :1;
    const    uint32_t       reserved2  :15;
}DCGC2_TypeDef;/*0x00000128*/


typedef volatile struct
{
    volatile const uint32_t DCGCGPIOA      ;
    volatile const uint32_t DCGCGPIOB      ;
    volatile const uint32_t DCGCGPIOC      ;
    volatile const uint32_t DCGCGPIOD      ;
    volatile const uint32_t DCGCGPIOE      ;
    volatile const uint32_t DCGCGPIOF      ;
    const    uint32_t       reserved   [7];
    volatile const uint32_t DCGCUDMA       ;
    const    uint32_t       reserved1  [2];
    volatile const uint32_t DCGCUSB0       ;
    const    uint32_t       reserved2  [15];
}BITBANDING_DCGC2_TypeDef;/*0x00000128*/

typedef volatile struct
{
    volatile const uint32_t DCADC0DC0        :1;
    volatile const uint32_t DCADC0DC1        :1;
    volatile const uint32_t DCADC0DC2        :1;
    volatile const uint32_t DCADC0DC3        :1;
    volatile const uint32_t DCADC0DC4        :1;
    volatile const uint32_t DCADC0DC5        :1;
    volatile const uint32_t DCADC0DC6        :1;
    volatile const uint32_t DCADC0DC7        :1;
    const    uint32_t       reserved       :8;
    volatile const uint32_t DCADC1DC0        :1;
    volatile const uint32_t DCADC1DC1        :1;
    volatile const uint32_t DCADC1DC2        :1;
    volatile const uint32_t DCADC1DC3        :1;
    volatile const uint32_t DCADC1DC4        :1;
    volatile const uint32_t DCADC1DC5        :1;
    volatile const uint32_t DCADC1DC6        :1;
    volatile const uint32_t DCADC1DC7        :1;
    const    uint32_t       reserved1      :8;
}DC9_TypeDef;/*0x00000190*/

typedef volatile struct
{
    volatile const uint32_t DCADC0DC0        ;
    volatile const uint32_t DCADC0DC1        ;
    volatile const uint32_t DCADC0DC2        ;
    volatile const uint32_t DCADC0DC3        ;
    volatile const uint32_t DCADC0DC4        ;
    volatile const uint32_t DCADC0DC5        ;
    volatile const uint32_t DCADC0DC6        ;
    volatile const uint32_t DCADC0DC7        ;
    const    uint32_t       reserved       [8];
    volatile const uint32_t DCADC1DC0        ;
    volatile const uint32_t DCADC1DC1        ;
    volatile const uint32_t DCADC1DC2        ;
    volatile const uint32_t DCADC1DC3        ;
    volatile const uint32_t DCADC1DC4        ;
    volatile const uint32_t DCADC1DC5        ;
    volatile const uint32_t DCADC1DC6        ;
    volatile const uint32_t DCADC1DC7        ;
    const    uint32_t       reserved1      [8];
}BITBANDING_DC9_TypeDef;/*0x00000190*/


typedef volatile struct
{
    volatile const uint32_t FWB            :1;
    const    uint32_t       reserved       :31;
}NVMSTAT_TypeDef;/*0x000001A0*/


typedef volatile struct
{
    volatile const uint32_t FWB            ;
    const    uint32_t       reserved       [31];
}BITBANDING_NVMSTAT_TypeDef;/*0x000001A0*/


typedef volatile struct
{
    union
    {
        volatile uint32_t           DID0;
        DID0_TypeDef                DID0_Bit;
    };
    union
    {
        volatile uint32_t           DID1;
        DID1_TypeDef                DID1_Bit;
    };
    union
    {
        volatile const uint32_t     DC0;
        DC0_TypeDef                 DC0_Bit;
    };
    const uint32_t reserved[1];
    union
    {
        volatile const uint32_t     DC1;
        DC1_TypeDef                 DC1_Bit;
    };
    union
    {
        volatile const uint32_t     DC2;
        DC2_TypeDef                 DC2_Bit;
    };
    union
    {
        volatile const uint32_t     DC3;
        DC3_TypeDef                 DC3_Bit;
    };
    union
    {
        volatile const uint32_t     DC4;
        DC4_TypeDef                 DC4_Bit;
    };
    union
    {
        volatile const uint32_t     DC5;
        DC5_TypeDef                 DC5_Bit;
    };
    union
    {
        volatile const uint32_t     DC6;
        DC6_TypeDef                 DC6_Bit;
    };
    union
    {
        volatile const uint32_t     DC7;
        DC7_TypeDef                 DC7_Bit;
    };
    union
    {
        volatile const uint32_t     DC8;
        DC8_TypeDef                 DC8_Bit;
    };
    union
    {
        volatile uint32_t           PBORCTL;
        PBORCTL_TypeDef             PBORCTL_Bit;
    };
    const uint32_t                  reserved1[3];
    union
    {
        volatile const uint32_t     SRCR0;
        SRCR0_TypeDef               SRCR0_Bit;
    };
    union
    {
        volatile const uint32_t     SRCR1;
        SRCR1_TypeDef               SRCR1_Bit;
    };
    union
    {
        volatile const uint32_t     SRCR2;
        SRCR2_TypeDef               SRCR2_Bit;
    };
    const uint32_t                  reserved2[1];
    union
    {
        volatile uint32_t           RIS;
        RIS_TypeDef                 RIS_Bit;
    };
    union
    {
        volatile uint32_t           IMC;
        IMC_TypeDef                 IMC_Bit;
    };
    union
    {
        volatile uint32_t           MISC;
        MISC_TypeDef                MISC_Bit;
    };
    union
    {
        volatile uint32_t           RESC;
        RESC_TypeDef                RESC_Bit;
    };
    union
    {
        volatile uint32_t           RCC;
        RCC_TypeDef                 RCC_Bit;
    };
    const uint32_t                  reserved3[2];
    union
    {
        volatile uint32_t           GPIOHBCTL;
        GPIOHBCTL_TypeDef           GPIOHBCTL_Bit;
    };
    union
    {
        volatile uint32_t           RCC2;
        RCC2_TypeDef                RCC2_Bit;
    };
    const uint32_t                  reserved4[2];
    union
    {
        volatile uint32_t           MOSCCTL;
        MOSCCTL_TypeDef             MOSCCTL_Bit;
    };
    const uint32_t                  reserved5[28];
    union
    {
        volatile uint32_t           RMCTL;
        RMCTL_TypeDef               RMCTL_Bit;
    };
    const uint32_t                  reserved6[3];
    union
    {
        volatile const uint32_t     RCGC0;
        RCGC0_TypeDef               RCGC0_Bit;
    };
    union
    {
        volatile const uint32_t     RCGC1;
        RCGC1_TypeDef               RCGC1_Bit;
    };
    union
    {
        volatile const uint32_t     RCGC2;
        RCGC2_TypeDef               RCGC2_Bit;
    };
    const uint32_t                  reserved7[1];
    union
    {
        volatile const uint32_t     SCGC0;
        SCGC0_TypeDef               SCGC0_Bit;
    };
    union
    {
        volatile const uint32_t     SCGC1;
        SCGC1_TypeDef               SCGC1_Bit;
    };
    union
    {
        volatile const uint32_t     SCGC2;
        SCGC2_TypeDef               SCGC2_Bit;
    };
    const uint32_t                  reserved8[1];
    union
    {
        volatile const uint32_t     DCGC0;
        DCGC0_TypeDef               DCGC0_Bit;
    };
    union
    {
        volatile const uint32_t     DCGC1;
        DCGC1_TypeDef               DCGC1_Bit;
    };
    union
    {
        volatile const uint32_t     DCGC2;
        DCGC2_TypeDef               DCGC2_Bit;
    };
    const uint32_t                  reserved9[1];
    union
    {
        volatile const uint32_t     FMPRE0_ALIAS;
        FMPRE_TypeDef               FMPRE0_ALIAS_Bit;
    };
    union
    {
        volatile const uint32_t     FMPPE0_ALIAS;
        FMPPE_TypeDef               FMPPE0_ALIAS_Bit;
    };
    const uint32_t                  reserved10[3];
    union
    {
        volatile uint32_t           DSLPCLKCFG;
        DSLPCLKCFG_TypeDef          DSLPCLKCFG_Bit;
    };
    const uint32_t                  reserved11[1];
    union
    {
        volatile uint32_t           SYSPROP;
        SYSPROP_TypeDef             SYSPROP_Bit;
    };
    union
    {
        volatile uint32_t           PIOSCCAL;
        PIOSCCAL_TypeDef            PIOSCCAL_Bit;
    };
    union
    {
        volatile uint32_t           PIOSCSTAT;
        PIOSCSTAT_TypeDef           PIOSCSTAT_Bit;
    };
    const uint32_t                  reserved12[2];
    union
    {
        volatile uint32_t           PLLFREQ0;
        PLLFREQ0_TypeDef            PLLFREQ0_Bit;
    };
    union
    {
        volatile uint32_t           PLLFREQ1;
        PLLFREQ1_TypeDef            PLLFREQ1_Bit;
    };
    union
    {
        volatile uint32_t           PLLSTAT;
        PLLSTAT_TypeDef             PLLSTAT_Bit;
    };
    const uint32_t                  reserved13[7];
    union
    {
        volatile uint32_t           SLSRWRCFG;
        SLSRWRCFG_TypeDef           SLSRWRCFG_Bit;
    };
    union
    {
        volatile uint32_t           DSLSRWRCFG;
        DSLSRWRCFG_TypeDef          DSLSRWRCFG_Bit;
    };
    union
    {
        volatile uint32_t           DC9;
        DC9_TypeDef                 DC9_Bit;
    };
    const uint32_t                  reserved14[3];
    union
    {
        volatile uint32_t           NVMSTAT;
        NVMSTAT_TypeDef             NVMSTAT_Bit;
    };
    const uint32_t                  reserved15[4];
    union
    {
        volatile uint32_t           LDOSPCTL;
        LDOSPCTL_TypeDef            LDOSPCTL_Bit;
    };
    union
    {
        volatile uint32_t           LDOSPCAL;
        LDOSPCAL_TypeDef            LDOSPCAL_Bit;
    };
    union
    {
        volatile uint32_t           LDODPCTL;
        LDODPCTL_TypeDef            LDODPCTL_Bit;
    };
    union
    {
        volatile uint32_t           LDODPCAL;
        LDODPCAL_TypeDef            LDODPCAL_Bit;
    };
    const uint32_t                  reserved16[2];
    union
    {
        volatile uint32_t           SDPMST;
        SDPMST_TypeDef              SDPMST_Bit;
    };
    union
    {
        volatile uint32_t           BOOTCFG;
        SDPMST_TypeDef              BOOTCFG_Bit;
    };
    const uint32_t                  reserved17[3];
    union
    {
        volatile uint32_t           USER_REG0;
        USER_REG_TypeDef            USER_REG0_Bit;
    };
    union
    {
        volatile uint32_t           USER_REG1;
        USER_REG_TypeDef            USER_REG1_Bit;
    };
    union
    {
        volatile uint32_t           USER_REG2;
        USER_REG_TypeDef            USER_REG2_Bit;
    };
    union
    {
        volatile uint32_t           USER_REG3;
        USER_REG_TypeDef            USER_REG3_Bit;
    };
    const uint32_t                  reserved18[4];
    union
    {
        volatile const uint32_t     FMPRE0;
        FMPRE_TypeDef               FMPRE0_Bit;
    };
    union
    {
        volatile const uint32_t     FMPRE1;
        FMPRE_TypeDef               FMPRE1_Bit;
    };
    union
    {
        volatile const uint32_t     FMPRE2;
        FMPRE_TypeDef               FMPRE2_Bit;
    };
    union
    {
        volatile const uint32_t     FMPRE3;
        FMPRE_TypeDef               FMPRE3_Bit;
    };
    const uint32_t                  reserved19[60];
    union
    {
        volatile const uint32_t     PP[24];
        const PERIPHERAL_TypeDef    PP_Bit[24];
    };
    const uint32_t                  reserved20[40];
    union
    {
        volatile const uint32_t     FMPPE0;
        const FMPPE_TypeDef         FMPPE0_Bit;
    };
    union
    {
        volatile const uint32_t     FMPPE1;
        const FMPPE_TypeDef         FMPPE1_Bit;
    };
    union
    {
        volatile const uint32_t     FMPPE2;
        const FMPPE_TypeDef         FMPPE2_Bit;
    };
    union
    {
        volatile const uint32_t     FMPPE3;
        const FMPPE_TypeDef         FMPPE3_Bit;
    };
    const uint32_t                  reserved21[60];
    union
    {
        volatile uint32_t           SR[24];
        PERIPHERAL_TypeDef          SR_Bit[24];
    };
    const uint32_t                  reserved22[40];
    union
    {
        volatile uint32_t           RCGC[24];
        PERIPHERAL_TypeDef          RCGC_Bit[24];
    };
    const uint32_t                  reserved23[40];
    union
    {
        volatile uint32_t           SCGC[24];
        PERIPHERAL_TypeDef          SCGC_Bit[24];
    };
    const uint32_t                  reserved24[40];
    union
    {
        volatile uint32_t           DCGC[24];
        PERIPHERAL_TypeDef          DCGC_Bit[24];
    };
    const uint32_t                  reserved25[104];
    union
    {
        volatile uint32_t           PR[24];
        PERIPHERAL_TypeDef          PR_Bit[24];
    };

}SYSCTL_TypeDef;


typedef volatile struct
{
    union
    {
        volatile uint32_t                   DID0[32];
        BITBANDING_DID0_TypeDef             DID0_Bit;
    };
    union
    {
        volatile uint32_t                   DID1[32];
        BITBANDING_DID1_TypeDef             DID1_Bit;
    };
    union
    {
        volatile const uint32_t             DC0[32];
        BITBANDING_DC0_TypeDef              DC0_Bit;
    };
    const uint32_t                          reserved[1*32];
    union
    {
        volatile const uint32_t             DC1[32];
        BITBANDING_DC1_TypeDef              DC1_Bit;
    };
    union
    {
        volatile const uint32_t             DC2[32];
        BITBANDING_DC2_TypeDef              DC2_Bit;
    };
    union
    {
        volatile const uint32_t             DC3[32];
        BITBANDING_DC3_TypeDef              DC3_Bit;
    };
    union
    {
        volatile const uint32_t             DC4[32];
        BITBANDING_DC4_TypeDef              DC4_Bit;
    };
    union
    {
        volatile const uint32_t             DC5[32];
        BITBANDING_DC5_TypeDef              DC5_Bit;
    };
    union
    {
        volatile const uint32_t             DC6[32];
        BITBANDING_DC6_TypeDef              DC6_Bit;
    };
    union
    {
        volatile const uint32_t             DC7[32];
        BITBANDING_DC7_TypeDef              DC7_Bit;
    };
    union
    {
        volatile const uint32_t             DC8[32];
        BITBANDING_DC8_TypeDef              DC8_Bit;
    };
    union
    {
        volatile uint32_t                   PBORCTL[32];
        BITBANDING_PBORCTL_TypeDef          PBORCTL_Bit;
    };
    const uint32_t                          reserved1[3*32];
    union
    {
        volatile const uint32_t             SRCR0[32];
        BITBANDING_SRCR0_TypeDef            SRCR0_Bit;
    };
    union
    {
        volatile const uint32_t             SRCR1[32];
        BITBANDING_SRCR1_TypeDef            SRCR1_Bit;
    };
    union
    {
        volatile const uint32_t             SRCR2[32];
        BITBANDING_SRCR2_TypeDef            SRCR2_Bit;
    };
    const uint32_t                          reserved2[1*32];
    union
    {
        volatile uint32_t                   RIS[32];
        BITBANDING_RIS_TypeDef              RIS_Bit;
    };
    union
    {
        volatile uint32_t                   IMC[32];
        BITBANDING_IMC_TypeDef              IMC_Bit;
    };
    union
    {
        volatile uint32_t                   MISC[32];
        BITBANDING_MISC_TypeDef             MISC_Bit;
    };
    union
    {
        volatile uint32_t                   RESC[32];
        BITBANDING_RESC_TypeDef             RESC_Bit;
    };
    union
    {
        volatile uint32_t                   RCC[32];
        BITBANDING_RCC_TypeDef              RCC_Bit;
    };
    const uint32_t                          reserved3[2*32];
    union
    {
        volatile uint32_t                   GPIOHBCTL[32];
        BITBANDING_GPIOHBCTL_TypeDef        GPIOHBCTL_Bit;
    };
    union
    {
        volatile uint32_t                   RCC2[32];
        BITBANDING_RCC2_TypeDef             RCC2_Bit;
    };
    const uint32_t                          reserved4[2*32];
    union
    {
        volatile uint32_t                   MOSCCTL[32];
        BITBANDING_MOSCCTL_TypeDef          MOSCCTL_Bit;
    };
    const uint32_t                          reserved5[28*32];
    union
    {
        volatile uint32_t                   RMCTL[32];
        BITBANDING_RMCTL_TypeDef            RMCTL_Bit;
    };
    const uint32_t                          reserved6[3*32];
    union
    {
        volatile const uint32_t             RCGC0[32];
        BITBANDING_RCGC0_TypeDef            RCGC0_Bit;
    };
    union
    {
        volatile const uint32_t             RCGC1[32];
        BITBANDING_RCGC1_TypeDef            RCGC1_Bit;
    };
    union
    {
        volatile const uint32_t             RCGC2[32];
        BITBANDING_RCGC2_TypeDef            RCGC2_Bit;
    };
    const uint32_t                          reserved7[1*32];
    union
    {
        volatile const uint32_t             SCGC0[32];
        BITBANDING_SCGC0_TypeDef            SCGC0_Bit;
    };
    union
    {
        volatile const uint32_t             SCGC1[32];
        BITBANDING_SCGC1_TypeDef            SCGC1_Bit;
    };
    union
    {
        volatile const uint32_t             SCGC2[32];
        BITBANDING_SCGC2_TypeDef            SCGC2_Bit;
    };
    const uint32_t                          reserved8[1*32];
    union
    {
        volatile const uint32_t             DCGC0[32];
        BITBANDING_DCGC0_TypeDef            DCGC0_Bit;
    };
    union
    {
        volatile const uint32_t             DCGC1[32];
        BITBANDING_DCGC1_TypeDef            DCGC1_Bit;
    };
    union
    {
        volatile const uint32_t             DCGC2[32];
        BITBANDING_DCGC2_TypeDef            DCGC2_Bit;
    };
    const uint32_t                          reserved9[1*32];
    union
    {
        volatile const uint32_t             FMPRE0_ALIAS[32];
        BITBANDING_FMPRE_TypeDef            FMPRE0_ALIAS_Bit;
    };
    union
    {
        volatile const uint32_t             FMPPE0_ALIAS[32];
        BITBANDING_FMPPE_TypeDef            FMPPE0_ALIAS_Bit;
    };
    const uint32_t                          reserved10[3*32];
    union
    {
        volatile uint32_t                   DSLPCLKCFG[32];
        BITBANDING_DSLPCLKCFG_TypeDef       DSLPCLKCFG_Bit;
    };
    const uint32_t                          reserved11[1*32];
    union
    {
        volatile uint32_t                   SYSPROP[32];
        BITBANDING_SYSPROP_TypeDef          SYSPROP_Bit;
    };
    union
    {
        volatile uint32_t                   PIOSCCAL[32];
        BITBANDING_PIOSCCAL_TypeDef         PIOSCCAL_Bit;
    };
    union
    {
        volatile uint32_t                   PIOSCSTAT[32];
        BITBANDING_PIOSCSTAT_TypeDef        PIOSCSTAT_Bit;
    };
    const uint32_t                          reserved12[2*32];
    union
    {
        volatile uint32_t                   PLLFREQ0[32];
        BITBANDING_PLLFREQ0_TypeDef         PLLFREQ0_Bit;
    };
    union
    {
        volatile uint32_t                   PLLFREQ1[32];
        BITBANDING_PLLFREQ1_TypeDef         PLLFREQ1_Bit;
    };
    union
    {
        volatile uint32_t                   PLLSTAT[32];
        BITBANDING_PLLSTAT_TypeDef          PLLSTAT_Bit;
    };
    const uint32_t                          reserved13[7*32];
    union
    {
        volatile uint32_t                   SLSRWRCFG[32];
        BITBANDING_SLSRWRCFG_TypeDef        SLSRWRCFG_Bit;
    };
    union
    {
        volatile uint32_t                   DSLSRWRCFG[32];
        BITBANDING_DSLSRWRCFG_TypeDef       DSLSRWRCFG_Bit;
    };
    union
    {
        volatile uint32_t                   DC9[32];
        BITBANDING_DC9_TypeDef              DC9_Bit;
    };
    const uint32_t                          reserved14[3*32];
    union
    {
        volatile uint32_t                   NVMSTAT[32];
        BITBANDING_NVMSTAT_TypeDef          NVMSTAT_Bit;
    };
    const uint32_t                          reserved15[4*32];
    union
    {
        volatile uint32_t                   LDOSPCTL[32];
        BITBANDING_LDOSPCTL_TypeDef         LDOSPCTL_Bit;
    };
    union
    {
        volatile uint32_t                   LDOSPCAL[32];
        BITBANDING_LDOSPCAL_TypeDef         LDOSPCAL_Bit;
    };
    union
    {
        volatile uint32_t                   LDODPCTL[32];
        BITBANDING_LDODPCTL_TypeDef         LDODPCTL_Bit;
    };
    union
    {
        volatile uint32_t                   LDODPCAL[32];
        BITBANDING_LDODPCAL_TypeDef         LDODPCAL_Bit;
    };
    const uint32_t                          reserved16[2*32];
    union
    {
        volatile uint32_t                   SDPMST[32];
        BITBANDING_SDPMST_TypeDef           SDPMST_Bit;
    };
    union
    {
        volatile uint32_t                   BOOTCFG[32];
        BITBANDING_BOOTCFG_TypeDef          BOOTCFG_Bit;
    };
    const uint32_t                          reserved17[3*32];
    union
    {
        volatile uint32_t                   USER_REG0[32];
        USER_REG_TypeDef                    USER_REG0_Bit;
    };
    union
    {
        volatile uint32_t                   USER_REG1[32];
        USER_REG_TypeDef                    USER_REG1_Bit;
    };
    union
    {
        volatile uint32_t                   USER_REG2[32];
        USER_REG_TypeDef                    USER_REG2_Bit;
    };
    union
    {
        volatile uint32_t                   USER_REG3[32];
        USER_REG_TypeDef                    USER_REG3_Bit;
    };
    const uint32_t                          reserved18[4*32];
    union
    {
      volatile const uint32_t               FMPRE0[32];
      BITBANDING_FMPRE_TypeDef              FMPRE0_Bit;
    };
    union
    {
      volatile const uint32_t               FMPRE1[32];
      BITBANDING_FMPRE_TypeDef              FMPRE1_Bit;
    };
    union
    {
      volatile const uint32_t               FMPRE2[32];
      BITBANDING_FMPRE_TypeDef              FMPRE2_Bit;
    };
    union
    {
      volatile const uint32_t               FMPRE3[32];
      BITBANDING_FMPRE_TypeDef              FMPRE3_Bit;
    };
    const uint32_t                          reserved19[60*32];
    union
    {
        volatile const uint32_t             PP[24][32];
        const BITBANDING_PERIPHERAL_TypeDef PP_Bit[24];
    };
    const uint32_t                          reserved20[40*32];
    union
    {
        volatile const uint32_t             FMPPE0[32];
        const BITBANDING_FMPPE_TypeDef      FMPPE0_Bit;
    };
    union
    {
        volatile const uint32_t             FMPPE1[32];
        const BITBANDING_FMPPE_TypeDef      FMPPE1_Bit;
    };
    union
    {
        volatile const uint32_t             FMPPE2[32];
        const BITBANDING_FMPPE_TypeDef      FMPPE2_Bit;
    };
    union
    {
        volatile const uint32_t             FMPPE3[32];
        const BITBANDING_FMPPE_TypeDef      FMPPE3_Bit;
    };
    const uint32_t                          reserved21[60*32];
    union
    {
        volatile uint32_t                   SR[24][32];
        BITBANDING_PERIPHERAL_TypeDef       SR_Bit[24];
    };
    const uint32_t                          reserved22[40*32];
    union
    {
        volatile uint32_t                   RCGC[24][32];
        BITBANDING_PERIPHERAL_TypeDef       RCGC_Bit[24];
    };
    const uint32_t                          reserved23[40*32];
    union
    {
        volatile uint32_t                   SCGC[24][32];
        BITBANDING_PERIPHERAL_TypeDef       SCGC_Bit[24];
    };
    const uint32_t                          reserved24[40*32];
    union
    {
        volatile uint32_t                   DCGC[24][32];
        BITBANDING_PERIPHERAL_TypeDef       DCGC_Bit[24];
    };
    const uint32_t                          reserved25[104*32];
    union
    {
        volatile uint32_t                   PR[24][32];
        BITBANDING_PERIPHERAL_TypeDef       PR_Bit[24];
    };

}SYSCTL_BITBANDING_TypeDef;


#define SYSCTL                 (((SYSCTL_TypeDef*)(SYSCTL_BASE)))
#define SYSCTL_BITBANDING      (((SYSCTL_BITBANDING_TypeDef*)(SYSCTL_BITBANDING_BASE+(SYSCTL_OFFSET*32u))))


#define SYSCTL_DID0_OFFSET          (0x0000u)
#define SYSCTL_DID1_OFFSET          (0x0004u)
#define SYSCTL_PBORCTL_OFFSET       (0x0030u)
#define SYSCTL_RIS_OFFSET           (0x0050u)
#define SYSCTL_IMC_OFFSET           (0x0054u)
#define SYSCTL_MISC_OFFSET          (0x0058u)
#define SYSCTL_RESC_OFFSET          (0x005Cu)
#define SYSCTL_RCC_OFFSET           (0x0060u)
#define SYSCTL_GPIOHBCTL_OFFSET     (0x006Cu)
#define SYSCTL_RCC2_OFFSET          (0x0070u)
#define SYSCTL_MOSCCTL_OFFSET       (0x007Cu)
#define SYSCTL_RMCTL_OFFSET         (0x00F0u)
#define SYSCTL_FMPRE0_ALIAS_OFFSET  (0x0130u)
#define SYSCTL_FMPPE0_ALIAS_OFFSET  (0x0134u)
#define SYSCTL_DSLPCLKCFG_OFFSET    (0x0144u)
#define SYSCTL_SYSPROP_OFFSET       (0x014Cu)
#define SYSCTL_PIOSCCAL_OFFSET      (0x0150u)
#define SYSCTL_PIOSCSTAT_OFFSET     (0x0154u)
#define SYSCTL_PLLFREQ0_OFFSET      (0x0160u)
#define SYSCTL_PLLFREQ1_OFFSET      (0x0164u)
#define SYSCTL_PLLSTAT_OFFSET       (0x0168u)
#define SYSCTL_SLSRWRCFG_OFFSET     (0x0188u)
#define SYSCTL_DSLSRWRCFG_OFFSET    (0x018Cu)
#define SYSCTL_LDOSPCTL_OFFSET      (0x01B4u)
#define SYSCTL_LDOSPCAL_OFFSET      (0x01B8u)
#define SYSCTL_LDODPCTL_OFFSET      (0x01BCu)
#define SYSCTL_LDODPCAL_OFFSET      (0x01C0u)
#define SYSCTL_SDPMST_OFFSET        (0x01CCu)

#define SYSCTL_BOOTCFG_OFFSET       (0x01D0u)

#define SYSCTL_USER_REG0_OFFSET     (0x01E0u)
#define SYSCTL_USER_REG1_OFFSET     (0x01E4u)
#define SYSCTL_USER_REG2_OFFSET     (0x01E8u)
#define SYSCTL_USER_REG3_OFFSET     (0x01ECu)

#define SYSCTL_FMPRE0_OFFSET        (0x0200u)
#define SYSCTL_FMPRE1_OFFSET        (0x0204u)
#define SYSCTL_FMPRE2_OFFSET        (0x0208u)
#define SYSCTL_FMPRE3_OFFSET        (0x020Cu)

#define SYSCTL_PPWD_OFFSET          (0x0300u)
#define SYSCTL_PPTIMER_OFFSET       (0x0304u)
#define SYSCTL_PPGPIO_OFFSET        (0x0308u)
#define SYSCTL_PPDMA_OFFSET         (0x030Cu)
#define SYSCTL_PPHIB_OFFSET         (0x0314u)
#define SYSCTL_PPUART_OFFSET        (0x0318u)
#define SYSCTL_PPSSI_OFFSET         (0x031Cu)
#define SYSCTL_PPI2C_OFFSET         (0x0320u)
#define SYSCTL_PPUSB_OFFSET         (0x0328u)
#define SYSCTL_PPCAN_OFFSET         (0x0334u)
#define SYSCTL_PPADC_OFFSET         (0x0338u)
#define SYSCTL_PPACMP_OFFSET        (0x033Cu)
#define SYSCTL_PPPWM_OFFSET         (0x0340u)
#define SYSCTL_PPQEI_OFFSET         (0x0344u)
#define SYSCTL_PPEEPROM_OFFSET      (0x0358u)
#define SYSCTL_PPWTIMER_OFFSET      (0x035Cu)

#define SYSCTL_FMPPE0_OFFSET        (0x0400u)
#define SYSCTL_FMPPE1_OFFSET        (0x0404u)
#define SYSCTL_FMPPE2_OFFSET        (0x0408u)
#define SYSCTL_FMPPE3_OFFSET        (0x040Cu)

#define SYSCTL_SRWD_OFFSET          (0x0500u)
#define SYSCTL_SRTIMER_OFFSET       (0x0504u)
#define SYSCTL_SRGPIO_OFFSET        (0x0508u)
#define SYSCTL_SRDMA_OFFSET         (0x050Cu)
#define SYSCTL_SRHIB_OFFSET         (0x0514u)
#define SYSCTL_SRUART_OFFSET        (0x0518u)
#define SYSCTL_SRSSI_OFFSET         (0x051Cu)
#define SYSCTL_SRI2C_OFFSET         (0x0520u)
#define SYSCTL_SRUSB_OFFSET         (0x0528u)
#define SYSCTL_SRCAN_OFFSET         (0x0534u)
#define SYSCTL_SRADC_OFFSET         (0x0538u)
#define SYSCTL_SRACMP_OFFSET        (0x053Cu)
#define SYSCTL_SRPWM_OFFSET         (0x0540u)
#define SYSCTL_SRQEI_OFFSET         (0x0544u)
#define SYSCTL_SREEPROM_OFFSET      (0x0558u)
#define SYSCTL_SRWTIMER_OFFSET      (0x055Cu)

#define SYSCTL_RCGCWD_OFFSET          (0x0600u)
#define SYSCTL_RCGCTIMER_OFFSET       (0x0604u)
#define SYSCTL_RCGCGPIO_OFFSET        (0x0608u)
#define SYSCTL_RCGCDMA_OFFSET         (0x060Cu)
#define SYSCTL_RCGCHIB_OFFSET         (0x0614u)
#define SYSCTL_RCGCUART_OFFSET        (0x0618u)
#define SYSCTL_RCGCSSI_OFFSET         (0x061Cu)
#define SYSCTL_RCGCI2C_OFFSET         (0x0620u)
#define SYSCTL_RCGCUSB_OFFSET         (0x0628u)
#define SYSCTL_RCGCCAN_OFFSET         (0x0634u)
#define SYSCTL_RCGCADC_OFFSET         (0x0638u)
#define SYSCTL_RCGCACMP_OFFSET        (0x063Cu)
#define SYSCTL_RCGCPWM_OFFSET         (0x0640u)
#define SYSCTL_RCGCQEI_OFFSET         (0x0644u)
#define SYSCTL_RCGCEEPROM_OFFSET      (0x0658u)
#define SYSCTL_RCGCWTIMER_OFFSET      (0x065Cu)

#define SYSCTL_SCGCWD_OFFSET          (0x0700u)
#define SYSCTL_SCGCTIMER_OFFSET       (0x0704u)
#define SYSCTL_SCGCGPIO_OFFSET        (0x0708u)
#define SYSCTL_SCGCDMA_OFFSET         (0x070Cu)
#define SYSCTL_SCGCHIB_OFFSET         (0x0714u)
#define SYSCTL_SCGCUART_OFFSET        (0x0718u)
#define SYSCTL_SCGCSSI_OFFSET         (0x071Cu)
#define SYSCTL_SCGCI2C_OFFSET         (0x0720u)
#define SYSCTL_SCGCUSB_OFFSET         (0x0728u)
#define SYSCTL_SCGCCAN_OFFSET         (0x0734u)
#define SYSCTL_SCGCADC_OFFSET         (0x0738u)
#define SYSCTL_SCGCACMP_OFFSET        (0x073Cu)
#define SYSCTL_SCGCPWM_OFFSET         (0x0740u)
#define SYSCTL_SCGCQEI_OFFSET         (0x0744u)
#define SYSCTL_SCGCEEPROM_OFFSET      (0x0758u)
#define SYSCTL_SCGCWTIMER_OFFSET      (0x075Cu)

#define SYSCTL_DCGCWD_OFFSET          (0x0800u)
#define SYSCTL_DCGCTIMER_OFFSET       (0x0804u)
#define SYSCTL_DCGCGPIO_OFFSET        (0x0808u)
#define SYSCTL_DCGCDMA_OFFSET         (0x080Cu)
#define SYSCTL_DCGCHIB_OFFSET         (0x0814u)
#define SYSCTL_DCGCUART_OFFSET        (0x0818u)
#define SYSCTL_DCGCSSI_OFFSET         (0x081Cu)
#define SYSCTL_DCGCI2C_OFFSET         (0x0820u)
#define SYSCTL_DCGCUSB_OFFSET         (0x0828u)
#define SYSCTL_DCGCCAN_OFFSET         (0x0834u)
#define SYSCTL_DCGCADC_OFFSET         (0x0838u)
#define SYSCTL_DCGCACMP_OFFSET        (0x083Cu)
#define SYSCTL_DCGCPWM_OFFSET         (0x0840u)
#define SYSCTL_DCGCQEI_OFFSET         (0x0844u)
#define SYSCTL_DCGCEEPROM_OFFSET      (0x0858u)
#define SYSCTL_DCGCWTIMER_OFFSET      (0x085Cu)

#define SYSCTL_PRWD_OFFSET          (0x0A00u)
#define SYSCTL_PRTIMER_OFFSET       (0x0A04u)
#define SYSCTL_PRGPIO_OFFSET        (0x0A08u)
#define SYSCTL_PRDMA_OFFSET         (0x0A0Cu)
#define SYSCTL_PRHIB_OFFSET         (0x0A14u)
#define SYSCTL_PRUART_OFFSET        (0x0A18u)
#define SYSCTL_PRSSI_OFFSET         (0x0A1Cu)
#define SYSCTL_PRI2C_OFFSET         (0x0A20u)
#define SYSCTL_PRUSB_OFFSET         (0x0A28u)
#define SYSCTL_PRCAN_OFFSET         (0x0A34u)
#define SYSCTL_PRADC_OFFSET         (0x0A38u)
#define SYSCTL_PRACMP_OFFSET        (0x0A3Cu)
#define SYSCTL_PRPWM_OFFSET         (0x0A40u)
#define SYSCTL_PRQEI_OFFSET         (0x0A44u)
#define SYSCTL_PREEPROM_OFFSET      (0x0A58u)
#define SYSCTL_PRWTIMER_OFFSET      (0x0A5Cu)
#define SYSCTL_DC0_OFFSET     (0x0008u)
#define SYSCTL_DC1_OFFSET     (0x0010u)
#define SYSCTL_DC2_OFFSET     (0x0014u)
#define SYSCTL_DC3_OFFSET     (0x0018u)
#define SYSCTL_DC4_OFFSET     (0x001Cu)
#define SYSCTL_DC5_OFFSET     (0x0020u)
#define SYSCTL_DC6_OFFSET     (0x0024u)
#define SYSCTL_DC7_OFFSET     (0x0028u)
#define SYSCTL_DC8_OFFSET     (0x002Cu)
#define SYSCTL_SRCR0_OFFSET     (0x0040u)
#define SYSCTL_SRCR1_OFFSET     (0x0044u)
#define SYSCTL_SRCR2_OFFSET     (0x0048u)
#define SYSCTL_RCGC0_OFFSET     (0x0100u)
#define SYSCTL_RCGC1_OFFSET     (0x0104u)
#define SYSCTL_RCGC2_OFFSET     (0x0108u)
#define SYSCTL_SCGC0_OFFSET     (0x0110u)
#define SYSCTL_SCGC1_OFFSET     (0x0114u)
#define SYSCTL_SCGC2_OFFSET     (0x0118u)
#define SYSCTL_DCGC0_OFFSET     (0x0120u)
#define SYSCTL_DCGC1_OFFSET     (0x0124u)
#define SYSCTL_DCGC2_OFFSET     (0x0128u)
#define SYSCTL_DC9_OFFSET     (0x0190u)
#define SYSCTL_NVMSTAT_OFFSET     (0x01A0u)




/*******************************************************************************************
************************************ 1 DID0 *********************************************
*******************************************************************************************/
#define SYSCTL_DID0         (((DID0_TypeDef*)(SYSCTL_BASE+SYSCTL_DID0_OFFSET )))
#define SYSCTL_DID0_R       (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DID0_OFFSET)))
#define SYSCTL_BITBANDING_DID0      (((BITBANDING_DID0_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DID0_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DID0_R_MINOR_MASK    ((uint32_t)0x000000FFu)
#define SYSCTL_DID0_R_MINOR_BIT     (0u)
#define SYSCTL_DID0_R_MINOR_INI     ((uint32_t)0x00000000u)
#define SYSCTL_DID0_R_MINOR_1METAL  ((uint32_t)0x00000001u)
#define SYSCTL_DID0_R_MINOR_2METAL  ((uint32_t)0x00000002u)
#define SYSCTL_DID0_R_MINOR_3METAL  ((uint32_t)0x00000003u)
#define SYSCTL_DID0_R_MINOR_4METAL  ((uint32_t)0x00000004u)

#define SYSCTL_DID0_MINOR_MASK      ((uint32_t)0x000000FFu)
#define SYSCTL_DID0_MINOR_INI       ((uint32_t)0x00000000u)
#define SYSCTL_DID0_MINOR_1METAL    ((uint32_t)0x00000001u)
#define SYSCTL_DID0_MINOR_2METAL    ((uint32_t)0x00000002u)
#define SYSCTL_DID0_MINOR_3METAL    ((uint32_t)0x00000003u)
#define SYSCTL_DID0_MINOR_4METAL    ((uint32_t)0x00000004u)
/*--------*/

/*--------*/
#define SYSCTL_DID0_R_MAJOR_MASK    ((uint32_t)0x0000FF00u)
#define SYSCTL_DID0_R_MAJOR_BIT     ((uint32_t)8)
#define SYSCTL_DID0_R_MAJOR_REVA    ((uint32_t)0x00000000u)
#define SYSCTL_DID0_R_MAJOR_REVB    ((uint32_t)0x00000100u)
#define SYSCTL_DID0_R_MAJOR_REVC    ((uint32_t)0x00000200u)
#define SYSCTL_DID0_R_MAJOR_REVD    ((uint32_t)0x00000300u)
#define SYSCTL_DID0_R_MAJOR_REVE    ((uint32_t)0x00000400u)
#define SYSCTL_DID0_R_MAJOR_REVF    ((uint32_t)0x00000500u)

#define SYSCTL_DID0_MAJOR_MASK      ((uint32_t)0x000000FFu)
#define SYSCTL_DID0_MAJOR_REVA      ((uint32_t)0x00000000u)
#define SYSCTL_DID0_MAJOR_REVB      ((uint32_t)0x00000001u)
#define SYSCTL_DID0_MAJOR_REVC      ((uint32_t)0x00000002u)
#define SYSCTL_DID0_MAJOR_REVD      ((uint32_t)0x00000003u)
#define SYSCTL_DID0_MAJOR_REVE      ((uint32_t)0x00000004u)
#define SYSCTL_DID0_MAJOR_REVF      ((uint32_t)0x00000005u)
/*--------*/

/*--------*/
#define SYSCTL_DID0_R_CLASS_MASK    ((uint32_t)0x00FF0000u)
#define SYSCTL_DID0_R_CLASS_BIT     (16u)
#define SYSCTL_DID0_R_CLASS_TIVAC   ((uint32_t)0x00050000u)

#define SYSCTL_DID0_CLASS_MASK      ((uint32_t)0x000000FFu)
#define SYSCTL_DID0_CLASS_TIVAC     ((uint32_t)0x00000005u)
/*--------*/

/*--------*/
#define SYSCTL_DID0_R_VER_MASK      ((uint32_t)0x70000000u)
#define SYSCTL_DID0_R_VER_BIT       (28u)
#define SYSCTL_DID0_R_VER_DID0      ((uint32_t)0x10000000u)

#define SYSCTL_DID0_VER_MASK        ((uint32_t)0x00000007u)
#define SYSCTL_DID0_VER_DID0        ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************ 2 DID1 *********************************************
******************************************************************************************/
#define SYSCTL_DID1           (((DID1_TypeDef*)(SYSCTL_BASE+SYSCTL_DID1_OFFSET )))
#define SYSCTL_DID1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DID1_OFFSET)))
#define SYSCTL_BITBANDING_DID1      (((BITBANDING_DID1_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DID1_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DID1_R_QUAL_MASK     ((uint32_t)0x00000003u)
#define SYSCTL_DID1_R_QUAL_BIT      (0u)
#define SYSCTL_DID1_R_QUAL_ENG      ((uint32_t)0x00000000u)
#define SYSCTL_DID1_R_QUAL_PILOT    ((uint32_t)0x00000001u)
#define SYSCTL_DID1_R_QUAL_FULLY    ((uint32_t)0x00000002u)

#define SYSCTL_DID1_QUAL_MASK       ((uint32_t)0x00000003u)
#define SYSCTL_DID1_QUAL_ENG        ((uint32_t)0x00000000u)
#define SYSCTL_DID1_QUAL_PILOT      ((uint32_t)0x00000001u)
#define SYSCTL_DID1_QUAL_FULLY      ((uint32_t)0x00000002u)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_ROHS_MASK     ((uint32_t)0x00000004u)
#define SYSCTL_DID1_R_ROHS_BIT      (2u)
#define SYSCTL_DID1_R_ROHS_NOROHS   ((uint32_t)0x00000000u)
#define SYSCTL_DID1_R_ROHS_ROHS     ((uint32_t)0x00000004u)

#define SYSCTL_DID1_ROHS_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DID1_ROHS_NOROHS     ((uint32_t)0x00000000u)
#define SYSCTL_DID1_ROHS_ROHS       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_PKG_MASK      ((uint32_t)0x00000018u)
#define SYSCTL_DID1_R_PKG_BIT       (3u)
#define SYSCTL_DID1_R_PKG_LQFP      ((uint32_t)0x00000008u)
#define SYSCTL_DID1_R_PKG_BGA       ((uint32_t)0x00000010u)

#define SYSCTL_DID1_PKG_MASK        ((uint32_t)0x00000003u)
#define SYSCTL_DID1_PKG_LQFP        ((uint32_t)0x00000001u)
#define SYSCTL_DID1_PKG_BGA         ((uint32_t)0x00000002u)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_TEMP_MASK     ((uint32_t)0x000000E0u)
#define SYSCTL_DID1_R_TEMP_BIT      (5u)
#define SYSCTL_DID1_R_TEMP_IND      ((uint32_t)0x00000020u)
#define SYSCTL_DID1_R_TEMP_EXT      ((uint32_t)0x00000040u)
#define SYSCTL_DID1_R_TEMP_BOTH     ((uint32_t)0x00000060u)

#define SYSCTL_DID1_TEMP_MASK       ((uint32_t)0x00000007u)
#define SYSCTL_DID1_TEMP_IND        ((uint32_t)0x00000001u)
#define SYSCTL_DID1_TEMP_EXT        ((uint32_t)0x00000002u)
#define SYSCTL_DID1_TEMP_BOTH       ((uint32_t)0x00000003u)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_PINCOUNT_MASK ((uint32_t)0x0000E000u)
#define SYSCTL_DID1_R_PINCOUNT_BIT  (13u)
#define SYSCTL_DID1_R_PINCOUNT_100  ((uint32_t)0x00004000u)
#define SYSCTL_DID1_R_PINCOUNT_64   ((uint32_t)0x00006000u)
#define SYSCTL_DID1_R_PINCOUNT_144  ((uint32_t)0x00008000u)
#define SYSCTL_DID1_R_PINCOUNT_157  ((uint32_t)0x0000A000u)
#define SYSCTL_DID1_R_PINCOUNT_168  ((uint32_t)0x0000C000u)

#define SYSCTL_DID1_PINCOUNT_MASK   ((uint32_t)0x00000007u)
#define SYSCTL_DID1_PINCOUNT_100    ((uint32_t)0x00000002u)
#define SYSCTL_DID1_PINCOUNT_64     ((uint32_t)0x00000003u)
#define SYSCTL_DID1_PINCOUNT_144    ((uint32_t)0x00000004u)
#define SYSCTL_DID1_PINCOUNT_157    ((uint32_t)0x00000005u)
#define SYSCTL_DID1_PINCOUNT_168    ((uint32_t)0x00000006u)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_PARTNO_MASK       ((uint32_t)0x00FF0000u)
#define SYSCTL_DID1_R_PARTNO_BIT        (16u)
#define SYSCTL_DID1_R_PARTNO_TM4C123    ((uint32_t)0x00A10000u)

#define SYSCTL_DID1_PARTNO_MASK         ((uint32_t)0x000000FFu)
#define SYSCTL_DID1_PARTNO_TM4C123      ((uint32_t)0x000000A1u)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_FAM_MASK      ((uint32_t)0x0F000000u)
#define SYSCTL_DID1_R_FAM_BIT       (24u)
#define SYSCTL_DID1_R_FAM_TIVAC     ((uint32_t)0x00000000u)

#define SYSCTL_DID1_FAM_MASK        ((uint32_t)0x0000000Fu)
#define SYSCTL_DID1_FAM_TIVAC       ((uint32_t)0x00000000u)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_VER_MASK      ((uint32_t)0xF0000000u)
#define SYSCTL_DID1_R_VER_BIT       (28u)
#define SYSCTL_DID1_R_VER_INI       ((uint32_t)0x00000000u)
#define SYSCTL_DID1_R_VER_SECOND    ((uint32_t)0x10000000u)

#define SYSCTL_DID1_VER_MASK        ((uint32_t)0x0000000Fu)
#define SYSCTL_DID1_VER_INI         ((uint32_t)0x00000000u)
#define SYSCTL_DID1_VER_SECOND      ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************ 3 PBORCTL *********************************************
******************************************************************************************/
#define SYSCTL_PBORCTL            (((PBORCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_PBORCTL_OFFSET )))
#define SYSCTL_PBORCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PBORCTL_OFFSET)))
#define SYSCTL_BITBANDING_PBORCTL      (((BITBANDING_PBORCTL_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PBORCTL_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PBORCTL_R_BOR1_MASK  ((uint32_t)0x00000002u)
#define SYSCTL_PBORCTL_R_BOR1_BIT   (1u)
#define SYSCTL_PBORCTL_R_BOR1_INT   ((uint32_t)0x00000000u)
#define SYSCTL_PBORCTL_R_BOR1_RESET ((uint32_t)0x00000002u)

#define SYSCTL_PBORCTL_BOR1_MASK    ((uint32_t)0x00000001u)
#define SYSCTL_PBORCTL_BOR1_INT     ((uint32_t)0x00000000u)
#define SYSCTL_PBORCTL_BOR1_RESET   ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PBORCTL_R_BOR0_MASK  ((uint32_t)0x00000004u)
#define SYSCTL_PBORCTL_R_BOR0_BIT   (2u)
#define SYSCTL_PBORCTL_R_BOR0_INT   ((uint32_t)0x00000000u)
#define SYSCTL_PBORCTL_R_BOR0_RESET ((uint32_t)0x00000004u)

#define SYSCTL_PBORCTL_BOR0_MASK    ((uint32_t)0x00000001u)
#define SYSCTL_PBORCTL_BOR0_INT     ((uint32_t)0x00000000u)
#define SYSCTL_PBORCTL_BOR0_RESET   ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PBORCTL_BOR1 (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PBORCTL_OFFSET)*32u)+(SYSCTL_PBORCTL_R_BOR1_BIT*4u))))
#define SYSCTL_BITBANDING_PBORCTL_BOR0 (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PBORCTL_OFFSET)*32u)+(SYSCTL_PBORCTL_R_BOR0_BIT*4u))))

/******************************************************************************************
************************************ 4 RIS *********************************************
******************************************************************************************/
#define SYSCTL_RIS            (((RIS_TypeDef*)(SYSCTL_BASE+SYSCTL_RIS_OFFSET )))
#define SYSCTL_RIS_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_RIS_OFFSET)))
#define SYSCTL_BITBANDING_RIS      (((BITBANDING_RIS_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RIS_R_BOR1RIS_MASK       ((uint32_t)0x00000002u)
#define SYSCTL_RIS_R_BOR1RIS_BIT        (1u)
#define SYSCTL_RIS_R_BOR1RIS_NOACTIVE   ((uint32_t)0x00000000u)
#define SYSCTL_RIS_R_BOR1RIS_ACTIVE     ((uint32_t)0x00000002u)

#define SYSCTL_RIS_BOR1RIS_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_RIS_BOR1RIS_NOACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_RIS_BOR1RIS_ACTIVE       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_MOFRIS_MASK       ((uint32_t)0x00000008u)
#define SYSCTL_RIS_R_MOFRIS_BIT        (3u)
#define SYSCTL_RIS_R_MOFRIS_NOACTIVE   ((uint32_t)0x00000000u)
#define SYSCTL_RIS_R_MOFRIS_ACTIVE     ((uint32_t)0x00000008u)

#define SYSCTL_RIS_MOFRIS_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_RIS_MOFRIS_NOACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_RIS_MOFRIS_ACTIVE       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_PLLLRIS_MASK       ((uint32_t)0x00000040u)
#define SYSCTL_RIS_R_PLLLRIS_BIT        (6u)
#define SYSCTL_RIS_R_PLLLRIS_NOACTIVE   ((uint32_t)0x00000000u)
#define SYSCTL_RIS_R_PLLLRIS_ACTIVE     ((uint32_t)0x00000040u)

#define SYSCTL_RIS_PLLLRIS_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_RIS_PLLLRIS_NOACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_RIS_PLLLRIS_ACTIVE       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_USBPLLLRIS_MASK       ((uint32_t)0x00000080u)
#define SYSCTL_RIS_R_USBPLLLRIS_BIT        (7u)
#define SYSCTL_RIS_R_USBPLLLRIS_NOACTIVE   ((uint32_t)0x00000000u)
#define SYSCTL_RIS_R_USBPLLLRIS_ACTIVE     ((uint32_t)0x00000080u)

#define SYSCTL_RIS_USBPLLLRIS_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_RIS_USBPLLLRIS_NOACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_RIS_USBPLLLRIS_ACTIVE       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_MOSCPUPRIS_MASK       ((uint32_t)0x00000100u)
#define SYSCTL_RIS_R_MOSCPUPRIS_BIT        (8u)
#define SYSCTL_RIS_R_MOSCPUPRIS_NOACTIVE   ((uint32_t)0x00000000u)
#define SYSCTL_RIS_R_MOSCPUPRIS_ACTIVE     ((uint32_t)0x00000100u)

#define SYSCTL_RIS_MOSCPUPRIS_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_RIS_MOSCPUPRIS_NOACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_RIS_MOSCPUPRIS_ACTIVE       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_VDDARIS_MASK       ((uint32_t)0x00000400u)
#define SYSCTL_RIS_R_VDDARIS_BIT        (10u)
#define SYSCTL_RIS_R_VDDARIS_NOACTIVE   ((uint32_t)0x00000000u)
#define SYSCTL_RIS_R_VDDARIS_ACTIVE     ((uint32_t)0x00000400u)

#define SYSCTL_RIS_VDDARIS_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_RIS_VDDARIS_NOACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_RIS_VDDARIS_ACTIVE       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_BOR0RIS_MASK       ((uint32_t)0x00000800u)
#define SYSCTL_RIS_R_BOR0RIS_BIT        (11u)
#define SYSCTL_RIS_R_BOR0RIS_NOACTIVE   ((uint32_t)0x00000000u)
#define SYSCTL_RIS_R_BOR0RIS_ACTIVE     ((uint32_t)0x00000800u)

#define SYSCTL_RIS_BOR0RIS_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_RIS_BOR0RIS_NOACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_RIS_BOR0RIS_ACTIVE       ((uint32_t)0x00000001u)
/*--------*/


#define SYSCTL_BITBANDING_RIS_BOR1RIS       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32u)+(SYSCTL_RIS_R_BOR1RIS_BIT*4u))))
#define SYSCTL_BITBANDING_RIS_MOFRIS        (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32u)+(SYSCTL_RIS_R_MOFRIS_BIT*4u))))
#define SYSCTL_BITBANDING_RIS_PLLLRIS       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32u)+(SYSCTL_RIS_R_PLLLRIS_BIT*4u))))
#define SYSCTL_BITBANDING_RIS_USBPLLLRIS    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32u)+(SYSCTL_RIS_R_USBPLLLRIS_BIT*4u))))
#define SYSCTL_BITBANDING_RIS_MOSCPUPRIS    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32u)+(SYSCTL_RIS_R_MOSCPUPRIS_BIT*4u))))
#define SYSCTL_BITBANDING_RIS_VDDARIS       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32u)+(SYSCTL_RIS_R_VDDARIS_BIT*4u))))
#define SYSCTL_BITBANDING_RIS_BOR0RIS       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32u)+(SYSCTL_RIS_R_BOR0RIS_BIT*4u))))


/******************************************************************************************
************************************ 5 IMC *********************************************
******************************************************************************************/
#define SYSCTL_IMC            (((IMC_TypeDef*)(SYSCTL_BASE+SYSCTL_IMC_OFFSET )))
#define SYSCTL_IMC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_IMC_OFFSET)))
#define SYSCTL_BITBANDING_IMC      (((BITBANDING_IMC_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32u))))

/*--------*/
#define SYSCTL_IMC_R_BOR1IM_MASK    ((uint32_t)0x00000002u)
#define SYSCTL_IMC_R_BOR1IM_BIT     (1u)
#define SYSCTL_IMC_R_BOR1IM_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_IMC_R_BOR1IM_EN      ((uint32_t)0x00000002u)

#define SYSCTL_IMC_BOR1IM_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_IMC_BOR1IM_DIS       ((uint32_t)0x00000000u)
#define SYSCTL_IMC_BOR1IM_EN        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_MOFIM_MASK     ((uint32_t)0x00000008u)
#define SYSCTL_IMC_R_MOFIM_BIT      (3u)
#define SYSCTL_IMC_R_MOFIM_DIS      ((uint32_t)0x00000000u)
#define SYSCTL_IMC_R_MOFIM_EN       ((uint32_t)0x00000008u)

#define SYSCTL_IMC_MOFIM_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_IMC_MOFIM_DIS        ((uint32_t)0x00000000u)
#define SYSCTL_IMC_MOFIM_EN         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_PLLLIM_MASK    ((uint32_t)0x00000040u)
#define SYSCTL_IMC_R_PLLLIM_BIT     (6u)
#define SYSCTL_IMC_R_PLLLIM_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_IMC_R_PLLLIM_EN      ((uint32_t)0x00000040u)

#define SYSCTL_IMC_PLLLIM_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_IMC_PLLLIM_DIS       ((uint32_t)0x00000000u)
#define SYSCTL_IMC_PLLLIM_EN        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_USBPLLLIM_MASK ((uint32_t)0x00000080u)
#define SYSCTL_IMC_R_USBPLLLIM_BIT  (7u)
#define SYSCTL_IMC_R_USBPLLLIM_DIS  ((uint32_t)0x00000000u)
#define SYSCTL_IMC_R_USBPLLLIM_EN   ((uint32_t)0x00000080u)

#define SYSCTL_IMC_USBPLLLIM_MASK   ((uint32_t)0x00000001u)
#define SYSCTL_IMC_USBPLLLIM_DIS    ((uint32_t)0x00000000u)
#define SYSCTL_IMC_USBPLLLIM_EN     ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_MOSCPUPIM_MASK ((uint32_t)0x00000100u)
#define SYSCTL_IMC_R_MOSCPUPIM_BIT  (8u)
#define SYSCTL_IMC_R_MOSCPUPIM_DIS  ((uint32_t)0x00000000u)
#define SYSCTL_IMC_R_MOSCPUPIM_EN   ((uint32_t)0x00000100u)

#define SYSCTL_IMC_MOSCPUPIM_MASK   ((uint32_t)0x00000001u)
#define SYSCTL_IMC_MOSCPUPIM_DIS    ((uint32_t)0x00000000u)
#define SYSCTL_IMC_MOSCPUPIM_EN     ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_VDDAIM_MASK    ((uint32_t)0x00000400u)
#define SYSCTL_IMC_R_VDDAIM_BIT     (10u)
#define SYSCTL_IMC_R_VDDAIM_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_IMC_R_VDDAIM_EN      ((uint32_t)0x00000400u)

#define SYSCTL_IMC_VDDAIM_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_IMC_VDDAIM_DIS       ((uint32_t)0x00000000u)
#define SYSCTL_IMC_VDDAIM_EN        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_BOR0IM_MASK    ((uint32_t)0x00000800u)
#define SYSCTL_IMC_R_BOR0IM_BIT     (11u)
#define SYSCTL_IMC_R_BOR0IM_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_IMC_R_BOR0IM_EN      ((uint32_t)0x00000800u)

#define SYSCTL_IMC_BOR0IM_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_IMC_BOR0IM_DIS       ((uint32_t)0x00000000u)
#define SYSCTL_IMC_BOR0IM_EN        ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_IMC_BOR1IM       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32u)+(SYSCTL_IMC_R_BOR1IM_BIT*4u))))
#define SYSCTL_BITBANDING_IMC_MOFIM        (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32u)+(SYSCTL_IMC_R_MOFIM_BIT*4u))))
#define SYSCTL_BITBANDING_IMC_PLLLIM       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32u)+(SYSCTL_IMC_R_PLLLIM_BIT*4u))))
#define SYSCTL_BITBANDING_IMC_USBPLLLIM    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32u)+(SYSCTL_IMC_R_USBPLLLIM_BIT*4u))))
#define SYSCTL_BITBANDING_IMC_MOSCPUPIM    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32u)+(SYSCTL_IMC_R_MOSCPUPIM_BIT*4u))))
#define SYSCTL_BITBANDING_IMC_VDDAIM       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32u)+(SYSCTL_IMC_R_VDDAIM_BIT*4u))))
#define SYSCTL_BITBANDING_IMC_BOR0IM       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32u)+(SYSCTL_IMC_R_BOR0IM_BIT*4u))))

/******************************************************************************************
************************************ 6 MISC *********************************************
******************************************************************************************/
#define SYSCTL_MISC            (((MISC_TypeDef*)(SYSCTL_BASE+SYSCTL_MISC_OFFSET )))
#define SYSCTL_MISC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_MISC_OFFSET)))
#define SYSCTL_BITBANDING_MISC      (((BITBANDING_MISC_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32u))))

/*--------*/
#define SYSCTL_MISC_R_BOR1MIS_MASK      ((uint32_t)0x00000002u)
#define SYSCTL_MISC_R_BOR1MIS_BIT       (1u)
#define SYSCTL_MISC_R_BOR1MIS_NOOCCUR   ((uint32_t)0x00000000u)
#define SYSCTL_MISC_R_BOR1MIS_OCCUR     ((uint32_t)0x00000002u)

#define SYSCTL_MISC_BOR1MIS_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_MISC_BOR1MIS_NOOCCUR     ((uint32_t)0x00000000u)
#define SYSCTL_MISC_BOR1MIS_OCCUR       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_MOFMIS_MASK       ((uint32_t)0x00000008u)
#define SYSCTL_MISC_R_MOFMIS_BIT        (3u)
#define SYSCTL_MISC_R_MOFMIS_NOOCCUR    ((uint32_t)0x00000000u)
#define SYSCTL_MISC_R_MOFMIS_OCCUR      ((uint32_t)0x00000008u)

#define SYSCTL_MISC_MOFMIS_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_MISC_MOFMIS_NOOCCUR      ((uint32_t)0x00000000u)
#define SYSCTL_MISC_MOFMIS_OCCUR        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_PLLLMIS_MASK      ((uint32_t)0x00000040u)
#define SYSCTL_MISC_R_PLLLMIS_BIT       (6u)
#define SYSCTL_MISC_R_PLLLMIS_NOOCCUR   ((uint32_t)0x00000000u)
#define SYSCTL_MISC_R_PLLLMIS_OCCUR     ((uint32_t)0x00000040u)

#define SYSCTL_MISC_PLLLMIS_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_MISC_PLLLMIS_NOOCCUR     ((uint32_t)0x00000000u)
#define SYSCTL_MISC_PLLLMIS_OCCUR       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_USBPLLLMIS_MASK   ((uint32_t)0x00000080u)
#define SYSCTL_MISC_R_USBPLLLMIS_BIT    (7u)
#define SYSCTL_MISC_R_USBPLLLMIS_NOOCCUR  ((uint32_t)0x00000000u)
#define SYSCTL_MISC_R_USBPLLLMIS_OCCUR   ((uint32_t)0x00000080u)

#define SYSCTL_MISC_USBPLLLMIS_MASK     ((uint32_t)0x00000001u)
#define SYSCTL_MISC_USBPLLLMIS_NOOCCUR  ((uint32_t)0x00000000u)
#define SYSCTL_MISC_USBPLLLMIS_OCCUR    ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_MOSCPUPMIS_MASK   ((uint32_t)0x00000100u)
#define SYSCTL_MISC_R_MOSCPUPMIS_BIT    (8u)
#define SYSCTL_MISC_R_MOSCPUPMIS_NOOCCUR  ((uint32_t)0x00000000u)
#define SYSCTL_MISC_R_MOSCPUPMIS_OCCUR   ((uint32_t)0x00000100u)

#define SYSCTL_MISC_MOSCPUPMIS_MASK     ((uint32_t)0x00000001u)
#define SYSCTL_MISC_MOSCPUPMIS_NOOCCUR  ((uint32_t)0x00000000u)
#define SYSCTL_MISC_MOSCPUPMIS_OCCUR    ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_VDDAMIS_MASK      ((uint32_t)0x00000400u)
#define SYSCTL_MISC_R_VDDAMIS_BIT       (10u)
#define SYSCTL_MISC_R_VDDAMIS_NOOCCUR   ((uint32_t)0x00000000u)
#define SYSCTL_MISC_R_VDDAMIS_OCCUR     ((uint32_t)0x00000400u)

#define SYSCTL_MISC_VDDAMIS_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_MISC_VDDAMIS_NOOCCUR     ((uint32_t)0x00000000u)
#define SYSCTL_MISC_VDDAMIS_OCCUR       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_BOR0MIS_MASK      ((uint32_t)0x00000800u)
#define SYSCTL_MISC_R_BOR0MIS_BIT       (11u)
#define SYSCTL_MISC_R_BOR0MIS_NOOCCUR   ((uint32_t)0x00000000u)
#define SYSCTL_MISC_R_BOR0MIS_OCCUR     ((uint32_t)0x00000800u)

#define SYSCTL_MISC_BOR0MIS_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_MISC_BOR0MIS_NOOCCUR     ((uint32_t)0x00000000u)
#define SYSCTL_MISC_BOR0MIS_OCCUR       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_MISC_BOR1MIS       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32u)+(SYSCTL_MISC_R_BOR1MIS_BIT*4u))))
#define SYSCTL_BITBANDING_MISC_MOFMIS        (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32u)+(SYSCTL_MISC_R_MOFMIS_BIT*4u))))
#define SYSCTL_BITBANDING_MISC_PLLLMIS       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32u)+(SYSCTL_MISC_R_PLLLMIS_BIT*4u))))
#define SYSCTL_BITBANDING_MISC_USBPLLLMIS    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32u)+(SYSCTL_MISC_R_USBPLLLMIS_BIT*4u))))
#define SYSCTL_BITBANDING_MISC_MOSCPUPMIS    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32u)+(SYSCTL_MISC_R_MOSCPUPMIS_BIT*4u))))
#define SYSCTL_BITBANDING_MISC_VDDAMIS       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32u)+(SYSCTL_MISC_R_VDDAMIS_BIT*4u))))
#define SYSCTL_BITBANDING_MISC_BOR0MIS       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32u)+(SYSCTL_MISC_R_BOR0MIS_BIT*4u))))

/******************************************************************************************
************************************ 7 RESC *********************************************
******************************************************************************************/
#define SYSCTL_RESC            (((RESC_TypeDef*)(SYSCTL_BASE+SYSCTL_RESC_OFFSET )))
#define SYSCTL_RESC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RESC_OFFSET)))
#define SYSCTL_BITBANDING_RESC      (((BITBANDING_RESC_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RESC_R_EXT_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_RESC_R_EXT_BIT       (0u)
#define SYSCTL_RESC_R_EXT_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_RESC_R_EXT_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_RESC_EXT_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RESC_EXT_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_RESC_EXT_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_POR_MASK      ((uint32_t)0x00000002u)
#define SYSCTL_RESC_R_POR_BIT       (1u)
#define SYSCTL_RESC_R_POR_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_RESC_R_POR_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_RESC_POR_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RESC_POR_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_RESC_POR_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_BOR_MASK      ((uint32_t)0x00000004u)
#define SYSCTL_RESC_R_BOR_BIT       (2u)
#define SYSCTL_RESC_R_BOR_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_RESC_R_BOR_RESET     ((uint32_t)0x00000004u)

#define SYSCTL_RESC_BOR_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RESC_BOR_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_RESC_BOR_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_WDT0_MASK      ((uint32_t)0x00000008u)
#define SYSCTL_RESC_R_WDT0_BIT       (3u)
#define SYSCTL_RESC_R_WDT0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_RESC_R_WDT0_RESET     ((uint32_t)0x00000008u)

#define SYSCTL_RESC_WDT0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RESC_WDT0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_RESC_WDT0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_SW_MASK      ((uint32_t)0x00000010u)
#define SYSCTL_RESC_R_SW_BIT       (4u)
#define SYSCTL_RESC_R_SW_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_RESC_R_SW_RESET     ((uint32_t)0x00000010u)

#define SYSCTL_RESC_SW_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RESC_SW_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_RESC_SW_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_WDT1_MASK      ((uint32_t)0x00000020u)
#define SYSCTL_RESC_R_WDT1_BIT       (5u)
#define SYSCTL_RESC_R_WDT1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_RESC_R_WDT1_RESET     ((uint32_t)0x00000020u)

#define SYSCTL_RESC_WDT1_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RESC_WDT1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_RESC_WDT1_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_MOSCFAIL_MASK      ((uint32_t)0x00010000u)
#define SYSCTL_RESC_R_MOSCFAIL_BIT       (16u)
#define SYSCTL_RESC_R_MOSCFAIL_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_RESC_R_MOSCFAIL_RESET     ((uint32_t)0x00010000u)

#define SYSCTL_RESC_MOSCFAIL_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RESC_MOSCFAIL_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_RESC_MOSCFAIL_RESET       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RESC_EXT      (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32u)+(SYSCTL_RESC_R_EXT_BIT*4u))))
#define SYSCTL_BITBANDING_RESC_POR      (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32u)+(SYSCTL_RESC_R_POR_BIT*4u))))
#define SYSCTL_BITBANDING_RESC_BOR      (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32u)+(SYSCTL_RESC_R_BOR_BIT*4u))))
#define SYSCTL_BITBANDING_RESC_WDT0     (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32u)+(SYSCTL_RESC_R_WDT0_BIT*4u))))
#define SYSCTL_BITBANDING_RESC_SW       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32u)+(SYSCTL_RESC_R_SW_BIT*4u))))
#define SYSCTL_BITBANDING_RESC_WDT1     (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32u)+(SYSCTL_RESC_R_WDT1_BIT*4u))))
#define SYSCTL_BITBANDING_RESC_MOSCFAIL (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32u)+(SYSCTL_RESC_R_MOSCFAIL_BIT*4u))))

/******************************************************************************************
************************************ 8 RCC *********************************************
******************************************************************************************/
#define SYSCTL_RCC            (((RCC_TypeDef*)(SYSCTL_BASE+SYSCTL_RCC_OFFSET )))
#define SYSCTL_RCC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCC_OFFSET)))
#define SYSCTL_BITBANDING_RCC      (((BITBANDING_RCC_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RCC_R_MOSCDIS_MASK    ((uint32_t)0x00000001u)
#define SYSCTL_RCC_R_MOSCDIS_BIT     (0u)
#define SYSCTL_RCC_R_MOSCDIS_EN      ((uint32_t)0x00000000u)
#define SYSCTL_RCC_R_MOSCDIS_DIS     ((uint32_t)0x00000001u)

#define SYSCTL_RCC_MOSCDIS_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_RCC_MOSCDIS_EN        ((uint32_t)0x00000000u)
#define SYSCTL_RCC_MOSCDIS_DIS       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_OSCSRC_MASK    ((uint32_t)0x00000030u)
#define SYSCTL_RCC_R_OSCSRC_BIT     (4u)
#define SYSCTL_RCC_R_OSCSRC_MOSC    ((uint32_t)0x00000000u)
#define SYSCTL_RCC_R_OSCSRC_PIOSC   ((uint32_t)0x00000010u)
#define SYSCTL_RCC_R_OSCSRC_PIOSC4  ((uint32_t)0x00000020u)
#define SYSCTL_RCC_R_OSCSRC_LFIOSC  ((uint32_t)0x00000030u)

#define SYSCTL_RCC_OSCSRC_MASK      ((uint32_t)0x00000003u)
#define SYSCTL_RCC_OSCSRC_MOSC      ((uint32_t)0x00000000u)
#define SYSCTL_RCC_OSCSRC_PIOSC     ((uint32_t)0x00000001u)
#define SYSCTL_RCC_OSCSRC_PIOSC4    ((uint32_t)0x00000002u)
#define SYSCTL_RCC_OSCSRC_LFIOSC    ((uint32_t)0x00000003u)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_XTAL_MASK      ((uint32_t)0x000007C0u)
#define SYSCTL_RCC_R_XTAL_BIT       (6u)
#define SYSCTL_RCC_R_XTAL_4MHZ      ((uint32_t)0x00000180u)
#define SYSCTL_RCC_R_XTAL_4_096MHZ  ((uint32_t)0x000001C0u)
#define SYSCTL_RCC_R_XTAL_4_9152MHZ ((uint32_t)0x00000200u)
#define SYSCTL_RCC_R_XTAL_5MHZ      ((uint32_t)0x00000240u)
#define SYSCTL_RCC_R_XTAL_5_12MHZ   ((uint32_t)0x00000280u)
#define SYSCTL_RCC_R_XTAL_6MHZ      ((uint32_t)0x000002C0u)
#define SYSCTL_RCC_R_XTAL_6_144MHZ  ((uint32_t)0x00000300u)
#define SYSCTL_RCC_R_XTAL_7_3728MHZ ((uint32_t)0x00000340u)
#define SYSCTL_RCC_R_XTAL_8MHZ      ((uint32_t)0x00000380u)
#define SYSCTL_RCC_R_XTAL_8_192MHZ  ((uint32_t)0x000003C0u)
#define SYSCTL_RCC_R_XTAL_10MHZ     ((uint32_t)0x00000400u)
#define SYSCTL_RCC_R_XTAL_12MHZ     ((uint32_t)0x00000440u)
#define SYSCTL_RCC_R_XTAL_12_288MHZ ((uint32_t)0x00000480u)
#define SYSCTL_RCC_R_XTAL_13_56MHZ  ((uint32_t)0x000004C0u)
#define SYSCTL_RCC_R_XTAL_14_31818MHZ     ((uint32_t)0x00000500u)
#define SYSCTL_RCC_R_XTAL_16MHZ     ((uint32_t)0x00000540u)
#define SYSCTL_RCC_R_XTAL_16_384MHZ ((uint32_t)0x00000580u)
#define SYSCTL_RCC_R_XTAL_18MHZ     ((uint32_t)0x000005C0u)
#define SYSCTL_RCC_R_XTAL_20MHZ     ((uint32_t)0x00000600u)
#define SYSCTL_RCC_R_XTAL_24MHZ     ((uint32_t)0x00000640u)
#define SYSCTL_RCC_R_XTAL_25MHZ     ((uint32_t)0x00000680u)

#define SYSCTL_RCC_XTAL_MASK      ((uint32_t)0x0000001Fu)
#define SYSCTL_RCC_XTAL_4MHZ      ((uint32_t)0x00000006u)
#define SYSCTL_RCC_XTAL_4_096MHZ  ((uint32_t)0x00000007u)
#define SYSCTL_RCC_XTAL_4_9152MHZ ((uint32_t)0x00000008u)
#define SYSCTL_RCC_XTAL_5MHZ      ((uint32_t)0x00000009u)
#define SYSCTL_RCC_XTAL_5_12MHZ   ((uint32_t)0x0000000Au)
#define SYSCTL_RCC_XTAL_6MHZ      ((uint32_t)0x0000000Bu)
#define SYSCTL_RCC_XTAL_6_144MHZ  ((uint32_t)0x0000000Cu)
#define SYSCTL_RCC_XTAL_7_3728MHZ ((uint32_t)0x0000000Du)
#define SYSCTL_RCC_XTAL_8MHZ      ((uint32_t)0x0000000Eu)
#define SYSCTL_RCC_XTAL_8_192MHZ  ((uint32_t)0x0000000Fu)
#define SYSCTL_RCC_XTAL_10MHZ     ((uint32_t)0x00000010u)
#define SYSCTL_RCC_XTAL_12MHZ     ((uint32_t)0x00000011u)
#define SYSCTL_RCC_XTAL_12_288MHZ ((uint32_t)0x00000012u)
#define SYSCTL_RCC_XTAL_13_56MHZ  ((uint32_t)0x00000013u)
#define SYSCTL_RCC_XTAL_14_31818MHZ     ((uint32_t)0x00000014u)
#define SYSCTL_RCC_XTAL_16MHZ     ((uint32_t)0x00000015u)
#define SYSCTL_RCC_XTAL_16_384MHZ ((uint32_t)0x00000016u)
#define SYSCTL_RCC_XTAL_18MHZ     ((uint32_t)0x00000017u)
#define SYSCTL_RCC_XTAL_20MHZ     ((uint32_t)0x00000018u)
#define SYSCTL_RCC_XTAL_24MHZ     ((uint32_t)0x00000019u)
#define SYSCTL_RCC_XTAL_25MHZ     ((uint32_t)0x0000001Au)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_BYPASS_MASK    ((uint32_t)0x00000800u)
#define SYSCTL_RCC_R_BYPASS_BIT     (11u)
#define SYSCTL_RCC_R_BYPASS_PLL     ((uint32_t)0x00000000u)
#define SYSCTL_RCC_R_BYPASS_OSC     ((uint32_t)0x00000800u)

#define SYSCTL_RCC_BYPASS_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_RCC_BYPASS_PLL       ((uint32_t)0x00000000u)
#define SYSCTL_RCC_BYPASS_OSC       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_PWRDN_MASK    ((uint32_t)0x00002000u)
#define SYSCTL_RCC_R_PWRDN_BIT     (13u)
#define SYSCTL_RCC_R_PWRDN_ON      ((uint32_t)0x00000000u)
#define SYSCTL_RCC_R_PWRDN_DOWN    ((uint32_t)0x00002000u)

#define SYSCTL_RCC_PWRDN_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_RCC_PWRDN_ON        ((uint32_t)0x00000000u)
#define SYSCTL_RCC_PWRDN_DOWN      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_PWMDIV_MASK    ((uint32_t)0x000E0000u)
#define SYSCTL_RCC_R_PWMDIV_BIT     (17u)
#define SYSCTL_RCC_R_PWMDIV_2       ((uint32_t)0x00000000u)
#define SYSCTL_RCC_R_PWMDIV_4       ((uint32_t)0x00020000u)
#define SYSCTL_RCC_R_PWMDIV_8       ((uint32_t)0x00040000u)
#define SYSCTL_RCC_R_PWMDIV_16      ((uint32_t)0x00060000u)
#define SYSCTL_RCC_R_PWMDIV_32      ((uint32_t)0x00080000u)
#define SYSCTL_RCC_R_PWMDIV_64      ((uint32_t)0x000E0000u)

#define SYSCTL_RCC_PWMDIV_MASK      ((uint32_t)0x00000007u)
#define SYSCTL_RCC_PWMDIV_2         ((uint32_t)0x00000000u)
#define SYSCTL_RCC_PWMDIV_4         ((uint32_t)0x00000001u)
#define SYSCTL_RCC_PWMDIV_8         ((uint32_t)0x00000002u)
#define SYSCTL_RCC_PWMDIV_16        ((uint32_t)0x00000003u)
#define SYSCTL_RCC_PWMDIV_32        ((uint32_t)0x00000004u)
#define SYSCTL_RCC_PWMDIV_64        ((uint32_t)0x00000007u)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_USEPWMDIV_MASK    ((uint32_t)0x00100000u)
#define SYSCTL_RCC_R_USEPWMDIV_BIT     (20u)
#define SYSCTL_RCC_R_USEPWMDIV_SYSCLK  ((uint32_t)0x00000000u)
#define SYSCTL_RCC_R_USEPWMDIV_PWMDIV  ((uint32_t)0x00100000u)

#define SYSCTL_RCC_USEPWMDIV_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_RCC_USEPWMDIV_SYSCLK    ((uint32_t)0x00000000u)
#define SYSCTL_RCC_USEPWMDIV_PWMDIV    ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_USESYSDIV_MASK    ((uint32_t)0x00400000u)
#define SYSCTL_RCC_R_USESYSDIV_BIT     (22u)
#define SYSCTL_RCC_R_USESYSDIV_SYSCLK  ((uint32_t)0x00000000u)
#define SYSCTL_RCC_R_USESYSDIV_SYSDIV  ((uint32_t)0x00400000u)

#define SYSCTL_RCC_USESYSDIV_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_RCC_USESYSDIV_SYSCLK    ((uint32_t)0x00000000u)
#define SYSCTL_RCC_USESYSDIV_SYSDIV    ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_SYSDIV_MASK    ((uint32_t)0x07800000u)
#define SYSCTL_RCC_R_SYSDIV_BIT     (23u)

#define SYSCTL_RCC_SYSDIV_MASK      ((uint32_t)0x0000000Fu)
/*--------*/


/*--------*/
#define SYSCTL_RCC_R_ACG_MASK    ((uint32_t)0x08000000u)
#define SYSCTL_RCC_R_ACG_BIT     (27u)
#define SYSCTL_RCC_R_ACG_RCGCn  ((uint32_t)0x00000000u)
#define SYSCTL_RCC_R_ACG_SCGCn  ((uint32_t)0x08000000u)

#define SYSCTL_RCC_ACG_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_RCC_ACG_RCGCn    ((uint32_t)0x00000000u)
#define SYSCTL_RCC_ACG_SCGCn    ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RCC_MOSCDIS   (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32u)+(SYSCTL_RCC_R_MOSCDIS_BIT*4u))))
#define SYSCTL_BITBANDING_RCC_BYPASS    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32u)+(SYSCTL_RCC_R_BYPASS_BIT*4u))))
#define SYSCTL_BITBANDING_RCC_PWRDN     (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32u)+(SYSCTL_RCC_R_PWRDN_BIT*4u))))
#define SYSCTL_BITBANDING_RCC_USEPWMDIV (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32u)+(SYSCTL_RCC_R_USEPWMDIV_BIT*4u))))
#define SYSCTL_BITBANDING_RCC_USESYSDIV (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32u)+(SYSCTL_RCC_R_USESYSDIV_BIT*4u))))
#define SYSCTL_BITBANDING_RCC_ACG       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32u)+(SYSCTL_RCC_R_ACG_BIT*4u))))

/******************************************************************************************
************************************ 9 GPIOHBCTL *********************************************
******************************************************************************************/
#define SYSCTL_GPIOHBCTL            (((GPIOHBCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_GPIOHBCTL_OFFSET )))
#define SYSCTL_GPIOHBCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_GPIOHBCTL_OFFSET)))
#define SYSCTL_BITBANDING_GPIOBHCTL      (((BITBANDING_GPIOBHCTL_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_GPIOBHCTL_OFFSET)*32u))))

/*--------*/
#define SYSCTL_GPIOHBCTL_R_PORTA_MASK    ((uint32_t)0x00000001u)
#define SYSCTL_GPIOHBCTL_R_PORTA_BIT     (0u)
#define SYSCTL_GPIOHBCTL_R_PORTA_APB      ((uint32_t)0x00000000u)
#define SYSCTL_GPIOHBCTL_R_PORTA_AHB     ((uint32_t)0x00000001u)

#define SYSCTL_GPIOHBCTL_PORTA_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_GPIOHBCTL_PORTA_APB        ((uint32_t)0x00000000u)
#define SYSCTL_GPIOHBCTL_PORTA_AHB       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_GPIOHBCTL_R_PORTB_MASK    ((uint32_t)0x00000002u)
#define SYSCTL_GPIOHBCTL_R_PORTB_BIT     (1u)
#define SYSCTL_GPIOHBCTL_R_PORTB_APB      ((uint32_t)0x00000000u)
#define SYSCTL_GPIOHBCTL_R_PORTB_AHB     ((uint32_t)0x00000002u)

#define SYSCTL_GPIOHBCTL_PORTB_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_GPIOHBCTL_PORTB_APB        ((uint32_t)0x00000000u)
#define SYSCTL_GPIOHBCTL_PORTB_AHB       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_GPIOHBCTL_R_PORTC_MASK    ((uint32_t)0x00000004u)
#define SYSCTL_GPIOHBCTL_R_PORTC_BIT     (2u)
#define SYSCTL_GPIOHBCTL_R_PORTC_APB      ((uint32_t)0x00000000u)
#define SYSCTL_GPIOHBCTL_R_PORTC_AHB     ((uint32_t)0x00000004u)

#define SYSCTL_GPIOHBCTL_PORTC_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_GPIOHBCTL_PORTC_APB        ((uint32_t)0x00000000u)
#define SYSCTL_GPIOHBCTL_PORTC_AHB       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_GPIOHBCTL_R_PORTD_MASK    ((uint32_t)0x00000008u)
#define SYSCTL_GPIOHBCTL_R_PORTD_BIT     (3u)
#define SYSCTL_GPIOHBCTL_R_PORTD_APB      ((uint32_t)0x00000000u)
#define SYSCTL_GPIOHBCTL_R_PORTD_AHB     ((uint32_t)0x00000008u)

#define SYSCTL_GPIOHBCTL_PORTD_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_GPIOHBCTL_PORTD_APB        ((uint32_t)0x00000000u)
#define SYSCTL_GPIOHBCTL_PORTD_AHB       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_GPIOHBCTL_R_PORTE_MASK    ((uint32_t)0x00000010u)
#define SYSCTL_GPIOHBCTL_R_PORTE_BIT     (4u)
#define SYSCTL_GPIOHBCTL_R_PORTE_APB      ((uint32_t)0x00000000u)
#define SYSCTL_GPIOHBCTL_R_PORTE_AHB     ((uint32_t)0x00000010u)

#define SYSCTL_GPIOHBCTL_PORTE_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_GPIOHBCTL_PORTE_APB        ((uint32_t)0x00000000u)
#define SYSCTL_GPIOHBCTL_PORTE_AHB       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_GPIOHBCTL_R_PORTF_MASK    ((uint32_t)0x00000020u)
#define SYSCTL_GPIOHBCTL_R_PORTF_BIT     (5u)
#define SYSCTL_GPIOHBCTL_R_PORTF_APB      ((uint32_t)0x00000000u)
#define SYSCTL_GPIOHBCTL_R_PORTF_AHB     ((uint32_t)0x00000020u)

#define SYSCTL_GPIOHBCTL_PORTF_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_GPIOHBCTL_PORTF_APB        ((uint32_t)0x00000000u)
#define SYSCTL_GPIOHBCTL_PORTF_AHB       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_GPIOHBCTL_PORTA (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32u)+(SYSCTL_GPIOHBCTL_R_PORTA_BIT*4u))))
#define SYSCTL_BITBANDING_GPIOHBCTL_PORTB (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32u)+(SYSCTL_GPIOHBCTL_R_PORTB_BIT*4u))))
#define SYSCTL_BITBANDING_GPIOHBCTL_PORTC (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32u)+(SYSCTL_GPIOHBCTL_R_PORTC_BIT*4u))))
#define SYSCTL_BITBANDING_GPIOHBCTL_PORTD (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32u)+(SYSCTL_GPIOHBCTL_R_PORTD_BIT*4u))))
#define SYSCTL_BITBANDING_GPIOHBCTL_PORTE (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32u)+(SYSCTL_GPIOHBCTL_R_PORTE_BIT*4u))))
#define SYSCTL_BITBANDING_GPIOHBCTL_PORTF (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32u)+(SYSCTL_GPIOHBCTL_R_PORTF_BIT*4u))))



/******************************************************************************************
************************************ 10 RCC2 *********************************************
******************************************************************************************/
#define SYSCTL_RCC2            (((RCC2_TypeDef*)(SYSCTL_BASE+SYSCTL_RCC2_OFFSET )))
#define SYSCTL_RCC2_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCC2_OFFSET)))
#define SYSCTL_BITBANDING_RCC2      (((BITBANDING_RCC2_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32u))))


/*--------*/
#define SYSCTL_RCC2_R_OSCSRC2_MASK    ((uint32_t)0x00000070u)
#define SYSCTL_RCC2_R_OSCSRC2_BIT     (4u)
#define SYSCTL_RCC2_R_OSCSRC2_MOSC    ((uint32_t)0x00000000u)
#define SYSCTL_RCC2_R_OSCSRC2_PIOSC   ((uint32_t)0x00000010u)
#define SYSCTL_RCC2_R_OSCSRC2_PIOSC4  ((uint32_t)0x00000020u)
#define SYSCTL_RCC2_R_OSCSRC2_LFIOSC  ((uint32_t)0x00000030u)
#define SYSCTL_RCC2_R_OSCSRC2_32_768KHZ  ((uint32_t)0x00000070u)

#define SYSCTL_RCC2_OSCSRC2_MASK      ((uint32_t)0x00000007u)
#define SYSCTL_RCC2_OSCSRC2_MOSC      ((uint32_t)0x00000000u)
#define SYSCTL_RCC2_OSCSRC2_PIOSC     ((uint32_t)0x00000001u)
#define SYSCTL_RCC2_OSCSRC2_PIOSC4    ((uint32_t)0x00000002u)
#define SYSCTL_RCC2_OSCSRC2_LFIOSC    ((uint32_t)0x00000003u)
#define SYSCTL_RCC2_OSCSRC2_32_768KHZ    ((uint32_t)0x00000007u)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_BYPASS2_MASK    ((uint32_t)0x00000800u)
#define SYSCTL_RCC2_R_BYPASS2_BIT     (11u)
#define SYSCTL_RCC2_R_BYPASS2_PLL     ((uint32_t)0x00000000u)
#define SYSCTL_RCC2_R_BYPASS2_OSC     ((uint32_t)0x00000800u)

#define SYSCTL_RCC2_BYPASS2_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_RCC2_BYPASS2_PLL       ((uint32_t)0x00000000u)
#define SYSCTL_RCC2_BYPASS2_OSC       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_PWRDN2_MASK    ((uint32_t)0x00002000u)
#define SYSCTL_RCC2_R_PWRDN2_BIT     (13u)
#define SYSCTL_RCC2_R_PWRDN2_ON      ((uint32_t)0x00000000u)
#define SYSCTL_RCC2_R_PWRDN2_DOWN    ((uint32_t)0x00002000u)

#define SYSCTL_RCC2_PWRDN2_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_RCC2_PWRDN2_ON        ((uint32_t)0x00000000u)
#define SYSCTL_RCC2_PWRDN2_DOWN      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_USBPWRDN_MASK    ((uint32_t)0x00004000u)
#define SYSCTL_RCC2_R_USBPWRDN_BIT     (14u)
#define SYSCTL_RCC2_R_USBPWRDN_ON      ((uint32_t)0x00000000u)
#define SYSCTL_RCC2_R_USBPWRDN_DOWN    ((uint32_t)0x00004000u)

#define SYSCTL_RCC2_USBPWRDN_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_RCC2_USBPWRDN_ON        ((uint32_t)0x00000000u)
#define SYSCTL_RCC2_USBPWRDN_DOWN      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_SYSDIV2LSB_MASK    ((uint32_t)0x00400000u)
#define SYSCTL_RCC2_R_SYSDIV2LSB_BIT     (22u)
#define SYSCTL_RCC2_R_SYSDIV2LSB_CLEAR   ((uint32_t)0x00000000u)
#define SYSCTL_RCC2_R_SYSDIV2LSB_SET     ((uint32_t)0x00400000u)

#define SYSCTL_RCC2_SYSDIV2LSB_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_RCC2_SYSDIV2LSB_CLEAR     ((uint32_t)0x00000000u)
#define SYSCTL_RCC2_SYSDIV2LSB_SET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_SYSDIV2_MASK    ((uint32_t)0x1F800000u)
#define SYSCTL_RCC2_R_SYSDIV2_BIT     (23u)

#define SYSCTL_RCC2_SYSDIV2_MASK      ((uint32_t)0x0000003Fu)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_DIV400_MASK    ((uint32_t)0x40000000u)
#define SYSCTL_RCC2_R_DIV400_BIT     (30u)
#define SYSCTL_RCC2_R_DIV400_200MHZ  ((uint32_t)0x00000000u)
#define SYSCTL_RCC2_R_DIV400_400MHZ  ((uint32_t)0x40000000u)

#define SYSCTL_RCC2_DIV400_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_RCC2_DIV400_200MHZ    ((uint32_t)0x00000000u)
#define SYSCTL_RCC2_DIV400_400MHZ    ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_USERCC2_MASK    ((uint32_t)0x80000000u)
#define SYSCTL_RCC2_R_USERCC2_BIT     (31u)
#define SYSCTL_RCC2_R_USERCC2_RCC     ((uint32_t)0x00000000u)
#define SYSCTL_RCC2_R_USERCC2_RCC2    ((uint32_t)0x80000000u)

#define SYSCTL_RCC2_USERCC2_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_RCC2_USERCC2_RCC       ((uint32_t)0x00000000u)
#define SYSCTL_RCC2_USERCC2_RCC2      ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RCC2_BYPASS2   (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32u)+(SYSCTL_RCC2_R_BYPASS2_BIT*4u))))
#define SYSCTL_BITBANDING_RCC2_PWRDN2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32u)+(SYSCTL_RCC2_R_PWRDN2_BIT*4u))))
#define SYSCTL_BITBANDING_RCC2_USBPWRDN     (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32u)+(SYSCTL_RCC2_R_USBPWRDN_BIT*4u))))
#define SYSCTL_BITBANDING_RCC2_SYSDIV2LSB (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32u)+(SYSCTL_RCC2_R_SYSDIV2LSB_BIT*4u))))
#define SYSCTL_BITBANDING_RCC2_DIV400 (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32u)+(SYSCTL_RCC2_R_DIV400_BIT*4u))))
#define SYSCTL_BITBANDING_RCC2_USERCC2       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32u)+(SYSCTL_RCC2_R_USERCC2_BIT*4u))))


/******************************************************************************************
************************************ 11 MOSCCTL *********************************************
******************************************************************************************/
#define SYSCTL_MOSCCTL            (((MOSCCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_MOSCCTL_OFFSET )))
#define SYSCTL_MOSCCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_MOSCCTL_OFFSET)))
#define SYSCTL_BITBANDING_MOSCCTL      (((BITBANDING_MOSCCTL_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_MOSCCTL_OFFSET)*32u))))

/*--------*/
#define SYSCTL_MOSCCTL_R_CVAL_MASK    ((uint32_t)0x00000001u)
#define SYSCTL_MOSCCTL_R_CVAL_BIT     (0u)
#define SYSCTL_MOSCCTL_R_CVAL_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_MOSCCTL_R_CVAL_EN      ((uint32_t)0x00000001u)

#define SYSCTL_MOSCCTL_CVAL_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_MOSCCTL_CVAL_DIS       ((uint32_t)0x00000000u)
#define SYSCTL_MOSCCTL_CVAL_EN        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_MOSCCTL_R_MOSCIM_MASK    ((uint32_t)0x00000002u)
#define SYSCTL_MOSCCTL_R_MOSCIM_BIT     (1u)
#define SYSCTL_MOSCCTL_R_MOSCIM_RESET   ((uint32_t)0x00000000u)
#define SYSCTL_MOSCCTL_R_MOSCIM_INT     ((uint32_t)0x00000002u)

#define SYSCTL_MOSCCTL_MOSCIM_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_MOSCCTL_MOSCIM_RESET     ((uint32_t)0x00000000u)
#define SYSCTL_MOSCCTL_MOSCIM_INT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_MOSCCTL_R_NOXTAL_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_MOSCCTL_R_NOXTAL_BIT         (2u)
#define SYSCTL_MOSCCTL_R_NOXTAL_PRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_MOSCCTL_R_NOXTAL_NOPRESENT   ((uint32_t)0x00000004u)

#define SYSCTL_MOSCCTL_NOXTAL_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_MOSCCTL_NOXTAL_PRESENT       ((uint32_t)0x00000000u)
#define SYSCTL_MOSCCTL_NOXTAL_NOPRESENT     ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_MOSCCTL_CVAL      (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_MOSCCTL_OFFSET)*32u)+(SYSCTL_MOSCCTL_R_CVAL_BIT*4u))))
#define SYSCTL_BITBANDING_MOSCCTL_MOSCIM       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_MOSCCTL_OFFSET)*32u)+(SYSCTL_MOSCCTL_R_MOSCIM_BIT*4u))))
#define SYSCTL_BITBANDING_MOSCCTL_NOXTAL     (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_MOSCCTL_OFFSET)*32u)+(SYSCTL_MOSCCTL_R_NOXTAL_BIT*4u))))

/******************************************************************************************
************************************12 DSLPCLKCFG *********************************************
******************************************************************************************/
#define SYSCTL_DSLPCLKCFG            (((DSLPCLKCFG_TypeDef*)(SYSCTL_BASE+SYSCTL_DSLPCLKCFG_OFFSET )))
#define SYSCTL_DSLPCLKCFG_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DSLPCLKCFG_OFFSET)))
#define SYSCTL_BITBANDING_DSLPCLKCFG      (((BITBANDING_DSLPCLKCFG_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DSLPCLKCFG_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_MASK    ((uint32_t)0x00000002u)
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_BIT     (1u)
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_NOACTION ((uint32_t)0x00000000u)
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_DOWN    ((uint32_t)0x00000002u)

#define SYSCTL_DSLPCLKCFG_PIOSCPD_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_DSLPCLKCFG_PIOSCPD_NOACTION  ((uint32_t)0x00000000u)
#define SYSCTL_DSLPCLKCFG_PIOSCPD_DOWN      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_MASK    ((uint32_t)0x00000070u)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_BIT     (4u)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_MOSC    ((uint32_t)0x00000000u)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_PIOSC   ((uint32_t)0x00000010u)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_LFIOSC  ((uint32_t)0x00000030u)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_32_768KHZ  ((uint32_t)0x00000070u)

#define SYSCTL_DSLPCLKCFG_DSOSCSRC_MASK         ((uint32_t)0x00000007u)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_MOSC         ((uint32_t)0x00000000u)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_PIOSC        ((uint32_t)0x00000001u)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_LFIOSC       ((uint32_t)0x00000003u)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_32_768KHZ    ((uint32_t)0x00000007u)
/*--------*/

/*--------*/
#define SYSCTL_DSLPCLKCFG_R_DSDIVORIDE_MASK    ((uint32_t)0x1F800000u)
#define SYSCTL_DSLPCLKCFG_R_DSDIVORIDE_BIT     (23u)

#define SYSCTL_DSLPCLKCFG_DSDIVORIDE_MASK      ((uint32_t)0x0000003Fu)
/*--------*/

#define SYSCTL_BITBANDING_DSLPCLKCFG_PIOSCPD      (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DSLPCLKCFG_OFFSET)*32u)+(SYSCTL_DSLPCLKCFG_R_PIOSCPD_BIT*4u))))


/******************************************************************************************
************************************13 SYSPROP *********************************************
******************************************************************************************/
#define SYSCTL_SYSPROP            (((SYSPROP_TypeDef*)(SYSCTL_BASE+SYSCTL_SYSPROP_OFFSET )))
#define SYSCTL_SYSPROP_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SYSPROP_OFFSET)))
#define SYSCTL_BITBANDING_SYSPROP      (((BITBANDING_SYSPROP_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SYSPROP_R_FPU_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SYSPROP_R_FPU_BIT        (0u)
#define SYSCTL_SYSPROP_R_FPU_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_R_FPU_PRESENT    ((uint32_t)0x00000001u)

#define SYSCTL_SYSPROP_FPU_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_SYSPROP_FPU_NOPRESENT    ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_FPU_PRESENT      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_FLASHLPM_MASK       ((uint32_t)0x00000100u)
#define SYSCTL_SYSPROP_R_FLASHLPM_BIT        (8u)
#define SYSCTL_SYSPROP_R_FLASHLPM_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_R_FLASHLPM_PRESENT    ((uint32_t)0x00000100u)

#define SYSCTL_SYSPROP_FLASHLPM_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_SYSPROP_FLASHLPM_NOPRESENT    ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_FLASHLPM_PRESENT      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_SRAMLPM_MASK       ((uint32_t)0x00000400u)
#define SYSCTL_SYSPROP_R_SRAMLPM_BIT        (10u)
#define SYSCTL_SYSPROP_R_SRAMLPM_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_R_SRAMLPM_PRESENT    ((uint32_t)0x00000400u)

#define SYSCTL_SYSPROP_SRAMLPM_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_SYSPROP_SRAMLPM_NOPRESENT    ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_SRAMLPM_PRESENT      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_SRAMSM_MASK       ((uint32_t)0x00000800u)
#define SYSCTL_SYSPROP_R_SRAMSM_BIT        (11u)
#define SYSCTL_SYSPROP_R_SRAMSM_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_R_SRAMSM_PRESENT    ((uint32_t)0x00000800u)

#define SYSCTL_SYSPROP_SRAMSM_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_SYSPROP_SRAMSM_NOPRESENT    ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_SRAMSM_PRESENT      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_PIOSCPDE_MASK       ((uint32_t)0x00001000u)
#define SYSCTL_SYSPROP_R_PIOSCPDE_BIT        (12u)
#define SYSCTL_SYSPROP_R_PIOSCPDE_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_R_PIOSCPDE_PRESENT    ((uint32_t)0x00001000u)

#define SYSCTL_SYSPROP_PIOSCPDE_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_SYSPROP_PIOSCPDE_NOPRESENT    ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_PIOSCPDE_PRESENT      ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SYSPROP_FPU       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32u)+(SYSCTL_SYSPROP_R_FPU_BIT*4u))))
#define SYSCTL_BITBANDING_SYSPROP_FLASHLPM        (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32u)+(SYSCTL_SYSPROP_R_FLASHLPM_BIT*4u))))
#define SYSCTL_BITBANDING_SYSPROP_SRAMLPM      (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32u)+(SYSCTL_SYSPROP_R_SRAMLPM_BIT*4u))))
#define SYSCTL_BITBANDING_SYSPROP_SRAMSM    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32u)+(SYSCTL_SYSPROP_R_SRAMSM_BIT*4u))))
#define SYSCTL_BITBANDING_SYSPROP_PIOSCPDE    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32u)+(SYSCTL_SYSPROP_R_PIOSCPDE_BIT*4u))))


/******************************************************************************************
************************************14 PIOSCCAL *********************************************
******************************************************************************************/
#define SYSCTL_PIOSCCAL            (((PIOSCCAL_TypeDef*)(SYSCTL_BASE+SYSCTL_PIOSCCAL_OFFSET )))
#define SYSCTL_PIOSCCAL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PIOSCCAL_OFFSET)))
#define SYSCTL_BITBANDING_PIOSCCAL      (((BITBANDING_PIOSCCAL_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PIOSCCAL_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PIOSCCAL_R_UT_MASK    ((uint32_t)0x0000007Fu)
#define SYSCTL_PIOSCCAL_R_UT_BIT     (0u)

#define SYSCTL_PIOSCCAL_UT_MASK      ((uint32_t)0x0000007Fu)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCCAL_R_UPDATE_MASK       ((uint32_t)0x00000100u)
#define SYSCTL_PIOSCCAL_R_UPDATE_BIT        (8u)
#define SYSCTL_PIOSCCAL_R_UPDATE_NOACTION   ((uint32_t)0x00000000u)
#define SYSCTL_PIOSCCAL_R_UPDATE_UPDATE     ((uint32_t)0x00000100u)

#define SYSCTL_PIOSCCAL_UPDATE_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_PIOSCCAL_UPDATE_NOACTION     ((uint32_t)0x00000000u)
#define SYSCTL_PIOSCCAL_UPDATE_UPDATE       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCCAL_R_CAL_MASK       ((uint32_t)0x00000200u)
#define SYSCTL_PIOSCCAL_R_CAL_BIT        (9u)
#define SYSCTL_PIOSCCAL_R_CAL_NOACTION   ((uint32_t)0x00000000u)
#define SYSCTL_PIOSCCAL_R_CAL_START      ((uint32_t)0x00000200u)

#define SYSCTL_PIOSCCAL_CAL_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_PIOSCCAL_CAL_NOACTION     ((uint32_t)0x00000000u)
#define SYSCTL_PIOSCCAL_CAL_START        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCCAL_R_UTEN_MASK       ((uint32_t)0x80000000u)
#define SYSCTL_PIOSCCAL_R_UTEN_BIT        (31u)
#define SYSCTL_PIOSCCAL_R_UTEN_FACTORY    ((uint32_t)0x00000000u)
#define SYSCTL_PIOSCCAL_R_UTEN_TRIM       ((uint32_t)0x80000000u)

#define SYSCTL_PIOSCCAL_UTEN_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_PIOSCCAL_UTEN_FACTORY      ((uint32_t)0x00000000u)
#define SYSCTL_PIOSCCAL_UTEN_TRIM         ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PIOSCCAL_UPDATE       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PIOSCCAL_OFFSET)*32u)+(SYSCTL_PIOSCCAL_R_UPDATE_BIT*4u))))
#define SYSCTL_BITBANDING_PIOSCCAL_CAL       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PIOSCCAL_OFFSET)*32u)+(SYSCTL_PIOSCCAL_R_CAL_BIT*4u))))
#define SYSCTL_BITBANDING_PIOSCCAL_UTEN       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PIOSCCAL_OFFSET)*32u)+(SYSCTL_PIOSCCAL_R_UTEN_BIT*4u))))

/******************************************************************************************
************************************15 PIOSCSTAT *********************************************
******************************************************************************************/
#define SYSCTL_PIOSCSTAT            (((PIOSCSTAT_TypeDef*)(SYSCTL_BASE+SYSCTL_PIOSCSTAT_OFFSET )))
#define SYSCTL_PIOSCSTAT_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PIOSCSTAT_OFFSET)))
#define SYSCTL_BITBANDING_PIOSCSTAT      (((BITBANDING_PIOSCSTAT_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PIOSCSTAT_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PIOSCSTAT_R_CT_MASK    ((uint32_t)0x0000007Fu)
#define SYSCTL_PIOSCSTAT_R_CT_BIT     (0u)

#define SYSCTL_PIOSCSTAT_CT_MASK      ((uint32_t)0x0000007Fu)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCSTAT_R_RESULT_MASK    ((uint32_t)0x00000300u)
#define SYSCTL_PIOSCSTAT_R_RESULT_BIT     (8u)

#define SYSCTL_PIOSCSTAT_RESULT_MASK      ((uint32_t)0x00000003u)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCSTAT_R_DT_MASK      ((uint32_t)0x007F0000u)
#define SYSCTL_PIOSCSTAT_R_DT_BIT       (16u)

#define SYSCTL_PIOSCSTAT_v_MASK         ((uint32_t)0x0000007Fu)
/*--------*/

/******************************************************************************************
************************************16 PLLFREQ0 *********************************************
******************************************************************************************/
#define SYSCTL_PLLFREQ0            (((PLLFREQ0_TypeDef*)(SYSCTL_BASE+SYSCTL_PLLFREQ0_OFFSET )))
#define SYSCTL_PLLFREQ0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PLLFREQ0_OFFSET)))
#define SYSCTL_BITBANDING_PLLFREQ0      (((BITBANDING_PLLFREQ0_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PLLFREQ0_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PLLFREQ0_R_MINT_MASK    ((uint32_t)0x000003FFu)
#define SYSCTL_PLLFREQ0_R_MINT_BIT     (0u)

#define SYSCTL_PLLFREQ0_MINT_MASK      ((uint32_t)0x000003FFu)
/*--------*/

/*--------*/
#define SYSCTL_PLLFREQ0_R_MFRAC_MASK    ((uint32_t)0x000FFC00u)
#define SYSCTL_PLLFREQ0_R_MFRAC_BIT     (10u)

#define SYSCTL_PLLFREQ0_MFRAC_MASK      ((uint32_t)0x000003FFu)
/*--------*/

/******************************************************************************************
************************************17 PLLFREQ1 *********************************************
******************************************************************************************/
#define SYSCTL_PLLFREQ1            (((PLLFREQ1_TypeDef*)(SYSCTL_BASE+SYSCTL_PLLFREQ1_OFFSET )))
#define SYSCTL_PLLFREQ1_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PLLFREQ1_OFFSET)))
#define SYSCTL_BITBANDING_PLLFREQ1      (((BITBANDING_PLLFREQ1_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PLLFREQ1_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PLLFREQ1_R_N_MASK    ((uint32_t)0x0000001Fu)
#define SYSCTL_PLLFREQ1_R_N_BIT     (0u)

#define SYSCTL_PLLFREQ1_N_MASK      ((uint32_t)0x0000001Fu)
/*--------*/
/*--------*/
#define SYSCTL_PLLFREQ1_R_Q_MASK    ((uint32_t)0x00001F00u)
#define SYSCTL_PLLFREQ1_R_Q_BIT     (8u)

#define SYSCTL_PLLFREQ1_Q_MASK      ((uint32_t)0x0000001Fu)
/*--------*/

/******************************************************************************************
************************************18 PLLSTAT *********************************************
******************************************************************************************/
#define SYSCTL_PLLSTAT            (((PLLSTAT_TypeDef*)(SYSCTL_BASE+SYSCTL_PLLSTAT_OFFSET )))
#define SYSCTL_PLLSTAT_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PLLSTAT_OFFSET)))
#define SYSCTL_BITBANDING_PLLSTAT      (((BITBANDING_PLLSTAT_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PLLSTAT_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PLLSTAT_R_LOCK_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_PLLSTAT_R_LOCK_BIT        (0u)
#define SYSCTL_PLLSTAT_R_LOCK_NOLOCK    ((uint32_t)0x00000000u)
#define SYSCTL_PLLSTAT_R_LOCK_LOCK      ((uint32_t)0x00000001u)

#define SYSCTL_PLLSTAT_LOCK_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PLLSTAT_LOCK_NOLOCK      ((uint32_t)0x00000000u)
#define SYSCTL_PLLSTAT_LOCK_LOCK        ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PLLSTAT_LOCK    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PLLSTAT_OFFSET)*32u)+(SYSCTL_PLLSTAT_R_LOCK_BIT*4u))))

/******************************************************************************************
************************************19 SLSRWRCFG *********************************************
******************************************************************************************/
#define SYSCTL_SLSRWRCFG            (((SLSRWRCFG_TypeDef*)(SYSCTL_BASE+SYSCTL_SLSRWRCFG_OFFSET )))
#define SYSCTL_SLSRWRCFG_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SLSRWRCFG_OFFSET)))
#define SYSCTL_BITBANDING_SLSRWRCFG      (((BITBANDING_SLSRWRCFG_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SLSRWRCFG_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SLSRWRCFG_R_SRAMPM_MASK       ((uint32_t)0x00000003u)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_BIT        (0u)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_ACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_STANDBY    ((uint32_t)0x00000001u)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_LOWPOWER   ((uint32_t)0x00000003u)

#define SYSCTL_SLSRWRCFG_SRAMPM_MASK       ((uint32_t)0x00000003u)
#define SYSCTL_SLSRWRCFG_SRAMPM_ACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_SLSRWRCFG_SRAMPM_STANDBY    ((uint32_t)0x00000001u)
#define SYSCTL_SLSRWRCFG_SRAMPM_LOWPOWER   ((uint32_t)0x00000003u)
/*--------*/

/*--------*/
#define SYSCTL_SLSRWRCFG_R_FLASHPM_MASK       ((uint32_t)0x00000030u)
#define SYSCTL_SLSRWRCFG_R_FLASHPM_BIT        (2u)
#define SYSCTL_SLSRWRCFG_R_FLASHPM_ACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_SLSRWRCFG_R_FLASHPM_LOWPOWER   ((uint32_t)0x00000020u)

#define SYSCTL_SLSRWRCFG_FLASHPM_MASK       ((uint32_t)0x00000003u)
#define SYSCTL_SLSRWRCFG_FLASHPM_ACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_SLSRWRCFG_FLASHPM_LOWPOWER   ((uint32_t)0x00000002u)
/*--------*/

/******************************************************************************************
************************************20 DSLSRWRCFG *********************************************
******************************************************************************************/
#define SYSCTL_DSLSRWRCFG            (((DSLSRWRCFG_TypeDef*)(SYSCTL_BASE+SYSCTL_DSLSRWRCFG_OFFSET )))
#define SYSCTL_DSLSRWRCFG_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DSLSRWRCFG_OFFSET)))
#define SYSCTL_BITBANDING_DSLSRWRCFG      (((BITBANDING_DSLSRWRCFG_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DSLSRWRCFG_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_MASK       ((uint32_t)0x00000003u)
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_BIT        (0u)
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_ACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_STANDBY    ((uint32_t)0x00000001u)
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_LOWPOWER   ((uint32_t)0x00000003u)

#define SYSCTL_DSLSRWRCFG_SRAMPM_MASK       ((uint32_t)0x00000003u)
#define SYSCTL_DSLSRWRCFG_SRAMPM_ACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_DSLSRWRCFG_SRAMPM_STANDBY    ((uint32_t)0x00000001u)
#define SYSCTL_DSLSRWRCFG_SRAMPM_LOWPOWER   ((uint32_t)0x00000003u)
/*--------*/

/*--------*/
#define SYSCTL_DSLSRWRCFG_R_FLASHPM_MASK       ((uint32_t)0x00000030u)
#define SYSCTL_DSLSRWRCFG_R_FLASHPM_BIT        (2u)
#define SYSCTL_DSLSRWRCFG_R_FLASHPM_ACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_DSLSRWRCFG_R_FLASHPM_LOWPOWER   ((uint32_t)0x00000020u)

#define SYSCTL_DSLSRWRCFG_FLASHPM_MASK       ((uint32_t)0x00000003u)
#define SYSCTL_DSLSRWRCFG_FLASHPM_ACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_DSLSRWRCFG_FLASHPM_LOWPOWER   ((uint32_t)0x00000002u)
/*--------*/

/******************************************************************************************
************************************21 LDOSPCTL *********************************************
******************************************************************************************/
#define SYSCTL_LDOSPCTL            (((LDOSPCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_LDOSPCTL_OFFSET )))
#define SYSCTL_LDOSPCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_LDOSPCTL_OFFSET)))
#define SYSCTL_BITBANDING_LDOSPCTL      (((BITBANDING_LDOSPCTL_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_LDOSPCTL_OFFSET)*32u))))

/*--------*/
#define SYSCTL_LDOSPCTL_R_VLDO_MASK    ((uint32_t)0x000000FFu)
#define SYSCTL_LDOSPCTL_R_VLDO_BIT     (0u)

#define SYSCTL_LDOSPCTL_VLDO_MASK      ((uint32_t)0x000000FFu)
/*--------*/

/*--------*/
#define SYSCTL_LDOSPCTL_R_VADJEN_MASK    ((uint32_t)0x80000000u)
#define SYSCTL_LDOSPCTL_R_VADJEN_BIT     (31u)

#define SYSCTL_LDOSPCTL_VADJEN_MASK      ((uint32_t)0x000000F01u)
/*--------*/

#define SYSCTL_BITBANDING_LDOSPCTL_VADJEN    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_LDOSPCTL_OFFSET)*32u)+(SYSCTL_LDOSPCTL_R_VADJEN_BIT*4u))))


/******************************************************************************************
************************************22 LDOSPCAL *********************************************
******************************************************************************************/
#define SYSCTL_LDOSPCAL            (((LDOSPCAL_TypeDef*)(SYSCTL_BASE+SYSCTL_LDOSPCAL_OFFSET )))
#define SYSCTL_LDOSPCAL_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_LDOSPCAL_OFFSET)))
#define SYSCTL_BITBANDING_LDOSPCAL      (((BITBANDING_LDOSPCAL_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_LDOSPCAL_OFFSET)*32u))))

/*--------*/
#define SYSCTL_LDOSPCAL_R_NOPLL_MASK    ((uint32_t)0x000000FFu)
#define SYSCTL_LDOSPCAL_R_NOPLL_BIT     (0u)

#define SYSCTL_LDOSPCAL_NOPLL_MASK      ((uint32_t)0x000000FFu)
/*--------*/

/*--------*/
#define SYSCTL_LDOSPCAL_R_WITHPLL_MASK    ((uint32_t)0x0000FF00u)
#define SYSCTL_LDOSPCAL_R_WITHPLL_BIT     (8u)

#define SYSCTL_LDOSPCAL_WITHPLL_MASK      ((uint32_t)0x000000FFu)
/*--------*/

/******************************************************************************************
************************************23 LDODPCTL *********************************************
******************************************************************************************/
#define SYSCTL_LDODPCTL            (((LDODPCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_LDODPCTL_OFFSET )))
#define SYSCTL_LDODPCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_LDODPCTL_OFFSET)))
#define SYSCTL_BITBANDING_LDODPCTL      (((BITBANDING_LDODPCTL_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_LDODPCTL_OFFSET)*32u))))

/*--------*/
#define SYSCTL_LDODPCTL_R_VLDO_MASK    ((uint32_t)0x000000FFu)
#define SYSCTL_LDODPCTL_R_VLDO_BIT     (0u)

#define SYSCTL_LDODPCTL_VLDO_MASK      ((uint32_t)0x000000FFu)
/*--------*/

/*--------*/
#define SYSCTL_LDODPCTL_R_VADJEN_MASK    ((uint32_t)0x80000000u)
#define SYSCTL_LDODPCTL_R_VADJEN_BIT     (31u)

#define SYSCTL_LDODPCTL_VADJEN_MASK      ((uint32_t)0x000000F01u)
/*--------*/

#define SYSCTL_BITBANDING_LDODPCTL_VADJEN    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_LDODPCTL_OFFSET)*32u)+(SYSCTL_LDODPCTL_R_VADJEN_BIT*4u))))


/******************************************************************************************
************************************24 LDODPCAL *********************************************
******************************************************************************************/
#define SYSCTL_LDODPCAL            (((LDODPCAL_TypeDef*)(SYSCTL_BASE+SYSCTL_LDODPCAL_OFFSET )))
#define SYSCTL_LDODPCAL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_LDODPCAL_OFFSET)))
#define SYSCTL_BITBANDING_LDODPCAL      (((BITBANDING_LDODPCAL_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_LDODPCAL_OFFSET)*32u))))

/*--------*/
#define SYSCTL_LDODPCAL_R_NOPLL_MASK    ((uint32_t)0x000000FFu)
#define SYSCTL_LDODPCAL_R_NOPLL_BIT     (0u)

#define SYSCTL_LDODPCAL_NOPLL_MASK      ((uint32_t)0x000000FFu)
/*--------*/

/*--------*/
#define SYSCTL_LDODPCAL_R_KHZ30_MASK    ((uint32_t)0x0000FF00u)
#define SYSCTL_LDODPCAL_R_KHZ30_BIT     (8u)

#define SYSCTL_LDODPCAL_KHZ30_MASK      ((uint32_t)0x000000FFu)
/*--------*/

/******************************************************************************************
************************************25 SDPMST *********************************************
******************************************************************************************/
#define SYSCTL_SDPMST            (((SDPMST_TypeDef*)(SYSCTL_BASE+SYSCTL_SDPMSTL_OFFSET )))
#define SYSCTL_SDPMST_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SDPMST_OFFSET)))
#define SYSCTL_BITBANDING_SDPMST      (((BITBANDING_SDPMST_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SDPMST_R_SPDERR_MASK     ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_R_SPDERR_BIT      (0u)
#define SYSCTL_SDPMST_R_SPDERR_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_SPDERR_ERROR    ((uint32_t)0x00000001u)

#define SYSCTL_SDPMST_SPDERR_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_SPDERR_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_SPDERR_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_FPDERR_MASK     ((uint32_t)0x00000002u)
#define SYSCTL_SDPMST_R_FPDERR_BIT      (1u)
#define SYSCTL_SDPMST_R_FPDERR_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_FPDERR_ERROR    ((uint32_t)0x00000002u)

#define SYSCTL_SDPMST_FPDERR_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_FPDERR_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_FPDERR_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_SRDERR_MASK     ((uint32_t)0x00000004u)
#define SYSCTL_SDPMST_R_SRDERR_BIT      (2u)
#define SYSCTL_SDPMST_R_SRDERR_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_SRDERR_ERROR    ((uint32_t)0x00000004u)

#define SYSCTL_SDPMST_SRDERR_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_SRDERR_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_SRDERR_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LDMINERR_MASK     ((uint32_t)0x00000008u)
#define SYSCTL_SDPMST_R_LDMINERR_BIT      (3u)
#define SYSCTL_SDPMST_R_LDMINERR_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_LDMINERR_ERROR    ((uint32_t)0x00000008u)

#define SYSCTL_SDPMST_LDMINERR_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_LDMINERR_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_LDMINERR_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LSMINERR_MASK     ((uint32_t)0x00000010u)
#define SYSCTL_SDPMST_R_LSMINERR_BIT      (4u)
#define SYSCTL_SDPMST_R_LSMINERR_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_LSMINERR_ERROR    ((uint32_t)0x00000010u)

#define SYSCTL_SDPMST_LSMINERR_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_LSMINERR_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_LSMINERR_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LMAXERR_MASK     ((uint32_t)0x00000040u)
#define SYSCTL_SDPMST_R_LMAXERR_BIT      (6u)
#define SYSCTL_SDPMST_R_LMAXERR_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_LMAXERR_ERROR    ((uint32_t)0x00000040u)

#define SYSCTL_SDPMST_LMAXERR_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_LMAXERR_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_LMAXERR_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_SRDW_MASK     ((uint32_t)0x00000080u)
#define SYSCTL_SDPMST_R_SRDW_BIT      (7u)
#define SYSCTL_SDPMST_R_SRDW_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_SRDW_ERROR    ((uint32_t)0x00000080u)

#define SYSCTL_SDPMST_SRDW_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_SRDW_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_SRDW_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_PRACT_MASK     ((uint32_t)0x00010000u)
#define SYSCTL_SDPMST_R_PRACT_BIT      (16u)
#define SYSCTL_SDPMST_R_PRACT_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_PRACT_ERROR    ((uint32_t)0x00010000u)

#define SYSCTL_SDPMST_PRACT_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_PRACT_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_PRACT_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LOWPWR_MASK     ((uint32_t)0x00020000u)
#define SYSCTL_SDPMST_R_LOWPWR_BIT      (17u)
#define SYSCTL_SDPMST_R_LOWPWR_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_LOWPWR_ERROR    ((uint32_t)0x00020000u)

#define SYSCTL_SDPMST_LOWPWR_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_LOWPWR_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_LOWPWR_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_FLASHLP_MASK     ((uint32_t)0x00040000u)
#define SYSCTL_SDPMST_R_FLASHLP_BIT      (18u)
#define SYSCTL_SDPMST_R_FLASHLP_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_FLASHLP_ERROR    ((uint32_t)0x00040000u)

#define SYSCTL_SDPMST_FLASHLP_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_FLASHLP_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_FLASHLP_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LDOUA_MASK     ((uint32_t)0x00080000u)
#define SYSCTL_SDPMST_R_LDOUA_BIT      (19u)
#define SYSCTL_SDPMST_R_LDOUA_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_LDOUA_ERROR    ((uint32_t)0x00080000u)

#define SYSCTL_SDPMST_LDOUA_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_LDOUA_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_LDOUA_ERROR      ((uint32_t)0x00000001u)
/*--------*/



#define SYSCTL_BITBANDING_SDPMST_SPDERR   (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32u)+(SYSCTL_SDPMST_R_SPDERR_BIT*4u))))
#define SYSCTL_BITBANDING_SDPMST_FPDERR   (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32u)+(SYSCTL_SDPMST_R_FPDERR_BIT*4u))))
#define SYSCTL_BITBANDING_SDPMST_SRDERR   (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32u)+(SYSCTL_SDPMST_R_SRDERR_BIT*4u))))
#define SYSCTL_BITBANDING_SDPMST_LDMINERR (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32u)+(SYSCTL_SDPMST_R_LDMINERR_BIT*4u))))
#define SYSCTL_BITBANDING_SDPMST_LSMINERR (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32u)+(SYSCTL_SDPMST_R_LSMINERR_BIT*4u))))
#define SYSCTL_BITBANDING_SDPMST_LMAXERR  (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32u)+(SYSCTL_SDPMST_R_LMAXERR_BIT*4u))))
#define SYSCTL_BITBANDING_SDPMST_SRDW     (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32u)+(SYSCTL_SDPMST_R_SRDW_BIT*4u))))
#define SYSCTL_BITBANDING_SDPMST_PRACT    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32u)+(SYSCTL_SDPMST_R_PRACT_BIT*4u))))
#define SYSCTL_BITBANDING_SDPMST_LOWPWR   (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32u)+(SYSCTL_SDPMST_R_LOWPWR_BIT*4u))))
#define SYSCTL_BITBANDING_SDPMST_FLASHLP  (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32u)+(SYSCTL_SDPMST_R_FLASHLP_BIT*4u))))
#define SYSCTL_BITBANDING_SDPMST_LDOUA    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32u)+(SYSCTL_SDPMST_R_LDOUA_BIT*4u))))

/******************************************************************************************
************************************26 PPWD *********************************************
******************************************************************************************/
#define SYSCTL_PPWD            (((PERIPHERAL_WD_TypeDef*)(SYSCTL_BASE+SYSCTL_PPWD_OFFSET )))
#define SYSCTL_PPWD_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPWD_OFFSET)))
#define SYSCTL_BITBANDING_PPWD      (((BITBANDING_PERIPHERAL_WD_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPWD_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PPWD_R_WDT0_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_PPWD_R_WDT0_BIT          (0u)
#define SYSCTL_PPWD_R_WDT0_NOPRESENT    ((uint32_t)0x00000000u)
#define SYSCTL_PPWD_R_WDT0_PRESENT      ((uint32_t)0x00000001u)

#define SYSCTL_PPWD_WDT0_MASK           ((uint32_t)0x00000001u)
#define SYSCTL_PPWD_WDT0_NOPRESENT      ((uint32_t)0x00000000u)
#define SYSCTL_PPWD_WDT0_PRESENT        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPWD_R_WDT1_MASK         ((uint32_t)0x00000002u)
#define SYSCTL_PPWD_R_WDT1_BIT          (1u)
#define SYSCTL_PPWD_R_WDT1_NOPRESENT    ((uint32_t)0x00000000u)
#define SYSCTL_PPWD_R_WDT1_PRESENT      ((uint32_t)0x00000002u)

#define SYSCTL_PPWD_WDT1_MASK           ((uint32_t)0x00000001u)
#define SYSCTL_PPWD_WDT1_NOPRESENT      ((uint32_t)0x00000000u)
#define SYSCTL_PPWD_WDT1_PRESENT        ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PPWD_WDT0    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPWD_OFFSET)*32u)+(SYSCTL_PPWD_R_WDT0_BIT*4u))))
#define SYSCTL_BITBANDING_PPWD_WDT1    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPWD_OFFSET)*32u)+(SYSCTL_PPWD_R_WDT1_BIT*4u))))


/******************************************************************************************
************************************27 PPTIMER *********************************************
******************************************************************************************/
#define SYSCTL_PPTIMER            (((PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_PPTIMER_OFFSET )))
#define SYSCTL_PPTIMER_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPTIMER_OFFSET)))
#define SYSCTL_BITBANDING_PPTIMER      (((BITBANDING_PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PPTIMER_R_TIMER0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPTIMER_R_TIMER0_BIT         (0u)
#define SYSCTL_PPTIMER_R_TIMER0_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_R_TIMER0_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPTIMER_TIMER0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPTIMER_TIMER0_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_TIMER0_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPTIMER_R_TIMER1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPTIMER_R_TIMER1_BIT         (1u)
#define SYSCTL_PPTIMER_R_TIMER1_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_R_TIMER1_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPTIMER_TIMER1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPTIMER_TIMER1_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_TIMER1_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPTIMER_R_TIMER2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_PPTIMER_R_TIMER2_BIT         (2u)
#define SYSCTL_PPTIMER_R_TIMER2_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_R_TIMER2_PRESENT     ((uint32_t)0x00000004u)

#define SYSCTL_PPTIMER_TIMER2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPTIMER_TIMER2_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_TIMER2_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPTIMER_R_TIMER3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_PPTIMER_R_TIMER3_BIT         (3u)
#define SYSCTL_PPTIMER_R_TIMER3_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_R_TIMER3_PRESENT     ((uint32_t)0x00000008u)

#define SYSCTL_PPTIMER_TIMER3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPTIMER_TIMER3_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_TIMER3_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPTIMER_R_TIMER4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_PPTIMER_R_TIMER4_BIT         (4u)
#define SYSCTL_PPTIMER_R_TIMER4_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_R_TIMER4_PRESENT     ((uint32_t)0x00000010u)

#define SYSCTL_PPTIMER_TIMER4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPTIMER_TIMER4_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_TIMER4_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPTIMER_R_TIMER5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_PPTIMER_R_TIMER5_BIT         (5u)
#define SYSCTL_PPTIMER_R_TIMER5_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_R_TIMER5_PRESENT     ((uint32_t)0x00000020u)

#define SYSCTL_PPTIMER_TIMER5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPTIMER_TIMER5_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_TIMER5_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PPTIMER_TIMER0    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32u)+(SYSCTL_PPTIMER_R_TIMER0_BIT*4u))))
#define SYSCTL_BITBANDING_PPTIMER_TIMER1    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32u)+(SYSCTL_PPTIMER_R_TIMER1_BIT*4u))))
#define SYSCTL_BITBANDING_PPTIMER_TIMER2    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32u)+(SYSCTL_PPTIMER_R_TIMER2_BIT*4u))))
#define SYSCTL_BITBANDING_PPTIMER_TIMER3    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32u)+(SYSCTL_PPTIMER_R_TIMER3_BIT*4u))))
#define SYSCTL_BITBANDING_PPTIMER_TIMER4    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32u)+(SYSCTL_PPTIMER_R_TIMER4_BIT*4u))))
#define SYSCTL_BITBANDING_PPTIMER_TIMER5    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32u)+(SYSCTL_PPTIMER_R_TIMER5_BIT*4u))))

/******************************************************************************************
************************************28 PPGPIO *********************************************
******************************************************************************************/
#define SYSCTL_PPGPIO            (((PERIPHERAL_GPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_PPGPIO_OFFSET )))
#define SYSCTL_PPGPIO_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPGPIO_OFFSET)))
#define SYSCTL_BITBANDING_PPGPIO      (((BITBANDING_PERIPHERAL_GPIO_BITBANDING_TypeDef*)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOA_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_R_GPIOA_BIT         (0u)
#define SYSCTL_PPGPIO_R_GPIOA_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOA_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPGPIO_GPIOA_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOA_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOA_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOB_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPGPIO_R_GPIOB_BIT         (1u)
#define SYSCTL_PPGPIO_R_GPIOB_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOB_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPGPIO_GPIOB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOB_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOB_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOC_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_PPGPIO_R_GPIOC_BIT         (2u)
#define SYSCTL_PPGPIO_R_GPIOC_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOC_PRESENT     ((uint32_t)0x00000004u)

#define SYSCTL_PPGPIO_GPIOC_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOC_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOC_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOD_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_PPGPIO_R_GPIOD_BIT         (3u)
#define SYSCTL_PPGPIO_R_GPIOD_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOD_PRESENT     ((uint32_t)0x00000008u)

#define SYSCTL_PPGPIO_GPIOD_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOD_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOD_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOE_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_PPGPIO_R_GPIOE_BIT         (4u)
#define SYSCTL_PPGPIO_R_GPIOE_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOE_PRESENT     ((uint32_t)0x00000010u)

#define SYSCTL_PPGPIO_GPIOE_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOE_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOE_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOF_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_PPGPIO_R_GPIOF_BIT         (5u)
#define SYSCTL_PPGPIO_R_GPIOF_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOF_PRESENT     ((uint32_t)0x00000020u)

#define SYSCTL_PPGPIO_GPIOF_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOF_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOF_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_PPGPIO_R_GPIOG_BIT         (6u)
#define SYSCTL_PPGPIO_R_GPIOG_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOG_PRESENT     ((uint32_t)0x00000040u)

#define SYSCTL_PPGPIO_GPIOG_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOG_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOG_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_PPGPIO_R_GPIOG_BIT         (6u)
#define SYSCTL_PPGPIO_R_GPIOG_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOG_PRESENT     ((uint32_t)0x00000040u)

#define SYSCTL_PPGPIO_GPIOG_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOG_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOG_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOH_MASK        ((uint32_t)0x00000080u)
#define SYSCTL_PPGPIO_R_GPIOH_BIT         (7u)
#define SYSCTL_PPGPIO_R_GPIOH_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOH_PRESENT     ((uint32_t)0x00000080u)

#define SYSCTL_PPGPIO_GPIOH_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOH_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOH_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOJ_MASK        ((uint32_t)0x00000100u)
#define SYSCTL_PPGPIO_R_GPIOJ_BIT         (8u)
#define SYSCTL_PPGPIO_R_GPIOJ_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOJ_PRESENT     ((uint32_t)0x00000100u)

#define SYSCTL_PPGPIO_GPIOJ_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOJ_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOJ_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOK_MASK        ((uint32_t)0x00000200u)
#define SYSCTL_PPGPIO_R_GPIOK_BIT         (9u)
#define SYSCTL_PPGPIO_R_GPIOK_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOK_PRESENT     ((uint32_t)0x00000200u)

#define SYSCTL_PPGPIO_GPIOK_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOK_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOK_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOL_MASK        ((uint32_t)0x00000400u)
#define SYSCTL_PPGPIO_R_GPIOL_BIT         (10u)
#define SYSCTL_PPGPIO_R_GPIOL_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOL_PRESENT     ((uint32_t)0x00000400u)

#define SYSCTL_PPGPIO_GPIOL_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOL_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOL_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOM_MASK        ((uint32_t)0x00000800u)
#define SYSCTL_PPGPIO_R_GPIOM_BIT         (11u)
#define SYSCTL_PPGPIO_R_GPIOM_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOM_PRESENT     ((uint32_t)0x00000800u)

#define SYSCTL_PPGPIO_GPIOM_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOM_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOM_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPION_MASK        ((uint32_t)0x00001000u)
#define SYSCTL_PPGPIO_R_GPION_BIT         (12u)
#define SYSCTL_PPGPIO_R_GPION_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPION_PRESENT     ((uint32_t)0x00001000u)

#define SYSCTL_PPGPIO_GPION_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPION_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPION_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOP_MASK        ((uint32_t)0x00002000u)
#define SYSCTL_PPGPIO_R_GPIOP_BIT         (13u)
#define SYSCTL_PPGPIO_R_GPIOP_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOP_PRESENT     ((uint32_t)0x00002000u)

#define SYSCTL_PPGPIO_GPIOP_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOP_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOP_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOQ_MASK        ((uint32_t)0x00004000u)
#define SYSCTL_PPGPIO_R_GPIOQ_BIT         (14u)
#define SYSCTL_PPGPIO_R_GPIOQ_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOQ_PRESENT     ((uint32_t)0x00004000u)

#define SYSCTL_PPGPIO_GPIOQ_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOQ_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOQ_PRESENT       ((uint32_t)0x00000001u)
/*--------*/
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOA    (*((volatile const uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32u)+(SYSCTL_PPGPIO_R_GPIOA_BIT*4u))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOB    (*((volatile const uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32u)+(SYSCTL_PPGPIO_R_GPIOB_BIT*4u))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOC    (*((volatile const uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32u)+(SYSCTL_PPGPIO_R_GPIOC_BIT*4u))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOD    (*((volatile const uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32u)+(SYSCTL_PPGPIO_R_GPIOD_BIT*4u))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOE    (*((volatile const uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32u)+(SYSCTL_PPGPIO_R_GPIOE_BIT*4u))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOF    (*((volatile const uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32u)+(SYSCTL_PPGPIO_R_GPIOF_BIT*4u))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOG    (*((volatile const uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32u)+(SYSCTL_PPGPIO_R_GPIOG_BIT*4u))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOH    (*((volatile const uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32u)+(SYSCTL_PPGPIO_R_GPIOH_BIT*4u))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOJ    (*((volatile const uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32u)+(SYSCTL_PPGPIO_R_GPIOJ_BIT*4u))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOK    (*((volatile const uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32u)+(SYSCTL_PPGPIO_R_GPIOK_BIT*4u))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOL    (*((volatile const uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32u)+(SYSCTL_PPGPIO_R_GPIOL_BIT*4u))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOM    (*((volatile const uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32u)+(SYSCTL_PPGPIO_R_GPIOM_BIT*4u))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPION    (*((volatile const uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32u)+(SYSCTL_PPGPIO_R_GPION_BIT*4u))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOP    (*((volatile const uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32u)+(SYSCTL_PPGPIO_R_GPIOP_BIT*4u))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOQ    (*((volatile const uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32u)+(SYSCTL_PPGPIO_R_GPIOQ_BIT*4u))))

/******************************************************************************************
************************************29 PPDMA *********************************************
******************************************************************************************/
#define SYSCTL_PPDMA            (((PERIPHERAL_DMA_TypeDef*)(SYSCTL_BASE+SYSCTL_PPDMA_OFFSET )))
#define SYSCTL_PPDMA_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPDMA_OFFSET)))
#define SYSCTL_BITBANDING_PPDMA      (((BITBANDING_PERIPHERAL_DMA_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPDMA_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PPDMA_R_UDMA_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPDMA_R_UDMA_BIT         (0u)
#define SYSCTL_PPDMA_R_UDMA_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPDMA_R_UDMA_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPDMA_UDMA_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPDMA_UDMA_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPDMA_UDMA_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PPDMA_UDMA    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPDMA_OFFSET)*32u)+(SYSCTL_PPDMA_R_UDMA_BIT*4u))))

/******************************************************************************************
************************************30 PPHIB *********************************************
******************************************************************************************/
#define SYSCTL_PPHIB            (((PERIPHERAL_HIB_TypeDef*)(SYSCTL_BASE+SYSCTL_PPHIB_OFFSET )))
#define SYSCTL_PPHIB_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPHIB_OFFSET)))
#define SYSCTL_BITBANDING_PPHIB      (((BITBANDING_PERIPHERAL_HIB_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPHIB_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PPHIB_R_HIB_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPHIB_R_HIB_BIT         (0u)
#define SYSCTL_PPHIB_R_HIB_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPHIB_R_HIB_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPHIB_HIB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPHIB_HIB_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPHIB_HIB_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PPHIB_HIB    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPHIB_OFFSET)*32u)+(SYSCTL_PPHIB_R_HIB_BIT*4u))))

/******************************************************************************************
************************************31 PPUART *********************************************
******************************************************************************************/
#define SYSCTL_PPUART            (((PERIPHERAL_UART_TypeDef*)(SYSCTL_BASE+SYSCTL_PPUART_OFFSET )))
#define SYSCTL_PPUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPUART_OFFSET)))
#define SYSCTL_BITBANDING_PPUART      (((BITBANDING_PERIPHERAL_UART_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PPUART_R_UART0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPUART_R_UART0_BIT         (0u)
#define SYSCTL_PPUART_R_UART0_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_R_UART0_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPUART_UART0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPUART_UART0_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_UART0_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPUART_R_UART1_BIT         (1u)
#define SYSCTL_PPUART_R_UART1_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_R_UART1_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPUART_UART1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPUART_UART1_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_UART1_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_PPUART_R_UART2_BIT         (2u)
#define SYSCTL_PPUART_R_UART2_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_R_UART2_PRESENT     ((uint32_t)0x00000004u)

#define SYSCTL_PPUART_UART2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPUART_UART2_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_UART2_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_PPUART_R_UART3_BIT         (3u)
#define SYSCTL_PPUART_R_UART3_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_R_UART3_PRESENT     ((uint32_t)0x00000008u)

#define SYSCTL_PPUART_UART3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPUART_UART3_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_UART3_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_PPUART_R_UART4_BIT         (4u)
#define SYSCTL_PPUART_R_UART4_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_R_UART4_PRESENT     ((uint32_t)0x00000010u)

#define SYSCTL_PPUART_UART4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPUART_UART4_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_UART4_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_PPUART_R_UART5_BIT         (5u)
#define SYSCTL_PPUART_R_UART5_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_R_UART5_PRESENT     ((uint32_t)0x00000020u)

#define SYSCTL_PPUART_UART5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPUART_UART5_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_UART5_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART6_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_PPUART_R_UART6_BIT         (6u)
#define SYSCTL_PPUART_R_UART6_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_R_UART6_PRESENT     ((uint32_t)0x00000040u)

#define SYSCTL_PPUART_UART6_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPUART_UART6_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_UART6_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART7_MASK        ((uint32_t)0x00000080u)
#define SYSCTL_PPUART_R_UART7_BIT         (7u)
#define SYSCTL_PPUART_R_UART7_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_R_UART7_PRESENT     ((uint32_t)0x00000080u)

#define SYSCTL_PPUART_UART7_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPUART_UART7_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_UART7_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PPUART_UART0    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32u)+(SYSCTL_PPUART_R_UART0_BIT*4u))))
#define SYSCTL_BITBANDING_PPUART_UART1    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32u)+(SYSCTL_PPUART_R_UART1_BIT*4u))))
#define SYSCTL_BITBANDING_PPUART_UART2    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32u)+(SYSCTL_PPUART_R_UART2_BIT*4u))))
#define SYSCTL_BITBANDING_PPUART_UART3    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32u)+(SYSCTL_PPUART_R_UART3_BIT*4u))))
#define SYSCTL_BITBANDING_PPUART_UART4    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32u)+(SYSCTL_PPUART_R_UART4_BIT*4u))))
#define SYSCTL_BITBANDING_PPUART_UART5    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32u)+(SYSCTL_PPUART_R_UART5_BIT*4u))))
#define SYSCTL_BITBANDING_PPUART_UART6    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32u)+(SYSCTL_PPUART_R_UART6_BIT*4u))))
#define SYSCTL_BITBANDING_PPUART_UART7    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32u)+(SYSCTL_PPUART_R_UART7_BIT*4u))))

/******************************************************************************************
************************************32 PPSSI *********************************************
******************************************************************************************/
#define SYSCTL_PPSSI            (((PERIPHERAL_SSI_TypeDef*)(SYSCTL_BASE+SYSCTL_PPSSI_OFFSET )))
#define SYSCTL_PPSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPSSI_OFFSET)))
#define SYSCTL_BITBANDING_PPSSI      (((BITBANDING_PERIPHERAL_SSI_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPSSI_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PPSSI_R_SSI0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPSSI_R_SSI0_BIT         (0u)
#define SYSCTL_PPSSI_R_SSI0_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPSSI_R_SSI0_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPSSI_SSI0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPSSI_SSI0_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPSSI_SSI0_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPSSI_R_SSI1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPSSI_R_SSI1_BIT         (1u)
#define SYSCTL_PPSSI_R_SSI1_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPSSI_R_SSI1_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPSSI_SSI1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPSSI_SSI1_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPSSI_SSI1_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPSSI_R_SSI2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_PPSSI_R_SSI2_BIT         (2u)
#define SYSCTL_PPSSI_R_SSI2_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPSSI_R_SSI2_PRESENT     ((uint32_t)0x00000004u)

#define SYSCTL_PPSSI_SSI2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPSSI_SSI2_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPSSI_SSI2_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPSSI_R_SSI3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_PPSSI_R_SSI3_BIT         (3u)
#define SYSCTL_PPSSI_R_SSI3_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPSSI_R_SSI3_PRESENT     ((uint32_t)0x00000008u)

#define SYSCTL_PPSSI_SSI3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPSSI_SSI3_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPSSI_SSI3_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PPSSI_SSI0    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPSSI_OFFSET)*32u)+(SYSCTL_PPSSI_R_SSI0_BIT*4u))))
#define SYSCTL_BITBANDING_PPSSI_SSI1    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPSSI_OFFSET)*32u)+(SYSCTL_PPSSI_R_SSI1_BIT*4u))))
#define SYSCTL_BITBANDING_PPSSI_SSI2    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPSSI_OFFSET)*32u)+(SYSCTL_PPSSI_R_SSI2_BIT*4u))))
#define SYSCTL_BITBANDING_PPSSI_SSI3    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPSSI_OFFSET)*32u)+(SYSCTL_PPSSI_R_SSI3_BIT*4u))))

/******************************************************************************************
************************************33 PPI2C *********************************************
******************************************************************************************/
#define SYSCTL_PPI2C            (((PERIPHERAL_I2C_TypeDef*)(SYSCTL_BASE+SYSCTL_PPI2C_OFFSET )))
#define SYSCTL_PPI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPI2C_OFFSET)))
#define SYSCTL_BITBANDING_PPI2C      (((BITBANDING_PERIPHERAL_I2C_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PPI2C_R_I2C0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPI2C_R_I2C0_BIT         (0u)
#define SYSCTL_PPI2C_R_I2C0_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_R_I2C0_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPI2C_I2C0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPI2C_I2C0_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_I2C0_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPI2C_R_I2C1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPI2C_R_I2C1_BIT         (1u)
#define SYSCTL_PPI2C_R_I2C1_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_R_I2C1_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPI2C_I2C1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPI2C_I2C1_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_I2C1_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPI2C_R_I2C2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_PPI2C_R_I2C2_BIT         (2u)
#define SYSCTL_PPI2C_R_I2C2_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_R_I2C2_PRESENT     ((uint32_t)0x00000004u)

#define SYSCTL_PPI2C_I2C2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPI2C_I2C2_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_I2C2_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPI2C_R_I2C3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_PPI2C_R_I2C3_BIT         (3u)
#define SYSCTL_PPI2C_R_I2C3_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_R_I2C3_PRESENT     ((uint32_t)0x00000008u)

#define SYSCTL_PPI2C_I2C3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPI2C_I2C3_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_I2C3_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPI2C_R_I2C4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_PPI2C_R_I2C4_BIT         (4u)
#define SYSCTL_PPI2C_R_I2C4_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_R_I2C4_PRESENT     ((uint32_t)0x00000010u)

#define SYSCTL_PPI2C_I2C4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPI2C_I2C4_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_I2C4_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPI2C_R_I2C5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_PPI2C_R_I2C5_BIT         (5u)
#define SYSCTL_PPI2C_R_I2C5_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_R_I2C5_PRESENT     ((uint32_t)0x00000020u)

#define SYSCTL_PPI2C_I2C5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPI2C_I2C5_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_I2C5_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PPI2C_I2C0    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32u)+(SYSCTL_PPI2C_R_I2C0_BIT*4u))))
#define SYSCTL_BITBANDING_PPI2C_I2C1    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32u)+(SYSCTL_PPI2C_R_I2C1_BIT*4u))))
#define SYSCTL_BITBANDING_PPI2C_I2C2    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32u)+(SYSCTL_PPI2C_R_I2C2_BIT*4u))))
#define SYSCTL_BITBANDING_PPI2C_I2C3    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32u)+(SYSCTL_PPI2C_R_I2C3_BIT*4u))))
#define SYSCTL_BITBANDING_PPI2C_I2C4    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32u)+(SYSCTL_PPI2C_R_I2C4_BIT*4u))))
#define SYSCTL_BITBANDING_PPI2C_I2C5    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32u)+(SYSCTL_PPI2C_R_I2C5_BIT*4u))))

/******************************************************************************************
************************************34 PPUSB *********************************************
******************************************************************************************/
#define SYSCTL_PPUSB            (((PERIPHERAL_USB_TypeDef*)(SYSCTL_BASE+SYSCTL_PPUSB_OFFSET )))
#define SYSCTL_PPUSB_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPUSB_OFFSET)))
#define SYSCTL_BITBANDING_PPUSB      (((BITBANDING_PERIPHERAL_USB_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPUSB_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PPUSB_R_USB_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPUSB_R_USB_BIT         (0u)
#define SYSCTL_PPUSB_R_USB_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPUSB_R_USB_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPUSB_USB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPUSB_USB_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPUSB_USB_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PPUSB_USB    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPUSB_OFFSET)*32u)+(SYSCTL_PPUSB_R_USB_BIT*4u))))

/******************************************************************************************
************************************35 PPCAN *********************************************
******************************************************************************************/
#define SYSCTL_PPCAN            (((PERIPHERAL_CAN_TypeDef*)(SYSCTL_BASE+SYSCTL_PPCAN_OFFSET )))
#define SYSCTL_PPCAN_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPCAN_OFFSET)))
#define SYSCTL_BITBANDING_PPCAN      (((BITBANDING_PERIPHERAL_CAN_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPCAN_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PPCAN_R_CAN0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPCAN_R_CAN0_BIT         (0u)
#define SYSCTL_PPCAN_R_CAN0_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPCAN_R_CAN0_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPCAN_CAN0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPCAN_CAN0_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPCAN_CAN0_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPCAN_R_CAN1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPCAN_R_CAN1_BIT         (1u)
#define SYSCTL_PPCAN_R_CAN1_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPCAN_R_CAN1_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPCAN_CAN1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPCAN_CAN1_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPCAN_CAN1_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PPCAN_CAN0    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPCAN_OFFSET)*32u)+(SYSCTL_PPCAN_R_CAN0_BIT*4u))))
#define SYSCTL_BITBANDING_PPCAN_CAN1    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPCAN_OFFSET)*32u)+(SYSCTL_PPCAN_R_CAN1_BIT*4u))))

/******************************************************************************************
************************************36 PPADC *********************************************
******************************************************************************************/
#define SYSCTL_PPADC            (((PERIPHERAL_ADC_TypeDef*)(SYSCTL_BASE+SYSCTL_PPADC_OFFSET )))
#define SYSCTL_PPADC_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPADC_OFFSET)))
#define SYSCTL_BITBANDING_PPADC      (((BITBANDING_PERIPHERAL_ADC_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPADC_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PPADC_R_ADC0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPADC_R_ADC0_BIT         (0u)
#define SYSCTL_PPADC_R_ADC0_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPADC_R_ADC0_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPADC_ADC0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPADC_ADC0_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPADC_ADC0_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPADC_R_ADC1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPADC_R_ADC1_BIT         (1u)
#define SYSCTL_PPADC_R_ADC1_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPADC_R_ADC1_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPADC_ADC1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPADC_ADC1_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPADC_ADC1_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PPADC_ADC0    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPADC_OFFSET)*32u)+(SYSCTL_PPADC_R_ADC0_BIT*4u))))
#define SYSCTL_BITBANDING_PPADC_ADC1    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPADC_OFFSET)*32u)+(SYSCTL_PPADC_R_ADC1_BIT*4u))))

/******************************************************************************************
************************************37 PPACMP *********************************************
******************************************************************************************/
#define SYSCTL_PPACMP            (((PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_PPACMP_OFFSET )))
#define SYSCTL_PPACMP_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPACMP_OFFSET)))
#define SYSCTL_BITBANDING_PPACMP      (((BITBANDING_PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPACMP_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PPACMP_R_ACMP_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPACMP_R_ACMP_BIT         (0u)
#define SYSCTL_PPACMP_R_ACMP_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPACMP_R_ACMP_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPACMP_ACMP_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPACMP_ACMP_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPACMP_ACMP_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PPACMP_ACMP    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPACMP_OFFSET)*32u)+(SYSCTL_PPACMP_R_ACMP_BIT*4u))))

/****************************************************************************************
************************************38 PPPWM *********************************************
******************************************************************************************/
#define SYSCTL_PPPWM            (((PERIPHERAL_PWM_TypeDef*)(SYSCTL_BASE+SYSCTL_PPPWM_OFFSET )))
#define SYSCTL_PPPWM_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPPWM_OFFSET)))
#define SYSCTL_BITBANDING_PPPWM      (((BITBANDING_PERIPHERAL_PWM_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPPWM_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PPPWM_R_PWM0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPPWM_R_PWM0_BIT         (0u)
#define SYSCTL_PPPWM_R_PWM0_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPPWM_R_PWM0_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPPWM_PWM0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPPWM_PWM0_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPPWM_PWM0_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPPWM_R_PWM1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPPWM_R_PWM1_BIT         (1u)
#define SYSCTL_PPPWM_R_PWM1_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPPWM_R_PWM1_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPPWM_PWM1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPPWM_PWM1_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPPWM_PWM1_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PPPWM_PWM0    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPPWM_OFFSET)*32u)+(SYSCTL_PPPWM_R_PWM0_BIT*4u))))
#define SYSCTL_BITBANDING_PPPWM_PWM1    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPPWM_OFFSET)*32u)+(SYSCTL_PPPWM_R_PWM1_BIT*4u))))

/******************************************************************************************
************************************39 PPQEI *********************************************
******************************************************************************************/
#define SYSCTL_PPQEI            (((PERIPHERAL_QEI_TypeDef*)(SYSCTL_BASE+SYSCTL_PPQEI_OFFSET )))
#define SYSCTL_PPQEI_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPQEI_OFFSET)))
#define SYSCTL_BITBANDING_PPQEI      (((BITBANDING_PERIPHERAL_QEI_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPQEI_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PPQEI_R_QEI0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPQEI_R_QEI0_BIT         (0u)
#define SYSCTL_PPQEI_R_QEI0_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPQEI_R_QEI0_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPQEI_QEI0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPQEI_QEI0_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPQEI_QEI0_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPQEI_R_QEI1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPQEI_R_QEI1_BIT         (1u)
#define SYSCTL_PPQEI_R_QEI1_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPQEI_R_QEI1_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPQEI_QEI1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPQEI_QEI1_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPQEI_QEI1_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PPQEI_QEI0    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPQEI_OFFSET)*32u)+(SYSCTL_PPQEI_R_QEI0_BIT*4u))))
#define SYSCTL_BITBANDING_PPQEI_QEI1    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPQEI_OFFSET)*32u)+(SYSCTL_PPQEI_R_QEI1_BIT*4u))))

/******************************************************************************************
************************************40 PPEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_PPEEPROM            (((PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_PPEEPROM_OFFSET )))
#define SYSCTL_PPEEPROM_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPEEPROM_OFFSET)))
#define SYSCTL_BITBANDING_PPEEPROM      (((BITBANDING_PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPEEPROM_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PPEEPROM_R_EEPROM_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPEEPROM_R_EEPROM_BIT         (0u)
#define SYSCTL_PPEEPROM_R_EEPROM_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPEEPROM_R_EEPROM_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPEEPROM_EEPROM_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPEEPROM_EEPROM_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPEEPROM_EEPROM_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PPEEPROM_EEPROM    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPEEPROM_OFFSET)*32u)+(SYSCTL_PPEEPROM_R_EEPROM_BIT*4u))))


/**********************************************************************************
************************************41 PPWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_PPWTIMER            (((PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_PPWTIMER_OFFSET )))
#define SYSCTL_PPWTIMER_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPWTIMER_OFFSET)))
#define SYSCTL_BITBANDING_PPWTIMER      (((BITBANDING_PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PPWTIMER_R_WTIMER0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPWTIMER_R_WTIMER0_BIT         (0u)
#define SYSCTL_PPWTIMER_R_WTIMER0_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_R_WTIMER0_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPWTIMER_WTIMER0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPWTIMER_WTIMER0_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_WTIMER0_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPWTIMER_R_WTIMER1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPWTIMER_R_WTIMER1_BIT         (1u)
#define SYSCTL_PPWTIMER_R_WTIMER1_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_R_WTIMER1_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPWTIMER_WTIMER1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPWTIMER_WTIMER1_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_WTIMER1_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPWTIMER_R_WTIMER2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_PPWTIMER_R_WTIMER2_BIT         (2u)
#define SYSCTL_PPWTIMER_R_WTIMER2_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_R_WTIMER2_PRESENT     ((uint32_t)0x00000004u)

#define SYSCTL_PPWTIMER_WTIMER2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPWTIMER_WTIMER2_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_WTIMER2_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPWTIMER_R_WTIMER3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_PPWTIMER_R_WTIMER3_BIT         (3u)
#define SYSCTL_PPWTIMER_R_WTIMER3_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_R_WTIMER3_PRESENT     ((uint32_t)0x00000008u)

#define SYSCTL_PPWTIMER_WTIMER3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPWTIMER_WTIMER3_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_WTIMER3_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPWTIMER_R_WTIMER4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_PPWTIMER_R_WTIMER4_BIT         (4u)
#define SYSCTL_PPWTIMER_R_WTIMER4_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_R_WTIMER4_PRESENT     ((uint32_t)0x00000010u)

#define SYSCTL_PPWTIMER_WTIMER4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPWTIMER_WTIMER4_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_WTIMER4_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPWTIMER_R_WTIMER5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_PPWTIMER_R_WTIMER5_BIT         (5u)
#define SYSCTL_PPWTIMER_R_WTIMER5_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_R_WTIMER5_PRESENT     ((uint32_t)0x00000020u)

#define SYSCTL_PPWTIMER_WTIMER5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPWTIMER_WTIMER5_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_WTIMER5_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PPWTIMER_WTIMER0    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32u)+(SYSCTL_PPWTIMER_R_WTIMER0_BIT*4u))))
#define SYSCTL_BITBANDING_PPWTIMER_WTIMER1    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32u)+(SYSCTL_PPWTIMER_R_WTIMER1_BIT*4u))))
#define SYSCTL_BITBANDING_PPWTIMER_WTIMER2    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32u)+(SYSCTL_PPWTIMER_R_WTIMER2_BIT*4u))))
#define SYSCTL_BITBANDING_PPWTIMER_WTIMER3    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32u)+(SYSCTL_PPWTIMER_R_WTIMER3_BIT*4u))))
#define SYSCTL_BITBANDING_PPWTIMER_WTIMER4    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32u)+(SYSCTL_PPWTIMER_R_WTIMER4_BIT*4u))))
#define SYSCTL_BITBANDING_PPWTIMER_WTIMER5    (*((volatile const uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32u)+(SYSCTL_PPWTIMER_R_WTIMER5_BIT*4u))))

/******************************************************************************************
************************************42 SRWD *********************************************
******************************************************************************************/
#define SYSCTL_SRWD            (((PERIPHERAL_WD_TypeDef*)(SYSCTL_BASE+SYSCTL_SRWD_OFFSET )))
#define SYSCTL_SRWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRWD_OFFSET)))
#define SYSCTL_BITBANDING_SRWD      (((BITBANDING_PERIPHERAL_WD_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRWD_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SRWD_R_WDT0_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_SRWD_R_WDT0_BIT          (0u)
#define SYSCTL_SRWD_R_WDT0_NORESET    ((uint32_t)0x00000000u)
#define SYSCTL_SRWD_R_WDT0_RESET      ((uint32_t)0x00000001u)

#define SYSCTL_SRWD_WDT0_MASK           ((uint32_t)0x00000001u)
#define SYSCTL_SRWD_WDT0_NORESET      ((uint32_t)0x00000000u)
#define SYSCTL_SRWD_WDT0_RESET        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRWD_R_WDT1_MASK         ((uint32_t)0x00000002u)
#define SYSCTL_SRWD_R_WDT1_BIT          (1u)
#define SYSCTL_SRWD_R_WDT1_NORESET    ((uint32_t)0x00000000u)
#define SYSCTL_SRWD_R_WDT1_RESET      ((uint32_t)0x00000002u)

#define SYSCTL_SRWD_WDT1_MASK           ((uint32_t)0x00000001u)
#define SYSCTL_SRWD_WDT1_NORESET      ((uint32_t)0x00000000u)
#define SYSCTL_SRWD_WDT1_RESET        ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SRWD_WDT0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRWD_OFFSET)*32u)+(SYSCTL_SRWD_R_WDT0_BIT*4u))))
#define SYSCTL_BITBANDING_SRWD_WDT1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRWD_OFFSET)*32u)+(SYSCTL_SRWD_R_WDT1_BIT*4u))))

/******************************************************************************************
************************************43 SRTIMER *********************************************
******************************************************************************************/
#define SYSCTL_SRTIMER            (((PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_SRTIMER_OFFSET )))
#define SYSCTL_SRTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRTIMER_OFFSET)))
#define SYSCTL_BITBANDING_SRTIMER      (((BITBANDING_PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SRTIMER_R_TIMER0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRTIMER_R_TIMER0_BIT         (0u)
#define SYSCTL_SRTIMER_R_TIMER0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_R_TIMER0_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRTIMER_TIMER0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRTIMER_TIMER0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_TIMER0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRTIMER_R_TIMER1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRTIMER_R_TIMER1_BIT         (1u)
#define SYSCTL_SRTIMER_R_TIMER1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_R_TIMER1_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRTIMER_TIMER1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRTIMER_TIMER1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_TIMER1_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRTIMER_R_TIMER2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SRTIMER_R_TIMER2_BIT         (2u)
#define SYSCTL_SRTIMER_R_TIMER2_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_R_TIMER2_RESET     ((uint32_t)0x00000004u)

#define SYSCTL_SRTIMER_TIMER2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRTIMER_TIMER2_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_TIMER2_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRTIMER_R_TIMER3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SRTIMER_R_TIMER3_BIT         (3u)
#define SYSCTL_SRTIMER_R_TIMER3_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_R_TIMER3_RESET     ((uint32_t)0x00000008u)

#define SYSCTL_SRTIMER_TIMER3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRTIMER_TIMER3_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_TIMER3_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRTIMER_R_TIMER4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SRTIMER_R_TIMER4_BIT         (4u)
#define SYSCTL_SRTIMER_R_TIMER4_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_R_TIMER4_RESET     ((uint32_t)0x00000010u)

#define SYSCTL_SRTIMER_TIMER4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRTIMER_TIMER4_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_TIMER4_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRTIMER_R_TIMER5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SRTIMER_R_TIMER5_BIT         (5u)
#define SYSCTL_SRTIMER_R_TIMER5_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_R_TIMER5_RESET     ((uint32_t)0x00000020u)

#define SYSCTL_SRTIMER_TIMER5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRTIMER_TIMER5_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_TIMER5_RESET       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SRTIMER_TIMER0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32u)+(SYSCTL_SRTIMER_R_TIMER0_BIT*4u))))
#define SYSCTL_BITBANDING_SRTIMER_TIMER1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32u)+(SYSCTL_SRTIMER_R_TIMER1_BIT*4u))))
#define SYSCTL_BITBANDING_SRTIMER_TIMER2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32u)+(SYSCTL_SRTIMER_R_TIMER2_BIT*4u))))
#define SYSCTL_BITBANDING_SRTIMER_TIMER3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32u)+(SYSCTL_SRTIMER_R_TIMER3_BIT*4u))))
#define SYSCTL_BITBANDING_SRTIMER_TIMER4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32u)+(SYSCTL_SRTIMER_R_TIMER4_BIT*4u))))
#define SYSCTL_BITBANDING_SRTIMER_TIMER5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32u)+(SYSCTL_SRTIMER_R_TIMER5_BIT*4u))))

/******************************************************************************************
************************************44 SRGPIO *********************************************
******************************************************************************************/
#define SYSCTL_SRGPIO            (((PERIPHERAL_GPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_SRGPIO_OFFSET )))
#define SYSCTL_SRGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRGPIO_OFFSET)))
#define SYSCTL_BITBANDING_SRGPIO      (((BITBANDING_PERIPHERAL_GPIO_BITBANDING_TypeDef*)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOA_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_R_GPIOA_BIT         (0u)
#define SYSCTL_SRGPIO_R_GPIOA_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOA_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRGPIO_GPIOA_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOA_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOA_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOB_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRGPIO_R_GPIOB_BIT         (1u)
#define SYSCTL_SRGPIO_R_GPIOB_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOB_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRGPIO_GPIOB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOB_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOB_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOC_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SRGPIO_R_GPIOC_BIT         (2u)
#define SYSCTL_SRGPIO_R_GPIOC_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOC_RESET     ((uint32_t)0x00000004u)

#define SYSCTL_SRGPIO_GPIOC_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOC_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOC_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOD_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SRGPIO_R_GPIOD_BIT         (3u)
#define SYSCTL_SRGPIO_R_GPIOD_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOD_RESET     ((uint32_t)0x00000008u)

#define SYSCTL_SRGPIO_GPIOD_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOD_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOD_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOE_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SRGPIO_R_GPIOE_BIT         (4u)
#define SYSCTL_SRGPIO_R_GPIOE_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOE_RESET     ((uint32_t)0x00000010u)

#define SYSCTL_SRGPIO_GPIOE_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOE_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOE_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOF_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SRGPIO_R_GPIOF_BIT         (5u)
#define SYSCTL_SRGPIO_R_GPIOF_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOF_RESET     ((uint32_t)0x00000020u)

#define SYSCTL_SRGPIO_GPIOF_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOF_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOF_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_SRGPIO_R_GPIOG_BIT         (6u)
#define SYSCTL_SRGPIO_R_GPIOG_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOG_RESET     ((uint32_t)0x00000040u)

#define SYSCTL_SRGPIO_GPIOG_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOG_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOG_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_SRGPIO_R_GPIOG_BIT         (6u)
#define SYSCTL_SRGPIO_R_GPIOG_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOG_RESET     ((uint32_t)0x00000040u)

#define SYSCTL_SRGPIO_GPIOG_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOG_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOG_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOH_MASK        ((uint32_t)0x00000080u)
#define SYSCTL_SRGPIO_R_GPIOH_BIT         (7u)
#define SYSCTL_SRGPIO_R_GPIOH_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOH_RESET     ((uint32_t)0x00000080u)

#define SYSCTL_SRGPIO_GPIOH_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOH_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOH_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOJ_MASK        ((uint32_t)0x00000100u)
#define SYSCTL_SRGPIO_R_GPIOJ_BIT         (8u)
#define SYSCTL_SRGPIO_R_GPIOJ_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOJ_RESET     ((uint32_t)0x00000100u)

#define SYSCTL_SRGPIO_GPIOJ_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOJ_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOJ_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOK_MASK        ((uint32_t)0x00000200u)
#define SYSCTL_SRGPIO_R_GPIOK_BIT         (9u)
#define SYSCTL_SRGPIO_R_GPIOK_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOK_RESET     ((uint32_t)0x00000200u)

#define SYSCTL_SRGPIO_GPIOK_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOK_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOK_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOL_MASK        ((uint32_t)0x00000400u)
#define SYSCTL_SRGPIO_R_GPIOL_BIT         (10u)
#define SYSCTL_SRGPIO_R_GPIOL_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOL_RESET     ((uint32_t)0x00000400u)

#define SYSCTL_SRGPIO_GPIOL_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOL_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOL_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOM_MASK        ((uint32_t)0x00000800u)
#define SYSCTL_SRGPIO_R_GPIOM_BIT         (11u)
#define SYSCTL_SRGPIO_R_GPIOM_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOM_RESET     ((uint32_t)0x00000800u)

#define SYSCTL_SRGPIO_GPIOM_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOM_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOM_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPION_MASK        ((uint32_t)0x00001000u)
#define SYSCTL_SRGPIO_R_GPION_BIT         (12u)
#define SYSCTL_SRGPIO_R_GPION_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPION_RESET     ((uint32_t)0x00001000u)

#define SYSCTL_SRGPIO_GPION_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPION_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPION_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOP_MASK        ((uint32_t)0x00002000u)
#define SYSCTL_SRGPIO_R_GPIOP_BIT         (13u)
#define SYSCTL_SRGPIO_R_GPIOP_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOP_RESET     ((uint32_t)0x00002000u)

#define SYSCTL_SRGPIO_GPIOP_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOP_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOP_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOQ_MASK        ((uint32_t)0x00004000u)
#define SYSCTL_SRGPIO_R_GPIOQ_BIT         (14u)
#define SYSCTL_SRGPIO_R_GPIOQ_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOQ_RESET     ((uint32_t)0x00004000u)

#define SYSCTL_SRGPIO_GPIOQ_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOQ_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOQ_RESET       ((uint32_t)0x00000001u)
/*--------*/
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOA    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32u)+(SYSCTL_SRGPIO_R_GPIOA_BIT*4u))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOB    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32u)+(SYSCTL_SRGPIO_R_GPIOB_BIT*4u))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOC    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32u)+(SYSCTL_SRGPIO_R_GPIOC_BIT*4u))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOD    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32u)+(SYSCTL_SRGPIO_R_GPIOD_BIT*4u))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOE    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32u)+(SYSCTL_SRGPIO_R_GPIOE_BIT*4u))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOF    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32u)+(SYSCTL_SRGPIO_R_GPIOF_BIT*4u))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOG    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32u)+(SYSCTL_SRGPIO_R_GPIOG_BIT*4u))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOH    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32u)+(SYSCTL_SRGPIO_R_GPIOH_BIT*4u))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOJ    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32u)+(SYSCTL_SRGPIO_R_GPIOJ_BIT*4u))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOK    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32u)+(SYSCTL_SRGPIO_R_GPIOK_BIT*4u))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOL    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32u)+(SYSCTL_SRGPIO_R_GPIOL_BIT*4u))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOM    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32u)+(SYSCTL_SRGPIO_R_GPIOM_BIT*4u))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPION    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32u)+(SYSCTL_SRGPIO_R_GPION_BIT*4u))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOP    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32u)+(SYSCTL_SRGPIO_R_GPIOP_BIT*4u))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOQ    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32u)+(SYSCTL_SRGPIO_R_GPIOQ_BIT*4u))))

/******************************************************************************************
************************************45 SRDMA *********************************************
******************************************************************************************/
#define SYSCTL_SRDMA            (((PERIPHERAL_DMA_TypeDef*)(SYSCTL_BASE+SYSCTL_SRDMA_OFFSET )))
#define SYSCTL_SRDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRDMA_OFFSET)))
#define SYSCTL_BITBANDING_SRDMA      (((BITBANDING_PERIPHERAL_DMA_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRDMA_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SRDMA_R_UDMA_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRDMA_R_UDMA_BIT         (0u)
#define SYSCTL_SRDMA_R_UDMA_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRDMA_R_UDMA_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRDMA_UDMA_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRDMA_UDMA_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRDMA_UDMA_RESET       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SRDMA_UDMA    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRDMA_OFFSET)*32u)+(SYSCTL_SRDMA_R_UDMA_BIT*4u))))

/******************************************************************************************
************************************46 SRHIB *********************************************
******************************************************************************************/
#define SYSCTL_SRHIB            (((PERIPHERAL_HIB_TypeDef*)(SYSCTL_BASE+SYSCTL_SRHIB_OFFSET )))
#define SYSCTL_SRHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRHIB_OFFSET)))
#define SYSCTL_BITBANDING_SRHIB      (((BITBANDING_PERIPHERAL_HIB_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRHIB_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SRHIB_R_HIB_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRHIB_R_HIB_BIT         (0u)
#define SYSCTL_SRHIB_R_HIB_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRHIB_R_HIB_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRHIB_HIB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRHIB_HIB_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRHIB_HIB_RESET       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SRHIB_HIB    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRHIB_OFFSET)*32u)+(SYSCTL_SRHIB_R_HIB_BIT*4u))))

/******************************************************************************************
************************************47 SRUART *********************************************
******************************************************************************************/
#define SYSCTL_SRUART            (((PERIPHERAL_UART_TypeDef*)(SYSCTL_BASE+SYSCTL_SRUART_OFFSET )))
#define SYSCTL_SRUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRUART_OFFSET)))
#define SYSCTL_BITBANDING_SRUART      (((BITBANDING_PERIPHERAL_UART_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SRUART_R_UART0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRUART_R_UART0_BIT         (0u)
#define SYSCTL_SRUART_R_UART0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_R_UART0_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRUART_UART0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRUART_UART0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_UART0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRUART_R_UART1_BIT         (1u)
#define SYSCTL_SRUART_R_UART1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_R_UART1_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRUART_UART1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRUART_UART1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_UART1_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SRUART_R_UART2_BIT         (2u)
#define SYSCTL_SRUART_R_UART2_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_R_UART2_RESET     ((uint32_t)0x00000004u)

#define SYSCTL_SRUART_UART2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRUART_UART2_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_UART2_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SRUART_R_UART3_BIT         (3u)
#define SYSCTL_SRUART_R_UART3_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_R_UART3_RESET     ((uint32_t)0x00000008u)

#define SYSCTL_SRUART_UART3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRUART_UART3_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_UART3_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SRUART_R_UART4_BIT         (4u)
#define SYSCTL_SRUART_R_UART4_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_R_UART4_RESET     ((uint32_t)0x00000010u)

#define SYSCTL_SRUART_UART4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRUART_UART4_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_UART4_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SRUART_R_UART5_BIT         (5u)
#define SYSCTL_SRUART_R_UART5_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_R_UART5_RESET     ((uint32_t)0x00000020u)

#define SYSCTL_SRUART_UART5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRUART_UART5_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_UART5_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART6_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_SRUART_R_UART6_BIT         (6u)
#define SYSCTL_SRUART_R_UART6_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_R_UART6_RESET     ((uint32_t)0x00000040u)

#define SYSCTL_SRUART_UART6_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRUART_UART6_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_UART6_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART7_MASK        ((uint32_t)0x00000080u)
#define SYSCTL_SRUART_R_UART7_BIT         (7u)
#define SYSCTL_SRUART_R_UART7_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_R_UART7_RESET     ((uint32_t)0x00000080u)

#define SYSCTL_SRUART_UART7_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRUART_UART7_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_UART7_RESET       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SRUART_UART0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32u)+(SYSCTL_SRUART_R_UART0_BIT*4u))))
#define SYSCTL_BITBANDING_SRUART_UART1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32u)+(SYSCTL_SRUART_R_UART1_BIT*4u))))
#define SYSCTL_BITBANDING_SRUART_UART2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32u)+(SYSCTL_SRUART_R_UART2_BIT*4u))))
#define SYSCTL_BITBANDING_SRUART_UART3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32u)+(SYSCTL_SRUART_R_UART3_BIT*4u))))
#define SYSCTL_BITBANDING_SRUART_UART4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32u)+(SYSCTL_SRUART_R_UART4_BIT*4u))))
#define SYSCTL_BITBANDING_SRUART_UART5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32u)+(SYSCTL_SRUART_R_UART5_BIT*4u))))
#define SYSCTL_BITBANDING_SRUART_UART6    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32u)+(SYSCTL_SRUART_R_UART6_BIT*4u))))
#define SYSCTL_BITBANDING_SRUART_UART7    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32u)+(SYSCTL_SRUART_R_UART7_BIT*4u))))

/******************************************************************************************
************************************48 SRSSI *********************************************
******************************************************************************************/
#define SYSCTL_SRSSI            (((PERIPHERAL_SSI_TypeDef*)(SYSCTL_BASE+SYSCTL_SRSSI_OFFSET )))
#define SYSCTL_SRSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRSSI_OFFSET)))
#define SYSCTL_BITBANDING_SRSSI      (((BITBANDING_PERIPHERAL_SSI_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRSSI_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SRSSI_R_SSI0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRSSI_R_SSI0_BIT         (0u)
#define SYSCTL_SRSSI_R_SSI0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRSSI_R_SSI0_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRSSI_SSI0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRSSI_SSI0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRSSI_SSI0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRSSI_R_SSI1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRSSI_R_SSI1_BIT         (1u)
#define SYSCTL_SRSSI_R_SSI1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRSSI_R_SSI1_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRSSI_SSI1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRSSI_SSI1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRSSI_SSI1_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRSSI_R_SSI2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SRSSI_R_SSI2_BIT         (2u)
#define SYSCTL_SRSSI_R_SSI2_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRSSI_R_SSI2_RESET     ((uint32_t)0x00000004u)

#define SYSCTL_SRSSI_SSI2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRSSI_SSI2_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRSSI_SSI2_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRSSI_R_SSI3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SRSSI_R_SSI3_BIT         (3u)
#define SYSCTL_SRSSI_R_SSI3_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRSSI_R_SSI3_RESET     ((uint32_t)0x00000008u)

#define SYSCTL_SRSSI_SSI3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRSSI_SSI3_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRSSI_SSI3_RESET       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SRSSI_SSI0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRSSI_OFFSET)*32u)+(SYSCTL_SRSSI_R_SSI0_BIT*4u))))
#define SYSCTL_BITBANDING_SRSSI_SSI1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRSSI_OFFSET)*32u)+(SYSCTL_SRSSI_R_SSI1_BIT*4u))))
#define SYSCTL_BITBANDING_SRSSI_SSI2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRSSI_OFFSET)*32u)+(SYSCTL_SRSSI_R_SSI2_BIT*4u))))
#define SYSCTL_BITBANDING_SRSSI_SSI3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRSSI_OFFSET)*32u)+(SYSCTL_SRSSI_R_SSI3_BIT*4u))))

/******************************************************************************************
************************************49 SRI2C *********************************************
******************************************************************************************/
#define SYSCTL_SRI2C            (((PERIPHERAL_I2C_TypeDef*)(SYSCTL_BASE+SYSCTL_SRI2C_OFFSET )))
#define SYSCTL_SRI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRI2C_OFFSET)))
#define SYSCTL_BITBANDING_SRI2C      (((BITBANDING_PERIPHERAL_I2C_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SRI2C_R_I2C0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRI2C_R_I2C0_BIT         (0u)
#define SYSCTL_SRI2C_R_I2C0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_R_I2C0_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRI2C_I2C0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRI2C_I2C0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_I2C0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRI2C_R_I2C1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRI2C_R_I2C1_BIT         (1u)
#define SYSCTL_SRI2C_R_I2C1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_R_I2C1_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRI2C_I2C1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRI2C_I2C1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_I2C1_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRI2C_R_I2C2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SRI2C_R_I2C2_BIT         (2u)
#define SYSCTL_SRI2C_R_I2C2_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_R_I2C2_RESET     ((uint32_t)0x00000004u)

#define SYSCTL_SRI2C_I2C2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRI2C_I2C2_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_I2C2_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRI2C_R_I2C3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SRI2C_R_I2C3_BIT         (3u)
#define SYSCTL_SRI2C_R_I2C3_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_R_I2C3_RESET     ((uint32_t)0x00000008u)

#define SYSCTL_SRI2C_I2C3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRI2C_I2C3_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_I2C3_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRI2C_R_I2C4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SRI2C_R_I2C4_BIT         (4u)
#define SYSCTL_SRI2C_R_I2C4_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_R_I2C4_RESET     ((uint32_t)0x00000010u)

#define SYSCTL_SRI2C_I2C4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRI2C_I2C4_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_I2C4_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRI2C_R_I2C5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SRI2C_R_I2C5_BIT         (5u)
#define SYSCTL_SRI2C_R_I2C5_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_R_I2C5_RESET     ((uint32_t)0x00000020u)

#define SYSCTL_SRI2C_I2C5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRI2C_I2C5_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_I2C5_RESET       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SRI2C_I2C0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32u)+(SYSCTL_SRI2C_R_I2C0_BIT*4u))))
#define SYSCTL_BITBANDING_SRI2C_I2C1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32u)+(SYSCTL_SRI2C_R_I2C1_BIT*4u))))
#define SYSCTL_BITBANDING_SRI2C_I2C2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32u)+(SYSCTL_SRI2C_R_I2C2_BIT*4u))))
#define SYSCTL_BITBANDING_SRI2C_I2C3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32u)+(SYSCTL_SRI2C_R_I2C3_BIT*4u))))
#define SYSCTL_BITBANDING_SRI2C_I2C4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32u)+(SYSCTL_SRI2C_R_I2C4_BIT*4u))))
#define SYSCTL_BITBANDING_SRI2C_I2C5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32u)+(SYSCTL_SRI2C_R_I2C5_BIT*4u))))

/******************************************************************************************
************************************50 SRUSB *********************************************
******************************************************************************************/
#define SYSCTL_SRUSB            (((PERIPHERAL_USB_TypeDef*)(SYSCTL_BASE+SYSCTL_SRUSB_OFFSET )))
#define SYSCTL_SRUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRUSB_OFFSET)))
#define SYSCTL_BITBANDING_SRUSB      (((BITBANDING_PERIPHERAL_USB_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRUSB_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SRUSB_R_USB_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRUSB_R_USB_BIT         (0u)
#define SYSCTL_SRUSB_R_USB_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRUSB_R_USB_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRUSB_USB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRUSB_USB_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRUSB_USB_RESET       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SRUSB_USB    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRUSB_OFFSET)*32u)+(SYSCTL_SRUSB_R_USB_BIT*4u))))

/******************************************************************************************
************************************51 SRCAN *********************************************
******************************************************************************************/
#define SYSCTL_SRCAN            (((PERIPHERAL_CAN_TypeDef*)(SYSCTL_BASE+SYSCTL_SRCAN_OFFSET )))
#define SYSCTL_SRCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRCAN_OFFSET)))
#define SYSCTL_BITBANDING_SRCAN      (((BITBANDING_PERIPHERAL_CAN_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRCAN_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SRCAN_R_CAN0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRCAN_R_CAN0_BIT         (0u)
#define SYSCTL_SRCAN_R_CAN0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRCAN_R_CAN0_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRCAN_CAN0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRCAN_CAN0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRCAN_CAN0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRCAN_R_CAN1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRCAN_R_CAN1_BIT         (1u)
#define SYSCTL_SRCAN_R_CAN1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRCAN_R_CAN1_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRCAN_CAN1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRCAN_CAN1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRCAN_CAN1_RESET       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SRCAN_CAN0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRCAN_OFFSET)*32u)+(SYSCTL_SRCAN_R_CAN0_BIT*4u))))
#define SYSCTL_BITBANDING_SRCAN_CAN1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRCAN_OFFSET)*32u)+(SYSCTL_SRCAN_R_CAN1_BIT*4u))))

/******************************************************************************************
************************************52 SRADC *********************************************
******************************************************************************************/
#define SYSCTL_SRADC            (((PERIPHERAL_ADC_TypeDef*)(SYSCTL_BASE+SYSCTL_SRADC_OFFSET )))
#define SYSCTL_SRADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRADC_OFFSET)))
#define SYSCTL_BITBANDING_SRADC      (((BITBANDING_PERIPHERAL_ADC_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRADC_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SRADC_R_ADC0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRADC_R_ADC0_BIT         (0u)
#define SYSCTL_SRADC_R_ADC0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRADC_R_ADC0_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRADC_ADC0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRADC_ADC0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRADC_ADC0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRADC_R_ADC1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRADC_R_ADC1_BIT         (1u)
#define SYSCTL_SRADC_R_ADC1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRADC_R_ADC1_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRADC_ADC1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRADC_ADC1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRADC_ADC1_RESET       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SRADC_ADC0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRADC_OFFSET)*32u)+(SYSCTL_SRADC_R_ADC0_BIT*4u))))
#define SYSCTL_BITBANDING_SRADC_ADC1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRADC_OFFSET)*32u)+(SYSCTL_SRADC_R_ADC1_BIT*4u))))

/******************************************************************************************
************************************53 SRACMP *********************************************
******************************************************************************************/
#define SYSCTL_SRACMP            (((PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_SRACMP_OFFSET )))
#define SYSCTL_SRACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRACMP_OFFSET)))
#define SYSCTL_BITBANDING_SRACMP      (((BITBANDING_PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRACMP_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SRACMP_R_ACMP_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRACMP_R_ACMP_BIT         (0u)
#define SYSCTL_SRACMP_R_ACMP_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRACMP_R_ACMP_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRACMP_ACMP_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRACMP_ACMP_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRACMP_ACMP_RESET       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SRACMP_ACMP    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRACMP_OFFSET)*32u)+(SYSCTL_SRACMP_R_ACMP_BIT*4u))))

/****************************************************************************************
************************************54 SRPWM *********************************************
******************************************************************************************/
#define SYSCTL_SRPWM            (((PERIPHERAL_PWM_TypeDef*)(SYSCTL_BASE+SYSCTL_SRPWM_OFFSET )))
#define SYSCTL_SRPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRPWM_OFFSET)))
#define SYSCTL_BITBANDING_SRPWM      (((BITBANDING_PERIPHERAL_PWM_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRPWM_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SRPWM_R_PWM0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRPWM_R_PWM0_BIT         (0u)
#define SYSCTL_SRPWM_R_PWM0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRPWM_R_PWM0_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRPWM_PWM0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRPWM_PWM0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRPWM_PWM0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRPWM_R_PWM1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRPWM_R_PWM1_BIT         (1u)
#define SYSCTL_SRPWM_R_PWM1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRPWM_R_PWM1_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRPWM_PWM1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRPWM_PWM1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRPWM_PWM1_RESET       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SRPWM_PWM0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRPWM_OFFSET)*32u)+(SYSCTL_SRPWM_R_PWM0_BIT*4u))))
#define SYSCTL_BITBANDING_SRPWM_PWM1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRPWM_OFFSET)*32u)+(SYSCTL_SRPWM_R_PWM1_BIT*4u))))

/******************************************************************************************
************************************55 SRQEI *********************************************
******************************************************************************************/
#define SYSCTL_SRQEI            (((PERIPHERAL_QEI_TypeDef*)(SYSCTL_BASE+SYSCTL_SRQEI_OFFSET )))
#define SYSCTL_SRQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRQEI_OFFSET)))
#define SYSCTL_BITBANDING_SRQEI      (((BITBANDING_PERIPHERAL_QEI_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRQEI_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SRQEI_R_QEI0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRQEI_R_QEI0_BIT         (0u)
#define SYSCTL_SRQEI_R_QEI0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRQEI_R_QEI0_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRQEI_QEI0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRQEI_QEI0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRQEI_QEI0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRQEI_R_QEI1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRQEI_R_QEI1_BIT         (1u)
#define SYSCTL_SRQEI_R_QEI1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRQEI_R_QEI1_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRQEI_QEI1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRQEI_QEI1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRQEI_QEI1_RESET       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SRQEI_QEI0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRQEI_OFFSET)*32u)+(SYSCTL_SRQEI_R_QEI0_BIT*4u))))
#define SYSCTL_BITBANDING_SRQEI_QEI1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRQEI_OFFSET)*32u)+(SYSCTL_SRQEI_R_QEI1_BIT*4u))))

/******************************************************************************************
************************************56 SREEPROM *********************************************
******************************************************************************************/
#define SYSCTL_SREEPROM            (((PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_SREEPROM_OFFSET )))
#define SYSCTL_SREEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SREEPROM_OFFSET)))
#define SYSCTL_BITBANDING_SREEPROM      (((BITBANDING_PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SREEPROM_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SREEPROM_R_EEPROM_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SREEPROM_R_EEPROM_BIT         (0u)
#define SYSCTL_SREEPROM_R_EEPROM_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SREEPROM_R_EEPROM_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SREEPROM_EEPROM_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SREEPROM_EEPROM_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SREEPROM_EEPROM_RESET       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SREEPROM_EEPROM    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SREEPROM_OFFSET)*32u)+(SYSCTL_SREEPROM_R_EEPROM_BIT*4u))))


/**********************************************************************************
************************************57 SRWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_SRWTIMER            (((PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_SRWTIMER_OFFSET )))
#define SYSCTL_SRWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRWTIMER_OFFSET)))
#define SYSCTL_BITBANDING_SRWTIMER      (((BITBANDING_PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SRWTIMER_R_WTIMER0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRWTIMER_R_WTIMER0_BIT         (0u)
#define SYSCTL_SRWTIMER_R_WTIMER0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_R_WTIMER0_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRWTIMER_WTIMER0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRWTIMER_WTIMER0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_WTIMER0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRWTIMER_R_WTIMER1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRWTIMER_R_WTIMER1_BIT         (1u)
#define SYSCTL_SRWTIMER_R_WTIMER1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_R_WTIMER1_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRWTIMER_WTIMER1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRWTIMER_WTIMER1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_WTIMER1_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRWTIMER_R_WTIMER2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SRWTIMER_R_WTIMER2_BIT         (2u)
#define SYSCTL_SRWTIMER_R_WTIMER2_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_R_WTIMER2_RESET     ((uint32_t)0x00000004u)

#define SYSCTL_SRWTIMER_WTIMER2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRWTIMER_WTIMER2_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_WTIMER2_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRWTIMER_R_WTIMER3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SRWTIMER_R_WTIMER3_BIT         (3u)
#define SYSCTL_SRWTIMER_R_WTIMER3_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_R_WTIMER3_RESET     ((uint32_t)0x00000008u)

#define SYSCTL_SRWTIMER_WTIMER3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRWTIMER_WTIMER3_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_WTIMER3_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRWTIMER_R_WTIMER4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SRWTIMER_R_WTIMER4_BIT         (4u)
#define SYSCTL_SRWTIMER_R_WTIMER4_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_R_WTIMER4_RESET     ((uint32_t)0x00000010u)

#define SYSCTL_SRWTIMER_WTIMER4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRWTIMER_WTIMER4_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_WTIMER4_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRWTIMER_R_WTIMER5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SRWTIMER_R_WTIMER5_BIT         (5u)
#define SYSCTL_SRWTIMER_R_WTIMER5_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_R_WTIMER5_RESET     ((uint32_t)0x00000020u)

#define SYSCTL_SRWTIMER_WTIMER5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRWTIMER_WTIMER5_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_WTIMER5_RESET       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SRWTIMER_WTIMER0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32u)+(SYSCTL_SRWTIMER_R_WTIMER0_BIT*4u))))
#define SYSCTL_BITBANDING_SRWTIMER_WTIMER1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32u)+(SYSCTL_SRWTIMER_R_WTIMER1_BIT*4u))))
#define SYSCTL_BITBANDING_SRWTIMER_WTIMER2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32u)+(SYSCTL_SRWTIMER_R_WTIMER2_BIT*4u))))
#define SYSCTL_BITBANDING_SRWTIMER_WTIMER3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32u)+(SYSCTL_SRWTIMER_R_WTIMER3_BIT*4u))))
#define SYSCTL_BITBANDING_SRWTIMER_WTIMER4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32u)+(SYSCTL_SRWTIMER_R_WTIMER4_BIT*4u))))
#define SYSCTL_BITBANDING_SRWTIMER_WTIMER5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32u)+(SYSCTL_SRWTIMER_R_WTIMER5_BIT*4u))))

/******************************************************************************************
************************************58 RCGCWD *********************************************
******************************************************************************************/
#define SYSCTL_RCGCWD            (((PERIPHERAL_WD_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCWD_OFFSET )))
#define SYSCTL_RCGCWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCWD_OFFSET)))
#define SYSCTL_BITBANDING_RCGCWD      (((BITBANDING_PERIPHERAL_WD_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCWD_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RCGCWD_R_WDT0_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_RCGCWD_R_WDT0_BIT          (0u)
#define SYSCTL_RCGCWD_R_WDT0_DIS    ((uint32_t)0x00000000u)
#define SYSCTL_RCGCWD_R_WDT0_EN      ((uint32_t)0x00000001u)

#define SYSCTL_RCGCWD_WDT0_MASK           ((uint32_t)0x00000001u)
#define SYSCTL_RCGCWD_WDT0_DIS      ((uint32_t)0x00000000u)
#define SYSCTL_RCGCWD_WDT0_EN        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCWD_R_WDT1_MASK         ((uint32_t)0x00000002u)
#define SYSCTL_RCGCWD_R_WDT1_BIT          (1u)
#define SYSCTL_RCGCWD_R_WDT1_DIS    ((uint32_t)0x00000000u)
#define SYSCTL_RCGCWD_R_WDT1_EN      ((uint32_t)0x00000002u)

#define SYSCTL_RCGCWD_WDT1_MASK           ((uint32_t)0x00000001u)
#define SYSCTL_RCGCWD_WDT1_DIS      ((uint32_t)0x00000000u)
#define SYSCTL_RCGCWD_WDT1_EN        ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RCGCWD_WDT0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCWD_OFFSET)*32u)+(SYSCTL_RCGCWD_R_WDT0_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCWD_WDT1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCWD_OFFSET)*32u)+(SYSCTL_RCGCWD_R_WDT1_BIT*4u))))

/******************************************************************************************
************************************59 RCGCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_RCGCTIMER            (((PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCTIMER_OFFSET )))
#define SYSCTL_RCGCTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCTIMER_OFFSET)))
#define SYSCTL_BITBANDING_RCGCTIMER      (((BITBANDING_PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RCGCTIMER_R_TIMER0_BIT         (0u)
#define SYSCTL_RCGCTIMER_R_TIMER0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCTIMER_R_TIMER0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_RCGCTIMER_TIMER0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCTIMER_TIMER0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCTIMER_TIMER0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_RCGCTIMER_R_TIMER1_BIT         (1u)
#define SYSCTL_RCGCTIMER_R_TIMER1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCTIMER_R_TIMER1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_RCGCTIMER_TIMER1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCTIMER_TIMER1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCTIMER_TIMER1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_RCGCTIMER_R_TIMER2_BIT         (2u)
#define SYSCTL_RCGCTIMER_R_TIMER2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCTIMER_R_TIMER2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_RCGCTIMER_TIMER2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCTIMER_TIMER2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCTIMER_TIMER2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_RCGCTIMER_R_TIMER3_BIT         (3u)
#define SYSCTL_RCGCTIMER_R_TIMER3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCTIMER_R_TIMER3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_RCGCTIMER_TIMER3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCTIMER_TIMER3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCTIMER_TIMER3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_RCGCTIMER_R_TIMER4_BIT         (4u)
#define SYSCTL_RCGCTIMER_R_TIMER4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCTIMER_R_TIMER4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_RCGCTIMER_TIMER4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCTIMER_TIMER4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCTIMER_TIMER4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_RCGCTIMER_R_TIMER5_BIT         (5u)
#define SYSCTL_RCGCTIMER_R_TIMER5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCTIMER_R_TIMER5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_RCGCTIMER_TIMER5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCTIMER_TIMER5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCTIMER_TIMER5_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RCGCTIMER_TIMER0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32u)+(SYSCTL_RCGCTIMER_R_TIMER0_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCTIMER_TIMER1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32u)+(SYSCTL_RCGCTIMER_R_TIMER1_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCTIMER_TIMER2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32u)+(SYSCTL_RCGCTIMER_R_TIMER2_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCTIMER_TIMER3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32u)+(SYSCTL_RCGCTIMER_R_TIMER3_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCTIMER_TIMER4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32u)+(SYSCTL_RCGCTIMER_R_TIMER4_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCTIMER_TIMER5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32u)+(SYSCTL_RCGCTIMER_R_TIMER5_BIT*4u))))

/******************************************************************************************
************************************60 RCGCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_RCGCGPIO            (((PERIPHERAL_GPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCGPIO_OFFSET )))
#define SYSCTL_RCGCGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCGPIO_OFFSET)))
#define SYSCTL_BITBANDING_RCGCGPIO      (((BITBANDING_PERIPHERAL_GPIO_BITBANDING_TypeDef*)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOA_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RCGCGPIO_R_GPIOA_BIT         (0u)
#define SYSCTL_RCGCGPIO_R_GPIOA_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_R_GPIOA_EN     ((uint32_t)0x00000001u)

#define SYSCTL_RCGCGPIO_GPIOA_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCGPIO_GPIOA_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_GPIOA_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOB_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_RCGCGPIO_R_GPIOB_BIT         (1u)
#define SYSCTL_RCGCGPIO_R_GPIOB_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_R_GPIOB_EN     ((uint32_t)0x00000002u)

#define SYSCTL_RCGCGPIO_GPIOB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCGPIO_GPIOB_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_GPIOB_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOC_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_RCGCGPIO_R_GPIOC_BIT         (2u)
#define SYSCTL_RCGCGPIO_R_GPIOC_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_R_GPIOC_EN     ((uint32_t)0x00000004u)

#define SYSCTL_RCGCGPIO_GPIOC_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCGPIO_GPIOC_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_GPIOC_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOD_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_RCGCGPIO_R_GPIOD_BIT         (3u)
#define SYSCTL_RCGCGPIO_R_GPIOD_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_R_GPIOD_EN     ((uint32_t)0x00000008u)

#define SYSCTL_RCGCGPIO_GPIOD_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCGPIO_GPIOD_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_GPIOD_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOE_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_RCGCGPIO_R_GPIOE_BIT         (4u)
#define SYSCTL_RCGCGPIO_R_GPIOE_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_R_GPIOE_EN     ((uint32_t)0x00000010u)

#define SYSCTL_RCGCGPIO_GPIOE_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCGPIO_GPIOE_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_GPIOE_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOF_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_RCGCGPIO_R_GPIOF_BIT         (5u)
#define SYSCTL_RCGCGPIO_R_GPIOF_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_R_GPIOF_EN     ((uint32_t)0x00000020u)

#define SYSCTL_RCGCGPIO_GPIOF_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCGPIO_GPIOF_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_GPIOF_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_RCGCGPIO_R_GPIOG_BIT         (6u)
#define SYSCTL_RCGCGPIO_R_GPIOG_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_R_GPIOG_EN     ((uint32_t)0x00000040u)

#define SYSCTL_RCGCGPIO_GPIOG_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCGPIO_GPIOG_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_GPIOG_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_RCGCGPIO_R_GPIOG_BIT         (6u)
#define SYSCTL_RCGCGPIO_R_GPIOG_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_R_GPIOG_EN     ((uint32_t)0x00000040u)

#define SYSCTL_RCGCGPIO_GPIOG_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCGPIO_GPIOG_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_GPIOG_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOH_MASK        ((uint32_t)0x00000080u)
#define SYSCTL_RCGCGPIO_R_GPIOH_BIT         (7u)
#define SYSCTL_RCGCGPIO_R_GPIOH_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_R_GPIOH_EN     ((uint32_t)0x00000080u)

#define SYSCTL_RCGCGPIO_GPIOH_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCGPIO_GPIOH_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_GPIOH_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOJ_MASK        ((uint32_t)0x00000100u)
#define SYSCTL_RCGCGPIO_R_GPIOJ_BIT         (8u)
#define SYSCTL_RCGCGPIO_R_GPIOJ_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_R_GPIOJ_EN     ((uint32_t)0x00000100u)

#define SYSCTL_RCGCGPIO_GPIOJ_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCGPIO_GPIOJ_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_GPIOJ_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOK_MASK        ((uint32_t)0x00000200u)
#define SYSCTL_RCGCGPIO_R_GPIOK_BIT         (9u)
#define SYSCTL_RCGCGPIO_R_GPIOK_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_R_GPIOK_EN     ((uint32_t)0x00000200u)

#define SYSCTL_RCGCGPIO_GPIOK_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCGPIO_GPIOK_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_GPIOK_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOL_MASK        ((uint32_t)0x00000400u)
#define SYSCTL_RCGCGPIO_R_GPIOL_BIT         (10u)
#define SYSCTL_RCGCGPIO_R_GPIOL_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_R_GPIOL_EN     ((uint32_t)0x00000400u)

#define SYSCTL_RCGCGPIO_GPIOL_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCGPIO_GPIOL_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_GPIOL_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOM_MASK        ((uint32_t)0x00000800u)
#define SYSCTL_RCGCGPIO_R_GPIOM_BIT         (11u)
#define SYSCTL_RCGCGPIO_R_GPIOM_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_R_GPIOM_EN     ((uint32_t)0x00000800u)

#define SYSCTL_RCGCGPIO_GPIOM_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCGPIO_GPIOM_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_GPIOM_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPION_MASK        ((uint32_t)0x00001000u)
#define SYSCTL_RCGCGPIO_R_GPION_BIT         (12u)
#define SYSCTL_RCGCGPIO_R_GPION_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_R_GPION_EN     ((uint32_t)0x00001000u)

#define SYSCTL_RCGCGPIO_GPION_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCGPIO_GPION_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_GPION_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOP_MASK        ((uint32_t)0x00002000u)
#define SYSCTL_RCGCGPIO_R_GPIOP_BIT         (13u)
#define SYSCTL_RCGCGPIO_R_GPIOP_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_R_GPIOP_EN     ((uint32_t)0x00002000u)

#define SYSCTL_RCGCGPIO_GPIOP_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCGPIO_GPIOP_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_GPIOP_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOQ_MASK        ((uint32_t)0x00004000u)
#define SYSCTL_RCGCGPIO_R_GPIOQ_BIT         (14u)
#define SYSCTL_RCGCGPIO_R_GPIOQ_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_R_GPIOQ_EN     ((uint32_t)0x00004000u)

#define SYSCTL_RCGCGPIO_GPIOQ_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCGPIO_GPIOQ_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCGPIO_GPIOQ_EN       ((uint32_t)0x00000001u)
/*--------*/
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOA    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32u)+(SYSCTL_RCGCGPIO_R_GPIOA_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOB    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32u)+(SYSCTL_RCGCGPIO_R_GPIOB_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOC    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32u)+(SYSCTL_RCGCGPIO_R_GPIOC_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOD    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32u)+(SYSCTL_RCGCGPIO_R_GPIOD_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOE    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32u)+(SYSCTL_RCGCGPIO_R_GPIOE_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOF    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32u)+(SYSCTL_RCGCGPIO_R_GPIOF_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOG    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32u)+(SYSCTL_RCGCGPIO_R_GPIOG_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOH    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32u)+(SYSCTL_RCGCGPIO_R_GPIOH_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOJ    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32u)+(SYSCTL_RCGCGPIO_R_GPIOJ_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOK    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32u)+(SYSCTL_RCGCGPIO_R_GPIOK_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOL    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32u)+(SYSCTL_RCGCGPIO_R_GPIOL_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOM    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32u)+(SYSCTL_RCGCGPIO_R_GPIOM_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPION    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32u)+(SYSCTL_RCGCGPIO_R_GPION_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOP    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32u)+(SYSCTL_RCGCGPIO_R_GPIOP_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOQ    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32u)+(SYSCTL_RCGCGPIO_R_GPIOQ_BIT*4u))))

/******************************************************************************************
************************************61 RCGCDMA *********************************************
******************************************************************************************/
#define SYSCTL_RCGCDMA            (((PERIPHERAL_DMA_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCDMA_OFFSET )))
#define SYSCTL_RCGCDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCDMA_OFFSET)))
#define SYSCTL_BITBANDING_RCGCDMA      (((BITBANDING_PERIPHERAL_DMA_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCDMA_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RCGCDMA_R_UDMA_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RCGCDMA_R_UDMA_BIT         (0u)
#define SYSCTL_RCGCDMA_R_UDMA_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCDMA_R_UDMA_EN     ((uint32_t)0x00000001u)

#define SYSCTL_RCGCDMA_UDMA_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCDMA_UDMA_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCDMA_UDMA_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RCGCDMA_UDMA    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCDMA_OFFSET)*32u)+(SYSCTL_RCGCDMA_R_UDMA_BIT*4u))))

/******************************************************************************************
************************************62 RCGCHIB *********************************************
******************************************************************************************/
#define SYSCTL_RCGCHIB            (((PERIPHERAL_HIB_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCHIB_OFFSET )))
#define SYSCTL_RCGCHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCHIB_OFFSET)))
#define SYSCTL_BITBANDING_RCGCHIB      (((BITBANDING_PERIPHERAL_HIB_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCHIB_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RCGCHIB_R_HIB_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RCGCHIB_R_HIB_BIT         (0u)
#define SYSCTL_RCGCHIB_R_HIB_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCHIB_R_HIB_EN     ((uint32_t)0x00000001u)

#define SYSCTL_RCGCHIB_HIB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCHIB_HIB_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCHIB_HIB_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RCGCHIB_HIB    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCHIB_OFFSET)*32u)+(SYSCTL_RCGCHIB_R_HIB_BIT*4u))))

/******************************************************************************************
************************************63 RCGCUART *********************************************
******************************************************************************************/
#define SYSCTL_RCGCUART            (((PERIPHERAL_UART_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCUART_OFFSET )))
#define SYSCTL_RCGCUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCUART_OFFSET)))
#define SYSCTL_BITBANDING_RCGCUART      (((BITBANDING_PERIPHERAL_UART_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RCGCUART_R_UART0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RCGCUART_R_UART0_BIT         (0u)
#define SYSCTL_RCGCUART_R_UART0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCUART_R_UART0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_RCGCUART_UART0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCUART_UART0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCUART_UART0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_RCGCUART_R_UART1_BIT         (1u)
#define SYSCTL_RCGCUART_R_UART1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCUART_R_UART1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_RCGCUART_UART1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCUART_UART1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCUART_UART1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_RCGCUART_R_UART2_BIT         (2u)
#define SYSCTL_RCGCUART_R_UART2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCUART_R_UART2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_RCGCUART_UART2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCUART_UART2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCUART_UART2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_RCGCUART_R_UART3_BIT         (3u)
#define SYSCTL_RCGCUART_R_UART3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCUART_R_UART3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_RCGCUART_UART3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCUART_UART3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCUART_UART3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_RCGCUART_R_UART4_BIT         (4u)
#define SYSCTL_RCGCUART_R_UART4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCUART_R_UART4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_RCGCUART_UART4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCUART_UART4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCUART_UART4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_RCGCUART_R_UART5_BIT         (5u)
#define SYSCTL_RCGCUART_R_UART5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCUART_R_UART5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_RCGCUART_UART5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCUART_UART5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCUART_UART5_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART6_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_RCGCUART_R_UART6_BIT         (6u)
#define SYSCTL_RCGCUART_R_UART6_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCUART_R_UART6_EN     ((uint32_t)0x00000040u)

#define SYSCTL_RCGCUART_UART6_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCUART_UART6_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCUART_UART6_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART7_MASK        ((uint32_t)0x00000080u)
#define SYSCTL_RCGCUART_R_UART7_BIT         (7u)
#define SYSCTL_RCGCUART_R_UART7_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCUART_R_UART7_EN     ((uint32_t)0x00000080u)

#define SYSCTL_RCGCUART_UART7_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCUART_UART7_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCUART_UART7_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RCGCUART_UART0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32u)+(SYSCTL_RCGCUART_R_UART0_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCUART_UART1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32u)+(SYSCTL_RCGCUART_R_UART1_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCUART_UART2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32u)+(SYSCTL_RCGCUART_R_UART2_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCUART_UART3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32u)+(SYSCTL_RCGCUART_R_UART3_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCUART_UART4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32u)+(SYSCTL_RCGCUART_R_UART4_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCUART_UART5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32u)+(SYSCTL_RCGCUART_R_UART5_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCUART_UART6    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32u)+(SYSCTL_RCGCUART_R_UART6_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCUART_UART7    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32u)+(SYSCTL_RCGCUART_R_UART7_BIT*4u))))

/******************************************************************************************
************************************64 RCGCSSI *********************************************
******************************************************************************************/
#define SYSCTL_RCGCSSI            (((PERIPHERAL_SSI_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCSSI_OFFSET )))
#define SYSCTL_RCGCSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCSSI_OFFSET)))
#define SYSCTL_BITBANDING_RCGCSSI      (((BITBANDING_PERIPHERAL_SSI_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCSSI_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RCGCSSI_R_SSI0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RCGCSSI_R_SSI0_BIT         (0u)
#define SYSCTL_RCGCSSI_R_SSI0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCSSI_R_SSI0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_RCGCSSI_SSI0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCSSI_SSI0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCSSI_SSI0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCSSI_R_SSI1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_RCGCSSI_R_SSI1_BIT         (1u)
#define SYSCTL_RCGCSSI_R_SSI1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCSSI_R_SSI1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_RCGCSSI_SSI1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCSSI_SSI1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCSSI_SSI1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCSSI_R_SSI2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_RCGCSSI_R_SSI2_BIT         (2u)
#define SYSCTL_RCGCSSI_R_SSI2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCSSI_R_SSI2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_RCGCSSI_SSI2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCSSI_SSI2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCSSI_SSI2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCSSI_R_SSI3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_RCGCSSI_R_SSI3_BIT         (3u)
#define SYSCTL_RCGCSSI_R_SSI3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCSSI_R_SSI3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_RCGCSSI_SSI3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCSSI_SSI3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCSSI_SSI3_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RCGCSSI_SSI0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCSSI_OFFSET)*32u)+(SYSCTL_RCGCSSI_R_SSI0_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCSSI_SSI1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCSSI_OFFSET)*32u)+(SYSCTL_RCGCSSI_R_SSI1_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCSSI_SSI2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCSSI_OFFSET)*32u)+(SYSCTL_RCGCSSI_R_SSI2_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCSSI_SSI3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCSSI_OFFSET)*32u)+(SYSCTL_RCGCSSI_R_SSI3_BIT*4u))))

/******************************************************************************************
************************************65 RCGCI2C *********************************************
******************************************************************************************/
#define SYSCTL_RCGCI2C            (((PERIPHERAL_I2C_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCI2C_OFFSET )))
#define SYSCTL_RCGCI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCI2C_OFFSET)))
#define SYSCTL_BITBANDING_RCGCI2C      (((BITBANDING_PERIPHERAL_I2C_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RCGCI2C_R_I2C0_BIT         (0u)
#define SYSCTL_RCGCI2C_R_I2C0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCI2C_R_I2C0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_RCGCI2C_I2C0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCI2C_I2C0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCI2C_I2C0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_RCGCI2C_R_I2C1_BIT         (1u)
#define SYSCTL_RCGCI2C_R_I2C1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCI2C_R_I2C1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_RCGCI2C_I2C1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCI2C_I2C1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCI2C_I2C1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_RCGCI2C_R_I2C2_BIT         (2u)
#define SYSCTL_RCGCI2C_R_I2C2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCI2C_R_I2C2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_RCGCI2C_I2C2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCI2C_I2C2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCI2C_I2C2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_RCGCI2C_R_I2C3_BIT         (3u)
#define SYSCTL_RCGCI2C_R_I2C3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCI2C_R_I2C3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_RCGCI2C_I2C3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCI2C_I2C3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCI2C_I2C3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_RCGCI2C_R_I2C4_BIT         (4u)
#define SYSCTL_RCGCI2C_R_I2C4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCI2C_R_I2C4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_RCGCI2C_I2C4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCI2C_I2C4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCI2C_I2C4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_RCGCI2C_R_I2C5_BIT         (5u)
#define SYSCTL_RCGCI2C_R_I2C5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCI2C_R_I2C5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_RCGCI2C_I2C5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCI2C_I2C5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCI2C_I2C5_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RCGCI2C_I2C0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32u)+(SYSCTL_RCGCI2C_R_I2C0_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32u)+(SYSCTL_RCGCI2C_R_I2C1_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32u)+(SYSCTL_RCGCI2C_R_I2C2_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32u)+(SYSCTL_RCGCI2C_R_I2C3_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32u)+(SYSCTL_RCGCI2C_R_I2C4_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32u)+(SYSCTL_RCGCI2C_R_I2C5_BIT*4u))))

/******************************************************************************************
************************************66 RCGCUSB *********************************************
******************************************************************************************/
#define SYSCTL_RCGCUSB            (((PERIPHERAL_USB_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCUSB_OFFSET )))
#define SYSCTL_RCGCUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCUSB_OFFSET)))
#define SYSCTL_BITBANDING_RCGCUSB      (((BITBANDING_PERIPHERAL_USB_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCUSB_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RCGCUSB_R_USB_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RCGCUSB_R_USB_BIT         (0u)
#define SYSCTL_RCGCUSB_R_USB_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCUSB_R_USB_EN     ((uint32_t)0x00000001u)

#define SYSCTL_RCGCUSB_USB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCUSB_USB_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCUSB_USB_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RCGCUSB_USB    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCUSB_OFFSET)*32u)+(SYSCTL_RCGCUSB_R_USB_BIT*4u))))

/******************************************************************************************
************************************67 RCGCCAN *********************************************
******************************************************************************************/
#define SYSCTL_RCGCCAN            (((PERIPHERAL_CAN_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCCAN_OFFSET )))
#define SYSCTL_RCGCCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCCAN_OFFSET)))
#define SYSCTL_BITBANDING_RCGCCAN      (((BITBANDING_PERIPHERAL_CAN_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCCAN_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RCGCCAN_R_CAN0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RCGCCAN_R_CAN0_BIT         (0u)
#define SYSCTL_RCGCCAN_R_CAN0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCCAN_R_CAN0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_RCGCCAN_CAN0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCCAN_CAN0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCCAN_CAN0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCCAN_R_CAN1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_RCGCCAN_R_CAN1_BIT         (1u)
#define SYSCTL_RCGCCAN_R_CAN1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCCAN_R_CAN1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_RCGCCAN_CAN1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCCAN_CAN1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCCAN_CAN1_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RCGCCAN_CAN0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCCAN_OFFSET)*32u)+(SYSCTL_RCGCCAN_R_CAN0_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCCAN_CAN1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCCAN_OFFSET)*32u)+(SYSCTL_RCGCCAN_R_CAN1_BIT*4u))))

/******************************************************************************************
************************************68 RCGCADC *********************************************
******************************************************************************************/
#define SYSCTL_RCGCADC            (((PERIPHERAL_ADC_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCADC_OFFSET )))
#define SYSCTL_RCGCADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCADC_OFFSET)))
#define SYSCTL_BITBANDING_RCGCADC      (((BITBANDING_PERIPHERAL_ADC_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCADC_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RCGCADC_R_ADC0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RCGCADC_R_ADC0_BIT         (0u)
#define SYSCTL_RCGCADC_R_ADC0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCADC_R_ADC0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_RCGCADC_ADC0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCADC_ADC0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCADC_ADC0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCADC_R_ADC1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_RCGCADC_R_ADC1_BIT         (1u)
#define SYSCTL_RCGCADC_R_ADC1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCADC_R_ADC1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_RCGCADC_ADC1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCADC_ADC1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCADC_ADC1_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RCGCADC_ADC0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCADC_OFFSET)*32u)+(SYSCTL_RCGCADC_R_ADC0_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCADC_ADC1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCADC_OFFSET)*32u)+(SYSCTL_RCGCADC_R_ADC1_BIT*4u))))

/******************************************************************************************
************************************69 RCGCACMP *********************************************
******************************************************************************************/
#define SYSCTL_RCGCACMP            (((PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCACMP_OFFSET )))
#define SYSCTL_RCGCACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCACMP_OFFSET)))
#define SYSCTL_BITBANDING_RCGCACMP      (((BITBANDING_PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCACMP_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RCGCACMP_R_ACMP_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RCGCACMP_R_ACMP_BIT         (0u)
#define SYSCTL_RCGCACMP_R_ACMP_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCACMP_R_ACMP_EN     ((uint32_t)0x00000001u)

#define SYSCTL_RCGCACMP_ACMP_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCACMP_ACMP_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCACMP_ACMP_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RCGCACMP_ACMP    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCACMP_OFFSET)*32u)+(SYSCTL_RCGCACMP_R_ACMP_BIT*4u))))

/****************************************************************************************
************************************70 RCGCPWM *********************************************
******************************************************************************************/
#define SYSCTL_RCGCPWM            (((PERIPHERAL_PWM_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCPWM_OFFSET )))
#define SYSCTL_RCGCPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCPWM_OFFSET)))
#define SYSCTL_BITBANDING_RCGCPWM      (((BITBANDING_PERIPHERAL_PWM_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCPWM_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RCGCPWM_R_PWM0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RCGCPWM_R_PWM0_BIT         (0u)
#define SYSCTL_RCGCPWM_R_PWM0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCPWM_R_PWM0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_RCGCPWM_PWM0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCPWM_PWM0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCPWM_PWM0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCPWM_R_PWM1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_RCGCPWM_R_PWM1_BIT         (1u)
#define SYSCTL_RCGCPWM_R_PWM1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCPWM_R_PWM1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_RCGCPWM_PWM1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCPWM_PWM1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCPWM_PWM1_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RCGCPWM_PWM0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCPWM_OFFSET)*32u)+(SYSCTL_RCGCPWM_R_PWM0_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCPWM_PWM1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCPWM_OFFSET)*32u)+(SYSCTL_RCGCPWM_R_PWM1_BIT*4u))))

/******************************************************************************************
************************************71 RCGCQEI *********************************************
******************************************************************************************/
#define SYSCTL_RCGCQEI            (((PERIPHERAL_QEI_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCQEI_OFFSET )))
#define SYSCTL_RCGCQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCQEI_OFFSET)))
#define SYSCTL_BITBANDING_RCGCQEI      (((BITBANDING_PERIPHERAL_QEI_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCQEI_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RCGCQEI_R_QEI0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RCGCQEI_R_QEI0_BIT         (0u)
#define SYSCTL_RCGCQEI_R_QEI0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCQEI_R_QEI0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_RCGCQEI_QEI0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCQEI_QEI0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCQEI_QEI0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCQEI_R_QEI1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_RCGCQEI_R_QEI1_BIT         (1u)
#define SYSCTL_RCGCQEI_R_QEI1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCQEI_R_QEI1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_RCGCQEI_QEI1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCQEI_QEI1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCQEI_QEI1_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RCGCQEI_QEI0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCQEI_OFFSET)*32u)+(SYSCTL_RCGCQEI_R_QEI0_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCQEI_QEI1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCQEI_OFFSET)*32u)+(SYSCTL_RCGCQEI_R_QEI1_BIT*4u))))

/******************************************************************************************
************************************72 RCGCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_RCGCEEPROM            (((PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCEEPROM_OFFSET )))
#define SYSCTL_RCGCEEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCEEPROM_OFFSET)))
#define SYSCTL_BITBANDING_RCGCEEPROM      (((BITBANDING_PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCEEPROM_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RCGCEEPROM_R_EEPROM_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RCGCEEPROM_R_EEPROM_BIT         (0u)
#define SYSCTL_RCGCEEPROM_R_EEPROM_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCEEPROM_R_EEPROM_EN     ((uint32_t)0x00000001u)

#define SYSCTL_RCGCEEPROM_EEPROM_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCEEPROM_EEPROM_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCEEPROM_EEPROM_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RCGCEEPROM_EEPROM    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCEEPROM_OFFSET)*32u)+(SYSCTL_RCGCEEPROM_R_EEPROM_BIT*4u))))


/**********************************************************************************
************************************73 RCGCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_RCGCWTIMER            (((PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCWTIMER_OFFSET )))
#define SYSCTL_RCGCWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCWTIMER_OFFSET)))
#define SYSCTL_BITBANDING_RCGCWTIMER      (((BITBANDING_PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RCGCWTIMER_R_WTIMER0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RCGCWTIMER_R_WTIMER0_BIT         (0u)
#define SYSCTL_RCGCWTIMER_R_WTIMER0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCWTIMER_R_WTIMER0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_RCGCWTIMER_WTIMER0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCWTIMER_WTIMER0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCWTIMER_WTIMER0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCWTIMER_R_WTIMER1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_RCGCWTIMER_R_WTIMER1_BIT         (1u)
#define SYSCTL_RCGCWTIMER_R_WTIMER1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCWTIMER_R_WTIMER1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_RCGCWTIMER_WTIMER1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCWTIMER_WTIMER1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCWTIMER_WTIMER1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCWTIMER_R_WTIMER2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_RCGCWTIMER_R_WTIMER2_BIT         (2u)
#define SYSCTL_RCGCWTIMER_R_WTIMER2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCWTIMER_R_WTIMER2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_RCGCWTIMER_WTIMER2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCWTIMER_WTIMER2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCWTIMER_WTIMER2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCWTIMER_R_WTIMER3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_RCGCWTIMER_R_WTIMER3_BIT         (3u)
#define SYSCTL_RCGCWTIMER_R_WTIMER3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCWTIMER_R_WTIMER3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_RCGCWTIMER_WTIMER3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCWTIMER_WTIMER3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCWTIMER_WTIMER3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCWTIMER_R_WTIMER4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_RCGCWTIMER_R_WTIMER4_BIT         (4u)
#define SYSCTL_RCGCWTIMER_R_WTIMER4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCWTIMER_R_WTIMER4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_RCGCWTIMER_WTIMER4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCWTIMER_WTIMER4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCWTIMER_WTIMER4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RCGCWTIMER_R_WTIMER5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_RCGCWTIMER_R_WTIMER5_BIT         (5u)
#define SYSCTL_RCGCWTIMER_R_WTIMER5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_RCGCWTIMER_R_WTIMER5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_RCGCWTIMER_WTIMER5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_RCGCWTIMER_WTIMER5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RCGCWTIMER_WTIMER5_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RCGCWTIMER_WTIMER0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32u)+(SYSCTL_RCGCWTIMER_R_WTIMER0_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCWTIMER_WTIMER1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32u)+(SYSCTL_RCGCWTIMER_R_WTIMER1_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCWTIMER_WTIMER2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32u)+(SYSCTL_RCGCWTIMER_R_WTIMER2_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCWTIMER_WTIMER3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32u)+(SYSCTL_RCGCWTIMER_R_WTIMER3_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCWTIMER_WTIMER4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32u)+(SYSCTL_RCGCWTIMER_R_WTIMER4_BIT*4u))))
#define SYSCTL_BITBANDING_RCGCWTIMER_WTIMER5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32u)+(SYSCTL_RCGCWTIMER_R_WTIMER5_BIT*4u))))

/******************************************************************************************
************************************74 SCGCWD *********************************************
******************************************************************************************/
#define SYSCTL_SCGCWD            (((PERIPHERAL_WD_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCWD_OFFSET )))
#define SYSCTL_SCGCWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCWD_OFFSET)))
#define SYSCTL_BITBANDING_SCGCWD      (((BITBANDING_PERIPHERAL_WD_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCWD_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SCGCWD_R_WDT0_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWD_R_WDT0_BIT          (0u)
#define SYSCTL_SCGCWD_R_WDT0_DIS    ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWD_R_WDT0_EN      ((uint32_t)0x00000001u)

#define SYSCTL_SCGCWD_WDT0_MASK           ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWD_WDT0_DIS      ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWD_WDT0_EN        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCWD_R_WDT1_MASK         ((uint32_t)0x00000002u)
#define SYSCTL_SCGCWD_R_WDT1_BIT          (1u)
#define SYSCTL_SCGCWD_R_WDT1_DIS    ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWD_R_WDT1_EN      ((uint32_t)0x00000002u)

#define SYSCTL_SCGCWD_WDT1_MASK           ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWD_WDT1_DIS      ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWD_WDT1_EN        ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SCGCWD_WDT0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCWD_OFFSET)*32u)+(SYSCTL_SCGCWD_R_WDT0_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCWD_WDT1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCWD_OFFSET)*32u)+(SYSCTL_SCGCWD_R_WDT1_BIT*4u))))

/******************************************************************************************
************************************75 SCGCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_SCGCTIMER            (((PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCTIMER_OFFSET )))
#define SYSCTL_SCGCTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCTIMER_OFFSET)))
#define SYSCTL_BITBANDING_SCGCTIMER      (((BITBANDING_PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SCGCTIMER_R_TIMER0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCTIMER_R_TIMER0_BIT         (0u)
#define SYSCTL_SCGCTIMER_R_TIMER0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_R_TIMER0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCTIMER_TIMER0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCTIMER_TIMER0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_TIMER0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCTIMER_R_TIMER1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCTIMER_R_TIMER1_BIT         (1u)
#define SYSCTL_SCGCTIMER_R_TIMER1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_R_TIMER1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCTIMER_TIMER1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCTIMER_TIMER1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_TIMER1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCTIMER_R_TIMER2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SCGCTIMER_R_TIMER2_BIT         (2u)
#define SYSCTL_SCGCTIMER_R_TIMER2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_R_TIMER2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_SCGCTIMER_TIMER2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCTIMER_TIMER2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_TIMER2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCTIMER_R_TIMER3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SCGCTIMER_R_TIMER3_BIT         (3u)
#define SYSCTL_SCGCTIMER_R_TIMER3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_R_TIMER3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_SCGCTIMER_TIMER3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCTIMER_TIMER3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_TIMER3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCTIMER_R_TIMER4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SCGCTIMER_R_TIMER4_BIT         (4u)
#define SYSCTL_SCGCTIMER_R_TIMER4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_R_TIMER4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_SCGCTIMER_TIMER4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCTIMER_TIMER4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_TIMER4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCTIMER_R_TIMER5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SCGCTIMER_R_TIMER5_BIT         (5u)
#define SYSCTL_SCGCTIMER_R_TIMER5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_R_TIMER5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_SCGCTIMER_TIMER5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCTIMER_TIMER5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_TIMER5_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SCGCTIMER_TIMER0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32u)+(SYSCTL_SCGCTIMER_R_TIMER0_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCTIMER_TIMER1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32u)+(SYSCTL_SCGCTIMER_R_TIMER1_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCTIMER_TIMER2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32u)+(SYSCTL_SCGCTIMER_R_TIMER2_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCTIMER_TIMER3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32u)+(SYSCTL_SCGCTIMER_R_TIMER3_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCTIMER_TIMER4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32u)+(SYSCTL_SCGCTIMER_R_TIMER4_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCTIMER_TIMER5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32u)+(SYSCTL_SCGCTIMER_R_TIMER5_BIT*4u))))

/******************************************************************************************
************************************76 SCGCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_SCGCGPIO            (((PERIPHERAL_GPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCGPIO_OFFSET )))
#define SYSCTL_SCGCGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCGPIO_OFFSET)))
#define SYSCTL_BITBANDING_SCGCGPIO      (((BITBANDING_PERIPHERAL_GPIO_BITBANDING_TypeDef*)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOA_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_R_GPIOA_BIT         (0u)
#define SYSCTL_SCGCGPIO_R_GPIOA_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOA_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCGPIO_GPIOA_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOA_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOA_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOB_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCGPIO_R_GPIOB_BIT         (1u)
#define SYSCTL_SCGCGPIO_R_GPIOB_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOB_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCGPIO_GPIOB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOB_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOB_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOC_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SCGCGPIO_R_GPIOC_BIT         (2u)
#define SYSCTL_SCGCGPIO_R_GPIOC_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOC_EN     ((uint32_t)0x00000004u)

#define SYSCTL_SCGCGPIO_GPIOC_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOC_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOC_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOD_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SCGCGPIO_R_GPIOD_BIT         (3u)
#define SYSCTL_SCGCGPIO_R_GPIOD_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOD_EN     ((uint32_t)0x00000008u)

#define SYSCTL_SCGCGPIO_GPIOD_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOD_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOD_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOE_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SCGCGPIO_R_GPIOE_BIT         (4u)
#define SYSCTL_SCGCGPIO_R_GPIOE_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOE_EN     ((uint32_t)0x00000010u)

#define SYSCTL_SCGCGPIO_GPIOE_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOE_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOE_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOF_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SCGCGPIO_R_GPIOF_BIT         (5u)
#define SYSCTL_SCGCGPIO_R_GPIOF_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOF_EN     ((uint32_t)0x00000020u)

#define SYSCTL_SCGCGPIO_GPIOF_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOF_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOF_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_SCGCGPIO_R_GPIOG_BIT         (6u)
#define SYSCTL_SCGCGPIO_R_GPIOG_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOG_EN     ((uint32_t)0x00000040u)

#define SYSCTL_SCGCGPIO_GPIOG_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOG_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOG_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_SCGCGPIO_R_GPIOG_BIT         (6u)
#define SYSCTL_SCGCGPIO_R_GPIOG_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOG_EN     ((uint32_t)0x00000040u)

#define SYSCTL_SCGCGPIO_GPIOG_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOG_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOG_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOH_MASK        ((uint32_t)0x00000080u)
#define SYSCTL_SCGCGPIO_R_GPIOH_BIT         (7u)
#define SYSCTL_SCGCGPIO_R_GPIOH_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOH_EN     ((uint32_t)0x00000080u)

#define SYSCTL_SCGCGPIO_GPIOH_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOH_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOH_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOJ_MASK        ((uint32_t)0x00000100u)
#define SYSCTL_SCGCGPIO_R_GPIOJ_BIT         (8u)
#define SYSCTL_SCGCGPIO_R_GPIOJ_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOJ_EN     ((uint32_t)0x00000100u)

#define SYSCTL_SCGCGPIO_GPIOJ_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOJ_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOJ_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOK_MASK        ((uint32_t)0x00000200u)
#define SYSCTL_SCGCGPIO_R_GPIOK_BIT         (9u)
#define SYSCTL_SCGCGPIO_R_GPIOK_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOK_EN     ((uint32_t)0x00000200u)

#define SYSCTL_SCGCGPIO_GPIOK_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOK_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOK_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOL_MASK        ((uint32_t)0x00000400u)
#define SYSCTL_SCGCGPIO_R_GPIOL_BIT         (10u)
#define SYSCTL_SCGCGPIO_R_GPIOL_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOL_EN     ((uint32_t)0x00000400u)

#define SYSCTL_SCGCGPIO_GPIOL_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOL_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOL_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOM_MASK        ((uint32_t)0x00000800u)
#define SYSCTL_SCGCGPIO_R_GPIOM_BIT         (11u)
#define SYSCTL_SCGCGPIO_R_GPIOM_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOM_EN     ((uint32_t)0x00000800u)

#define SYSCTL_SCGCGPIO_GPIOM_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOM_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOM_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPION_MASK        ((uint32_t)0x00001000u)
#define SYSCTL_SCGCGPIO_R_GPION_BIT         (12u)
#define SYSCTL_SCGCGPIO_R_GPION_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPION_EN     ((uint32_t)0x00001000u)

#define SYSCTL_SCGCGPIO_GPION_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPION_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPION_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOP_MASK        ((uint32_t)0x00002000u)
#define SYSCTL_SCGCGPIO_R_GPIOP_BIT         (13u)
#define SYSCTL_SCGCGPIO_R_GPIOP_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOP_EN     ((uint32_t)0x00002000u)

#define SYSCTL_SCGCGPIO_GPIOP_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOP_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOP_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOQ_MASK        ((uint32_t)0x00004000u)
#define SYSCTL_SCGCGPIO_R_GPIOQ_BIT         (14u)
#define SYSCTL_SCGCGPIO_R_GPIOQ_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOQ_EN     ((uint32_t)0x00004000u)

#define SYSCTL_SCGCGPIO_GPIOQ_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOQ_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOQ_EN       ((uint32_t)0x00000001u)
/*--------*/
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOA    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32u)+(SYSCTL_SCGCGPIO_R_GPIOA_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOB    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32u)+(SYSCTL_SCGCGPIO_R_GPIOB_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOC    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32u)+(SYSCTL_SCGCGPIO_R_GPIOC_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOD    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32u)+(SYSCTL_SCGCGPIO_R_GPIOD_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOE    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32u)+(SYSCTL_SCGCGPIO_R_GPIOE_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOF    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32u)+(SYSCTL_SCGCGPIO_R_GPIOF_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOG    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32u)+(SYSCTL_SCGCGPIO_R_GPIOG_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOH    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32u)+(SYSCTL_SCGCGPIO_R_GPIOH_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOJ    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32u)+(SYSCTL_SCGCGPIO_R_GPIOJ_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOK    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32u)+(SYSCTL_SCGCGPIO_R_GPIOK_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOL    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32u)+(SYSCTL_SCGCGPIO_R_GPIOL_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOM    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32u)+(SYSCTL_SCGCGPIO_R_GPIOM_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPION    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32u)+(SYSCTL_SCGCGPIO_R_GPION_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOP    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32u)+(SYSCTL_SCGCGPIO_R_GPIOP_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOQ    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32u)+(SYSCTL_SCGCGPIO_R_GPIOQ_BIT*4u))))

/******************************************************************************************
************************************77 SCGCDMA *********************************************
******************************************************************************************/
#define SYSCTL_SCGCDMA            (((PERIPHERAL_DMA_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCDMA_OFFSET )))
#define SYSCTL_SCGCDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCDMA_OFFSET)))
#define SYSCTL_BITBANDING_SCGCDMA      (((BITBANDING_PERIPHERAL_DMA_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCDMA_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SCGCDMA_R_UDMA_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCDMA_R_UDMA_BIT         (0u)
#define SYSCTL_SCGCDMA_R_UDMA_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCDMA_R_UDMA_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCDMA_UDMA_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCDMA_UDMA_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCDMA_UDMA_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SCGCDMA_UDMA    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCDMA_OFFSET)*32u)+(SYSCTL_SCGCDMA_R_UDMA_BIT*4u))))

/******************************************************************************************
************************************78 SCGCHIB *********************************************
******************************************************************************************/
#define SYSCTL_SCGCHIB            (((PERIPHERAL_HIB_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCHIB_OFFSET )))
#define SYSCTL_SCGCHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCHIB_OFFSET)))
#define SYSCTL_BITBANDING_SCGCHIB      (((BITBANDING_PERIPHERAL_HIB_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCHIB_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SCGCHIB_R_HIB_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCHIB_R_HIB_BIT         (0u)
#define SYSCTL_SCGCHIB_R_HIB_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCHIB_R_HIB_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCHIB_HIB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCHIB_HIB_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCHIB_HIB_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SCGCHIB_HIB    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCHIB_OFFSET)*32u)+(SYSCTL_SCGCHIB_R_HIB_BIT*4u))))

/******************************************************************************************
************************************79 SCGCUART *********************************************
******************************************************************************************/
#define SYSCTL_SCGCUART            (((PERIPHERAL_UART_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCUART_OFFSET )))
#define SYSCTL_SCGCUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCUART_OFFSET)))
#define SYSCTL_BITBANDING_SCGCUART      (((BITBANDING_PERIPHERAL_UART_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SCGCUART_R_UART0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUART_R_UART0_BIT         (0u)
#define SYSCTL_SCGCUART_R_UART0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_R_UART0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCUART_UART0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUART_UART0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_UART0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCUART_R_UART1_BIT         (1u)
#define SYSCTL_SCGCUART_R_UART1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_R_UART1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCUART_UART1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUART_UART1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_UART1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SCGCUART_R_UART2_BIT         (2u)
#define SYSCTL_SCGCUART_R_UART2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_R_UART2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_SCGCUART_UART2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUART_UART2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_UART2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SCGCUART_R_UART3_BIT         (3u)
#define SYSCTL_SCGCUART_R_UART3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_R_UART3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_SCGCUART_UART3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUART_UART3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_UART3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SCGCUART_R_UART4_BIT         (4u)
#define SYSCTL_SCGCUART_R_UART4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_R_UART4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_SCGCUART_UART4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUART_UART4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_UART4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SCGCUART_R_UART5_BIT         (5u)
#define SYSCTL_SCGCUART_R_UART5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_R_UART5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_SCGCUART_UART5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUART_UART5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_UART5_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART6_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_SCGCUART_R_UART6_BIT         (6u)
#define SYSCTL_SCGCUART_R_UART6_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_R_UART6_EN     ((uint32_t)0x00000040u)

#define SYSCTL_SCGCUART_UART6_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUART_UART6_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_UART6_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART7_MASK        ((uint32_t)0x00000080u)
#define SYSCTL_SCGCUART_R_UART7_BIT         (7u)
#define SYSCTL_SCGCUART_R_UART7_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_R_UART7_EN     ((uint32_t)0x00000080u)

#define SYSCTL_SCGCUART_UART7_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUART_UART7_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_UART7_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SCGCUART_UART0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32u)+(SYSCTL_SCGCUART_R_UART0_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCUART_UART1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32u)+(SYSCTL_SCGCUART_R_UART1_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCUART_UART2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32u)+(SYSCTL_SCGCUART_R_UART2_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCUART_UART3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32u)+(SYSCTL_SCGCUART_R_UART3_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCUART_UART4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32u)+(SYSCTL_SCGCUART_R_UART4_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCUART_UART5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32u)+(SYSCTL_SCGCUART_R_UART5_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCUART_UART6    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32u)+(SYSCTL_SCGCUART_R_UART6_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCUART_UART7    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32u)+(SYSCTL_SCGCUART_R_UART7_BIT*4u))))

/******************************************************************************************
************************************80 SCGCSSI *********************************************
******************************************************************************************/
#define SYSCTL_SCGCSSI            (((PERIPHERAL_SSI_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCSSI_OFFSET )))
#define SYSCTL_SCGCSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCSSI_OFFSET)))
#define SYSCTL_BITBANDING_SCGCSSI      (((BITBANDING_PERIPHERAL_SSI_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCSSI_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SCGCSSI_R_SSI0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCSSI_R_SSI0_BIT         (0u)
#define SYSCTL_SCGCSSI_R_SSI0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCSSI_R_SSI0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCSSI_SSI0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCSSI_SSI0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCSSI_SSI0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCSSI_R_SSI1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCSSI_R_SSI1_BIT         (1u)
#define SYSCTL_SCGCSSI_R_SSI1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCSSI_R_SSI1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCSSI_SSI1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCSSI_SSI1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCSSI_SSI1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCSSI_R_SSI2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SCGCSSI_R_SSI2_BIT         (2u)
#define SYSCTL_SCGCSSI_R_SSI2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCSSI_R_SSI2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_SCGCSSI_SSI2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCSSI_SSI2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCSSI_SSI2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCSSI_R_SSI3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SCGCSSI_R_SSI3_BIT         (3u)
#define SYSCTL_SCGCSSI_R_SSI3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCSSI_R_SSI3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_SCGCSSI_SSI3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCSSI_SSI3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCSSI_SSI3_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SCGCSSI_SSI0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCSSI_OFFSET)*32u)+(SYSCTL_SCGCSSI_R_SSI0_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCSSI_SSI1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCSSI_OFFSET)*32u)+(SYSCTL_SCGCSSI_R_SSI1_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCSSI_SSI2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCSSI_OFFSET)*32u)+(SYSCTL_SCGCSSI_R_SSI2_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCSSI_SSI3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCSSI_OFFSET)*32u)+(SYSCTL_SCGCSSI_R_SSI3_BIT*4u))))

/******************************************************************************************
************************************81 SCGCI2C *********************************************
******************************************************************************************/
#define SYSCTL_SCGCI2C            (((PERIPHERAL_I2C_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCI2C_OFFSET )))
#define SYSCTL_SCGCI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCI2C_OFFSET)))
#define SYSCTL_BITBANDING_SCGCI2C      (((BITBANDING_PERIPHERAL_I2C_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SCGCI2C_R_I2C0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCI2C_R_I2C0_BIT         (0u)
#define SYSCTL_SCGCI2C_R_I2C0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_R_I2C0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCI2C_I2C0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCI2C_I2C0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_I2C0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCI2C_R_I2C1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCI2C_R_I2C1_BIT         (1u)
#define SYSCTL_SCGCI2C_R_I2C1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_R_I2C1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCI2C_I2C1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCI2C_I2C1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_I2C1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCI2C_R_I2C2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SCGCI2C_R_I2C2_BIT         (2u)
#define SYSCTL_SCGCI2C_R_I2C2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_R_I2C2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_SCGCI2C_I2C2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCI2C_I2C2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_I2C2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCI2C_R_I2C3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SCGCI2C_R_I2C3_BIT         (3u)
#define SYSCTL_SCGCI2C_R_I2C3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_R_I2C3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_SCGCI2C_I2C3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCI2C_I2C3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_I2C3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCI2C_R_I2C4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SCGCI2C_R_I2C4_BIT         (4u)
#define SYSCTL_SCGCI2C_R_I2C4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_R_I2C4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_SCGCI2C_I2C4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCI2C_I2C4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_I2C4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCI2C_R_I2C5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SCGCI2C_R_I2C5_BIT         (5u)
#define SYSCTL_SCGCI2C_R_I2C5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_R_I2C5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_SCGCI2C_I2C5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCI2C_I2C5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_I2C5_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SCGCI2C_I2C0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32u)+(SYSCTL_SCGCI2C_R_I2C0_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32u)+(SYSCTL_SCGCI2C_R_I2C1_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32u)+(SYSCTL_SCGCI2C_R_I2C2_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32u)+(SYSCTL_SCGCI2C_R_I2C3_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32u)+(SYSCTL_SCGCI2C_R_I2C4_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32u)+(SYSCTL_SCGCI2C_R_I2C5_BIT*4u))))

/******************************************************************************************
************************************82 SCGCUSB *********************************************
******************************************************************************************/
#define SYSCTL_SCGCUSB            (((PERIPHERAL_USB_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCUSB_OFFSET )))
#define SYSCTL_SCGCUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCUSB_OFFSET)))
#define SYSCTL_BITBANDING_SCGCUSB      (((BITBANDING_PERIPHERAL_USB_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCUSB_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SCGCUSB_R_USB_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUSB_R_USB_BIT         (0u)
#define SYSCTL_SCGCUSB_R_USB_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUSB_R_USB_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCUSB_USB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUSB_USB_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUSB_USB_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SCGCUSB_USB    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCUSB_OFFSET)*32u)+(SYSCTL_SCGCUSB_R_USB_BIT*4u))))

/******************************************************************************************
************************************83 SCGCCAN *********************************************
******************************************************************************************/
#define SYSCTL_SCGCCAN            (((PERIPHERAL_CAN_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCCAN_OFFSET )))
#define SYSCTL_SCGCCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCCAN_OFFSET)))
#define SYSCTL_BITBANDING_SCGCCAN      (((BITBANDING_PERIPHERAL_CAN_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCCAN_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SCGCCAN_R_CAN0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCCAN_R_CAN0_BIT         (0u)
#define SYSCTL_SCGCCAN_R_CAN0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCCAN_R_CAN0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCCAN_CAN0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCCAN_CAN0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCCAN_CAN0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCCAN_R_CAN1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCCAN_R_CAN1_BIT         (1u)
#define SYSCTL_SCGCCAN_R_CAN1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCCAN_R_CAN1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCCAN_CAN1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCCAN_CAN1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCCAN_CAN1_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SCGCCAN_CAN0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCCAN_OFFSET)*32u)+(SYSCTL_SCGCCAN_R_CAN0_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCCAN_CAN1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCCAN_OFFSET)*32u)+(SYSCTL_SCGCCAN_R_CAN1_BIT*4u))))

/******************************************************************************************
************************************84 SCGCADC *********************************************
******************************************************************************************/
#define SYSCTL_SCGCADC            (((PERIPHERAL_ADC_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCADC_OFFSET )))
#define SYSCTL_SCGCADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCADC_OFFSET)))
#define SYSCTL_BITBANDING_SCGCADC      (((BITBANDING_PERIPHERAL_ADC_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCADC_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SCGCADC_R_ADC0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCADC_R_ADC0_BIT         (0u)
#define SYSCTL_SCGCADC_R_ADC0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCADC_R_ADC0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCADC_ADC0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCADC_ADC0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCADC_ADC0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCADC_R_ADC1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCADC_R_ADC1_BIT         (1u)
#define SYSCTL_SCGCADC_R_ADC1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCADC_R_ADC1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCADC_ADC1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCADC_ADC1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCADC_ADC1_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SCGCADC_ADC0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCADC_OFFSET)*32u)+(SYSCTL_SCGCADC_R_ADC0_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCADC_ADC1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCADC_OFFSET)*32u)+(SYSCTL_SCGCADC_R_ADC1_BIT*4u))))

/******************************************************************************************
************************************85 SCGCACMP *********************************************
******************************************************************************************/
#define SYSCTL_SCGCACMP            (((PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCACMP_OFFSET )))
#define SYSCTL_SCGCACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCACMP_OFFSET)))
#define SYSCTL_BITBANDING_SCGCACMP      (((BITBANDING_PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCACMP_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SCGCACMP_R_ACMP_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCACMP_R_ACMP_BIT         (0u)
#define SYSCTL_SCGCACMP_R_ACMP_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCACMP_R_ACMP_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCACMP_ACMP_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCACMP_ACMP_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCACMP_ACMP_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SCGCACMP_ACMP    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCACMP_OFFSET)*32u)+(SYSCTL_SCGCACMP_R_ACMP_BIT*4u))))

/****************************************************************************************
************************************86 SCGCPWM *********************************************
******************************************************************************************/
#define SYSCTL_SCGCPWM            (((PERIPHERAL_PWM_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCPWM_OFFSET )))
#define SYSCTL_SCGCPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCPWM_OFFSET)))
#define SYSCTL_BITBANDING_SCGCPWM      (((BITBANDING_PERIPHERAL_PWM_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCPWM_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SCGCPWM_R_PWM0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCPWM_R_PWM0_BIT         (0u)
#define SYSCTL_SCGCPWM_R_PWM0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCPWM_R_PWM0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCPWM_PWM0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCPWM_PWM0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCPWM_PWM0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCPWM_R_PWM1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCPWM_R_PWM1_BIT         (1u)
#define SYSCTL_SCGCPWM_R_PWM1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCPWM_R_PWM1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCPWM_PWM1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCPWM_PWM1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCPWM_PWM1_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SCGCPWM_PWM0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCPWM_OFFSET)*32u)+(SYSCTL_SCGCPWM_R_PWM0_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCPWM_PWM1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCPWM_OFFSET)*32u)+(SYSCTL_SCGCPWM_R_PWM1_BIT*4u))))

/******************************************************************************************
************************************87 SCGCQEI *********************************************
******************************************************************************************/
#define SYSCTL_SCGCQEI            (((PERIPHERAL_QEI_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCQEI_OFFSET )))
#define SYSCTL_SCGCQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCQEI_OFFSET)))
#define SYSCTL_BITBANDING_SCGCQEI      (((BITBANDING_PERIPHERAL_QEI_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCQEI_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SCGCQEI_R_QEI0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCQEI_R_QEI0_BIT         (0u)
#define SYSCTL_SCGCQEI_R_QEI0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCQEI_R_QEI0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCQEI_QEI0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCQEI_QEI0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCQEI_QEI0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCQEI_R_QEI1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCQEI_R_QEI1_BIT         (1u)
#define SYSCTL_SCGCQEI_R_QEI1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCQEI_R_QEI1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCQEI_QEI1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCQEI_QEI1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCQEI_QEI1_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SCGCQEI_QEI0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCQEI_OFFSET)*32u)+(SYSCTL_SCGCQEI_R_QEI0_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCQEI_QEI1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCQEI_OFFSET)*32u)+(SYSCTL_SCGCQEI_R_QEI1_BIT*4u))))

/******************************************************************************************
************************************88 SCGCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_SCGCEEPROM            (((PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCEEPROM_OFFSET )))
#define SYSCTL_SCGCEEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCEEPROM_OFFSET)))
#define SYSCTL_BITBANDING_SCGCEEPROM      (((BITBANDING_PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCEEPROM_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SCGCEEPROM_R_EEPROM_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCEEPROM_R_EEPROM_BIT         (0u)
#define SYSCTL_SCGCEEPROM_R_EEPROM_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCEEPROM_R_EEPROM_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCEEPROM_EEPROM_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCEEPROM_EEPROM_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCEEPROM_EEPROM_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SCGCEEPROM_EEPROM    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCEEPROM_OFFSET)*32u)+(SYSCTL_SCGCEEPROM_R_EEPROM_BIT*4u))))


/**********************************************************************************
************************************89 SCGCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_SCGCWTIMER            (((PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCWTIMER_OFFSET )))
#define SYSCTL_SCGCWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCWTIMER_OFFSET)))
#define SYSCTL_BITBANDING_SCGCWTIMER      (((BITBANDING_PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32u))))

/*--------*/
#define SYSCTL_SCGCWTIMER_R_WTIMER0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWTIMER_R_WTIMER0_BIT         (0u)
#define SYSCTL_SCGCWTIMER_R_WTIMER0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_R_WTIMER0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCWTIMER_WTIMER0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWTIMER_WTIMER0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_WTIMER0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCWTIMER_R_WTIMER1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCWTIMER_R_WTIMER1_BIT         (1u)
#define SYSCTL_SCGCWTIMER_R_WTIMER1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_R_WTIMER1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCWTIMER_WTIMER1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWTIMER_WTIMER1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_WTIMER1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCWTIMER_R_WTIMER2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SCGCWTIMER_R_WTIMER2_BIT         (2u)
#define SYSCTL_SCGCWTIMER_R_WTIMER2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_R_WTIMER2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_SCGCWTIMER_WTIMER2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWTIMER_WTIMER2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_WTIMER2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCWTIMER_R_WTIMER3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SCGCWTIMER_R_WTIMER3_BIT         (3u)
#define SYSCTL_SCGCWTIMER_R_WTIMER3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_R_WTIMER3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_SCGCWTIMER_WTIMER3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWTIMER_WTIMER3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_WTIMER3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCWTIMER_R_WTIMER4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SCGCWTIMER_R_WTIMER4_BIT         (4u)
#define SYSCTL_SCGCWTIMER_R_WTIMER4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_R_WTIMER4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_SCGCWTIMER_WTIMER4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWTIMER_WTIMER4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_WTIMER4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCWTIMER_R_WTIMER5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SCGCWTIMER_R_WTIMER5_BIT         (5u)
#define SYSCTL_SCGCWTIMER_R_WTIMER5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_R_WTIMER5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_SCGCWTIMER_WTIMER5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWTIMER_WTIMER5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_WTIMER5_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_SCGCWTIMER_WTIMER0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32u)+(SYSCTL_SCGCWTIMER_R_WTIMER0_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCWTIMER_WTIMER1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32u)+(SYSCTL_SCGCWTIMER_R_WTIMER1_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCWTIMER_WTIMER2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32u)+(SYSCTL_SCGCWTIMER_R_WTIMER2_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCWTIMER_WTIMER3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32u)+(SYSCTL_SCGCWTIMER_R_WTIMER3_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCWTIMER_WTIMER4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32u)+(SYSCTL_SCGCWTIMER_R_WTIMER4_BIT*4u))))
#define SYSCTL_BITBANDING_SCGCWTIMER_WTIMER5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32u)+(SYSCTL_SCGCWTIMER_R_WTIMER5_BIT*4u))))

/******************************************************************************************
************************************90 DCGCWD *********************************************
******************************************************************************************/
#define SYSCTL_DCGCWD            (((PERIPHERAL_WD_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCWD_OFFSET )))
#define SYSCTL_DCGCWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCWD_OFFSET)))
#define SYSCTL_BITBANDING_DCGCWD      (((BITBANDING_PERIPHERAL_WD_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCWD_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DCGCWD_R_WDT0_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_DCGCWD_R_WDT0_BIT          (0u)
#define SYSCTL_DCGCWD_R_WDT0_DIS    ((uint32_t)0x00000000u)
#define SYSCTL_DCGCWD_R_WDT0_EN      ((uint32_t)0x00000001u)

#define SYSCTL_DCGCWD_WDT0_MASK           ((uint32_t)0x00000001u)
#define SYSCTL_DCGCWD_WDT0_DIS      ((uint32_t)0x00000000u)
#define SYSCTL_DCGCWD_WDT0_EN        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCWD_R_WDT1_MASK         ((uint32_t)0x00000002u)
#define SYSCTL_DCGCWD_R_WDT1_BIT          (1u)
#define SYSCTL_DCGCWD_R_WDT1_DIS    ((uint32_t)0x00000000u)
#define SYSCTL_DCGCWD_R_WDT1_EN      ((uint32_t)0x00000002u)

#define SYSCTL_DCGCWD_WDT1_MASK           ((uint32_t)0x00000001u)
#define SYSCTL_DCGCWD_WDT1_DIS      ((uint32_t)0x00000000u)
#define SYSCTL_DCGCWD_WDT1_EN        ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_DCGCWD_WDT0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCWD_OFFSET)*32u)+(SYSCTL_DCGCWD_R_WDT0_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCWD_WDT1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCWD_OFFSET)*32u)+(SYSCTL_DCGCWD_R_WDT1_BIT*4u))))

/******************************************************************************************
************************************91 DCGCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_DCGCTIMER            (((PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCTIMER_OFFSET )))
#define SYSCTL_DCGCTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCTIMER_OFFSET)))
#define SYSCTL_BITBANDING_DCGCTIMER      (((BITBANDING_PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_DCGCTIMER_R_TIMER0_BIT         (0u)
#define SYSCTL_DCGCTIMER_R_TIMER0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCTIMER_R_TIMER0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_DCGCTIMER_TIMER0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCTIMER_TIMER0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCTIMER_TIMER0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_DCGCTIMER_R_TIMER1_BIT         (1u)
#define SYSCTL_DCGCTIMER_R_TIMER1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCTIMER_R_TIMER1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_DCGCTIMER_TIMER1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCTIMER_TIMER1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCTIMER_TIMER1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_DCGCTIMER_R_TIMER2_BIT         (2u)
#define SYSCTL_DCGCTIMER_R_TIMER2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCTIMER_R_TIMER2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_DCGCTIMER_TIMER2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCTIMER_TIMER2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCTIMER_TIMER2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_DCGCTIMER_R_TIMER3_BIT         (3u)
#define SYSCTL_DCGCTIMER_R_TIMER3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCTIMER_R_TIMER3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_DCGCTIMER_TIMER3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCTIMER_TIMER3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCTIMER_TIMER3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_DCGCTIMER_R_TIMER4_BIT         (4u)
#define SYSCTL_DCGCTIMER_R_TIMER4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCTIMER_R_TIMER4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_DCGCTIMER_TIMER4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCTIMER_TIMER4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCTIMER_TIMER4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_DCGCTIMER_R_TIMER5_BIT         (5u)
#define SYSCTL_DCGCTIMER_R_TIMER5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCTIMER_R_TIMER5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_DCGCTIMER_TIMER5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCTIMER_TIMER5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCTIMER_TIMER5_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_DCGCTIMER_TIMER0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32u)+(SYSCTL_DCGCTIMER_R_TIMER0_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCTIMER_TIMER1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32u)+(SYSCTL_DCGCTIMER_R_TIMER1_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCTIMER_TIMER2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32u)+(SYSCTL_DCGCTIMER_R_TIMER2_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCTIMER_TIMER3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32u)+(SYSCTL_DCGCTIMER_R_TIMER3_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCTIMER_TIMER4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32u)+(SYSCTL_DCGCTIMER_R_TIMER4_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCTIMER_TIMER5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32u)+(SYSCTL_DCGCTIMER_R_TIMER5_BIT*4u))))

/******************************************************************************************
************************************92 DCGCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_DCGCGPIO            (((PERIPHERAL_GPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCGPIO_OFFSET )))
#define SYSCTL_DCGCGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCGPIO_OFFSET)))
#define SYSCTL_BITBANDING_DCGCGPIO      (((BITBANDING_PERIPHERAL_GPIO_BITBANDING_TypeDef*)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOA_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_DCGCGPIO_R_GPIOA_BIT         (0u)
#define SYSCTL_DCGCGPIO_R_GPIOA_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_R_GPIOA_EN     ((uint32_t)0x00000001u)

#define SYSCTL_DCGCGPIO_GPIOA_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCGPIO_GPIOA_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_GPIOA_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOB_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_DCGCGPIO_R_GPIOB_BIT         (1u)
#define SYSCTL_DCGCGPIO_R_GPIOB_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_R_GPIOB_EN     ((uint32_t)0x00000002u)

#define SYSCTL_DCGCGPIO_GPIOB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCGPIO_GPIOB_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_GPIOB_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOC_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_DCGCGPIO_R_GPIOC_BIT         (2u)
#define SYSCTL_DCGCGPIO_R_GPIOC_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_R_GPIOC_EN     ((uint32_t)0x00000004u)

#define SYSCTL_DCGCGPIO_GPIOC_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCGPIO_GPIOC_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_GPIOC_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOD_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_DCGCGPIO_R_GPIOD_BIT         (3u)
#define SYSCTL_DCGCGPIO_R_GPIOD_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_R_GPIOD_EN     ((uint32_t)0x00000008u)

#define SYSCTL_DCGCGPIO_GPIOD_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCGPIO_GPIOD_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_GPIOD_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOE_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_DCGCGPIO_R_GPIOE_BIT         (4u)
#define SYSCTL_DCGCGPIO_R_GPIOE_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_R_GPIOE_EN     ((uint32_t)0x00000010u)

#define SYSCTL_DCGCGPIO_GPIOE_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCGPIO_GPIOE_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_GPIOE_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOF_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_DCGCGPIO_R_GPIOF_BIT         (5u)
#define SYSCTL_DCGCGPIO_R_GPIOF_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_R_GPIOF_EN     ((uint32_t)0x00000020u)

#define SYSCTL_DCGCGPIO_GPIOF_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCGPIO_GPIOF_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_GPIOF_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_DCGCGPIO_R_GPIOG_BIT         (6u)
#define SYSCTL_DCGCGPIO_R_GPIOG_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_R_GPIOG_EN     ((uint32_t)0x00000040u)

#define SYSCTL_DCGCGPIO_GPIOG_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCGPIO_GPIOG_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_GPIOG_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_DCGCGPIO_R_GPIOG_BIT         (6u)
#define SYSCTL_DCGCGPIO_R_GPIOG_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_R_GPIOG_EN     ((uint32_t)0x00000040u)

#define SYSCTL_DCGCGPIO_GPIOG_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCGPIO_GPIOG_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_GPIOG_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOH_MASK        ((uint32_t)0x00000080u)
#define SYSCTL_DCGCGPIO_R_GPIOH_BIT         (7u)
#define SYSCTL_DCGCGPIO_R_GPIOH_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_R_GPIOH_EN     ((uint32_t)0x00000080u)

#define SYSCTL_DCGCGPIO_GPIOH_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCGPIO_GPIOH_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_GPIOH_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOJ_MASK        ((uint32_t)0x00000100u)
#define SYSCTL_DCGCGPIO_R_GPIOJ_BIT         (8u)
#define SYSCTL_DCGCGPIO_R_GPIOJ_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_R_GPIOJ_EN     ((uint32_t)0x00000100u)

#define SYSCTL_DCGCGPIO_GPIOJ_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCGPIO_GPIOJ_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_GPIOJ_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOK_MASK        ((uint32_t)0x00000200u)
#define SYSCTL_DCGCGPIO_R_GPIOK_BIT         (9u)
#define SYSCTL_DCGCGPIO_R_GPIOK_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_R_GPIOK_EN     ((uint32_t)0x00000200u)

#define SYSCTL_DCGCGPIO_GPIOK_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCGPIO_GPIOK_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_GPIOK_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOL_MASK        ((uint32_t)0x00000400u)
#define SYSCTL_DCGCGPIO_R_GPIOL_BIT         (10u)
#define SYSCTL_DCGCGPIO_R_GPIOL_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_R_GPIOL_EN     ((uint32_t)0x00000400u)

#define SYSCTL_DCGCGPIO_GPIOL_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCGPIO_GPIOL_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_GPIOL_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOM_MASK        ((uint32_t)0x00000800u)
#define SYSCTL_DCGCGPIO_R_GPIOM_BIT         (11u)
#define SYSCTL_DCGCGPIO_R_GPIOM_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_R_GPIOM_EN     ((uint32_t)0x00000800u)

#define SYSCTL_DCGCGPIO_GPIOM_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCGPIO_GPIOM_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_GPIOM_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPION_MASK        ((uint32_t)0x00001000u)
#define SYSCTL_DCGCGPIO_R_GPION_BIT         (12u)
#define SYSCTL_DCGCGPIO_R_GPION_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_R_GPION_EN     ((uint32_t)0x00001000u)

#define SYSCTL_DCGCGPIO_GPION_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCGPIO_GPION_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_GPION_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOP_MASK        ((uint32_t)0x00002000u)
#define SYSCTL_DCGCGPIO_R_GPIOP_BIT         (13u)
#define SYSCTL_DCGCGPIO_R_GPIOP_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_R_GPIOP_EN     ((uint32_t)0x00002000u)

#define SYSCTL_DCGCGPIO_GPIOP_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCGPIO_GPIOP_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_GPIOP_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOQ_MASK        ((uint32_t)0x00004000u)
#define SYSCTL_DCGCGPIO_R_GPIOQ_BIT         (14u)
#define SYSCTL_DCGCGPIO_R_GPIOQ_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_R_GPIOQ_EN     ((uint32_t)0x00004000u)

#define SYSCTL_DCGCGPIO_GPIOQ_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCGPIO_GPIOQ_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCGPIO_GPIOQ_EN       ((uint32_t)0x00000001u)
/*--------*/
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOA    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32u)+(SYSCTL_DCGCGPIO_R_GPIOA_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOB    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32u)+(SYSCTL_DCGCGPIO_R_GPIOB_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOC    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32u)+(SYSCTL_DCGCGPIO_R_GPIOC_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOD    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32u)+(SYSCTL_DCGCGPIO_R_GPIOD_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOE    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32u)+(SYSCTL_DCGCGPIO_R_GPIOE_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOF    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32u)+(SYSCTL_DCGCGPIO_R_GPIOF_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOG    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32u)+(SYSCTL_DCGCGPIO_R_GPIOG_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOH    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32u)+(SYSCTL_DCGCGPIO_R_GPIOH_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOJ    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32u)+(SYSCTL_DCGCGPIO_R_GPIOJ_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOK    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32u)+(SYSCTL_DCGCGPIO_R_GPIOK_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOL    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32u)+(SYSCTL_DCGCGPIO_R_GPIOL_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOM    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32u)+(SYSCTL_DCGCGPIO_R_GPIOM_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPION    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32u)+(SYSCTL_DCGCGPIO_R_GPION_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOP    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32u)+(SYSCTL_DCGCGPIO_R_GPIOP_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOQ    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32u)+(SYSCTL_DCGCGPIO_R_GPIOQ_BIT*4u))))

/******************************************************************************************
************************************93 DCGCDMA *********************************************
******************************************************************************************/
#define SYSCTL_DCGCDMA            (((PERIPHERAL_DMA_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCDMA_OFFSET )))
#define SYSCTL_DCGCDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCDMA_OFFSET)))
#define SYSCTL_BITBANDING_DCGCDMA      (((BITBANDING_PERIPHERAL_DMA_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCDMA_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DCGCDMA_R_UDMA_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_DCGCDMA_R_UDMA_BIT         (0u)
#define SYSCTL_DCGCDMA_R_UDMA_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCDMA_R_UDMA_EN     ((uint32_t)0x00000001u)

#define SYSCTL_DCGCDMA_UDMA_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCDMA_UDMA_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCDMA_UDMA_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_DCGCDMA_UDMA    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCDMA_OFFSET)*32u)+(SYSCTL_DCGCDMA_R_UDMA_BIT*4u))))

/******************************************************************************************
************************************94 DCGCHIB *********************************************
******************************************************************************************/
#define SYSCTL_DCGCHIB            (((PERIPHERAL_HIB_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCHIB_OFFSET )))
#define SYSCTL_DCGCHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCHIB_OFFSET)))
#define SYSCTL_BITBANDING_DCGCHIB      (((BITBANDING_PERIPHERAL_HIB_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCHIB_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DCGCHIB_R_HIB_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_DCGCHIB_R_HIB_BIT         (0u)
#define SYSCTL_DCGCHIB_R_HIB_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCHIB_R_HIB_EN     ((uint32_t)0x00000001u)

#define SYSCTL_DCGCHIB_HIB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCHIB_HIB_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCHIB_HIB_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_DCGCHIB_HIB    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCHIB_OFFSET)*32u)+(SYSCTL_DCGCHIB_R_HIB_BIT*4u))))

/******************************************************************************************
************************************95 DCGCUART *********************************************
******************************************************************************************/
#define SYSCTL_DCGCUART            (((PERIPHERAL_UART_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCUART_OFFSET )))
#define SYSCTL_DCGCUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCUART_OFFSET)))
#define SYSCTL_BITBANDING_DCGCUART      (((BITBANDING_PERIPHERAL_UART_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DCGCUART_R_UART0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_DCGCUART_R_UART0_BIT         (0u)
#define SYSCTL_DCGCUART_R_UART0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCUART_R_UART0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_DCGCUART_UART0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCUART_UART0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCUART_UART0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_DCGCUART_R_UART1_BIT         (1u)
#define SYSCTL_DCGCUART_R_UART1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCUART_R_UART1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_DCGCUART_UART1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCUART_UART1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCUART_UART1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_DCGCUART_R_UART2_BIT         (2u)
#define SYSCTL_DCGCUART_R_UART2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCUART_R_UART2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_DCGCUART_UART2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCUART_UART2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCUART_UART2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_DCGCUART_R_UART3_BIT         (3u)
#define SYSCTL_DCGCUART_R_UART3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCUART_R_UART3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_DCGCUART_UART3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCUART_UART3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCUART_UART3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_DCGCUART_R_UART4_BIT         (4u)
#define SYSCTL_DCGCUART_R_UART4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCUART_R_UART4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_DCGCUART_UART4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCUART_UART4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCUART_UART4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_DCGCUART_R_UART5_BIT         (5u)
#define SYSCTL_DCGCUART_R_UART5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCUART_R_UART5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_DCGCUART_UART5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCUART_UART5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCUART_UART5_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART6_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_DCGCUART_R_UART6_BIT         (6u)
#define SYSCTL_DCGCUART_R_UART6_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCUART_R_UART6_EN     ((uint32_t)0x00000040u)

#define SYSCTL_DCGCUART_UART6_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCUART_UART6_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCUART_UART6_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART7_MASK        ((uint32_t)0x00000080u)
#define SYSCTL_DCGCUART_R_UART7_BIT         (7u)
#define SYSCTL_DCGCUART_R_UART7_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCUART_R_UART7_EN     ((uint32_t)0x00000080u)

#define SYSCTL_DCGCUART_UART7_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCUART_UART7_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCUART_UART7_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_DCGCUART_UART0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32u)+(SYSCTL_DCGCUART_R_UART0_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCUART_UART1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32u)+(SYSCTL_DCGCUART_R_UART1_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCUART_UART2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32u)+(SYSCTL_DCGCUART_R_UART2_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCUART_UART3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32u)+(SYSCTL_DCGCUART_R_UART3_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCUART_UART4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32u)+(SYSCTL_DCGCUART_R_UART4_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCUART_UART5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32u)+(SYSCTL_DCGCUART_R_UART5_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCUART_UART6    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32u)+(SYSCTL_DCGCUART_R_UART6_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCUART_UART7    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32u)+(SYSCTL_DCGCUART_R_UART7_BIT*4u))))

/******************************************************************************************
************************************96 DCGCSSI *********************************************
******************************************************************************************/
#define SYSCTL_DCGCSSI            (((PERIPHERAL_SSI_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCSSI_OFFSET )))
#define SYSCTL_DCGCSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCSSI_OFFSET)))
#define SYSCTL_BITBANDING_DCGCSSI      (((BITBANDING_PERIPHERAL_SSI_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCSSI_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DCGCSSI_R_SSI0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_DCGCSSI_R_SSI0_BIT         (0u)
#define SYSCTL_DCGCSSI_R_SSI0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCSSI_R_SSI0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_DCGCSSI_SSI0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCSSI_SSI0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCSSI_SSI0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCSSI_R_SSI1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_DCGCSSI_R_SSI1_BIT         (1u)
#define SYSCTL_DCGCSSI_R_SSI1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCSSI_R_SSI1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_DCGCSSI_SSI1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCSSI_SSI1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCSSI_SSI1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCSSI_R_SSI2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_DCGCSSI_R_SSI2_BIT         (2u)
#define SYSCTL_DCGCSSI_R_SSI2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCSSI_R_SSI2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_DCGCSSI_SSI2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCSSI_SSI2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCSSI_SSI2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCSSI_R_SSI3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_DCGCSSI_R_SSI3_BIT         (3u)
#define SYSCTL_DCGCSSI_R_SSI3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCSSI_R_SSI3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_DCGCSSI_SSI3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCSSI_SSI3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCSSI_SSI3_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_DCGCSSI_SSI0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCSSI_OFFSET)*32u)+(SYSCTL_DCGCSSI_R_SSI0_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCSSI_SSI1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCSSI_OFFSET)*32u)+(SYSCTL_DCGCSSI_R_SSI1_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCSSI_SSI2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCSSI_OFFSET)*32u)+(SYSCTL_DCGCSSI_R_SSI2_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCSSI_SSI3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCSSI_OFFSET)*32u)+(SYSCTL_DCGCSSI_R_SSI3_BIT*4u))))

/******************************************************************************************
************************************97 DCGCI2C *********************************************
******************************************************************************************/
#define SYSCTL_DCGCI2C            (((PERIPHERAL_I2C_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCI2C_OFFSET )))
#define SYSCTL_DCGCI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCI2C_OFFSET)))
#define SYSCTL_BITBANDING_DCGCI2C      (((BITBANDING_PERIPHERAL_I2C_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_DCGCI2C_R_I2C0_BIT         (0u)
#define SYSCTL_DCGCI2C_R_I2C0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCI2C_R_I2C0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_DCGCI2C_I2C0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCI2C_I2C0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCI2C_I2C0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_DCGCI2C_R_I2C1_BIT         (1u)
#define SYSCTL_DCGCI2C_R_I2C1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCI2C_R_I2C1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_DCGCI2C_I2C1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCI2C_I2C1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCI2C_I2C1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_DCGCI2C_R_I2C2_BIT         (2u)
#define SYSCTL_DCGCI2C_R_I2C2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCI2C_R_I2C2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_DCGCI2C_I2C2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCI2C_I2C2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCI2C_I2C2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_DCGCI2C_R_I2C3_BIT         (3u)
#define SYSCTL_DCGCI2C_R_I2C3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCI2C_R_I2C3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_DCGCI2C_I2C3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCI2C_I2C3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCI2C_I2C3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_DCGCI2C_R_I2C4_BIT         (4u)
#define SYSCTL_DCGCI2C_R_I2C4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCI2C_R_I2C4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_DCGCI2C_I2C4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCI2C_I2C4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCI2C_I2C4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_DCGCI2C_R_I2C5_BIT         (5u)
#define SYSCTL_DCGCI2C_R_I2C5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCI2C_R_I2C5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_DCGCI2C_I2C5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCI2C_I2C5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCI2C_I2C5_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_DCGCI2C_I2C0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32u)+(SYSCTL_DCGCI2C_R_I2C0_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32u)+(SYSCTL_DCGCI2C_R_I2C1_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32u)+(SYSCTL_DCGCI2C_R_I2C2_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32u)+(SYSCTL_DCGCI2C_R_I2C3_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32u)+(SYSCTL_DCGCI2C_R_I2C4_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32u)+(SYSCTL_DCGCI2C_R_I2C5_BIT*4u))))

/******************************************************************************************
************************************98 DCGCUSB *********************************************
******************************************************************************************/
#define SYSCTL_DCGCUSB            (((PERIPHERAL_USB_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCUSB_OFFSET )))
#define SYSCTL_DCGCUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCUSB_OFFSET)))
#define SYSCTL_BITBANDING_DCGCUSB      (((BITBANDING_PERIPHERAL_USB_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCUSB_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DCGCUSB_R_USB_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_DCGCUSB_R_USB_BIT         (0u)
#define SYSCTL_DCGCUSB_R_USB_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCUSB_R_USB_EN     ((uint32_t)0x00000001u)

#define SYSCTL_DCGCUSB_USB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCUSB_USB_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCUSB_USB_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_DCGCUSB_USB    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCUSB_OFFSET)*32u)+(SYSCTL_DCGCUSB_R_USB_BIT*4u))))

/******************************************************************************************
************************************99 DCGCCAN *********************************************
******************************************************************************************/
#define SYSCTL_DCGCCAN            (((PERIPHERAL_CAN_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCCAN_OFFSET )))
#define SYSCTL_DCGCCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCCAN_OFFSET)))
#define SYSCTL_BITBANDING_DCGCCAN      (((BITBANDING_PERIPHERAL_CAN_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCCAN_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DCGCCAN_R_CAN0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_DCGCCAN_R_CAN0_BIT         (0u)
#define SYSCTL_DCGCCAN_R_CAN0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCCAN_R_CAN0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_DCGCCAN_CAN0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCCAN_CAN0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCCAN_CAN0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCCAN_R_CAN1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_DCGCCAN_R_CAN1_BIT         (1u)
#define SYSCTL_DCGCCAN_R_CAN1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCCAN_R_CAN1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_DCGCCAN_CAN1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCCAN_CAN1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCCAN_CAN1_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_DCGCCAN_CAN0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCCAN_OFFSET)*32u)+(SYSCTL_DCGCCAN_R_CAN0_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCCAN_CAN1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCCAN_OFFSET)*32u)+(SYSCTL_DCGCCAN_R_CAN1_BIT*4u))))

/******************************************************************************************
************************************100 DCGCADC *********************************************
******************************************************************************************/
#define SYSCTL_DCGCADC            (((PERIPHERAL_ADC_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCADC_OFFSET )))
#define SYSCTL_DCGCADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCADC_OFFSET)))
#define SYSCTL_BITBANDING_DCGCADC      (((BITBANDING_PERIPHERAL_ADC_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCADC_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DCGCADC_R_ADC0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_DCGCADC_R_ADC0_BIT         (0u)
#define SYSCTL_DCGCADC_R_ADC0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCADC_R_ADC0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_DCGCADC_ADC0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCADC_ADC0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCADC_ADC0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCADC_R_ADC1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_DCGCADC_R_ADC1_BIT         (1u)
#define SYSCTL_DCGCADC_R_ADC1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCADC_R_ADC1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_DCGCADC_ADC1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCADC_ADC1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCADC_ADC1_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_DCGCADC_ADC0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCADC_OFFSET)*32u)+(SYSCTL_DCGCADC_R_ADC0_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCADC_ADC1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCADC_OFFSET)*32u)+(SYSCTL_DCGCADC_R_ADC1_BIT*4u))))

/******************************************************************************************
************************************101 DCGCACMP *********************************************
******************************************************************************************/
#define SYSCTL_DCGCACMP            (((PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCACMP_OFFSET )))
#define SYSCTL_DCGCACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCACMP_OFFSET)))
#define SYSCTL_BITBANDING_DCGCACMP      (((BITBANDING_PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCACMP_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DCGCACMP_R_ACMP_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_DCGCACMP_R_ACMP_BIT         (0u)
#define SYSCTL_DCGCACMP_R_ACMP_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCACMP_R_ACMP_EN     ((uint32_t)0x00000001u)

#define SYSCTL_DCGCACMP_ACMP_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCACMP_ACMP_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCACMP_ACMP_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_DCGCACMP_ACMP    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCACMP_OFFSET)*32u)+(SYSCTL_DCGCACMP_R_ACMP_BIT*4u))))

/****************************************************************************************
************************************102 DCGCPWM *********************************************
******************************************************************************************/
#define SYSCTL_DCGCPWM            (((PERIPHERAL_PWM_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCPWM_OFFSET )))
#define SYSCTL_DCGCPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCPWM_OFFSET)))
#define SYSCTL_BITBANDING_DCGCPWM      (((BITBANDING_PERIPHERAL_PWM_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCPWM_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DCGCPWM_R_PWM0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_DCGCPWM_R_PWM0_BIT         (0u)
#define SYSCTL_DCGCPWM_R_PWM0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCPWM_R_PWM0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_DCGCPWM_PWM0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCPWM_PWM0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCPWM_PWM0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCPWM_R_PWM1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_DCGCPWM_R_PWM1_BIT         (1u)
#define SYSCTL_DCGCPWM_R_PWM1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCPWM_R_PWM1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_DCGCPWM_PWM1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCPWM_PWM1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCPWM_PWM1_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_DCGCPWM_PWM0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCPWM_OFFSET)*32u)+(SYSCTL_DCGCPWM_R_PWM0_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCPWM_PWM1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCPWM_OFFSET)*32u)+(SYSCTL_DCGCPWM_R_PWM1_BIT*4u))))

/******************************************************************************************
************************************103 DCGCQEI *********************************************
******************************************************************************************/
#define SYSCTL_DCGCQEI            (((PERIPHERAL_QEI_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCQEI_OFFSET )))
#define SYSCTL_DCGCQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCQEI_OFFSET)))
#define SYSCTL_BITBANDING_DCGCQEI      (((BITBANDING_PERIPHERAL_QEI_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCQEI_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DCGCQEI_R_QEI0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_DCGCQEI_R_QEI0_BIT         (0u)
#define SYSCTL_DCGCQEI_R_QEI0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCQEI_R_QEI0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_DCGCQEI_QEI0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCQEI_QEI0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCQEI_QEI0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCQEI_R_QEI1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_DCGCQEI_R_QEI1_BIT         (1u)
#define SYSCTL_DCGCQEI_R_QEI1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCQEI_R_QEI1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_DCGCQEI_QEI1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCQEI_QEI1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCQEI_QEI1_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_DCGCQEI_QEI0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCQEI_OFFSET)*32u)+(SYSCTL_DCGCQEI_R_QEI0_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCQEI_QEI1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCQEI_OFFSET)*32u)+(SYSCTL_DCGCQEI_R_QEI1_BIT*4u))))

/******************************************************************************************
************************************104 DCGCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_DCGCEEPROM            (((PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCEEPROM_OFFSET )))
#define SYSCTL_DCGCEEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCEEPROM_OFFSET)))
#define SYSCTL_BITBANDING_DCGCEEPROM      (((BITBANDING_PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCEEPROM_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DCGCEEPROM_R_EEPROM_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_DCGCEEPROM_R_EEPROM_BIT         (0u)
#define SYSCTL_DCGCEEPROM_R_EEPROM_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCEEPROM_R_EEPROM_EN     ((uint32_t)0x00000001u)

#define SYSCTL_DCGCEEPROM_EEPROM_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCEEPROM_EEPROM_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCEEPROM_EEPROM_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_DCGCEEPROM_EEPROM    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCEEPROM_OFFSET)*32u)+(SYSCTL_DCGCEEPROM_R_EEPROM_BIT*4u))))


/**********************************************************************************
************************************105 DCGCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_DCGCWTIMER            (((PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCWTIMER_OFFSET )))
#define SYSCTL_DCGCWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCWTIMER_OFFSET)))
#define SYSCTL_BITBANDING_DCGCWTIMER      (((BITBANDING_PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32u))))

/*--------*/
#define SYSCTL_DCGCWTIMER_R_WTIMER0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_DCGCWTIMER_R_WTIMER0_BIT         (0u)
#define SYSCTL_DCGCWTIMER_R_WTIMER0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCWTIMER_R_WTIMER0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_DCGCWTIMER_WTIMER0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCWTIMER_WTIMER0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCWTIMER_WTIMER0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCWTIMER_R_WTIMER1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_DCGCWTIMER_R_WTIMER1_BIT         (1u)
#define SYSCTL_DCGCWTIMER_R_WTIMER1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCWTIMER_R_WTIMER1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_DCGCWTIMER_WTIMER1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCWTIMER_WTIMER1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCWTIMER_WTIMER1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCWTIMER_R_WTIMER2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_DCGCWTIMER_R_WTIMER2_BIT         (2u)
#define SYSCTL_DCGCWTIMER_R_WTIMER2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCWTIMER_R_WTIMER2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_DCGCWTIMER_WTIMER2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCWTIMER_WTIMER2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCWTIMER_WTIMER2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCWTIMER_R_WTIMER3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_DCGCWTIMER_R_WTIMER3_BIT         (3u)
#define SYSCTL_DCGCWTIMER_R_WTIMER3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCWTIMER_R_WTIMER3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_DCGCWTIMER_WTIMER3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCWTIMER_WTIMER3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCWTIMER_WTIMER3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCWTIMER_R_WTIMER4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_DCGCWTIMER_R_WTIMER4_BIT         (4u)
#define SYSCTL_DCGCWTIMER_R_WTIMER4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCWTIMER_R_WTIMER4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_DCGCWTIMER_WTIMER4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCWTIMER_WTIMER4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCWTIMER_WTIMER4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DCGCWTIMER_R_WTIMER5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_DCGCWTIMER_R_WTIMER5_BIT         (5u)
#define SYSCTL_DCGCWTIMER_R_WTIMER5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_DCGCWTIMER_R_WTIMER5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_DCGCWTIMER_WTIMER5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_DCGCWTIMER_WTIMER5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_DCGCWTIMER_WTIMER5_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_DCGCWTIMER_WTIMER0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32u)+(SYSCTL_DCGCWTIMER_R_WTIMER0_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCWTIMER_WTIMER1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32u)+(SYSCTL_DCGCWTIMER_R_WTIMER1_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCWTIMER_WTIMER2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32u)+(SYSCTL_DCGCWTIMER_R_WTIMER2_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCWTIMER_WTIMER3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32u)+(SYSCTL_DCGCWTIMER_R_WTIMER3_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCWTIMER_WTIMER4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32u)+(SYSCTL_DCGCWTIMER_R_WTIMER4_BIT*4u))))
#define SYSCTL_BITBANDING_DCGCWTIMER_WTIMER5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32u)+(SYSCTL_DCGCWTIMER_R_WTIMER5_BIT*4u))))

/******************************************************************************************
************************************106 PRWD *********************************************
******************************************************************************************/
#define SYSCTL_PRWD            (((PERIPHERAL_WD_TypeDef*)(SYSCTL_BASE+SYSCTL_PRWD_OFFSET )))
#define SYSCTL_PRWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRWD_OFFSET)))
#define SYSCTL_BITBANDING_PRWD      (((BITBANDING_PERIPHERAL_WD_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRWD_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PRWD_R_WDT0_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_PRWD_R_WDT0_BIT          (0u)
#define SYSCTL_PRWD_R_WDT0_DIS    ((uint32_t)0x00000000u)
#define SYSCTL_PRWD_R_WDT0_EN      ((uint32_t)0x00000001u)

#define SYSCTL_PRWD_WDT0_MASK           ((uint32_t)0x00000001u)
#define SYSCTL_PRWD_WDT0_DIS      ((uint32_t)0x00000000u)
#define SYSCTL_PRWD_WDT0_EN        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRWD_R_WDT1_MASK         ((uint32_t)0x00000002u)
#define SYSCTL_PRWD_R_WDT1_BIT          (1u)
#define SYSCTL_PRWD_R_WDT1_DIS    ((uint32_t)0x00000000u)
#define SYSCTL_PRWD_R_WDT1_EN      ((uint32_t)0x00000002u)

#define SYSCTL_PRWD_WDT1_MASK           ((uint32_t)0x00000001u)
#define SYSCTL_PRWD_WDT1_DIS      ((uint32_t)0x00000000u)
#define SYSCTL_PRWD_WDT1_EN        ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PRWD_WDT0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRWD_OFFSET)*32u)+(SYSCTL_PRWD_R_WDT0_BIT*4u))))
#define SYSCTL_BITBANDING_PRWD_WDT1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRWD_OFFSET)*32u)+(SYSCTL_PRWD_R_WDT1_BIT*4u))))

/******************************************************************************************
************************************107 PRTIMER *********************************************
******************************************************************************************/
#define SYSCTL_PRTIMER            (((PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_PRTIMER_OFFSET )))
#define SYSCTL_PRTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRTIMER_OFFSET)))
#define SYSCTL_BITBANDING_PRTIMER      (((BITBANDING_PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PRTIMER_R_TIMER0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PRTIMER_R_TIMER0_BIT         (0u)
#define SYSCTL_PRTIMER_R_TIMER0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRTIMER_R_TIMER0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_PRTIMER_TIMER0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRTIMER_TIMER0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRTIMER_TIMER0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRTIMER_R_TIMER1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PRTIMER_R_TIMER1_BIT         (1u)
#define SYSCTL_PRTIMER_R_TIMER1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRTIMER_R_TIMER1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_PRTIMER_TIMER1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRTIMER_TIMER1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRTIMER_TIMER1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRTIMER_R_TIMER2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_PRTIMER_R_TIMER2_BIT         (2u)
#define SYSCTL_PRTIMER_R_TIMER2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRTIMER_R_TIMER2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_PRTIMER_TIMER2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRTIMER_TIMER2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRTIMER_TIMER2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRTIMER_R_TIMER3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_PRTIMER_R_TIMER3_BIT         (3u)
#define SYSCTL_PRTIMER_R_TIMER3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRTIMER_R_TIMER3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_PRTIMER_TIMER3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRTIMER_TIMER3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRTIMER_TIMER3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRTIMER_R_TIMER4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_PRTIMER_R_TIMER4_BIT         (4u)
#define SYSCTL_PRTIMER_R_TIMER4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRTIMER_R_TIMER4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_PRTIMER_TIMER4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRTIMER_TIMER4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRTIMER_TIMER4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRTIMER_R_TIMER5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_PRTIMER_R_TIMER5_BIT         (5u)
#define SYSCTL_PRTIMER_R_TIMER5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRTIMER_R_TIMER5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_PRTIMER_TIMER5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRTIMER_TIMER5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRTIMER_TIMER5_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PRTIMER_TIMER0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32u)+(SYSCTL_PRTIMER_R_TIMER0_BIT*4u))))
#define SYSCTL_BITBANDING_PRTIMER_TIMER1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32u)+(SYSCTL_PRTIMER_R_TIMER1_BIT*4u))))
#define SYSCTL_BITBANDING_PRTIMER_TIMER2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32u)+(SYSCTL_PRTIMER_R_TIMER2_BIT*4u))))
#define SYSCTL_BITBANDING_PRTIMER_TIMER3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32u)+(SYSCTL_PRTIMER_R_TIMER3_BIT*4u))))
#define SYSCTL_BITBANDING_PRTIMER_TIMER4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32u)+(SYSCTL_PRTIMER_R_TIMER4_BIT*4u))))
#define SYSCTL_BITBANDING_PRTIMER_TIMER5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32u)+(SYSCTL_PRTIMER_R_TIMER5_BIT*4u))))

/******************************************************************************************
************************************108 PRGPIO *********************************************
******************************************************************************************/
#define SYSCTL_PRGPIO            (((PERIPHERAL_GPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_PRGPIO_OFFSET )))
#define SYSCTL_PRGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRGPIO_OFFSET)))
#define SYSCTL_BITBANDING_PRGPIO      (((BITBANDING_PERIPHERAL_GPIO_BITBANDING_TypeDef*)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOA_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PRGPIO_R_GPIOA_BIT         (0u)
#define SYSCTL_PRGPIO_R_GPIOA_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_R_GPIOA_EN     ((uint32_t)0x00000001u)

#define SYSCTL_PRGPIO_GPIOA_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRGPIO_GPIOA_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_GPIOA_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOB_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PRGPIO_R_GPIOB_BIT         (1u)
#define SYSCTL_PRGPIO_R_GPIOB_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_R_GPIOB_EN     ((uint32_t)0x00000002u)

#define SYSCTL_PRGPIO_GPIOB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRGPIO_GPIOB_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_GPIOB_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOC_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_PRGPIO_R_GPIOC_BIT         (2u)
#define SYSCTL_PRGPIO_R_GPIOC_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_R_GPIOC_EN     ((uint32_t)0x00000004u)

#define SYSCTL_PRGPIO_GPIOC_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRGPIO_GPIOC_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_GPIOC_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOD_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_PRGPIO_R_GPIOD_BIT         (3u)
#define SYSCTL_PRGPIO_R_GPIOD_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_R_GPIOD_EN     ((uint32_t)0x00000008u)

#define SYSCTL_PRGPIO_GPIOD_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRGPIO_GPIOD_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_GPIOD_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOE_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_PRGPIO_R_GPIOE_BIT         (4u)
#define SYSCTL_PRGPIO_R_GPIOE_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_R_GPIOE_EN     ((uint32_t)0x00000010u)

#define SYSCTL_PRGPIO_GPIOE_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRGPIO_GPIOE_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_GPIOE_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOF_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_PRGPIO_R_GPIOF_BIT         (5u)
#define SYSCTL_PRGPIO_R_GPIOF_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_R_GPIOF_EN     ((uint32_t)0x00000020u)

#define SYSCTL_PRGPIO_GPIOF_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRGPIO_GPIOF_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_GPIOF_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_PRGPIO_R_GPIOG_BIT         (6u)
#define SYSCTL_PRGPIO_R_GPIOG_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_R_GPIOG_EN     ((uint32_t)0x00000040u)

#define SYSCTL_PRGPIO_GPIOG_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRGPIO_GPIOG_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_GPIOG_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_PRGPIO_R_GPIOG_BIT         (6u)
#define SYSCTL_PRGPIO_R_GPIOG_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_R_GPIOG_EN     ((uint32_t)0x00000040u)

#define SYSCTL_PRGPIO_GPIOG_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRGPIO_GPIOG_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_GPIOG_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOH_MASK        ((uint32_t)0x00000080u)
#define SYSCTL_PRGPIO_R_GPIOH_BIT         (7u)
#define SYSCTL_PRGPIO_R_GPIOH_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_R_GPIOH_EN     ((uint32_t)0x00000080u)

#define SYSCTL_PRGPIO_GPIOH_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRGPIO_GPIOH_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_GPIOH_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOJ_MASK        ((uint32_t)0x00000100u)
#define SYSCTL_PRGPIO_R_GPIOJ_BIT         (8u)
#define SYSCTL_PRGPIO_R_GPIOJ_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_R_GPIOJ_EN     ((uint32_t)0x00000100u)

#define SYSCTL_PRGPIO_GPIOJ_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRGPIO_GPIOJ_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_GPIOJ_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOK_MASK        ((uint32_t)0x00000200u)
#define SYSCTL_PRGPIO_R_GPIOK_BIT         (9u)
#define SYSCTL_PRGPIO_R_GPIOK_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_R_GPIOK_EN     ((uint32_t)0x00000200u)

#define SYSCTL_PRGPIO_GPIOK_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRGPIO_GPIOK_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_GPIOK_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOL_MASK        ((uint32_t)0x00000400u)
#define SYSCTL_PRGPIO_R_GPIOL_BIT         (10u)
#define SYSCTL_PRGPIO_R_GPIOL_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_R_GPIOL_EN     ((uint32_t)0x00000400u)

#define SYSCTL_PRGPIO_GPIOL_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRGPIO_GPIOL_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_GPIOL_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOM_MASK        ((uint32_t)0x00000800u)
#define SYSCTL_PRGPIO_R_GPIOM_BIT         (11u)
#define SYSCTL_PRGPIO_R_GPIOM_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_R_GPIOM_EN     ((uint32_t)0x00000800u)

#define SYSCTL_PRGPIO_GPIOM_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRGPIO_GPIOM_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_GPIOM_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPION_MASK        ((uint32_t)0x00001000u)
#define SYSCTL_PRGPIO_R_GPION_BIT         (12u)
#define SYSCTL_PRGPIO_R_GPION_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_R_GPION_EN     ((uint32_t)0x00001000u)

#define SYSCTL_PRGPIO_GPION_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRGPIO_GPION_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_GPION_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOP_MASK        ((uint32_t)0x00002000u)
#define SYSCTL_PRGPIO_R_GPIOP_BIT         (13u)
#define SYSCTL_PRGPIO_R_GPIOP_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_R_GPIOP_EN     ((uint32_t)0x00002000u)

#define SYSCTL_PRGPIO_GPIOP_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRGPIO_GPIOP_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_GPIOP_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOQ_MASK        ((uint32_t)0x00004000u)
#define SYSCTL_PRGPIO_R_GPIOQ_BIT         (14u)
#define SYSCTL_PRGPIO_R_GPIOQ_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_R_GPIOQ_EN     ((uint32_t)0x00004000u)

#define SYSCTL_PRGPIO_GPIOQ_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRGPIO_GPIOQ_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRGPIO_GPIOQ_EN       ((uint32_t)0x00000001u)
/*--------*/
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOA    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32u)+(SYSCTL_PRGPIO_R_GPIOA_BIT*4u))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOB    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32u)+(SYSCTL_PRGPIO_R_GPIOB_BIT*4u))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOC    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32u)+(SYSCTL_PRGPIO_R_GPIOC_BIT*4u))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOD    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32u)+(SYSCTL_PRGPIO_R_GPIOD_BIT*4u))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOE    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32u)+(SYSCTL_PRGPIO_R_GPIOE_BIT*4u))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOF    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32u)+(SYSCTL_PRGPIO_R_GPIOF_BIT*4u))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOG    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32u)+(SYSCTL_PRGPIO_R_GPIOG_BIT*4u))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOH    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32u)+(SYSCTL_PRGPIO_R_GPIOH_BIT*4u))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOJ    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32u)+(SYSCTL_PRGPIO_R_GPIOJ_BIT*4u))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOK    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32u)+(SYSCTL_PRGPIO_R_GPIOK_BIT*4u))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOL    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32u)+(SYSCTL_PRGPIO_R_GPIOL_BIT*4u))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOM    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32u)+(SYSCTL_PRGPIO_R_GPIOM_BIT*4u))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPION    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32u)+(SYSCTL_PRGPIO_R_GPION_BIT*4u))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOP    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32u)+(SYSCTL_PRGPIO_R_GPIOP_BIT*4u))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOQ    (*((volatile uint32_t *)(SYSCTL_BASE +((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32u)+(SYSCTL_PRGPIO_R_GPIOQ_BIT*4u))))

/******************************************************************************************
************************************109 PRDMA *********************************************
******************************************************************************************/
#define SYSCTL_PRDMA            (((PERIPHERAL_DMA_TypeDef*)(SYSCTL_BASE+SYSCTL_PRDMA_OFFSET )))
#define SYSCTL_PRDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRDMA_OFFSET)))
#define SYSCTL_BITBANDING_PRDMA      (((BITBANDING_PERIPHERAL_DMA_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRDMA_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PRDMA_R_UDMA_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PRDMA_R_UDMA_BIT         (0u)
#define SYSCTL_PRDMA_R_UDMA_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRDMA_R_UDMA_EN     ((uint32_t)0x00000001u)

#define SYSCTL_PRDMA_UDMA_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRDMA_UDMA_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRDMA_UDMA_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PRDMA_UDMA    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRDMA_OFFSET)*32u)+(SYSCTL_PRDMA_R_UDMA_BIT*4u))))

/******************************************************************************************
************************************110 PRHIB *********************************************
******************************************************************************************/
#define SYSCTL_PRHIB            (((PERIPHERAL_HIB_TypeDef*)(SYSCTL_BASE+SYSCTL_PRHIB_OFFSET )))
#define SYSCTL_PRHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRHIB_OFFSET)))
#define SYSCTL_BITBANDING_PRHIB      (((BITBANDING_PERIPHERAL_HIB_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRHIB_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PRHIB_R_HIB_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PRHIB_R_HIB_BIT         (0u)
#define SYSCTL_PRHIB_R_HIB_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRHIB_R_HIB_EN     ((uint32_t)0x00000001u)

#define SYSCTL_PRHIB_HIB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRHIB_HIB_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRHIB_HIB_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PRHIB_HIB    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRHIB_OFFSET)*32u)+(SYSCTL_PRHIB_R_HIB_BIT*4u))))

/******************************************************************************************
************************************111 PRUART *********************************************
******************************************************************************************/
#define SYSCTL_PRUART            (((PERIPHERAL_UART_TypeDef*)(SYSCTL_BASE+SYSCTL_PRUART_OFFSET )))
#define SYSCTL_PRUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRUART_OFFSET)))
#define SYSCTL_BITBANDING_PRUART      (((BITBANDING_PERIPHERAL_UART_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PRUART_R_UART0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PRUART_R_UART0_BIT         (0u)
#define SYSCTL_PRUART_R_UART0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRUART_R_UART0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_PRUART_UART0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRUART_UART0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRUART_UART0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRUART_R_UART1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PRUART_R_UART1_BIT         (1u)
#define SYSCTL_PRUART_R_UART1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRUART_R_UART1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_PRUART_UART1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRUART_UART1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRUART_UART1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRUART_R_UART2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_PRUART_R_UART2_BIT         (2u)
#define SYSCTL_PRUART_R_UART2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRUART_R_UART2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_PRUART_UART2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRUART_UART2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRUART_UART2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRUART_R_UART3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_PRUART_R_UART3_BIT         (3u)
#define SYSCTL_PRUART_R_UART3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRUART_R_UART3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_PRUART_UART3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRUART_UART3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRUART_UART3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRUART_R_UART4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_PRUART_R_UART4_BIT         (4u)
#define SYSCTL_PRUART_R_UART4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRUART_R_UART4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_PRUART_UART4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRUART_UART4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRUART_UART4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRUART_R_UART5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_PRUART_R_UART5_BIT         (5u)
#define SYSCTL_PRUART_R_UART5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRUART_R_UART5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_PRUART_UART5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRUART_UART5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRUART_UART5_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRUART_R_UART6_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_PRUART_R_UART6_BIT         (6u)
#define SYSCTL_PRUART_R_UART6_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRUART_R_UART6_EN     ((uint32_t)0x00000040u)

#define SYSCTL_PRUART_UART6_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRUART_UART6_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRUART_UART6_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRUART_R_UART7_MASK        ((uint32_t)0x00000080u)
#define SYSCTL_PRUART_R_UART7_BIT         (7u)
#define SYSCTL_PRUART_R_UART7_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRUART_R_UART7_EN     ((uint32_t)0x00000080u)

#define SYSCTL_PRUART_UART7_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRUART_UART7_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRUART_UART7_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PRUART_UART0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32u)+(SYSCTL_PRUART_R_UART0_BIT*4u))))
#define SYSCTL_BITBANDING_PRUART_UART1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32u)+(SYSCTL_PRUART_R_UART1_BIT*4u))))
#define SYSCTL_BITBANDING_PRUART_UART2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32u)+(SYSCTL_PRUART_R_UART2_BIT*4u))))
#define SYSCTL_BITBANDING_PRUART_UART3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32u)+(SYSCTL_PRUART_R_UART3_BIT*4u))))
#define SYSCTL_BITBANDING_PRUART_UART4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32u)+(SYSCTL_PRUART_R_UART4_BIT*4u))))
#define SYSCTL_BITBANDING_PRUART_UART5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32u)+(SYSCTL_PRUART_R_UART5_BIT*4u))))
#define SYSCTL_BITBANDING_PRUART_UART6    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32u)+(SYSCTL_PRUART_R_UART6_BIT*4u))))
#define SYSCTL_BITBANDING_PRUART_UART7    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32u)+(SYSCTL_PRUART_R_UART7_BIT*4u))))

/******************************************************************************************
************************************112 PRSSI *********************************************
******************************************************************************************/
#define SYSCTL_PRSSI            (((PERIPHERAL_SSI_TypeDef*)(SYSCTL_BASE+SYSCTL_PRSSI_OFFSET )))
#define SYSCTL_PRSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRSSI_OFFSET)))
#define SYSCTL_BITBANDING_PRSSI      (((BITBANDING_PERIPHERAL_SSI_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRSSI_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PRSSI_R_SSI0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PRSSI_R_SSI0_BIT         (0u)
#define SYSCTL_PRSSI_R_SSI0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRSSI_R_SSI0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_PRSSI_SSI0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRSSI_SSI0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRSSI_SSI0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRSSI_R_SSI1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PRSSI_R_SSI1_BIT         (1u)
#define SYSCTL_PRSSI_R_SSI1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRSSI_R_SSI1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_PRSSI_SSI1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRSSI_SSI1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRSSI_SSI1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRSSI_R_SSI2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_PRSSI_R_SSI2_BIT         (2u)
#define SYSCTL_PRSSI_R_SSI2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRSSI_R_SSI2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_PRSSI_SSI2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRSSI_SSI2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRSSI_SSI2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRSSI_R_SSI3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_PRSSI_R_SSI3_BIT         (3u)
#define SYSCTL_PRSSI_R_SSI3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRSSI_R_SSI3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_PRSSI_SSI3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRSSI_SSI3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRSSI_SSI3_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PRSSI_SSI0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRSSI_OFFSET)*32u)+(SYSCTL_PRSSI_R_SSI0_BIT*4u))))
#define SYSCTL_BITBANDING_PRSSI_SSI1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRSSI_OFFSET)*32u)+(SYSCTL_PRSSI_R_SSI1_BIT*4u))))
#define SYSCTL_BITBANDING_PRSSI_SSI2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRSSI_OFFSET)*32u)+(SYSCTL_PRSSI_R_SSI2_BIT*4u))))
#define SYSCTL_BITBANDING_PRSSI_SSI3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRSSI_OFFSET)*32u)+(SYSCTL_PRSSI_R_SSI3_BIT*4u))))

/******************************************************************************************
************************************113 PRI2C *********************************************
******************************************************************************************/
#define SYSCTL_PRI2C            (((PERIPHERAL_I2C_TypeDef*)(SYSCTL_BASE+SYSCTL_PRI2C_OFFSET )))
#define SYSCTL_PRI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRI2C_OFFSET)))
#define SYSCTL_BITBANDING_PRI2C      (((BITBANDING_PERIPHERAL_I2C_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PRI2C_R_I2C0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PRI2C_R_I2C0_BIT         (0u)
#define SYSCTL_PRI2C_R_I2C0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRI2C_R_I2C0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_PRI2C_I2C0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRI2C_I2C0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRI2C_I2C0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRI2C_R_I2C1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PRI2C_R_I2C1_BIT         (1u)
#define SYSCTL_PRI2C_R_I2C1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRI2C_R_I2C1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_PRI2C_I2C1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRI2C_I2C1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRI2C_I2C1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRI2C_R_I2C2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_PRI2C_R_I2C2_BIT         (2u)
#define SYSCTL_PRI2C_R_I2C2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRI2C_R_I2C2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_PRI2C_I2C2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRI2C_I2C2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRI2C_I2C2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRI2C_R_I2C3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_PRI2C_R_I2C3_BIT         (3u)
#define SYSCTL_PRI2C_R_I2C3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRI2C_R_I2C3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_PRI2C_I2C3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRI2C_I2C3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRI2C_I2C3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRI2C_R_I2C4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_PRI2C_R_I2C4_BIT         (4u)
#define SYSCTL_PRI2C_R_I2C4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRI2C_R_I2C4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_PRI2C_I2C4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRI2C_I2C4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRI2C_I2C4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRI2C_R_I2C5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_PRI2C_R_I2C5_BIT         (5u)
#define SYSCTL_PRI2C_R_I2C5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRI2C_R_I2C5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_PRI2C_I2C5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRI2C_I2C5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRI2C_I2C5_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PRI2C_I2C0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32u)+(SYSCTL_PRI2C_R_I2C0_BIT*4u))))
#define SYSCTL_BITBANDING_PRI2C_I2C1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32u)+(SYSCTL_PRI2C_R_I2C1_BIT*4u))))
#define SYSCTL_BITBANDING_PRI2C_I2C2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32u)+(SYSCTL_PRI2C_R_I2C2_BIT*4u))))
#define SYSCTL_BITBANDING_PRI2C_I2C3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32u)+(SYSCTL_PRI2C_R_I2C3_BIT*4u))))
#define SYSCTL_BITBANDING_PRI2C_I2C4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32u)+(SYSCTL_PRI2C_R_I2C4_BIT*4u))))
#define SYSCTL_BITBANDING_PRI2C_I2C5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32u)+(SYSCTL_PRI2C_R_I2C5_BIT*4u))))

/******************************************************************************************
************************************114 PRUSB *********************************************
******************************************************************************************/
#define SYSCTL_PRUSB            (((PERIPHERAL_USB_TypeDef*)(SYSCTL_BASE+SYSCTL_PRUSB_OFFSET )))
#define SYSCTL_PRUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRUSB_OFFSET)))
#define SYSCTL_BITBANDING_PRUSB      (((BITBANDING_PERIPHERAL_USB_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRUSB_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PRUSB_R_USB_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PRUSB_R_USB_BIT         (0u)
#define SYSCTL_PRUSB_R_USB_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRUSB_R_USB_EN     ((uint32_t)0x00000001u)

#define SYSCTL_PRUSB_USB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRUSB_USB_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRUSB_USB_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PRUSB_USB    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRUSB_OFFSET)*32u)+(SYSCTL_PRUSB_R_USB_BIT*4u))))

/******************************************************************************************
************************************115 PRCAN *********************************************
******************************************************************************************/
#define SYSCTL_PRCAN            (((PERIPHERAL_CAN_TypeDef*)(SYSCTL_BASE+SYSCTL_PRCAN_OFFSET )))
#define SYSCTL_PRCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRCAN_OFFSET)))
#define SYSCTL_BITBANDING_PRCAN      (((BITBANDING_PERIPHERAL_CAN_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRCAN_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PRCAN_R_CAN0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PRCAN_R_CAN0_BIT         (0u)
#define SYSCTL_PRCAN_R_CAN0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRCAN_R_CAN0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_PRCAN_CAN0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRCAN_CAN0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRCAN_CAN0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRCAN_R_CAN1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PRCAN_R_CAN1_BIT         (1u)
#define SYSCTL_PRCAN_R_CAN1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRCAN_R_CAN1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_PRCAN_CAN1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRCAN_CAN1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRCAN_CAN1_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PRCAN_CAN0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRCAN_OFFSET)*32u)+(SYSCTL_PRCAN_R_CAN0_BIT*4u))))
#define SYSCTL_BITBANDING_PRCAN_CAN1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRCAN_OFFSET)*32u)+(SYSCTL_PRCAN_R_CAN1_BIT*4u))))

/******************************************************************************************
************************************116 PRADC *********************************************
******************************************************************************************/
#define SYSCTL_PRADC            (((PERIPHERAL_ADC_TypeDef*)(SYSCTL_BASE+SYSCTL_PRADC_OFFSET )))
#define SYSCTL_PRADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRADC_OFFSET)))
#define SYSCTL_BITBANDING_PRADC      (((BITBANDING_PERIPHERAL_ADC_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRADC_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PRADC_R_ADC0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PRADC_R_ADC0_BIT         (0u)
#define SYSCTL_PRADC_R_ADC0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRADC_R_ADC0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_PRADC_ADC0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRADC_ADC0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRADC_ADC0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRADC_R_ADC1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PRADC_R_ADC1_BIT         (1u)
#define SYSCTL_PRADC_R_ADC1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRADC_R_ADC1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_PRADC_ADC1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRADC_ADC1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRADC_ADC1_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PRADC_ADC0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRADC_OFFSET)*32u)+(SYSCTL_PRADC_R_ADC0_BIT*4u))))
#define SYSCTL_BITBANDING_PRADC_ADC1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRADC_OFFSET)*32u)+(SYSCTL_PRADC_R_ADC1_BIT*4u))))

/******************************************************************************************
************************************117 PRACMP *********************************************
******************************************************************************************/
#define SYSCTL_PRACMP            (((PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_PRACMP_OFFSET )))
#define SYSCTL_PRACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRACMP_OFFSET)))
#define SYSCTL_BITBANDING_PRACMP      (((BITBANDING_PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRACMP_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PRACMP_R_ACMP_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PRACMP_R_ACMP_BIT         (0u)
#define SYSCTL_PRACMP_R_ACMP_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRACMP_R_ACMP_EN     ((uint32_t)0x00000001u)

#define SYSCTL_PRACMP_ACMP_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRACMP_ACMP_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRACMP_ACMP_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PRACMP_ACMP    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRACMP_OFFSET)*32u)+(SYSCTL_PRACMP_R_ACMP_BIT*4u))))

/****************************************************************************************
************************************118 PRPWM *********************************************
******************************************************************************************/
#define SYSCTL_PRPWM            (((PERIPHERAL_PWM_TypeDef*)(SYSCTL_BASE+SYSCTL_PRPWM_OFFSET )))
#define SYSCTL_PRPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRPWM_OFFSET)))
#define SYSCTL_BITBANDING_PRPWM      (((BITBANDING_PERIPHERAL_PWM_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRPWM_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PRPWM_R_PWM0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PRPWM_R_PWM0_BIT         (0u)
#define SYSCTL_PRPWM_R_PWM0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRPWM_R_PWM0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_PRPWM_PWM0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRPWM_PWM0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRPWM_PWM0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRPWM_R_PWM1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PRPWM_R_PWM1_BIT         (1u)
#define SYSCTL_PRPWM_R_PWM1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRPWM_R_PWM1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_PRPWM_PWM1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRPWM_PWM1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRPWM_PWM1_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PRPWM_PWM0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRPWM_OFFSET)*32u)+(SYSCTL_PRPWM_R_PWM0_BIT*4u))))
#define SYSCTL_BITBANDING_PRPWM_PWM1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRPWM_OFFSET)*32u)+(SYSCTL_PRPWM_R_PWM1_BIT*4u))))

/******************************************************************************************
************************************119 PRQEI *********************************************
******************************************************************************************/
#define SYSCTL_PRQEI            (((PERIPHERAL_QEI_TypeDef*)(SYSCTL_BASE+SYSCTL_PRQEI_OFFSET )))
#define SYSCTL_PRQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRQEI_OFFSET)))
#define SYSCTL_BITBANDING_PRQEI      (((BITBANDING_PERIPHERAL_QEI_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRQEI_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PRQEI_R_QEI0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PRQEI_R_QEI0_BIT         (0u)
#define SYSCTL_PRQEI_R_QEI0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRQEI_R_QEI0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_PRQEI_QEI0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRQEI_QEI0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRQEI_QEI0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRQEI_R_QEI1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PRQEI_R_QEI1_BIT         (1u)
#define SYSCTL_PRQEI_R_QEI1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRQEI_R_QEI1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_PRQEI_QEI1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRQEI_QEI1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRQEI_QEI1_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PRQEI_QEI0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRQEI_OFFSET)*32u)+(SYSCTL_PRQEI_R_QEI0_BIT*4u))))
#define SYSCTL_BITBANDING_PRQEI_QEI1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRQEI_OFFSET)*32u)+(SYSCTL_PRQEI_R_QEI1_BIT*4u))))

/******************************************************************************************
************************************120 PREEPROM *********************************************
******************************************************************************************/
#define SYSCTL_PREEPROM            (((PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_PREEPROM_OFFSET )))
#define SYSCTL_PREEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PREEPROM_OFFSET)))
#define SYSCTL_BITBANDING_PREEPROM      (((BITBANDING_PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PREEPROM_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PREEPROM_R_EEPROM_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PREEPROM_R_EEPROM_BIT         (0u)
#define SYSCTL_PREEPROM_R_EEPROM_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PREEPROM_R_EEPROM_EN     ((uint32_t)0x00000001u)

#define SYSCTL_PREEPROM_EEPROM_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PREEPROM_EEPROM_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PREEPROM_EEPROM_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PREEPROM_EEPROM    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PREEPROM_OFFSET)*32u)+(SYSCTL_PREEPROM_R_EEPROM_BIT*4u))))


/**********************************************************************************
************************************121 PRWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_PRWTIMER            (((PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_PRWTIMER_OFFSET )))
#define SYSCTL_PRWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRWTIMER_OFFSET)))
#define SYSCTL_BITBANDING_PRWTIMER      (((BITBANDING_PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32u))))

/*--------*/
#define SYSCTL_PRWTIMER_R_WTIMER0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PRWTIMER_R_WTIMER0_BIT         (0u)
#define SYSCTL_PRWTIMER_R_WTIMER0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRWTIMER_R_WTIMER0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_PRWTIMER_WTIMER0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRWTIMER_WTIMER0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRWTIMER_WTIMER0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRWTIMER_R_WTIMER1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PRWTIMER_R_WTIMER1_BIT         (1u)
#define SYSCTL_PRWTIMER_R_WTIMER1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRWTIMER_R_WTIMER1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_PRWTIMER_WTIMER1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRWTIMER_WTIMER1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRWTIMER_WTIMER1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRWTIMER_R_WTIMER2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_PRWTIMER_R_WTIMER2_BIT         (2u)
#define SYSCTL_PRWTIMER_R_WTIMER2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRWTIMER_R_WTIMER2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_PRWTIMER_WTIMER2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRWTIMER_WTIMER2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRWTIMER_WTIMER2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRWTIMER_R_WTIMER3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_PRWTIMER_R_WTIMER3_BIT         (3u)
#define SYSCTL_PRWTIMER_R_WTIMER3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRWTIMER_R_WTIMER3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_PRWTIMER_WTIMER3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRWTIMER_WTIMER3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRWTIMER_WTIMER3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRWTIMER_R_WTIMER4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_PRWTIMER_R_WTIMER4_BIT         (4u)
#define SYSCTL_PRWTIMER_R_WTIMER4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRWTIMER_R_WTIMER4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_PRWTIMER_WTIMER4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRWTIMER_WTIMER4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRWTIMER_WTIMER4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PRWTIMER_R_WTIMER5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_PRWTIMER_R_WTIMER5_BIT         (5u)
#define SYSCTL_PRWTIMER_R_WTIMER5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_PRWTIMER_R_WTIMER5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_PRWTIMER_WTIMER5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PRWTIMER_WTIMER5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_PRWTIMER_WTIMER5_EN       ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_PRWTIMER_WTIMER0    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32u)+(SYSCTL_PRWTIMER_R_WTIMER0_BIT*4u))))
#define SYSCTL_BITBANDING_PRWTIMER_WTIMER1    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32u)+(SYSCTL_PRWTIMER_R_WTIMER1_BIT*4u))))
#define SYSCTL_BITBANDING_PRWTIMER_WTIMER2    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32u)+(SYSCTL_PRWTIMER_R_WTIMER2_BIT*4u))))
#define SYSCTL_BITBANDING_PRWTIMER_WTIMER3    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32u)+(SYSCTL_PRWTIMER_R_WTIMER3_BIT*4u))))
#define SYSCTL_BITBANDING_PRWTIMER_WTIMER4    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32u)+(SYSCTL_PRWTIMER_R_WTIMER4_BIT*4u))))
#define SYSCTL_BITBANDING_PRWTIMER_WTIMER5    (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32u)+(SYSCTL_PRWTIMER_R_WTIMER5_BIT*4u))))

/**********************************************************************************
************************************122 DC0 *********************************************
******************************************************************************************/
#define SYSCTL_DC0            (((DC0_TypeDef*)(SYSCTL_BASE+SYSCTL_DC0_OFFSET )))
#define SYSCTL_DC0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC0_OFFSET)))
#define SYSCTL_BITBANDING_DC0      (((BITBANDING_DC0_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DC0_OFFSET)*32u))))


/*----------*/
#define SYSCTL_DC0_R_FLASHSZ_MASK       (0x0000FFFFu)
#define SYSCTL_DC0_R_FLASHSZ_BIT        (0u)
#define SYSCTL_DC0_R_FLASHSZ_8K         (0x00000003u)
#define SYSCTL_DC0_R_FLASHSZ_16K        (0x00000007u)
#define SYSCTL_DC0_R_FLASHSZ_32K        (0x0000000Fu)
#define SYSCTL_DC0_R_FLASHSZ_64K        (0x0000001Fu)
#define SYSCTL_DC0_R_FLASHSZ_96K        (0x0000002Fu)
#define SYSCTL_DC0_R_FLASHSZ_128K       (0x0000003Fu)
#define SYSCTL_DC0_R_FLASHSZ_192K       (0x0000005Fu)
#define SYSCTL_DC0_R_FLASHSZ_256K       (0x0000007Fu)

#define SYSCTL_DC0_FLASHSZ_MASK       (0x0000FFFFu)
#define SYSCTL_DC0_FLASHSZ_8K         (0x00000003u)
#define SYSCTL_DC0_FLASHSZ_16K        (0x00000007u)
#define SYSCTL_DC0_FLASHSZ_32K        (0x0000000Fu)
#define SYSCTL_DC0_FLASHSZ_64K        (0x0000001Fu)
#define SYSCTL_DC0_FLASHSZ_96K        (0x0000002Fu)
#define SYSCTL_DC0_FLASHSZ_128K       (0x0000003Fu)
#define SYSCTL_DC0_FLASHSZ_192K       (0x0000005Fu)
#define SYSCTL_DC0_FLASHSZ_256K       (0x0000007Fu)
/*----------*/

/*----------*/
#define SYSCTL_DC0_R_SRAMSZ_MASK       (0xFFFF0000u)
#define SYSCTL_DC0_R_SRAMSZ_BIT        (16u)
#define SYSCTL_DC0_R_SRAMSZ_2K         (0x00070000u)
#define SYSCTL_DC0_R_SRAMSZ_4K         (0x000F0000u)
#define SYSCTL_DC0_R_SRAMSZ_6K         (0x00170000u)
#define SYSCTL_DC0_R_SRAMSZ_8K         (0x001F0000u)
#define SYSCTL_DC0_R_SRAMSZ_12K        (0x002F0000u)
#define SYSCTL_DC0_R_SRAMSZ_16K        (0x003F0000u)
#define SYSCTL_DC0_R_SRAMSZ_20K        (0x004F0000u)
#define SYSCTL_DC0_R_SRAMSZ_24K        (0x005F0000u)
#define SYSCTL_DC0_R_SRAMSZ_32K        (0x007F0000u)

#define SYSCTL_DC0_SRAMSZ_MASK       (0x0000FFFFu)
#define SYSCTL_DC0_SRAMSZ_2K         (0x00000007u)
#define SYSCTL_DC0_SRAMSZ_4K         (0x0000000Fu)
#define SYSCTL_DC0_SRAMSZ_6K         (0x00000017u)
#define SYSCTL_DC0_SRAMSZ_8K         (0x0000001Fu)
#define SYSCTL_DC0_SRAMSZ_12K        (0x0000002Fu)
#define SYSCTL_DC0_SRAMSZ_16K        (0x0000003Fu)
#define SYSCTL_DC0_SRAMSZ_20K        (0x0000004Fu)
#define SYSCTL_DC0_SRAMSZ_24K        (0x0000005Fu)
#define SYSCTL_DC0_SRAMSZ_32K        (0x0000007Fu)
/*----------*/

/**********************************************************************************
************************************123 DC1 *********************************************
******************************************************************************************/
#define SYSCTL_DC1            (((DC1_TypeDef*)(SYSCTL_BASE+SYSCTL_DC1_OFFSET )))
#define SYSCTL_DC1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC1_OFFSET)))
#define SYSCTL_BITBANDING_DC1      (((BITBANDING_DC1_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32u))))


/*----------*/
#define SYSCTL_DC1_R_DCJTAG_MASK       (0x00000001u)
#define SYSCTL_DC1_R_DCJTAG_BIT        (0u)
#define SYSCTL_DC1_R_DCJTAG_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_R_DCJTAG_PRESENT    (0x00000001u)

#define SYSCTL_DC1_DCJTAG_MASK       (0x00000001u)
#define SYSCTL_DC1_DCJTAG_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_DCJTAG_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCSWD_MASK       (0x00000002u)
#define SYSCTL_DC1_R_DCSWD_BIT        (1u)
#define SYSCTL_DC1_R_DCSWD_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_R_DCSWD_PRESENT    (0x00000002u)

#define SYSCTL_DC1_DCSWD_MASK       (0x00000001u)
#define SYSCTL_DC1_DCSWD_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_DCSWD_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCSWO_MASK       (0x00000004u)
#define SYSCTL_DC1_R_DCSWO_BIT        (2u)
#define SYSCTL_DC1_R_DCSWO_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_R_DCSWO_PRESENT    (0x00000004u)

#define SYSCTL_DC1_DCSWO_MASK       (0x00000001u)
#define SYSCTL_DC1_DCSWO_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_DCSWO_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCWDT0_MASK       (0x00000008u)
#define SYSCTL_DC1_R_DCWDT0_BIT        (3u)
#define SYSCTL_DC1_R_DCWDT0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_R_DCWDT0_PRESENT    (0x00000008u)

#define SYSCTL_DC1_DCWDT0_MASK       (0x00000001u)
#define SYSCTL_DC1_DCWDT0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_DCWDT0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCPLL_MASK       (0x00000010u)
#define SYSCTL_DC1_R_DCPLL_BIT        (4u)
#define SYSCTL_DC1_R_DCPLL_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_R_DCPLL_PRESENT    (0x00000010u)

#define SYSCTL_DC1_DCPLL_MASK       (0x00000001u)
#define SYSCTL_DC1_DCPLL_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_DCPLL_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCTEMPSNS_MASK       (0x00000020u)
#define SYSCTL_DC1_R_DCTEMPSNS_BIT        (5u)
#define SYSCTL_DC1_R_DCTEMPSNS_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_R_DCTEMPSNS_PRESENT    (0x00000010u)

#define SYSCTL_DC1_DCTEMPSNS_MASK       (0x00000001u)
#define SYSCTL_DC1_DCTEMPSNS_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_DCTEMPSNS_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCHIB_MASK       (0x00000040u)
#define SYSCTL_DC1_R_DCHIB_BIT        (6u)
#define SYSCTL_DC1_R_DCHIB_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_R_DCHIB_PRESENT    (0x00000040u)

#define SYSCTL_DC1_DCHIB_MASK       (0x00000001u)
#define SYSCTL_DC1_DCHIB_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_DCHIB_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCMPU_MASK       (0x00000080u)
#define SYSCTL_DC1_R_DCMPU_BIT        (7u)
#define SYSCTL_DC1_R_DCMPU_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_R_DCMPU_PRESENT    (0x00000080u)

#define SYSCTL_DC1_DCMPU_MASK       (0x00000001u)
#define SYSCTL_DC1_DCMPU_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_DCMPU_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCMAXADC0SPD_MASK       (0x00000300u)
#define SYSCTL_DC1_R_DCMAXADC0SPD_BIT        (8u)
#define SYSCTL_DC1_R_DCMAXADC0SPD_125K       (0x00000000u)
#define SYSCTL_DC1_R_DCMAXADC0SPD_250K       (0x00000100u)
#define SYSCTL_DC1_R_DCMAXADC0SPD_500K       (0x00000200u)
#define SYSCTL_DC1_R_DCMAXADC0SPD_1M         (0x00000300u)

#define SYSCTL_DC1_DCMAXADC0SPD_MASK       (0x00000003u)
#define SYSCTL_DC1_DCMAXADC0SPD_125K       (0x00000000u)
#define SYSCTL_DC1_DCMAXADC0SPD_250K       (0x00000001u)
#define SYSCTL_DC1_DCMAXADC0SPD_500K       (0x00000002u)
#define SYSCTL_DC1_DCMAXADC0SPD_1M         (0x00000003u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCMAXADC1SPD_MASK       (0x00000C00u)
#define SYSCTL_DC1_R_DCMAXADC1SPD_BIT        (10u)
#define SYSCTL_DC1_R_DCMAXADC1SPD_125K       (0x00000000u)
#define SYSCTL_DC1_R_DCMAXADC1SPD_250K       (0x00000400u)
#define SYSCTL_DC1_R_DCMAXADC1SPD_500K       (0x00000600u)
#define SYSCTL_DC1_R_DCMAXADC1SPD_1M         (0x00000800u)

#define SYSCTL_DC1_DCMAXADC1SPD_MASK       (0x00000003u)
#define SYSCTL_DC1_DCMAXADC1SPD_125K       (0x00000000u)
#define SYSCTL_DC1_DCMAXADC1SPD_250K       (0x00000001u)
#define SYSCTL_DC1_DCMAXADC1SPD_500K       (0x00000002u)
#define SYSCTL_DC1_DCMAXADC1SPD_1M         (0x00000003u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCMINSYSDIV_MASK       (0x0000F000u)
#define SYSCTL_DC1_R_DCMINSYSDIV_BIT        (12u)
#define SYSCTL_DC1_R_DCMINSYSDIV_PLL2_5     (0x00002000u)
#define SYSCTL_DC1_R_DCMINSYSDIV_PLL4       (0x00003000u)
#define SYSCTL_DC1_R_DCMINSYSDIV_PLL5       (0x00004000u)
#define SYSCTL_DC1_R_DCMINSYSDIV_PLL8       (0x00007000u)
#define SYSCTL_DC1_R_DCMINSYSDIV_PLL10      (0x00009000u)

#define SYSCTL_DC1_DCMINSYSDIV_MASK       (0x0000000Fu)
#define SYSCTL_DC1_DCMINSYSDIV_PLL2_5     (0x00000002u)
#define SYSCTL_DC1_DCMINSYSDIV_PLL4       (0x00000003u)
#define SYSCTL_DC1_DCMINSYSDIV_PLL5       (0x00000004u)
#define SYSCTL_DC1_DCMINSYSDIV_PLL8       (0x00000007u)
#define SYSCTL_DC1_DCMINSYSDIV_PLL10      (0x00000009u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCADC0_MASK       (0x00010000u)
#define SYSCTL_DC1_R_DCADC0_BIT        (16u)
#define SYSCTL_DC1_R_DCADC0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_R_DCADC0_PRESENT    (0x00010000u)

#define SYSCTL_DC1_DCADC0_MASK       (0x00000001u)
#define SYSCTL_DC1_DCADC0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_DCADC0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCADC1_MASK       (0x00020000u)
#define SYSCTL_DC1_R_DCADC1_BIT        (17u)
#define SYSCTL_DC1_R_DCADC1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_R_DCADC1_PRESENT    (0x00020000u)

#define SYSCTL_DC1_DCADC1_MASK       (0x00000001u)
#define SYSCTL_DC1_DCADC1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_DCADC1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCPWM0_MASK       (0x00100000u)
#define SYSCTL_DC1_R_DCPWM0_BIT        (20u)
#define SYSCTL_DC1_R_DCPWM0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_R_DCPWM0_PRESENT    (0x00100000u)

#define SYSCTL_DC1_DCPWM0_MASK       (0x00000001u)
#define SYSCTL_DC1_DCPWM0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_DCPWM0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCPWM1_MASK       (0x00200000u)
#define SYSCTL_DC1_R_DCPWM1_BIT        (21u)
#define SYSCTL_DC1_R_DCPWM1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_R_DCPWM1_PRESENT    (0x00200000u)

#define SYSCTL_DC1_DCPWM1_MASK       (0x00000001u)
#define SYSCTL_DC1_DCPWM1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_DCPWM1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCCAN0_MASK       (0x01000000u)
#define SYSCTL_DC1_R_DCCAN0_BIT        (24u)
#define SYSCTL_DC1_R_DCCAN0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_R_DCCAN0_PRESENT    (0x01000000u)

#define SYSCTL_DC1_DCCAN0_MASK       (0x00000001u)
#define SYSCTL_DC1_DCCAN0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_DCCAN0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCCAN1_MASK       (0x02000000u)
#define SYSCTL_DC1_R_DCCAN1_BIT        (25u)
#define SYSCTL_DC1_R_DCCAN1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_R_DCCAN1_PRESENT    (0x02000000u)

#define SYSCTL_DC1_DCCAN1_MASK       (0x00000001u)
#define SYSCTL_DC1_DCCAN1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_DCCAN1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCWDT1_MASK       (0x10000000u)
#define SYSCTL_DC1_R_DCWDT1_BIT        (28u)
#define SYSCTL_DC1_R_DCWDT1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_R_DCWDT1_PRESENT    (0x10000000u)

#define SYSCTL_DC1_DCWDT1_MASK       (0x00000001u)
#define SYSCTL_DC1_DCWDT1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC1_DCWDT1_PRESENT    (0x00000001u)
/*----------*/


#define SYSCTL_BITBANDING_DC1_DCJTAG      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32u)+(0*4u))))
#define SYSCTL_BITBANDING_DC1_DCSWD       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32u)+(1*4u))))
#define SYSCTL_BITBANDING_DC1_DCSWO       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32u)+(2*4u))))
#define SYSCTL_BITBANDING_DC1_DCWDT0      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32u)+(3*4u))))
#define SYSCTL_BITBANDING_DC1_DCPLL       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32u)+(4*4u))))
#define SYSCTL_BITBANDING_DC1_DCTEMPSNS   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32u)+(5*4u))))
#define SYSCTL_BITBANDING_DC1_DCHIB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32u)+(6*4u))))
#define SYSCTL_BITBANDING_DC1_DCMPU       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32u)+(7*4u))))
#define SYSCTL_BITBANDING_DC1_DCADC0      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32u)+(16*4u))))
#define SYSCTL_BITBANDING_DC1_DCADC1      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32u)+(17*4u))))
#define SYSCTL_BITBANDING_DC1_DCPWM0      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32u)+(20*4u))))
#define SYSCTL_BITBANDING_DC1_DCPWM1      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32u)+(21*4u))))
#define SYSCTL_BITBANDING_DC1_DCCAN0      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32u)+(24*4u))))
#define SYSCTL_BITBANDING_DC1_DCCAN1      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32u)+(25*4u))))
#define SYSCTL_BITBANDING_DC1_DCWDT1      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32u)+(28*4u))))

/**********************************************************************************
************************************124 DC2 *********************************************
******************************************************************************************/
#define SYSCTL_DC2            (((DC2_TypeDef*)(SYSCTL_BASE+SYSCTL_DC2_OFFSET )))
#define SYSCTL_DC2_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC2_OFFSET)))
#define SYSCTL_BITBANDING_DC2      (((BITBANDING_DC2_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u))))



/*----------*/
#define SYSCTL_DC2_R_DCUART0_MASK       (0x00000001u)
#define SYSCTL_DC2_R_DCUART0_BIT        (0u)
#define SYSCTL_DC2_R_DCUART0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCUART0_PRESENT    (0x00000001u)

#define SYSCTL_DC2_DCUART0_MASK       (0x00000001u)
#define SYSCTL_DC2_DCUART0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCUART0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCUART1_MASK       (0x00000002u)
#define SYSCTL_DC2_R_DCUART1_BIT        (1u)
#define SYSCTL_DC2_R_DCUART1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCUART1_PRESENT    (0x00000002u)

#define SYSCTL_DC2_DCUART1_MASK       (0x00000001u)
#define SYSCTL_DC2_DCUART1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCUART1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCUART2_MASK       (0x00000004u)
#define SYSCTL_DC2_R_DCUART2_BIT        (2u)
#define SYSCTL_DC2_R_DCUART2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCUART2_PRESENT    (0x00000004u)

#define SYSCTL_DC2_DCUART2_MASK       (0x00000001u)
#define SYSCTL_DC2_DCUART2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCUART2_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCSSI0_MASK       (0x00000010u)
#define SYSCTL_DC2_R_DCSSI0_BIT        (4u)
#define SYSCTL_DC2_R_DCSSI0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCSSI0_PRESENT    (0x00000010u)

#define SYSCTL_DC2_DCSSI0_MASK       (0x00000001u)
#define SYSCTL_DC2_DCSSI0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCSSI0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCSSI1_MASK       (0x00000020u)
#define SYSCTL_DC2_R_DCSSI1_BIT        (5u)
#define SYSCTL_DC2_R_DCSSI1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCSSI1_PRESENT    (0x00000010u)

#define SYSCTL_DC2_DCSSI1_MASK       (0x00000001u)
#define SYSCTL_DC2_DCSSI1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCSSI1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCQEI0_MASK       (0x00000100u)
#define SYSCTL_DC2_R_DCQEI0_BIT        (8u)
#define SYSCTL_DC2_R_DCQEI0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCQEI0_PRESENT    (0x00000100u)

#define SYSCTL_DC2_DCQEI0_MASK       (0x00000001u)
#define SYSCTL_DC2_DCQEI0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCQEI0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCQEI1_MASK       (0x00000200u)
#define SYSCTL_DC2_R_DCQEI1_BIT        (9u)
#define SYSCTL_DC2_R_DCQEI1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCQEI1_PRESENT    (0x00000200u)

#define SYSCTL_DC2_DCQEI1_MASK       (0x00000001u)
#define SYSCTL_DC2_DCQEI1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCQEI1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCI2C0_MASK       (0x00001000u)
#define SYSCTL_DC2_R_DCI2C0_BIT        (12u)
#define SYSCTL_DC2_R_DCI2C0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCI2C0_PRESENT    (0x00001000u)

#define SYSCTL_DC2_DCI2C0_MASK       (0x00000001u)
#define SYSCTL_DC2_DCI2C0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCI2C0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCI2C0HS_MASK       (0x00002000u)
#define SYSCTL_DC2_R_DCI2C0HS_BIT        (13u)
#define SYSCTL_DC2_R_DCI2C0HS_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCI2C0HS_PRESENT    (0x00002000u)

#define SYSCTL_DC2_DCI2C0HS_MASK       (0x00000001u)
#define SYSCTL_DC2_DCI2C0HS_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCI2C0HS_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCI2C1_MASK       (0x00004000u)
#define SYSCTL_DC2_R_DCI2C1_BIT        (14u)
#define SYSCTL_DC2_R_DCI2C1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCI2C1_PRESENT    (0x00004000u)

#define SYSCTL_DC2_DCI2C1_MASK       (0x00000001u)
#define SYSCTL_DC2_DCI2C1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCI2C1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCI2C1HS_MASK       (0x00008000u)
#define SYSCTL_DC2_R_DCI2C1HS_BIT        (15u)
#define SYSCTL_DC2_R_DCI2C1HS_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCI2C1HS_PRESENT    (0x00008000u)

#define SYSCTL_DC2_DCI2C1HS_MASK       (0x00000001u)
#define SYSCTL_DC2_DCI2C1HS_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCI2C1HS_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCTIMER0_MASK       (0x00010000u)
#define SYSCTL_DC2_R_DCTIMER0_BIT        (16u)
#define SYSCTL_DC2_R_DCTIMER0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCTIMER0_PRESENT    (0x00010000u)

#define SYSCTL_DC2_DCTIMER0_MASK       (0x00000001u)
#define SYSCTL_DC2_DCTIMER0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCTIMER0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCTIMER1_MASK       (0x00020000u)
#define SYSCTL_DC2_R_DCTIMER1_BIT        (17u)
#define SYSCTL_DC2_R_DCTIMER1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCTIMER1_PRESENT    (0x00020000u)

#define SYSCTL_DC2_DCTIMER1_MASK       (0x00000001u)
#define SYSCTL_DC2_DCTIMER1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCTIMER1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCTIMER2_MASK       (0x00040000u)
#define SYSCTL_DC2_R_DCTIMER2_BIT        (18u)
#define SYSCTL_DC2_R_DCTIMER2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCTIMER2_PRESENT    (0x00040000u)

#define SYSCTL_DC2_DCTIMER2_MASK       (0x00000001u)
#define SYSCTL_DC2_DCTIMER2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCTIMER2_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCTIMER3_MASK       (0x00080000u)
#define SYSCTL_DC2_R_DCTIMER3_BIT        (19u)
#define SYSCTL_DC2_R_DCTIMER3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCTIMER3_PRESENT    (0x00080000u)

#define SYSCTL_DC2_DCTIMER3_MASK       (0x00000001u)
#define SYSCTL_DC2_DCTIMER3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCTIMER3_PRESENT    (0x00000001u)
/*----------*/


/*----------*/
#define SYSCTL_DC2_R_DCCOMP0_MASK       (0x01000000u)
#define SYSCTL_DC2_R_DCCOMP0_BIT        (24u)
#define SYSCTL_DC2_R_DCCOMP0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCCOMP0_PRESENT    (0x01000000u)

#define SYSCTL_DC2_DCCOMP0_MASK       (0x00000001u)
#define SYSCTL_DC2_DCCOMP0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCCOMP0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCCOMP1_MASK       (0x02000000u)
#define SYSCTL_DC2_R_DCCOMP1_BIT        (25u)
#define SYSCTL_DC2_R_DCCOMP1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCCOMP1_PRESENT    (0x02000000u)

#define SYSCTL_DC2_DCCOMP1_MASK       (0x00000001u)
#define SYSCTL_DC2_DCCOMP1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCCOMP1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCCOMP2_MASK       (0x04000000u)
#define SYSCTL_DC2_R_DCCOMP2_BIT        (26u)
#define SYSCTL_DC2_R_DCCOMP2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCCOMP2_PRESENT    (0x04000000u)

#define SYSCTL_DC2_DCCOMP2_MASK       (0x00000001u)
#define SYSCTL_DC2_DCCOMP2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCCOMP2_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCI2S0_MASK       (0x10000000u)
#define SYSCTL_DC2_R_DCI2S0_BIT        (28u)
#define SYSCTL_DC2_R_DCI2S0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCI2S0_PRESENT    (0x10000000u)

#define SYSCTL_DC2_DCI2S0_MASK       (0x00000001u)
#define SYSCTL_DC2_DCI2S0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCI2S0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCEPI0_MASK       (0x40000000u)
#define SYSCTL_DC2_R_DCEPI0_BIT        (30u)
#define SYSCTL_DC2_R_DCEPI0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_R_DCEPI0_PRESENT    (0x40000000u)

#define SYSCTL_DC2_DCEPI0_MASK       (0x00000001u)
#define SYSCTL_DC2_DCEPI0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC2_DCEPI0_PRESENT    (0x00000001u)
/*----------*/

#define SYSCTL_BITBANDING_DC2_DCUART0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(0*4u))))
#define SYSCTL_BITBANDING_DC2_DCUART1       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(1*4u))))
#define SYSCTL_BITBANDING_DC2_DCUART2       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(2*4u))))
#define SYSCTL_BITBANDING_DC2_DCSSI0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(4*4u))))
#define SYSCTL_BITBANDING_DC2_DCSSI1        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(5*4u))))
#define SYSCTL_BITBANDING_DC2_DCQEI0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(8*4u))))
#define SYSCTL_BITBANDING_DC2_DCQEI1        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(9*4u))))
#define SYSCTL_BITBANDING_DC2_DCI2C0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(12*4u))))
#define SYSCTL_BITBANDING_DC2_DCI2C0HS      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(13*4u))))
#define SYSCTL_BITBANDING_DC2_DCI2C1        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(14*4u))))
#define SYSCTL_BITBANDING_DC2_DCI2C1HS      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(15*4u))))
#define SYSCTL_BITBANDING_DC2_DCTIMER0      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(16*4u))))
#define SYSCTL_BITBANDING_DC2_DCTIMER1      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(17*4u))))
#define SYSCTL_BITBANDING_DC2_DCTIMER2      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(18*4u))))
#define SYSCTL_BITBANDING_DC2_DCTIMER3      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(19*4u))))
#define SYSCTL_BITBANDING_DC2_DCCOMP0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(24*4u))))
#define SYSCTL_BITBANDING_DC2_DCCOMP1       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(25*4u))))
#define SYSCTL_BITBANDING_DC2_DCCOMP2       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(26*4u))))
#define SYSCTL_BITBANDING_DC2_DCI2S0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(28*4u))))
#define SYSCTL_BITBANDING_DC2_DCEPI0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32u)+(29*4u))))

/**********************************************************************************
************************************125 DC3 *********************************************
******************************************************************************************/
#define SYSCTL_DC3            (((DC3_TypeDef*)(SYSCTL_BASE+SYSCTL_DC3_OFFSET )))
#define SYSCTL_DC3_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC3_OFFSET)))
#define SYSCTL_BITBANDING_DC3      (((BITBANDING_DC3_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u))))



/*----------*/
#define SYSCTL_DC3_R_DCPWM0_MASK       (0x00000001u)
#define SYSCTL_DC3_R_DCPWM0_BIT        (0u)
#define SYSCTL_DC3_R_DCPWM0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCPWM0_PRESENT    (0x00000001u)

#define SYSCTL_DC3_DCPWM0_MASK       (0x00000001u)
#define SYSCTL_DC3_DCPWM0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCPWM0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCPWM1_MASK       (0x00000002u)
#define SYSCTL_DC3_R_DCPWM1_BIT        (1u)
#define SYSCTL_DC3_R_DCPWM1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCPWM1_PRESENT    (0x00000002u)

#define SYSCTL_DC3_DCPWM1_MASK       (0x00000001u)
#define SYSCTL_DC3_DCPWM1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCPWM1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCPWM2_MASK       (0x00000004u)
#define SYSCTL_DC3_R_DCPWM2_BIT        (2u)
#define SYSCTL_DC3_R_DCPWM2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCPWM2_PRESENT    (0x00000004u)

#define SYSCTL_DC3_DCPWM2_MASK       (0x00000001u)
#define SYSCTL_DC3_DCPWM2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCPWM2_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCPWM3_MASK       (0x00000008u)
#define SYSCTL_DC3_R_DCPWM3_BIT        (3u)
#define SYSCTL_DC3_R_DCPWM3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCPWM3_PRESENT    (0x00000008u)

#define SYSCTL_DC3_DCPWM3_MASK       (0x00000001u)
#define SYSCTL_DC3_DCPWM3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCPWM3_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCPWM4_MASK       (0x00000010u)
#define SYSCTL_DC3_R_DCPWM4_BIT        (4u)
#define SYSCTL_DC3_R_DCPWM4_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCPWM4_PRESENT    (0x00000010u)

#define SYSCTL_DC3_DCPWM4_MASK       (0x00000001u)
#define SYSCTL_DC3_DCPWM4_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCPWM4_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCPWM5_MASK       (0x00000020u)
#define SYSCTL_DC3_R_DCPWM5_BIT        (5u)
#define SYSCTL_DC3_R_DCPWM5_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCPWM5_PRESENT    (0x00000020u)

#define SYSCTL_DC3_DCPWM5_MASK       (0x00000001u)
#define SYSCTL_DC3_DCPWM5_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCPWM5_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCC0MINUS_MASK       (0x00000040u)
#define SYSCTL_DC3_R_DCC0MINUS_BIT        (6u)
#define SYSCTL_DC3_R_DCC0MINUS_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCC0MINUS_PRESENT    (0x00000040u)

#define SYSCTL_DC3_DCC0MINUS_MASK       (0x00000001u)
#define SYSCTL_DC3_DCC0MINUS_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCC0MINUS_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCC0PLUS_MASK       (0x00000080u)
#define SYSCTL_DC3_R_DCC0PLUS_BIT        (7u)
#define SYSCTL_DC3_R_DCC0PLUS_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCC0PLUS_PRESENT    (0x00000080u)

#define SYSCTL_DC3_DCC0PLUS_MASK       (0x00000001u)
#define SYSCTL_DC3_DCC0PLUS_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCC0PLUS_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCC0O_MASK       (0x00000100u)
#define SYSCTL_DC3_R_DCC0O_BIT        (8u)
#define SYSCTL_DC3_R_DCC0O_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCC0O_PRESENT    (0x00000100u)

#define SYSCTL_DC3_DCC0O_MASK       (0x00000001u)
#define SYSCTL_DC3_DCC0O_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCC0O_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCC1MINUS_MASK       (0x00000200u)
#define SYSCTL_DC3_R_DCC1MINUS_BIT        (9u)
#define SYSCTL_DC3_R_DCC1MINUS_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCC1MINUS_PRESENT    (0x00000200u)

#define SYSCTL_DC3_DCC1MINUS_MASK       (0x00000001u)
#define SYSCTL_DC3_DCC1MINUS_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCC1MINUS_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCC1PLUS_MASK       (0x00000400u)
#define SYSCTL_DC3_R_DCC1PLUS_BIT        (10u)
#define SYSCTL_DC3_R_DCC1PLUS_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCC1PLUS_PRESENT    (0x00000400u)

#define SYSCTL_DC3_DCC1PLUS_MASK       (0x00000001u)
#define SYSCTL_DC3_DCC1PLUS_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCC1PLUS_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCC1O_MASK       (0x00000800u)
#define SYSCTL_DC3_R_DCC1O_BIT        (11u)
#define SYSCTL_DC3_R_DCC1O_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCC1O_PRESENT    (0x00000800u)

#define SYSCTL_DC3_DCC1O_MASK       (0x00000001u)
#define SYSCTL_DC3_DCC1O_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCC1O_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCC2MINUS_MASK       (0x00001000u)
#define SYSCTL_DC3_R_DCC2MINUS_BIT        (12u)
#define SYSCTL_DC3_R_DCC2MINUS_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCC2MINUS_PRESENT    (0x00001000u)

#define SYSCTL_DC3_DCC2MINUS_MASK       (0x00000001u)
#define SYSCTL_DC3_DCC2MINUS_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCC2MINUS_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCC2PLUS_MASK       (0x00002000u)
#define SYSCTL_DC3_R_DCC2PLUS_BIT        (13u)
#define SYSCTL_DC3_R_DCC2PLUS_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCC2PLUS_PRESENT    (0x00002000u)

#define SYSCTL_DC3_DCC2PLUS_MASK       (0x00000001u)
#define SYSCTL_DC3_DCC2PLUS_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCC2PLUS_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCC2O_MASK       (0x00004000u)
#define SYSCTL_DC3_R_DCC2O_BIT        (14u)
#define SYSCTL_DC3_R_DCC2O_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCC2O_PRESENT    (0x00004000u)

#define SYSCTL_DC3_DCC2O_MASK       (0x00000001u)
#define SYSCTL_DC3_DCC2O_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCC2O_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCPWMFAULT_MASK       (0x00008000u)
#define SYSCTL_DC3_R_DCPWMFAULT_BIT        (15u)
#define SYSCTL_DC3_R_DCPWMFAULT_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCPWMFAULT_PRESENT    (0x00008000u)

#define SYSCTL_DC3_DCPWMFAULT_MASK       (0x00000001u)
#define SYSCTL_DC3_DCPWMFAULT_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCPWMFAULT_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCADC0AIN0_MASK       (0x00010000u)
#define SYSCTL_DC3_R_DCADC0AIN0_BIT        (16u)
#define SYSCTL_DC3_R_DCADC0AIN0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCADC0AIN0_PRESENT    (0x00010000u)

#define SYSCTL_DC3_DCADC0AIN0_MASK       (0x00000001u)
#define SYSCTL_DC3_DCADC0AIN0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCADC0AIN0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCADC0AIN1_MASK       (0x00020000u)
#define SYSCTL_DC3_R_DCADC0AIN1_BIT        (17u)
#define SYSCTL_DC3_R_DCADC0AIN1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCADC0AIN1_PRESENT    (0x00020000u)

#define SYSCTL_DC3_DCADC0AIN1_MASK       (0x00000001u)
#define SYSCTL_DC3_DCADC0AIN1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCADC0AIN1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCADC0AIN2_MASK       (0x00040000u)
#define SYSCTL_DC3_R_DCADC0AIN2_BIT        (18u)
#define SYSCTL_DC3_R_DCADC0AIN2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCADC0AIN2_PRESENT    (0x00040000u)

#define SYSCTL_DC3_DCADC0AIN2_MASK       (0x00000001u)
#define SYSCTL_DC3_DCADC0AIN2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCADC0AIN2_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCADC0AIN3_MASK       (0x00080000u)
#define SYSCTL_DC3_R_DCADC0AIN3_BIT        (19u)
#define SYSCTL_DC3_R_DCADC0AIN3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCADC0AIN3_PRESENT    (0x00080000u)

#define SYSCTL_DC3_DCADC0AIN3_MASK       (0x00000001u)
#define SYSCTL_DC3_DCADC0AIN3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCADC0AIN3_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCADC0AIN4_MASK       (0x00100000u)
#define SYSCTL_DC3_R_DCADC0AIN4_BIT        (20u)
#define SYSCTL_DC3_R_DCADC0AIN4_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCADC0AIN4_PRESENT    (0x00100000u)

#define SYSCTL_DC3_DCADC0AIN4_MASK       (0x00000001u)
#define SYSCTL_DC3_DCADC0AIN4_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCADC0AIN4_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCADC0AIN5_MASK       (0x00200000u)
#define SYSCTL_DC3_R_DCADC0AIN5_BIT        (21u)
#define SYSCTL_DC3_R_DCADC0AIN5_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCADC0AIN5_PRESENT    (0x00200000u)

#define SYSCTL_DC3_DCADC0AIN5_MASK       (0x00000001u)
#define SYSCTL_DC3_DCADC0AIN5_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCADC0AIN5_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCADC0AIN6_MASK       (0x00400000u)
#define SYSCTL_DC3_R_DCADC0AIN6_BIT        (22u)
#define SYSCTL_DC3_R_DCADC0AIN6_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCADC0AIN6_PRESENT    (0x00400000u)

#define SYSCTL_DC3_DCADC0AIN6_MASK       (0x00000001u)
#define SYSCTL_DC3_DCADC0AIN6_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCADC0AIN6_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCADC0AIN7_MASK       (0x00800000u)
#define SYSCTL_DC3_R_DCADC0AIN7_BIT        (23u)
#define SYSCTL_DC3_R_DCADC0AIN7_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCADC0AIN7_PRESENT    (0x00800000u)

#define SYSCTL_DC3_DCADC0AIN7_MASK       (0x00000001u)
#define SYSCTL_DC3_DCADC0AIN7_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCADC0AIN7_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCCCP0_MASK       (0x01000000u)
#define SYSCTL_DC3_R_DCCCP0_BIT        (24u)
#define SYSCTL_DC3_R_DCCCP0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCCCP0_PRESENT    (0x01000000u)

#define SYSCTL_DC3_DCCCP0_MASK       (0x00000001u)
#define SYSCTL_DC3_DCCCP0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCCCP0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCCCP1_MASK       (0x02000000u)
#define SYSCTL_DC3_R_DCCCP1_BIT        (25u)
#define SYSCTL_DC3_R_DCCCP1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCCCP1_PRESENT    (0x02000000u)

#define SYSCTL_DC3_DCCCP1_MASK       (0x00000001u)
#define SYSCTL_DC3_DCCCP1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCCCP1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCCCP2_MASK       (0x04000000u)
#define SYSCTL_DC3_R_DCCCP2_BIT        (26u)
#define SYSCTL_DC3_R_DCCCP2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCCCP2_PRESENT    (0x04000000u)

#define SYSCTL_DC3_DCCCP2_MASK       (0x00000001u)
#define SYSCTL_DC3_DCCCP2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCCCP2_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCCCP3_MASK       (0x08000000u)
#define SYSCTL_DC3_R_DCCCP3_BIT        (27u)
#define SYSCTL_DC3_R_DCCCP3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCCCP3_PRESENT    (0x08000000u)

#define SYSCTL_DC3_DCCCP3_MASK       (0x00000001u)
#define SYSCTL_DC3_DCCCP3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCCCP3_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCCCP4_MASK       (0x10000000u)
#define SYSCTL_DC3_R_DCCCP4_BIT        (28u)
#define SYSCTL_DC3_R_DCCCP4_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCCCP4_PRESENT    (0x10000000u)

#define SYSCTL_DC3_DCCCP4_MASK       (0x00000001u)
#define SYSCTL_DC3_DCCCP4_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCCCP4_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCCCP5_MASK       (0x20000000u)
#define SYSCTL_DC3_R_DCCCP5_BIT        (29u)
#define SYSCTL_DC3_R_DCCCP5_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DCCCP5_PRESENT    (0x20000000u)

#define SYSCTL_DC3_DCCCP5_MASK       (0x00000001u)
#define SYSCTL_DC3_DCCCP5_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DCCCP5_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DC32KHZ_MASK       (0x80000000u)
#define SYSCTL_DC3_R_DC32KHZ_BIT        (31u)
#define SYSCTL_DC3_R_DC32KHZ_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_R_DC32KHZ_PRESENT    (0x80000000u)

#define SYSCTL_DC3_DC32KHZ_MASK       (0x00000001u)
#define SYSCTL_DC3_DC32KHZ_NOPRESENT  (0x00000000u)
#define SYSCTL_DC3_DC32KHZ_PRESENT    (0x00000001u)
/*----------*/

#define SYSCTL_BITBANDING_DC3_DCPWM0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(0*4u))))
#define SYSCTL_BITBANDING_DC3_DCPWM1       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(1*4u))))
#define SYSCTL_BITBANDING_DC3_DCPWM2       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(2*4u))))
#define SYSCTL_BITBANDING_DC3_DCPWM3       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(3*4u))))
#define SYSCTL_BITBANDING_DC3_DCPWM4       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(4*4u))))
#define SYSCTL_BITBANDING_DC3_DCPWM5       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(5*4u))))
#define SYSCTL_BITBANDING_DC3_DCC0MINUS    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(6*4u))))
#define SYSCTL_BITBANDING_DC3_DCC0PLUS     (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(7*4u))))
#define SYSCTL_BITBANDING_DC3_DCC0O        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(8*4u))))
#define SYSCTL_BITBANDING_DC3_DCC1MINUS    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(9*4u))))
#define SYSCTL_BITBANDING_DC3_DCC1PLUS     (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(10*4u))))
#define SYSCTL_BITBANDING_DC3_DCC1O        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(11*4u))))
#define SYSCTL_BITBANDING_DC3_DCC2MINUS    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(12*4u))))
#define SYSCTL_BITBANDING_DC3_DCC2PLUS     (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(13*4u))))
#define SYSCTL_BITBANDING_DC3_DCC2O        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(14*4u))))
#define SYSCTL_BITBANDING_DC3_DCPWMFAULT   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(15*4u))))
#define SYSCTL_BITBANDING_DC3_DCADC0AIN0   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(16*4u))))
#define SYSCTL_BITBANDING_DC3_DCADC0AIN1   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(17*4u))))
#define SYSCTL_BITBANDING_DC3_DCADC0AIN2   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(18*4u))))
#define SYSCTL_BITBANDING_DC3_DCADC0AIN3   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(19*4u))))
#define SYSCTL_BITBANDING_DC3_DCADC0AIN4   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(20*4u))))
#define SYSCTL_BITBANDING_DC3_DCADC0AIN5   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(21*4u))))
#define SYSCTL_BITBANDING_DC3_DCADC0AIN6   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(22*4u))))
#define SYSCTL_BITBANDING_DC3_DCADC0AIN7   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(23*4u))))
#define SYSCTL_BITBANDING_DC3_DCCCP0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(24*4u))))
#define SYSCTL_BITBANDING_DC3_DCCCP1       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(25*4u))))
#define SYSCTL_BITBANDING_DC3_DCCCP2       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(26*4u))))
#define SYSCTL_BITBANDING_DC3_DCCCP3       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(27*4u))))
#define SYSCTL_BITBANDING_DC3_DCCCP4       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(28*4u))))
#define SYSCTL_BITBANDING_DC3_DCCCP5       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(29*4u))))
#define SYSCTL_BITBANDING_DC3_DC32KHZ      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32u)+(31*4u))))

/**********************************************************************************
************************************126 DC4 *********************************************
******************************************************************************************/
#define SYSCTL_DC4            (((DC4_TypeDef*)(SYSCTL_BASE+SYSCTL_DC4_OFFSET )))
#define SYSCTL_DC4_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC4_OFFSET)))
#define SYSCTL_BITBANDING_DC4      (((BITBANDING_DC4_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32u))))



/*----------*/
#define SYSCTL_DC4_R_DCGPIOA_MASK       (0x00000001u)
#define SYSCTL_DC4_R_DCGPIOA_BIT        (0u)
#define SYSCTL_DC4_R_DCGPIOA_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_R_DCGPIOA_PRESENT    (0x00000001u)

#define SYSCTL_DC4_DCGPIOA_MASK       (0x00000001u)
#define SYSCTL_DC4_DCGPIOA_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_DCGPIOA_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCGPIOB_MASK       (0x00000002u)
#define SYSCTL_DC4_R_DCGPIOB_BIT        (1u)
#define SYSCTL_DC4_R_DCGPIOB_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_R_DCGPIOB_PRESENT    (0x00000002u)

#define SYSCTL_DC4_DCGPIOB_MASK       (0x00000001u)
#define SYSCTL_DC4_DCGPIOB_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_DCGPIOB_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCGPIOC_MASK       (0x00000004u)
#define SYSCTL_DC4_R_DCGPIOC_BIT        (2u)
#define SYSCTL_DC4_R_DCGPIOC_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_R_DCGPIOC_PRESENT    (0x00000004u)

#define SYSCTL_DC4_DCGPIOC_MASK       (0x00000001u)
#define SYSCTL_DC4_DCGPIOC_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_DCGPIOC_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCGPIOD_MASK       (0x00000008u)
#define SYSCTL_DC4_R_DCGPIOD_BIT        (3u)
#define SYSCTL_DC4_R_DCGPIOD_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_R_DCGPIOD_PRESENT    (0x00000008u)

#define SYSCTL_DC4_DCGPIOD_MASK       (0x00000001u)
#define SYSCTL_DC4_DCGPIOD_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_DCGPIOD_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCGPIOE_MASK       (0x00000010u)
#define SYSCTL_DC4_R_DCGPIOE_BIT        (4u)
#define SYSCTL_DC4_R_DCGPIOE_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_R_DCGPIOE_PRESENT    (0x00000010u)

#define SYSCTL_DC4_DCGPIOE_MASK       (0x00000001u)
#define SYSCTL_DC4_DCGPIOE_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_DCGPIOE_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCGPIOF_MASK       (0x00000020u)
#define SYSCTL_DC4_R_DCGPIOF_BIT        (5u)
#define SYSCTL_DC4_R_DCGPIOF_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_R_DCGPIOF_PRESENT    (0x00000020u)

#define SYSCTL_DC4_DCGPIOF_MASK       (0x00000001u)
#define SYSCTL_DC4_DCGPIOF_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_DCGPIOF_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCGPIOG_MASK       (0x00000040u)
#define SYSCTL_DC4_R_DCGPIOG_BIT        (6u)
#define SYSCTL_DC4_R_DCGPIOG_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_R_DCGPIOG_PRESENT    (0x00000040u)

#define SYSCTL_DC4_DCGPIOG_MASK       (0x00000001u)
#define SYSCTL_DC4_DCGPIOG_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_DCGPIOG_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCGPIOH_MASK       (0x00000080u)
#define SYSCTL_DC4_R_DCGPIOH_BIT        (7u)
#define SYSCTL_DC4_R_DCGPIOH_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_R_DCGPIOH_PRESENT    (0x00000080u)

#define SYSCTL_DC4_DCGPIOH_MASK       (0x00000001u)
#define SYSCTL_DC4_DCGPIOH_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_DCGPIOH_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCGPIOJ_MASK       (0x00000100u)
#define SYSCTL_DC4_R_DCGPIOJ_BIT        (8u)
#define SYSCTL_DC4_R_DCGPIOJ_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_R_DCGPIOJ_PRESENT    (0x00000100u)

#define SYSCTL_DC4_DCGPIOJ_MASK       (0x00000001u)
#define SYSCTL_DC4_DCGPIOJ_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_DCGPIOJ_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCROM_MASK       (0x00001000u)
#define SYSCTL_DC4_R_DCROM_BIT        (12u)
#define SYSCTL_DC4_R_DCROM_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_R_DCROM_PRESENT    (0x00001000u)

#define SYSCTL_DC4_DCROM_MASK       (0x00000001u)
#define SYSCTL_DC4_DCROM_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_DCROM_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCUDMA_MASK       (0x00002000u)
#define SYSCTL_DC4_R_DCUDMA_BIT        (13u)
#define SYSCTL_DC4_R_DCUDMA_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_R_DCUDMA_PRESENT    (0x00002000u)

#define SYSCTL_DC4_DCUDMA_MASK       (0x00000001u)
#define SYSCTL_DC4_DCUDMA_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_DCUDMA_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCCCP6_MASK       (0x00004000u)
#define SYSCTL_DC4_R_DCCCP6_BIT        (14u)
#define SYSCTL_DC4_R_DCCCP6_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_R_DCCCP6_PRESENT    (0x00004000u)

#define SYSCTL_DC4_DCCCP6_MASK       (0x00000001u)
#define SYSCTL_DC4_DCCCP6_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_DCCCP6_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCCCP7_MASK       (0x00008000u)
#define SYSCTL_DC4_R_DCCCP7_BIT        (15u)
#define SYSCTL_DC4_R_DCCCP7_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_R_DCCCP7_PRESENT    (0x00008000u)

#define SYSCTL_DC4_DCCCP7_MASK       (0x00000001u)
#define SYSCTL_DC4_DCCCP7_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_DCCCP7_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCPICAL_MASK       (0x00040000u)
#define SYSCTL_DC4_R_DCPICAL_BIT        (18u)
#define SYSCTL_DC4_R_DCPICAL_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_R_DCPICAL_PRESENT    (0x00040000u)

#define SYSCTL_DC4_DCPICAL_MASK       (0x00000001u)
#define SYSCTL_DC4_DCPICAL_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_DCPICAL_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCE1588_MASK       (0x01000000u)
#define SYSCTL_DC4_R_DCE1588_BIT        (24u)
#define SYSCTL_DC4_R_DCE1588_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_R_DCE1588_PRESENT    (0x01000000u)

#define SYSCTL_DC4_DCE1588_MASK       (0x00000001u)
#define SYSCTL_DC4_DCE1588_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_DCE1588_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCEMAC0_MASK       (0x10000000u)
#define SYSCTL_DC4_R_DCEMAC0_BIT        (28u)
#define SYSCTL_DC4_R_DCEMAC0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_R_DCEMAC0_PRESENT    (0x10000000u)

#define SYSCTL_DC4_DCEMAC0_MASK       (0x00000001u)
#define SYSCTL_DC4_DCEMAC0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_DCEMAC0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCEPHY0_MASK       (0x40000000u)
#define SYSCTL_DC4_R_DCEPHY0_BIT        (30u)
#define SYSCTL_DC4_R_DCEPHY0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_R_DCEPHY0_PRESENT    (0x40000000u)

#define SYSCTL_DC4_DCEPHY0_MASK       (0x00000001u)
#define SYSCTL_DC4_DCEPHY0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC4_DCEPHY0_PRESENT    (0x00000001u)
/*----------*/

#define SYSCTL_BITBANDING_DC4_DCGPIOA       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32u)+(0*4u))))
#define SYSCTL_BITBANDING_DC4_DCGPIOB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32u)+(1*4u))))
#define SYSCTL_BITBANDING_DC4_DCGPIOC       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32u)+(2*4u))))
#define SYSCTL_BITBANDING_DC4_DCGPIOD       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32u)+(3*4u))))
#define SYSCTL_BITBANDING_DC4_DCGPIOE       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32u)+(4*4u))))
#define SYSCTL_BITBANDING_DC4_DCGPIOF       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32u)+(5*4u))))
#define SYSCTL_BITBANDING_DC4_DCGPIOG       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32u)+(6*4u))))
#define SYSCTL_BITBANDING_DC4_DCGPIOH       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32u)+(7*4u))))
#define SYSCTL_BITBANDING_DC4_DCGPIOJ       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32u)+(8*4u))))
#define SYSCTL_BITBANDING_DC4_DCROM         (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32u)+(12*4u))))
#define SYSCTL_BITBANDING_DC4_DCUDMA        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32u)+(13*4u))))
#define SYSCTL_BITBANDING_DC4_DCCCP6        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32u)+(14*4u))))
#define SYSCTL_BITBANDING_DC4_DCCCP7        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32u)+(15*4u))))
#define SYSCTL_BITBANDING_DC4_DCPICAL       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32u)+(18*4u))))
#define SYSCTL_BITBANDING_DC4_DCE1588       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32u)+(24*4u))))
#define SYSCTL_BITBANDING_DC4_DCEMAC0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32u)+(28*4u))))
#define SYSCTL_BITBANDING_DC4_DCEPHY0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32u)+(30*4u))))

/**********************************************************************************
************************************127 DC5 *********************************************
******************************************************************************************/
#define SYSCTL_DC5            (((DC5_TypeDef*)(SYSCTL_BASE+SYSCTL_DC5_OFFSET )))
#define SYSCTL_DC5_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC5_OFFSET)))
#define SYSCTL_BITBANDING_DC5      (((BITBANDING_DC5_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32u))))



/*----------*/
#define SYSCTL_DC5_R_DCPWM0_MASK       (0x00000001u)
#define SYSCTL_DC5_R_DCPWM0_BIT        (0u)
#define SYSCTL_DC5_R_DCPWM0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_R_DCPWM0_PRESENT    (0x00000001u)

#define SYSCTL_DC5_DCPWM0_MASK       (0x00000001u)
#define SYSCTL_DC5_DCPWM0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_DCPWM0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWM1_MASK       (0x00000002u)
#define SYSCTL_DC5_R_DCPWM1_BIT        (1u)
#define SYSCTL_DC5_R_DCPWM1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_R_DCPWM1_PRESENT    (0x00000002u)

#define SYSCTL_DC5_DCPWM1_MASK       (0x00000001u)
#define SYSCTL_DC5_DCPWM1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_DCPWM1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWM2_MASK       (0x00000004u)
#define SYSCTL_DC5_R_DCPWM2_BIT        (2u)
#define SYSCTL_DC5_R_DCPWM2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_R_DCPWM2_PRESENT    (0x00000004u)

#define SYSCTL_DC5_DCPWM2_MASK       (0x00000001u)
#define SYSCTL_DC5_DCPWM2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_DCPWM2_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWM3_MASK       (0x00000008u)
#define SYSCTL_DC5_R_DCPWM3_BIT        (3u)
#define SYSCTL_DC5_R_DCPWM3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_R_DCPWM3_PRESENT    (0x00000008u)

#define SYSCTL_DC5_DCPWM3_MASK       (0x00000001u)
#define SYSCTL_DC5_DCPWM3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_DCPWM3_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWM4_MASK       (0x00000010u)
#define SYSCTL_DC5_R_DCPWM4_BIT        (4u)
#define SYSCTL_DC5_R_DCPWM4_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_R_DCPWM4_PRESENT    (0x00000010u)

#define SYSCTL_DC5_DCPWM4_MASK       (0x00000001u)
#define SYSCTL_DC5_DCPWM4_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_DCPWM4_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWM5_MASK       (0x00000020u)
#define SYSCTL_DC5_R_DCPWM5_BIT        (5u)
#define SYSCTL_DC5_R_DCPWM5_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_R_DCPWM5_PRESENT    (0x00000020u)

#define SYSCTL_DC5_DCPWM5_MASK       (0x00000001u)
#define SYSCTL_DC5_DCPWM5_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_DCPWM5_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWM6_MASK       (0x00000040u)
#define SYSCTL_DC5_R_DCPWM6_BIT        (6u)
#define SYSCTL_DC5_R_DCPWM6_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_R_DCPWM6_PRESENT    (0x00000040u)

#define SYSCTL_DC5_DCPWM6_MASK       (0x00000001u)
#define SYSCTL_DC5_DCPWM6_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_DCPWM6_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWM7_MASK       (0x00000080u)
#define SYSCTL_DC5_R_DCPWM7_BIT        (7u)
#define SYSCTL_DC5_R_DCPWM7_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_R_DCPWM7_PRESENT    (0x00000080u)

#define SYSCTL_DC5_DCPWM7_MASK       (0x00000001u)
#define SYSCTL_DC5_DCPWM7_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_DCPWM7_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWMESYNC_MASK       (0x00100000u)
#define SYSCTL_DC5_R_DCPWMESYNC_BIT        (20u)
#define SYSCTL_DC5_R_DCPWMESYNC_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_R_DCPWMESYNC_PRESENT    (0x00100000u)

#define SYSCTL_DC5_DCPWMESYNC_MASK       (0x00000001u)
#define SYSCTL_DC5_DCPWMESYNC_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_DCPWMESYNC_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWMEFLT_MASK       (0x00200000u)
#define SYSCTL_DC5_R_DCPWMEFLT_BIT        (21u)
#define SYSCTL_DC5_R_DCPWMEFLT_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_R_DCPWMEFLT_PRESENT    (0x00200000u)

#define SYSCTL_DC5_DCPWMEFLT_MASK       (0x00000001u)
#define SYSCTL_DC5_DCPWMEFLT_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_DCPWMEFLT_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWMFAULT0_MASK       (0x01000000u)
#define SYSCTL_DC5_R_DCPWMFAULT0_BIT        (24u)
#define SYSCTL_DC5_R_DCPWMFAULT0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_R_DCPWMFAULT0_PRESENT    (0x01000000u)

#define SYSCTL_DC5_DCPWMFAULT0_MASK       (0x00000001u)
#define SYSCTL_DC5_DCPWMFAULT0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_DCPWMFAULT0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWMFAULT1_MASK       (0x02000000u)
#define SYSCTL_DC5_R_DCPWMFAULT1_BIT        (25u)
#define SYSCTL_DC5_R_DCPWMFAULT1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_R_DCPWMFAULT1_PRESENT    (0x02000000u)

#define SYSCTL_DC5_DCPWMFAULT1_MASK       (0x00000001u)
#define SYSCTL_DC5_DCPWMFAULT1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_DCPWMFAULT1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWMFAULT2_MASK       (0x04000000u)
#define SYSCTL_DC5_R_DCPWMFAULT2_BIT        (26u)
#define SYSCTL_DC5_R_DCPWMFAULT2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_R_DCPWMFAULT2_PRESENT    (0x04000000u)

#define SYSCTL_DC5_DCPWMFAULT2_MASK       (0x00000001u)
#define SYSCTL_DC5_DCPWMFAULT2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_DCPWMFAULT2_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWMFAULT3_MASK       (0x08000000u)
#define SYSCTL_DC5_R_DCPWMFAULT3_BIT        (27u)
#define SYSCTL_DC5_R_DCPWMFAULT3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_R_DCPWMFAULT3_PRESENT    (0x08000000u)

#define SYSCTL_DC5_DCPWMFAULT0_MASK       (0x00000001u)
#define SYSCTL_DC5_DCPWMFAULT0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC5_DCPWMFAULT0_PRESENT    (0x00000001u)
/*----------*/


#define SYSCTL_BITBANDING_DC5_DCPWM0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32u)+(0*4u))))
#define SYSCTL_BITBANDING_DC5_DCPWM1       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32u)+(1*4u))))
#define SYSCTL_BITBANDING_DC5_DCPWM2       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32u)+(2*4u))))
#define SYSCTL_BITBANDING_DC5_DCPWM3       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32u)+(3*4u))))
#define SYSCTL_BITBANDING_DC5_DCPWM4       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32u)+(4*4u))))
#define SYSCTL_BITBANDING_DC5_DCPWM5       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32u)+(5*4u))))
#define SYSCTL_BITBANDING_DC5_DCPWM6       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32u)+(6*4u))))
#define SYSCTL_BITBANDING_DC5_DCPWM7       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32u)+(7*4u))))
#define SYSCTL_BITBANDING_DC5_DCPWMESYNC   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32u)+(20*4u))))
#define SYSCTL_BITBANDING_DC5_DCPWMEFLT    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32u)+(21*4u))))
#define SYSCTL_BITBANDING_DC5_DCPWMFAULT0  (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32u)+(24*4u))))
#define SYSCTL_BITBANDING_DC5_DCPWMFAULT1  (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32u)+(25*4u))))
#define SYSCTL_BITBANDING_DC5_DCPWMFAULT2  (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32u)+(26*4u))))
#define SYSCTL_BITBANDING_DC5_DCPWMFAULT3  (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32u)+(27*4u))))

/**********************************************************************************
************************************128 DC6 *********************************************
******************************************************************************************/
#define SYSCTL_DC6            (((DC6_TypeDef*)(SYSCTL_BASE+SYSCTL_DC6_OFFSET )))
#define SYSCTL_DC6_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC6_OFFSET)))
#define SYSCTL_BITBANDING_DC6      (((BITBANDING_DC6_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DC6_OFFSET)*32u))))




/*----------*/
#define SYSCTL_DC6_R_DCUSB0_MASK       (0x00000003u)
#define SYSCTL_DC6_R_DCUSB0_BIT        (0u)
#define SYSCTL_DC6_R_DCUSB0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC6_R_DCUSB0_DEVICE     (0x00000001u)
#define SYSCTL_DC6_R_DCUSB0_HOST       (0x00000002u)
#define SYSCTL_DC6_R_DCUSB0_OTG        (0x00000003u)

#define SYSCTL_DC6_DCUSB0_MASK       (0x00000003u)
#define SYSCTL_DC6_DCUSB0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC6_DCUSB0_DEVICE     (0x00000001u)
#define SYSCTL_DC6_DCUSB0_HOST       (0x00000002u)
#define SYSCTL_DC6_DCUSB0_OTG        (0x00000003u)
/*----------*/

/*----------*/
#define SYSCTL_DC6_R_DCUSB0PHY_MASK       (0x00000010u)
#define SYSCTL_DC6_R_DCUSB0PHY_BIT        (4u)
#define SYSCTL_DC6_R_DCUSB0PHY_NOPRESENT  (0x00000000u)
#define SYSCTL_DC6_R_DCUSB0PHY_PRESENT    (0x00000010u)

#define SYSCTL_DC6_DCUSB0PHY_MASK       (0x00000001u)
#define SYSCTL_DC6_DCUSB0PHY_NOPRESENT  (0x00000000u)
#define SYSCTL_DC6_DCUSB0PHY_PRESENT    (0x00000001u)
/*----------*/


#define SYSCTL_BITBANDING_DC6_DCUSB0PHY       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC6_OFFSET)*32u)+(4*4u))))

/**********************************************************************************
************************************129 DC7 *********************************************
******************************************************************************************/
#define SYSCTL_DC7            (((DC7_TypeDef*)(SYSCTL_BASE+SYSCTL_DC7_OFFSET )))
#define SYSCTL_DC7_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC7_OFFSET)))
#define SYSCTL_BITBANDING_DC7      (((BITBANDING_DC7_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u))))



/*----------*/
#define SYSCTL_DC7_R_DCDMACH0_MASK       (0x00000001u)
#define SYSCTL_DC7_R_DCDMACH0_BIT        (0u)
#define SYSCTL_DC7_R_DCDMACH0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH0_PRESENT    (0x00000001u)

#define SYSCTL_DC7_DCDMACH0_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH1_MASK       (0x00000002u)
#define SYSCTL_DC7_R_DCDMACH1_BIT        (1u)
#define SYSCTL_DC7_R_DCDMACH1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH1_PRESENT    (0x00000002u)

#define SYSCTL_DC7_DCDMACH1_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH2_MASK       (0x00000004u)
#define SYSCTL_DC7_R_DCDMACH2_BIT        (2u)
#define SYSCTL_DC7_R_DCDMACH2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH2_PRESENT    (0x00000004u)

#define SYSCTL_DC7_DCDMACH2_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH2_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH3_MASK       (0x00000008u)
#define SYSCTL_DC7_R_DCDMACH3_BIT        (3u)
#define SYSCTL_DC7_R_DCDMACH3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH3_PRESENT    (0x00000008u)

#define SYSCTL_DC7_DCDMACH3_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH3_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH4_MASK       (0x00000010u)
#define SYSCTL_DC7_R_DCDMACH4_BIT        (4u)
#define SYSCTL_DC7_R_DCDMACH4_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH4_PRESENT    (0x00000010u)

#define SYSCTL_DC7_DCDMACH4_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH4_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH4_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH5_MASK       (0x00000020u)
#define SYSCTL_DC7_R_DCDMACH5_BIT        (5u)
#define SYSCTL_DC7_R_DCDMACH5_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH5_PRESENT    (0x00000020u)

#define SYSCTL_DC7_DCDMACH5_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH5_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH5_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH6_MASK       (0x00000040u)
#define SYSCTL_DC7_R_DCDMACH6_BIT        (6u)
#define SYSCTL_DC7_R_DCDMACH6_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH6_PRESENT    (0x00000040u)

#define SYSCTL_DC7_DCDMACH6_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH6_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH6_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH7_MASK       (0x00000080u)
#define SYSCTL_DC7_R_DCDMACH7_BIT        (7u)
#define SYSCTL_DC7_R_DCDMACH7_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH7_PRESENT    (0x00000080u)

#define SYSCTL_DC7_DCDMACH7_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH7_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH7_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH8_MASK       (0x00000100u)
#define SYSCTL_DC7_R_DCDMACH8_BIT        (8u)
#define SYSCTL_DC7_R_DCDMACH8_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH8_PRESENT    (0x00000100u)

#define SYSCTL_DC7_DCDMACH8_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH8_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH8_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH9_MASK       (0x00000200u)
#define SYSCTL_DC7_R_DCDMACH9_BIT        (9u)
#define SYSCTL_DC7_R_DCDMACH9_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH9_PRESENT    (0x00000200u)

#define SYSCTL_DC7_DCDMACH9_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH9_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH9_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH10_MASK       (0x00000400u)
#define SYSCTL_DC7_R_DCDMACH10_BIT        (10u)
#define SYSCTL_DC7_R_DCDMACH10_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH10_PRESENT    (0x00000400u)

#define SYSCTL_DC7_DCDMACH10_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH10_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH10_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH11_MASK       (0x00000800u)
#define SYSCTL_DC7_R_DCDMACH11_BIT        (11u)
#define SYSCTL_DC7_R_DCDMACH11_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH11_PRESENT    (0x00000800u)

#define SYSCTL_DC7_DCDMACH11_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH11_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH11_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH12_MASK       (0x00001000u)
#define SYSCTL_DC7_R_DCDMACH12_BIT        (12u)
#define SYSCTL_DC7_R_DCDMACH12_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH12_PRESENT    (0x00001000u)

#define SYSCTL_DC7_DCDMACH12_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH12_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH12_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH13_MASK       (0x00002000u)
#define SYSCTL_DC7_R_DCDMACH13_BIT        (13u)
#define SYSCTL_DC7_R_DCDMACH13_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH13_PRESENT    (0x00002000u)

#define SYSCTL_DC7_DCDMACH13_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH13_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH13_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH14_MASK       (0x00004000u)
#define SYSCTL_DC7_R_DCDMACH14_BIT        (14u)
#define SYSCTL_DC7_R_DCDMACH14_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH14_PRESENT    (0x00004000u)

#define SYSCTL_DC7_DCDMACH14_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH14_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH14_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH15_MASK       (0x00008000u)
#define SYSCTL_DC7_R_DCDMACH15_BIT        (15u)
#define SYSCTL_DC7_R_DCDMACH15_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH15_PRESENT    (0x00008000u)

#define SYSCTL_DC7_DCDMACH15_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH15_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH15_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH16_MASK       (0x00010000u)
#define SYSCTL_DC7_R_DCDMACH16_BIT        (16u)
#define SYSCTL_DC7_R_DCDMACH16_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH16_PRESENT    (0x00010000u)

#define SYSCTL_DC7_DCDMACH16_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH16_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH16_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH17_MASK       (0x00020000u)
#define SYSCTL_DC7_R_DCDMACH17_BIT        (17u)
#define SYSCTL_DC7_R_DCDMACH17_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH17_PRESENT    (0x00020000u)

#define SYSCTL_DC7_DCDMACH17_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH17_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH17_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH18_MASK       (0x00040000u)
#define SYSCTL_DC7_R_DCDMACH18_BIT        (18u)
#define SYSCTL_DC7_R_DCDMACH18_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH18_PRESENT    (0x00040000u)

#define SYSCTL_DC7_DCDMACH18_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH18_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH18_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH19_MASK       (0x00080000u)
#define SYSCTL_DC7_R_DCDMACH19_BIT        (19u)
#define SYSCTL_DC7_R_DCDMACH19_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH19_PRESENT    (0x00080000u)

#define SYSCTL_DC7_DCDMACH19_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH19_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH19_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH20_MASK       (0x00100000u)
#define SYSCTL_DC7_R_DCDMACH20_BIT        (20u)
#define SYSCTL_DC7_R_DCDMACH20_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH20_PRESENT    (0x00100000u)

#define SYSCTL_DC7_DCDMACH20_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH20_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH20_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH21_MASK       (0x00200000u)
#define SYSCTL_DC7_R_DCDMACH21_BIT        (21u)
#define SYSCTL_DC7_R_DCDMACH21_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH21_PRESENT    (0x00200000u)

#define SYSCTL_DC7_DCDMACH21_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH21_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH21_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH22_MASK       (0x00400000u)
#define SYSCTL_DC7_R_DCDMACH22_BIT        (22u)
#define SYSCTL_DC7_R_DCDMACH22_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH22_PRESENT    (0x00400000u)

#define SYSCTL_DC7_DCDMACH22_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH22_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH22_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH23_MASK       (0x00800000u)
#define SYSCTL_DC7_R_DCDMACH23_BIT        (23u)
#define SYSCTL_DC7_R_DCDMACH23_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH23_PRESENT    (0x00800000u)

#define SYSCTL_DC7_DCDMACH23_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH23_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH23_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH24_MASK       (0x01000000u)
#define SYSCTL_DC7_R_DCDMACH24_BIT        (24u)
#define SYSCTL_DC7_R_DCDMACH24_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH24_PRESENT    (0x01000000u)

#define SYSCTL_DC7_DCDMACH24_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH24_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH24_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH25_MASK       (0x02000000u)
#define SYSCTL_DC7_R_DCDMACH25_BIT        (25u)
#define SYSCTL_DC7_R_DCDMACH25_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH25_PRESENT    (0x02000000u)

#define SYSCTL_DC7_DCDMACH25_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH25_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH25_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH26_MASK       (0x04000000u)
#define SYSCTL_DC7_R_DCDMACH26_BIT        (26u)
#define SYSCTL_DC7_R_DCDMACH26_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH26_PRESENT    (0x04000000u)

#define SYSCTL_DC7_DCDMACH26_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH26_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH26_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH27_MASK       (0x08000000u)
#define SYSCTL_DC7_R_DCDMACH27_BIT        (27u)
#define SYSCTL_DC7_R_DCDMACH27_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH27_PRESENT    (0x08000000u)

#define SYSCTL_DC7_DCDMACH27_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH27_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH27_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH28_MASK       (0x10000000u)
#define SYSCTL_DC7_R_DCDMACH28_BIT        (28u)
#define SYSCTL_DC7_R_DCDMACH28_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH28_PRESENT    (0x10000000u)

#define SYSCTL_DC7_DCDMACH28_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH28_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH28_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH29_MASK       (0x20000000u)
#define SYSCTL_DC7_R_DCDMACH29_BIT        (29u)
#define SYSCTL_DC7_R_DCDMACH29_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH29_PRESENT    (0x20000000u)

#define SYSCTL_DC7_DCDMACH29_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH29_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH29_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH30_MASK       (0x40000000u)
#define SYSCTL_DC7_R_DCDMACH30_BIT        (30u)
#define SYSCTL_DC7_R_DCDMACH30_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_R_DCDMACH30_PRESENT    (0x40000000u)

#define SYSCTL_DC7_DCDMACH30_MASK       (0x00000001u)
#define SYSCTL_DC7_DCDMACH30_NOPRESENT  (0x00000000u)
#define SYSCTL_DC7_DCDMACH30_PRESENT    (0x00000001u)
/*----------*/

#define SYSCTL_BITBANDING_DC7_DCDMACH0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(0*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH1       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(1*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH2       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(2*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH3       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(3*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH4       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(4*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH5       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(5*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH6       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(6*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH7       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(7*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH8       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(8*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH9       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(9*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH10      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(10*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH11      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(11*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH12      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(12*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH13      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(13*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH14      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(14*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH15      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(15*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH16      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(16*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH17      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(17*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH18      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(18*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH19      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(19*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH20      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(20*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH21      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(21*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH22      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(22*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH23      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(23*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH24      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(24*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH25      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(25*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH26      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(26*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH27      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(27*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH28      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(28*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH29      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(29*4u))))
#define SYSCTL_BITBANDING_DC7_DCDMACH30      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32u)+(30*4u))))

/**********************************************************************************
************************************130 DC8 *********************************************
******************************************************************************************/
#define SYSCTL_DC8            (((DC8_TypeDef*)(SYSCTL_BASE+SYSCTL_DC8_OFFSET )))
#define SYSCTL_DC8_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC8_OFFSET)))
#define SYSCTL_BITBANDING_DC8      (((BITBANDING_DC8_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u))))



/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN0_MASK       (0x00000001u)
#define SYSCTL_DC8_R_DCADC0AIN0_BIT        (0u)
#define SYSCTL_DC8_R_DCADC0AIN0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN0_PRESENT    (0x00000001u)

#define SYSCTL_DC8_DCADC0AIN0_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC0AIN0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC0AIN0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN1_MASK       (0x00000002u)
#define SYSCTL_DC8_R_DCADC0AIN1_BIT        (1u)
#define SYSCTL_DC8_R_DCADC0AIN1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN1_PRESENT    (0x00000002u)

#define SYSCTL_DC8_DCADC0AIN1_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC0AIN1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC0AIN1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN2_MASK       (0x00000004u)
#define SYSCTL_DC8_R_DCADC0AIN2_BIT        (2u)
#define SYSCTL_DC8_R_DCADC0AIN2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN2_PRESENT    (0x00000004u)

#define SYSCTL_DC8_DCADC0AIN2_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC0AIN2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC0AIN2_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN3_MASK       (0x00000008u)
#define SYSCTL_DC8_R_DCADC0AIN3_BIT        (3u)
#define SYSCTL_DC8_R_DCADC0AIN3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN3_PRESENT    (0x00000008u)

#define SYSCTL_DC8_DCADC0AIN3_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC0AIN3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC0AIN3_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN4_MASK       (0x00000010u)
#define SYSCTL_DC8_R_DCADC0AIN4_BIT        (4u)
#define SYSCTL_DC8_R_DCADC0AIN4_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN4_PRESENT    (0x00000010u)

#define SYSCTL_DC8_DCADC0AIN4_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC0AIN4_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC0AIN4_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN5_MASK       (0x00000020u)
#define SYSCTL_DC8_R_DCADC0AIN5_BIT        (5u)
#define SYSCTL_DC8_R_DCADC0AIN5_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN5_PRESENT    (0x00000020u)

#define SYSCTL_DC8_DCADC0AIN5_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC0AIN5_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC0AIN5_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN6_MASK       (0x00000040u)
#define SYSCTL_DC8_R_DCADC0AIN6_BIT        (6u)
#define SYSCTL_DC8_R_DCADC0AIN6_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN6_PRESENT    (0x00000040u)

#define SYSCTL_DC8_DCADC0AIN6_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC0AIN6_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC0AIN6_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN7_MASK       (0x00000080u)
#define SYSCTL_DC8_R_DCADC0AIN7_BIT        (7u)
#define SYSCTL_DC8_R_DCADC0AIN7_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN7_PRESENT    (0x00000080u)

#define SYSCTL_DC8_DCADC0AIN7_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC0AIN7_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC0AIN7_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN8_MASK       (0x00000100u)
#define SYSCTL_DC8_R_DCADC0AIN8_BIT        (8u)
#define SYSCTL_DC8_R_DCADC0AIN8_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN8_PRESENT    (0x00000100u)

#define SYSCTL_DC8_DCADC0AIN8_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC0AIN8_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC0AIN8_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN9_MASK       (0x00000200u)
#define SYSCTL_DC8_R_DCADC0AIN9_BIT        (9u)
#define SYSCTL_DC8_R_DCADC0AIN9_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN9_PRESENT    (0x00000200u)

#define SYSCTL_DC8_DCADC0AIN9_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC0AIN9_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC0AIN9_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN10_MASK       (0x00000400u)
#define SYSCTL_DC8_R_DCADC0AIN10_BIT        (10u)
#define SYSCTL_DC8_R_DCADC0AIN10_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN10_PRESENT    (0x00000400u)

#define SYSCTL_DC8_DCADC0AIN10_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC0AIN10_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC0AIN10_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN11_MASK       (0x00000800u)
#define SYSCTL_DC8_R_DCADC0AIN11_BIT        (11u)
#define SYSCTL_DC8_R_DCADC0AIN11_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN11_PRESENT    (0x00000800u)

#define SYSCTL_DC8_DCADC0AIN11_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC0AIN11_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC0AIN11_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN12_MASK       (0x00001000u)
#define SYSCTL_DC8_R_DCADC0AIN12_BIT        (12u)
#define SYSCTL_DC8_R_DCADC0AIN12_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN12_PRESENT    (0x00001000u)

#define SYSCTL_DC8_DCADC0AIN12_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC0AIN12_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC0AIN12_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN13_MASK       (0x00002000u)
#define SYSCTL_DC8_R_DCADC0AIN13_BIT        (13u)
#define SYSCTL_DC8_R_DCADC0AIN13_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN13_PRESENT    (0x00002000u)

#define SYSCTL_DC8_DCADC0AIN13_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC0AIN13_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC0AIN13_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN14_MASK       (0x00004000u)
#define SYSCTL_DC8_R_DCADC0AIN14_BIT        (14u)
#define SYSCTL_DC8_R_DCADC0AIN14_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN14_PRESENT    (0x00004000u)

#define SYSCTL_DC8_DCADC0AIN14_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC0AIN14_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC0AIN14_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN15_MASK       (0x00008000u)
#define SYSCTL_DC8_R_DCADC0AIN15_BIT        (15u)
#define SYSCTL_DC8_R_DCADC0AIN15_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN15_PRESENT    (0x00008000u)

#define SYSCTL_DC8_DCADC0AIN15_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC0AIN15_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC0AIN15_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN0_MASK       (0x00010000u)
#define SYSCTL_DC8_R_DCADC1AIN0_BIT        (16u)
#define SYSCTL_DC8_R_DCADC1AIN0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN0_PRESENT    (0x00010000u)

#define SYSCTL_DC8_DCADC1AIN0_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC1AIN0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC1AIN0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN1_MASK       (0x00020000u)
#define SYSCTL_DC8_R_DCADC1AIN1_BIT        (17u)
#define SYSCTL_DC8_R_DCADC1AIN1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN1_PRESENT    (0x00020000u)

#define SYSCTL_DC8_DCADC1AIN1_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC1AIN1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC1AIN1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN2_MASK       (0x00040000u)
#define SYSCTL_DC8_R_DCADC1AIN2_BIT        (18u)
#define SYSCTL_DC8_R_DCADC1AIN2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN2_PRESENT    (0x00040000u)

#define SYSCTL_DC8_DCADC1AIN2_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC1AIN2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC1AIN2_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN3_MASK       (0x00080000u)
#define SYSCTL_DC8_R_DCADC1AIN3_BIT        (19u)
#define SYSCTL_DC8_R_DCADC1AIN3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN3_PRESENT    (0x00080000u)

#define SYSCTL_DC8_DCADC1AIN3_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC1AIN3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC1AIN3_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN4_MASK       (0x00100000u)
#define SYSCTL_DC8_R_DCADC1AIN4_BIT        (20u)
#define SYSCTL_DC8_R_DCADC1AIN4_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN4_PRESENT    (0x00100000u)

#define SYSCTL_DC8_DCADC1AIN4_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC1AIN4_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC1AIN4_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN5_MASK       (0x00200000u)
#define SYSCTL_DC8_R_DCADC1AIN5_BIT        (21u)
#define SYSCTL_DC8_R_DCADC1AIN5_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN5_PRESENT    (0x00200000u)

#define SYSCTL_DC8_DCADC1AIN5_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC1AIN5_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC1AIN5_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN6_MASK       (0x00400000u)
#define SYSCTL_DC8_R_DCADC1AIN6_BIT        (22u)
#define SYSCTL_DC8_R_DCADC1AIN6_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN6_PRESENT    (0x00400000u)

#define SYSCTL_DC8_DCADC1AIN6_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC1AIN6_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC1AIN6_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN7_MASK       (0x00800000u)
#define SYSCTL_DC8_R_DCADC1AIN7_BIT        (23u)
#define SYSCTL_DC8_R_DCADC1AIN7_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN7_PRESENT    (0x00800000u)

#define SYSCTL_DC8_DCADC1AIN7_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC1AIN7_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC1AIN7_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN8_MASK       (0x01000000u)
#define SYSCTL_DC8_R_DCADC1AIN8_BIT        (24u)
#define SYSCTL_DC8_R_DCADC1AIN8_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN8_PRESENT    (0x01000000u)

#define SYSCTL_DC8_DCADC1AIN8_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC1AIN8_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC1AIN8_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN9_MASK       (0x02000000u)
#define SYSCTL_DC8_R_DCADC1AIN9_BIT        (25u)
#define SYSCTL_DC8_R_DCADC1AIN9_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN9_PRESENT    (0x02000000u)

#define SYSCTL_DC8_DCADC1AIN9_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC1AIN9_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC1AIN9_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN10_MASK       (0x04000000u)
#define SYSCTL_DC8_R_DCADC1AIN10_BIT        (26u)
#define SYSCTL_DC8_R_DCADC1AIN10_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN10_PRESENT    (0x04000000u)

#define SYSCTL_DC8_DCADC1AIN10_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC1AIN10_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC1AIN10_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN11_MASK       (0x08000000u)
#define SYSCTL_DC8_R_DCADC1AIN11_BIT        (27u)
#define SYSCTL_DC8_R_DCADC1AIN11_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN11_PRESENT    (0x08000000u)

#define SYSCTL_DC8_DCADC1AIN11_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC1AIN11_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC1AIN11_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN12_MASK       (0x10000000u)
#define SYSCTL_DC8_R_DCADC1AIN12_BIT        (28u)
#define SYSCTL_DC8_R_DCADC1AIN12_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN12_PRESENT    (0x10000000u)

#define SYSCTL_DC8_DCADC1AIN12_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC1AIN12_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC1AIN12_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN13_MASK       (0x20000000u)
#define SYSCTL_DC8_R_DCADC1AIN13_BIT        (29u)
#define SYSCTL_DC8_R_DCADC1AIN13_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN13_PRESENT    (0x20000000u)

#define SYSCTL_DC8_DCADC1AIN13_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC1AIN13_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC1AIN13_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN14_MASK       (0x40000000u)
#define SYSCTL_DC8_R_DCADC1AIN14_BIT        (30u)
#define SYSCTL_DC8_R_DCADC1AIN14_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN14_PRESENT    (0x40000000u)

#define SYSCTL_DC8_DCADC1AIN14_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC1AIN14_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC1AIN14_PRESENT    (0x00000001u)
/*----------*/


/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN15_MASK       (0x80000000u)
#define SYSCTL_DC8_R_DCADC1AIN15_BIT        (31u)
#define SYSCTL_DC8_R_DCADC1AIN15_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN15_PRESENT    (0x80000000u)

#define SYSCTL_DC8_DCADC1AIN15_MASK       (0x00000001u)
#define SYSCTL_DC8_DCADC1AIN15_NOPRESENT  (0x00000000u)
#define SYSCTL_DC8_DCADC1AIN15_PRESENT    (0x00000001u)
/*----------*/

#define SYSCTL_BITBANDING_DC8_DCADC0AIN0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(0*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN1       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(1*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN2       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(2*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN3       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(3*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN4       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(4*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN5       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(5*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN6       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(6*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN7       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(7*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN8       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(8*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN9       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(9*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN10      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(10*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN11      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(11*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN12      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(12*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN13      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(13*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN14      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(14*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN15      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(15*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(16*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN1       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(17*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN2       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(18*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN3       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(19*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN4       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(20*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN5       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(21*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN6       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(22*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN7       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(23*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN8       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(24*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN9       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(25*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN10      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(26*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN11      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(27*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN12      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(28*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN13      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(29*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN14      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(30*4u))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN15      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32u)+(31*4u))))

/**********************************************************************************
************************************131 SRCR0 *********************************************
******************************************************************************************/
#define SYSCTL_SRCR0            (((SRCR0_TypeDef*)(SYSCTL_BASE+SYSCTL_SRCR0_OFFSET )))
#define SYSCTL_SRCR0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SRCR0_OFFSET)))
#define SYSCTL_BITBANDING_SRCR0      (((BITBANDING_SRCR0_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRCR0_OFFSET)*32u))))

/*----------*/
#define SYSCTL_SRCR0_R_SRCRWDT0_MASK       (0x00000008u)
#define SYSCTL_SRCR0_R_SRCRWDT0_BIT        (3u)
#define SYSCTL_SRCR0_R_SRCRWDT0_SET  (0x00000000u)
#define SYSCTL_SRCR0_R_SRCRWDT0_RESET    (0x00000008u)

#define SYSCTL_SRCR0_SRCRWDT0_MASK       (0x00000001u)
#define SYSCTL_SRCR0_SRCRWDT0_SET  (0x00000000u)
#define SYSCTL_SRCR0_SRCRWDT0_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR0_R_SRCRHIB_MASK       (0x00000040u)
#define SYSCTL_SRCR0_R_SRCRHIB_BIT        (6u)
#define SYSCTL_SRCR0_R_SRCRHIB_SET  (0x00000000u)
#define SYSCTL_SRCR0_R_SRCRHIB_RESET    (0x00000040u)

#define SYSCTL_SRCR0_SRCRHIB_MASK       (0x00000001u)
#define SYSCTL_SRCR0_SRCRHIB_SET  (0x00000000u)
#define SYSCTL_SRCR0_SRCRHIB_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR0_R_SRCRADC0_MASK       (0x00010000u)
#define SYSCTL_SRCR0_R_SRCRADC0_BIT        (16u)
#define SYSCTL_SRCR0_R_SRCRADC0_SET  (0x00000000u)
#define SYSCTL_SRCR0_R_SRCRADC0_RESET    (0x00010000u)

#define SYSCTL_SRCR0_SRCRADC0_MASK       (0x00000001u)
#define SYSCTL_SRCR0_SRCRADC0_SET  (0x00000000u)
#define SYSCTL_SRCR0_SRCRADC0_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR0_R_SRCRADC1_MASK       (0x00020000u)
#define SYSCTL_SRCR0_R_SRCRADC1_BIT        (17u)
#define SYSCTL_SRCR0_R_SRCRADC1_SET  (0x00000000u)
#define SYSCTL_SRCR0_R_SRCRADC1_RESET    (0x00020000u)

#define SYSCTL_SRCR0_SRCRADC1_MASK       (0x00000001u)
#define SYSCTL_SRCR0_SRCRADC1_SET  (0x00000000u)
#define SYSCTL_SRCR0_SRCRADC1_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR0_R_SRCRPWM0_MASK       (0x00100000u)
#define SYSCTL_SRCR0_R_SRCRPWM0_BIT        (20u)
#define SYSCTL_SRCR0_R_SRCRPWM0_SET  (0x00000000u)
#define SYSCTL_SRCR0_R_SRCRPWM0_RESET    (0x00100000u)

#define SYSCTL_SRCR0_SRCRPWM0_MASK       (0x00000001u)
#define SYSCTL_SRCR0_SRCRPWM0_SET  (0x00000000u)
#define SYSCTL_SRCR0_SRCRPWM0_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR0_R_SRCRCAN0_MASK       (0x01000000u)
#define SYSCTL_SRCR0_R_SRCRCAN0_BIT        (24u)
#define SYSCTL_SRCR0_R_SRCRCAN0_SET  (0x00000000u)
#define SYSCTL_SRCR0_R_SRCRCAN0_RESET    (0x01000000u)

#define SYSCTL_SRCR0_SRCRCAN0_MASK       (0x00000001u)
#define SYSCTL_SRCR0_SRCRCAN0_SET  (0x00000000u)
#define SYSCTL_SRCR0_SRCRCAN0_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR0_R_SRCRCAN1_MASK       (0x02000000u)
#define SYSCTL_SRCR0_R_SRCRCAN1_BIT        (25u)
#define SYSCTL_SRCR0_R_SRCRCAN1_SET  (0x00000000u)
#define SYSCTL_SRCR0_R_SRCRCAN1_RESET    (0x02000000u)

#define SYSCTL_SRCR0_SRCRCAN1_MASK       (0x00000001u)
#define SYSCTL_SRCR0_SRCRCAN1_SET  (0x00000000u)
#define SYSCTL_SRCR0_SRCRCAN1_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR0_R_SRCRWDT1_MASK       (0x10000000u)
#define SYSCTL_SRCR0_R_SRCRWDT1_BIT        (28u)
#define SYSCTL_SRCR0_R_SRCRWDT1_SET  (0x00000000u)
#define SYSCTL_SRCR0_R_SRCRWDT1_RESET    (0x10000000u)

#define SYSCTL_SRCR0_SRCRWDT1_MASK       (0x00000001u)
#define SYSCTL_SRCR0_SRCRWDT1_SET  (0x00000000u)
#define SYSCTL_SRCR0_SRCRWDT1_RESET    (0x00000001u)
/*----------*/

#define SYSCTL_BITBANDING_SRCR0_SRCRWDT0      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR0_OFFSET)*32u)+(3*4u))))
#define SYSCTL_BITBANDING_SRCR0_SRCRHIB       (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR0_OFFSET)*32u)+(6*4u))))
#define SYSCTL_BITBANDING_SRCR0_SRCRADC0      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR0_OFFSET)*32u)+(16*4u))))
#define SYSCTL_BITBANDING_SRCR0_SRCRADC1      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR0_OFFSET)*32u)+(17*4u))))
#define SYSCTL_BITBANDING_SRCR0_SRCRPWM0      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR0_OFFSET)*32u)+(20*4u))))
#define SYSCTL_BITBANDING_SRCR0_SRCRCAN0      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR0_OFFSET)*32u)+(24*4u))))
#define SYSCTL_BITBANDING_SRCR0_SRCRCAN1      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR0_OFFSET)*32u)+(25*4u))))
#define SYSCTL_BITBANDING_SRCR0_SRCRWDT1      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR0_OFFSET)*32u)+(28*4u))))

/**********************************************************************************
************************************132 SRCR1 *********************************************
******************************************************************************************/
#define SYSCTL_SRCR1            (((SRCR1_TypeDef*)(SYSCTL_BASE+SYSCTL_SRCR1_OFFSET )))
#define SYSCTL_SRCR1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SRCR1_OFFSET)))
#define SYSCTL_BITBANDING_SRCR1      (((BITBANDING_SRCR1_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32u))))


/*----------*/
#define SYSCTL_SRCR1_R_SRCRUART0_MASK       (0x00000001u)
#define SYSCTL_SRCR1_R_SRCRUART0_BIT        (0u)
#define SYSCTL_SRCR1_R_SRCRUART0_SET  (0x00000000u)
#define SYSCTL_SRCR1_R_SRCRUART0_RESET    (0x00000001u)

#define SYSCTL_SRCR1_SRCRUART0_MASK       (0x00000001u)
#define SYSCTL_SRCR1_SRCRUART0_SET  (0x00000000u)
#define SYSCTL_SRCR1_SRCRUART0_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR1_R_SRCRUART1_MASK       (0x00000002u)
#define SYSCTL_SRCR1_R_SRCRUART1_BIT        (1u)
#define SYSCTL_SRCR1_R_SRCRUART1_SET  (0x00000000u)
#define SYSCTL_SRCR1_R_SRCRUART1_RESET    (0x00000002u)

#define SYSCTL_SRCR1_SRCRUART1_MASK       (0x00000001u)
#define SYSCTL_SRCR1_SRCRUART1_SET  (0x00000000u)
#define SYSCTL_SRCR1_SRCRUART1_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR1_R_SRCRUART2_MASK       (0x00000004u)
#define SYSCTL_SRCR1_R_SRCRUART2_BIT        (2u)
#define SYSCTL_SRCR1_R_SRCRUART2_SET  (0x00000000u)
#define SYSCTL_SRCR1_R_SRCRUART2_RESET    (0x00000004u)

#define SYSCTL_SRCR1_SRCRUART2_MASK       (0x00000001u)
#define SYSCTL_SRCR1_SRCRUART2_SET  (0x00000000u)
#define SYSCTL_SRCR1_SRCRUART2_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR1_R_SRCRSSI0_MASK       (0x00000010u)
#define SYSCTL_SRCR1_R_SRCRSSI0_BIT        (4u)
#define SYSCTL_SRCR1_R_SRCRSSI0_SET  (0x00000000u)
#define SYSCTL_SRCR1_R_SRCRSSI0_RESET    (0x00000010u)

#define SYSCTL_SRCR1_SRCRSSI0_MASK       (0x00000001u)
#define SYSCTL_SRCR1_SRCRSSI0_SET  (0x00000000u)
#define SYSCTL_SRCR1_SRCRSSI0_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR1_R_SRCRSSI1_MASK       (0x00000020u)
#define SYSCTL_SRCR1_R_SRCRSSI1_BIT        (5u)
#define SYSCTL_SRCR1_R_SRCRSSI1_SET  (0x00000000u)
#define SYSCTL_SRCR1_R_SRCRSSI1_RESET    (0x00000010u)

#define SYSCTL_SRCR1_SRCRSSI1_MASK       (0x00000001u)
#define SYSCTL_SRCR1_SRCRSSI1_SET  (0x00000000u)
#define SYSCTL_SRCR1_SRCRSSI1_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR1_R_SRCRQEI0_MASK       (0x00000100u)
#define SYSCTL_SRCR1_R_SRCRQEI0_BIT        (8u)
#define SYSCTL_SRCR1_R_SRCRQEI0_SET  (0x00000000u)
#define SYSCTL_SRCR1_R_SRCRQEI0_RESET    (0x00000100u)

#define SYSCTL_SRCR1_SRCRQEI0_MASK       (0x00000001u)
#define SYSCTL_SRCR1_SRCRQEI0_SET  (0x00000000u)
#define SYSCTL_SRCR1_SRCRQEI0_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR1_R_SRCRQEI1_MASK       (0x00000200u)
#define SYSCTL_SRCR1_R_SRCRQEI1_BIT        (9u)
#define SYSCTL_SRCR1_R_SRCRQEI1_SET  (0x00000000u)
#define SYSCTL_SRCR1_R_SRCRQEI1_RESET    (0x00000200u)

#define SYSCTL_SRCR1_SRCRQEI1_MASK       (0x00000001u)
#define SYSCTL_SRCR1_SRCRQEI1_SET  (0x00000000u)
#define SYSCTL_SRCR1_SRCRQEI1_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR1_R_SRCRI2C0_MASK       (0x00001000u)
#define SYSCTL_SRCR1_R_SRCRI2C0_BIT        (12u)
#define SYSCTL_SRCR1_R_SRCRI2C0_SET  (0x00000000u)
#define SYSCTL_SRCR1_R_SRCRI2C0_RESET    (0x00001000u)

#define SYSCTL_SRCR1_SRCRI2C0_MASK       (0x00000001u)
#define SYSCTL_SRCR1_SRCRI2C0_SET  (0x00000000u)
#define SYSCTL_SRCR1_SRCRI2C0_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR1_R_SRCRI2C1_MASK       (0x00004000u)
#define SYSCTL_SRCR1_R_SRCRI2C1_BIT        (14u)
#define SYSCTL_SRCR1_R_SRCRI2C1_SET  (0x00000000u)
#define SYSCTL_SRCR1_R_SRCRI2C1_RESET    (0x00004000u)

#define SYSCTL_SRCR1_SRCRI2C1_MASK       (0x00000001u)
#define SYSCTL_SRCR1_SRCRI2C1_SET  (0x00000000u)
#define SYSCTL_SRCR1_SRCRI2C1_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR1_R_SRCRTIMER0_MASK       (0x00010000u)
#define SYSCTL_SRCR1_R_SRCRTIMER0_BIT        (16u)
#define SYSCTL_SRCR1_R_SRCRTIMER0_SET  (0x00000000u)
#define SYSCTL_SRCR1_R_SRCRTIMER0_RESET    (0x00010000u)

#define SYSCTL_SRCR1_SRCRTIMER0_MASK       (0x00000001u)
#define SYSCTL_SRCR1_SRCRTIMER0_SET  (0x00000000u)
#define SYSCTL_SRCR1_SRCRTIMER0_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR1_R_SRCRTIMER1_MASK       (0x00020000u)
#define SYSCTL_SRCR1_R_SRCRTIMER1_BIT        (17u)
#define SYSCTL_SRCR1_R_SRCRTIMER1_SET  (0x00000000u)
#define SYSCTL_SRCR1_R_SRCRTIMER1_RESET    (0x00020000u)

#define SYSCTL_SRCR1_SRCRTIMER1_MASK       (0x00000001u)
#define SYSCTL_SRCR1_SRCRTIMER1_SET  (0x00000000u)
#define SYSCTL_SRCR1_SRCRTIMER1_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR1_R_SRCRTIMER2_MASK       (0x00040000u)
#define SYSCTL_SRCR1_R_SRCRTIMER2_BIT        (18u)
#define SYSCTL_SRCR1_R_SRCRTIMER2_SET  (0x00000000u)
#define SYSCTL_SRCR1_R_SRCRTIMER2_RESET    (0x00040000u)

#define SYSCTL_SRCR1_SRCRTIMER2_MASK       (0x00000001u)
#define SYSCTL_SRCR1_SRCRTIMER2_SET  (0x00000000u)
#define SYSCTL_SRCR1_SRCRTIMER2_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR1_R_SRCRTIMER3_MASK       (0x00080000u)
#define SYSCTL_SRCR1_R_SRCRTIMER3_BIT        (19u)
#define SYSCTL_SRCR1_R_SRCRTIMER3_SET  (0x00000000u)
#define SYSCTL_SRCR1_R_SRCRTIMER3_RESET    (0x00080000u)

#define SYSCTL_SRCR1_SRCRTIMER3_MASK       (0x00000001u)
#define SYSCTL_SRCR1_SRCRTIMER3_SET  (0x00000000u)
#define SYSCTL_SRCR1_SRCRTIMER3_RESET    (0x00000001u)
/*----------*/


/*----------*/
#define SYSCTL_SRCR1_R_SRCRCOMP0_MASK       (0x01000000u)
#define SYSCTL_SRCR1_R_SRCRCOMP0_BIT        (24u)
#define SYSCTL_SRCR1_R_SRCRCOMP0_SET  (0x00000000u)
#define SYSCTL_SRCR1_R_SRCRCOMP0_RESET    (0x01000000u)

#define SYSCTL_SRCR1_SRCRCOMP0_MASK       (0x00000001u)
#define SYSCTL_SRCR1_SRCRCOMP0_SET  (0x00000000u)
#define SYSCTL_SRCR1_SRCRCOMP0_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR1_R_SRCRCOMP1_MASK       (0x02000000u)
#define SYSCTL_SRCR1_R_SRCRCOMP1_BIT        (25u)
#define SYSCTL_SRCR1_R_SRCRCOMP1_SET  (0x00000000u)
#define SYSCTL_SRCR1_R_SRCRCOMP1_RESET    (0x02000000u)

#define SYSCTL_SRCR1_SRCRCOMP1_MASK       (0x00000001u)
#define SYSCTL_SRCR1_SRCRCOMP1_SET  (0x00000000u)
#define SYSCTL_SRCR1_SRCRCOMP1_RESET    (0x00000001u)
/*----------*/


#define SYSCTL_BITBANDING_SRCR1_SRCRUART0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32u)+(0*4u))))
#define SYSCTL_BITBANDING_SRCR1_SRCRUART1       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32u)+(1*4u))))
#define SYSCTL_BITBANDING_SRCR1_SRCRUART2       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32u)+(2*4u))))
#define SYSCTL_BITBANDING_SRCR1_SRCRSSI0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32u)+(4*4u))))
#define SYSCTL_BITBANDING_SRCR1_SRCRSSI1        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32u)+(5*4u))))
#define SYSCTL_BITBANDING_SRCR1_SRCRQEI0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32u)+(8*4u))))
#define SYSCTL_BITBANDING_SRCR1_SRCRQEI1        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32u)+(9*4u))))
#define SYSCTL_BITBANDING_SRCR1_SRCRI2C0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32u)+(12*4u))))
#define SYSCTL_BITBANDING_SRCR1_SRCRI2C1        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32u)+(14*4u))))
#define SYSCTL_BITBANDING_SRCR1_SRCRTIMER0      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32u)+(16*4u))))
#define SYSCTL_BITBANDING_SRCR1_SRCRTIMER1      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32u)+(17*4u))))
#define SYSCTL_BITBANDING_SRCR1_SRCRTIMER2      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32u)+(18*4u))))
#define SYSCTL_BITBANDING_SRCR1_SRCRTIMER3      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32u)+(19*4u))))
#define SYSCTL_BITBANDING_SRCR1_SRCRCOMP0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32u)+(24*4u))))
#define SYSCTL_BITBANDING_SRCR1_SRCRCOMP1       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32u)+(25*4u))))

/**********************************************************************************
************************************133 SRCR2 *********************************************
******************************************************************************************/
#define SYSCTL_SRCR2            (((SRCR2_TypeDef*)(SYSCTL_BASE+SYSCTL_SRCR2_OFFSET )))
#define SYSCTL_SRCR2_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SRCR2_OFFSET)))
#define SYSCTL_BITBANDING_SRCR2      (((BITBANDING_SRCR2_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SRCR2_OFFSET)*32u))))



/*----------*/
#define SYSCTL_SRCR2_R_SRCRGPIOA_MASK       (0x00000001u)
#define SYSCTL_SRCR2_R_SRCRGPIOA_BIT        (0u)
#define SYSCTL_SRCR2_R_SRCRGPIOA_SET  (0x00000000u)
#define SYSCTL_SRCR2_R_SRCRGPIOA_RESET    (0x00000001u)

#define SYSCTL_SRCR2_SRCRGPIOA_MASK       (0x00000001u)
#define SYSCTL_SRCR2_SRCRGPIOA_SET  (0x00000000u)
#define SYSCTL_SRCR2_SRCRGPIOA_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR2_R_SRCRGPIOB_MASK       (0x00000002u)
#define SYSCTL_SRCR2_R_SRCRGPIOB_BIT        (1u)
#define SYSCTL_SRCR2_R_SRCRGPIOB_SET  (0x00000000u)
#define SYSCTL_SRCR2_R_SRCRGPIOB_RESET    (0x00000002u)

#define SYSCTL_SRCR2_SRCRGPIOB_MASK       (0x00000001u)
#define SYSCTL_SRCR2_SRCRGPIOB_SET  (0x00000000u)
#define SYSCTL_SRCR2_SRCRGPIOB_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR2_R_SRCRGPIOC_MASK       (0x00000004u)
#define SYSCTL_SRCR2_R_SRCRGPIOC_BIT        (2u)
#define SYSCTL_SRCR2_R_SRCRGPIOC_SET  (0x00000000u)
#define SYSCTL_SRCR2_R_SRCRGPIOC_RESET    (0x00000004u)

#define SYSCTL_SRCR2_SRCRGPIOC_MASK       (0x00000001u)
#define SYSCTL_SRCR2_SRCRGPIOC_SET  (0x00000000u)
#define SYSCTL_SRCR2_SRCRGPIOC_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR2_R_SRCRGPIOD_MASK       (0x00000008u)
#define SYSCTL_SRCR2_R_SRCRGPIOD_BIT        (3u)
#define SYSCTL_SRCR2_R_SRCRGPIOD_SET  (0x00000000u)
#define SYSCTL_SRCR2_R_SRCRGPIOD_RESET    (0x00000008u)

#define SYSCTL_SRCR2_SRCRGPIOD_MASK       (0x00000001u)
#define SYSCTL_SRCR2_SRCRGPIOD_SET  (0x00000000u)
#define SYSCTL_SRCR2_SRCRGPIOD_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR2_R_SRCRGPIOE_MASK       (0x00000010u)
#define SYSCTL_SRCR2_R_SRCRGPIOE_BIT        (4u)
#define SYSCTL_SRCR2_R_SRCRGPIOE_SET  (0x00000000u)
#define SYSCTL_SRCR2_R_SRCRGPIOE_RESET    (0x00000010u)

#define SYSCTL_SRCR2_SRCRGPIOE_MASK       (0x00000001u)
#define SYSCTL_SRCR2_SRCRGPIOE_SET  (0x00000000u)
#define SYSCTL_SRCR2_SRCRGPIOE_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR2_R_SRCRGPIOF_MASK       (0x00000020u)
#define SYSCTL_SRCR2_R_SRCRGPIOF_BIT        (5u)
#define SYSCTL_SRCR2_R_SRCRGPIOF_SET  (0x00000000u)
#define SYSCTL_SRCR2_R_SRCRGPIOF_RESET    (0x00000020u)

#define SYSCTL_SRCR2_SRCRGPIOF_MASK       (0x00000001u)
#define SYSCTL_SRCR2_SRCRGPIOF_SET  (0x00000000u)
#define SYSCTL_SRCR2_SRCRGPIOF_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR2_R_SRCRUDMA_MASK       (0x00002000u)
#define SYSCTL_SRCR2_R_SRCRUDMA_BIT        (13u)
#define SYSCTL_SRCR2_R_SRCRUDMA_SET  (0x00000000u)
#define SYSCTL_SRCR2_R_SRCRUDMA_RESET    (0x00002000u)

#define SYSCTL_SRCR2_SRCRUDMA_MASK       (0x00000001u)
#define SYSCTL_SRCR2_SRCRUDMA_SET  (0x00000000u)
#define SYSCTL_SRCR2_SRCRUDMA_RESET    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SRCR2_R_SRCRUSB0_MASK       (0x00010000u)
#define SYSCTL_SRCR2_R_SRCRUSB0_BIT        (16u)
#define SYSCTL_SRCR2_R_SRCRUSB0_SET  (0x00000000u)
#define SYSCTL_SRCR2_R_SRCRUSB0_RESET    (0x00010000u)

#define SYSCTL_SRCR2_SRCRUSB0_MASK       (0x00000001u)
#define SYSCTL_SRCR2_SRCRUSB0_SET  (0x00000000u)
#define SYSCTL_SRCR2_SRCRUSB0_RESET    (0x00000001u)
/*----------*/

#define SYSCTL_BITBANDING_SRCR2_SRCRGPIOA       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR2_OFFSET)*32u)+(0*4u))))
#define SYSCTL_BITBANDING_SRCR2_SRCRGPIOB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR2_OFFSET)*32u)+(1*4u))))
#define SYSCTL_BITBANDING_SRCR2_SRCRGPIOC       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR2_OFFSET)*32u)+(2*4u))))
#define SYSCTL_BITBANDING_SRCR2_SRCRGPIOD       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR2_OFFSET)*32u)+(3*4u))))
#define SYSCTL_BITBANDING_SRCR2_SRCRGPIOE       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR2_OFFSET)*32u)+(4*4u))))
#define SYSCTL_BITBANDING_SRCR2_SRCRGPIOF       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR2_OFFSET)*32u)+(5*4u))))
#define SYSCTL_BITBANDING_SRCR2_SRCRUDMA        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR2_OFFSET)*32u)+(13*4u))))
#define SYSCTL_BITBANDING_SRCR2_SRCRUSB0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR2_OFFSET)*32u)+(16*4u))))

/**********************************************************************************
************************************134 RCGC0 *********************************************
******************************************************************************************/
#define SYSCTL_RCGC0            (((RCGC0_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGC0_OFFSET )))
#define SYSCTL_RCGC0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_RCGC0_OFFSET)))
#define SYSCTL_BITBANDING_RCGC0      (((BITBANDING_RCGC0_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGC0_OFFSET)*32u))))

/*----------*/
#define SYSCTL_RCGC0_R_RCGCWDT0_MASK       (0x00000008u)
#define SYSCTL_RCGC0_R_RCGCWDT0_BIT        (3u)
#define SYSCTL_RCGC0_R_RCGCWDT0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC0_R_RCGCWDT0_CLOCK         (0x00000008u)

#define SYSCTL_RCGC0_RCGCWDT0_MASK       (0x00000001u)
#define SYSCTL_RCGC0_RCGCWDT0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC0_RCGCWDT0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC0_R_RCGCHIB_MASK       (0x00000040u)
#define SYSCTL_RCGC0_R_RCGCHIB_BIT        (6u)
#define SYSCTL_RCGC0_R_RCGCHIB_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC0_R_RCGCHIB_CLOCK         (0x00000040u)

#define SYSCTL_RCGC0_RCGCHIB_MASK       (0x00000001u)
#define SYSCTL_RCGC0_RCGCHIB_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC0_RCGCHIB_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC0_R_RCGCMAXADC0SPD_MASK       (0x00000030u)
#define SYSCTL_RCGC0_R_RCGCMAXADC0SPD_BIT        (8u)
#define SYSCTL_RCGC0_R_RCGCMAXADC0SPD_125K       (0x00000000u)
#define SYSCTL_RCGC0_R_RCGCMAXADC0SPD_250K       (0x00000010u)
#define SYSCTL_RCGC0_R_RCGCMAXADC0SPD_500K       (0x00000020u)
#define SYSCTL_RCGC0_R_RCGCMAXADC0SPD_1M         (0x00000030u)

#define SYSCTL_RCGC0_RCGCMAXADC0SPD_MASK         (0x00000003u)
#define SYSCTL_RCGC0_RCGCMAXADC0SPD_125K         (0x00000000u)
#define SYSCTL_RCGC0_RCGCMAXADC0SPD_250K         (0x00000001u)
#define SYSCTL_RCGC0_RCGCMAXADC0SPD_500K         (0x00000002u)
#define SYSCTL_RCGC0_RCGCMAXADC0SPD_1M           (0x00000003u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC0_R_RCGCMAXADC1SPD_MASK       (0x000000C0u)
#define SYSCTL_RCGC0_R_RCGCMAXADC1SPD_BIT        (10u)
#define SYSCTL_RCGC0_R_RCGCMAXADC1SPD_125K       (0x00000000u)
#define SYSCTL_RCGC0_R_RCGCMAXADC1SPD_250K       (0x00000040u)
#define SYSCTL_RCGC0_R_RCGCMAXADC1SPD_500K       (0x00000080u)
#define SYSCTL_RCGC0_R_RCGCMAXADC1SPD_1M         (0x000000C0u)

#define SYSCTL_RCGC0_RCGCMAXADC1SPD_MASK         (0x00000003u)
#define SYSCTL_RCGC0_RCGCMAXADC1SPD_125K         (0x00000000u)
#define SYSCTL_RCGC0_RCGCMAXADC1SPD_250K         (0x00000001u)
#define SYSCTL_RCGC0_RCGCMAXADC1SPD_500K         (0x00000002u)
#define SYSCTL_RCGC0_RCGCMAXADC1SPD_1M           (0x00000003u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC0_R_RCGCADC0_MASK       (0x00010000u)
#define SYSCTL_RCGC0_R_RCGCADC0_BIT        (16u)
#define SYSCTL_RCGC0_R_RCGCADC0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC0_R_RCGCADC0_CLOCK         (0x00010000u)

#define SYSCTL_RCGC0_RCGCADC0_MASK       (0x00000001u)
#define SYSCTL_RCGC0_RCGCADC0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC0_RCGCADC0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC0_R_RCGCADC1_MASK       (0x00020000u)
#define SYSCTL_RCGC0_R_RCGCADC1_BIT        (17u)
#define SYSCTL_RCGC0_R_RCGCADC1_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC0_R_RCGCADC1_CLOCK         (0x00020000u)

#define SYSCTL_RCGC0_RCGCADC1_MASK       (0x00000001u)
#define SYSCTL_RCGC0_RCGCADC1_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC0_RCGCADC1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC0_R_RCGCPWM0_MASK       (0x00100000u)
#define SYSCTL_RCGC0_R_RCGCPWM0_BIT        (20u)
#define SYSCTL_RCGC0_R_RCGCPWM0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC0_R_RCGCPWM0_CLOCK         (0x00100000u)

#define SYSCTL_RCGC0_RCGCPWM0_MASK       (0x00000001u)
#define SYSCTL_RCGC0_RCGCPWM0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC0_RCGCPWM0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC0_R_RCGCCAN0_MASK       (0x01000000u)
#define SYSCTL_RCGC0_R_RCGCCAN0_BIT        (24u)
#define SYSCTL_RCGC0_R_RCGCCAN0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC0_R_RCGCCAN0_CLOCK         (0x01000000u)

#define SYSCTL_RCGC0_RCGCCAN0_MASK       (0x00000001u)
#define SYSCTL_RCGC0_RCGCCAN0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC0_RCGCCAN0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC0_R_RCGCCAN1_MASK       (0x02000000u)
#define SYSCTL_RCGC0_R_RCGCCAN1_BIT        (25u)
#define SYSCTL_RCGC0_R_RCGCCAN1_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC0_R_RCGCCAN1_CLOCK         (0x02000000u)

#define SYSCTL_RCGC0_RCGCCAN1_MASK       (0x00000001u)
#define SYSCTL_RCGC0_RCGCCAN1_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC0_RCGCCAN1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC0_R_RCGCWDT1_MASK       (0x10000000u)
#define SYSCTL_RCGC0_R_RCGCWDT1_BIT        (28u)
#define SYSCTL_RCGC0_R_RCGCWDT1_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC0_R_RCGCWDT1_CLOCK         (0x10000000u)

#define SYSCTL_RCGC0_RCGCWDT1_MASK       (0x00000001u)
#define SYSCTL_RCGC0_RCGCWDT1_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC0_RCGCWDT1_CLOCK         (0x00000001u)
/*----------*/

#define SYSCTL_BITBANDING_RCGC0_RCGCWDT0      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC0_OFFSET)*32u)+(3*4u))))
#define SYSCTL_BITBANDING_RCGC0_RCGCHIB       (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC0_OFFSET)*32u)+(6*4u))))
#define SYSCTL_BITBANDING_RCGC0_RCGCADC0      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC0_OFFSET)*32u)+(16*4u))))
#define SYSCTL_BITBANDING_RCGC0_RCGCADC1      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC0_OFFSET)*32u)+(17*4u))))
#define SYSCTL_BITBANDING_RCGC0_RCGCPWM0      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC0_OFFSET)*32u)+(20*4u))))
#define SYSCTL_BITBANDING_RCGC0_RCGCCAN0      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC0_OFFSET)*32u)+(24*4u))))
#define SYSCTL_BITBANDING_RCGC0_RCGCCAN1      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC0_OFFSET)*32u)+(25*4u))))
#define SYSCTL_BITBANDING_RCGC0_RCGCWDT1      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC0_OFFSET)*32u)+(28*4u))))

/**********************************************************************************
************************************135 RCGC1 *********************************************
******************************************************************************************/
#define SYSCTL_RCGC1            (((RCGC1_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGC1_OFFSET )))
#define SYSCTL_RCGC1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_RCGC1_OFFSET)))
#define SYSCTL_BITBANDING_RCGC1      (((BITBANDING_RCGC1_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32u))))


/*----------*/
#define SYSCTL_RCGC1_R_RCGCUART0_MASK       (0x00000001u)
#define SYSCTL_RCGC1_R_RCGCUART0_BIT        (0u)
#define SYSCTL_RCGC1_R_RCGCUART0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_R_RCGCUART0_CLOCK         (0x00000001u)

#define SYSCTL_RCGC1_RCGCUART0_MASK       (0x00000001u)
#define SYSCTL_RCGC1_RCGCUART0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_RCGCUART0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCUART1_MASK       (0x00000002u)
#define SYSCTL_RCGC1_R_RCGCUART1_BIT        (1u)
#define SYSCTL_RCGC1_R_RCGCUART1_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_R_RCGCUART1_CLOCK         (0x00000002u)

#define SYSCTL_RCGC1_RCGCUART1_MASK       (0x00000001u)
#define SYSCTL_RCGC1_RCGCUART1_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_RCGCUART1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCUART2_MASK       (0x00000004u)
#define SYSCTL_RCGC1_R_RCGCUART2_BIT        (2u)
#define SYSCTL_RCGC1_R_RCGCUART2_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_R_RCGCUART2_CLOCK         (0x00000004u)

#define SYSCTL_RCGC1_RCGCUART2_MASK       (0x00000001u)
#define SYSCTL_RCGC1_RCGCUART2_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_RCGCUART2_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCSSI0_MASK       (0x00000010u)
#define SYSCTL_RCGC1_R_RCGCSSI0_BIT        (4u)
#define SYSCTL_RCGC1_R_RCGCSSI0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_R_RCGCSSI0_CLOCK         (0x00000010u)

#define SYSCTL_RCGC1_RCGCSSI0_MASK       (0x00000001u)
#define SYSCTL_RCGC1_RCGCSSI0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_RCGCSSI0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCSSI1_MASK       (0x00000020u)
#define SYSCTL_RCGC1_R_RCGCSSI1_BIT        (5u)
#define SYSCTL_RCGC1_R_RCGCSSI1_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_R_RCGCSSI1_CLOCK         (0x00000010u)

#define SYSCTL_RCGC1_RCGCSSI1_MASK       (0x00000001u)
#define SYSCTL_RCGC1_RCGCSSI1_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_RCGCSSI1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCQEI0_MASK       (0x00000100u)
#define SYSCTL_RCGC1_R_RCGCQEI0_BIT        (8u)
#define SYSCTL_RCGC1_R_RCGCQEI0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_R_RCGCQEI0_CLOCK         (0x00000100u)

#define SYSCTL_RCGC1_RCGCQEI0_MASK       (0x00000001u)
#define SYSCTL_RCGC1_RCGCQEI0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_RCGCQEI0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCQEI1_MASK       (0x00000200u)
#define SYSCTL_RCGC1_R_RCGCQEI1_BIT        (9u)
#define SYSCTL_RCGC1_R_RCGCQEI1_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_R_RCGCQEI1_CLOCK         (0x00000200u)

#define SYSCTL_RCGC1_RCGCQEI1_MASK       (0x00000001u)
#define SYSCTL_RCGC1_RCGCQEI1_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_RCGCQEI1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCI2C0_MASK       (0x00001000u)
#define SYSCTL_RCGC1_R_RCGCI2C0_BIT        (12u)
#define SYSCTL_RCGC1_R_RCGCI2C0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_R_RCGCI2C0_CLOCK         (0x00001000u)

#define SYSCTL_RCGC1_RCGCI2C0_MASK       (0x00000001u)
#define SYSCTL_RCGC1_RCGCI2C0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_RCGCI2C0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCI2C1_MASK       (0x00004000u)
#define SYSCTL_RCGC1_R_RCGCI2C1_BIT        (14u)
#define SYSCTL_RCGC1_R_RCGCI2C1_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_R_RCGCI2C1_CLOCK         (0x00004000u)

#define SYSCTL_RCGC1_RCGCI2C1_MASK       (0x00000001u)
#define SYSCTL_RCGC1_RCGCI2C1_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_RCGCI2C1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCTIMER0_MASK       (0x00010000u)
#define SYSCTL_RCGC1_R_RCGCTIMER0_BIT        (16u)
#define SYSCTL_RCGC1_R_RCGCTIMER0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_R_RCGCTIMER0_CLOCK         (0x00010000u)

#define SYSCTL_RCGC1_RCGCTIMER0_MASK       (0x00000001u)
#define SYSCTL_RCGC1_RCGCTIMER0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_RCGCTIMER0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCTIMER1_MASK       (0x00020000u)
#define SYSCTL_RCGC1_R_RCGCTIMER1_BIT        (17u)
#define SYSCTL_RCGC1_R_RCGCTIMER1_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_R_RCGCTIMER1_CLOCK         (0x00020000u)

#define SYSCTL_RCGC1_RCGCTIMER1_MASK       (0x00000001u)
#define SYSCTL_RCGC1_RCGCTIMER1_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_RCGCTIMER1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCTIMER2_MASK       (0x00040000u)
#define SYSCTL_RCGC1_R_RCGCTIMER2_BIT        (18u)
#define SYSCTL_RCGC1_R_RCGCTIMER2_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_R_RCGCTIMER2_CLOCK         (0x00040000u)

#define SYSCTL_RCGC1_RCGCTIMER2_MASK       (0x00000001u)
#define SYSCTL_RCGC1_RCGCTIMER2_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_RCGCTIMER2_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCTIMER3_MASK       (0x00080000u)
#define SYSCTL_RCGC1_R_RCGCTIMER3_BIT        (19u)
#define SYSCTL_RCGC1_R_RCGCTIMER3_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_R_RCGCTIMER3_CLOCK         (0x00080000u)

#define SYSCTL_RCGC1_RCGCTIMER3_MASK       (0x00000001u)
#define SYSCTL_RCGC1_RCGCTIMER3_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_RCGCTIMER3_CLOCK         (0x00000001u)
/*----------*/


/*----------*/
#define SYSCTL_RCGC1_R_RCGCCOMP0_MASK       (0x01000000u)
#define SYSCTL_RCGC1_R_RCGCCOMP0_BIT        (24u)
#define SYSCTL_RCGC1_R_RCGCCOMP0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_R_RCGCCOMP0_CLOCK         (0x01000000u)

#define SYSCTL_RCGC1_RCGCCOMP0_MASK       (0x00000001u)
#define SYSCTL_RCGC1_RCGCCOMP0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_RCGCCOMP0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCCOMP1_MASK       (0x02000000u)
#define SYSCTL_RCGC1_R_RCGCCOMP1_BIT        (25u)
#define SYSCTL_RCGC1_R_RCGCCOMP1_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_R_RCGCCOMP1_CLOCK         (0x02000000u)

#define SYSCTL_RCGC1_RCGCCOMP1_MASK       (0x00000001u)
#define SYSCTL_RCGC1_RCGCCOMP1_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC1_RCGCCOMP1_CLOCK         (0x00000001u)
/*----------*/


#define SYSCTL_BITBANDING_RCGC1_RCGCUART0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32u)+(0*4u))))
#define SYSCTL_BITBANDING_RCGC1_RCGCUART1       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32u)+(1*4u))))
#define SYSCTL_BITBANDING_RCGC1_RCGCUART2       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32u)+(2*4u))))
#define SYSCTL_BITBANDING_RCGC1_RCGCSSI0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32u)+(4*4u))))
#define SYSCTL_BITBANDING_RCGC1_RCGCSSI1        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32u)+(5*4u))))
#define SYSCTL_BITBANDING_RCGC1_RCGCQEI0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32u)+(8*4u))))
#define SYSCTL_BITBANDING_RCGC1_RCGCQEI1        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32u)+(9*4u))))
#define SYSCTL_BITBANDING_RCGC1_RCGCI2C0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32u)+(12*4u))))
#define SYSCTL_BITBANDING_RCGC1_RCGCI2C1        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32u)+(14*4u))))
#define SYSCTL_BITBANDING_RCGC1_RCGCTIMER0      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32u)+(16*4u))))
#define SYSCTL_BITBANDING_RCGC1_RCGCTIMER1      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32u)+(17*4u))))
#define SYSCTL_BITBANDING_RCGC1_RCGCTIMER2      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32u)+(18*4u))))
#define SYSCTL_BITBANDING_RCGC1_RCGCTIMER3      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32u)+(19*4u))))
#define SYSCTL_BITBANDING_RCGC1_RCGCCOMP0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32u)+(24*4u))))
#define SYSCTL_BITBANDING_RCGC1_RCGCCOMP1       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32u)+(25*4u))))

/**********************************************************************************
************************************136 RCGC2 *********************************************
******************************************************************************************/
#define SYSCTL_RCGC2            (((RCGC2_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGC2_OFFSET )))
#define SYSCTL_RCGC2_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_RCGC2_OFFSET)))
#define SYSCTL_BITBANDING_RCGC2      (((BITBANDING_RCGC2_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RCGC2_OFFSET)*32u))))



/*----------*/
#define SYSCTL_RCGC2_R_RCGCGPIOA_MASK       (0x00000001u)
#define SYSCTL_RCGC2_R_RCGCGPIOA_BIT        (0u)
#define SYSCTL_RCGC2_R_RCGCGPIOA_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC2_R_RCGCGPIOA_CLOCK         (0x00000001u)

#define SYSCTL_RCGC2_RCGCGPIOA_MASK       (0x00000001u)
#define SYSCTL_RCGC2_RCGCGPIOA_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC2_RCGCGPIOA_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC2_R_RCGCGPIOB_MASK       (0x00000002u)
#define SYSCTL_RCGC2_R_RCGCGPIOB_BIT        (1u)
#define SYSCTL_RCGC2_R_RCGCGPIOB_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC2_R_RCGCGPIOB_CLOCK         (0x00000002u)

#define SYSCTL_RCGC2_RCGCGPIOB_MASK       (0x00000001u)
#define SYSCTL_RCGC2_RCGCGPIOB_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC2_RCGCGPIOB_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC2_R_RCGCGPIOC_MASK       (0x00000004u)
#define SYSCTL_RCGC2_R_RCGCGPIOC_BIT        (2u)
#define SYSCTL_RCGC2_R_RCGCGPIOC_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC2_R_RCGCGPIOC_CLOCK         (0x00000004u)

#define SYSCTL_RCGC2_RCGCGPIOC_MASK       (0x00000001u)
#define SYSCTL_RCGC2_RCGCGPIOC_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC2_RCGCGPIOC_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC2_R_RCGCGPIOD_MASK       (0x00000008u)
#define SYSCTL_RCGC2_R_RCGCGPIOD_BIT        (3u)
#define SYSCTL_RCGC2_R_RCGCGPIOD_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC2_R_RCGCGPIOD_CLOCK         (0x00000008u)

#define SYSCTL_RCGC2_RCGCGPIOD_MASK       (0x00000001u)
#define SYSCTL_RCGC2_RCGCGPIOD_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC2_RCGCGPIOD_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC2_R_RCGCGPIOE_MASK       (0x00000010u)
#define SYSCTL_RCGC2_R_RCGCGPIOE_BIT        (4u)
#define SYSCTL_RCGC2_R_RCGCGPIOE_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC2_R_RCGCGPIOE_CLOCK         (0x00000010u)

#define SYSCTL_RCGC2_RCGCGPIOE_MASK       (0x00000001u)
#define SYSCTL_RCGC2_RCGCGPIOE_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC2_RCGCGPIOE_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC2_R_RCGCGPIOF_MASK       (0x00000020u)
#define SYSCTL_RCGC2_R_RCGCGPIOF_BIT        (5u)
#define SYSCTL_RCGC2_R_RCGCGPIOF_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC2_R_RCGCGPIOF_CLOCK         (0x00000020u)

#define SYSCTL_RCGC2_RCGCGPIOF_MASK       (0x00000001u)
#define SYSCTL_RCGC2_RCGCGPIOF_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC2_RCGCGPIOF_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC2_R_RCGCUDMA_MASK       (0x00002000u)
#define SYSCTL_RCGC2_R_RCGCUDMA_BIT        (13u)
#define SYSCTL_RCGC2_R_RCGCUDMA_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC2_R_RCGCUDMA_CLOCK         (0x00002000u)

#define SYSCTL_RCGC2_RCGCUDMA_MASK       (0x00000001u)
#define SYSCTL_RCGC2_RCGCUDMA_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC2_RCGCUDMA_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_RCGC2_R_RCGCUSB0_MASK       (0x00010000u)
#define SYSCTL_RCGC2_R_RCGCUSB0_BIT        (16u)
#define SYSCTL_RCGC2_R_RCGCUSB0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC2_R_RCGCUSB0_CLOCK         (0x00010000u)

#define SYSCTL_RCGC2_RCGCUSB0_MASK       (0x00000001u)
#define SYSCTL_RCGC2_RCGCUSB0_UNCLOCK        (0x00000000u)
#define SYSCTL_RCGC2_RCGCUSB0_CLOCK         (0x00000001u)
/*----------*/

#define SYSCTL_BITBANDING_RCGC2_RCGCGPIOA       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC2_OFFSET)*32u)+(0*4u))))
#define SYSCTL_BITBANDING_RCGC2_RCGCGPIOB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC2_OFFSET)*32u)+(1*4u))))
#define SYSCTL_BITBANDING_RCGC2_RCGCGPIOC       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC2_OFFSET)*32u)+(2*4u))))
#define SYSCTL_BITBANDING_RCGC2_RCGCGPIOD       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC2_OFFSET)*32u)+(3*4u))))
#define SYSCTL_BITBANDING_RCGC2_RCGCGPIOE       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC2_OFFSET)*32u)+(4*4u))))
#define SYSCTL_BITBANDING_RCGC2_RCGCGPIOF       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC2_OFFSET)*32u)+(5*4u))))
#define SYSCTL_BITBANDING_RCGC2_RCGCUDMA        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC2_OFFSET)*32u)+(13*4u))))
#define SYSCTL_BITBANDING_RCGC2_RCGCUSB0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC2_OFFSET)*32u)+(16*4u))))

/**********************************************************************************
************************************137 SCGC0 *********************************************
******************************************************************************************/
#define SYSCTL_SCGC0            (((SCGC0_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGC0_OFFSET )))
#define SYSCTL_SCGC0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SCGC0_OFFSET)))
#define SYSCTL_BITBANDING_SCGC0      (((BITBANDING_SCGC0_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGC0_OFFSET)*32u))))


/*----------*/
#define SYSCTL_SCGC0_R_SCGCWDT0_MASK       (0x00000008u)
#define SYSCTL_SCGC0_R_SCGCWDT0_BIT        (3u)
#define SYSCTL_SCGC0_R_SCGCWDT0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC0_R_SCGCWDT0_CLOCK         (0x00000008u)

#define SYSCTL_SCGC0_SCGCWDT0_MASK       (0x00000001u)
#define SYSCTL_SCGC0_SCGCWDT0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC0_SCGCWDT0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC0_R_SCGCHIB_MASK       (0x00000040u)
#define SYSCTL_SCGC0_R_SCGCHIB_BIT        (6u)
#define SYSCTL_SCGC0_R_SCGCHIB_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC0_R_SCGCHIB_CLOCK         (0x00000040u)

#define SYSCTL_SCGC0_SCGCHIB_MASK       (0x00000001u)
#define SYSCTL_SCGC0_SCGCHIB_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC0_SCGCHIB_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC0_R_SCGCMAXADC0SPD_MASK       (0x00000030u)
#define SYSCTL_SCGC0_R_SCGCMAXADC0SPD_BIT        (8u)
#define SYSCTL_SCGC0_R_SCGCMAXADC0SPD_125K       (0x00000000u)
#define SYSCTL_SCGC0_R_SCGCMAXADC0SPD_250K       (0x00000010u)
#define SYSCTL_SCGC0_R_SCGCMAXADC0SPD_500K       (0x00000020u)
#define SYSCTL_SCGC0_R_SCGCMAXADC0SPD_1M         (0x00000030u)

#define SYSCTL_SCGC0_SCGCMAXADC0SPD_MASK         (0x00000003u)
#define SYSCTL_SCGC0_SCGCMAXADC0SPD_125K         (0x00000000u)
#define SYSCTL_SCGC0_SCGCMAXADC0SPD_250K         (0x00000001u)
#define SYSCTL_SCGC0_SCGCMAXADC0SPD_500K         (0x00000002u)
#define SYSCTL_SCGC0_SCGCMAXADC0SPD_1M           (0x00000003u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC0_R_SCGCMAXADC1SPD_MASK       (0x000000C0u)
#define SYSCTL_SCGC0_R_SCGCMAXADC1SPD_BIT        (10u)
#define SYSCTL_SCGC0_R_SCGCMAXADC1SPD_125K       (0x00000000u)
#define SYSCTL_SCGC0_R_SCGCMAXADC1SPD_250K       (0x00000040u)
#define SYSCTL_SCGC0_R_SCGCMAXADC1SPD_500K       (0x00000080u)
#define SYSCTL_SCGC0_R_SCGCMAXADC1SPD_1M         (0x000000C0u)

#define SYSCTL_SCGC0_SCGCMAXADC1SPD_MASK         (0x00000003u)
#define SYSCTL_SCGC0_SCGCMAXADC1SPD_125K         (0x00000000u)
#define SYSCTL_SCGC0_SCGCMAXADC1SPD_250K         (0x00000001u)
#define SYSCTL_SCGC0_SCGCMAXADC1SPD_500K         (0x00000002u)
#define SYSCTL_SCGC0_SCGCMAXADC1SPD_1M           (0x00000003u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC0_R_SCGCADC0_MASK       (0x00010000u)
#define SYSCTL_SCGC0_R_SCGCADC0_BIT        (16u)
#define SYSCTL_SCGC0_R_SCGCADC0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC0_R_SCGCADC0_CLOCK         (0x00010000u)

#define SYSCTL_SCGC0_SCGCADC0_MASK       (0x00000001u)
#define SYSCTL_SCGC0_SCGCADC0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC0_SCGCADC0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC0_R_SCGCADC1_MASK       (0x00020000u)
#define SYSCTL_SCGC0_R_SCGCADC1_BIT        (17u)
#define SYSCTL_SCGC0_R_SCGCADC1_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC0_R_SCGCADC1_CLOCK         (0x00020000u)

#define SYSCTL_SCGC0_SCGCADC1_MASK       (0x00000001u)
#define SYSCTL_SCGC0_SCGCADC1_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC0_SCGCADC1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC0_R_SCGCPWM0_MASK       (0x00100000u)
#define SYSCTL_SCGC0_R_SCGCPWM0_BIT        (20u)
#define SYSCTL_SCGC0_R_SCGCPWM0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC0_R_SCGCPWM0_CLOCK         (0x00100000u)

#define SYSCTL_SCGC0_SCGCPWM0_MASK       (0x00000001u)
#define SYSCTL_SCGC0_SCGCPWM0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC0_SCGCPWM0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC0_R_SCGCCAN0_MASK       (0x01000000u)
#define SYSCTL_SCGC0_R_SCGCCAN0_BIT        (24u)
#define SYSCTL_SCGC0_R_SCGCCAN0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC0_R_SCGCCAN0_CLOCK         (0x01000000u)

#define SYSCTL_SCGC0_SCGCCAN0_MASK       (0x00000001u)
#define SYSCTL_SCGC0_SCGCCAN0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC0_SCGCCAN0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC0_R_SCGCCAN1_MASK       (0x02000000u)
#define SYSCTL_SCGC0_R_SCGCCAN1_BIT        (25u)
#define SYSCTL_SCGC0_R_SCGCCAN1_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC0_R_SCGCCAN1_CLOCK         (0x02000000u)

#define SYSCTL_SCGC0_SCGCCAN1_MASK       (0x00000001u)
#define SYSCTL_SCGC0_SCGCCAN1_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC0_SCGCCAN1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC0_R_SCGCWDT1_MASK       (0x10000000u)
#define SYSCTL_SCGC0_R_SCGCWDT1_BIT        (28u)
#define SYSCTL_SCGC0_R_SCGCWDT1_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC0_R_SCGCWDT1_CLOCK         (0x10000000u)

#define SYSCTL_SCGC0_SCGCWDT1_MASK       (0x00000001u)
#define SYSCTL_SCGC0_SCGCWDT1_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC0_SCGCWDT1_CLOCK         (0x00000001u)
/*----------*/

#define SYSCTL_BITBANDING_SCGC0_SCGCWDT0      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC0_OFFSET)*32u)+(3*4u))))
#define SYSCTL_BITBANDING_SCGC0_SCGCHIB       (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC0_OFFSET)*32u)+(6*4u))))
#define SYSCTL_BITBANDING_SCGC0_SCGCADC0      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC0_OFFSET)*32u)+(16*4u))))
#define SYSCTL_BITBANDING_SCGC0_SCGCADC1      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC0_OFFSET)*32u)+(17*4u))))
#define SYSCTL_BITBANDING_SCGC0_SCGCPWM0      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC0_OFFSET)*32u)+(20*4u))))
#define SYSCTL_BITBANDING_SCGC0_SCGCCAN0      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC0_OFFSET)*32u)+(24*4u))))
#define SYSCTL_BITBANDING_SCGC0_SCGCCAN1      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC0_OFFSET)*32u)+(25*4u))))
#define SYSCTL_BITBANDING_SCGC0_SCGCWDT1      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC0_OFFSET)*32u)+(28*4u))))

/**********************************************************************************
************************************138 SCGC1 *********************************************
******************************************************************************************/
#define SYSCTL_SCGC1            (((SCGC1_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGC1_OFFSET )))
#define SYSCTL_SCGC1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SCGC1_OFFSET)))
#define SYSCTL_BITBANDING_SCGC1      (((BITBANDING_SCGC1_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32u))))


/*----------*/
#define SYSCTL_SCGC1_R_SCGCUART0_MASK       (0x00000001u)
#define SYSCTL_SCGC1_R_SCGCUART0_BIT        (0u)
#define SYSCTL_SCGC1_R_SCGCUART0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_R_SCGCUART0_CLOCK         (0x00000001u)

#define SYSCTL_SCGC1_SCGCUART0_MASK       (0x00000001u)
#define SYSCTL_SCGC1_SCGCUART0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_SCGCUART0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCUART1_MASK       (0x00000002u)
#define SYSCTL_SCGC1_R_SCGCUART1_BIT        (1u)
#define SYSCTL_SCGC1_R_SCGCUART1_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_R_SCGCUART1_CLOCK         (0x00000002u)

#define SYSCTL_SCGC1_SCGCUART1_MASK       (0x00000001u)
#define SYSCTL_SCGC1_SCGCUART1_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_SCGCUART1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCUART2_MASK       (0x00000004u)
#define SYSCTL_SCGC1_R_SCGCUART2_BIT        (2u)
#define SYSCTL_SCGC1_R_SCGCUART2_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_R_SCGCUART2_CLOCK         (0x00000004u)

#define SYSCTL_SCGC1_SCGCUART2_MASK       (0x00000001u)
#define SYSCTL_SCGC1_SCGCUART2_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_SCGCUART2_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCSSI0_MASK       (0x00000010u)
#define SYSCTL_SCGC1_R_SCGCSSI0_BIT        (4u)
#define SYSCTL_SCGC1_R_SCGCSSI0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_R_SCGCSSI0_CLOCK         (0x00000010u)

#define SYSCTL_SCGC1_SCGCSSI0_MASK       (0x00000001u)
#define SYSCTL_SCGC1_SCGCSSI0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_SCGCSSI0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCSSI1_MASK       (0x00000020u)
#define SYSCTL_SCGC1_R_SCGCSSI1_BIT        (5u)
#define SYSCTL_SCGC1_R_SCGCSSI1_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_R_SCGCSSI1_CLOCK         (0x00000010u)

#define SYSCTL_SCGC1_SCGCSSI1_MASK       (0x00000001u)
#define SYSCTL_SCGC1_SCGCSSI1_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_SCGCSSI1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCQEI0_MASK       (0x00000100u)
#define SYSCTL_SCGC1_R_SCGCQEI0_BIT        (8u)
#define SYSCTL_SCGC1_R_SCGCQEI0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_R_SCGCQEI0_CLOCK         (0x00000100u)

#define SYSCTL_SCGC1_SCGCQEI0_MASK       (0x00000001u)
#define SYSCTL_SCGC1_SCGCQEI0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_SCGCQEI0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCQEI1_MASK       (0x00000200u)
#define SYSCTL_SCGC1_R_SCGCQEI1_BIT        (9u)
#define SYSCTL_SCGC1_R_SCGCQEI1_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_R_SCGCQEI1_CLOCK         (0x00000200u)

#define SYSCTL_SCGC1_SCGCQEI1_MASK       (0x00000001u)
#define SYSCTL_SCGC1_SCGCQEI1_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_SCGCQEI1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCI2C0_MASK       (0x00001000u)
#define SYSCTL_SCGC1_R_SCGCI2C0_BIT        (12u)
#define SYSCTL_SCGC1_R_SCGCI2C0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_R_SCGCI2C0_CLOCK         (0x00001000u)

#define SYSCTL_SCGC1_SCGCI2C0_MASK       (0x00000001u)
#define SYSCTL_SCGC1_SCGCI2C0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_SCGCI2C0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCI2C1_MASK       (0x00004000u)
#define SYSCTL_SCGC1_R_SCGCI2C1_BIT        (14u)
#define SYSCTL_SCGC1_R_SCGCI2C1_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_R_SCGCI2C1_CLOCK         (0x00004000u)

#define SYSCTL_SCGC1_SCGCI2C1_MASK       (0x00000001u)
#define SYSCTL_SCGC1_SCGCI2C1_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_SCGCI2C1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCTIMER0_MASK       (0x00010000u)
#define SYSCTL_SCGC1_R_SCGCTIMER0_BIT        (16u)
#define SYSCTL_SCGC1_R_SCGCTIMER0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_R_SCGCTIMER0_CLOCK         (0x00010000u)

#define SYSCTL_SCGC1_SCGCTIMER0_MASK       (0x00000001u)
#define SYSCTL_SCGC1_SCGCTIMER0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_SCGCTIMER0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCTIMER1_MASK       (0x00020000u)
#define SYSCTL_SCGC1_R_SCGCTIMER1_BIT        (17u)
#define SYSCTL_SCGC1_R_SCGCTIMER1_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_R_SCGCTIMER1_CLOCK         (0x00020000u)

#define SYSCTL_SCGC1_SCGCTIMER1_MASK       (0x00000001u)
#define SYSCTL_SCGC1_SCGCTIMER1_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_SCGCTIMER1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCTIMER2_MASK       (0x00040000u)
#define SYSCTL_SCGC1_R_SCGCTIMER2_BIT        (18u)
#define SYSCTL_SCGC1_R_SCGCTIMER2_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_R_SCGCTIMER2_CLOCK         (0x00040000u)

#define SYSCTL_SCGC1_SCGCTIMER2_MASK       (0x00000001u)
#define SYSCTL_SCGC1_SCGCTIMER2_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_SCGCTIMER2_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCTIMER3_MASK       (0x00080000u)
#define SYSCTL_SCGC1_R_SCGCTIMER3_BIT        (19u)
#define SYSCTL_SCGC1_R_SCGCTIMER3_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_R_SCGCTIMER3_CLOCK         (0x00080000u)

#define SYSCTL_SCGC1_SCGCTIMER3_MASK       (0x00000001u)
#define SYSCTL_SCGC1_SCGCTIMER3_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_SCGCTIMER3_CLOCK         (0x00000001u)
/*----------*/


/*----------*/
#define SYSCTL_SCGC1_R_SCGCCOMP0_MASK       (0x01000000u)
#define SYSCTL_SCGC1_R_SCGCCOMP0_BIT        (24u)
#define SYSCTL_SCGC1_R_SCGCCOMP0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_R_SCGCCOMP0_CLOCK         (0x01000000u)

#define SYSCTL_SCGC1_SCGCCOMP0_MASK       (0x00000001u)
#define SYSCTL_SCGC1_SCGCCOMP0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_SCGCCOMP0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCCOMP1_MASK       (0x02000000u)
#define SYSCTL_SCGC1_R_SCGCCOMP1_BIT        (25u)
#define SYSCTL_SCGC1_R_SCGCCOMP1_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_R_SCGCCOMP1_CLOCK         (0x02000000u)

#define SYSCTL_SCGC1_SCGCCOMP1_MASK       (0x00000001u)
#define SYSCTL_SCGC1_SCGCCOMP1_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC1_SCGCCOMP1_CLOCK         (0x00000001u)
/*----------*/


#define SYSCTL_BITBANDING_SCGC1_SCGCUART0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32u)+(0*4u))))
#define SYSCTL_BITBANDING_SCGC1_SCGCUART1       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32u)+(1*4u))))
#define SYSCTL_BITBANDING_SCGC1_SCGCUART2       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32u)+(2*4u))))
#define SYSCTL_BITBANDING_SCGC1_SCGCSSI0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32u)+(4*4u))))
#define SYSCTL_BITBANDING_SCGC1_SCGCSSI1        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32u)+(5*4u))))
#define SYSCTL_BITBANDING_SCGC1_SCGCQEI0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32u)+(8*4u))))
#define SYSCTL_BITBANDING_SCGC1_SCGCQEI1        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32u)+(9*4u))))
#define SYSCTL_BITBANDING_SCGC1_SCGCI2C0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32u)+(12*4u))))
#define SYSCTL_BITBANDING_SCGC1_SCGCI2C1        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32u)+(14*4u))))
#define SYSCTL_BITBANDING_SCGC1_SCGCTIMER0      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32u)+(16*4u))))
#define SYSCTL_BITBANDING_SCGC1_SCGCTIMER1      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32u)+(17*4u))))
#define SYSCTL_BITBANDING_SCGC1_SCGCTIMER2      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32u)+(18*4u))))
#define SYSCTL_BITBANDING_SCGC1_SCGCTIMER3      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32u)+(19*4u))))
#define SYSCTL_BITBANDING_SCGC1_SCGCCOMP0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32u)+(24*4u))))
#define SYSCTL_BITBANDING_SCGC1_SCGCCOMP1       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32u)+(25*4u))))

/**********************************************************************************
************************************139 SCGC2 *********************************************
******************************************************************************************/
#define SYSCTL_SCGC2            (((SCGC2_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGC2_OFFSET )))
#define SYSCTL_SCGC2_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SCGC2_OFFSET)))
#define SYSCTL_BITBANDING_SCGC2      (((BITBANDING_SCGC2_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_SCGC2_OFFSET)*32u))))


/*----------*/
#define SYSCTL_SCGC2_R_SCGCGPIOA_MASK       (0x00000001u)
#define SYSCTL_SCGC2_R_SCGCGPIOA_BIT        (0u)
#define SYSCTL_SCGC2_R_SCGCGPIOA_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC2_R_SCGCGPIOA_CLOCK         (0x00000001u)

#define SYSCTL_SCGC2_SCGCGPIOA_MASK       (0x00000001u)
#define SYSCTL_SCGC2_SCGCGPIOA_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC2_SCGCGPIOA_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC2_R_SCGCGPIOB_MASK       (0x00000002u)
#define SYSCTL_SCGC2_R_SCGCGPIOB_BIT        (1u)
#define SYSCTL_SCGC2_R_SCGCGPIOB_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC2_R_SCGCGPIOB_CLOCK         (0x00000002u)

#define SYSCTL_SCGC2_SCGCGPIOB_MASK       (0x00000001u)
#define SYSCTL_SCGC2_SCGCGPIOB_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC2_SCGCGPIOB_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC2_R_SCGCGPIOC_MASK       (0x00000004u)
#define SYSCTL_SCGC2_R_SCGCGPIOC_BIT        (2u)
#define SYSCTL_SCGC2_R_SCGCGPIOC_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC2_R_SCGCGPIOC_CLOCK         (0x00000004u)

#define SYSCTL_SCGC2_SCGCGPIOC_MASK       (0x00000001u)
#define SYSCTL_SCGC2_SCGCGPIOC_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC2_SCGCGPIOC_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC2_R_SCGCGPIOD_MASK       (0x00000008u)
#define SYSCTL_SCGC2_R_SCGCGPIOD_BIT        (3u)
#define SYSCTL_SCGC2_R_SCGCGPIOD_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC2_R_SCGCGPIOD_CLOCK         (0x00000008u)

#define SYSCTL_SCGC2_SCGCGPIOD_MASK       (0x00000001u)
#define SYSCTL_SCGC2_SCGCGPIOD_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC2_SCGCGPIOD_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC2_R_SCGCGPIOE_MASK       (0x00000010u)
#define SYSCTL_SCGC2_R_SCGCGPIOE_BIT        (4u)
#define SYSCTL_SCGC2_R_SCGCGPIOE_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC2_R_SCGCGPIOE_CLOCK         (0x00000010u)

#define SYSCTL_SCGC2_SCGCGPIOE_MASK       (0x00000001u)
#define SYSCTL_SCGC2_SCGCGPIOE_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC2_SCGCGPIOE_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC2_R_SCGCGPIOF_MASK       (0x00000020u)
#define SYSCTL_SCGC2_R_SCGCGPIOF_BIT        (5u)
#define SYSCTL_SCGC2_R_SCGCGPIOF_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC2_R_SCGCGPIOF_CLOCK         (0x00000020u)

#define SYSCTL_SCGC2_SCGCGPIOF_MASK       (0x00000001u)
#define SYSCTL_SCGC2_SCGCGPIOF_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC2_SCGCGPIOF_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC2_R_SCGCUDMA_MASK       (0x00002000u)
#define SYSCTL_SCGC2_R_SCGCUDMA_BIT        (13u)
#define SYSCTL_SCGC2_R_SCGCUDMA_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC2_R_SCGCUDMA_CLOCK         (0x00002000u)

#define SYSCTL_SCGC2_SCGCUDMA_MASK       (0x00000001u)
#define SYSCTL_SCGC2_SCGCUDMA_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC2_SCGCUDMA_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC2_R_SCGCUSB0_MASK       (0x00010000u)
#define SYSCTL_SCGC2_R_SCGCUSB0_BIT        (16u)
#define SYSCTL_SCGC2_R_SCGCUSB0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC2_R_SCGCUSB0_CLOCK         (0x00010000u)

#define SYSCTL_SCGC2_SCGCUSB0_MASK       (0x00000001u)
#define SYSCTL_SCGC2_SCGCUSB0_UNCLOCK        (0x00000000u)
#define SYSCTL_SCGC2_SCGCUSB0_CLOCK         (0x00000001u)
/*----------*/

#define SYSCTL_BITBANDING_SCGC2_SCGCGPIOA       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC2_OFFSET)*32u)+(0*4u))))
#define SYSCTL_BITBANDING_SCGC2_SCGCGPIOB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC2_OFFSET)*32u)+(1*4u))))
#define SYSCTL_BITBANDING_SCGC2_SCGCGPIOC       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC2_OFFSET)*32u)+(2*4u))))
#define SYSCTL_BITBANDING_SCGC2_SCGCGPIOD       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC2_OFFSET)*32u)+(3*4u))))
#define SYSCTL_BITBANDING_SCGC2_SCGCGPIOE       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC2_OFFSET)*32u)+(4*4u))))
#define SYSCTL_BITBANDING_SCGC2_SCGCGPIOF       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC2_OFFSET)*32u)+(5*4u))))
#define SYSCTL_BITBANDING_SCGC2_SCGCUDMA        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC2_OFFSET)*32u)+(13*4u))))
#define SYSCTL_BITBANDING_SCGC2_SCGCUSB0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC2_OFFSET)*32u)+(16*4u))))

/**********************************************************************************
************************************140 DCGC0 *********************************************
******************************************************************************************/
#define SYSCTL_DCGC0            (((DCGC0_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGC0_OFFSET )))
#define SYSCTL_DCGC0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DCGC0_OFFSET)))
#define SYSCTL_BITBANDING_DCGC0      (((BITBANDING_DCGC0_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGC0_OFFSET)*32u))))


/*----------*/
#define SYSCTL_DCGC0_R_DCGCWDT0_MASK       (0x00000008u)
#define SYSCTL_DCGC0_R_DCGCWDT0_BIT        (3u)
#define SYSCTL_DCGC0_R_DCGCWDT0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC0_R_DCGCWDT0_CLOCK         (0x00000008u)

#define SYSCTL_DCGC0_DCGCWDT0_MASK       (0x00000001u)
#define SYSCTL_DCGC0_DCGCWDT0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC0_DCGCWDT0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC0_R_DCGCHIB_MASK       (0x00000040u)
#define SYSCTL_DCGC0_R_DCGCHIB_BIT        (6u)
#define SYSCTL_DCGC0_R_DCGCHIB_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC0_R_DCGCHIB_CLOCK         (0x00000040u)

#define SYSCTL_DCGC0_DCGCHIB_MASK       (0x00000001u)
#define SYSCTL_DCGC0_DCGCHIB_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC0_DCGCHIB_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC0_R_DCGCMAXADC0SPD_MASK       (0x00000030u)
#define SYSCTL_DCGC0_R_DCGCMAXADC0SPD_BIT        (8u)
#define SYSCTL_DCGC0_R_DCGCMAXADC0SPD_125K       (0x00000000u)
#define SYSCTL_DCGC0_R_DCGCMAXADC0SPD_250K       (0x00000010u)
#define SYSCTL_DCGC0_R_DCGCMAXADC0SPD_500K       (0x00000020u)
#define SYSCTL_DCGC0_R_DCGCMAXADC0SPD_1M         (0x00000030u)

#define SYSCTL_DCGC0_DCGCMAXADC0SPD_MASK         (0x00000003u)
#define SYSCTL_DCGC0_DCGCMAXADC0SPD_125K         (0x00000000u)
#define SYSCTL_DCGC0_DCGCMAXADC0SPD_250K         (0x00000001u)
#define SYSCTL_DCGC0_DCGCMAXADC0SPD_500K         (0x00000002u)
#define SYSCTL_DCGC0_DCGCMAXADC0SPD_1M           (0x00000003u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC0_R_DCGCMAXADC1SPD_MASK       (0x000000C0u)
#define SYSCTL_DCGC0_R_DCGCMAXADC1SPD_BIT        (10u)
#define SYSCTL_DCGC0_R_DCGCMAXADC1SPD_125K       (0x00000000u)
#define SYSCTL_DCGC0_R_DCGCMAXADC1SPD_250K       (0x00000040u)
#define SYSCTL_DCGC0_R_DCGCMAXADC1SPD_500K       (0x00000080u)
#define SYSCTL_DCGC0_R_DCGCMAXADC1SPD_1M         (0x000000C0u)

#define SYSCTL_DCGC0_DCGCMAXADC1SPD_MASK         (0x00000003u)
#define SYSCTL_DCGC0_DCGCMAXADC1SPD_125K         (0x00000000u)
#define SYSCTL_DCGC0_DCGCMAXADC1SPD_250K         (0x00000001u)
#define SYSCTL_DCGC0_DCGCMAXADC1SPD_500K         (0x00000002u)
#define SYSCTL_DCGC0_DCGCMAXADC1SPD_1M           (0x00000003u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC0_R_DCGCADC0_MASK       (0x00010000u)
#define SYSCTL_DCGC0_R_DCGCADC0_BIT        (16u)
#define SYSCTL_DCGC0_R_DCGCADC0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC0_R_DCGCADC0_CLOCK         (0x00010000u)

#define SYSCTL_DCGC0_DCGCADC0_MASK       (0x00000001u)
#define SYSCTL_DCGC0_DCGCADC0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC0_DCGCADC0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC0_R_DCGCADC1_MASK       (0x00020000u)
#define SYSCTL_DCGC0_R_DCGCADC1_BIT        (17u)
#define SYSCTL_DCGC0_R_DCGCADC1_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC0_R_DCGCADC1_CLOCK         (0x00020000u)

#define SYSCTL_DCGC0_DCGCADC1_MASK       (0x00000001u)
#define SYSCTL_DCGC0_DCGCADC1_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC0_DCGCADC1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC0_R_DCGCPWM0_MASK       (0x00100000u)
#define SYSCTL_DCGC0_R_DCGCPWM0_BIT        (20u)
#define SYSCTL_DCGC0_R_DCGCPWM0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC0_R_DCGCPWM0_CLOCK         (0x00100000u)

#define SYSCTL_DCGC0_DCGCPWM0_MASK       (0x00000001u)
#define SYSCTL_DCGC0_DCGCPWM0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC0_DCGCPWM0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC0_R_DCGCCAN0_MASK       (0x01000000u)
#define SYSCTL_DCGC0_R_DCGCCAN0_BIT        (24u)
#define SYSCTL_DCGC0_R_DCGCCAN0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC0_R_DCGCCAN0_CLOCK         (0x01000000u)

#define SYSCTL_DCGC0_DCGCCAN0_MASK       (0x00000001u)
#define SYSCTL_DCGC0_DCGCCAN0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC0_DCGCCAN0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC0_R_DCGCCAN1_MASK       (0x02000000u)
#define SYSCTL_DCGC0_R_DCGCCAN1_BIT        (25u)
#define SYSCTL_DCGC0_R_DCGCCAN1_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC0_R_DCGCCAN1_CLOCK         (0x02000000u)

#define SYSCTL_DCGC0_DCGCCAN1_MASK       (0x00000001u)
#define SYSCTL_DCGC0_DCGCCAN1_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC0_DCGCCAN1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC0_R_DCGCWDT1_MASK       (0x10000000u)
#define SYSCTL_DCGC0_R_DCGCWDT1_BIT        (28u)
#define SYSCTL_DCGC0_R_DCGCWDT1_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC0_R_DCGCWDT1_CLOCK         (0x10000000u)

#define SYSCTL_DCGC0_DCGCWDT1_MASK       (0x00000001u)
#define SYSCTL_DCGC0_DCGCWDT1_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC0_DCGCWDT1_CLOCK         (0x00000001u)
/*----------*/

#define SYSCTL_BITBANDING_DCGC0_DCGCWDT0      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC0_OFFSET)*32u)+(3*4u))))
#define SYSCTL_BITBANDING_DCGC0_DCGCHIB       (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC0_OFFSET)*32u)+(6*4u))))
#define SYSCTL_BITBANDING_DCGC0_DCGCADC0      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC0_OFFSET)*32u)+(16*4u))))
#define SYSCTL_BITBANDING_DCGC0_DCGCADC1      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC0_OFFSET)*32u)+(17*4u))))
#define SYSCTL_BITBANDING_DCGC0_DCGCPWM0      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC0_OFFSET)*32u)+(20*4u))))
#define SYSCTL_BITBANDING_DCGC0_DCGCCAN0      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC0_OFFSET)*32u)+(24*4u))))
#define SYSCTL_BITBANDING_DCGC0_DCGCCAN1      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC0_OFFSET)*32u)+(25*4u))))
#define SYSCTL_BITBANDING_DCGC0_DCGCWDT1      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC0_OFFSET)*32u)+(28*4u))))

/**********************************************************************************
************************************141 DCGC1 *********************************************
******************************************************************************************/
#define SYSCTL_DCGC1            (((DCGC1_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGC1_OFFSET )))
#define SYSCTL_DCGC1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DCGC1_OFFSET)))
#define SYSCTL_BITBANDING_DCGC1      (((BITBANDING_DCGC1_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32u))))


/*----------*/
#define SYSCTL_DCGC1_R_DCGCUART0_MASK       (0x00000001u)
#define SYSCTL_DCGC1_R_DCGCUART0_BIT        (0u)
#define SYSCTL_DCGC1_R_DCGCUART0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_R_DCGCUART0_CLOCK         (0x00000001u)

#define SYSCTL_DCGC1_DCGCUART0_MASK       (0x00000001u)
#define SYSCTL_DCGC1_DCGCUART0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_DCGCUART0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCUART1_MASK       (0x00000002u)
#define SYSCTL_DCGC1_R_DCGCUART1_BIT        (1u)
#define SYSCTL_DCGC1_R_DCGCUART1_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_R_DCGCUART1_CLOCK         (0x00000002u)

#define SYSCTL_DCGC1_DCGCUART1_MASK       (0x00000001u)
#define SYSCTL_DCGC1_DCGCUART1_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_DCGCUART1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCUART2_MASK       (0x00000004u)
#define SYSCTL_DCGC1_R_DCGCUART2_BIT        (2u)
#define SYSCTL_DCGC1_R_DCGCUART2_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_R_DCGCUART2_CLOCK         (0x00000004u)

#define SYSCTL_DCGC1_DCGCUART2_MASK       (0x00000001u)
#define SYSCTL_DCGC1_DCGCUART2_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_DCGCUART2_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCSSI0_MASK       (0x00000010u)
#define SYSCTL_DCGC1_R_DCGCSSI0_BIT        (4u)
#define SYSCTL_DCGC1_R_DCGCSSI0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_R_DCGCSSI0_CLOCK         (0x00000010u)

#define SYSCTL_DCGC1_DCGCSSI0_MASK       (0x00000001u)
#define SYSCTL_DCGC1_DCGCSSI0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_DCGCSSI0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCSSI1_MASK       (0x00000020u)
#define SYSCTL_DCGC1_R_DCGCSSI1_BIT        (5u)
#define SYSCTL_DCGC1_R_DCGCSSI1_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_R_DCGCSSI1_CLOCK         (0x00000010u)

#define SYSCTL_DCGC1_DCGCSSI1_MASK       (0x00000001u)
#define SYSCTL_DCGC1_DCGCSSI1_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_DCGCSSI1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCQEI0_MASK       (0x00000100u)
#define SYSCTL_DCGC1_R_DCGCQEI0_BIT        (8u)
#define SYSCTL_DCGC1_R_DCGCQEI0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_R_DCGCQEI0_CLOCK         (0x00000100u)

#define SYSCTL_DCGC1_DCGCQEI0_MASK       (0x00000001u)
#define SYSCTL_DCGC1_DCGCQEI0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_DCGCQEI0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCQEI1_MASK       (0x00000200u)
#define SYSCTL_DCGC1_R_DCGCQEI1_BIT        (9u)
#define SYSCTL_DCGC1_R_DCGCQEI1_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_R_DCGCQEI1_CLOCK         (0x00000200u)

#define SYSCTL_DCGC1_DCGCQEI1_MASK       (0x00000001u)
#define SYSCTL_DCGC1_DCGCQEI1_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_DCGCQEI1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCI2C0_MASK       (0x00001000u)
#define SYSCTL_DCGC1_R_DCGCI2C0_BIT        (12u)
#define SYSCTL_DCGC1_R_DCGCI2C0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_R_DCGCI2C0_CLOCK         (0x00001000u)

#define SYSCTL_DCGC1_DCGCI2C0_MASK       (0x00000001u)
#define SYSCTL_DCGC1_DCGCI2C0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_DCGCI2C0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCI2C1_MASK       (0x00004000u)
#define SYSCTL_DCGC1_R_DCGCI2C1_BIT        (14u)
#define SYSCTL_DCGC1_R_DCGCI2C1_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_R_DCGCI2C1_CLOCK         (0x00004000u)

#define SYSCTL_DCGC1_DCGCI2C1_MASK       (0x00000001u)
#define SYSCTL_DCGC1_DCGCI2C1_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_DCGCI2C1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCTIMER0_MASK       (0x00010000u)
#define SYSCTL_DCGC1_R_DCGCTIMER0_BIT        (16u)
#define SYSCTL_DCGC1_R_DCGCTIMER0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_R_DCGCTIMER0_CLOCK         (0x00010000u)

#define SYSCTL_DCGC1_DCGCTIMER0_MASK       (0x00000001u)
#define SYSCTL_DCGC1_DCGCTIMER0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_DCGCTIMER0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCTIMER1_MASK       (0x00020000u)
#define SYSCTL_DCGC1_R_DCGCTIMER1_BIT        (17u)
#define SYSCTL_DCGC1_R_DCGCTIMER1_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_R_DCGCTIMER1_CLOCK         (0x00020000u)

#define SYSCTL_DCGC1_DCGCTIMER1_MASK       (0x00000001u)
#define SYSCTL_DCGC1_DCGCTIMER1_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_DCGCTIMER1_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCTIMER2_MASK       (0x00040000u)
#define SYSCTL_DCGC1_R_DCGCTIMER2_BIT        (18u)
#define SYSCTL_DCGC1_R_DCGCTIMER2_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_R_DCGCTIMER2_CLOCK         (0x00040000u)

#define SYSCTL_DCGC1_DCGCTIMER2_MASK       (0x00000001u)
#define SYSCTL_DCGC1_DCGCTIMER2_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_DCGCTIMER2_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCTIMER3_MASK       (0x00080000u)
#define SYSCTL_DCGC1_R_DCGCTIMER3_BIT        (19u)
#define SYSCTL_DCGC1_R_DCGCTIMER3_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_R_DCGCTIMER3_CLOCK         (0x00080000u)

#define SYSCTL_DCGC1_DCGCTIMER3_MASK       (0x00000001u)
#define SYSCTL_DCGC1_DCGCTIMER3_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_DCGCTIMER3_CLOCK         (0x00000001u)
/*----------*/


/*----------*/
#define SYSCTL_DCGC1_R_DCGCCOMP0_MASK       (0x01000000u)
#define SYSCTL_DCGC1_R_DCGCCOMP0_BIT        (24u)
#define SYSCTL_DCGC1_R_DCGCCOMP0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_R_DCGCCOMP0_CLOCK         (0x01000000u)

#define SYSCTL_DCGC1_DCGCCOMP0_MASK       (0x00000001u)
#define SYSCTL_DCGC1_DCGCCOMP0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_DCGCCOMP0_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCCOMP1_MASK       (0x02000000u)
#define SYSCTL_DCGC1_R_DCGCCOMP1_BIT        (25u)
#define SYSCTL_DCGC1_R_DCGCCOMP1_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_R_DCGCCOMP1_CLOCK         (0x02000000u)

#define SYSCTL_DCGC1_DCGCCOMP1_MASK       (0x00000001u)
#define SYSCTL_DCGC1_DCGCCOMP1_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC1_DCGCCOMP1_CLOCK         (0x00000001u)
/*----------*/


#define SYSCTL_BITBANDING_DCGC1_DCGCUART0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32u)+(0*4u))))
#define SYSCTL_BITBANDING_DCGC1_DCGCUART1       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32u)+(1*4u))))
#define SYSCTL_BITBANDING_DCGC1_DCGCUART2       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32u)+(2*4u))))
#define SYSCTL_BITBANDING_DCGC1_DCGCSSI0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32u)+(4*4u))))
#define SYSCTL_BITBANDING_DCGC1_DCGCSSI1        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32u)+(5*4u))))
#define SYSCTL_BITBANDING_DCGC1_DCGCQEI0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32u)+(8*4u))))
#define SYSCTL_BITBANDING_DCGC1_DCGCQEI1        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32u)+(9*4u))))
#define SYSCTL_BITBANDING_DCGC1_DCGCI2C0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32u)+(12*4u))))
#define SYSCTL_BITBANDING_DCGC1_DCGCI2C1        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32u)+(14*4u))))
#define SYSCTL_BITBANDING_DCGC1_DCGCTIMER0      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32u)+(16*4u))))
#define SYSCTL_BITBANDING_DCGC1_DCGCTIMER1      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32u)+(17*4u))))
#define SYSCTL_BITBANDING_DCGC1_DCGCTIMER2      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32u)+(18*4u))))
#define SYSCTL_BITBANDING_DCGC1_DCGCTIMER3      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32u)+(19*4u))))
#define SYSCTL_BITBANDING_DCGC1_DCGCCOMP0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32u)+(24*4u))))
#define SYSCTL_BITBANDING_DCGC1_DCGCCOMP1       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32u)+(25*4u))))

/**********************************************************************************
************************************142 DCGC2 *********************************************
******************************************************************************************/
#define SYSCTL_DCGC2            (((DCGC2_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGC2_OFFSET )))
#define SYSCTL_DCGC2_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DCGC2_OFFSET)))
#define SYSCTL_BITBANDING_DCGC2      (((BITBANDING_DCGC2_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DCGC2_OFFSET)*32u))))


/*----------*/
#define SYSCTL_DCGC2_R_DCGCGPIOA_MASK       (0x00000001u)
#define SYSCTL_DCGC2_R_DCGCGPIOA_BIT        (0u)
#define SYSCTL_DCGC2_R_DCGCGPIOA_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC2_R_DCGCGPIOA_CLOCK         (0x00000001u)

#define SYSCTL_DCGC2_DCGCGPIOA_MASK       (0x00000001u)
#define SYSCTL_DCGC2_DCGCGPIOA_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC2_DCGCGPIOA_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC2_R_DCGCGPIOB_MASK       (0x00000002u)
#define SYSCTL_DCGC2_R_DCGCGPIOB_BIT        (1u)
#define SYSCTL_DCGC2_R_DCGCGPIOB_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC2_R_DCGCGPIOB_CLOCK         (0x00000002u)

#define SYSCTL_DCGC2_DCGCGPIOB_MASK       (0x00000001u)
#define SYSCTL_DCGC2_DCGCGPIOB_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC2_DCGCGPIOB_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC2_R_DCGCGPIOC_MASK       (0x00000004u)
#define SYSCTL_DCGC2_R_DCGCGPIOC_BIT        (2u)
#define SYSCTL_DCGC2_R_DCGCGPIOC_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC2_R_DCGCGPIOC_CLOCK         (0x00000004u)

#define SYSCTL_DCGC2_DCGCGPIOC_MASK       (0x00000001u)
#define SYSCTL_DCGC2_DCGCGPIOC_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC2_DCGCGPIOC_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC2_R_DCGCGPIOD_MASK       (0x00000008u)
#define SYSCTL_DCGC2_R_DCGCGPIOD_BIT        (3u)
#define SYSCTL_DCGC2_R_DCGCGPIOD_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC2_R_DCGCGPIOD_CLOCK         (0x00000008u)

#define SYSCTL_DCGC2_DCGCGPIOD_MASK       (0x00000001u)
#define SYSCTL_DCGC2_DCGCGPIOD_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC2_DCGCGPIOD_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC2_R_DCGCGPIOE_MASK       (0x00000010u)
#define SYSCTL_DCGC2_R_DCGCGPIOE_BIT        (4u)
#define SYSCTL_DCGC2_R_DCGCGPIOE_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC2_R_DCGCGPIOE_CLOCK         (0x00000010u)

#define SYSCTL_DCGC2_DCGCGPIOE_MASK       (0x00000001u)
#define SYSCTL_DCGC2_DCGCGPIOE_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC2_DCGCGPIOE_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC2_R_DCGCGPIOF_MASK       (0x00000020u)
#define SYSCTL_DCGC2_R_DCGCGPIOF_BIT        (5u)
#define SYSCTL_DCGC2_R_DCGCGPIOF_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC2_R_DCGCGPIOF_CLOCK         (0x00000020u)

#define SYSCTL_DCGC2_DCGCGPIOF_MASK       (0x00000001u)
#define SYSCTL_DCGC2_DCGCGPIOF_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC2_DCGCGPIOF_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC2_R_DCGCUDMA_MASK       (0x00002000u)
#define SYSCTL_DCGC2_R_DCGCUDMA_BIT        (13u)
#define SYSCTL_DCGC2_R_DCGCUDMA_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC2_R_DCGCUDMA_CLOCK         (0x00002000u)

#define SYSCTL_DCGC2_DCGCUDMA_MASK       (0x00000001u)
#define SYSCTL_DCGC2_DCGCUDMA_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC2_DCGCUDMA_CLOCK         (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC2_R_DCGCUSB0_MASK       (0x00010000u)
#define SYSCTL_DCGC2_R_DCGCUSB0_BIT        (16u)
#define SYSCTL_DCGC2_R_DCGCUSB0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC2_R_DCGCUSB0_CLOCK         (0x00010000u)

#define SYSCTL_DCGC2_DCGCUSB0_MASK       (0x00000001u)
#define SYSCTL_DCGC2_DCGCUSB0_UNCLOCK        (0x00000000u)
#define SYSCTL_DCGC2_DCGCUSB0_CLOCK         (0x00000001u)
/*----------*/

#define SYSCTL_BITBANDING_DCGC2_DCGCGPIOA       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC2_OFFSET)*32u)+(SYSCTL_DCGC2_R_DCGCGPIOA_BIT*4u))))
#define SYSCTL_BITBANDING_DCGC2_DCGCGPIOB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC2_OFFSET)*32u)+(SYSCTL_DCGC2_R_DCGCGPIOB_BIT*4u))))
#define SYSCTL_BITBANDING_DCGC2_DCGCGPIOC       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC2_OFFSET)*32u)+(SYSCTL_DCGC2_R_DCGCGPIOC_BIT*4u))))
#define SYSCTL_BITBANDING_DCGC2_DCGCGPIOD       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC2_OFFSET)*32u)+(SYSCTL_DCGC2_R_DCGCGPIOD_BIT*4u))))
#define SYSCTL_BITBANDING_DCGC2_DCGCGPIOE       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC2_OFFSET)*32u)+(SYSCTL_DCGC2_R_DCGCGPIOE_BIT*4u))))
#define SYSCTL_BITBANDING_DCGC2_DCGCGPIOF       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC2_OFFSET)*32u)+(SYSCTL_DCGC2_R_DCGCGPIOF_BIT*4u))))
#define SYSCTL_BITBANDING_DCGC2_DCGCUDMA        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC2_OFFSET)*32u)+(SYSCTL_DCGC2_R_DCGCUDMA_BIT*4u))))
#define SYSCTL_BITBANDING_DCGC2_DCGCUSB0        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC2_OFFSET)*32u)+(SYSCTL_DCGC2_R_DCGCUSB0_BIT*4u))))

/**********************************************************************************
************************************143 DC9 *********************************************
******************************************************************************************/
#define SYSCTL_DC9            (((DC9_TypeDef*)(SYSCTL_BASE+SYSCTL_DC9_OFFSET )))
#define SYSCTL_DC9_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC9_OFFSET)))
#define SYSCTL_BITBANDING_DC9      (((BITBANDING_DC9_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32u))))


/*----------*/
#define SYSCTL_DC9_R_DCADC0DC0_MASK       (0x00000001u)
#define SYSCTL_DC9_R_DCADC0DC0_BIT        (0u)
#define SYSCTL_DC9_R_DCADC0DC0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_R_DCADC0DC0_PRESENT    (0x00000001u)

#define SYSCTL_DC9_DCADC0DC0_MASK       (0x00000001u)
#define SYSCTL_DC9_DCADC0DC0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_DCADC0DC0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC0DC1_MASK       (0x00000002u)
#define SYSCTL_DC9_R_DCADC0DC1_BIT        (1u)
#define SYSCTL_DC9_R_DCADC0DC1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_R_DCADC0DC1_PRESENT    (0x00000002u)

#define SYSCTL_DC9_DCADC0DC1_MASK       (0x00000001u)
#define SYSCTL_DC9_DCADC0DC1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_DCADC0DC1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC0DC2_MASK       (0x00000004u)
#define SYSCTL_DC9_R_DCADC0DC2_BIT        (2u)
#define SYSCTL_DC9_R_DCADC0DC2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_R_DCADC0DC2_PRESENT    (0x00000004u)

#define SYSCTL_DC9_DCADC0DC2_MASK       (0x00000001u)
#define SYSCTL_DC9_DCADC0DC2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_DCADC0DC2_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC0DC3_MASK       (0x00000008u)
#define SYSCTL_DC9_R_DCADC0DC3_BIT        (3u)
#define SYSCTL_DC9_R_DCADC0DC3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_R_DCADC0DC3_PRESENT    (0x00000008u)

#define SYSCTL_DC9_DCADC0DC3_MASK       (0x00000001u)
#define SYSCTL_DC9_DCADC0DC3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_DCADC0DC3_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC0DC4_MASK       (0x00000010u)
#define SYSCTL_DC9_R_DCADC0DC4_BIT        (4u)
#define SYSCTL_DC9_R_DCADC0DC4_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_R_DCADC0DC4_PRESENT    (0x00000010u)

#define SYSCTL_DC9_DCADC0DC4_MASK       (0x00000001u)
#define SYSCTL_DC9_DCADC0DC4_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_DCADC0DC4_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC0DC5_MASK       (0x00000020u)
#define SYSCTL_DC9_R_DCADC0DC5_BIT        (5u)
#define SYSCTL_DC9_R_DCADC0DC5_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_R_DCADC0DC5_PRESENT    (0x00000020u)

#define SYSCTL_DC9_DCADC0DC5_MASK       (0x00000001u)
#define SYSCTL_DC9_DCADC0DC5_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_DCADC0DC5_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC0DC6_MASK       (0x00000040u)
#define SYSCTL_DC9_R_DCADC0DC6_BIT        (6u)
#define SYSCTL_DC9_R_DCADC0DC6_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_R_DCADC0DC6_PRESENT    (0x00000040u)

#define SYSCTL_DC9_DCADC0DC6_MASK       (0x00000001u)
#define SYSCTL_DC9_DCADC0DC6_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_DCADC0DC6_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC0DC7_MASK       (0x00000080u)
#define SYSCTL_DC9_R_DCADC0DC7_BIT        (7u)
#define SYSCTL_DC9_R_DCADC0DC7_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_R_DCADC0DC7_PRESENT    (0x00000080u)

#define SYSCTL_DC9_DCADC0DC7_MASK       (0x00000001u)
#define SYSCTL_DC9_DCADC0DC7_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_DCADC0DC7_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC1DC0_MASK       (0x00010000u)
#define SYSCTL_DC9_R_DCADC1DC0_BIT        (16u)
#define SYSCTL_DC9_R_DCADC1DC0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_R_DCADC1DC0_PRESENT    (0x00010000u)

#define SYSCTL_DC9_DCADC1DC0_MASK       (0x00000001u)
#define SYSCTL_DC9_DCADC1DC0_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_DCADC1DC0_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC1DC1_MASK       (0x00020000u)
#define SYSCTL_DC9_R_DCADC1DC1_BIT        (17u)
#define SYSCTL_DC9_R_DCADC1DC1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_R_DCADC1DC1_PRESENT    (0x00020000u)

#define SYSCTL_DC9_DCADC1DC1_MASK       (0x00000001u)
#define SYSCTL_DC9_DCADC1DC1_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_DCADC1DC1_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC1DC2_MASK       (0x00040000u)
#define SYSCTL_DC9_R_DCADC1DC2_BIT        (18u)
#define SYSCTL_DC9_R_DCADC1DC2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_R_DCADC1DC2_PRESENT    (0x00040000u)

#define SYSCTL_DC9_DCADC1DC2_MASK       (0x00000001u)
#define SYSCTL_DC9_DCADC1DC2_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_DCADC1DC2_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC1DC3_MASK       (0x00080000u)
#define SYSCTL_DC9_R_DCADC1DC3_BIT        (19u)
#define SYSCTL_DC9_R_DCADC1DC3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_R_DCADC1DC3_PRESENT    (0x00080000u)

#define SYSCTL_DC9_DCADC1DC3_MASK       (0x00000001u)
#define SYSCTL_DC9_DCADC1DC3_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_DCADC1DC3_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC1DC4_MASK       (0x00100000u)
#define SYSCTL_DC9_R_DCADC1DC4_BIT        (20u)
#define SYSCTL_DC9_R_DCADC1DC4_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_R_DCADC1DC4_PRESENT    (0x00100000u)

#define SYSCTL_DC9_DCADC1DC4_MASK       (0x00000001u)
#define SYSCTL_DC9_DCADC1DC4_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_DCADC1DC4_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC1DC5_MASK       (0x00200000u)
#define SYSCTL_DC9_R_DCADC1DC5_BIT        (21u)
#define SYSCTL_DC9_R_DCADC1DC5_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_R_DCADC1DC5_PRESENT    (0x00200000u)

#define SYSCTL_DC9_DCADC1DC5_MASK       (0x00000001u)
#define SYSCTL_DC9_DCADC1DC5_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_DCADC1DC5_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC1DC6_MASK       (0x00400000u)
#define SYSCTL_DC9_R_DCADC1DC6_BIT        (22u)
#define SYSCTL_DC9_R_DCADC1DC6_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_R_DCADC1DC6_PRESENT    (0x00400000u)

#define SYSCTL_DC9_DCADC1DC6_MASK       (0x00000001u)
#define SYSCTL_DC9_DCADC1DC6_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_DCADC1DC6_PRESENT    (0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC1DC7_MASK       (0x00800000u)
#define SYSCTL_DC9_R_DCADC1DC7_BIT        (23u)
#define SYSCTL_DC9_R_DCADC1DC7_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_R_DCADC1DC7_PRESENT    (0x00800000u)

#define SYSCTL_DC9_DCADC1DC7_MASK       (0x00000001u)
#define SYSCTL_DC9_DCADC1DC7_NOPRESENT  (0x00000000u)
#define SYSCTL_DC9_DCADC1DC7_PRESENT    (0x00000001u)
/*----------*/
#define SYSCTL_BITBANDING_DC9_DCADC0DC0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32u)+(SYSCTL_DC9_R_DCADC0DC0_BIT*4u))))
#define SYSCTL_BITBANDING_DC9_DCADC0DC1       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32u)+(SYSCTL_DC9_R_DCADC0DC1_BIT*4u))))
#define SYSCTL_BITBANDING_DC9_DCADC0DC2       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32u)+(SYSCTL_DC9_R_DCADC0DC2_BIT*4u))))
#define SYSCTL_BITBANDING_DC9_DCADC0DC3       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32u)+(SYSCTL_DC9_R_DCADC0DC3_BIT*4u))))
#define SYSCTL_BITBANDING_DC9_DCADC0DC4       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32u)+(SYSCTL_DC9_R_DCADC0DC4_BIT*4u))))
#define SYSCTL_BITBANDING_DC9_DCADC0DC5       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32u)+(SYSCTL_DC9_R_DCADC0DC5_BIT*4u))))
#define SYSCTL_BITBANDING_DC9_DCADC0DC6       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32u)+(SYSCTL_DC9_R_DCADC0DC6_BIT*4u))))
#define SYSCTL_BITBANDING_DC9_DCADC0DC7       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32u)+(SYSCTL_DC9_R_DCADC0DC7_BIT*4u))))
#define SYSCTL_BITBANDING_DC9_DCADC1DC0       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32u)+(SYSCTL_DC9_R_DCADC1DC0_BIT*4u))))
#define SYSCTL_BITBANDING_DC9_DCADC1DC1       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32u)+(SYSCTL_DC9_R_DCADC1DC1_BIT*4u))))
#define SYSCTL_BITBANDING_DC9_DCADC1DC2       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32u)+(SYSCTL_DC9_R_DCADC1DC2_BIT*4u))))
#define SYSCTL_BITBANDING_DC9_DCADC1DC3       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32u)+(SYSCTL_DC9_R_DCADC1DC3_BIT*4u))))
#define SYSCTL_BITBANDING_DC9_DCADC1DC4       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32u)+(SYSCTL_DC9_R_DCADC1DC4_BIT*4u))))
#define SYSCTL_BITBANDING_DC9_DCADC1DC5       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32u)+(SYSCTL_DC9_R_DCADC1DC5_BIT*4u))))
#define SYSCTL_BITBANDING_DC9_DCADC1DC6       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32u)+(SYSCTL_DC9_R_DCADC1DC6_BIT*4u))))
#define SYSCTL_BITBANDING_DC9_DCADC1DC7       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32u)+(SYSCTL_DC9_R_DCADC1DC7_BIT*4u))))

/**********************************************************************************
************************************144 NVMSTAT *********************************************
******************************************************************************************/
#define SYSCTL_NVMSTAT            (((NVMSTAT_TypeDef*)(SYSCTL_BASE+SYSCTL_NVMSTAT_OFFSET )))
#define SYSCTL_NVMSTAT_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_NVMSTAT_OFFSET)))
#define SYSCTL_BITBANDING_NVMSTAT      (((BITBANDING_NVMSTAT_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_NVMSTAT_OFFSET)*32u))))

/*----------*/
#define SYSCTL_NVMSTAT_R_FWB_MASK       (0x00000001u)
#define SYSCTL_NVMSTAT_R_FWB_BIT        (0u)
#define SYSCTL_NVMSTAT_R_FWB_NOPRESENT  (0x00000000u)
#define SYSCTL_NVMSTAT_R_FWB_PRESENT    (0x00000001u)

#define SYSCTL_NVMSTAT_FWB_MASK       (0x00000001u)
#define SYSCTL_NVMSTAT_FWB_NOPRESENT  (0x00000000u)
#define SYSCTL_NVMSTAT_FWB_PRESENT    (0x00000001u)
/*----------*/

#define SYSCTL_BITBANDING_NVMSTAT_FWB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_NVMSTAT_OFFSET)*32u)+(SYSCTL_NVMSTAT_R_FWB_BIT*4u))))


/******************************************************************************************
************************************ 145-Flash RMCTL *********************************************
******************************************************************************************/
#define SYSCTL_RMCTL            (((RMCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_RMCTL_OFFSET )))
#define SYSCTL_RMCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RMCTL_OFFSET)))
#define SYSCTL_BITBANDING_RMCTL      (((BITBANDING_RMCTL_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RMCTL_OFFSET)*32u))))

/*--------*/
#define SYSCTL_RMCTL_R_BA_MASK    ((uint32_t)0x00000001u)
#define SYSCTL_RMCTL_R_BA_BIT     (0u)
#define SYSCTL_RMCTL_R_BA_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RMCTL_R_BA_EN      ((uint32_t)0x00000001u)

#define SYSCTL_RMCTL_BA_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_RMCTL_BA_DIS       ((uint32_t)0x00000000u)
#define SYSCTL_RMCTL_BA_EN        ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_RMCTL_BA        (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_RMCTL_OFFSET)*32u)+(SYSCTL_RMCTL_R_BA_BIT*4u))))


/******************************************************************************************
************************************ 146-Flash FMPRE0_ALIAS *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE0_ALIAS                   (((FMPRE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPRE0_ALIAS_OFFSET )))
#define SYSCTL_FMPRE0_ALIAS_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPRE0_ALIAS_OFFSET)))
#define SYSCTL_BITBANDING_FMPRE0_ALIAS        (((BITBANDING_FMPRE_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_FMPRE0_ALIAS_OFFSET)*32u))))

/*--------*/
#define SYSCTL_FMPRE0_ALIAS_R_READ_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPRE0_ALIAS_R_READ_ENABLE_BIT     (0u)

#define SYSCTL_FMPRE0_ALIAS_READ_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 147-Flash FMPRE0 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE0                   (((FMPRE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPRE0_OFFSET )))
#define SYSCTL_FMPRE0_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPRE0_OFFSET)))
#define SYSCTL_BITBANDING_FMPRE0        (((BITBANDING_FMPRE_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_FMPRE0_OFFSET)*32u))))

/*--------*/
#define SYSCTL_FMPRE0_R_READ_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPRE0_R_READ_ENABLE_BIT     (0u)

#define SYSCTL_FMPRE0_READ_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 148-Flash FMPRE1 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE1                   (((FMPRE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPRE1_OFFSET )))
#define SYSCTL_FMPRE1_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPRE1_OFFSET)))
#define SYSCTL_BITBANDING_FMPRE1        (((BITBANDING_FMPRE_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_FMPRE1_OFFSET)*32u))))

/*--------*/
#define SYSCTL_FMPRE1_R_READ_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPRE1_R_READ_ENABLE_BIT     (0u)

#define SYSCTL_FMPRE1_READ_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 149-Flash FMPRE2 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE2                   (((FMPRE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPRE2_OFFSET )))
#define SYSCTL_FMPRE2_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPRE2_OFFSET)))
#define SYSCTL_BITBANDING_FMPRE2        (((BITBANDING_FMPRE_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_FMPRE2_OFFSET)*32u))))

/*--------*/
#define SYSCTL_FMPRE2_R_READ_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPRE2_R_READ_ENABLE_BIT     (0u)

#define SYSCTL_FMPRE2_READ_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 150-Flash FMPRE3 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE3                   (((FMPRE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPRE3_OFFSET )))
#define SYSCTL_FMPRE3_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPRE3_OFFSET)))
#define SYSCTL_BITBANDING_FMPRE3        (((BITBANDING_FMPRE_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_FMPRE3_OFFSET)*32u))))

/*--------*/
#define SYSCTL_FMPRE3_R_READ_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPRE3_R_READ_ENABLE_BIT     (0u)

#define SYSCTL_FMPRE3_READ_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 151-Flash FMPPE0_ALIAS *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE0_ALIAS                   (((FMPPE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPPE0_ALIAS_OFFSET )))
#define SYSCTL_FMPPE0_ALIAS_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPPE0_ALIAS_OFFSET)))
#define SYSCTL_BITBANDING_FMPPE0_ALIAS        (((BITBANDING_FMPPE_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_FMPPE0_ALIAS_OFFSET)*32u))))

/*--------*/
#define SYSCTL_FMPPE0_ALIAS_R_PROG_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPPE0_ALIAS_R_PROG_ENABLE_BIT     (0u)

#define SYSCTL_FMPPE0_ALIAS_PROG_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 152-Flash FMPPE0 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE0                   (((FMPPE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPPE0_OFFSET )))
#define SYSCTL_FMPPE0_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPPE0_OFFSET)))
#define SYSCTL_BITBANDING_FMPPE0        (((BITBANDING_FMPPE_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_FMPPE0_OFFSET)*32u))))

/*--------*/
#define SYSCTL_FMPPE0_R_PROG_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPPE0_R_PROG_ENABLE_BIT     (0u)

#define SYSCTL_FMPPE0_PROG_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 153-Flash FMPPE1 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE1                   (((FMPPE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPPE1_OFFSET )))
#define SYSCTL_FMPPE1_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPPE1_OFFSET)))
#define SYSCTL_BITBANDING_FMPPE1        (((BITBANDING_FMPPE_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_FMPPE1_OFFSET)*32u))))

/*--------*/
#define SYSCTL_FMPPE1_R_PROG_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPPE1_R_PROG_ENABLE_BIT     (0u)

#define SYSCTL_FMPPE1_PROG_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 154-Flash FMPPE2 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE2                   (((FMPPE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPPE2_OFFSET )))
#define SYSCTL_FMPPE2_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPPE2_OFFSET)))
#define SYSCTL_BITBANDING_FMPPE2        (((BITBANDING_FMPPE_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_FMPPE2_OFFSET)*32u))))

/*--------*/
#define SYSCTL_FMPPE2_R_PROG_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPPE2_R_PROG_ENABLE_BIT     (0u)

#define SYSCTL_FMPPE2_PROG_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 155-Flash FMPPE3 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE3                   (((FMPPE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPPE3_OFFSET )))
#define SYSCTL_FMPPE3_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPPE3_OFFSET)))
#define SYSCTL_BITBANDING_FMPPE3        (((BITBANDING_FMPPE_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_FMPPE3_OFFSET)*32u))))

/*--------*/
#define SYSCTL_FMPPE3_R_PROG_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPPE3_R_PROG_ENABLE_BIT     (0u)

#define SYSCTL_FMPPE3_PROG_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/
/*--------*/

/******************************************************************************************
************************************ 156-Flash BOOTCFG *********************************************
******************************************************************************************/
#define SYSCTL_BOOTCFG                   (((FMPPE_TypeDef*)(SYSCTL_BASE+SYSCTL_BOOTCFG_OFFSET )))
#define SYSCTL_BOOTCFG_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_BOOTCFG_OFFSET)))
#define SYSCTL_BITBANDING_BOOTCFG        (((BITBANDING_FMPPE_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_BOOTCFG_OFFSET)*32u))))

/*--------*/
#define SYSCTL_BOOTCFG_R_DBG0_MASK    ((uint32_t)0x00000001u)
#define SYSCTL_BOOTCFG_R_DBG0_BIT     (0u)

#define SYSCTL_BOOTCFG_DBG0_MASK      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_DBG1_MASK    ((uint32_t)0x00000002u)
#define SYSCTL_BOOTCFG_R_DBG1_BIT     (1u)

#define SYSCTL_BOOTCFG_DBG1_MASK      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_KEY_MASK    ((uint32_t)0x00000010u)
#define SYSCTL_BOOTCFG_R_KEY_BIT     (4u)
#define SYSCTL_BOOTCFG_R_KEY_71D5    ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_R_KEY_A442    ((uint32_t)0x00000010u)

#define SYSCTL_BOOTCFG_KEY_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_BOOTCFG_KEY_71D5      ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_KEY_A442      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_EN_MASK    ((uint32_t)0x00000100u)
#define SYSCTL_BOOTCFG_R_EN_BIT     (8u)
#define SYSCTL_BOOTCFG_R_EN_GPIO    ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_R_EN_ADDRESS ((uint32_t)0x00000100u)

#define SYSCTL_BOOTCFG_EN_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_BOOTCFG_EN_GPIO      ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_EN_ADDRESS   ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_POL_MASK    ((uint32_t)0x00000200u)
#define SYSCTL_BOOTCFG_R_POL_BIT     (9u)
#define SYSCTL_BOOTCFG_R_POL_LOW     ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_R_POL_HIGH    ((uint32_t)0x00000200u)

#define SYSCTL_BOOTCFG_POL_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_BOOTCFG_POL_LOW       ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_POL_HIGH      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_PIN_MASK    ((uint32_t)0x00001C00u)
#define SYSCTL_BOOTCFG_R_PIN_BIT     (10u)
#define SYSCTL_BOOTCFG_R_PIN_0       ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_R_PIN_1       ((uint32_t)0x00000400u)
#define SYSCTL_BOOTCFG_R_PIN_2       ((uint32_t)0x00000800u)
#define SYSCTL_BOOTCFG_R_PIN_3       ((uint32_t)0x00000C00u)
#define SYSCTL_BOOTCFG_R_PIN_4       ((uint32_t)0x00001000u)
#define SYSCTL_BOOTCFG_R_PIN_5       ((uint32_t)0x00001400u)
#define SYSCTL_BOOTCFG_R_PIN_6       ((uint32_t)0x00001800u)
#define SYSCTL_BOOTCFG_R_PIN_7       ((uint32_t)0x00001C00u)

#define SYSCTL_BOOTCFG_PIN_MASK      ((uint32_t)0x00000007u)
#define SYSCTL_BOOTCFG_PIN_0         ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_PIN_1         ((uint32_t)0x00000001u)
#define SYSCTL_BOOTCFG_PIN_2         ((uint32_t)0x00000002u)
#define SYSCTL_BOOTCFG_PIN_3         ((uint32_t)0x00000003u)
#define SYSCTL_BOOTCFG_PIN_4         ((uint32_t)0x00000004u)
#define SYSCTL_BOOTCFG_PIN_5         ((uint32_t)0x00000005u)
#define SYSCTL_BOOTCFG_PIN_6         ((uint32_t)0x00000006u)
#define SYSCTL_BOOTCFG_PIN_7         ((uint32_t)0x00000007u)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_PORT_MASK    ((uint32_t)0x0000E000u)
#define SYSCTL_BOOTCFG_R_PORT_BIT     (13u)
#define SYSCTL_BOOTCFG_R_PORT_A       ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_R_PORT_B       ((uint32_t)0x00002000u)
#define SYSCTL_BOOTCFG_R_PORT_C       ((uint32_t)0x00004000u)
#define SYSCTL_BOOTCFG_R_PORT_D       ((uint32_t)0x00006000u)
#define SYSCTL_BOOTCFG_R_PORT_E       ((uint32_t)0x00008000u)
#define SYSCTL_BOOTCFG_R_PORT_F       ((uint32_t)0x0000A000u)
#define SYSCTL_BOOTCFG_R_PORT_G       ((uint32_t)0x0000C000u)
#define SYSCTL_BOOTCFG_R_PORT_H       ((uint32_t)0x0000E000u)

#define SYSCTL_BOOTCFG_PORT_MASK      ((uint32_t)0x00000007u)
#define SYSCTL_BOOTCFG_PORT_A         ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_PORT_B         ((uint32_t)0x00000001u)
#define SYSCTL_BOOTCFG_PORT_C         ((uint32_t)0x00000002u)
#define SYSCTL_BOOTCFG_PORT_D         ((uint32_t)0x00000003u)
#define SYSCTL_BOOTCFG_PORT_E         ((uint32_t)0x00000004u)
#define SYSCTL_BOOTCFG_PORT_F         ((uint32_t)0x00000005u)
#define SYSCTL_BOOTCFG_PORT_G         ((uint32_t)0x00000006u)
#define SYSCTL_BOOTCFG_PORT_H         ((uint32_t)0x00000007u)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_NW_MASK    ((uint32_t)0x80000000u)
#define SYSCTL_BOOTCFG_R_NW_BIT     (31u)
#define SYSCTL_BOOTCFG_R_NW_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_R_NW_EN      ((uint32_t)0x80000000u)

#define SYSCTL_BOOTCFG_NW_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_BOOTCFG_NW_DIS       ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_NW_EN        ((uint32_t)0x00000001u)
/*--------*/

#define SYSCTL_BITBANDING_BOOTCFG_DBG0      (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_BOOTCFG_OFFSET)*32u)+(SYSCTL_BOOTCFG_R_DBG0_BIT*4u))))
#define SYSCTL_BITBANDING_BOOTCFG_DBG1      (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_BOOTCFG_OFFSET)*32u)+(SYSCTL_BOOTCFG_R_DBG1_BIT*4u))))
#define SYSCTL_BITBANDING_BOOTCFG_KEY       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_BOOTCFG_OFFSET)*32u)+(SYSCTL_BOOTCFG_R_KEY_BIT*4u))))
#define SYSCTL_BITBANDING_BOOTCFG_EN        (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_BOOTCFG_OFFSET)*32u)+(SYSCTL_BOOTCFG_R_EN_BIT*4u))))
#define SYSCTL_BITBANDING_BOOTCFG_POL       (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_BOOTCFG_OFFSET)*32u)+(SYSCTL_BOOTCFG_R_POL_BIT*4u))))
#define SYSCTL_BITBANDING_BOOTCFG_NW        (*((volatile uint32_t *)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_BOOTCFG_OFFSET)*32u)+(SYSCTL_BOOTCFG_R_NW_BIT*4u))))

/******************************************************************************************
************************************ 157-Flash USER_REG0 *********************************************
******************************************************************************************/
#define SYSCTL_USER_REG0                   (((USER_REG_TypeDef*)(SYSCTL_BASE+SYSCTL_USER_REG0_OFFSET )))
#define SYSCTL_USER_REG0_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_USER_REG0_OFFSET)))
#define SYSCTL_BITBANDING_USER_REG0        (((BITBANDING_USER_REG_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_USER_REG0_OFFSET)*32u))))

/*--------*/
#define SYSCTL_USER_REG0_R_DATA_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_USER_REG0_R_DATA_BIT     (0u)

#define SYSCTL_USER_REG0_DATA_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 158-Flash USER_REG1 *********************************************
******************************************************************************************/
#define SYSCTL_USER_REG1                   (((USER_REG_TypeDef*)(SYSCTL_BASE+SYSCTL_USER_REG1_OFFSET )))
#define SYSCTL_USER_REG1_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_USER_REG1_OFFSET)))
#define SYSCTL_BITBANDING_USER_REG1        (((BITBANDING_USER_REG_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_USER_REG1_OFFSET)*32u))))

/*--------*/
#define SYSCTL_USER_REG1_R_DATA_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_USER_REG1_R_DATA_BIT     (0u)

#define SYSCTL_USER_REG1_DATA_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 159-Flash USER_REG2 *********************************************
******************************************************************************************/
#define SYSCTL_USER_REG2                   (((USER_REG_TypeDef*)(SYSCTL_BASE+SYSCTL_USER_REG2_OFFSET )))
#define SYSCTL_USER_REG2_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_USER_REG2_OFFSET)))
#define SYSCTL_BITBANDING_USER_REG2        (((BITBANDING_USER_REG_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_USER_REG2_OFFSET)*32u))))

/*--------*/
#define SYSCTL_USER_REG2_R_DATA_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_USER_REG2_R_DATA_BIT     (0u)

#define SYSCTL_USER_REG2_DATA_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 160-Flash USER_REG3 *********************************************
******************************************************************************************/
#define SYSCTL_USER_REG3                   (((USER_REG_TypeDef*)(SYSCTL_BASE+SYSCTL_USER_REG3_OFFSET )))
#define SYSCTL_USER_REG3_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_USER_REG3_OFFSET)))
#define SYSCTL_BITBANDING_USER_REG3        (((BITBANDING_USER_REG_TypeDef*)(SYSCTL_BITBANDING_BASE+((SYSCTL_OFFSET+SYSCTL_USER_REG3_OFFSET)*32u))))

/*--------*/
#define SYSCTL_USER_REG3_R_DATA_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_USER_REG3_R_DATA_BIT     (0u)

#define SYSCTL_USER_REG3_DATA_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/




typedef enum
{
    SYSCTL_enOK=0u,
    SYSCTL_enERROR,
}SYSCTL_nSTATUS;

typedef enum
{
    SYSCTL_enNOPRESENT=0u,
    SYSCTL_enPRESENT=1u,
}SYSCTL_nPERIPHERAL_PRESENT;

typedef enum
{
    SYSCTL_enNOREADY=0u,
    SYSCTL_enREADY=1u,
}SYSCTL_nPERIPHERAL_READY;

typedef enum
{
    SYSCTL_enRESET_EXT      =0x00001u,
    SYSCTL_enRESET_POR      =0x00002u,
    SYSCTL_enRESET_BOR      =0x00004u,
    SYSCTL_enRESET_WDT0     =0x00008u,
    SYSCTL_enRESET_SW       =0x00010u,
    SYSCTL_enRESET_WDT1     =0x00020u,
    SYSCTL_enRESET_MOSCFAIL =0x00040u,
    SYSCTL_enRESET_ALL      =0x0007Fu,
}SYSCTL_nRESET;


typedef enum
{
    SYSCTL_enWDT0 = ((0<<8)|(0u)),
    SYSCTL_enWDT1 = ((0<<8)|(1u)),

    SYSCTL_enTIMER0 = ((1<<8)|(0u)),
    SYSCTL_enTIMER1 = ((1<<8)|(1u)),
    SYSCTL_enTIMER2 = ((1<<8)|(2u)),
    SYSCTL_enTIMER3 = ((1<<8)|(3u)),
    SYSCTL_enTIMER4 = ((1<<8)|(4u)),
    SYSCTL_enTIMER5 = ((1<<8)|(5u)),

    SYSCTL_enGPIOA = ((2<<8)|(0u)),
    SYSCTL_enGPIOB = ((2<<8)|(1u)),
    SYSCTL_enGPIOC = ((2<<8)|(2u)),
    SYSCTL_enGPIOD = ((2<<8)|(3u)),
    SYSCTL_enGPIOE = ((2<<8)|(4u)),
    SYSCTL_enGPIOF = ((2<<8)|(5u)),
    SYSCTL_enGPIOG = ((2<<8)|(6u)),
    SYSCTL_enGPIOH = ((2<<8)|(7u)),
    SYSCTL_enGPIOJ = ((2<<8)|(8u)),
    SYSCTL_enGPIOK = ((2<<8)|(9u)),
    SYSCTL_enGPIOL = ((2<<8)|(10u)),
    SYSCTL_enGPIOM = ((2<<8)|(11u)),
    SYSCTL_enGPION = ((2<<8)|(12u)),
    SYSCTL_enGPIOP = ((2<<8)|(13u)),
    SYSCTL_enGPIOQ = ((2<<8)|(14u)),

    SYSCTL_enUDMA = ((3<<8)|(0u)),

    SYSCTL_enHIB = ((5<<8)|(0u)),

    SYSCTL_enUART0 = ((6<<8)|(0u)),
    SYSCTL_enUART1 = ((6<<8)|(1u)),
    SYSCTL_enUART2 = ((6<<8)|(2u)),
    SYSCTL_enUART3 = ((6<<8)|(3u)),
    SYSCTL_enUART4 = ((6<<8)|(4u)),
    SYSCTL_enUART5 = ((6<<8)|(5u)),
    SYSCTL_enUART6 = ((6<<8)|(6u)),
    SYSCTL_enUART7 = ((6<<8)|(7u)),

    SYSCTL_enSSI0 = ((7<<8)|(0u)),
    SYSCTL_enSSI1 = ((7<<8)|(1u)),
    SYSCTL_enSSI2 = ((7<<8)|(2u)),
    SYSCTL_enSSI3 = ((7<<8)|(3u)),

    SYSCTL_enI2C0 = ((8<<8)|(0u)),
    SYSCTL_enI2C1 = ((8<<8)|(1u)),
    SYSCTL_enI2C2 = ((8<<8)|(2u)),
    SYSCTL_enI2C3 = ((8<<8)|(3u)),
    SYSCTL_enI2C4 = ((8<<8)|(4u)),
    SYSCTL_enI2C5 = ((8<<8)|(5u)),

    SYSCTL_enUSB = ((10<<8)|(0u)),

    SYSCTL_enCAN0 = ((13<<8)|(0u)),
    SYSCTL_enCAN1 = ((13<<8)|(1u)),

    SYSCTL_enADC0 = ((14<<8)|(0u)),
    SYSCTL_enADC1 = ((14<<8)|(1u)),

    SYSCTL_enACMP = ((15<<8)|(0u)),

    SYSCTL_enPWM0 = ((16<<8)|(0u)),
    SYSCTL_enPWM1 = ((16<<8)|(1u)),

    SYSCTL_enQEI0 = ((17<<8)|(0u)),
    SYSCTL_enQEI1 = ((17<<8)|(1u)),

    SYSCTL_enEEPROM = ((22<<8)|(0u)),

    SYSCTL_enWTIMER0 = ((23<<8)|(0u)),
    SYSCTL_enWTIMER1 = ((23<<8)|(1u)),
    SYSCTL_enWTIMER2 = ((23<<8)|(2u)),
    SYSCTL_enWTIMER3 = ((23<<8)|(3u)),
    SYSCTL_enWTIMER4 = ((23<<8)|(4u)),
    SYSCTL_enWTIMER5 = ((23<<8)|(5u)),
}SYSCTL_nPERIPHERAL;

typedef enum
{
    SYSCTL_enGPIOBUSA = 0x0001u,
    SYSCTL_enGPIOBUSB = 0x0002u,
    SYSCTL_enGPIOBUSC = 0x0004u,
    SYSCTL_enGPIOBUSD = 0x0008u,
    SYSCTL_enGPIOBUSE = 0x0010u,
    SYSCTL_enGPIOBUSF = 0x0020u,
    SYSCTL_enGPIOBUSALL = 0x003Fu,
}SYSCTL_nGPIOBUS;

typedef enum
{
    SYSCTL_enGPIOBUS_APB = 0x0000u,
    SYSCTL_enGPIOBUS_AHB = 0x0001u,
}SYSCTL_nGPIOBUS_CURRENT;

SYSCTL_nRESET SYSCTL__enGetResetCause(void);
void SYSCTL__vClearResetCause(SYSCTL_nRESET enReset);
void SYSCTL__vSetGPIOBus_AHB(SYSCTL_nGPIOBUS enGPIO);
void SYSCTL__vSetGPIOBus_APB(SYSCTL_nGPIOBUS enGPIO);
SYSCTL_nGPIOBUS_CURRENT SYSCTL__vGetGPIOBus(SYSCTL_nGPIOBUS enGPIO);

SYSCTL_nSTATUS SYSCTL__enInit(void);
uint32_t SYSCTL__u32GetClock(void);

SYSCTL_nPERIPHERAL_PRESENT SYSCTL__enIsPeripheralPresent(SYSCTL_nPERIPHERAL enPeripheral);
SYSCTL_nPERIPHERAL_READY SYSCTL__enIsPeripheralReady(SYSCTL_nPERIPHERAL enPeripheral);
void SYSCTL__vResetPeripheral(SYSCTL_nPERIPHERAL enPeripheral);
void SYSCTL__vEnRunModePeripheral(SYSCTL_nPERIPHERAL enPeripheral);
void SYSCTL__vDisRunModePeripheral(SYSCTL_nPERIPHERAL enPeripheral);

void SYSCTL__vEnSleepModePeripheral(SYSCTL_nPERIPHERAL enPeripheral);
void SYSCTL__vDisSleepModePeripheral(SYSCTL_nPERIPHERAL enPeripheral);

void SYSCTL__vEnDeepSleepModePeripheral(SYSCTL_nPERIPHERAL enPeripheral);
void SYSCTL__vDisDeepSleepModePeripheral(SYSCTL_nPERIPHERAL enPeripheral);

#endif /* SYSCTL_H_ */
