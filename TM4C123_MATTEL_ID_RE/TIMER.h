/*
 * TIMER.h
 *
 *  Created on: 3 may. 2018
 *      Author: InDev
 */

#ifndef TIMER_H_
#define TIMER_H_


#include "SYSCTL.h"
#include "GPIO.h"
#include "NVIC.h"
#include "INTERRUPT.h"
#include <stdint.h>



#define GPTM_BASE            (0x40030000)
#define GPTM_OFFSET          (0x00030000)

#define GPWTM_BASE           (0x40036000)
#define GPWTM_OFFSET         (0x00036000)

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// GPTM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

typedef volatile struct
{
    volatile uint32_t GPTMCFG  : 3;
    const uint32_t    reserved : 29;
}GPTMCFG_TypeDef;

typedef volatile struct
{
    volatile uint32_t TAMR    : 2;
    volatile uint32_t TACMR   : 1;
    volatile uint32_t TAAMS   : 1;
    volatile uint32_t TACDIR  : 1;
    volatile uint32_t TAMIE   : 1;
    volatile uint32_t TAWOT   : 1;
    volatile uint32_t TASNAPS : 1;
    volatile uint32_t TAILD   : 1;
    volatile uint32_t TAPWMIE : 1;
    volatile uint32_t TAMRSU  : 1;
    volatile uint32_t TAPLO   : 1;
    const    uint32_t reserved: 20;
}GPTMTAMR_TypeDef;


typedef volatile struct
{
    volatile uint32_t TBMR    : 2;
    volatile uint32_t TBCMR   : 1;
    volatile uint32_t TBAMS   : 1;
    volatile uint32_t TBCDIR  : 1;
    volatile uint32_t TBMIE   : 1;
    volatile uint32_t TBWOT   : 1;
    volatile uint32_t TBSNAPS : 1;
    volatile uint32_t TBILD   : 1;
    volatile uint32_t TBPWMIE : 1;
    volatile uint32_t TBMRSU  : 1;
    volatile uint32_t TBPLO   : 1;
    const    uint32_t reserved: 20;
}GPTMTBMR_TypeDef;



typedef volatile struct
{
    volatile uint32_t TAEN     : 1;
    volatile uint32_t TASTALL  : 1;
    volatile uint32_t TAEVENT  : 2;
    volatile uint32_t RTCEN    : 1;
    volatile uint32_t TAOTE    : 1;
    volatile uint32_t TAPWML   : 1;
    const    uint32_t reserved : 1;
    volatile uint32_t TBEN     : 1;
    volatile uint32_t TBSTALL  : 1;
    volatile uint32_t TBEVENT  : 2;
    const    uint32_t reserved1: 1;
    volatile uint32_t TBOTE    : 1;
    volatile uint32_t TBPWML   : 1;
    const    uint32_t reserved2: 17;
}GPTMCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t SYNCT0   : 2;
    volatile uint32_t SYNCT1   : 2;
    volatile uint32_t SYNCT2   : 2;
    volatile uint32_t SYNCT3   : 2;
    volatile uint32_t SYNCT4   : 2;
    volatile uint32_t SYNCT5   : 2;
    volatile uint32_t SYNCWT0  : 2;
    volatile uint32_t SYNCWT1  : 2;
    volatile uint32_t SYNCWT2  : 2;
    volatile uint32_t SYNCWT3  : 2;
    volatile uint32_t SYNCWT4  : 2;
    volatile uint32_t SYNCWT5  : 2;
    const    uint32_t reserved : 8;
}GPTMSYNC_TypeDef;


typedef volatile struct
{
    volatile uint32_t TATOIM   : 1;
    volatile uint32_t CAMIM    : 1;
    volatile uint32_t CAEIM    : 1;
    volatile uint32_t RTCIM    : 1;
    volatile uint32_t TAMIM    : 1;
    const    uint32_t reserved : 3;
    volatile uint32_t TBTOIM   : 1;
    volatile uint32_t CBMIM    : 1;
    volatile uint32_t CBEIM    : 1;
    volatile uint32_t TBMIM    : 1;
    const    uint32_t reserved1: 4;
    volatile uint32_t WUEIM    : 1;
    const    uint32_t reserved2: 15;
}GPTMIMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TATORIS  : 1;
    volatile const uint32_t CAMRIS   : 1;
    volatile const uint32_t CAERIS   : 1;
    volatile const uint32_t RTCRIS   : 1;
    volatile const uint32_t TAMRIS   : 1;
    const    uint32_t       reserved : 3;
    volatile const uint32_t TBTORIS  : 1;
    volatile const uint32_t CBMRIS   : 1;
    volatile const uint32_t CBERIS   : 1;
    volatile const uint32_t TBMRIS   : 1;
    const    uint32_t       reserved1: 4;
    volatile const uint32_t WUERIS   : 1;
    const    uint32_t       reserved2: 15;
}GPTMRIS_TypeDef;


typedef volatile struct
{
    volatile const uint32_t TATOMIS  : 1;
    volatile const uint32_t CAMMIS   : 1;
    volatile const uint32_t CAEMIS   : 1;
    volatile const uint32_t RTCMIS   : 1;
    volatile const uint32_t TAMMIS   : 1;
    const    uint32_t       reserved : 3;
    volatile const uint32_t TBTOMIS  : 1;
    volatile const uint32_t CBMMIS   : 1;
    volatile const uint32_t CBEMIS   : 1;
    volatile const uint32_t TBMMIS   : 1;
    const    uint32_t       reserved1: 4;
    volatile const uint32_t WUEMIS   : 1;
    const    uint32_t       reserved2: 15;
}GPTMMIS_TypeDef;


typedef volatile struct
{
    volatile uint32_t TATOCINT : 1;
    volatile uint32_t CAMCINT  : 1;
    volatile uint32_t CAECINT  : 1;
    volatile uint32_t RTCCINT  : 1;
    volatile uint32_t TAMCINT  : 1;
    const    uint32_t reserved : 3;
    volatile uint32_t TBTOCINT : 1;
    volatile uint32_t CBMCINT  : 1;
    volatile uint32_t CBECINT  : 1;
    volatile uint32_t TBMCINT  : 1;
    const    uint32_t reserved1: 4;
    volatile uint32_t WUECINT  : 1;
    const    uint32_t reserved2: 15;
}GPTMICR_TypeDef;


typedef volatile struct
{
    volatile uint32_t TAILR     : 32;
}GPTMTAILR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBILR     : 32;
}GPTMTBILR_TypeDef;



typedef volatile struct
{
    volatile uint32_t TAMR     : 32;
}GPTMTAMATCHR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBMR     : 32;
}GPTMTBMATCHR_TypeDef;


typedef volatile struct
{
    volatile uint32_t TAPSR     : 8;
    volatile uint32_t TAPSRH    : 8;
    const    uint32_t reserved  : 16;
}GPTMTAPR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBPSR     : 8;
    volatile uint32_t TBPSRH    : 8;
    const    uint32_t reserved  : 16;
}GPTMTBPR_TypeDef;


typedef volatile struct
{
    volatile uint32_t TAPSMR    : 8;
    volatile uint32_t TAPSMRH   : 8;
    const    uint32_t reserved  : 16;
}GPTMTAPMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBPSMR    : 8;
    volatile uint32_t TBPSMRH   : 8;
    const    uint32_t reserved  : 16;
}GPTMTBPMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TAR     : 32;
}GPTMTAR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TBR     : 32;
}GPTMTBR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TAV     : 32;
}GPTMTAV_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBV     : 32;
}GPTMTBV_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RTCPD     : 16;
    const    uint32_t       reserved  : 16;
}GPTMRTCPD_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PSS       : 16;
    const    uint32_t       reserved  : 16;
}GPTMTAPS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PSS       : 16;
    const    uint32_t       reserved  : 16;
}GPTMTBPS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PSV       : 16;
    const    uint32_t       reserved  : 16;
}GPTMTAPV_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PSV      : 16;
    const    uint32_t       reserved : 16;
}GPTMTBPV_TypeDef;

typedef volatile struct
{
    volatile const uint32_t SIZE      : 4;
    const    uint32_t       reserved  : 28;
}GPTMPP_TypeDef;


typedef volatile struct
{
    union
    {
        volatile uint32_t          GPTMCFG;
        GPTMCFG_TypeDef                 GPTMCFG_Bit;
    };
    union
    {
        volatile uint32_t          GPTMTAMR;
        GPTMTAMR_TypeDef                GPTMTAMR_Bit;
    };
    union
    {
        volatile uint32_t          GPTMTBMR;
        GPTMTBMR_TypeDef                GPTMTBMR_Bit;
    };
    union
    {
        volatile uint32_t          GPTMCTL;
        GPTMCTL_TypeDef                 GPTMCTL_Bit;
    };
    union
    {
        volatile uint32_t          GPTMSYNC;
        GPTMSYNC_TypeDef                GPTMSYNC_Bit;
    };
    const    uint32_t              reserved;

    union
    {
        volatile uint32_t          GPTMIMR;
        GPTMIMR_TypeDef                 GPTMIMR_Bit;
    };
    union
    {
        volatile const uint32_t    GPTMRIS;
        GPTMRIS_TypeDef                 GPTMRIS_Bit;
    };
    union
    {
        volatile const uint32_t    GPTMMIS;
        GPTMMIS_TypeDef                 GPTMMIS_Bit;
    };
    union
    {
        volatile uint32_t          GPTMICR;
        GPTMICR_TypeDef                 GPTMICR_Bit;
    };
    union
    {
        volatile uint32_t          GPTMTAILR;
        GPTMTAILR_TypeDef               GPTMTAILR_Bit;
    };
    union
    {
        volatile uint32_t          GPTMTBILR;
        GPTMTBILR_TypeDef               GPTMTBILR_Bit;
    };
    union
    {
        volatile uint32_t          GPTMTAMATCHR;
        GPTMTAMATCHR_TypeDef            GPTMTAMATCHR_Bit;
    };

    union
    {
        volatile uint32_t          GPTMTBMATCHR;
        GPTMTBMATCHR_TypeDef            GPTMTBMATCHR_Bit;
    };
    union
    {
        volatile uint32_t          GPTMTAPR;
        GPTMTAPR_TypeDef                GPTMTAPR_Bit;
    };

    union
    {
        volatile uint32_t          GPTMTBPR;
        GPTMTBPR_TypeDef                GPTMTBPR_Bit;
    };
    union
    {
        volatile uint32_t          GPTMTAPMR;
        GPTMTAPMR_TypeDef               GPTMTAPMR_Bit;
    };
    union
    {
        volatile uint32_t          GPTMTBPMR;
        GPTMTBPMR_TypeDef               GPTMTBPMR_Bit;
    };
    union
    {
        volatile const uint32_t    GPTMTAR;
        GPTMTAR_TypeDef                 GPTMTAR_Bit;
    };
    union
    {
        volatile const uint32_t    GPTMTBR;
        GPTMTBR_TypeDef                 GPTMTBR_Bit;
    };
    union
    {
        volatile uint32_t          GPTMTAV;
        GPTMTAV_TypeDef                 GPTMTAV_Bit;
    };
    union
    {
        volatile uint32_t          GPTMTBV;
        GPTMTBV_TypeDef                 GPTMTBV_Bit;
    };
    union
    {
        volatile const uint32_t    GPTMRTCPD;
        GPTMRTCPD_TypeDef               GPTMRTCPD_Bit;
    };
    union
    {
        volatile const uint32_t    GPTMTAPS;
        GPTMTAPS_TypeDef                GPTMTAPS_Bit;
    };
    union
    {
        volatile const uint32_t    GPTMTBPS;
        GPTMTBPS_TypeDef                GPTMTBPS_Bit;
    };
    union
    {
        volatile const uint32_t    GPTMTAPV;
        GPTMTAPV_TypeDef                GPTMTAPV_Bit;
    };
    union
    {
        volatile const uint32_t    GPTMTBPV;
        GPTMTBPV_TypeDef                GPTMTBPV_Bit;
    };

    const    uint32_t              reserved1[981];


    union
    {
        volatile const uint32_t    GPTMPP;
        GPTMPP_TypeDef                  GPTMPP_Bit;
    };

    const uint32_t                 reserved2[15];
}GPTM_TypeDef;



typedef volatile struct
{
    GPTM_TypeDef TM[5];
}GPTMS_TypeDef;


typedef volatile struct
{
     GPTM_TypeDef WTM0;
     GPTM_TypeDef WTM1;
     GPTM_TypeDef reserved[20];
     GPTM_TypeDef WTM2;
     GPTM_TypeDef WTM3;
     GPTM_TypeDef WTM4;
     GPTM_TypeDef WTM5;
}GPWTMS_TypeDef;


#define GPTM0_BASE         (0x40030000)
#define GPTM0_OFFSET       (0x00030000)
#define GPTM1_BASE         (0x40031000)
#define GPTM1_OFFSET       (0x00031000)
#define GPTM2_BASE         (0x40032000)
#define GPTM2_OFFSET       (0x00032000)
#define GPTM3_BASE         (0x40033000)
#define GPTM3_OFFSET       (0x00033000)
#define GPTM4_BASE         (0x40034000)
#define GPTM4_OFFSET       (0x00034000)
#define GPTM5_BASE         (0x40035000)
#define GPTM5_OFFSET       (0x00035000)

#define GPWTM0_BASE         (0x40036000)
#define GPWTM0_OFFSET       (0x00036000)
#define GPWTM1_BASE         (0x40037000)
#define GPWTM1_OFFSET       (0x00037000)
#define GPWTM2_BASE         (0x4004C000)
#define GPWTM2_OFFSET       (0x0004C000)
#define GPWTM3_BASE         (0x4004D000)
#define GPWTM3_OFFSET       (0x0004D000)
#define GPWTM4_BASE         (0x4004E000)
#define GPWTM4_OFFSET       (0x0004E000)
#define GPWTM5_BASE         (0x4004F000)
#define GPWTM5_OFFSET       (0x0004F000)


#define GPTM               (((GPTMS_TypeDef*)(GPTM_BASE)))
#define GPTM0              (((GPTM_TypeDef*)(GPTM0_BASE)))
#define GPTM1              (((GPTM_TypeDef*)(GPTM1_BASE)))
#define GPTM2              (((GPTM_TypeDef*)(GPTM2_BASE)))
#define GPTM3              (((GPTM_TypeDef*)(GPTM3_BASE)))
#define GPTM4              (((GPTM_TypeDef*)(GPTM4_BASE)))
#define GPTM5              (((GPTM_TypeDef*)(GPTM5_BASE)))

#define GPWTM               (((GPWTMS_TypeDef*)(GPWTM_BASE)))
#define GPWTM0              (((GPTM_TypeDef*)(GPWTM0_BASE)))
#define GPWTM1              (((GPTM_TypeDef*)(GPWTM1_BASE)))
#define GPWTM2              (((GPTM_TypeDef*)(GPWTM2_BASE)))
#define GPWTM3              (((GPTM_TypeDef*)(GPWTM3_BASE)))
#define GPWTM4              (((GPTM_TypeDef*)(GPWTM4_BASE)))
#define GPWTM5              (((GPTM_TypeDef*)(GPWTM5_BASE)))


#define GPTM_GPTMCFG_OFFSET      (0x0000)
#define GPTM_GPTMTAMR_OFFSET     (0x0004)
#define GPTM_GPTMTBMR_OFFSET     (0x0008)
#define GPTM_GPTMCTL_OFFSET      (0x000C)
#define GPTM_GPTMSYNC_OFFSET     (0x0010)
#define GPTM_GPTMIMR_OFFSET      (0x0018)
#define GPTM_GPTMRIS_OFFSET      (0x001C)
#define GPTM_GPTMMIS_OFFSET      (0x0020)
#define GPTM_GPTMICR_OFFSET      (0x0024)
#define GPTM_GPTMTAILR_OFFSET    (0x0028)
#define GPTM_GPTMTBILR_OFFSET    (0x002C)
#define GPTM_GPTMTAMATCHR_OFFSET (0x0030)
#define GPTM_GPTMTBMATCHR_OFFSET (0x0034)
#define GPTM_GPTMTAPR_OFFSET     (0x0038)
#define GPTM_GPTMTBPR_OFFSET     (0x003C)
#define GPTM_GPTMTAPMR_OFFSET    (0x0040)
#define GPTM_GPTMTBPMR_OFFSET    (0x0044)
#define GPTM_GPTMTAR_OFFSET      (0x0048)
#define GPTM_GPTMTBR_OFFSET      (0x004C)
#define GPTM_GPTMTAV_OFFSET      (0x0050)
#define GPTM_GPTMTBV_OFFSET      (0x0054)
#define GPTM_GPTMRTCPD_OFFSET    (0x0058)
#define GPTM_GPTMTAPS_OFFSET     (0x005C)
#define GPTM_GPTMTBPS_OFFSET     (0x0060)
#define GPTM_GPTMTAPV_OFFSET     (0x0064)
#define GPTM_GPTMTBPV_OFFSET     (0x0068)
#define GPTM_GPTMPP_OFFSET       (0x0FC0)

// ToDO GPTM0
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0 GPTM0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.1 GPTMCFG ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMCFG            (((GPTMCFG_TypeDef*)(GPTM0_BASE + GPTM_GPTMCFG_OFFSET )))
#define GPTM0_GPTMCFG_R          (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMCFG_OFFSET)))


//--------
#define GPTM0_GPTMCFG_R_GPTMCFG_MASK      (0x00000007)
#define GPTM0_GPTMCFG_R_GPTMCFG_BIT       (0)
#define GPTM0_GPTMCFG_R_GPTMCFG_BOTH    (0x00000000)
#define GPTM0_GPTMCFG_R_GPTMCFG_RTC       (0x00000001)
#define GPTM0_GPTMCFG_R_GPTMCFG_SINGLE      (0x00000004)

#define GPTM0_GPTMCFG_GPTMCFG_MASK        (0x00000007)
#define GPTM0_GPTMCFG_GPTMCFG_BOTH      (0x00000000)
#define GPTM0_GPTMCFG_GPTMCFG_RTC         (0x00000001)
#define GPTM0_GPTMCFG_GPTMCFG_SINGLE        (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.2 GPTMTAMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMTAMR            (((GPTMTAMR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTAMR_OFFSET )))
#define GPTM0_GPTMTAMR_R          (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTAMR_OFFSET)))


//--------
#define GPTM0_GPTMTAMR_R_TAMR_MASK      (0x00000003)
#define GPTM0_GPTMTAMR_R_TAMR_BIT       (0)
#define GPTM0_GPTMTAMR_R_TAMR_ONESHOT   (0x00000001)
#define GPTM0_GPTMTAMR_R_TAMR_PERIOD    (0x00000002)
#define GPTM0_GPTMTAMR_R_TAMR_CAPTURE   (0x00000003)

#define GPTM0_GPTMTAMR_TAMR_MASK        (0x00000003)
#define GPTM0_GPTMTAMR_TAMR_ONESHOT     (0x00000001)
#define GPTM0_GPTMTAMR_TAMR_PERIOD      (0x00000002)
#define GPTM0_GPTMTAMR_TAMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPTM0_GPTMTAMR_R_TACMR_MASK      (0x00000004)
#define GPTM0_GPTMTAMR_R_TACMR_BIT       (2)
#define GPTM0_GPTMTAMR_R_TACMR_EDGECOUNT (0x00000000)
#define GPTM0_GPTMTAMR_R_TACMR_EDGETIME  (0x00000004)

#define GPTM0_GPTMTAMR_TACMR_MASK        (0x00000001)
#define GPTM0_GPTMTAMR_TACMR_EDGECOUNT   (0x00000000)
#define GPTM0_GPTMTAMR_TACMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPTM0_GPTMTAMR_R_TAAMS_MASK      (0x00000008)
#define GPTM0_GPTMTAMR_R_TAAMS_BIT       (3)
#define GPTM0_GPTMTAMR_R_TAAMS_CAPCOMP   (0x00000000)
#define GPTM0_GPTMTAMR_R_TAAMS_PWM       (0x00000008)

#define GPTM0_GPTMTAMR_TAAMS_MASK        (0x00000001)
#define GPTM0_GPTMTAMR_TAAMS_CAPCOMP     (0x00000000)
#define GPTM0_GPTMTAMR_TAAMS_PWM         (0x00000001)
//--------

//--------
#define GPTM0_GPTMTAMR_R_TACDIR_MASK      (0x00000010)
#define GPTM0_GPTMTAMR_R_TACDIR_BIT       (4)
#define GPTM0_GPTMTAMR_R_TACDIR_DOWN      (0x00000000)
#define GPTM0_GPTMTAMR_R_TACDIR_UP        (0x00000010)

#define GPTM0_GPTMTAMR_TACDIR_MASK        (0x00000001)
#define GPTM0_GPTMTAMR_TACDIR_DOWN        (0x00000000)
#define GPTM0_GPTMTAMR_TACDIR_UP          (0x00000001)
//--------

//--------
#define GPTM0_GPTMTAMR_R_TAMIE_MASK      (0x00000020)
#define GPTM0_GPTMTAMR_R_TAMIE_BIT       (5)
#define GPTM0_GPTMTAMR_R_TAMIE_DIS       (0x00000000)
#define GPTM0_GPTMTAMR_R_TAMIE_EN        (0x00000020)

#define GPTM0_GPTMTAMR_TAMIE_MASK        (0x00000001)
#define GPTM0_GPTMTAMR_TAMIE_DIS         (0x00000000)
#define GPTM0_GPTMTAMR_TAMIE_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMTAMR_R_TAWOT_MASK      (0x00000040)
#define GPTM0_GPTMTAMR_R_TAWOT_BIT       (6)
#define GPTM0_GPTMTAMR_R_TAWOT_INSTANT   (0x00000000)
#define GPTM0_GPTMTAMR_R_TAWOT_TRIGGER   (0x00000040)

#define GPTM0_GPTMTAMR_TAWOT_MASK        (0x00000001)
#define GPTM0_GPTMTAMR_TAWOT_INSTANT     (0x00000000)
#define GPTM0_GPTMTAMR_TAWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPTM0_GPTMTAMR_R_TASNAPS_MASK      (0x00000080)
#define GPTM0_GPTMTAMR_R_TASNAPS_BIT       (7)
#define GPTM0_GPTMTAMR_R_TASNAPS_DIS       (0x00000000)
#define GPTM0_GPTMTAMR_R_TASNAPS_EN        (0x00000080)

#define GPTM0_GPTMTAMR_TASNAPS_MASK        (0x00000001)
#define GPTM0_GPTMTAMR_TASNAPS_DIS         (0x00000000)
#define GPTM0_GPTMTAMR_TASNAPS_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMTAMR_R_TAILD_MASK      (0x00000100)
#define GPTM0_GPTMTAMR_R_TAILD_BIT       (8)
#define GPTM0_GPTMTAMR_R_TAILD_NEXT      (0x00000000)
#define GPTM0_GPTMTAMR_R_TAILD_TIMEOUT   (0x00000100)

#define GPTM0_GPTMTAMR_TAILD_MASK        (0x00000001)
#define GPTM0_GPTMTAMR_TAILD_NEXT        (0x00000000)
#define GPTM0_GPTMTAMR_TAILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM0_GPTMTAMR_R_TAPWMIE_MASK      (0x00000200)
#define GPTM0_GPTMTAMR_R_TAPWMIE_BIT       (9)
#define GPTM0_GPTMTAMR_R_TAPWMIE_DIS       (0x00000000)
#define GPTM0_GPTMTAMR_R_TAPWMIE_EN        (0x00000200)

#define GPTM0_GPTMTAMR_TAPWMIE_MASK        (0x00000001)
#define GPTM0_GPTMTAMR_TAPWMIE_DIS         (0x00000000)
#define GPTM0_GPTMTAMR_TAPWMIE_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMTAMR_R_TAMRSU_MASK      (0x00000400)
#define GPTM0_GPTMTAMR_R_TAMRSU_BIT       (10)
#define GPTM0_GPTMTAMR_R_TAMRSU_NEXT      (0x00000000)
#define GPTM0_GPTMTAMR_R_TAMRSU_TIMEOUT   (0x00000400)

#define GPTM0_GPTMTAMR_TAMRSU_MASK        (0x00000001)
#define GPTM0_GPTMTAMR_TAMRSU_NEXT        (0x00000000)
#define GPTM0_GPTMTAMR_TAMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM0_GPTMTAMR_R_TAPLO_MASK      (0x00000800)
#define GPTM0_GPTMTAMR_R_TAPLO_BIT       (11)
#define GPTM0_GPTMTAMR_R_TAPLO_LOW       (0x00000000)
#define GPTM0_GPTMTAMR_R_TAPLO_HIGH      (0x00000800)

#define GPTM0_GPTMTAMR_TAPLO_MASK        (0x00000001)
#define GPTM0_GPTMTAMR_TAPLO_LOW         (0x00000000)
#define GPTM0_GPTMTAMR_TAPLO_HIGH        (0x00000001)
//--------

#define GPTM0_GPTMTAMR_TACMR_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(2*4))))
#define GPTM0_GPTMTAMR_TAAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(3*4))))
#define GPTM0_GPTMTAMR_TACDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(4*4))))
#define GPTM0_GPTMTAMR_TAMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(5*4))))
#define GPTM0_GPTMTAMR_TAWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(6*4))))
#define GPTM0_GPTMTAMR_TASNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(7*4))))
#define GPTM0_GPTMTAMR_TAILD_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(8*4))))
#define GPTM0_GPTMTAMR_TAPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(9*4))))
#define GPTM0_GPTMTAMR_TAMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(10*4))))
#define GPTM0_GPTMTAMR_TAPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.3 GPTMTBMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMTBMR            (((GPTMTBMR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTBMR_OFFSET )))
#define GPTM0_GPTMTBMR_R          (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTBMR_OFFSET)))


//--------
#define GPTM0_GPTMTBMR_R_TBMR_MASK      (0x00000003)
#define GPTM0_GPTMTBMR_R_TBMR_BIT       (0)
#define GPTM0_GPTMTBMR_R_TBMR_ONESHOT   (0x00000001)
#define GPTM0_GPTMTBMR_R_TBMR_PERIOD    (0x00000002)
#define GPTM0_GPTMTBMR_R_TBMR_CAPTURE   (0x00000003)

#define GPTM0_GPTMTBMR_TBMR_MASK        (0x00000003)
#define GPTM0_GPTMTBMR_TBMR_ONESHOT     (0x00000001)
#define GPTM0_GPTMTBMR_TBMR_PERIOD      (0x00000002)
#define GPTM0_GPTMTBMR_TBMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPTM0_GPTMTBMR_R_TBCMR_MASK      (0x00000004)
#define GPTM0_GPTMTBMR_R_TBCMR_BIT       (2)
#define GPTM0_GPTMTBMR_R_TBCMR_EDGECOUNT (0x00000000)
#define GPTM0_GPTMTBMR_R_TBCMR_EDGETIME  (0x00000004)

#define GPTM0_GPTMTBMR_TBCMR_MASK        (0x00000001)
#define GPTM0_GPTMTBMR_TBCMR_EDGECOUNT   (0x00000000)
#define GPTM0_GPTMTBMR_TBCMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPTM0_GPTMTBMR_R_TBAMS_MASK      (0x00000008)
#define GPTM0_GPTMTBMR_R_TBAMS_BIT       (3)
#define GPTM0_GPTMTBMR_R_TBAMS_CAPCOMP   (0x00000000)
#define GPTM0_GPTMTBMR_R_TBAMS_PWM       (0x00000008)

#define GPTM0_GPTMTBMR_TBAMS_MASK        (0x00000001)
#define GPTM0_GPTMTBMR_TBAMS_CAPCOMP     (0x00000000)
#define GPTM0_GPTMTBMR_TBAMS_PWM         (0x00000001)
//--------

//--------
#define GPTM0_GPTMTBMR_R_TBCDIR_MASK      (0x00000010)
#define GPTM0_GPTMTBMR_R_TBCDIR_BIT       (4)
#define GPTM0_GPTMTBMR_R_TBCDIR_DOWN      (0x00000000)
#define GPTM0_GPTMTBMR_R_TBCDIR_UP        (0x00000010)

#define GPTM0_GPTMTBMR_TBCDIR_MASK        (0x00000001)
#define GPTM0_GPTMTBMR_TBCDIR_DOWN        (0x00000000)
#define GPTM0_GPTMTBMR_TBCDIR_UP          (0x00000001)
//--------

//--------
#define GPTM0_GPTMTBMR_R_TBMIE_MASK      (0x00000020)
#define GPTM0_GPTMTBMR_R_TBMIE_BIT       (5)
#define GPTM0_GPTMTBMR_R_TBMIE_DIS       (0x00000000)
#define GPTM0_GPTMTBMR_R_TBMIE_EN        (0x00000020)

#define GPTM0_GPTMTBMR_TBMIE_MASK        (0x00000001)
#define GPTM0_GPTMTBMR_TBMIE_DIS         (0x00000000)
#define GPTM0_GPTMTBMR_TBMIE_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMTBMR_R_TBWOT_MASK      (0x00000040)
#define GPTM0_GPTMTBMR_R_TBWOT_BIT       (6)
#define GPTM0_GPTMTBMR_R_TBWOT_INSTANT   (0x00000000)
#define GPTM0_GPTMTBMR_R_TBWOT_TRIGGER   (0x00000040)

#define GPTM0_GPTMTBMR_TBWOT_MASK        (0x00000001)
#define GPTM0_GPTMTBMR_TBWOT_INSTANT     (0x00000000)
#define GPTM0_GPTMTBMR_TBWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPTM0_GPTMTBMR_R_TBSNAPS_MASK      (0x00000080)
#define GPTM0_GPTMTBMR_R_TBSNAPS_BIT       (7)
#define GPTM0_GPTMTBMR_R_TBSNAPS_DIS       (0x00000000)
#define GPTM0_GPTMTBMR_R_TBSNAPS_EN        (0x00000080)

#define GPTM0_GPTMTBMR_TBSNAPS_MASK        (0x00000001)
#define GPTM0_GPTMTBMR_TBSNAPS_DIS         (0x00000000)
#define GPTM0_GPTMTBMR_TBSNAPS_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMTBMR_R_TBILD_MASK      (0x00000100)
#define GPTM0_GPTMTBMR_R_TBILD_BIT       (8)
#define GPTM0_GPTMTBMR_R_TBILD_NEXT      (0x00000000)
#define GPTM0_GPTMTBMR_R_TBILD_TIMEOUT   (0x00000100)

#define GPTM0_GPTMTBMR_TBILD_MASK        (0x00000001)
#define GPTM0_GPTMTBMR_TBILD_NEXT        (0x00000000)
#define GPTM0_GPTMTBMR_TBILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM0_GPTMTBMR_R_TBPWMIE_MASK      (0x00000200)
#define GPTM0_GPTMTBMR_R_TBPWMIE_BIT       (9)
#define GPTM0_GPTMTBMR_R_TBPWMIE_DIS       (0x00000000)
#define GPTM0_GPTMTBMR_R_TBPWMIE_EN        (0x00000200)

#define GPTM0_GPTMTBMR_TBPWMIE_MASK        (0x00000001)
#define GPTM0_GPTMTBMR_TBPWMIE_DIS         (0x00000000)
#define GPTM0_GPTMTBMR_TBPWMIE_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMTBMR_R_TBMRSU_MASK      (0x00000400)
#define GPTM0_GPTMTBMR_R_TBMRSU_BIT       (10)
#define GPTM0_GPTMTBMR_R_TBMRSU_NEXT      (0x00000000)
#define GPTM0_GPTMTBMR_R_TBMRSU_TIMEOUT   (0x00000400)

#define GPTM0_GPTMTBMR_TBMRSU_MASK        (0x00000001)
#define GPTM0_GPTMTBMR_TBMRSU_NEXT        (0x00000000)
#define GPTM0_GPTMTBMR_TBMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM0_GPTMTBMR_R_TBPLO_MASK      (0x00000800)
#define GPTM0_GPTMTBMR_R_TBPLO_BIT       (11)
#define GPTM0_GPTMTBMR_R_TBPLO_LOW       (0x00000000)
#define GPTM0_GPTMTBMR_R_TBPLO_HIGH      (0x00000800)

#define GPTM0_GPTMTBMR_TBPLO_MASK        (0x00000001)
#define GPTM0_GPTMTBMR_TBPLO_LOW         (0x00000000)
#define GPTM0_GPTMTBMR_TBPLO_HIGH        (0x00000001)
//--------

#define GPTM0_GPTMTBMR_TBCMR_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(2*4))))
#define GPTM0_GPTMTBMR_TBAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(3*4))))
#define GPTM0_GPTMTBMR_TBCDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(4*4))))
#define GPTM0_GPTMTBMR_TBMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(5*4))))
#define GPTM0_GPTMTBMR_TBWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(6*4))))
#define GPTM0_GPTMTBMR_TBSNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(7*4))))
#define GPTM0_GPTMTBMR_TBILD_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(8*4))))
#define GPTM0_GPTMTBMR_TBPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(9*4))))
#define GPTM0_GPTMTBMR_TBMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(10*4))))
#define GPTM0_GPTMTBMR_TBPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.4 GPTMCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMCTL            (((GPTMCTL_TypeDef*)(GPTM0_BASE + GPTM_GPTMCTL_OFFSET )))
#define GPTM0_GPTMCTL_R          (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMCTL_OFFSET)))


//--------
#define GPTM0_GPTMCTL_R_TAEN_MASK      (0x00000001)
#define GPTM0_GPTMCTL_R_TAEN_BIT       (0)
#define GPTM0_GPTMCTL_R_TAEN_DIS       (0x00000000)
#define GPTM0_GPTMCTL_R_TAEN_EN        (0x00000001)

#define GPTM0_GPTMCTL_TAEN_MASK        (0x00000001)
#define GPTM0_GPTMCTL_TAEN_DIS         (0x00000000)
#define GPTM0_GPTMCTL_TAEN_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMCTL_R_TASTALL_MASK      (0x00000002)
#define GPTM0_GPTMCTL_R_TASTALL_BIT       (1)
#define GPTM0_GPTMCTL_R_TASTALL_CONTINUE  (0x00000000)
#define GPTM0_GPTMCTL_R_TASTALL_FREEZE    (0x00000002)

#define GPTM0_GPTMCTL_TASTALL_MASK        (0x00000001)
#define GPTM0_GPTMCTL_TASTALL_CONTINUE    (0x00000000)
#define GPTM0_GPTMCTL_TASTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPTM0_GPTMCTL_R_TAEVENT_MASK      (0x0000000C)
#define GPTM0_GPTMCTL_R_TAEVENT_BIT       (2)
#define GPTM0_GPTMCTL_R_TAEVENT_POS       (0x00000000)
#define GPTM0_GPTMCTL_R_TAEVENT_NEG       (0x00000004)
#define GPTM0_GPTMCTL_R_TAEVENT_BOTH      (0x0000000C)

#define GPTM0_GPTMCTL_TAEVENT_MASK        (0x00000003)
#define GPTM0_GPTMCTL_TAEVENT_NEG         (0x00000000)
#define GPTM0_GPTMCTL_TAEVENT_POS         (0x00000001)
#define GPTM0_GPTMCTL_TAEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPTM0_GPTMCTL_R_RTCEN_MASK      (0x00000010)
#define GPTM0_GPTMCTL_R_RTCEN_BIT       (4)
#define GPTM0_GPTMCTL_R_RTCEN_CONTINUE  (0x00000000)
#define GPTM0_GPTMCTL_R_RTCEN_FREEZE    (0x00000010)

#define GPTM0_GPTMCTL_RTCEN_MASK        (0x00000001)
#define GPTM0_GPTMCTL_RTCEN_CONTINUE    (0x00000000)
#define GPTM0_GPTMCTL_RTCEN_FREEZE      (0x00000001)
//--------

//--------
#define GPTM0_GPTMCTL_R_TAOTE_MASK      (0x00000020)
#define GPTM0_GPTMCTL_R_TAOTE_BIT       (5)
#define GPTM0_GPTMCTL_R_TAOTE_DIS       (0x00000000)
#define GPTM0_GPTMCTL_R_TAOTE_EN        (0x00000020)

#define GPTM0_GPTMCTL_TAOTE_MASK        (0x00000001)
#define GPTM0_GPTMCTL_TAOTE_DIS         (0x00000000)
#define GPTM0_GPTMCTL_TAOTE_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMCTL_R_TAPWML_MASK      (0x00000040)
#define GPTM0_GPTMCTL_R_TAPWML_BIT       (6)
#define GPTM0_GPTMCTL_R_TAPWML_NA        (0x00000000)
#define GPTM0_GPTMCTL_R_TAPWML_INV       (0x00000040)

#define GPTM0_GPTMCTL_TAPWML_MASK        (0x00000001)
#define GPTM0_GPTMCTL_TAPWML_NA          (0x00000000)
#define GPTM0_GPTMCTL_TAPWML_INV         (0x00000001)
//--------



//--------
#define GPTM0_GPTMCTL_R_TBEN_MASK      (0x00000100)
#define GPTM0_GPTMCTL_R_TBEN_BIT       (8)
#define GPTM0_GPTMCTL_R_TBEN_DIS       (0x00000000)
#define GPTM0_GPTMCTL_R_TBEN_EN        (0x00000100)

#define GPTM0_GPTMCTL_TBEN_MASK        (0x00000001)
#define GPTM0_GPTMCTL_TBEN_DIS         (0x00000000)
#define GPTM0_GPTMCTL_TBEN_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMCTL_R_TBSTALL_MASK      (0x00000200)
#define GPTM0_GPTMCTL_R_TBSTALL_BIT       (9)
#define GPTM0_GPTMCTL_R_TBSTALL_CONTINUE  (0x00000000)
#define GPTM0_GPTMCTL_R_TBSTALL_FREEZE    (0x00000200)

#define GPTM0_GPTMCTL_TBSTALL_MASK        (0x00000001)
#define GPTM0_GPTMCTL_TBSTALL_CONTINUE    (0x00000000)
#define GPTM0_GPTMCTL_TBSTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPTM0_GPTMCTL_R_TBEVENT_MASK      (0x00000C00)
#define GPTM0_GPTMCTL_R_TBEVENT_BIT       (10)
#define GPTM0_GPTMCTL_R_TBEVENT_POS       (0x00000000)
#define GPTM0_GPTMCTL_R_TBEVENT_NEG       (0x00000400)
#define GPTM0_GPTMCTL_R_TBEVENT_BOTH      (0x00000C00)

#define GPTM0_GPTMCTL_TBEVENT_MASK        (0x00000003)
#define GPTM0_GPTMCTL_TBEVENT_NEG         (0x00000000)
#define GPTM0_GPTMCTL_TBEVENT_POS         (0x00000001)
#define GPTM0_GPTMCTL_TBEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPTM0_GPTMCTL_R_TBOTE_MASK      (0x00002000)
#define GPTM0_GPTMCTL_R_TBOTE_BIT       (13)
#define GPTM0_GPTMCTL_R_TBOTE_DIS       (0x00000000)
#define GPTM0_GPTMCTL_R_TBOTE_EN        (0x00002000)

#define GPTM0_GPTMCTL_TBOTE_MASK        (0x00000001)
#define GPTM0_GPTMCTL_TBOTE_DIS         (0x00000000)
#define GPTM0_GPTMCTL_TBOTE_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMCTL_R_TBPWML_MASK      (0x00004000)
#define GPTM0_GPTMCTL_R_TBPWML_BIT       (14)
#define GPTM0_GPTMCTL_R_TBPWML_NA        (0x00000000)
#define GPTM0_GPTMCTL_R_TBPWML_INV       (0x00004000)

#define GPTM0_GPTMCTL_TBPWML_MASK        (0x00000001)
#define GPTM0_GPTMCTL_TBPWML_NA          (0x00000000)
#define GPTM0_GPTMCTL_TBPWML_INV         (0x00000001)
//--------

#define GPTM0_GPTMCTL_TAEN_BB      (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(0*4))))
#define GPTM0_GPTMCTL_TASTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(1*4))))
#define GPTM0_GPTMCTL_RTCEN_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(4*4))))
#define GPTM0_GPTMCTL_TAOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(5*4))))
#define GPTM0_GPTMCTL_TAPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTMGPTMCTL_OFFSET)*32)+(6*4))))
#define GPTM0_GPTMCTL_TBEN_BB      (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(8*4))))
#define GPTM0_GPTMCTL_TBSTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(9*4))))
#define GPTM0_GPTMCTL_TBOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(13*4))))
#define GPTM0_GPTMCTL_TBPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(14*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.5 GPTMSYNC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMSYNC            (((GPTMSYNC_TypeDef*)(GPTM0_BASE + GPTM_GPTMSYNC_OFFSET )))
#define GPTM0_GPTMSYNC_R          (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMSYNC_OFFSET)))

//--------
#define GPTM0_GPTMSYNC_R_SYNCT0_MASK      (0x00000003)
#define GPTM0_GPTMSYNC_R_SYNCT0_BIT       (0)
#define GPTM0_GPTMSYNC_R_SYNCT0_NA        (0x00000000)
#define GPTM0_GPTMSYNC_R_SYNCT0_TA        (0x00000001)
#define GPTM0_GPTMSYNC_R_SYNCT0_TB        (0x00000002)
#define GPTM0_GPTMSYNC_R_SYNCT0_BOTH      (0x00000003)

#define GPTM0_GPTMSYNC_SYNCT0_MASK        (0x00000003)
#define GPTM0_GPTMSYNC_SYNCT0_NA          (0x00000000)
#define GPTM0_GPTMSYNC_SYNCT0_TA          (0x00000001)
#define GPTM0_GPTMSYNC_SYNCT0_TB          (0x00000002)
#define GPTM0_GPTMSYNC_SYNCT0_BOTH        (0x00000003)
//--------

//--------
#define GPTM0_GPTMSYNC_R_SYNCT1_MASK      (0x0000000C)
#define GPTM0_GPTMSYNC_R_SYNCT1_BIT       (2)
#define GPTM0_GPTMSYNC_R_SYNCT1_NA        (0x00000000)
#define GPTM0_GPTMSYNC_R_SYNCT1_TA        (0x00000004)
#define GPTM0_GPTMSYNC_R_SYNCT1_TB        (0x00000008)
#define GPTM0_GPTMSYNC_R_SYNCT1_BOTH      (0x0000000C)

#define GPTM0_GPTMSYNC_SYNCT1_MASK        (0x00000003)
#define GPTM0_GPTMSYNC_SYNCT1_NA          (0x00000000)
#define GPTM0_GPTMSYNC_SYNCT1_TA          (0x00000001)
#define GPTM0_GPTMSYNC_SYNCT1_TB          (0x00000002)
#define GPTM0_GPTMSYNC_SYNCT1_BOTH        (0x00000003)
//--------

//--------
#define GPTM0_GPTMSYNC_R_SYNCT2_MASK      (0x00000030)
#define GPTM0_GPTMSYNC_R_SYNCT2_BIT       (4)
#define GPTM0_GPTMSYNC_R_SYNCT2_NA        (0x00000000)
#define GPTM0_GPTMSYNC_R_SYNCT2_TA        (0x00000010)
#define GPTM0_GPTMSYNC_R_SYNCT2_TB        (0x00000020)
#define GPTM0_GPTMSYNC_R_SYNCT2_BOTH      (0x00000030)

#define GPTM0_GPTMSYNC_SYNCT2_MASK        (0x00000003)
#define GPTM0_GPTMSYNC_SYNCT2_NA          (0x00000000)
#define GPTM0_GPTMSYNC_SYNCT2_TA          (0x00000001)
#define GPTM0_GPTMSYNC_SYNCT2_TB          (0x00000002)
#define GPTM0_GPTMSYNC_SYNCT2_BOTH        (0x00000003)
//--------

//--------
#define GPTM0_GPTMSYNC_R_SYNCT3_MASK      (0x000000C0)
#define GPTM0_GPTMSYNC_R_SYNCT3_BIT       (6)
#define GPTM0_GPTMSYNC_R_SYNCT3_NA        (0x00000000)
#define GPTM0_GPTMSYNC_R_SYNCT3_TA        (0x00000040)
#define GPTM0_GPTMSYNC_R_SYNCT3_TB        (0x00000080)
#define GPTM0_GPTMSYNC_R_SYNCT3_BOTH      (0x000000C0)

#define GPTM0_GPTMSYNC_SYNCT3_MASK        (0x00000003)
#define GPTM0_GPTMSYNC_SYNCT3_NA          (0x00000000)
#define GPTM0_GPTMSYNC_SYNCT3_TA          (0x00000001)
#define GPTM0_GPTMSYNC_SYNCT3_TB          (0x00000002)
#define GPTM0_GPTMSYNC_SYNCT3_BOTH        (0x00000003)
//--------

//--------
#define GPTM0_GPTMSYNC_R_SYNCT4_MASK      (0x00000300)
#define GPTM0_GPTMSYNC_R_SYNCT4_BIT       (8)
#define GPTM0_GPTMSYNC_R_SYNCT4_NA        (0x00000000)
#define GPTM0_GPTMSYNC_R_SYNCT4_TA        (0x00000100)
#define GPTM0_GPTMSYNC_R_SYNCT4_TB        (0x00000200)
#define GPTM0_GPTMSYNC_R_SYNCT4_BOTH      (0x00000300)

#define GPTM0_GPTMSYNC_SYNCT4_MASK        (0x00000003)
#define GPTM0_GPTMSYNC_SYNCT4_NA          (0x00000000)
#define GPTM0_GPTMSYNC_SYNCT4_TA          (0x00000001)
#define GPTM0_GPTMSYNC_SYNCT4_TB          (0x00000002)
#define GPTM0_GPTMSYNC_SYNCT4_BOTH        (0x00000003)
//--------

//--------
#define GPTM0_GPTMSYNC_R_SYNCT5_MASK      (0x00000C00)
#define GPTM0_GPTMSYNC_R_SYNCT5_BIT       (10)
#define GPTM0_GPTMSYNC_R_SYNCT5_NA        (0x00000000)
#define GPTM0_GPTMSYNC_R_SYNCT5_TA        (0x00000400)
#define GPTM0_GPTMSYNC_R_SYNCT5_TB        (0x00000800)
#define GPTM0_GPTMSYNC_R_SYNCT5_BOTH      (0x00000C00)

#define GPTM0_GPTMSYNC_SYNCT5_MASK        (0x00000003)
#define GPTM0_GPTMSYNC_SYNCT5_NA          (0x00000000)
#define GPTM0_GPTMSYNC_SYNCT5_TA          (0x00000001)
#define GPTM0_GPTMSYNC_SYNCT5_TB          (0x00000002)
#define GPTM0_GPTMSYNC_SYNCT5_BOTH        (0x00000003)
//--------

//--------
#define GPTM0_GPTMSYNC_R_SYNCWT0_MASK      (0x00003000)
#define GPTM0_GPTMSYNC_R_SYNCWT0_BIT       (12)
#define GPTM0_GPTMSYNC_R_SYNCWT0_NA        (0x00000000)
#define GPTM0_GPTMSYNC_R_SYNCWT0_TA        (0x00001000)
#define GPTM0_GPTMSYNC_R_SYNCWT0_TB        (0x00002000)
#define GPTM0_GPTMSYNC_R_SYNCWT0_BOTH      (0x00003000)

#define GPTM0_GPTMSYNC_SYNCWT0_MASK        (0x00000003)
#define GPTM0_GPTMSYNC_SYNCWT0_NA          (0x00000000)
#define GPTM0_GPTMSYNC_SYNCWT0_TA          (0x00000001)
#define GPTM0_GPTMSYNC_SYNCWT0_TB          (0x00000002)
#define GPTM0_GPTMSYNC_SYNCWT0_BOTH        (0x00000003)
//--------

//--------
#define GPTM0_GPTMSYNC_R_SYNCWT1_MASK      (0x0000C000)
#define GPTM0_GPTMSYNC_R_SYNCWT1_BIT       (14)
#define GPTM0_GPTMSYNC_R_SYNCWT1_NA        (0x00000000)
#define GPTM0_GPTMSYNC_R_SYNCWT1_TA        (0x00004000)
#define GPTM0_GPTMSYNC_R_SYNCWT1_TB        (0x00008000)
#define GPTM0_GPTMSYNC_R_SYNCWT1_BOTH      (0x0000C000)

#define GPTM0_GPTMSYNC_SYNCWT1_MASK        (0x00000003)
#define GPTM0_GPTMSYNC_SYNCWT1_NA          (0x00000000)
#define GPTM0_GPTMSYNC_SYNCWT1_TA          (0x00000001)
#define GPTM0_GPTMSYNC_SYNCWT1_TB          (0x00000002)
#define GPTM0_GPTMSYNC_SYNCWT1_BOTH        (0x00000003)
//--------

//--------
#define GPTM0_GPTMSYNC_R_SYNCWT2_MASK      (0x00030000)
#define GPTM0_GPTMSYNC_R_SYNCWT2_BIT       (16)
#define GPTM0_GPTMSYNC_R_SYNCWT2_NA        (0x00000000)
#define GPTM0_GPTMSYNC_R_SYNCWT2_TA        (0x00010000)
#define GPTM0_GPTMSYNC_R_SYNCWT2_TB        (0x00020000)
#define GPTM0_GPTMSYNC_R_SYNCWT2_BOTH      (0x00030000)

#define GPTM0_GPTMSYNC_SYNCWT2_MASK        (0x00000003)
#define GPTM0_GPTMSYNC_SYNCWT2_NA          (0x00000000)
#define GPTM0_GPTMSYNC_SYNCWT2_TA          (0x00000001)
#define GPTM0_GPTMSYNC_SYNCWT2_TB          (0x00000002)
#define GPTM0_GPTMSYNC_SYNCWT2_BOTH        (0x00000003)
//--------

//--------
#define GPTM0_GPTMSYNC_R_SYNCWT3_MASK      (0x000C0000)
#define GPTM0_GPTMSYNC_R_SYNCWT3_BIT       (18)
#define GPTM0_GPTMSYNC_R_SYNCWT3_NA        (0x00000000)
#define GPTM0_GPTMSYNC_R_SYNCWT3_TA        (0x00040000)
#define GPTM0_GPTMSYNC_R_SYNCWT3_TB        (0x00080000)
#define GPTM0_GPTMSYNC_R_SYNCWT3_BOTH      (0x000C0000)

#define GPTM0_GPTMSYNC_SYNCWT3_MASK        (0x00000003)
#define GPTM0_GPTMSYNC_SYNCWT3_NA          (0x00000000)
#define GPTM0_GPTMSYNC_SYNCWT3_TA          (0x00000001)
#define GPTM0_GPTMSYNC_SYNCWT3_TB          (0x00000002)
#define GPTM0_GPTMSYNC_SYNCWT3_BOTH        (0x00000003)
//--------

//--------
#define GPTM0_GPTMSYNC_R_SYNCWT4_MASK      (0x0030000)
#define GPTM0_GPTMSYNC_R_SYNCWT4_BIT       (20)
#define GPTM0_GPTMSYNC_R_SYNCWT4_NA        (0x00000000)
#define GPTM0_GPTMSYNC_R_SYNCWT4_TA        (0x00100000)
#define GPTM0_GPTMSYNC_R_SYNCWT4_TB        (0x00200000)
#define GPTM0_GPTMSYNC_R_SYNCWT4_BOTH      (0x00300000)

#define GPTM0_GPTMSYNC_SYNCWT4_MASK        (0x00000003)
#define GPTM0_GPTMSYNC_SYNCWT4_NA          (0x00000000)
#define GPTM0_GPTMSYNC_SYNCWT4_TA          (0x00000001)
#define GPTM0_GPTMSYNC_SYNCWT4_TB          (0x00000002)
#define GPTM0_GPTMSYNC_SYNCWT4_BOTH        (0x00000003)
//--------

//--------
#define GPTM0_GPTMSYNC_R_SYNCWT5_MASK      (0x00C00000)
#define GPTM0_GPTMSYNC_R_SYNCWT5_BIT       (22)
#define GPTM0_GPTMSYNC_R_SYNCWT5_NA        (0x00000000)
#define GPTM0_GPTMSYNC_R_SYNCWT5_TA        (0x00400000)
#define GPTM0_GPTMSYNC_R_SYNCWT5_TB        (0x00800000)
#define GPTM0_GPTMSYNC_R_SYNCWT5_BOTH      (0x00C00000)

#define GPTM0_GPTMSYNC_SYNCWT5_MASK        (0x00000003)
#define GPTM0_GPTMSYNC_SYNCWT5_NA          (0x00000000)
#define GPTM0_GPTMSYNC_SYNCWT5_TA          (0x00000001)
#define GPTM0_GPTMSYNC_SYNCWT5_TB          (0x00000002)
#define GPTM0_GPTMSYNC_SYNCWT5_BOTH        (0x00000003)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.6 GPTMIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMIMR            (((GPTMIMR_TypeDef*)(GPTM0_BASE + GPTM_GPTMIMR_OFFSET )))
#define GPTM0_GPTMIMR_R          (*((volatile  uint32_t *)(GPTM0_BASE +GPTM_GPTMIMR_OFFSET)))

//--------
#define GPTM0_GPTMIMR_R_TATOIM_MASK      (0x00000001)
#define GPTM0_GPTMIMR_R_TATOIM_BIT       (0)
#define GPTM0_GPTMIMR_R_TATOIM_DIS       (0x00000000)
#define GPTM0_GPTMIMR_R_TATOIM_EN        (0x00000001)

#define GPTM0_GPTMIMR_TATOIM_MASK        (0x00000001)
#define GPTM0_GPTMIMR_TATOIM_DIS         (0x00000000)
#define GPTM0_GPTMIMR_TATOIM_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMIMR_R_CAMIM_MASK      (0x00000002)
#define GPTM0_GPTMIMR_R_CAMIM_BIT       (1)
#define GPTM0_GPTMIMR_R_CAMIM_DIS       (0x00000000)
#define GPTM0_GPTMIMR_R_CAMIM_EN        (0x00000002)

#define GPTM0_GPTMIMR_CAMIM_MASK        (0x00000001)
#define GPTM0_GPTMIMR_CAMIM_DIS         (0x00000000)
#define GPTM0_GPTMIMR_CAMIM_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMIMR_R_CAEIM_MASK      (0x00000004)
#define GPTM0_GPTMIMR_R_CAEIM_BIT       (2)
#define GPTM0_GPTMIMR_R_CAEIM_DIS       (0x00000000)
#define GPTM0_GPTMIMR_R_CAEIM_EN        (0x00000004)

#define GPTM0_GPTMIMR_CAEIM_MASK        (0x00000001)
#define GPTM0_GPTMIMR_CAEIM_DIS         (0x00000000)
#define GPTM0_GPTMIMR_CAEIM_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMIMR_R_RTCIM_MASK      (0x00000008)
#define GPTM0_GPTMIMR_R_RTCIM_BIT       (3)
#define GPTM0_GPTMIMR_R_RTCIM_DIS       (0x00000000)
#define GPTM0_GPTMIMR_R_RTCIM_EN        (0x00000008)

#define GPTM0_GPTMIMR_RTCIM_MASK        (0x00000001)
#define GPTM0_GPTMIMR_RTCIM_DIS         (0x00000000)
#define GPTM0_GPTMIMR_RTCIM_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMIMR_R_TAMIM_MASK      (0x00000010)
#define GPTM0_GPTMIMR_R_TAMIM_BIT       (4)
#define GPTM0_GPTMIMR_R_TAMIM_DIS       (0x00000000)
#define GPTM0_GPTMIMR_R_TAMIM_EN        (0x00000010)

#define GPTM0_GPTMIMR_TAMIM_MASK        (0x00000001)
#define GPTM0_GPTMIMR_TAMIM_DIS         (0x00000000)
#define GPTM0_GPTMIMR_TAMIM_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMIMR_R_TBTOIM_MASK      (0x00000100)
#define GPTM0_GPTMIMR_R_TBTOIM_BIT       (8)
#define GPTM0_GPTMIMR_R_TBTOIM_DIS       (0x00000000)
#define GPTM0_GPTMIMR_R_TBTOIM_EN        (0x00000100)

#define GPTM0_GPTMIMR_TBTOIM_MASK        (0x00000001)
#define GPTM0_GPTMIMR_TBTOIM_DIS         (0x00000000)
#define GPTM0_GPTMIMR_TBTOIM_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMIMR_R_CBMIM_MASK      (0x00000200)
#define GPTM0_GPTMIMR_R_CBMIM_BIT       (9)
#define GPTM0_GPTMIMR_R_CBMIM_DIS       (0x00000000)
#define GPTM0_GPTMIMR_R_CBMIM_EN        (0x00000200)

#define GPTM0_GPTMIMR_CBMIM_MASK        (0x00000001)
#define GPTM0_GPTMIMR_CBMIM_DIS         (0x00000000)
#define GPTM0_GPTMIMR_CBMIM_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMIMR_R_CBEIM_MASK      (0x00000400)
#define GPTM0_GPTMIMR_R_CBEIM_BIT       (10)
#define GPTM0_GPTMIMR_R_CBEIM_DIS       (0x00000000)
#define GPTM0_GPTMIMR_R_CBEIM_EN        (0x00000400)

#define GPTM0_GPTMIMR_CBEIM_MASK        (0x00000001)
#define GPTM0_GPTMIMR_CBEIM_DIS         (0x00000000)
#define GPTM0_GPTMIMR_CBEIM_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMIMR_R_TBMIM_MASK      (0x00000800)
#define GPTM0_GPTMIMR_R_TBMIM_BIT       (11)
#define GPTM0_GPTMIMR_R_TBMIM_DIS       (0x00000000)
#define GPTM0_GPTMIMR_R_TBMIM_EN        (0x00000800)

#define GPTM0_GPTMIMR_TBMIM_MASK        (0x00000001)
#define GPTM0_GPTMIMR_TBMIM_DIS         (0x00000000)
#define GPTM0_GPTMIMR_TBMIM_EN          (0x00000001)
//--------

//--------
#define GPTM0_GPTMIMR_R_WUEIM_MASK      (0x00010000)
#define GPTM0_GPTMIMR_R_WUEIM_BIT       (16)
#define GPTM0_GPTMIMR_R_WUEIM_DIS       (0x00000000)
#define GPTM0_GPTMIMR_R_WUEIM_EN        (0x00010000)

#define GPTM0_GPTMIMR_WUEIM_MASK        (0x00000001)
#define GPTM0_GPTMIMR_WUEIM_DIS         (0x00000000)
#define GPTM0_GPTMIMR_WUEIM_EN          (0x00000001)
//--------

#define GPTM0_GPTMIMR_TATOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(0*4))))
#define GPTM0_GPTMIMR_CAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(1*4))))
#define GPTM0_GPTMIMR_CAEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(2*4))))
#define GPTM0_GPTMIMR_RTCIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(3*4))))
#define GPTM0_GPTMIMR_TAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(4*4))))
#define GPTM0_GPTMIMR_TBTOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(8*4))))
#define GPTM0_GPTMIMR_CBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(9*4))))
#define GPTM0_GPTMIMR_CBEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(10*4))))
#define GPTM0_GPTMIMR_TBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(11*4))))
#define GPTM0_GPTMIMR_WUEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(16*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.7 GPTMRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMRIS            (((GPTMRIS_TypeDef*)(GPTM0_BASE + GPTM_GPTMRIS_OFFSET )))
#define GPTM0_GPTMRIS_R          (*((volatile const uint32_t *)(GPTM0_BASE +GPTM_GPTMRIS_OFFSET)))



//--------
#define GPTM0_GPTMRIS_R_TATORIS_MASK      (0x00000001)
#define GPTM0_GPTMRIS_R_TATORIS_BIT       (0)
#define GPTM0_GPTMRIS_R_TATORIS_NOACTIVE  (0x00000000)
#define GPTM0_GPTMRIS_R_TATORIS_ACTIVE    (0x00000001)

#define GPTM0_GPTMRIS_TATORIS_MASK        (0x00000001)
#define GPTM0_GPTMRIS_TATORIS_NOACTIVE    (0x00000000)
#define GPTM0_GPTMRIS_TATORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM0_GPTMRIS_R_CAMRIS_MASK      (0x00000002)
#define GPTM0_GPTMRIS_R_CAMRIS_BIT       (1)
#define GPTM0_GPTMRIS_R_CAMRIS_NOACTIVE  (0x00000000)
#define GPTM0_GPTMRIS_R_CAMRIS_ACTIVE    (0x00000002)

#define GPTM0_GPTMRIS_CAMRIS_MASK        (0x00000001)
#define GPTM0_GPTMRIS_CAMRIS_NOACTIVE    (0x00000000)
#define GPTM0_GPTMRIS_CAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM0_GPTMRIS_R_CAERIS_MASK      (0x00000004)
#define GPTM0_GPTMRIS_R_CAERIS_BIT       (2)
#define GPTM0_GPTMRIS_R_CAERIS_NOACTIVE  (0x00000000)
#define GPTM0_GPTMRIS_R_CAERIS_ACTIVE    (0x00000004)

#define GPTM0_GPTMRIS_CAERIS_MASK        (0x00000001)
#define GPTM0_GPTMRIS_CAERIS_NOACTIVE    (0x00000000)
#define GPTM0_GPTMRIS_CAERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM0_GPTMRIS_R_RTCRIS_MASK      (0x00000008)
#define GPTM0_GPTMRIS_R_RTCRIS_BIT       (3)
#define GPTM0_GPTMRIS_R_RTCRIS_NOACTIVE  (0x00000000)
#define GPTM0_GPTMRIS_R_RTCRIS_ACTIVE    (0x00000008)

#define GPTM0_GPTMRIS_RTCRIS_MASK        (0x00000001)
#define GPTM0_GPTMRIS_RTCRIS_NOACTIVE    (0x00000000)
#define GPTM0_GPTMRIS_RTCRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM0_GPTMRIS_R_TAMRIS_MASK      (0x00000010)
#define GPTM0_GPTMRIS_R_TAMRIS_BIT       (4)
#define GPTM0_GPTMRIS_R_TAMRIS_NOACTIVE  (0x00000000)
#define GPTM0_GPTMRIS_R_TAMRIS_ACTIVE    (0x00000010)

#define GPTM0_GPTMRIS_TAMRIS_MASK        (0x00000001)
#define GPTM0_GPTMRIS_TAMRIS_NOACTIVE    (0x00000000)
#define GPTM0_GPTMRIS_TAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM0_GPTMRIS_R_TBTORIS_MASK      (0x00000100)
#define GPTM0_GPTMRIS_R_TBTORIS_BIT       (8)
#define GPTM0_GPTMRIS_R_TBTORIS_NOACTIVE  (0x00000000)
#define GPTM0_GPTMRIS_R_TBTORIS_ACTIVE    (0x00000100)

#define GPTM0_GPTMRIS_TBTORIS_MASK        (0x00000001)
#define GPTM0_GPTMRIS_TBTORIS_NOACTIVE    (0x00000000)
#define GPTM0_GPTMRIS_TBTORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM0_GPTMRIS_R_CBMRIS_MASK      (0x00000200)
#define GPTM0_GPTMRIS_R_CBMRIS_BIT       (9)
#define GPTM0_GPTMRIS_R_CBMRIS_NOACTIVE  (0x00000000)
#define GPTM0_GPTMRIS_R_CBMRIS_ACTIVE    (0x00000200)

#define GPTM0_GPTMRIS_CBMRIS_MASK        (0x00000001)
#define GPTM0_GPTMRIS_CBMRIS_NOACTIVE    (0x00000000)
#define GPTM0_GPTMRIS_CBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM0_GPTMRIS_R_CBERIS_MASK      (0x00000400)
#define GPTM0_GPTMRIS_R_CBERIS_BIT       (10)
#define GPTM0_GPTMRIS_R_CBERIS_NOACTIVE  (0x00000000)
#define GPTM0_GPTMRIS_R_CBERIS_ACTIVE    (0x00000400)

#define GPTM0_GPTMRIS_CBERIS_MASK        (0x00000001)
#define GPTM0_GPTMRIS_CBERIS_NOACTIVE    (0x00000000)
#define GPTM0_GPTMRIS_CBERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM0_GPTMRIS_R_TBMRIS_MASK      (0x00000800)
#define GPTM0_GPTMRIS_R_TBMRIS_BIT       (11)
#define GPTM0_GPTMRIS_R_TBMRIS_NOACTIVE  (0x00000000)
#define GPTM0_GPTMRIS_R_TBMRIS_ACTIVE    (0x00000800)

#define GPTM0_GPTMRIS_TBMRIS_MASK        (0x00000001)
#define GPTM0_GPTMRIS_TBMRIS_NOACTIVE    (0x00000000)
#define GPTM0_GPTMRIS_TBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM0_GPTMRIS_R_WUERIS_MASK      (0x00010000)
#define GPTM0_GPTMRIS_R_WUERIS_BIT       (16)
#define GPTM0_GPTMRIS_R_WUERIS_NOACTIVE  (0x00000000)
#define GPTM0_GPTMRIS_R_WUERIS_ACTIVE    (0x00010000)

#define GPTM0_GPTMRIS_WUERIS_MASK        (0x00000001)
#define GPTM0_GPTMRIS_WUERIS_NOACTIVE    (0x00000000)
#define GPTM0_GPTMRIS_WUERIS_ACTIVE      (0x00000001)
//--------

#define GPTM0_GPTMRIS_TATORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(0*4))))
#define GPTM0_GPTMRIS_CAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(1*4))))
#define GPTM0_GPTMRIS_CAERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(2*4))))
#define GPTM0_GPTMRIS_RTCRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(3*4))))
#define GPTM0_GPTMRIS_TAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(4*4))))
#define GPTM0_GPTMRIS_TBTORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(8*4))))
#define GPTM0_GPTMRIS_CBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(9*4))))
#define GPTM0_GPTMRIS_CBERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(10*4))))
#define GPTM0_GPTMRIS_TBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(11*4))))
#define GPTM0_GPTMRIS_WUERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(16*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.8 GPTMMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMMIS            (((GPTMMIS_TypeDef*)(GPTM0_BASE + GPTM_GPTMMIS_OFFSET )))
#define GPTM0_GPTMMIS_R          (*((volatile const uint32_t *)(GPTM0_BASE +GPTM_GPTMMIS_OFFSET)))




//--------
#define GPTM0_GPTMMIS_R_TATOMIS_MASK      (0x00000001)
#define GPTM0_GPTMMIS_R_TATOMIS_BIT       (0)
#define GPTM0_GPTMMIS_R_TATOMIS_NOOCCUR  (0x00000000)
#define GPTM0_GPTMMIS_R_TATOMIS_OCCUR    (0x00000001)

#define GPTM0_GPTMMIS_TATOMIS_MASK        (0x00000001)
#define GPTM0_GPTMMIS_TATOMIS_NOOCCUR    (0x00000000)
#define GPTM0_GPTMMIS_TATOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM0_GPTMMIS_R_CAMMIS_MASK      (0x00000002)
#define GPTM0_GPTMMIS_R_CAMMIS_BIT       (1)
#define GPTM0_GPTMMIS_R_CAMMIS_NOOCCUR  (0x00000000)
#define GPTM0_GPTMMIS_R_CAMMIS_OCCUR    (0x00000002)

#define GPTM0_GPTMMIS_CAMMIS_MASK        (0x00000001)
#define GPTM0_GPTMMIS_CAMMIS_NOOCCUR    (0x00000000)
#define GPTM0_GPTMMIS_CAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM0_GPTMMIS_R_CAEMIS_MASK      (0x00000004)
#define GPTM0_GPTMMIS_R_CAEMIS_BIT       (2)
#define GPTM0_GPTMMIS_R_CAEMIS_NOOCCUR  (0x00000000)
#define GPTM0_GPTMMIS_R_CAEMIS_OCCUR    (0x00000004)

#define GPTM0_GPTMMIS_CAEMIS_MASK        (0x00000001)
#define GPTM0_GPTMMIS_CAEMIS_NOOCCUR    (0x00000000)
#define GPTM0_GPTMMIS_CAEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM0_GPTMMIS_R_RTCMIS_MASK      (0x00000008)
#define GPTM0_GPTMMIS_R_RTCMIS_BIT       (3)
#define GPTM0_GPTMMIS_R_RTCMIS_NOOCCUR  (0x00000000)
#define GPTM0_GPTMMIS_R_RTCMIS_OCCUR    (0x00000008)

#define GPTM0_GPTMMIS_RTCMIS_MASK        (0x00000001)
#define GPTM0_GPTMMIS_RTCMIS_NOOCCUR    (0x00000000)
#define GPTM0_GPTMMIS_RTCMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM0_GPTMMIS_R_TAMMIS_MASK      (0x00000010)
#define GPTM0_GPTMMIS_R_TAMMIS_BIT       (4)
#define GPTM0_GPTMMIS_R_TAMMIS_NOOCCUR  (0x00000000)
#define GPTM0_GPTMMIS_R_TAMMIS_OCCUR    (0x00000010)

#define GPTM0_GPTMMIS_TAMMIS_MASK        (0x00000001)
#define GPTM0_GPTMMIS_TAMMIS_NOOCCUR    (0x00000000)
#define GPTM0_GPTMMIS_TAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM0_GPTMMIS_R_TBTOMIS_MASK      (0x00000100)
#define GPTM0_GPTMMIS_R_TBTOMIS_BIT       (8)
#define GPTM0_GPTMMIS_R_TBTOMIS_NOOCCUR  (0x00000000)
#define GPTM0_GPTMMIS_R_TBTOMIS_OCCUR    (0x00000100)

#define GPTM0_GPTMMIS_TBTOMIS_MASK        (0x00000001)
#define GPTM0_GPTMMIS_TBTOMIS_NOOCCUR    (0x00000000)
#define GPTM0_GPTMMIS_TBTOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM0_GPTMMIS_R_CBMMIS_MASK      (0x00000200)
#define GPTM0_GPTMMIS_R_CBMMIS_BIT       (9)
#define GPTM0_GPTMMIS_R_CBMMIS_NOOCCUR  (0x00000000)
#define GPTM0_GPTMMIS_R_CBMMIS_OCCUR    (0x00000200)

#define GPTM0_GPTMMIS_CBMMIS_MASK        (0x00000001)
#define GPTM0_GPTMMIS_CBMMIS_NOOCCUR    (0x00000000)
#define GPTM0_GPTMMIS_CBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM0_GPTMMIS_R_CBEMIS_MASK      (0x00000400)
#define GPTM0_GPTMMIS_R_CBEMIS_BIT       (10)
#define GPTM0_GPTMMIS_R_CBEMIS_NOOCCUR  (0x00000000)
#define GPTM0_GPTMMIS_R_CBEMIS_OCCUR    (0x00000400)

#define GPTM0_GPTMMIS_CBEMIS_MASK        (0x00000001)
#define GPTM0_GPTMMIS_CBEMIS_NOOCCUR    (0x00000000)
#define GPTM0_GPTMMIS_CBEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM0_GPTMMIS_R_TBMMIS_MASK      (0x00000800)
#define GPTM0_GPTMMIS_R_TBMMIS_BIT       (11)
#define GPTM0_GPTMMIS_R_TBMMIS_NOOCCUR  (0x00000000)
#define GPTM0_GPTMMIS_R_TBMMIS_OCCUR    (0x00000800)

#define GPTM0_GPTMMIS_TBMMIS_MASK        (0x00000001)
#define GPTM0_GPTMMIS_TBMMIS_NOOCCUR    (0x00000000)
#define GPTM0_GPTMMIS_TBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM0_GPTMMIS_R_WUEMIS_MASK      (0x00010000)
#define GPTM0_GPTMMIS_R_WUEMIS_BIT       (16)
#define GPTM0_GPTMMIS_R_WUEMIS_NOOCCUR  (0x00000000)
#define GPTM0_GPTMMIS_R_WUEMIS_OCCUR    (0x00010000)

#define GPTM0_GPTMMIS_WUEMIS_MASK        (0x00000001)
#define GPTM0_GPTMMIS_WUEMIS_NOOCCUR    (0x00000000)
#define GPTM0_GPTMMIS_WUEMIS_OCCUR      (0x00000001)
//--------

#define GPTM0_GPTMMIS_TATOMIS           (0x00000001)
#define GPTM0_GPTMMIS_CAMMIS            (0x00000002)
#define GPTM0_GPTMMIS_CAEMIS            (0x00000004)
#define GPTM0_GPTMMIS_RTCMIS            (0x00000008)
#define GPTM0_GPTMMIS_TAMMIS            (0x00000010)
#define GPTM0_GPTMMIS_TBTOMIS           (0x00000100)
#define GPTM0_GPTMMIS_CBMMIS            (0x00000200)
#define GPTM0_GPTMMIS_CBEMIS            (0x00000400)
#define GPTM0_GPTMMIS_TBMMIS            (0x00000800)
#define GPTM0_GPTMMIS_WUEMIS            (0x00010000)


#define GPTM0_GPTMMIS_TATOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(0*4))))
#define GPTM0_GPTMMIS_CAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(1*4))))
#define GPTM0_GPTMMIS_CAEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(2*4))))
#define GPTM0_GPTMMIS_RTCMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(3*4))))
#define GPTM0_GPTMMIS_TAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(4*4))))
#define GPTM0_GPTMMIS_TBTOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(8*4))))
#define GPTM0_GPTMMIS_CBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(9*4))))
#define GPTM0_GPTMMIS_CBEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(10*4))))
#define GPTM0_GPTMMIS_TBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(11*4))))
#define GPTM0_GPTMMIS_WUEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.9 GPTMICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMICR            (((GPTMICR_TypeDef*)(GPTM0_BASE + GPTM_GPTMICR_OFFSET )))
#define GPTM0_GPTMICR_R          (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMICR_OFFSET)))



//--------
#define GPTM0_GPTMICR_R_TATOCINT_MASK      (0x00000001)
#define GPTM0_GPTMICR_R_TATOCINT_BIT       (0)
#define GPTM0_GPTMICR_R_TATOCINT_CLEAR     (0x00000001)

#define GPTM0_GPTMICR_TATOCINT_MASK        (0x00000001)
#define GPTM0_GPTMICR_TATOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM0_GPTMICR_R_CAMCINT_MASK      (0x00000002)
#define GPTM0_GPTMICR_R_CAMCINT_BIT       (1)
#define GPTM0_GPTMICR_R_CAMCINT_CLEAR     (0x00000002)

#define GPTM0_GPTMICR_CAMCINT_MASK        (0x00000001)
#define GPTM0_GPTMICR_CAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM0_GPTMICR_R_CAECINT_MASK      (0x00000004)
#define GPTM0_GPTMICR_R_CAECINT_BIT       (2)
#define GPTM0_GPTMICR_R_CAECINT_CLEAR     (0x00000004)

#define GPTM0_GPTMICR_CAECINT_MASK        (0x00000001)
#define GPTM0_GPTMICR_CAECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM0_GPTMICR_R_RTCCINT_MASK      (0x00000008)
#define GPTM0_GPTMICR_R_RTCCINT_BIT       (3)
#define GPTM0_GPTMICR_R_RTCCINT_CLEAR     (0x00000008)

#define GPTM0_GPTMICR_RTCCINT_MASK        (0x00000001)
#define GPTM0_GPTMICR_RTCCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM0_GPTMICR_R_TAMCINT_MASK      (0x00000010)
#define GPTM0_GPTMICR_R_TAMCINT_BIT       (4)
#define GPTM0_GPTMICR_R_TAMCINT_CLEAR     (0x00000010)

#define GPTM0_GPTMICR_TAMCINT_MASK        (0x00000001)
#define GPTM0_GPTMICR_TAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM0_GPTMICR_R_TBTOCINT_MASK      (0x00000100)
#define GPTM0_GPTMICR_R_TBTOCINT_BIT       (8)
#define GPTM0_GPTMICR_R_TBTOCINT_CLEAR     (0x00000100)

#define GPTM0_GPTMICR_TBTOCINT_MASK        (0x00000001)
#define GPTM0_GPTMICR_TBTOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM0_GPTMICR_R_CBMCINT_MASK      (0x00000200)
#define GPTM0_GPTMICR_R_CBMCINT_BIT       (9)
#define GPTM0_GPTMICR_R_CBMCINT_CLEAR     (0x00000200)

#define GPTM0_GPTMICR_CBMCINT_MASK        (0x00000001)
#define GPTM0_GPTMICR_CBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM0_GPTMICR_R_CBECINT_MASK      (0x00000400)
#define GPTM0_GPTMICR_R_CBECINT_BIT       (10)
#define GPTM0_GPTMICR_R_CBECINT_CLEAR     (0x00000400)

#define GPTM0_GPTMICR_CBECINT_MASK        (0x00000001)
#define GPTM0_GPTMICR_CBECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM0_GPTMICR_R_TBMCINT_MASK      (0x00000800)
#define GPTM0_GPTMICR_R_TBMCINT_BIT       (11)
#define GPTM0_GPTMICR_R_TBMCINT_CLEAR     (0x00000800)

#define GPTM0_GPTMICR_TBMCINT_MASK        (0x00000001)
#define GPTM0_GPTMICR_TBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM0_GPTMICR_R_WUECINT_MASK      (0x00010000)
#define GPTM0_GPTMICR_R_WUECINT_BIT       (16)
#define GPTM0_GPTMICR_R_WUECINT_CLEAR     (0x00010000)

#define GPTM0_GPTMICR_WUECINT_MASK        (0x00000001)
#define GPTM0_GPTMICR_WUECINT_CLEAR       (0x00000001)
//--------


#define GPTM0_GPTMICR_TATOCINT           (0x00000001)
#define GPTM0_GPTMICR_CAMCINT            (0x00000002)
#define GPTM0_GPTMICR_CAECINT            (0x00000004)
#define GPTM0_GPTMICR_RTCCINT            (0x00000008)
#define GPTM0_GPTMICR_TAMCINT            (0x00000010)
#define GPTM0_GPTMICR_TBTOCINT           (0x00000100)
#define GPTM0_GPTMICR_CBMCINT            (0x00000200)
#define GPTM0_GPTMICR_CBECINT            (0x00000400)
#define GPTM0_GPTMICR_TBMCINT            (0x00000800)
#define GPTM0_GPTMICR_WUECINT            (0x00010000)


#define GPTM0_GPTMICR_TATOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(0*4))))
#define GPTM0_GPTMICR_CAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(1*4))))
#define GPTM0_GPTMICR_CAECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(2*4))))
#define GPTM0_GPTMICR_RTCCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(3*4))))
#define GPTM0_GPTMICR_TAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(4*4))))
#define GPTM0_GPTMICR_TBTOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(8*4))))
#define GPTM0_GPTMICR_CBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(9*4))))
#define GPTM0_GPTMICR_CBECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(10*4))))
#define GPTM0_GPTMICR_TBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(11*4))))
#define GPTM0_GPTMICR_WUECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.10 GPTMTAILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMTAILR            (((GPTMTAILR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTAILR_OFFSET )))
#define GPTM0_GPTMTAILR_R          (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTAILR_OFFSET)))

//--------
#define GPTM0_GPTMTAILR_R_TAILR_MASK      (0xFFFFFFFF)
#define GPTM0_GPTMTAILR_R_TAILR_BIT       (0)

#define GPTM0_GPTMTAILR_TAILR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.11 GPTMTBILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMTBILR            (((GPTMTBILR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTBILR_OFFSET )))
#define GPTM0_GPTMTBILR_R          (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTBILR_OFFSET)))

//--------
#define GPTM0_GPTMTBILR_R_TBILR_MASK      (0xFFFFFFFF)
#define GPTM0_GPTMTBILR_R_TBILR_BIT       (0)

#define GPTM0_GPTMTBILR_TBILR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.12 GPTMTAMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMTAMATCHR            (((GPTMTAMATCHR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTAMATCHR_OFFSET )))
#define GPTM0_GPTMTAMATCHR_R          (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTAMATCHR_OFFSET)))


//--------
#define GPTM0_GPTMTAMATCHR_R_TAMR_MASK      (0xFFFFFFFF)
#define GPTM0_GPTMTAMATCHR_R_TAMR_BIT       (0)

#define GPTM0_GPTMTAMATCHR_TAMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.13 GPTMTBMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMTBMATCHR            (((GPTMTBMATCHR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTBMATCHR_OFFSET )))
#define GPTM0_GPTMTBMATCHR_R          (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTBMATCHR_OFFSET)))


//--------
#define GPTM0_GPTMTBMATCHR_R_TBMR_MASK      (0xFFFFFFFF)
#define GPTM0_GPTMTBMATCHR_R_TBMR_BIT       (0)

#define GPTM0_GPTMTBMATCHR_TBMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.14 GPTMTAPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMTAPR            (((GPTMTAPR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTAPR_OFFSET )))
#define GPTM0_GPTMTAPR_R          (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTAPR_OFFSET)))


//--------
#define GPTM0_GPTMTAPR_R_TAPSR_MASK      (0x000000FF)
#define GPTM0_GPTMTAPR_R_TAPSR_BIT       (0)

#define GPTM0_GPTMTAPR_TAPSR_MASK        (0x000000FF)
//--------

//--------
#define GPTM0_GPTMTAPR_R_TAPSRH_MASK      (0x0000FF00)
#define GPTM0_GPTMTAPR_R_TAPSRH_BIT       (8)

#define GPTM0_GPTMTAPR_TAPSRH_MASK        (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.15 GPTMTBPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMTBPR            (((GPTMTBPR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTBPR_OFFSET )))
#define GPTM0_GPTMTBPR_R          (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTBPR_OFFSET)))


//--------
#define GPTM0_GPTMTBPR_R_TBPSR_MASK      (0x000000FF)
#define GPTM0_GPTMTBPR_R_TBPSR_BIT       (0)

#define GPTM0_GPTMTBPR_TBPSR_MASK        (0x000000FF)
//--------


//--------
#define GPTM0_GPTMTBPR_R_TBPSRH_MASK      (0x0000FF00)
#define GPTM0_GPTMTBPR_R_TBPSRH_BIT       (8)

#define GPTM0_GPTMTBPR_TBPSRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.16 GPTMTAPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMTAPMR            (((GPTMTAPMR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTAPMR_OFFSET )))
#define GPTM0_GPTMTAPMR_R          (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTAPMR_OFFSET)))


//--------
#define GPTM0_GPTMTAPMR_R_TAPSMR_MASK      (0x000000FF)
#define GPTM0_GPTMTAPMR_R_TAPSMR_BIT       (0)

#define GPTM0_GPTMTAMPR_TAPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPTM0_GPTMTAPMR_R_TAPSMRH_MASK      (0x0000FF00)
#define GPTM0_GPTMTAPMR_R_TAPSMRH_BIT       (8)

#define GPTM0_GPTMTAPMR_TAPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.17 GPTMTBPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMTBPMR            (((GPTMTBPMR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTBPMR_OFFSET )))
#define GPTM0_GPTMTBPMR_R          (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTBPMR_OFFSET)))

//--------
#define GPTM0_GPTMTBPMR_R_TBPSMR_MASK      (0x000000FF)
#define GPTM0_GPTMTBPMR_R_TBPSMR_BIT       (0)

#define GPTM0_GPTMTBMPR_TBPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPTM0_GPTMTBPMR_R_TBPSMRH_MASK      (0x0000FF00)
#define GPTM0_GPTMTBPMR_R_TBPSMRH_BIT       (8)

#define GPTM0_GPTMTBPMR_TBPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.18 GPTMTAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMTAR            (((GPTMTAR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTAR_OFFSET )))
#define GPTM0_GPTMTAR_R          (*((volatile const  int32_t *)(GPTM0_BASE +GPTM_GPTMTAR_OFFSET)))


//--------
#define GPTM0_GPTMTAR_R_TAR_MASK      (0xFFFFFFFF)
#define GPTM0_GPTMTAR_R_TAR_BIT       (0)

#define GPTM0_GPTMTAR_TAR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.19 GPTMTBR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMTBR            (((GPTMTBR_TypeDef*)(GPTM0_BASE + GPTM_GPTMTBR_OFFSET )))
#define GPTM0_GPTMTBR_R          (*((volatile const uint32_t *)(GPTM0_BASE +GPTM_GPTMTBR_OFFSET)))


//--------
#define GPTM0_GPTMTBR_R_TBR_MASK      (0xFFFFFFFF)
#define GPTM0_GPTMTBR_R_TBR_BIT       (0)

#define GPTM0_GPTMTBR_TBR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.20 GPTMTAV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMTAV            (((GPTMTAV_TypeDef*)(GPTM0_BASE + GPTM_GPTMTAV_OFFSET )))
#define GPTM0_GPTMTAV_R          (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTAV_OFFSET)))

//--------
#define GPTM0_GPTMTAV_R_TAV_MASK      (0xFFFFFFFF)
#define GPTM0_GPTMTAV_R_TAV_BIT       (0)

#define GPTM0_GPTMTAV_TAV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.21 GPTMTBV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMTBV            (((GPTMTBV_TypeDef*)(GPTM0_BASE + GPTM_GPTMTBV_OFFSET )))
#define GPTM0_GPTMTBV_R          (*((volatile uint32_t *)(GPTM0_BASE +GPTM_GPTMTBV_OFFSET)))


//--------
#define GPTM0_GPTMTBV_R_TBV_MASK      (0xFFFFFFFF)
#define GPTM0_GPTMTBV_R_TBV_BIT       (0)

#define GPTM0_GPTMTBV_TBV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.22 GPTMRTCPD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMRTCPD            (((GPTMRTCPD_TypeDef*)(GPTM0_BASE + GPTM_GPTMRTCPD_OFFSET )))
#define GPTM0_GPTMRTCPD_R          (*((volatile const uint32_t *)(GPTM0_BASE +GPTM_GPTMRTCPD_OFFSET)))


//--------
#define GPTM0_GPTMRTCPD_R_RTCPD_MASK      (0x0000FFFF)
#define GPTM0_GPTMRTCPD_R_RTCPD_BIT       (0)
#define GPTM0_GPTMRTCPD_R_RTCPD_DEFAULT   (0x00007FFF)

#define GPTM0_GPTMRTCPD_RTCPD_MASK        (0x0000FFFF)
#define GPTM0_GPTMRTCPD_RTCPD_DEFAULT     (0x00007FFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.23 GPTMTAPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPTM0_GPTMTAPS            (((GPTMTAPS_TypeDef*)(GPTM0_BASE + GPTM_GPTMTAPS_OFFSET )))
#define GPTM0_GPTMTAPS_R          (*((volatile const uint32_t *)(GPTM0_BASE +GPTM_GPTMTAPS_OFFSET)))

//--------
#define GPTM0_GPTMTAPS_R_PSS_MASK      (0x0000FFFF)
#define GPTM0_GPTMTAPS_R_PSS_BIT       (0)

#define GPTM0_GPTMTAPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.24 GPTMTBPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMTBPS            (((GPTMTBPS_TypeDef*)(GPTM0_BASE + GPTM_GPTMTBPS_OFFSET )))
#define GPTM0_GPTMTBPS_R          (*((volatile const uint32_t *)(GPTM0_BASE +GPTM_GPTMTBPS_OFFSET)))

//--------
#define GPTM0_GPTMTBPS_R_PSS_MASK      (0x0000FFFF)
#define GPTM0_GPTMTBPS_R_PSS_BIT       (0)

#define GPTM0_GPTMTBPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.25 GPTMTAPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define GPTM0_GPTMTAPV            (((GPTMTAPV_TypeDef*)(GPTM0_BASE + GPTM_GPTMTAPV_OFFSET )))
#define GPTM0_GPTMTAPV_R          (*((volatile const uint32_t *)(GPTM0_BASE +GPTM_GPTMTAPV_OFFSET)))

//--------
#define GPTM0_GPTMTAPV_R_PSV_MASK      (0x0000FFFF)
#define GPTM0_GPTMTAPV_R_PSV_BIT       (0)

#define GPTM0_GPTMTAPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.26 GPTMTBPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPTM0_GPTMTBPV            (((GPTMTBPV_TypeDef*)(GPTM0_BASE + GPTM_GPTMTBPV_OFFSET )))
#define GPTM0_GPTMTBPV_R          (*((volatile const uint32_t *)(GPTM0_BASE +GPTM_GPTMTBPV_OFFSET)))

//--------
#define GPTM0_GPTMTBPV_R_PSV_MASK      (0x0000FFFF)
#define GPTM0_GPTMTBPV_R_PSV_BIT       (0)

#define GPTM0_GPTMTBPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.27 GPTMPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM0_GPTMPP            (((GPTMPP_TypeDef*)(GPTM0_BASE + GPTM_GPTMPP_OFFSET )))
#define GPTM0_GPTMPP_R          (*((volatile const uint32_t *)(GPTM0_BASE +GPTM_GPTMPP_OFFSET)))

#define GPTM0_GPTMPP_SIZE        (0x0000000F)

//--------
#define GPTM0_GPTMPP_R_SIZE_MASK      (0x0000000F)
#define GPTM0_GPTMPP_R_SIZE_BIT       (0)
#define GPTM0_GPTMPP_R_SIZE_16b       (0x00000000)
#define GPTM0_GPTMPP_R_SIZE_32b       (0x00000001)

#define GPTM0_GPTMPP_SIZE_MASK        (0x0000000F)
#define GPTM0_GPTMPP_SIZE_16b         (0x00000000)
#define GPTM0_GPTMPP_SIZE_32b         (0x00000001)
//--------


// ToDO GPTM1
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 GPTM1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.1 GPTMCFG ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMCFG            (((GPTMCFG_TypeDef*)(GPTM1_BASE + GPTM_GPTMCFG_OFFSET )))
#define GPTM1_GPTMCFG_R          (*((volatile uint32_t *)(GPTM1_BASE +GPTM_GPTMCFG_OFFSET)))


//--------
#define GPTM1_GPTMCFG_R_GPTMCFG_MASK      (0x00000007)
#define GPTM1_GPTMCFG_R_GPTMCFG_BIT       (0)
#define GPTM1_GPTMCFG_R_GPTMCFG_BOTH    (0x00000000)
#define GPTM1_GPTMCFG_R_GPTMCFG_RTC       (0x00000001)
#define GPTM1_GPTMCFG_R_GPTMCFG_SINGLE      (0x00000004)

#define GPTM1_GPTMCFG_GPTMCFG_MASK        (0x00000007)
#define GPTM1_GPTMCFG_GPTMCFG_BOTH      (0x00000000)
#define GPTM1_GPTMCFG_GPTMCFG_RTC         (0x00000001)
#define GPTM1_GPTMCFG_GPTMCFG_SINGLE        (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.2 GPTMTAMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMTAMR            (((GPTMTAMR_TypeDef*)(GPTM1_BASE + GPTM_GPTMTAMR_OFFSET )))
#define GPTM1_GPTMTAMR_R          (*((volatile uint32_t *)(GPTM1_BASE +GPTM_GPTMTAMR_OFFSET)))


//--------
#define GPTM1_GPTMTAMR_R_TAMR_MASK      (0x00000003)
#define GPTM1_GPTMTAMR_R_TAMR_BIT       (0)
#define GPTM1_GPTMTAMR_R_TAMR_ONESHOT   (0x00000001)
#define GPTM1_GPTMTAMR_R_TAMR_PERIOD    (0x00000002)
#define GPTM1_GPTMTAMR_R_TAMR_CAPTURE   (0x00000003)

#define GPTM1_GPTMTAMR_TAMR_MASK        (0x00000003)
#define GPTM1_GPTMTAMR_TAMR_ONESHOT     (0x00000001)
#define GPTM1_GPTMTAMR_TAMR_PERIOD      (0x00000002)
#define GPTM1_GPTMTAMR_TAMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPTM1_GPTMTAMR_R_TACMR_MASK      (0x00000004)
#define GPTM1_GPTMTAMR_R_TACMR_BIT       (2)
#define GPTM1_GPTMTAMR_R_TACMR_EDGECOUNT (0x00000000)
#define GPTM1_GPTMTAMR_R_TACMR_EDGETIME  (0x00000004)

#define GPTM1_GPTMTAMR_TACMR_MASK        (0x00000001)
#define GPTM1_GPTMTAMR_TACMR_EDGECOUNT   (0x00000000)
#define GPTM1_GPTMTAMR_TACMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPTM1_GPTMTAMR_R_TAAMS_MASK      (0x00000008)
#define GPTM1_GPTMTAMR_R_TAAMS_BIT       (3)
#define GPTM1_GPTMTAMR_R_TAAMS_CAPCOMP   (0x00000000)
#define GPTM1_GPTMTAMR_R_TAAMS_PWM       (0x00000008)

#define GPTM1_GPTMTAMR_TAAMS_MASK        (0x00000001)
#define GPTM1_GPTMTAMR_TAAMS_CAPCOMP     (0x00000000)
#define GPTM1_GPTMTAMR_TAAMS_PWM         (0x00000001)
//--------

//--------
#define GPTM1_GPTMTAMR_R_TACDIR_MASK      (0x00000010)
#define GPTM1_GPTMTAMR_R_TACDIR_BIT       (4)
#define GPTM1_GPTMTAMR_R_TACDIR_DOWN      (0x00000000)
#define GPTM1_GPTMTAMR_R_TACDIR_UP        (0x00000010)

#define GPTM1_GPTMTAMR_TACDIR_MASK        (0x00000001)
#define GPTM1_GPTMTAMR_TACDIR_DOWN        (0x00000000)
#define GPTM1_GPTMTAMR_TACDIR_UP          (0x00000001)
//--------

//--------
#define GPTM1_GPTMTAMR_R_TAMIE_MASK      (0x00000020)
#define GPTM1_GPTMTAMR_R_TAMIE_BIT       (5)
#define GPTM1_GPTMTAMR_R_TAMIE_DIS       (0x00000000)
#define GPTM1_GPTMTAMR_R_TAMIE_EN        (0x00000020)

#define GPTM1_GPTMTAMR_TAMIE_MASK        (0x00000001)
#define GPTM1_GPTMTAMR_TAMIE_DIS         (0x00000000)
#define GPTM1_GPTMTAMR_TAMIE_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMTAMR_R_TAWOT_MASK      (0x00000040)
#define GPTM1_GPTMTAMR_R_TAWOT_BIT       (6)
#define GPTM1_GPTMTAMR_R_TAWOT_INSTANT   (0x00000000)
#define GPTM1_GPTMTAMR_R_TAWOT_TRIGGER   (0x00000040)

#define GPTM1_GPTMTAMR_TAWOT_MASK        (0x00000001)
#define GPTM1_GPTMTAMR_TAWOT_INSTANT     (0x00000000)
#define GPTM1_GPTMTAMR_TAWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPTM1_GPTMTAMR_R_TASNAPS_MASK      (0x00000080)
#define GPTM1_GPTMTAMR_R_TASNAPS_BIT       (7)
#define GPTM1_GPTMTAMR_R_TASNAPS_DIS       (0x00000000)
#define GPTM1_GPTMTAMR_R_TASNAPS_EN        (0x00000080)

#define GPTM1_GPTMTAMR_TASNAPS_MASK        (0x00000001)
#define GPTM1_GPTMTAMR_TASNAPS_DIS         (0x00000000)
#define GPTM1_GPTMTAMR_TASNAPS_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMTAMR_R_TAILD_MASK      (0x00000100)
#define GPTM1_GPTMTAMR_R_TAILD_BIT       (8)
#define GPTM1_GPTMTAMR_R_TAILD_NEXT      (0x00000000)
#define GPTM1_GPTMTAMR_R_TAILD_TIMEOUT   (0x00000100)

#define GPTM1_GPTMTAMR_TAILD_MASK        (0x00000001)
#define GPTM1_GPTMTAMR_TAILD_NEXT        (0x00000000)
#define GPTM1_GPTMTAMR_TAILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM1_GPTMTAMR_R_TAPWMIE_MASK      (0x00000200)
#define GPTM1_GPTMTAMR_R_TAPWMIE_BIT       (9)
#define GPTM1_GPTMTAMR_R_TAPWMIE_DIS       (0x00000000)
#define GPTM1_GPTMTAMR_R_TAPWMIE_EN        (0x00000200)

#define GPTM1_GPTMTAMR_TAPWMIE_MASK        (0x00000001)
#define GPTM1_GPTMTAMR_TAPWMIE_DIS         (0x00000000)
#define GPTM1_GPTMTAMR_TAPWMIE_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMTAMR_R_TAMRSU_MASK      (0x00000400)
#define GPTM1_GPTMTAMR_R_TAMRSU_BIT       (10)
#define GPTM1_GPTMTAMR_R_TAMRSU_NEXT      (0x00000000)
#define GPTM1_GPTMTAMR_R_TAMRSU_TIMEOUT   (0x00000400)

#define GPTM1_GPTMTAMR_TAMRSU_MASK        (0x00000001)
#define GPTM1_GPTMTAMR_TAMRSU_NEXT        (0x00000000)
#define GPTM1_GPTMTAMR_TAMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM1_GPTMTAMR_R_TAPLO_MASK      (0x00000800)
#define GPTM1_GPTMTAMR_R_TAPLO_BIT       (11)
#define GPTM1_GPTMTAMR_R_TAPLO_LOW       (0x00000000)
#define GPTM1_GPTMTAMR_R_TAPLO_HIGH      (0x00000800)

#define GPTM1_GPTMTAMR_TAPLO_MASK        (0x00000001)
#define GPTM1_GPTMTAMR_TAPLO_LOW         (0x00000000)
#define GPTM1_GPTMTAMR_TAPLO_HIGH        (0x00000001)
//--------

#define GPTM1_GPTMTAMR_TACMR_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(2*4))))
#define GPTM1_GPTMTAMR_TAAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(3*4))))
#define GPTM1_GPTMTAMR_TACDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(4*4))))
#define GPTM1_GPTMTAMR_TAMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(5*4))))
#define GPTM1_GPTMTAMR_TAWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(6*4))))
#define GPTM1_GPTMTAMR_TASNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(7*4))))
#define GPTM1_GPTMTAMR_TAILD_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(8*4))))
#define GPTM1_GPTMTAMR_TAPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(9*4))))
#define GPTM1_GPTMTAMR_TAMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(10*4))))
#define GPTM1_GPTMTAMR_TAPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.3 GPTMTBMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMTBMR            (((GPTMTBMR_TypeDef*)(GPTM1_BASE + GPTM_GPTMTBMR_OFFSET )))
#define GPTM1_GPTMTBMR_R          (*((volatile uint32_t *)(GPTM1_BASE +GPTM_GPTMTBMR_OFFSET)))


//--------
#define GPTM1_GPTMTBMR_R_TBMR_MASK      (0x00000003)
#define GPTM1_GPTMTBMR_R_TBMR_BIT       (0)
#define GPTM1_GPTMTBMR_R_TBMR_ONESHOT   (0x00000001)
#define GPTM1_GPTMTBMR_R_TBMR_PERIOD    (0x00000002)
#define GPTM1_GPTMTBMR_R_TBMR_CAPTURE   (0x00000003)

#define GPTM1_GPTMTBMR_TBMR_MASK        (0x00000003)
#define GPTM1_GPTMTBMR_TBMR_ONESHOT     (0x00000001)
#define GPTM1_GPTMTBMR_TBMR_PERIOD      (0x00000002)
#define GPTM1_GPTMTBMR_TBMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPTM1_GPTMTBMR_R_TBCMR_MASK      (0x00000004)
#define GPTM1_GPTMTBMR_R_TBCMR_BIT       (2)
#define GPTM1_GPTMTBMR_R_TBCMR_EDGECOUNT (0x00000000)
#define GPTM1_GPTMTBMR_R_TBCMR_EDGETIME  (0x00000004)

#define GPTM1_GPTMTBMR_TBCMR_MASK        (0x00000001)
#define GPTM1_GPTMTBMR_TBCMR_EDGECOUNT   (0x00000000)
#define GPTM1_GPTMTBMR_TBCMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPTM1_GPTMTBMR_R_TBAMS_MASK      (0x00000008)
#define GPTM1_GPTMTBMR_R_TBAMS_BIT       (3)
#define GPTM1_GPTMTBMR_R_TBAMS_CAPCOMP   (0x00000000)
#define GPTM1_GPTMTBMR_R_TBAMS_PWM       (0x00000008)

#define GPTM1_GPTMTBMR_TBAMS_MASK        (0x00000001)
#define GPTM1_GPTMTBMR_TBAMS_CAPCOMP     (0x00000000)
#define GPTM1_GPTMTBMR_TBAMS_PWM         (0x00000001)
//--------

//--------
#define GPTM1_GPTMTBMR_R_TBCDIR_MASK      (0x00000010)
#define GPTM1_GPTMTBMR_R_TBCDIR_BIT       (4)
#define GPTM1_GPTMTBMR_R_TBCDIR_DOWN      (0x00000000)
#define GPTM1_GPTMTBMR_R_TBCDIR_UP        (0x00000010)

#define GPTM1_GPTMTBMR_TBCDIR_MASK        (0x00000001)
#define GPTM1_GPTMTBMR_TBCDIR_DOWN        (0x00000000)
#define GPTM1_GPTMTBMR_TBCDIR_UP          (0x00000001)
//--------

//--------
#define GPTM1_GPTMTBMR_R_TBMIE_MASK      (0x00000020)
#define GPTM1_GPTMTBMR_R_TBMIE_BIT       (5)
#define GPTM1_GPTMTBMR_R_TBMIE_DIS       (0x00000000)
#define GPTM1_GPTMTBMR_R_TBMIE_EN        (0x00000020)

#define GPTM1_GPTMTBMR_TBMIE_MASK        (0x00000001)
#define GPTM1_GPTMTBMR_TBMIE_DIS         (0x00000000)
#define GPTM1_GPTMTBMR_TBMIE_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMTBMR_R_TBWOT_MASK      (0x00000040)
#define GPTM1_GPTMTBMR_R_TBWOT_BIT       (6)
#define GPTM1_GPTMTBMR_R_TBWOT_INSTANT   (0x00000000)
#define GPTM1_GPTMTBMR_R_TBWOT_TRIGGER   (0x00000040)

#define GPTM1_GPTMTBMR_TBWOT_MASK        (0x00000001)
#define GPTM1_GPTMTBMR_TBWOT_INSTANT     (0x00000000)
#define GPTM1_GPTMTBMR_TBWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPTM1_GPTMTBMR_R_TBSNAPS_MASK      (0x00000080)
#define GPTM1_GPTMTBMR_R_TBSNAPS_BIT       (7)
#define GPTM1_GPTMTBMR_R_TBSNAPS_DIS       (0x00000000)
#define GPTM1_GPTMTBMR_R_TBSNAPS_EN        (0x00000080)

#define GPTM1_GPTMTBMR_TBSNAPS_MASK        (0x00000001)
#define GPTM1_GPTMTBMR_TBSNAPS_DIS         (0x00000000)
#define GPTM1_GPTMTBMR_TBSNAPS_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMTBMR_R_TBILD_MASK      (0x00000100)
#define GPTM1_GPTMTBMR_R_TBILD_BIT       (8)
#define GPTM1_GPTMTBMR_R_TBILD_NEXT      (0x00000000)
#define GPTM1_GPTMTBMR_R_TBILD_TIMEOUT   (0x00000100)

#define GPTM1_GPTMTBMR_TBILD_MASK        (0x00000001)
#define GPTM1_GPTMTBMR_TBILD_NEXT        (0x00000000)
#define GPTM1_GPTMTBMR_TBILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM1_GPTMTBMR_R_TBPWMIE_MASK      (0x00000200)
#define GPTM1_GPTMTBMR_R_TBPWMIE_BIT       (9)
#define GPTM1_GPTMTBMR_R_TBPWMIE_DIS       (0x00000000)
#define GPTM1_GPTMTBMR_R_TBPWMIE_EN        (0x00000200)

#define GPTM1_GPTMTBMR_TBPWMIE_MASK        (0x00000001)
#define GPTM1_GPTMTBMR_TBPWMIE_DIS         (0x00000000)
#define GPTM1_GPTMTBMR_TBPWMIE_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMTBMR_R_TBMRSU_MASK      (0x00000400)
#define GPTM1_GPTMTBMR_R_TBMRSU_BIT       (10)
#define GPTM1_GPTMTBMR_R_TBMRSU_NEXT      (0x00000000)
#define GPTM1_GPTMTBMR_R_TBMRSU_TIMEOUT   (0x00000400)

#define GPTM1_GPTMTBMR_TBMRSU_MASK        (0x00000001)
#define GPTM1_GPTMTBMR_TBMRSU_NEXT        (0x00000000)
#define GPTM1_GPTMTBMR_TBMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM1_GPTMTBMR_R_TBPLO_MASK      (0x00000800)
#define GPTM1_GPTMTBMR_R_TBPLO_BIT       (11)
#define GPTM1_GPTMTBMR_R_TBPLO_LOW       (0x00000000)
#define GPTM1_GPTMTBMR_R_TBPLO_HIGH      (0x00000800)

#define GPTM1_GPTMTBMR_TBPLO_MASK        (0x00000001)
#define GPTM1_GPTMTBMR_TBPLO_LOW         (0x00000000)
#define GPTM1_GPTMTBMR_TBPLO_HIGH        (0x00000001)
//--------

#define GPTM1_GPTMTBMR_TBCMR_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(2*4))))
#define GPTM1_GPTMTBMR_TBAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(3*4))))
#define GPTM1_GPTMTBMR_TBCDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(4*4))))
#define GPTM1_GPTMTBMR_TBMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(5*4))))
#define GPTM1_GPTMTBMR_TBWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(6*4))))
#define GPTM1_GPTMTBMR_TBSNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(7*4))))
#define GPTM1_GPTMTBMR_TBILD_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(8*4))))
#define GPTM1_GPTMTBMR_TBPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(9*4))))
#define GPTM1_GPTMTBMR_TBMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(10*4))))
#define GPTM1_GPTMTBMR_TBPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.4 GPTMCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMCTL            (((GPTMCTL_TypeDef*)(GPTM1_BASE + GPTM_GPTMCTL_OFFSET )))
#define GPTM1_GPTMCTL_R          (*((volatile uint32_t *)(GPTM1_BASE +GPTM_GPTMCTL_OFFSET)))


//--------
#define GPTM1_GPTMCTL_R_TAEN_MASK      (0x00000001)
#define GPTM1_GPTMCTL_R_TAEN_BIT       (0)
#define GPTM1_GPTMCTL_R_TAEN_DIS       (0x00000000)
#define GPTM1_GPTMCTL_R_TAEN_EN        (0x00000001)

#define GPTM1_GPTMCTL_TAEN_MASK        (0x00000001)
#define GPTM1_GPTMCTL_TAEN_DIS         (0x00000000)
#define GPTM1_GPTMCTL_TAEN_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMCTL_R_TASTALL_MASK      (0x00000002)
#define GPTM1_GPTMCTL_R_TASTALL_BIT       (1)
#define GPTM1_GPTMCTL_R_TASTALL_CONTINUE  (0x00000000)
#define GPTM1_GPTMCTL_R_TASTALL_FREEZE    (0x00000002)

#define GPTM1_GPTMCTL_TASTALL_MASK        (0x00000001)
#define GPTM1_GPTMCTL_TASTALL_CONTINUE    (0x00000000)
#define GPTM1_GPTMCTL_TASTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPTM1_GPTMCTL_R_TAEVENT_MASK      (0x0000000C)
#define GPTM1_GPTMCTL_R_TAEVENT_BIT       (2)
#define GPTM1_GPTMCTL_R_TAEVENT_POS       (0x00000000)
#define GPTM1_GPTMCTL_R_TAEVENT_NEG       (0x00000004)
#define GPTM1_GPTMCTL_R_TAEVENT_BOTH      (0x0000000C)

#define GPTM1_GPTMCTL_TAEVENT_MASK        (0x00000003)
#define GPTM1_GPTMCTL_TAEVENT_NEG         (0x00000000)
#define GPTM1_GPTMCTL_TAEVENT_POS         (0x00000001)
#define GPTM1_GPTMCTL_TAEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPTM1_GPTMCTL_R_RTCEN_MASK      (0x00000010)
#define GPTM1_GPTMCTL_R_RTCEN_BIT       (4)
#define GPTM1_GPTMCTL_R_RTCEN_CONTINUE  (0x00000000)
#define GPTM1_GPTMCTL_R_RTCEN_FREEZE    (0x00000010)

#define GPTM1_GPTMCTL_RTCEN_MASK        (0x00000001)
#define GPTM1_GPTMCTL_RTCEN_CONTINUE    (0x00000000)
#define GPTM1_GPTMCTL_RTCEN_FREEZE      (0x00000001)
//--------

//--------
#define GPTM1_GPTMCTL_R_TAOTE_MASK      (0x00000020)
#define GPTM1_GPTMCTL_R_TAOTE_BIT       (5)
#define GPTM1_GPTMCTL_R_TAOTE_DIS       (0x00000000)
#define GPTM1_GPTMCTL_R_TAOTE_EN        (0x00000020)

#define GPTM1_GPTMCTL_TAOTE_MASK        (0x00000001)
#define GPTM1_GPTMCTL_TAOTE_DIS         (0x00000000)
#define GPTM1_GPTMCTL_TAOTE_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMCTL_R_TAPWML_MASK      (0x00000040)
#define GPTM1_GPTMCTL_R_TAPWML_BIT       (6)
#define GPTM1_GPTMCTL_R_TAPWML_NA        (0x00000000)
#define GPTM1_GPTMCTL_R_TAPWML_INV       (0x00000040)

#define GPTM1_GPTMCTL_TAPWML_MASK        (0x00000001)
#define GPTM1_GPTMCTL_TAPWML_NA          (0x00000000)
#define GPTM1_GPTMCTL_TAPWML_INV         (0x00000001)
//--------



//--------
#define GPTM1_GPTMCTL_R_TBEN_MASK      (0x00000100)
#define GPTM1_GPTMCTL_R_TBEN_BIT       (8)
#define GPTM1_GPTMCTL_R_TBEN_DIS       (0x00000000)
#define GPTM1_GPTMCTL_R_TBEN_EN        (0x00000100)

#define GPTM1_GPTMCTL_TBEN_MASK        (0x00000001)
#define GPTM1_GPTMCTL_TBEN_DIS         (0x00000000)
#define GPTM1_GPTMCTL_TBEN_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMCTL_R_TBSTALL_MASK      (0x00000200)
#define GPTM1_GPTMCTL_R_TBSTALL_BIT       (9)
#define GPTM1_GPTMCTL_R_TBSTALL_CONTINUE  (0x00000000)
#define GPTM1_GPTMCTL_R_TBSTALL_FREEZE    (0x00000200)

#define GPTM1_GPTMCTL_TBSTALL_MASK        (0x00000001)
#define GPTM1_GPTMCTL_TBSTALL_CONTINUE    (0x00000000)
#define GPTM1_GPTMCTL_TBSTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPTM1_GPTMCTL_R_TBEVENT_MASK      (0x00000C00)
#define GPTM1_GPTMCTL_R_TBEVENT_BIT       (10)
#define GPTM1_GPTMCTL_R_TBEVENT_POS       (0x00000000)
#define GPTM1_GPTMCTL_R_TBEVENT_NEG       (0x00000400)
#define GPTM1_GPTMCTL_R_TBEVENT_BOTH      (0x00000C00)

#define GPTM1_GPTMCTL_TBEVENT_MASK        (0x00000003)
#define GPTM1_GPTMCTL_TBEVENT_NEG         (0x00000000)
#define GPTM1_GPTMCTL_TBEVENT_POS         (0x00000001)
#define GPTM1_GPTMCTL_TBEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPTM1_GPTMCTL_R_TBOTE_MASK      (0x00002000)
#define GPTM1_GPTMCTL_R_TBOTE_BIT       (13)
#define GPTM1_GPTMCTL_R_TBOTE_DIS       (0x00000000)
#define GPTM1_GPTMCTL_R_TBOTE_EN        (0x00002000)

#define GPTM1_GPTMCTL_TBOTE_MASK        (0x00000001)
#define GPTM1_GPTMCTL_TBOTE_DIS         (0x00000000)
#define GPTM1_GPTMCTL_TBOTE_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMCTL_R_TBPWML_MASK      (0x00004000)
#define GPTM1_GPTMCTL_R_TBPWML_BIT       (14)
#define GPTM1_GPTMCTL_R_TBPWML_NA        (0x00000000)
#define GPTM1_GPTMCTL_R_TBPWML_INV       (0x00004000)

#define GPTM1_GPTMCTL_TBPWML_MASK        (0x00000001)
#define GPTM1_GPTMCTL_TBPWML_NA          (0x00000000)
#define GPTM1_GPTMCTL_TBPWML_INV         (0x00000001)
//--------

#define GPTM1_GPTMCTL_TAEN_BB      (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(0*4))))
#define GPTM1_GPTMCTL_TASTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(1*4))))
#define GPTM1_GPTMCTL_RTCEN_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(4*4))))
#define GPTM1_GPTMCTL_TAOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(5*4))))
#define GPTM1_GPTMCTL_TAPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTMGPTMCTL_OFFSET)*32)+(6*4))))
#define GPTM1_GPTMCTL_TBEN_BB      (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(8*4))))
#define GPTM1_GPTMCTL_TBSTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(9*4))))
#define GPTM1_GPTMCTL_TBOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(13*4))))
#define GPTM1_GPTMCTL_TBPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(14*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.5 GPTMSYNC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMSYNC            (((GPTMSYNC_TypeDef*)(GPTM1_BASE + GPTM_GPTMSYNC_OFFSET )))
#define GPTM1_GPTMSYNC_R          (*((volatile uint32_t *)(GPTM1_BASE +GPTM_GPTMSYNC_OFFSET)))

//--------
#define GPTM1_GPTMSYNC_R_SYNCT0_MASK      (0x00000003)
#define GPTM1_GPTMSYNC_R_SYNCT0_BIT       (0)
#define GPTM1_GPTMSYNC_R_SYNCT0_NA        (0x00000000)
#define GPTM1_GPTMSYNC_R_SYNCT0_TA        (0x00000001)
#define GPTM1_GPTMSYNC_R_SYNCT0_TB        (0x00000002)
#define GPTM1_GPTMSYNC_R_SYNCT0_BOTH      (0x00000003)

#define GPTM1_GPTMSYNC_SYNCT0_MASK        (0x00000003)
#define GPTM1_GPTMSYNC_SYNCT0_NA          (0x00000000)
#define GPTM1_GPTMSYNC_SYNCT0_TA          (0x00000001)
#define GPTM1_GPTMSYNC_SYNCT0_TB          (0x00000002)
#define GPTM1_GPTMSYNC_SYNCT0_BOTH        (0x00000003)
//--------

//--------
#define GPTM1_GPTMSYNC_R_SYNCT1_MASK      (0x0000000C)
#define GPTM1_GPTMSYNC_R_SYNCT1_BIT       (2)
#define GPTM1_GPTMSYNC_R_SYNCT1_NA        (0x00000000)
#define GPTM1_GPTMSYNC_R_SYNCT1_TA        (0x00000004)
#define GPTM1_GPTMSYNC_R_SYNCT1_TB        (0x00000008)
#define GPTM1_GPTMSYNC_R_SYNCT1_BOTH      (0x0000000C)

#define GPTM1_GPTMSYNC_SYNCT1_MASK        (0x00000003)
#define GPTM1_GPTMSYNC_SYNCT1_NA          (0x00000000)
#define GPTM1_GPTMSYNC_SYNCT1_TA          (0x00000001)
#define GPTM1_GPTMSYNC_SYNCT1_TB          (0x00000002)
#define GPTM1_GPTMSYNC_SYNCT1_BOTH        (0x00000003)
//--------

//--------
#define GPTM1_GPTMSYNC_R_SYNCT2_MASK      (0x00000030)
#define GPTM1_GPTMSYNC_R_SYNCT2_BIT       (4)
#define GPTM1_GPTMSYNC_R_SYNCT2_NA        (0x00000000)
#define GPTM1_GPTMSYNC_R_SYNCT2_TA        (0x00000010)
#define GPTM1_GPTMSYNC_R_SYNCT2_TB        (0x00000020)
#define GPTM1_GPTMSYNC_R_SYNCT2_BOTH      (0x00000030)

#define GPTM1_GPTMSYNC_SYNCT2_MASK        (0x00000003)
#define GPTM1_GPTMSYNC_SYNCT2_NA          (0x00000000)
#define GPTM1_GPTMSYNC_SYNCT2_TA          (0x00000001)
#define GPTM1_GPTMSYNC_SYNCT2_TB          (0x00000002)
#define GPTM1_GPTMSYNC_SYNCT2_BOTH        (0x00000003)
//--------

//--------
#define GPTM1_GPTMSYNC_R_SYNCT3_MASK      (0x000000C0)
#define GPTM1_GPTMSYNC_R_SYNCT3_BIT       (6)
#define GPTM1_GPTMSYNC_R_SYNCT3_NA        (0x00000000)
#define GPTM1_GPTMSYNC_R_SYNCT3_TA        (0x00000040)
#define GPTM1_GPTMSYNC_R_SYNCT3_TB        (0x00000080)
#define GPTM1_GPTMSYNC_R_SYNCT3_BOTH      (0x000000C0)

#define GPTM1_GPTMSYNC_SYNCT3_MASK        (0x00000003)
#define GPTM1_GPTMSYNC_SYNCT3_NA          (0x00000000)
#define GPTM1_GPTMSYNC_SYNCT3_TA          (0x00000001)
#define GPTM1_GPTMSYNC_SYNCT3_TB          (0x00000002)
#define GPTM1_GPTMSYNC_SYNCT3_BOTH        (0x00000003)
//--------

//--------
#define GPTM1_GPTMSYNC_R_SYNCT4_MASK      (0x00000300)
#define GPTM1_GPTMSYNC_R_SYNCT4_BIT       (8)
#define GPTM1_GPTMSYNC_R_SYNCT4_NA        (0x00000000)
#define GPTM1_GPTMSYNC_R_SYNCT4_TA        (0x00000100)
#define GPTM1_GPTMSYNC_R_SYNCT4_TB        (0x00000200)
#define GPTM1_GPTMSYNC_R_SYNCT4_BOTH      (0x00000300)

#define GPTM1_GPTMSYNC_SYNCT4_MASK        (0x00000003)
#define GPTM1_GPTMSYNC_SYNCT4_NA          (0x00000000)
#define GPTM1_GPTMSYNC_SYNCT4_TA          (0x00000001)
#define GPTM1_GPTMSYNC_SYNCT4_TB          (0x00000002)
#define GPTM1_GPTMSYNC_SYNCT4_BOTH        (0x00000003)
//--------

//--------
#define GPTM1_GPTMSYNC_R_SYNCT5_MASK      (0x00000C00)
#define GPTM1_GPTMSYNC_R_SYNCT5_BIT       (10)
#define GPTM1_GPTMSYNC_R_SYNCT5_NA        (0x00000000)
#define GPTM1_GPTMSYNC_R_SYNCT5_TA        (0x00000400)
#define GPTM1_GPTMSYNC_R_SYNCT5_TB        (0x00000800)
#define GPTM1_GPTMSYNC_R_SYNCT5_BOTH      (0x00000C00)

#define GPTM1_GPTMSYNC_SYNCT5_MASK        (0x00000003)
#define GPTM1_GPTMSYNC_SYNCT5_NA          (0x00000000)
#define GPTM1_GPTMSYNC_SYNCT5_TA          (0x00000001)
#define GPTM1_GPTMSYNC_SYNCT5_TB          (0x00000002)
#define GPTM1_GPTMSYNC_SYNCT5_BOTH        (0x00000003)
//--------

//--------
#define GPTM1_GPTMSYNC_R_SYNCWT0_MASK      (0x00003000)
#define GPTM1_GPTMSYNC_R_SYNCWT0_BIT       (12)
#define GPTM1_GPTMSYNC_R_SYNCWT0_NA        (0x00000000)
#define GPTM1_GPTMSYNC_R_SYNCWT0_TA        (0x00001000)
#define GPTM1_GPTMSYNC_R_SYNCWT0_TB        (0x00002000)
#define GPTM1_GPTMSYNC_R_SYNCWT0_BOTH      (0x00003000)

#define GPTM1_GPTMSYNC_SYNCWT0_MASK        (0x00000003)
#define GPTM1_GPTMSYNC_SYNCWT0_NA          (0x00000000)
#define GPTM1_GPTMSYNC_SYNCWT0_TA          (0x00000001)
#define GPTM1_GPTMSYNC_SYNCWT0_TB          (0x00000002)
#define GPTM1_GPTMSYNC_SYNCWT0_BOTH        (0x00000003)
//--------

//--------
#define GPTM1_GPTMSYNC_R_SYNCWT1_MASK      (0x0000C000)
#define GPTM1_GPTMSYNC_R_SYNCWT1_BIT       (14)
#define GPTM1_GPTMSYNC_R_SYNCWT1_NA        (0x00000000)
#define GPTM1_GPTMSYNC_R_SYNCWT1_TA        (0x00004000)
#define GPTM1_GPTMSYNC_R_SYNCWT1_TB        (0x00008000)
#define GPTM1_GPTMSYNC_R_SYNCWT1_BOTH      (0x0000C000)

#define GPTM1_GPTMSYNC_SYNCWT1_MASK        (0x00000003)
#define GPTM1_GPTMSYNC_SYNCWT1_NA          (0x00000000)
#define GPTM1_GPTMSYNC_SYNCWT1_TA          (0x00000001)
#define GPTM1_GPTMSYNC_SYNCWT1_TB          (0x00000002)
#define GPTM1_GPTMSYNC_SYNCWT1_BOTH        (0x00000003)
//--------

//--------
#define GPTM1_GPTMSYNC_R_SYNCWT2_MASK      (0x00030000)
#define GPTM1_GPTMSYNC_R_SYNCWT2_BIT       (16)
#define GPTM1_GPTMSYNC_R_SYNCWT2_NA        (0x00000000)
#define GPTM1_GPTMSYNC_R_SYNCWT2_TA        (0x00010000)
#define GPTM1_GPTMSYNC_R_SYNCWT2_TB        (0x00020000)
#define GPTM1_GPTMSYNC_R_SYNCWT2_BOTH      (0x00030000)

#define GPTM1_GPTMSYNC_SYNCWT2_MASK        (0x00000003)
#define GPTM1_GPTMSYNC_SYNCWT2_NA          (0x00000000)
#define GPTM1_GPTMSYNC_SYNCWT2_TA          (0x00000001)
#define GPTM1_GPTMSYNC_SYNCWT2_TB          (0x00000002)
#define GPTM1_GPTMSYNC_SYNCWT2_BOTH        (0x00000003)
//--------

//--------
#define GPTM1_GPTMSYNC_R_SYNCWT3_MASK      (0x000C0000)
#define GPTM1_GPTMSYNC_R_SYNCWT3_BIT       (18)
#define GPTM1_GPTMSYNC_R_SYNCWT3_NA        (0x00000000)
#define GPTM1_GPTMSYNC_R_SYNCWT3_TA        (0x00040000)
#define GPTM1_GPTMSYNC_R_SYNCWT3_TB        (0x00080000)
#define GPTM1_GPTMSYNC_R_SYNCWT3_BOTH      (0x000C0000)

#define GPTM1_GPTMSYNC_SYNCWT3_MASK        (0x00000003)
#define GPTM1_GPTMSYNC_SYNCWT3_NA          (0x00000000)
#define GPTM1_GPTMSYNC_SYNCWT3_TA          (0x00000001)
#define GPTM1_GPTMSYNC_SYNCWT3_TB          (0x00000002)
#define GPTM1_GPTMSYNC_SYNCWT3_BOTH        (0x00000003)
//--------

//--------
#define GPTM1_GPTMSYNC_R_SYNCWT4_MASK      (0x0030000)
#define GPTM1_GPTMSYNC_R_SYNCWT4_BIT       (20)
#define GPTM1_GPTMSYNC_R_SYNCWT4_NA        (0x00000000)
#define GPTM1_GPTMSYNC_R_SYNCWT4_TA        (0x00100000)
#define GPTM1_GPTMSYNC_R_SYNCWT4_TB        (0x00200000)
#define GPTM1_GPTMSYNC_R_SYNCWT4_BOTH      (0x00300000)

#define GPTM1_GPTMSYNC_SYNCWT4_MASK        (0x00000003)
#define GPTM1_GPTMSYNC_SYNCWT4_NA          (0x00000000)
#define GPTM1_GPTMSYNC_SYNCWT4_TA          (0x00000001)
#define GPTM1_GPTMSYNC_SYNCWT4_TB          (0x00000002)
#define GPTM1_GPTMSYNC_SYNCWT4_BOTH        (0x00000003)
//--------

//--------
#define GPTM1_GPTMSYNC_R_SYNCWT5_MASK      (0x00C00000)
#define GPTM1_GPTMSYNC_R_SYNCWT5_BIT       (22)
#define GPTM1_GPTMSYNC_R_SYNCWT5_NA        (0x00000000)
#define GPTM1_GPTMSYNC_R_SYNCWT5_TA        (0x00400000)
#define GPTM1_GPTMSYNC_R_SYNCWT5_TB        (0x00800000)
#define GPTM1_GPTMSYNC_R_SYNCWT5_BOTH      (0x00C00000)

#define GPTM1_GPTMSYNC_SYNCWT5_MASK        (0x00000003)
#define GPTM1_GPTMSYNC_SYNCWT5_NA          (0x00000000)
#define GPTM1_GPTMSYNC_SYNCWT5_TA          (0x00000001)
#define GPTM1_GPTMSYNC_SYNCWT5_TB          (0x00000002)
#define GPTM1_GPTMSYNC_SYNCWT5_BOTH        (0x00000003)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.6 GPTMIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMIMR            (((GPTMIMR_TypeDef*)(GPTM1_BASE + GPTM_GPTMIMR_OFFSET )))
#define GPTM1_GPTMIMR_R          (*((volatile  uint32_t *)(GPTM1_BASE +GPTM_GPTMIMR_OFFSET)))

//--------
#define GPTM1_GPTMIMR_R_TATOIM_MASK      (0x00000001)
#define GPTM1_GPTMIMR_R_TATOIM_BIT       (0)
#define GPTM1_GPTMIMR_R_TATOIM_DIS       (0x00000000)
#define GPTM1_GPTMIMR_R_TATOIM_EN        (0x00000001)

#define GPTM1_GPTMIMR_TATOIM_MASK        (0x00000001)
#define GPTM1_GPTMIMR_TATOIM_DIS         (0x00000000)
#define GPTM1_GPTMIMR_TATOIM_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMIMR_R_CAMIM_MASK      (0x00000002)
#define GPTM1_GPTMIMR_R_CAMIM_BIT       (1)
#define GPTM1_GPTMIMR_R_CAMIM_DIS       (0x00000000)
#define GPTM1_GPTMIMR_R_CAMIM_EN        (0x00000002)

#define GPTM1_GPTMIMR_CAMIM_MASK        (0x00000001)
#define GPTM1_GPTMIMR_CAMIM_DIS         (0x00000000)
#define GPTM1_GPTMIMR_CAMIM_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMIMR_R_CAEIM_MASK      (0x00000004)
#define GPTM1_GPTMIMR_R_CAEIM_BIT       (2)
#define GPTM1_GPTMIMR_R_CAEIM_DIS       (0x00000000)
#define GPTM1_GPTMIMR_R_CAEIM_EN        (0x00000004)

#define GPTM1_GPTMIMR_CAEIM_MASK        (0x00000001)
#define GPTM1_GPTMIMR_CAEIM_DIS         (0x00000000)
#define GPTM1_GPTMIMR_CAEIM_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMIMR_R_RTCIM_MASK      (0x00000008)
#define GPTM1_GPTMIMR_R_RTCIM_BIT       (3)
#define GPTM1_GPTMIMR_R_RTCIM_DIS       (0x00000000)
#define GPTM1_GPTMIMR_R_RTCIM_EN        (0x00000008)

#define GPTM1_GPTMIMR_RTCIM_MASK        (0x00000001)
#define GPTM1_GPTMIMR_RTCIM_DIS         (0x00000000)
#define GPTM1_GPTMIMR_RTCIM_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMIMR_R_TAMIM_MASK      (0x00000010)
#define GPTM1_GPTMIMR_R_TAMIM_BIT       (4)
#define GPTM1_GPTMIMR_R_TAMIM_DIS       (0x00000000)
#define GPTM1_GPTMIMR_R_TAMIM_EN        (0x00000010)

#define GPTM1_GPTMIMR_TAMIM_MASK        (0x00000001)
#define GPTM1_GPTMIMR_TAMIM_DIS         (0x00000000)
#define GPTM1_GPTMIMR_TAMIM_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMIMR_R_TBTOIM_MASK      (0x00000100)
#define GPTM1_GPTMIMR_R_TBTOIM_BIT       (8)
#define GPTM1_GPTMIMR_R_TBTOIM_DIS       (0x00000000)
#define GPTM1_GPTMIMR_R_TBTOIM_EN        (0x00000100)

#define GPTM1_GPTMIMR_TBTOIM_MASK        (0x00000001)
#define GPTM1_GPTMIMR_TBTOIM_DIS         (0x00000000)
#define GPTM1_GPTMIMR_TBTOIM_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMIMR_R_CBMIM_MASK      (0x00000200)
#define GPTM1_GPTMIMR_R_CBMIM_BIT       (9)
#define GPTM1_GPTMIMR_R_CBMIM_DIS       (0x00000000)
#define GPTM1_GPTMIMR_R_CBMIM_EN        (0x00000200)

#define GPTM1_GPTMIMR_CBMIM_MASK        (0x00000001)
#define GPTM1_GPTMIMR_CBMIM_DIS         (0x00000000)
#define GPTM1_GPTMIMR_CBMIM_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMIMR_R_CBEIM_MASK      (0x00000400)
#define GPTM1_GPTMIMR_R_CBEIM_BIT       (10)
#define GPTM1_GPTMIMR_R_CBEIM_DIS       (0x00000000)
#define GPTM1_GPTMIMR_R_CBEIM_EN        (0x00000400)

#define GPTM1_GPTMIMR_CBEIM_MASK        (0x00000001)
#define GPTM1_GPTMIMR_CBEIM_DIS         (0x00000000)
#define GPTM1_GPTMIMR_CBEIM_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMIMR_R_TBMIM_MASK      (0x00000800)
#define GPTM1_GPTMIMR_R_TBMIM_BIT       (11)
#define GPTM1_GPTMIMR_R_TBMIM_DIS       (0x00000000)
#define GPTM1_GPTMIMR_R_TBMIM_EN        (0x00000800)

#define GPTM1_GPTMIMR_TBMIM_MASK        (0x00000001)
#define GPTM1_GPTMIMR_TBMIM_DIS         (0x00000000)
#define GPTM1_GPTMIMR_TBMIM_EN          (0x00000001)
//--------

//--------
#define GPTM1_GPTMIMR_R_WUEIM_MASK      (0x00010000)
#define GPTM1_GPTMIMR_R_WUEIM_BIT       (16)
#define GPTM1_GPTMIMR_R_WUEIM_DIS       (0x00000000)
#define GPTM1_GPTMIMR_R_WUEIM_EN        (0x00010000)

#define GPTM1_GPTMIMR_WUEIM_MASK        (0x00000001)
#define GPTM1_GPTMIMR_WUEIM_DIS         (0x00000000)
#define GPTM1_GPTMIMR_WUEIM_EN          (0x00000001)
//--------

#define GPTM1_GPTMIMR_TATOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(0*4))))
#define GPTM1_GPTMIMR_CAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(1*4))))
#define GPTM1_GPTMIMR_CAEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(2*4))))
#define GPTM1_GPTMIMR_RTCIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(3*4))))
#define GPTM1_GPTMIMR_TAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(4*4))))
#define GPTM1_GPTMIMR_TBTOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(8*4))))
#define GPTM1_GPTMIMR_CBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(9*4))))
#define GPTM1_GPTMIMR_CBEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(10*4))))
#define GPTM1_GPTMIMR_TBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(11*4))))
#define GPTM1_GPTMIMR_WUEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(16*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.7 GPTMRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMRIS            (((GPTMRIS_TypeDef*)(GPTM1_BASE + GPTM_GPTMRIS_OFFSET )))
#define GPTM1_GPTMRIS_R          (*((volatile const uint32_t *)(GPTM1_BASE +GPTM_GPTMRIS_OFFSET)))



//--------
#define GPTM1_GPTMRIS_R_TATORIS_MASK      (0x00000001)
#define GPTM1_GPTMRIS_R_TATORIS_BIT       (0)
#define GPTM1_GPTMRIS_R_TATORIS_NOACTIVE  (0x00000000)
#define GPTM1_GPTMRIS_R_TATORIS_ACTIVE    (0x00000001)

#define GPTM1_GPTMRIS_TATORIS_MASK        (0x00000001)
#define GPTM1_GPTMRIS_TATORIS_NOACTIVE    (0x00000000)
#define GPTM1_GPTMRIS_TATORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM1_GPTMRIS_R_CAMRIS_MASK      (0x00000002)
#define GPTM1_GPTMRIS_R_CAMRIS_BIT       (1)
#define GPTM1_GPTMRIS_R_CAMRIS_NOACTIVE  (0x00000000)
#define GPTM1_GPTMRIS_R_CAMRIS_ACTIVE    (0x00000002)

#define GPTM1_GPTMRIS_CAMRIS_MASK        (0x00000001)
#define GPTM1_GPTMRIS_CAMRIS_NOACTIVE    (0x00000000)
#define GPTM1_GPTMRIS_CAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM1_GPTMRIS_R_CAERIS_MASK      (0x00000004)
#define GPTM1_GPTMRIS_R_CAERIS_BIT       (2)
#define GPTM1_GPTMRIS_R_CAERIS_NOACTIVE  (0x00000000)
#define GPTM1_GPTMRIS_R_CAERIS_ACTIVE    (0x00000004)

#define GPTM1_GPTMRIS_CAERIS_MASK        (0x00000001)
#define GPTM1_GPTMRIS_CAERIS_NOACTIVE    (0x00000000)
#define GPTM1_GPTMRIS_CAERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM1_GPTMRIS_R_RTCRIS_MASK      (0x00000008)
#define GPTM1_GPTMRIS_R_RTCRIS_BIT       (3)
#define GPTM1_GPTMRIS_R_RTCRIS_NOACTIVE  (0x00000000)
#define GPTM1_GPTMRIS_R_RTCRIS_ACTIVE    (0x00000008)

#define GPTM1_GPTMRIS_RTCRIS_MASK        (0x00000001)
#define GPTM1_GPTMRIS_RTCRIS_NOACTIVE    (0x00000000)
#define GPTM1_GPTMRIS_RTCRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM1_GPTMRIS_R_TAMRIS_MASK      (0x00000010)
#define GPTM1_GPTMRIS_R_TAMRIS_BIT       (4)
#define GPTM1_GPTMRIS_R_TAMRIS_NOACTIVE  (0x00000000)
#define GPTM1_GPTMRIS_R_TAMRIS_ACTIVE    (0x00000010)

#define GPTM1_GPTMRIS_TAMRIS_MASK        (0x00000001)
#define GPTM1_GPTMRIS_TAMRIS_NOACTIVE    (0x00000000)
#define GPTM1_GPTMRIS_TAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM1_GPTMRIS_R_TBTORIS_MASK      (0x00000100)
#define GPTM1_GPTMRIS_R_TBTORIS_BIT       (8)
#define GPTM1_GPTMRIS_R_TBTORIS_NOACTIVE  (0x00000000)
#define GPTM1_GPTMRIS_R_TBTORIS_ACTIVE    (0x00000100)

#define GPTM1_GPTMRIS_TBTORIS_MASK        (0x00000001)
#define GPTM1_GPTMRIS_TBTORIS_NOACTIVE    (0x00000000)
#define GPTM1_GPTMRIS_TBTORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM1_GPTMRIS_R_CBMRIS_MASK      (0x00000200)
#define GPTM1_GPTMRIS_R_CBMRIS_BIT       (9)
#define GPTM1_GPTMRIS_R_CBMRIS_NOACTIVE  (0x00000000)
#define GPTM1_GPTMRIS_R_CBMRIS_ACTIVE    (0x00000200)

#define GPTM1_GPTMRIS_CBMRIS_MASK        (0x00000001)
#define GPTM1_GPTMRIS_CBMRIS_NOACTIVE    (0x00000000)
#define GPTM1_GPTMRIS_CBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM1_GPTMRIS_R_CBERIS_MASK      (0x00000400)
#define GPTM1_GPTMRIS_R_CBERIS_BIT       (10)
#define GPTM1_GPTMRIS_R_CBERIS_NOACTIVE  (0x00000000)
#define GPTM1_GPTMRIS_R_CBERIS_ACTIVE    (0x00000400)

#define GPTM1_GPTMRIS_CBERIS_MASK        (0x00000001)
#define GPTM1_GPTMRIS_CBERIS_NOACTIVE    (0x00000000)
#define GPTM1_GPTMRIS_CBERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM1_GPTMRIS_R_TBMRIS_MASK      (0x00000800)
#define GPTM1_GPTMRIS_R_TBMRIS_BIT       (11)
#define GPTM1_GPTMRIS_R_TBMRIS_NOACTIVE  (0x00000000)
#define GPTM1_GPTMRIS_R_TBMRIS_ACTIVE    (0x00000800)

#define GPTM1_GPTMRIS_TBMRIS_MASK        (0x00000001)
#define GPTM1_GPTMRIS_TBMRIS_NOACTIVE    (0x00000000)
#define GPTM1_GPTMRIS_TBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM1_GPTMRIS_R_WUERIS_MASK      (0x00010000)
#define GPTM1_GPTMRIS_R_WUERIS_BIT       (16)
#define GPTM1_GPTMRIS_R_WUERIS_NOACTIVE  (0x00000000)
#define GPTM1_GPTMRIS_R_WUERIS_ACTIVE    (0x00010000)

#define GPTM1_GPTMRIS_WUERIS_MASK        (0x00000001)
#define GPTM1_GPTMRIS_WUERIS_NOACTIVE    (0x00000000)
#define GPTM1_GPTMRIS_WUERIS_ACTIVE      (0x00000001)
//--------

#define GPTM1_GPTMRIS_TATORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(0*4))))
#define GPTM1_GPTMRIS_CAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(1*4))))
#define GPTM1_GPTMRIS_CAERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(2*4))))
#define GPTM1_GPTMRIS_RTCRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(3*4))))
#define GPTM1_GPTMRIS_TAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(4*4))))
#define GPTM1_GPTMRIS_TBTORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(8*4))))
#define GPTM1_GPTMRIS_CBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(9*4))))
#define GPTM1_GPTMRIS_CBERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(10*4))))
#define GPTM1_GPTMRIS_TBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(11*4))))
#define GPTM1_GPTMRIS_WUERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(16*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.8 GPTMMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMMIS            (((GPTMMIS_TypeDef*)(GPTM1_BASE + GPTM_GPTMMIS_OFFSET )))
#define GPTM1_GPTMMIS_R          (*((volatile const uint32_t *)(GPTM1_BASE +GPTM_GPTMMIS_OFFSET)))




//--------
#define GPTM1_GPTMMIS_R_TATOMIS_MASK      (0x00000001)
#define GPTM1_GPTMMIS_R_TATOMIS_BIT       (0)
#define GPTM1_GPTMMIS_R_TATOMIS_NOOCCUR  (0x00000000)
#define GPTM1_GPTMMIS_R_TATOMIS_OCCUR    (0x00000001)

#define GPTM1_GPTMMIS_TATOMIS_MASK        (0x00000001)
#define GPTM1_GPTMMIS_TATOMIS_NOOCCUR    (0x00000000)
#define GPTM1_GPTMMIS_TATOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM1_GPTMMIS_R_CAMMIS_MASK      (0x00000002)
#define GPTM1_GPTMMIS_R_CAMMIS_BIT       (1)
#define GPTM1_GPTMMIS_R_CAMMIS_NOOCCUR  (0x00000000)
#define GPTM1_GPTMMIS_R_CAMMIS_OCCUR    (0x00000002)

#define GPTM1_GPTMMIS_CAMMIS_MASK        (0x00000001)
#define GPTM1_GPTMMIS_CAMMIS_NOOCCUR    (0x00000000)
#define GPTM1_GPTMMIS_CAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM1_GPTMMIS_R_CAEMIS_MASK      (0x00000004)
#define GPTM1_GPTMMIS_R_CAEMIS_BIT       (2)
#define GPTM1_GPTMMIS_R_CAEMIS_NOOCCUR  (0x00000000)
#define GPTM1_GPTMMIS_R_CAEMIS_OCCUR    (0x00000004)

#define GPTM1_GPTMMIS_CAEMIS_MASK        (0x00000001)
#define GPTM1_GPTMMIS_CAEMIS_NOOCCUR    (0x00000000)
#define GPTM1_GPTMMIS_CAEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM1_GPTMMIS_R_RTCMIS_MASK      (0x00000008)
#define GPTM1_GPTMMIS_R_RTCMIS_BIT       (3)
#define GPTM1_GPTMMIS_R_RTCMIS_NOOCCUR  (0x00000000)
#define GPTM1_GPTMMIS_R_RTCMIS_OCCUR    (0x00000008)

#define GPTM1_GPTMMIS_RTCMIS_MASK        (0x00000001)
#define GPTM1_GPTMMIS_RTCMIS_NOOCCUR    (0x00000000)
#define GPTM1_GPTMMIS_RTCMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM1_GPTMMIS_R_TAMMIS_MASK      (0x00000010)
#define GPTM1_GPTMMIS_R_TAMMIS_BIT       (4)
#define GPTM1_GPTMMIS_R_TAMMIS_NOOCCUR  (0x00000000)
#define GPTM1_GPTMMIS_R_TAMMIS_OCCUR    (0x00000010)

#define GPTM1_GPTMMIS_TAMMIS_MASK        (0x00000001)
#define GPTM1_GPTMMIS_TAMMIS_NOOCCUR    (0x00000000)
#define GPTM1_GPTMMIS_TAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM1_GPTMMIS_R_TBTOMIS_MASK      (0x00000100)
#define GPTM1_GPTMMIS_R_TBTOMIS_BIT       (8)
#define GPTM1_GPTMMIS_R_TBTOMIS_NOOCCUR  (0x00000000)
#define GPTM1_GPTMMIS_R_TBTOMIS_OCCUR    (0x00000100)

#define GPTM1_GPTMMIS_TBTOMIS_MASK        (0x00000001)
#define GPTM1_GPTMMIS_TBTOMIS_NOOCCUR    (0x00000000)
#define GPTM1_GPTMMIS_TBTOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM1_GPTMMIS_R_CBMMIS_MASK      (0x00000200)
#define GPTM1_GPTMMIS_R_CBMMIS_BIT       (9)
#define GPTM1_GPTMMIS_R_CBMMIS_NOOCCUR  (0x00000000)
#define GPTM1_GPTMMIS_R_CBMMIS_OCCUR    (0x00000200)

#define GPTM1_GPTMMIS_CBMMIS_MASK        (0x00000001)
#define GPTM1_GPTMMIS_CBMMIS_NOOCCUR    (0x00000000)
#define GPTM1_GPTMMIS_CBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM1_GPTMMIS_R_CBEMIS_MASK      (0x00000400)
#define GPTM1_GPTMMIS_R_CBEMIS_BIT       (10)
#define GPTM1_GPTMMIS_R_CBEMIS_NOOCCUR  (0x00000000)
#define GPTM1_GPTMMIS_R_CBEMIS_OCCUR    (0x00000400)

#define GPTM1_GPTMMIS_CBEMIS_MASK        (0x00000001)
#define GPTM1_GPTMMIS_CBEMIS_NOOCCUR    (0x00000000)
#define GPTM1_GPTMMIS_CBEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM1_GPTMMIS_R_TBMMIS_MASK      (0x00000800)
#define GPTM1_GPTMMIS_R_TBMMIS_BIT       (11)
#define GPTM1_GPTMMIS_R_TBMMIS_NOOCCUR  (0x00000000)
#define GPTM1_GPTMMIS_R_TBMMIS_OCCUR    (0x00000800)

#define GPTM1_GPTMMIS_TBMMIS_MASK        (0x00000001)
#define GPTM1_GPTMMIS_TBMMIS_NOOCCUR    (0x00000000)
#define GPTM1_GPTMMIS_TBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM1_GPTMMIS_R_WUEMIS_MASK      (0x00010000)
#define GPTM1_GPTMMIS_R_WUEMIS_BIT       (16)
#define GPTM1_GPTMMIS_R_WUEMIS_NOOCCUR  (0x00000000)
#define GPTM1_GPTMMIS_R_WUEMIS_OCCUR    (0x00010000)

#define GPTM1_GPTMMIS_WUEMIS_MASK        (0x00000001)
#define GPTM1_GPTMMIS_WUEMIS_NOOCCUR    (0x00000000)
#define GPTM1_GPTMMIS_WUEMIS_OCCUR      (0x00000001)
//--------

#define GPTM1_GPTMMIS_TATOMIS           (0x00000001)
#define GPTM1_GPTMMIS_CAMMIS            (0x00000002)
#define GPTM1_GPTMMIS_CAEMIS            (0x00000004)
#define GPTM1_GPTMMIS_RTCMIS            (0x00000008)
#define GPTM1_GPTMMIS_TAMMIS            (0x00000010)
#define GPTM1_GPTMMIS_TBTOMIS           (0x00000100)
#define GPTM1_GPTMMIS_CBMMIS            (0x00000200)
#define GPTM1_GPTMMIS_CBEMIS            (0x00000400)
#define GPTM1_GPTMMIS_TBMMIS            (0x00000800)
#define GPTM1_GPTMMIS_WUEMIS            (0x00010000)


#define GPTM1_GPTMMIS_TATOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(0*4))))
#define GPTM1_GPTMMIS_CAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(1*4))))
#define GPTM1_GPTMMIS_CAEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(2*4))))
#define GPTM1_GPTMMIS_RTCMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(3*4))))
#define GPTM1_GPTMMIS_TAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(4*4))))
#define GPTM1_GPTMMIS_TBTOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(8*4))))
#define GPTM1_GPTMMIS_CBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(9*4))))
#define GPTM1_GPTMMIS_CBEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(10*4))))
#define GPTM1_GPTMMIS_TBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(11*4))))
#define GPTM1_GPTMMIS_WUEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.9 GPTMICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMICR            (((GPTMICR_TypeDef*)(GPTM1_BASE + GPTM_GPTMICR_OFFSET )))
#define GPTM1_GPTMICR_R          (*((volatile uint32_t *)(GPTM1_BASE +GPTM_GPTMICR_OFFSET)))



//--------
#define GPTM1_GPTMICR_R_TATOCINT_MASK      (0x00000001)
#define GPTM1_GPTMICR_R_TATOCINT_BIT       (0)
#define GPTM1_GPTMICR_R_TATOCINT_CLEAR     (0x00000001)

#define GPTM1_GPTMICR_TATOCINT_MASK        (0x00000001)
#define GPTM1_GPTMICR_TATOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM1_GPTMICR_R_CAMCINT_MASK      (0x00000002)
#define GPTM1_GPTMICR_R_CAMCINT_BIT       (1)
#define GPTM1_GPTMICR_R_CAMCINT_CLEAR     (0x00000002)

#define GPTM1_GPTMICR_CAMCINT_MASK        (0x00000001)
#define GPTM1_GPTMICR_CAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM1_GPTMICR_R_CAECINT_MASK      (0x00000004)
#define GPTM1_GPTMICR_R_CAECINT_BIT       (2)
#define GPTM1_GPTMICR_R_CAECINT_CLEAR     (0x00000004)

#define GPTM1_GPTMICR_CAECINT_MASK        (0x00000001)
#define GPTM1_GPTMICR_CAECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM1_GPTMICR_R_RTCCINT_MASK      (0x00000008)
#define GPTM1_GPTMICR_R_RTCCINT_BIT       (3)
#define GPTM1_GPTMICR_R_RTCCINT_CLEAR     (0x00000008)

#define GPTM1_GPTMICR_RTCCINT_MASK        (0x00000001)
#define GPTM1_GPTMICR_RTCCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM1_GPTMICR_R_TAMCINT_MASK      (0x00000010)
#define GPTM1_GPTMICR_R_TAMCINT_BIT       (4)
#define GPTM1_GPTMICR_R_TAMCINT_CLEAR     (0x00000010)

#define GPTM1_GPTMICR_TAMCINT_MASK        (0x00000001)
#define GPTM1_GPTMICR_TAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM1_GPTMICR_R_TBTOCINT_MASK      (0x00000100)
#define GPTM1_GPTMICR_R_TBTOCINT_BIT       (8)
#define GPTM1_GPTMICR_R_TBTOCINT_CLEAR     (0x00000100)

#define GPTM1_GPTMICR_TBTOCINT_MASK        (0x00000001)
#define GPTM1_GPTMICR_TBTOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM1_GPTMICR_R_CBMCINT_MASK      (0x00000200)
#define GPTM1_GPTMICR_R_CBMCINT_BIT       (9)
#define GPTM1_GPTMICR_R_CBMCINT_CLEAR     (0x00000200)

#define GPTM1_GPTMICR_CBMCINT_MASK        (0x00000001)
#define GPTM1_GPTMICR_CBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM1_GPTMICR_R_CBECINT_MASK      (0x00000400)
#define GPTM1_GPTMICR_R_CBECINT_BIT       (10)
#define GPTM1_GPTMICR_R_CBECINT_CLEAR     (0x00000400)

#define GPTM1_GPTMICR_CBECINT_MASK        (0x00000001)
#define GPTM1_GPTMICR_CBECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM1_GPTMICR_R_TBMCINT_MASK      (0x00000800)
#define GPTM1_GPTMICR_R_TBMCINT_BIT       (11)
#define GPTM1_GPTMICR_R_TBMCINT_CLEAR     (0x00000800)

#define GPTM1_GPTMICR_TBMCINT_MASK        (0x00000001)
#define GPTM1_GPTMICR_TBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM1_GPTMICR_R_WUECINT_MASK      (0x00010000)
#define GPTM1_GPTMICR_R_WUECINT_BIT       (16)
#define GPTM1_GPTMICR_R_WUECINT_CLEAR     (0x00010000)

#define GPTM1_GPTMICR_WUECINT_MASK        (0x00000001)
#define GPTM1_GPTMICR_WUECINT_CLEAR       (0x00000001)
//--------


#define GPTM1_GPTMICR_TATOCINT           (0x00000001)
#define GPTM1_GPTMICR_CAMCINT            (0x00000002)
#define GPTM1_GPTMICR_CAECINT            (0x00000004)
#define GPTM1_GPTMICR_RTCCINT            (0x00000008)
#define GPTM1_GPTMICR_TAMCINT            (0x00000010)
#define GPTM1_GPTMICR_TBTOCINT           (0x00000100)
#define GPTM1_GPTMICR_CBMCINT            (0x00000200)
#define GPTM1_GPTMICR_CBECINT            (0x00000400)
#define GPTM1_GPTMICR_TBMCINT            (0x00000800)
#define GPTM1_GPTMICR_WUECINT            (0x00010000)


#define GPTM1_GPTMICR_TATOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(0*4))))
#define GPTM1_GPTMICR_CAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(1*4))))
#define GPTM1_GPTMICR_CAECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(2*4))))
#define GPTM1_GPTMICR_RTCCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(3*4))))
#define GPTM1_GPTMICR_TAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(4*4))))
#define GPTM1_GPTMICR_TBTOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(8*4))))
#define GPTM1_GPTMICR_CBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(9*4))))
#define GPTM1_GPTMICR_CBECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(10*4))))
#define GPTM1_GPTMICR_TBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(11*4))))
#define GPTM1_GPTMICR_WUECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.10 GPTMTAILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMTAILR            (((GPTMTAILR_TypeDef*)(GPTM1_BASE + GPTM_GPTMTAILR_OFFSET )))
#define GPTM1_GPTMTAILR_R          (*((volatile uint32_t *)(GPTM1_BASE +GPTM_GPTMTAILR_OFFSET)))

//--------
#define GPTM1_GPTMTAILR_R_TAILR_MASK      (0xFFFFFFFF)
#define GPTM1_GPTMTAILR_R_TAILR_BIT       (0)

#define GPTM1_GPTMTAILR_TAILR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.11 GPTMTBILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMTBILR            (((GPTMTBILR_TypeDef*)(GPTM1_BASE + GPTM_GPTMTBILR_OFFSET )))
#define GPTM1_GPTMTBILR_R          (*((volatile uint32_t *)(GPTM1_BASE +GPTM_GPTMTBILR_OFFSET)))

//--------
#define GPTM1_GPTMTBILR_R_TBILR_MASK      (0xFFFFFFFF)
#define GPTM1_GPTMTBILR_R_TBILR_BIT       (0)

#define GPTM1_GPTMTBILR_TBILR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.12 GPTMTAMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMTAMATCHR            (((GPTMTAMATCHR_TypeDef*)(GPTM1_BASE + GPTM_GPTMTAMATCHR_OFFSET )))
#define GPTM1_GPTMTAMATCHR_R          (*((volatile uint32_t *)(GPTM1_BASE +GPTM_GPTMTAMATCHR_OFFSET)))


//--------
#define GPTM1_GPTMTAMATCHR_R_TAMR_MASK      (0xFFFFFFFF)
#define GPTM1_GPTMTAMATCHR_R_TAMR_BIT       (0)

#define GPTM1_GPTMTAMATCHR_TAMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.13 GPTMTBMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMTBMATCHR            (((GPTMTBMATCHR_TypeDef*)(GPTM1_BASE + GPTM_GPTMTBMATCHR_OFFSET )))
#define GPTM1_GPTMTBMATCHR_R          (*((volatile uint32_t *)(GPTM1_BASE +GPTM_GPTMTBMATCHR_OFFSET)))


//--------
#define GPTM1_GPTMTBMATCHR_R_TBMR_MASK      (0xFFFFFFFF)
#define GPTM1_GPTMTBMATCHR_R_TBMR_BIT       (0)

#define GPTM1_GPTMTBMATCHR_TBMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.14 GPTMTAPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMTAPR            (((GPTMTAPR_TypeDef*)(GPTM1_BASE + GPTM_GPTMTAPR_OFFSET )))
#define GPTM1_GPTMTAPR_R          (*((volatile uint32_t *)(GPTM1_BASE +GPTM_GPTMTAPR_OFFSET)))


//--------
#define GPTM1_GPTMTAPR_R_TAPSR_MASK      (0x000000FF)
#define GPTM1_GPTMTAPR_R_TAPSR_BIT       (0)

#define GPTM1_GPTMTAPR_TAPSR_MASK        (0x000000FF)
//--------

//--------
#define GPTM1_GPTMTAPR_R_TAPSRH_MASK      (0x0000FF00)
#define GPTM1_GPTMTAPR_R_TAPSRH_BIT       (8)

#define GPTM1_GPTMTAPR_TAPSRH_MASK        (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.15 GPTMTBPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMTBPR            (((GPTMTBPR_TypeDef*)(GPTM1_BASE + GPTM_GPTMTBPR_OFFSET )))
#define GPTM1_GPTMTBPR_R          (*((volatile uint32_t *)(GPTM1_BASE +GPTM_GPTMTBPR_OFFSET)))


//--------
#define GPTM1_GPTMTBPR_R_TBPSR_MASK      (0x000000FF)
#define GPTM1_GPTMTBPR_R_TBPSR_BIT       (0)

#define GPTM1_GPTMTBPR_TBPSR_MASK        (0x000000FF)
//--------


//--------
#define GPTM1_GPTMTBPR_R_TBPSRH_MASK      (0x0000FF00)
#define GPTM1_GPTMTBPR_R_TBPSRH_BIT       (8)

#define GPTM1_GPTMTBPR_TBPSRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.16 GPTMTAPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMTAPMR            (((GPTMTAPMR_TypeDef*)(GPTM1_BASE + GPTM_GPTMTAPMR_OFFSET )))
#define GPTM1_GPTMTAPMR_R          (*((volatile uint32_t *)(GPTM1_BASE +GPTM_GPTMTAPMR_OFFSET)))


//--------
#define GPTM1_GPTMTAPMR_R_TAPSMR_MASK      (0x000000FF)
#define GPTM1_GPTMTAPMR_R_TAPSMR_BIT       (0)

#define GPTM1_GPTMTAMPR_TAPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPTM1_GPTMTAPMR_R_TAPSMRH_MASK      (0x0000FF00)
#define GPTM1_GPTMTAPMR_R_TAPSMRH_BIT       (8)

#define GPTM1_GPTMTAPMR_TAPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.17 GPTMTBPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMTBPMR            (((GPTMTBPMR_TypeDef*)(GPTM1_BASE + GPTM_GPTMTBPMR_OFFSET )))
#define GPTM1_GPTMTBPMR_R          (*((volatile uint32_t *)(GPTM1_BASE +GPTM_GPTMTBPMR_OFFSET)))

//--------
#define GPTM1_GPTMTBPMR_R_TBPSMR_MASK      (0x000000FF)
#define GPTM1_GPTMTBPMR_R_TBPSMR_BIT       (0)

#define GPTM1_GPTMTBMPR_TBPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPTM1_GPTMTBPMR_R_TBPSMRH_MASK      (0x0000FF00)
#define GPTM1_GPTMTBPMR_R_TBPSMRH_BIT       (8)

#define GPTM1_GPTMTBPMR_TBPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.18 GPTMTAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMTAR            (((GPTMTAR_TypeDef*)(GPTM1_BASE + GPTM_GPTMTAR_OFFSET )))
#define GPTM1_GPTMTAR_R          (*((volatile const  int32_t *)(GPTM1_BASE +GPTM_GPTMTAR_OFFSET)))


//--------
#define GPTM1_GPTMTAR_R_TAR_MASK      (0xFFFFFFFF)
#define GPTM1_GPTMTAR_R_TAR_BIT       (0)

#define GPTM1_GPTMTAR_TAR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.19 GPTMTBR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMTBR            (((GPTMTBR_TypeDef*)(GPTM1_BASE + GPTM_GPTMTBR_OFFSET )))
#define GPTM1_GPTMTBR_R          (*((volatile const uint32_t *)(GPTM1_BASE +GPTM_GPTMTBR_OFFSET)))


//--------
#define GPTM1_GPTMTBR_R_TBR_MASK      (0xFFFFFFFF)
#define GPTM1_GPTMTBR_R_TBR_BIT       (0)

#define GPTM1_GPTMTBR_TBR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.20 GPTMTAV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMTAV            (((GPTMTAV_TypeDef*)(GPTM1_BASE + GPTM_GPTMTAV_OFFSET )))
#define GPTM1_GPTMTAV_R          (*((volatile uint32_t *)(GPTM1_BASE +GPTM_GPTMTAV_OFFSET)))

//--------
#define GPTM1_GPTMTAV_R_TAV_MASK      (0xFFFFFFFF)
#define GPTM1_GPTMTAV_R_TAV_BIT       (0)

#define GPTM1_GPTMTAV_TAV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.21 GPTMTBV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMTBV            (((GPTMTBV_TypeDef*)(GPTM1_BASE + GPTM_GPTMTBV_OFFSET )))
#define GPTM1_GPTMTBV_R          (*((volatile uint32_t *)(GPTM1_BASE +GPTM_GPTMTBV_OFFSET)))


//--------
#define GPTM1_GPTMTBV_R_TBV_MASK      (0xFFFFFFFF)
#define GPTM1_GPTMTBV_R_TBV_BIT       (0)

#define GPTM1_GPTMTBV_TBV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.22 GPTMRTCPD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMRTCPD            (((GPTMRTCPD_TypeDef*)(GPTM1_BASE + GPTM_GPTMRTCPD_OFFSET )))
#define GPTM1_GPTMRTCPD_R          (*((volatile const uint32_t *)(GPTM1_BASE +GPTM_GPTMRTCPD_OFFSET)))


//--------
#define GPTM1_GPTMRTCPD_R_RTCPD_MASK      (0x0000FFFF)
#define GPTM1_GPTMRTCPD_R_RTCPD_BIT       (0)
#define GPTM1_GPTMRTCPD_R_RTCPD_DEFAULT   (0x00007FFF)

#define GPTM1_GPTMRTCPD_RTCPD_MASK        (0x0000FFFF)
#define GPTM1_GPTMRTCPD_RTCPD_DEFAULT     (0x00007FFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.23 GPTMTAPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPTM1_GPTMTAPS            (((GPTMTAPS_TypeDef*)(GPTM1_BASE + GPTM_GPTMTAPS_OFFSET )))
#define GPTM1_GPTMTAPS_R          (*((volatile const uint32_t *)(GPTM1_BASE +GPTM_GPTMTAPS_OFFSET)))

//--------
#define GPTM1_GPTMTAPS_R_PSS_MASK      (0x0000FFFF)
#define GPTM1_GPTMTAPS_R_PSS_BIT       (0)

#define GPTM1_GPTMTAPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.24 GPTMTBPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMTBPS            (((GPTMTBPS_TypeDef*)(GPTM1_BASE + GPTM_GPTMTBPS_OFFSET )))
#define GPTM1_GPTMTBPS_R          (*((volatile const uint32_t *)(GPTM1_BASE +GPTM_GPTMTBPS_OFFSET)))

//--------
#define GPTM1_GPTMTBPS_R_PSS_MASK      (0x0000FFFF)
#define GPTM1_GPTMTBPS_R_PSS_BIT       (0)

#define GPTM1_GPTMTBPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.25 GPTMTAPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define GPTM1_GPTMTAPV            (((GPTMTAPV_TypeDef*)(GPTM1_BASE + GPTM_GPTMTAPV_OFFSET )))
#define GPTM1_GPTMTAPV_R          (*((volatile const uint32_t *)(GPTM1_BASE +GPTM_GPTMTAPV_OFFSET)))

//--------
#define GPTM1_GPTMTAPV_R_PSV_MASK      (0x0000FFFF)
#define GPTM1_GPTMTAPV_R_PSV_BIT       (0)

#define GPTM1_GPTMTAPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.26 GPTMTBPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPTM1_GPTMTBPV            (((GPTMTBPV_TypeDef*)(GPTM1_BASE + GPTM_GPTMTBPV_OFFSET )))
#define GPTM1_GPTMTBPV_R          (*((volatile const uint32_t *)(GPTM1_BASE +GPTM_GPTMTBPV_OFFSET)))

//--------
#define GPTM1_GPTMTBPV_R_PSV_MASK      (0x0000FFFF)
#define GPTM1_GPTMTBPV_R_PSV_BIT       (0)

#define GPTM1_GPTMTBPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.27 GPTMPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM1_GPTMPP            (((GPTMPP_TypeDef*)(GPTM1_BASE + GPTM_GPTMPP_OFFSET )))
#define GPTM1_GPTMPP_R          (*((volatile const uint32_t *)(GPTM1_BASE +GPTM_GPTMPP_OFFSET)))

#define GPTM1_GPTMPP_SIZE        (0x0000000F)

//--------
#define GPTM1_GPTMPP_R_SIZE_MASK      (0x0000000F)
#define GPTM1_GPTMPP_R_SIZE_BIT       (0)
#define GPTM1_GPTMPP_R_SIZE_16b       (0x00000000)
#define GPTM1_GPTMPP_R_SIZE_32b       (0x00000001)

#define GPTM1_GPTMPP_SIZE_MASK        (0x0000000F)
#define GPTM1_GPTMPP_SIZE_16b         (0x00000000)
#define GPTM1_GPTMPP_SIZE_32b         (0x00000001)
//--------



// ToDO GPTM2
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 GPTM2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.1 GPTMCFG ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMCFG            (((GPTMCFG_TypeDef*)(GPTM2_BASE + GPTM_GPTMCFG_OFFSET )))
#define GPTM2_GPTMCFG_R          (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMCFG_OFFSET)))


//--------
#define GPTM2_GPTMCFG_R_GPTMCFG_MASK      (0x00000007)
#define GPTM2_GPTMCFG_R_GPTMCFG_BIT       (0)
#define GPTM2_GPTMCFG_R_GPTMCFG_BOTH    (0x00000000)
#define GPTM2_GPTMCFG_R_GPTMCFG_RTC       (0x00000001)
#define GPTM2_GPTMCFG_R_GPTMCFG_SINGLE      (0x00000004)

#define GPTM2_GPTMCFG_GPTMCFG_MASK        (0x00000007)
#define GPTM2_GPTMCFG_GPTMCFG_BOTH      (0x00000000)
#define GPTM2_GPTMCFG_GPTMCFG_RTC         (0x00000001)
#define GPTM2_GPTMCFG_GPTMCFG_SINGLE        (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.2 GPTMTAMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMTAMR            (((GPTMTAMR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTAMR_OFFSET )))
#define GPTM2_GPTMTAMR_R          (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTAMR_OFFSET)))


//--------
#define GPTM2_GPTMTAMR_R_TAMR_MASK      (0x00000003)
#define GPTM2_GPTMTAMR_R_TAMR_BIT       (0)
#define GPTM2_GPTMTAMR_R_TAMR_ONESHOT   (0x00000001)
#define GPTM2_GPTMTAMR_R_TAMR_PERIOD    (0x00000002)
#define GPTM2_GPTMTAMR_R_TAMR_CAPTURE   (0x00000003)

#define GPTM2_GPTMTAMR_TAMR_MASK        (0x00000003)
#define GPTM2_GPTMTAMR_TAMR_ONESHOT     (0x00000001)
#define GPTM2_GPTMTAMR_TAMR_PERIOD      (0x00000002)
#define GPTM2_GPTMTAMR_TAMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPTM2_GPTMTAMR_R_TACMR_MASK      (0x00000004)
#define GPTM2_GPTMTAMR_R_TACMR_BIT       (2)
#define GPTM2_GPTMTAMR_R_TACMR_EDGECOUNT (0x00000000)
#define GPTM2_GPTMTAMR_R_TACMR_EDGETIME  (0x00000004)

#define GPTM2_GPTMTAMR_TACMR_MASK        (0x00000001)
#define GPTM2_GPTMTAMR_TACMR_EDGECOUNT   (0x00000000)
#define GPTM2_GPTMTAMR_TACMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPTM2_GPTMTAMR_R_TAAMS_MASK      (0x00000008)
#define GPTM2_GPTMTAMR_R_TAAMS_BIT       (3)
#define GPTM2_GPTMTAMR_R_TAAMS_CAPCOMP   (0x00000000)
#define GPTM2_GPTMTAMR_R_TAAMS_PWM       (0x00000008)

#define GPTM2_GPTMTAMR_TAAMS_MASK        (0x00000001)
#define GPTM2_GPTMTAMR_TAAMS_CAPCOMP     (0x00000000)
#define GPTM2_GPTMTAMR_TAAMS_PWM         (0x00000001)
//--------

//--------
#define GPTM2_GPTMTAMR_R_TACDIR_MASK      (0x00000010)
#define GPTM2_GPTMTAMR_R_TACDIR_BIT       (4)
#define GPTM2_GPTMTAMR_R_TACDIR_DOWN      (0x00000000)
#define GPTM2_GPTMTAMR_R_TACDIR_UP        (0x00000010)

#define GPTM2_GPTMTAMR_TACDIR_MASK        (0x00000001)
#define GPTM2_GPTMTAMR_TACDIR_DOWN        (0x00000000)
#define GPTM2_GPTMTAMR_TACDIR_UP          (0x00000001)
//--------

//--------
#define GPTM2_GPTMTAMR_R_TAMIE_MASK      (0x00000020)
#define GPTM2_GPTMTAMR_R_TAMIE_BIT       (5)
#define GPTM2_GPTMTAMR_R_TAMIE_DIS       (0x00000000)
#define GPTM2_GPTMTAMR_R_TAMIE_EN        (0x00000020)

#define GPTM2_GPTMTAMR_TAMIE_MASK        (0x00000001)
#define GPTM2_GPTMTAMR_TAMIE_DIS         (0x00000000)
#define GPTM2_GPTMTAMR_TAMIE_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMTAMR_R_TAWOT_MASK      (0x00000040)
#define GPTM2_GPTMTAMR_R_TAWOT_BIT       (6)
#define GPTM2_GPTMTAMR_R_TAWOT_INSTANT   (0x00000000)
#define GPTM2_GPTMTAMR_R_TAWOT_TRIGGER   (0x00000040)

#define GPTM2_GPTMTAMR_TAWOT_MASK        (0x00000001)
#define GPTM2_GPTMTAMR_TAWOT_INSTANT     (0x00000000)
#define GPTM2_GPTMTAMR_TAWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPTM2_GPTMTAMR_R_TASNAPS_MASK      (0x00000080)
#define GPTM2_GPTMTAMR_R_TASNAPS_BIT       (7)
#define GPTM2_GPTMTAMR_R_TASNAPS_DIS       (0x00000000)
#define GPTM2_GPTMTAMR_R_TASNAPS_EN        (0x00000080)

#define GPTM2_GPTMTAMR_TASNAPS_MASK        (0x00000001)
#define GPTM2_GPTMTAMR_TASNAPS_DIS         (0x00000000)
#define GPTM2_GPTMTAMR_TASNAPS_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMTAMR_R_TAILD_MASK      (0x00000100)
#define GPTM2_GPTMTAMR_R_TAILD_BIT       (8)
#define GPTM2_GPTMTAMR_R_TAILD_NEXT      (0x00000000)
#define GPTM2_GPTMTAMR_R_TAILD_TIMEOUT   (0x00000100)

#define GPTM2_GPTMTAMR_TAILD_MASK        (0x00000001)
#define GPTM2_GPTMTAMR_TAILD_NEXT        (0x00000000)
#define GPTM2_GPTMTAMR_TAILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM2_GPTMTAMR_R_TAPWMIE_MASK      (0x00000200)
#define GPTM2_GPTMTAMR_R_TAPWMIE_BIT       (9)
#define GPTM2_GPTMTAMR_R_TAPWMIE_DIS       (0x00000000)
#define GPTM2_GPTMTAMR_R_TAPWMIE_EN        (0x00000200)

#define GPTM2_GPTMTAMR_TAPWMIE_MASK        (0x00000001)
#define GPTM2_GPTMTAMR_TAPWMIE_DIS         (0x00000000)
#define GPTM2_GPTMTAMR_TAPWMIE_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMTAMR_R_TAMRSU_MASK      (0x00000400)
#define GPTM2_GPTMTAMR_R_TAMRSU_BIT       (10)
#define GPTM2_GPTMTAMR_R_TAMRSU_NEXT      (0x00000000)
#define GPTM2_GPTMTAMR_R_TAMRSU_TIMEOUT   (0x00000400)

#define GPTM2_GPTMTAMR_TAMRSU_MASK        (0x00000001)
#define GPTM2_GPTMTAMR_TAMRSU_NEXT        (0x00000000)
#define GPTM2_GPTMTAMR_TAMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM2_GPTMTAMR_R_TAPLO_MASK      (0x00000800)
#define GPTM2_GPTMTAMR_R_TAPLO_BIT       (11)
#define GPTM2_GPTMTAMR_R_TAPLO_LOW       (0x00000000)
#define GPTM2_GPTMTAMR_R_TAPLO_HIGH      (0x00000800)

#define GPTM2_GPTMTAMR_TAPLO_MASK        (0x00000001)
#define GPTM2_GPTMTAMR_TAPLO_LOW         (0x00000000)
#define GPTM2_GPTMTAMR_TAPLO_HIGH        (0x00000001)
//--------

#define GPTM2_GPTMTAMR_TACMR_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(2*4))))
#define GPTM2_GPTMTAMR_TAAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(3*4))))
#define GPTM2_GPTMTAMR_TACDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(4*4))))
#define GPTM2_GPTMTAMR_TAMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(5*4))))
#define GPTM2_GPTMTAMR_TAWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(6*4))))
#define GPTM2_GPTMTAMR_TASNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(7*4))))
#define GPTM2_GPTMTAMR_TAILD_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(8*4))))
#define GPTM2_GPTMTAMR_TAPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(9*4))))
#define GPTM2_GPTMTAMR_TAMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(10*4))))
#define GPTM2_GPTMTAMR_TAPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.3 GPTMTBMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMTBMR            (((GPTMTBMR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTBMR_OFFSET )))
#define GPTM2_GPTMTBMR_R          (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTBMR_OFFSET)))


//--------
#define GPTM2_GPTMTBMR_R_TBMR_MASK      (0x00000003)
#define GPTM2_GPTMTBMR_R_TBMR_BIT       (0)
#define GPTM2_GPTMTBMR_R_TBMR_ONESHOT   (0x00000001)
#define GPTM2_GPTMTBMR_R_TBMR_PERIOD    (0x00000002)
#define GPTM2_GPTMTBMR_R_TBMR_CAPTURE   (0x00000003)

#define GPTM2_GPTMTBMR_TBMR_MASK        (0x00000003)
#define GPTM2_GPTMTBMR_TBMR_ONESHOT     (0x00000001)
#define GPTM2_GPTMTBMR_TBMR_PERIOD      (0x00000002)
#define GPTM2_GPTMTBMR_TBMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPTM2_GPTMTBMR_R_TBCMR_MASK      (0x00000004)
#define GPTM2_GPTMTBMR_R_TBCMR_BIT       (2)
#define GPTM2_GPTMTBMR_R_TBCMR_EDGECOUNT (0x00000000)
#define GPTM2_GPTMTBMR_R_TBCMR_EDGETIME  (0x00000004)

#define GPTM2_GPTMTBMR_TBCMR_MASK        (0x00000001)
#define GPTM2_GPTMTBMR_TBCMR_EDGECOUNT   (0x00000000)
#define GPTM2_GPTMTBMR_TBCMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPTM2_GPTMTBMR_R_TBAMS_MASK      (0x00000008)
#define GPTM2_GPTMTBMR_R_TBAMS_BIT       (3)
#define GPTM2_GPTMTBMR_R_TBAMS_CAPCOMP   (0x00000000)
#define GPTM2_GPTMTBMR_R_TBAMS_PWM       (0x00000008)

#define GPTM2_GPTMTBMR_TBAMS_MASK        (0x00000001)
#define GPTM2_GPTMTBMR_TBAMS_CAPCOMP     (0x00000000)
#define GPTM2_GPTMTBMR_TBAMS_PWM         (0x00000001)
//--------

//--------
#define GPTM2_GPTMTBMR_R_TBCDIR_MASK      (0x00000010)
#define GPTM2_GPTMTBMR_R_TBCDIR_BIT       (4)
#define GPTM2_GPTMTBMR_R_TBCDIR_DOWN      (0x00000000)
#define GPTM2_GPTMTBMR_R_TBCDIR_UP        (0x00000010)

#define GPTM2_GPTMTBMR_TBCDIR_MASK        (0x00000001)
#define GPTM2_GPTMTBMR_TBCDIR_DOWN        (0x00000000)
#define GPTM2_GPTMTBMR_TBCDIR_UP          (0x00000001)
//--------

//--------
#define GPTM2_GPTMTBMR_R_TBMIE_MASK      (0x00000020)
#define GPTM2_GPTMTBMR_R_TBMIE_BIT       (5)
#define GPTM2_GPTMTBMR_R_TBMIE_DIS       (0x00000000)
#define GPTM2_GPTMTBMR_R_TBMIE_EN        (0x00000020)

#define GPTM2_GPTMTBMR_TBMIE_MASK        (0x00000001)
#define GPTM2_GPTMTBMR_TBMIE_DIS         (0x00000000)
#define GPTM2_GPTMTBMR_TBMIE_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMTBMR_R_TBWOT_MASK      (0x00000040)
#define GPTM2_GPTMTBMR_R_TBWOT_BIT       (6)
#define GPTM2_GPTMTBMR_R_TBWOT_INSTANT   (0x00000000)
#define GPTM2_GPTMTBMR_R_TBWOT_TRIGGER   (0x00000040)

#define GPTM2_GPTMTBMR_TBWOT_MASK        (0x00000001)
#define GPTM2_GPTMTBMR_TBWOT_INSTANT     (0x00000000)
#define GPTM2_GPTMTBMR_TBWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPTM2_GPTMTBMR_R_TBSNAPS_MASK      (0x00000080)
#define GPTM2_GPTMTBMR_R_TBSNAPS_BIT       (7)
#define GPTM2_GPTMTBMR_R_TBSNAPS_DIS       (0x00000000)
#define GPTM2_GPTMTBMR_R_TBSNAPS_EN        (0x00000080)

#define GPTM2_GPTMTBMR_TBSNAPS_MASK        (0x00000001)
#define GPTM2_GPTMTBMR_TBSNAPS_DIS         (0x00000000)
#define GPTM2_GPTMTBMR_TBSNAPS_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMTBMR_R_TBILD_MASK      (0x00000100)
#define GPTM2_GPTMTBMR_R_TBILD_BIT       (8)
#define GPTM2_GPTMTBMR_R_TBILD_NEXT      (0x00000000)
#define GPTM2_GPTMTBMR_R_TBILD_TIMEOUT   (0x00000100)

#define GPTM2_GPTMTBMR_TBILD_MASK        (0x00000001)
#define GPTM2_GPTMTBMR_TBILD_NEXT        (0x00000000)
#define GPTM2_GPTMTBMR_TBILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM2_GPTMTBMR_R_TBPWMIE_MASK      (0x00000200)
#define GPTM2_GPTMTBMR_R_TBPWMIE_BIT       (9)
#define GPTM2_GPTMTBMR_R_TBPWMIE_DIS       (0x00000000)
#define GPTM2_GPTMTBMR_R_TBPWMIE_EN        (0x00000200)

#define GPTM2_GPTMTBMR_TBPWMIE_MASK        (0x00000001)
#define GPTM2_GPTMTBMR_TBPWMIE_DIS         (0x00000000)
#define GPTM2_GPTMTBMR_TBPWMIE_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMTBMR_R_TBMRSU_MASK      (0x00000400)
#define GPTM2_GPTMTBMR_R_TBMRSU_BIT       (10)
#define GPTM2_GPTMTBMR_R_TBMRSU_NEXT      (0x00000000)
#define GPTM2_GPTMTBMR_R_TBMRSU_TIMEOUT   (0x00000400)

#define GPTM2_GPTMTBMR_TBMRSU_MASK        (0x00000001)
#define GPTM2_GPTMTBMR_TBMRSU_NEXT        (0x00000000)
#define GPTM2_GPTMTBMR_TBMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM2_GPTMTBMR_R_TBPLO_MASK      (0x00000800)
#define GPTM2_GPTMTBMR_R_TBPLO_BIT       (11)
#define GPTM2_GPTMTBMR_R_TBPLO_LOW       (0x00000000)
#define GPTM2_GPTMTBMR_R_TBPLO_HIGH      (0x00000800)

#define GPTM2_GPTMTBMR_TBPLO_MASK        (0x00000001)
#define GPTM2_GPTMTBMR_TBPLO_LOW         (0x00000000)
#define GPTM2_GPTMTBMR_TBPLO_HIGH        (0x00000001)
//--------

#define GPTM2_GPTMTBMR_TBCMR_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(2*4))))
#define GPTM2_GPTMTBMR_TBAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(3*4))))
#define GPTM2_GPTMTBMR_TBCDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(4*4))))
#define GPTM2_GPTMTBMR_TBMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(5*4))))
#define GPTM2_GPTMTBMR_TBWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(6*4))))
#define GPTM2_GPTMTBMR_TBSNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(7*4))))
#define GPTM2_GPTMTBMR_TBILD_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(8*4))))
#define GPTM2_GPTMTBMR_TBPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(9*4))))
#define GPTM2_GPTMTBMR_TBMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(10*4))))
#define GPTM2_GPTMTBMR_TBPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.4 GPTMCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMCTL            (((GPTMCTL_TypeDef*)(GPTM2_BASE + GPTM_GPTMCTL_OFFSET )))
#define GPTM2_GPTMCTL_R          (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMCTL_OFFSET)))


//--------
#define GPTM2_GPTMCTL_R_TAEN_MASK      (0x00000001)
#define GPTM2_GPTMCTL_R_TAEN_BIT       (0)
#define GPTM2_GPTMCTL_R_TAEN_DIS       (0x00000000)
#define GPTM2_GPTMCTL_R_TAEN_EN        (0x00000001)

#define GPTM2_GPTMCTL_TAEN_MASK        (0x00000001)
#define GPTM2_GPTMCTL_TAEN_DIS         (0x00000000)
#define GPTM2_GPTMCTL_TAEN_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMCTL_R_TASTALL_MASK      (0x00000002)
#define GPTM2_GPTMCTL_R_TASTALL_BIT       (1)
#define GPTM2_GPTMCTL_R_TASTALL_CONTINUE  (0x00000000)
#define GPTM2_GPTMCTL_R_TASTALL_FREEZE    (0x00000002)

#define GPTM2_GPTMCTL_TASTALL_MASK        (0x00000001)
#define GPTM2_GPTMCTL_TASTALL_CONTINUE    (0x00000000)
#define GPTM2_GPTMCTL_TASTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPTM2_GPTMCTL_R_TAEVENT_MASK      (0x0000000C)
#define GPTM2_GPTMCTL_R_TAEVENT_BIT       (2)
#define GPTM2_GPTMCTL_R_TAEVENT_POS       (0x00000000)
#define GPTM2_GPTMCTL_R_TAEVENT_NEG       (0x00000004)
#define GPTM2_GPTMCTL_R_TAEVENT_BOTH      (0x0000000C)

#define GPTM2_GPTMCTL_TAEVENT_MASK        (0x00000003)
#define GPTM2_GPTMCTL_TAEVENT_NEG         (0x00000000)
#define GPTM2_GPTMCTL_TAEVENT_POS         (0x00000001)
#define GPTM2_GPTMCTL_TAEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPTM2_GPTMCTL_R_RTCEN_MASK      (0x00000010)
#define GPTM2_GPTMCTL_R_RTCEN_BIT       (4)
#define GPTM2_GPTMCTL_R_RTCEN_CONTINUE  (0x00000000)
#define GPTM2_GPTMCTL_R_RTCEN_FREEZE    (0x00000010)

#define GPTM2_GPTMCTL_RTCEN_MASK        (0x00000001)
#define GPTM2_GPTMCTL_RTCEN_CONTINUE    (0x00000000)
#define GPTM2_GPTMCTL_RTCEN_FREEZE      (0x00000001)
//--------

//--------
#define GPTM2_GPTMCTL_R_TAOTE_MASK      (0x00000020)
#define GPTM2_GPTMCTL_R_TAOTE_BIT       (5)
#define GPTM2_GPTMCTL_R_TAOTE_DIS       (0x00000000)
#define GPTM2_GPTMCTL_R_TAOTE_EN        (0x00000020)

#define GPTM2_GPTMCTL_TAOTE_MASK        (0x00000001)
#define GPTM2_GPTMCTL_TAOTE_DIS         (0x00000000)
#define GPTM2_GPTMCTL_TAOTE_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMCTL_R_TAPWML_MASK      (0x00000040)
#define GPTM2_GPTMCTL_R_TAPWML_BIT       (6)
#define GPTM2_GPTMCTL_R_TAPWML_NA        (0x00000000)
#define GPTM2_GPTMCTL_R_TAPWML_INV       (0x00000040)

#define GPTM2_GPTMCTL_TAPWML_MASK        (0x00000001)
#define GPTM2_GPTMCTL_TAPWML_NA          (0x00000000)
#define GPTM2_GPTMCTL_TAPWML_INV         (0x00000001)
//--------



//--------
#define GPTM2_GPTMCTL_R_TBEN_MASK      (0x00000100)
#define GPTM2_GPTMCTL_R_TBEN_BIT       (8)
#define GPTM2_GPTMCTL_R_TBEN_DIS       (0x00000000)
#define GPTM2_GPTMCTL_R_TBEN_EN        (0x00000100)

#define GPTM2_GPTMCTL_TBEN_MASK        (0x00000001)
#define GPTM2_GPTMCTL_TBEN_DIS         (0x00000000)
#define GPTM2_GPTMCTL_TBEN_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMCTL_R_TBSTALL_MASK      (0x00000200)
#define GPTM2_GPTMCTL_R_TBSTALL_BIT       (9)
#define GPTM2_GPTMCTL_R_TBSTALL_CONTINUE  (0x00000000)
#define GPTM2_GPTMCTL_R_TBSTALL_FREEZE    (0x00000200)

#define GPTM2_GPTMCTL_TBSTALL_MASK        (0x00000001)
#define GPTM2_GPTMCTL_TBSTALL_CONTINUE    (0x00000000)
#define GPTM2_GPTMCTL_TBSTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPTM2_GPTMCTL_R_TBEVENT_MASK      (0x00000C00)
#define GPTM2_GPTMCTL_R_TBEVENT_BIT       (10)
#define GPTM2_GPTMCTL_R_TBEVENT_POS       (0x00000000)
#define GPTM2_GPTMCTL_R_TBEVENT_NEG       (0x00000400)
#define GPTM2_GPTMCTL_R_TBEVENT_BOTH      (0x00000C00)

#define GPTM2_GPTMCTL_TBEVENT_MASK        (0x00000003)
#define GPTM2_GPTMCTL_TBEVENT_NEG         (0x00000000)
#define GPTM2_GPTMCTL_TBEVENT_POS         (0x00000001)
#define GPTM2_GPTMCTL_TBEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPTM2_GPTMCTL_R_TBOTE_MASK      (0x00002000)
#define GPTM2_GPTMCTL_R_TBOTE_BIT       (13)
#define GPTM2_GPTMCTL_R_TBOTE_DIS       (0x00000000)
#define GPTM2_GPTMCTL_R_TBOTE_EN        (0x00002000)

#define GPTM2_GPTMCTL_TBOTE_MASK        (0x00000001)
#define GPTM2_GPTMCTL_TBOTE_DIS         (0x00000000)
#define GPTM2_GPTMCTL_TBOTE_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMCTL_R_TBPWML_MASK      (0x00004000)
#define GPTM2_GPTMCTL_R_TBPWML_BIT       (14)
#define GPTM2_GPTMCTL_R_TBPWML_NA        (0x00000000)
#define GPTM2_GPTMCTL_R_TBPWML_INV       (0x00004000)

#define GPTM2_GPTMCTL_TBPWML_MASK        (0x00000001)
#define GPTM2_GPTMCTL_TBPWML_NA          (0x00000000)
#define GPTM2_GPTMCTL_TBPWML_INV         (0x00000001)
//--------

#define GPTM2_GPTMCTL_TAEN_BB      (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(0*4))))
#define GPTM2_GPTMCTL_TASTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(1*4))))
#define GPTM2_GPTMCTL_RTCEN_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(4*4))))
#define GPTM2_GPTMCTL_TAOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(5*4))))
#define GPTM2_GPTMCTL_TAPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTMGPTMCTL_OFFSET)*32)+(6*4))))
#define GPTM2_GPTMCTL_TBEN_BB      (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(8*4))))
#define GPTM2_GPTMCTL_TBSTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(9*4))))
#define GPTM2_GPTMCTL_TBOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(13*4))))
#define GPTM2_GPTMCTL_TBPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(14*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.5 GPTMSYNC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMSYNC            (((GPTMSYNC_TypeDef*)(GPTM2_BASE + GPTM_GPTMSYNC_OFFSET )))
#define GPTM2_GPTMSYNC_R          (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMSYNC_OFFSET)))

//--------
#define GPTM2_GPTMSYNC_R_SYNCT0_MASK      (0x00000003)
#define GPTM2_GPTMSYNC_R_SYNCT0_BIT       (0)
#define GPTM2_GPTMSYNC_R_SYNCT0_NA        (0x00000000)
#define GPTM2_GPTMSYNC_R_SYNCT0_TA        (0x00000001)
#define GPTM2_GPTMSYNC_R_SYNCT0_TB        (0x00000002)
#define GPTM2_GPTMSYNC_R_SYNCT0_BOTH      (0x00000003)

#define GPTM2_GPTMSYNC_SYNCT0_MASK        (0x00000003)
#define GPTM2_GPTMSYNC_SYNCT0_NA          (0x00000000)
#define GPTM2_GPTMSYNC_SYNCT0_TA          (0x00000001)
#define GPTM2_GPTMSYNC_SYNCT0_TB          (0x00000002)
#define GPTM2_GPTMSYNC_SYNCT0_BOTH        (0x00000003)
//--------

//--------
#define GPTM2_GPTMSYNC_R_SYNCT1_MASK      (0x0000000C)
#define GPTM2_GPTMSYNC_R_SYNCT1_BIT       (2)
#define GPTM2_GPTMSYNC_R_SYNCT1_NA        (0x00000000)
#define GPTM2_GPTMSYNC_R_SYNCT1_TA        (0x00000004)
#define GPTM2_GPTMSYNC_R_SYNCT1_TB        (0x00000008)
#define GPTM2_GPTMSYNC_R_SYNCT1_BOTH      (0x0000000C)

#define GPTM2_GPTMSYNC_SYNCT1_MASK        (0x00000003)
#define GPTM2_GPTMSYNC_SYNCT1_NA          (0x00000000)
#define GPTM2_GPTMSYNC_SYNCT1_TA          (0x00000001)
#define GPTM2_GPTMSYNC_SYNCT1_TB          (0x00000002)
#define GPTM2_GPTMSYNC_SYNCT1_BOTH        (0x00000003)
//--------

//--------
#define GPTM2_GPTMSYNC_R_SYNCT2_MASK      (0x00000030)
#define GPTM2_GPTMSYNC_R_SYNCT2_BIT       (4)
#define GPTM2_GPTMSYNC_R_SYNCT2_NA        (0x00000000)
#define GPTM2_GPTMSYNC_R_SYNCT2_TA        (0x00000010)
#define GPTM2_GPTMSYNC_R_SYNCT2_TB        (0x00000020)
#define GPTM2_GPTMSYNC_R_SYNCT2_BOTH      (0x00000030)

#define GPTM2_GPTMSYNC_SYNCT2_MASK        (0x00000003)
#define GPTM2_GPTMSYNC_SYNCT2_NA          (0x00000000)
#define GPTM2_GPTMSYNC_SYNCT2_TA          (0x00000001)
#define GPTM2_GPTMSYNC_SYNCT2_TB          (0x00000002)
#define GPTM2_GPTMSYNC_SYNCT2_BOTH        (0x00000003)
//--------

//--------
#define GPTM2_GPTMSYNC_R_SYNCT3_MASK      (0x000000C0)
#define GPTM2_GPTMSYNC_R_SYNCT3_BIT       (6)
#define GPTM2_GPTMSYNC_R_SYNCT3_NA        (0x00000000)
#define GPTM2_GPTMSYNC_R_SYNCT3_TA        (0x00000040)
#define GPTM2_GPTMSYNC_R_SYNCT3_TB        (0x00000080)
#define GPTM2_GPTMSYNC_R_SYNCT3_BOTH      (0x000000C0)

#define GPTM2_GPTMSYNC_SYNCT3_MASK        (0x00000003)
#define GPTM2_GPTMSYNC_SYNCT3_NA          (0x00000000)
#define GPTM2_GPTMSYNC_SYNCT3_TA          (0x00000001)
#define GPTM2_GPTMSYNC_SYNCT3_TB          (0x00000002)
#define GPTM2_GPTMSYNC_SYNCT3_BOTH        (0x00000003)
//--------

//--------
#define GPTM2_GPTMSYNC_R_SYNCT4_MASK      (0x00000300)
#define GPTM2_GPTMSYNC_R_SYNCT4_BIT       (8)
#define GPTM2_GPTMSYNC_R_SYNCT4_NA        (0x00000000)
#define GPTM2_GPTMSYNC_R_SYNCT4_TA        (0x00000100)
#define GPTM2_GPTMSYNC_R_SYNCT4_TB        (0x00000200)
#define GPTM2_GPTMSYNC_R_SYNCT4_BOTH      (0x00000300)

#define GPTM2_GPTMSYNC_SYNCT4_MASK        (0x00000003)
#define GPTM2_GPTMSYNC_SYNCT4_NA          (0x00000000)
#define GPTM2_GPTMSYNC_SYNCT4_TA          (0x00000001)
#define GPTM2_GPTMSYNC_SYNCT4_TB          (0x00000002)
#define GPTM2_GPTMSYNC_SYNCT4_BOTH        (0x00000003)
//--------

//--------
#define GPTM2_GPTMSYNC_R_SYNCT5_MASK      (0x00000C00)
#define GPTM2_GPTMSYNC_R_SYNCT5_BIT       (10)
#define GPTM2_GPTMSYNC_R_SYNCT5_NA        (0x00000000)
#define GPTM2_GPTMSYNC_R_SYNCT5_TA        (0x00000400)
#define GPTM2_GPTMSYNC_R_SYNCT5_TB        (0x00000800)
#define GPTM2_GPTMSYNC_R_SYNCT5_BOTH      (0x00000C00)

#define GPTM2_GPTMSYNC_SYNCT5_MASK        (0x00000003)
#define GPTM2_GPTMSYNC_SYNCT5_NA          (0x00000000)
#define GPTM2_GPTMSYNC_SYNCT5_TA          (0x00000001)
#define GPTM2_GPTMSYNC_SYNCT5_TB          (0x00000002)
#define GPTM2_GPTMSYNC_SYNCT5_BOTH        (0x00000003)
//--------

//--------
#define GPTM2_GPTMSYNC_R_SYNCWT0_MASK      (0x00003000)
#define GPTM2_GPTMSYNC_R_SYNCWT0_BIT       (12)
#define GPTM2_GPTMSYNC_R_SYNCWT0_NA        (0x00000000)
#define GPTM2_GPTMSYNC_R_SYNCWT0_TA        (0x00001000)
#define GPTM2_GPTMSYNC_R_SYNCWT0_TB        (0x00002000)
#define GPTM2_GPTMSYNC_R_SYNCWT0_BOTH      (0x00003000)

#define GPTM2_GPTMSYNC_SYNCWT0_MASK        (0x00000003)
#define GPTM2_GPTMSYNC_SYNCWT0_NA          (0x00000000)
#define GPTM2_GPTMSYNC_SYNCWT0_TA          (0x00000001)
#define GPTM2_GPTMSYNC_SYNCWT0_TB          (0x00000002)
#define GPTM2_GPTMSYNC_SYNCWT0_BOTH        (0x00000003)
//--------

//--------
#define GPTM2_GPTMSYNC_R_SYNCWT1_MASK      (0x0000C000)
#define GPTM2_GPTMSYNC_R_SYNCWT1_BIT       (14)
#define GPTM2_GPTMSYNC_R_SYNCWT1_NA        (0x00000000)
#define GPTM2_GPTMSYNC_R_SYNCWT1_TA        (0x00004000)
#define GPTM2_GPTMSYNC_R_SYNCWT1_TB        (0x00008000)
#define GPTM2_GPTMSYNC_R_SYNCWT1_BOTH      (0x0000C000)

#define GPTM2_GPTMSYNC_SYNCWT1_MASK        (0x00000003)
#define GPTM2_GPTMSYNC_SYNCWT1_NA          (0x00000000)
#define GPTM2_GPTMSYNC_SYNCWT1_TA          (0x00000001)
#define GPTM2_GPTMSYNC_SYNCWT1_TB          (0x00000002)
#define GPTM2_GPTMSYNC_SYNCWT1_BOTH        (0x00000003)
//--------

//--------
#define GPTM2_GPTMSYNC_R_SYNCWT2_MASK      (0x00030000)
#define GPTM2_GPTMSYNC_R_SYNCWT2_BIT       (16)
#define GPTM2_GPTMSYNC_R_SYNCWT2_NA        (0x00000000)
#define GPTM2_GPTMSYNC_R_SYNCWT2_TA        (0x00010000)
#define GPTM2_GPTMSYNC_R_SYNCWT2_TB        (0x00020000)
#define GPTM2_GPTMSYNC_R_SYNCWT2_BOTH      (0x00030000)

#define GPTM2_GPTMSYNC_SYNCWT2_MASK        (0x00000003)
#define GPTM2_GPTMSYNC_SYNCWT2_NA          (0x00000000)
#define GPTM2_GPTMSYNC_SYNCWT2_TA          (0x00000001)
#define GPTM2_GPTMSYNC_SYNCWT2_TB          (0x00000002)
#define GPTM2_GPTMSYNC_SYNCWT2_BOTH        (0x00000003)
//--------

//--------
#define GPTM2_GPTMSYNC_R_SYNCWT3_MASK      (0x000C0000)
#define GPTM2_GPTMSYNC_R_SYNCWT3_BIT       (18)
#define GPTM2_GPTMSYNC_R_SYNCWT3_NA        (0x00000000)
#define GPTM2_GPTMSYNC_R_SYNCWT3_TA        (0x00040000)
#define GPTM2_GPTMSYNC_R_SYNCWT3_TB        (0x00080000)
#define GPTM2_GPTMSYNC_R_SYNCWT3_BOTH      (0x000C0000)

#define GPTM2_GPTMSYNC_SYNCWT3_MASK        (0x00000003)
#define GPTM2_GPTMSYNC_SYNCWT3_NA          (0x00000000)
#define GPTM2_GPTMSYNC_SYNCWT3_TA          (0x00000001)
#define GPTM2_GPTMSYNC_SYNCWT3_TB          (0x00000002)
#define GPTM2_GPTMSYNC_SYNCWT3_BOTH        (0x00000003)
//--------

//--------
#define GPTM2_GPTMSYNC_R_SYNCWT4_MASK      (0x0030000)
#define GPTM2_GPTMSYNC_R_SYNCWT4_BIT       (20)
#define GPTM2_GPTMSYNC_R_SYNCWT4_NA        (0x00000000)
#define GPTM2_GPTMSYNC_R_SYNCWT4_TA        (0x00100000)
#define GPTM2_GPTMSYNC_R_SYNCWT4_TB        (0x00200000)
#define GPTM2_GPTMSYNC_R_SYNCWT4_BOTH      (0x00300000)

#define GPTM2_GPTMSYNC_SYNCWT4_MASK        (0x00000003)
#define GPTM2_GPTMSYNC_SYNCWT4_NA          (0x00000000)
#define GPTM2_GPTMSYNC_SYNCWT4_TA          (0x00000001)
#define GPTM2_GPTMSYNC_SYNCWT4_TB          (0x00000002)
#define GPTM2_GPTMSYNC_SYNCWT4_BOTH        (0x00000003)
//--------

//--------
#define GPTM2_GPTMSYNC_R_SYNCWT5_MASK      (0x00C00000)
#define GPTM2_GPTMSYNC_R_SYNCWT5_BIT       (22)
#define GPTM2_GPTMSYNC_R_SYNCWT5_NA        (0x00000000)
#define GPTM2_GPTMSYNC_R_SYNCWT5_TA        (0x00400000)
#define GPTM2_GPTMSYNC_R_SYNCWT5_TB        (0x00800000)
#define GPTM2_GPTMSYNC_R_SYNCWT5_BOTH      (0x00C00000)

#define GPTM2_GPTMSYNC_SYNCWT5_MASK        (0x00000003)
#define GPTM2_GPTMSYNC_SYNCWT5_NA          (0x00000000)
#define GPTM2_GPTMSYNC_SYNCWT5_TA          (0x00000001)
#define GPTM2_GPTMSYNC_SYNCWT5_TB          (0x00000002)
#define GPTM2_GPTMSYNC_SYNCWT5_BOTH        (0x00000003)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.6 GPTMIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMIMR            (((GPTMIMR_TypeDef*)(GPTM2_BASE + GPTM_GPTMIMR_OFFSET )))
#define GPTM2_GPTMIMR_R          (*((volatile  uint32_t *)(GPTM2_BASE +GPTM_GPTMIMR_OFFSET)))

//--------
#define GPTM2_GPTMIMR_R_TATOIM_MASK      (0x00000001)
#define GPTM2_GPTMIMR_R_TATOIM_BIT       (0)
#define GPTM2_GPTMIMR_R_TATOIM_DIS       (0x00000000)
#define GPTM2_GPTMIMR_R_TATOIM_EN        (0x00000001)

#define GPTM2_GPTMIMR_TATOIM_MASK        (0x00000001)
#define GPTM2_GPTMIMR_TATOIM_DIS         (0x00000000)
#define GPTM2_GPTMIMR_TATOIM_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMIMR_R_CAMIM_MASK      (0x00000002)
#define GPTM2_GPTMIMR_R_CAMIM_BIT       (1)
#define GPTM2_GPTMIMR_R_CAMIM_DIS       (0x00000000)
#define GPTM2_GPTMIMR_R_CAMIM_EN        (0x00000002)

#define GPTM2_GPTMIMR_CAMIM_MASK        (0x00000001)
#define GPTM2_GPTMIMR_CAMIM_DIS         (0x00000000)
#define GPTM2_GPTMIMR_CAMIM_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMIMR_R_CAEIM_MASK      (0x00000004)
#define GPTM2_GPTMIMR_R_CAEIM_BIT       (2)
#define GPTM2_GPTMIMR_R_CAEIM_DIS       (0x00000000)
#define GPTM2_GPTMIMR_R_CAEIM_EN        (0x00000004)

#define GPTM2_GPTMIMR_CAEIM_MASK        (0x00000001)
#define GPTM2_GPTMIMR_CAEIM_DIS         (0x00000000)
#define GPTM2_GPTMIMR_CAEIM_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMIMR_R_RTCIM_MASK      (0x00000008)
#define GPTM2_GPTMIMR_R_RTCIM_BIT       (3)
#define GPTM2_GPTMIMR_R_RTCIM_DIS       (0x00000000)
#define GPTM2_GPTMIMR_R_RTCIM_EN        (0x00000008)

#define GPTM2_GPTMIMR_RTCIM_MASK        (0x00000001)
#define GPTM2_GPTMIMR_RTCIM_DIS         (0x00000000)
#define GPTM2_GPTMIMR_RTCIM_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMIMR_R_TAMIM_MASK      (0x00000010)
#define GPTM2_GPTMIMR_R_TAMIM_BIT       (4)
#define GPTM2_GPTMIMR_R_TAMIM_DIS       (0x00000000)
#define GPTM2_GPTMIMR_R_TAMIM_EN        (0x00000010)

#define GPTM2_GPTMIMR_TAMIM_MASK        (0x00000001)
#define GPTM2_GPTMIMR_TAMIM_DIS         (0x00000000)
#define GPTM2_GPTMIMR_TAMIM_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMIMR_R_TBTOIM_MASK      (0x00000100)
#define GPTM2_GPTMIMR_R_TBTOIM_BIT       (8)
#define GPTM2_GPTMIMR_R_TBTOIM_DIS       (0x00000000)
#define GPTM2_GPTMIMR_R_TBTOIM_EN        (0x00000100)

#define GPTM2_GPTMIMR_TBTOIM_MASK        (0x00000001)
#define GPTM2_GPTMIMR_TBTOIM_DIS         (0x00000000)
#define GPTM2_GPTMIMR_TBTOIM_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMIMR_R_CBMIM_MASK      (0x00000200)
#define GPTM2_GPTMIMR_R_CBMIM_BIT       (9)
#define GPTM2_GPTMIMR_R_CBMIM_DIS       (0x00000000)
#define GPTM2_GPTMIMR_R_CBMIM_EN        (0x00000200)

#define GPTM2_GPTMIMR_CBMIM_MASK        (0x00000001)
#define GPTM2_GPTMIMR_CBMIM_DIS         (0x00000000)
#define GPTM2_GPTMIMR_CBMIM_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMIMR_R_CBEIM_MASK      (0x00000400)
#define GPTM2_GPTMIMR_R_CBEIM_BIT       (10)
#define GPTM2_GPTMIMR_R_CBEIM_DIS       (0x00000000)
#define GPTM2_GPTMIMR_R_CBEIM_EN        (0x00000400)

#define GPTM2_GPTMIMR_CBEIM_MASK        (0x00000001)
#define GPTM2_GPTMIMR_CBEIM_DIS         (0x00000000)
#define GPTM2_GPTMIMR_CBEIM_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMIMR_R_TBMIM_MASK      (0x00000800)
#define GPTM2_GPTMIMR_R_TBMIM_BIT       (11)
#define GPTM2_GPTMIMR_R_TBMIM_DIS       (0x00000000)
#define GPTM2_GPTMIMR_R_TBMIM_EN        (0x00000800)

#define GPTM2_GPTMIMR_TBMIM_MASK        (0x00000001)
#define GPTM2_GPTMIMR_TBMIM_DIS         (0x00000000)
#define GPTM2_GPTMIMR_TBMIM_EN          (0x00000001)
//--------

//--------
#define GPTM2_GPTMIMR_R_WUEIM_MASK      (0x00010000)
#define GPTM2_GPTMIMR_R_WUEIM_BIT       (16)
#define GPTM2_GPTMIMR_R_WUEIM_DIS       (0x00000000)
#define GPTM2_GPTMIMR_R_WUEIM_EN        (0x00010000)

#define GPTM2_GPTMIMR_WUEIM_MASK        (0x00000001)
#define GPTM2_GPTMIMR_WUEIM_DIS         (0x00000000)
#define GPTM2_GPTMIMR_WUEIM_EN          (0x00000001)
//--------

#define GPTM2_GPTMIMR_TATOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(0*4))))
#define GPTM2_GPTMIMR_CAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(1*4))))
#define GPTM2_GPTMIMR_CAEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(2*4))))
#define GPTM2_GPTMIMR_RTCIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(3*4))))
#define GPTM2_GPTMIMR_TAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(4*4))))
#define GPTM2_GPTMIMR_TBTOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(8*4))))
#define GPTM2_GPTMIMR_CBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(9*4))))
#define GPTM2_GPTMIMR_CBEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(10*4))))
#define GPTM2_GPTMIMR_TBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(11*4))))
#define GPTM2_GPTMIMR_WUEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(16*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.7 GPTMRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMRIS            (((GPTMRIS_TypeDef*)(GPTM2_BASE + GPTM_GPTMRIS_OFFSET )))
#define GPTM2_GPTMRIS_R          (*((volatile const uint32_t *)(GPTM2_BASE +GPTM_GPTMRIS_OFFSET)))



//--------
#define GPTM2_GPTMRIS_R_TATORIS_MASK      (0x00000001)
#define GPTM2_GPTMRIS_R_TATORIS_BIT       (0)
#define GPTM2_GPTMRIS_R_TATORIS_NOACTIVE  (0x00000000)
#define GPTM2_GPTMRIS_R_TATORIS_ACTIVE    (0x00000001)

#define GPTM2_GPTMRIS_TATORIS_MASK        (0x00000001)
#define GPTM2_GPTMRIS_TATORIS_NOACTIVE    (0x00000000)
#define GPTM2_GPTMRIS_TATORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM2_GPTMRIS_R_CAMRIS_MASK      (0x00000002)
#define GPTM2_GPTMRIS_R_CAMRIS_BIT       (1)
#define GPTM2_GPTMRIS_R_CAMRIS_NOACTIVE  (0x00000000)
#define GPTM2_GPTMRIS_R_CAMRIS_ACTIVE    (0x00000002)

#define GPTM2_GPTMRIS_CAMRIS_MASK        (0x00000001)
#define GPTM2_GPTMRIS_CAMRIS_NOACTIVE    (0x00000000)
#define GPTM2_GPTMRIS_CAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM2_GPTMRIS_R_CAERIS_MASK      (0x00000004)
#define GPTM2_GPTMRIS_R_CAERIS_BIT       (2)
#define GPTM2_GPTMRIS_R_CAERIS_NOACTIVE  (0x00000000)
#define GPTM2_GPTMRIS_R_CAERIS_ACTIVE    (0x00000004)

#define GPTM2_GPTMRIS_CAERIS_MASK        (0x00000001)
#define GPTM2_GPTMRIS_CAERIS_NOACTIVE    (0x00000000)
#define GPTM2_GPTMRIS_CAERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM2_GPTMRIS_R_RTCRIS_MASK      (0x00000008)
#define GPTM2_GPTMRIS_R_RTCRIS_BIT       (3)
#define GPTM2_GPTMRIS_R_RTCRIS_NOACTIVE  (0x00000000)
#define GPTM2_GPTMRIS_R_RTCRIS_ACTIVE    (0x00000008)

#define GPTM2_GPTMRIS_RTCRIS_MASK        (0x00000001)
#define GPTM2_GPTMRIS_RTCRIS_NOACTIVE    (0x00000000)
#define GPTM2_GPTMRIS_RTCRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM2_GPTMRIS_R_TAMRIS_MASK      (0x00000010)
#define GPTM2_GPTMRIS_R_TAMRIS_BIT       (4)
#define GPTM2_GPTMRIS_R_TAMRIS_NOACTIVE  (0x00000000)
#define GPTM2_GPTMRIS_R_TAMRIS_ACTIVE    (0x00000010)

#define GPTM2_GPTMRIS_TAMRIS_MASK        (0x00000001)
#define GPTM2_GPTMRIS_TAMRIS_NOACTIVE    (0x00000000)
#define GPTM2_GPTMRIS_TAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM2_GPTMRIS_R_TBTORIS_MASK      (0x00000100)
#define GPTM2_GPTMRIS_R_TBTORIS_BIT       (8)
#define GPTM2_GPTMRIS_R_TBTORIS_NOACTIVE  (0x00000000)
#define GPTM2_GPTMRIS_R_TBTORIS_ACTIVE    (0x00000100)

#define GPTM2_GPTMRIS_TBTORIS_MASK        (0x00000001)
#define GPTM2_GPTMRIS_TBTORIS_NOACTIVE    (0x00000000)
#define GPTM2_GPTMRIS_TBTORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM2_GPTMRIS_R_CBMRIS_MASK      (0x00000200)
#define GPTM2_GPTMRIS_R_CBMRIS_BIT       (9)
#define GPTM2_GPTMRIS_R_CBMRIS_NOACTIVE  (0x00000000)
#define GPTM2_GPTMRIS_R_CBMRIS_ACTIVE    (0x00000200)

#define GPTM2_GPTMRIS_CBMRIS_MASK        (0x00000001)
#define GPTM2_GPTMRIS_CBMRIS_NOACTIVE    (0x00000000)
#define GPTM2_GPTMRIS_CBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM2_GPTMRIS_R_CBERIS_MASK      (0x00000400)
#define GPTM2_GPTMRIS_R_CBERIS_BIT       (10)
#define GPTM2_GPTMRIS_R_CBERIS_NOACTIVE  (0x00000000)
#define GPTM2_GPTMRIS_R_CBERIS_ACTIVE    (0x00000400)

#define GPTM2_GPTMRIS_CBERIS_MASK        (0x00000001)
#define GPTM2_GPTMRIS_CBERIS_NOACTIVE    (0x00000000)
#define GPTM2_GPTMRIS_CBERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM2_GPTMRIS_R_TBMRIS_MASK      (0x00000800)
#define GPTM2_GPTMRIS_R_TBMRIS_BIT       (11)
#define GPTM2_GPTMRIS_R_TBMRIS_NOACTIVE  (0x00000000)
#define GPTM2_GPTMRIS_R_TBMRIS_ACTIVE    (0x00000800)

#define GPTM2_GPTMRIS_TBMRIS_MASK        (0x00000001)
#define GPTM2_GPTMRIS_TBMRIS_NOACTIVE    (0x00000000)
#define GPTM2_GPTMRIS_TBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM2_GPTMRIS_R_WUERIS_MASK      (0x00010000)
#define GPTM2_GPTMRIS_R_WUERIS_BIT       (16)
#define GPTM2_GPTMRIS_R_WUERIS_NOACTIVE  (0x00000000)
#define GPTM2_GPTMRIS_R_WUERIS_ACTIVE    (0x00010000)

#define GPTM2_GPTMRIS_WUERIS_MASK        (0x00000001)
#define GPTM2_GPTMRIS_WUERIS_NOACTIVE    (0x00000000)
#define GPTM2_GPTMRIS_WUERIS_ACTIVE      (0x00000001)
//--------

#define GPTM2_GPTMRIS_TATORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(0*4))))
#define GPTM2_GPTMRIS_CAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(1*4))))
#define GPTM2_GPTMRIS_CAERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(2*4))))
#define GPTM2_GPTMRIS_RTCRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(3*4))))
#define GPTM2_GPTMRIS_TAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(4*4))))
#define GPTM2_GPTMRIS_TBTORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(8*4))))
#define GPTM2_GPTMRIS_CBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(9*4))))
#define GPTM2_GPTMRIS_CBERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(10*4))))
#define GPTM2_GPTMRIS_TBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(11*4))))
#define GPTM2_GPTMRIS_WUERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(16*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.8 GPTMMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMMIS            (((GPTMMIS_TypeDef*)(GPTM2_BASE + GPTM_GPTMMIS_OFFSET )))
#define GPTM2_GPTMMIS_R          (*((volatile const uint32_t *)(GPTM2_BASE +GPTM_GPTMMIS_OFFSET)))




//--------
#define GPTM2_GPTMMIS_R_TATOMIS_MASK      (0x00000001)
#define GPTM2_GPTMMIS_R_TATOMIS_BIT       (0)
#define GPTM2_GPTMMIS_R_TATOMIS_NOOCCUR  (0x00000000)
#define GPTM2_GPTMMIS_R_TATOMIS_OCCUR    (0x00000001)

#define GPTM2_GPTMMIS_TATOMIS_MASK        (0x00000001)
#define GPTM2_GPTMMIS_TATOMIS_NOOCCUR    (0x00000000)
#define GPTM2_GPTMMIS_TATOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM2_GPTMMIS_R_CAMMIS_MASK      (0x00000002)
#define GPTM2_GPTMMIS_R_CAMMIS_BIT       (1)
#define GPTM2_GPTMMIS_R_CAMMIS_NOOCCUR  (0x00000000)
#define GPTM2_GPTMMIS_R_CAMMIS_OCCUR    (0x00000002)

#define GPTM2_GPTMMIS_CAMMIS_MASK        (0x00000001)
#define GPTM2_GPTMMIS_CAMMIS_NOOCCUR    (0x00000000)
#define GPTM2_GPTMMIS_CAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM2_GPTMMIS_R_CAEMIS_MASK      (0x00000004)
#define GPTM2_GPTMMIS_R_CAEMIS_BIT       (2)
#define GPTM2_GPTMMIS_R_CAEMIS_NOOCCUR  (0x00000000)
#define GPTM2_GPTMMIS_R_CAEMIS_OCCUR    (0x00000004)

#define GPTM2_GPTMMIS_CAEMIS_MASK        (0x00000001)
#define GPTM2_GPTMMIS_CAEMIS_NOOCCUR    (0x00000000)
#define GPTM2_GPTMMIS_CAEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM2_GPTMMIS_R_RTCMIS_MASK      (0x00000008)
#define GPTM2_GPTMMIS_R_RTCMIS_BIT       (3)
#define GPTM2_GPTMMIS_R_RTCMIS_NOOCCUR  (0x00000000)
#define GPTM2_GPTMMIS_R_RTCMIS_OCCUR    (0x00000008)

#define GPTM2_GPTMMIS_RTCMIS_MASK        (0x00000001)
#define GPTM2_GPTMMIS_RTCMIS_NOOCCUR    (0x00000000)
#define GPTM2_GPTMMIS_RTCMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM2_GPTMMIS_R_TAMMIS_MASK      (0x00000010)
#define GPTM2_GPTMMIS_R_TAMMIS_BIT       (4)
#define GPTM2_GPTMMIS_R_TAMMIS_NOOCCUR  (0x00000000)
#define GPTM2_GPTMMIS_R_TAMMIS_OCCUR    (0x00000010)

#define GPTM2_GPTMMIS_TAMMIS_MASK        (0x00000001)
#define GPTM2_GPTMMIS_TAMMIS_NOOCCUR    (0x00000000)
#define GPTM2_GPTMMIS_TAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM2_GPTMMIS_R_TBTOMIS_MASK      (0x00000100)
#define GPTM2_GPTMMIS_R_TBTOMIS_BIT       (8)
#define GPTM2_GPTMMIS_R_TBTOMIS_NOOCCUR  (0x00000000)
#define GPTM2_GPTMMIS_R_TBTOMIS_OCCUR    (0x00000100)

#define GPTM2_GPTMMIS_TBTOMIS_MASK        (0x00000001)
#define GPTM2_GPTMMIS_TBTOMIS_NOOCCUR    (0x00000000)
#define GPTM2_GPTMMIS_TBTOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM2_GPTMMIS_R_CBMMIS_MASK      (0x00000200)
#define GPTM2_GPTMMIS_R_CBMMIS_BIT       (9)
#define GPTM2_GPTMMIS_R_CBMMIS_NOOCCUR  (0x00000000)
#define GPTM2_GPTMMIS_R_CBMMIS_OCCUR    (0x00000200)

#define GPTM2_GPTMMIS_CBMMIS_MASK        (0x00000001)
#define GPTM2_GPTMMIS_CBMMIS_NOOCCUR    (0x00000000)
#define GPTM2_GPTMMIS_CBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM2_GPTMMIS_R_CBEMIS_MASK      (0x00000400)
#define GPTM2_GPTMMIS_R_CBEMIS_BIT       (10)
#define GPTM2_GPTMMIS_R_CBEMIS_NOOCCUR  (0x00000000)
#define GPTM2_GPTMMIS_R_CBEMIS_OCCUR    (0x00000400)

#define GPTM2_GPTMMIS_CBEMIS_MASK        (0x00000001)
#define GPTM2_GPTMMIS_CBEMIS_NOOCCUR    (0x00000000)
#define GPTM2_GPTMMIS_CBEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM2_GPTMMIS_R_TBMMIS_MASK      (0x00000800)
#define GPTM2_GPTMMIS_R_TBMMIS_BIT       (11)
#define GPTM2_GPTMMIS_R_TBMMIS_NOOCCUR  (0x00000000)
#define GPTM2_GPTMMIS_R_TBMMIS_OCCUR    (0x00000800)

#define GPTM2_GPTMMIS_TBMMIS_MASK        (0x00000001)
#define GPTM2_GPTMMIS_TBMMIS_NOOCCUR    (0x00000000)
#define GPTM2_GPTMMIS_TBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM2_GPTMMIS_R_WUEMIS_MASK      (0x00010000)
#define GPTM2_GPTMMIS_R_WUEMIS_BIT       (16)
#define GPTM2_GPTMMIS_R_WUEMIS_NOOCCUR  (0x00000000)
#define GPTM2_GPTMMIS_R_WUEMIS_OCCUR    (0x00010000)

#define GPTM2_GPTMMIS_WUEMIS_MASK        (0x00000001)
#define GPTM2_GPTMMIS_WUEMIS_NOOCCUR    (0x00000000)
#define GPTM2_GPTMMIS_WUEMIS_OCCUR      (0x00000001)
//--------

#define GPTM2_GPTMMIS_TATOMIS           (0x00000001)
#define GPTM2_GPTMMIS_CAMMIS            (0x00000002)
#define GPTM2_GPTMMIS_CAEMIS            (0x00000004)
#define GPTM2_GPTMMIS_RTCMIS            (0x00000008)
#define GPTM2_GPTMMIS_TAMMIS            (0x00000010)
#define GPTM2_GPTMMIS_TBTOMIS           (0x00000100)
#define GPTM2_GPTMMIS_CBMMIS            (0x00000200)
#define GPTM2_GPTMMIS_CBEMIS            (0x00000400)
#define GPTM2_GPTMMIS_TBMMIS            (0x00000800)
#define GPTM2_GPTMMIS_WUEMIS            (0x00010000)


#define GPTM2_GPTMMIS_TATOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(0*4))))
#define GPTM2_GPTMMIS_CAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(1*4))))
#define GPTM2_GPTMMIS_CAEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(2*4))))
#define GPTM2_GPTMMIS_RTCMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(3*4))))
#define GPTM2_GPTMMIS_TAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(4*4))))
#define GPTM2_GPTMMIS_TBTOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(8*4))))
#define GPTM2_GPTMMIS_CBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(9*4))))
#define GPTM2_GPTMMIS_CBEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(10*4))))
#define GPTM2_GPTMMIS_TBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(11*4))))
#define GPTM2_GPTMMIS_WUEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.9 GPTMICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMICR            (((GPTMICR_TypeDef*)(GPTM2_BASE + GPTM_GPTMICR_OFFSET )))
#define GPTM2_GPTMICR_R          (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMICR_OFFSET)))



//--------
#define GPTM2_GPTMICR_R_TATOCINT_MASK      (0x00000001)
#define GPTM2_GPTMICR_R_TATOCINT_BIT       (0)
#define GPTM2_GPTMICR_R_TATOCINT_CLEAR     (0x00000001)

#define GPTM2_GPTMICR_TATOCINT_MASK        (0x00000001)
#define GPTM2_GPTMICR_TATOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM2_GPTMICR_R_CAMCINT_MASK      (0x00000002)
#define GPTM2_GPTMICR_R_CAMCINT_BIT       (1)
#define GPTM2_GPTMICR_R_CAMCINT_CLEAR     (0x00000002)

#define GPTM2_GPTMICR_CAMCINT_MASK        (0x00000001)
#define GPTM2_GPTMICR_CAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM2_GPTMICR_R_CAECINT_MASK      (0x00000004)
#define GPTM2_GPTMICR_R_CAECINT_BIT       (2)
#define GPTM2_GPTMICR_R_CAECINT_CLEAR     (0x00000004)

#define GPTM2_GPTMICR_CAECINT_MASK        (0x00000001)
#define GPTM2_GPTMICR_CAECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM2_GPTMICR_R_RTCCINT_MASK      (0x00000008)
#define GPTM2_GPTMICR_R_RTCCINT_BIT       (3)
#define GPTM2_GPTMICR_R_RTCCINT_CLEAR     (0x00000008)

#define GPTM2_GPTMICR_RTCCINT_MASK        (0x00000001)
#define GPTM2_GPTMICR_RTCCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM2_GPTMICR_R_TAMCINT_MASK      (0x00000010)
#define GPTM2_GPTMICR_R_TAMCINT_BIT       (4)
#define GPTM2_GPTMICR_R_TAMCINT_CLEAR     (0x00000010)

#define GPTM2_GPTMICR_TAMCINT_MASK        (0x00000001)
#define GPTM2_GPTMICR_TAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM2_GPTMICR_R_TBTOCINT_MASK      (0x00000100)
#define GPTM2_GPTMICR_R_TBTOCINT_BIT       (8)
#define GPTM2_GPTMICR_R_TBTOCINT_CLEAR     (0x00000100)

#define GPTM2_GPTMICR_TBTOCINT_MASK        (0x00000001)
#define GPTM2_GPTMICR_TBTOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM2_GPTMICR_R_CBMCINT_MASK      (0x00000200)
#define GPTM2_GPTMICR_R_CBMCINT_BIT       (9)
#define GPTM2_GPTMICR_R_CBMCINT_CLEAR     (0x00000200)

#define GPTM2_GPTMICR_CBMCINT_MASK        (0x00000001)
#define GPTM2_GPTMICR_CBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM2_GPTMICR_R_CBECINT_MASK      (0x00000400)
#define GPTM2_GPTMICR_R_CBECINT_BIT       (10)
#define GPTM2_GPTMICR_R_CBECINT_CLEAR     (0x00000400)

#define GPTM2_GPTMICR_CBECINT_MASK        (0x00000001)
#define GPTM2_GPTMICR_CBECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM2_GPTMICR_R_TBMCINT_MASK      (0x00000800)
#define GPTM2_GPTMICR_R_TBMCINT_BIT       (11)
#define GPTM2_GPTMICR_R_TBMCINT_CLEAR     (0x00000800)

#define GPTM2_GPTMICR_TBMCINT_MASK        (0x00000001)
#define GPTM2_GPTMICR_TBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM2_GPTMICR_R_WUECINT_MASK      (0x00010000)
#define GPTM2_GPTMICR_R_WUECINT_BIT       (16)
#define GPTM2_GPTMICR_R_WUECINT_CLEAR     (0x00010000)

#define GPTM2_GPTMICR_WUECINT_MASK        (0x00000001)
#define GPTM2_GPTMICR_WUECINT_CLEAR       (0x00000001)
//--------


#define GPTM2_GPTMICR_TATOCINT           (0x00000001)
#define GPTM2_GPTMICR_CAMCINT            (0x00000002)
#define GPTM2_GPTMICR_CAECINT            (0x00000004)
#define GPTM2_GPTMICR_RTCCINT            (0x00000008)
#define GPTM2_GPTMICR_TAMCINT            (0x00000010)
#define GPTM2_GPTMICR_TBTOCINT           (0x00000100)
#define GPTM2_GPTMICR_CBMCINT            (0x00000200)
#define GPTM2_GPTMICR_CBECINT            (0x00000400)
#define GPTM2_GPTMICR_TBMCINT            (0x00000800)
#define GPTM2_GPTMICR_WUECINT            (0x00010000)


#define GPTM2_GPTMICR_TATOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(0*4))))
#define GPTM2_GPTMICR_CAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(1*4))))
#define GPTM2_GPTMICR_CAECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(2*4))))
#define GPTM2_GPTMICR_RTCCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(3*4))))
#define GPTM2_GPTMICR_TAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(4*4))))
#define GPTM2_GPTMICR_TBTOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(8*4))))
#define GPTM2_GPTMICR_CBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(9*4))))
#define GPTM2_GPTMICR_CBECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(10*4))))
#define GPTM2_GPTMICR_TBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(11*4))))
#define GPTM2_GPTMICR_WUECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.10 GPTMTAILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMTAILR            (((GPTMTAILR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTAILR_OFFSET )))
#define GPTM2_GPTMTAILR_R          (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTAILR_OFFSET)))

//--------
#define GPTM2_GPTMTAILR_R_TAILR_MASK      (0xFFFFFFFF)
#define GPTM2_GPTMTAILR_R_TAILR_BIT       (0)

#define GPTM2_GPTMTAILR_TAILR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.11 GPTMTBILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMTBILR            (((GPTMTBILR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTBILR_OFFSET )))
#define GPTM2_GPTMTBILR_R          (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTBILR_OFFSET)))

//--------
#define GPTM2_GPTMTBILR_R_TBILR_MASK      (0xFFFFFFFF)
#define GPTM2_GPTMTBILR_R_TBILR_BIT       (0)

#define GPTM2_GPTMTBILR_TBILR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.12 GPTMTAMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMTAMATCHR            (((GPTMTAMATCHR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTAMATCHR_OFFSET )))
#define GPTM2_GPTMTAMATCHR_R          (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTAMATCHR_OFFSET)))


//--------
#define GPTM2_GPTMTAMATCHR_R_TAMR_MASK      (0xFFFFFFFF)
#define GPTM2_GPTMTAMATCHR_R_TAMR_BIT       (0)

#define GPTM2_GPTMTAMATCHR_TAMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.13 GPTMTBMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMTBMATCHR            (((GPTMTBMATCHR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTBMATCHR_OFFSET )))
#define GPTM2_GPTMTBMATCHR_R          (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTBMATCHR_OFFSET)))


//--------
#define GPTM2_GPTMTBMATCHR_R_TBMR_MASK      (0xFFFFFFFF)
#define GPTM2_GPTMTBMATCHR_R_TBMR_BIT       (0)

#define GPTM2_GPTMTBMATCHR_TBMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.14 GPTMTAPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMTAPR            (((GPTMTAPR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTAPR_OFFSET )))
#define GPTM2_GPTMTAPR_R          (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTAPR_OFFSET)))


//--------
#define GPTM2_GPTMTAPR_R_TAPSR_MASK      (0x000000FF)
#define GPTM2_GPTMTAPR_R_TAPSR_BIT       (0)

#define GPTM2_GPTMTAPR_TAPSR_MASK        (0x000000FF)
//--------

//--------
#define GPTM2_GPTMTAPR_R_TAPSRH_MASK      (0x0000FF00)
#define GPTM2_GPTMTAPR_R_TAPSRH_BIT       (8)

#define GPTM2_GPTMTAPR_TAPSRH_MASK        (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.15 GPTMTBPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMTBPR            (((GPTMTBPR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTBPR_OFFSET )))
#define GPTM2_GPTMTBPR_R          (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTBPR_OFFSET)))


//--------
#define GPTM2_GPTMTBPR_R_TBPSR_MASK      (0x000000FF)
#define GPTM2_GPTMTBPR_R_TBPSR_BIT       (0)

#define GPTM2_GPTMTBPR_TBPSR_MASK        (0x000000FF)
//--------


//--------
#define GPTM2_GPTMTBPR_R_TBPSRH_MASK      (0x0000FF00)
#define GPTM2_GPTMTBPR_R_TBPSRH_BIT       (8)

#define GPTM2_GPTMTBPR_TBPSRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.16 GPTMTAPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMTAPMR            (((GPTMTAPMR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTAPMR_OFFSET )))
#define GPTM2_GPTMTAPMR_R          (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTAPMR_OFFSET)))


//--------
#define GPTM2_GPTMTAPMR_R_TAPSMR_MASK      (0x000000FF)
#define GPTM2_GPTMTAPMR_R_TAPSMR_BIT       (0)

#define GPTM2_GPTMTAMPR_TAPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPTM2_GPTMTAPMR_R_TAPSMRH_MASK      (0x0000FF00)
#define GPTM2_GPTMTAPMR_R_TAPSMRH_BIT       (8)

#define GPTM2_GPTMTAPMR_TAPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.17 GPTMTBPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMTBPMR            (((GPTMTBPMR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTBPMR_OFFSET )))
#define GPTM2_GPTMTBPMR_R          (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTBPMR_OFFSET)))

//--------
#define GPTM2_GPTMTBPMR_R_TBPSMR_MASK      (0x000000FF)
#define GPTM2_GPTMTBPMR_R_TBPSMR_BIT       (0)

#define GPTM2_GPTMTBMPR_TBPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPTM2_GPTMTBPMR_R_TBPSMRH_MASK      (0x0000FF00)
#define GPTM2_GPTMTBPMR_R_TBPSMRH_BIT       (8)

#define GPTM2_GPTMTBPMR_TBPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.18 GPTMTAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMTAR            (((GPTMTAR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTAR_OFFSET )))
#define GPTM2_GPTMTAR_R          (*((volatile const  int32_t *)(GPTM2_BASE +GPTM_GPTMTAR_OFFSET)))


//--------
#define GPTM2_GPTMTAR_R_TAR_MASK      (0xFFFFFFFF)
#define GPTM2_GPTMTAR_R_TAR_BIT       (0)

#define GPTM2_GPTMTAR_TAR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.19 GPTMTBR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMTBR            (((GPTMTBR_TypeDef*)(GPTM2_BASE + GPTM_GPTMTBR_OFFSET )))
#define GPTM2_GPTMTBR_R          (*((volatile const uint32_t *)(GPTM2_BASE +GPTM_GPTMTBR_OFFSET)))


//--------
#define GPTM2_GPTMTBR_R_TBR_MASK      (0xFFFFFFFF)
#define GPTM2_GPTMTBR_R_TBR_BIT       (0)

#define GPTM2_GPTMTBR_TBR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.20 GPTMTAV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMTAV            (((GPTMTAV_TypeDef*)(GPTM2_BASE + GPTM_GPTMTAV_OFFSET )))
#define GPTM2_GPTMTAV_R          (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTAV_OFFSET)))

//--------
#define GPTM2_GPTMTAV_R_TAV_MASK      (0xFFFFFFFF)
#define GPTM2_GPTMTAV_R_TAV_BIT       (0)

#define GPTM2_GPTMTAV_TAV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.21 GPTMTBV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMTBV            (((GPTMTBV_TypeDef*)(GPTM2_BASE + GPTM_GPTMTBV_OFFSET )))
#define GPTM2_GPTMTBV_R          (*((volatile uint32_t *)(GPTM2_BASE +GPTM_GPTMTBV_OFFSET)))


//--------
#define GPTM2_GPTMTBV_R_TBV_MASK      (0xFFFFFFFF)
#define GPTM2_GPTMTBV_R_TBV_BIT       (0)

#define GPTM2_GPTMTBV_TBV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.22 GPTMRTCPD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMRTCPD            (((GPTMRTCPD_TypeDef*)(GPTM2_BASE + GPTM_GPTMRTCPD_OFFSET )))
#define GPTM2_GPTMRTCPD_R          (*((volatile const uint32_t *)(GPTM2_BASE +GPTM_GPTMRTCPD_OFFSET)))


//--------
#define GPTM2_GPTMRTCPD_R_RTCPD_MASK      (0x0000FFFF)
#define GPTM2_GPTMRTCPD_R_RTCPD_BIT       (0)
#define GPTM2_GPTMRTCPD_R_RTCPD_DEFAULT   (0x00007FFF)

#define GPTM2_GPTMRTCPD_RTCPD_MASK        (0x0000FFFF)
#define GPTM2_GPTMRTCPD_RTCPD_DEFAULT     (0x00007FFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.23 GPTMTAPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPTM2_GPTMTAPS            (((GPTMTAPS_TypeDef*)(GPTM2_BASE + GPTM_GPTMTAPS_OFFSET )))
#define GPTM2_GPTMTAPS_R          (*((volatile const uint32_t *)(GPTM2_BASE +GPTM_GPTMTAPS_OFFSET)))

//--------
#define GPTM2_GPTMTAPS_R_PSS_MASK      (0x0000FFFF)
#define GPTM2_GPTMTAPS_R_PSS_BIT       (0)

#define GPTM2_GPTMTAPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.24 GPTMTBPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMTBPS            (((GPTMTBPS_TypeDef*)(GPTM2_BASE + GPTM_GPTMTBPS_OFFSET )))
#define GPTM2_GPTMTBPS_R          (*((volatile const uint32_t *)(GPTM2_BASE +GPTM_GPTMTBPS_OFFSET)))

//--------
#define GPTM2_GPTMTBPS_R_PSS_MASK      (0x0000FFFF)
#define GPTM2_GPTMTBPS_R_PSS_BIT       (0)

#define GPTM2_GPTMTBPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.25 GPTMTAPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define GPTM2_GPTMTAPV            (((GPTMTAPV_TypeDef*)(GPTM2_BASE + GPTM_GPTMTAPV_OFFSET )))
#define GPTM2_GPTMTAPV_R          (*((volatile const uint32_t *)(GPTM2_BASE +GPTM_GPTMTAPV_OFFSET)))

//--------
#define GPTM2_GPTMTAPV_R_PSV_MASK      (0x0000FFFF)
#define GPTM2_GPTMTAPV_R_PSV_BIT       (0)

#define GPTM2_GPTMTAPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.26 GPTMTBPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPTM2_GPTMTBPV            (((GPTMTBPV_TypeDef*)(GPTM2_BASE + GPTM_GPTMTBPV_OFFSET )))
#define GPTM2_GPTMTBPV_R          (*((volatile const uint32_t *)(GPTM2_BASE +GPTM_GPTMTBPV_OFFSET)))

//--------
#define GPTM2_GPTMTBPV_R_PSV_MASK      (0x0000FFFF)
#define GPTM2_GPTMTBPV_R_PSV_BIT       (0)

#define GPTM2_GPTMTBPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.27 GPTMPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM2_GPTMPP            (((GPTMPP_TypeDef*)(GPTM2_BASE + GPTM_GPTMPP_OFFSET )))
#define GPTM2_GPTMPP_R          (*((volatile const uint32_t *)(GPTM2_BASE +GPTM_GPTMPP_OFFSET)))

#define GPTM2_GPTMPP_SIZE        (0x0000000F)

//--------
#define GPTM2_GPTMPP_R_SIZE_MASK      (0x0000000F)
#define GPTM2_GPTMPP_R_SIZE_BIT       (0)
#define GPTM2_GPTMPP_R_SIZE_16b       (0x00000000)
#define GPTM2_GPTMPP_R_SIZE_32b       (0x00000001)

#define GPTM2_GPTMPP_SIZE_MASK        (0x0000000F)
#define GPTM2_GPTMPP_SIZE_16b         (0x00000000)
#define GPTM2_GPTMPP_SIZE_32b         (0x00000001)
//--------


// ToDO GPTM3
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 GPTM3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.1 GPTMCFG ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMCFG            (((GPTMCFG_TypeDef*)(GPTM3_BASE + GPTM_GPTMCFG_OFFSET )))
#define GPTM3_GPTMCFG_R          (*((volatile uint32_t *)(GPTM3_BASE +GPTM_GPTMCFG_OFFSET)))


//--------
#define GPTM3_GPTMCFG_R_GPTMCFG_MASK      (0x00000007)
#define GPTM3_GPTMCFG_R_GPTMCFG_BIT       (0)
#define GPTM3_GPTMCFG_R_GPTMCFG_BOTH    (0x00000000)
#define GPTM3_GPTMCFG_R_GPTMCFG_RTC       (0x00000001)
#define GPTM3_GPTMCFG_R_GPTMCFG_SINGLE      (0x00000004)

#define GPTM3_GPTMCFG_GPTMCFG_MASK        (0x00000007)
#define GPTM3_GPTMCFG_GPTMCFG_BOTH      (0x00000000)
#define GPTM3_GPTMCFG_GPTMCFG_RTC         (0x00000001)
#define GPTM3_GPTMCFG_GPTMCFG_SINGLE        (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.2 GPTMTAMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMTAMR            (((GPTMTAMR_TypeDef*)(GPTM3_BASE + GPTM_GPTMTAMR_OFFSET )))
#define GPTM3_GPTMTAMR_R          (*((volatile uint32_t *)(GPTM3_BASE +GPTM_GPTMTAMR_OFFSET)))


//--------
#define GPTM3_GPTMTAMR_R_TAMR_MASK      (0x00000003)
#define GPTM3_GPTMTAMR_R_TAMR_BIT       (0)
#define GPTM3_GPTMTAMR_R_TAMR_ONESHOT   (0x00000001)
#define GPTM3_GPTMTAMR_R_TAMR_PERIOD    (0x00000002)
#define GPTM3_GPTMTAMR_R_TAMR_CAPTURE   (0x00000003)

#define GPTM3_GPTMTAMR_TAMR_MASK        (0x00000003)
#define GPTM3_GPTMTAMR_TAMR_ONESHOT     (0x00000001)
#define GPTM3_GPTMTAMR_TAMR_PERIOD      (0x00000002)
#define GPTM3_GPTMTAMR_TAMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPTM3_GPTMTAMR_R_TACMR_MASK      (0x00000004)
#define GPTM3_GPTMTAMR_R_TACMR_BIT       (2)
#define GPTM3_GPTMTAMR_R_TACMR_EDGECOUNT (0x00000000)
#define GPTM3_GPTMTAMR_R_TACMR_EDGETIME  (0x00000004)

#define GPTM3_GPTMTAMR_TACMR_MASK        (0x00000001)
#define GPTM3_GPTMTAMR_TACMR_EDGECOUNT   (0x00000000)
#define GPTM3_GPTMTAMR_TACMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPTM3_GPTMTAMR_R_TAAMS_MASK      (0x00000008)
#define GPTM3_GPTMTAMR_R_TAAMS_BIT       (3)
#define GPTM3_GPTMTAMR_R_TAAMS_CAPCOMP   (0x00000000)
#define GPTM3_GPTMTAMR_R_TAAMS_PWM       (0x00000008)

#define GPTM3_GPTMTAMR_TAAMS_MASK        (0x00000001)
#define GPTM3_GPTMTAMR_TAAMS_CAPCOMP     (0x00000000)
#define GPTM3_GPTMTAMR_TAAMS_PWM         (0x00000001)
//--------

//--------
#define GPTM3_GPTMTAMR_R_TACDIR_MASK      (0x00000010)
#define GPTM3_GPTMTAMR_R_TACDIR_BIT       (4)
#define GPTM3_GPTMTAMR_R_TACDIR_DOWN      (0x00000000)
#define GPTM3_GPTMTAMR_R_TACDIR_UP        (0x00000010)

#define GPTM3_GPTMTAMR_TACDIR_MASK        (0x00000001)
#define GPTM3_GPTMTAMR_TACDIR_DOWN        (0x00000000)
#define GPTM3_GPTMTAMR_TACDIR_UP          (0x00000001)
//--------

//--------
#define GPTM3_GPTMTAMR_R_TAMIE_MASK      (0x00000020)
#define GPTM3_GPTMTAMR_R_TAMIE_BIT       (5)
#define GPTM3_GPTMTAMR_R_TAMIE_DIS       (0x00000000)
#define GPTM3_GPTMTAMR_R_TAMIE_EN        (0x00000020)

#define GPTM3_GPTMTAMR_TAMIE_MASK        (0x00000001)
#define GPTM3_GPTMTAMR_TAMIE_DIS         (0x00000000)
#define GPTM3_GPTMTAMR_TAMIE_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMTAMR_R_TAWOT_MASK      (0x00000040)
#define GPTM3_GPTMTAMR_R_TAWOT_BIT       (6)
#define GPTM3_GPTMTAMR_R_TAWOT_INSTANT   (0x00000000)
#define GPTM3_GPTMTAMR_R_TAWOT_TRIGGER   (0x00000040)

#define GPTM3_GPTMTAMR_TAWOT_MASK        (0x00000001)
#define GPTM3_GPTMTAMR_TAWOT_INSTANT     (0x00000000)
#define GPTM3_GPTMTAMR_TAWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPTM3_GPTMTAMR_R_TASNAPS_MASK      (0x00000080)
#define GPTM3_GPTMTAMR_R_TASNAPS_BIT       (7)
#define GPTM3_GPTMTAMR_R_TASNAPS_DIS       (0x00000000)
#define GPTM3_GPTMTAMR_R_TASNAPS_EN        (0x00000080)

#define GPTM3_GPTMTAMR_TASNAPS_MASK        (0x00000001)
#define GPTM3_GPTMTAMR_TASNAPS_DIS         (0x00000000)
#define GPTM3_GPTMTAMR_TASNAPS_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMTAMR_R_TAILD_MASK      (0x00000100)
#define GPTM3_GPTMTAMR_R_TAILD_BIT       (8)
#define GPTM3_GPTMTAMR_R_TAILD_NEXT      (0x00000000)
#define GPTM3_GPTMTAMR_R_TAILD_TIMEOUT   (0x00000100)

#define GPTM3_GPTMTAMR_TAILD_MASK        (0x00000001)
#define GPTM3_GPTMTAMR_TAILD_NEXT        (0x00000000)
#define GPTM3_GPTMTAMR_TAILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM3_GPTMTAMR_R_TAPWMIE_MASK      (0x00000200)
#define GPTM3_GPTMTAMR_R_TAPWMIE_BIT       (9)
#define GPTM3_GPTMTAMR_R_TAPWMIE_DIS       (0x00000000)
#define GPTM3_GPTMTAMR_R_TAPWMIE_EN        (0x00000200)

#define GPTM3_GPTMTAMR_TAPWMIE_MASK        (0x00000001)
#define GPTM3_GPTMTAMR_TAPWMIE_DIS         (0x00000000)
#define GPTM3_GPTMTAMR_TAPWMIE_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMTAMR_R_TAMRSU_MASK      (0x00000400)
#define GPTM3_GPTMTAMR_R_TAMRSU_BIT       (10)
#define GPTM3_GPTMTAMR_R_TAMRSU_NEXT      (0x00000000)
#define GPTM3_GPTMTAMR_R_TAMRSU_TIMEOUT   (0x00000400)

#define GPTM3_GPTMTAMR_TAMRSU_MASK        (0x00000001)
#define GPTM3_GPTMTAMR_TAMRSU_NEXT        (0x00000000)
#define GPTM3_GPTMTAMR_TAMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM3_GPTMTAMR_R_TAPLO_MASK      (0x00000800)
#define GPTM3_GPTMTAMR_R_TAPLO_BIT       (11)
#define GPTM3_GPTMTAMR_R_TAPLO_LOW       (0x00000000)
#define GPTM3_GPTMTAMR_R_TAPLO_HIGH      (0x00000800)

#define GPTM3_GPTMTAMR_TAPLO_MASK        (0x00000001)
#define GPTM3_GPTMTAMR_TAPLO_LOW         (0x00000000)
#define GPTM3_GPTMTAMR_TAPLO_HIGH        (0x00000001)
//--------

#define GPTM3_GPTMTAMR_TACMR_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(2*4))))
#define GPTM3_GPTMTAMR_TAAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(3*4))))
#define GPTM3_GPTMTAMR_TACDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(4*4))))
#define GPTM3_GPTMTAMR_TAMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(5*4))))
#define GPTM3_GPTMTAMR_TAWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(6*4))))
#define GPTM3_GPTMTAMR_TASNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(7*4))))
#define GPTM3_GPTMTAMR_TAILD_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(8*4))))
#define GPTM3_GPTMTAMR_TAPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(9*4))))
#define GPTM3_GPTMTAMR_TAMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(10*4))))
#define GPTM3_GPTMTAMR_TAPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.3 GPTMTBMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMTBMR            (((GPTMTBMR_TypeDef*)(GPTM3_BASE + GPTM_GPTMTBMR_OFFSET )))
#define GPTM3_GPTMTBMR_R          (*((volatile uint32_t *)(GPTM3_BASE +GPTM_GPTMTBMR_OFFSET)))


//--------
#define GPTM3_GPTMTBMR_R_TBMR_MASK      (0x00000003)
#define GPTM3_GPTMTBMR_R_TBMR_BIT       (0)
#define GPTM3_GPTMTBMR_R_TBMR_ONESHOT   (0x00000001)
#define GPTM3_GPTMTBMR_R_TBMR_PERIOD    (0x00000002)
#define GPTM3_GPTMTBMR_R_TBMR_CAPTURE   (0x00000003)

#define GPTM3_GPTMTBMR_TBMR_MASK        (0x00000003)
#define GPTM3_GPTMTBMR_TBMR_ONESHOT     (0x00000001)
#define GPTM3_GPTMTBMR_TBMR_PERIOD      (0x00000002)
#define GPTM3_GPTMTBMR_TBMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPTM3_GPTMTBMR_R_TBCMR_MASK      (0x00000004)
#define GPTM3_GPTMTBMR_R_TBCMR_BIT       (2)
#define GPTM3_GPTMTBMR_R_TBCMR_EDGECOUNT (0x00000000)
#define GPTM3_GPTMTBMR_R_TBCMR_EDGETIME  (0x00000004)

#define GPTM3_GPTMTBMR_TBCMR_MASK        (0x00000001)
#define GPTM3_GPTMTBMR_TBCMR_EDGECOUNT   (0x00000000)
#define GPTM3_GPTMTBMR_TBCMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPTM3_GPTMTBMR_R_TBAMS_MASK      (0x00000008)
#define GPTM3_GPTMTBMR_R_TBAMS_BIT       (3)
#define GPTM3_GPTMTBMR_R_TBAMS_CAPCOMP   (0x00000000)
#define GPTM3_GPTMTBMR_R_TBAMS_PWM       (0x00000008)

#define GPTM3_GPTMTBMR_TBAMS_MASK        (0x00000001)
#define GPTM3_GPTMTBMR_TBAMS_CAPCOMP     (0x00000000)
#define GPTM3_GPTMTBMR_TBAMS_PWM         (0x00000001)
//--------

//--------
#define GPTM3_GPTMTBMR_R_TBCDIR_MASK      (0x00000010)
#define GPTM3_GPTMTBMR_R_TBCDIR_BIT       (4)
#define GPTM3_GPTMTBMR_R_TBCDIR_DOWN      (0x00000000)
#define GPTM3_GPTMTBMR_R_TBCDIR_UP        (0x00000010)

#define GPTM3_GPTMTBMR_TBCDIR_MASK        (0x00000001)
#define GPTM3_GPTMTBMR_TBCDIR_DOWN        (0x00000000)
#define GPTM3_GPTMTBMR_TBCDIR_UP          (0x00000001)
//--------

//--------
#define GPTM3_GPTMTBMR_R_TBMIE_MASK      (0x00000020)
#define GPTM3_GPTMTBMR_R_TBMIE_BIT       (5)
#define GPTM3_GPTMTBMR_R_TBMIE_DIS       (0x00000000)
#define GPTM3_GPTMTBMR_R_TBMIE_EN        (0x00000020)

#define GPTM3_GPTMTBMR_TBMIE_MASK        (0x00000001)
#define GPTM3_GPTMTBMR_TBMIE_DIS         (0x00000000)
#define GPTM3_GPTMTBMR_TBMIE_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMTBMR_R_TBWOT_MASK      (0x00000040)
#define GPTM3_GPTMTBMR_R_TBWOT_BIT       (6)
#define GPTM3_GPTMTBMR_R_TBWOT_INSTANT   (0x00000000)
#define GPTM3_GPTMTBMR_R_TBWOT_TRIGGER   (0x00000040)

#define GPTM3_GPTMTBMR_TBWOT_MASK        (0x00000001)
#define GPTM3_GPTMTBMR_TBWOT_INSTANT     (0x00000000)
#define GPTM3_GPTMTBMR_TBWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPTM3_GPTMTBMR_R_TBSNAPS_MASK      (0x00000080)
#define GPTM3_GPTMTBMR_R_TBSNAPS_BIT       (7)
#define GPTM3_GPTMTBMR_R_TBSNAPS_DIS       (0x00000000)
#define GPTM3_GPTMTBMR_R_TBSNAPS_EN        (0x00000080)

#define GPTM3_GPTMTBMR_TBSNAPS_MASK        (0x00000001)
#define GPTM3_GPTMTBMR_TBSNAPS_DIS         (0x00000000)
#define GPTM3_GPTMTBMR_TBSNAPS_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMTBMR_R_TBILD_MASK      (0x00000100)
#define GPTM3_GPTMTBMR_R_TBILD_BIT       (8)
#define GPTM3_GPTMTBMR_R_TBILD_NEXT      (0x00000000)
#define GPTM3_GPTMTBMR_R_TBILD_TIMEOUT   (0x00000100)

#define GPTM3_GPTMTBMR_TBILD_MASK        (0x00000001)
#define GPTM3_GPTMTBMR_TBILD_NEXT        (0x00000000)
#define GPTM3_GPTMTBMR_TBILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM3_GPTMTBMR_R_TBPWMIE_MASK      (0x00000200)
#define GPTM3_GPTMTBMR_R_TBPWMIE_BIT       (9)
#define GPTM3_GPTMTBMR_R_TBPWMIE_DIS       (0x00000000)
#define GPTM3_GPTMTBMR_R_TBPWMIE_EN        (0x00000200)

#define GPTM3_GPTMTBMR_TBPWMIE_MASK        (0x00000001)
#define GPTM3_GPTMTBMR_TBPWMIE_DIS         (0x00000000)
#define GPTM3_GPTMTBMR_TBPWMIE_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMTBMR_R_TBMRSU_MASK      (0x00000400)
#define GPTM3_GPTMTBMR_R_TBMRSU_BIT       (10)
#define GPTM3_GPTMTBMR_R_TBMRSU_NEXT      (0x00000000)
#define GPTM3_GPTMTBMR_R_TBMRSU_TIMEOUT   (0x00000400)

#define GPTM3_GPTMTBMR_TBMRSU_MASK        (0x00000001)
#define GPTM3_GPTMTBMR_TBMRSU_NEXT        (0x00000000)
#define GPTM3_GPTMTBMR_TBMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM3_GPTMTBMR_R_TBPLO_MASK      (0x00000800)
#define GPTM3_GPTMTBMR_R_TBPLO_BIT       (11)
#define GPTM3_GPTMTBMR_R_TBPLO_LOW       (0x00000000)
#define GPTM3_GPTMTBMR_R_TBPLO_HIGH      (0x00000800)

#define GPTM3_GPTMTBMR_TBPLO_MASK        (0x00000001)
#define GPTM3_GPTMTBMR_TBPLO_LOW         (0x00000000)
#define GPTM3_GPTMTBMR_TBPLO_HIGH        (0x00000001)
//--------

#define GPTM3_GPTMTBMR_TBCMR_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(2*4))))
#define GPTM3_GPTMTBMR_TBAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(3*4))))
#define GPTM3_GPTMTBMR_TBCDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(4*4))))
#define GPTM3_GPTMTBMR_TBMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(5*4))))
#define GPTM3_GPTMTBMR_TBWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(6*4))))
#define GPTM3_GPTMTBMR_TBSNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(7*4))))
#define GPTM3_GPTMTBMR_TBILD_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(8*4))))
#define GPTM3_GPTMTBMR_TBPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(9*4))))
#define GPTM3_GPTMTBMR_TBMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(10*4))))
#define GPTM3_GPTMTBMR_TBPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.4 GPTMCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMCTL            (((GPTMCTL_TypeDef*)(GPTM3_BASE + GPTM_GPTMCTL_OFFSET )))
#define GPTM3_GPTMCTL_R          (*((volatile uint32_t *)(GPTM3_BASE +GPTM_GPTMCTL_OFFSET)))


//--------
#define GPTM3_GPTMCTL_R_TAEN_MASK      (0x00000001)
#define GPTM3_GPTMCTL_R_TAEN_BIT       (0)
#define GPTM3_GPTMCTL_R_TAEN_DIS       (0x00000000)
#define GPTM3_GPTMCTL_R_TAEN_EN        (0x00000001)

#define GPTM3_GPTMCTL_TAEN_MASK        (0x00000001)
#define GPTM3_GPTMCTL_TAEN_DIS         (0x00000000)
#define GPTM3_GPTMCTL_TAEN_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMCTL_R_TASTALL_MASK      (0x00000002)
#define GPTM3_GPTMCTL_R_TASTALL_BIT       (1)
#define GPTM3_GPTMCTL_R_TASTALL_CONTINUE  (0x00000000)
#define GPTM3_GPTMCTL_R_TASTALL_FREEZE    (0x00000002)

#define GPTM3_GPTMCTL_TASTALL_MASK        (0x00000001)
#define GPTM3_GPTMCTL_TASTALL_CONTINUE    (0x00000000)
#define GPTM3_GPTMCTL_TASTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPTM3_GPTMCTL_R_TAEVENT_MASK      (0x0000000C)
#define GPTM3_GPTMCTL_R_TAEVENT_BIT       (2)
#define GPTM3_GPTMCTL_R_TAEVENT_POS       (0x00000000)
#define GPTM3_GPTMCTL_R_TAEVENT_NEG       (0x00000004)
#define GPTM3_GPTMCTL_R_TAEVENT_BOTH      (0x0000000C)

#define GPTM3_GPTMCTL_TAEVENT_MASK        (0x00000003)
#define GPTM3_GPTMCTL_TAEVENT_NEG         (0x00000000)
#define GPTM3_GPTMCTL_TAEVENT_POS         (0x00000001)
#define GPTM3_GPTMCTL_TAEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPTM3_GPTMCTL_R_RTCEN_MASK      (0x00000010)
#define GPTM3_GPTMCTL_R_RTCEN_BIT       (4)
#define GPTM3_GPTMCTL_R_RTCEN_CONTINUE  (0x00000000)
#define GPTM3_GPTMCTL_R_RTCEN_FREEZE    (0x00000010)

#define GPTM3_GPTMCTL_RTCEN_MASK        (0x00000001)
#define GPTM3_GPTMCTL_RTCEN_CONTINUE    (0x00000000)
#define GPTM3_GPTMCTL_RTCEN_FREEZE      (0x00000001)
//--------

//--------
#define GPTM3_GPTMCTL_R_TAOTE_MASK      (0x00000020)
#define GPTM3_GPTMCTL_R_TAOTE_BIT       (5)
#define GPTM3_GPTMCTL_R_TAOTE_DIS       (0x00000000)
#define GPTM3_GPTMCTL_R_TAOTE_EN        (0x00000020)

#define GPTM3_GPTMCTL_TAOTE_MASK        (0x00000001)
#define GPTM3_GPTMCTL_TAOTE_DIS         (0x00000000)
#define GPTM3_GPTMCTL_TAOTE_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMCTL_R_TAPWML_MASK      (0x00000040)
#define GPTM3_GPTMCTL_R_TAPWML_BIT       (6)
#define GPTM3_GPTMCTL_R_TAPWML_NA        (0x00000000)
#define GPTM3_GPTMCTL_R_TAPWML_INV       (0x00000040)

#define GPTM3_GPTMCTL_TAPWML_MASK        (0x00000001)
#define GPTM3_GPTMCTL_TAPWML_NA          (0x00000000)
#define GPTM3_GPTMCTL_TAPWML_INV         (0x00000001)
//--------



//--------
#define GPTM3_GPTMCTL_R_TBEN_MASK      (0x00000100)
#define GPTM3_GPTMCTL_R_TBEN_BIT       (8)
#define GPTM3_GPTMCTL_R_TBEN_DIS       (0x00000000)
#define GPTM3_GPTMCTL_R_TBEN_EN        (0x00000100)

#define GPTM3_GPTMCTL_TBEN_MASK        (0x00000001)
#define GPTM3_GPTMCTL_TBEN_DIS         (0x00000000)
#define GPTM3_GPTMCTL_TBEN_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMCTL_R_TBSTALL_MASK      (0x00000200)
#define GPTM3_GPTMCTL_R_TBSTALL_BIT       (9)
#define GPTM3_GPTMCTL_R_TBSTALL_CONTINUE  (0x00000000)
#define GPTM3_GPTMCTL_R_TBSTALL_FREEZE    (0x00000200)

#define GPTM3_GPTMCTL_TBSTALL_MASK        (0x00000001)
#define GPTM3_GPTMCTL_TBSTALL_CONTINUE    (0x00000000)
#define GPTM3_GPTMCTL_TBSTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPTM3_GPTMCTL_R_TBEVENT_MASK      (0x00000C00)
#define GPTM3_GPTMCTL_R_TBEVENT_BIT       (10)
#define GPTM3_GPTMCTL_R_TBEVENT_POS       (0x00000000)
#define GPTM3_GPTMCTL_R_TBEVENT_NEG       (0x00000400)
#define GPTM3_GPTMCTL_R_TBEVENT_BOTH      (0x00000C00)

#define GPTM3_GPTMCTL_TBEVENT_MASK        (0x00000003)
#define GPTM3_GPTMCTL_TBEVENT_NEG         (0x00000000)
#define GPTM3_GPTMCTL_TBEVENT_POS         (0x00000001)
#define GPTM3_GPTMCTL_TBEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPTM3_GPTMCTL_R_TBOTE_MASK      (0x00002000)
#define GPTM3_GPTMCTL_R_TBOTE_BIT       (13)
#define GPTM3_GPTMCTL_R_TBOTE_DIS       (0x00000000)
#define GPTM3_GPTMCTL_R_TBOTE_EN        (0x00002000)

#define GPTM3_GPTMCTL_TBOTE_MASK        (0x00000001)
#define GPTM3_GPTMCTL_TBOTE_DIS         (0x00000000)
#define GPTM3_GPTMCTL_TBOTE_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMCTL_R_TBPWML_MASK      (0x00004000)
#define GPTM3_GPTMCTL_R_TBPWML_BIT       (14)
#define GPTM3_GPTMCTL_R_TBPWML_NA        (0x00000000)
#define GPTM3_GPTMCTL_R_TBPWML_INV       (0x00004000)

#define GPTM3_GPTMCTL_TBPWML_MASK        (0x00000001)
#define GPTM3_GPTMCTL_TBPWML_NA          (0x00000000)
#define GPTM3_GPTMCTL_TBPWML_INV         (0x00000001)
//--------

#define GPTM3_GPTMCTL_TAEN_BB      (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(0*4))))
#define GPTM3_GPTMCTL_TASTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(1*4))))
#define GPTM3_GPTMCTL_RTCEN_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(4*4))))
#define GPTM3_GPTMCTL_TAOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(5*4))))
#define GPTM3_GPTMCTL_TAPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTMGPTMCTL_OFFSET)*32)+(6*4))))
#define GPTM3_GPTMCTL_TBEN_BB      (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(8*4))))
#define GPTM3_GPTMCTL_TBSTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(9*4))))
#define GPTM3_GPTMCTL_TBOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(13*4))))
#define GPTM3_GPTMCTL_TBPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(14*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.5 GPTMSYNC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMSYNC            (((GPTMSYNC_TypeDef*)(GPTM3_BASE + GPTM_GPTMSYNC_OFFSET )))
#define GPTM3_GPTMSYNC_R          (*((volatile uint32_t *)(GPTM3_BASE +GPTM_GPTMSYNC_OFFSET)))

//--------
#define GPTM3_GPTMSYNC_R_SYNCT0_MASK      (0x00000003)
#define GPTM3_GPTMSYNC_R_SYNCT0_BIT       (0)
#define GPTM3_GPTMSYNC_R_SYNCT0_NA        (0x00000000)
#define GPTM3_GPTMSYNC_R_SYNCT0_TA        (0x00000001)
#define GPTM3_GPTMSYNC_R_SYNCT0_TB        (0x00000002)
#define GPTM3_GPTMSYNC_R_SYNCT0_BOTH      (0x00000003)

#define GPTM3_GPTMSYNC_SYNCT0_MASK        (0x00000003)
#define GPTM3_GPTMSYNC_SYNCT0_NA          (0x00000000)
#define GPTM3_GPTMSYNC_SYNCT0_TA          (0x00000001)
#define GPTM3_GPTMSYNC_SYNCT0_TB          (0x00000002)
#define GPTM3_GPTMSYNC_SYNCT0_BOTH        (0x00000003)
//--------

//--------
#define GPTM3_GPTMSYNC_R_SYNCT1_MASK      (0x0000000C)
#define GPTM3_GPTMSYNC_R_SYNCT1_BIT       (2)
#define GPTM3_GPTMSYNC_R_SYNCT1_NA        (0x00000000)
#define GPTM3_GPTMSYNC_R_SYNCT1_TA        (0x00000004)
#define GPTM3_GPTMSYNC_R_SYNCT1_TB        (0x00000008)
#define GPTM3_GPTMSYNC_R_SYNCT1_BOTH      (0x0000000C)

#define GPTM3_GPTMSYNC_SYNCT1_MASK        (0x00000003)
#define GPTM3_GPTMSYNC_SYNCT1_NA          (0x00000000)
#define GPTM3_GPTMSYNC_SYNCT1_TA          (0x00000001)
#define GPTM3_GPTMSYNC_SYNCT1_TB          (0x00000002)
#define GPTM3_GPTMSYNC_SYNCT1_BOTH        (0x00000003)
//--------

//--------
#define GPTM3_GPTMSYNC_R_SYNCT2_MASK      (0x00000030)
#define GPTM3_GPTMSYNC_R_SYNCT2_BIT       (4)
#define GPTM3_GPTMSYNC_R_SYNCT2_NA        (0x00000000)
#define GPTM3_GPTMSYNC_R_SYNCT2_TA        (0x00000010)
#define GPTM3_GPTMSYNC_R_SYNCT2_TB        (0x00000020)
#define GPTM3_GPTMSYNC_R_SYNCT2_BOTH      (0x00000030)

#define GPTM3_GPTMSYNC_SYNCT2_MASK        (0x00000003)
#define GPTM3_GPTMSYNC_SYNCT2_NA          (0x00000000)
#define GPTM3_GPTMSYNC_SYNCT2_TA          (0x00000001)
#define GPTM3_GPTMSYNC_SYNCT2_TB          (0x00000002)
#define GPTM3_GPTMSYNC_SYNCT2_BOTH        (0x00000003)
//--------

//--------
#define GPTM3_GPTMSYNC_R_SYNCT3_MASK      (0x000000C0)
#define GPTM3_GPTMSYNC_R_SYNCT3_BIT       (6)
#define GPTM3_GPTMSYNC_R_SYNCT3_NA        (0x00000000)
#define GPTM3_GPTMSYNC_R_SYNCT3_TA        (0x00000040)
#define GPTM3_GPTMSYNC_R_SYNCT3_TB        (0x00000080)
#define GPTM3_GPTMSYNC_R_SYNCT3_BOTH      (0x000000C0)

#define GPTM3_GPTMSYNC_SYNCT3_MASK        (0x00000003)
#define GPTM3_GPTMSYNC_SYNCT3_NA          (0x00000000)
#define GPTM3_GPTMSYNC_SYNCT3_TA          (0x00000001)
#define GPTM3_GPTMSYNC_SYNCT3_TB          (0x00000002)
#define GPTM3_GPTMSYNC_SYNCT3_BOTH        (0x00000003)
//--------

//--------
#define GPTM3_GPTMSYNC_R_SYNCT4_MASK      (0x00000300)
#define GPTM3_GPTMSYNC_R_SYNCT4_BIT       (8)
#define GPTM3_GPTMSYNC_R_SYNCT4_NA        (0x00000000)
#define GPTM3_GPTMSYNC_R_SYNCT4_TA        (0x00000100)
#define GPTM3_GPTMSYNC_R_SYNCT4_TB        (0x00000200)
#define GPTM3_GPTMSYNC_R_SYNCT4_BOTH      (0x00000300)

#define GPTM3_GPTMSYNC_SYNCT4_MASK        (0x00000003)
#define GPTM3_GPTMSYNC_SYNCT4_NA          (0x00000000)
#define GPTM3_GPTMSYNC_SYNCT4_TA          (0x00000001)
#define GPTM3_GPTMSYNC_SYNCT4_TB          (0x00000002)
#define GPTM3_GPTMSYNC_SYNCT4_BOTH        (0x00000003)
//--------

//--------
#define GPTM3_GPTMSYNC_R_SYNCT5_MASK      (0x00000C00)
#define GPTM3_GPTMSYNC_R_SYNCT5_BIT       (10)
#define GPTM3_GPTMSYNC_R_SYNCT5_NA        (0x00000000)
#define GPTM3_GPTMSYNC_R_SYNCT5_TA        (0x00000400)
#define GPTM3_GPTMSYNC_R_SYNCT5_TB        (0x00000800)
#define GPTM3_GPTMSYNC_R_SYNCT5_BOTH      (0x00000C00)

#define GPTM3_GPTMSYNC_SYNCT5_MASK        (0x00000003)
#define GPTM3_GPTMSYNC_SYNCT5_NA          (0x00000000)
#define GPTM3_GPTMSYNC_SYNCT5_TA          (0x00000001)
#define GPTM3_GPTMSYNC_SYNCT5_TB          (0x00000002)
#define GPTM3_GPTMSYNC_SYNCT5_BOTH        (0x00000003)
//--------

//--------
#define GPTM3_GPTMSYNC_R_SYNCWT0_MASK      (0x00003000)
#define GPTM3_GPTMSYNC_R_SYNCWT0_BIT       (12)
#define GPTM3_GPTMSYNC_R_SYNCWT0_NA        (0x00000000)
#define GPTM3_GPTMSYNC_R_SYNCWT0_TA        (0x00001000)
#define GPTM3_GPTMSYNC_R_SYNCWT0_TB        (0x00002000)
#define GPTM3_GPTMSYNC_R_SYNCWT0_BOTH      (0x00003000)

#define GPTM3_GPTMSYNC_SYNCWT0_MASK        (0x00000003)
#define GPTM3_GPTMSYNC_SYNCWT0_NA          (0x00000000)
#define GPTM3_GPTMSYNC_SYNCWT0_TA          (0x00000001)
#define GPTM3_GPTMSYNC_SYNCWT0_TB          (0x00000002)
#define GPTM3_GPTMSYNC_SYNCWT0_BOTH        (0x00000003)
//--------

//--------
#define GPTM3_GPTMSYNC_R_SYNCWT1_MASK      (0x0000C000)
#define GPTM3_GPTMSYNC_R_SYNCWT1_BIT       (14)
#define GPTM3_GPTMSYNC_R_SYNCWT1_NA        (0x00000000)
#define GPTM3_GPTMSYNC_R_SYNCWT1_TA        (0x00004000)
#define GPTM3_GPTMSYNC_R_SYNCWT1_TB        (0x00008000)
#define GPTM3_GPTMSYNC_R_SYNCWT1_BOTH      (0x0000C000)

#define GPTM3_GPTMSYNC_SYNCWT1_MASK        (0x00000003)
#define GPTM3_GPTMSYNC_SYNCWT1_NA          (0x00000000)
#define GPTM3_GPTMSYNC_SYNCWT1_TA          (0x00000001)
#define GPTM3_GPTMSYNC_SYNCWT1_TB          (0x00000002)
#define GPTM3_GPTMSYNC_SYNCWT1_BOTH        (0x00000003)
//--------

//--------
#define GPTM3_GPTMSYNC_R_SYNCWT2_MASK      (0x00030000)
#define GPTM3_GPTMSYNC_R_SYNCWT2_BIT       (16)
#define GPTM3_GPTMSYNC_R_SYNCWT2_NA        (0x00000000)
#define GPTM3_GPTMSYNC_R_SYNCWT2_TA        (0x00010000)
#define GPTM3_GPTMSYNC_R_SYNCWT2_TB        (0x00020000)
#define GPTM3_GPTMSYNC_R_SYNCWT2_BOTH      (0x00030000)

#define GPTM3_GPTMSYNC_SYNCWT2_MASK        (0x00000003)
#define GPTM3_GPTMSYNC_SYNCWT2_NA          (0x00000000)
#define GPTM3_GPTMSYNC_SYNCWT2_TA          (0x00000001)
#define GPTM3_GPTMSYNC_SYNCWT2_TB          (0x00000002)
#define GPTM3_GPTMSYNC_SYNCWT2_BOTH        (0x00000003)
//--------

//--------
#define GPTM3_GPTMSYNC_R_SYNCWT3_MASK      (0x000C0000)
#define GPTM3_GPTMSYNC_R_SYNCWT3_BIT       (18)
#define GPTM3_GPTMSYNC_R_SYNCWT3_NA        (0x00000000)
#define GPTM3_GPTMSYNC_R_SYNCWT3_TA        (0x00040000)
#define GPTM3_GPTMSYNC_R_SYNCWT3_TB        (0x00080000)
#define GPTM3_GPTMSYNC_R_SYNCWT3_BOTH      (0x000C0000)

#define GPTM3_GPTMSYNC_SYNCWT3_MASK        (0x00000003)
#define GPTM3_GPTMSYNC_SYNCWT3_NA          (0x00000000)
#define GPTM3_GPTMSYNC_SYNCWT3_TA          (0x00000001)
#define GPTM3_GPTMSYNC_SYNCWT3_TB          (0x00000002)
#define GPTM3_GPTMSYNC_SYNCWT3_BOTH        (0x00000003)
//--------

//--------
#define GPTM3_GPTMSYNC_R_SYNCWT4_MASK      (0x0030000)
#define GPTM3_GPTMSYNC_R_SYNCWT4_BIT       (20)
#define GPTM3_GPTMSYNC_R_SYNCWT4_NA        (0x00000000)
#define GPTM3_GPTMSYNC_R_SYNCWT4_TA        (0x00100000)
#define GPTM3_GPTMSYNC_R_SYNCWT4_TB        (0x00200000)
#define GPTM3_GPTMSYNC_R_SYNCWT4_BOTH      (0x00300000)

#define GPTM3_GPTMSYNC_SYNCWT4_MASK        (0x00000003)
#define GPTM3_GPTMSYNC_SYNCWT4_NA          (0x00000000)
#define GPTM3_GPTMSYNC_SYNCWT4_TA          (0x00000001)
#define GPTM3_GPTMSYNC_SYNCWT4_TB          (0x00000002)
#define GPTM3_GPTMSYNC_SYNCWT4_BOTH        (0x00000003)
//--------

//--------
#define GPTM3_GPTMSYNC_R_SYNCWT5_MASK      (0x00C00000)
#define GPTM3_GPTMSYNC_R_SYNCWT5_BIT       (22)
#define GPTM3_GPTMSYNC_R_SYNCWT5_NA        (0x00000000)
#define GPTM3_GPTMSYNC_R_SYNCWT5_TA        (0x00400000)
#define GPTM3_GPTMSYNC_R_SYNCWT5_TB        (0x00800000)
#define GPTM3_GPTMSYNC_R_SYNCWT5_BOTH      (0x00C00000)

#define GPTM3_GPTMSYNC_SYNCWT5_MASK        (0x00000003)
#define GPTM3_GPTMSYNC_SYNCWT5_NA          (0x00000000)
#define GPTM3_GPTMSYNC_SYNCWT5_TA          (0x00000001)
#define GPTM3_GPTMSYNC_SYNCWT5_TB          (0x00000002)
#define GPTM3_GPTMSYNC_SYNCWT5_BOTH        (0x00000003)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.6 GPTMIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMIMR            (((GPTMIMR_TypeDef*)(GPTM3_BASE + GPTM_GPTMIMR_OFFSET )))
#define GPTM3_GPTMIMR_R          (*((volatile  uint32_t *)(GPTM3_BASE +GPTM_GPTMIMR_OFFSET)))

//--------
#define GPTM3_GPTMIMR_R_TATOIM_MASK      (0x00000001)
#define GPTM3_GPTMIMR_R_TATOIM_BIT       (0)
#define GPTM3_GPTMIMR_R_TATOIM_DIS       (0x00000000)
#define GPTM3_GPTMIMR_R_TATOIM_EN        (0x00000001)

#define GPTM3_GPTMIMR_TATOIM_MASK        (0x00000001)
#define GPTM3_GPTMIMR_TATOIM_DIS         (0x00000000)
#define GPTM3_GPTMIMR_TATOIM_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMIMR_R_CAMIM_MASK      (0x00000002)
#define GPTM3_GPTMIMR_R_CAMIM_BIT       (1)
#define GPTM3_GPTMIMR_R_CAMIM_DIS       (0x00000000)
#define GPTM3_GPTMIMR_R_CAMIM_EN        (0x00000002)

#define GPTM3_GPTMIMR_CAMIM_MASK        (0x00000001)
#define GPTM3_GPTMIMR_CAMIM_DIS         (0x00000000)
#define GPTM3_GPTMIMR_CAMIM_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMIMR_R_CAEIM_MASK      (0x00000004)
#define GPTM3_GPTMIMR_R_CAEIM_BIT       (2)
#define GPTM3_GPTMIMR_R_CAEIM_DIS       (0x00000000)
#define GPTM3_GPTMIMR_R_CAEIM_EN        (0x00000004)

#define GPTM3_GPTMIMR_CAEIM_MASK        (0x00000001)
#define GPTM3_GPTMIMR_CAEIM_DIS         (0x00000000)
#define GPTM3_GPTMIMR_CAEIM_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMIMR_R_RTCIM_MASK      (0x00000008)
#define GPTM3_GPTMIMR_R_RTCIM_BIT       (3)
#define GPTM3_GPTMIMR_R_RTCIM_DIS       (0x00000000)
#define GPTM3_GPTMIMR_R_RTCIM_EN        (0x00000008)

#define GPTM3_GPTMIMR_RTCIM_MASK        (0x00000001)
#define GPTM3_GPTMIMR_RTCIM_DIS         (0x00000000)
#define GPTM3_GPTMIMR_RTCIM_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMIMR_R_TAMIM_MASK      (0x00000010)
#define GPTM3_GPTMIMR_R_TAMIM_BIT       (4)
#define GPTM3_GPTMIMR_R_TAMIM_DIS       (0x00000000)
#define GPTM3_GPTMIMR_R_TAMIM_EN        (0x00000010)

#define GPTM3_GPTMIMR_TAMIM_MASK        (0x00000001)
#define GPTM3_GPTMIMR_TAMIM_DIS         (0x00000000)
#define GPTM3_GPTMIMR_TAMIM_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMIMR_R_TBTOIM_MASK      (0x00000100)
#define GPTM3_GPTMIMR_R_TBTOIM_BIT       (8)
#define GPTM3_GPTMIMR_R_TBTOIM_DIS       (0x00000000)
#define GPTM3_GPTMIMR_R_TBTOIM_EN        (0x00000100)

#define GPTM3_GPTMIMR_TBTOIM_MASK        (0x00000001)
#define GPTM3_GPTMIMR_TBTOIM_DIS         (0x00000000)
#define GPTM3_GPTMIMR_TBTOIM_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMIMR_R_CBMIM_MASK      (0x00000200)
#define GPTM3_GPTMIMR_R_CBMIM_BIT       (9)
#define GPTM3_GPTMIMR_R_CBMIM_DIS       (0x00000000)
#define GPTM3_GPTMIMR_R_CBMIM_EN        (0x00000200)

#define GPTM3_GPTMIMR_CBMIM_MASK        (0x00000001)
#define GPTM3_GPTMIMR_CBMIM_DIS         (0x00000000)
#define GPTM3_GPTMIMR_CBMIM_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMIMR_R_CBEIM_MASK      (0x00000400)
#define GPTM3_GPTMIMR_R_CBEIM_BIT       (10)
#define GPTM3_GPTMIMR_R_CBEIM_DIS       (0x00000000)
#define GPTM3_GPTMIMR_R_CBEIM_EN        (0x00000400)

#define GPTM3_GPTMIMR_CBEIM_MASK        (0x00000001)
#define GPTM3_GPTMIMR_CBEIM_DIS         (0x00000000)
#define GPTM3_GPTMIMR_CBEIM_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMIMR_R_TBMIM_MASK      (0x00000800)
#define GPTM3_GPTMIMR_R_TBMIM_BIT       (11)
#define GPTM3_GPTMIMR_R_TBMIM_DIS       (0x00000000)
#define GPTM3_GPTMIMR_R_TBMIM_EN        (0x00000800)

#define GPTM3_GPTMIMR_TBMIM_MASK        (0x00000001)
#define GPTM3_GPTMIMR_TBMIM_DIS         (0x00000000)
#define GPTM3_GPTMIMR_TBMIM_EN          (0x00000001)
//--------

//--------
#define GPTM3_GPTMIMR_R_WUEIM_MASK      (0x00010000)
#define GPTM3_GPTMIMR_R_WUEIM_BIT       (16)
#define GPTM3_GPTMIMR_R_WUEIM_DIS       (0x00000000)
#define GPTM3_GPTMIMR_R_WUEIM_EN        (0x00010000)

#define GPTM3_GPTMIMR_WUEIM_MASK        (0x00000001)
#define GPTM3_GPTMIMR_WUEIM_DIS         (0x00000000)
#define GPTM3_GPTMIMR_WUEIM_EN          (0x00000001)
//--------

#define GPTM3_GPTMIMR_TATOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(0*4))))
#define GPTM3_GPTMIMR_CAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(1*4))))
#define GPTM3_GPTMIMR_CAEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(2*4))))
#define GPTM3_GPTMIMR_RTCIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(3*4))))
#define GPTM3_GPTMIMR_TAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(4*4))))
#define GPTM3_GPTMIMR_TBTOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(8*4))))
#define GPTM3_GPTMIMR_CBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(9*4))))
#define GPTM3_GPTMIMR_CBEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(10*4))))
#define GPTM3_GPTMIMR_TBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(11*4))))
#define GPTM3_GPTMIMR_WUEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(16*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.7 GPTMRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMRIS            (((GPTMRIS_TypeDef*)(GPTM3_BASE + GPTM_GPTMRIS_OFFSET )))
#define GPTM3_GPTMRIS_R          (*((volatile const uint32_t *)(GPTM3_BASE +GPTM_GPTMRIS_OFFSET)))



//--------
#define GPTM3_GPTMRIS_R_TATORIS_MASK      (0x00000001)
#define GPTM3_GPTMRIS_R_TATORIS_BIT       (0)
#define GPTM3_GPTMRIS_R_TATORIS_NOACTIVE  (0x00000000)
#define GPTM3_GPTMRIS_R_TATORIS_ACTIVE    (0x00000001)

#define GPTM3_GPTMRIS_TATORIS_MASK        (0x00000001)
#define GPTM3_GPTMRIS_TATORIS_NOACTIVE    (0x00000000)
#define GPTM3_GPTMRIS_TATORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM3_GPTMRIS_R_CAMRIS_MASK      (0x00000002)
#define GPTM3_GPTMRIS_R_CAMRIS_BIT       (1)
#define GPTM3_GPTMRIS_R_CAMRIS_NOACTIVE  (0x00000000)
#define GPTM3_GPTMRIS_R_CAMRIS_ACTIVE    (0x00000002)

#define GPTM3_GPTMRIS_CAMRIS_MASK        (0x00000001)
#define GPTM3_GPTMRIS_CAMRIS_NOACTIVE    (0x00000000)
#define GPTM3_GPTMRIS_CAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM3_GPTMRIS_R_CAERIS_MASK      (0x00000004)
#define GPTM3_GPTMRIS_R_CAERIS_BIT       (2)
#define GPTM3_GPTMRIS_R_CAERIS_NOACTIVE  (0x00000000)
#define GPTM3_GPTMRIS_R_CAERIS_ACTIVE    (0x00000004)

#define GPTM3_GPTMRIS_CAERIS_MASK        (0x00000001)
#define GPTM3_GPTMRIS_CAERIS_NOACTIVE    (0x00000000)
#define GPTM3_GPTMRIS_CAERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM3_GPTMRIS_R_RTCRIS_MASK      (0x00000008)
#define GPTM3_GPTMRIS_R_RTCRIS_BIT       (3)
#define GPTM3_GPTMRIS_R_RTCRIS_NOACTIVE  (0x00000000)
#define GPTM3_GPTMRIS_R_RTCRIS_ACTIVE    (0x00000008)

#define GPTM3_GPTMRIS_RTCRIS_MASK        (0x00000001)
#define GPTM3_GPTMRIS_RTCRIS_NOACTIVE    (0x00000000)
#define GPTM3_GPTMRIS_RTCRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM3_GPTMRIS_R_TAMRIS_MASK      (0x00000010)
#define GPTM3_GPTMRIS_R_TAMRIS_BIT       (4)
#define GPTM3_GPTMRIS_R_TAMRIS_NOACTIVE  (0x00000000)
#define GPTM3_GPTMRIS_R_TAMRIS_ACTIVE    (0x00000010)

#define GPTM3_GPTMRIS_TAMRIS_MASK        (0x00000001)
#define GPTM3_GPTMRIS_TAMRIS_NOACTIVE    (0x00000000)
#define GPTM3_GPTMRIS_TAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM3_GPTMRIS_R_TBTORIS_MASK      (0x00000100)
#define GPTM3_GPTMRIS_R_TBTORIS_BIT       (8)
#define GPTM3_GPTMRIS_R_TBTORIS_NOACTIVE  (0x00000000)
#define GPTM3_GPTMRIS_R_TBTORIS_ACTIVE    (0x00000100)

#define GPTM3_GPTMRIS_TBTORIS_MASK        (0x00000001)
#define GPTM3_GPTMRIS_TBTORIS_NOACTIVE    (0x00000000)
#define GPTM3_GPTMRIS_TBTORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM3_GPTMRIS_R_CBMRIS_MASK      (0x00000200)
#define GPTM3_GPTMRIS_R_CBMRIS_BIT       (9)
#define GPTM3_GPTMRIS_R_CBMRIS_NOACTIVE  (0x00000000)
#define GPTM3_GPTMRIS_R_CBMRIS_ACTIVE    (0x00000200)

#define GPTM3_GPTMRIS_CBMRIS_MASK        (0x00000001)
#define GPTM3_GPTMRIS_CBMRIS_NOACTIVE    (0x00000000)
#define GPTM3_GPTMRIS_CBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM3_GPTMRIS_R_CBERIS_MASK      (0x00000400)
#define GPTM3_GPTMRIS_R_CBERIS_BIT       (10)
#define GPTM3_GPTMRIS_R_CBERIS_NOACTIVE  (0x00000000)
#define GPTM3_GPTMRIS_R_CBERIS_ACTIVE    (0x00000400)

#define GPTM3_GPTMRIS_CBERIS_MASK        (0x00000001)
#define GPTM3_GPTMRIS_CBERIS_NOACTIVE    (0x00000000)
#define GPTM3_GPTMRIS_CBERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM3_GPTMRIS_R_TBMRIS_MASK      (0x00000800)
#define GPTM3_GPTMRIS_R_TBMRIS_BIT       (11)
#define GPTM3_GPTMRIS_R_TBMRIS_NOACTIVE  (0x00000000)
#define GPTM3_GPTMRIS_R_TBMRIS_ACTIVE    (0x00000800)

#define GPTM3_GPTMRIS_TBMRIS_MASK        (0x00000001)
#define GPTM3_GPTMRIS_TBMRIS_NOACTIVE    (0x00000000)
#define GPTM3_GPTMRIS_TBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM3_GPTMRIS_R_WUERIS_MASK      (0x00010000)
#define GPTM3_GPTMRIS_R_WUERIS_BIT       (16)
#define GPTM3_GPTMRIS_R_WUERIS_NOACTIVE  (0x00000000)
#define GPTM3_GPTMRIS_R_WUERIS_ACTIVE    (0x00010000)

#define GPTM3_GPTMRIS_WUERIS_MASK        (0x00000001)
#define GPTM3_GPTMRIS_WUERIS_NOACTIVE    (0x00000000)
#define GPTM3_GPTMRIS_WUERIS_ACTIVE      (0x00000001)
//--------

#define GPTM3_GPTMRIS_TATORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(0*4))))
#define GPTM3_GPTMRIS_CAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(1*4))))
#define GPTM3_GPTMRIS_CAERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(2*4))))
#define GPTM3_GPTMRIS_RTCRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(3*4))))
#define GPTM3_GPTMRIS_TAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(4*4))))
#define GPTM3_GPTMRIS_TBTORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(8*4))))
#define GPTM3_GPTMRIS_CBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(9*4))))
#define GPTM3_GPTMRIS_CBERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(10*4))))
#define GPTM3_GPTMRIS_TBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(11*4))))
#define GPTM3_GPTMRIS_WUERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(16*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.8 GPTMMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMMIS            (((GPTMMIS_TypeDef*)(GPTM3_BASE + GPTM_GPTMMIS_OFFSET )))
#define GPTM3_GPTMMIS_R          (*((volatile const uint32_t *)(GPTM3_BASE +GPTM_GPTMMIS_OFFSET)))




//--------
#define GPTM3_GPTMMIS_R_TATOMIS_MASK      (0x00000001)
#define GPTM3_GPTMMIS_R_TATOMIS_BIT       (0)
#define GPTM3_GPTMMIS_R_TATOMIS_NOOCCUR  (0x00000000)
#define GPTM3_GPTMMIS_R_TATOMIS_OCCUR    (0x00000001)

#define GPTM3_GPTMMIS_TATOMIS_MASK        (0x00000001)
#define GPTM3_GPTMMIS_TATOMIS_NOOCCUR    (0x00000000)
#define GPTM3_GPTMMIS_TATOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM3_GPTMMIS_R_CAMMIS_MASK      (0x00000002)
#define GPTM3_GPTMMIS_R_CAMMIS_BIT       (1)
#define GPTM3_GPTMMIS_R_CAMMIS_NOOCCUR  (0x00000000)
#define GPTM3_GPTMMIS_R_CAMMIS_OCCUR    (0x00000002)

#define GPTM3_GPTMMIS_CAMMIS_MASK        (0x00000001)
#define GPTM3_GPTMMIS_CAMMIS_NOOCCUR    (0x00000000)
#define GPTM3_GPTMMIS_CAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM3_GPTMMIS_R_CAEMIS_MASK      (0x00000004)
#define GPTM3_GPTMMIS_R_CAEMIS_BIT       (2)
#define GPTM3_GPTMMIS_R_CAEMIS_NOOCCUR  (0x00000000)
#define GPTM3_GPTMMIS_R_CAEMIS_OCCUR    (0x00000004)

#define GPTM3_GPTMMIS_CAEMIS_MASK        (0x00000001)
#define GPTM3_GPTMMIS_CAEMIS_NOOCCUR    (0x00000000)
#define GPTM3_GPTMMIS_CAEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM3_GPTMMIS_R_RTCMIS_MASK      (0x00000008)
#define GPTM3_GPTMMIS_R_RTCMIS_BIT       (3)
#define GPTM3_GPTMMIS_R_RTCMIS_NOOCCUR  (0x00000000)
#define GPTM3_GPTMMIS_R_RTCMIS_OCCUR    (0x00000008)

#define GPTM3_GPTMMIS_RTCMIS_MASK        (0x00000001)
#define GPTM3_GPTMMIS_RTCMIS_NOOCCUR    (0x00000000)
#define GPTM3_GPTMMIS_RTCMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM3_GPTMMIS_R_TAMMIS_MASK      (0x00000010)
#define GPTM3_GPTMMIS_R_TAMMIS_BIT       (4)
#define GPTM3_GPTMMIS_R_TAMMIS_NOOCCUR  (0x00000000)
#define GPTM3_GPTMMIS_R_TAMMIS_OCCUR    (0x00000010)

#define GPTM3_GPTMMIS_TAMMIS_MASK        (0x00000001)
#define GPTM3_GPTMMIS_TAMMIS_NOOCCUR    (0x00000000)
#define GPTM3_GPTMMIS_TAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM3_GPTMMIS_R_TBTOMIS_MASK      (0x00000100)
#define GPTM3_GPTMMIS_R_TBTOMIS_BIT       (8)
#define GPTM3_GPTMMIS_R_TBTOMIS_NOOCCUR  (0x00000000)
#define GPTM3_GPTMMIS_R_TBTOMIS_OCCUR    (0x00000100)

#define GPTM3_GPTMMIS_TBTOMIS_MASK        (0x00000001)
#define GPTM3_GPTMMIS_TBTOMIS_NOOCCUR    (0x00000000)
#define GPTM3_GPTMMIS_TBTOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM3_GPTMMIS_R_CBMMIS_MASK      (0x00000200)
#define GPTM3_GPTMMIS_R_CBMMIS_BIT       (9)
#define GPTM3_GPTMMIS_R_CBMMIS_NOOCCUR  (0x00000000)
#define GPTM3_GPTMMIS_R_CBMMIS_OCCUR    (0x00000200)

#define GPTM3_GPTMMIS_CBMMIS_MASK        (0x00000001)
#define GPTM3_GPTMMIS_CBMMIS_NOOCCUR    (0x00000000)
#define GPTM3_GPTMMIS_CBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM3_GPTMMIS_R_CBEMIS_MASK      (0x00000400)
#define GPTM3_GPTMMIS_R_CBEMIS_BIT       (10)
#define GPTM3_GPTMMIS_R_CBEMIS_NOOCCUR  (0x00000000)
#define GPTM3_GPTMMIS_R_CBEMIS_OCCUR    (0x00000400)

#define GPTM3_GPTMMIS_CBEMIS_MASK        (0x00000001)
#define GPTM3_GPTMMIS_CBEMIS_NOOCCUR    (0x00000000)
#define GPTM3_GPTMMIS_CBEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM3_GPTMMIS_R_TBMMIS_MASK      (0x00000800)
#define GPTM3_GPTMMIS_R_TBMMIS_BIT       (11)
#define GPTM3_GPTMMIS_R_TBMMIS_NOOCCUR  (0x00000000)
#define GPTM3_GPTMMIS_R_TBMMIS_OCCUR    (0x00000800)

#define GPTM3_GPTMMIS_TBMMIS_MASK        (0x00000001)
#define GPTM3_GPTMMIS_TBMMIS_NOOCCUR    (0x00000000)
#define GPTM3_GPTMMIS_TBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM3_GPTMMIS_R_WUEMIS_MASK      (0x00010000)
#define GPTM3_GPTMMIS_R_WUEMIS_BIT       (16)
#define GPTM3_GPTMMIS_R_WUEMIS_NOOCCUR  (0x00000000)
#define GPTM3_GPTMMIS_R_WUEMIS_OCCUR    (0x00010000)

#define GPTM3_GPTMMIS_WUEMIS_MASK        (0x00000001)
#define GPTM3_GPTMMIS_WUEMIS_NOOCCUR    (0x00000000)
#define GPTM3_GPTMMIS_WUEMIS_OCCUR      (0x00000001)
//--------

#define GPTM3_GPTMMIS_TATOMIS           (0x00000001)
#define GPTM3_GPTMMIS_CAMMIS            (0x00000002)
#define GPTM3_GPTMMIS_CAEMIS            (0x00000004)
#define GPTM3_GPTMMIS_RTCMIS            (0x00000008)
#define GPTM3_GPTMMIS_TAMMIS            (0x00000010)
#define GPTM3_GPTMMIS_TBTOMIS           (0x00000100)
#define GPTM3_GPTMMIS_CBMMIS            (0x00000200)
#define GPTM3_GPTMMIS_CBEMIS            (0x00000400)
#define GPTM3_GPTMMIS_TBMMIS            (0x00000800)
#define GPTM3_GPTMMIS_WUEMIS            (0x00010000)


#define GPTM3_GPTMMIS_TATOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(0*4))))
#define GPTM3_GPTMMIS_CAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(1*4))))
#define GPTM3_GPTMMIS_CAEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(2*4))))
#define GPTM3_GPTMMIS_RTCMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(3*4))))
#define GPTM3_GPTMMIS_TAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(4*4))))
#define GPTM3_GPTMMIS_TBTOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(8*4))))
#define GPTM3_GPTMMIS_CBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(9*4))))
#define GPTM3_GPTMMIS_CBEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(10*4))))
#define GPTM3_GPTMMIS_TBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(11*4))))
#define GPTM3_GPTMMIS_WUEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.9 GPTMICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMICR            (((GPTMICR_TypeDef*)(GPTM3_BASE + GPTM_GPTMICR_OFFSET )))
#define GPTM3_GPTMICR_R          (*((volatile uint32_t *)(GPTM3_BASE +GPTM_GPTMICR_OFFSET)))



//--------
#define GPTM3_GPTMICR_R_TATOCINT_MASK      (0x00000001)
#define GPTM3_GPTMICR_R_TATOCINT_BIT       (0)
#define GPTM3_GPTMICR_R_TATOCINT_CLEAR     (0x00000001)

#define GPTM3_GPTMICR_TATOCINT_MASK        (0x00000001)
#define GPTM3_GPTMICR_TATOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM3_GPTMICR_R_CAMCINT_MASK      (0x00000002)
#define GPTM3_GPTMICR_R_CAMCINT_BIT       (1)
#define GPTM3_GPTMICR_R_CAMCINT_CLEAR     (0x00000002)

#define GPTM3_GPTMICR_CAMCINT_MASK        (0x00000001)
#define GPTM3_GPTMICR_CAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM3_GPTMICR_R_CAECINT_MASK      (0x00000004)
#define GPTM3_GPTMICR_R_CAECINT_BIT       (2)
#define GPTM3_GPTMICR_R_CAECINT_CLEAR     (0x00000004)

#define GPTM3_GPTMICR_CAECINT_MASK        (0x00000001)
#define GPTM3_GPTMICR_CAECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM3_GPTMICR_R_RTCCINT_MASK      (0x00000008)
#define GPTM3_GPTMICR_R_RTCCINT_BIT       (3)
#define GPTM3_GPTMICR_R_RTCCINT_CLEAR     (0x00000008)

#define GPTM3_GPTMICR_RTCCINT_MASK        (0x00000001)
#define GPTM3_GPTMICR_RTCCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM3_GPTMICR_R_TAMCINT_MASK      (0x00000010)
#define GPTM3_GPTMICR_R_TAMCINT_BIT       (4)
#define GPTM3_GPTMICR_R_TAMCINT_CLEAR     (0x00000010)

#define GPTM3_GPTMICR_TAMCINT_MASK        (0x00000001)
#define GPTM3_GPTMICR_TAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM3_GPTMICR_R_TBTOCINT_MASK      (0x00000100)
#define GPTM3_GPTMICR_R_TBTOCINT_BIT       (8)
#define GPTM3_GPTMICR_R_TBTOCINT_CLEAR     (0x00000100)

#define GPTM3_GPTMICR_TBTOCINT_MASK        (0x00000001)
#define GPTM3_GPTMICR_TBTOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM3_GPTMICR_R_CBMCINT_MASK      (0x00000200)
#define GPTM3_GPTMICR_R_CBMCINT_BIT       (9)
#define GPTM3_GPTMICR_R_CBMCINT_CLEAR     (0x00000200)

#define GPTM3_GPTMICR_CBMCINT_MASK        (0x00000001)
#define GPTM3_GPTMICR_CBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM3_GPTMICR_R_CBECINT_MASK      (0x00000400)
#define GPTM3_GPTMICR_R_CBECINT_BIT       (10)
#define GPTM3_GPTMICR_R_CBECINT_CLEAR     (0x00000400)

#define GPTM3_GPTMICR_CBECINT_MASK        (0x00000001)
#define GPTM3_GPTMICR_CBECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM3_GPTMICR_R_TBMCINT_MASK      (0x00000800)
#define GPTM3_GPTMICR_R_TBMCINT_BIT       (11)
#define GPTM3_GPTMICR_R_TBMCINT_CLEAR     (0x00000800)

#define GPTM3_GPTMICR_TBMCINT_MASK        (0x00000001)
#define GPTM3_GPTMICR_TBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM3_GPTMICR_R_WUECINT_MASK      (0x00010000)
#define GPTM3_GPTMICR_R_WUECINT_BIT       (16)
#define GPTM3_GPTMICR_R_WUECINT_CLEAR     (0x00010000)

#define GPTM3_GPTMICR_WUECINT_MASK        (0x00000001)
#define GPTM3_GPTMICR_WUECINT_CLEAR       (0x00000001)
//--------


#define GPTM3_GPTMICR_TATOCINT           (0x00000001)
#define GPTM3_GPTMICR_CAMCINT            (0x00000002)
#define GPTM3_GPTMICR_CAECINT            (0x00000004)
#define GPTM3_GPTMICR_RTCCINT            (0x00000008)
#define GPTM3_GPTMICR_TAMCINT            (0x00000010)
#define GPTM3_GPTMICR_TBTOCINT           (0x00000100)
#define GPTM3_GPTMICR_CBMCINT            (0x00000200)
#define GPTM3_GPTMICR_CBECINT            (0x00000400)
#define GPTM3_GPTMICR_TBMCINT            (0x00000800)
#define GPTM3_GPTMICR_WUECINT            (0x00010000)


#define GPTM3_GPTMICR_TATOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(0*4))))
#define GPTM3_GPTMICR_CAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(1*4))))
#define GPTM3_GPTMICR_CAECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(2*4))))
#define GPTM3_GPTMICR_RTCCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(3*4))))
#define GPTM3_GPTMICR_TAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(4*4))))
#define GPTM3_GPTMICR_TBTOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(8*4))))
#define GPTM3_GPTMICR_CBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(9*4))))
#define GPTM3_GPTMICR_CBECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(10*4))))
#define GPTM3_GPTMICR_TBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(11*4))))
#define GPTM3_GPTMICR_WUECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.10 GPTMTAILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMTAILR            (((GPTMTAILR_TypeDef*)(GPTM3_BASE + GPTM_GPTMTAILR_OFFSET )))
#define GPTM3_GPTMTAILR_R          (*((volatile uint32_t *)(GPTM3_BASE +GPTM_GPTMTAILR_OFFSET)))

//--------
#define GPTM3_GPTMTAILR_R_TAILR_MASK      (0xFFFFFFFF)
#define GPTM3_GPTMTAILR_R_TAILR_BIT       (0)

#define GPTM3_GPTMTAILR_TAILR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.11 GPTMTBILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMTBILR            (((GPTMTBILR_TypeDef*)(GPTM3_BASE + GPTM_GPTMTBILR_OFFSET )))
#define GPTM3_GPTMTBILR_R          (*((volatile uint32_t *)(GPTM3_BASE +GPTM_GPTMTBILR_OFFSET)))

//--------
#define GPTM3_GPTMTBILR_R_TBILR_MASK      (0xFFFFFFFF)
#define GPTM3_GPTMTBILR_R_TBILR_BIT       (0)

#define GPTM3_GPTMTBILR_TBILR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.12 GPTMTAMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMTAMATCHR            (((GPTMTAMATCHR_TypeDef*)(GPTM3_BASE + GPTM_GPTMTAMATCHR_OFFSET )))
#define GPTM3_GPTMTAMATCHR_R          (*((volatile uint32_t *)(GPTM3_BASE +GPTM_GPTMTAMATCHR_OFFSET)))


//--------
#define GPTM3_GPTMTAMATCHR_R_TAMR_MASK      (0xFFFFFFFF)
#define GPTM3_GPTMTAMATCHR_R_TAMR_BIT       (0)

#define GPTM3_GPTMTAMATCHR_TAMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.13 GPTMTBMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMTBMATCHR            (((GPTMTBMATCHR_TypeDef*)(GPTM3_BASE + GPTM_GPTMTBMATCHR_OFFSET )))
#define GPTM3_GPTMTBMATCHR_R          (*((volatile uint32_t *)(GPTM3_BASE +GPTM_GPTMTBMATCHR_OFFSET)))


//--------
#define GPTM3_GPTMTBMATCHR_R_TBMR_MASK      (0xFFFFFFFF)
#define GPTM3_GPTMTBMATCHR_R_TBMR_BIT       (0)

#define GPTM3_GPTMTBMATCHR_TBMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.14 GPTMTAPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMTAPR            (((GPTMTAPR_TypeDef*)(GPTM3_BASE + GPTM_GPTMTAPR_OFFSET )))
#define GPTM3_GPTMTAPR_R          (*((volatile uint32_t *)(GPTM3_BASE +GPTM_GPTMTAPR_OFFSET)))


//--------
#define GPTM3_GPTMTAPR_R_TAPSR_MASK      (0x000000FF)
#define GPTM3_GPTMTAPR_R_TAPSR_BIT       (0)

#define GPTM3_GPTMTAPR_TAPSR_MASK        (0x000000FF)
//--------

//--------
#define GPTM3_GPTMTAPR_R_TAPSRH_MASK      (0x0000FF00)
#define GPTM3_GPTMTAPR_R_TAPSRH_BIT       (8)

#define GPTM3_GPTMTAPR_TAPSRH_MASK        (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.15 GPTMTBPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMTBPR            (((GPTMTBPR_TypeDef*)(GPTM3_BASE + GPTM_GPTMTBPR_OFFSET )))
#define GPTM3_GPTMTBPR_R          (*((volatile uint32_t *)(GPTM3_BASE +GPTM_GPTMTBPR_OFFSET)))


//--------
#define GPTM3_GPTMTBPR_R_TBPSR_MASK      (0x000000FF)
#define GPTM3_GPTMTBPR_R_TBPSR_BIT       (0)

#define GPTM3_GPTMTBPR_TBPSR_MASK        (0x000000FF)
//--------


//--------
#define GPTM3_GPTMTBPR_R_TBPSRH_MASK      (0x0000FF00)
#define GPTM3_GPTMTBPR_R_TBPSRH_BIT       (8)

#define GPTM3_GPTMTBPR_TBPSRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.16 GPTMTAPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMTAPMR            (((GPTMTAPMR_TypeDef*)(GPTM3_BASE + GPTM_GPTMTAPMR_OFFSET )))
#define GPTM3_GPTMTAPMR_R          (*((volatile uint32_t *)(GPTM3_BASE +GPTM_GPTMTAPMR_OFFSET)))


//--------
#define GPTM3_GPTMTAPMR_R_TAPSMR_MASK      (0x000000FF)
#define GPTM3_GPTMTAPMR_R_TAPSMR_BIT       (0)

#define GPTM3_GPTMTAMPR_TAPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPTM3_GPTMTAPMR_R_TAPSMRH_MASK      (0x0000FF00)
#define GPTM3_GPTMTAPMR_R_TAPSMRH_BIT       (8)

#define GPTM3_GPTMTAPMR_TAPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.17 GPTMTBPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMTBPMR            (((GPTMTBPMR_TypeDef*)(GPTM3_BASE + GPTM_GPTMTBPMR_OFFSET )))
#define GPTM3_GPTMTBPMR_R          (*((volatile uint32_t *)(GPTM3_BASE +GPTM_GPTMTBPMR_OFFSET)))

//--------
#define GPTM3_GPTMTBPMR_R_TBPSMR_MASK      (0x000000FF)
#define GPTM3_GPTMTBPMR_R_TBPSMR_BIT       (0)

#define GPTM3_GPTMTBMPR_TBPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPTM3_GPTMTBPMR_R_TBPSMRH_MASK      (0x0000FF00)
#define GPTM3_GPTMTBPMR_R_TBPSMRH_BIT       (8)

#define GPTM3_GPTMTBPMR_TBPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.18 GPTMTAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMTAR            (((GPTMTAR_TypeDef*)(GPTM3_BASE + GPTM_GPTMTAR_OFFSET )))
#define GPTM3_GPTMTAR_R          (*((volatile const  int32_t *)(GPTM3_BASE +GPTM_GPTMTAR_OFFSET)))


//--------
#define GPTM3_GPTMTAR_R_TAR_MASK      (0xFFFFFFFF)
#define GPTM3_GPTMTAR_R_TAR_BIT       (0)

#define GPTM3_GPTMTAR_TAR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.19 GPTMTBR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMTBR            (((GPTMTBR_TypeDef*)(GPTM3_BASE + GPTM_GPTMTBR_OFFSET )))
#define GPTM3_GPTMTBR_R          (*((volatile const uint32_t *)(GPTM3_BASE +GPTM_GPTMTBR_OFFSET)))


//--------
#define GPTM3_GPTMTBR_R_TBR_MASK      (0xFFFFFFFF)
#define GPTM3_GPTMTBR_R_TBR_BIT       (0)

#define GPTM3_GPTMTBR_TBR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.20 GPTMTAV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMTAV            (((GPTMTAV_TypeDef*)(GPTM3_BASE + GPTM_GPTMTAV_OFFSET )))
#define GPTM3_GPTMTAV_R          (*((volatile uint32_t *)(GPTM3_BASE +GPTM_GPTMTAV_OFFSET)))

//--------
#define GPTM3_GPTMTAV_R_TAV_MASK      (0xFFFFFFFF)
#define GPTM3_GPTMTAV_R_TAV_BIT       (0)

#define GPTM3_GPTMTAV_TAV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.21 GPTMTBV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMTBV            (((GPTMTBV_TypeDef*)(GPTM3_BASE + GPTM_GPTMTBV_OFFSET )))
#define GPTM3_GPTMTBV_R          (*((volatile uint32_t *)(GPTM3_BASE +GPTM_GPTMTBV_OFFSET)))


//--------
#define GPTM3_GPTMTBV_R_TBV_MASK      (0xFFFFFFFF)
#define GPTM3_GPTMTBV_R_TBV_BIT       (0)

#define GPTM3_GPTMTBV_TBV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.22 GPTMRTCPD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMRTCPD            (((GPTMRTCPD_TypeDef*)(GPTM3_BASE + GPTM_GPTMRTCPD_OFFSET )))
#define GPTM3_GPTMRTCPD_R          (*((volatile const uint32_t *)(GPTM3_BASE +GPTM_GPTMRTCPD_OFFSET)))


//--------
#define GPTM3_GPTMRTCPD_R_RTCPD_MASK      (0x0000FFFF)
#define GPTM3_GPTMRTCPD_R_RTCPD_BIT       (0)
#define GPTM3_GPTMRTCPD_R_RTCPD_DEFAULT   (0x00007FFF)

#define GPTM3_GPTMRTCPD_RTCPD_MASK        (0x0000FFFF)
#define GPTM3_GPTMRTCPD_RTCPD_DEFAULT     (0x00007FFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.23 GPTMTAPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPTM3_GPTMTAPS            (((GPTMTAPS_TypeDef*)(GPTM3_BASE + GPTM_GPTMTAPS_OFFSET )))
#define GPTM3_GPTMTAPS_R          (*((volatile const uint32_t *)(GPTM3_BASE +GPTM_GPTMTAPS_OFFSET)))

//--------
#define GPTM3_GPTMTAPS_R_PSS_MASK      (0x0000FFFF)
#define GPTM3_GPTMTAPS_R_PSS_BIT       (0)

#define GPTM3_GPTMTAPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.24 GPTMTBPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMTBPS            (((GPTMTBPS_TypeDef*)(GPTM3_BASE + GPTM_GPTMTBPS_OFFSET )))
#define GPTM3_GPTMTBPS_R          (*((volatile const uint32_t *)(GPTM3_BASE +GPTM_GPTMTBPS_OFFSET)))

//--------
#define GPTM3_GPTMTBPS_R_PSS_MASK      (0x0000FFFF)
#define GPTM3_GPTMTBPS_R_PSS_BIT       (0)

#define GPTM3_GPTMTBPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.25 GPTMTAPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define GPTM3_GPTMTAPV            (((GPTMTAPV_TypeDef*)(GPTM3_BASE + GPTM_GPTMTAPV_OFFSET )))
#define GPTM3_GPTMTAPV_R          (*((volatile const uint32_t *)(GPTM3_BASE +GPTM_GPTMTAPV_OFFSET)))

//--------
#define GPTM3_GPTMTAPV_R_PSV_MASK      (0x0000FFFF)
#define GPTM3_GPTMTAPV_R_PSV_BIT       (0)

#define GPTM3_GPTMTAPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.26 GPTMTBPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPTM3_GPTMTBPV            (((GPTMTBPV_TypeDef*)(GPTM3_BASE + GPTM_GPTMTBPV_OFFSET )))
#define GPTM3_GPTMTBPV_R          (*((volatile const uint32_t *)(GPTM3_BASE +GPTM_GPTMTBPV_OFFSET)))

//--------
#define GPTM3_GPTMTBPV_R_PSV_MASK      (0x0000FFFF)
#define GPTM3_GPTMTBPV_R_PSV_BIT       (0)

#define GPTM3_GPTMTBPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.27 GPTMPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM3_GPTMPP            (((GPTMPP_TypeDef*)(GPTM3_BASE + GPTM_GPTMPP_OFFSET )))
#define GPTM3_GPTMPP_R          (*((volatile const uint32_t *)(GPTM3_BASE +GPTM_GPTMPP_OFFSET)))

#define GPTM3_GPTMPP_SIZE        (0x0000000F)

//--------
#define GPTM3_GPTMPP_R_SIZE_MASK      (0x0000000F)
#define GPTM3_GPTMPP_R_SIZE_BIT       (0)
#define GPTM3_GPTMPP_R_SIZE_16b       (0x00000000)
#define GPTM3_GPTMPP_R_SIZE_32b       (0x00000001)

#define GPTM3_GPTMPP_SIZE_MASK        (0x0000000F)
#define GPTM3_GPTMPP_SIZE_16b         (0x00000000)
#define GPTM3_GPTMPP_SIZE_32b         (0x00000001)
//--------

// ToDO GPTM4
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 GPTM4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.1 GPTMCFG ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMCFG            (((GPTMCFG_TypeDef*)(GPTM4_BASE + GPTM_GPTMCFG_OFFSET )))
#define GPTM4_GPTMCFG_R          (*((volatile uint32_t *)(GPTM4_BASE +GPTM_GPTMCFG_OFFSET)))


//--------
#define GPTM4_GPTMCFG_R_GPTMCFG_MASK      (0x00000007)
#define GPTM4_GPTMCFG_R_GPTMCFG_BIT       (0)
#define GPTM4_GPTMCFG_R_GPTMCFG_BOTH    (0x00000000)
#define GPTM4_GPTMCFG_R_GPTMCFG_RTC       (0x00000001)
#define GPTM4_GPTMCFG_R_GPTMCFG_SINGLE      (0x00000004)

#define GPTM4_GPTMCFG_GPTMCFG_MASK        (0x00000007)
#define GPTM4_GPTMCFG_GPTMCFG_BOTH      (0x00000000)
#define GPTM4_GPTMCFG_GPTMCFG_RTC         (0x00000001)
#define GPTM4_GPTMCFG_GPTMCFG_SINGLE        (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.2 GPTMTAMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMTAMR            (((GPTMTAMR_TypeDef*)(GPTM4_BASE + GPTM_GPTMTAMR_OFFSET )))
#define GPTM4_GPTMTAMR_R          (*((volatile uint32_t *)(GPTM4_BASE +GPTM_GPTMTAMR_OFFSET)))


//--------
#define GPTM4_GPTMTAMR_R_TAMR_MASK      (0x00000003)
#define GPTM4_GPTMTAMR_R_TAMR_BIT       (0)
#define GPTM4_GPTMTAMR_R_TAMR_ONESHOT   (0x00000001)
#define GPTM4_GPTMTAMR_R_TAMR_PERIOD    (0x00000002)
#define GPTM4_GPTMTAMR_R_TAMR_CAPTURE   (0x00000003)

#define GPTM4_GPTMTAMR_TAMR_MASK        (0x00000003)
#define GPTM4_GPTMTAMR_TAMR_ONESHOT     (0x00000001)
#define GPTM4_GPTMTAMR_TAMR_PERIOD      (0x00000002)
#define GPTM4_GPTMTAMR_TAMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPTM4_GPTMTAMR_R_TACMR_MASK      (0x00000004)
#define GPTM4_GPTMTAMR_R_TACMR_BIT       (2)
#define GPTM4_GPTMTAMR_R_TACMR_EDGECOUNT (0x00000000)
#define GPTM4_GPTMTAMR_R_TACMR_EDGETIME  (0x00000004)

#define GPTM4_GPTMTAMR_TACMR_MASK        (0x00000001)
#define GPTM4_GPTMTAMR_TACMR_EDGECOUNT   (0x00000000)
#define GPTM4_GPTMTAMR_TACMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPTM4_GPTMTAMR_R_TAAMS_MASK      (0x00000008)
#define GPTM4_GPTMTAMR_R_TAAMS_BIT       (3)
#define GPTM4_GPTMTAMR_R_TAAMS_CAPCOMP   (0x00000000)
#define GPTM4_GPTMTAMR_R_TAAMS_PWM       (0x00000008)

#define GPTM4_GPTMTAMR_TAAMS_MASK        (0x00000001)
#define GPTM4_GPTMTAMR_TAAMS_CAPCOMP     (0x00000000)
#define GPTM4_GPTMTAMR_TAAMS_PWM         (0x00000001)
//--------

//--------
#define GPTM4_GPTMTAMR_R_TACDIR_MASK      (0x00000010)
#define GPTM4_GPTMTAMR_R_TACDIR_BIT       (4)
#define GPTM4_GPTMTAMR_R_TACDIR_DOWN      (0x00000000)
#define GPTM4_GPTMTAMR_R_TACDIR_UP        (0x00000010)

#define GPTM4_GPTMTAMR_TACDIR_MASK        (0x00000001)
#define GPTM4_GPTMTAMR_TACDIR_DOWN        (0x00000000)
#define GPTM4_GPTMTAMR_TACDIR_UP          (0x00000001)
//--------

//--------
#define GPTM4_GPTMTAMR_R_TAMIE_MASK      (0x00000020)
#define GPTM4_GPTMTAMR_R_TAMIE_BIT       (5)
#define GPTM4_GPTMTAMR_R_TAMIE_DIS       (0x00000000)
#define GPTM4_GPTMTAMR_R_TAMIE_EN        (0x00000020)

#define GPTM4_GPTMTAMR_TAMIE_MASK        (0x00000001)
#define GPTM4_GPTMTAMR_TAMIE_DIS         (0x00000000)
#define GPTM4_GPTMTAMR_TAMIE_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMTAMR_R_TAWOT_MASK      (0x00000040)
#define GPTM4_GPTMTAMR_R_TAWOT_BIT       (6)
#define GPTM4_GPTMTAMR_R_TAWOT_INSTANT   (0x00000000)
#define GPTM4_GPTMTAMR_R_TAWOT_TRIGGER   (0x00000040)

#define GPTM4_GPTMTAMR_TAWOT_MASK        (0x00000001)
#define GPTM4_GPTMTAMR_TAWOT_INSTANT     (0x00000000)
#define GPTM4_GPTMTAMR_TAWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPTM4_GPTMTAMR_R_TASNAPS_MASK      (0x00000080)
#define GPTM4_GPTMTAMR_R_TASNAPS_BIT       (7)
#define GPTM4_GPTMTAMR_R_TASNAPS_DIS       (0x00000000)
#define GPTM4_GPTMTAMR_R_TASNAPS_EN        (0x00000080)

#define GPTM4_GPTMTAMR_TASNAPS_MASK        (0x00000001)
#define GPTM4_GPTMTAMR_TASNAPS_DIS         (0x00000000)
#define GPTM4_GPTMTAMR_TASNAPS_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMTAMR_R_TAILD_MASK      (0x00000100)
#define GPTM4_GPTMTAMR_R_TAILD_BIT       (8)
#define GPTM4_GPTMTAMR_R_TAILD_NEXT      (0x00000000)
#define GPTM4_GPTMTAMR_R_TAILD_TIMEOUT   (0x00000100)

#define GPTM4_GPTMTAMR_TAILD_MASK        (0x00000001)
#define GPTM4_GPTMTAMR_TAILD_NEXT        (0x00000000)
#define GPTM4_GPTMTAMR_TAILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM4_GPTMTAMR_R_TAPWMIE_MASK      (0x00000200)
#define GPTM4_GPTMTAMR_R_TAPWMIE_BIT       (9)
#define GPTM4_GPTMTAMR_R_TAPWMIE_DIS       (0x00000000)
#define GPTM4_GPTMTAMR_R_TAPWMIE_EN        (0x00000200)

#define GPTM4_GPTMTAMR_TAPWMIE_MASK        (0x00000001)
#define GPTM4_GPTMTAMR_TAPWMIE_DIS         (0x00000000)
#define GPTM4_GPTMTAMR_TAPWMIE_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMTAMR_R_TAMRSU_MASK      (0x00000400)
#define GPTM4_GPTMTAMR_R_TAMRSU_BIT       (10)
#define GPTM4_GPTMTAMR_R_TAMRSU_NEXT      (0x00000000)
#define GPTM4_GPTMTAMR_R_TAMRSU_TIMEOUT   (0x00000400)

#define GPTM4_GPTMTAMR_TAMRSU_MASK        (0x00000001)
#define GPTM4_GPTMTAMR_TAMRSU_NEXT        (0x00000000)
#define GPTM4_GPTMTAMR_TAMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM4_GPTMTAMR_R_TAPLO_MASK      (0x00000800)
#define GPTM4_GPTMTAMR_R_TAPLO_BIT       (11)
#define GPTM4_GPTMTAMR_R_TAPLO_LOW       (0x00000000)
#define GPTM4_GPTMTAMR_R_TAPLO_HIGH      (0x00000800)

#define GPTM4_GPTMTAMR_TAPLO_MASK        (0x00000001)
#define GPTM4_GPTMTAMR_TAPLO_LOW         (0x00000000)
#define GPTM4_GPTMTAMR_TAPLO_HIGH        (0x00000001)
//--------

#define GPTM4_GPTMTAMR_TACMR_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(2*4))))
#define GPTM4_GPTMTAMR_TAAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(3*4))))
#define GPTM4_GPTMTAMR_TACDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(4*4))))
#define GPTM4_GPTMTAMR_TAMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(5*4))))
#define GPTM4_GPTMTAMR_TAWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(6*4))))
#define GPTM4_GPTMTAMR_TASNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(7*4))))
#define GPTM4_GPTMTAMR_TAILD_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(8*4))))
#define GPTM4_GPTMTAMR_TAPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(9*4))))
#define GPTM4_GPTMTAMR_TAMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(10*4))))
#define GPTM4_GPTMTAMR_TAPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.3 GPTMTBMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMTBMR            (((GPTMTBMR_TypeDef*)(GPTM4_BASE + GPTM_GPTMTBMR_OFFSET )))
#define GPTM4_GPTMTBMR_R          (*((volatile uint32_t *)(GPTM4_BASE +GPTM_GPTMTBMR_OFFSET)))


//--------
#define GPTM4_GPTMTBMR_R_TBMR_MASK      (0x00000003)
#define GPTM4_GPTMTBMR_R_TBMR_BIT       (0)
#define GPTM4_GPTMTBMR_R_TBMR_ONESHOT   (0x00000001)
#define GPTM4_GPTMTBMR_R_TBMR_PERIOD    (0x00000002)
#define GPTM4_GPTMTBMR_R_TBMR_CAPTURE   (0x00000003)

#define GPTM4_GPTMTBMR_TBMR_MASK        (0x00000003)
#define GPTM4_GPTMTBMR_TBMR_ONESHOT     (0x00000001)
#define GPTM4_GPTMTBMR_TBMR_PERIOD      (0x00000002)
#define GPTM4_GPTMTBMR_TBMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPTM4_GPTMTBMR_R_TBCMR_MASK      (0x00000004)
#define GPTM4_GPTMTBMR_R_TBCMR_BIT       (2)
#define GPTM4_GPTMTBMR_R_TBCMR_EDGECOUNT (0x00000000)
#define GPTM4_GPTMTBMR_R_TBCMR_EDGETIME  (0x00000004)

#define GPTM4_GPTMTBMR_TBCMR_MASK        (0x00000001)
#define GPTM4_GPTMTBMR_TBCMR_EDGECOUNT   (0x00000000)
#define GPTM4_GPTMTBMR_TBCMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPTM4_GPTMTBMR_R_TBAMS_MASK      (0x00000008)
#define GPTM4_GPTMTBMR_R_TBAMS_BIT       (3)
#define GPTM4_GPTMTBMR_R_TBAMS_CAPCOMP   (0x00000000)
#define GPTM4_GPTMTBMR_R_TBAMS_PWM       (0x00000008)

#define GPTM4_GPTMTBMR_TBAMS_MASK        (0x00000001)
#define GPTM4_GPTMTBMR_TBAMS_CAPCOMP     (0x00000000)
#define GPTM4_GPTMTBMR_TBAMS_PWM         (0x00000001)
//--------

//--------
#define GPTM4_GPTMTBMR_R_TBCDIR_MASK      (0x00000010)
#define GPTM4_GPTMTBMR_R_TBCDIR_BIT       (4)
#define GPTM4_GPTMTBMR_R_TBCDIR_DOWN      (0x00000000)
#define GPTM4_GPTMTBMR_R_TBCDIR_UP        (0x00000010)

#define GPTM4_GPTMTBMR_TBCDIR_MASK        (0x00000001)
#define GPTM4_GPTMTBMR_TBCDIR_DOWN        (0x00000000)
#define GPTM4_GPTMTBMR_TBCDIR_UP          (0x00000001)
//--------

//--------
#define GPTM4_GPTMTBMR_R_TBMIE_MASK      (0x00000020)
#define GPTM4_GPTMTBMR_R_TBMIE_BIT       (5)
#define GPTM4_GPTMTBMR_R_TBMIE_DIS       (0x00000000)
#define GPTM4_GPTMTBMR_R_TBMIE_EN        (0x00000020)

#define GPTM4_GPTMTBMR_TBMIE_MASK        (0x00000001)
#define GPTM4_GPTMTBMR_TBMIE_DIS         (0x00000000)
#define GPTM4_GPTMTBMR_TBMIE_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMTBMR_R_TBWOT_MASK      (0x00000040)
#define GPTM4_GPTMTBMR_R_TBWOT_BIT       (6)
#define GPTM4_GPTMTBMR_R_TBWOT_INSTANT   (0x00000000)
#define GPTM4_GPTMTBMR_R_TBWOT_TRIGGER   (0x00000040)

#define GPTM4_GPTMTBMR_TBWOT_MASK        (0x00000001)
#define GPTM4_GPTMTBMR_TBWOT_INSTANT     (0x00000000)
#define GPTM4_GPTMTBMR_TBWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPTM4_GPTMTBMR_R_TBSNAPS_MASK      (0x00000080)
#define GPTM4_GPTMTBMR_R_TBSNAPS_BIT       (7)
#define GPTM4_GPTMTBMR_R_TBSNAPS_DIS       (0x00000000)
#define GPTM4_GPTMTBMR_R_TBSNAPS_EN        (0x00000080)

#define GPTM4_GPTMTBMR_TBSNAPS_MASK        (0x00000001)
#define GPTM4_GPTMTBMR_TBSNAPS_DIS         (0x00000000)
#define GPTM4_GPTMTBMR_TBSNAPS_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMTBMR_R_TBILD_MASK      (0x00000100)
#define GPTM4_GPTMTBMR_R_TBILD_BIT       (8)
#define GPTM4_GPTMTBMR_R_TBILD_NEXT      (0x00000000)
#define GPTM4_GPTMTBMR_R_TBILD_TIMEOUT   (0x00000100)

#define GPTM4_GPTMTBMR_TBILD_MASK        (0x00000001)
#define GPTM4_GPTMTBMR_TBILD_NEXT        (0x00000000)
#define GPTM4_GPTMTBMR_TBILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM4_GPTMTBMR_R_TBPWMIE_MASK      (0x00000200)
#define GPTM4_GPTMTBMR_R_TBPWMIE_BIT       (9)
#define GPTM4_GPTMTBMR_R_TBPWMIE_DIS       (0x00000000)
#define GPTM4_GPTMTBMR_R_TBPWMIE_EN        (0x00000200)

#define GPTM4_GPTMTBMR_TBPWMIE_MASK        (0x00000001)
#define GPTM4_GPTMTBMR_TBPWMIE_DIS         (0x00000000)
#define GPTM4_GPTMTBMR_TBPWMIE_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMTBMR_R_TBMRSU_MASK      (0x00000400)
#define GPTM4_GPTMTBMR_R_TBMRSU_BIT       (10)
#define GPTM4_GPTMTBMR_R_TBMRSU_NEXT      (0x00000000)
#define GPTM4_GPTMTBMR_R_TBMRSU_TIMEOUT   (0x00000400)

#define GPTM4_GPTMTBMR_TBMRSU_MASK        (0x00000001)
#define GPTM4_GPTMTBMR_TBMRSU_NEXT        (0x00000000)
#define GPTM4_GPTMTBMR_TBMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM4_GPTMTBMR_R_TBPLO_MASK      (0x00000800)
#define GPTM4_GPTMTBMR_R_TBPLO_BIT       (11)
#define GPTM4_GPTMTBMR_R_TBPLO_LOW       (0x00000000)
#define GPTM4_GPTMTBMR_R_TBPLO_HIGH      (0x00000800)

#define GPTM4_GPTMTBMR_TBPLO_MASK        (0x00000001)
#define GPTM4_GPTMTBMR_TBPLO_LOW         (0x00000000)
#define GPTM4_GPTMTBMR_TBPLO_HIGH        (0x00000001)
//--------

#define GPTM4_GPTMTBMR_TBCMR_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(2*4))))
#define GPTM4_GPTMTBMR_TBAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(3*4))))
#define GPTM4_GPTMTBMR_TBCDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(4*4))))
#define GPTM4_GPTMTBMR_TBMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(5*4))))
#define GPTM4_GPTMTBMR_TBWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(6*4))))
#define GPTM4_GPTMTBMR_TBSNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(7*4))))
#define GPTM4_GPTMTBMR_TBILD_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(8*4))))
#define GPTM4_GPTMTBMR_TBPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(9*4))))
#define GPTM4_GPTMTBMR_TBMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(10*4))))
#define GPTM4_GPTMTBMR_TBPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.4 GPTMCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMCTL            (((GPTMCTL_TypeDef*)(GPTM4_BASE + GPTM_GPTMCTL_OFFSET )))
#define GPTM4_GPTMCTL_R          (*((volatile uint32_t *)(GPTM4_BASE +GPTM_GPTMCTL_OFFSET)))


//--------
#define GPTM4_GPTMCTL_R_TAEN_MASK      (0x00000001)
#define GPTM4_GPTMCTL_R_TAEN_BIT       (0)
#define GPTM4_GPTMCTL_R_TAEN_DIS       (0x00000000)
#define GPTM4_GPTMCTL_R_TAEN_EN        (0x00000001)

#define GPTM4_GPTMCTL_TAEN_MASK        (0x00000001)
#define GPTM4_GPTMCTL_TAEN_DIS         (0x00000000)
#define GPTM4_GPTMCTL_TAEN_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMCTL_R_TASTALL_MASK      (0x00000002)
#define GPTM4_GPTMCTL_R_TASTALL_BIT       (1)
#define GPTM4_GPTMCTL_R_TASTALL_CONTINUE  (0x00000000)
#define GPTM4_GPTMCTL_R_TASTALL_FREEZE    (0x00000002)

#define GPTM4_GPTMCTL_TASTALL_MASK        (0x00000001)
#define GPTM4_GPTMCTL_TASTALL_CONTINUE    (0x00000000)
#define GPTM4_GPTMCTL_TASTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPTM4_GPTMCTL_R_TAEVENT_MASK      (0x0000000C)
#define GPTM4_GPTMCTL_R_TAEVENT_BIT       (2)
#define GPTM4_GPTMCTL_R_TAEVENT_POS       (0x00000000)
#define GPTM4_GPTMCTL_R_TAEVENT_NEG       (0x00000004)
#define GPTM4_GPTMCTL_R_TAEVENT_BOTH      (0x0000000C)

#define GPTM4_GPTMCTL_TAEVENT_MASK        (0x00000003)
#define GPTM4_GPTMCTL_TAEVENT_NEG         (0x00000000)
#define GPTM4_GPTMCTL_TAEVENT_POS         (0x00000001)
#define GPTM4_GPTMCTL_TAEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPTM4_GPTMCTL_R_RTCEN_MASK      (0x00000010)
#define GPTM4_GPTMCTL_R_RTCEN_BIT       (4)
#define GPTM4_GPTMCTL_R_RTCEN_CONTINUE  (0x00000000)
#define GPTM4_GPTMCTL_R_RTCEN_FREEZE    (0x00000010)

#define GPTM4_GPTMCTL_RTCEN_MASK        (0x00000001)
#define GPTM4_GPTMCTL_RTCEN_CONTINUE    (0x00000000)
#define GPTM4_GPTMCTL_RTCEN_FREEZE      (0x00000001)
//--------

//--------
#define GPTM4_GPTMCTL_R_TAOTE_MASK      (0x00000020)
#define GPTM4_GPTMCTL_R_TAOTE_BIT       (5)
#define GPTM4_GPTMCTL_R_TAOTE_DIS       (0x00000000)
#define GPTM4_GPTMCTL_R_TAOTE_EN        (0x00000020)

#define GPTM4_GPTMCTL_TAOTE_MASK        (0x00000001)
#define GPTM4_GPTMCTL_TAOTE_DIS         (0x00000000)
#define GPTM4_GPTMCTL_TAOTE_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMCTL_R_TAPWML_MASK      (0x00000040)
#define GPTM4_GPTMCTL_R_TAPWML_BIT       (6)
#define GPTM4_GPTMCTL_R_TAPWML_NA        (0x00000000)
#define GPTM4_GPTMCTL_R_TAPWML_INV       (0x00000040)

#define GPTM4_GPTMCTL_TAPWML_MASK        (0x00000001)
#define GPTM4_GPTMCTL_TAPWML_NA          (0x00000000)
#define GPTM4_GPTMCTL_TAPWML_INV         (0x00000001)
//--------



//--------
#define GPTM4_GPTMCTL_R_TBEN_MASK      (0x00000100)
#define GPTM4_GPTMCTL_R_TBEN_BIT       (8)
#define GPTM4_GPTMCTL_R_TBEN_DIS       (0x00000000)
#define GPTM4_GPTMCTL_R_TBEN_EN        (0x00000100)

#define GPTM4_GPTMCTL_TBEN_MASK        (0x00000001)
#define GPTM4_GPTMCTL_TBEN_DIS         (0x00000000)
#define GPTM4_GPTMCTL_TBEN_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMCTL_R_TBSTALL_MASK      (0x00000200)
#define GPTM4_GPTMCTL_R_TBSTALL_BIT       (9)
#define GPTM4_GPTMCTL_R_TBSTALL_CONTINUE  (0x00000000)
#define GPTM4_GPTMCTL_R_TBSTALL_FREEZE    (0x00000200)

#define GPTM4_GPTMCTL_TBSTALL_MASK        (0x00000001)
#define GPTM4_GPTMCTL_TBSTALL_CONTINUE    (0x00000000)
#define GPTM4_GPTMCTL_TBSTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPTM4_GPTMCTL_R_TBEVENT_MASK      (0x00000C00)
#define GPTM4_GPTMCTL_R_TBEVENT_BIT       (10)
#define GPTM4_GPTMCTL_R_TBEVENT_POS       (0x00000000)
#define GPTM4_GPTMCTL_R_TBEVENT_NEG       (0x00000400)
#define GPTM4_GPTMCTL_R_TBEVENT_BOTH      (0x00000C00)

#define GPTM4_GPTMCTL_TBEVENT_MASK        (0x00000003)
#define GPTM4_GPTMCTL_TBEVENT_NEG         (0x00000000)
#define GPTM4_GPTMCTL_TBEVENT_POS         (0x00000001)
#define GPTM4_GPTMCTL_TBEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPTM4_GPTMCTL_R_TBOTE_MASK      (0x00002000)
#define GPTM4_GPTMCTL_R_TBOTE_BIT       (13)
#define GPTM4_GPTMCTL_R_TBOTE_DIS       (0x00000000)
#define GPTM4_GPTMCTL_R_TBOTE_EN        (0x00002000)

#define GPTM4_GPTMCTL_TBOTE_MASK        (0x00000001)
#define GPTM4_GPTMCTL_TBOTE_DIS         (0x00000000)
#define GPTM4_GPTMCTL_TBOTE_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMCTL_R_TBPWML_MASK      (0x00004000)
#define GPTM4_GPTMCTL_R_TBPWML_BIT       (14)
#define GPTM4_GPTMCTL_R_TBPWML_NA        (0x00000000)
#define GPTM4_GPTMCTL_R_TBPWML_INV       (0x00004000)

#define GPTM4_GPTMCTL_TBPWML_MASK        (0x00000001)
#define GPTM4_GPTMCTL_TBPWML_NA          (0x00000000)
#define GPTM4_GPTMCTL_TBPWML_INV         (0x00000001)
//--------

#define GPTM4_GPTMCTL_TAEN_BB      (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(0*4))))
#define GPTM4_GPTMCTL_TASTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(1*4))))
#define GPTM4_GPTMCTL_RTCEN_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(4*4))))
#define GPTM4_GPTMCTL_TAOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(5*4))))
#define GPTM4_GPTMCTL_TAPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTMGPTMCTL_OFFSET)*32)+(6*4))))
#define GPTM4_GPTMCTL_TBEN_BB      (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(8*4))))
#define GPTM4_GPTMCTL_TBSTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(9*4))))
#define GPTM4_GPTMCTL_TBOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(13*4))))
#define GPTM4_GPTMCTL_TBPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(14*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.5 GPTMSYNC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMSYNC            (((GPTMSYNC_TypeDef*)(GPTM4_BASE + GPTM_GPTMSYNC_OFFSET )))
#define GPTM4_GPTMSYNC_R          (*((volatile uint32_t *)(GPTM4_BASE +GPTM_GPTMSYNC_OFFSET)))

//--------
#define GPTM4_GPTMSYNC_R_SYNCT0_MASK      (0x00000003)
#define GPTM4_GPTMSYNC_R_SYNCT0_BIT       (0)
#define GPTM4_GPTMSYNC_R_SYNCT0_NA        (0x00000000)
#define GPTM4_GPTMSYNC_R_SYNCT0_TA        (0x00000001)
#define GPTM4_GPTMSYNC_R_SYNCT0_TB        (0x00000002)
#define GPTM4_GPTMSYNC_R_SYNCT0_BOTH      (0x00000003)

#define GPTM4_GPTMSYNC_SYNCT0_MASK        (0x00000003)
#define GPTM4_GPTMSYNC_SYNCT0_NA          (0x00000000)
#define GPTM4_GPTMSYNC_SYNCT0_TA          (0x00000001)
#define GPTM4_GPTMSYNC_SYNCT0_TB          (0x00000002)
#define GPTM4_GPTMSYNC_SYNCT0_BOTH        (0x00000003)
//--------

//--------
#define GPTM4_GPTMSYNC_R_SYNCT1_MASK      (0x0000000C)
#define GPTM4_GPTMSYNC_R_SYNCT1_BIT       (2)
#define GPTM4_GPTMSYNC_R_SYNCT1_NA        (0x00000000)
#define GPTM4_GPTMSYNC_R_SYNCT1_TA        (0x00000004)
#define GPTM4_GPTMSYNC_R_SYNCT1_TB        (0x00000008)
#define GPTM4_GPTMSYNC_R_SYNCT1_BOTH      (0x0000000C)

#define GPTM4_GPTMSYNC_SYNCT1_MASK        (0x00000003)
#define GPTM4_GPTMSYNC_SYNCT1_NA          (0x00000000)
#define GPTM4_GPTMSYNC_SYNCT1_TA          (0x00000001)
#define GPTM4_GPTMSYNC_SYNCT1_TB          (0x00000002)
#define GPTM4_GPTMSYNC_SYNCT1_BOTH        (0x00000003)
//--------

//--------
#define GPTM4_GPTMSYNC_R_SYNCT2_MASK      (0x00000030)
#define GPTM4_GPTMSYNC_R_SYNCT2_BIT       (4)
#define GPTM4_GPTMSYNC_R_SYNCT2_NA        (0x00000000)
#define GPTM4_GPTMSYNC_R_SYNCT2_TA        (0x00000010)
#define GPTM4_GPTMSYNC_R_SYNCT2_TB        (0x00000020)
#define GPTM4_GPTMSYNC_R_SYNCT2_BOTH      (0x00000030)

#define GPTM4_GPTMSYNC_SYNCT2_MASK        (0x00000003)
#define GPTM4_GPTMSYNC_SYNCT2_NA          (0x00000000)
#define GPTM4_GPTMSYNC_SYNCT2_TA          (0x00000001)
#define GPTM4_GPTMSYNC_SYNCT2_TB          (0x00000002)
#define GPTM4_GPTMSYNC_SYNCT2_BOTH        (0x00000003)
//--------

//--------
#define GPTM4_GPTMSYNC_R_SYNCT3_MASK      (0x000000C0)
#define GPTM4_GPTMSYNC_R_SYNCT3_BIT       (6)
#define GPTM4_GPTMSYNC_R_SYNCT3_NA        (0x00000000)
#define GPTM4_GPTMSYNC_R_SYNCT3_TA        (0x00000040)
#define GPTM4_GPTMSYNC_R_SYNCT3_TB        (0x00000080)
#define GPTM4_GPTMSYNC_R_SYNCT3_BOTH      (0x000000C0)

#define GPTM4_GPTMSYNC_SYNCT3_MASK        (0x00000003)
#define GPTM4_GPTMSYNC_SYNCT3_NA          (0x00000000)
#define GPTM4_GPTMSYNC_SYNCT3_TA          (0x00000001)
#define GPTM4_GPTMSYNC_SYNCT3_TB          (0x00000002)
#define GPTM4_GPTMSYNC_SYNCT3_BOTH        (0x00000003)
//--------

//--------
#define GPTM4_GPTMSYNC_R_SYNCT4_MASK      (0x00000300)
#define GPTM4_GPTMSYNC_R_SYNCT4_BIT       (8)
#define GPTM4_GPTMSYNC_R_SYNCT4_NA        (0x00000000)
#define GPTM4_GPTMSYNC_R_SYNCT4_TA        (0x00000100)
#define GPTM4_GPTMSYNC_R_SYNCT4_TB        (0x00000200)
#define GPTM4_GPTMSYNC_R_SYNCT4_BOTH      (0x00000300)

#define GPTM4_GPTMSYNC_SYNCT4_MASK        (0x00000003)
#define GPTM4_GPTMSYNC_SYNCT4_NA          (0x00000000)
#define GPTM4_GPTMSYNC_SYNCT4_TA          (0x00000001)
#define GPTM4_GPTMSYNC_SYNCT4_TB          (0x00000002)
#define GPTM4_GPTMSYNC_SYNCT4_BOTH        (0x00000003)
//--------

//--------
#define GPTM4_GPTMSYNC_R_SYNCT5_MASK      (0x00000C00)
#define GPTM4_GPTMSYNC_R_SYNCT5_BIT       (10)
#define GPTM4_GPTMSYNC_R_SYNCT5_NA        (0x00000000)
#define GPTM4_GPTMSYNC_R_SYNCT5_TA        (0x00000400)
#define GPTM4_GPTMSYNC_R_SYNCT5_TB        (0x00000800)
#define GPTM4_GPTMSYNC_R_SYNCT5_BOTH      (0x00000C00)

#define GPTM4_GPTMSYNC_SYNCT5_MASK        (0x00000003)
#define GPTM4_GPTMSYNC_SYNCT5_NA          (0x00000000)
#define GPTM4_GPTMSYNC_SYNCT5_TA          (0x00000001)
#define GPTM4_GPTMSYNC_SYNCT5_TB          (0x00000002)
#define GPTM4_GPTMSYNC_SYNCT5_BOTH        (0x00000003)
//--------

//--------
#define GPTM4_GPTMSYNC_R_SYNCWT0_MASK      (0x00003000)
#define GPTM4_GPTMSYNC_R_SYNCWT0_BIT       (12)
#define GPTM4_GPTMSYNC_R_SYNCWT0_NA        (0x00000000)
#define GPTM4_GPTMSYNC_R_SYNCWT0_TA        (0x00001000)
#define GPTM4_GPTMSYNC_R_SYNCWT0_TB        (0x00002000)
#define GPTM4_GPTMSYNC_R_SYNCWT0_BOTH      (0x00003000)

#define GPTM4_GPTMSYNC_SYNCWT0_MASK        (0x00000003)
#define GPTM4_GPTMSYNC_SYNCWT0_NA          (0x00000000)
#define GPTM4_GPTMSYNC_SYNCWT0_TA          (0x00000001)
#define GPTM4_GPTMSYNC_SYNCWT0_TB          (0x00000002)
#define GPTM4_GPTMSYNC_SYNCWT0_BOTH        (0x00000003)
//--------

//--------
#define GPTM4_GPTMSYNC_R_SYNCWT1_MASK      (0x0000C000)
#define GPTM4_GPTMSYNC_R_SYNCWT1_BIT       (14)
#define GPTM4_GPTMSYNC_R_SYNCWT1_NA        (0x00000000)
#define GPTM4_GPTMSYNC_R_SYNCWT1_TA        (0x00004000)
#define GPTM4_GPTMSYNC_R_SYNCWT1_TB        (0x00008000)
#define GPTM4_GPTMSYNC_R_SYNCWT1_BOTH      (0x0000C000)

#define GPTM4_GPTMSYNC_SYNCWT1_MASK        (0x00000003)
#define GPTM4_GPTMSYNC_SYNCWT1_NA          (0x00000000)
#define GPTM4_GPTMSYNC_SYNCWT1_TA          (0x00000001)
#define GPTM4_GPTMSYNC_SYNCWT1_TB          (0x00000002)
#define GPTM4_GPTMSYNC_SYNCWT1_BOTH        (0x00000003)
//--------

//--------
#define GPTM4_GPTMSYNC_R_SYNCWT2_MASK      (0x00030000)
#define GPTM4_GPTMSYNC_R_SYNCWT2_BIT       (16)
#define GPTM4_GPTMSYNC_R_SYNCWT2_NA        (0x00000000)
#define GPTM4_GPTMSYNC_R_SYNCWT2_TA        (0x00010000)
#define GPTM4_GPTMSYNC_R_SYNCWT2_TB        (0x00020000)
#define GPTM4_GPTMSYNC_R_SYNCWT2_BOTH      (0x00030000)

#define GPTM4_GPTMSYNC_SYNCWT2_MASK        (0x00000003)
#define GPTM4_GPTMSYNC_SYNCWT2_NA          (0x00000000)
#define GPTM4_GPTMSYNC_SYNCWT2_TA          (0x00000001)
#define GPTM4_GPTMSYNC_SYNCWT2_TB          (0x00000002)
#define GPTM4_GPTMSYNC_SYNCWT2_BOTH        (0x00000003)
//--------

//--------
#define GPTM4_GPTMSYNC_R_SYNCWT3_MASK      (0x000C0000)
#define GPTM4_GPTMSYNC_R_SYNCWT3_BIT       (18)
#define GPTM4_GPTMSYNC_R_SYNCWT3_NA        (0x00000000)
#define GPTM4_GPTMSYNC_R_SYNCWT3_TA        (0x00040000)
#define GPTM4_GPTMSYNC_R_SYNCWT3_TB        (0x00080000)
#define GPTM4_GPTMSYNC_R_SYNCWT3_BOTH      (0x000C0000)

#define GPTM4_GPTMSYNC_SYNCWT3_MASK        (0x00000003)
#define GPTM4_GPTMSYNC_SYNCWT3_NA          (0x00000000)
#define GPTM4_GPTMSYNC_SYNCWT3_TA          (0x00000001)
#define GPTM4_GPTMSYNC_SYNCWT3_TB          (0x00000002)
#define GPTM4_GPTMSYNC_SYNCWT3_BOTH        (0x00000003)
//--------

//--------
#define GPTM4_GPTMSYNC_R_SYNCWT4_MASK      (0x0030000)
#define GPTM4_GPTMSYNC_R_SYNCWT4_BIT       (20)
#define GPTM4_GPTMSYNC_R_SYNCWT4_NA        (0x00000000)
#define GPTM4_GPTMSYNC_R_SYNCWT4_TA        (0x00100000)
#define GPTM4_GPTMSYNC_R_SYNCWT4_TB        (0x00200000)
#define GPTM4_GPTMSYNC_R_SYNCWT4_BOTH      (0x00300000)

#define GPTM4_GPTMSYNC_SYNCWT4_MASK        (0x00000003)
#define GPTM4_GPTMSYNC_SYNCWT4_NA          (0x00000000)
#define GPTM4_GPTMSYNC_SYNCWT4_TA          (0x00000001)
#define GPTM4_GPTMSYNC_SYNCWT4_TB          (0x00000002)
#define GPTM4_GPTMSYNC_SYNCWT4_BOTH        (0x00000003)
//--------

//--------
#define GPTM4_GPTMSYNC_R_SYNCWT5_MASK      (0x00C00000)
#define GPTM4_GPTMSYNC_R_SYNCWT5_BIT       (22)
#define GPTM4_GPTMSYNC_R_SYNCWT5_NA        (0x00000000)
#define GPTM4_GPTMSYNC_R_SYNCWT5_TA        (0x00400000)
#define GPTM4_GPTMSYNC_R_SYNCWT5_TB        (0x00800000)
#define GPTM4_GPTMSYNC_R_SYNCWT5_BOTH      (0x00C00000)

#define GPTM4_GPTMSYNC_SYNCWT5_MASK        (0x00000003)
#define GPTM4_GPTMSYNC_SYNCWT5_NA          (0x00000000)
#define GPTM4_GPTMSYNC_SYNCWT5_TA          (0x00000001)
#define GPTM4_GPTMSYNC_SYNCWT5_TB          (0x00000002)
#define GPTM4_GPTMSYNC_SYNCWT5_BOTH        (0x00000003)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.6 GPTMIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMIMR            (((GPTMIMR_TypeDef*)(GPTM4_BASE + GPTM_GPTMIMR_OFFSET )))
#define GPTM4_GPTMIMR_R          (*((volatile  uint32_t *)(GPTM4_BASE +GPTM_GPTMIMR_OFFSET)))

//--------
#define GPTM4_GPTMIMR_R_TATOIM_MASK      (0x00000001)
#define GPTM4_GPTMIMR_R_TATOIM_BIT       (0)
#define GPTM4_GPTMIMR_R_TATOIM_DIS       (0x00000000)
#define GPTM4_GPTMIMR_R_TATOIM_EN        (0x00000001)

#define GPTM4_GPTMIMR_TATOIM_MASK        (0x00000001)
#define GPTM4_GPTMIMR_TATOIM_DIS         (0x00000000)
#define GPTM4_GPTMIMR_TATOIM_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMIMR_R_CAMIM_MASK      (0x00000002)
#define GPTM4_GPTMIMR_R_CAMIM_BIT       (1)
#define GPTM4_GPTMIMR_R_CAMIM_DIS       (0x00000000)
#define GPTM4_GPTMIMR_R_CAMIM_EN        (0x00000002)

#define GPTM4_GPTMIMR_CAMIM_MASK        (0x00000001)
#define GPTM4_GPTMIMR_CAMIM_DIS         (0x00000000)
#define GPTM4_GPTMIMR_CAMIM_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMIMR_R_CAEIM_MASK      (0x00000004)
#define GPTM4_GPTMIMR_R_CAEIM_BIT       (2)
#define GPTM4_GPTMIMR_R_CAEIM_DIS       (0x00000000)
#define GPTM4_GPTMIMR_R_CAEIM_EN        (0x00000004)

#define GPTM4_GPTMIMR_CAEIM_MASK        (0x00000001)
#define GPTM4_GPTMIMR_CAEIM_DIS         (0x00000000)
#define GPTM4_GPTMIMR_CAEIM_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMIMR_R_RTCIM_MASK      (0x00000008)
#define GPTM4_GPTMIMR_R_RTCIM_BIT       (3)
#define GPTM4_GPTMIMR_R_RTCIM_DIS       (0x00000000)
#define GPTM4_GPTMIMR_R_RTCIM_EN        (0x00000008)

#define GPTM4_GPTMIMR_RTCIM_MASK        (0x00000001)
#define GPTM4_GPTMIMR_RTCIM_DIS         (0x00000000)
#define GPTM4_GPTMIMR_RTCIM_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMIMR_R_TAMIM_MASK      (0x00000010)
#define GPTM4_GPTMIMR_R_TAMIM_BIT       (4)
#define GPTM4_GPTMIMR_R_TAMIM_DIS       (0x00000000)
#define GPTM4_GPTMIMR_R_TAMIM_EN        (0x00000010)

#define GPTM4_GPTMIMR_TAMIM_MASK        (0x00000001)
#define GPTM4_GPTMIMR_TAMIM_DIS         (0x00000000)
#define GPTM4_GPTMIMR_TAMIM_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMIMR_R_TBTOIM_MASK      (0x00000100)
#define GPTM4_GPTMIMR_R_TBTOIM_BIT       (8)
#define GPTM4_GPTMIMR_R_TBTOIM_DIS       (0x00000000)
#define GPTM4_GPTMIMR_R_TBTOIM_EN        (0x00000100)

#define GPTM4_GPTMIMR_TBTOIM_MASK        (0x00000001)
#define GPTM4_GPTMIMR_TBTOIM_DIS         (0x00000000)
#define GPTM4_GPTMIMR_TBTOIM_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMIMR_R_CBMIM_MASK      (0x00000200)
#define GPTM4_GPTMIMR_R_CBMIM_BIT       (9)
#define GPTM4_GPTMIMR_R_CBMIM_DIS       (0x00000000)
#define GPTM4_GPTMIMR_R_CBMIM_EN        (0x00000200)

#define GPTM4_GPTMIMR_CBMIM_MASK        (0x00000001)
#define GPTM4_GPTMIMR_CBMIM_DIS         (0x00000000)
#define GPTM4_GPTMIMR_CBMIM_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMIMR_R_CBEIM_MASK      (0x00000400)
#define GPTM4_GPTMIMR_R_CBEIM_BIT       (10)
#define GPTM4_GPTMIMR_R_CBEIM_DIS       (0x00000000)
#define GPTM4_GPTMIMR_R_CBEIM_EN        (0x00000400)

#define GPTM4_GPTMIMR_CBEIM_MASK        (0x00000001)
#define GPTM4_GPTMIMR_CBEIM_DIS         (0x00000000)
#define GPTM4_GPTMIMR_CBEIM_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMIMR_R_TBMIM_MASK      (0x00000800)
#define GPTM4_GPTMIMR_R_TBMIM_BIT       (11)
#define GPTM4_GPTMIMR_R_TBMIM_DIS       (0x00000000)
#define GPTM4_GPTMIMR_R_TBMIM_EN        (0x00000800)

#define GPTM4_GPTMIMR_TBMIM_MASK        (0x00000001)
#define GPTM4_GPTMIMR_TBMIM_DIS         (0x00000000)
#define GPTM4_GPTMIMR_TBMIM_EN          (0x00000001)
//--------

//--------
#define GPTM4_GPTMIMR_R_WUEIM_MASK      (0x00010000)
#define GPTM4_GPTMIMR_R_WUEIM_BIT       (16)
#define GPTM4_GPTMIMR_R_WUEIM_DIS       (0x00000000)
#define GPTM4_GPTMIMR_R_WUEIM_EN        (0x00010000)

#define GPTM4_GPTMIMR_WUEIM_MASK        (0x00000001)
#define GPTM4_GPTMIMR_WUEIM_DIS         (0x00000000)
#define GPTM4_GPTMIMR_WUEIM_EN          (0x00000001)
//--------

#define GPTM4_GPTMIMR_TATOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(0*4))))
#define GPTM4_GPTMIMR_CAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(1*4))))
#define GPTM4_GPTMIMR_CAEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(2*4))))
#define GPTM4_GPTMIMR_RTCIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(3*4))))
#define GPTM4_GPTMIMR_TAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(4*4))))
#define GPTM4_GPTMIMR_TBTOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(8*4))))
#define GPTM4_GPTMIMR_CBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(9*4))))
#define GPTM4_GPTMIMR_CBEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(10*4))))
#define GPTM4_GPTMIMR_TBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(11*4))))
#define GPTM4_GPTMIMR_WUEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(16*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.7 GPTMRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMRIS            (((GPTMRIS_TypeDef*)(GPTM4_BASE + GPTM_GPTMRIS_OFFSET )))
#define GPTM4_GPTMRIS_R          (*((volatile const uint32_t *)(GPTM4_BASE +GPTM_GPTMRIS_OFFSET)))



//--------
#define GPTM4_GPTMRIS_R_TATORIS_MASK      (0x00000001)
#define GPTM4_GPTMRIS_R_TATORIS_BIT       (0)
#define GPTM4_GPTMRIS_R_TATORIS_NOACTIVE  (0x00000000)
#define GPTM4_GPTMRIS_R_TATORIS_ACTIVE    (0x00000001)

#define GPTM4_GPTMRIS_TATORIS_MASK        (0x00000001)
#define GPTM4_GPTMRIS_TATORIS_NOACTIVE    (0x00000000)
#define GPTM4_GPTMRIS_TATORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM4_GPTMRIS_R_CAMRIS_MASK      (0x00000002)
#define GPTM4_GPTMRIS_R_CAMRIS_BIT       (1)
#define GPTM4_GPTMRIS_R_CAMRIS_NOACTIVE  (0x00000000)
#define GPTM4_GPTMRIS_R_CAMRIS_ACTIVE    (0x00000002)

#define GPTM4_GPTMRIS_CAMRIS_MASK        (0x00000001)
#define GPTM4_GPTMRIS_CAMRIS_NOACTIVE    (0x00000000)
#define GPTM4_GPTMRIS_CAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM4_GPTMRIS_R_CAERIS_MASK      (0x00000004)
#define GPTM4_GPTMRIS_R_CAERIS_BIT       (2)
#define GPTM4_GPTMRIS_R_CAERIS_NOACTIVE  (0x00000000)
#define GPTM4_GPTMRIS_R_CAERIS_ACTIVE    (0x00000004)

#define GPTM4_GPTMRIS_CAERIS_MASK        (0x00000001)
#define GPTM4_GPTMRIS_CAERIS_NOACTIVE    (0x00000000)
#define GPTM4_GPTMRIS_CAERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM4_GPTMRIS_R_RTCRIS_MASK      (0x00000008)
#define GPTM4_GPTMRIS_R_RTCRIS_BIT       (3)
#define GPTM4_GPTMRIS_R_RTCRIS_NOACTIVE  (0x00000000)
#define GPTM4_GPTMRIS_R_RTCRIS_ACTIVE    (0x00000008)

#define GPTM4_GPTMRIS_RTCRIS_MASK        (0x00000001)
#define GPTM4_GPTMRIS_RTCRIS_NOACTIVE    (0x00000000)
#define GPTM4_GPTMRIS_RTCRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM4_GPTMRIS_R_TAMRIS_MASK      (0x00000010)
#define GPTM4_GPTMRIS_R_TAMRIS_BIT       (4)
#define GPTM4_GPTMRIS_R_TAMRIS_NOACTIVE  (0x00000000)
#define GPTM4_GPTMRIS_R_TAMRIS_ACTIVE    (0x00000010)

#define GPTM4_GPTMRIS_TAMRIS_MASK        (0x00000001)
#define GPTM4_GPTMRIS_TAMRIS_NOACTIVE    (0x00000000)
#define GPTM4_GPTMRIS_TAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM4_GPTMRIS_R_TBTORIS_MASK      (0x00000100)
#define GPTM4_GPTMRIS_R_TBTORIS_BIT       (8)
#define GPTM4_GPTMRIS_R_TBTORIS_NOACTIVE  (0x00000000)
#define GPTM4_GPTMRIS_R_TBTORIS_ACTIVE    (0x00000100)

#define GPTM4_GPTMRIS_TBTORIS_MASK        (0x00000001)
#define GPTM4_GPTMRIS_TBTORIS_NOACTIVE    (0x00000000)
#define GPTM4_GPTMRIS_TBTORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM4_GPTMRIS_R_CBMRIS_MASK      (0x00000200)
#define GPTM4_GPTMRIS_R_CBMRIS_BIT       (9)
#define GPTM4_GPTMRIS_R_CBMRIS_NOACTIVE  (0x00000000)
#define GPTM4_GPTMRIS_R_CBMRIS_ACTIVE    (0x00000200)

#define GPTM4_GPTMRIS_CBMRIS_MASK        (0x00000001)
#define GPTM4_GPTMRIS_CBMRIS_NOACTIVE    (0x00000000)
#define GPTM4_GPTMRIS_CBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM4_GPTMRIS_R_CBERIS_MASK      (0x00000400)
#define GPTM4_GPTMRIS_R_CBERIS_BIT       (10)
#define GPTM4_GPTMRIS_R_CBERIS_NOACTIVE  (0x00000000)
#define GPTM4_GPTMRIS_R_CBERIS_ACTIVE    (0x00000400)

#define GPTM4_GPTMRIS_CBERIS_MASK        (0x00000001)
#define GPTM4_GPTMRIS_CBERIS_NOACTIVE    (0x00000000)
#define GPTM4_GPTMRIS_CBERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM4_GPTMRIS_R_TBMRIS_MASK      (0x00000800)
#define GPTM4_GPTMRIS_R_TBMRIS_BIT       (11)
#define GPTM4_GPTMRIS_R_TBMRIS_NOACTIVE  (0x00000000)
#define GPTM4_GPTMRIS_R_TBMRIS_ACTIVE    (0x00000800)

#define GPTM4_GPTMRIS_TBMRIS_MASK        (0x00000001)
#define GPTM4_GPTMRIS_TBMRIS_NOACTIVE    (0x00000000)
#define GPTM4_GPTMRIS_TBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM4_GPTMRIS_R_WUERIS_MASK      (0x00010000)
#define GPTM4_GPTMRIS_R_WUERIS_BIT       (16)
#define GPTM4_GPTMRIS_R_WUERIS_NOACTIVE  (0x00000000)
#define GPTM4_GPTMRIS_R_WUERIS_ACTIVE    (0x00010000)

#define GPTM4_GPTMRIS_WUERIS_MASK        (0x00000001)
#define GPTM4_GPTMRIS_WUERIS_NOACTIVE    (0x00000000)
#define GPTM4_GPTMRIS_WUERIS_ACTIVE      (0x00000001)
//--------

#define GPTM4_GPTMRIS_TATORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(0*4))))
#define GPTM4_GPTMRIS_CAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(1*4))))
#define GPTM4_GPTMRIS_CAERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(2*4))))
#define GPTM4_GPTMRIS_RTCRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(3*4))))
#define GPTM4_GPTMRIS_TAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(4*4))))
#define GPTM4_GPTMRIS_TBTORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(8*4))))
#define GPTM4_GPTMRIS_CBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(9*4))))
#define GPTM4_GPTMRIS_CBERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(10*4))))
#define GPTM4_GPTMRIS_TBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(11*4))))
#define GPTM4_GPTMRIS_WUERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(16*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.8 GPTMMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMMIS            (((GPTMMIS_TypeDef*)(GPTM4_BASE + GPTM_GPTMMIS_OFFSET )))
#define GPTM4_GPTMMIS_R          (*((volatile const uint32_t *)(GPTM4_BASE +GPTM_GPTMMIS_OFFSET)))




//--------
#define GPTM4_GPTMMIS_R_TATOMIS_MASK      (0x00000001)
#define GPTM4_GPTMMIS_R_TATOMIS_BIT       (0)
#define GPTM4_GPTMMIS_R_TATOMIS_NOOCCUR  (0x00000000)
#define GPTM4_GPTMMIS_R_TATOMIS_OCCUR    (0x00000001)

#define GPTM4_GPTMMIS_TATOMIS_MASK        (0x00000001)
#define GPTM4_GPTMMIS_TATOMIS_NOOCCUR    (0x00000000)
#define GPTM4_GPTMMIS_TATOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM4_GPTMMIS_R_CAMMIS_MASK      (0x00000002)
#define GPTM4_GPTMMIS_R_CAMMIS_BIT       (1)
#define GPTM4_GPTMMIS_R_CAMMIS_NOOCCUR  (0x00000000)
#define GPTM4_GPTMMIS_R_CAMMIS_OCCUR    (0x00000002)

#define GPTM4_GPTMMIS_CAMMIS_MASK        (0x00000001)
#define GPTM4_GPTMMIS_CAMMIS_NOOCCUR    (0x00000000)
#define GPTM4_GPTMMIS_CAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM4_GPTMMIS_R_CAEMIS_MASK      (0x00000004)
#define GPTM4_GPTMMIS_R_CAEMIS_BIT       (2)
#define GPTM4_GPTMMIS_R_CAEMIS_NOOCCUR  (0x00000000)
#define GPTM4_GPTMMIS_R_CAEMIS_OCCUR    (0x00000004)

#define GPTM4_GPTMMIS_CAEMIS_MASK        (0x00000001)
#define GPTM4_GPTMMIS_CAEMIS_NOOCCUR    (0x00000000)
#define GPTM4_GPTMMIS_CAEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM4_GPTMMIS_R_RTCMIS_MASK      (0x00000008)
#define GPTM4_GPTMMIS_R_RTCMIS_BIT       (3)
#define GPTM4_GPTMMIS_R_RTCMIS_NOOCCUR  (0x00000000)
#define GPTM4_GPTMMIS_R_RTCMIS_OCCUR    (0x00000008)

#define GPTM4_GPTMMIS_RTCMIS_MASK        (0x00000001)
#define GPTM4_GPTMMIS_RTCMIS_NOOCCUR    (0x00000000)
#define GPTM4_GPTMMIS_RTCMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM4_GPTMMIS_R_TAMMIS_MASK      (0x00000010)
#define GPTM4_GPTMMIS_R_TAMMIS_BIT       (4)
#define GPTM4_GPTMMIS_R_TAMMIS_NOOCCUR  (0x00000000)
#define GPTM4_GPTMMIS_R_TAMMIS_OCCUR    (0x00000010)

#define GPTM4_GPTMMIS_TAMMIS_MASK        (0x00000001)
#define GPTM4_GPTMMIS_TAMMIS_NOOCCUR    (0x00000000)
#define GPTM4_GPTMMIS_TAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM4_GPTMMIS_R_TBTOMIS_MASK      (0x00000100)
#define GPTM4_GPTMMIS_R_TBTOMIS_BIT       (8)
#define GPTM4_GPTMMIS_R_TBTOMIS_NOOCCUR  (0x00000000)
#define GPTM4_GPTMMIS_R_TBTOMIS_OCCUR    (0x00000100)

#define GPTM4_GPTMMIS_TBTOMIS_MASK        (0x00000001)
#define GPTM4_GPTMMIS_TBTOMIS_NOOCCUR    (0x00000000)
#define GPTM4_GPTMMIS_TBTOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM4_GPTMMIS_R_CBMMIS_MASK      (0x00000200)
#define GPTM4_GPTMMIS_R_CBMMIS_BIT       (9)
#define GPTM4_GPTMMIS_R_CBMMIS_NOOCCUR  (0x00000000)
#define GPTM4_GPTMMIS_R_CBMMIS_OCCUR    (0x00000200)

#define GPTM4_GPTMMIS_CBMMIS_MASK        (0x00000001)
#define GPTM4_GPTMMIS_CBMMIS_NOOCCUR    (0x00000000)
#define GPTM4_GPTMMIS_CBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM4_GPTMMIS_R_CBEMIS_MASK      (0x00000400)
#define GPTM4_GPTMMIS_R_CBEMIS_BIT       (10)
#define GPTM4_GPTMMIS_R_CBEMIS_NOOCCUR  (0x00000000)
#define GPTM4_GPTMMIS_R_CBEMIS_OCCUR    (0x00000400)

#define GPTM4_GPTMMIS_CBEMIS_MASK        (0x00000001)
#define GPTM4_GPTMMIS_CBEMIS_NOOCCUR    (0x00000000)
#define GPTM4_GPTMMIS_CBEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM4_GPTMMIS_R_TBMMIS_MASK      (0x00000800)
#define GPTM4_GPTMMIS_R_TBMMIS_BIT       (11)
#define GPTM4_GPTMMIS_R_TBMMIS_NOOCCUR  (0x00000000)
#define GPTM4_GPTMMIS_R_TBMMIS_OCCUR    (0x00000800)

#define GPTM4_GPTMMIS_TBMMIS_MASK        (0x00000001)
#define GPTM4_GPTMMIS_TBMMIS_NOOCCUR    (0x00000000)
#define GPTM4_GPTMMIS_TBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM4_GPTMMIS_R_WUEMIS_MASK      (0x00010000)
#define GPTM4_GPTMMIS_R_WUEMIS_BIT       (16)
#define GPTM4_GPTMMIS_R_WUEMIS_NOOCCUR  (0x00000000)
#define GPTM4_GPTMMIS_R_WUEMIS_OCCUR    (0x00010000)

#define GPTM4_GPTMMIS_WUEMIS_MASK        (0x00000001)
#define GPTM4_GPTMMIS_WUEMIS_NOOCCUR    (0x00000000)
#define GPTM4_GPTMMIS_WUEMIS_OCCUR      (0x00000001)
//--------

#define GPTM4_GPTMMIS_TATOMIS           (0x00000001)
#define GPTM4_GPTMMIS_CAMMIS            (0x00000002)
#define GPTM4_GPTMMIS_CAEMIS            (0x00000004)
#define GPTM4_GPTMMIS_RTCMIS            (0x00000008)
#define GPTM4_GPTMMIS_TAMMIS            (0x00000010)
#define GPTM4_GPTMMIS_TBTOMIS           (0x00000100)
#define GPTM4_GPTMMIS_CBMMIS            (0x00000200)
#define GPTM4_GPTMMIS_CBEMIS            (0x00000400)
#define GPTM4_GPTMMIS_TBMMIS            (0x00000800)
#define GPTM4_GPTMMIS_WUEMIS            (0x00010000)


#define GPTM4_GPTMMIS_TATOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(0*4))))
#define GPTM4_GPTMMIS_CAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(1*4))))
#define GPTM4_GPTMMIS_CAEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(2*4))))
#define GPTM4_GPTMMIS_RTCMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(3*4))))
#define GPTM4_GPTMMIS_TAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(4*4))))
#define GPTM4_GPTMMIS_TBTOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(8*4))))
#define GPTM4_GPTMMIS_CBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(9*4))))
#define GPTM4_GPTMMIS_CBEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(10*4))))
#define GPTM4_GPTMMIS_TBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(11*4))))
#define GPTM4_GPTMMIS_WUEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.9 GPTMICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMICR            (((GPTMICR_TypeDef*)(GPTM4_BASE + GPTM_GPTMICR_OFFSET )))
#define GPTM4_GPTMICR_R          (*((volatile uint32_t *)(GPTM4_BASE +GPTM_GPTMICR_OFFSET)))



//--------
#define GPTM4_GPTMICR_R_TATOCINT_MASK      (0x00000001)
#define GPTM4_GPTMICR_R_TATOCINT_BIT       (0)
#define GPTM4_GPTMICR_R_TATOCINT_CLEAR     (0x00000001)

#define GPTM4_GPTMICR_TATOCINT_MASK        (0x00000001)
#define GPTM4_GPTMICR_TATOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM4_GPTMICR_R_CAMCINT_MASK      (0x00000002)
#define GPTM4_GPTMICR_R_CAMCINT_BIT       (1)
#define GPTM4_GPTMICR_R_CAMCINT_CLEAR     (0x00000002)

#define GPTM4_GPTMICR_CAMCINT_MASK        (0x00000001)
#define GPTM4_GPTMICR_CAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM4_GPTMICR_R_CAECINT_MASK      (0x00000004)
#define GPTM4_GPTMICR_R_CAECINT_BIT       (2)
#define GPTM4_GPTMICR_R_CAECINT_CLEAR     (0x00000004)

#define GPTM4_GPTMICR_CAECINT_MASK        (0x00000001)
#define GPTM4_GPTMICR_CAECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM4_GPTMICR_R_RTCCINT_MASK      (0x00000008)
#define GPTM4_GPTMICR_R_RTCCINT_BIT       (3)
#define GPTM4_GPTMICR_R_RTCCINT_CLEAR     (0x00000008)

#define GPTM4_GPTMICR_RTCCINT_MASK        (0x00000001)
#define GPTM4_GPTMICR_RTCCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM4_GPTMICR_R_TAMCINT_MASK      (0x00000010)
#define GPTM4_GPTMICR_R_TAMCINT_BIT       (4)
#define GPTM4_GPTMICR_R_TAMCINT_CLEAR     (0x00000010)

#define GPTM4_GPTMICR_TAMCINT_MASK        (0x00000001)
#define GPTM4_GPTMICR_TAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM4_GPTMICR_R_TBTOCINT_MASK      (0x00000100)
#define GPTM4_GPTMICR_R_TBTOCINT_BIT       (8)
#define GPTM4_GPTMICR_R_TBTOCINT_CLEAR     (0x00000100)

#define GPTM4_GPTMICR_TBTOCINT_MASK        (0x00000001)
#define GPTM4_GPTMICR_TBTOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM4_GPTMICR_R_CBMCINT_MASK      (0x00000200)
#define GPTM4_GPTMICR_R_CBMCINT_BIT       (9)
#define GPTM4_GPTMICR_R_CBMCINT_CLEAR     (0x00000200)

#define GPTM4_GPTMICR_CBMCINT_MASK        (0x00000001)
#define GPTM4_GPTMICR_CBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM4_GPTMICR_R_CBECINT_MASK      (0x00000400)
#define GPTM4_GPTMICR_R_CBECINT_BIT       (10)
#define GPTM4_GPTMICR_R_CBECINT_CLEAR     (0x00000400)

#define GPTM4_GPTMICR_CBECINT_MASK        (0x00000001)
#define GPTM4_GPTMICR_CBECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM4_GPTMICR_R_TBMCINT_MASK      (0x00000800)
#define GPTM4_GPTMICR_R_TBMCINT_BIT       (11)
#define GPTM4_GPTMICR_R_TBMCINT_CLEAR     (0x00000800)

#define GPTM4_GPTMICR_TBMCINT_MASK        (0x00000001)
#define GPTM4_GPTMICR_TBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM4_GPTMICR_R_WUECINT_MASK      (0x00010000)
#define GPTM4_GPTMICR_R_WUECINT_BIT       (16)
#define GPTM4_GPTMICR_R_WUECINT_CLEAR     (0x00010000)

#define GPTM4_GPTMICR_WUECINT_MASK        (0x00000001)
#define GPTM4_GPTMICR_WUECINT_CLEAR       (0x00000001)
//--------


#define GPTM4_GPTMICR_TATOCINT           (0x00000001)
#define GPTM4_GPTMICR_CAMCINT            (0x00000002)
#define GPTM4_GPTMICR_CAECINT            (0x00000004)
#define GPTM4_GPTMICR_RTCCINT            (0x00000008)
#define GPTM4_GPTMICR_TAMCINT            (0x00000010)
#define GPTM4_GPTMICR_TBTOCINT           (0x00000100)
#define GPTM4_GPTMICR_CBMCINT            (0x00000200)
#define GPTM4_GPTMICR_CBECINT            (0x00000400)
#define GPTM4_GPTMICR_TBMCINT            (0x00000800)
#define GPTM4_GPTMICR_WUECINT            (0x00010000)


#define GPTM4_GPTMICR_TATOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(0*4))))
#define GPTM4_GPTMICR_CAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(1*4))))
#define GPTM4_GPTMICR_CAECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(2*4))))
#define GPTM4_GPTMICR_RTCCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(3*4))))
#define GPTM4_GPTMICR_TAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(4*4))))
#define GPTM4_GPTMICR_TBTOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(8*4))))
#define GPTM4_GPTMICR_CBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(9*4))))
#define GPTM4_GPTMICR_CBECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(10*4))))
#define GPTM4_GPTMICR_TBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(11*4))))
#define GPTM4_GPTMICR_WUECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.10 GPTMTAILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMTAILR            (((GPTMTAILR_TypeDef*)(GPTM4_BASE + GPTM_GPTMTAILR_OFFSET )))
#define GPTM4_GPTMTAILR_R          (*((volatile uint32_t *)(GPTM4_BASE +GPTM_GPTMTAILR_OFFSET)))

//--------
#define GPTM4_GPTMTAILR_R_TAILR_MASK      (0xFFFFFFFF)
#define GPTM4_GPTMTAILR_R_TAILR_BIT       (0)

#define GPTM4_GPTMTAILR_TAILR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.11 GPTMTBILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMTBILR            (((GPTMTBILR_TypeDef*)(GPTM4_BASE + GPTM_GPTMTBILR_OFFSET )))
#define GPTM4_GPTMTBILR_R          (*((volatile uint32_t *)(GPTM4_BASE +GPTM_GPTMTBILR_OFFSET)))

//--------
#define GPTM4_GPTMTBILR_R_TBILR_MASK      (0xFFFFFFFF)
#define GPTM4_GPTMTBILR_R_TBILR_BIT       (0)

#define GPTM4_GPTMTBILR_TBILR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.12 GPTMTAMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMTAMATCHR            (((GPTMTAMATCHR_TypeDef*)(GPTM4_BASE + GPTM_GPTMTAMATCHR_OFFSET )))
#define GPTM4_GPTMTAMATCHR_R          (*((volatile uint32_t *)(GPTM4_BASE +GPTM_GPTMTAMATCHR_OFFSET)))


//--------
#define GPTM4_GPTMTAMATCHR_R_TAMR_MASK      (0xFFFFFFFF)
#define GPTM4_GPTMTAMATCHR_R_TAMR_BIT       (0)

#define GPTM4_GPTMTAMATCHR_TAMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.13 GPTMTBMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMTBMATCHR            (((GPTMTBMATCHR_TypeDef*)(GPTM4_BASE + GPTM_GPTMTBMATCHR_OFFSET )))
#define GPTM4_GPTMTBMATCHR_R          (*((volatile uint32_t *)(GPTM4_BASE +GPTM_GPTMTBMATCHR_OFFSET)))


//--------
#define GPTM4_GPTMTBMATCHR_R_TBMR_MASK      (0xFFFFFFFF)
#define GPTM4_GPTMTBMATCHR_R_TBMR_BIT       (0)

#define GPTM4_GPTMTBMATCHR_TBMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.14 GPTMTAPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMTAPR            (((GPTMTAPR_TypeDef*)(GPTM4_BASE + GPTM_GPTMTAPR_OFFSET )))
#define GPTM4_GPTMTAPR_R          (*((volatile uint32_t *)(GPTM4_BASE +GPTM_GPTMTAPR_OFFSET)))


//--------
#define GPTM4_GPTMTAPR_R_TAPSR_MASK      (0x000000FF)
#define GPTM4_GPTMTAPR_R_TAPSR_BIT       (0)

#define GPTM4_GPTMTAPR_TAPSR_MASK        (0x000000FF)
//--------

//--------
#define GPTM4_GPTMTAPR_R_TAPSRH_MASK      (0x0000FF00)
#define GPTM4_GPTMTAPR_R_TAPSRH_BIT       (8)

#define GPTM4_GPTMTAPR_TAPSRH_MASK        (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.15 GPTMTBPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMTBPR            (((GPTMTBPR_TypeDef*)(GPTM4_BASE + GPTM_GPTMTBPR_OFFSET )))
#define GPTM4_GPTMTBPR_R          (*((volatile uint32_t *)(GPTM4_BASE +GPTM_GPTMTBPR_OFFSET)))


//--------
#define GPTM4_GPTMTBPR_R_TBPSR_MASK      (0x000000FF)
#define GPTM4_GPTMTBPR_R_TBPSR_BIT       (0)

#define GPTM4_GPTMTBPR_TBPSR_MASK        (0x000000FF)
//--------


//--------
#define GPTM4_GPTMTBPR_R_TBPSRH_MASK      (0x0000FF00)
#define GPTM4_GPTMTBPR_R_TBPSRH_BIT       (8)

#define GPTM4_GPTMTBPR_TBPSRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.16 GPTMTAPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMTAPMR            (((GPTMTAPMR_TypeDef*)(GPTM4_BASE + GPTM_GPTMTAPMR_OFFSET )))
#define GPTM4_GPTMTAPMR_R          (*((volatile uint32_t *)(GPTM4_BASE +GPTM_GPTMTAPMR_OFFSET)))


//--------
#define GPTM4_GPTMTAPMR_R_TAPSMR_MASK      (0x000000FF)
#define GPTM4_GPTMTAPMR_R_TAPSMR_BIT       (0)

#define GPTM4_GPTMTAMPR_TAPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPTM4_GPTMTAPMR_R_TAPSMRH_MASK      (0x0000FF00)
#define GPTM4_GPTMTAPMR_R_TAPSMRH_BIT       (8)

#define GPTM4_GPTMTAPMR_TAPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.17 GPTMTBPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMTBPMR            (((GPTMTBPMR_TypeDef*)(GPTM4_BASE + GPTM_GPTMTBPMR_OFFSET )))
#define GPTM4_GPTMTBPMR_R          (*((volatile uint32_t *)(GPTM4_BASE +GPTM_GPTMTBPMR_OFFSET)))

//--------
#define GPTM4_GPTMTBPMR_R_TBPSMR_MASK      (0x000000FF)
#define GPTM4_GPTMTBPMR_R_TBPSMR_BIT       (0)

#define GPTM4_GPTMTBMPR_TBPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPTM4_GPTMTBPMR_R_TBPSMRH_MASK      (0x0000FF00)
#define GPTM4_GPTMTBPMR_R_TBPSMRH_BIT       (8)

#define GPTM4_GPTMTBPMR_TBPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.18 GPTMTAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMTAR            (((GPTMTAR_TypeDef*)(GPTM4_BASE + GPTM_GPTMTAR_OFFSET )))
#define GPTM4_GPTMTAR_R          (*((volatile const  int32_t *)(GPTM4_BASE +GPTM_GPTMTAR_OFFSET)))


//--------
#define GPTM4_GPTMTAR_R_TAR_MASK      (0xFFFFFFFF)
#define GPTM4_GPTMTAR_R_TAR_BIT       (0)

#define GPTM4_GPTMTAR_TAR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.19 GPTMTBR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMTBR            (((GPTMTBR_TypeDef*)(GPTM4_BASE + GPTM_GPTMTBR_OFFSET )))
#define GPTM4_GPTMTBR_R          (*((volatile const uint32_t *)(GPTM4_BASE +GPTM_GPTMTBR_OFFSET)))


//--------
#define GPTM4_GPTMTBR_R_TBR_MASK      (0xFFFFFFFF)
#define GPTM4_GPTMTBR_R_TBR_BIT       (0)

#define GPTM4_GPTMTBR_TBR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.20 GPTMTAV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMTAV            (((GPTMTAV_TypeDef*)(GPTM4_BASE + GPTM_GPTMTAV_OFFSET )))
#define GPTM4_GPTMTAV_R          (*((volatile uint32_t *)(GPTM4_BASE +GPTM_GPTMTAV_OFFSET)))

//--------
#define GPTM4_GPTMTAV_R_TAV_MASK      (0xFFFFFFFF)
#define GPTM4_GPTMTAV_R_TAV_BIT       (0)

#define GPTM4_GPTMTAV_TAV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.21 GPTMTBV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMTBV            (((GPTMTBV_TypeDef*)(GPTM4_BASE + GPTM_GPTMTBV_OFFSET )))
#define GPTM4_GPTMTBV_R          (*((volatile uint32_t *)(GPTM4_BASE +GPTM_GPTMTBV_OFFSET)))


//--------
#define GPTM4_GPTMTBV_R_TBV_MASK      (0xFFFFFFFF)
#define GPTM4_GPTMTBV_R_TBV_BIT       (0)

#define GPTM4_GPTMTBV_TBV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.22 GPTMRTCPD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMRTCPD            (((GPTMRTCPD_TypeDef*)(GPTM4_BASE + GPTM_GPTMRTCPD_OFFSET )))
#define GPTM4_GPTMRTCPD_R          (*((volatile const uint32_t *)(GPTM4_BASE +GPTM_GPTMRTCPD_OFFSET)))


//--------
#define GPTM4_GPTMRTCPD_R_RTCPD_MASK      (0x0000FFFF)
#define GPTM4_GPTMRTCPD_R_RTCPD_BIT       (0)
#define GPTM4_GPTMRTCPD_R_RTCPD_DEFAULT   (0x00007FFF)

#define GPTM4_GPTMRTCPD_RTCPD_MASK        (0x0000FFFF)
#define GPTM4_GPTMRTCPD_RTCPD_DEFAULT     (0x00007FFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.23 GPTMTAPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPTM4_GPTMTAPS            (((GPTMTAPS_TypeDef*)(GPTM4_BASE + GPTM_GPTMTAPS_OFFSET )))
#define GPTM4_GPTMTAPS_R          (*((volatile const uint32_t *)(GPTM4_BASE +GPTM_GPTMTAPS_OFFSET)))

//--------
#define GPTM4_GPTMTAPS_R_PSS_MASK      (0x0000FFFF)
#define GPTM4_GPTMTAPS_R_PSS_BIT       (0)

#define GPTM4_GPTMTAPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.24 GPTMTBPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMTBPS            (((GPTMTBPS_TypeDef*)(GPTM4_BASE + GPTM_GPTMTBPS_OFFSET )))
#define GPTM4_GPTMTBPS_R          (*((volatile const uint32_t *)(GPTM4_BASE +GPTM_GPTMTBPS_OFFSET)))

//--------
#define GPTM4_GPTMTBPS_R_PSS_MASK      (0x0000FFFF)
#define GPTM4_GPTMTBPS_R_PSS_BIT       (0)

#define GPTM4_GPTMTBPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.25 GPTMTAPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define GPTM4_GPTMTAPV            (((GPTMTAPV_TypeDef*)(GPTM4_BASE + GPTM_GPTMTAPV_OFFSET )))
#define GPTM4_GPTMTAPV_R          (*((volatile const uint32_t *)(GPTM4_BASE +GPTM_GPTMTAPV_OFFSET)))

//--------
#define GPTM4_GPTMTAPV_R_PSV_MASK      (0x0000FFFF)
#define GPTM4_GPTMTAPV_R_PSV_BIT       (0)

#define GPTM4_GPTMTAPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.26 GPTMTBPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPTM4_GPTMTBPV            (((GPTMTBPV_TypeDef*)(GPTM4_BASE + GPTM_GPTMTBPV_OFFSET )))
#define GPTM4_GPTMTBPV_R          (*((volatile const uint32_t *)(GPTM4_BASE +GPTM_GPTMTBPV_OFFSET)))

//--------
#define GPTM4_GPTMTBPV_R_PSV_MASK      (0x0000FFFF)
#define GPTM4_GPTMTBPV_R_PSV_BIT       (0)

#define GPTM4_GPTMTBPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.27 GPTMPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM4_GPTMPP            (((GPTMPP_TypeDef*)(GPTM4_BASE + GPTM_GPTMPP_OFFSET )))
#define GPTM4_GPTMPP_R          (*((volatile const uint32_t *)(GPTM4_BASE +GPTM_GPTMPP_OFFSET)))

#define GPTM4_GPTMPP_SIZE        (0x0000000F)

//--------
#define GPTM4_GPTMPP_R_SIZE_MASK      (0x0000000F)
#define GPTM4_GPTMPP_R_SIZE_BIT       (0)
#define GPTM4_GPTMPP_R_SIZE_16b       (0x00000000)
#define GPTM4_GPTMPP_R_SIZE_32b       (0x00000001)

#define GPTM4_GPTMPP_SIZE_MASK        (0x0000000F)
#define GPTM4_GPTMPP_SIZE_16b         (0x00000000)
#define GPTM4_GPTMPP_SIZE_32b         (0x00000001)
//--------



// ToDO GPTM5
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 GPTM5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.1 GPTMCFG ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMCFG            (((GPTMCFG_TypeDef*)(GPTM5_BASE + GPTM_GPTMCFG_OFFSET )))
#define GPTM5_GPTMCFG_R          (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMCFG_OFFSET)))


//--------
#define GPTM5_GPTMCFG_R_GPTMCFG_MASK      (0x00000007)
#define GPTM5_GPTMCFG_R_GPTMCFG_BIT       (0)
#define GPTM5_GPTMCFG_R_GPTMCFG_BOTH    (0x00000000)
#define GPTM5_GPTMCFG_R_GPTMCFG_RTC       (0x00000001)
#define GPTM5_GPTMCFG_R_GPTMCFG_SINGLE      (0x00000004)

#define GPTM5_GPTMCFG_GPTMCFG_MASK        (0x00000007)
#define GPTM5_GPTMCFG_GPTMCFG_BOTH      (0x00000000)
#define GPTM5_GPTMCFG_GPTMCFG_RTC         (0x00000001)
#define GPTM5_GPTMCFG_GPTMCFG_SINGLE        (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.2 GPTMTAMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMTAMR            (((GPTMTAMR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTAMR_OFFSET )))
#define GPTM5_GPTMTAMR_R          (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTAMR_OFFSET)))


//--------
#define GPTM5_GPTMTAMR_R_TAMR_MASK      (0x00000003)
#define GPTM5_GPTMTAMR_R_TAMR_BIT       (0)
#define GPTM5_GPTMTAMR_R_TAMR_ONESHOT   (0x00000001)
#define GPTM5_GPTMTAMR_R_TAMR_PERIOD    (0x00000002)
#define GPTM5_GPTMTAMR_R_TAMR_CAPTURE   (0x00000003)

#define GPTM5_GPTMTAMR_TAMR_MASK        (0x00000003)
#define GPTM5_GPTMTAMR_TAMR_ONESHOT     (0x00000001)
#define GPTM5_GPTMTAMR_TAMR_PERIOD      (0x00000002)
#define GPTM5_GPTMTAMR_TAMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPTM5_GPTMTAMR_R_TACMR_MASK      (0x00000004)
#define GPTM5_GPTMTAMR_R_TACMR_BIT       (2)
#define GPTM5_GPTMTAMR_R_TACMR_EDGECOUNT (0x00000000)
#define GPTM5_GPTMTAMR_R_TACMR_EDGETIME  (0x00000004)

#define GPTM5_GPTMTAMR_TACMR_MASK        (0x00000001)
#define GPTM5_GPTMTAMR_TACMR_EDGECOUNT   (0x00000000)
#define GPTM5_GPTMTAMR_TACMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPTM5_GPTMTAMR_R_TAAMS_MASK      (0x00000008)
#define GPTM5_GPTMTAMR_R_TAAMS_BIT       (3)
#define GPTM5_GPTMTAMR_R_TAAMS_CAPCOMP   (0x00000000)
#define GPTM5_GPTMTAMR_R_TAAMS_PWM       (0x00000008)

#define GPTM5_GPTMTAMR_TAAMS_MASK        (0x00000001)
#define GPTM5_GPTMTAMR_TAAMS_CAPCOMP     (0x00000000)
#define GPTM5_GPTMTAMR_TAAMS_PWM         (0x00000001)
//--------

//--------
#define GPTM5_GPTMTAMR_R_TACDIR_MASK      (0x00000010)
#define GPTM5_GPTMTAMR_R_TACDIR_BIT       (4)
#define GPTM5_GPTMTAMR_R_TACDIR_DOWN      (0x00000000)
#define GPTM5_GPTMTAMR_R_TACDIR_UP        (0x00000010)

#define GPTM5_GPTMTAMR_TACDIR_MASK        (0x00000001)
#define GPTM5_GPTMTAMR_TACDIR_DOWN        (0x00000000)
#define GPTM5_GPTMTAMR_TACDIR_UP          (0x00000001)
//--------

//--------
#define GPTM5_GPTMTAMR_R_TAMIE_MASK      (0x00000020)
#define GPTM5_GPTMTAMR_R_TAMIE_BIT       (5)
#define GPTM5_GPTMTAMR_R_TAMIE_DIS       (0x00000000)
#define GPTM5_GPTMTAMR_R_TAMIE_EN        (0x00000020)

#define GPTM5_GPTMTAMR_TAMIE_MASK        (0x00000001)
#define GPTM5_GPTMTAMR_TAMIE_DIS         (0x00000000)
#define GPTM5_GPTMTAMR_TAMIE_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMTAMR_R_TAWOT_MASK      (0x00000040)
#define GPTM5_GPTMTAMR_R_TAWOT_BIT       (6)
#define GPTM5_GPTMTAMR_R_TAWOT_INSTANT   (0x00000000)
#define GPTM5_GPTMTAMR_R_TAWOT_TRIGGER   (0x00000040)

#define GPTM5_GPTMTAMR_TAWOT_MASK        (0x00000001)
#define GPTM5_GPTMTAMR_TAWOT_INSTANT     (0x00000000)
#define GPTM5_GPTMTAMR_TAWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPTM5_GPTMTAMR_R_TASNAPS_MASK      (0x00000080)
#define GPTM5_GPTMTAMR_R_TASNAPS_BIT       (7)
#define GPTM5_GPTMTAMR_R_TASNAPS_DIS       (0x00000000)
#define GPTM5_GPTMTAMR_R_TASNAPS_EN        (0x00000080)

#define GPTM5_GPTMTAMR_TASNAPS_MASK        (0x00000001)
#define GPTM5_GPTMTAMR_TASNAPS_DIS         (0x00000000)
#define GPTM5_GPTMTAMR_TASNAPS_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMTAMR_R_TAILD_MASK      (0x00000100)
#define GPTM5_GPTMTAMR_R_TAILD_BIT       (8)
#define GPTM5_GPTMTAMR_R_TAILD_NEXT      (0x00000000)
#define GPTM5_GPTMTAMR_R_TAILD_TIMEOUT   (0x00000100)

#define GPTM5_GPTMTAMR_TAILD_MASK        (0x00000001)
#define GPTM5_GPTMTAMR_TAILD_NEXT        (0x00000000)
#define GPTM5_GPTMTAMR_TAILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM5_GPTMTAMR_R_TAPWMIE_MASK      (0x00000200)
#define GPTM5_GPTMTAMR_R_TAPWMIE_BIT       (9)
#define GPTM5_GPTMTAMR_R_TAPWMIE_DIS       (0x00000000)
#define GPTM5_GPTMTAMR_R_TAPWMIE_EN        (0x00000200)

#define GPTM5_GPTMTAMR_TAPWMIE_MASK        (0x00000001)
#define GPTM5_GPTMTAMR_TAPWMIE_DIS         (0x00000000)
#define GPTM5_GPTMTAMR_TAPWMIE_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMTAMR_R_TAMRSU_MASK      (0x00000400)
#define GPTM5_GPTMTAMR_R_TAMRSU_BIT       (10)
#define GPTM5_GPTMTAMR_R_TAMRSU_NEXT      (0x00000000)
#define GPTM5_GPTMTAMR_R_TAMRSU_TIMEOUT   (0x00000400)

#define GPTM5_GPTMTAMR_TAMRSU_MASK        (0x00000001)
#define GPTM5_GPTMTAMR_TAMRSU_NEXT        (0x00000000)
#define GPTM5_GPTMTAMR_TAMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM5_GPTMTAMR_R_TAPLO_MASK      (0x00000800)
#define GPTM5_GPTMTAMR_R_TAPLO_BIT       (11)
#define GPTM5_GPTMTAMR_R_TAPLO_LOW       (0x00000000)
#define GPTM5_GPTMTAMR_R_TAPLO_HIGH      (0x00000800)

#define GPTM5_GPTMTAMR_TAPLO_MASK        (0x00000001)
#define GPTM5_GPTMTAMR_TAPLO_LOW         (0x00000000)
#define GPTM5_GPTMTAMR_TAPLO_HIGH        (0x00000001)
//--------

#define GPTM5_GPTMTAMR_TACMR_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(2*4))))
#define GPTM5_GPTMTAMR_TAAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(3*4))))
#define GPTM5_GPTMTAMR_TACDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(4*4))))
#define GPTM5_GPTMTAMR_TAMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(5*4))))
#define GPTM5_GPTMTAMR_TAWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(6*4))))
#define GPTM5_GPTMTAMR_TASNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(7*4))))
#define GPTM5_GPTMTAMR_TAILD_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(8*4))))
#define GPTM5_GPTMTAMR_TAPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(9*4))))
#define GPTM5_GPTMTAMR_TAMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(10*4))))
#define GPTM5_GPTMTAMR_TAPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.3 GPTMTBMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMTBMR            (((GPTMTBMR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTBMR_OFFSET )))
#define GPTM5_GPTMTBMR_R          (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTBMR_OFFSET)))


//--------
#define GPTM5_GPTMTBMR_R_TBMR_MASK      (0x00000003)
#define GPTM5_GPTMTBMR_R_TBMR_BIT       (0)
#define GPTM5_GPTMTBMR_R_TBMR_ONESHOT   (0x00000001)
#define GPTM5_GPTMTBMR_R_TBMR_PERIOD    (0x00000002)
#define GPTM5_GPTMTBMR_R_TBMR_CAPTURE   (0x00000003)

#define GPTM5_GPTMTBMR_TBMR_MASK        (0x00000003)
#define GPTM5_GPTMTBMR_TBMR_ONESHOT     (0x00000001)
#define GPTM5_GPTMTBMR_TBMR_PERIOD      (0x00000002)
#define GPTM5_GPTMTBMR_TBMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPTM5_GPTMTBMR_R_TBCMR_MASK      (0x00000004)
#define GPTM5_GPTMTBMR_R_TBCMR_BIT       (2)
#define GPTM5_GPTMTBMR_R_TBCMR_EDGECOUNT (0x00000000)
#define GPTM5_GPTMTBMR_R_TBCMR_EDGETIME  (0x00000004)

#define GPTM5_GPTMTBMR_TBCMR_MASK        (0x00000001)
#define GPTM5_GPTMTBMR_TBCMR_EDGECOUNT   (0x00000000)
#define GPTM5_GPTMTBMR_TBCMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPTM5_GPTMTBMR_R_TBAMS_MASK      (0x00000008)
#define GPTM5_GPTMTBMR_R_TBAMS_BIT       (3)
#define GPTM5_GPTMTBMR_R_TBAMS_CAPCOMP   (0x00000000)
#define GPTM5_GPTMTBMR_R_TBAMS_PWM       (0x00000008)

#define GPTM5_GPTMTBMR_TBAMS_MASK        (0x00000001)
#define GPTM5_GPTMTBMR_TBAMS_CAPCOMP     (0x00000000)
#define GPTM5_GPTMTBMR_TBAMS_PWM         (0x00000001)
//--------

//--------
#define GPTM5_GPTMTBMR_R_TBCDIR_MASK      (0x00000010)
#define GPTM5_GPTMTBMR_R_TBCDIR_BIT       (4)
#define GPTM5_GPTMTBMR_R_TBCDIR_DOWN      (0x00000000)
#define GPTM5_GPTMTBMR_R_TBCDIR_UP        (0x00000010)

#define GPTM5_GPTMTBMR_TBCDIR_MASK        (0x00000001)
#define GPTM5_GPTMTBMR_TBCDIR_DOWN        (0x00000000)
#define GPTM5_GPTMTBMR_TBCDIR_UP          (0x00000001)
//--------

//--------
#define GPTM5_GPTMTBMR_R_TBMIE_MASK      (0x00000020)
#define GPTM5_GPTMTBMR_R_TBMIE_BIT       (5)
#define GPTM5_GPTMTBMR_R_TBMIE_DIS       (0x00000000)
#define GPTM5_GPTMTBMR_R_TBMIE_EN        (0x00000020)

#define GPTM5_GPTMTBMR_TBMIE_MASK        (0x00000001)
#define GPTM5_GPTMTBMR_TBMIE_DIS         (0x00000000)
#define GPTM5_GPTMTBMR_TBMIE_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMTBMR_R_TBWOT_MASK      (0x00000040)
#define GPTM5_GPTMTBMR_R_TBWOT_BIT       (6)
#define GPTM5_GPTMTBMR_R_TBWOT_INSTANT   (0x00000000)
#define GPTM5_GPTMTBMR_R_TBWOT_TRIGGER   (0x00000040)

#define GPTM5_GPTMTBMR_TBWOT_MASK        (0x00000001)
#define GPTM5_GPTMTBMR_TBWOT_INSTANT     (0x00000000)
#define GPTM5_GPTMTBMR_TBWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPTM5_GPTMTBMR_R_TBSNAPS_MASK      (0x00000080)
#define GPTM5_GPTMTBMR_R_TBSNAPS_BIT       (7)
#define GPTM5_GPTMTBMR_R_TBSNAPS_DIS       (0x00000000)
#define GPTM5_GPTMTBMR_R_TBSNAPS_EN        (0x00000080)

#define GPTM5_GPTMTBMR_TBSNAPS_MASK        (0x00000001)
#define GPTM5_GPTMTBMR_TBSNAPS_DIS         (0x00000000)
#define GPTM5_GPTMTBMR_TBSNAPS_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMTBMR_R_TBILD_MASK      (0x00000100)
#define GPTM5_GPTMTBMR_R_TBILD_BIT       (8)
#define GPTM5_GPTMTBMR_R_TBILD_NEXT      (0x00000000)
#define GPTM5_GPTMTBMR_R_TBILD_TIMEOUT   (0x00000100)

#define GPTM5_GPTMTBMR_TBILD_MASK        (0x00000001)
#define GPTM5_GPTMTBMR_TBILD_NEXT        (0x00000000)
#define GPTM5_GPTMTBMR_TBILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM5_GPTMTBMR_R_TBPWMIE_MASK      (0x00000200)
#define GPTM5_GPTMTBMR_R_TBPWMIE_BIT       (9)
#define GPTM5_GPTMTBMR_R_TBPWMIE_DIS       (0x00000000)
#define GPTM5_GPTMTBMR_R_TBPWMIE_EN        (0x00000200)

#define GPTM5_GPTMTBMR_TBPWMIE_MASK        (0x00000001)
#define GPTM5_GPTMTBMR_TBPWMIE_DIS         (0x00000000)
#define GPTM5_GPTMTBMR_TBPWMIE_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMTBMR_R_TBMRSU_MASK      (0x00000400)
#define GPTM5_GPTMTBMR_R_TBMRSU_BIT       (10)
#define GPTM5_GPTMTBMR_R_TBMRSU_NEXT      (0x00000000)
#define GPTM5_GPTMTBMR_R_TBMRSU_TIMEOUT   (0x00000400)

#define GPTM5_GPTMTBMR_TBMRSU_MASK        (0x00000001)
#define GPTM5_GPTMTBMR_TBMRSU_NEXT        (0x00000000)
#define GPTM5_GPTMTBMR_TBMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPTM5_GPTMTBMR_R_TBPLO_MASK      (0x00000800)
#define GPTM5_GPTMTBMR_R_TBPLO_BIT       (11)
#define GPTM5_GPTMTBMR_R_TBPLO_LOW       (0x00000000)
#define GPTM5_GPTMTBMR_R_TBPLO_HIGH      (0x00000800)

#define GPTM5_GPTMTBMR_TBPLO_MASK        (0x00000001)
#define GPTM5_GPTMTBMR_TBPLO_LOW         (0x00000000)
#define GPTM5_GPTMTBMR_TBPLO_HIGH        (0x00000001)
//--------

#define GPTM5_GPTMTBMR_TBCMR_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(2*4))))
#define GPTM5_GPTMTBMR_TBAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(3*4))))
#define GPTM5_GPTMTBMR_TBCDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(4*4))))
#define GPTM5_GPTMTBMR_TBMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(5*4))))
#define GPTM5_GPTMTBMR_TBWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(6*4))))
#define GPTM5_GPTMTBMR_TBSNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(7*4))))
#define GPTM5_GPTMTBMR_TBILD_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(8*4))))
#define GPTM5_GPTMTBMR_TBPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(9*4))))
#define GPTM5_GPTMTBMR_TBMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(10*4))))
#define GPTM5_GPTMTBMR_TBPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.4 GPTMCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMCTL            (((GPTMCTL_TypeDef*)(GPTM5_BASE + GPTM_GPTMCTL_OFFSET )))
#define GPTM5_GPTMCTL_R          (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMCTL_OFFSET)))


//--------
#define GPTM5_GPTMCTL_R_TAEN_MASK      (0x00000001)
#define GPTM5_GPTMCTL_R_TAEN_BIT       (0)
#define GPTM5_GPTMCTL_R_TAEN_DIS       (0x00000000)
#define GPTM5_GPTMCTL_R_TAEN_EN        (0x00000001)

#define GPTM5_GPTMCTL_TAEN_MASK        (0x00000001)
#define GPTM5_GPTMCTL_TAEN_DIS         (0x00000000)
#define GPTM5_GPTMCTL_TAEN_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMCTL_R_TASTALL_MASK      (0x00000002)
#define GPTM5_GPTMCTL_R_TASTALL_BIT       (1)
#define GPTM5_GPTMCTL_R_TASTALL_CONTINUE  (0x00000000)
#define GPTM5_GPTMCTL_R_TASTALL_FREEZE    (0x00000002)

#define GPTM5_GPTMCTL_TASTALL_MASK        (0x00000001)
#define GPTM5_GPTMCTL_TASTALL_CONTINUE    (0x00000000)
#define GPTM5_GPTMCTL_TASTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPTM5_GPTMCTL_R_TAEVENT_MASK      (0x0000000C)
#define GPTM5_GPTMCTL_R_TAEVENT_BIT       (2)
#define GPTM5_GPTMCTL_R_TAEVENT_POS       (0x00000000)
#define GPTM5_GPTMCTL_R_TAEVENT_NEG       (0x00000004)
#define GPTM5_GPTMCTL_R_TAEVENT_BOTH      (0x0000000C)

#define GPTM5_GPTMCTL_TAEVENT_MASK        (0x00000003)
#define GPTM5_GPTMCTL_TAEVENT_NEG         (0x00000000)
#define GPTM5_GPTMCTL_TAEVENT_POS         (0x00000001)
#define GPTM5_GPTMCTL_TAEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPTM5_GPTMCTL_R_RTCEN_MASK      (0x00000010)
#define GPTM5_GPTMCTL_R_RTCEN_BIT       (4)
#define GPTM5_GPTMCTL_R_RTCEN_CONTINUE  (0x00000000)
#define GPTM5_GPTMCTL_R_RTCEN_FREEZE    (0x00000010)

#define GPTM5_GPTMCTL_RTCEN_MASK        (0x00000001)
#define GPTM5_GPTMCTL_RTCEN_CONTINUE    (0x00000000)
#define GPTM5_GPTMCTL_RTCEN_FREEZE      (0x00000001)
//--------

//--------
#define GPTM5_GPTMCTL_R_TAOTE_MASK      (0x00000020)
#define GPTM5_GPTMCTL_R_TAOTE_BIT       (5)
#define GPTM5_GPTMCTL_R_TAOTE_DIS       (0x00000000)
#define GPTM5_GPTMCTL_R_TAOTE_EN        (0x00000020)

#define GPTM5_GPTMCTL_TAOTE_MASK        (0x00000001)
#define GPTM5_GPTMCTL_TAOTE_DIS         (0x00000000)
#define GPTM5_GPTMCTL_TAOTE_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMCTL_R_TAPWML_MASK      (0x00000040)
#define GPTM5_GPTMCTL_R_TAPWML_BIT       (6)
#define GPTM5_GPTMCTL_R_TAPWML_NA        (0x00000000)
#define GPTM5_GPTMCTL_R_TAPWML_INV       (0x00000040)

#define GPTM5_GPTMCTL_TAPWML_MASK        (0x00000001)
#define GPTM5_GPTMCTL_TAPWML_NA          (0x00000000)
#define GPTM5_GPTMCTL_TAPWML_INV         (0x00000001)
//--------



//--------
#define GPTM5_GPTMCTL_R_TBEN_MASK      (0x00000100)
#define GPTM5_GPTMCTL_R_TBEN_BIT       (8)
#define GPTM5_GPTMCTL_R_TBEN_DIS       (0x00000000)
#define GPTM5_GPTMCTL_R_TBEN_EN        (0x00000100)

#define GPTM5_GPTMCTL_TBEN_MASK        (0x00000001)
#define GPTM5_GPTMCTL_TBEN_DIS         (0x00000000)
#define GPTM5_GPTMCTL_TBEN_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMCTL_R_TBSTALL_MASK      (0x00000200)
#define GPTM5_GPTMCTL_R_TBSTALL_BIT       (9)
#define GPTM5_GPTMCTL_R_TBSTALL_CONTINUE  (0x00000000)
#define GPTM5_GPTMCTL_R_TBSTALL_FREEZE    (0x00000200)

#define GPTM5_GPTMCTL_TBSTALL_MASK        (0x00000001)
#define GPTM5_GPTMCTL_TBSTALL_CONTINUE    (0x00000000)
#define GPTM5_GPTMCTL_TBSTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPTM5_GPTMCTL_R_TBEVENT_MASK      (0x00000C00)
#define GPTM5_GPTMCTL_R_TBEVENT_BIT       (10)
#define GPTM5_GPTMCTL_R_TBEVENT_POS       (0x00000000)
#define GPTM5_GPTMCTL_R_TBEVENT_NEG       (0x00000400)
#define GPTM5_GPTMCTL_R_TBEVENT_BOTH      (0x00000C00)

#define GPTM5_GPTMCTL_TBEVENT_MASK        (0x00000003)
#define GPTM5_GPTMCTL_TBEVENT_NEG         (0x00000000)
#define GPTM5_GPTMCTL_TBEVENT_POS         (0x00000001)
#define GPTM5_GPTMCTL_TBEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPTM5_GPTMCTL_R_TBOTE_MASK      (0x00002000)
#define GPTM5_GPTMCTL_R_TBOTE_BIT       (13)
#define GPTM5_GPTMCTL_R_TBOTE_DIS       (0x00000000)
#define GPTM5_GPTMCTL_R_TBOTE_EN        (0x00002000)

#define GPTM5_GPTMCTL_TBOTE_MASK        (0x00000001)
#define GPTM5_GPTMCTL_TBOTE_DIS         (0x00000000)
#define GPTM5_GPTMCTL_TBOTE_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMCTL_R_TBPWML_MASK      (0x00004000)
#define GPTM5_GPTMCTL_R_TBPWML_BIT       (14)
#define GPTM5_GPTMCTL_R_TBPWML_NA        (0x00000000)
#define GPTM5_GPTMCTL_R_TBPWML_INV       (0x00004000)

#define GPTM5_GPTMCTL_TBPWML_MASK        (0x00000001)
#define GPTM5_GPTMCTL_TBPWML_NA          (0x00000000)
#define GPTM5_GPTMCTL_TBPWML_INV         (0x00000001)
//--------

#define GPTM5_GPTMCTL_TAEN_BB      (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(0*4))))
#define GPTM5_GPTMCTL_TASTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(1*4))))
#define GPTM5_GPTMCTL_RTCEN_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(4*4))))
#define GPTM5_GPTMCTL_TAOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(5*4))))
#define GPTM5_GPTMCTL_TAPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTMGPTMCTL_OFFSET)*32)+(6*4))))
#define GPTM5_GPTMCTL_TBEN_BB      (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(8*4))))
#define GPTM5_GPTMCTL_TBSTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(9*4))))
#define GPTM5_GPTMCTL_TBOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(13*4))))
#define GPTM5_GPTMCTL_TBPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(14*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.5 GPTMSYNC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMSYNC            (((GPTMSYNC_TypeDef*)(GPTM5_BASE + GPTM_GPTMSYNC_OFFSET )))
#define GPTM5_GPTMSYNC_R          (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMSYNC_OFFSET)))

//--------
#define GPTM5_GPTMSYNC_R_SYNCT0_MASK      (0x00000003)
#define GPTM5_GPTMSYNC_R_SYNCT0_BIT       (0)
#define GPTM5_GPTMSYNC_R_SYNCT0_NA        (0x00000000)
#define GPTM5_GPTMSYNC_R_SYNCT0_TA        (0x00000001)
#define GPTM5_GPTMSYNC_R_SYNCT0_TB        (0x00000002)
#define GPTM5_GPTMSYNC_R_SYNCT0_BOTH      (0x00000003)

#define GPTM5_GPTMSYNC_SYNCT0_MASK        (0x00000003)
#define GPTM5_GPTMSYNC_SYNCT0_NA          (0x00000000)
#define GPTM5_GPTMSYNC_SYNCT0_TA          (0x00000001)
#define GPTM5_GPTMSYNC_SYNCT0_TB          (0x00000002)
#define GPTM5_GPTMSYNC_SYNCT0_BOTH        (0x00000003)
//--------

//--------
#define GPTM5_GPTMSYNC_R_SYNCT1_MASK      (0x0000000C)
#define GPTM5_GPTMSYNC_R_SYNCT1_BIT       (2)
#define GPTM5_GPTMSYNC_R_SYNCT1_NA        (0x00000000)
#define GPTM5_GPTMSYNC_R_SYNCT1_TA        (0x00000004)
#define GPTM5_GPTMSYNC_R_SYNCT1_TB        (0x00000008)
#define GPTM5_GPTMSYNC_R_SYNCT1_BOTH      (0x0000000C)

#define GPTM5_GPTMSYNC_SYNCT1_MASK        (0x00000003)
#define GPTM5_GPTMSYNC_SYNCT1_NA          (0x00000000)
#define GPTM5_GPTMSYNC_SYNCT1_TA          (0x00000001)
#define GPTM5_GPTMSYNC_SYNCT1_TB          (0x00000002)
#define GPTM5_GPTMSYNC_SYNCT1_BOTH        (0x00000003)
//--------

//--------
#define GPTM5_GPTMSYNC_R_SYNCT2_MASK      (0x00000030)
#define GPTM5_GPTMSYNC_R_SYNCT2_BIT       (4)
#define GPTM5_GPTMSYNC_R_SYNCT2_NA        (0x00000000)
#define GPTM5_GPTMSYNC_R_SYNCT2_TA        (0x00000010)
#define GPTM5_GPTMSYNC_R_SYNCT2_TB        (0x00000020)
#define GPTM5_GPTMSYNC_R_SYNCT2_BOTH      (0x00000030)

#define GPTM5_GPTMSYNC_SYNCT2_MASK        (0x00000003)
#define GPTM5_GPTMSYNC_SYNCT2_NA          (0x00000000)
#define GPTM5_GPTMSYNC_SYNCT2_TA          (0x00000001)
#define GPTM5_GPTMSYNC_SYNCT2_TB          (0x00000002)
#define GPTM5_GPTMSYNC_SYNCT2_BOTH        (0x00000003)
//--------

//--------
#define GPTM5_GPTMSYNC_R_SYNCT3_MASK      (0x000000C0)
#define GPTM5_GPTMSYNC_R_SYNCT3_BIT       (6)
#define GPTM5_GPTMSYNC_R_SYNCT3_NA        (0x00000000)
#define GPTM5_GPTMSYNC_R_SYNCT3_TA        (0x00000040)
#define GPTM5_GPTMSYNC_R_SYNCT3_TB        (0x00000080)
#define GPTM5_GPTMSYNC_R_SYNCT3_BOTH      (0x000000C0)

#define GPTM5_GPTMSYNC_SYNCT3_MASK        (0x00000003)
#define GPTM5_GPTMSYNC_SYNCT3_NA          (0x00000000)
#define GPTM5_GPTMSYNC_SYNCT3_TA          (0x00000001)
#define GPTM5_GPTMSYNC_SYNCT3_TB          (0x00000002)
#define GPTM5_GPTMSYNC_SYNCT3_BOTH        (0x00000003)
//--------

//--------
#define GPTM5_GPTMSYNC_R_SYNCT4_MASK      (0x00000300)
#define GPTM5_GPTMSYNC_R_SYNCT4_BIT       (8)
#define GPTM5_GPTMSYNC_R_SYNCT4_NA        (0x00000000)
#define GPTM5_GPTMSYNC_R_SYNCT4_TA        (0x00000100)
#define GPTM5_GPTMSYNC_R_SYNCT4_TB        (0x00000200)
#define GPTM5_GPTMSYNC_R_SYNCT4_BOTH      (0x00000300)

#define GPTM5_GPTMSYNC_SYNCT4_MASK        (0x00000003)
#define GPTM5_GPTMSYNC_SYNCT4_NA          (0x00000000)
#define GPTM5_GPTMSYNC_SYNCT4_TA          (0x00000001)
#define GPTM5_GPTMSYNC_SYNCT4_TB          (0x00000002)
#define GPTM5_GPTMSYNC_SYNCT4_BOTH        (0x00000003)
//--------

//--------
#define GPTM5_GPTMSYNC_R_SYNCT5_MASK      (0x00000C00)
#define GPTM5_GPTMSYNC_R_SYNCT5_BIT       (10)
#define GPTM5_GPTMSYNC_R_SYNCT5_NA        (0x00000000)
#define GPTM5_GPTMSYNC_R_SYNCT5_TA        (0x00000400)
#define GPTM5_GPTMSYNC_R_SYNCT5_TB        (0x00000800)
#define GPTM5_GPTMSYNC_R_SYNCT5_BOTH      (0x00000C00)

#define GPTM5_GPTMSYNC_SYNCT5_MASK        (0x00000003)
#define GPTM5_GPTMSYNC_SYNCT5_NA          (0x00000000)
#define GPTM5_GPTMSYNC_SYNCT5_TA          (0x00000001)
#define GPTM5_GPTMSYNC_SYNCT5_TB          (0x00000002)
#define GPTM5_GPTMSYNC_SYNCT5_BOTH        (0x00000003)
//--------

//--------
#define GPTM5_GPTMSYNC_R_SYNCWT0_MASK      (0x00003000)
#define GPTM5_GPTMSYNC_R_SYNCWT0_BIT       (12)
#define GPTM5_GPTMSYNC_R_SYNCWT0_NA        (0x00000000)
#define GPTM5_GPTMSYNC_R_SYNCWT0_TA        (0x00001000)
#define GPTM5_GPTMSYNC_R_SYNCWT0_TB        (0x00002000)
#define GPTM5_GPTMSYNC_R_SYNCWT0_BOTH      (0x00003000)

#define GPTM5_GPTMSYNC_SYNCWT0_MASK        (0x00000003)
#define GPTM5_GPTMSYNC_SYNCWT0_NA          (0x00000000)
#define GPTM5_GPTMSYNC_SYNCWT0_TA          (0x00000001)
#define GPTM5_GPTMSYNC_SYNCWT0_TB          (0x00000002)
#define GPTM5_GPTMSYNC_SYNCWT0_BOTH        (0x00000003)
//--------

//--------
#define GPTM5_GPTMSYNC_R_SYNCWT1_MASK      (0x0000C000)
#define GPTM5_GPTMSYNC_R_SYNCWT1_BIT       (14)
#define GPTM5_GPTMSYNC_R_SYNCWT1_NA        (0x00000000)
#define GPTM5_GPTMSYNC_R_SYNCWT1_TA        (0x00004000)
#define GPTM5_GPTMSYNC_R_SYNCWT1_TB        (0x00008000)
#define GPTM5_GPTMSYNC_R_SYNCWT1_BOTH      (0x0000C000)

#define GPTM5_GPTMSYNC_SYNCWT1_MASK        (0x00000003)
#define GPTM5_GPTMSYNC_SYNCWT1_NA          (0x00000000)
#define GPTM5_GPTMSYNC_SYNCWT1_TA          (0x00000001)
#define GPTM5_GPTMSYNC_SYNCWT1_TB          (0x00000002)
#define GPTM5_GPTMSYNC_SYNCWT1_BOTH        (0x00000003)
//--------

//--------
#define GPTM5_GPTMSYNC_R_SYNCWT2_MASK      (0x00030000)
#define GPTM5_GPTMSYNC_R_SYNCWT2_BIT       (16)
#define GPTM5_GPTMSYNC_R_SYNCWT2_NA        (0x00000000)
#define GPTM5_GPTMSYNC_R_SYNCWT2_TA        (0x00010000)
#define GPTM5_GPTMSYNC_R_SYNCWT2_TB        (0x00020000)
#define GPTM5_GPTMSYNC_R_SYNCWT2_BOTH      (0x00030000)

#define GPTM5_GPTMSYNC_SYNCWT2_MASK        (0x00000003)
#define GPTM5_GPTMSYNC_SYNCWT2_NA          (0x00000000)
#define GPTM5_GPTMSYNC_SYNCWT2_TA          (0x00000001)
#define GPTM5_GPTMSYNC_SYNCWT2_TB          (0x00000002)
#define GPTM5_GPTMSYNC_SYNCWT2_BOTH        (0x00000003)
//--------

//--------
#define GPTM5_GPTMSYNC_R_SYNCWT3_MASK      (0x000C0000)
#define GPTM5_GPTMSYNC_R_SYNCWT3_BIT       (18)
#define GPTM5_GPTMSYNC_R_SYNCWT3_NA        (0x00000000)
#define GPTM5_GPTMSYNC_R_SYNCWT3_TA        (0x00040000)
#define GPTM5_GPTMSYNC_R_SYNCWT3_TB        (0x00080000)
#define GPTM5_GPTMSYNC_R_SYNCWT3_BOTH      (0x000C0000)

#define GPTM5_GPTMSYNC_SYNCWT3_MASK        (0x00000003)
#define GPTM5_GPTMSYNC_SYNCWT3_NA          (0x00000000)
#define GPTM5_GPTMSYNC_SYNCWT3_TA          (0x00000001)
#define GPTM5_GPTMSYNC_SYNCWT3_TB          (0x00000002)
#define GPTM5_GPTMSYNC_SYNCWT3_BOTH        (0x00000003)
//--------

//--------
#define GPTM5_GPTMSYNC_R_SYNCWT4_MASK      (0x0030000)
#define GPTM5_GPTMSYNC_R_SYNCWT4_BIT       (20)
#define GPTM5_GPTMSYNC_R_SYNCWT4_NA        (0x00000000)
#define GPTM5_GPTMSYNC_R_SYNCWT4_TA        (0x00100000)
#define GPTM5_GPTMSYNC_R_SYNCWT4_TB        (0x00200000)
#define GPTM5_GPTMSYNC_R_SYNCWT4_BOTH      (0x00300000)

#define GPTM5_GPTMSYNC_SYNCWT4_MASK        (0x00000003)
#define GPTM5_GPTMSYNC_SYNCWT4_NA          (0x00000000)
#define GPTM5_GPTMSYNC_SYNCWT4_TA          (0x00000001)
#define GPTM5_GPTMSYNC_SYNCWT4_TB          (0x00000002)
#define GPTM5_GPTMSYNC_SYNCWT4_BOTH        (0x00000003)
//--------

//--------
#define GPTM5_GPTMSYNC_R_SYNCWT5_MASK      (0x00C00000)
#define GPTM5_GPTMSYNC_R_SYNCWT5_BIT       (22)
#define GPTM5_GPTMSYNC_R_SYNCWT5_NA        (0x00000000)
#define GPTM5_GPTMSYNC_R_SYNCWT5_TA        (0x00400000)
#define GPTM5_GPTMSYNC_R_SYNCWT5_TB        (0x00800000)
#define GPTM5_GPTMSYNC_R_SYNCWT5_BOTH      (0x00C00000)

#define GPTM5_GPTMSYNC_SYNCWT5_MASK        (0x00000003)
#define GPTM5_GPTMSYNC_SYNCWT5_NA          (0x00000000)
#define GPTM5_GPTMSYNC_SYNCWT5_TA          (0x00000001)
#define GPTM5_GPTMSYNC_SYNCWT5_TB          (0x00000002)
#define GPTM5_GPTMSYNC_SYNCWT5_BOTH        (0x00000003)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.6 GPTMIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMIMR            (((GPTMIMR_TypeDef*)(GPTM5_BASE + GPTM_GPTMIMR_OFFSET )))
#define GPTM5_GPTMIMR_R          (*((volatile  uint32_t *)(GPTM5_BASE +GPTM_GPTMIMR_OFFSET)))

//--------
#define GPTM5_GPTMIMR_R_TATOIM_MASK      (0x00000001)
#define GPTM5_GPTMIMR_R_TATOIM_BIT       (0)
#define GPTM5_GPTMIMR_R_TATOIM_DIS       (0x00000000)
#define GPTM5_GPTMIMR_R_TATOIM_EN        (0x00000001)

#define GPTM5_GPTMIMR_TATOIM_MASK        (0x00000001)
#define GPTM5_GPTMIMR_TATOIM_DIS         (0x00000000)
#define GPTM5_GPTMIMR_TATOIM_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMIMR_R_CAMIM_MASK      (0x00000002)
#define GPTM5_GPTMIMR_R_CAMIM_BIT       (1)
#define GPTM5_GPTMIMR_R_CAMIM_DIS       (0x00000000)
#define GPTM5_GPTMIMR_R_CAMIM_EN        (0x00000002)

#define GPTM5_GPTMIMR_CAMIM_MASK        (0x00000001)
#define GPTM5_GPTMIMR_CAMIM_DIS         (0x00000000)
#define GPTM5_GPTMIMR_CAMIM_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMIMR_R_CAEIM_MASK      (0x00000004)
#define GPTM5_GPTMIMR_R_CAEIM_BIT       (2)
#define GPTM5_GPTMIMR_R_CAEIM_DIS       (0x00000000)
#define GPTM5_GPTMIMR_R_CAEIM_EN        (0x00000004)

#define GPTM5_GPTMIMR_CAEIM_MASK        (0x00000001)
#define GPTM5_GPTMIMR_CAEIM_DIS         (0x00000000)
#define GPTM5_GPTMIMR_CAEIM_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMIMR_R_RTCIM_MASK      (0x00000008)
#define GPTM5_GPTMIMR_R_RTCIM_BIT       (3)
#define GPTM5_GPTMIMR_R_RTCIM_DIS       (0x00000000)
#define GPTM5_GPTMIMR_R_RTCIM_EN        (0x00000008)

#define GPTM5_GPTMIMR_RTCIM_MASK        (0x00000001)
#define GPTM5_GPTMIMR_RTCIM_DIS         (0x00000000)
#define GPTM5_GPTMIMR_RTCIM_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMIMR_R_TAMIM_MASK      (0x00000010)
#define GPTM5_GPTMIMR_R_TAMIM_BIT       (4)
#define GPTM5_GPTMIMR_R_TAMIM_DIS       (0x00000000)
#define GPTM5_GPTMIMR_R_TAMIM_EN        (0x00000010)

#define GPTM5_GPTMIMR_TAMIM_MASK        (0x00000001)
#define GPTM5_GPTMIMR_TAMIM_DIS         (0x00000000)
#define GPTM5_GPTMIMR_TAMIM_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMIMR_R_TBTOIM_MASK      (0x00000100)
#define GPTM5_GPTMIMR_R_TBTOIM_BIT       (8)
#define GPTM5_GPTMIMR_R_TBTOIM_DIS       (0x00000000)
#define GPTM5_GPTMIMR_R_TBTOIM_EN        (0x00000100)

#define GPTM5_GPTMIMR_TBTOIM_MASK        (0x00000001)
#define GPTM5_GPTMIMR_TBTOIM_DIS         (0x00000000)
#define GPTM5_GPTMIMR_TBTOIM_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMIMR_R_CBMIM_MASK      (0x00000200)
#define GPTM5_GPTMIMR_R_CBMIM_BIT       (9)
#define GPTM5_GPTMIMR_R_CBMIM_DIS       (0x00000000)
#define GPTM5_GPTMIMR_R_CBMIM_EN        (0x00000200)

#define GPTM5_GPTMIMR_CBMIM_MASK        (0x00000001)
#define GPTM5_GPTMIMR_CBMIM_DIS         (0x00000000)
#define GPTM5_GPTMIMR_CBMIM_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMIMR_R_CBEIM_MASK      (0x00000400)
#define GPTM5_GPTMIMR_R_CBEIM_BIT       (10)
#define GPTM5_GPTMIMR_R_CBEIM_DIS       (0x00000000)
#define GPTM5_GPTMIMR_R_CBEIM_EN        (0x00000400)

#define GPTM5_GPTMIMR_CBEIM_MASK        (0x00000001)
#define GPTM5_GPTMIMR_CBEIM_DIS         (0x00000000)
#define GPTM5_GPTMIMR_CBEIM_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMIMR_R_TBMIM_MASK      (0x00000800)
#define GPTM5_GPTMIMR_R_TBMIM_BIT       (11)
#define GPTM5_GPTMIMR_R_TBMIM_DIS       (0x00000000)
#define GPTM5_GPTMIMR_R_TBMIM_EN        (0x00000800)

#define GPTM5_GPTMIMR_TBMIM_MASK        (0x00000001)
#define GPTM5_GPTMIMR_TBMIM_DIS         (0x00000000)
#define GPTM5_GPTMIMR_TBMIM_EN          (0x00000001)
//--------

//--------
#define GPTM5_GPTMIMR_R_WUEIM_MASK      (0x00010000)
#define GPTM5_GPTMIMR_R_WUEIM_BIT       (16)
#define GPTM5_GPTMIMR_R_WUEIM_DIS       (0x00000000)
#define GPTM5_GPTMIMR_R_WUEIM_EN        (0x00010000)

#define GPTM5_GPTMIMR_WUEIM_MASK        (0x00000001)
#define GPTM5_GPTMIMR_WUEIM_DIS         (0x00000000)
#define GPTM5_GPTMIMR_WUEIM_EN          (0x00000001)
//--------

#define GPTM5_GPTMIMR_TATOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(0*4))))
#define GPTM5_GPTMIMR_CAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(1*4))))
#define GPTM5_GPTMIMR_CAEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(2*4))))
#define GPTM5_GPTMIMR_RTCIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(3*4))))
#define GPTM5_GPTMIMR_TAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(4*4))))
#define GPTM5_GPTMIMR_TBTOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(8*4))))
#define GPTM5_GPTMIMR_CBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(9*4))))
#define GPTM5_GPTMIMR_CBEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(10*4))))
#define GPTM5_GPTMIMR_TBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(11*4))))
#define GPTM5_GPTMIMR_WUEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(16*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.7 GPTMRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMRIS            (((GPTMRIS_TypeDef*)(GPTM5_BASE + GPTM_GPTMRIS_OFFSET )))
#define GPTM5_GPTMRIS_R          (*((volatile const uint32_t *)(GPTM5_BASE +GPTM_GPTMRIS_OFFSET)))



//--------
#define GPTM5_GPTMRIS_R_TATORIS_MASK      (0x00000001)
#define GPTM5_GPTMRIS_R_TATORIS_BIT       (0)
#define GPTM5_GPTMRIS_R_TATORIS_NOACTIVE  (0x00000000)
#define GPTM5_GPTMRIS_R_TATORIS_ACTIVE    (0x00000001)

#define GPTM5_GPTMRIS_TATORIS_MASK        (0x00000001)
#define GPTM5_GPTMRIS_TATORIS_NOACTIVE    (0x00000000)
#define GPTM5_GPTMRIS_TATORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM5_GPTMRIS_R_CAMRIS_MASK      (0x00000002)
#define GPTM5_GPTMRIS_R_CAMRIS_BIT       (1)
#define GPTM5_GPTMRIS_R_CAMRIS_NOACTIVE  (0x00000000)
#define GPTM5_GPTMRIS_R_CAMRIS_ACTIVE    (0x00000002)

#define GPTM5_GPTMRIS_CAMRIS_MASK        (0x00000001)
#define GPTM5_GPTMRIS_CAMRIS_NOACTIVE    (0x00000000)
#define GPTM5_GPTMRIS_CAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM5_GPTMRIS_R_CAERIS_MASK      (0x00000004)
#define GPTM5_GPTMRIS_R_CAERIS_BIT       (2)
#define GPTM5_GPTMRIS_R_CAERIS_NOACTIVE  (0x00000000)
#define GPTM5_GPTMRIS_R_CAERIS_ACTIVE    (0x00000004)

#define GPTM5_GPTMRIS_CAERIS_MASK        (0x00000001)
#define GPTM5_GPTMRIS_CAERIS_NOACTIVE    (0x00000000)
#define GPTM5_GPTMRIS_CAERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM5_GPTMRIS_R_RTCRIS_MASK      (0x00000008)
#define GPTM5_GPTMRIS_R_RTCRIS_BIT       (3)
#define GPTM5_GPTMRIS_R_RTCRIS_NOACTIVE  (0x00000000)
#define GPTM5_GPTMRIS_R_RTCRIS_ACTIVE    (0x00000008)

#define GPTM5_GPTMRIS_RTCRIS_MASK        (0x00000001)
#define GPTM5_GPTMRIS_RTCRIS_NOACTIVE    (0x00000000)
#define GPTM5_GPTMRIS_RTCRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM5_GPTMRIS_R_TAMRIS_MASK      (0x00000010)
#define GPTM5_GPTMRIS_R_TAMRIS_BIT       (4)
#define GPTM5_GPTMRIS_R_TAMRIS_NOACTIVE  (0x00000000)
#define GPTM5_GPTMRIS_R_TAMRIS_ACTIVE    (0x00000010)

#define GPTM5_GPTMRIS_TAMRIS_MASK        (0x00000001)
#define GPTM5_GPTMRIS_TAMRIS_NOACTIVE    (0x00000000)
#define GPTM5_GPTMRIS_TAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM5_GPTMRIS_R_TBTORIS_MASK      (0x00000100)
#define GPTM5_GPTMRIS_R_TBTORIS_BIT       (8)
#define GPTM5_GPTMRIS_R_TBTORIS_NOACTIVE  (0x00000000)
#define GPTM5_GPTMRIS_R_TBTORIS_ACTIVE    (0x00000100)

#define GPTM5_GPTMRIS_TBTORIS_MASK        (0x00000001)
#define GPTM5_GPTMRIS_TBTORIS_NOACTIVE    (0x00000000)
#define GPTM5_GPTMRIS_TBTORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM5_GPTMRIS_R_CBMRIS_MASK      (0x00000200)
#define GPTM5_GPTMRIS_R_CBMRIS_BIT       (9)
#define GPTM5_GPTMRIS_R_CBMRIS_NOACTIVE  (0x00000000)
#define GPTM5_GPTMRIS_R_CBMRIS_ACTIVE    (0x00000200)

#define GPTM5_GPTMRIS_CBMRIS_MASK        (0x00000001)
#define GPTM5_GPTMRIS_CBMRIS_NOACTIVE    (0x00000000)
#define GPTM5_GPTMRIS_CBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM5_GPTMRIS_R_CBERIS_MASK      (0x00000400)
#define GPTM5_GPTMRIS_R_CBERIS_BIT       (10)
#define GPTM5_GPTMRIS_R_CBERIS_NOACTIVE  (0x00000000)
#define GPTM5_GPTMRIS_R_CBERIS_ACTIVE    (0x00000400)

#define GPTM5_GPTMRIS_CBERIS_MASK        (0x00000001)
#define GPTM5_GPTMRIS_CBERIS_NOACTIVE    (0x00000000)
#define GPTM5_GPTMRIS_CBERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM5_GPTMRIS_R_TBMRIS_MASK      (0x00000800)
#define GPTM5_GPTMRIS_R_TBMRIS_BIT       (11)
#define GPTM5_GPTMRIS_R_TBMRIS_NOACTIVE  (0x00000000)
#define GPTM5_GPTMRIS_R_TBMRIS_ACTIVE    (0x00000800)

#define GPTM5_GPTMRIS_TBMRIS_MASK        (0x00000001)
#define GPTM5_GPTMRIS_TBMRIS_NOACTIVE    (0x00000000)
#define GPTM5_GPTMRIS_TBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPTM5_GPTMRIS_R_WUERIS_MASK      (0x00010000)
#define GPTM5_GPTMRIS_R_WUERIS_BIT       (16)
#define GPTM5_GPTMRIS_R_WUERIS_NOACTIVE  (0x00000000)
#define GPTM5_GPTMRIS_R_WUERIS_ACTIVE    (0x00010000)

#define GPTM5_GPTMRIS_WUERIS_MASK        (0x00000001)
#define GPTM5_GPTMRIS_WUERIS_NOACTIVE    (0x00000000)
#define GPTM5_GPTMRIS_WUERIS_ACTIVE      (0x00000001)
//--------

#define GPTM5_GPTMRIS_TATORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(0*4))))
#define GPTM5_GPTMRIS_CAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(1*4))))
#define GPTM5_GPTMRIS_CAERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(2*4))))
#define GPTM5_GPTMRIS_RTCRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(3*4))))
#define GPTM5_GPTMRIS_TAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(4*4))))
#define GPTM5_GPTMRIS_TBTORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(8*4))))
#define GPTM5_GPTMRIS_CBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(9*4))))
#define GPTM5_GPTMRIS_CBERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(10*4))))
#define GPTM5_GPTMRIS_TBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(11*4))))
#define GPTM5_GPTMRIS_WUERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(16*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.8 GPTMMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMMIS            (((GPTMMIS_TypeDef*)(GPTM5_BASE + GPTM_GPTMMIS_OFFSET )))
#define GPTM5_GPTMMIS_R          (*((volatile const uint32_t *)(GPTM5_BASE +GPTM_GPTMMIS_OFFSET)))




//--------
#define GPTM5_GPTMMIS_R_TATOMIS_MASK      (0x00000001)
#define GPTM5_GPTMMIS_R_TATOMIS_BIT       (0)
#define GPTM5_GPTMMIS_R_TATOMIS_NOOCCUR  (0x00000000)
#define GPTM5_GPTMMIS_R_TATOMIS_OCCUR    (0x00000001)

#define GPTM5_GPTMMIS_TATOMIS_MASK        (0x00000001)
#define GPTM5_GPTMMIS_TATOMIS_NOOCCUR    (0x00000000)
#define GPTM5_GPTMMIS_TATOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM5_GPTMMIS_R_CAMMIS_MASK      (0x00000002)
#define GPTM5_GPTMMIS_R_CAMMIS_BIT       (1)
#define GPTM5_GPTMMIS_R_CAMMIS_NOOCCUR  (0x00000000)
#define GPTM5_GPTMMIS_R_CAMMIS_OCCUR    (0x00000002)

#define GPTM5_GPTMMIS_CAMMIS_MASK        (0x00000001)
#define GPTM5_GPTMMIS_CAMMIS_NOOCCUR    (0x00000000)
#define GPTM5_GPTMMIS_CAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM5_GPTMMIS_R_CAEMIS_MASK      (0x00000004)
#define GPTM5_GPTMMIS_R_CAEMIS_BIT       (2)
#define GPTM5_GPTMMIS_R_CAEMIS_NOOCCUR  (0x00000000)
#define GPTM5_GPTMMIS_R_CAEMIS_OCCUR    (0x00000004)

#define GPTM5_GPTMMIS_CAEMIS_MASK        (0x00000001)
#define GPTM5_GPTMMIS_CAEMIS_NOOCCUR    (0x00000000)
#define GPTM5_GPTMMIS_CAEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM5_GPTMMIS_R_RTCMIS_MASK      (0x00000008)
#define GPTM5_GPTMMIS_R_RTCMIS_BIT       (3)
#define GPTM5_GPTMMIS_R_RTCMIS_NOOCCUR  (0x00000000)
#define GPTM5_GPTMMIS_R_RTCMIS_OCCUR    (0x00000008)

#define GPTM5_GPTMMIS_RTCMIS_MASK        (0x00000001)
#define GPTM5_GPTMMIS_RTCMIS_NOOCCUR    (0x00000000)
#define GPTM5_GPTMMIS_RTCMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM5_GPTMMIS_R_TAMMIS_MASK      (0x00000010)
#define GPTM5_GPTMMIS_R_TAMMIS_BIT       (4)
#define GPTM5_GPTMMIS_R_TAMMIS_NOOCCUR  (0x00000000)
#define GPTM5_GPTMMIS_R_TAMMIS_OCCUR    (0x00000010)

#define GPTM5_GPTMMIS_TAMMIS_MASK        (0x00000001)
#define GPTM5_GPTMMIS_TAMMIS_NOOCCUR    (0x00000000)
#define GPTM5_GPTMMIS_TAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM5_GPTMMIS_R_TBTOMIS_MASK      (0x00000100)
#define GPTM5_GPTMMIS_R_TBTOMIS_BIT       (8)
#define GPTM5_GPTMMIS_R_TBTOMIS_NOOCCUR  (0x00000000)
#define GPTM5_GPTMMIS_R_TBTOMIS_OCCUR    (0x00000100)

#define GPTM5_GPTMMIS_TBTOMIS_MASK        (0x00000001)
#define GPTM5_GPTMMIS_TBTOMIS_NOOCCUR    (0x00000000)
#define GPTM5_GPTMMIS_TBTOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM5_GPTMMIS_R_CBMMIS_MASK      (0x00000200)
#define GPTM5_GPTMMIS_R_CBMMIS_BIT       (9)
#define GPTM5_GPTMMIS_R_CBMMIS_NOOCCUR  (0x00000000)
#define GPTM5_GPTMMIS_R_CBMMIS_OCCUR    (0x00000200)

#define GPTM5_GPTMMIS_CBMMIS_MASK        (0x00000001)
#define GPTM5_GPTMMIS_CBMMIS_NOOCCUR    (0x00000000)
#define GPTM5_GPTMMIS_CBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM5_GPTMMIS_R_CBEMIS_MASK      (0x00000400)
#define GPTM5_GPTMMIS_R_CBEMIS_BIT       (10)
#define GPTM5_GPTMMIS_R_CBEMIS_NOOCCUR  (0x00000000)
#define GPTM5_GPTMMIS_R_CBEMIS_OCCUR    (0x00000400)

#define GPTM5_GPTMMIS_CBEMIS_MASK        (0x00000001)
#define GPTM5_GPTMMIS_CBEMIS_NOOCCUR    (0x00000000)
#define GPTM5_GPTMMIS_CBEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM5_GPTMMIS_R_TBMMIS_MASK      (0x00000800)
#define GPTM5_GPTMMIS_R_TBMMIS_BIT       (11)
#define GPTM5_GPTMMIS_R_TBMMIS_NOOCCUR  (0x00000000)
#define GPTM5_GPTMMIS_R_TBMMIS_OCCUR    (0x00000800)

#define GPTM5_GPTMMIS_TBMMIS_MASK        (0x00000001)
#define GPTM5_GPTMMIS_TBMMIS_NOOCCUR    (0x00000000)
#define GPTM5_GPTMMIS_TBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPTM5_GPTMMIS_R_WUEMIS_MASK      (0x00010000)
#define GPTM5_GPTMMIS_R_WUEMIS_BIT       (16)
#define GPTM5_GPTMMIS_R_WUEMIS_NOOCCUR  (0x00000000)
#define GPTM5_GPTMMIS_R_WUEMIS_OCCUR    (0x00010000)

#define GPTM5_GPTMMIS_WUEMIS_MASK        (0x00000001)
#define GPTM5_GPTMMIS_WUEMIS_NOOCCUR    (0x00000000)
#define GPTM5_GPTMMIS_WUEMIS_OCCUR      (0x00000001)
//--------

#define GPTM5_GPTMMIS_TATOMIS           (0x00000001)
#define GPTM5_GPTMMIS_CAMMIS            (0x00000002)
#define GPTM5_GPTMMIS_CAEMIS            (0x00000004)
#define GPTM5_GPTMMIS_RTCMIS            (0x00000008)
#define GPTM5_GPTMMIS_TAMMIS            (0x00000010)
#define GPTM5_GPTMMIS_TBTOMIS           (0x00000100)
#define GPTM5_GPTMMIS_CBMMIS            (0x00000200)
#define GPTM5_GPTMMIS_CBEMIS            (0x00000400)
#define GPTM5_GPTMMIS_TBMMIS            (0x00000800)
#define GPTM5_GPTMMIS_WUEMIS            (0x00010000)


#define GPTM5_GPTMMIS_TATOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(0*4))))
#define GPTM5_GPTMMIS_CAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(1*4))))
#define GPTM5_GPTMMIS_CAEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(2*4))))
#define GPTM5_GPTMMIS_RTCMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(3*4))))
#define GPTM5_GPTMMIS_TAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(4*4))))
#define GPTM5_GPTMMIS_TBTOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(8*4))))
#define GPTM5_GPTMMIS_CBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(9*4))))
#define GPTM5_GPTMMIS_CBEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(10*4))))
#define GPTM5_GPTMMIS_TBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(11*4))))
#define GPTM5_GPTMMIS_WUEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.9 GPTMICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMICR            (((GPTMICR_TypeDef*)(GPTM5_BASE + GPTM_GPTMICR_OFFSET )))
#define GPTM5_GPTMICR_R          (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMICR_OFFSET)))



//--------
#define GPTM5_GPTMICR_R_TATOCINT_MASK      (0x00000001)
#define GPTM5_GPTMICR_R_TATOCINT_BIT       (0)
#define GPTM5_GPTMICR_R_TATOCINT_CLEAR     (0x00000001)

#define GPTM5_GPTMICR_TATOCINT_MASK        (0x00000001)
#define GPTM5_GPTMICR_TATOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM5_GPTMICR_R_CAMCINT_MASK      (0x00000002)
#define GPTM5_GPTMICR_R_CAMCINT_BIT       (1)
#define GPTM5_GPTMICR_R_CAMCINT_CLEAR     (0x00000002)

#define GPTM5_GPTMICR_CAMCINT_MASK        (0x00000001)
#define GPTM5_GPTMICR_CAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM5_GPTMICR_R_CAECINT_MASK      (0x00000004)
#define GPTM5_GPTMICR_R_CAECINT_BIT       (2)
#define GPTM5_GPTMICR_R_CAECINT_CLEAR     (0x00000004)

#define GPTM5_GPTMICR_CAECINT_MASK        (0x00000001)
#define GPTM5_GPTMICR_CAECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM5_GPTMICR_R_RTCCINT_MASK      (0x00000008)
#define GPTM5_GPTMICR_R_RTCCINT_BIT       (3)
#define GPTM5_GPTMICR_R_RTCCINT_CLEAR     (0x00000008)

#define GPTM5_GPTMICR_RTCCINT_MASK        (0x00000001)
#define GPTM5_GPTMICR_RTCCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM5_GPTMICR_R_TAMCINT_MASK      (0x00000010)
#define GPTM5_GPTMICR_R_TAMCINT_BIT       (4)
#define GPTM5_GPTMICR_R_TAMCINT_CLEAR     (0x00000010)

#define GPTM5_GPTMICR_TAMCINT_MASK        (0x00000001)
#define GPTM5_GPTMICR_TAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM5_GPTMICR_R_TBTOCINT_MASK      (0x00000100)
#define GPTM5_GPTMICR_R_TBTOCINT_BIT       (8)
#define GPTM5_GPTMICR_R_TBTOCINT_CLEAR     (0x00000100)

#define GPTM5_GPTMICR_TBTOCINT_MASK        (0x00000001)
#define GPTM5_GPTMICR_TBTOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM5_GPTMICR_R_CBMCINT_MASK      (0x00000200)
#define GPTM5_GPTMICR_R_CBMCINT_BIT       (9)
#define GPTM5_GPTMICR_R_CBMCINT_CLEAR     (0x00000200)

#define GPTM5_GPTMICR_CBMCINT_MASK        (0x00000001)
#define GPTM5_GPTMICR_CBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM5_GPTMICR_R_CBECINT_MASK      (0x00000400)
#define GPTM5_GPTMICR_R_CBECINT_BIT       (10)
#define GPTM5_GPTMICR_R_CBECINT_CLEAR     (0x00000400)

#define GPTM5_GPTMICR_CBECINT_MASK        (0x00000001)
#define GPTM5_GPTMICR_CBECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM5_GPTMICR_R_TBMCINT_MASK      (0x00000800)
#define GPTM5_GPTMICR_R_TBMCINT_BIT       (11)
#define GPTM5_GPTMICR_R_TBMCINT_CLEAR     (0x00000800)

#define GPTM5_GPTMICR_TBMCINT_MASK        (0x00000001)
#define GPTM5_GPTMICR_TBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPTM5_GPTMICR_R_WUECINT_MASK      (0x00010000)
#define GPTM5_GPTMICR_R_WUECINT_BIT       (16)
#define GPTM5_GPTMICR_R_WUECINT_CLEAR     (0x00010000)

#define GPTM5_GPTMICR_WUECINT_MASK        (0x00000001)
#define GPTM5_GPTMICR_WUECINT_CLEAR       (0x00000001)
//--------


#define GPTM5_GPTMICR_TATOCINT           (0x00000001)
#define GPTM5_GPTMICR_CAMCINT            (0x00000002)
#define GPTM5_GPTMICR_CAECINT            (0x00000004)
#define GPTM5_GPTMICR_RTCCINT            (0x00000008)
#define GPTM5_GPTMICR_TAMCINT            (0x00000010)
#define GPTM5_GPTMICR_TBTOCINT           (0x00000100)
#define GPTM5_GPTMICR_CBMCINT            (0x00000200)
#define GPTM5_GPTMICR_CBECINT            (0x00000400)
#define GPTM5_GPTMICR_TBMCINT            (0x00000800)
#define GPTM5_GPTMICR_WUECINT            (0x00010000)


#define GPTM5_GPTMICR_TATOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(0*4))))
#define GPTM5_GPTMICR_CAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(1*4))))
#define GPTM5_GPTMICR_CAECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(2*4))))
#define GPTM5_GPTMICR_RTCCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(3*4))))
#define GPTM5_GPTMICR_TAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(4*4))))
#define GPTM5_GPTMICR_TBTOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(8*4))))
#define GPTM5_GPTMICR_CBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(9*4))))
#define GPTM5_GPTMICR_CBECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(10*4))))
#define GPTM5_GPTMICR_TBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(11*4))))
#define GPTM5_GPTMICR_WUECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.10 GPTMTAILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMTAILR            (((GPTMTAILR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTAILR_OFFSET )))
#define GPTM5_GPTMTAILR_R          (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTAILR_OFFSET)))

//--------
#define GPTM5_GPTMTAILR_R_TAILR_MASK      (0xFFFFFFFF)
#define GPTM5_GPTMTAILR_R_TAILR_BIT       (0)

#define GPTM5_GPTMTAILR_TAILR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.11 GPTMTBILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMTBILR            (((GPTMTBILR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTBILR_OFFSET )))
#define GPTM5_GPTMTBILR_R          (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTBILR_OFFSET)))

//--------
#define GPTM5_GPTMTBILR_R_TBILR_MASK      (0xFFFFFFFF)
#define GPTM5_GPTMTBILR_R_TBILR_BIT       (0)

#define GPTM5_GPTMTBILR_TBILR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.12 GPTMTAMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMTAMATCHR            (((GPTMTAMATCHR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTAMATCHR_OFFSET )))
#define GPTM5_GPTMTAMATCHR_R          (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTAMATCHR_OFFSET)))


//--------
#define GPTM5_GPTMTAMATCHR_R_TAMR_MASK      (0xFFFFFFFF)
#define GPTM5_GPTMTAMATCHR_R_TAMR_BIT       (0)

#define GPTM5_GPTMTAMATCHR_TAMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.13 GPTMTBMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMTBMATCHR            (((GPTMTBMATCHR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTBMATCHR_OFFSET )))
#define GPTM5_GPTMTBMATCHR_R          (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTBMATCHR_OFFSET)))


//--------
#define GPTM5_GPTMTBMATCHR_R_TBMR_MASK      (0xFFFFFFFF)
#define GPTM5_GPTMTBMATCHR_R_TBMR_BIT       (0)

#define GPTM5_GPTMTBMATCHR_TBMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.14 GPTMTAPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMTAPR            (((GPTMTAPR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTAPR_OFFSET )))
#define GPTM5_GPTMTAPR_R          (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTAPR_OFFSET)))


//--------
#define GPTM5_GPTMTAPR_R_TAPSR_MASK      (0x000000FF)
#define GPTM5_GPTMTAPR_R_TAPSR_BIT       (0)

#define GPTM5_GPTMTAPR_TAPSR_MASK        (0x000000FF)
//--------

//--------
#define GPTM5_GPTMTAPR_R_TAPSRH_MASK      (0x0000FF00)
#define GPTM5_GPTMTAPR_R_TAPSRH_BIT       (8)

#define GPTM5_GPTMTAPR_TAPSRH_MASK        (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.15 GPTMTBPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMTBPR            (((GPTMTBPR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTBPR_OFFSET )))
#define GPTM5_GPTMTBPR_R          (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTBPR_OFFSET)))


//--------
#define GPTM5_GPTMTBPR_R_TBPSR_MASK      (0x000000FF)
#define GPTM5_GPTMTBPR_R_TBPSR_BIT       (0)

#define GPTM5_GPTMTBPR_TBPSR_MASK        (0x000000FF)
//--------


//--------
#define GPTM5_GPTMTBPR_R_TBPSRH_MASK      (0x0000FF00)
#define GPTM5_GPTMTBPR_R_TBPSRH_BIT       (8)

#define GPTM5_GPTMTBPR_TBPSRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.16 GPTMTAPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMTAPMR            (((GPTMTAPMR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTAPMR_OFFSET )))
#define GPTM5_GPTMTAPMR_R          (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTAPMR_OFFSET)))


//--------
#define GPTM5_GPTMTAPMR_R_TAPSMR_MASK      (0x000000FF)
#define GPTM5_GPTMTAPMR_R_TAPSMR_BIT       (0)

#define GPTM5_GPTMTAMPR_TAPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPTM5_GPTMTAPMR_R_TAPSMRH_MASK      (0x0000FF00)
#define GPTM5_GPTMTAPMR_R_TAPSMRH_BIT       (8)

#define GPTM5_GPTMTAPMR_TAPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.17 GPTMTBPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMTBPMR            (((GPTMTBPMR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTBPMR_OFFSET )))
#define GPTM5_GPTMTBPMR_R          (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTBPMR_OFFSET)))

//--------
#define GPTM5_GPTMTBPMR_R_TBPSMR_MASK      (0x000000FF)
#define GPTM5_GPTMTBPMR_R_TBPSMR_BIT       (0)

#define GPTM5_GPTMTBMPR_TBPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPTM5_GPTMTBPMR_R_TBPSMRH_MASK      (0x0000FF00)
#define GPTM5_GPTMTBPMR_R_TBPSMRH_BIT       (8)

#define GPTM5_GPTMTBPMR_TBPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.18 GPTMTAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMTAR            (((GPTMTAR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTAR_OFFSET )))
#define GPTM5_GPTMTAR_R          (*((volatile const  int32_t *)(GPTM5_BASE +GPTM_GPTMTAR_OFFSET)))


//--------
#define GPTM5_GPTMTAR_R_TAR_MASK      (0xFFFFFFFF)
#define GPTM5_GPTMTAR_R_TAR_BIT       (0)

#define GPTM5_GPTMTAR_TAR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.19 GPTMTBR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMTBR            (((GPTMTBR_TypeDef*)(GPTM5_BASE + GPTM_GPTMTBR_OFFSET )))
#define GPTM5_GPTMTBR_R          (*((volatile const uint32_t *)(GPTM5_BASE +GPTM_GPTMTBR_OFFSET)))


//--------
#define GPTM5_GPTMTBR_R_TBR_MASK      (0xFFFFFFFF)
#define GPTM5_GPTMTBR_R_TBR_BIT       (0)

#define GPTM5_GPTMTBR_TBR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.20 GPTMTAV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMTAV            (((GPTMTAV_TypeDef*)(GPTM5_BASE + GPTM_GPTMTAV_OFFSET )))
#define GPTM5_GPTMTAV_R          (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTAV_OFFSET)))

//--------
#define GPTM5_GPTMTAV_R_TAV_MASK      (0xFFFFFFFF)
#define GPTM5_GPTMTAV_R_TAV_BIT       (0)

#define GPTM5_GPTMTAV_TAV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.21 GPTMTBV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMTBV            (((GPTMTBV_TypeDef*)(GPTM5_BASE + GPTM_GPTMTBV_OFFSET )))
#define GPTM5_GPTMTBV_R          (*((volatile uint32_t *)(GPTM5_BASE +GPTM_GPTMTBV_OFFSET)))


//--------
#define GPTM5_GPTMTBV_R_TBV_MASK      (0xFFFFFFFF)
#define GPTM5_GPTMTBV_R_TBV_BIT       (0)

#define GPTM5_GPTMTBV_TBV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.22 GPTMRTCPD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMRTCPD            (((GPTMRTCPD_TypeDef*)(GPTM5_BASE + GPTM_GPTMRTCPD_OFFSET )))
#define GPTM5_GPTMRTCPD_R          (*((volatile const uint32_t *)(GPTM5_BASE +GPTM_GPTMRTCPD_OFFSET)))


//--------
#define GPTM5_GPTMRTCPD_R_RTCPD_MASK      (0x0000FFFF)
#define GPTM5_GPTMRTCPD_R_RTCPD_BIT       (0)
#define GPTM5_GPTMRTCPD_R_RTCPD_DEFAULT   (0x00007FFF)

#define GPTM5_GPTMRTCPD_RTCPD_MASK        (0x0000FFFF)
#define GPTM5_GPTMRTCPD_RTCPD_DEFAULT     (0x00007FFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.23 GPTMTAPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPTM5_GPTMTAPS            (((GPTMTAPS_TypeDef*)(GPTM5_BASE + GPTM_GPTMTAPS_OFFSET )))
#define GPTM5_GPTMTAPS_R          (*((volatile const uint32_t *)(GPTM5_BASE +GPTM_GPTMTAPS_OFFSET)))

//--------
#define GPTM5_GPTMTAPS_R_PSS_MASK      (0x0000FFFF)
#define GPTM5_GPTMTAPS_R_PSS_BIT       (0)

#define GPTM5_GPTMTAPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.24 GPTMTBPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMTBPS            (((GPTMTBPS_TypeDef*)(GPTM5_BASE + GPTM_GPTMTBPS_OFFSET )))
#define GPTM5_GPTMTBPS_R          (*((volatile const uint32_t *)(GPTM5_BASE +GPTM_GPTMTBPS_OFFSET)))

//--------
#define GPTM5_GPTMTBPS_R_PSS_MASK      (0x0000FFFF)
#define GPTM5_GPTMTBPS_R_PSS_BIT       (0)

#define GPTM5_GPTMTBPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.25 GPTMTAPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define GPTM5_GPTMTAPV            (((GPTMTAPV_TypeDef*)(GPTM5_BASE + GPTM_GPTMTAPV_OFFSET )))
#define GPTM5_GPTMTAPV_R          (*((volatile const uint32_t *)(GPTM5_BASE +GPTM_GPTMTAPV_OFFSET)))

//--------
#define GPTM5_GPTMTAPV_R_PSV_MASK      (0x0000FFFF)
#define GPTM5_GPTMTAPV_R_PSV_BIT       (0)

#define GPTM5_GPTMTAPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.26 GPTMTBPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPTM5_GPTMTBPV            (((GPTMTBPV_TypeDef*)(GPTM5_BASE + GPTM_GPTMTBPV_OFFSET )))
#define GPTM5_GPTMTBPV_R          (*((volatile const uint32_t *)(GPTM5_BASE +GPTM_GPTMTBPV_OFFSET)))

//--------
#define GPTM5_GPTMTBPV_R_PSV_MASK      (0x0000FFFF)
#define GPTM5_GPTMTBPV_R_PSV_BIT       (0)

#define GPTM5_GPTMTBPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.27 GPTMPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPTM5_GPTMPP            (((GPTMPP_TypeDef*)(GPTM5_BASE + GPTM_GPTMPP_OFFSET )))
#define GPTM5_GPTMPP_R          (*((volatile const uint32_t *)(GPTM5_BASE +GPTM_GPTMPP_OFFSET)))

#define GPTM5_GPTMPP_SIZE        (0x0000000F)

//--------
#define GPTM5_GPTMPP_R_SIZE_MASK      (0x0000000F)
#define GPTM5_GPTMPP_R_SIZE_BIT       (0)
#define GPTM5_GPTMPP_R_SIZE_16b       (0x00000000)
#define GPTM5_GPTMPP_R_SIZE_32b       (0x00000001)

#define GPTM5_GPTMPP_SIZE_MASK        (0x0000000F)
#define GPTM5_GPTMPP_SIZE_16b         (0x00000000)
#define GPTM5_GPTMPP_SIZE_32b         (0x00000001)
//--------



// ToDO GPWTM0
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0 GPWTM0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.1 GPTMCFG ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMCFG            (((GPTMCFG_TypeDef*)(GPWTM0_BASE + GPTM_GPTMCFG_OFFSET )))
#define GPWTM0_GPTMCFG_R          (*((volatile uint32_t *)(GPWTM0_BASE +GPTM_GPTMCFG_OFFSET)))


//--------
#define GPWTM0_GPTMCFG_R_GPTMCFG_MASK      (0x00000007)
#define GPWTM0_GPTMCFG_R_GPTMCFG_BIT       (0)
#define GPWTM0_GPTMCFG_R_GPTMCFG_BOTH    (0x00000000)
#define GPWTM0_GPTMCFG_R_GPTMCFG_RTC       (0x00000001)
#define GPWTM0_GPTMCFG_R_GPTMCFG_SINGLE      (0x00000004)

#define GPWTM0_GPTMCFG_GPTMCFG_MASK        (0x00000007)
#define GPWTM0_GPTMCFG_GPTMCFG_BOTH      (0x00000000)
#define GPWTM0_GPTMCFG_GPTMCFG_RTC         (0x00000001)
#define GPWTM0_GPTMCFG_GPTMCFG_SINGLE        (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.2 GPTMTAMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMTAMR            (((GPTMTAMR_TypeDef*)(GPWTM0_BASE + GPTM_GPTMTAMR_OFFSET )))
#define GPWTM0_GPTMTAMR_R          (*((volatile uint32_t *)(GPWTM0_BASE +GPTM_GPTMTAMR_OFFSET)))


//--------
#define GPWTM0_GPTMTAMR_R_TAMR_MASK      (0x00000003)
#define GPWTM0_GPTMTAMR_R_TAMR_BIT       (0)
#define GPWTM0_GPTMTAMR_R_TAMR_ONESHOT   (0x00000001)
#define GPWTM0_GPTMTAMR_R_TAMR_PERIOD    (0x00000002)
#define GPWTM0_GPTMTAMR_R_TAMR_CAPTURE   (0x00000003)

#define GPWTM0_GPTMTAMR_TAMR_MASK        (0x00000003)
#define GPWTM0_GPTMTAMR_TAMR_ONESHOT     (0x00000001)
#define GPWTM0_GPTMTAMR_TAMR_PERIOD      (0x00000002)
#define GPWTM0_GPTMTAMR_TAMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPWTM0_GPTMTAMR_R_TACMR_MASK      (0x00000004)
#define GPWTM0_GPTMTAMR_R_TACMR_BIT       (2)
#define GPWTM0_GPTMTAMR_R_TACMR_EDGECOUNT (0x00000000)
#define GPWTM0_GPTMTAMR_R_TACMR_EDGETIME  (0x00000004)

#define GPWTM0_GPTMTAMR_TACMR_MASK        (0x00000001)
#define GPWTM0_GPTMTAMR_TACMR_EDGECOUNT   (0x00000000)
#define GPWTM0_GPTMTAMR_TACMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPWTM0_GPTMTAMR_R_TAAMS_MASK      (0x00000008)
#define GPWTM0_GPTMTAMR_R_TAAMS_BIT       (3)
#define GPWTM0_GPTMTAMR_R_TAAMS_CAPCOMP   (0x00000000)
#define GPWTM0_GPTMTAMR_R_TAAMS_PWM       (0x00000008)

#define GPWTM0_GPTMTAMR_TAAMS_MASK        (0x00000001)
#define GPWTM0_GPTMTAMR_TAAMS_CAPCOMP     (0x00000000)
#define GPWTM0_GPTMTAMR_TAAMS_PWM         (0x00000001)
//--------

//--------
#define GPWTM0_GPTMTAMR_R_TACDIR_MASK      (0x00000010)
#define GPWTM0_GPTMTAMR_R_TACDIR_BIT       (4)
#define GPWTM0_GPTMTAMR_R_TACDIR_DOWN      (0x00000000)
#define GPWTM0_GPTMTAMR_R_TACDIR_UP        (0x00000010)

#define GPWTM0_GPTMTAMR_TACDIR_MASK        (0x00000001)
#define GPWTM0_GPTMTAMR_TACDIR_DOWN        (0x00000000)
#define GPWTM0_GPTMTAMR_TACDIR_UP          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMTAMR_R_TAMIE_MASK      (0x00000020)
#define GPWTM0_GPTMTAMR_R_TAMIE_BIT       (5)
#define GPWTM0_GPTMTAMR_R_TAMIE_DIS       (0x00000000)
#define GPWTM0_GPTMTAMR_R_TAMIE_EN        (0x00000020)

#define GPWTM0_GPTMTAMR_TAMIE_MASK        (0x00000001)
#define GPWTM0_GPTMTAMR_TAMIE_DIS         (0x00000000)
#define GPWTM0_GPTMTAMR_TAMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMTAMR_R_TAWOT_MASK      (0x00000040)
#define GPWTM0_GPTMTAMR_R_TAWOT_BIT       (6)
#define GPWTM0_GPTMTAMR_R_TAWOT_INSTANT   (0x00000000)
#define GPWTM0_GPTMTAMR_R_TAWOT_TRIGGER   (0x00000040)

#define GPWTM0_GPTMTAMR_TAWOT_MASK        (0x00000001)
#define GPWTM0_GPTMTAMR_TAWOT_INSTANT     (0x00000000)
#define GPWTM0_GPTMTAMR_TAWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPWTM0_GPTMTAMR_R_TASNAPS_MASK      (0x00000080)
#define GPWTM0_GPTMTAMR_R_TASNAPS_BIT       (7)
#define GPWTM0_GPTMTAMR_R_TASNAPS_DIS       (0x00000000)
#define GPWTM0_GPTMTAMR_R_TASNAPS_EN        (0x00000080)

#define GPWTM0_GPTMTAMR_TASNAPS_MASK        (0x00000001)
#define GPWTM0_GPTMTAMR_TASNAPS_DIS         (0x00000000)
#define GPWTM0_GPTMTAMR_TASNAPS_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMTAMR_R_TAILD_MASK      (0x00000100)
#define GPWTM0_GPTMTAMR_R_TAILD_BIT       (8)
#define GPWTM0_GPTMTAMR_R_TAILD_NEXT      (0x00000000)
#define GPWTM0_GPTMTAMR_R_TAILD_TIMEOUT   (0x00000100)

#define GPWTM0_GPTMTAMR_TAILD_MASK        (0x00000001)
#define GPWTM0_GPTMTAMR_TAILD_NEXT        (0x00000000)
#define GPWTM0_GPTMTAMR_TAILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM0_GPTMTAMR_R_TAPWMIE_MASK      (0x00000200)
#define GPWTM0_GPTMTAMR_R_TAPWMIE_BIT       (9)
#define GPWTM0_GPTMTAMR_R_TAPWMIE_DIS       (0x00000000)
#define GPWTM0_GPTMTAMR_R_TAPWMIE_EN        (0x00000200)

#define GPWTM0_GPTMTAMR_TAPWMIE_MASK        (0x00000001)
#define GPWTM0_GPTMTAMR_TAPWMIE_DIS         (0x00000000)
#define GPWTM0_GPTMTAMR_TAPWMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMTAMR_R_TAMRSU_MASK      (0x00000400)
#define GPWTM0_GPTMTAMR_R_TAMRSU_BIT       (10)
#define GPWTM0_GPTMTAMR_R_TAMRSU_NEXT      (0x00000000)
#define GPWTM0_GPTMTAMR_R_TAMRSU_TIMEOUT   (0x00000400)

#define GPWTM0_GPTMTAMR_TAMRSU_MASK        (0x00000001)
#define GPWTM0_GPTMTAMR_TAMRSU_NEXT        (0x00000000)
#define GPWTM0_GPTMTAMR_TAMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM0_GPTMTAMR_R_TAPLO_MASK      (0x00000800)
#define GPWTM0_GPTMTAMR_R_TAPLO_BIT       (11)
#define GPWTM0_GPTMTAMR_R_TAPLO_LOW       (0x00000000)
#define GPWTM0_GPTMTAMR_R_TAPLO_HIGH      (0x00000800)

#define GPWTM0_GPTMTAMR_TAPLO_MASK        (0x00000001)
#define GPWTM0_GPTMTAMR_TAPLO_LOW         (0x00000000)
#define GPWTM0_GPTMTAMR_TAPLO_HIGH        (0x00000001)
//--------

#define GPWTM0_GPTMTAMR_TACMR_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(2*4))))
#define GPWTM0_GPTMTAMR_TAAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(3*4))))
#define GPWTM0_GPTMTAMR_TACDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(4*4))))
#define GPWTM0_GPTMTAMR_TAMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(5*4))))
#define GPWTM0_GPTMTAMR_TAWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(6*4))))
#define GPWTM0_GPTMTAMR_TASNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(7*4))))
#define GPWTM0_GPTMTAMR_TAILD_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(8*4))))
#define GPWTM0_GPTMTAMR_TAPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(9*4))))
#define GPWTM0_GPTMTAMR_TAMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(10*4))))
#define GPWTM0_GPTMTAMR_TAPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.3 GPTMTBMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMTBMR            (((GPTMTBMR_TypeDef*)(GPWTM0_BASE + GPTM_GPTMTBMR_OFFSET )))
#define GPWTM0_GPTMTBMR_R          (*((volatile uint32_t *)(GPWTM0_BASE +GPTM_GPTMTBMR_OFFSET)))


//--------
#define GPWTM0_GPTMTBMR_R_TBMR_MASK      (0x00000003)
#define GPWTM0_GPTMTBMR_R_TBMR_BIT       (0)
#define GPWTM0_GPTMTBMR_R_TBMR_ONESHOT   (0x00000001)
#define GPWTM0_GPTMTBMR_R_TBMR_PERIOD    (0x00000002)
#define GPWTM0_GPTMTBMR_R_TBMR_CAPTURE   (0x00000003)

#define GPWTM0_GPTMTBMR_TBMR_MASK        (0x00000003)
#define GPWTM0_GPTMTBMR_TBMR_ONESHOT     (0x00000001)
#define GPWTM0_GPTMTBMR_TBMR_PERIOD      (0x00000002)
#define GPWTM0_GPTMTBMR_TBMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPWTM0_GPTMTBMR_R_TBCMR_MASK      (0x00000004)
#define GPWTM0_GPTMTBMR_R_TBCMR_BIT       (2)
#define GPWTM0_GPTMTBMR_R_TBCMR_EDGECOUNT (0x00000000)
#define GPWTM0_GPTMTBMR_R_TBCMR_EDGETIME  (0x00000004)

#define GPWTM0_GPTMTBMR_TBCMR_MASK        (0x00000001)
#define GPWTM0_GPTMTBMR_TBCMR_EDGECOUNT   (0x00000000)
#define GPWTM0_GPTMTBMR_TBCMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPWTM0_GPTMTBMR_R_TBAMS_MASK      (0x00000008)
#define GPWTM0_GPTMTBMR_R_TBAMS_BIT       (3)
#define GPWTM0_GPTMTBMR_R_TBAMS_CAPCOMP   (0x00000000)
#define GPWTM0_GPTMTBMR_R_TBAMS_PWM       (0x00000008)

#define GPWTM0_GPTMTBMR_TBAMS_MASK        (0x00000001)
#define GPWTM0_GPTMTBMR_TBAMS_CAPCOMP     (0x00000000)
#define GPWTM0_GPTMTBMR_TBAMS_PWM         (0x00000001)
//--------

//--------
#define GPWTM0_GPTMTBMR_R_TBCDIR_MASK      (0x00000010)
#define GPWTM0_GPTMTBMR_R_TBCDIR_BIT       (4)
#define GPWTM0_GPTMTBMR_R_TBCDIR_DOWN      (0x00000000)
#define GPWTM0_GPTMTBMR_R_TBCDIR_UP        (0x00000010)

#define GPWTM0_GPTMTBMR_TBCDIR_MASK        (0x00000001)
#define GPWTM0_GPTMTBMR_TBCDIR_DOWN        (0x00000000)
#define GPWTM0_GPTMTBMR_TBCDIR_UP          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMTBMR_R_TBMIE_MASK      (0x00000020)
#define GPWTM0_GPTMTBMR_R_TBMIE_BIT       (5)
#define GPWTM0_GPTMTBMR_R_TBMIE_DIS       (0x00000000)
#define GPWTM0_GPTMTBMR_R_TBMIE_EN        (0x00000020)

#define GPWTM0_GPTMTBMR_TBMIE_MASK        (0x00000001)
#define GPWTM0_GPTMTBMR_TBMIE_DIS         (0x00000000)
#define GPWTM0_GPTMTBMR_TBMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMTBMR_R_TBWOT_MASK      (0x00000040)
#define GPWTM0_GPTMTBMR_R_TBWOT_BIT       (6)
#define GPWTM0_GPTMTBMR_R_TBWOT_INSTANT   (0x00000000)
#define GPWTM0_GPTMTBMR_R_TBWOT_TRIGGER   (0x00000040)

#define GPWTM0_GPTMTBMR_TBWOT_MASK        (0x00000001)
#define GPWTM0_GPTMTBMR_TBWOT_INSTANT     (0x00000000)
#define GPWTM0_GPTMTBMR_TBWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPWTM0_GPTMTBMR_R_TBSNAPS_MASK      (0x00000080)
#define GPWTM0_GPTMTBMR_R_TBSNAPS_BIT       (7)
#define GPWTM0_GPTMTBMR_R_TBSNAPS_DIS       (0x00000000)
#define GPWTM0_GPTMTBMR_R_TBSNAPS_EN        (0x00000080)

#define GPWTM0_GPTMTBMR_TBSNAPS_MASK        (0x00000001)
#define GPWTM0_GPTMTBMR_TBSNAPS_DIS         (0x00000000)
#define GPWTM0_GPTMTBMR_TBSNAPS_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMTBMR_R_TBILD_MASK      (0x00000100)
#define GPWTM0_GPTMTBMR_R_TBILD_BIT       (8)
#define GPWTM0_GPTMTBMR_R_TBILD_NEXT      (0x00000000)
#define GPWTM0_GPTMTBMR_R_TBILD_TIMEOUT   (0x00000100)

#define GPWTM0_GPTMTBMR_TBILD_MASK        (0x00000001)
#define GPWTM0_GPTMTBMR_TBILD_NEXT        (0x00000000)
#define GPWTM0_GPTMTBMR_TBILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM0_GPTMTBMR_R_TBPWMIE_MASK      (0x00000200)
#define GPWTM0_GPTMTBMR_R_TBPWMIE_BIT       (9)
#define GPWTM0_GPTMTBMR_R_TBPWMIE_DIS       (0x00000000)
#define GPWTM0_GPTMTBMR_R_TBPWMIE_EN        (0x00000200)

#define GPWTM0_GPTMTBMR_TBPWMIE_MASK        (0x00000001)
#define GPWTM0_GPTMTBMR_TBPWMIE_DIS         (0x00000000)
#define GPWTM0_GPTMTBMR_TBPWMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMTBMR_R_TBMRSU_MASK      (0x00000400)
#define GPWTM0_GPTMTBMR_R_TBMRSU_BIT       (10)
#define GPWTM0_GPTMTBMR_R_TBMRSU_NEXT      (0x00000000)
#define GPWTM0_GPTMTBMR_R_TBMRSU_TIMEOUT   (0x00000400)

#define GPWTM0_GPTMTBMR_TBMRSU_MASK        (0x00000001)
#define GPWTM0_GPTMTBMR_TBMRSU_NEXT        (0x00000000)
#define GPWTM0_GPTMTBMR_TBMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM0_GPTMTBMR_R_TBPLO_MASK      (0x00000800)
#define GPWTM0_GPTMTBMR_R_TBPLO_BIT       (11)
#define GPWTM0_GPTMTBMR_R_TBPLO_LOW       (0x00000000)
#define GPWTM0_GPTMTBMR_R_TBPLO_HIGH      (0x00000800)

#define GPWTM0_GPTMTBMR_TBPLO_MASK        (0x00000001)
#define GPWTM0_GPTMTBMR_TBPLO_LOW         (0x00000000)
#define GPWTM0_GPTMTBMR_TBPLO_HIGH        (0x00000001)
//--------

#define GPWTM0_GPTMTBMR_TBCMR_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(2*4))))
#define GPWTM0_GPTMTBMR_TBAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(3*4))))
#define GPWTM0_GPTMTBMR_TBCDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(4*4))))
#define GPWTM0_GPTMTBMR_TBMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(5*4))))
#define GPWTM0_GPTMTBMR_TBWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(6*4))))
#define GPWTM0_GPTMTBMR_TBSNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(7*4))))
#define GPWTM0_GPTMTBMR_TBILD_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(8*4))))
#define GPWTM0_GPTMTBMR_TBPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(9*4))))
#define GPWTM0_GPTMTBMR_TBMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(10*4))))
#define GPWTM0_GPTMTBMR_TBPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.4 GPTMCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMCTL            (((GPTMCTL_TypeDef*)(GPWTM0_BASE + GPTM_GPTMCTL_OFFSET )))
#define GPWTM0_GPTMCTL_R          (*((volatile uint32_t *)(GPWTM0_BASE +GPTM_GPTMCTL_OFFSET)))


//--------
#define GPWTM0_GPTMCTL_R_TAEN_MASK      (0x00000001)
#define GPWTM0_GPTMCTL_R_TAEN_BIT       (0)
#define GPWTM0_GPTMCTL_R_TAEN_DIS       (0x00000000)
#define GPWTM0_GPTMCTL_R_TAEN_EN        (0x00000001)

#define GPWTM0_GPTMCTL_TAEN_MASK        (0x00000001)
#define GPWTM0_GPTMCTL_TAEN_DIS         (0x00000000)
#define GPWTM0_GPTMCTL_TAEN_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMCTL_R_TASTALL_MASK      (0x00000002)
#define GPWTM0_GPTMCTL_R_TASTALL_BIT       (1)
#define GPWTM0_GPTMCTL_R_TASTALL_CONTINUE  (0x00000000)
#define GPWTM0_GPTMCTL_R_TASTALL_FREEZE    (0x00000002)

#define GPWTM0_GPTMCTL_TASTALL_MASK        (0x00000001)
#define GPWTM0_GPTMCTL_TASTALL_CONTINUE    (0x00000000)
#define GPWTM0_GPTMCTL_TASTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMCTL_R_TAEVENT_MASK      (0x0000000C)
#define GPWTM0_GPTMCTL_R_TAEVENT_BIT       (2)
#define GPWTM0_GPTMCTL_R_TAEVENT_POS       (0x00000000)
#define GPWTM0_GPTMCTL_R_TAEVENT_NEG       (0x00000004)
#define GPWTM0_GPTMCTL_R_TAEVENT_BOTH      (0x0000000C)

#define GPWTM0_GPTMCTL_TAEVENT_MASK        (0x00000003)
#define GPWTM0_GPTMCTL_TAEVENT_NEG         (0x00000000)
#define GPWTM0_GPTMCTL_TAEVENT_POS         (0x00000001)
#define GPWTM0_GPTMCTL_TAEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPWTM0_GPTMCTL_R_RTCEN_MASK      (0x00000010)
#define GPWTM0_GPTMCTL_R_RTCEN_BIT       (4)
#define GPWTM0_GPTMCTL_R_RTCEN_CONTINUE  (0x00000000)
#define GPWTM0_GPTMCTL_R_RTCEN_FREEZE    (0x00000010)

#define GPWTM0_GPTMCTL_RTCEN_MASK        (0x00000001)
#define GPWTM0_GPTMCTL_RTCEN_CONTINUE    (0x00000000)
#define GPWTM0_GPTMCTL_RTCEN_FREEZE      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMCTL_R_TAOTE_MASK      (0x00000020)
#define GPWTM0_GPTMCTL_R_TAOTE_BIT       (5)
#define GPWTM0_GPTMCTL_R_TAOTE_DIS       (0x00000000)
#define GPWTM0_GPTMCTL_R_TAOTE_EN        (0x00000020)

#define GPWTM0_GPTMCTL_TAOTE_MASK        (0x00000001)
#define GPWTM0_GPTMCTL_TAOTE_DIS         (0x00000000)
#define GPWTM0_GPTMCTL_TAOTE_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMCTL_R_TAPWML_MASK      (0x00000040)
#define GPWTM0_GPTMCTL_R_TAPWML_BIT       (6)
#define GPWTM0_GPTMCTL_R_TAPWML_NA        (0x00000000)
#define GPWTM0_GPTMCTL_R_TAPWML_INV       (0x00000040)

#define GPWTM0_GPTMCTL_TAPWML_MASK        (0x00000001)
#define GPWTM0_GPTMCTL_TAPWML_NA          (0x00000000)
#define GPWTM0_GPTMCTL_TAPWML_INV         (0x00000001)
//--------



//--------
#define GPWTM0_GPTMCTL_R_TBEN_MASK      (0x00000100)
#define GPWTM0_GPTMCTL_R_TBEN_BIT       (8)
#define GPWTM0_GPTMCTL_R_TBEN_DIS       (0x00000000)
#define GPWTM0_GPTMCTL_R_TBEN_EN        (0x00000100)

#define GPWTM0_GPTMCTL_TBEN_MASK        (0x00000001)
#define GPWTM0_GPTMCTL_TBEN_DIS         (0x00000000)
#define GPWTM0_GPTMCTL_TBEN_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMCTL_R_TBSTALL_MASK      (0x00000200)
#define GPWTM0_GPTMCTL_R_TBSTALL_BIT       (9)
#define GPWTM0_GPTMCTL_R_TBSTALL_CONTINUE  (0x00000000)
#define GPWTM0_GPTMCTL_R_TBSTALL_FREEZE    (0x00000200)

#define GPWTM0_GPTMCTL_TBSTALL_MASK        (0x00000001)
#define GPWTM0_GPTMCTL_TBSTALL_CONTINUE    (0x00000000)
#define GPWTM0_GPTMCTL_TBSTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMCTL_R_TBEVENT_MASK      (0x00000C00)
#define GPWTM0_GPTMCTL_R_TBEVENT_BIT       (10)
#define GPWTM0_GPTMCTL_R_TBEVENT_POS       (0x00000000)
#define GPWTM0_GPTMCTL_R_TBEVENT_NEG       (0x00000400)
#define GPWTM0_GPTMCTL_R_TBEVENT_BOTH      (0x00000C00)

#define GPWTM0_GPTMCTL_TBEVENT_MASK        (0x00000003)
#define GPWTM0_GPTMCTL_TBEVENT_NEG         (0x00000000)
#define GPWTM0_GPTMCTL_TBEVENT_POS         (0x00000001)
#define GPWTM0_GPTMCTL_TBEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPWTM0_GPTMCTL_R_TBOTE_MASK      (0x00002000)
#define GPWTM0_GPTMCTL_R_TBOTE_BIT       (13)
#define GPWTM0_GPTMCTL_R_TBOTE_DIS       (0x00000000)
#define GPWTM0_GPTMCTL_R_TBOTE_EN        (0x00002000)

#define GPWTM0_GPTMCTL_TBOTE_MASK        (0x00000001)
#define GPWTM0_GPTMCTL_TBOTE_DIS         (0x00000000)
#define GPWTM0_GPTMCTL_TBOTE_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMCTL_R_TBPWML_MASK      (0x00004000)
#define GPWTM0_GPTMCTL_R_TBPWML_BIT       (14)
#define GPWTM0_GPTMCTL_R_TBPWML_NA        (0x00000000)
#define GPWTM0_GPTMCTL_R_TBPWML_INV       (0x00004000)

#define GPWTM0_GPTMCTL_TBPWML_MASK        (0x00000001)
#define GPWTM0_GPTMCTL_TBPWML_NA          (0x00000000)
#define GPWTM0_GPTMCTL_TBPWML_INV         (0x00000001)
//--------

#define GPWTM0_GPTMCTL_TAEN_BB      (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(0*4))))
#define GPWTM0_GPTMCTL_TASTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(1*4))))
#define GPWTM0_GPTMCTL_RTCEN_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(4*4))))
#define GPWTM0_GPTMCTL_TAOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(5*4))))
#define GPWTM0_GPTMCTL_TAPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTMGPTMCTL_OFFSET)*32)+(6*4))))
#define GPWTM0_GPTMCTL_TBEN_BB      (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(8*4))))
#define GPWTM0_GPTMCTL_TBSTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(9*4))))
#define GPWTM0_GPTMCTL_TBOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(13*4))))
#define GPWTM0_GPTMCTL_TBPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(14*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.5 GPTMSYNC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMSYNC            (((GPTMSYNC_TypeDef*)(GPWTM0_BASE + GPTM_GPTMSYNC_OFFSET )))
#define GPWTM0_GPTMSYNC_R          (*((volatile uint32_t *)(GPWTM0_BASE +GPTM_GPTMSYNC_OFFSET)))

//--------
#define GPWTM0_GPTMSYNC_R_SYNCT0_MASK      (0x00000003)
#define GPWTM0_GPTMSYNC_R_SYNCT0_BIT       (0)
#define GPWTM0_GPTMSYNC_R_SYNCT0_NA        (0x00000000)
#define GPWTM0_GPTMSYNC_R_SYNCT0_TA        (0x00000001)
#define GPWTM0_GPTMSYNC_R_SYNCT0_TB        (0x00000002)
#define GPWTM0_GPTMSYNC_R_SYNCT0_BOTH      (0x00000003)

#define GPWTM0_GPTMSYNC_SYNCT0_MASK        (0x00000003)
#define GPWTM0_GPTMSYNC_SYNCT0_NA          (0x00000000)
#define GPWTM0_GPTMSYNC_SYNCT0_TA          (0x00000001)
#define GPWTM0_GPTMSYNC_SYNCT0_TB          (0x00000002)
#define GPWTM0_GPTMSYNC_SYNCT0_BOTH        (0x00000003)
//--------

//--------
#define GPWTM0_GPTMSYNC_R_SYNCT1_MASK      (0x0000000C)
#define GPWTM0_GPTMSYNC_R_SYNCT1_BIT       (2)
#define GPWTM0_GPTMSYNC_R_SYNCT1_NA        (0x00000000)
#define GPWTM0_GPTMSYNC_R_SYNCT1_TA        (0x00000004)
#define GPWTM0_GPTMSYNC_R_SYNCT1_TB        (0x00000008)
#define GPWTM0_GPTMSYNC_R_SYNCT1_BOTH      (0x0000000C)

#define GPWTM0_GPTMSYNC_SYNCT1_MASK        (0x00000003)
#define GPWTM0_GPTMSYNC_SYNCT1_NA          (0x00000000)
#define GPWTM0_GPTMSYNC_SYNCT1_TA          (0x00000001)
#define GPWTM0_GPTMSYNC_SYNCT1_TB          (0x00000002)
#define GPWTM0_GPTMSYNC_SYNCT1_BOTH        (0x00000003)
//--------

//--------
#define GPWTM0_GPTMSYNC_R_SYNCT2_MASK      (0x00000030)
#define GPWTM0_GPTMSYNC_R_SYNCT2_BIT       (4)
#define GPWTM0_GPTMSYNC_R_SYNCT2_NA        (0x00000000)
#define GPWTM0_GPTMSYNC_R_SYNCT2_TA        (0x00000010)
#define GPWTM0_GPTMSYNC_R_SYNCT2_TB        (0x00000020)
#define GPWTM0_GPTMSYNC_R_SYNCT2_BOTH      (0x00000030)

#define GPWTM0_GPTMSYNC_SYNCT2_MASK        (0x00000003)
#define GPWTM0_GPTMSYNC_SYNCT2_NA          (0x00000000)
#define GPWTM0_GPTMSYNC_SYNCT2_TA          (0x00000001)
#define GPWTM0_GPTMSYNC_SYNCT2_TB          (0x00000002)
#define GPWTM0_GPTMSYNC_SYNCT2_BOTH        (0x00000003)
//--------

//--------
#define GPWTM0_GPTMSYNC_R_SYNCT3_MASK      (0x000000C0)
#define GPWTM0_GPTMSYNC_R_SYNCT3_BIT       (6)
#define GPWTM0_GPTMSYNC_R_SYNCT3_NA        (0x00000000)
#define GPWTM0_GPTMSYNC_R_SYNCT3_TA        (0x00000040)
#define GPWTM0_GPTMSYNC_R_SYNCT3_TB        (0x00000080)
#define GPWTM0_GPTMSYNC_R_SYNCT3_BOTH      (0x000000C0)

#define GPWTM0_GPTMSYNC_SYNCT3_MASK        (0x00000003)
#define GPWTM0_GPTMSYNC_SYNCT3_NA          (0x00000000)
#define GPWTM0_GPTMSYNC_SYNCT3_TA          (0x00000001)
#define GPWTM0_GPTMSYNC_SYNCT3_TB          (0x00000002)
#define GPWTM0_GPTMSYNC_SYNCT3_BOTH        (0x00000003)
//--------

//--------
#define GPWTM0_GPTMSYNC_R_SYNCT4_MASK      (0x00000300)
#define GPWTM0_GPTMSYNC_R_SYNCT4_BIT       (8)
#define GPWTM0_GPTMSYNC_R_SYNCT4_NA        (0x00000000)
#define GPWTM0_GPTMSYNC_R_SYNCT4_TA        (0x00000100)
#define GPWTM0_GPTMSYNC_R_SYNCT4_TB        (0x00000200)
#define GPWTM0_GPTMSYNC_R_SYNCT4_BOTH      (0x00000300)

#define GPWTM0_GPTMSYNC_SYNCT4_MASK        (0x00000003)
#define GPWTM0_GPTMSYNC_SYNCT4_NA          (0x00000000)
#define GPWTM0_GPTMSYNC_SYNCT4_TA          (0x00000001)
#define GPWTM0_GPTMSYNC_SYNCT4_TB          (0x00000002)
#define GPWTM0_GPTMSYNC_SYNCT4_BOTH        (0x00000003)
//--------

//--------
#define GPWTM0_GPTMSYNC_R_SYNCT5_MASK      (0x00000C00)
#define GPWTM0_GPTMSYNC_R_SYNCT5_BIT       (10)
#define GPWTM0_GPTMSYNC_R_SYNCT5_NA        (0x00000000)
#define GPWTM0_GPTMSYNC_R_SYNCT5_TA        (0x00000400)
#define GPWTM0_GPTMSYNC_R_SYNCT5_TB        (0x00000800)
#define GPWTM0_GPTMSYNC_R_SYNCT5_BOTH      (0x00000C00)

#define GPWTM0_GPTMSYNC_SYNCT5_MASK        (0x00000003)
#define GPWTM0_GPTMSYNC_SYNCT5_NA          (0x00000000)
#define GPWTM0_GPTMSYNC_SYNCT5_TA          (0x00000001)
#define GPWTM0_GPTMSYNC_SYNCT5_TB          (0x00000002)
#define GPWTM0_GPTMSYNC_SYNCT5_BOTH        (0x00000003)
//--------

//--------
#define GPWTM0_GPTMSYNC_R_SYNCWT0_MASK      (0x00003000)
#define GPWTM0_GPTMSYNC_R_SYNCWT0_BIT       (12)
#define GPWTM0_GPTMSYNC_R_SYNCWT0_NA        (0x00000000)
#define GPWTM0_GPTMSYNC_R_SYNCWT0_TA        (0x00001000)
#define GPWTM0_GPTMSYNC_R_SYNCWT0_TB        (0x00002000)
#define GPWTM0_GPTMSYNC_R_SYNCWT0_BOTH      (0x00003000)

#define GPWTM0_GPTMSYNC_SYNCWT0_MASK        (0x00000003)
#define GPWTM0_GPTMSYNC_SYNCWT0_NA          (0x00000000)
#define GPWTM0_GPTMSYNC_SYNCWT0_TA          (0x00000001)
#define GPWTM0_GPTMSYNC_SYNCWT0_TB          (0x00000002)
#define GPWTM0_GPTMSYNC_SYNCWT0_BOTH        (0x00000003)
//--------

//--------
#define GPWTM0_GPTMSYNC_R_SYNCWT1_MASK      (0x0000C000)
#define GPWTM0_GPTMSYNC_R_SYNCWT1_BIT       (14)
#define GPWTM0_GPTMSYNC_R_SYNCWT1_NA        (0x00000000)
#define GPWTM0_GPTMSYNC_R_SYNCWT1_TA        (0x00004000)
#define GPWTM0_GPTMSYNC_R_SYNCWT1_TB        (0x00008000)
#define GPWTM0_GPTMSYNC_R_SYNCWT1_BOTH      (0x0000C000)

#define GPWTM0_GPTMSYNC_SYNCWT1_MASK        (0x00000003)
#define GPWTM0_GPTMSYNC_SYNCWT1_NA          (0x00000000)
#define GPWTM0_GPTMSYNC_SYNCWT1_TA          (0x00000001)
#define GPWTM0_GPTMSYNC_SYNCWT1_TB          (0x00000002)
#define GPWTM0_GPTMSYNC_SYNCWT1_BOTH        (0x00000003)
//--------

//--------
#define GPWTM0_GPTMSYNC_R_SYNCWT2_MASK      (0x00030000)
#define GPWTM0_GPTMSYNC_R_SYNCWT2_BIT       (16)
#define GPWTM0_GPTMSYNC_R_SYNCWT2_NA        (0x00000000)
#define GPWTM0_GPTMSYNC_R_SYNCWT2_TA        (0x00010000)
#define GPWTM0_GPTMSYNC_R_SYNCWT2_TB        (0x00020000)
#define GPWTM0_GPTMSYNC_R_SYNCWT2_BOTH      (0x00030000)

#define GPWTM0_GPTMSYNC_SYNCWT2_MASK        (0x00000003)
#define GPWTM0_GPTMSYNC_SYNCWT2_NA          (0x00000000)
#define GPWTM0_GPTMSYNC_SYNCWT2_TA          (0x00000001)
#define GPWTM0_GPTMSYNC_SYNCWT2_TB          (0x00000002)
#define GPWTM0_GPTMSYNC_SYNCWT2_BOTH        (0x00000003)
//--------

//--------
#define GPWTM0_GPTMSYNC_R_SYNCWT3_MASK      (0x000C0000)
#define GPWTM0_GPTMSYNC_R_SYNCWT3_BIT       (18)
#define GPWTM0_GPTMSYNC_R_SYNCWT3_NA        (0x00000000)
#define GPWTM0_GPTMSYNC_R_SYNCWT3_TA        (0x00040000)
#define GPWTM0_GPTMSYNC_R_SYNCWT3_TB        (0x00080000)
#define GPWTM0_GPTMSYNC_R_SYNCWT3_BOTH      (0x000C0000)

#define GPWTM0_GPTMSYNC_SYNCWT3_MASK        (0x00000003)
#define GPWTM0_GPTMSYNC_SYNCWT3_NA          (0x00000000)
#define GPWTM0_GPTMSYNC_SYNCWT3_TA          (0x00000001)
#define GPWTM0_GPTMSYNC_SYNCWT3_TB          (0x00000002)
#define GPWTM0_GPTMSYNC_SYNCWT3_BOTH        (0x00000003)
//--------

//--------
#define GPWTM0_GPTMSYNC_R_SYNCWT4_MASK      (0x0030000)
#define GPWTM0_GPTMSYNC_R_SYNCWT4_BIT       (20)
#define GPWTM0_GPTMSYNC_R_SYNCWT4_NA        (0x00000000)
#define GPWTM0_GPTMSYNC_R_SYNCWT4_TA        (0x00100000)
#define GPWTM0_GPTMSYNC_R_SYNCWT4_TB        (0x00200000)
#define GPWTM0_GPTMSYNC_R_SYNCWT4_BOTH      (0x00300000)

#define GPWTM0_GPTMSYNC_SYNCWT4_MASK        (0x00000003)
#define GPWTM0_GPTMSYNC_SYNCWT4_NA          (0x00000000)
#define GPWTM0_GPTMSYNC_SYNCWT4_TA          (0x00000001)
#define GPWTM0_GPTMSYNC_SYNCWT4_TB          (0x00000002)
#define GPWTM0_GPTMSYNC_SYNCWT4_BOTH        (0x00000003)
//--------

//--------
#define GPWTM0_GPTMSYNC_R_SYNCWT5_MASK      (0x00C00000)
#define GPWTM0_GPTMSYNC_R_SYNCWT5_BIT       (22)
#define GPWTM0_GPTMSYNC_R_SYNCWT5_NA        (0x00000000)
#define GPWTM0_GPTMSYNC_R_SYNCWT5_TA        (0x00400000)
#define GPWTM0_GPTMSYNC_R_SYNCWT5_TB        (0x00800000)
#define GPWTM0_GPTMSYNC_R_SYNCWT5_BOTH      (0x00C00000)

#define GPWTM0_GPTMSYNC_SYNCWT5_MASK        (0x00000003)
#define GPWTM0_GPTMSYNC_SYNCWT5_NA          (0x00000000)
#define GPWTM0_GPTMSYNC_SYNCWT5_TA          (0x00000001)
#define GPWTM0_GPTMSYNC_SYNCWT5_TB          (0x00000002)
#define GPWTM0_GPTMSYNC_SYNCWT5_BOTH        (0x00000003)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.6 GPTMIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMIMR            (((GPTMIMR_TypeDef*)(GPWTM0_BASE + GPTM_GPTMIMR_OFFSET )))
#define GPWTM0_GPTMIMR_R          (*((volatile  uint32_t *)(GPWTM0_BASE +GPTM_GPTMIMR_OFFSET)))

//--------
#define GPWTM0_GPTMIMR_R_TATOIM_MASK      (0x00000001)
#define GPWTM0_GPTMIMR_R_TATOIM_BIT       (0)
#define GPWTM0_GPTMIMR_R_TATOIM_DIS       (0x00000000)
#define GPWTM0_GPTMIMR_R_TATOIM_EN        (0x00000001)

#define GPWTM0_GPTMIMR_TATOIM_MASK        (0x00000001)
#define GPWTM0_GPTMIMR_TATOIM_DIS         (0x00000000)
#define GPWTM0_GPTMIMR_TATOIM_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMIMR_R_CAMIM_MASK      (0x00000002)
#define GPWTM0_GPTMIMR_R_CAMIM_BIT       (1)
#define GPWTM0_GPTMIMR_R_CAMIM_DIS       (0x00000000)
#define GPWTM0_GPTMIMR_R_CAMIM_EN        (0x00000002)

#define GPWTM0_GPTMIMR_CAMIM_MASK        (0x00000001)
#define GPWTM0_GPTMIMR_CAMIM_DIS         (0x00000000)
#define GPWTM0_GPTMIMR_CAMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMIMR_R_CAEIM_MASK      (0x00000004)
#define GPWTM0_GPTMIMR_R_CAEIM_BIT       (2)
#define GPWTM0_GPTMIMR_R_CAEIM_DIS       (0x00000000)
#define GPWTM0_GPTMIMR_R_CAEIM_EN        (0x00000004)

#define GPWTM0_GPTMIMR_CAEIM_MASK        (0x00000001)
#define GPWTM0_GPTMIMR_CAEIM_DIS         (0x00000000)
#define GPWTM0_GPTMIMR_CAEIM_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMIMR_R_RTCIM_MASK      (0x00000008)
#define GPWTM0_GPTMIMR_R_RTCIM_BIT       (3)
#define GPWTM0_GPTMIMR_R_RTCIM_DIS       (0x00000000)
#define GPWTM0_GPTMIMR_R_RTCIM_EN        (0x00000008)

#define GPWTM0_GPTMIMR_RTCIM_MASK        (0x00000001)
#define GPWTM0_GPTMIMR_RTCIM_DIS         (0x00000000)
#define GPWTM0_GPTMIMR_RTCIM_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMIMR_R_TAMIM_MASK      (0x00000010)
#define GPWTM0_GPTMIMR_R_TAMIM_BIT       (4)
#define GPWTM0_GPTMIMR_R_TAMIM_DIS       (0x00000000)
#define GPWTM0_GPTMIMR_R_TAMIM_EN        (0x00000010)

#define GPWTM0_GPTMIMR_TAMIM_MASK        (0x00000001)
#define GPWTM0_GPTMIMR_TAMIM_DIS         (0x00000000)
#define GPWTM0_GPTMIMR_TAMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMIMR_R_TBTOIM_MASK      (0x00000100)
#define GPWTM0_GPTMIMR_R_TBTOIM_BIT       (8)
#define GPWTM0_GPTMIMR_R_TBTOIM_DIS       (0x00000000)
#define GPWTM0_GPTMIMR_R_TBTOIM_EN        (0x00000100)

#define GPWTM0_GPTMIMR_TBTOIM_MASK        (0x00000001)
#define GPWTM0_GPTMIMR_TBTOIM_DIS         (0x00000000)
#define GPWTM0_GPTMIMR_TBTOIM_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMIMR_R_CBMIM_MASK      (0x00000200)
#define GPWTM0_GPTMIMR_R_CBMIM_BIT       (9)
#define GPWTM0_GPTMIMR_R_CBMIM_DIS       (0x00000000)
#define GPWTM0_GPTMIMR_R_CBMIM_EN        (0x00000200)

#define GPWTM0_GPTMIMR_CBMIM_MASK        (0x00000001)
#define GPWTM0_GPTMIMR_CBMIM_DIS         (0x00000000)
#define GPWTM0_GPTMIMR_CBMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMIMR_R_CBEIM_MASK      (0x00000400)
#define GPWTM0_GPTMIMR_R_CBEIM_BIT       (10)
#define GPWTM0_GPTMIMR_R_CBEIM_DIS       (0x00000000)
#define GPWTM0_GPTMIMR_R_CBEIM_EN        (0x00000400)

#define GPWTM0_GPTMIMR_CBEIM_MASK        (0x00000001)
#define GPWTM0_GPTMIMR_CBEIM_DIS         (0x00000000)
#define GPWTM0_GPTMIMR_CBEIM_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMIMR_R_TBMIM_MASK      (0x00000800)
#define GPWTM0_GPTMIMR_R_TBMIM_BIT       (11)
#define GPWTM0_GPTMIMR_R_TBMIM_DIS       (0x00000000)
#define GPWTM0_GPTMIMR_R_TBMIM_EN        (0x00000800)

#define GPWTM0_GPTMIMR_TBMIM_MASK        (0x00000001)
#define GPWTM0_GPTMIMR_TBMIM_DIS         (0x00000000)
#define GPWTM0_GPTMIMR_TBMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM0_GPTMIMR_R_WUEIM_MASK      (0x00010000)
#define GPWTM0_GPTMIMR_R_WUEIM_BIT       (16)
#define GPWTM0_GPTMIMR_R_WUEIM_DIS       (0x00000000)
#define GPWTM0_GPTMIMR_R_WUEIM_EN        (0x00010000)

#define GPWTM0_GPTMIMR_WUEIM_MASK        (0x00000001)
#define GPWTM0_GPTMIMR_WUEIM_DIS         (0x00000000)
#define GPWTM0_GPTMIMR_WUEIM_EN          (0x00000001)
//--------

#define GPWTM0_GPTMIMR_TATOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(0*4))))
#define GPWTM0_GPTMIMR_CAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(1*4))))
#define GPWTM0_GPTMIMR_CAEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(2*4))))
#define GPWTM0_GPTMIMR_RTCIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(3*4))))
#define GPWTM0_GPTMIMR_TAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(4*4))))
#define GPWTM0_GPTMIMR_TBTOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(8*4))))
#define GPWTM0_GPTMIMR_CBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(9*4))))
#define GPWTM0_GPTMIMR_CBEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(10*4))))
#define GPWTM0_GPTMIMR_TBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(11*4))))
#define GPWTM0_GPTMIMR_WUEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(16*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.7 GPTMRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMRIS            (((GPTMRIS_TypeDef*)(GPWTM0_BASE + GPTM_GPTMRIS_OFFSET )))
#define GPWTM0_GPTMRIS_R          (*((volatile const uint32_t *)(GPWTM0_BASE +GPTM_GPTMRIS_OFFSET)))



//--------
#define GPWTM0_GPTMRIS_R_TATORIS_MASK      (0x00000001)
#define GPWTM0_GPTMRIS_R_TATORIS_BIT       (0)
#define GPWTM0_GPTMRIS_R_TATORIS_NOACTIVE  (0x00000000)
#define GPWTM0_GPTMRIS_R_TATORIS_ACTIVE    (0x00000001)

#define GPWTM0_GPTMRIS_TATORIS_MASK        (0x00000001)
#define GPWTM0_GPTMRIS_TATORIS_NOACTIVE    (0x00000000)
#define GPWTM0_GPTMRIS_TATORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMRIS_R_CAMRIS_MASK      (0x00000002)
#define GPWTM0_GPTMRIS_R_CAMRIS_BIT       (1)
#define GPWTM0_GPTMRIS_R_CAMRIS_NOACTIVE  (0x00000000)
#define GPWTM0_GPTMRIS_R_CAMRIS_ACTIVE    (0x00000002)

#define GPWTM0_GPTMRIS_CAMRIS_MASK        (0x00000001)
#define GPWTM0_GPTMRIS_CAMRIS_NOACTIVE    (0x00000000)
#define GPWTM0_GPTMRIS_CAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMRIS_R_CAERIS_MASK      (0x00000004)
#define GPWTM0_GPTMRIS_R_CAERIS_BIT       (2)
#define GPWTM0_GPTMRIS_R_CAERIS_NOACTIVE  (0x00000000)
#define GPWTM0_GPTMRIS_R_CAERIS_ACTIVE    (0x00000004)

#define GPWTM0_GPTMRIS_CAERIS_MASK        (0x00000001)
#define GPWTM0_GPTMRIS_CAERIS_NOACTIVE    (0x00000000)
#define GPWTM0_GPTMRIS_CAERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMRIS_R_RTCRIS_MASK      (0x00000008)
#define GPWTM0_GPTMRIS_R_RTCRIS_BIT       (3)
#define GPWTM0_GPTMRIS_R_RTCRIS_NOACTIVE  (0x00000000)
#define GPWTM0_GPTMRIS_R_RTCRIS_ACTIVE    (0x00000008)

#define GPWTM0_GPTMRIS_RTCRIS_MASK        (0x00000001)
#define GPWTM0_GPTMRIS_RTCRIS_NOACTIVE    (0x00000000)
#define GPWTM0_GPTMRIS_RTCRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMRIS_R_TAMRIS_MASK      (0x00000010)
#define GPWTM0_GPTMRIS_R_TAMRIS_BIT       (4)
#define GPWTM0_GPTMRIS_R_TAMRIS_NOACTIVE  (0x00000000)
#define GPWTM0_GPTMRIS_R_TAMRIS_ACTIVE    (0x00000010)

#define GPWTM0_GPTMRIS_TAMRIS_MASK        (0x00000001)
#define GPWTM0_GPTMRIS_TAMRIS_NOACTIVE    (0x00000000)
#define GPWTM0_GPTMRIS_TAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMRIS_R_TBTORIS_MASK      (0x00000100)
#define GPWTM0_GPTMRIS_R_TBTORIS_BIT       (8)
#define GPWTM0_GPTMRIS_R_TBTORIS_NOACTIVE  (0x00000000)
#define GPWTM0_GPTMRIS_R_TBTORIS_ACTIVE    (0x00000100)

#define GPWTM0_GPTMRIS_TBTORIS_MASK        (0x00000001)
#define GPWTM0_GPTMRIS_TBTORIS_NOACTIVE    (0x00000000)
#define GPWTM0_GPTMRIS_TBTORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMRIS_R_CBMRIS_MASK      (0x00000200)
#define GPWTM0_GPTMRIS_R_CBMRIS_BIT       (9)
#define GPWTM0_GPTMRIS_R_CBMRIS_NOACTIVE  (0x00000000)
#define GPWTM0_GPTMRIS_R_CBMRIS_ACTIVE    (0x00000200)

#define GPWTM0_GPTMRIS_CBMRIS_MASK        (0x00000001)
#define GPWTM0_GPTMRIS_CBMRIS_NOACTIVE    (0x00000000)
#define GPWTM0_GPTMRIS_CBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMRIS_R_CBERIS_MASK      (0x00000400)
#define GPWTM0_GPTMRIS_R_CBERIS_BIT       (10)
#define GPWTM0_GPTMRIS_R_CBERIS_NOACTIVE  (0x00000000)
#define GPWTM0_GPTMRIS_R_CBERIS_ACTIVE    (0x00000400)

#define GPWTM0_GPTMRIS_CBERIS_MASK        (0x00000001)
#define GPWTM0_GPTMRIS_CBERIS_NOACTIVE    (0x00000000)
#define GPWTM0_GPTMRIS_CBERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMRIS_R_TBMRIS_MASK      (0x00000800)
#define GPWTM0_GPTMRIS_R_TBMRIS_BIT       (11)
#define GPWTM0_GPTMRIS_R_TBMRIS_NOACTIVE  (0x00000000)
#define GPWTM0_GPTMRIS_R_TBMRIS_ACTIVE    (0x00000800)

#define GPWTM0_GPTMRIS_TBMRIS_MASK        (0x00000001)
#define GPWTM0_GPTMRIS_TBMRIS_NOACTIVE    (0x00000000)
#define GPWTM0_GPTMRIS_TBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMRIS_R_WUERIS_MASK      (0x00010000)
#define GPWTM0_GPTMRIS_R_WUERIS_BIT       (16)
#define GPWTM0_GPTMRIS_R_WUERIS_NOACTIVE  (0x00000000)
#define GPWTM0_GPTMRIS_R_WUERIS_ACTIVE    (0x00010000)

#define GPWTM0_GPTMRIS_WUERIS_MASK        (0x00000001)
#define GPWTM0_GPTMRIS_WUERIS_NOACTIVE    (0x00000000)
#define GPWTM0_GPTMRIS_WUERIS_ACTIVE      (0x00000001)
//--------

#define GPWTM0_GPTMRIS_TATORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(0*4))))
#define GPWTM0_GPTMRIS_CAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(1*4))))
#define GPWTM0_GPTMRIS_CAERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(2*4))))
#define GPWTM0_GPTMRIS_RTCRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(3*4))))
#define GPWTM0_GPTMRIS_TAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(4*4))))
#define GPWTM0_GPTMRIS_TBTORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(8*4))))
#define GPWTM0_GPTMRIS_CBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(9*4))))
#define GPWTM0_GPTMRIS_CBERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(10*4))))
#define GPWTM0_GPTMRIS_TBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(11*4))))
#define GPWTM0_GPTMRIS_WUERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(16*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.8 GPTMMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMMIS            (((GPTMMIS_TypeDef*)(GPWTM0_BASE + GPTM_GPTMMIS_OFFSET )))
#define GPWTM0_GPTMMIS_R          (*((volatile const uint32_t *)(GPWTM0_BASE +GPTM_GPTMMIS_OFFSET)))




//--------
#define GPWTM0_GPTMMIS_R_TATOMIS_MASK      (0x00000001)
#define GPWTM0_GPTMMIS_R_TATOMIS_BIT       (0)
#define GPWTM0_GPTMMIS_R_TATOMIS_NOOCCUR  (0x00000000)
#define GPWTM0_GPTMMIS_R_TATOMIS_OCCUR    (0x00000001)

#define GPWTM0_GPTMMIS_TATOMIS_MASK        (0x00000001)
#define GPWTM0_GPTMMIS_TATOMIS_NOOCCUR    (0x00000000)
#define GPWTM0_GPTMMIS_TATOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMMIS_R_CAMMIS_MASK      (0x00000002)
#define GPWTM0_GPTMMIS_R_CAMMIS_BIT       (1)
#define GPWTM0_GPTMMIS_R_CAMMIS_NOOCCUR  (0x00000000)
#define GPWTM0_GPTMMIS_R_CAMMIS_OCCUR    (0x00000002)

#define GPWTM0_GPTMMIS_CAMMIS_MASK        (0x00000001)
#define GPWTM0_GPTMMIS_CAMMIS_NOOCCUR    (0x00000000)
#define GPWTM0_GPTMMIS_CAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMMIS_R_CAEMIS_MASK      (0x00000004)
#define GPWTM0_GPTMMIS_R_CAEMIS_BIT       (2)
#define GPWTM0_GPTMMIS_R_CAEMIS_NOOCCUR  (0x00000000)
#define GPWTM0_GPTMMIS_R_CAEMIS_OCCUR    (0x00000004)

#define GPWTM0_GPTMMIS_CAEMIS_MASK        (0x00000001)
#define GPWTM0_GPTMMIS_CAEMIS_NOOCCUR    (0x00000000)
#define GPWTM0_GPTMMIS_CAEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMMIS_R_RTCMIS_MASK      (0x00000008)
#define GPWTM0_GPTMMIS_R_RTCMIS_BIT       (3)
#define GPWTM0_GPTMMIS_R_RTCMIS_NOOCCUR  (0x00000000)
#define GPWTM0_GPTMMIS_R_RTCMIS_OCCUR    (0x00000008)

#define GPWTM0_GPTMMIS_RTCMIS_MASK        (0x00000001)
#define GPWTM0_GPTMMIS_RTCMIS_NOOCCUR    (0x00000000)
#define GPWTM0_GPTMMIS_RTCMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMMIS_R_TAMMIS_MASK      (0x00000010)
#define GPWTM0_GPTMMIS_R_TAMMIS_BIT       (4)
#define GPWTM0_GPTMMIS_R_TAMMIS_NOOCCUR  (0x00000000)
#define GPWTM0_GPTMMIS_R_TAMMIS_OCCUR    (0x00000010)

#define GPWTM0_GPTMMIS_TAMMIS_MASK        (0x00000001)
#define GPWTM0_GPTMMIS_TAMMIS_NOOCCUR    (0x00000000)
#define GPWTM0_GPTMMIS_TAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMMIS_R_TBTOMIS_MASK      (0x00000100)
#define GPWTM0_GPTMMIS_R_TBTOMIS_BIT       (8)
#define GPWTM0_GPTMMIS_R_TBTOMIS_NOOCCUR  (0x00000000)
#define GPWTM0_GPTMMIS_R_TBTOMIS_OCCUR    (0x00000100)

#define GPWTM0_GPTMMIS_TBTOMIS_MASK        (0x00000001)
#define GPWTM0_GPTMMIS_TBTOMIS_NOOCCUR    (0x00000000)
#define GPWTM0_GPTMMIS_TBTOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMMIS_R_CBMMIS_MASK      (0x00000200)
#define GPWTM0_GPTMMIS_R_CBMMIS_BIT       (9)
#define GPWTM0_GPTMMIS_R_CBMMIS_NOOCCUR  (0x00000000)
#define GPWTM0_GPTMMIS_R_CBMMIS_OCCUR    (0x00000200)

#define GPWTM0_GPTMMIS_CBMMIS_MASK        (0x00000001)
#define GPWTM0_GPTMMIS_CBMMIS_NOOCCUR    (0x00000000)
#define GPWTM0_GPTMMIS_CBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMMIS_R_CBEMIS_MASK      (0x00000400)
#define GPWTM0_GPTMMIS_R_CBEMIS_BIT       (10)
#define GPWTM0_GPTMMIS_R_CBEMIS_NOOCCUR  (0x00000000)
#define GPWTM0_GPTMMIS_R_CBEMIS_OCCUR    (0x00000400)

#define GPWTM0_GPTMMIS_CBEMIS_MASK        (0x00000001)
#define GPWTM0_GPTMMIS_CBEMIS_NOOCCUR    (0x00000000)
#define GPWTM0_GPTMMIS_CBEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMMIS_R_TBMMIS_MASK      (0x00000800)
#define GPWTM0_GPTMMIS_R_TBMMIS_BIT       (11)
#define GPWTM0_GPTMMIS_R_TBMMIS_NOOCCUR  (0x00000000)
#define GPWTM0_GPTMMIS_R_TBMMIS_OCCUR    (0x00000800)

#define GPWTM0_GPTMMIS_TBMMIS_MASK        (0x00000001)
#define GPWTM0_GPTMMIS_TBMMIS_NOOCCUR    (0x00000000)
#define GPWTM0_GPTMMIS_TBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM0_GPTMMIS_R_WUEMIS_MASK      (0x00010000)
#define GPWTM0_GPTMMIS_R_WUEMIS_BIT       (16)
#define GPWTM0_GPTMMIS_R_WUEMIS_NOOCCUR  (0x00000000)
#define GPWTM0_GPTMMIS_R_WUEMIS_OCCUR    (0x00010000)

#define GPWTM0_GPTMMIS_WUEMIS_MASK        (0x00000001)
#define GPWTM0_GPTMMIS_WUEMIS_NOOCCUR    (0x00000000)
#define GPWTM0_GPTMMIS_WUEMIS_OCCUR      (0x00000001)
//--------

#define GPWTM0_GPTMMIS_TATOMIS           (0x00000001)
#define GPWTM0_GPTMMIS_CAMMIS            (0x00000002)
#define GPWTM0_GPTMMIS_CAEMIS            (0x00000004)
#define GPWTM0_GPTMMIS_RTCMIS            (0x00000008)
#define GPWTM0_GPTMMIS_TAMMIS            (0x00000010)
#define GPWTM0_GPTMMIS_TBTOMIS           (0x00000100)
#define GPWTM0_GPTMMIS_CBMMIS            (0x00000200)
#define GPWTM0_GPTMMIS_CBEMIS            (0x00000400)
#define GPWTM0_GPTMMIS_TBMMIS            (0x00000800)
#define GPWTM0_GPTMMIS_WUEMIS            (0x00010000)


#define GPWTM0_GPTMMIS_TATOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(0*4))))
#define GPWTM0_GPTMMIS_CAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(1*4))))
#define GPWTM0_GPTMMIS_CAEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(2*4))))
#define GPWTM0_GPTMMIS_RTCMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(3*4))))
#define GPWTM0_GPTMMIS_TAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(4*4))))
#define GPWTM0_GPTMMIS_TBTOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(8*4))))
#define GPWTM0_GPTMMIS_CBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(9*4))))
#define GPWTM0_GPTMMIS_CBEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(10*4))))
#define GPWTM0_GPTMMIS_TBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(11*4))))
#define GPWTM0_GPTMMIS_WUEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.9 GPTMICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMICR            (((GPTMICR_TypeDef*)(GPWTM0_BASE + GPTM_GPTMICR_OFFSET )))
#define GPWTM0_GPTMICR_R          (*((volatile uint32_t *)(GPWTM0_BASE +GPTM_GPTMICR_OFFSET)))



//--------
#define GPWTM0_GPTMICR_R_TATOCINT_MASK      (0x00000001)
#define GPWTM0_GPTMICR_R_TATOCINT_BIT       (0)
#define GPWTM0_GPTMICR_R_TATOCINT_CLEAR     (0x00000001)

#define GPWTM0_GPTMICR_TATOCINT_MASK        (0x00000001)
#define GPWTM0_GPTMICR_TATOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM0_GPTMICR_R_CAMCINT_MASK      (0x00000002)
#define GPWTM0_GPTMICR_R_CAMCINT_BIT       (1)
#define GPWTM0_GPTMICR_R_CAMCINT_CLEAR     (0x00000002)

#define GPWTM0_GPTMICR_CAMCINT_MASK        (0x00000001)
#define GPWTM0_GPTMICR_CAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM0_GPTMICR_R_CAECINT_MASK      (0x00000004)
#define GPWTM0_GPTMICR_R_CAECINT_BIT       (2)
#define GPWTM0_GPTMICR_R_CAECINT_CLEAR     (0x00000004)

#define GPWTM0_GPTMICR_CAECINT_MASK        (0x00000001)
#define GPWTM0_GPTMICR_CAECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM0_GPTMICR_R_RTCCINT_MASK      (0x00000008)
#define GPWTM0_GPTMICR_R_RTCCINT_BIT       (3)
#define GPWTM0_GPTMICR_R_RTCCINT_CLEAR     (0x00000008)

#define GPWTM0_GPTMICR_RTCCINT_MASK        (0x00000001)
#define GPWTM0_GPTMICR_RTCCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM0_GPTMICR_R_TAMCINT_MASK      (0x00000010)
#define GPWTM0_GPTMICR_R_TAMCINT_BIT       (4)
#define GPWTM0_GPTMICR_R_TAMCINT_CLEAR     (0x00000010)

#define GPWTM0_GPTMICR_TAMCINT_MASK        (0x00000001)
#define GPWTM0_GPTMICR_TAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM0_GPTMICR_R_TBTOCINT_MASK      (0x00000100)
#define GPWTM0_GPTMICR_R_TBTOCINT_BIT       (8)
#define GPWTM0_GPTMICR_R_TBTOCINT_CLEAR     (0x00000100)

#define GPWTM0_GPTMICR_TBTOCINT_MASK        (0x00000001)
#define GPWTM0_GPTMICR_TBTOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM0_GPTMICR_R_CBMCINT_MASK      (0x00000200)
#define GPWTM0_GPTMICR_R_CBMCINT_BIT       (9)
#define GPWTM0_GPTMICR_R_CBMCINT_CLEAR     (0x00000200)

#define GPWTM0_GPTMICR_CBMCINT_MASK        (0x00000001)
#define GPWTM0_GPTMICR_CBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM0_GPTMICR_R_CBECINT_MASK      (0x00000400)
#define GPWTM0_GPTMICR_R_CBECINT_BIT       (10)
#define GPWTM0_GPTMICR_R_CBECINT_CLEAR     (0x00000400)

#define GPWTM0_GPTMICR_CBECINT_MASK        (0x00000001)
#define GPWTM0_GPTMICR_CBECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM0_GPTMICR_R_TBMCINT_MASK      (0x00000800)
#define GPWTM0_GPTMICR_R_TBMCINT_BIT       (11)
#define GPWTM0_GPTMICR_R_TBMCINT_CLEAR     (0x00000800)

#define GPWTM0_GPTMICR_TBMCINT_MASK        (0x00000001)
#define GPWTM0_GPTMICR_TBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM0_GPTMICR_R_WUECINT_MASK      (0x00010000)
#define GPWTM0_GPTMICR_R_WUECINT_BIT       (16)
#define GPWTM0_GPTMICR_R_WUECINT_CLEAR     (0x00010000)

#define GPWTM0_GPTMICR_WUECINT_MASK        (0x00000001)
#define GPWTM0_GPTMICR_WUECINT_CLEAR       (0x00000001)
//--------


#define GPWTM0_GPTMICR_TATOCINT           (0x00000001)
#define GPWTM0_GPTMICR_CAMCINT            (0x00000002)
#define GPWTM0_GPTMICR_CAECINT            (0x00000004)
#define GPWTM0_GPTMICR_RTCCINT            (0x00000008)
#define GPWTM0_GPTMICR_TAMCINT            (0x00000010)
#define GPWTM0_GPTMICR_TBTOCINT           (0x00000100)
#define GPWTM0_GPTMICR_CBMCINT            (0x00000200)
#define GPWTM0_GPTMICR_CBECINT            (0x00000400)
#define GPWTM0_GPTMICR_TBMCINT            (0x00000800)
#define GPWTM0_GPTMICR_WUECINT            (0x00010000)


#define GPWTM0_GPTMICR_TATOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(0*4))))
#define GPWTM0_GPTMICR_CAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(1*4))))
#define GPWTM0_GPTMICR_CAECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(2*4))))
#define GPWTM0_GPTMICR_RTCCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(3*4))))
#define GPWTM0_GPTMICR_TAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(4*4))))
#define GPWTM0_GPTMICR_TBTOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(8*4))))
#define GPWTM0_GPTMICR_CBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(9*4))))
#define GPWTM0_GPTMICR_CBECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(10*4))))
#define GPWTM0_GPTMICR_TBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(11*4))))
#define GPWTM0_GPTMICR_WUECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM0_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.10 GPTMTAILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMTAILR            (((GPTMTAILR_TypeDef*)(GPWTM0_BASE + GPTM_GPTMTAILR_OFFSET )))
#define GPWTM0_GPTMTAILR_R          (*((volatile uint32_t *)(GPWTM0_BASE +GPTM_GPTMTAILR_OFFSET)))

//--------
#define GPWTM0_GPTMTAILR_R_TAILR_MASK      (0xFFFFFFFF)
#define GPWTM0_GPTMTAILR_R_TAILR_BIT       (0)

#define GPWTM0_GPTMTAILR_TAILR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.11 GPTMTBILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMTBILR            (((GPTMTBILR_TypeDef*)(GPWTM0_BASE + GPTM_GPTMTBILR_OFFSET )))
#define GPWTM0_GPTMTBILR_R          (*((volatile uint32_t *)(GPWTM0_BASE +GPTM_GPTMTBILR_OFFSET)))

//--------
#define GPWTM0_GPTMTBILR_R_TBILR_MASK      (0xFFFFFFFF)
#define GPWTM0_GPTMTBILR_R_TBILR_BIT       (0)

#define GPWTM0_GPTMTBILR_TBILR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.12 GPTMTAMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMTAMATCHR            (((GPTMTAMATCHR_TypeDef*)(GPWTM0_BASE + GPTM_GPTMTAMATCHR_OFFSET )))
#define GPWTM0_GPTMTAMATCHR_R          (*((volatile uint32_t *)(GPWTM0_BASE +GPTM_GPTMTAMATCHR_OFFSET)))


//--------
#define GPWTM0_GPTMTAMATCHR_R_TAMR_MASK      (0xFFFFFFFF)
#define GPWTM0_GPTMTAMATCHR_R_TAMR_BIT       (0)

#define GPWTM0_GPTMTAMATCHR_TAMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.13 GPTMTBMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMTBMATCHR            (((GPTMTBMATCHR_TypeDef*)(GPWTM0_BASE + GPTM_GPTMTBMATCHR_OFFSET )))
#define GPWTM0_GPTMTBMATCHR_R          (*((volatile uint32_t *)(GPWTM0_BASE +GPTM_GPTMTBMATCHR_OFFSET)))


//--------
#define GPWTM0_GPTMTBMATCHR_R_TBMR_MASK      (0xFFFFFFFF)
#define GPWTM0_GPTMTBMATCHR_R_TBMR_BIT       (0)

#define GPWTM0_GPTMTBMATCHR_TBMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.14 GPTMTAPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMTAPR            (((GPTMTAPR_TypeDef*)(GPWTM0_BASE + GPTM_GPTMTAPR_OFFSET )))
#define GPWTM0_GPTMTAPR_R          (*((volatile uint32_t *)(GPWTM0_BASE +GPTM_GPTMTAPR_OFFSET)))


//--------
#define GPWTM0_GPTMTAPR_R_TAPSR_MASK      (0x000000FF)
#define GPWTM0_GPTMTAPR_R_TAPSR_BIT       (0)

#define GPWTM0_GPTMTAPR_TAPSR_MASK        (0x000000FF)
//--------

//--------
#define GPWTM0_GPTMTAPR_R_TAPSRH_MASK      (0x0000FF00)
#define GPWTM0_GPTMTAPR_R_TAPSRH_BIT       (8)

#define GPWTM0_GPTMTAPR_TAPSRH_MASK        (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.15 GPTMTBPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMTBPR            (((GPTMTBPR_TypeDef*)(GPWTM0_BASE + GPTM_GPTMTBPR_OFFSET )))
#define GPWTM0_GPTMTBPR_R          (*((volatile uint32_t *)(GPWTM0_BASE +GPTM_GPTMTBPR_OFFSET)))


//--------
#define GPWTM0_GPTMTBPR_R_TBPSR_MASK      (0x000000FF)
#define GPWTM0_GPTMTBPR_R_TBPSR_BIT       (0)

#define GPWTM0_GPTMTBPR_TBPSR_MASK        (0x000000FF)
//--------


//--------
#define GPWTM0_GPTMTBPR_R_TBPSRH_MASK      (0x0000FF00)
#define GPWTM0_GPTMTBPR_R_TBPSRH_BIT       (8)

#define GPWTM0_GPTMTBPR_TBPSRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.16 GPTMTAPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMTAPMR            (((GPTMTAPMR_TypeDef*)(GPWTM0_BASE + GPTM_GPTMTAPMR_OFFSET )))
#define GPWTM0_GPTMTAPMR_R          (*((volatile uint32_t *)(GPWTM0_BASE +GPTM_GPTMTAPMR_OFFSET)))


//--------
#define GPWTM0_GPTMTAPMR_R_TAPSMR_MASK      (0x000000FF)
#define GPWTM0_GPTMTAPMR_R_TAPSMR_BIT       (0)

#define GPWTM0_GPTMTAMPR_TAPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPWTM0_GPTMTAPMR_R_TAPSMRH_MASK      (0x0000FF00)
#define GPWTM0_GPTMTAPMR_R_TAPSMRH_BIT       (8)

#define GPWTM0_GPTMTAPMR_TAPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.17 GPTMTBPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMTBPMR            (((GPTMTBPMR_TypeDef*)(GPWTM0_BASE + GPTM_GPTMTBPMR_OFFSET )))
#define GPWTM0_GPTMTBPMR_R          (*((volatile uint32_t *)(GPWTM0_BASE +GPTM_GPTMTBPMR_OFFSET)))

//--------
#define GPWTM0_GPTMTBPMR_R_TBPSMR_MASK      (0x000000FF)
#define GPWTM0_GPTMTBPMR_R_TBPSMR_BIT       (0)

#define GPWTM0_GPTMTBMPR_TBPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPWTM0_GPTMTBPMR_R_TBPSMRH_MASK      (0x0000FF00)
#define GPWTM0_GPTMTBPMR_R_TBPSMRH_BIT       (8)

#define GPWTM0_GPTMTBPMR_TBPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.18 GPTMTAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMTAR            (((GPTMTAR_TypeDef*)(GPWTM0_BASE + GPTM_GPTMTAR_OFFSET )))
#define GPWTM0_GPTMTAR_R          (*((volatile const  int32_t *)(GPWTM0_BASE +GPTM_GPTMTAR_OFFSET)))


//--------
#define GPWTM0_GPTMTAR_R_TAR_MASK      (0xFFFFFFFF)
#define GPWTM0_GPTMTAR_R_TAR_BIT       (0)

#define GPWTM0_GPTMTAR_TAR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.19 GPTMTBR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMTBR            (((GPTMTBR_TypeDef*)(GPWTM0_BASE + GPTM_GPTMTBR_OFFSET )))
#define GPWTM0_GPTMTBR_R          (*((volatile const uint32_t *)(GPWTM0_BASE +GPTM_GPTMTBR_OFFSET)))


//--------
#define GPWTM0_GPTMTBR_R_TBR_MASK      (0xFFFFFFFF)
#define GPWTM0_GPTMTBR_R_TBR_BIT       (0)

#define GPWTM0_GPTMTBR_TBR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.20 GPTMTAV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMTAV            (((GPTMTAV_TypeDef*)(GPWTM0_BASE + GPTM_GPTMTAV_OFFSET )))
#define GPWTM0_GPTMTAV_R          (*((volatile uint32_t *)(GPWTM0_BASE +GPTM_GPTMTAV_OFFSET)))

//--------
#define GPWTM0_GPTMTAV_R_TAV_MASK      (0xFFFFFFFF)
#define GPWTM0_GPTMTAV_R_TAV_BIT       (0)

#define GPWTM0_GPTMTAV_TAV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.21 GPTMTBV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMTBV            (((GPTMTBV_TypeDef*)(GPWTM0_BASE + GPTM_GPTMTBV_OFFSET )))
#define GPWTM0_GPTMTBV_R          (*((volatile uint32_t *)(GPWTM0_BASE +GPTM_GPTMTBV_OFFSET)))


//--------
#define GPWTM0_GPTMTBV_R_TBV_MASK      (0xFFFFFFFF)
#define GPWTM0_GPTMTBV_R_TBV_BIT       (0)

#define GPWTM0_GPTMTBV_TBV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.22 GPTMRTCPD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMRTCPD            (((GPTMRTCPD_TypeDef*)(GPWTM0_BASE + GPTM_GPTMRTCPD_OFFSET )))
#define GPWTM0_GPTMRTCPD_R          (*((volatile const uint32_t *)(GPWTM0_BASE +GPTM_GPTMRTCPD_OFFSET)))


//--------
#define GPWTM0_GPTMRTCPD_R_RTCPD_MASK      (0x0000FFFF)
#define GPWTM0_GPTMRTCPD_R_RTCPD_BIT       (0)
#define GPWTM0_GPTMRTCPD_R_RTCPD_DEFAULT   (0x00007FFF)

#define GPWTM0_GPTMRTCPD_RTCPD_MASK        (0x0000FFFF)
#define GPWTM0_GPTMRTCPD_RTCPD_DEFAULT     (0x00007FFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.23 GPTMTAPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPWTM0_GPTMTAPS            (((GPTMTAPS_TypeDef*)(GPWTM0_BASE + GPTM_GPTMTAPS_OFFSET )))
#define GPWTM0_GPTMTAPS_R          (*((volatile const uint32_t *)(GPWTM0_BASE +GPTM_GPTMTAPS_OFFSET)))

//--------
#define GPWTM0_GPTMTAPS_R_PSS_MASK      (0x0000FFFF)
#define GPWTM0_GPTMTAPS_R_PSS_BIT       (0)

#define GPWTM0_GPTMTAPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.24 GPTMTBPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMTBPS            (((GPTMTBPS_TypeDef*)(GPWTM0_BASE + GPTM_GPTMTBPS_OFFSET )))
#define GPWTM0_GPTMTBPS_R          (*((volatile const uint32_t *)(GPWTM0_BASE +GPTM_GPTMTBPS_OFFSET)))

//--------
#define GPWTM0_GPTMTBPS_R_PSS_MASK      (0x0000FFFF)
#define GPWTM0_GPTMTBPS_R_PSS_BIT       (0)

#define GPWTM0_GPTMTBPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.25 GPTMTAPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define GPWTM0_GPTMTAPV            (((GPTMTAPV_TypeDef*)(GPWTM0_BASE + GPTM_GPTMTAPV_OFFSET )))
#define GPWTM0_GPTMTAPV_R          (*((volatile const uint32_t *)(GPWTM0_BASE +GPTM_GPTMTAPV_OFFSET)))

//--------
#define GPWTM0_GPTMTAPV_R_PSV_MASK      (0x0000FFFF)
#define GPWTM0_GPTMTAPV_R_PSV_BIT       (0)

#define GPWTM0_GPTMTAPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.26 GPTMTBPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPWTM0_GPTMTBPV            (((GPTMTBPV_TypeDef*)(GPWTM0_BASE + GPTM_GPTMTBPV_OFFSET )))
#define GPWTM0_GPTMTBPV_R          (*((volatile const uint32_t *)(GPWTM0_BASE +GPTM_GPTMTBPV_OFFSET)))

//--------
#define GPWTM0_GPTMTBPV_R_PSV_MASK      (0x0000FFFF)
#define GPWTM0_GPTMTBPV_R_PSV_BIT       (0)

#define GPWTM0_GPTMTBPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.27 GPTMPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM0_GPTMPP            (((GPTMPP_TypeDef*)(GPWTM0_BASE + GPTM_GPTMPP_OFFSET )))
#define GPWTM0_GPTMPP_R          (*((volatile const uint32_t *)(GPWTM0_BASE +GPTM_GPTMPP_OFFSET)))

#define GPWTM0_GPTMPP_SIZE        (0x0000000F)

//--------
#define GPWTM0_GPTMPP_R_SIZE_MASK      (0x0000000F)
#define GPWTM0_GPTMPP_R_SIZE_BIT       (0)
#define GPWTM0_GPTMPP_R_SIZE_16b       (0x00000000)
#define GPWTM0_GPTMPP_R_SIZE_32b       (0x00000001)

#define GPWTM0_GPTMPP_SIZE_MASK        (0x0000000F)
#define GPWTM0_GPTMPP_SIZE_16b         (0x00000000)
#define GPWTM0_GPTMPP_SIZE_32b         (0x00000001)
//--------


// ToDO GPWTM1
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 GPWTM1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.1 GPTMCFG ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMCFG            (((GPTMCFG_TypeDef*)(GPWTM1_BASE + GPTM_GPTMCFG_OFFSET )))
#define GPWTM1_GPTMCFG_R          (*((volatile uint32_t *)(GPWTM1_BASE +GPTM_GPTMCFG_OFFSET)))


//--------
#define GPWTM1_GPTMCFG_R_GPTMCFG_MASK      (0x00000007)
#define GPWTM1_GPTMCFG_R_GPTMCFG_BIT       (0)
#define GPWTM1_GPTMCFG_R_GPTMCFG_BOTH    (0x00000000)
#define GPWTM1_GPTMCFG_R_GPTMCFG_RTC       (0x00000001)
#define GPWTM1_GPTMCFG_R_GPTMCFG_SINGLE      (0x00000004)

#define GPWTM1_GPTMCFG_GPTMCFG_MASK        (0x00000007)
#define GPWTM1_GPTMCFG_GPTMCFG_BOTH      (0x00000000)
#define GPWTM1_GPTMCFG_GPTMCFG_RTC         (0x00000001)
#define GPWTM1_GPTMCFG_GPTMCFG_SINGLE        (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.2 GPTMTAMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMTAMR            (((GPTMTAMR_TypeDef*)(GPWTM1_BASE + GPTM_GPTMTAMR_OFFSET )))
#define GPWTM1_GPTMTAMR_R          (*((volatile uint32_t *)(GPWTM1_BASE +GPTM_GPTMTAMR_OFFSET)))


//--------
#define GPWTM1_GPTMTAMR_R_TAMR_MASK      (0x00000003)
#define GPWTM1_GPTMTAMR_R_TAMR_BIT       (0)
#define GPWTM1_GPTMTAMR_R_TAMR_ONESHOT   (0x00000001)
#define GPWTM1_GPTMTAMR_R_TAMR_PERIOD    (0x00000002)
#define GPWTM1_GPTMTAMR_R_TAMR_CAPTURE   (0x00000003)

#define GPWTM1_GPTMTAMR_TAMR_MASK        (0x00000003)
#define GPWTM1_GPTMTAMR_TAMR_ONESHOT     (0x00000001)
#define GPWTM1_GPTMTAMR_TAMR_PERIOD      (0x00000002)
#define GPWTM1_GPTMTAMR_TAMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPWTM1_GPTMTAMR_R_TACMR_MASK      (0x00000004)
#define GPWTM1_GPTMTAMR_R_TACMR_BIT       (2)
#define GPWTM1_GPTMTAMR_R_TACMR_EDGECOUNT (0x00000000)
#define GPWTM1_GPTMTAMR_R_TACMR_EDGETIME  (0x00000004)

#define GPWTM1_GPTMTAMR_TACMR_MASK        (0x00000001)
#define GPWTM1_GPTMTAMR_TACMR_EDGECOUNT   (0x00000000)
#define GPWTM1_GPTMTAMR_TACMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPWTM1_GPTMTAMR_R_TAAMS_MASK      (0x00000008)
#define GPWTM1_GPTMTAMR_R_TAAMS_BIT       (3)
#define GPWTM1_GPTMTAMR_R_TAAMS_CAPCOMP   (0x00000000)
#define GPWTM1_GPTMTAMR_R_TAAMS_PWM       (0x00000008)

#define GPWTM1_GPTMTAMR_TAAMS_MASK        (0x00000001)
#define GPWTM1_GPTMTAMR_TAAMS_CAPCOMP     (0x00000000)
#define GPWTM1_GPTMTAMR_TAAMS_PWM         (0x00000001)
//--------

//--------
#define GPWTM1_GPTMTAMR_R_TACDIR_MASK      (0x00000010)
#define GPWTM1_GPTMTAMR_R_TACDIR_BIT       (4)
#define GPWTM1_GPTMTAMR_R_TACDIR_DOWN      (0x00000000)
#define GPWTM1_GPTMTAMR_R_TACDIR_UP        (0x00000010)

#define GPWTM1_GPTMTAMR_TACDIR_MASK        (0x00000001)
#define GPWTM1_GPTMTAMR_TACDIR_DOWN        (0x00000000)
#define GPWTM1_GPTMTAMR_TACDIR_UP          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMTAMR_R_TAMIE_MASK      (0x00000020)
#define GPWTM1_GPTMTAMR_R_TAMIE_BIT       (5)
#define GPWTM1_GPTMTAMR_R_TAMIE_DIS       (0x00000000)
#define GPWTM1_GPTMTAMR_R_TAMIE_EN        (0x00000020)

#define GPWTM1_GPTMTAMR_TAMIE_MASK        (0x00000001)
#define GPWTM1_GPTMTAMR_TAMIE_DIS         (0x00000000)
#define GPWTM1_GPTMTAMR_TAMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMTAMR_R_TAWOT_MASK      (0x00000040)
#define GPWTM1_GPTMTAMR_R_TAWOT_BIT       (6)
#define GPWTM1_GPTMTAMR_R_TAWOT_INSTANT   (0x00000000)
#define GPWTM1_GPTMTAMR_R_TAWOT_TRIGGER   (0x00000040)

#define GPWTM1_GPTMTAMR_TAWOT_MASK        (0x00000001)
#define GPWTM1_GPTMTAMR_TAWOT_INSTANT     (0x00000000)
#define GPWTM1_GPTMTAMR_TAWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPWTM1_GPTMTAMR_R_TASNAPS_MASK      (0x00000080)
#define GPWTM1_GPTMTAMR_R_TASNAPS_BIT       (7)
#define GPWTM1_GPTMTAMR_R_TASNAPS_DIS       (0x00000000)
#define GPWTM1_GPTMTAMR_R_TASNAPS_EN        (0x00000080)

#define GPWTM1_GPTMTAMR_TASNAPS_MASK        (0x00000001)
#define GPWTM1_GPTMTAMR_TASNAPS_DIS         (0x00000000)
#define GPWTM1_GPTMTAMR_TASNAPS_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMTAMR_R_TAILD_MASK      (0x00000100)
#define GPWTM1_GPTMTAMR_R_TAILD_BIT       (8)
#define GPWTM1_GPTMTAMR_R_TAILD_NEXT      (0x00000000)
#define GPWTM1_GPTMTAMR_R_TAILD_TIMEOUT   (0x00000100)

#define GPWTM1_GPTMTAMR_TAILD_MASK        (0x00000001)
#define GPWTM1_GPTMTAMR_TAILD_NEXT        (0x00000000)
#define GPWTM1_GPTMTAMR_TAILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM1_GPTMTAMR_R_TAPWMIE_MASK      (0x00000200)
#define GPWTM1_GPTMTAMR_R_TAPWMIE_BIT       (9)
#define GPWTM1_GPTMTAMR_R_TAPWMIE_DIS       (0x00000000)
#define GPWTM1_GPTMTAMR_R_TAPWMIE_EN        (0x00000200)

#define GPWTM1_GPTMTAMR_TAPWMIE_MASK        (0x00000001)
#define GPWTM1_GPTMTAMR_TAPWMIE_DIS         (0x00000000)
#define GPWTM1_GPTMTAMR_TAPWMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMTAMR_R_TAMRSU_MASK      (0x00000400)
#define GPWTM1_GPTMTAMR_R_TAMRSU_BIT       (10)
#define GPWTM1_GPTMTAMR_R_TAMRSU_NEXT      (0x00000000)
#define GPWTM1_GPTMTAMR_R_TAMRSU_TIMEOUT   (0x00000400)

#define GPWTM1_GPTMTAMR_TAMRSU_MASK        (0x00000001)
#define GPWTM1_GPTMTAMR_TAMRSU_NEXT        (0x00000000)
#define GPWTM1_GPTMTAMR_TAMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM1_GPTMTAMR_R_TAPLO_MASK      (0x00000800)
#define GPWTM1_GPTMTAMR_R_TAPLO_BIT       (11)
#define GPWTM1_GPTMTAMR_R_TAPLO_LOW       (0x00000000)
#define GPWTM1_GPTMTAMR_R_TAPLO_HIGH      (0x00000800)

#define GPWTM1_GPTMTAMR_TAPLO_MASK        (0x00000001)
#define GPWTM1_GPTMTAMR_TAPLO_LOW         (0x00000000)
#define GPWTM1_GPTMTAMR_TAPLO_HIGH        (0x00000001)
//--------

#define GPWTM1_GPTMTAMR_TACMR_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(2*4))))
#define GPWTM1_GPTMTAMR_TAAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(3*4))))
#define GPWTM1_GPTMTAMR_TACDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(4*4))))
#define GPWTM1_GPTMTAMR_TAMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(5*4))))
#define GPWTM1_GPTMTAMR_TAWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(6*4))))
#define GPWTM1_GPTMTAMR_TASNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(7*4))))
#define GPWTM1_GPTMTAMR_TAILD_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(8*4))))
#define GPWTM1_GPTMTAMR_TAPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(9*4))))
#define GPWTM1_GPTMTAMR_TAMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(10*4))))
#define GPWTM1_GPTMTAMR_TAPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.3 GPTMTBMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMTBMR            (((GPTMTBMR_TypeDef*)(GPWTM1_BASE + GPTM_GPTMTBMR_OFFSET )))
#define GPWTM1_GPTMTBMR_R          (*((volatile uint32_t *)(GPWTM1_BASE +GPTM_GPTMTBMR_OFFSET)))


//--------
#define GPWTM1_GPTMTBMR_R_TBMR_MASK      (0x00000003)
#define GPWTM1_GPTMTBMR_R_TBMR_BIT       (0)
#define GPWTM1_GPTMTBMR_R_TBMR_ONESHOT   (0x00000001)
#define GPWTM1_GPTMTBMR_R_TBMR_PERIOD    (0x00000002)
#define GPWTM1_GPTMTBMR_R_TBMR_CAPTURE   (0x00000003)

#define GPWTM1_GPTMTBMR_TBMR_MASK        (0x00000003)
#define GPWTM1_GPTMTBMR_TBMR_ONESHOT     (0x00000001)
#define GPWTM1_GPTMTBMR_TBMR_PERIOD      (0x00000002)
#define GPWTM1_GPTMTBMR_TBMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPWTM1_GPTMTBMR_R_TBCMR_MASK      (0x00000004)
#define GPWTM1_GPTMTBMR_R_TBCMR_BIT       (2)
#define GPWTM1_GPTMTBMR_R_TBCMR_EDGECOUNT (0x00000000)
#define GPWTM1_GPTMTBMR_R_TBCMR_EDGETIME  (0x00000004)

#define GPWTM1_GPTMTBMR_TBCMR_MASK        (0x00000001)
#define GPWTM1_GPTMTBMR_TBCMR_EDGECOUNT   (0x00000000)
#define GPWTM1_GPTMTBMR_TBCMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPWTM1_GPTMTBMR_R_TBAMS_MASK      (0x00000008)
#define GPWTM1_GPTMTBMR_R_TBAMS_BIT       (3)
#define GPWTM1_GPTMTBMR_R_TBAMS_CAPCOMP   (0x00000000)
#define GPWTM1_GPTMTBMR_R_TBAMS_PWM       (0x00000008)

#define GPWTM1_GPTMTBMR_TBAMS_MASK        (0x00000001)
#define GPWTM1_GPTMTBMR_TBAMS_CAPCOMP     (0x00000000)
#define GPWTM1_GPTMTBMR_TBAMS_PWM         (0x00000001)
//--------

//--------
#define GPWTM1_GPTMTBMR_R_TBCDIR_MASK      (0x00000010)
#define GPWTM1_GPTMTBMR_R_TBCDIR_BIT       (4)
#define GPWTM1_GPTMTBMR_R_TBCDIR_DOWN      (0x00000000)
#define GPWTM1_GPTMTBMR_R_TBCDIR_UP        (0x00000010)

#define GPWTM1_GPTMTBMR_TBCDIR_MASK        (0x00000001)
#define GPWTM1_GPTMTBMR_TBCDIR_DOWN        (0x00000000)
#define GPWTM1_GPTMTBMR_TBCDIR_UP          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMTBMR_R_TBMIE_MASK      (0x00000020)
#define GPWTM1_GPTMTBMR_R_TBMIE_BIT       (5)
#define GPWTM1_GPTMTBMR_R_TBMIE_DIS       (0x00000000)
#define GPWTM1_GPTMTBMR_R_TBMIE_EN        (0x00000020)

#define GPWTM1_GPTMTBMR_TBMIE_MASK        (0x00000001)
#define GPWTM1_GPTMTBMR_TBMIE_DIS         (0x00000000)
#define GPWTM1_GPTMTBMR_TBMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMTBMR_R_TBWOT_MASK      (0x00000040)
#define GPWTM1_GPTMTBMR_R_TBWOT_BIT       (6)
#define GPWTM1_GPTMTBMR_R_TBWOT_INSTANT   (0x00000000)
#define GPWTM1_GPTMTBMR_R_TBWOT_TRIGGER   (0x00000040)

#define GPWTM1_GPTMTBMR_TBWOT_MASK        (0x00000001)
#define GPWTM1_GPTMTBMR_TBWOT_INSTANT     (0x00000000)
#define GPWTM1_GPTMTBMR_TBWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPWTM1_GPTMTBMR_R_TBSNAPS_MASK      (0x00000080)
#define GPWTM1_GPTMTBMR_R_TBSNAPS_BIT       (7)
#define GPWTM1_GPTMTBMR_R_TBSNAPS_DIS       (0x00000000)
#define GPWTM1_GPTMTBMR_R_TBSNAPS_EN        (0x00000080)

#define GPWTM1_GPTMTBMR_TBSNAPS_MASK        (0x00000001)
#define GPWTM1_GPTMTBMR_TBSNAPS_DIS         (0x00000000)
#define GPWTM1_GPTMTBMR_TBSNAPS_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMTBMR_R_TBILD_MASK      (0x00000100)
#define GPWTM1_GPTMTBMR_R_TBILD_BIT       (8)
#define GPWTM1_GPTMTBMR_R_TBILD_NEXT      (0x00000000)
#define GPWTM1_GPTMTBMR_R_TBILD_TIMEOUT   (0x00000100)

#define GPWTM1_GPTMTBMR_TBILD_MASK        (0x00000001)
#define GPWTM1_GPTMTBMR_TBILD_NEXT        (0x00000000)
#define GPWTM1_GPTMTBMR_TBILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM1_GPTMTBMR_R_TBPWMIE_MASK      (0x00000200)
#define GPWTM1_GPTMTBMR_R_TBPWMIE_BIT       (9)
#define GPWTM1_GPTMTBMR_R_TBPWMIE_DIS       (0x00000000)
#define GPWTM1_GPTMTBMR_R_TBPWMIE_EN        (0x00000200)

#define GPWTM1_GPTMTBMR_TBPWMIE_MASK        (0x00000001)
#define GPWTM1_GPTMTBMR_TBPWMIE_DIS         (0x00000000)
#define GPWTM1_GPTMTBMR_TBPWMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMTBMR_R_TBMRSU_MASK      (0x00000400)
#define GPWTM1_GPTMTBMR_R_TBMRSU_BIT       (10)
#define GPWTM1_GPTMTBMR_R_TBMRSU_NEXT      (0x00000000)
#define GPWTM1_GPTMTBMR_R_TBMRSU_TIMEOUT   (0x00000400)

#define GPWTM1_GPTMTBMR_TBMRSU_MASK        (0x00000001)
#define GPWTM1_GPTMTBMR_TBMRSU_NEXT        (0x00000000)
#define GPWTM1_GPTMTBMR_TBMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM1_GPTMTBMR_R_TBPLO_MASK      (0x00000800)
#define GPWTM1_GPTMTBMR_R_TBPLO_BIT       (11)
#define GPWTM1_GPTMTBMR_R_TBPLO_LOW       (0x00000000)
#define GPWTM1_GPTMTBMR_R_TBPLO_HIGH      (0x00000800)

#define GPWTM1_GPTMTBMR_TBPLO_MASK        (0x00000001)
#define GPWTM1_GPTMTBMR_TBPLO_LOW         (0x00000000)
#define GPWTM1_GPTMTBMR_TBPLO_HIGH        (0x00000001)
//--------

#define GPWTM1_GPTMTBMR_TBCMR_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(2*4))))
#define GPWTM1_GPTMTBMR_TBAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(3*4))))
#define GPWTM1_GPTMTBMR_TBCDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(4*4))))
#define GPWTM1_GPTMTBMR_TBMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(5*4))))
#define GPWTM1_GPTMTBMR_TBWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(6*4))))
#define GPWTM1_GPTMTBMR_TBSNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(7*4))))
#define GPWTM1_GPTMTBMR_TBILD_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(8*4))))
#define GPWTM1_GPTMTBMR_TBPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(9*4))))
#define GPWTM1_GPTMTBMR_TBMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(10*4))))
#define GPWTM1_GPTMTBMR_TBPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.4 GPTMCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMCTL            (((GPTMCTL_TypeDef*)(GPWTM1_BASE + GPTM_GPTMCTL_OFFSET )))
#define GPWTM1_GPTMCTL_R          (*((volatile uint32_t *)(GPWTM1_BASE +GPTM_GPTMCTL_OFFSET)))


//--------
#define GPWTM1_GPTMCTL_R_TAEN_MASK      (0x00000001)
#define GPWTM1_GPTMCTL_R_TAEN_BIT       (0)
#define GPWTM1_GPTMCTL_R_TAEN_DIS       (0x00000000)
#define GPWTM1_GPTMCTL_R_TAEN_EN        (0x00000001)

#define GPWTM1_GPTMCTL_TAEN_MASK        (0x00000001)
#define GPWTM1_GPTMCTL_TAEN_DIS         (0x00000000)
#define GPWTM1_GPTMCTL_TAEN_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMCTL_R_TASTALL_MASK      (0x00000002)
#define GPWTM1_GPTMCTL_R_TASTALL_BIT       (1)
#define GPWTM1_GPTMCTL_R_TASTALL_CONTINUE  (0x00000000)
#define GPWTM1_GPTMCTL_R_TASTALL_FREEZE    (0x00000002)

#define GPWTM1_GPTMCTL_TASTALL_MASK        (0x00000001)
#define GPWTM1_GPTMCTL_TASTALL_CONTINUE    (0x00000000)
#define GPWTM1_GPTMCTL_TASTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMCTL_R_TAEVENT_MASK      (0x0000000C)
#define GPWTM1_GPTMCTL_R_TAEVENT_BIT       (2)
#define GPWTM1_GPTMCTL_R_TAEVENT_POS       (0x00000000)
#define GPWTM1_GPTMCTL_R_TAEVENT_NEG       (0x00000004)
#define GPWTM1_GPTMCTL_R_TAEVENT_BOTH      (0x0000000C)

#define GPWTM1_GPTMCTL_TAEVENT_MASK        (0x00000003)
#define GPWTM1_GPTMCTL_TAEVENT_NEG         (0x00000000)
#define GPWTM1_GPTMCTL_TAEVENT_POS         (0x00000001)
#define GPWTM1_GPTMCTL_TAEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPWTM1_GPTMCTL_R_RTCEN_MASK      (0x00000010)
#define GPWTM1_GPTMCTL_R_RTCEN_BIT       (4)
#define GPWTM1_GPTMCTL_R_RTCEN_CONTINUE  (0x00000000)
#define GPWTM1_GPTMCTL_R_RTCEN_FREEZE    (0x00000010)

#define GPWTM1_GPTMCTL_RTCEN_MASK        (0x00000001)
#define GPWTM1_GPTMCTL_RTCEN_CONTINUE    (0x00000000)
#define GPWTM1_GPTMCTL_RTCEN_FREEZE      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMCTL_R_TAOTE_MASK      (0x00000020)
#define GPWTM1_GPTMCTL_R_TAOTE_BIT       (5)
#define GPWTM1_GPTMCTL_R_TAOTE_DIS       (0x00000000)
#define GPWTM1_GPTMCTL_R_TAOTE_EN        (0x00000020)

#define GPWTM1_GPTMCTL_TAOTE_MASK        (0x00000001)
#define GPWTM1_GPTMCTL_TAOTE_DIS         (0x00000000)
#define GPWTM1_GPTMCTL_TAOTE_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMCTL_R_TAPWML_MASK      (0x00000040)
#define GPWTM1_GPTMCTL_R_TAPWML_BIT       (6)
#define GPWTM1_GPTMCTL_R_TAPWML_NA        (0x00000000)
#define GPWTM1_GPTMCTL_R_TAPWML_INV       (0x00000040)

#define GPWTM1_GPTMCTL_TAPWML_MASK        (0x00000001)
#define GPWTM1_GPTMCTL_TAPWML_NA          (0x00000000)
#define GPWTM1_GPTMCTL_TAPWML_INV         (0x00000001)
//--------



//--------
#define GPWTM1_GPTMCTL_R_TBEN_MASK      (0x00000100)
#define GPWTM1_GPTMCTL_R_TBEN_BIT       (8)
#define GPWTM1_GPTMCTL_R_TBEN_DIS       (0x00000000)
#define GPWTM1_GPTMCTL_R_TBEN_EN        (0x00000100)

#define GPWTM1_GPTMCTL_TBEN_MASK        (0x00000001)
#define GPWTM1_GPTMCTL_TBEN_DIS         (0x00000000)
#define GPWTM1_GPTMCTL_TBEN_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMCTL_R_TBSTALL_MASK      (0x00000200)
#define GPWTM1_GPTMCTL_R_TBSTALL_BIT       (9)
#define GPWTM1_GPTMCTL_R_TBSTALL_CONTINUE  (0x00000000)
#define GPWTM1_GPTMCTL_R_TBSTALL_FREEZE    (0x00000200)

#define GPWTM1_GPTMCTL_TBSTALL_MASK        (0x00000001)
#define GPWTM1_GPTMCTL_TBSTALL_CONTINUE    (0x00000000)
#define GPWTM1_GPTMCTL_TBSTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMCTL_R_TBEVENT_MASK      (0x00000C00)
#define GPWTM1_GPTMCTL_R_TBEVENT_BIT       (10)
#define GPWTM1_GPTMCTL_R_TBEVENT_POS       (0x00000000)
#define GPWTM1_GPTMCTL_R_TBEVENT_NEG       (0x00000400)
#define GPWTM1_GPTMCTL_R_TBEVENT_BOTH      (0x00000C00)

#define GPWTM1_GPTMCTL_TBEVENT_MASK        (0x00000003)
#define GPWTM1_GPTMCTL_TBEVENT_NEG         (0x00000000)
#define GPWTM1_GPTMCTL_TBEVENT_POS         (0x00000001)
#define GPWTM1_GPTMCTL_TBEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPWTM1_GPTMCTL_R_TBOTE_MASK      (0x00002000)
#define GPWTM1_GPTMCTL_R_TBOTE_BIT       (13)
#define GPWTM1_GPTMCTL_R_TBOTE_DIS       (0x00000000)
#define GPWTM1_GPTMCTL_R_TBOTE_EN        (0x00002000)

#define GPWTM1_GPTMCTL_TBOTE_MASK        (0x00000001)
#define GPWTM1_GPTMCTL_TBOTE_DIS         (0x00000000)
#define GPWTM1_GPTMCTL_TBOTE_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMCTL_R_TBPWML_MASK      (0x00004000)
#define GPWTM1_GPTMCTL_R_TBPWML_BIT       (14)
#define GPWTM1_GPTMCTL_R_TBPWML_NA        (0x00000000)
#define GPWTM1_GPTMCTL_R_TBPWML_INV       (0x00004000)

#define GPWTM1_GPTMCTL_TBPWML_MASK        (0x00000001)
#define GPWTM1_GPTMCTL_TBPWML_NA          (0x00000000)
#define GPWTM1_GPTMCTL_TBPWML_INV         (0x00000001)
//--------

#define GPWTM1_GPTMCTL_TAEN_BB      (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(0*4))))
#define GPWTM1_GPTMCTL_TASTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(1*4))))
#define GPWTM1_GPTMCTL_RTCEN_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(4*4))))
#define GPWTM1_GPTMCTL_TAOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(5*4))))
#define GPWTM1_GPTMCTL_TAPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTMGPTMCTL_OFFSET)*32)+(6*4))))
#define GPWTM1_GPTMCTL_TBEN_BB      (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(8*4))))
#define GPWTM1_GPTMCTL_TBSTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(9*4))))
#define GPWTM1_GPTMCTL_TBOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(13*4))))
#define GPWTM1_GPTMCTL_TBPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(14*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.5 GPTMSYNC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMSYNC            (((GPTMSYNC_TypeDef*)(GPWTM1_BASE + GPTM_GPTMSYNC_OFFSET )))
#define GPWTM1_GPTMSYNC_R          (*((volatile uint32_t *)(GPWTM1_BASE +GPTM_GPTMSYNC_OFFSET)))

//--------
#define GPWTM1_GPTMSYNC_R_SYNCT0_MASK      (0x00000003)
#define GPWTM1_GPTMSYNC_R_SYNCT0_BIT       (0)
#define GPWTM1_GPTMSYNC_R_SYNCT0_NA        (0x00000000)
#define GPWTM1_GPTMSYNC_R_SYNCT0_TA        (0x00000001)
#define GPWTM1_GPTMSYNC_R_SYNCT0_TB        (0x00000002)
#define GPWTM1_GPTMSYNC_R_SYNCT0_BOTH      (0x00000003)

#define GPWTM1_GPTMSYNC_SYNCT0_MASK        (0x00000003)
#define GPWTM1_GPTMSYNC_SYNCT0_NA          (0x00000000)
#define GPWTM1_GPTMSYNC_SYNCT0_TA          (0x00000001)
#define GPWTM1_GPTMSYNC_SYNCT0_TB          (0x00000002)
#define GPWTM1_GPTMSYNC_SYNCT0_BOTH        (0x00000003)
//--------

//--------
#define GPWTM1_GPTMSYNC_R_SYNCT1_MASK      (0x0000000C)
#define GPWTM1_GPTMSYNC_R_SYNCT1_BIT       (2)
#define GPWTM1_GPTMSYNC_R_SYNCT1_NA        (0x00000000)
#define GPWTM1_GPTMSYNC_R_SYNCT1_TA        (0x00000004)
#define GPWTM1_GPTMSYNC_R_SYNCT1_TB        (0x00000008)
#define GPWTM1_GPTMSYNC_R_SYNCT1_BOTH      (0x0000000C)

#define GPWTM1_GPTMSYNC_SYNCT1_MASK        (0x00000003)
#define GPWTM1_GPTMSYNC_SYNCT1_NA          (0x00000000)
#define GPWTM1_GPTMSYNC_SYNCT1_TA          (0x00000001)
#define GPWTM1_GPTMSYNC_SYNCT1_TB          (0x00000002)
#define GPWTM1_GPTMSYNC_SYNCT1_BOTH        (0x00000003)
//--------

//--------
#define GPWTM1_GPTMSYNC_R_SYNCT2_MASK      (0x00000030)
#define GPWTM1_GPTMSYNC_R_SYNCT2_BIT       (4)
#define GPWTM1_GPTMSYNC_R_SYNCT2_NA        (0x00000000)
#define GPWTM1_GPTMSYNC_R_SYNCT2_TA        (0x00000010)
#define GPWTM1_GPTMSYNC_R_SYNCT2_TB        (0x00000020)
#define GPWTM1_GPTMSYNC_R_SYNCT2_BOTH      (0x00000030)

#define GPWTM1_GPTMSYNC_SYNCT2_MASK        (0x00000003)
#define GPWTM1_GPTMSYNC_SYNCT2_NA          (0x00000000)
#define GPWTM1_GPTMSYNC_SYNCT2_TA          (0x00000001)
#define GPWTM1_GPTMSYNC_SYNCT2_TB          (0x00000002)
#define GPWTM1_GPTMSYNC_SYNCT2_BOTH        (0x00000003)
//--------

//--------
#define GPWTM1_GPTMSYNC_R_SYNCT3_MASK      (0x000000C0)
#define GPWTM1_GPTMSYNC_R_SYNCT3_BIT       (6)
#define GPWTM1_GPTMSYNC_R_SYNCT3_NA        (0x00000000)
#define GPWTM1_GPTMSYNC_R_SYNCT3_TA        (0x00000040)
#define GPWTM1_GPTMSYNC_R_SYNCT3_TB        (0x00000080)
#define GPWTM1_GPTMSYNC_R_SYNCT3_BOTH      (0x000000C0)

#define GPWTM1_GPTMSYNC_SYNCT3_MASK        (0x00000003)
#define GPWTM1_GPTMSYNC_SYNCT3_NA          (0x00000000)
#define GPWTM1_GPTMSYNC_SYNCT3_TA          (0x00000001)
#define GPWTM1_GPTMSYNC_SYNCT3_TB          (0x00000002)
#define GPWTM1_GPTMSYNC_SYNCT3_BOTH        (0x00000003)
//--------

//--------
#define GPWTM1_GPTMSYNC_R_SYNCT4_MASK      (0x00000300)
#define GPWTM1_GPTMSYNC_R_SYNCT4_BIT       (8)
#define GPWTM1_GPTMSYNC_R_SYNCT4_NA        (0x00000000)
#define GPWTM1_GPTMSYNC_R_SYNCT4_TA        (0x00000100)
#define GPWTM1_GPTMSYNC_R_SYNCT4_TB        (0x00000200)
#define GPWTM1_GPTMSYNC_R_SYNCT4_BOTH      (0x00000300)

#define GPWTM1_GPTMSYNC_SYNCT4_MASK        (0x00000003)
#define GPWTM1_GPTMSYNC_SYNCT4_NA          (0x00000000)
#define GPWTM1_GPTMSYNC_SYNCT4_TA          (0x00000001)
#define GPWTM1_GPTMSYNC_SYNCT4_TB          (0x00000002)
#define GPWTM1_GPTMSYNC_SYNCT4_BOTH        (0x00000003)
//--------

//--------
#define GPWTM1_GPTMSYNC_R_SYNCT5_MASK      (0x00000C00)
#define GPWTM1_GPTMSYNC_R_SYNCT5_BIT       (10)
#define GPWTM1_GPTMSYNC_R_SYNCT5_NA        (0x00000000)
#define GPWTM1_GPTMSYNC_R_SYNCT5_TA        (0x00000400)
#define GPWTM1_GPTMSYNC_R_SYNCT5_TB        (0x00000800)
#define GPWTM1_GPTMSYNC_R_SYNCT5_BOTH      (0x00000C00)

#define GPWTM1_GPTMSYNC_SYNCT5_MASK        (0x00000003)
#define GPWTM1_GPTMSYNC_SYNCT5_NA          (0x00000000)
#define GPWTM1_GPTMSYNC_SYNCT5_TA          (0x00000001)
#define GPWTM1_GPTMSYNC_SYNCT5_TB          (0x00000002)
#define GPWTM1_GPTMSYNC_SYNCT5_BOTH        (0x00000003)
//--------

//--------
#define GPWTM1_GPTMSYNC_R_SYNCWT0_MASK      (0x00003000)
#define GPWTM1_GPTMSYNC_R_SYNCWT0_BIT       (12)
#define GPWTM1_GPTMSYNC_R_SYNCWT0_NA        (0x00000000)
#define GPWTM1_GPTMSYNC_R_SYNCWT0_TA        (0x00001000)
#define GPWTM1_GPTMSYNC_R_SYNCWT0_TB        (0x00002000)
#define GPWTM1_GPTMSYNC_R_SYNCWT0_BOTH      (0x00003000)

#define GPWTM1_GPTMSYNC_SYNCWT0_MASK        (0x00000003)
#define GPWTM1_GPTMSYNC_SYNCWT0_NA          (0x00000000)
#define GPWTM1_GPTMSYNC_SYNCWT0_TA          (0x00000001)
#define GPWTM1_GPTMSYNC_SYNCWT0_TB          (0x00000002)
#define GPWTM1_GPTMSYNC_SYNCWT0_BOTH        (0x00000003)
//--------

//--------
#define GPWTM1_GPTMSYNC_R_SYNCWT1_MASK      (0x0000C000)
#define GPWTM1_GPTMSYNC_R_SYNCWT1_BIT       (14)
#define GPWTM1_GPTMSYNC_R_SYNCWT1_NA        (0x00000000)
#define GPWTM1_GPTMSYNC_R_SYNCWT1_TA        (0x00004000)
#define GPWTM1_GPTMSYNC_R_SYNCWT1_TB        (0x00008000)
#define GPWTM1_GPTMSYNC_R_SYNCWT1_BOTH      (0x0000C000)

#define GPWTM1_GPTMSYNC_SYNCWT1_MASK        (0x00000003)
#define GPWTM1_GPTMSYNC_SYNCWT1_NA          (0x00000000)
#define GPWTM1_GPTMSYNC_SYNCWT1_TA          (0x00000001)
#define GPWTM1_GPTMSYNC_SYNCWT1_TB          (0x00000002)
#define GPWTM1_GPTMSYNC_SYNCWT1_BOTH        (0x00000003)
//--------

//--------
#define GPWTM1_GPTMSYNC_R_SYNCWT2_MASK      (0x00030000)
#define GPWTM1_GPTMSYNC_R_SYNCWT2_BIT       (16)
#define GPWTM1_GPTMSYNC_R_SYNCWT2_NA        (0x00000000)
#define GPWTM1_GPTMSYNC_R_SYNCWT2_TA        (0x00010000)
#define GPWTM1_GPTMSYNC_R_SYNCWT2_TB        (0x00020000)
#define GPWTM1_GPTMSYNC_R_SYNCWT2_BOTH      (0x00030000)

#define GPWTM1_GPTMSYNC_SYNCWT2_MASK        (0x00000003)
#define GPWTM1_GPTMSYNC_SYNCWT2_NA          (0x00000000)
#define GPWTM1_GPTMSYNC_SYNCWT2_TA          (0x00000001)
#define GPWTM1_GPTMSYNC_SYNCWT2_TB          (0x00000002)
#define GPWTM1_GPTMSYNC_SYNCWT2_BOTH        (0x00000003)
//--------

//--------
#define GPWTM1_GPTMSYNC_R_SYNCWT3_MASK      (0x000C0000)
#define GPWTM1_GPTMSYNC_R_SYNCWT3_BIT       (18)
#define GPWTM1_GPTMSYNC_R_SYNCWT3_NA        (0x00000000)
#define GPWTM1_GPTMSYNC_R_SYNCWT3_TA        (0x00040000)
#define GPWTM1_GPTMSYNC_R_SYNCWT3_TB        (0x00080000)
#define GPWTM1_GPTMSYNC_R_SYNCWT3_BOTH      (0x000C0000)

#define GPWTM1_GPTMSYNC_SYNCWT3_MASK        (0x00000003)
#define GPWTM1_GPTMSYNC_SYNCWT3_NA          (0x00000000)
#define GPWTM1_GPTMSYNC_SYNCWT3_TA          (0x00000001)
#define GPWTM1_GPTMSYNC_SYNCWT3_TB          (0x00000002)
#define GPWTM1_GPTMSYNC_SYNCWT3_BOTH        (0x00000003)
//--------

//--------
#define GPWTM1_GPTMSYNC_R_SYNCWT4_MASK      (0x0030000)
#define GPWTM1_GPTMSYNC_R_SYNCWT4_BIT       (20)
#define GPWTM1_GPTMSYNC_R_SYNCWT4_NA        (0x00000000)
#define GPWTM1_GPTMSYNC_R_SYNCWT4_TA        (0x00100000)
#define GPWTM1_GPTMSYNC_R_SYNCWT4_TB        (0x00200000)
#define GPWTM1_GPTMSYNC_R_SYNCWT4_BOTH      (0x00300000)

#define GPWTM1_GPTMSYNC_SYNCWT4_MASK        (0x00000003)
#define GPWTM1_GPTMSYNC_SYNCWT4_NA          (0x00000000)
#define GPWTM1_GPTMSYNC_SYNCWT4_TA          (0x00000001)
#define GPWTM1_GPTMSYNC_SYNCWT4_TB          (0x00000002)
#define GPWTM1_GPTMSYNC_SYNCWT4_BOTH        (0x00000003)
//--------

//--------
#define GPWTM1_GPTMSYNC_R_SYNCWT5_MASK      (0x00C00000)
#define GPWTM1_GPTMSYNC_R_SYNCWT5_BIT       (22)
#define GPWTM1_GPTMSYNC_R_SYNCWT5_NA        (0x00000000)
#define GPWTM1_GPTMSYNC_R_SYNCWT5_TA        (0x00400000)
#define GPWTM1_GPTMSYNC_R_SYNCWT5_TB        (0x00800000)
#define GPWTM1_GPTMSYNC_R_SYNCWT5_BOTH      (0x00C00000)

#define GPWTM1_GPTMSYNC_SYNCWT5_MASK        (0x00000003)
#define GPWTM1_GPTMSYNC_SYNCWT5_NA          (0x00000000)
#define GPWTM1_GPTMSYNC_SYNCWT5_TA          (0x00000001)
#define GPWTM1_GPTMSYNC_SYNCWT5_TB          (0x00000002)
#define GPWTM1_GPTMSYNC_SYNCWT5_BOTH        (0x00000003)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.6 GPTMIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMIMR            (((GPTMIMR_TypeDef*)(GPWTM1_BASE + GPTM_GPTMIMR_OFFSET )))
#define GPWTM1_GPTMIMR_R          (*((volatile  uint32_t *)(GPWTM1_BASE +GPTM_GPTMIMR_OFFSET)))

//--------
#define GPWTM1_GPTMIMR_R_TATOIM_MASK      (0x00000001)
#define GPWTM1_GPTMIMR_R_TATOIM_BIT       (0)
#define GPWTM1_GPTMIMR_R_TATOIM_DIS       (0x00000000)
#define GPWTM1_GPTMIMR_R_TATOIM_EN        (0x00000001)

#define GPWTM1_GPTMIMR_TATOIM_MASK        (0x00000001)
#define GPWTM1_GPTMIMR_TATOIM_DIS         (0x00000000)
#define GPWTM1_GPTMIMR_TATOIM_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMIMR_R_CAMIM_MASK      (0x00000002)
#define GPWTM1_GPTMIMR_R_CAMIM_BIT       (1)
#define GPWTM1_GPTMIMR_R_CAMIM_DIS       (0x00000000)
#define GPWTM1_GPTMIMR_R_CAMIM_EN        (0x00000002)

#define GPWTM1_GPTMIMR_CAMIM_MASK        (0x00000001)
#define GPWTM1_GPTMIMR_CAMIM_DIS         (0x00000000)
#define GPWTM1_GPTMIMR_CAMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMIMR_R_CAEIM_MASK      (0x00000004)
#define GPWTM1_GPTMIMR_R_CAEIM_BIT       (2)
#define GPWTM1_GPTMIMR_R_CAEIM_DIS       (0x00000000)
#define GPWTM1_GPTMIMR_R_CAEIM_EN        (0x00000004)

#define GPWTM1_GPTMIMR_CAEIM_MASK        (0x00000001)
#define GPWTM1_GPTMIMR_CAEIM_DIS         (0x00000000)
#define GPWTM1_GPTMIMR_CAEIM_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMIMR_R_RTCIM_MASK      (0x00000008)
#define GPWTM1_GPTMIMR_R_RTCIM_BIT       (3)
#define GPWTM1_GPTMIMR_R_RTCIM_DIS       (0x00000000)
#define GPWTM1_GPTMIMR_R_RTCIM_EN        (0x00000008)

#define GPWTM1_GPTMIMR_RTCIM_MASK        (0x00000001)
#define GPWTM1_GPTMIMR_RTCIM_DIS         (0x00000000)
#define GPWTM1_GPTMIMR_RTCIM_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMIMR_R_TAMIM_MASK      (0x00000010)
#define GPWTM1_GPTMIMR_R_TAMIM_BIT       (4)
#define GPWTM1_GPTMIMR_R_TAMIM_DIS       (0x00000000)
#define GPWTM1_GPTMIMR_R_TAMIM_EN        (0x00000010)

#define GPWTM1_GPTMIMR_TAMIM_MASK        (0x00000001)
#define GPWTM1_GPTMIMR_TAMIM_DIS         (0x00000000)
#define GPWTM1_GPTMIMR_TAMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMIMR_R_TBTOIM_MASK      (0x00000100)
#define GPWTM1_GPTMIMR_R_TBTOIM_BIT       (8)
#define GPWTM1_GPTMIMR_R_TBTOIM_DIS       (0x00000000)
#define GPWTM1_GPTMIMR_R_TBTOIM_EN        (0x00000100)

#define GPWTM1_GPTMIMR_TBTOIM_MASK        (0x00000001)
#define GPWTM1_GPTMIMR_TBTOIM_DIS         (0x00000000)
#define GPWTM1_GPTMIMR_TBTOIM_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMIMR_R_CBMIM_MASK      (0x00000200)
#define GPWTM1_GPTMIMR_R_CBMIM_BIT       (9)
#define GPWTM1_GPTMIMR_R_CBMIM_DIS       (0x00000000)
#define GPWTM1_GPTMIMR_R_CBMIM_EN        (0x00000200)

#define GPWTM1_GPTMIMR_CBMIM_MASK        (0x00000001)
#define GPWTM1_GPTMIMR_CBMIM_DIS         (0x00000000)
#define GPWTM1_GPTMIMR_CBMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMIMR_R_CBEIM_MASK      (0x00000400)
#define GPWTM1_GPTMIMR_R_CBEIM_BIT       (10)
#define GPWTM1_GPTMIMR_R_CBEIM_DIS       (0x00000000)
#define GPWTM1_GPTMIMR_R_CBEIM_EN        (0x00000400)

#define GPWTM1_GPTMIMR_CBEIM_MASK        (0x00000001)
#define GPWTM1_GPTMIMR_CBEIM_DIS         (0x00000000)
#define GPWTM1_GPTMIMR_CBEIM_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMIMR_R_TBMIM_MASK      (0x00000800)
#define GPWTM1_GPTMIMR_R_TBMIM_BIT       (11)
#define GPWTM1_GPTMIMR_R_TBMIM_DIS       (0x00000000)
#define GPWTM1_GPTMIMR_R_TBMIM_EN        (0x00000800)

#define GPWTM1_GPTMIMR_TBMIM_MASK        (0x00000001)
#define GPWTM1_GPTMIMR_TBMIM_DIS         (0x00000000)
#define GPWTM1_GPTMIMR_TBMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM1_GPTMIMR_R_WUEIM_MASK      (0x00010000)
#define GPWTM1_GPTMIMR_R_WUEIM_BIT       (16)
#define GPWTM1_GPTMIMR_R_WUEIM_DIS       (0x00000000)
#define GPWTM1_GPTMIMR_R_WUEIM_EN        (0x00010000)

#define GPWTM1_GPTMIMR_WUEIM_MASK        (0x00000001)
#define GPWTM1_GPTMIMR_WUEIM_DIS         (0x00000000)
#define GPWTM1_GPTMIMR_WUEIM_EN          (0x00000001)
//--------

#define GPWTM1_GPTMIMR_TATOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(0*4))))
#define GPWTM1_GPTMIMR_CAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(1*4))))
#define GPWTM1_GPTMIMR_CAEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(2*4))))
#define GPWTM1_GPTMIMR_RTCIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(3*4))))
#define GPWTM1_GPTMIMR_TAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(4*4))))
#define GPWTM1_GPTMIMR_TBTOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(8*4))))
#define GPWTM1_GPTMIMR_CBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(9*4))))
#define GPWTM1_GPTMIMR_CBEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(10*4))))
#define GPWTM1_GPTMIMR_TBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(11*4))))
#define GPWTM1_GPTMIMR_WUEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(16*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.7 GPTMRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMRIS            (((GPTMRIS_TypeDef*)(GPWTM1_BASE + GPTM_GPTMRIS_OFFSET )))
#define GPWTM1_GPTMRIS_R          (*((volatile const uint32_t *)(GPWTM1_BASE +GPTM_GPTMRIS_OFFSET)))



//--------
#define GPWTM1_GPTMRIS_R_TATORIS_MASK      (0x00000001)
#define GPWTM1_GPTMRIS_R_TATORIS_BIT       (0)
#define GPWTM1_GPTMRIS_R_TATORIS_NOACTIVE  (0x00000000)
#define GPWTM1_GPTMRIS_R_TATORIS_ACTIVE    (0x00000001)

#define GPWTM1_GPTMRIS_TATORIS_MASK        (0x00000001)
#define GPWTM1_GPTMRIS_TATORIS_NOACTIVE    (0x00000000)
#define GPWTM1_GPTMRIS_TATORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMRIS_R_CAMRIS_MASK      (0x00000002)
#define GPWTM1_GPTMRIS_R_CAMRIS_BIT       (1)
#define GPWTM1_GPTMRIS_R_CAMRIS_NOACTIVE  (0x00000000)
#define GPWTM1_GPTMRIS_R_CAMRIS_ACTIVE    (0x00000002)

#define GPWTM1_GPTMRIS_CAMRIS_MASK        (0x00000001)
#define GPWTM1_GPTMRIS_CAMRIS_NOACTIVE    (0x00000000)
#define GPWTM1_GPTMRIS_CAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMRIS_R_CAERIS_MASK      (0x00000004)
#define GPWTM1_GPTMRIS_R_CAERIS_BIT       (2)
#define GPWTM1_GPTMRIS_R_CAERIS_NOACTIVE  (0x00000000)
#define GPWTM1_GPTMRIS_R_CAERIS_ACTIVE    (0x00000004)

#define GPWTM1_GPTMRIS_CAERIS_MASK        (0x00000001)
#define GPWTM1_GPTMRIS_CAERIS_NOACTIVE    (0x00000000)
#define GPWTM1_GPTMRIS_CAERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMRIS_R_RTCRIS_MASK      (0x00000008)
#define GPWTM1_GPTMRIS_R_RTCRIS_BIT       (3)
#define GPWTM1_GPTMRIS_R_RTCRIS_NOACTIVE  (0x00000000)
#define GPWTM1_GPTMRIS_R_RTCRIS_ACTIVE    (0x00000008)

#define GPWTM1_GPTMRIS_RTCRIS_MASK        (0x00000001)
#define GPWTM1_GPTMRIS_RTCRIS_NOACTIVE    (0x00000000)
#define GPWTM1_GPTMRIS_RTCRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMRIS_R_TAMRIS_MASK      (0x00000010)
#define GPWTM1_GPTMRIS_R_TAMRIS_BIT       (4)
#define GPWTM1_GPTMRIS_R_TAMRIS_NOACTIVE  (0x00000000)
#define GPWTM1_GPTMRIS_R_TAMRIS_ACTIVE    (0x00000010)

#define GPWTM1_GPTMRIS_TAMRIS_MASK        (0x00000001)
#define GPWTM1_GPTMRIS_TAMRIS_NOACTIVE    (0x00000000)
#define GPWTM1_GPTMRIS_TAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMRIS_R_TBTORIS_MASK      (0x00000100)
#define GPWTM1_GPTMRIS_R_TBTORIS_BIT       (8)
#define GPWTM1_GPTMRIS_R_TBTORIS_NOACTIVE  (0x00000000)
#define GPWTM1_GPTMRIS_R_TBTORIS_ACTIVE    (0x00000100)

#define GPWTM1_GPTMRIS_TBTORIS_MASK        (0x00000001)
#define GPWTM1_GPTMRIS_TBTORIS_NOACTIVE    (0x00000000)
#define GPWTM1_GPTMRIS_TBTORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMRIS_R_CBMRIS_MASK      (0x00000200)
#define GPWTM1_GPTMRIS_R_CBMRIS_BIT       (9)
#define GPWTM1_GPTMRIS_R_CBMRIS_NOACTIVE  (0x00000000)
#define GPWTM1_GPTMRIS_R_CBMRIS_ACTIVE    (0x00000200)

#define GPWTM1_GPTMRIS_CBMRIS_MASK        (0x00000001)
#define GPWTM1_GPTMRIS_CBMRIS_NOACTIVE    (0x00000000)
#define GPWTM1_GPTMRIS_CBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMRIS_R_CBERIS_MASK      (0x00000400)
#define GPWTM1_GPTMRIS_R_CBERIS_BIT       (10)
#define GPWTM1_GPTMRIS_R_CBERIS_NOACTIVE  (0x00000000)
#define GPWTM1_GPTMRIS_R_CBERIS_ACTIVE    (0x00000400)

#define GPWTM1_GPTMRIS_CBERIS_MASK        (0x00000001)
#define GPWTM1_GPTMRIS_CBERIS_NOACTIVE    (0x00000000)
#define GPWTM1_GPTMRIS_CBERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMRIS_R_TBMRIS_MASK      (0x00000800)
#define GPWTM1_GPTMRIS_R_TBMRIS_BIT       (11)
#define GPWTM1_GPTMRIS_R_TBMRIS_NOACTIVE  (0x00000000)
#define GPWTM1_GPTMRIS_R_TBMRIS_ACTIVE    (0x00000800)

#define GPWTM1_GPTMRIS_TBMRIS_MASK        (0x00000001)
#define GPWTM1_GPTMRIS_TBMRIS_NOACTIVE    (0x00000000)
#define GPWTM1_GPTMRIS_TBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMRIS_R_WUERIS_MASK      (0x00010000)
#define GPWTM1_GPTMRIS_R_WUERIS_BIT       (16)
#define GPWTM1_GPTMRIS_R_WUERIS_NOACTIVE  (0x00000000)
#define GPWTM1_GPTMRIS_R_WUERIS_ACTIVE    (0x00010000)

#define GPWTM1_GPTMRIS_WUERIS_MASK        (0x00000001)
#define GPWTM1_GPTMRIS_WUERIS_NOACTIVE    (0x00000000)
#define GPWTM1_GPTMRIS_WUERIS_ACTIVE      (0x00000001)
//--------

#define GPWTM1_GPTMRIS_TATORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(0*4))))
#define GPWTM1_GPTMRIS_CAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(1*4))))
#define GPWTM1_GPTMRIS_CAERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(2*4))))
#define GPWTM1_GPTMRIS_RTCRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(3*4))))
#define GPWTM1_GPTMRIS_TAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(4*4))))
#define GPWTM1_GPTMRIS_TBTORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(8*4))))
#define GPWTM1_GPTMRIS_CBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(9*4))))
#define GPWTM1_GPTMRIS_CBERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(10*4))))
#define GPWTM1_GPTMRIS_TBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(11*4))))
#define GPWTM1_GPTMRIS_WUERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(16*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.8 GPTMMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMMIS            (((GPTMMIS_TypeDef*)(GPWTM1_BASE + GPTM_GPTMMIS_OFFSET )))
#define GPWTM1_GPTMMIS_R          (*((volatile const uint32_t *)(GPWTM1_BASE +GPTM_GPTMMIS_OFFSET)))




//--------
#define GPWTM1_GPTMMIS_R_TATOMIS_MASK      (0x00000001)
#define GPWTM1_GPTMMIS_R_TATOMIS_BIT       (0)
#define GPWTM1_GPTMMIS_R_TATOMIS_NOOCCUR  (0x00000000)
#define GPWTM1_GPTMMIS_R_TATOMIS_OCCUR    (0x00000001)

#define GPWTM1_GPTMMIS_TATOMIS_MASK        (0x00000001)
#define GPWTM1_GPTMMIS_TATOMIS_NOOCCUR    (0x00000000)
#define GPWTM1_GPTMMIS_TATOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMMIS_R_CAMMIS_MASK      (0x00000002)
#define GPWTM1_GPTMMIS_R_CAMMIS_BIT       (1)
#define GPWTM1_GPTMMIS_R_CAMMIS_NOOCCUR  (0x00000000)
#define GPWTM1_GPTMMIS_R_CAMMIS_OCCUR    (0x00000002)

#define GPWTM1_GPTMMIS_CAMMIS_MASK        (0x00000001)
#define GPWTM1_GPTMMIS_CAMMIS_NOOCCUR    (0x00000000)
#define GPWTM1_GPTMMIS_CAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMMIS_R_CAEMIS_MASK      (0x00000004)
#define GPWTM1_GPTMMIS_R_CAEMIS_BIT       (2)
#define GPWTM1_GPTMMIS_R_CAEMIS_NOOCCUR  (0x00000000)
#define GPWTM1_GPTMMIS_R_CAEMIS_OCCUR    (0x00000004)

#define GPWTM1_GPTMMIS_CAEMIS_MASK        (0x00000001)
#define GPWTM1_GPTMMIS_CAEMIS_NOOCCUR    (0x00000000)
#define GPWTM1_GPTMMIS_CAEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMMIS_R_RTCMIS_MASK      (0x00000008)
#define GPWTM1_GPTMMIS_R_RTCMIS_BIT       (3)
#define GPWTM1_GPTMMIS_R_RTCMIS_NOOCCUR  (0x00000000)
#define GPWTM1_GPTMMIS_R_RTCMIS_OCCUR    (0x00000008)

#define GPWTM1_GPTMMIS_RTCMIS_MASK        (0x00000001)
#define GPWTM1_GPTMMIS_RTCMIS_NOOCCUR    (0x00000000)
#define GPWTM1_GPTMMIS_RTCMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMMIS_R_TAMMIS_MASK      (0x00000010)
#define GPWTM1_GPTMMIS_R_TAMMIS_BIT       (4)
#define GPWTM1_GPTMMIS_R_TAMMIS_NOOCCUR  (0x00000000)
#define GPWTM1_GPTMMIS_R_TAMMIS_OCCUR    (0x00000010)

#define GPWTM1_GPTMMIS_TAMMIS_MASK        (0x00000001)
#define GPWTM1_GPTMMIS_TAMMIS_NOOCCUR    (0x00000000)
#define GPWTM1_GPTMMIS_TAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMMIS_R_TBTOMIS_MASK      (0x00000100)
#define GPWTM1_GPTMMIS_R_TBTOMIS_BIT       (8)
#define GPWTM1_GPTMMIS_R_TBTOMIS_NOOCCUR  (0x00000000)
#define GPWTM1_GPTMMIS_R_TBTOMIS_OCCUR    (0x00000100)

#define GPWTM1_GPTMMIS_TBTOMIS_MASK        (0x00000001)
#define GPWTM1_GPTMMIS_TBTOMIS_NOOCCUR    (0x00000000)
#define GPWTM1_GPTMMIS_TBTOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMMIS_R_CBMMIS_MASK      (0x00000200)
#define GPWTM1_GPTMMIS_R_CBMMIS_BIT       (9)
#define GPWTM1_GPTMMIS_R_CBMMIS_NOOCCUR  (0x00000000)
#define GPWTM1_GPTMMIS_R_CBMMIS_OCCUR    (0x00000200)

#define GPWTM1_GPTMMIS_CBMMIS_MASK        (0x00000001)
#define GPWTM1_GPTMMIS_CBMMIS_NOOCCUR    (0x00000000)
#define GPWTM1_GPTMMIS_CBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMMIS_R_CBEMIS_MASK      (0x00000400)
#define GPWTM1_GPTMMIS_R_CBEMIS_BIT       (10)
#define GPWTM1_GPTMMIS_R_CBEMIS_NOOCCUR  (0x00000000)
#define GPWTM1_GPTMMIS_R_CBEMIS_OCCUR    (0x00000400)

#define GPWTM1_GPTMMIS_CBEMIS_MASK        (0x00000001)
#define GPWTM1_GPTMMIS_CBEMIS_NOOCCUR    (0x00000000)
#define GPWTM1_GPTMMIS_CBEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMMIS_R_TBMMIS_MASK      (0x00000800)
#define GPWTM1_GPTMMIS_R_TBMMIS_BIT       (11)
#define GPWTM1_GPTMMIS_R_TBMMIS_NOOCCUR  (0x00000000)
#define GPWTM1_GPTMMIS_R_TBMMIS_OCCUR    (0x00000800)

#define GPWTM1_GPTMMIS_TBMMIS_MASK        (0x00000001)
#define GPWTM1_GPTMMIS_TBMMIS_NOOCCUR    (0x00000000)
#define GPWTM1_GPTMMIS_TBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM1_GPTMMIS_R_WUEMIS_MASK      (0x00010000)
#define GPWTM1_GPTMMIS_R_WUEMIS_BIT       (16)
#define GPWTM1_GPTMMIS_R_WUEMIS_NOOCCUR  (0x00000000)
#define GPWTM1_GPTMMIS_R_WUEMIS_OCCUR    (0x00010000)

#define GPWTM1_GPTMMIS_WUEMIS_MASK        (0x00000001)
#define GPWTM1_GPTMMIS_WUEMIS_NOOCCUR    (0x00000000)
#define GPWTM1_GPTMMIS_WUEMIS_OCCUR      (0x00000001)
//--------

#define GPWTM1_GPTMMIS_TATOMIS           (0x00000001)
#define GPWTM1_GPTMMIS_CAMMIS            (0x00000002)
#define GPWTM1_GPTMMIS_CAEMIS            (0x00000004)
#define GPWTM1_GPTMMIS_RTCMIS            (0x00000008)
#define GPWTM1_GPTMMIS_TAMMIS            (0x00000010)
#define GPWTM1_GPTMMIS_TBTOMIS           (0x00000100)
#define GPWTM1_GPTMMIS_CBMMIS            (0x00000200)
#define GPWTM1_GPTMMIS_CBEMIS            (0x00000400)
#define GPWTM1_GPTMMIS_TBMMIS            (0x00000800)
#define GPWTM1_GPTMMIS_WUEMIS            (0x00010000)


#define GPWTM1_GPTMMIS_TATOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(0*4))))
#define GPWTM1_GPTMMIS_CAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(1*4))))
#define GPWTM1_GPTMMIS_CAEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(2*4))))
#define GPWTM1_GPTMMIS_RTCMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(3*4))))
#define GPWTM1_GPTMMIS_TAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(4*4))))
#define GPWTM1_GPTMMIS_TBTOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(8*4))))
#define GPWTM1_GPTMMIS_CBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(9*4))))
#define GPWTM1_GPTMMIS_CBEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(10*4))))
#define GPWTM1_GPTMMIS_TBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(11*4))))
#define GPWTM1_GPTMMIS_WUEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.9 GPTMICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMICR            (((GPTMICR_TypeDef*)(GPWTM1_BASE + GPTM_GPTMICR_OFFSET )))
#define GPWTM1_GPTMICR_R          (*((volatile uint32_t *)(GPWTM1_BASE +GPTM_GPTMICR_OFFSET)))



//--------
#define GPWTM1_GPTMICR_R_TATOCINT_MASK      (0x00000001)
#define GPWTM1_GPTMICR_R_TATOCINT_BIT       (0)
#define GPWTM1_GPTMICR_R_TATOCINT_CLEAR     (0x00000001)

#define GPWTM1_GPTMICR_TATOCINT_MASK        (0x00000001)
#define GPWTM1_GPTMICR_TATOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM1_GPTMICR_R_CAMCINT_MASK      (0x00000002)
#define GPWTM1_GPTMICR_R_CAMCINT_BIT       (1)
#define GPWTM1_GPTMICR_R_CAMCINT_CLEAR     (0x00000002)

#define GPWTM1_GPTMICR_CAMCINT_MASK        (0x00000001)
#define GPWTM1_GPTMICR_CAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM1_GPTMICR_R_CAECINT_MASK      (0x00000004)
#define GPWTM1_GPTMICR_R_CAECINT_BIT       (2)
#define GPWTM1_GPTMICR_R_CAECINT_CLEAR     (0x00000004)

#define GPWTM1_GPTMICR_CAECINT_MASK        (0x00000001)
#define GPWTM1_GPTMICR_CAECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM1_GPTMICR_R_RTCCINT_MASK      (0x00000008)
#define GPWTM1_GPTMICR_R_RTCCINT_BIT       (3)
#define GPWTM1_GPTMICR_R_RTCCINT_CLEAR     (0x00000008)

#define GPWTM1_GPTMICR_RTCCINT_MASK        (0x00000001)
#define GPWTM1_GPTMICR_RTCCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM1_GPTMICR_R_TAMCINT_MASK      (0x00000010)
#define GPWTM1_GPTMICR_R_TAMCINT_BIT       (4)
#define GPWTM1_GPTMICR_R_TAMCINT_CLEAR     (0x00000010)

#define GPWTM1_GPTMICR_TAMCINT_MASK        (0x00000001)
#define GPWTM1_GPTMICR_TAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM1_GPTMICR_R_TBTOCINT_MASK      (0x00000100)
#define GPWTM1_GPTMICR_R_TBTOCINT_BIT       (8)
#define GPWTM1_GPTMICR_R_TBTOCINT_CLEAR     (0x00000100)

#define GPWTM1_GPTMICR_TBTOCINT_MASK        (0x00000001)
#define GPWTM1_GPTMICR_TBTOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM1_GPTMICR_R_CBMCINT_MASK      (0x00000200)
#define GPWTM1_GPTMICR_R_CBMCINT_BIT       (9)
#define GPWTM1_GPTMICR_R_CBMCINT_CLEAR     (0x00000200)

#define GPWTM1_GPTMICR_CBMCINT_MASK        (0x00000001)
#define GPWTM1_GPTMICR_CBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM1_GPTMICR_R_CBECINT_MASK      (0x00000400)
#define GPWTM1_GPTMICR_R_CBECINT_BIT       (10)
#define GPWTM1_GPTMICR_R_CBECINT_CLEAR     (0x00000400)

#define GPWTM1_GPTMICR_CBECINT_MASK        (0x00000001)
#define GPWTM1_GPTMICR_CBECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM1_GPTMICR_R_TBMCINT_MASK      (0x00000800)
#define GPWTM1_GPTMICR_R_TBMCINT_BIT       (11)
#define GPWTM1_GPTMICR_R_TBMCINT_CLEAR     (0x00000800)

#define GPWTM1_GPTMICR_TBMCINT_MASK        (0x00000001)
#define GPWTM1_GPTMICR_TBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM1_GPTMICR_R_WUECINT_MASK      (0x00010000)
#define GPWTM1_GPTMICR_R_WUECINT_BIT       (16)
#define GPWTM1_GPTMICR_R_WUECINT_CLEAR     (0x00010000)

#define GPWTM1_GPTMICR_WUECINT_MASK        (0x00000001)
#define GPWTM1_GPTMICR_WUECINT_CLEAR       (0x00000001)
//--------


#define GPWTM1_GPTMICR_TATOCINT           (0x00000001)
#define GPWTM1_GPTMICR_CAMCINT            (0x00000002)
#define GPWTM1_GPTMICR_CAECINT            (0x00000004)
#define GPWTM1_GPTMICR_RTCCINT            (0x00000008)
#define GPWTM1_GPTMICR_TAMCINT            (0x00000010)
#define GPWTM1_GPTMICR_TBTOCINT           (0x00000100)
#define GPWTM1_GPTMICR_CBMCINT            (0x00000200)
#define GPWTM1_GPTMICR_CBECINT            (0x00000400)
#define GPWTM1_GPTMICR_TBMCINT            (0x00000800)
#define GPWTM1_GPTMICR_WUECINT            (0x00010000)


#define GPWTM1_GPTMICR_TATOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(0*4))))
#define GPWTM1_GPTMICR_CAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(1*4))))
#define GPWTM1_GPTMICR_CAECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(2*4))))
#define GPWTM1_GPTMICR_RTCCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(3*4))))
#define GPWTM1_GPTMICR_TAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(4*4))))
#define GPWTM1_GPTMICR_TBTOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(8*4))))
#define GPWTM1_GPTMICR_CBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(9*4))))
#define GPWTM1_GPTMICR_CBECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(10*4))))
#define GPWTM1_GPTMICR_TBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(11*4))))
#define GPWTM1_GPTMICR_WUECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM1_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.10 GPTMTAILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMTAILR            (((GPTMTAILR_TypeDef*)(GPWTM1_BASE + GPTM_GPTMTAILR_OFFSET )))
#define GPWTM1_GPTMTAILR_R          (*((volatile uint32_t *)(GPWTM1_BASE +GPTM_GPTMTAILR_OFFSET)))

//--------
#define GPWTM1_GPTMTAILR_R_TAILR_MASK      (0xFFFFFFFF)
#define GPWTM1_GPTMTAILR_R_TAILR_BIT       (0)

#define GPWTM1_GPTMTAILR_TAILR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.11 GPTMTBILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMTBILR            (((GPTMTBILR_TypeDef*)(GPWTM1_BASE + GPTM_GPTMTBILR_OFFSET )))
#define GPWTM1_GPTMTBILR_R          (*((volatile uint32_t *)(GPWTM1_BASE +GPTM_GPTMTBILR_OFFSET)))

//--------
#define GPWTM1_GPTMTBILR_R_TBILR_MASK      (0xFFFFFFFF)
#define GPWTM1_GPTMTBILR_R_TBILR_BIT       (0)

#define GPWTM1_GPTMTBILR_TBILR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.12 GPTMTAMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMTAMATCHR            (((GPTMTAMATCHR_TypeDef*)(GPWTM1_BASE + GPTM_GPTMTAMATCHR_OFFSET )))
#define GPWTM1_GPTMTAMATCHR_R          (*((volatile uint32_t *)(GPWTM1_BASE +GPTM_GPTMTAMATCHR_OFFSET)))


//--------
#define GPWTM1_GPTMTAMATCHR_R_TAMR_MASK      (0xFFFFFFFF)
#define GPWTM1_GPTMTAMATCHR_R_TAMR_BIT       (0)

#define GPWTM1_GPTMTAMATCHR_TAMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.13 GPTMTBMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMTBMATCHR            (((GPTMTBMATCHR_TypeDef*)(GPWTM1_BASE + GPTM_GPTMTBMATCHR_OFFSET )))
#define GPWTM1_GPTMTBMATCHR_R          (*((volatile uint32_t *)(GPWTM1_BASE +GPTM_GPTMTBMATCHR_OFFSET)))


//--------
#define GPWTM1_GPTMTBMATCHR_R_TBMR_MASK      (0xFFFFFFFF)
#define GPWTM1_GPTMTBMATCHR_R_TBMR_BIT       (0)

#define GPWTM1_GPTMTBMATCHR_TBMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.14 GPTMTAPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMTAPR            (((GPTMTAPR_TypeDef*)(GPWTM1_BASE + GPTM_GPTMTAPR_OFFSET )))
#define GPWTM1_GPTMTAPR_R          (*((volatile uint32_t *)(GPWTM1_BASE +GPTM_GPTMTAPR_OFFSET)))


//--------
#define GPWTM1_GPTMTAPR_R_TAPSR_MASK      (0x000000FF)
#define GPWTM1_GPTMTAPR_R_TAPSR_BIT       (0)

#define GPWTM1_GPTMTAPR_TAPSR_MASK        (0x000000FF)
//--------

//--------
#define GPWTM1_GPTMTAPR_R_TAPSRH_MASK      (0x0000FF00)
#define GPWTM1_GPTMTAPR_R_TAPSRH_BIT       (8)

#define GPWTM1_GPTMTAPR_TAPSRH_MASK        (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.15 GPTMTBPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMTBPR            (((GPTMTBPR_TypeDef*)(GPWTM1_BASE + GPTM_GPTMTBPR_OFFSET )))
#define GPWTM1_GPTMTBPR_R          (*((volatile uint32_t *)(GPWTM1_BASE +GPTM_GPTMTBPR_OFFSET)))


//--------
#define GPWTM1_GPTMTBPR_R_TBPSR_MASK      (0x000000FF)
#define GPWTM1_GPTMTBPR_R_TBPSR_BIT       (0)

#define GPWTM1_GPTMTBPR_TBPSR_MASK        (0x000000FF)
//--------


//--------
#define GPWTM1_GPTMTBPR_R_TBPSRH_MASK      (0x0000FF00)
#define GPWTM1_GPTMTBPR_R_TBPSRH_BIT       (8)

#define GPWTM1_GPTMTBPR_TBPSRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.16 GPTMTAPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMTAPMR            (((GPTMTAPMR_TypeDef*)(GPWTM1_BASE + GPTM_GPTMTAPMR_OFFSET )))
#define GPWTM1_GPTMTAPMR_R          (*((volatile uint32_t *)(GPWTM1_BASE +GPTM_GPTMTAPMR_OFFSET)))


//--------
#define GPWTM1_GPTMTAPMR_R_TAPSMR_MASK      (0x000000FF)
#define GPWTM1_GPTMTAPMR_R_TAPSMR_BIT       (0)

#define GPWTM1_GPTMTAMPR_TAPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPWTM1_GPTMTAPMR_R_TAPSMRH_MASK      (0x0000FF00)
#define GPWTM1_GPTMTAPMR_R_TAPSMRH_BIT       (8)

#define GPWTM1_GPTMTAPMR_TAPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.17 GPTMTBPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMTBPMR            (((GPTMTBPMR_TypeDef*)(GPWTM1_BASE + GPTM_GPTMTBPMR_OFFSET )))
#define GPWTM1_GPTMTBPMR_R          (*((volatile uint32_t *)(GPWTM1_BASE +GPTM_GPTMTBPMR_OFFSET)))

//--------
#define GPWTM1_GPTMTBPMR_R_TBPSMR_MASK      (0x000000FF)
#define GPWTM1_GPTMTBPMR_R_TBPSMR_BIT       (0)

#define GPWTM1_GPTMTBMPR_TBPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPWTM1_GPTMTBPMR_R_TBPSMRH_MASK      (0x0000FF00)
#define GPWTM1_GPTMTBPMR_R_TBPSMRH_BIT       (8)

#define GPWTM1_GPTMTBPMR_TBPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.18 GPTMTAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMTAR            (((GPTMTAR_TypeDef*)(GPWTM1_BASE + GPTM_GPTMTAR_OFFSET )))
#define GPWTM1_GPTMTAR_R          (*((volatile const  int32_t *)(GPWTM1_BASE +GPTM_GPTMTAR_OFFSET)))


//--------
#define GPWTM1_GPTMTAR_R_TAR_MASK      (0xFFFFFFFF)
#define GPWTM1_GPTMTAR_R_TAR_BIT       (0)

#define GPWTM1_GPTMTAR_TAR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.19 GPTMTBR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMTBR            (((GPTMTBR_TypeDef*)(GPWTM1_BASE + GPTM_GPTMTBR_OFFSET )))
#define GPWTM1_GPTMTBR_R          (*((volatile const uint32_t *)(GPWTM1_BASE +GPTM_GPTMTBR_OFFSET)))


//--------
#define GPWTM1_GPTMTBR_R_TBR_MASK      (0xFFFFFFFF)
#define GPWTM1_GPTMTBR_R_TBR_BIT       (0)

#define GPWTM1_GPTMTBR_TBR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.20 GPTMTAV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMTAV            (((GPTMTAV_TypeDef*)(GPWTM1_BASE + GPTM_GPTMTAV_OFFSET )))
#define GPWTM1_GPTMTAV_R          (*((volatile uint32_t *)(GPWTM1_BASE +GPTM_GPTMTAV_OFFSET)))

//--------
#define GPWTM1_GPTMTAV_R_TAV_MASK      (0xFFFFFFFF)
#define GPWTM1_GPTMTAV_R_TAV_BIT       (0)

#define GPWTM1_GPTMTAV_TAV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.21 GPTMTBV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMTBV            (((GPTMTBV_TypeDef*)(GPWTM1_BASE + GPTM_GPTMTBV_OFFSET )))
#define GPWTM1_GPTMTBV_R          (*((volatile uint32_t *)(GPWTM1_BASE +GPTM_GPTMTBV_OFFSET)))


//--------
#define GPWTM1_GPTMTBV_R_TBV_MASK      (0xFFFFFFFF)
#define GPWTM1_GPTMTBV_R_TBV_BIT       (0)

#define GPWTM1_GPTMTBV_TBV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.22 GPTMRTCPD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMRTCPD            (((GPTMRTCPD_TypeDef*)(GPWTM1_BASE + GPTM_GPTMRTCPD_OFFSET )))
#define GPWTM1_GPTMRTCPD_R          (*((volatile const uint32_t *)(GPWTM1_BASE +GPTM_GPTMRTCPD_OFFSET)))


//--------
#define GPWTM1_GPTMRTCPD_R_RTCPD_MASK      (0x0000FFFF)
#define GPWTM1_GPTMRTCPD_R_RTCPD_BIT       (0)
#define GPWTM1_GPTMRTCPD_R_RTCPD_DEFAULT   (0x00007FFF)

#define GPWTM1_GPTMRTCPD_RTCPD_MASK        (0x0000FFFF)
#define GPWTM1_GPTMRTCPD_RTCPD_DEFAULT     (0x00007FFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.23 GPTMTAPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPWTM1_GPTMTAPS            (((GPTMTAPS_TypeDef*)(GPWTM1_BASE + GPTM_GPTMTAPS_OFFSET )))
#define GPWTM1_GPTMTAPS_R          (*((volatile const uint32_t *)(GPWTM1_BASE +GPTM_GPTMTAPS_OFFSET)))

//--------
#define GPWTM1_GPTMTAPS_R_PSS_MASK      (0x0000FFFF)
#define GPWTM1_GPTMTAPS_R_PSS_BIT       (0)

#define GPWTM1_GPTMTAPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.24 GPTMTBPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMTBPS            (((GPTMTBPS_TypeDef*)(GPWTM1_BASE + GPTM_GPTMTBPS_OFFSET )))
#define GPWTM1_GPTMTBPS_R          (*((volatile const uint32_t *)(GPWTM1_BASE +GPTM_GPTMTBPS_OFFSET)))

//--------
#define GPWTM1_GPTMTBPS_R_PSS_MASK      (0x0000FFFF)
#define GPWTM1_GPTMTBPS_R_PSS_BIT       (0)

#define GPWTM1_GPTMTBPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.25 GPTMTAPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define GPWTM1_GPTMTAPV            (((GPTMTAPV_TypeDef*)(GPWTM1_BASE + GPTM_GPTMTAPV_OFFSET )))
#define GPWTM1_GPTMTAPV_R          (*((volatile const uint32_t *)(GPWTM1_BASE +GPTM_GPTMTAPV_OFFSET)))

//--------
#define GPWTM1_GPTMTAPV_R_PSV_MASK      (0x0000FFFF)
#define GPWTM1_GPTMTAPV_R_PSV_BIT       (0)

#define GPWTM1_GPTMTAPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.26 GPTMTBPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPWTM1_GPTMTBPV            (((GPTMTBPV_TypeDef*)(GPWTM1_BASE + GPTM_GPTMTBPV_OFFSET )))
#define GPWTM1_GPTMTBPV_R          (*((volatile const uint32_t *)(GPWTM1_BASE +GPTM_GPTMTBPV_OFFSET)))

//--------
#define GPWTM1_GPTMTBPV_R_PSV_MASK      (0x0000FFFF)
#define GPWTM1_GPTMTBPV_R_PSV_BIT       (0)

#define GPWTM1_GPTMTBPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.27 GPTMPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM1_GPTMPP            (((GPTMPP_TypeDef*)(GPWTM1_BASE + GPTM_GPTMPP_OFFSET )))
#define GPWTM1_GPTMPP_R          (*((volatile const uint32_t *)(GPWTM1_BASE +GPTM_GPTMPP_OFFSET)))

#define GPWTM1_GPTMPP_SIZE        (0x0000000F)

//--------
#define GPWTM1_GPTMPP_R_SIZE_MASK      (0x0000000F)
#define GPWTM1_GPTMPP_R_SIZE_BIT       (0)
#define GPWTM1_GPTMPP_R_SIZE_16b       (0x00000000)
#define GPWTM1_GPTMPP_R_SIZE_32b       (0x00000001)

#define GPWTM1_GPTMPP_SIZE_MASK        (0x0000000F)
#define GPWTM1_GPTMPP_SIZE_16b         (0x00000000)
#define GPWTM1_GPTMPP_SIZE_32b         (0x00000001)
//--------



// ToDO GPWTM2
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 GPWTM2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.1 GPTMCFG ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMCFG            (((GPTMCFG_TypeDef*)(GPWTM2_BASE + GPTM_GPTMCFG_OFFSET )))
#define GPWTM2_GPTMCFG_R          (*((volatile uint32_t *)(GPWTM2_BASE +GPTM_GPTMCFG_OFFSET)))


//--------
#define GPWTM2_GPTMCFG_R_GPTMCFG_MASK      (0x00000007)
#define GPWTM2_GPTMCFG_R_GPTMCFG_BIT       (0)
#define GPWTM2_GPTMCFG_R_GPTMCFG_BOTH    (0x00000000)
#define GPWTM2_GPTMCFG_R_GPTMCFG_RTC       (0x00000001)
#define GPWTM2_GPTMCFG_R_GPTMCFG_SINGLE      (0x00000004)

#define GPWTM2_GPTMCFG_GPTMCFG_MASK        (0x00000007)
#define GPWTM2_GPTMCFG_GPTMCFG_BOTH      (0x00000000)
#define GPWTM2_GPTMCFG_GPTMCFG_RTC         (0x00000001)
#define GPWTM2_GPTMCFG_GPTMCFG_SINGLE        (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.2 GPTMTAMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMTAMR            (((GPTMTAMR_TypeDef*)(GPWTM2_BASE + GPTM_GPTMTAMR_OFFSET )))
#define GPWTM2_GPTMTAMR_R          (*((volatile uint32_t *)(GPWTM2_BASE +GPTM_GPTMTAMR_OFFSET)))


//--------
#define GPWTM2_GPTMTAMR_R_TAMR_MASK      (0x00000003)
#define GPWTM2_GPTMTAMR_R_TAMR_BIT       (0)
#define GPWTM2_GPTMTAMR_R_TAMR_ONESHOT   (0x00000001)
#define GPWTM2_GPTMTAMR_R_TAMR_PERIOD    (0x00000002)
#define GPWTM2_GPTMTAMR_R_TAMR_CAPTURE   (0x00000003)

#define GPWTM2_GPTMTAMR_TAMR_MASK        (0x00000003)
#define GPWTM2_GPTMTAMR_TAMR_ONESHOT     (0x00000001)
#define GPWTM2_GPTMTAMR_TAMR_PERIOD      (0x00000002)
#define GPWTM2_GPTMTAMR_TAMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPWTM2_GPTMTAMR_R_TACMR_MASK      (0x00000004)
#define GPWTM2_GPTMTAMR_R_TACMR_BIT       (2)
#define GPWTM2_GPTMTAMR_R_TACMR_EDGECOUNT (0x00000000)
#define GPWTM2_GPTMTAMR_R_TACMR_EDGETIME  (0x00000004)

#define GPWTM2_GPTMTAMR_TACMR_MASK        (0x00000001)
#define GPWTM2_GPTMTAMR_TACMR_EDGECOUNT   (0x00000000)
#define GPWTM2_GPTMTAMR_TACMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPWTM2_GPTMTAMR_R_TAAMS_MASK      (0x00000008)
#define GPWTM2_GPTMTAMR_R_TAAMS_BIT       (3)
#define GPWTM2_GPTMTAMR_R_TAAMS_CAPCOMP   (0x00000000)
#define GPWTM2_GPTMTAMR_R_TAAMS_PWM       (0x00000008)

#define GPWTM2_GPTMTAMR_TAAMS_MASK        (0x00000001)
#define GPWTM2_GPTMTAMR_TAAMS_CAPCOMP     (0x00000000)
#define GPWTM2_GPTMTAMR_TAAMS_PWM         (0x00000001)
//--------

//--------
#define GPWTM2_GPTMTAMR_R_TACDIR_MASK      (0x00000010)
#define GPWTM2_GPTMTAMR_R_TACDIR_BIT       (4)
#define GPWTM2_GPTMTAMR_R_TACDIR_DOWN      (0x00000000)
#define GPWTM2_GPTMTAMR_R_TACDIR_UP        (0x00000010)

#define GPWTM2_GPTMTAMR_TACDIR_MASK        (0x00000001)
#define GPWTM2_GPTMTAMR_TACDIR_DOWN        (0x00000000)
#define GPWTM2_GPTMTAMR_TACDIR_UP          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMTAMR_R_TAMIE_MASK      (0x00000020)
#define GPWTM2_GPTMTAMR_R_TAMIE_BIT       (5)
#define GPWTM2_GPTMTAMR_R_TAMIE_DIS       (0x00000000)
#define GPWTM2_GPTMTAMR_R_TAMIE_EN        (0x00000020)

#define GPWTM2_GPTMTAMR_TAMIE_MASK        (0x00000001)
#define GPWTM2_GPTMTAMR_TAMIE_DIS         (0x00000000)
#define GPWTM2_GPTMTAMR_TAMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMTAMR_R_TAWOT_MASK      (0x00000040)
#define GPWTM2_GPTMTAMR_R_TAWOT_BIT       (6)
#define GPWTM2_GPTMTAMR_R_TAWOT_INSTANT   (0x00000000)
#define GPWTM2_GPTMTAMR_R_TAWOT_TRIGGER   (0x00000040)

#define GPWTM2_GPTMTAMR_TAWOT_MASK        (0x00000001)
#define GPWTM2_GPTMTAMR_TAWOT_INSTANT     (0x00000000)
#define GPWTM2_GPTMTAMR_TAWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPWTM2_GPTMTAMR_R_TASNAPS_MASK      (0x00000080)
#define GPWTM2_GPTMTAMR_R_TASNAPS_BIT       (7)
#define GPWTM2_GPTMTAMR_R_TASNAPS_DIS       (0x00000000)
#define GPWTM2_GPTMTAMR_R_TASNAPS_EN        (0x00000080)

#define GPWTM2_GPTMTAMR_TASNAPS_MASK        (0x00000001)
#define GPWTM2_GPTMTAMR_TASNAPS_DIS         (0x00000000)
#define GPWTM2_GPTMTAMR_TASNAPS_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMTAMR_R_TAILD_MASK      (0x00000100)
#define GPWTM2_GPTMTAMR_R_TAILD_BIT       (8)
#define GPWTM2_GPTMTAMR_R_TAILD_NEXT      (0x00000000)
#define GPWTM2_GPTMTAMR_R_TAILD_TIMEOUT   (0x00000100)

#define GPWTM2_GPTMTAMR_TAILD_MASK        (0x00000001)
#define GPWTM2_GPTMTAMR_TAILD_NEXT        (0x00000000)
#define GPWTM2_GPTMTAMR_TAILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM2_GPTMTAMR_R_TAPWMIE_MASK      (0x00000200)
#define GPWTM2_GPTMTAMR_R_TAPWMIE_BIT       (9)
#define GPWTM2_GPTMTAMR_R_TAPWMIE_DIS       (0x00000000)
#define GPWTM2_GPTMTAMR_R_TAPWMIE_EN        (0x00000200)

#define GPWTM2_GPTMTAMR_TAPWMIE_MASK        (0x00000001)
#define GPWTM2_GPTMTAMR_TAPWMIE_DIS         (0x00000000)
#define GPWTM2_GPTMTAMR_TAPWMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMTAMR_R_TAMRSU_MASK      (0x00000400)
#define GPWTM2_GPTMTAMR_R_TAMRSU_BIT       (10)
#define GPWTM2_GPTMTAMR_R_TAMRSU_NEXT      (0x00000000)
#define GPWTM2_GPTMTAMR_R_TAMRSU_TIMEOUT   (0x00000400)

#define GPWTM2_GPTMTAMR_TAMRSU_MASK        (0x00000001)
#define GPWTM2_GPTMTAMR_TAMRSU_NEXT        (0x00000000)
#define GPWTM2_GPTMTAMR_TAMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM2_GPTMTAMR_R_TAPLO_MASK      (0x00000800)
#define GPWTM2_GPTMTAMR_R_TAPLO_BIT       (11)
#define GPWTM2_GPTMTAMR_R_TAPLO_LOW       (0x00000000)
#define GPWTM2_GPTMTAMR_R_TAPLO_HIGH      (0x00000800)

#define GPWTM2_GPTMTAMR_TAPLO_MASK        (0x00000001)
#define GPWTM2_GPTMTAMR_TAPLO_LOW         (0x00000000)
#define GPWTM2_GPTMTAMR_TAPLO_HIGH        (0x00000001)
//--------

#define GPWTM2_GPTMTAMR_TACMR_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(2*4))))
#define GPWTM2_GPTMTAMR_TAAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(3*4))))
#define GPWTM2_GPTMTAMR_TACDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(4*4))))
#define GPWTM2_GPTMTAMR_TAMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(5*4))))
#define GPWTM2_GPTMTAMR_TAWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(6*4))))
#define GPWTM2_GPTMTAMR_TASNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(7*4))))
#define GPWTM2_GPTMTAMR_TAILD_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(8*4))))
#define GPWTM2_GPTMTAMR_TAPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(9*4))))
#define GPWTM2_GPTMTAMR_TAMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(10*4))))
#define GPWTM2_GPTMTAMR_TAPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.3 GPTMTBMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMTBMR            (((GPTMTBMR_TypeDef*)(GPWTM2_BASE + GPTM_GPTMTBMR_OFFSET )))
#define GPWTM2_GPTMTBMR_R          (*((volatile uint32_t *)(GPWTM2_BASE +GPTM_GPTMTBMR_OFFSET)))


//--------
#define GPWTM2_GPTMTBMR_R_TBMR_MASK      (0x00000003)
#define GPWTM2_GPTMTBMR_R_TBMR_BIT       (0)
#define GPWTM2_GPTMTBMR_R_TBMR_ONESHOT   (0x00000001)
#define GPWTM2_GPTMTBMR_R_TBMR_PERIOD    (0x00000002)
#define GPWTM2_GPTMTBMR_R_TBMR_CAPTURE   (0x00000003)

#define GPWTM2_GPTMTBMR_TBMR_MASK        (0x00000003)
#define GPWTM2_GPTMTBMR_TBMR_ONESHOT     (0x00000001)
#define GPWTM2_GPTMTBMR_TBMR_PERIOD      (0x00000002)
#define GPWTM2_GPTMTBMR_TBMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPWTM2_GPTMTBMR_R_TBCMR_MASK      (0x00000004)
#define GPWTM2_GPTMTBMR_R_TBCMR_BIT       (2)
#define GPWTM2_GPTMTBMR_R_TBCMR_EDGECOUNT (0x00000000)
#define GPWTM2_GPTMTBMR_R_TBCMR_EDGETIME  (0x00000004)

#define GPWTM2_GPTMTBMR_TBCMR_MASK        (0x00000001)
#define GPWTM2_GPTMTBMR_TBCMR_EDGECOUNT   (0x00000000)
#define GPWTM2_GPTMTBMR_TBCMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPWTM2_GPTMTBMR_R_TBAMS_MASK      (0x00000008)
#define GPWTM2_GPTMTBMR_R_TBAMS_BIT       (3)
#define GPWTM2_GPTMTBMR_R_TBAMS_CAPCOMP   (0x00000000)
#define GPWTM2_GPTMTBMR_R_TBAMS_PWM       (0x00000008)

#define GPWTM2_GPTMTBMR_TBAMS_MASK        (0x00000001)
#define GPWTM2_GPTMTBMR_TBAMS_CAPCOMP     (0x00000000)
#define GPWTM2_GPTMTBMR_TBAMS_PWM         (0x00000001)
//--------

//--------
#define GPWTM2_GPTMTBMR_R_TBCDIR_MASK      (0x00000010)
#define GPWTM2_GPTMTBMR_R_TBCDIR_BIT       (4)
#define GPWTM2_GPTMTBMR_R_TBCDIR_DOWN      (0x00000000)
#define GPWTM2_GPTMTBMR_R_TBCDIR_UP        (0x00000010)

#define GPWTM2_GPTMTBMR_TBCDIR_MASK        (0x00000001)
#define GPWTM2_GPTMTBMR_TBCDIR_DOWN        (0x00000000)
#define GPWTM2_GPTMTBMR_TBCDIR_UP          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMTBMR_R_TBMIE_MASK      (0x00000020)
#define GPWTM2_GPTMTBMR_R_TBMIE_BIT       (5)
#define GPWTM2_GPTMTBMR_R_TBMIE_DIS       (0x00000000)
#define GPWTM2_GPTMTBMR_R_TBMIE_EN        (0x00000020)

#define GPWTM2_GPTMTBMR_TBMIE_MASK        (0x00000001)
#define GPWTM2_GPTMTBMR_TBMIE_DIS         (0x00000000)
#define GPWTM2_GPTMTBMR_TBMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMTBMR_R_TBWOT_MASK      (0x00000040)
#define GPWTM2_GPTMTBMR_R_TBWOT_BIT       (6)
#define GPWTM2_GPTMTBMR_R_TBWOT_INSTANT   (0x00000000)
#define GPWTM2_GPTMTBMR_R_TBWOT_TRIGGER   (0x00000040)

#define GPWTM2_GPTMTBMR_TBWOT_MASK        (0x00000001)
#define GPWTM2_GPTMTBMR_TBWOT_INSTANT     (0x00000000)
#define GPWTM2_GPTMTBMR_TBWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPWTM2_GPTMTBMR_R_TBSNAPS_MASK      (0x00000080)
#define GPWTM2_GPTMTBMR_R_TBSNAPS_BIT       (7)
#define GPWTM2_GPTMTBMR_R_TBSNAPS_DIS       (0x00000000)
#define GPWTM2_GPTMTBMR_R_TBSNAPS_EN        (0x00000080)

#define GPWTM2_GPTMTBMR_TBSNAPS_MASK        (0x00000001)
#define GPWTM2_GPTMTBMR_TBSNAPS_DIS         (0x00000000)
#define GPWTM2_GPTMTBMR_TBSNAPS_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMTBMR_R_TBILD_MASK      (0x00000100)
#define GPWTM2_GPTMTBMR_R_TBILD_BIT       (8)
#define GPWTM2_GPTMTBMR_R_TBILD_NEXT      (0x00000000)
#define GPWTM2_GPTMTBMR_R_TBILD_TIMEOUT   (0x00000100)

#define GPWTM2_GPTMTBMR_TBILD_MASK        (0x00000001)
#define GPWTM2_GPTMTBMR_TBILD_NEXT        (0x00000000)
#define GPWTM2_GPTMTBMR_TBILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM2_GPTMTBMR_R_TBPWMIE_MASK      (0x00000200)
#define GPWTM2_GPTMTBMR_R_TBPWMIE_BIT       (9)
#define GPWTM2_GPTMTBMR_R_TBPWMIE_DIS       (0x00000000)
#define GPWTM2_GPTMTBMR_R_TBPWMIE_EN        (0x00000200)

#define GPWTM2_GPTMTBMR_TBPWMIE_MASK        (0x00000001)
#define GPWTM2_GPTMTBMR_TBPWMIE_DIS         (0x00000000)
#define GPWTM2_GPTMTBMR_TBPWMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMTBMR_R_TBMRSU_MASK      (0x00000400)
#define GPWTM2_GPTMTBMR_R_TBMRSU_BIT       (10)
#define GPWTM2_GPTMTBMR_R_TBMRSU_NEXT      (0x00000000)
#define GPWTM2_GPTMTBMR_R_TBMRSU_TIMEOUT   (0x00000400)

#define GPWTM2_GPTMTBMR_TBMRSU_MASK        (0x00000001)
#define GPWTM2_GPTMTBMR_TBMRSU_NEXT        (0x00000000)
#define GPWTM2_GPTMTBMR_TBMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM2_GPTMTBMR_R_TBPLO_MASK      (0x00000800)
#define GPWTM2_GPTMTBMR_R_TBPLO_BIT       (11)
#define GPWTM2_GPTMTBMR_R_TBPLO_LOW       (0x00000000)
#define GPWTM2_GPTMTBMR_R_TBPLO_HIGH      (0x00000800)

#define GPWTM2_GPTMTBMR_TBPLO_MASK        (0x00000001)
#define GPWTM2_GPTMTBMR_TBPLO_LOW         (0x00000000)
#define GPWTM2_GPTMTBMR_TBPLO_HIGH        (0x00000001)
//--------

#define GPWTM2_GPTMTBMR_TBCMR_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(2*4))))
#define GPWTM2_GPTMTBMR_TBAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(3*4))))
#define GPWTM2_GPTMTBMR_TBCDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(4*4))))
#define GPWTM2_GPTMTBMR_TBMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(5*4))))
#define GPWTM2_GPTMTBMR_TBWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(6*4))))
#define GPWTM2_GPTMTBMR_TBSNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(7*4))))
#define GPWTM2_GPTMTBMR_TBILD_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(8*4))))
#define GPWTM2_GPTMTBMR_TBPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(9*4))))
#define GPWTM2_GPTMTBMR_TBMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(10*4))))
#define GPWTM2_GPTMTBMR_TBPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.4 GPTMCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMCTL            (((GPTMCTL_TypeDef*)(GPWTM2_BASE + GPTM_GPTMCTL_OFFSET )))
#define GPWTM2_GPTMCTL_R          (*((volatile uint32_t *)(GPWTM2_BASE +GPTM_GPTMCTL_OFFSET)))


//--------
#define GPWTM2_GPTMCTL_R_TAEN_MASK      (0x00000001)
#define GPWTM2_GPTMCTL_R_TAEN_BIT       (0)
#define GPWTM2_GPTMCTL_R_TAEN_DIS       (0x00000000)
#define GPWTM2_GPTMCTL_R_TAEN_EN        (0x00000001)

#define GPWTM2_GPTMCTL_TAEN_MASK        (0x00000001)
#define GPWTM2_GPTMCTL_TAEN_DIS         (0x00000000)
#define GPWTM2_GPTMCTL_TAEN_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMCTL_R_TASTALL_MASK      (0x00000002)
#define GPWTM2_GPTMCTL_R_TASTALL_BIT       (1)
#define GPWTM2_GPTMCTL_R_TASTALL_CONTINUE  (0x00000000)
#define GPWTM2_GPTMCTL_R_TASTALL_FREEZE    (0x00000002)

#define GPWTM2_GPTMCTL_TASTALL_MASK        (0x00000001)
#define GPWTM2_GPTMCTL_TASTALL_CONTINUE    (0x00000000)
#define GPWTM2_GPTMCTL_TASTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMCTL_R_TAEVENT_MASK      (0x0000000C)
#define GPWTM2_GPTMCTL_R_TAEVENT_BIT       (2)
#define GPWTM2_GPTMCTL_R_TAEVENT_POS       (0x00000000)
#define GPWTM2_GPTMCTL_R_TAEVENT_NEG       (0x00000004)
#define GPWTM2_GPTMCTL_R_TAEVENT_BOTH      (0x0000000C)

#define GPWTM2_GPTMCTL_TAEVENT_MASK        (0x00000003)
#define GPWTM2_GPTMCTL_TAEVENT_NEG         (0x00000000)
#define GPWTM2_GPTMCTL_TAEVENT_POS         (0x00000001)
#define GPWTM2_GPTMCTL_TAEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPWTM2_GPTMCTL_R_RTCEN_MASK      (0x00000010)
#define GPWTM2_GPTMCTL_R_RTCEN_BIT       (4)
#define GPWTM2_GPTMCTL_R_RTCEN_CONTINUE  (0x00000000)
#define GPWTM2_GPTMCTL_R_RTCEN_FREEZE    (0x00000010)

#define GPWTM2_GPTMCTL_RTCEN_MASK        (0x00000001)
#define GPWTM2_GPTMCTL_RTCEN_CONTINUE    (0x00000000)
#define GPWTM2_GPTMCTL_RTCEN_FREEZE      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMCTL_R_TAOTE_MASK      (0x00000020)
#define GPWTM2_GPTMCTL_R_TAOTE_BIT       (5)
#define GPWTM2_GPTMCTL_R_TAOTE_DIS       (0x00000000)
#define GPWTM2_GPTMCTL_R_TAOTE_EN        (0x00000020)

#define GPWTM2_GPTMCTL_TAOTE_MASK        (0x00000001)
#define GPWTM2_GPTMCTL_TAOTE_DIS         (0x00000000)
#define GPWTM2_GPTMCTL_TAOTE_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMCTL_R_TAPWML_MASK      (0x00000040)
#define GPWTM2_GPTMCTL_R_TAPWML_BIT       (6)
#define GPWTM2_GPTMCTL_R_TAPWML_NA        (0x00000000)
#define GPWTM2_GPTMCTL_R_TAPWML_INV       (0x00000040)

#define GPWTM2_GPTMCTL_TAPWML_MASK        (0x00000001)
#define GPWTM2_GPTMCTL_TAPWML_NA          (0x00000000)
#define GPWTM2_GPTMCTL_TAPWML_INV         (0x00000001)
//--------



//--------
#define GPWTM2_GPTMCTL_R_TBEN_MASK      (0x00000100)
#define GPWTM2_GPTMCTL_R_TBEN_BIT       (8)
#define GPWTM2_GPTMCTL_R_TBEN_DIS       (0x00000000)
#define GPWTM2_GPTMCTL_R_TBEN_EN        (0x00000100)

#define GPWTM2_GPTMCTL_TBEN_MASK        (0x00000001)
#define GPWTM2_GPTMCTL_TBEN_DIS         (0x00000000)
#define GPWTM2_GPTMCTL_TBEN_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMCTL_R_TBSTALL_MASK      (0x00000200)
#define GPWTM2_GPTMCTL_R_TBSTALL_BIT       (9)
#define GPWTM2_GPTMCTL_R_TBSTALL_CONTINUE  (0x00000000)
#define GPWTM2_GPTMCTL_R_TBSTALL_FREEZE    (0x00000200)

#define GPWTM2_GPTMCTL_TBSTALL_MASK        (0x00000001)
#define GPWTM2_GPTMCTL_TBSTALL_CONTINUE    (0x00000000)
#define GPWTM2_GPTMCTL_TBSTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMCTL_R_TBEVENT_MASK      (0x00000C00)
#define GPWTM2_GPTMCTL_R_TBEVENT_BIT       (10)
#define GPWTM2_GPTMCTL_R_TBEVENT_POS       (0x00000000)
#define GPWTM2_GPTMCTL_R_TBEVENT_NEG       (0x00000400)
#define GPWTM2_GPTMCTL_R_TBEVENT_BOTH      (0x00000C00)

#define GPWTM2_GPTMCTL_TBEVENT_MASK        (0x00000003)
#define GPWTM2_GPTMCTL_TBEVENT_NEG         (0x00000000)
#define GPWTM2_GPTMCTL_TBEVENT_POS         (0x00000001)
#define GPWTM2_GPTMCTL_TBEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPWTM2_GPTMCTL_R_TBOTE_MASK      (0x00002000)
#define GPWTM2_GPTMCTL_R_TBOTE_BIT       (13)
#define GPWTM2_GPTMCTL_R_TBOTE_DIS       (0x00000000)
#define GPWTM2_GPTMCTL_R_TBOTE_EN        (0x00002000)

#define GPWTM2_GPTMCTL_TBOTE_MASK        (0x00000001)
#define GPWTM2_GPTMCTL_TBOTE_DIS         (0x00000000)
#define GPWTM2_GPTMCTL_TBOTE_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMCTL_R_TBPWML_MASK      (0x00004000)
#define GPWTM2_GPTMCTL_R_TBPWML_BIT       (14)
#define GPWTM2_GPTMCTL_R_TBPWML_NA        (0x00000000)
#define GPWTM2_GPTMCTL_R_TBPWML_INV       (0x00004000)

#define GPWTM2_GPTMCTL_TBPWML_MASK        (0x00000001)
#define GPWTM2_GPTMCTL_TBPWML_NA          (0x00000000)
#define GPWTM2_GPTMCTL_TBPWML_INV         (0x00000001)
//--------

#define GPWTM2_GPTMCTL_TAEN_BB      (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(0*4))))
#define GPWTM2_GPTMCTL_TASTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(1*4))))
#define GPWTM2_GPTMCTL_RTCEN_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(4*4))))
#define GPWTM2_GPTMCTL_TAOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(5*4))))
#define GPWTM2_GPTMCTL_TAPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTMGPTMCTL_OFFSET)*32)+(6*4))))
#define GPWTM2_GPTMCTL_TBEN_BB      (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(8*4))))
#define GPWTM2_GPTMCTL_TBSTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(9*4))))
#define GPWTM2_GPTMCTL_TBOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(13*4))))
#define GPWTM2_GPTMCTL_TBPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(14*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.5 GPTMSYNC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMSYNC            (((GPTMSYNC_TypeDef*)(GPWTM2_BASE + GPTM_GPTMSYNC_OFFSET )))
#define GPWTM2_GPTMSYNC_R          (*((volatile uint32_t *)(GPWTM2_BASE +GPTM_GPTMSYNC_OFFSET)))

//--------
#define GPWTM2_GPTMSYNC_R_SYNCT0_MASK      (0x00000003)
#define GPWTM2_GPTMSYNC_R_SYNCT0_BIT       (0)
#define GPWTM2_GPTMSYNC_R_SYNCT0_NA        (0x00000000)
#define GPWTM2_GPTMSYNC_R_SYNCT0_TA        (0x00000001)
#define GPWTM2_GPTMSYNC_R_SYNCT0_TB        (0x00000002)
#define GPWTM2_GPTMSYNC_R_SYNCT0_BOTH      (0x00000003)

#define GPWTM2_GPTMSYNC_SYNCT0_MASK        (0x00000003)
#define GPWTM2_GPTMSYNC_SYNCT0_NA          (0x00000000)
#define GPWTM2_GPTMSYNC_SYNCT0_TA          (0x00000001)
#define GPWTM2_GPTMSYNC_SYNCT0_TB          (0x00000002)
#define GPWTM2_GPTMSYNC_SYNCT0_BOTH        (0x00000003)
//--------

//--------
#define GPWTM2_GPTMSYNC_R_SYNCT1_MASK      (0x0000000C)
#define GPWTM2_GPTMSYNC_R_SYNCT1_BIT       (2)
#define GPWTM2_GPTMSYNC_R_SYNCT1_NA        (0x00000000)
#define GPWTM2_GPTMSYNC_R_SYNCT1_TA        (0x00000004)
#define GPWTM2_GPTMSYNC_R_SYNCT1_TB        (0x00000008)
#define GPWTM2_GPTMSYNC_R_SYNCT1_BOTH      (0x0000000C)

#define GPWTM2_GPTMSYNC_SYNCT1_MASK        (0x00000003)
#define GPWTM2_GPTMSYNC_SYNCT1_NA          (0x00000000)
#define GPWTM2_GPTMSYNC_SYNCT1_TA          (0x00000001)
#define GPWTM2_GPTMSYNC_SYNCT1_TB          (0x00000002)
#define GPWTM2_GPTMSYNC_SYNCT1_BOTH        (0x00000003)
//--------

//--------
#define GPWTM2_GPTMSYNC_R_SYNCT2_MASK      (0x00000030)
#define GPWTM2_GPTMSYNC_R_SYNCT2_BIT       (4)
#define GPWTM2_GPTMSYNC_R_SYNCT2_NA        (0x00000000)
#define GPWTM2_GPTMSYNC_R_SYNCT2_TA        (0x00000010)
#define GPWTM2_GPTMSYNC_R_SYNCT2_TB        (0x00000020)
#define GPWTM2_GPTMSYNC_R_SYNCT2_BOTH      (0x00000030)

#define GPWTM2_GPTMSYNC_SYNCT2_MASK        (0x00000003)
#define GPWTM2_GPTMSYNC_SYNCT2_NA          (0x00000000)
#define GPWTM2_GPTMSYNC_SYNCT2_TA          (0x00000001)
#define GPWTM2_GPTMSYNC_SYNCT2_TB          (0x00000002)
#define GPWTM2_GPTMSYNC_SYNCT2_BOTH        (0x00000003)
//--------

//--------
#define GPWTM2_GPTMSYNC_R_SYNCT3_MASK      (0x000000C0)
#define GPWTM2_GPTMSYNC_R_SYNCT3_BIT       (6)
#define GPWTM2_GPTMSYNC_R_SYNCT3_NA        (0x00000000)
#define GPWTM2_GPTMSYNC_R_SYNCT3_TA        (0x00000040)
#define GPWTM2_GPTMSYNC_R_SYNCT3_TB        (0x00000080)
#define GPWTM2_GPTMSYNC_R_SYNCT3_BOTH      (0x000000C0)

#define GPWTM2_GPTMSYNC_SYNCT3_MASK        (0x00000003)
#define GPWTM2_GPTMSYNC_SYNCT3_NA          (0x00000000)
#define GPWTM2_GPTMSYNC_SYNCT3_TA          (0x00000001)
#define GPWTM2_GPTMSYNC_SYNCT3_TB          (0x00000002)
#define GPWTM2_GPTMSYNC_SYNCT3_BOTH        (0x00000003)
//--------

//--------
#define GPWTM2_GPTMSYNC_R_SYNCT4_MASK      (0x00000300)
#define GPWTM2_GPTMSYNC_R_SYNCT4_BIT       (8)
#define GPWTM2_GPTMSYNC_R_SYNCT4_NA        (0x00000000)
#define GPWTM2_GPTMSYNC_R_SYNCT4_TA        (0x00000100)
#define GPWTM2_GPTMSYNC_R_SYNCT4_TB        (0x00000200)
#define GPWTM2_GPTMSYNC_R_SYNCT4_BOTH      (0x00000300)

#define GPWTM2_GPTMSYNC_SYNCT4_MASK        (0x00000003)
#define GPWTM2_GPTMSYNC_SYNCT4_NA          (0x00000000)
#define GPWTM2_GPTMSYNC_SYNCT4_TA          (0x00000001)
#define GPWTM2_GPTMSYNC_SYNCT4_TB          (0x00000002)
#define GPWTM2_GPTMSYNC_SYNCT4_BOTH        (0x00000003)
//--------

//--------
#define GPWTM2_GPTMSYNC_R_SYNCT5_MASK      (0x00000C00)
#define GPWTM2_GPTMSYNC_R_SYNCT5_BIT       (10)
#define GPWTM2_GPTMSYNC_R_SYNCT5_NA        (0x00000000)
#define GPWTM2_GPTMSYNC_R_SYNCT5_TA        (0x00000400)
#define GPWTM2_GPTMSYNC_R_SYNCT5_TB        (0x00000800)
#define GPWTM2_GPTMSYNC_R_SYNCT5_BOTH      (0x00000C00)

#define GPWTM2_GPTMSYNC_SYNCT5_MASK        (0x00000003)
#define GPWTM2_GPTMSYNC_SYNCT5_NA          (0x00000000)
#define GPWTM2_GPTMSYNC_SYNCT5_TA          (0x00000001)
#define GPWTM2_GPTMSYNC_SYNCT5_TB          (0x00000002)
#define GPWTM2_GPTMSYNC_SYNCT5_BOTH        (0x00000003)
//--------

//--------
#define GPWTM2_GPTMSYNC_R_SYNCWT0_MASK      (0x00003000)
#define GPWTM2_GPTMSYNC_R_SYNCWT0_BIT       (12)
#define GPWTM2_GPTMSYNC_R_SYNCWT0_NA        (0x00000000)
#define GPWTM2_GPTMSYNC_R_SYNCWT0_TA        (0x00001000)
#define GPWTM2_GPTMSYNC_R_SYNCWT0_TB        (0x00002000)
#define GPWTM2_GPTMSYNC_R_SYNCWT0_BOTH      (0x00003000)

#define GPWTM2_GPTMSYNC_SYNCWT0_MASK        (0x00000003)
#define GPWTM2_GPTMSYNC_SYNCWT0_NA          (0x00000000)
#define GPWTM2_GPTMSYNC_SYNCWT0_TA          (0x00000001)
#define GPWTM2_GPTMSYNC_SYNCWT0_TB          (0x00000002)
#define GPWTM2_GPTMSYNC_SYNCWT0_BOTH        (0x00000003)
//--------

//--------
#define GPWTM2_GPTMSYNC_R_SYNCWT1_MASK      (0x0000C000)
#define GPWTM2_GPTMSYNC_R_SYNCWT1_BIT       (14)
#define GPWTM2_GPTMSYNC_R_SYNCWT1_NA        (0x00000000)
#define GPWTM2_GPTMSYNC_R_SYNCWT1_TA        (0x00004000)
#define GPWTM2_GPTMSYNC_R_SYNCWT1_TB        (0x00008000)
#define GPWTM2_GPTMSYNC_R_SYNCWT1_BOTH      (0x0000C000)

#define GPWTM2_GPTMSYNC_SYNCWT1_MASK        (0x00000003)
#define GPWTM2_GPTMSYNC_SYNCWT1_NA          (0x00000000)
#define GPWTM2_GPTMSYNC_SYNCWT1_TA          (0x00000001)
#define GPWTM2_GPTMSYNC_SYNCWT1_TB          (0x00000002)
#define GPWTM2_GPTMSYNC_SYNCWT1_BOTH        (0x00000003)
//--------

//--------
#define GPWTM2_GPTMSYNC_R_SYNCWT2_MASK      (0x00030000)
#define GPWTM2_GPTMSYNC_R_SYNCWT2_BIT       (16)
#define GPWTM2_GPTMSYNC_R_SYNCWT2_NA        (0x00000000)
#define GPWTM2_GPTMSYNC_R_SYNCWT2_TA        (0x00010000)
#define GPWTM2_GPTMSYNC_R_SYNCWT2_TB        (0x00020000)
#define GPWTM2_GPTMSYNC_R_SYNCWT2_BOTH      (0x00030000)

#define GPWTM2_GPTMSYNC_SYNCWT2_MASK        (0x00000003)
#define GPWTM2_GPTMSYNC_SYNCWT2_NA          (0x00000000)
#define GPWTM2_GPTMSYNC_SYNCWT2_TA          (0x00000001)
#define GPWTM2_GPTMSYNC_SYNCWT2_TB          (0x00000002)
#define GPWTM2_GPTMSYNC_SYNCWT2_BOTH        (0x00000003)
//--------

//--------
#define GPWTM2_GPTMSYNC_R_SYNCWT3_MASK      (0x000C0000)
#define GPWTM2_GPTMSYNC_R_SYNCWT3_BIT       (18)
#define GPWTM2_GPTMSYNC_R_SYNCWT3_NA        (0x00000000)
#define GPWTM2_GPTMSYNC_R_SYNCWT3_TA        (0x00040000)
#define GPWTM2_GPTMSYNC_R_SYNCWT3_TB        (0x00080000)
#define GPWTM2_GPTMSYNC_R_SYNCWT3_BOTH      (0x000C0000)

#define GPWTM2_GPTMSYNC_SYNCWT3_MASK        (0x00000003)
#define GPWTM2_GPTMSYNC_SYNCWT3_NA          (0x00000000)
#define GPWTM2_GPTMSYNC_SYNCWT3_TA          (0x00000001)
#define GPWTM2_GPTMSYNC_SYNCWT3_TB          (0x00000002)
#define GPWTM2_GPTMSYNC_SYNCWT3_BOTH        (0x00000003)
//--------

//--------
#define GPWTM2_GPTMSYNC_R_SYNCWT4_MASK      (0x0030000)
#define GPWTM2_GPTMSYNC_R_SYNCWT4_BIT       (20)
#define GPWTM2_GPTMSYNC_R_SYNCWT4_NA        (0x00000000)
#define GPWTM2_GPTMSYNC_R_SYNCWT4_TA        (0x00100000)
#define GPWTM2_GPTMSYNC_R_SYNCWT4_TB        (0x00200000)
#define GPWTM2_GPTMSYNC_R_SYNCWT4_BOTH      (0x00300000)

#define GPWTM2_GPTMSYNC_SYNCWT4_MASK        (0x00000003)
#define GPWTM2_GPTMSYNC_SYNCWT4_NA          (0x00000000)
#define GPWTM2_GPTMSYNC_SYNCWT4_TA          (0x00000001)
#define GPWTM2_GPTMSYNC_SYNCWT4_TB          (0x00000002)
#define GPWTM2_GPTMSYNC_SYNCWT4_BOTH        (0x00000003)
//--------

//--------
#define GPWTM2_GPTMSYNC_R_SYNCWT5_MASK      (0x00C00000)
#define GPWTM2_GPTMSYNC_R_SYNCWT5_BIT       (22)
#define GPWTM2_GPTMSYNC_R_SYNCWT5_NA        (0x00000000)
#define GPWTM2_GPTMSYNC_R_SYNCWT5_TA        (0x00400000)
#define GPWTM2_GPTMSYNC_R_SYNCWT5_TB        (0x00800000)
#define GPWTM2_GPTMSYNC_R_SYNCWT5_BOTH      (0x00C00000)

#define GPWTM2_GPTMSYNC_SYNCWT5_MASK        (0x00000003)
#define GPWTM2_GPTMSYNC_SYNCWT5_NA          (0x00000000)
#define GPWTM2_GPTMSYNC_SYNCWT5_TA          (0x00000001)
#define GPWTM2_GPTMSYNC_SYNCWT5_TB          (0x00000002)
#define GPWTM2_GPTMSYNC_SYNCWT5_BOTH        (0x00000003)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.6 GPTMIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMIMR            (((GPTMIMR_TypeDef*)(GPWTM2_BASE + GPTM_GPTMIMR_OFFSET )))
#define GPWTM2_GPTMIMR_R          (*((volatile  uint32_t *)(GPWTM2_BASE +GPTM_GPTMIMR_OFFSET)))

//--------
#define GPWTM2_GPTMIMR_R_TATOIM_MASK      (0x00000001)
#define GPWTM2_GPTMIMR_R_TATOIM_BIT       (0)
#define GPWTM2_GPTMIMR_R_TATOIM_DIS       (0x00000000)
#define GPWTM2_GPTMIMR_R_TATOIM_EN        (0x00000001)

#define GPWTM2_GPTMIMR_TATOIM_MASK        (0x00000001)
#define GPWTM2_GPTMIMR_TATOIM_DIS         (0x00000000)
#define GPWTM2_GPTMIMR_TATOIM_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMIMR_R_CAMIM_MASK      (0x00000002)
#define GPWTM2_GPTMIMR_R_CAMIM_BIT       (1)
#define GPWTM2_GPTMIMR_R_CAMIM_DIS       (0x00000000)
#define GPWTM2_GPTMIMR_R_CAMIM_EN        (0x00000002)

#define GPWTM2_GPTMIMR_CAMIM_MASK        (0x00000001)
#define GPWTM2_GPTMIMR_CAMIM_DIS         (0x00000000)
#define GPWTM2_GPTMIMR_CAMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMIMR_R_CAEIM_MASK      (0x00000004)
#define GPWTM2_GPTMIMR_R_CAEIM_BIT       (2)
#define GPWTM2_GPTMIMR_R_CAEIM_DIS       (0x00000000)
#define GPWTM2_GPTMIMR_R_CAEIM_EN        (0x00000004)

#define GPWTM2_GPTMIMR_CAEIM_MASK        (0x00000001)
#define GPWTM2_GPTMIMR_CAEIM_DIS         (0x00000000)
#define GPWTM2_GPTMIMR_CAEIM_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMIMR_R_RTCIM_MASK      (0x00000008)
#define GPWTM2_GPTMIMR_R_RTCIM_BIT       (3)
#define GPWTM2_GPTMIMR_R_RTCIM_DIS       (0x00000000)
#define GPWTM2_GPTMIMR_R_RTCIM_EN        (0x00000008)

#define GPWTM2_GPTMIMR_RTCIM_MASK        (0x00000001)
#define GPWTM2_GPTMIMR_RTCIM_DIS         (0x00000000)
#define GPWTM2_GPTMIMR_RTCIM_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMIMR_R_TAMIM_MASK      (0x00000010)
#define GPWTM2_GPTMIMR_R_TAMIM_BIT       (4)
#define GPWTM2_GPTMIMR_R_TAMIM_DIS       (0x00000000)
#define GPWTM2_GPTMIMR_R_TAMIM_EN        (0x00000010)

#define GPWTM2_GPTMIMR_TAMIM_MASK        (0x00000001)
#define GPWTM2_GPTMIMR_TAMIM_DIS         (0x00000000)
#define GPWTM2_GPTMIMR_TAMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMIMR_R_TBTOIM_MASK      (0x00000100)
#define GPWTM2_GPTMIMR_R_TBTOIM_BIT       (8)
#define GPWTM2_GPTMIMR_R_TBTOIM_DIS       (0x00000000)
#define GPWTM2_GPTMIMR_R_TBTOIM_EN        (0x00000100)

#define GPWTM2_GPTMIMR_TBTOIM_MASK        (0x00000001)
#define GPWTM2_GPTMIMR_TBTOIM_DIS         (0x00000000)
#define GPWTM2_GPTMIMR_TBTOIM_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMIMR_R_CBMIM_MASK      (0x00000200)
#define GPWTM2_GPTMIMR_R_CBMIM_BIT       (9)
#define GPWTM2_GPTMIMR_R_CBMIM_DIS       (0x00000000)
#define GPWTM2_GPTMIMR_R_CBMIM_EN        (0x00000200)

#define GPWTM2_GPTMIMR_CBMIM_MASK        (0x00000001)
#define GPWTM2_GPTMIMR_CBMIM_DIS         (0x00000000)
#define GPWTM2_GPTMIMR_CBMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMIMR_R_CBEIM_MASK      (0x00000400)
#define GPWTM2_GPTMIMR_R_CBEIM_BIT       (10)
#define GPWTM2_GPTMIMR_R_CBEIM_DIS       (0x00000000)
#define GPWTM2_GPTMIMR_R_CBEIM_EN        (0x00000400)

#define GPWTM2_GPTMIMR_CBEIM_MASK        (0x00000001)
#define GPWTM2_GPTMIMR_CBEIM_DIS         (0x00000000)
#define GPWTM2_GPTMIMR_CBEIM_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMIMR_R_TBMIM_MASK      (0x00000800)
#define GPWTM2_GPTMIMR_R_TBMIM_BIT       (11)
#define GPWTM2_GPTMIMR_R_TBMIM_DIS       (0x00000000)
#define GPWTM2_GPTMIMR_R_TBMIM_EN        (0x00000800)

#define GPWTM2_GPTMIMR_TBMIM_MASK        (0x00000001)
#define GPWTM2_GPTMIMR_TBMIM_DIS         (0x00000000)
#define GPWTM2_GPTMIMR_TBMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM2_GPTMIMR_R_WUEIM_MASK      (0x00010000)
#define GPWTM2_GPTMIMR_R_WUEIM_BIT       (16)
#define GPWTM2_GPTMIMR_R_WUEIM_DIS       (0x00000000)
#define GPWTM2_GPTMIMR_R_WUEIM_EN        (0x00010000)

#define GPWTM2_GPTMIMR_WUEIM_MASK        (0x00000001)
#define GPWTM2_GPTMIMR_WUEIM_DIS         (0x00000000)
#define GPWTM2_GPTMIMR_WUEIM_EN          (0x00000001)
//--------

#define GPWTM2_GPTMIMR_TATOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(0*4))))
#define GPWTM2_GPTMIMR_CAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(1*4))))
#define GPWTM2_GPTMIMR_CAEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(2*4))))
#define GPWTM2_GPTMIMR_RTCIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(3*4))))
#define GPWTM2_GPTMIMR_TAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(4*4))))
#define GPWTM2_GPTMIMR_TBTOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(8*4))))
#define GPWTM2_GPTMIMR_CBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(9*4))))
#define GPWTM2_GPTMIMR_CBEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(10*4))))
#define GPWTM2_GPTMIMR_TBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(11*4))))
#define GPWTM2_GPTMIMR_WUEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(16*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.7 GPTMRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMRIS            (((GPTMRIS_TypeDef*)(GPWTM2_BASE + GPTM_GPTMRIS_OFFSET )))
#define GPWTM2_GPTMRIS_R          (*((volatile const uint32_t *)(GPWTM2_BASE +GPTM_GPTMRIS_OFFSET)))



//--------
#define GPWTM2_GPTMRIS_R_TATORIS_MASK      (0x00000001)
#define GPWTM2_GPTMRIS_R_TATORIS_BIT       (0)
#define GPWTM2_GPTMRIS_R_TATORIS_NOACTIVE  (0x00000000)
#define GPWTM2_GPTMRIS_R_TATORIS_ACTIVE    (0x00000001)

#define GPWTM2_GPTMRIS_TATORIS_MASK        (0x00000001)
#define GPWTM2_GPTMRIS_TATORIS_NOACTIVE    (0x00000000)
#define GPWTM2_GPTMRIS_TATORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMRIS_R_CAMRIS_MASK      (0x00000002)
#define GPWTM2_GPTMRIS_R_CAMRIS_BIT       (1)
#define GPWTM2_GPTMRIS_R_CAMRIS_NOACTIVE  (0x00000000)
#define GPWTM2_GPTMRIS_R_CAMRIS_ACTIVE    (0x00000002)

#define GPWTM2_GPTMRIS_CAMRIS_MASK        (0x00000001)
#define GPWTM2_GPTMRIS_CAMRIS_NOACTIVE    (0x00000000)
#define GPWTM2_GPTMRIS_CAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMRIS_R_CAERIS_MASK      (0x00000004)
#define GPWTM2_GPTMRIS_R_CAERIS_BIT       (2)
#define GPWTM2_GPTMRIS_R_CAERIS_NOACTIVE  (0x00000000)
#define GPWTM2_GPTMRIS_R_CAERIS_ACTIVE    (0x00000004)

#define GPWTM2_GPTMRIS_CAERIS_MASK        (0x00000001)
#define GPWTM2_GPTMRIS_CAERIS_NOACTIVE    (0x00000000)
#define GPWTM2_GPTMRIS_CAERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMRIS_R_RTCRIS_MASK      (0x00000008)
#define GPWTM2_GPTMRIS_R_RTCRIS_BIT       (3)
#define GPWTM2_GPTMRIS_R_RTCRIS_NOACTIVE  (0x00000000)
#define GPWTM2_GPTMRIS_R_RTCRIS_ACTIVE    (0x00000008)

#define GPWTM2_GPTMRIS_RTCRIS_MASK        (0x00000001)
#define GPWTM2_GPTMRIS_RTCRIS_NOACTIVE    (0x00000000)
#define GPWTM2_GPTMRIS_RTCRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMRIS_R_TAMRIS_MASK      (0x00000010)
#define GPWTM2_GPTMRIS_R_TAMRIS_BIT       (4)
#define GPWTM2_GPTMRIS_R_TAMRIS_NOACTIVE  (0x00000000)
#define GPWTM2_GPTMRIS_R_TAMRIS_ACTIVE    (0x00000010)

#define GPWTM2_GPTMRIS_TAMRIS_MASK        (0x00000001)
#define GPWTM2_GPTMRIS_TAMRIS_NOACTIVE    (0x00000000)
#define GPWTM2_GPTMRIS_TAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMRIS_R_TBTORIS_MASK      (0x00000100)
#define GPWTM2_GPTMRIS_R_TBTORIS_BIT       (8)
#define GPWTM2_GPTMRIS_R_TBTORIS_NOACTIVE  (0x00000000)
#define GPWTM2_GPTMRIS_R_TBTORIS_ACTIVE    (0x00000100)

#define GPWTM2_GPTMRIS_TBTORIS_MASK        (0x00000001)
#define GPWTM2_GPTMRIS_TBTORIS_NOACTIVE    (0x00000000)
#define GPWTM2_GPTMRIS_TBTORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMRIS_R_CBMRIS_MASK      (0x00000200)
#define GPWTM2_GPTMRIS_R_CBMRIS_BIT       (9)
#define GPWTM2_GPTMRIS_R_CBMRIS_NOACTIVE  (0x00000000)
#define GPWTM2_GPTMRIS_R_CBMRIS_ACTIVE    (0x00000200)

#define GPWTM2_GPTMRIS_CBMRIS_MASK        (0x00000001)
#define GPWTM2_GPTMRIS_CBMRIS_NOACTIVE    (0x00000000)
#define GPWTM2_GPTMRIS_CBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMRIS_R_CBERIS_MASK      (0x00000400)
#define GPWTM2_GPTMRIS_R_CBERIS_BIT       (10)
#define GPWTM2_GPTMRIS_R_CBERIS_NOACTIVE  (0x00000000)
#define GPWTM2_GPTMRIS_R_CBERIS_ACTIVE    (0x00000400)

#define GPWTM2_GPTMRIS_CBERIS_MASK        (0x00000001)
#define GPWTM2_GPTMRIS_CBERIS_NOACTIVE    (0x00000000)
#define GPWTM2_GPTMRIS_CBERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMRIS_R_TBMRIS_MASK      (0x00000800)
#define GPWTM2_GPTMRIS_R_TBMRIS_BIT       (11)
#define GPWTM2_GPTMRIS_R_TBMRIS_NOACTIVE  (0x00000000)
#define GPWTM2_GPTMRIS_R_TBMRIS_ACTIVE    (0x00000800)

#define GPWTM2_GPTMRIS_TBMRIS_MASK        (0x00000001)
#define GPWTM2_GPTMRIS_TBMRIS_NOACTIVE    (0x00000000)
#define GPWTM2_GPTMRIS_TBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMRIS_R_WUERIS_MASK      (0x00010000)
#define GPWTM2_GPTMRIS_R_WUERIS_BIT       (16)
#define GPWTM2_GPTMRIS_R_WUERIS_NOACTIVE  (0x00000000)
#define GPWTM2_GPTMRIS_R_WUERIS_ACTIVE    (0x00010000)

#define GPWTM2_GPTMRIS_WUERIS_MASK        (0x00000001)
#define GPWTM2_GPTMRIS_WUERIS_NOACTIVE    (0x00000000)
#define GPWTM2_GPTMRIS_WUERIS_ACTIVE      (0x00000001)
//--------

#define GPWTM2_GPTMRIS_TATORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(0*4))))
#define GPWTM2_GPTMRIS_CAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(1*4))))
#define GPWTM2_GPTMRIS_CAERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(2*4))))
#define GPWTM2_GPTMRIS_RTCRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(3*4))))
#define GPWTM2_GPTMRIS_TAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(4*4))))
#define GPWTM2_GPTMRIS_TBTORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(8*4))))
#define GPWTM2_GPTMRIS_CBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(9*4))))
#define GPWTM2_GPTMRIS_CBERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(10*4))))
#define GPWTM2_GPTMRIS_TBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(11*4))))
#define GPWTM2_GPTMRIS_WUERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(16*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.8 GPTMMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMMIS            (((GPTMMIS_TypeDef*)(GPWTM2_BASE + GPTM_GPTMMIS_OFFSET )))
#define GPWTM2_GPTMMIS_R          (*((volatile const uint32_t *)(GPWTM2_BASE +GPTM_GPTMMIS_OFFSET)))




//--------
#define GPWTM2_GPTMMIS_R_TATOMIS_MASK      (0x00000001)
#define GPWTM2_GPTMMIS_R_TATOMIS_BIT       (0)
#define GPWTM2_GPTMMIS_R_TATOMIS_NOOCCUR  (0x00000000)
#define GPWTM2_GPTMMIS_R_TATOMIS_OCCUR    (0x00000001)

#define GPWTM2_GPTMMIS_TATOMIS_MASK        (0x00000001)
#define GPWTM2_GPTMMIS_TATOMIS_NOOCCUR    (0x00000000)
#define GPWTM2_GPTMMIS_TATOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMMIS_R_CAMMIS_MASK      (0x00000002)
#define GPWTM2_GPTMMIS_R_CAMMIS_BIT       (1)
#define GPWTM2_GPTMMIS_R_CAMMIS_NOOCCUR  (0x00000000)
#define GPWTM2_GPTMMIS_R_CAMMIS_OCCUR    (0x00000002)

#define GPWTM2_GPTMMIS_CAMMIS_MASK        (0x00000001)
#define GPWTM2_GPTMMIS_CAMMIS_NOOCCUR    (0x00000000)
#define GPWTM2_GPTMMIS_CAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMMIS_R_CAEMIS_MASK      (0x00000004)
#define GPWTM2_GPTMMIS_R_CAEMIS_BIT       (2)
#define GPWTM2_GPTMMIS_R_CAEMIS_NOOCCUR  (0x00000000)
#define GPWTM2_GPTMMIS_R_CAEMIS_OCCUR    (0x00000004)

#define GPWTM2_GPTMMIS_CAEMIS_MASK        (0x00000001)
#define GPWTM2_GPTMMIS_CAEMIS_NOOCCUR    (0x00000000)
#define GPWTM2_GPTMMIS_CAEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMMIS_R_RTCMIS_MASK      (0x00000008)
#define GPWTM2_GPTMMIS_R_RTCMIS_BIT       (3)
#define GPWTM2_GPTMMIS_R_RTCMIS_NOOCCUR  (0x00000000)
#define GPWTM2_GPTMMIS_R_RTCMIS_OCCUR    (0x00000008)

#define GPWTM2_GPTMMIS_RTCMIS_MASK        (0x00000001)
#define GPWTM2_GPTMMIS_RTCMIS_NOOCCUR    (0x00000000)
#define GPWTM2_GPTMMIS_RTCMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMMIS_R_TAMMIS_MASK      (0x00000010)
#define GPWTM2_GPTMMIS_R_TAMMIS_BIT       (4)
#define GPWTM2_GPTMMIS_R_TAMMIS_NOOCCUR  (0x00000000)
#define GPWTM2_GPTMMIS_R_TAMMIS_OCCUR    (0x00000010)

#define GPWTM2_GPTMMIS_TAMMIS_MASK        (0x00000001)
#define GPWTM2_GPTMMIS_TAMMIS_NOOCCUR    (0x00000000)
#define GPWTM2_GPTMMIS_TAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMMIS_R_TBTOMIS_MASK      (0x00000100)
#define GPWTM2_GPTMMIS_R_TBTOMIS_BIT       (8)
#define GPWTM2_GPTMMIS_R_TBTOMIS_NOOCCUR  (0x00000000)
#define GPWTM2_GPTMMIS_R_TBTOMIS_OCCUR    (0x00000100)

#define GPWTM2_GPTMMIS_TBTOMIS_MASK        (0x00000001)
#define GPWTM2_GPTMMIS_TBTOMIS_NOOCCUR    (0x00000000)
#define GPWTM2_GPTMMIS_TBTOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMMIS_R_CBMMIS_MASK      (0x00000200)
#define GPWTM2_GPTMMIS_R_CBMMIS_BIT       (9)
#define GPWTM2_GPTMMIS_R_CBMMIS_NOOCCUR  (0x00000000)
#define GPWTM2_GPTMMIS_R_CBMMIS_OCCUR    (0x00000200)

#define GPWTM2_GPTMMIS_CBMMIS_MASK        (0x00000001)
#define GPWTM2_GPTMMIS_CBMMIS_NOOCCUR    (0x00000000)
#define GPWTM2_GPTMMIS_CBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMMIS_R_CBEMIS_MASK      (0x00000400)
#define GPWTM2_GPTMMIS_R_CBEMIS_BIT       (10)
#define GPWTM2_GPTMMIS_R_CBEMIS_NOOCCUR  (0x00000000)
#define GPWTM2_GPTMMIS_R_CBEMIS_OCCUR    (0x00000400)

#define GPWTM2_GPTMMIS_CBEMIS_MASK        (0x00000001)
#define GPWTM2_GPTMMIS_CBEMIS_NOOCCUR    (0x00000000)
#define GPWTM2_GPTMMIS_CBEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMMIS_R_TBMMIS_MASK      (0x00000800)
#define GPWTM2_GPTMMIS_R_TBMMIS_BIT       (11)
#define GPWTM2_GPTMMIS_R_TBMMIS_NOOCCUR  (0x00000000)
#define GPWTM2_GPTMMIS_R_TBMMIS_OCCUR    (0x00000800)

#define GPWTM2_GPTMMIS_TBMMIS_MASK        (0x00000001)
#define GPWTM2_GPTMMIS_TBMMIS_NOOCCUR    (0x00000000)
#define GPWTM2_GPTMMIS_TBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM2_GPTMMIS_R_WUEMIS_MASK      (0x00010000)
#define GPWTM2_GPTMMIS_R_WUEMIS_BIT       (16)
#define GPWTM2_GPTMMIS_R_WUEMIS_NOOCCUR  (0x00000000)
#define GPWTM2_GPTMMIS_R_WUEMIS_OCCUR    (0x00010000)

#define GPWTM2_GPTMMIS_WUEMIS_MASK        (0x00000001)
#define GPWTM2_GPTMMIS_WUEMIS_NOOCCUR    (0x00000000)
#define GPWTM2_GPTMMIS_WUEMIS_OCCUR      (0x00000001)
//--------

#define GPWTM2_GPTMMIS_TATOMIS           (0x00000001)
#define GPWTM2_GPTMMIS_CAMMIS            (0x00000002)
#define GPWTM2_GPTMMIS_CAEMIS            (0x00000004)
#define GPWTM2_GPTMMIS_RTCMIS            (0x00000008)
#define GPWTM2_GPTMMIS_TAMMIS            (0x00000010)
#define GPWTM2_GPTMMIS_TBTOMIS           (0x00000100)
#define GPWTM2_GPTMMIS_CBMMIS            (0x00000200)
#define GPWTM2_GPTMMIS_CBEMIS            (0x00000400)
#define GPWTM2_GPTMMIS_TBMMIS            (0x00000800)
#define GPWTM2_GPTMMIS_WUEMIS            (0x00010000)


#define GPWTM2_GPTMMIS_TATOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(0*4))))
#define GPWTM2_GPTMMIS_CAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(1*4))))
#define GPWTM2_GPTMMIS_CAEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(2*4))))
#define GPWTM2_GPTMMIS_RTCMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(3*4))))
#define GPWTM2_GPTMMIS_TAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(4*4))))
#define GPWTM2_GPTMMIS_TBTOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(8*4))))
#define GPWTM2_GPTMMIS_CBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(9*4))))
#define GPWTM2_GPTMMIS_CBEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(10*4))))
#define GPWTM2_GPTMMIS_TBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(11*4))))
#define GPWTM2_GPTMMIS_WUEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.9 GPTMICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMICR            (((GPTMICR_TypeDef*)(GPWTM2_BASE + GPTM_GPTMICR_OFFSET )))
#define GPWTM2_GPTMICR_R          (*((volatile uint32_t *)(GPWTM2_BASE +GPTM_GPTMICR_OFFSET)))



//--------
#define GPWTM2_GPTMICR_R_TATOCINT_MASK      (0x00000001)
#define GPWTM2_GPTMICR_R_TATOCINT_BIT       (0)
#define GPWTM2_GPTMICR_R_TATOCINT_CLEAR     (0x00000001)

#define GPWTM2_GPTMICR_TATOCINT_MASK        (0x00000001)
#define GPWTM2_GPTMICR_TATOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM2_GPTMICR_R_CAMCINT_MASK      (0x00000002)
#define GPWTM2_GPTMICR_R_CAMCINT_BIT       (1)
#define GPWTM2_GPTMICR_R_CAMCINT_CLEAR     (0x00000002)

#define GPWTM2_GPTMICR_CAMCINT_MASK        (0x00000001)
#define GPWTM2_GPTMICR_CAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM2_GPTMICR_R_CAECINT_MASK      (0x00000004)
#define GPWTM2_GPTMICR_R_CAECINT_BIT       (2)
#define GPWTM2_GPTMICR_R_CAECINT_CLEAR     (0x00000004)

#define GPWTM2_GPTMICR_CAECINT_MASK        (0x00000001)
#define GPWTM2_GPTMICR_CAECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM2_GPTMICR_R_RTCCINT_MASK      (0x00000008)
#define GPWTM2_GPTMICR_R_RTCCINT_BIT       (3)
#define GPWTM2_GPTMICR_R_RTCCINT_CLEAR     (0x00000008)

#define GPWTM2_GPTMICR_RTCCINT_MASK        (0x00000001)
#define GPWTM2_GPTMICR_RTCCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM2_GPTMICR_R_TAMCINT_MASK      (0x00000010)
#define GPWTM2_GPTMICR_R_TAMCINT_BIT       (4)
#define GPWTM2_GPTMICR_R_TAMCINT_CLEAR     (0x00000010)

#define GPWTM2_GPTMICR_TAMCINT_MASK        (0x00000001)
#define GPWTM2_GPTMICR_TAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM2_GPTMICR_R_TBTOCINT_MASK      (0x00000100)
#define GPWTM2_GPTMICR_R_TBTOCINT_BIT       (8)
#define GPWTM2_GPTMICR_R_TBTOCINT_CLEAR     (0x00000100)

#define GPWTM2_GPTMICR_TBTOCINT_MASK        (0x00000001)
#define GPWTM2_GPTMICR_TBTOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM2_GPTMICR_R_CBMCINT_MASK      (0x00000200)
#define GPWTM2_GPTMICR_R_CBMCINT_BIT       (9)
#define GPWTM2_GPTMICR_R_CBMCINT_CLEAR     (0x00000200)

#define GPWTM2_GPTMICR_CBMCINT_MASK        (0x00000001)
#define GPWTM2_GPTMICR_CBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM2_GPTMICR_R_CBECINT_MASK      (0x00000400)
#define GPWTM2_GPTMICR_R_CBECINT_BIT       (10)
#define GPWTM2_GPTMICR_R_CBECINT_CLEAR     (0x00000400)

#define GPWTM2_GPTMICR_CBECINT_MASK        (0x00000001)
#define GPWTM2_GPTMICR_CBECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM2_GPTMICR_R_TBMCINT_MASK      (0x00000800)
#define GPWTM2_GPTMICR_R_TBMCINT_BIT       (11)
#define GPWTM2_GPTMICR_R_TBMCINT_CLEAR     (0x00000800)

#define GPWTM2_GPTMICR_TBMCINT_MASK        (0x00000001)
#define GPWTM2_GPTMICR_TBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM2_GPTMICR_R_WUECINT_MASK      (0x00010000)
#define GPWTM2_GPTMICR_R_WUECINT_BIT       (16)
#define GPWTM2_GPTMICR_R_WUECINT_CLEAR     (0x00010000)

#define GPWTM2_GPTMICR_WUECINT_MASK        (0x00000001)
#define GPWTM2_GPTMICR_WUECINT_CLEAR       (0x00000001)
//--------


#define GPWTM2_GPTMICR_TATOCINT           (0x00000001)
#define GPWTM2_GPTMICR_CAMCINT            (0x00000002)
#define GPWTM2_GPTMICR_CAECINT            (0x00000004)
#define GPWTM2_GPTMICR_RTCCINT            (0x00000008)
#define GPWTM2_GPTMICR_TAMCINT            (0x00000010)
#define GPWTM2_GPTMICR_TBTOCINT           (0x00000100)
#define GPWTM2_GPTMICR_CBMCINT            (0x00000200)
#define GPWTM2_GPTMICR_CBECINT            (0x00000400)
#define GPWTM2_GPTMICR_TBMCINT            (0x00000800)
#define GPWTM2_GPTMICR_WUECINT            (0x00010000)


#define GPWTM2_GPTMICR_TATOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(0*4))))
#define GPWTM2_GPTMICR_CAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(1*4))))
#define GPWTM2_GPTMICR_CAECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(2*4))))
#define GPWTM2_GPTMICR_RTCCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(3*4))))
#define GPWTM2_GPTMICR_TAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(4*4))))
#define GPWTM2_GPTMICR_TBTOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(8*4))))
#define GPWTM2_GPTMICR_CBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(9*4))))
#define GPWTM2_GPTMICR_CBECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(10*4))))
#define GPWTM2_GPTMICR_TBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(11*4))))
#define GPWTM2_GPTMICR_WUECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM2_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.10 GPTMTAILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMTAILR            (((GPTMTAILR_TypeDef*)(GPWTM2_BASE + GPTM_GPTMTAILR_OFFSET )))
#define GPWTM2_GPTMTAILR_R          (*((volatile uint32_t *)(GPWTM2_BASE +GPTM_GPTMTAILR_OFFSET)))

//--------
#define GPWTM2_GPTMTAILR_R_TAILR_MASK      (0xFFFFFFFF)
#define GPWTM2_GPTMTAILR_R_TAILR_BIT       (0)

#define GPWTM2_GPTMTAILR_TAILR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.11 GPTMTBILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMTBILR            (((GPTMTBILR_TypeDef*)(GPWTM2_BASE + GPTM_GPTMTBILR_OFFSET )))
#define GPWTM2_GPTMTBILR_R          (*((volatile uint32_t *)(GPWTM2_BASE +GPTM_GPTMTBILR_OFFSET)))

//--------
#define GPWTM2_GPTMTBILR_R_TBILR_MASK      (0xFFFFFFFF)
#define GPWTM2_GPTMTBILR_R_TBILR_BIT       (0)

#define GPWTM2_GPTMTBILR_TBILR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.12 GPTMTAMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMTAMATCHR            (((GPTMTAMATCHR_TypeDef*)(GPWTM2_BASE + GPTM_GPTMTAMATCHR_OFFSET )))
#define GPWTM2_GPTMTAMATCHR_R          (*((volatile uint32_t *)(GPWTM2_BASE +GPTM_GPTMTAMATCHR_OFFSET)))


//--------
#define GPWTM2_GPTMTAMATCHR_R_TAMR_MASK      (0xFFFFFFFF)
#define GPWTM2_GPTMTAMATCHR_R_TAMR_BIT       (0)

#define GPWTM2_GPTMTAMATCHR_TAMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.13 GPTMTBMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMTBMATCHR            (((GPTMTBMATCHR_TypeDef*)(GPWTM2_BASE + GPTM_GPTMTBMATCHR_OFFSET )))
#define GPWTM2_GPTMTBMATCHR_R          (*((volatile uint32_t *)(GPWTM2_BASE +GPTM_GPTMTBMATCHR_OFFSET)))


//--------
#define GPWTM2_GPTMTBMATCHR_R_TBMR_MASK      (0xFFFFFFFF)
#define GPWTM2_GPTMTBMATCHR_R_TBMR_BIT       (0)

#define GPWTM2_GPTMTBMATCHR_TBMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.14 GPTMTAPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMTAPR            (((GPTMTAPR_TypeDef*)(GPWTM2_BASE + GPTM_GPTMTAPR_OFFSET )))
#define GPWTM2_GPTMTAPR_R          (*((volatile uint32_t *)(GPWTM2_BASE +GPTM_GPTMTAPR_OFFSET)))


//--------
#define GPWTM2_GPTMTAPR_R_TAPSR_MASK      (0x000000FF)
#define GPWTM2_GPTMTAPR_R_TAPSR_BIT       (0)

#define GPWTM2_GPTMTAPR_TAPSR_MASK        (0x000000FF)
//--------

//--------
#define GPWTM2_GPTMTAPR_R_TAPSRH_MASK      (0x0000FF00)
#define GPWTM2_GPTMTAPR_R_TAPSRH_BIT       (8)

#define GPWTM2_GPTMTAPR_TAPSRH_MASK        (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.15 GPTMTBPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMTBPR            (((GPTMTBPR_TypeDef*)(GPWTM2_BASE + GPTM_GPTMTBPR_OFFSET )))
#define GPWTM2_GPTMTBPR_R          (*((volatile uint32_t *)(GPWTM2_BASE +GPTM_GPTMTBPR_OFFSET)))


//--------
#define GPWTM2_GPTMTBPR_R_TBPSR_MASK      (0x000000FF)
#define GPWTM2_GPTMTBPR_R_TBPSR_BIT       (0)

#define GPWTM2_GPTMTBPR_TBPSR_MASK        (0x000000FF)
//--------


//--------
#define GPWTM2_GPTMTBPR_R_TBPSRH_MASK      (0x0000FF00)
#define GPWTM2_GPTMTBPR_R_TBPSRH_BIT       (8)

#define GPWTM2_GPTMTBPR_TBPSRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.16 GPTMTAPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMTAPMR            (((GPTMTAPMR_TypeDef*)(GPWTM2_BASE + GPTM_GPTMTAPMR_OFFSET )))
#define GPWTM2_GPTMTAPMR_R          (*((volatile uint32_t *)(GPWTM2_BASE +GPTM_GPTMTAPMR_OFFSET)))


//--------
#define GPWTM2_GPTMTAPMR_R_TAPSMR_MASK      (0x000000FF)
#define GPWTM2_GPTMTAPMR_R_TAPSMR_BIT       (0)

#define GPWTM2_GPTMTAMPR_TAPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPWTM2_GPTMTAPMR_R_TAPSMRH_MASK      (0x0000FF00)
#define GPWTM2_GPTMTAPMR_R_TAPSMRH_BIT       (8)

#define GPWTM2_GPTMTAPMR_TAPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.17 GPTMTBPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMTBPMR            (((GPTMTBPMR_TypeDef*)(GPWTM2_BASE + GPTM_GPTMTBPMR_OFFSET )))
#define GPWTM2_GPTMTBPMR_R          (*((volatile uint32_t *)(GPWTM2_BASE +GPTM_GPTMTBPMR_OFFSET)))

//--------
#define GPWTM2_GPTMTBPMR_R_TBPSMR_MASK      (0x000000FF)
#define GPWTM2_GPTMTBPMR_R_TBPSMR_BIT       (0)

#define GPWTM2_GPTMTBMPR_TBPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPWTM2_GPTMTBPMR_R_TBPSMRH_MASK      (0x0000FF00)
#define GPWTM2_GPTMTBPMR_R_TBPSMRH_BIT       (8)

#define GPWTM2_GPTMTBPMR_TBPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.18 GPTMTAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMTAR            (((GPTMTAR_TypeDef*)(GPWTM2_BASE + GPTM_GPTMTAR_OFFSET )))
#define GPWTM2_GPTMTAR_R          (*((volatile const  int32_t *)(GPWTM2_BASE +GPTM_GPTMTAR_OFFSET)))


//--------
#define GPWTM2_GPTMTAR_R_TAR_MASK      (0xFFFFFFFF)
#define GPWTM2_GPTMTAR_R_TAR_BIT       (0)

#define GPWTM2_GPTMTAR_TAR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.19 GPTMTBR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMTBR            (((GPTMTBR_TypeDef*)(GPWTM2_BASE + GPTM_GPTMTBR_OFFSET )))
#define GPWTM2_GPTMTBR_R          (*((volatile const uint32_t *)(GPWTM2_BASE +GPTM_GPTMTBR_OFFSET)))


//--------
#define GPWTM2_GPTMTBR_R_TBR_MASK      (0xFFFFFFFF)
#define GPWTM2_GPTMTBR_R_TBR_BIT       (0)

#define GPWTM2_GPTMTBR_TBR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.20 GPTMTAV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMTAV            (((GPTMTAV_TypeDef*)(GPWTM2_BASE + GPTM_GPTMTAV_OFFSET )))
#define GPWTM2_GPTMTAV_R          (*((volatile uint32_t *)(GPWTM2_BASE +GPTM_GPTMTAV_OFFSET)))

//--------
#define GPWTM2_GPTMTAV_R_TAV_MASK      (0xFFFFFFFF)
#define GPWTM2_GPTMTAV_R_TAV_BIT       (0)

#define GPWTM2_GPTMTAV_TAV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.21 GPTMTBV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMTBV            (((GPTMTBV_TypeDef*)(GPWTM2_BASE + GPTM_GPTMTBV_OFFSET )))
#define GPWTM2_GPTMTBV_R          (*((volatile uint32_t *)(GPWTM2_BASE +GPTM_GPTMTBV_OFFSET)))


//--------
#define GPWTM2_GPTMTBV_R_TBV_MASK      (0xFFFFFFFF)
#define GPWTM2_GPTMTBV_R_TBV_BIT       (0)

#define GPWTM2_GPTMTBV_TBV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.22 GPTMRTCPD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMRTCPD            (((GPTMRTCPD_TypeDef*)(GPWTM2_BASE + GPTM_GPTMRTCPD_OFFSET )))
#define GPWTM2_GPTMRTCPD_R          (*((volatile const uint32_t *)(GPWTM2_BASE +GPTM_GPTMRTCPD_OFFSET)))


//--------
#define GPWTM2_GPTMRTCPD_R_RTCPD_MASK      (0x0000FFFF)
#define GPWTM2_GPTMRTCPD_R_RTCPD_BIT       (0)
#define GPWTM2_GPTMRTCPD_R_RTCPD_DEFAULT   (0x00007FFF)

#define GPWTM2_GPTMRTCPD_RTCPD_MASK        (0x0000FFFF)
#define GPWTM2_GPTMRTCPD_RTCPD_DEFAULT     (0x00007FFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.23 GPTMTAPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPWTM2_GPTMTAPS            (((GPTMTAPS_TypeDef*)(GPWTM2_BASE + GPTM_GPTMTAPS_OFFSET )))
#define GPWTM2_GPTMTAPS_R          (*((volatile const uint32_t *)(GPWTM2_BASE +GPTM_GPTMTAPS_OFFSET)))

//--------
#define GPWTM2_GPTMTAPS_R_PSS_MASK      (0x0000FFFF)
#define GPWTM2_GPTMTAPS_R_PSS_BIT       (0)

#define GPWTM2_GPTMTAPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.24 GPTMTBPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMTBPS            (((GPTMTBPS_TypeDef*)(GPWTM2_BASE + GPTM_GPTMTBPS_OFFSET )))
#define GPWTM2_GPTMTBPS_R          (*((volatile const uint32_t *)(GPWTM2_BASE +GPTM_GPTMTBPS_OFFSET)))

//--------
#define GPWTM2_GPTMTBPS_R_PSS_MASK      (0x0000FFFF)
#define GPWTM2_GPTMTBPS_R_PSS_BIT       (0)

#define GPWTM2_GPTMTBPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.25 GPTMTAPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define GPWTM2_GPTMTAPV            (((GPTMTAPV_TypeDef*)(GPWTM2_BASE + GPTM_GPTMTAPV_OFFSET )))
#define GPWTM2_GPTMTAPV_R          (*((volatile const uint32_t *)(GPWTM2_BASE +GPTM_GPTMTAPV_OFFSET)))

//--------
#define GPWTM2_GPTMTAPV_R_PSV_MASK      (0x0000FFFF)
#define GPWTM2_GPTMTAPV_R_PSV_BIT       (0)

#define GPWTM2_GPTMTAPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.26 GPTMTBPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPWTM2_GPTMTBPV            (((GPTMTBPV_TypeDef*)(GPWTM2_BASE + GPTM_GPTMTBPV_OFFSET )))
#define GPWTM2_GPTMTBPV_R          (*((volatile const uint32_t *)(GPWTM2_BASE +GPTM_GPTMTBPV_OFFSET)))

//--------
#define GPWTM2_GPTMTBPV_R_PSV_MASK      (0x0000FFFF)
#define GPWTM2_GPTMTBPV_R_PSV_BIT       (0)

#define GPWTM2_GPTMTBPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.27 GPTMPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM2_GPTMPP            (((GPTMPP_TypeDef*)(GPWTM2_BASE + GPTM_GPTMPP_OFFSET )))
#define GPWTM2_GPTMPP_R          (*((volatile const uint32_t *)(GPWTM2_BASE +GPTM_GPTMPP_OFFSET)))

#define GPWTM2_GPTMPP_SIZE        (0x0000000F)

//--------
#define GPWTM2_GPTMPP_R_SIZE_MASK      (0x0000000F)
#define GPWTM2_GPTMPP_R_SIZE_BIT       (0)
#define GPWTM2_GPTMPP_R_SIZE_16b       (0x00000000)
#define GPWTM2_GPTMPP_R_SIZE_32b       (0x00000001)

#define GPWTM2_GPTMPP_SIZE_MASK        (0x0000000F)
#define GPWTM2_GPTMPP_SIZE_16b         (0x00000000)
#define GPWTM2_GPTMPP_SIZE_32b         (0x00000001)
//--------


// ToDO GPWTM3
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 GPWTM3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.1 GPTMCFG ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMCFG            (((GPTMCFG_TypeDef*)(GPWTM3_BASE + GPTM_GPTMCFG_OFFSET )))
#define GPWTM3_GPTMCFG_R          (*((volatile uint32_t *)(GPWTM3_BASE +GPTM_GPTMCFG_OFFSET)))


//--------
#define GPWTM3_GPTMCFG_R_GPTMCFG_MASK      (0x00000007)
#define GPWTM3_GPTMCFG_R_GPTMCFG_BIT       (0)
#define GPWTM3_GPTMCFG_R_GPTMCFG_BOTH    (0x00000000)
#define GPWTM3_GPTMCFG_R_GPTMCFG_RTC       (0x00000001)
#define GPWTM3_GPTMCFG_R_GPTMCFG_SINGLE      (0x00000004)

#define GPWTM3_GPTMCFG_GPTMCFG_MASK        (0x00000007)
#define GPWTM3_GPTMCFG_GPTMCFG_BOTH      (0x00000000)
#define GPWTM3_GPTMCFG_GPTMCFG_RTC         (0x00000001)
#define GPWTM3_GPTMCFG_GPTMCFG_SINGLE        (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.2 GPTMTAMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMTAMR            (((GPTMTAMR_TypeDef*)(GPWTM3_BASE + GPTM_GPTMTAMR_OFFSET )))
#define GPWTM3_GPTMTAMR_R          (*((volatile uint32_t *)(GPWTM3_BASE +GPTM_GPTMTAMR_OFFSET)))


//--------
#define GPWTM3_GPTMTAMR_R_TAMR_MASK      (0x00000003)
#define GPWTM3_GPTMTAMR_R_TAMR_BIT       (0)
#define GPWTM3_GPTMTAMR_R_TAMR_ONESHOT   (0x00000001)
#define GPWTM3_GPTMTAMR_R_TAMR_PERIOD    (0x00000002)
#define GPWTM3_GPTMTAMR_R_TAMR_CAPTURE   (0x00000003)

#define GPWTM3_GPTMTAMR_TAMR_MASK        (0x00000003)
#define GPWTM3_GPTMTAMR_TAMR_ONESHOT     (0x00000001)
#define GPWTM3_GPTMTAMR_TAMR_PERIOD      (0x00000002)
#define GPWTM3_GPTMTAMR_TAMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPWTM3_GPTMTAMR_R_TACMR_MASK      (0x00000004)
#define GPWTM3_GPTMTAMR_R_TACMR_BIT       (2)
#define GPWTM3_GPTMTAMR_R_TACMR_EDGECOUNT (0x00000000)
#define GPWTM3_GPTMTAMR_R_TACMR_EDGETIME  (0x00000004)

#define GPWTM3_GPTMTAMR_TACMR_MASK        (0x00000001)
#define GPWTM3_GPTMTAMR_TACMR_EDGECOUNT   (0x00000000)
#define GPWTM3_GPTMTAMR_TACMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPWTM3_GPTMTAMR_R_TAAMS_MASK      (0x00000008)
#define GPWTM3_GPTMTAMR_R_TAAMS_BIT       (3)
#define GPWTM3_GPTMTAMR_R_TAAMS_CAPCOMP   (0x00000000)
#define GPWTM3_GPTMTAMR_R_TAAMS_PWM       (0x00000008)

#define GPWTM3_GPTMTAMR_TAAMS_MASK        (0x00000001)
#define GPWTM3_GPTMTAMR_TAAMS_CAPCOMP     (0x00000000)
#define GPWTM3_GPTMTAMR_TAAMS_PWM         (0x00000001)
//--------

//--------
#define GPWTM3_GPTMTAMR_R_TACDIR_MASK      (0x00000010)
#define GPWTM3_GPTMTAMR_R_TACDIR_BIT       (4)
#define GPWTM3_GPTMTAMR_R_TACDIR_DOWN      (0x00000000)
#define GPWTM3_GPTMTAMR_R_TACDIR_UP        (0x00000010)

#define GPWTM3_GPTMTAMR_TACDIR_MASK        (0x00000001)
#define GPWTM3_GPTMTAMR_TACDIR_DOWN        (0x00000000)
#define GPWTM3_GPTMTAMR_TACDIR_UP          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMTAMR_R_TAMIE_MASK      (0x00000020)
#define GPWTM3_GPTMTAMR_R_TAMIE_BIT       (5)
#define GPWTM3_GPTMTAMR_R_TAMIE_DIS       (0x00000000)
#define GPWTM3_GPTMTAMR_R_TAMIE_EN        (0x00000020)

#define GPWTM3_GPTMTAMR_TAMIE_MASK        (0x00000001)
#define GPWTM3_GPTMTAMR_TAMIE_DIS         (0x00000000)
#define GPWTM3_GPTMTAMR_TAMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMTAMR_R_TAWOT_MASK      (0x00000040)
#define GPWTM3_GPTMTAMR_R_TAWOT_BIT       (6)
#define GPWTM3_GPTMTAMR_R_TAWOT_INSTANT   (0x00000000)
#define GPWTM3_GPTMTAMR_R_TAWOT_TRIGGER   (0x00000040)

#define GPWTM3_GPTMTAMR_TAWOT_MASK        (0x00000001)
#define GPWTM3_GPTMTAMR_TAWOT_INSTANT     (0x00000000)
#define GPWTM3_GPTMTAMR_TAWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPWTM3_GPTMTAMR_R_TASNAPS_MASK      (0x00000080)
#define GPWTM3_GPTMTAMR_R_TASNAPS_BIT       (7)
#define GPWTM3_GPTMTAMR_R_TASNAPS_DIS       (0x00000000)
#define GPWTM3_GPTMTAMR_R_TASNAPS_EN        (0x00000080)

#define GPWTM3_GPTMTAMR_TASNAPS_MASK        (0x00000001)
#define GPWTM3_GPTMTAMR_TASNAPS_DIS         (0x00000000)
#define GPWTM3_GPTMTAMR_TASNAPS_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMTAMR_R_TAILD_MASK      (0x00000100)
#define GPWTM3_GPTMTAMR_R_TAILD_BIT       (8)
#define GPWTM3_GPTMTAMR_R_TAILD_NEXT      (0x00000000)
#define GPWTM3_GPTMTAMR_R_TAILD_TIMEOUT   (0x00000100)

#define GPWTM3_GPTMTAMR_TAILD_MASK        (0x00000001)
#define GPWTM3_GPTMTAMR_TAILD_NEXT        (0x00000000)
#define GPWTM3_GPTMTAMR_TAILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM3_GPTMTAMR_R_TAPWMIE_MASK      (0x00000200)
#define GPWTM3_GPTMTAMR_R_TAPWMIE_BIT       (9)
#define GPWTM3_GPTMTAMR_R_TAPWMIE_DIS       (0x00000000)
#define GPWTM3_GPTMTAMR_R_TAPWMIE_EN        (0x00000200)

#define GPWTM3_GPTMTAMR_TAPWMIE_MASK        (0x00000001)
#define GPWTM3_GPTMTAMR_TAPWMIE_DIS         (0x00000000)
#define GPWTM3_GPTMTAMR_TAPWMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMTAMR_R_TAMRSU_MASK      (0x00000400)
#define GPWTM3_GPTMTAMR_R_TAMRSU_BIT       (10)
#define GPWTM3_GPTMTAMR_R_TAMRSU_NEXT      (0x00000000)
#define GPWTM3_GPTMTAMR_R_TAMRSU_TIMEOUT   (0x00000400)

#define GPWTM3_GPTMTAMR_TAMRSU_MASK        (0x00000001)
#define GPWTM3_GPTMTAMR_TAMRSU_NEXT        (0x00000000)
#define GPWTM3_GPTMTAMR_TAMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM3_GPTMTAMR_R_TAPLO_MASK      (0x00000800)
#define GPWTM3_GPTMTAMR_R_TAPLO_BIT       (11)
#define GPWTM3_GPTMTAMR_R_TAPLO_LOW       (0x00000000)
#define GPWTM3_GPTMTAMR_R_TAPLO_HIGH      (0x00000800)

#define GPWTM3_GPTMTAMR_TAPLO_MASK        (0x00000001)
#define GPWTM3_GPTMTAMR_TAPLO_LOW         (0x00000000)
#define GPWTM3_GPTMTAMR_TAPLO_HIGH        (0x00000001)
//--------

#define GPWTM3_GPTMTAMR_TACMR_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(2*4))))
#define GPWTM3_GPTMTAMR_TAAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(3*4))))
#define GPWTM3_GPTMTAMR_TACDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(4*4))))
#define GPWTM3_GPTMTAMR_TAMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(5*4))))
#define GPWTM3_GPTMTAMR_TAWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(6*4))))
#define GPWTM3_GPTMTAMR_TASNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(7*4))))
#define GPWTM3_GPTMTAMR_TAILD_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(8*4))))
#define GPWTM3_GPTMTAMR_TAPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(9*4))))
#define GPWTM3_GPTMTAMR_TAMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(10*4))))
#define GPWTM3_GPTMTAMR_TAPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.3 GPTMTBMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMTBMR            (((GPTMTBMR_TypeDef*)(GPWTM3_BASE + GPTM_GPTMTBMR_OFFSET )))
#define GPWTM3_GPTMTBMR_R          (*((volatile uint32_t *)(GPWTM3_BASE +GPTM_GPTMTBMR_OFFSET)))


//--------
#define GPWTM3_GPTMTBMR_R_TBMR_MASK      (0x00000003)
#define GPWTM3_GPTMTBMR_R_TBMR_BIT       (0)
#define GPWTM3_GPTMTBMR_R_TBMR_ONESHOT   (0x00000001)
#define GPWTM3_GPTMTBMR_R_TBMR_PERIOD    (0x00000002)
#define GPWTM3_GPTMTBMR_R_TBMR_CAPTURE   (0x00000003)

#define GPWTM3_GPTMTBMR_TBMR_MASK        (0x00000003)
#define GPWTM3_GPTMTBMR_TBMR_ONESHOT     (0x00000001)
#define GPWTM3_GPTMTBMR_TBMR_PERIOD      (0x00000002)
#define GPWTM3_GPTMTBMR_TBMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPWTM3_GPTMTBMR_R_TBCMR_MASK      (0x00000004)
#define GPWTM3_GPTMTBMR_R_TBCMR_BIT       (2)
#define GPWTM3_GPTMTBMR_R_TBCMR_EDGECOUNT (0x00000000)
#define GPWTM3_GPTMTBMR_R_TBCMR_EDGETIME  (0x00000004)

#define GPWTM3_GPTMTBMR_TBCMR_MASK        (0x00000001)
#define GPWTM3_GPTMTBMR_TBCMR_EDGECOUNT   (0x00000000)
#define GPWTM3_GPTMTBMR_TBCMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPWTM3_GPTMTBMR_R_TBAMS_MASK      (0x00000008)
#define GPWTM3_GPTMTBMR_R_TBAMS_BIT       (3)
#define GPWTM3_GPTMTBMR_R_TBAMS_CAPCOMP   (0x00000000)
#define GPWTM3_GPTMTBMR_R_TBAMS_PWM       (0x00000008)

#define GPWTM3_GPTMTBMR_TBAMS_MASK        (0x00000001)
#define GPWTM3_GPTMTBMR_TBAMS_CAPCOMP     (0x00000000)
#define GPWTM3_GPTMTBMR_TBAMS_PWM         (0x00000001)
//--------

//--------
#define GPWTM3_GPTMTBMR_R_TBCDIR_MASK      (0x00000010)
#define GPWTM3_GPTMTBMR_R_TBCDIR_BIT       (4)
#define GPWTM3_GPTMTBMR_R_TBCDIR_DOWN      (0x00000000)
#define GPWTM3_GPTMTBMR_R_TBCDIR_UP        (0x00000010)

#define GPWTM3_GPTMTBMR_TBCDIR_MASK        (0x00000001)
#define GPWTM3_GPTMTBMR_TBCDIR_DOWN        (0x00000000)
#define GPWTM3_GPTMTBMR_TBCDIR_UP          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMTBMR_R_TBMIE_MASK      (0x00000020)
#define GPWTM3_GPTMTBMR_R_TBMIE_BIT       (5)
#define GPWTM3_GPTMTBMR_R_TBMIE_DIS       (0x00000000)
#define GPWTM3_GPTMTBMR_R_TBMIE_EN        (0x00000020)

#define GPWTM3_GPTMTBMR_TBMIE_MASK        (0x00000001)
#define GPWTM3_GPTMTBMR_TBMIE_DIS         (0x00000000)
#define GPWTM3_GPTMTBMR_TBMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMTBMR_R_TBWOT_MASK      (0x00000040)
#define GPWTM3_GPTMTBMR_R_TBWOT_BIT       (6)
#define GPWTM3_GPTMTBMR_R_TBWOT_INSTANT   (0x00000000)
#define GPWTM3_GPTMTBMR_R_TBWOT_TRIGGER   (0x00000040)

#define GPWTM3_GPTMTBMR_TBWOT_MASK        (0x00000001)
#define GPWTM3_GPTMTBMR_TBWOT_INSTANT     (0x00000000)
#define GPWTM3_GPTMTBMR_TBWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPWTM3_GPTMTBMR_R_TBSNAPS_MASK      (0x00000080)
#define GPWTM3_GPTMTBMR_R_TBSNAPS_BIT       (7)
#define GPWTM3_GPTMTBMR_R_TBSNAPS_DIS       (0x00000000)
#define GPWTM3_GPTMTBMR_R_TBSNAPS_EN        (0x00000080)

#define GPWTM3_GPTMTBMR_TBSNAPS_MASK        (0x00000001)
#define GPWTM3_GPTMTBMR_TBSNAPS_DIS         (0x00000000)
#define GPWTM3_GPTMTBMR_TBSNAPS_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMTBMR_R_TBILD_MASK      (0x00000100)
#define GPWTM3_GPTMTBMR_R_TBILD_BIT       (8)
#define GPWTM3_GPTMTBMR_R_TBILD_NEXT      (0x00000000)
#define GPWTM3_GPTMTBMR_R_TBILD_TIMEOUT   (0x00000100)

#define GPWTM3_GPTMTBMR_TBILD_MASK        (0x00000001)
#define GPWTM3_GPTMTBMR_TBILD_NEXT        (0x00000000)
#define GPWTM3_GPTMTBMR_TBILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM3_GPTMTBMR_R_TBPWMIE_MASK      (0x00000200)
#define GPWTM3_GPTMTBMR_R_TBPWMIE_BIT       (9)
#define GPWTM3_GPTMTBMR_R_TBPWMIE_DIS       (0x00000000)
#define GPWTM3_GPTMTBMR_R_TBPWMIE_EN        (0x00000200)

#define GPWTM3_GPTMTBMR_TBPWMIE_MASK        (0x00000001)
#define GPWTM3_GPTMTBMR_TBPWMIE_DIS         (0x00000000)
#define GPWTM3_GPTMTBMR_TBPWMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMTBMR_R_TBMRSU_MASK      (0x00000400)
#define GPWTM3_GPTMTBMR_R_TBMRSU_BIT       (10)
#define GPWTM3_GPTMTBMR_R_TBMRSU_NEXT      (0x00000000)
#define GPWTM3_GPTMTBMR_R_TBMRSU_TIMEOUT   (0x00000400)

#define GPWTM3_GPTMTBMR_TBMRSU_MASK        (0x00000001)
#define GPWTM3_GPTMTBMR_TBMRSU_NEXT        (0x00000000)
#define GPWTM3_GPTMTBMR_TBMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM3_GPTMTBMR_R_TBPLO_MASK      (0x00000800)
#define GPWTM3_GPTMTBMR_R_TBPLO_BIT       (11)
#define GPWTM3_GPTMTBMR_R_TBPLO_LOW       (0x00000000)
#define GPWTM3_GPTMTBMR_R_TBPLO_HIGH      (0x00000800)

#define GPWTM3_GPTMTBMR_TBPLO_MASK        (0x00000001)
#define GPWTM3_GPTMTBMR_TBPLO_LOW         (0x00000000)
#define GPWTM3_GPTMTBMR_TBPLO_HIGH        (0x00000001)
//--------

#define GPWTM3_GPTMTBMR_TBCMR_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(2*4))))
#define GPWTM3_GPTMTBMR_TBAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(3*4))))
#define GPWTM3_GPTMTBMR_TBCDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(4*4))))
#define GPWTM3_GPTMTBMR_TBMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(5*4))))
#define GPWTM3_GPTMTBMR_TBWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(6*4))))
#define GPWTM3_GPTMTBMR_TBSNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(7*4))))
#define GPWTM3_GPTMTBMR_TBILD_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(8*4))))
#define GPWTM3_GPTMTBMR_TBPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(9*4))))
#define GPWTM3_GPTMTBMR_TBMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(10*4))))
#define GPWTM3_GPTMTBMR_TBPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.4 GPTMCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMCTL            (((GPTMCTL_TypeDef*)(GPWTM3_BASE + GPTM_GPTMCTL_OFFSET )))
#define GPWTM3_GPTMCTL_R          (*((volatile uint32_t *)(GPWTM3_BASE +GPTM_GPTMCTL_OFFSET)))


//--------
#define GPWTM3_GPTMCTL_R_TAEN_MASK      (0x00000001)
#define GPWTM3_GPTMCTL_R_TAEN_BIT       (0)
#define GPWTM3_GPTMCTL_R_TAEN_DIS       (0x00000000)
#define GPWTM3_GPTMCTL_R_TAEN_EN        (0x00000001)

#define GPWTM3_GPTMCTL_TAEN_MASK        (0x00000001)
#define GPWTM3_GPTMCTL_TAEN_DIS         (0x00000000)
#define GPWTM3_GPTMCTL_TAEN_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMCTL_R_TASTALL_MASK      (0x00000002)
#define GPWTM3_GPTMCTL_R_TASTALL_BIT       (1)
#define GPWTM3_GPTMCTL_R_TASTALL_CONTINUE  (0x00000000)
#define GPWTM3_GPTMCTL_R_TASTALL_FREEZE    (0x00000002)

#define GPWTM3_GPTMCTL_TASTALL_MASK        (0x00000001)
#define GPWTM3_GPTMCTL_TASTALL_CONTINUE    (0x00000000)
#define GPWTM3_GPTMCTL_TASTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMCTL_R_TAEVENT_MASK      (0x0000000C)
#define GPWTM3_GPTMCTL_R_TAEVENT_BIT       (2)
#define GPWTM3_GPTMCTL_R_TAEVENT_POS       (0x00000000)
#define GPWTM3_GPTMCTL_R_TAEVENT_NEG       (0x00000004)
#define GPWTM3_GPTMCTL_R_TAEVENT_BOTH      (0x0000000C)

#define GPWTM3_GPTMCTL_TAEVENT_MASK        (0x00000003)
#define GPWTM3_GPTMCTL_TAEVENT_NEG         (0x00000000)
#define GPWTM3_GPTMCTL_TAEVENT_POS         (0x00000001)
#define GPWTM3_GPTMCTL_TAEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPWTM3_GPTMCTL_R_RTCEN_MASK      (0x00000010)
#define GPWTM3_GPTMCTL_R_RTCEN_BIT       (4)
#define GPWTM3_GPTMCTL_R_RTCEN_CONTINUE  (0x00000000)
#define GPWTM3_GPTMCTL_R_RTCEN_FREEZE    (0x00000010)

#define GPWTM3_GPTMCTL_RTCEN_MASK        (0x00000001)
#define GPWTM3_GPTMCTL_RTCEN_CONTINUE    (0x00000000)
#define GPWTM3_GPTMCTL_RTCEN_FREEZE      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMCTL_R_TAOTE_MASK      (0x00000020)
#define GPWTM3_GPTMCTL_R_TAOTE_BIT       (5)
#define GPWTM3_GPTMCTL_R_TAOTE_DIS       (0x00000000)
#define GPWTM3_GPTMCTL_R_TAOTE_EN        (0x00000020)

#define GPWTM3_GPTMCTL_TAOTE_MASK        (0x00000001)
#define GPWTM3_GPTMCTL_TAOTE_DIS         (0x00000000)
#define GPWTM3_GPTMCTL_TAOTE_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMCTL_R_TAPWML_MASK      (0x00000040)
#define GPWTM3_GPTMCTL_R_TAPWML_BIT       (6)
#define GPWTM3_GPTMCTL_R_TAPWML_NA        (0x00000000)
#define GPWTM3_GPTMCTL_R_TAPWML_INV       (0x00000040)

#define GPWTM3_GPTMCTL_TAPWML_MASK        (0x00000001)
#define GPWTM3_GPTMCTL_TAPWML_NA          (0x00000000)
#define GPWTM3_GPTMCTL_TAPWML_INV         (0x00000001)
//--------



//--------
#define GPWTM3_GPTMCTL_R_TBEN_MASK      (0x00000100)
#define GPWTM3_GPTMCTL_R_TBEN_BIT       (8)
#define GPWTM3_GPTMCTL_R_TBEN_DIS       (0x00000000)
#define GPWTM3_GPTMCTL_R_TBEN_EN        (0x00000100)

#define GPWTM3_GPTMCTL_TBEN_MASK        (0x00000001)
#define GPWTM3_GPTMCTL_TBEN_DIS         (0x00000000)
#define GPWTM3_GPTMCTL_TBEN_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMCTL_R_TBSTALL_MASK      (0x00000200)
#define GPWTM3_GPTMCTL_R_TBSTALL_BIT       (9)
#define GPWTM3_GPTMCTL_R_TBSTALL_CONTINUE  (0x00000000)
#define GPWTM3_GPTMCTL_R_TBSTALL_FREEZE    (0x00000200)

#define GPWTM3_GPTMCTL_TBSTALL_MASK        (0x00000001)
#define GPWTM3_GPTMCTL_TBSTALL_CONTINUE    (0x00000000)
#define GPWTM3_GPTMCTL_TBSTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMCTL_R_TBEVENT_MASK      (0x00000C00)
#define GPWTM3_GPTMCTL_R_TBEVENT_BIT       (10)
#define GPWTM3_GPTMCTL_R_TBEVENT_POS       (0x00000000)
#define GPWTM3_GPTMCTL_R_TBEVENT_NEG       (0x00000400)
#define GPWTM3_GPTMCTL_R_TBEVENT_BOTH      (0x00000C00)

#define GPWTM3_GPTMCTL_TBEVENT_MASK        (0x00000003)
#define GPWTM3_GPTMCTL_TBEVENT_NEG         (0x00000000)
#define GPWTM3_GPTMCTL_TBEVENT_POS         (0x00000001)
#define GPWTM3_GPTMCTL_TBEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPWTM3_GPTMCTL_R_TBOTE_MASK      (0x00002000)
#define GPWTM3_GPTMCTL_R_TBOTE_BIT       (13)
#define GPWTM3_GPTMCTL_R_TBOTE_DIS       (0x00000000)
#define GPWTM3_GPTMCTL_R_TBOTE_EN        (0x00002000)

#define GPWTM3_GPTMCTL_TBOTE_MASK        (0x00000001)
#define GPWTM3_GPTMCTL_TBOTE_DIS         (0x00000000)
#define GPWTM3_GPTMCTL_TBOTE_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMCTL_R_TBPWML_MASK      (0x00004000)
#define GPWTM3_GPTMCTL_R_TBPWML_BIT       (14)
#define GPWTM3_GPTMCTL_R_TBPWML_NA        (0x00000000)
#define GPWTM3_GPTMCTL_R_TBPWML_INV       (0x00004000)

#define GPWTM3_GPTMCTL_TBPWML_MASK        (0x00000001)
#define GPWTM3_GPTMCTL_TBPWML_NA          (0x00000000)
#define GPWTM3_GPTMCTL_TBPWML_INV         (0x00000001)
//--------

#define GPWTM3_GPTMCTL_TAEN_BB      (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(0*4))))
#define GPWTM3_GPTMCTL_TASTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(1*4))))
#define GPWTM3_GPTMCTL_RTCEN_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(4*4))))
#define GPWTM3_GPTMCTL_TAOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(5*4))))
#define GPWTM3_GPTMCTL_TAPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTMGPTMCTL_OFFSET)*32)+(6*4))))
#define GPWTM3_GPTMCTL_TBEN_BB      (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(8*4))))
#define GPWTM3_GPTMCTL_TBSTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(9*4))))
#define GPWTM3_GPTMCTL_TBOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(13*4))))
#define GPWTM3_GPTMCTL_TBPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(14*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.5 GPTMSYNC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMSYNC            (((GPTMSYNC_TypeDef*)(GPWTM3_BASE + GPTM_GPTMSYNC_OFFSET )))
#define GPWTM3_GPTMSYNC_R          (*((volatile uint32_t *)(GPWTM3_BASE +GPTM_GPTMSYNC_OFFSET)))

//--------
#define GPWTM3_GPTMSYNC_R_SYNCT0_MASK      (0x00000003)
#define GPWTM3_GPTMSYNC_R_SYNCT0_BIT       (0)
#define GPWTM3_GPTMSYNC_R_SYNCT0_NA        (0x00000000)
#define GPWTM3_GPTMSYNC_R_SYNCT0_TA        (0x00000001)
#define GPWTM3_GPTMSYNC_R_SYNCT0_TB        (0x00000002)
#define GPWTM3_GPTMSYNC_R_SYNCT0_BOTH      (0x00000003)

#define GPWTM3_GPTMSYNC_SYNCT0_MASK        (0x00000003)
#define GPWTM3_GPTMSYNC_SYNCT0_NA          (0x00000000)
#define GPWTM3_GPTMSYNC_SYNCT0_TA          (0x00000001)
#define GPWTM3_GPTMSYNC_SYNCT0_TB          (0x00000002)
#define GPWTM3_GPTMSYNC_SYNCT0_BOTH        (0x00000003)
//--------

//--------
#define GPWTM3_GPTMSYNC_R_SYNCT1_MASK      (0x0000000C)
#define GPWTM3_GPTMSYNC_R_SYNCT1_BIT       (2)
#define GPWTM3_GPTMSYNC_R_SYNCT1_NA        (0x00000000)
#define GPWTM3_GPTMSYNC_R_SYNCT1_TA        (0x00000004)
#define GPWTM3_GPTMSYNC_R_SYNCT1_TB        (0x00000008)
#define GPWTM3_GPTMSYNC_R_SYNCT1_BOTH      (0x0000000C)

#define GPWTM3_GPTMSYNC_SYNCT1_MASK        (0x00000003)
#define GPWTM3_GPTMSYNC_SYNCT1_NA          (0x00000000)
#define GPWTM3_GPTMSYNC_SYNCT1_TA          (0x00000001)
#define GPWTM3_GPTMSYNC_SYNCT1_TB          (0x00000002)
#define GPWTM3_GPTMSYNC_SYNCT1_BOTH        (0x00000003)
//--------

//--------
#define GPWTM3_GPTMSYNC_R_SYNCT2_MASK      (0x00000030)
#define GPWTM3_GPTMSYNC_R_SYNCT2_BIT       (4)
#define GPWTM3_GPTMSYNC_R_SYNCT2_NA        (0x00000000)
#define GPWTM3_GPTMSYNC_R_SYNCT2_TA        (0x00000010)
#define GPWTM3_GPTMSYNC_R_SYNCT2_TB        (0x00000020)
#define GPWTM3_GPTMSYNC_R_SYNCT2_BOTH      (0x00000030)

#define GPWTM3_GPTMSYNC_SYNCT2_MASK        (0x00000003)
#define GPWTM3_GPTMSYNC_SYNCT2_NA          (0x00000000)
#define GPWTM3_GPTMSYNC_SYNCT2_TA          (0x00000001)
#define GPWTM3_GPTMSYNC_SYNCT2_TB          (0x00000002)
#define GPWTM3_GPTMSYNC_SYNCT2_BOTH        (0x00000003)
//--------

//--------
#define GPWTM3_GPTMSYNC_R_SYNCT3_MASK      (0x000000C0)
#define GPWTM3_GPTMSYNC_R_SYNCT3_BIT       (6)
#define GPWTM3_GPTMSYNC_R_SYNCT3_NA        (0x00000000)
#define GPWTM3_GPTMSYNC_R_SYNCT3_TA        (0x00000040)
#define GPWTM3_GPTMSYNC_R_SYNCT3_TB        (0x00000080)
#define GPWTM3_GPTMSYNC_R_SYNCT3_BOTH      (0x000000C0)

#define GPWTM3_GPTMSYNC_SYNCT3_MASK        (0x00000003)
#define GPWTM3_GPTMSYNC_SYNCT3_NA          (0x00000000)
#define GPWTM3_GPTMSYNC_SYNCT3_TA          (0x00000001)
#define GPWTM3_GPTMSYNC_SYNCT3_TB          (0x00000002)
#define GPWTM3_GPTMSYNC_SYNCT3_BOTH        (0x00000003)
//--------

//--------
#define GPWTM3_GPTMSYNC_R_SYNCT4_MASK      (0x00000300)
#define GPWTM3_GPTMSYNC_R_SYNCT4_BIT       (8)
#define GPWTM3_GPTMSYNC_R_SYNCT4_NA        (0x00000000)
#define GPWTM3_GPTMSYNC_R_SYNCT4_TA        (0x00000100)
#define GPWTM3_GPTMSYNC_R_SYNCT4_TB        (0x00000200)
#define GPWTM3_GPTMSYNC_R_SYNCT4_BOTH      (0x00000300)

#define GPWTM3_GPTMSYNC_SYNCT4_MASK        (0x00000003)
#define GPWTM3_GPTMSYNC_SYNCT4_NA          (0x00000000)
#define GPWTM3_GPTMSYNC_SYNCT4_TA          (0x00000001)
#define GPWTM3_GPTMSYNC_SYNCT4_TB          (0x00000002)
#define GPWTM3_GPTMSYNC_SYNCT4_BOTH        (0x00000003)
//--------

//--------
#define GPWTM3_GPTMSYNC_R_SYNCT5_MASK      (0x00000C00)
#define GPWTM3_GPTMSYNC_R_SYNCT5_BIT       (10)
#define GPWTM3_GPTMSYNC_R_SYNCT5_NA        (0x00000000)
#define GPWTM3_GPTMSYNC_R_SYNCT5_TA        (0x00000400)
#define GPWTM3_GPTMSYNC_R_SYNCT5_TB        (0x00000800)
#define GPWTM3_GPTMSYNC_R_SYNCT5_BOTH      (0x00000C00)

#define GPWTM3_GPTMSYNC_SYNCT5_MASK        (0x00000003)
#define GPWTM3_GPTMSYNC_SYNCT5_NA          (0x00000000)
#define GPWTM3_GPTMSYNC_SYNCT5_TA          (0x00000001)
#define GPWTM3_GPTMSYNC_SYNCT5_TB          (0x00000002)
#define GPWTM3_GPTMSYNC_SYNCT5_BOTH        (0x00000003)
//--------

//--------
#define GPWTM3_GPTMSYNC_R_SYNCWT0_MASK      (0x00003000)
#define GPWTM3_GPTMSYNC_R_SYNCWT0_BIT       (12)
#define GPWTM3_GPTMSYNC_R_SYNCWT0_NA        (0x00000000)
#define GPWTM3_GPTMSYNC_R_SYNCWT0_TA        (0x00001000)
#define GPWTM3_GPTMSYNC_R_SYNCWT0_TB        (0x00002000)
#define GPWTM3_GPTMSYNC_R_SYNCWT0_BOTH      (0x00003000)

#define GPWTM3_GPTMSYNC_SYNCWT0_MASK        (0x00000003)
#define GPWTM3_GPTMSYNC_SYNCWT0_NA          (0x00000000)
#define GPWTM3_GPTMSYNC_SYNCWT0_TA          (0x00000001)
#define GPWTM3_GPTMSYNC_SYNCWT0_TB          (0x00000002)
#define GPWTM3_GPTMSYNC_SYNCWT0_BOTH        (0x00000003)
//--------

//--------
#define GPWTM3_GPTMSYNC_R_SYNCWT1_MASK      (0x0000C000)
#define GPWTM3_GPTMSYNC_R_SYNCWT1_BIT       (14)
#define GPWTM3_GPTMSYNC_R_SYNCWT1_NA        (0x00000000)
#define GPWTM3_GPTMSYNC_R_SYNCWT1_TA        (0x00004000)
#define GPWTM3_GPTMSYNC_R_SYNCWT1_TB        (0x00008000)
#define GPWTM3_GPTMSYNC_R_SYNCWT1_BOTH      (0x0000C000)

#define GPWTM3_GPTMSYNC_SYNCWT1_MASK        (0x00000003)
#define GPWTM3_GPTMSYNC_SYNCWT1_NA          (0x00000000)
#define GPWTM3_GPTMSYNC_SYNCWT1_TA          (0x00000001)
#define GPWTM3_GPTMSYNC_SYNCWT1_TB          (0x00000002)
#define GPWTM3_GPTMSYNC_SYNCWT1_BOTH        (0x00000003)
//--------

//--------
#define GPWTM3_GPTMSYNC_R_SYNCWT2_MASK      (0x00030000)
#define GPWTM3_GPTMSYNC_R_SYNCWT2_BIT       (16)
#define GPWTM3_GPTMSYNC_R_SYNCWT2_NA        (0x00000000)
#define GPWTM3_GPTMSYNC_R_SYNCWT2_TA        (0x00010000)
#define GPWTM3_GPTMSYNC_R_SYNCWT2_TB        (0x00020000)
#define GPWTM3_GPTMSYNC_R_SYNCWT2_BOTH      (0x00030000)

#define GPWTM3_GPTMSYNC_SYNCWT2_MASK        (0x00000003)
#define GPWTM3_GPTMSYNC_SYNCWT2_NA          (0x00000000)
#define GPWTM3_GPTMSYNC_SYNCWT2_TA          (0x00000001)
#define GPWTM3_GPTMSYNC_SYNCWT2_TB          (0x00000002)
#define GPWTM3_GPTMSYNC_SYNCWT2_BOTH        (0x00000003)
//--------

//--------
#define GPWTM3_GPTMSYNC_R_SYNCWT3_MASK      (0x000C0000)
#define GPWTM3_GPTMSYNC_R_SYNCWT3_BIT       (18)
#define GPWTM3_GPTMSYNC_R_SYNCWT3_NA        (0x00000000)
#define GPWTM3_GPTMSYNC_R_SYNCWT3_TA        (0x00040000)
#define GPWTM3_GPTMSYNC_R_SYNCWT3_TB        (0x00080000)
#define GPWTM3_GPTMSYNC_R_SYNCWT3_BOTH      (0x000C0000)

#define GPWTM3_GPTMSYNC_SYNCWT3_MASK        (0x00000003)
#define GPWTM3_GPTMSYNC_SYNCWT3_NA          (0x00000000)
#define GPWTM3_GPTMSYNC_SYNCWT3_TA          (0x00000001)
#define GPWTM3_GPTMSYNC_SYNCWT3_TB          (0x00000002)
#define GPWTM3_GPTMSYNC_SYNCWT3_BOTH        (0x00000003)
//--------

//--------
#define GPWTM3_GPTMSYNC_R_SYNCWT4_MASK      (0x0030000)
#define GPWTM3_GPTMSYNC_R_SYNCWT4_BIT       (20)
#define GPWTM3_GPTMSYNC_R_SYNCWT4_NA        (0x00000000)
#define GPWTM3_GPTMSYNC_R_SYNCWT4_TA        (0x00100000)
#define GPWTM3_GPTMSYNC_R_SYNCWT4_TB        (0x00200000)
#define GPWTM3_GPTMSYNC_R_SYNCWT4_BOTH      (0x00300000)

#define GPWTM3_GPTMSYNC_SYNCWT4_MASK        (0x00000003)
#define GPWTM3_GPTMSYNC_SYNCWT4_NA          (0x00000000)
#define GPWTM3_GPTMSYNC_SYNCWT4_TA          (0x00000001)
#define GPWTM3_GPTMSYNC_SYNCWT4_TB          (0x00000002)
#define GPWTM3_GPTMSYNC_SYNCWT4_BOTH        (0x00000003)
//--------

//--------
#define GPWTM3_GPTMSYNC_R_SYNCWT5_MASK      (0x00C00000)
#define GPWTM3_GPTMSYNC_R_SYNCWT5_BIT       (22)
#define GPWTM3_GPTMSYNC_R_SYNCWT5_NA        (0x00000000)
#define GPWTM3_GPTMSYNC_R_SYNCWT5_TA        (0x00400000)
#define GPWTM3_GPTMSYNC_R_SYNCWT5_TB        (0x00800000)
#define GPWTM3_GPTMSYNC_R_SYNCWT5_BOTH      (0x00C00000)

#define GPWTM3_GPTMSYNC_SYNCWT5_MASK        (0x00000003)
#define GPWTM3_GPTMSYNC_SYNCWT5_NA          (0x00000000)
#define GPWTM3_GPTMSYNC_SYNCWT5_TA          (0x00000001)
#define GPWTM3_GPTMSYNC_SYNCWT5_TB          (0x00000002)
#define GPWTM3_GPTMSYNC_SYNCWT5_BOTH        (0x00000003)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.6 GPTMIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMIMR            (((GPTMIMR_TypeDef*)(GPWTM3_BASE + GPTM_GPTMIMR_OFFSET )))
#define GPWTM3_GPTMIMR_R          (*((volatile  uint32_t *)(GPWTM3_BASE +GPTM_GPTMIMR_OFFSET)))

//--------
#define GPWTM3_GPTMIMR_R_TATOIM_MASK      (0x00000001)
#define GPWTM3_GPTMIMR_R_TATOIM_BIT       (0)
#define GPWTM3_GPTMIMR_R_TATOIM_DIS       (0x00000000)
#define GPWTM3_GPTMIMR_R_TATOIM_EN        (0x00000001)

#define GPWTM3_GPTMIMR_TATOIM_MASK        (0x00000001)
#define GPWTM3_GPTMIMR_TATOIM_DIS         (0x00000000)
#define GPWTM3_GPTMIMR_TATOIM_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMIMR_R_CAMIM_MASK      (0x00000002)
#define GPWTM3_GPTMIMR_R_CAMIM_BIT       (1)
#define GPWTM3_GPTMIMR_R_CAMIM_DIS       (0x00000000)
#define GPWTM3_GPTMIMR_R_CAMIM_EN        (0x00000002)

#define GPWTM3_GPTMIMR_CAMIM_MASK        (0x00000001)
#define GPWTM3_GPTMIMR_CAMIM_DIS         (0x00000000)
#define GPWTM3_GPTMIMR_CAMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMIMR_R_CAEIM_MASK      (0x00000004)
#define GPWTM3_GPTMIMR_R_CAEIM_BIT       (2)
#define GPWTM3_GPTMIMR_R_CAEIM_DIS       (0x00000000)
#define GPWTM3_GPTMIMR_R_CAEIM_EN        (0x00000004)

#define GPWTM3_GPTMIMR_CAEIM_MASK        (0x00000001)
#define GPWTM3_GPTMIMR_CAEIM_DIS         (0x00000000)
#define GPWTM3_GPTMIMR_CAEIM_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMIMR_R_RTCIM_MASK      (0x00000008)
#define GPWTM3_GPTMIMR_R_RTCIM_BIT       (3)
#define GPWTM3_GPTMIMR_R_RTCIM_DIS       (0x00000000)
#define GPWTM3_GPTMIMR_R_RTCIM_EN        (0x00000008)

#define GPWTM3_GPTMIMR_RTCIM_MASK        (0x00000001)
#define GPWTM3_GPTMIMR_RTCIM_DIS         (0x00000000)
#define GPWTM3_GPTMIMR_RTCIM_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMIMR_R_TAMIM_MASK      (0x00000010)
#define GPWTM3_GPTMIMR_R_TAMIM_BIT       (4)
#define GPWTM3_GPTMIMR_R_TAMIM_DIS       (0x00000000)
#define GPWTM3_GPTMIMR_R_TAMIM_EN        (0x00000010)

#define GPWTM3_GPTMIMR_TAMIM_MASK        (0x00000001)
#define GPWTM3_GPTMIMR_TAMIM_DIS         (0x00000000)
#define GPWTM3_GPTMIMR_TAMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMIMR_R_TBTOIM_MASK      (0x00000100)
#define GPWTM3_GPTMIMR_R_TBTOIM_BIT       (8)
#define GPWTM3_GPTMIMR_R_TBTOIM_DIS       (0x00000000)
#define GPWTM3_GPTMIMR_R_TBTOIM_EN        (0x00000100)

#define GPWTM3_GPTMIMR_TBTOIM_MASK        (0x00000001)
#define GPWTM3_GPTMIMR_TBTOIM_DIS         (0x00000000)
#define GPWTM3_GPTMIMR_TBTOIM_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMIMR_R_CBMIM_MASK      (0x00000200)
#define GPWTM3_GPTMIMR_R_CBMIM_BIT       (9)
#define GPWTM3_GPTMIMR_R_CBMIM_DIS       (0x00000000)
#define GPWTM3_GPTMIMR_R_CBMIM_EN        (0x00000200)

#define GPWTM3_GPTMIMR_CBMIM_MASK        (0x00000001)
#define GPWTM3_GPTMIMR_CBMIM_DIS         (0x00000000)
#define GPWTM3_GPTMIMR_CBMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMIMR_R_CBEIM_MASK      (0x00000400)
#define GPWTM3_GPTMIMR_R_CBEIM_BIT       (10)
#define GPWTM3_GPTMIMR_R_CBEIM_DIS       (0x00000000)
#define GPWTM3_GPTMIMR_R_CBEIM_EN        (0x00000400)

#define GPWTM3_GPTMIMR_CBEIM_MASK        (0x00000001)
#define GPWTM3_GPTMIMR_CBEIM_DIS         (0x00000000)
#define GPWTM3_GPTMIMR_CBEIM_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMIMR_R_TBMIM_MASK      (0x00000800)
#define GPWTM3_GPTMIMR_R_TBMIM_BIT       (11)
#define GPWTM3_GPTMIMR_R_TBMIM_DIS       (0x00000000)
#define GPWTM3_GPTMIMR_R_TBMIM_EN        (0x00000800)

#define GPWTM3_GPTMIMR_TBMIM_MASK        (0x00000001)
#define GPWTM3_GPTMIMR_TBMIM_DIS         (0x00000000)
#define GPWTM3_GPTMIMR_TBMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM3_GPTMIMR_R_WUEIM_MASK      (0x00010000)
#define GPWTM3_GPTMIMR_R_WUEIM_BIT       (16)
#define GPWTM3_GPTMIMR_R_WUEIM_DIS       (0x00000000)
#define GPWTM3_GPTMIMR_R_WUEIM_EN        (0x00010000)

#define GPWTM3_GPTMIMR_WUEIM_MASK        (0x00000001)
#define GPWTM3_GPTMIMR_WUEIM_DIS         (0x00000000)
#define GPWTM3_GPTMIMR_WUEIM_EN          (0x00000001)
//--------

#define GPWTM3_GPTMIMR_TATOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(0*4))))
#define GPWTM3_GPTMIMR_CAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(1*4))))
#define GPWTM3_GPTMIMR_CAEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(2*4))))
#define GPWTM3_GPTMIMR_RTCIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(3*4))))
#define GPWTM3_GPTMIMR_TAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(4*4))))
#define GPWTM3_GPTMIMR_TBTOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(8*4))))
#define GPWTM3_GPTMIMR_CBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(9*4))))
#define GPWTM3_GPTMIMR_CBEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(10*4))))
#define GPWTM3_GPTMIMR_TBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(11*4))))
#define GPWTM3_GPTMIMR_WUEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(16*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.7 GPTMRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMRIS            (((GPTMRIS_TypeDef*)(GPWTM3_BASE + GPTM_GPTMRIS_OFFSET )))
#define GPWTM3_GPTMRIS_R          (*((volatile const uint32_t *)(GPWTM3_BASE +GPTM_GPTMRIS_OFFSET)))



//--------
#define GPWTM3_GPTMRIS_R_TATORIS_MASK      (0x00000001)
#define GPWTM3_GPTMRIS_R_TATORIS_BIT       (0)
#define GPWTM3_GPTMRIS_R_TATORIS_NOACTIVE  (0x00000000)
#define GPWTM3_GPTMRIS_R_TATORIS_ACTIVE    (0x00000001)

#define GPWTM3_GPTMRIS_TATORIS_MASK        (0x00000001)
#define GPWTM3_GPTMRIS_TATORIS_NOACTIVE    (0x00000000)
#define GPWTM3_GPTMRIS_TATORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMRIS_R_CAMRIS_MASK      (0x00000002)
#define GPWTM3_GPTMRIS_R_CAMRIS_BIT       (1)
#define GPWTM3_GPTMRIS_R_CAMRIS_NOACTIVE  (0x00000000)
#define GPWTM3_GPTMRIS_R_CAMRIS_ACTIVE    (0x00000002)

#define GPWTM3_GPTMRIS_CAMRIS_MASK        (0x00000001)
#define GPWTM3_GPTMRIS_CAMRIS_NOACTIVE    (0x00000000)
#define GPWTM3_GPTMRIS_CAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMRIS_R_CAERIS_MASK      (0x00000004)
#define GPWTM3_GPTMRIS_R_CAERIS_BIT       (2)
#define GPWTM3_GPTMRIS_R_CAERIS_NOACTIVE  (0x00000000)
#define GPWTM3_GPTMRIS_R_CAERIS_ACTIVE    (0x00000004)

#define GPWTM3_GPTMRIS_CAERIS_MASK        (0x00000001)
#define GPWTM3_GPTMRIS_CAERIS_NOACTIVE    (0x00000000)
#define GPWTM3_GPTMRIS_CAERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMRIS_R_RTCRIS_MASK      (0x00000008)
#define GPWTM3_GPTMRIS_R_RTCRIS_BIT       (3)
#define GPWTM3_GPTMRIS_R_RTCRIS_NOACTIVE  (0x00000000)
#define GPWTM3_GPTMRIS_R_RTCRIS_ACTIVE    (0x00000008)

#define GPWTM3_GPTMRIS_RTCRIS_MASK        (0x00000001)
#define GPWTM3_GPTMRIS_RTCRIS_NOACTIVE    (0x00000000)
#define GPWTM3_GPTMRIS_RTCRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMRIS_R_TAMRIS_MASK      (0x00000010)
#define GPWTM3_GPTMRIS_R_TAMRIS_BIT       (4)
#define GPWTM3_GPTMRIS_R_TAMRIS_NOACTIVE  (0x00000000)
#define GPWTM3_GPTMRIS_R_TAMRIS_ACTIVE    (0x00000010)

#define GPWTM3_GPTMRIS_TAMRIS_MASK        (0x00000001)
#define GPWTM3_GPTMRIS_TAMRIS_NOACTIVE    (0x00000000)
#define GPWTM3_GPTMRIS_TAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMRIS_R_TBTORIS_MASK      (0x00000100)
#define GPWTM3_GPTMRIS_R_TBTORIS_BIT       (8)
#define GPWTM3_GPTMRIS_R_TBTORIS_NOACTIVE  (0x00000000)
#define GPWTM3_GPTMRIS_R_TBTORIS_ACTIVE    (0x00000100)

#define GPWTM3_GPTMRIS_TBTORIS_MASK        (0x00000001)
#define GPWTM3_GPTMRIS_TBTORIS_NOACTIVE    (0x00000000)
#define GPWTM3_GPTMRIS_TBTORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMRIS_R_CBMRIS_MASK      (0x00000200)
#define GPWTM3_GPTMRIS_R_CBMRIS_BIT       (9)
#define GPWTM3_GPTMRIS_R_CBMRIS_NOACTIVE  (0x00000000)
#define GPWTM3_GPTMRIS_R_CBMRIS_ACTIVE    (0x00000200)

#define GPWTM3_GPTMRIS_CBMRIS_MASK        (0x00000001)
#define GPWTM3_GPTMRIS_CBMRIS_NOACTIVE    (0x00000000)
#define GPWTM3_GPTMRIS_CBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMRIS_R_CBERIS_MASK      (0x00000400)
#define GPWTM3_GPTMRIS_R_CBERIS_BIT       (10)
#define GPWTM3_GPTMRIS_R_CBERIS_NOACTIVE  (0x00000000)
#define GPWTM3_GPTMRIS_R_CBERIS_ACTIVE    (0x00000400)

#define GPWTM3_GPTMRIS_CBERIS_MASK        (0x00000001)
#define GPWTM3_GPTMRIS_CBERIS_NOACTIVE    (0x00000000)
#define GPWTM3_GPTMRIS_CBERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMRIS_R_TBMRIS_MASK      (0x00000800)
#define GPWTM3_GPTMRIS_R_TBMRIS_BIT       (11)
#define GPWTM3_GPTMRIS_R_TBMRIS_NOACTIVE  (0x00000000)
#define GPWTM3_GPTMRIS_R_TBMRIS_ACTIVE    (0x00000800)

#define GPWTM3_GPTMRIS_TBMRIS_MASK        (0x00000001)
#define GPWTM3_GPTMRIS_TBMRIS_NOACTIVE    (0x00000000)
#define GPWTM3_GPTMRIS_TBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMRIS_R_WUERIS_MASK      (0x00010000)
#define GPWTM3_GPTMRIS_R_WUERIS_BIT       (16)
#define GPWTM3_GPTMRIS_R_WUERIS_NOACTIVE  (0x00000000)
#define GPWTM3_GPTMRIS_R_WUERIS_ACTIVE    (0x00010000)

#define GPWTM3_GPTMRIS_WUERIS_MASK        (0x00000001)
#define GPWTM3_GPTMRIS_WUERIS_NOACTIVE    (0x00000000)
#define GPWTM3_GPTMRIS_WUERIS_ACTIVE      (0x00000001)
//--------

#define GPWTM3_GPTMRIS_TATORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(0*4))))
#define GPWTM3_GPTMRIS_CAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(1*4))))
#define GPWTM3_GPTMRIS_CAERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(2*4))))
#define GPWTM3_GPTMRIS_RTCRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(3*4))))
#define GPWTM3_GPTMRIS_TAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(4*4))))
#define GPWTM3_GPTMRIS_TBTORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(8*4))))
#define GPWTM3_GPTMRIS_CBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(9*4))))
#define GPWTM3_GPTMRIS_CBERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(10*4))))
#define GPWTM3_GPTMRIS_TBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(11*4))))
#define GPWTM3_GPTMRIS_WUERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(16*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.8 GPTMMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMMIS            (((GPTMMIS_TypeDef*)(GPWTM3_BASE + GPTM_GPTMMIS_OFFSET )))
#define GPWTM3_GPTMMIS_R          (*((volatile const uint32_t *)(GPWTM3_BASE +GPTM_GPTMMIS_OFFSET)))




//--------
#define GPWTM3_GPTMMIS_R_TATOMIS_MASK      (0x00000001)
#define GPWTM3_GPTMMIS_R_TATOMIS_BIT       (0)
#define GPWTM3_GPTMMIS_R_TATOMIS_NOOCCUR  (0x00000000)
#define GPWTM3_GPTMMIS_R_TATOMIS_OCCUR    (0x00000001)

#define GPWTM3_GPTMMIS_TATOMIS_MASK        (0x00000001)
#define GPWTM3_GPTMMIS_TATOMIS_NOOCCUR    (0x00000000)
#define GPWTM3_GPTMMIS_TATOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMMIS_R_CAMMIS_MASK      (0x00000002)
#define GPWTM3_GPTMMIS_R_CAMMIS_BIT       (1)
#define GPWTM3_GPTMMIS_R_CAMMIS_NOOCCUR  (0x00000000)
#define GPWTM3_GPTMMIS_R_CAMMIS_OCCUR    (0x00000002)

#define GPWTM3_GPTMMIS_CAMMIS_MASK        (0x00000001)
#define GPWTM3_GPTMMIS_CAMMIS_NOOCCUR    (0x00000000)
#define GPWTM3_GPTMMIS_CAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMMIS_R_CAEMIS_MASK      (0x00000004)
#define GPWTM3_GPTMMIS_R_CAEMIS_BIT       (2)
#define GPWTM3_GPTMMIS_R_CAEMIS_NOOCCUR  (0x00000000)
#define GPWTM3_GPTMMIS_R_CAEMIS_OCCUR    (0x00000004)

#define GPWTM3_GPTMMIS_CAEMIS_MASK        (0x00000001)
#define GPWTM3_GPTMMIS_CAEMIS_NOOCCUR    (0x00000000)
#define GPWTM3_GPTMMIS_CAEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMMIS_R_RTCMIS_MASK      (0x00000008)
#define GPWTM3_GPTMMIS_R_RTCMIS_BIT       (3)
#define GPWTM3_GPTMMIS_R_RTCMIS_NOOCCUR  (0x00000000)
#define GPWTM3_GPTMMIS_R_RTCMIS_OCCUR    (0x00000008)

#define GPWTM3_GPTMMIS_RTCMIS_MASK        (0x00000001)
#define GPWTM3_GPTMMIS_RTCMIS_NOOCCUR    (0x00000000)
#define GPWTM3_GPTMMIS_RTCMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMMIS_R_TAMMIS_MASK      (0x00000010)
#define GPWTM3_GPTMMIS_R_TAMMIS_BIT       (4)
#define GPWTM3_GPTMMIS_R_TAMMIS_NOOCCUR  (0x00000000)
#define GPWTM3_GPTMMIS_R_TAMMIS_OCCUR    (0x00000010)

#define GPWTM3_GPTMMIS_TAMMIS_MASK        (0x00000001)
#define GPWTM3_GPTMMIS_TAMMIS_NOOCCUR    (0x00000000)
#define GPWTM3_GPTMMIS_TAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMMIS_R_TBTOMIS_MASK      (0x00000100)
#define GPWTM3_GPTMMIS_R_TBTOMIS_BIT       (8)
#define GPWTM3_GPTMMIS_R_TBTOMIS_NOOCCUR  (0x00000000)
#define GPWTM3_GPTMMIS_R_TBTOMIS_OCCUR    (0x00000100)

#define GPWTM3_GPTMMIS_TBTOMIS_MASK        (0x00000001)
#define GPWTM3_GPTMMIS_TBTOMIS_NOOCCUR    (0x00000000)
#define GPWTM3_GPTMMIS_TBTOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMMIS_R_CBMMIS_MASK      (0x00000200)
#define GPWTM3_GPTMMIS_R_CBMMIS_BIT       (9)
#define GPWTM3_GPTMMIS_R_CBMMIS_NOOCCUR  (0x00000000)
#define GPWTM3_GPTMMIS_R_CBMMIS_OCCUR    (0x00000200)

#define GPWTM3_GPTMMIS_CBMMIS_MASK        (0x00000001)
#define GPWTM3_GPTMMIS_CBMMIS_NOOCCUR    (0x00000000)
#define GPWTM3_GPTMMIS_CBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMMIS_R_CBEMIS_MASK      (0x00000400)
#define GPWTM3_GPTMMIS_R_CBEMIS_BIT       (10)
#define GPWTM3_GPTMMIS_R_CBEMIS_NOOCCUR  (0x00000000)
#define GPWTM3_GPTMMIS_R_CBEMIS_OCCUR    (0x00000400)

#define GPWTM3_GPTMMIS_CBEMIS_MASK        (0x00000001)
#define GPWTM3_GPTMMIS_CBEMIS_NOOCCUR    (0x00000000)
#define GPWTM3_GPTMMIS_CBEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMMIS_R_TBMMIS_MASK      (0x00000800)
#define GPWTM3_GPTMMIS_R_TBMMIS_BIT       (11)
#define GPWTM3_GPTMMIS_R_TBMMIS_NOOCCUR  (0x00000000)
#define GPWTM3_GPTMMIS_R_TBMMIS_OCCUR    (0x00000800)

#define GPWTM3_GPTMMIS_TBMMIS_MASK        (0x00000001)
#define GPWTM3_GPTMMIS_TBMMIS_NOOCCUR    (0x00000000)
#define GPWTM3_GPTMMIS_TBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM3_GPTMMIS_R_WUEMIS_MASK      (0x00010000)
#define GPWTM3_GPTMMIS_R_WUEMIS_BIT       (16)
#define GPWTM3_GPTMMIS_R_WUEMIS_NOOCCUR  (0x00000000)
#define GPWTM3_GPTMMIS_R_WUEMIS_OCCUR    (0x00010000)

#define GPWTM3_GPTMMIS_WUEMIS_MASK        (0x00000001)
#define GPWTM3_GPTMMIS_WUEMIS_NOOCCUR    (0x00000000)
#define GPWTM3_GPTMMIS_WUEMIS_OCCUR      (0x00000001)
//--------

#define GPWTM3_GPTMMIS_TATOMIS           (0x00000001)
#define GPWTM3_GPTMMIS_CAMMIS            (0x00000002)
#define GPWTM3_GPTMMIS_CAEMIS            (0x00000004)
#define GPWTM3_GPTMMIS_RTCMIS            (0x00000008)
#define GPWTM3_GPTMMIS_TAMMIS            (0x00000010)
#define GPWTM3_GPTMMIS_TBTOMIS           (0x00000100)
#define GPWTM3_GPTMMIS_CBMMIS            (0x00000200)
#define GPWTM3_GPTMMIS_CBEMIS            (0x00000400)
#define GPWTM3_GPTMMIS_TBMMIS            (0x00000800)
#define GPWTM3_GPTMMIS_WUEMIS            (0x00010000)


#define GPWTM3_GPTMMIS_TATOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(0*4))))
#define GPWTM3_GPTMMIS_CAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(1*4))))
#define GPWTM3_GPTMMIS_CAEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(2*4))))
#define GPWTM3_GPTMMIS_RTCMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(3*4))))
#define GPWTM3_GPTMMIS_TAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(4*4))))
#define GPWTM3_GPTMMIS_TBTOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(8*4))))
#define GPWTM3_GPTMMIS_CBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(9*4))))
#define GPWTM3_GPTMMIS_CBEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(10*4))))
#define GPWTM3_GPTMMIS_TBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(11*4))))
#define GPWTM3_GPTMMIS_WUEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.9 GPTMICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMICR            (((GPTMICR_TypeDef*)(GPWTM3_BASE + GPTM_GPTMICR_OFFSET )))
#define GPWTM3_GPTMICR_R          (*((volatile uint32_t *)(GPWTM3_BASE +GPTM_GPTMICR_OFFSET)))



//--------
#define GPWTM3_GPTMICR_R_TATOCINT_MASK      (0x00000001)
#define GPWTM3_GPTMICR_R_TATOCINT_BIT       (0)
#define GPWTM3_GPTMICR_R_TATOCINT_CLEAR     (0x00000001)

#define GPWTM3_GPTMICR_TATOCINT_MASK        (0x00000001)
#define GPWTM3_GPTMICR_TATOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM3_GPTMICR_R_CAMCINT_MASK      (0x00000002)
#define GPWTM3_GPTMICR_R_CAMCINT_BIT       (1)
#define GPWTM3_GPTMICR_R_CAMCINT_CLEAR     (0x00000002)

#define GPWTM3_GPTMICR_CAMCINT_MASK        (0x00000001)
#define GPWTM3_GPTMICR_CAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM3_GPTMICR_R_CAECINT_MASK      (0x00000004)
#define GPWTM3_GPTMICR_R_CAECINT_BIT       (2)
#define GPWTM3_GPTMICR_R_CAECINT_CLEAR     (0x00000004)

#define GPWTM3_GPTMICR_CAECINT_MASK        (0x00000001)
#define GPWTM3_GPTMICR_CAECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM3_GPTMICR_R_RTCCINT_MASK      (0x00000008)
#define GPWTM3_GPTMICR_R_RTCCINT_BIT       (3)
#define GPWTM3_GPTMICR_R_RTCCINT_CLEAR     (0x00000008)

#define GPWTM3_GPTMICR_RTCCINT_MASK        (0x00000001)
#define GPWTM3_GPTMICR_RTCCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM3_GPTMICR_R_TAMCINT_MASK      (0x00000010)
#define GPWTM3_GPTMICR_R_TAMCINT_BIT       (4)
#define GPWTM3_GPTMICR_R_TAMCINT_CLEAR     (0x00000010)

#define GPWTM3_GPTMICR_TAMCINT_MASK        (0x00000001)
#define GPWTM3_GPTMICR_TAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM3_GPTMICR_R_TBTOCINT_MASK      (0x00000100)
#define GPWTM3_GPTMICR_R_TBTOCINT_BIT       (8)
#define GPWTM3_GPTMICR_R_TBTOCINT_CLEAR     (0x00000100)

#define GPWTM3_GPTMICR_TBTOCINT_MASK        (0x00000001)
#define GPWTM3_GPTMICR_TBTOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM3_GPTMICR_R_CBMCINT_MASK      (0x00000200)
#define GPWTM3_GPTMICR_R_CBMCINT_BIT       (9)
#define GPWTM3_GPTMICR_R_CBMCINT_CLEAR     (0x00000200)

#define GPWTM3_GPTMICR_CBMCINT_MASK        (0x00000001)
#define GPWTM3_GPTMICR_CBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM3_GPTMICR_R_CBECINT_MASK      (0x00000400)
#define GPWTM3_GPTMICR_R_CBECINT_BIT       (10)
#define GPWTM3_GPTMICR_R_CBECINT_CLEAR     (0x00000400)

#define GPWTM3_GPTMICR_CBECINT_MASK        (0x00000001)
#define GPWTM3_GPTMICR_CBECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM3_GPTMICR_R_TBMCINT_MASK      (0x00000800)
#define GPWTM3_GPTMICR_R_TBMCINT_BIT       (11)
#define GPWTM3_GPTMICR_R_TBMCINT_CLEAR     (0x00000800)

#define GPWTM3_GPTMICR_TBMCINT_MASK        (0x00000001)
#define GPWTM3_GPTMICR_TBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM3_GPTMICR_R_WUECINT_MASK      (0x00010000)
#define GPWTM3_GPTMICR_R_WUECINT_BIT       (16)
#define GPWTM3_GPTMICR_R_WUECINT_CLEAR     (0x00010000)

#define GPWTM3_GPTMICR_WUECINT_MASK        (0x00000001)
#define GPWTM3_GPTMICR_WUECINT_CLEAR       (0x00000001)
//--------


#define GPWTM3_GPTMICR_TATOCINT           (0x00000001)
#define GPWTM3_GPTMICR_CAMCINT            (0x00000002)
#define GPWTM3_GPTMICR_CAECINT            (0x00000004)
#define GPWTM3_GPTMICR_RTCCINT            (0x00000008)
#define GPWTM3_GPTMICR_TAMCINT            (0x00000010)
#define GPWTM3_GPTMICR_TBTOCINT           (0x00000100)
#define GPWTM3_GPTMICR_CBMCINT            (0x00000200)
#define GPWTM3_GPTMICR_CBECINT            (0x00000400)
#define GPWTM3_GPTMICR_TBMCINT            (0x00000800)
#define GPWTM3_GPTMICR_WUECINT            (0x00010000)


#define GPWTM3_GPTMICR_TATOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(0*4))))
#define GPWTM3_GPTMICR_CAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(1*4))))
#define GPWTM3_GPTMICR_CAECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(2*4))))
#define GPWTM3_GPTMICR_RTCCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(3*4))))
#define GPWTM3_GPTMICR_TAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(4*4))))
#define GPWTM3_GPTMICR_TBTOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(8*4))))
#define GPWTM3_GPTMICR_CBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(9*4))))
#define GPWTM3_GPTMICR_CBECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(10*4))))
#define GPWTM3_GPTMICR_TBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(11*4))))
#define GPWTM3_GPTMICR_WUECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM3_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.10 GPTMTAILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMTAILR            (((GPTMTAILR_TypeDef*)(GPWTM3_BASE + GPTM_GPTMTAILR_OFFSET )))
#define GPWTM3_GPTMTAILR_R          (*((volatile uint32_t *)(GPWTM3_BASE +GPTM_GPTMTAILR_OFFSET)))

//--------
#define GPWTM3_GPTMTAILR_R_TAILR_MASK      (0xFFFFFFFF)
#define GPWTM3_GPTMTAILR_R_TAILR_BIT       (0)

#define GPWTM3_GPTMTAILR_TAILR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.11 GPTMTBILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMTBILR            (((GPTMTBILR_TypeDef*)(GPWTM3_BASE + GPTM_GPTMTBILR_OFFSET )))
#define GPWTM3_GPTMTBILR_R          (*((volatile uint32_t *)(GPWTM3_BASE +GPTM_GPTMTBILR_OFFSET)))

//--------
#define GPWTM3_GPTMTBILR_R_TBILR_MASK      (0xFFFFFFFF)
#define GPWTM3_GPTMTBILR_R_TBILR_BIT       (0)

#define GPWTM3_GPTMTBILR_TBILR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.12 GPTMTAMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMTAMATCHR            (((GPTMTAMATCHR_TypeDef*)(GPWTM3_BASE + GPTM_GPTMTAMATCHR_OFFSET )))
#define GPWTM3_GPTMTAMATCHR_R          (*((volatile uint32_t *)(GPWTM3_BASE +GPTM_GPTMTAMATCHR_OFFSET)))


//--------
#define GPWTM3_GPTMTAMATCHR_R_TAMR_MASK      (0xFFFFFFFF)
#define GPWTM3_GPTMTAMATCHR_R_TAMR_BIT       (0)

#define GPWTM3_GPTMTAMATCHR_TAMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.13 GPTMTBMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMTBMATCHR            (((GPTMTBMATCHR_TypeDef*)(GPWTM3_BASE + GPTM_GPTMTBMATCHR_OFFSET )))
#define GPWTM3_GPTMTBMATCHR_R          (*((volatile uint32_t *)(GPWTM3_BASE +GPTM_GPTMTBMATCHR_OFFSET)))


//--------
#define GPWTM3_GPTMTBMATCHR_R_TBMR_MASK      (0xFFFFFFFF)
#define GPWTM3_GPTMTBMATCHR_R_TBMR_BIT       (0)

#define GPWTM3_GPTMTBMATCHR_TBMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.14 GPTMTAPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMTAPR            (((GPTMTAPR_TypeDef*)(GPWTM3_BASE + GPTM_GPTMTAPR_OFFSET )))
#define GPWTM3_GPTMTAPR_R          (*((volatile uint32_t *)(GPWTM3_BASE +GPTM_GPTMTAPR_OFFSET)))


//--------
#define GPWTM3_GPTMTAPR_R_TAPSR_MASK      (0x000000FF)
#define GPWTM3_GPTMTAPR_R_TAPSR_BIT       (0)

#define GPWTM3_GPTMTAPR_TAPSR_MASK        (0x000000FF)
//--------

//--------
#define GPWTM3_GPTMTAPR_R_TAPSRH_MASK      (0x0000FF00)
#define GPWTM3_GPTMTAPR_R_TAPSRH_BIT       (8)

#define GPWTM3_GPTMTAPR_TAPSRH_MASK        (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.15 GPTMTBPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMTBPR            (((GPTMTBPR_TypeDef*)(GPWTM3_BASE + GPTM_GPTMTBPR_OFFSET )))
#define GPWTM3_GPTMTBPR_R          (*((volatile uint32_t *)(GPWTM3_BASE +GPTM_GPTMTBPR_OFFSET)))


//--------
#define GPWTM3_GPTMTBPR_R_TBPSR_MASK      (0x000000FF)
#define GPWTM3_GPTMTBPR_R_TBPSR_BIT       (0)

#define GPWTM3_GPTMTBPR_TBPSR_MASK        (0x000000FF)
//--------


//--------
#define GPWTM3_GPTMTBPR_R_TBPSRH_MASK      (0x0000FF00)
#define GPWTM3_GPTMTBPR_R_TBPSRH_BIT       (8)

#define GPWTM3_GPTMTBPR_TBPSRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.16 GPTMTAPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMTAPMR            (((GPTMTAPMR_TypeDef*)(GPWTM3_BASE + GPTM_GPTMTAPMR_OFFSET )))
#define GPWTM3_GPTMTAPMR_R          (*((volatile uint32_t *)(GPWTM3_BASE +GPTM_GPTMTAPMR_OFFSET)))


//--------
#define GPWTM3_GPTMTAPMR_R_TAPSMR_MASK      (0x000000FF)
#define GPWTM3_GPTMTAPMR_R_TAPSMR_BIT       (0)

#define GPWTM3_GPTMTAMPR_TAPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPWTM3_GPTMTAPMR_R_TAPSMRH_MASK      (0x0000FF00)
#define GPWTM3_GPTMTAPMR_R_TAPSMRH_BIT       (8)

#define GPWTM3_GPTMTAPMR_TAPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.17 GPTMTBPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMTBPMR            (((GPTMTBPMR_TypeDef*)(GPWTM3_BASE + GPTM_GPTMTBPMR_OFFSET )))
#define GPWTM3_GPTMTBPMR_R          (*((volatile uint32_t *)(GPWTM3_BASE +GPTM_GPTMTBPMR_OFFSET)))

//--------
#define GPWTM3_GPTMTBPMR_R_TBPSMR_MASK      (0x000000FF)
#define GPWTM3_GPTMTBPMR_R_TBPSMR_BIT       (0)

#define GPWTM3_GPTMTBMPR_TBPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPWTM3_GPTMTBPMR_R_TBPSMRH_MASK      (0x0000FF00)
#define GPWTM3_GPTMTBPMR_R_TBPSMRH_BIT       (8)

#define GPWTM3_GPTMTBPMR_TBPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.18 GPTMTAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMTAR            (((GPTMTAR_TypeDef*)(GPWTM3_BASE + GPTM_GPTMTAR_OFFSET )))
#define GPWTM3_GPTMTAR_R          (*((volatile const  int32_t *)(GPWTM3_BASE +GPTM_GPTMTAR_OFFSET)))


//--------
#define GPWTM3_GPTMTAR_R_TAR_MASK      (0xFFFFFFFF)
#define GPWTM3_GPTMTAR_R_TAR_BIT       (0)

#define GPWTM3_GPTMTAR_TAR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.19 GPTMTBR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMTBR            (((GPTMTBR_TypeDef*)(GPWTM3_BASE + GPTM_GPTMTBR_OFFSET )))
#define GPWTM3_GPTMTBR_R          (*((volatile const uint32_t *)(GPWTM3_BASE +GPTM_GPTMTBR_OFFSET)))


//--------
#define GPWTM3_GPTMTBR_R_TBR_MASK      (0xFFFFFFFF)
#define GPWTM3_GPTMTBR_R_TBR_BIT       (0)

#define GPWTM3_GPTMTBR_TBR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.20 GPTMTAV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMTAV            (((GPTMTAV_TypeDef*)(GPWTM3_BASE + GPTM_GPTMTAV_OFFSET )))
#define GPWTM3_GPTMTAV_R          (*((volatile uint32_t *)(GPWTM3_BASE +GPTM_GPTMTAV_OFFSET)))

//--------
#define GPWTM3_GPTMTAV_R_TAV_MASK      (0xFFFFFFFF)
#define GPWTM3_GPTMTAV_R_TAV_BIT       (0)

#define GPWTM3_GPTMTAV_TAV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.21 GPTMTBV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMTBV            (((GPTMTBV_TypeDef*)(GPWTM3_BASE + GPTM_GPTMTBV_OFFSET )))
#define GPWTM3_GPTMTBV_R          (*((volatile uint32_t *)(GPWTM3_BASE +GPTM_GPTMTBV_OFFSET)))


//--------
#define GPWTM3_GPTMTBV_R_TBV_MASK      (0xFFFFFFFF)
#define GPWTM3_GPTMTBV_R_TBV_BIT       (0)

#define GPWTM3_GPTMTBV_TBV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.22 GPTMRTCPD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMRTCPD            (((GPTMRTCPD_TypeDef*)(GPWTM3_BASE + GPTM_GPTMRTCPD_OFFSET )))
#define GPWTM3_GPTMRTCPD_R          (*((volatile const uint32_t *)(GPWTM3_BASE +GPTM_GPTMRTCPD_OFFSET)))


//--------
#define GPWTM3_GPTMRTCPD_R_RTCPD_MASK      (0x0000FFFF)
#define GPWTM3_GPTMRTCPD_R_RTCPD_BIT       (0)
#define GPWTM3_GPTMRTCPD_R_RTCPD_DEFAULT   (0x00007FFF)

#define GPWTM3_GPTMRTCPD_RTCPD_MASK        (0x0000FFFF)
#define GPWTM3_GPTMRTCPD_RTCPD_DEFAULT     (0x00007FFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.23 GPTMTAPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPWTM3_GPTMTAPS            (((GPTMTAPS_TypeDef*)(GPWTM3_BASE + GPTM_GPTMTAPS_OFFSET )))
#define GPWTM3_GPTMTAPS_R          (*((volatile const uint32_t *)(GPWTM3_BASE +GPTM_GPTMTAPS_OFFSET)))

//--------
#define GPWTM3_GPTMTAPS_R_PSS_MASK      (0x0000FFFF)
#define GPWTM3_GPTMTAPS_R_PSS_BIT       (0)

#define GPWTM3_GPTMTAPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.24 GPTMTBPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMTBPS            (((GPTMTBPS_TypeDef*)(GPWTM3_BASE + GPTM_GPTMTBPS_OFFSET )))
#define GPWTM3_GPTMTBPS_R          (*((volatile const uint32_t *)(GPWTM3_BASE +GPTM_GPTMTBPS_OFFSET)))

//--------
#define GPWTM3_GPTMTBPS_R_PSS_MASK      (0x0000FFFF)
#define GPWTM3_GPTMTBPS_R_PSS_BIT       (0)

#define GPWTM3_GPTMTBPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.25 GPTMTAPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define GPWTM3_GPTMTAPV            (((GPTMTAPV_TypeDef*)(GPWTM3_BASE + GPTM_GPTMTAPV_OFFSET )))
#define GPWTM3_GPTMTAPV_R          (*((volatile const uint32_t *)(GPWTM3_BASE +GPTM_GPTMTAPV_OFFSET)))

//--------
#define GPWTM3_GPTMTAPV_R_PSV_MASK      (0x0000FFFF)
#define GPWTM3_GPTMTAPV_R_PSV_BIT       (0)

#define GPWTM3_GPTMTAPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.26 GPTMTBPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPWTM3_GPTMTBPV            (((GPTMTBPV_TypeDef*)(GPWTM3_BASE + GPTM_GPTMTBPV_OFFSET )))
#define GPWTM3_GPTMTBPV_R          (*((volatile const uint32_t *)(GPWTM3_BASE +GPTM_GPTMTBPV_OFFSET)))

//--------
#define GPWTM3_GPTMTBPV_R_PSV_MASK      (0x0000FFFF)
#define GPWTM3_GPTMTBPV_R_PSV_BIT       (0)

#define GPWTM3_GPTMTBPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.27 GPTMPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM3_GPTMPP            (((GPTMPP_TypeDef*)(GPWTM3_BASE + GPTM_GPTMPP_OFFSET )))
#define GPWTM3_GPTMPP_R          (*((volatile const uint32_t *)(GPWTM3_BASE +GPTM_GPTMPP_OFFSET)))

#define GPWTM3_GPTMPP_SIZE        (0x0000000F)

//--------
#define GPWTM3_GPTMPP_R_SIZE_MASK      (0x0000000F)
#define GPWTM3_GPTMPP_R_SIZE_BIT       (0)
#define GPWTM3_GPTMPP_R_SIZE_16b       (0x00000000)
#define GPWTM3_GPTMPP_R_SIZE_32b       (0x00000001)

#define GPWTM3_GPTMPP_SIZE_MASK        (0x0000000F)
#define GPWTM3_GPTMPP_SIZE_16b         (0x00000000)
#define GPWTM3_GPTMPP_SIZE_32b         (0x00000001)
//--------

// ToDO GPWTM4
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 GPWTM4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.1 GPTMCFG ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMCFG            (((GPTMCFG_TypeDef*)(GPWTM4_BASE + GPTM_GPTMCFG_OFFSET )))
#define GPWTM4_GPTMCFG_R          (*((volatile uint32_t *)(GPWTM4_BASE +GPTM_GPTMCFG_OFFSET)))


//--------
#define GPWTM4_GPTMCFG_R_GPTMCFG_MASK      (0x00000007)
#define GPWTM4_GPTMCFG_R_GPTMCFG_BIT       (0)
#define GPWTM4_GPTMCFG_R_GPTMCFG_BOTH    (0x00000000)
#define GPWTM4_GPTMCFG_R_GPTMCFG_RTC       (0x00000001)
#define GPWTM4_GPTMCFG_R_GPTMCFG_SINGLE      (0x00000004)

#define GPWTM4_GPTMCFG_GPTMCFG_MASK        (0x00000007)
#define GPWTM4_GPTMCFG_GPTMCFG_BOTH      (0x00000000)
#define GPWTM4_GPTMCFG_GPTMCFG_RTC         (0x00000001)
#define GPWTM4_GPTMCFG_GPTMCFG_SINGLE        (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.2 GPTMTAMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMTAMR            (((GPTMTAMR_TypeDef*)(GPWTM4_BASE + GPTM_GPTMTAMR_OFFSET )))
#define GPWTM4_GPTMTAMR_R          (*((volatile uint32_t *)(GPWTM4_BASE +GPTM_GPTMTAMR_OFFSET)))


//--------
#define GPWTM4_GPTMTAMR_R_TAMR_MASK      (0x00000003)
#define GPWTM4_GPTMTAMR_R_TAMR_BIT       (0)
#define GPWTM4_GPTMTAMR_R_TAMR_ONESHOT   (0x00000001)
#define GPWTM4_GPTMTAMR_R_TAMR_PERIOD    (0x00000002)
#define GPWTM4_GPTMTAMR_R_TAMR_CAPTURE   (0x00000003)

#define GPWTM4_GPTMTAMR_TAMR_MASK        (0x00000003)
#define GPWTM4_GPTMTAMR_TAMR_ONESHOT     (0x00000001)
#define GPWTM4_GPTMTAMR_TAMR_PERIOD      (0x00000002)
#define GPWTM4_GPTMTAMR_TAMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPWTM4_GPTMTAMR_R_TACMR_MASK      (0x00000004)
#define GPWTM4_GPTMTAMR_R_TACMR_BIT       (2)
#define GPWTM4_GPTMTAMR_R_TACMR_EDGECOUNT (0x00000000)
#define GPWTM4_GPTMTAMR_R_TACMR_EDGETIME  (0x00000004)

#define GPWTM4_GPTMTAMR_TACMR_MASK        (0x00000001)
#define GPWTM4_GPTMTAMR_TACMR_EDGECOUNT   (0x00000000)
#define GPWTM4_GPTMTAMR_TACMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPWTM4_GPTMTAMR_R_TAAMS_MASK      (0x00000008)
#define GPWTM4_GPTMTAMR_R_TAAMS_BIT       (3)
#define GPWTM4_GPTMTAMR_R_TAAMS_CAPCOMP   (0x00000000)
#define GPWTM4_GPTMTAMR_R_TAAMS_PWM       (0x00000008)

#define GPWTM4_GPTMTAMR_TAAMS_MASK        (0x00000001)
#define GPWTM4_GPTMTAMR_TAAMS_CAPCOMP     (0x00000000)
#define GPWTM4_GPTMTAMR_TAAMS_PWM         (0x00000001)
//--------

//--------
#define GPWTM4_GPTMTAMR_R_TACDIR_MASK      (0x00000010)
#define GPWTM4_GPTMTAMR_R_TACDIR_BIT       (4)
#define GPWTM4_GPTMTAMR_R_TACDIR_DOWN      (0x00000000)
#define GPWTM4_GPTMTAMR_R_TACDIR_UP        (0x00000010)

#define GPWTM4_GPTMTAMR_TACDIR_MASK        (0x00000001)
#define GPWTM4_GPTMTAMR_TACDIR_DOWN        (0x00000000)
#define GPWTM4_GPTMTAMR_TACDIR_UP          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMTAMR_R_TAMIE_MASK      (0x00000020)
#define GPWTM4_GPTMTAMR_R_TAMIE_BIT       (5)
#define GPWTM4_GPTMTAMR_R_TAMIE_DIS       (0x00000000)
#define GPWTM4_GPTMTAMR_R_TAMIE_EN        (0x00000020)

#define GPWTM4_GPTMTAMR_TAMIE_MASK        (0x00000001)
#define GPWTM4_GPTMTAMR_TAMIE_DIS         (0x00000000)
#define GPWTM4_GPTMTAMR_TAMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMTAMR_R_TAWOT_MASK      (0x00000040)
#define GPWTM4_GPTMTAMR_R_TAWOT_BIT       (6)
#define GPWTM4_GPTMTAMR_R_TAWOT_INSTANT   (0x00000000)
#define GPWTM4_GPTMTAMR_R_TAWOT_TRIGGER   (0x00000040)

#define GPWTM4_GPTMTAMR_TAWOT_MASK        (0x00000001)
#define GPWTM4_GPTMTAMR_TAWOT_INSTANT     (0x00000000)
#define GPWTM4_GPTMTAMR_TAWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPWTM4_GPTMTAMR_R_TASNAPS_MASK      (0x00000080)
#define GPWTM4_GPTMTAMR_R_TASNAPS_BIT       (7)
#define GPWTM4_GPTMTAMR_R_TASNAPS_DIS       (0x00000000)
#define GPWTM4_GPTMTAMR_R_TASNAPS_EN        (0x00000080)

#define GPWTM4_GPTMTAMR_TASNAPS_MASK        (0x00000001)
#define GPWTM4_GPTMTAMR_TASNAPS_DIS         (0x00000000)
#define GPWTM4_GPTMTAMR_TASNAPS_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMTAMR_R_TAILD_MASK      (0x00000100)
#define GPWTM4_GPTMTAMR_R_TAILD_BIT       (8)
#define GPWTM4_GPTMTAMR_R_TAILD_NEXT      (0x00000000)
#define GPWTM4_GPTMTAMR_R_TAILD_TIMEOUT   (0x00000100)

#define GPWTM4_GPTMTAMR_TAILD_MASK        (0x00000001)
#define GPWTM4_GPTMTAMR_TAILD_NEXT        (0x00000000)
#define GPWTM4_GPTMTAMR_TAILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM4_GPTMTAMR_R_TAPWMIE_MASK      (0x00000200)
#define GPWTM4_GPTMTAMR_R_TAPWMIE_BIT       (9)
#define GPWTM4_GPTMTAMR_R_TAPWMIE_DIS       (0x00000000)
#define GPWTM4_GPTMTAMR_R_TAPWMIE_EN        (0x00000200)

#define GPWTM4_GPTMTAMR_TAPWMIE_MASK        (0x00000001)
#define GPWTM4_GPTMTAMR_TAPWMIE_DIS         (0x00000000)
#define GPWTM4_GPTMTAMR_TAPWMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMTAMR_R_TAMRSU_MASK      (0x00000400)
#define GPWTM4_GPTMTAMR_R_TAMRSU_BIT       (10)
#define GPWTM4_GPTMTAMR_R_TAMRSU_NEXT      (0x00000000)
#define GPWTM4_GPTMTAMR_R_TAMRSU_TIMEOUT   (0x00000400)

#define GPWTM4_GPTMTAMR_TAMRSU_MASK        (0x00000001)
#define GPWTM4_GPTMTAMR_TAMRSU_NEXT        (0x00000000)
#define GPWTM4_GPTMTAMR_TAMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM4_GPTMTAMR_R_TAPLO_MASK      (0x00000800)
#define GPWTM4_GPTMTAMR_R_TAPLO_BIT       (11)
#define GPWTM4_GPTMTAMR_R_TAPLO_LOW       (0x00000000)
#define GPWTM4_GPTMTAMR_R_TAPLO_HIGH      (0x00000800)

#define GPWTM4_GPTMTAMR_TAPLO_MASK        (0x00000001)
#define GPWTM4_GPTMTAMR_TAPLO_LOW         (0x00000000)
#define GPWTM4_GPTMTAMR_TAPLO_HIGH        (0x00000001)
//--------

#define GPWTM4_GPTMTAMR_TACMR_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(2*4))))
#define GPWTM4_GPTMTAMR_TAAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(3*4))))
#define GPWTM4_GPTMTAMR_TACDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(4*4))))
#define GPWTM4_GPTMTAMR_TAMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(5*4))))
#define GPWTM4_GPTMTAMR_TAWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(6*4))))
#define GPWTM4_GPTMTAMR_TASNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(7*4))))
#define GPWTM4_GPTMTAMR_TAILD_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(8*4))))
#define GPWTM4_GPTMTAMR_TAPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(9*4))))
#define GPWTM4_GPTMTAMR_TAMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(10*4))))
#define GPWTM4_GPTMTAMR_TAPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.3 GPTMTBMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMTBMR            (((GPTMTBMR_TypeDef*)(GPWTM4_BASE + GPTM_GPTMTBMR_OFFSET )))
#define GPWTM4_GPTMTBMR_R          (*((volatile uint32_t *)(GPWTM4_BASE +GPTM_GPTMTBMR_OFFSET)))


//--------
#define GPWTM4_GPTMTBMR_R_TBMR_MASK      (0x00000003)
#define GPWTM4_GPTMTBMR_R_TBMR_BIT       (0)
#define GPWTM4_GPTMTBMR_R_TBMR_ONESHOT   (0x00000001)
#define GPWTM4_GPTMTBMR_R_TBMR_PERIOD    (0x00000002)
#define GPWTM4_GPTMTBMR_R_TBMR_CAPTURE   (0x00000003)

#define GPWTM4_GPTMTBMR_TBMR_MASK        (0x00000003)
#define GPWTM4_GPTMTBMR_TBMR_ONESHOT     (0x00000001)
#define GPWTM4_GPTMTBMR_TBMR_PERIOD      (0x00000002)
#define GPWTM4_GPTMTBMR_TBMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPWTM4_GPTMTBMR_R_TBCMR_MASK      (0x00000004)
#define GPWTM4_GPTMTBMR_R_TBCMR_BIT       (2)
#define GPWTM4_GPTMTBMR_R_TBCMR_EDGECOUNT (0x00000000)
#define GPWTM4_GPTMTBMR_R_TBCMR_EDGETIME  (0x00000004)

#define GPWTM4_GPTMTBMR_TBCMR_MASK        (0x00000001)
#define GPWTM4_GPTMTBMR_TBCMR_EDGECOUNT   (0x00000000)
#define GPWTM4_GPTMTBMR_TBCMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPWTM4_GPTMTBMR_R_TBAMS_MASK      (0x00000008)
#define GPWTM4_GPTMTBMR_R_TBAMS_BIT       (3)
#define GPWTM4_GPTMTBMR_R_TBAMS_CAPCOMP   (0x00000000)
#define GPWTM4_GPTMTBMR_R_TBAMS_PWM       (0x00000008)

#define GPWTM4_GPTMTBMR_TBAMS_MASK        (0x00000001)
#define GPWTM4_GPTMTBMR_TBAMS_CAPCOMP     (0x00000000)
#define GPWTM4_GPTMTBMR_TBAMS_PWM         (0x00000001)
//--------

//--------
#define GPWTM4_GPTMTBMR_R_TBCDIR_MASK      (0x00000010)
#define GPWTM4_GPTMTBMR_R_TBCDIR_BIT       (4)
#define GPWTM4_GPTMTBMR_R_TBCDIR_DOWN      (0x00000000)
#define GPWTM4_GPTMTBMR_R_TBCDIR_UP        (0x00000010)

#define GPWTM4_GPTMTBMR_TBCDIR_MASK        (0x00000001)
#define GPWTM4_GPTMTBMR_TBCDIR_DOWN        (0x00000000)
#define GPWTM4_GPTMTBMR_TBCDIR_UP          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMTBMR_R_TBMIE_MASK      (0x00000020)
#define GPWTM4_GPTMTBMR_R_TBMIE_BIT       (5)
#define GPWTM4_GPTMTBMR_R_TBMIE_DIS       (0x00000000)
#define GPWTM4_GPTMTBMR_R_TBMIE_EN        (0x00000020)

#define GPWTM4_GPTMTBMR_TBMIE_MASK        (0x00000001)
#define GPWTM4_GPTMTBMR_TBMIE_DIS         (0x00000000)
#define GPWTM4_GPTMTBMR_TBMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMTBMR_R_TBWOT_MASK      (0x00000040)
#define GPWTM4_GPTMTBMR_R_TBWOT_BIT       (6)
#define GPWTM4_GPTMTBMR_R_TBWOT_INSTANT   (0x00000000)
#define GPWTM4_GPTMTBMR_R_TBWOT_TRIGGER   (0x00000040)

#define GPWTM4_GPTMTBMR_TBWOT_MASK        (0x00000001)
#define GPWTM4_GPTMTBMR_TBWOT_INSTANT     (0x00000000)
#define GPWTM4_GPTMTBMR_TBWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPWTM4_GPTMTBMR_R_TBSNAPS_MASK      (0x00000080)
#define GPWTM4_GPTMTBMR_R_TBSNAPS_BIT       (7)
#define GPWTM4_GPTMTBMR_R_TBSNAPS_DIS       (0x00000000)
#define GPWTM4_GPTMTBMR_R_TBSNAPS_EN        (0x00000080)

#define GPWTM4_GPTMTBMR_TBSNAPS_MASK        (0x00000001)
#define GPWTM4_GPTMTBMR_TBSNAPS_DIS         (0x00000000)
#define GPWTM4_GPTMTBMR_TBSNAPS_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMTBMR_R_TBILD_MASK      (0x00000100)
#define GPWTM4_GPTMTBMR_R_TBILD_BIT       (8)
#define GPWTM4_GPTMTBMR_R_TBILD_NEXT      (0x00000000)
#define GPWTM4_GPTMTBMR_R_TBILD_TIMEOUT   (0x00000100)

#define GPWTM4_GPTMTBMR_TBILD_MASK        (0x00000001)
#define GPWTM4_GPTMTBMR_TBILD_NEXT        (0x00000000)
#define GPWTM4_GPTMTBMR_TBILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM4_GPTMTBMR_R_TBPWMIE_MASK      (0x00000200)
#define GPWTM4_GPTMTBMR_R_TBPWMIE_BIT       (9)
#define GPWTM4_GPTMTBMR_R_TBPWMIE_DIS       (0x00000000)
#define GPWTM4_GPTMTBMR_R_TBPWMIE_EN        (0x00000200)

#define GPWTM4_GPTMTBMR_TBPWMIE_MASK        (0x00000001)
#define GPWTM4_GPTMTBMR_TBPWMIE_DIS         (0x00000000)
#define GPWTM4_GPTMTBMR_TBPWMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMTBMR_R_TBMRSU_MASK      (0x00000400)
#define GPWTM4_GPTMTBMR_R_TBMRSU_BIT       (10)
#define GPWTM4_GPTMTBMR_R_TBMRSU_NEXT      (0x00000000)
#define GPWTM4_GPTMTBMR_R_TBMRSU_TIMEOUT   (0x00000400)

#define GPWTM4_GPTMTBMR_TBMRSU_MASK        (0x00000001)
#define GPWTM4_GPTMTBMR_TBMRSU_NEXT        (0x00000000)
#define GPWTM4_GPTMTBMR_TBMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM4_GPTMTBMR_R_TBPLO_MASK      (0x00000800)
#define GPWTM4_GPTMTBMR_R_TBPLO_BIT       (11)
#define GPWTM4_GPTMTBMR_R_TBPLO_LOW       (0x00000000)
#define GPWTM4_GPTMTBMR_R_TBPLO_HIGH      (0x00000800)

#define GPWTM4_GPTMTBMR_TBPLO_MASK        (0x00000001)
#define GPWTM4_GPTMTBMR_TBPLO_LOW         (0x00000000)
#define GPWTM4_GPTMTBMR_TBPLO_HIGH        (0x00000001)
//--------

#define GPWTM4_GPTMTBMR_TBCMR_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(2*4))))
#define GPWTM4_GPTMTBMR_TBAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(3*4))))
#define GPWTM4_GPTMTBMR_TBCDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(4*4))))
#define GPWTM4_GPTMTBMR_TBMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(5*4))))
#define GPWTM4_GPTMTBMR_TBWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(6*4))))
#define GPWTM4_GPTMTBMR_TBSNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(7*4))))
#define GPWTM4_GPTMTBMR_TBILD_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(8*4))))
#define GPWTM4_GPTMTBMR_TBPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(9*4))))
#define GPWTM4_GPTMTBMR_TBMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(10*4))))
#define GPWTM4_GPTMTBMR_TBPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.4 GPTMCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMCTL            (((GPTMCTL_TypeDef*)(GPWTM4_BASE + GPTM_GPTMCTL_OFFSET )))
#define GPWTM4_GPTMCTL_R          (*((volatile uint32_t *)(GPWTM4_BASE +GPTM_GPTMCTL_OFFSET)))


//--------
#define GPWTM4_GPTMCTL_R_TAEN_MASK      (0x00000001)
#define GPWTM4_GPTMCTL_R_TAEN_BIT       (0)
#define GPWTM4_GPTMCTL_R_TAEN_DIS       (0x00000000)
#define GPWTM4_GPTMCTL_R_TAEN_EN        (0x00000001)

#define GPWTM4_GPTMCTL_TAEN_MASK        (0x00000001)
#define GPWTM4_GPTMCTL_TAEN_DIS         (0x00000000)
#define GPWTM4_GPTMCTL_TAEN_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMCTL_R_TASTALL_MASK      (0x00000002)
#define GPWTM4_GPTMCTL_R_TASTALL_BIT       (1)
#define GPWTM4_GPTMCTL_R_TASTALL_CONTINUE  (0x00000000)
#define GPWTM4_GPTMCTL_R_TASTALL_FREEZE    (0x00000002)

#define GPWTM4_GPTMCTL_TASTALL_MASK        (0x00000001)
#define GPWTM4_GPTMCTL_TASTALL_CONTINUE    (0x00000000)
#define GPWTM4_GPTMCTL_TASTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMCTL_R_TAEVENT_MASK      (0x0000000C)
#define GPWTM4_GPTMCTL_R_TAEVENT_BIT       (2)
#define GPWTM4_GPTMCTL_R_TAEVENT_POS       (0x00000000)
#define GPWTM4_GPTMCTL_R_TAEVENT_NEG       (0x00000004)
#define GPWTM4_GPTMCTL_R_TAEVENT_BOTH      (0x0000000C)

#define GPWTM4_GPTMCTL_TAEVENT_MASK        (0x00000003)
#define GPWTM4_GPTMCTL_TAEVENT_NEG         (0x00000000)
#define GPWTM4_GPTMCTL_TAEVENT_POS         (0x00000001)
#define GPWTM4_GPTMCTL_TAEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPWTM4_GPTMCTL_R_RTCEN_MASK      (0x00000010)
#define GPWTM4_GPTMCTL_R_RTCEN_BIT       (4)
#define GPWTM4_GPTMCTL_R_RTCEN_CONTINUE  (0x00000000)
#define GPWTM4_GPTMCTL_R_RTCEN_FREEZE    (0x00000010)

#define GPWTM4_GPTMCTL_RTCEN_MASK        (0x00000001)
#define GPWTM4_GPTMCTL_RTCEN_CONTINUE    (0x00000000)
#define GPWTM4_GPTMCTL_RTCEN_FREEZE      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMCTL_R_TAOTE_MASK      (0x00000020)
#define GPWTM4_GPTMCTL_R_TAOTE_BIT       (5)
#define GPWTM4_GPTMCTL_R_TAOTE_DIS       (0x00000000)
#define GPWTM4_GPTMCTL_R_TAOTE_EN        (0x00000020)

#define GPWTM4_GPTMCTL_TAOTE_MASK        (0x00000001)
#define GPWTM4_GPTMCTL_TAOTE_DIS         (0x00000000)
#define GPWTM4_GPTMCTL_TAOTE_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMCTL_R_TAPWML_MASK      (0x00000040)
#define GPWTM4_GPTMCTL_R_TAPWML_BIT       (6)
#define GPWTM4_GPTMCTL_R_TAPWML_NA        (0x00000000)
#define GPWTM4_GPTMCTL_R_TAPWML_INV       (0x00000040)

#define GPWTM4_GPTMCTL_TAPWML_MASK        (0x00000001)
#define GPWTM4_GPTMCTL_TAPWML_NA          (0x00000000)
#define GPWTM4_GPTMCTL_TAPWML_INV         (0x00000001)
//--------



//--------
#define GPWTM4_GPTMCTL_R_TBEN_MASK      (0x00000100)
#define GPWTM4_GPTMCTL_R_TBEN_BIT       (8)
#define GPWTM4_GPTMCTL_R_TBEN_DIS       (0x00000000)
#define GPWTM4_GPTMCTL_R_TBEN_EN        (0x00000100)

#define GPWTM4_GPTMCTL_TBEN_MASK        (0x00000001)
#define GPWTM4_GPTMCTL_TBEN_DIS         (0x00000000)
#define GPWTM4_GPTMCTL_TBEN_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMCTL_R_TBSTALL_MASK      (0x00000200)
#define GPWTM4_GPTMCTL_R_TBSTALL_BIT       (9)
#define GPWTM4_GPTMCTL_R_TBSTALL_CONTINUE  (0x00000000)
#define GPWTM4_GPTMCTL_R_TBSTALL_FREEZE    (0x00000200)

#define GPWTM4_GPTMCTL_TBSTALL_MASK        (0x00000001)
#define GPWTM4_GPTMCTL_TBSTALL_CONTINUE    (0x00000000)
#define GPWTM4_GPTMCTL_TBSTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMCTL_R_TBEVENT_MASK      (0x00000C00)
#define GPWTM4_GPTMCTL_R_TBEVENT_BIT       (10)
#define GPWTM4_GPTMCTL_R_TBEVENT_POS       (0x00000000)
#define GPWTM4_GPTMCTL_R_TBEVENT_NEG       (0x00000400)
#define GPWTM4_GPTMCTL_R_TBEVENT_BOTH      (0x00000C00)

#define GPWTM4_GPTMCTL_TBEVENT_MASK        (0x00000003)
#define GPWTM4_GPTMCTL_TBEVENT_NEG         (0x00000000)
#define GPWTM4_GPTMCTL_TBEVENT_POS         (0x00000001)
#define GPWTM4_GPTMCTL_TBEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPWTM4_GPTMCTL_R_TBOTE_MASK      (0x00002000)
#define GPWTM4_GPTMCTL_R_TBOTE_BIT       (13)
#define GPWTM4_GPTMCTL_R_TBOTE_DIS       (0x00000000)
#define GPWTM4_GPTMCTL_R_TBOTE_EN        (0x00002000)

#define GPWTM4_GPTMCTL_TBOTE_MASK        (0x00000001)
#define GPWTM4_GPTMCTL_TBOTE_DIS         (0x00000000)
#define GPWTM4_GPTMCTL_TBOTE_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMCTL_R_TBPWML_MASK      (0x00004000)
#define GPWTM4_GPTMCTL_R_TBPWML_BIT       (14)
#define GPWTM4_GPTMCTL_R_TBPWML_NA        (0x00000000)
#define GPWTM4_GPTMCTL_R_TBPWML_INV       (0x00004000)

#define GPWTM4_GPTMCTL_TBPWML_MASK        (0x00000001)
#define GPWTM4_GPTMCTL_TBPWML_NA          (0x00000000)
#define GPWTM4_GPTMCTL_TBPWML_INV         (0x00000001)
//--------

#define GPWTM4_GPTMCTL_TAEN_BB      (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(0*4))))
#define GPWTM4_GPTMCTL_TASTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(1*4))))
#define GPWTM4_GPTMCTL_RTCEN_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(4*4))))
#define GPWTM4_GPTMCTL_TAOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(5*4))))
#define GPWTM4_GPTMCTL_TAPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTMGPTMCTL_OFFSET)*32)+(6*4))))
#define GPWTM4_GPTMCTL_TBEN_BB      (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(8*4))))
#define GPWTM4_GPTMCTL_TBSTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(9*4))))
#define GPWTM4_GPTMCTL_TBOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(13*4))))
#define GPWTM4_GPTMCTL_TBPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(14*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.5 GPTMSYNC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMSYNC            (((GPTMSYNC_TypeDef*)(GPWTM4_BASE + GPTM_GPTMSYNC_OFFSET )))
#define GPWTM4_GPTMSYNC_R          (*((volatile uint32_t *)(GPWTM4_BASE +GPTM_GPTMSYNC_OFFSET)))

//--------
#define GPWTM4_GPTMSYNC_R_SYNCT0_MASK      (0x00000003)
#define GPWTM4_GPTMSYNC_R_SYNCT0_BIT       (0)
#define GPWTM4_GPTMSYNC_R_SYNCT0_NA        (0x00000000)
#define GPWTM4_GPTMSYNC_R_SYNCT0_TA        (0x00000001)
#define GPWTM4_GPTMSYNC_R_SYNCT0_TB        (0x00000002)
#define GPWTM4_GPTMSYNC_R_SYNCT0_BOTH      (0x00000003)

#define GPWTM4_GPTMSYNC_SYNCT0_MASK        (0x00000003)
#define GPWTM4_GPTMSYNC_SYNCT0_NA          (0x00000000)
#define GPWTM4_GPTMSYNC_SYNCT0_TA          (0x00000001)
#define GPWTM4_GPTMSYNC_SYNCT0_TB          (0x00000002)
#define GPWTM4_GPTMSYNC_SYNCT0_BOTH        (0x00000003)
//--------

//--------
#define GPWTM4_GPTMSYNC_R_SYNCT1_MASK      (0x0000000C)
#define GPWTM4_GPTMSYNC_R_SYNCT1_BIT       (2)
#define GPWTM4_GPTMSYNC_R_SYNCT1_NA        (0x00000000)
#define GPWTM4_GPTMSYNC_R_SYNCT1_TA        (0x00000004)
#define GPWTM4_GPTMSYNC_R_SYNCT1_TB        (0x00000008)
#define GPWTM4_GPTMSYNC_R_SYNCT1_BOTH      (0x0000000C)

#define GPWTM4_GPTMSYNC_SYNCT1_MASK        (0x00000003)
#define GPWTM4_GPTMSYNC_SYNCT1_NA          (0x00000000)
#define GPWTM4_GPTMSYNC_SYNCT1_TA          (0x00000001)
#define GPWTM4_GPTMSYNC_SYNCT1_TB          (0x00000002)
#define GPWTM4_GPTMSYNC_SYNCT1_BOTH        (0x00000003)
//--------

//--------
#define GPWTM4_GPTMSYNC_R_SYNCT2_MASK      (0x00000030)
#define GPWTM4_GPTMSYNC_R_SYNCT2_BIT       (4)
#define GPWTM4_GPTMSYNC_R_SYNCT2_NA        (0x00000000)
#define GPWTM4_GPTMSYNC_R_SYNCT2_TA        (0x00000010)
#define GPWTM4_GPTMSYNC_R_SYNCT2_TB        (0x00000020)
#define GPWTM4_GPTMSYNC_R_SYNCT2_BOTH      (0x00000030)

#define GPWTM4_GPTMSYNC_SYNCT2_MASK        (0x00000003)
#define GPWTM4_GPTMSYNC_SYNCT2_NA          (0x00000000)
#define GPWTM4_GPTMSYNC_SYNCT2_TA          (0x00000001)
#define GPWTM4_GPTMSYNC_SYNCT2_TB          (0x00000002)
#define GPWTM4_GPTMSYNC_SYNCT2_BOTH        (0x00000003)
//--------

//--------
#define GPWTM4_GPTMSYNC_R_SYNCT3_MASK      (0x000000C0)
#define GPWTM4_GPTMSYNC_R_SYNCT3_BIT       (6)
#define GPWTM4_GPTMSYNC_R_SYNCT3_NA        (0x00000000)
#define GPWTM4_GPTMSYNC_R_SYNCT3_TA        (0x00000040)
#define GPWTM4_GPTMSYNC_R_SYNCT3_TB        (0x00000080)
#define GPWTM4_GPTMSYNC_R_SYNCT3_BOTH      (0x000000C0)

#define GPWTM4_GPTMSYNC_SYNCT3_MASK        (0x00000003)
#define GPWTM4_GPTMSYNC_SYNCT3_NA          (0x00000000)
#define GPWTM4_GPTMSYNC_SYNCT3_TA          (0x00000001)
#define GPWTM4_GPTMSYNC_SYNCT3_TB          (0x00000002)
#define GPWTM4_GPTMSYNC_SYNCT3_BOTH        (0x00000003)
//--------

//--------
#define GPWTM4_GPTMSYNC_R_SYNCT4_MASK      (0x00000300)
#define GPWTM4_GPTMSYNC_R_SYNCT4_BIT       (8)
#define GPWTM4_GPTMSYNC_R_SYNCT4_NA        (0x00000000)
#define GPWTM4_GPTMSYNC_R_SYNCT4_TA        (0x00000100)
#define GPWTM4_GPTMSYNC_R_SYNCT4_TB        (0x00000200)
#define GPWTM4_GPTMSYNC_R_SYNCT4_BOTH      (0x00000300)

#define GPWTM4_GPTMSYNC_SYNCT4_MASK        (0x00000003)
#define GPWTM4_GPTMSYNC_SYNCT4_NA          (0x00000000)
#define GPWTM4_GPTMSYNC_SYNCT4_TA          (0x00000001)
#define GPWTM4_GPTMSYNC_SYNCT4_TB          (0x00000002)
#define GPWTM4_GPTMSYNC_SYNCT4_BOTH        (0x00000003)
//--------

//--------
#define GPWTM4_GPTMSYNC_R_SYNCT5_MASK      (0x00000C00)
#define GPWTM4_GPTMSYNC_R_SYNCT5_BIT       (10)
#define GPWTM4_GPTMSYNC_R_SYNCT5_NA        (0x00000000)
#define GPWTM4_GPTMSYNC_R_SYNCT5_TA        (0x00000400)
#define GPWTM4_GPTMSYNC_R_SYNCT5_TB        (0x00000800)
#define GPWTM4_GPTMSYNC_R_SYNCT5_BOTH      (0x00000C00)

#define GPWTM4_GPTMSYNC_SYNCT5_MASK        (0x00000003)
#define GPWTM4_GPTMSYNC_SYNCT5_NA          (0x00000000)
#define GPWTM4_GPTMSYNC_SYNCT5_TA          (0x00000001)
#define GPWTM4_GPTMSYNC_SYNCT5_TB          (0x00000002)
#define GPWTM4_GPTMSYNC_SYNCT5_BOTH        (0x00000003)
//--------

//--------
#define GPWTM4_GPTMSYNC_R_SYNCWT0_MASK      (0x00003000)
#define GPWTM4_GPTMSYNC_R_SYNCWT0_BIT       (12)
#define GPWTM4_GPTMSYNC_R_SYNCWT0_NA        (0x00000000)
#define GPWTM4_GPTMSYNC_R_SYNCWT0_TA        (0x00001000)
#define GPWTM4_GPTMSYNC_R_SYNCWT0_TB        (0x00002000)
#define GPWTM4_GPTMSYNC_R_SYNCWT0_BOTH      (0x00003000)

#define GPWTM4_GPTMSYNC_SYNCWT0_MASK        (0x00000003)
#define GPWTM4_GPTMSYNC_SYNCWT0_NA          (0x00000000)
#define GPWTM4_GPTMSYNC_SYNCWT0_TA          (0x00000001)
#define GPWTM4_GPTMSYNC_SYNCWT0_TB          (0x00000002)
#define GPWTM4_GPTMSYNC_SYNCWT0_BOTH        (0x00000003)
//--------

//--------
#define GPWTM4_GPTMSYNC_R_SYNCWT1_MASK      (0x0000C000)
#define GPWTM4_GPTMSYNC_R_SYNCWT1_BIT       (14)
#define GPWTM4_GPTMSYNC_R_SYNCWT1_NA        (0x00000000)
#define GPWTM4_GPTMSYNC_R_SYNCWT1_TA        (0x00004000)
#define GPWTM4_GPTMSYNC_R_SYNCWT1_TB        (0x00008000)
#define GPWTM4_GPTMSYNC_R_SYNCWT1_BOTH      (0x0000C000)

#define GPWTM4_GPTMSYNC_SYNCWT1_MASK        (0x00000003)
#define GPWTM4_GPTMSYNC_SYNCWT1_NA          (0x00000000)
#define GPWTM4_GPTMSYNC_SYNCWT1_TA          (0x00000001)
#define GPWTM4_GPTMSYNC_SYNCWT1_TB          (0x00000002)
#define GPWTM4_GPTMSYNC_SYNCWT1_BOTH        (0x00000003)
//--------

//--------
#define GPWTM4_GPTMSYNC_R_SYNCWT2_MASK      (0x00030000)
#define GPWTM4_GPTMSYNC_R_SYNCWT2_BIT       (16)
#define GPWTM4_GPTMSYNC_R_SYNCWT2_NA        (0x00000000)
#define GPWTM4_GPTMSYNC_R_SYNCWT2_TA        (0x00010000)
#define GPWTM4_GPTMSYNC_R_SYNCWT2_TB        (0x00020000)
#define GPWTM4_GPTMSYNC_R_SYNCWT2_BOTH      (0x00030000)

#define GPWTM4_GPTMSYNC_SYNCWT2_MASK        (0x00000003)
#define GPWTM4_GPTMSYNC_SYNCWT2_NA          (0x00000000)
#define GPWTM4_GPTMSYNC_SYNCWT2_TA          (0x00000001)
#define GPWTM4_GPTMSYNC_SYNCWT2_TB          (0x00000002)
#define GPWTM4_GPTMSYNC_SYNCWT2_BOTH        (0x00000003)
//--------

//--------
#define GPWTM4_GPTMSYNC_R_SYNCWT3_MASK      (0x000C0000)
#define GPWTM4_GPTMSYNC_R_SYNCWT3_BIT       (18)
#define GPWTM4_GPTMSYNC_R_SYNCWT3_NA        (0x00000000)
#define GPWTM4_GPTMSYNC_R_SYNCWT3_TA        (0x00040000)
#define GPWTM4_GPTMSYNC_R_SYNCWT3_TB        (0x00080000)
#define GPWTM4_GPTMSYNC_R_SYNCWT3_BOTH      (0x000C0000)

#define GPWTM4_GPTMSYNC_SYNCWT3_MASK        (0x00000003)
#define GPWTM4_GPTMSYNC_SYNCWT3_NA          (0x00000000)
#define GPWTM4_GPTMSYNC_SYNCWT3_TA          (0x00000001)
#define GPWTM4_GPTMSYNC_SYNCWT3_TB          (0x00000002)
#define GPWTM4_GPTMSYNC_SYNCWT3_BOTH        (0x00000003)
//--------

//--------
#define GPWTM4_GPTMSYNC_R_SYNCWT4_MASK      (0x0030000)
#define GPWTM4_GPTMSYNC_R_SYNCWT4_BIT       (20)
#define GPWTM4_GPTMSYNC_R_SYNCWT4_NA        (0x00000000)
#define GPWTM4_GPTMSYNC_R_SYNCWT4_TA        (0x00100000)
#define GPWTM4_GPTMSYNC_R_SYNCWT4_TB        (0x00200000)
#define GPWTM4_GPTMSYNC_R_SYNCWT4_BOTH      (0x00300000)

#define GPWTM4_GPTMSYNC_SYNCWT4_MASK        (0x00000003)
#define GPWTM4_GPTMSYNC_SYNCWT4_NA          (0x00000000)
#define GPWTM4_GPTMSYNC_SYNCWT4_TA          (0x00000001)
#define GPWTM4_GPTMSYNC_SYNCWT4_TB          (0x00000002)
#define GPWTM4_GPTMSYNC_SYNCWT4_BOTH        (0x00000003)
//--------

//--------
#define GPWTM4_GPTMSYNC_R_SYNCWT5_MASK      (0x00C00000)
#define GPWTM4_GPTMSYNC_R_SYNCWT5_BIT       (22)
#define GPWTM4_GPTMSYNC_R_SYNCWT5_NA        (0x00000000)
#define GPWTM4_GPTMSYNC_R_SYNCWT5_TA        (0x00400000)
#define GPWTM4_GPTMSYNC_R_SYNCWT5_TB        (0x00800000)
#define GPWTM4_GPTMSYNC_R_SYNCWT5_BOTH      (0x00C00000)

#define GPWTM4_GPTMSYNC_SYNCWT5_MASK        (0x00000003)
#define GPWTM4_GPTMSYNC_SYNCWT5_NA          (0x00000000)
#define GPWTM4_GPTMSYNC_SYNCWT5_TA          (0x00000001)
#define GPWTM4_GPTMSYNC_SYNCWT5_TB          (0x00000002)
#define GPWTM4_GPTMSYNC_SYNCWT5_BOTH        (0x00000003)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.6 GPTMIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMIMR            (((GPTMIMR_TypeDef*)(GPWTM4_BASE + GPTM_GPTMIMR_OFFSET )))
#define GPWTM4_GPTMIMR_R          (*((volatile  uint32_t *)(GPWTM4_BASE +GPTM_GPTMIMR_OFFSET)))

//--------
#define GPWTM4_GPTMIMR_R_TATOIM_MASK      (0x00000001)
#define GPWTM4_GPTMIMR_R_TATOIM_BIT       (0)
#define GPWTM4_GPTMIMR_R_TATOIM_DIS       (0x00000000)
#define GPWTM4_GPTMIMR_R_TATOIM_EN        (0x00000001)

#define GPWTM4_GPTMIMR_TATOIM_MASK        (0x00000001)
#define GPWTM4_GPTMIMR_TATOIM_DIS         (0x00000000)
#define GPWTM4_GPTMIMR_TATOIM_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMIMR_R_CAMIM_MASK      (0x00000002)
#define GPWTM4_GPTMIMR_R_CAMIM_BIT       (1)
#define GPWTM4_GPTMIMR_R_CAMIM_DIS       (0x00000000)
#define GPWTM4_GPTMIMR_R_CAMIM_EN        (0x00000002)

#define GPWTM4_GPTMIMR_CAMIM_MASK        (0x00000001)
#define GPWTM4_GPTMIMR_CAMIM_DIS         (0x00000000)
#define GPWTM4_GPTMIMR_CAMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMIMR_R_CAEIM_MASK      (0x00000004)
#define GPWTM4_GPTMIMR_R_CAEIM_BIT       (2)
#define GPWTM4_GPTMIMR_R_CAEIM_DIS       (0x00000000)
#define GPWTM4_GPTMIMR_R_CAEIM_EN        (0x00000004)

#define GPWTM4_GPTMIMR_CAEIM_MASK        (0x00000001)
#define GPWTM4_GPTMIMR_CAEIM_DIS         (0x00000000)
#define GPWTM4_GPTMIMR_CAEIM_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMIMR_R_RTCIM_MASK      (0x00000008)
#define GPWTM4_GPTMIMR_R_RTCIM_BIT       (3)
#define GPWTM4_GPTMIMR_R_RTCIM_DIS       (0x00000000)
#define GPWTM4_GPTMIMR_R_RTCIM_EN        (0x00000008)

#define GPWTM4_GPTMIMR_RTCIM_MASK        (0x00000001)
#define GPWTM4_GPTMIMR_RTCIM_DIS         (0x00000000)
#define GPWTM4_GPTMIMR_RTCIM_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMIMR_R_TAMIM_MASK      (0x00000010)
#define GPWTM4_GPTMIMR_R_TAMIM_BIT       (4)
#define GPWTM4_GPTMIMR_R_TAMIM_DIS       (0x00000000)
#define GPWTM4_GPTMIMR_R_TAMIM_EN        (0x00000010)

#define GPWTM4_GPTMIMR_TAMIM_MASK        (0x00000001)
#define GPWTM4_GPTMIMR_TAMIM_DIS         (0x00000000)
#define GPWTM4_GPTMIMR_TAMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMIMR_R_TBTOIM_MASK      (0x00000100)
#define GPWTM4_GPTMIMR_R_TBTOIM_BIT       (8)
#define GPWTM4_GPTMIMR_R_TBTOIM_DIS       (0x00000000)
#define GPWTM4_GPTMIMR_R_TBTOIM_EN        (0x00000100)

#define GPWTM4_GPTMIMR_TBTOIM_MASK        (0x00000001)
#define GPWTM4_GPTMIMR_TBTOIM_DIS         (0x00000000)
#define GPWTM4_GPTMIMR_TBTOIM_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMIMR_R_CBMIM_MASK      (0x00000200)
#define GPWTM4_GPTMIMR_R_CBMIM_BIT       (9)
#define GPWTM4_GPTMIMR_R_CBMIM_DIS       (0x00000000)
#define GPWTM4_GPTMIMR_R_CBMIM_EN        (0x00000200)

#define GPWTM4_GPTMIMR_CBMIM_MASK        (0x00000001)
#define GPWTM4_GPTMIMR_CBMIM_DIS         (0x00000000)
#define GPWTM4_GPTMIMR_CBMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMIMR_R_CBEIM_MASK      (0x00000400)
#define GPWTM4_GPTMIMR_R_CBEIM_BIT       (10)
#define GPWTM4_GPTMIMR_R_CBEIM_DIS       (0x00000000)
#define GPWTM4_GPTMIMR_R_CBEIM_EN        (0x00000400)

#define GPWTM4_GPTMIMR_CBEIM_MASK        (0x00000001)
#define GPWTM4_GPTMIMR_CBEIM_DIS         (0x00000000)
#define GPWTM4_GPTMIMR_CBEIM_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMIMR_R_TBMIM_MASK      (0x00000800)
#define GPWTM4_GPTMIMR_R_TBMIM_BIT       (11)
#define GPWTM4_GPTMIMR_R_TBMIM_DIS       (0x00000000)
#define GPWTM4_GPTMIMR_R_TBMIM_EN        (0x00000800)

#define GPWTM4_GPTMIMR_TBMIM_MASK        (0x00000001)
#define GPWTM4_GPTMIMR_TBMIM_DIS         (0x00000000)
#define GPWTM4_GPTMIMR_TBMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM4_GPTMIMR_R_WUEIM_MASK      (0x00010000)
#define GPWTM4_GPTMIMR_R_WUEIM_BIT       (16)
#define GPWTM4_GPTMIMR_R_WUEIM_DIS       (0x00000000)
#define GPWTM4_GPTMIMR_R_WUEIM_EN        (0x00010000)

#define GPWTM4_GPTMIMR_WUEIM_MASK        (0x00000001)
#define GPWTM4_GPTMIMR_WUEIM_DIS         (0x00000000)
#define GPWTM4_GPTMIMR_WUEIM_EN          (0x00000001)
//--------

#define GPWTM4_GPTMIMR_TATOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(0*4))))
#define GPWTM4_GPTMIMR_CAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(1*4))))
#define GPWTM4_GPTMIMR_CAEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(2*4))))
#define GPWTM4_GPTMIMR_RTCIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(3*4))))
#define GPWTM4_GPTMIMR_TAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(4*4))))
#define GPWTM4_GPTMIMR_TBTOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(8*4))))
#define GPWTM4_GPTMIMR_CBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(9*4))))
#define GPWTM4_GPTMIMR_CBEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(10*4))))
#define GPWTM4_GPTMIMR_TBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(11*4))))
#define GPWTM4_GPTMIMR_WUEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(16*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.7 GPTMRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMRIS            (((GPTMRIS_TypeDef*)(GPWTM4_BASE + GPTM_GPTMRIS_OFFSET )))
#define GPWTM4_GPTMRIS_R          (*((volatile const uint32_t *)(GPWTM4_BASE +GPTM_GPTMRIS_OFFSET)))



//--------
#define GPWTM4_GPTMRIS_R_TATORIS_MASK      (0x00000001)
#define GPWTM4_GPTMRIS_R_TATORIS_BIT       (0)
#define GPWTM4_GPTMRIS_R_TATORIS_NOACTIVE  (0x00000000)
#define GPWTM4_GPTMRIS_R_TATORIS_ACTIVE    (0x00000001)

#define GPWTM4_GPTMRIS_TATORIS_MASK        (0x00000001)
#define GPWTM4_GPTMRIS_TATORIS_NOACTIVE    (0x00000000)
#define GPWTM4_GPTMRIS_TATORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMRIS_R_CAMRIS_MASK      (0x00000002)
#define GPWTM4_GPTMRIS_R_CAMRIS_BIT       (1)
#define GPWTM4_GPTMRIS_R_CAMRIS_NOACTIVE  (0x00000000)
#define GPWTM4_GPTMRIS_R_CAMRIS_ACTIVE    (0x00000002)

#define GPWTM4_GPTMRIS_CAMRIS_MASK        (0x00000001)
#define GPWTM4_GPTMRIS_CAMRIS_NOACTIVE    (0x00000000)
#define GPWTM4_GPTMRIS_CAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMRIS_R_CAERIS_MASK      (0x00000004)
#define GPWTM4_GPTMRIS_R_CAERIS_BIT       (2)
#define GPWTM4_GPTMRIS_R_CAERIS_NOACTIVE  (0x00000000)
#define GPWTM4_GPTMRIS_R_CAERIS_ACTIVE    (0x00000004)

#define GPWTM4_GPTMRIS_CAERIS_MASK        (0x00000001)
#define GPWTM4_GPTMRIS_CAERIS_NOACTIVE    (0x00000000)
#define GPWTM4_GPTMRIS_CAERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMRIS_R_RTCRIS_MASK      (0x00000008)
#define GPWTM4_GPTMRIS_R_RTCRIS_BIT       (3)
#define GPWTM4_GPTMRIS_R_RTCRIS_NOACTIVE  (0x00000000)
#define GPWTM4_GPTMRIS_R_RTCRIS_ACTIVE    (0x00000008)

#define GPWTM4_GPTMRIS_RTCRIS_MASK        (0x00000001)
#define GPWTM4_GPTMRIS_RTCRIS_NOACTIVE    (0x00000000)
#define GPWTM4_GPTMRIS_RTCRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMRIS_R_TAMRIS_MASK      (0x00000010)
#define GPWTM4_GPTMRIS_R_TAMRIS_BIT       (4)
#define GPWTM4_GPTMRIS_R_TAMRIS_NOACTIVE  (0x00000000)
#define GPWTM4_GPTMRIS_R_TAMRIS_ACTIVE    (0x00000010)

#define GPWTM4_GPTMRIS_TAMRIS_MASK        (0x00000001)
#define GPWTM4_GPTMRIS_TAMRIS_NOACTIVE    (0x00000000)
#define GPWTM4_GPTMRIS_TAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMRIS_R_TBTORIS_MASK      (0x00000100)
#define GPWTM4_GPTMRIS_R_TBTORIS_BIT       (8)
#define GPWTM4_GPTMRIS_R_TBTORIS_NOACTIVE  (0x00000000)
#define GPWTM4_GPTMRIS_R_TBTORIS_ACTIVE    (0x00000100)

#define GPWTM4_GPTMRIS_TBTORIS_MASK        (0x00000001)
#define GPWTM4_GPTMRIS_TBTORIS_NOACTIVE    (0x00000000)
#define GPWTM4_GPTMRIS_TBTORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMRIS_R_CBMRIS_MASK      (0x00000200)
#define GPWTM4_GPTMRIS_R_CBMRIS_BIT       (9)
#define GPWTM4_GPTMRIS_R_CBMRIS_NOACTIVE  (0x00000000)
#define GPWTM4_GPTMRIS_R_CBMRIS_ACTIVE    (0x00000200)

#define GPWTM4_GPTMRIS_CBMRIS_MASK        (0x00000001)
#define GPWTM4_GPTMRIS_CBMRIS_NOACTIVE    (0x00000000)
#define GPWTM4_GPTMRIS_CBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMRIS_R_CBERIS_MASK      (0x00000400)
#define GPWTM4_GPTMRIS_R_CBERIS_BIT       (10)
#define GPWTM4_GPTMRIS_R_CBERIS_NOACTIVE  (0x00000000)
#define GPWTM4_GPTMRIS_R_CBERIS_ACTIVE    (0x00000400)

#define GPWTM4_GPTMRIS_CBERIS_MASK        (0x00000001)
#define GPWTM4_GPTMRIS_CBERIS_NOACTIVE    (0x00000000)
#define GPWTM4_GPTMRIS_CBERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMRIS_R_TBMRIS_MASK      (0x00000800)
#define GPWTM4_GPTMRIS_R_TBMRIS_BIT       (11)
#define GPWTM4_GPTMRIS_R_TBMRIS_NOACTIVE  (0x00000000)
#define GPWTM4_GPTMRIS_R_TBMRIS_ACTIVE    (0x00000800)

#define GPWTM4_GPTMRIS_TBMRIS_MASK        (0x00000001)
#define GPWTM4_GPTMRIS_TBMRIS_NOACTIVE    (0x00000000)
#define GPWTM4_GPTMRIS_TBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMRIS_R_WUERIS_MASK      (0x00010000)
#define GPWTM4_GPTMRIS_R_WUERIS_BIT       (16)
#define GPWTM4_GPTMRIS_R_WUERIS_NOACTIVE  (0x00000000)
#define GPWTM4_GPTMRIS_R_WUERIS_ACTIVE    (0x00010000)

#define GPWTM4_GPTMRIS_WUERIS_MASK        (0x00000001)
#define GPWTM4_GPTMRIS_WUERIS_NOACTIVE    (0x00000000)
#define GPWTM4_GPTMRIS_WUERIS_ACTIVE      (0x00000001)
//--------

#define GPWTM4_GPTMRIS_TATORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(0*4))))
#define GPWTM4_GPTMRIS_CAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(1*4))))
#define GPWTM4_GPTMRIS_CAERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(2*4))))
#define GPWTM4_GPTMRIS_RTCRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(3*4))))
#define GPWTM4_GPTMRIS_TAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(4*4))))
#define GPWTM4_GPTMRIS_TBTORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(8*4))))
#define GPWTM4_GPTMRIS_CBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(9*4))))
#define GPWTM4_GPTMRIS_CBERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(10*4))))
#define GPWTM4_GPTMRIS_TBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(11*4))))
#define GPWTM4_GPTMRIS_WUERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(16*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.8 GPTMMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMMIS            (((GPTMMIS_TypeDef*)(GPWTM4_BASE + GPTM_GPTMMIS_OFFSET )))
#define GPWTM4_GPTMMIS_R          (*((volatile const uint32_t *)(GPWTM4_BASE +GPTM_GPTMMIS_OFFSET)))




//--------
#define GPWTM4_GPTMMIS_R_TATOMIS_MASK      (0x00000001)
#define GPWTM4_GPTMMIS_R_TATOMIS_BIT       (0)
#define GPWTM4_GPTMMIS_R_TATOMIS_NOOCCUR  (0x00000000)
#define GPWTM4_GPTMMIS_R_TATOMIS_OCCUR    (0x00000001)

#define GPWTM4_GPTMMIS_TATOMIS_MASK        (0x00000001)
#define GPWTM4_GPTMMIS_TATOMIS_NOOCCUR    (0x00000000)
#define GPWTM4_GPTMMIS_TATOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMMIS_R_CAMMIS_MASK      (0x00000002)
#define GPWTM4_GPTMMIS_R_CAMMIS_BIT       (1)
#define GPWTM4_GPTMMIS_R_CAMMIS_NOOCCUR  (0x00000000)
#define GPWTM4_GPTMMIS_R_CAMMIS_OCCUR    (0x00000002)

#define GPWTM4_GPTMMIS_CAMMIS_MASK        (0x00000001)
#define GPWTM4_GPTMMIS_CAMMIS_NOOCCUR    (0x00000000)
#define GPWTM4_GPTMMIS_CAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMMIS_R_CAEMIS_MASK      (0x00000004)
#define GPWTM4_GPTMMIS_R_CAEMIS_BIT       (2)
#define GPWTM4_GPTMMIS_R_CAEMIS_NOOCCUR  (0x00000000)
#define GPWTM4_GPTMMIS_R_CAEMIS_OCCUR    (0x00000004)

#define GPWTM4_GPTMMIS_CAEMIS_MASK        (0x00000001)
#define GPWTM4_GPTMMIS_CAEMIS_NOOCCUR    (0x00000000)
#define GPWTM4_GPTMMIS_CAEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMMIS_R_RTCMIS_MASK      (0x00000008)
#define GPWTM4_GPTMMIS_R_RTCMIS_BIT       (3)
#define GPWTM4_GPTMMIS_R_RTCMIS_NOOCCUR  (0x00000000)
#define GPWTM4_GPTMMIS_R_RTCMIS_OCCUR    (0x00000008)

#define GPWTM4_GPTMMIS_RTCMIS_MASK        (0x00000001)
#define GPWTM4_GPTMMIS_RTCMIS_NOOCCUR    (0x00000000)
#define GPWTM4_GPTMMIS_RTCMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMMIS_R_TAMMIS_MASK      (0x00000010)
#define GPWTM4_GPTMMIS_R_TAMMIS_BIT       (4)
#define GPWTM4_GPTMMIS_R_TAMMIS_NOOCCUR  (0x00000000)
#define GPWTM4_GPTMMIS_R_TAMMIS_OCCUR    (0x00000010)

#define GPWTM4_GPTMMIS_TAMMIS_MASK        (0x00000001)
#define GPWTM4_GPTMMIS_TAMMIS_NOOCCUR    (0x00000000)
#define GPWTM4_GPTMMIS_TAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMMIS_R_TBTOMIS_MASK      (0x00000100)
#define GPWTM4_GPTMMIS_R_TBTOMIS_BIT       (8)
#define GPWTM4_GPTMMIS_R_TBTOMIS_NOOCCUR  (0x00000000)
#define GPWTM4_GPTMMIS_R_TBTOMIS_OCCUR    (0x00000100)

#define GPWTM4_GPTMMIS_TBTOMIS_MASK        (0x00000001)
#define GPWTM4_GPTMMIS_TBTOMIS_NOOCCUR    (0x00000000)
#define GPWTM4_GPTMMIS_TBTOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMMIS_R_CBMMIS_MASK      (0x00000200)
#define GPWTM4_GPTMMIS_R_CBMMIS_BIT       (9)
#define GPWTM4_GPTMMIS_R_CBMMIS_NOOCCUR  (0x00000000)
#define GPWTM4_GPTMMIS_R_CBMMIS_OCCUR    (0x00000200)

#define GPWTM4_GPTMMIS_CBMMIS_MASK        (0x00000001)
#define GPWTM4_GPTMMIS_CBMMIS_NOOCCUR    (0x00000000)
#define GPWTM4_GPTMMIS_CBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMMIS_R_CBEMIS_MASK      (0x00000400)
#define GPWTM4_GPTMMIS_R_CBEMIS_BIT       (10)
#define GPWTM4_GPTMMIS_R_CBEMIS_NOOCCUR  (0x00000000)
#define GPWTM4_GPTMMIS_R_CBEMIS_OCCUR    (0x00000400)

#define GPWTM4_GPTMMIS_CBEMIS_MASK        (0x00000001)
#define GPWTM4_GPTMMIS_CBEMIS_NOOCCUR    (0x00000000)
#define GPWTM4_GPTMMIS_CBEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMMIS_R_TBMMIS_MASK      (0x00000800)
#define GPWTM4_GPTMMIS_R_TBMMIS_BIT       (11)
#define GPWTM4_GPTMMIS_R_TBMMIS_NOOCCUR  (0x00000000)
#define GPWTM4_GPTMMIS_R_TBMMIS_OCCUR    (0x00000800)

#define GPWTM4_GPTMMIS_TBMMIS_MASK        (0x00000001)
#define GPWTM4_GPTMMIS_TBMMIS_NOOCCUR    (0x00000000)
#define GPWTM4_GPTMMIS_TBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM4_GPTMMIS_R_WUEMIS_MASK      (0x00010000)
#define GPWTM4_GPTMMIS_R_WUEMIS_BIT       (16)
#define GPWTM4_GPTMMIS_R_WUEMIS_NOOCCUR  (0x00000000)
#define GPWTM4_GPTMMIS_R_WUEMIS_OCCUR    (0x00010000)

#define GPWTM4_GPTMMIS_WUEMIS_MASK        (0x00000001)
#define GPWTM4_GPTMMIS_WUEMIS_NOOCCUR    (0x00000000)
#define GPWTM4_GPTMMIS_WUEMIS_OCCUR      (0x00000001)
//--------

#define GPWTM4_GPTMMIS_TATOMIS           (0x00000001)
#define GPWTM4_GPTMMIS_CAMMIS            (0x00000002)
#define GPWTM4_GPTMMIS_CAEMIS            (0x00000004)
#define GPWTM4_GPTMMIS_RTCMIS            (0x00000008)
#define GPWTM4_GPTMMIS_TAMMIS            (0x00000010)
#define GPWTM4_GPTMMIS_TBTOMIS           (0x00000100)
#define GPWTM4_GPTMMIS_CBMMIS            (0x00000200)
#define GPWTM4_GPTMMIS_CBEMIS            (0x00000400)
#define GPWTM4_GPTMMIS_TBMMIS            (0x00000800)
#define GPWTM4_GPTMMIS_WUEMIS            (0x00010000)


#define GPWTM4_GPTMMIS_TATOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(0*4))))
#define GPWTM4_GPTMMIS_CAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(1*4))))
#define GPWTM4_GPTMMIS_CAEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(2*4))))
#define GPWTM4_GPTMMIS_RTCMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(3*4))))
#define GPWTM4_GPTMMIS_TAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(4*4))))
#define GPWTM4_GPTMMIS_TBTOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(8*4))))
#define GPWTM4_GPTMMIS_CBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(9*4))))
#define GPWTM4_GPTMMIS_CBEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(10*4))))
#define GPWTM4_GPTMMIS_TBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(11*4))))
#define GPWTM4_GPTMMIS_WUEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.9 GPTMICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMICR            (((GPTMICR_TypeDef*)(GPWTM4_BASE + GPTM_GPTMICR_OFFSET )))
#define GPWTM4_GPTMICR_R          (*((volatile uint32_t *)(GPWTM4_BASE +GPTM_GPTMICR_OFFSET)))



//--------
#define GPWTM4_GPTMICR_R_TATOCINT_MASK      (0x00000001)
#define GPWTM4_GPTMICR_R_TATOCINT_BIT       (0)
#define GPWTM4_GPTMICR_R_TATOCINT_CLEAR     (0x00000001)

#define GPWTM4_GPTMICR_TATOCINT_MASK        (0x00000001)
#define GPWTM4_GPTMICR_TATOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM4_GPTMICR_R_CAMCINT_MASK      (0x00000002)
#define GPWTM4_GPTMICR_R_CAMCINT_BIT       (1)
#define GPWTM4_GPTMICR_R_CAMCINT_CLEAR     (0x00000002)

#define GPWTM4_GPTMICR_CAMCINT_MASK        (0x00000001)
#define GPWTM4_GPTMICR_CAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM4_GPTMICR_R_CAECINT_MASK      (0x00000004)
#define GPWTM4_GPTMICR_R_CAECINT_BIT       (2)
#define GPWTM4_GPTMICR_R_CAECINT_CLEAR     (0x00000004)

#define GPWTM4_GPTMICR_CAECINT_MASK        (0x00000001)
#define GPWTM4_GPTMICR_CAECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM4_GPTMICR_R_RTCCINT_MASK      (0x00000008)
#define GPWTM4_GPTMICR_R_RTCCINT_BIT       (3)
#define GPWTM4_GPTMICR_R_RTCCINT_CLEAR     (0x00000008)

#define GPWTM4_GPTMICR_RTCCINT_MASK        (0x00000001)
#define GPWTM4_GPTMICR_RTCCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM4_GPTMICR_R_TAMCINT_MASK      (0x00000010)
#define GPWTM4_GPTMICR_R_TAMCINT_BIT       (4)
#define GPWTM4_GPTMICR_R_TAMCINT_CLEAR     (0x00000010)

#define GPWTM4_GPTMICR_TAMCINT_MASK        (0x00000001)
#define GPWTM4_GPTMICR_TAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM4_GPTMICR_R_TBTOCINT_MASK      (0x00000100)
#define GPWTM4_GPTMICR_R_TBTOCINT_BIT       (8)
#define GPWTM4_GPTMICR_R_TBTOCINT_CLEAR     (0x00000100)

#define GPWTM4_GPTMICR_TBTOCINT_MASK        (0x00000001)
#define GPWTM4_GPTMICR_TBTOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM4_GPTMICR_R_CBMCINT_MASK      (0x00000200)
#define GPWTM4_GPTMICR_R_CBMCINT_BIT       (9)
#define GPWTM4_GPTMICR_R_CBMCINT_CLEAR     (0x00000200)

#define GPWTM4_GPTMICR_CBMCINT_MASK        (0x00000001)
#define GPWTM4_GPTMICR_CBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM4_GPTMICR_R_CBECINT_MASK      (0x00000400)
#define GPWTM4_GPTMICR_R_CBECINT_BIT       (10)
#define GPWTM4_GPTMICR_R_CBECINT_CLEAR     (0x00000400)

#define GPWTM4_GPTMICR_CBECINT_MASK        (0x00000001)
#define GPWTM4_GPTMICR_CBECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM4_GPTMICR_R_TBMCINT_MASK      (0x00000800)
#define GPWTM4_GPTMICR_R_TBMCINT_BIT       (11)
#define GPWTM4_GPTMICR_R_TBMCINT_CLEAR     (0x00000800)

#define GPWTM4_GPTMICR_TBMCINT_MASK        (0x00000001)
#define GPWTM4_GPTMICR_TBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM4_GPTMICR_R_WUECINT_MASK      (0x00010000)
#define GPWTM4_GPTMICR_R_WUECINT_BIT       (16)
#define GPWTM4_GPTMICR_R_WUECINT_CLEAR     (0x00010000)

#define GPWTM4_GPTMICR_WUECINT_MASK        (0x00000001)
#define GPWTM4_GPTMICR_WUECINT_CLEAR       (0x00000001)
//--------


#define GPWTM4_GPTMICR_TATOCINT           (0x00000001)
#define GPWTM4_GPTMICR_CAMCINT            (0x00000002)
#define GPWTM4_GPTMICR_CAECINT            (0x00000004)
#define GPWTM4_GPTMICR_RTCCINT            (0x00000008)
#define GPWTM4_GPTMICR_TAMCINT            (0x00000010)
#define GPWTM4_GPTMICR_TBTOCINT           (0x00000100)
#define GPWTM4_GPTMICR_CBMCINT            (0x00000200)
#define GPWTM4_GPTMICR_CBECINT            (0x00000400)
#define GPWTM4_GPTMICR_TBMCINT            (0x00000800)
#define GPWTM4_GPTMICR_WUECINT            (0x00010000)


#define GPWTM4_GPTMICR_TATOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(0*4))))
#define GPWTM4_GPTMICR_CAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(1*4))))
#define GPWTM4_GPTMICR_CAECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(2*4))))
#define GPWTM4_GPTMICR_RTCCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(3*4))))
#define GPWTM4_GPTMICR_TAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(4*4))))
#define GPWTM4_GPTMICR_TBTOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(8*4))))
#define GPWTM4_GPTMICR_CBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(9*4))))
#define GPWTM4_GPTMICR_CBECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(10*4))))
#define GPWTM4_GPTMICR_TBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(11*4))))
#define GPWTM4_GPTMICR_WUECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM4_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.10 GPTMTAILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMTAILR            (((GPTMTAILR_TypeDef*)(GPWTM4_BASE + GPTM_GPTMTAILR_OFFSET )))
#define GPWTM4_GPTMTAILR_R          (*((volatile uint32_t *)(GPWTM4_BASE +GPTM_GPTMTAILR_OFFSET)))

//--------
#define GPWTM4_GPTMTAILR_R_TAILR_MASK      (0xFFFFFFFF)
#define GPWTM4_GPTMTAILR_R_TAILR_BIT       (0)

#define GPWTM4_GPTMTAILR_TAILR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.11 GPTMTBILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMTBILR            (((GPTMTBILR_TypeDef*)(GPWTM4_BASE + GPTM_GPTMTBILR_OFFSET )))
#define GPWTM4_GPTMTBILR_R          (*((volatile uint32_t *)(GPWTM4_BASE +GPTM_GPTMTBILR_OFFSET)))

//--------
#define GPWTM4_GPTMTBILR_R_TBILR_MASK      (0xFFFFFFFF)
#define GPWTM4_GPTMTBILR_R_TBILR_BIT       (0)

#define GPWTM4_GPTMTBILR_TBILR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.12 GPTMTAMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMTAMATCHR            (((GPTMTAMATCHR_TypeDef*)(GPWTM4_BASE + GPTM_GPTMTAMATCHR_OFFSET )))
#define GPWTM4_GPTMTAMATCHR_R          (*((volatile uint32_t *)(GPWTM4_BASE +GPTM_GPTMTAMATCHR_OFFSET)))


//--------
#define GPWTM4_GPTMTAMATCHR_R_TAMR_MASK      (0xFFFFFFFF)
#define GPWTM4_GPTMTAMATCHR_R_TAMR_BIT       (0)

#define GPWTM4_GPTMTAMATCHR_TAMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.13 GPTMTBMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMTBMATCHR            (((GPTMTBMATCHR_TypeDef*)(GPWTM4_BASE + GPTM_GPTMTBMATCHR_OFFSET )))
#define GPWTM4_GPTMTBMATCHR_R          (*((volatile uint32_t *)(GPWTM4_BASE +GPTM_GPTMTBMATCHR_OFFSET)))


//--------
#define GPWTM4_GPTMTBMATCHR_R_TBMR_MASK      (0xFFFFFFFF)
#define GPWTM4_GPTMTBMATCHR_R_TBMR_BIT       (0)

#define GPWTM4_GPTMTBMATCHR_TBMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.14 GPTMTAPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMTAPR            (((GPTMTAPR_TypeDef*)(GPWTM4_BASE + GPTM_GPTMTAPR_OFFSET )))
#define GPWTM4_GPTMTAPR_R          (*((volatile uint32_t *)(GPWTM4_BASE +GPTM_GPTMTAPR_OFFSET)))


//--------
#define GPWTM4_GPTMTAPR_R_TAPSR_MASK      (0x000000FF)
#define GPWTM4_GPTMTAPR_R_TAPSR_BIT       (0)

#define GPWTM4_GPTMTAPR_TAPSR_MASK        (0x000000FF)
//--------

//--------
#define GPWTM4_GPTMTAPR_R_TAPSRH_MASK      (0x0000FF00)
#define GPWTM4_GPTMTAPR_R_TAPSRH_BIT       (8)

#define GPWTM4_GPTMTAPR_TAPSRH_MASK        (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.15 GPTMTBPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMTBPR            (((GPTMTBPR_TypeDef*)(GPWTM4_BASE + GPTM_GPTMTBPR_OFFSET )))
#define GPWTM4_GPTMTBPR_R          (*((volatile uint32_t *)(GPWTM4_BASE +GPTM_GPTMTBPR_OFFSET)))


//--------
#define GPWTM4_GPTMTBPR_R_TBPSR_MASK      (0x000000FF)
#define GPWTM4_GPTMTBPR_R_TBPSR_BIT       (0)

#define GPWTM4_GPTMTBPR_TBPSR_MASK        (0x000000FF)
//--------


//--------
#define GPWTM4_GPTMTBPR_R_TBPSRH_MASK      (0x0000FF00)
#define GPWTM4_GPTMTBPR_R_TBPSRH_BIT       (8)

#define GPWTM4_GPTMTBPR_TBPSRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.16 GPTMTAPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMTAPMR            (((GPTMTAPMR_TypeDef*)(GPWTM4_BASE + GPTM_GPTMTAPMR_OFFSET )))
#define GPWTM4_GPTMTAPMR_R          (*((volatile uint32_t *)(GPWTM4_BASE +GPTM_GPTMTAPMR_OFFSET)))


//--------
#define GPWTM4_GPTMTAPMR_R_TAPSMR_MASK      (0x000000FF)
#define GPWTM4_GPTMTAPMR_R_TAPSMR_BIT       (0)

#define GPWTM4_GPTMTAMPR_TAPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPWTM4_GPTMTAPMR_R_TAPSMRH_MASK      (0x0000FF00)
#define GPWTM4_GPTMTAPMR_R_TAPSMRH_BIT       (8)

#define GPWTM4_GPTMTAPMR_TAPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.17 GPTMTBPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMTBPMR            (((GPTMTBPMR_TypeDef*)(GPWTM4_BASE + GPTM_GPTMTBPMR_OFFSET )))
#define GPWTM4_GPTMTBPMR_R          (*((volatile uint32_t *)(GPWTM4_BASE +GPTM_GPTMTBPMR_OFFSET)))

//--------
#define GPWTM4_GPTMTBPMR_R_TBPSMR_MASK      (0x000000FF)
#define GPWTM4_GPTMTBPMR_R_TBPSMR_BIT       (0)

#define GPWTM4_GPTMTBMPR_TBPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPWTM4_GPTMTBPMR_R_TBPSMRH_MASK      (0x0000FF00)
#define GPWTM4_GPTMTBPMR_R_TBPSMRH_BIT       (8)

#define GPWTM4_GPTMTBPMR_TBPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.18 GPTMTAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMTAR            (((GPTMTAR_TypeDef*)(GPWTM4_BASE + GPTM_GPTMTAR_OFFSET )))
#define GPWTM4_GPTMTAR_R          (*((volatile const  int32_t *)(GPWTM4_BASE +GPTM_GPTMTAR_OFFSET)))


//--------
#define GPWTM4_GPTMTAR_R_TAR_MASK      (0xFFFFFFFF)
#define GPWTM4_GPTMTAR_R_TAR_BIT       (0)

#define GPWTM4_GPTMTAR_TAR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.19 GPTMTBR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMTBR            (((GPTMTBR_TypeDef*)(GPWTM4_BASE + GPTM_GPTMTBR_OFFSET )))
#define GPWTM4_GPTMTBR_R          (*((volatile const uint32_t *)(GPWTM4_BASE +GPTM_GPTMTBR_OFFSET)))


//--------
#define GPWTM4_GPTMTBR_R_TBR_MASK      (0xFFFFFFFF)
#define GPWTM4_GPTMTBR_R_TBR_BIT       (0)

#define GPWTM4_GPTMTBR_TBR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.20 GPTMTAV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMTAV            (((GPTMTAV_TypeDef*)(GPWTM4_BASE + GPTM_GPTMTAV_OFFSET )))
#define GPWTM4_GPTMTAV_R          (*((volatile uint32_t *)(GPWTM4_BASE +GPTM_GPTMTAV_OFFSET)))

//--------
#define GPWTM4_GPTMTAV_R_TAV_MASK      (0xFFFFFFFF)
#define GPWTM4_GPTMTAV_R_TAV_BIT       (0)

#define GPWTM4_GPTMTAV_TAV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.21 GPTMTBV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMTBV            (((GPTMTBV_TypeDef*)(GPWTM4_BASE + GPTM_GPTMTBV_OFFSET )))
#define GPWTM4_GPTMTBV_R          (*((volatile uint32_t *)(GPWTM4_BASE +GPTM_GPTMTBV_OFFSET)))


//--------
#define GPWTM4_GPTMTBV_R_TBV_MASK      (0xFFFFFFFF)
#define GPWTM4_GPTMTBV_R_TBV_BIT       (0)

#define GPWTM4_GPTMTBV_TBV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.22 GPTMRTCPD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMRTCPD            (((GPTMRTCPD_TypeDef*)(GPWTM4_BASE + GPTM_GPTMRTCPD_OFFSET )))
#define GPWTM4_GPTMRTCPD_R          (*((volatile const uint32_t *)(GPWTM4_BASE +GPTM_GPTMRTCPD_OFFSET)))


//--------
#define GPWTM4_GPTMRTCPD_R_RTCPD_MASK      (0x0000FFFF)
#define GPWTM4_GPTMRTCPD_R_RTCPD_BIT       (0)
#define GPWTM4_GPTMRTCPD_R_RTCPD_DEFAULT   (0x00007FFF)

#define GPWTM4_GPTMRTCPD_RTCPD_MASK        (0x0000FFFF)
#define GPWTM4_GPTMRTCPD_RTCPD_DEFAULT     (0x00007FFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.23 GPTMTAPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPWTM4_GPTMTAPS            (((GPTMTAPS_TypeDef*)(GPWTM4_BASE + GPTM_GPTMTAPS_OFFSET )))
#define GPWTM4_GPTMTAPS_R          (*((volatile const uint32_t *)(GPWTM4_BASE +GPTM_GPTMTAPS_OFFSET)))

//--------
#define GPWTM4_GPTMTAPS_R_PSS_MASK      (0x0000FFFF)
#define GPWTM4_GPTMTAPS_R_PSS_BIT       (0)

#define GPWTM4_GPTMTAPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.24 GPTMTBPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMTBPS            (((GPTMTBPS_TypeDef*)(GPWTM4_BASE + GPTM_GPTMTBPS_OFFSET )))
#define GPWTM4_GPTMTBPS_R          (*((volatile const uint32_t *)(GPWTM4_BASE +GPTM_GPTMTBPS_OFFSET)))

//--------
#define GPWTM4_GPTMTBPS_R_PSS_MASK      (0x0000FFFF)
#define GPWTM4_GPTMTBPS_R_PSS_BIT       (0)

#define GPWTM4_GPTMTBPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.25 GPTMTAPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define GPWTM4_GPTMTAPV            (((GPTMTAPV_TypeDef*)(GPWTM4_BASE + GPTM_GPTMTAPV_OFFSET )))
#define GPWTM4_GPTMTAPV_R          (*((volatile const uint32_t *)(GPWTM4_BASE +GPTM_GPTMTAPV_OFFSET)))

//--------
#define GPWTM4_GPTMTAPV_R_PSV_MASK      (0x0000FFFF)
#define GPWTM4_GPTMTAPV_R_PSV_BIT       (0)

#define GPWTM4_GPTMTAPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.26 GPTMTBPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPWTM4_GPTMTBPV            (((GPTMTBPV_TypeDef*)(GPWTM4_BASE + GPTM_GPTMTBPV_OFFSET )))
#define GPWTM4_GPTMTBPV_R          (*((volatile const uint32_t *)(GPWTM4_BASE +GPTM_GPTMTBPV_OFFSET)))

//--------
#define GPWTM4_GPTMTBPV_R_PSV_MASK      (0x0000FFFF)
#define GPWTM4_GPTMTBPV_R_PSV_BIT       (0)

#define GPWTM4_GPTMTBPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.27 GPTMPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM4_GPTMPP            (((GPTMPP_TypeDef*)(GPWTM4_BASE + GPTM_GPTMPP_OFFSET )))
#define GPWTM4_GPTMPP_R          (*((volatile const uint32_t *)(GPWTM4_BASE +GPTM_GPTMPP_OFFSET)))

#define GPWTM4_GPTMPP_SIZE        (0x0000000F)

//--------
#define GPWTM4_GPTMPP_R_SIZE_MASK      (0x0000000F)
#define GPWTM4_GPTMPP_R_SIZE_BIT       (0)
#define GPWTM4_GPTMPP_R_SIZE_16b       (0x00000000)
#define GPWTM4_GPTMPP_R_SIZE_32b       (0x00000001)

#define GPWTM4_GPTMPP_SIZE_MASK        (0x0000000F)
#define GPWTM4_GPTMPP_SIZE_16b         (0x00000000)
#define GPWTM4_GPTMPP_SIZE_32b         (0x00000001)
//--------



// ToDO GPWTM5
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 GPWTM5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.1 GPTMCFG ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMCFG            (((GPTMCFG_TypeDef*)(GPWTM5_BASE + GPTM_GPTMCFG_OFFSET )))
#define GPWTM5_GPTMCFG_R          (*((volatile uint32_t *)(GPWTM5_BASE +GPTM_GPTMCFG_OFFSET)))


//--------
#define GPWTM5_GPTMCFG_R_GPTMCFG_MASK      (0x00000007)
#define GPWTM5_GPTMCFG_R_GPTMCFG_BIT       (0)
#define GPWTM5_GPTMCFG_R_GPTMCFG_BOTH    (0x00000000)
#define GPWTM5_GPTMCFG_R_GPTMCFG_RTC       (0x00000001)
#define GPWTM5_GPTMCFG_R_GPTMCFG_SINGLE      (0x00000004)

#define GPWTM5_GPTMCFG_GPTMCFG_MASK        (0x00000007)
#define GPWTM5_GPTMCFG_GPTMCFG_BOTH      (0x00000000)
#define GPWTM5_GPTMCFG_GPTMCFG_RTC         (0x00000001)
#define GPWTM5_GPTMCFG_GPTMCFG_SINGLE        (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.2 GPTMTAMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMTAMR            (((GPTMTAMR_TypeDef*)(GPWTM5_BASE + GPTM_GPTMTAMR_OFFSET )))
#define GPWTM5_GPTMTAMR_R          (*((volatile uint32_t *)(GPWTM5_BASE +GPTM_GPTMTAMR_OFFSET)))


//--------
#define GPWTM5_GPTMTAMR_R_TAMR_MASK      (0x00000003)
#define GPWTM5_GPTMTAMR_R_TAMR_BIT       (0)
#define GPWTM5_GPTMTAMR_R_TAMR_ONESHOT   (0x00000001)
#define GPWTM5_GPTMTAMR_R_TAMR_PERIOD    (0x00000002)
#define GPWTM5_GPTMTAMR_R_TAMR_CAPTURE   (0x00000003)

#define GPWTM5_GPTMTAMR_TAMR_MASK        (0x00000003)
#define GPWTM5_GPTMTAMR_TAMR_ONESHOT     (0x00000001)
#define GPWTM5_GPTMTAMR_TAMR_PERIOD      (0x00000002)
#define GPWTM5_GPTMTAMR_TAMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPWTM5_GPTMTAMR_R_TACMR_MASK      (0x00000004)
#define GPWTM5_GPTMTAMR_R_TACMR_BIT       (2)
#define GPWTM5_GPTMTAMR_R_TACMR_EDGECOUNT (0x00000000)
#define GPWTM5_GPTMTAMR_R_TACMR_EDGETIME  (0x00000004)

#define GPWTM5_GPTMTAMR_TACMR_MASK        (0x00000001)
#define GPWTM5_GPTMTAMR_TACMR_EDGECOUNT   (0x00000000)
#define GPWTM5_GPTMTAMR_TACMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPWTM5_GPTMTAMR_R_TAAMS_MASK      (0x00000008)
#define GPWTM5_GPTMTAMR_R_TAAMS_BIT       (3)
#define GPWTM5_GPTMTAMR_R_TAAMS_CAPCOMP   (0x00000000)
#define GPWTM5_GPTMTAMR_R_TAAMS_PWM       (0x00000008)

#define GPWTM5_GPTMTAMR_TAAMS_MASK        (0x00000001)
#define GPWTM5_GPTMTAMR_TAAMS_CAPCOMP     (0x00000000)
#define GPWTM5_GPTMTAMR_TAAMS_PWM         (0x00000001)
//--------

//--------
#define GPWTM5_GPTMTAMR_R_TACDIR_MASK      (0x00000010)
#define GPWTM5_GPTMTAMR_R_TACDIR_BIT       (4)
#define GPWTM5_GPTMTAMR_R_TACDIR_DOWN      (0x00000000)
#define GPWTM5_GPTMTAMR_R_TACDIR_UP        (0x00000010)

#define GPWTM5_GPTMTAMR_TACDIR_MASK        (0x00000001)
#define GPWTM5_GPTMTAMR_TACDIR_DOWN        (0x00000000)
#define GPWTM5_GPTMTAMR_TACDIR_UP          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMTAMR_R_TAMIE_MASK      (0x00000020)
#define GPWTM5_GPTMTAMR_R_TAMIE_BIT       (5)
#define GPWTM5_GPTMTAMR_R_TAMIE_DIS       (0x00000000)
#define GPWTM5_GPTMTAMR_R_TAMIE_EN        (0x00000020)

#define GPWTM5_GPTMTAMR_TAMIE_MASK        (0x00000001)
#define GPWTM5_GPTMTAMR_TAMIE_DIS         (0x00000000)
#define GPWTM5_GPTMTAMR_TAMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMTAMR_R_TAWOT_MASK      (0x00000040)
#define GPWTM5_GPTMTAMR_R_TAWOT_BIT       (6)
#define GPWTM5_GPTMTAMR_R_TAWOT_INSTANT   (0x00000000)
#define GPWTM5_GPTMTAMR_R_TAWOT_TRIGGER   (0x00000040)

#define GPWTM5_GPTMTAMR_TAWOT_MASK        (0x00000001)
#define GPWTM5_GPTMTAMR_TAWOT_INSTANT     (0x00000000)
#define GPWTM5_GPTMTAMR_TAWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPWTM5_GPTMTAMR_R_TASNAPS_MASK      (0x00000080)
#define GPWTM5_GPTMTAMR_R_TASNAPS_BIT       (7)
#define GPWTM5_GPTMTAMR_R_TASNAPS_DIS       (0x00000000)
#define GPWTM5_GPTMTAMR_R_TASNAPS_EN        (0x00000080)

#define GPWTM5_GPTMTAMR_TASNAPS_MASK        (0x00000001)
#define GPWTM5_GPTMTAMR_TASNAPS_DIS         (0x00000000)
#define GPWTM5_GPTMTAMR_TASNAPS_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMTAMR_R_TAILD_MASK      (0x00000100)
#define GPWTM5_GPTMTAMR_R_TAILD_BIT       (8)
#define GPWTM5_GPTMTAMR_R_TAILD_NEXT      (0x00000000)
#define GPWTM5_GPTMTAMR_R_TAILD_TIMEOUT   (0x00000100)

#define GPWTM5_GPTMTAMR_TAILD_MASK        (0x00000001)
#define GPWTM5_GPTMTAMR_TAILD_NEXT        (0x00000000)
#define GPWTM5_GPTMTAMR_TAILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM5_GPTMTAMR_R_TAPWMIE_MASK      (0x00000200)
#define GPWTM5_GPTMTAMR_R_TAPWMIE_BIT       (9)
#define GPWTM5_GPTMTAMR_R_TAPWMIE_DIS       (0x00000000)
#define GPWTM5_GPTMTAMR_R_TAPWMIE_EN        (0x00000200)

#define GPWTM5_GPTMTAMR_TAPWMIE_MASK        (0x00000001)
#define GPWTM5_GPTMTAMR_TAPWMIE_DIS         (0x00000000)
#define GPWTM5_GPTMTAMR_TAPWMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMTAMR_R_TAMRSU_MASK      (0x00000400)
#define GPWTM5_GPTMTAMR_R_TAMRSU_BIT       (10)
#define GPWTM5_GPTMTAMR_R_TAMRSU_NEXT      (0x00000000)
#define GPWTM5_GPTMTAMR_R_TAMRSU_TIMEOUT   (0x00000400)

#define GPWTM5_GPTMTAMR_TAMRSU_MASK        (0x00000001)
#define GPWTM5_GPTMTAMR_TAMRSU_NEXT        (0x00000000)
#define GPWTM5_GPTMTAMR_TAMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM5_GPTMTAMR_R_TAPLO_MASK      (0x00000800)
#define GPWTM5_GPTMTAMR_R_TAPLO_BIT       (11)
#define GPWTM5_GPTMTAMR_R_TAPLO_LOW       (0x00000000)
#define GPWTM5_GPTMTAMR_R_TAPLO_HIGH      (0x00000800)

#define GPWTM5_GPTMTAMR_TAPLO_MASK        (0x00000001)
#define GPWTM5_GPTMTAMR_TAPLO_LOW         (0x00000000)
#define GPWTM5_GPTMTAMR_TAPLO_HIGH        (0x00000001)
//--------

#define GPWTM5_GPTMTAMR_TACMR_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(2*4))))
#define GPWTM5_GPTMTAMR_TAAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(3*4))))
#define GPWTM5_GPTMTAMR_TACDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(4*4))))
#define GPWTM5_GPTMTAMR_TAMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(5*4))))
#define GPWTM5_GPTMTAMR_TAWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(6*4))))
#define GPWTM5_GPTMTAMR_TASNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(7*4))))
#define GPWTM5_GPTMTAMR_TAILD_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(8*4))))
#define GPWTM5_GPTMTAMR_TAPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(9*4))))
#define GPWTM5_GPTMTAMR_TAMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(10*4))))
#define GPWTM5_GPTMTAMR_TAPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTAMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.3 GPTMTBMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMTBMR            (((GPTMTBMR_TypeDef*)(GPWTM5_BASE + GPTM_GPTMTBMR_OFFSET )))
#define GPWTM5_GPTMTBMR_R          (*((volatile uint32_t *)(GPWTM5_BASE +GPTM_GPTMTBMR_OFFSET)))


//--------
#define GPWTM5_GPTMTBMR_R_TBMR_MASK      (0x00000003)
#define GPWTM5_GPTMTBMR_R_TBMR_BIT       (0)
#define GPWTM5_GPTMTBMR_R_TBMR_ONESHOT   (0x00000001)
#define GPWTM5_GPTMTBMR_R_TBMR_PERIOD    (0x00000002)
#define GPWTM5_GPTMTBMR_R_TBMR_CAPTURE   (0x00000003)

#define GPWTM5_GPTMTBMR_TBMR_MASK        (0x00000003)
#define GPWTM5_GPTMTBMR_TBMR_ONESHOT     (0x00000001)
#define GPWTM5_GPTMTBMR_TBMR_PERIOD      (0x00000002)
#define GPWTM5_GPTMTBMR_TBMR_CAPTURE     (0x00000003)
//--------

//--------
#define GPWTM5_GPTMTBMR_R_TBCMR_MASK      (0x00000004)
#define GPWTM5_GPTMTBMR_R_TBCMR_BIT       (2)
#define GPWTM5_GPTMTBMR_R_TBCMR_EDGECOUNT (0x00000000)
#define GPWTM5_GPTMTBMR_R_TBCMR_EDGETIME  (0x00000004)

#define GPWTM5_GPTMTBMR_TBCMR_MASK        (0x00000001)
#define GPWTM5_GPTMTBMR_TBCMR_EDGECOUNT   (0x00000000)
#define GPWTM5_GPTMTBMR_TBCMR_EDGETIME    (0x00000001)
//--------

//--------
#define GPWTM5_GPTMTBMR_R_TBAMS_MASK      (0x00000008)
#define GPWTM5_GPTMTBMR_R_TBAMS_BIT       (3)
#define GPWTM5_GPTMTBMR_R_TBAMS_CAPCOMP   (0x00000000)
#define GPWTM5_GPTMTBMR_R_TBAMS_PWM       (0x00000008)

#define GPWTM5_GPTMTBMR_TBAMS_MASK        (0x00000001)
#define GPWTM5_GPTMTBMR_TBAMS_CAPCOMP     (0x00000000)
#define GPWTM5_GPTMTBMR_TBAMS_PWM         (0x00000001)
//--------

//--------
#define GPWTM5_GPTMTBMR_R_TBCDIR_MASK      (0x00000010)
#define GPWTM5_GPTMTBMR_R_TBCDIR_BIT       (4)
#define GPWTM5_GPTMTBMR_R_TBCDIR_DOWN      (0x00000000)
#define GPWTM5_GPTMTBMR_R_TBCDIR_UP        (0x00000010)

#define GPWTM5_GPTMTBMR_TBCDIR_MASK        (0x00000001)
#define GPWTM5_GPTMTBMR_TBCDIR_DOWN        (0x00000000)
#define GPWTM5_GPTMTBMR_TBCDIR_UP          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMTBMR_R_TBMIE_MASK      (0x00000020)
#define GPWTM5_GPTMTBMR_R_TBMIE_BIT       (5)
#define GPWTM5_GPTMTBMR_R_TBMIE_DIS       (0x00000000)
#define GPWTM5_GPTMTBMR_R_TBMIE_EN        (0x00000020)

#define GPWTM5_GPTMTBMR_TBMIE_MASK        (0x00000001)
#define GPWTM5_GPTMTBMR_TBMIE_DIS         (0x00000000)
#define GPWTM5_GPTMTBMR_TBMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMTBMR_R_TBWOT_MASK      (0x00000040)
#define GPWTM5_GPTMTBMR_R_TBWOT_BIT       (6)
#define GPWTM5_GPTMTBMR_R_TBWOT_INSTANT   (0x00000000)
#define GPWTM5_GPTMTBMR_R_TBWOT_TRIGGER   (0x00000040)

#define GPWTM5_GPTMTBMR_TBWOT_MASK        (0x00000001)
#define GPWTM5_GPTMTBMR_TBWOT_INSTANT     (0x00000000)
#define GPWTM5_GPTMTBMR_TBWOT_TRIGGER     (0x00000001)
//--------

//--------
#define GPWTM5_GPTMTBMR_R_TBSNAPS_MASK      (0x00000080)
#define GPWTM5_GPTMTBMR_R_TBSNAPS_BIT       (7)
#define GPWTM5_GPTMTBMR_R_TBSNAPS_DIS       (0x00000000)
#define GPWTM5_GPTMTBMR_R_TBSNAPS_EN        (0x00000080)

#define GPWTM5_GPTMTBMR_TBSNAPS_MASK        (0x00000001)
#define GPWTM5_GPTMTBMR_TBSNAPS_DIS         (0x00000000)
#define GPWTM5_GPTMTBMR_TBSNAPS_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMTBMR_R_TBILD_MASK      (0x00000100)
#define GPWTM5_GPTMTBMR_R_TBILD_BIT       (8)
#define GPWTM5_GPTMTBMR_R_TBILD_NEXT      (0x00000000)
#define GPWTM5_GPTMTBMR_R_TBILD_TIMEOUT   (0x00000100)

#define GPWTM5_GPTMTBMR_TBILD_MASK        (0x00000001)
#define GPWTM5_GPTMTBMR_TBILD_NEXT        (0x00000000)
#define GPWTM5_GPTMTBMR_TBILD_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM5_GPTMTBMR_R_TBPWMIE_MASK      (0x00000200)
#define GPWTM5_GPTMTBMR_R_TBPWMIE_BIT       (9)
#define GPWTM5_GPTMTBMR_R_TBPWMIE_DIS       (0x00000000)
#define GPWTM5_GPTMTBMR_R_TBPWMIE_EN        (0x00000200)

#define GPWTM5_GPTMTBMR_TBPWMIE_MASK        (0x00000001)
#define GPWTM5_GPTMTBMR_TBPWMIE_DIS         (0x00000000)
#define GPWTM5_GPTMTBMR_TBPWMIE_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMTBMR_R_TBMRSU_MASK      (0x00000400)
#define GPWTM5_GPTMTBMR_R_TBMRSU_BIT       (10)
#define GPWTM5_GPTMTBMR_R_TBMRSU_NEXT      (0x00000000)
#define GPWTM5_GPTMTBMR_R_TBMRSU_TIMEOUT   (0x00000400)

#define GPWTM5_GPTMTBMR_TBMRSU_MASK        (0x00000001)
#define GPWTM5_GPTMTBMR_TBMRSU_NEXT        (0x00000000)
#define GPWTM5_GPTMTBMR_TBMRSU_TIMEOUT     (0x00000001)
//--------

//--------
#define GPWTM5_GPTMTBMR_R_TBPLO_MASK      (0x00000800)
#define GPWTM5_GPTMTBMR_R_TBPLO_BIT       (11)
#define GPWTM5_GPTMTBMR_R_TBPLO_LOW       (0x00000000)
#define GPWTM5_GPTMTBMR_R_TBPLO_HIGH      (0x00000800)

#define GPWTM5_GPTMTBMR_TBPLO_MASK        (0x00000001)
#define GPWTM5_GPTMTBMR_TBPLO_LOW         (0x00000000)
#define GPWTM5_GPTMTBMR_TBPLO_HIGH        (0x00000001)
//--------

#define GPWTM5_GPTMTBMR_TBCMR_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(2*4))))
#define GPWTM5_GPTMTBMR_TBAMS_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(3*4))))
#define GPWTM5_GPTMTBMR_TBCDIR_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(4*4))))
#define GPWTM5_GPTMTBMR_TBMIE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(5*4))))
#define GPWTM5_GPTMTBMR_TBWOT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(6*4))))
#define GPWTM5_GPTMTBMR_TBSNAPS_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(7*4))))
#define GPWTM5_GPTMTBMR_TBILD_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(8*4))))
#define GPWTM5_GPTMTBMR_TBPWMIE_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(9*4))))
#define GPWTM5_GPTMTBMR_TBMRSU_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(10*4))))
#define GPWTM5_GPTMTBMR_TBPLO_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMTBMR_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.4 GPTMCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMCTL            (((GPTMCTL_TypeDef*)(GPWTM5_BASE + GPTM_GPTMCTL_OFFSET )))
#define GPWTM5_GPTMCTL_R          (*((volatile uint32_t *)(GPWTM5_BASE +GPTM_GPTMCTL_OFFSET)))


//--------
#define GPWTM5_GPTMCTL_R_TAEN_MASK      (0x00000001)
#define GPWTM5_GPTMCTL_R_TAEN_BIT       (0)
#define GPWTM5_GPTMCTL_R_TAEN_DIS       (0x00000000)
#define GPWTM5_GPTMCTL_R_TAEN_EN        (0x00000001)

#define GPWTM5_GPTMCTL_TAEN_MASK        (0x00000001)
#define GPWTM5_GPTMCTL_TAEN_DIS         (0x00000000)
#define GPWTM5_GPTMCTL_TAEN_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMCTL_R_TASTALL_MASK      (0x00000002)
#define GPWTM5_GPTMCTL_R_TASTALL_BIT       (1)
#define GPWTM5_GPTMCTL_R_TASTALL_CONTINUE  (0x00000000)
#define GPWTM5_GPTMCTL_R_TASTALL_FREEZE    (0x00000002)

#define GPWTM5_GPTMCTL_TASTALL_MASK        (0x00000001)
#define GPWTM5_GPTMCTL_TASTALL_CONTINUE    (0x00000000)
#define GPWTM5_GPTMCTL_TASTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMCTL_R_TAEVENT_MASK      (0x0000000C)
#define GPWTM5_GPTMCTL_R_TAEVENT_BIT       (2)
#define GPWTM5_GPTMCTL_R_TAEVENT_POS       (0x00000000)
#define GPWTM5_GPTMCTL_R_TAEVENT_NEG       (0x00000004)
#define GPWTM5_GPTMCTL_R_TAEVENT_BOTH      (0x0000000C)

#define GPWTM5_GPTMCTL_TAEVENT_MASK        (0x00000003)
#define GPWTM5_GPTMCTL_TAEVENT_NEG         (0x00000000)
#define GPWTM5_GPTMCTL_TAEVENT_POS         (0x00000001)
#define GPWTM5_GPTMCTL_TAEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPWTM5_GPTMCTL_R_RTCEN_MASK      (0x00000010)
#define GPWTM5_GPTMCTL_R_RTCEN_BIT       (4)
#define GPWTM5_GPTMCTL_R_RTCEN_CONTINUE  (0x00000000)
#define GPWTM5_GPTMCTL_R_RTCEN_FREEZE    (0x00000010)

#define GPWTM5_GPTMCTL_RTCEN_MASK        (0x00000001)
#define GPWTM5_GPTMCTL_RTCEN_CONTINUE    (0x00000000)
#define GPWTM5_GPTMCTL_RTCEN_FREEZE      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMCTL_R_TAOTE_MASK      (0x00000020)
#define GPWTM5_GPTMCTL_R_TAOTE_BIT       (5)
#define GPWTM5_GPTMCTL_R_TAOTE_DIS       (0x00000000)
#define GPWTM5_GPTMCTL_R_TAOTE_EN        (0x00000020)

#define GPWTM5_GPTMCTL_TAOTE_MASK        (0x00000001)
#define GPWTM5_GPTMCTL_TAOTE_DIS         (0x00000000)
#define GPWTM5_GPTMCTL_TAOTE_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMCTL_R_TAPWML_MASK      (0x00000040)
#define GPWTM5_GPTMCTL_R_TAPWML_BIT       (6)
#define GPWTM5_GPTMCTL_R_TAPWML_NA        (0x00000000)
#define GPWTM5_GPTMCTL_R_TAPWML_INV       (0x00000040)

#define GPWTM5_GPTMCTL_TAPWML_MASK        (0x00000001)
#define GPWTM5_GPTMCTL_TAPWML_NA          (0x00000000)
#define GPWTM5_GPTMCTL_TAPWML_INV         (0x00000001)
//--------



//--------
#define GPWTM5_GPTMCTL_R_TBEN_MASK      (0x00000100)
#define GPWTM5_GPTMCTL_R_TBEN_BIT       (8)
#define GPWTM5_GPTMCTL_R_TBEN_DIS       (0x00000000)
#define GPWTM5_GPTMCTL_R_TBEN_EN        (0x00000100)

#define GPWTM5_GPTMCTL_TBEN_MASK        (0x00000001)
#define GPWTM5_GPTMCTL_TBEN_DIS         (0x00000000)
#define GPWTM5_GPTMCTL_TBEN_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMCTL_R_TBSTALL_MASK      (0x00000200)
#define GPWTM5_GPTMCTL_R_TBSTALL_BIT       (9)
#define GPWTM5_GPTMCTL_R_TBSTALL_CONTINUE  (0x00000000)
#define GPWTM5_GPTMCTL_R_TBSTALL_FREEZE    (0x00000200)

#define GPWTM5_GPTMCTL_TBSTALL_MASK        (0x00000001)
#define GPWTM5_GPTMCTL_TBSTALL_CONTINUE    (0x00000000)
#define GPWTM5_GPTMCTL_TBSTALL_FREEZE      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMCTL_R_TBEVENT_MASK      (0x00000C00)
#define GPWTM5_GPTMCTL_R_TBEVENT_BIT       (10)
#define GPWTM5_GPTMCTL_R_TBEVENT_POS       (0x00000000)
#define GPWTM5_GPTMCTL_R_TBEVENT_NEG       (0x00000400)
#define GPWTM5_GPTMCTL_R_TBEVENT_BOTH      (0x00000C00)

#define GPWTM5_GPTMCTL_TBEVENT_MASK        (0x00000003)
#define GPWTM5_GPTMCTL_TBEVENT_NEG         (0x00000000)
#define GPWTM5_GPTMCTL_TBEVENT_POS         (0x00000001)
#define GPWTM5_GPTMCTL_TBEVENT_BOTH        (0x00000003)
//--------

//--------
#define GPWTM5_GPTMCTL_R_TBOTE_MASK      (0x00002000)
#define GPWTM5_GPTMCTL_R_TBOTE_BIT       (13)
#define GPWTM5_GPTMCTL_R_TBOTE_DIS       (0x00000000)
#define GPWTM5_GPTMCTL_R_TBOTE_EN        (0x00002000)

#define GPWTM5_GPTMCTL_TBOTE_MASK        (0x00000001)
#define GPWTM5_GPTMCTL_TBOTE_DIS         (0x00000000)
#define GPWTM5_GPTMCTL_TBOTE_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMCTL_R_TBPWML_MASK      (0x00004000)
#define GPWTM5_GPTMCTL_R_TBPWML_BIT       (14)
#define GPWTM5_GPTMCTL_R_TBPWML_NA        (0x00000000)
#define GPWTM5_GPTMCTL_R_TBPWML_INV       (0x00004000)

#define GPWTM5_GPTMCTL_TBPWML_MASK        (0x00000001)
#define GPWTM5_GPTMCTL_TBPWML_NA          (0x00000000)
#define GPWTM5_GPTMCTL_TBPWML_INV         (0x00000001)
//--------

#define GPWTM5_GPTMCTL_TAEN_BB      (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(0*4))))
#define GPWTM5_GPTMCTL_TASTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(1*4))))
#define GPWTM5_GPTMCTL_RTCEN_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(4*4))))
#define GPWTM5_GPTMCTL_TAOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(5*4))))
#define GPWTM5_GPTMCTL_TAPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTMGPTMCTL_OFFSET)*32)+(6*4))))
#define GPWTM5_GPTMCTL_TBEN_BB      (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(8*4))))
#define GPWTM5_GPTMCTL_TBSTALL_BB   (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(9*4))))
#define GPWTM5_GPTMCTL_TBOTE_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(13*4))))
#define GPWTM5_GPTMCTL_TBPWML_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMCTL_OFFSET)*32)+(14*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.5 GPTMSYNC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMSYNC            (((GPTMSYNC_TypeDef*)(GPWTM5_BASE + GPTM_GPTMSYNC_OFFSET )))
#define GPWTM5_GPTMSYNC_R          (*((volatile uint32_t *)(GPWTM5_BASE +GPTM_GPTMSYNC_OFFSET)))

//--------
#define GPWTM5_GPTMSYNC_R_SYNCT0_MASK      (0x00000003)
#define GPWTM5_GPTMSYNC_R_SYNCT0_BIT       (0)
#define GPWTM5_GPTMSYNC_R_SYNCT0_NA        (0x00000000)
#define GPWTM5_GPTMSYNC_R_SYNCT0_TA        (0x00000001)
#define GPWTM5_GPTMSYNC_R_SYNCT0_TB        (0x00000002)
#define GPWTM5_GPTMSYNC_R_SYNCT0_BOTH      (0x00000003)

#define GPWTM5_GPTMSYNC_SYNCT0_MASK        (0x00000003)
#define GPWTM5_GPTMSYNC_SYNCT0_NA          (0x00000000)
#define GPWTM5_GPTMSYNC_SYNCT0_TA          (0x00000001)
#define GPWTM5_GPTMSYNC_SYNCT0_TB          (0x00000002)
#define GPWTM5_GPTMSYNC_SYNCT0_BOTH        (0x00000003)
//--------

//--------
#define GPWTM5_GPTMSYNC_R_SYNCT1_MASK      (0x0000000C)
#define GPWTM5_GPTMSYNC_R_SYNCT1_BIT       (2)
#define GPWTM5_GPTMSYNC_R_SYNCT1_NA        (0x00000000)
#define GPWTM5_GPTMSYNC_R_SYNCT1_TA        (0x00000004)
#define GPWTM5_GPTMSYNC_R_SYNCT1_TB        (0x00000008)
#define GPWTM5_GPTMSYNC_R_SYNCT1_BOTH      (0x0000000C)

#define GPWTM5_GPTMSYNC_SYNCT1_MASK        (0x00000003)
#define GPWTM5_GPTMSYNC_SYNCT1_NA          (0x00000000)
#define GPWTM5_GPTMSYNC_SYNCT1_TA          (0x00000001)
#define GPWTM5_GPTMSYNC_SYNCT1_TB          (0x00000002)
#define GPWTM5_GPTMSYNC_SYNCT1_BOTH        (0x00000003)
//--------

//--------
#define GPWTM5_GPTMSYNC_R_SYNCT2_MASK      (0x00000030)
#define GPWTM5_GPTMSYNC_R_SYNCT2_BIT       (4)
#define GPWTM5_GPTMSYNC_R_SYNCT2_NA        (0x00000000)
#define GPWTM5_GPTMSYNC_R_SYNCT2_TA        (0x00000010)
#define GPWTM5_GPTMSYNC_R_SYNCT2_TB        (0x00000020)
#define GPWTM5_GPTMSYNC_R_SYNCT2_BOTH      (0x00000030)

#define GPWTM5_GPTMSYNC_SYNCT2_MASK        (0x00000003)
#define GPWTM5_GPTMSYNC_SYNCT2_NA          (0x00000000)
#define GPWTM5_GPTMSYNC_SYNCT2_TA          (0x00000001)
#define GPWTM5_GPTMSYNC_SYNCT2_TB          (0x00000002)
#define GPWTM5_GPTMSYNC_SYNCT2_BOTH        (0x00000003)
//--------

//--------
#define GPWTM5_GPTMSYNC_R_SYNCT3_MASK      (0x000000C0)
#define GPWTM5_GPTMSYNC_R_SYNCT3_BIT       (6)
#define GPWTM5_GPTMSYNC_R_SYNCT3_NA        (0x00000000)
#define GPWTM5_GPTMSYNC_R_SYNCT3_TA        (0x00000040)
#define GPWTM5_GPTMSYNC_R_SYNCT3_TB        (0x00000080)
#define GPWTM5_GPTMSYNC_R_SYNCT3_BOTH      (0x000000C0)

#define GPWTM5_GPTMSYNC_SYNCT3_MASK        (0x00000003)
#define GPWTM5_GPTMSYNC_SYNCT3_NA          (0x00000000)
#define GPWTM5_GPTMSYNC_SYNCT3_TA          (0x00000001)
#define GPWTM5_GPTMSYNC_SYNCT3_TB          (0x00000002)
#define GPWTM5_GPTMSYNC_SYNCT3_BOTH        (0x00000003)
//--------

//--------
#define GPWTM5_GPTMSYNC_R_SYNCT4_MASK      (0x00000300)
#define GPWTM5_GPTMSYNC_R_SYNCT4_BIT       (8)
#define GPWTM5_GPTMSYNC_R_SYNCT4_NA        (0x00000000)
#define GPWTM5_GPTMSYNC_R_SYNCT4_TA        (0x00000100)
#define GPWTM5_GPTMSYNC_R_SYNCT4_TB        (0x00000200)
#define GPWTM5_GPTMSYNC_R_SYNCT4_BOTH      (0x00000300)

#define GPWTM5_GPTMSYNC_SYNCT4_MASK        (0x00000003)
#define GPWTM5_GPTMSYNC_SYNCT4_NA          (0x00000000)
#define GPWTM5_GPTMSYNC_SYNCT4_TA          (0x00000001)
#define GPWTM5_GPTMSYNC_SYNCT4_TB          (0x00000002)
#define GPWTM5_GPTMSYNC_SYNCT4_BOTH        (0x00000003)
//--------

//--------
#define GPWTM5_GPTMSYNC_R_SYNCT5_MASK      (0x00000C00)
#define GPWTM5_GPTMSYNC_R_SYNCT5_BIT       (10)
#define GPWTM5_GPTMSYNC_R_SYNCT5_NA        (0x00000000)
#define GPWTM5_GPTMSYNC_R_SYNCT5_TA        (0x00000400)
#define GPWTM5_GPTMSYNC_R_SYNCT5_TB        (0x00000800)
#define GPWTM5_GPTMSYNC_R_SYNCT5_BOTH      (0x00000C00)

#define GPWTM5_GPTMSYNC_SYNCT5_MASK        (0x00000003)
#define GPWTM5_GPTMSYNC_SYNCT5_NA          (0x00000000)
#define GPWTM5_GPTMSYNC_SYNCT5_TA          (0x00000001)
#define GPWTM5_GPTMSYNC_SYNCT5_TB          (0x00000002)
#define GPWTM5_GPTMSYNC_SYNCT5_BOTH        (0x00000003)
//--------

//--------
#define GPWTM5_GPTMSYNC_R_SYNCWT0_MASK      (0x00003000)
#define GPWTM5_GPTMSYNC_R_SYNCWT0_BIT       (12)
#define GPWTM5_GPTMSYNC_R_SYNCWT0_NA        (0x00000000)
#define GPWTM5_GPTMSYNC_R_SYNCWT0_TA        (0x00001000)
#define GPWTM5_GPTMSYNC_R_SYNCWT0_TB        (0x00002000)
#define GPWTM5_GPTMSYNC_R_SYNCWT0_BOTH      (0x00003000)

#define GPWTM5_GPTMSYNC_SYNCWT0_MASK        (0x00000003)
#define GPWTM5_GPTMSYNC_SYNCWT0_NA          (0x00000000)
#define GPWTM5_GPTMSYNC_SYNCWT0_TA          (0x00000001)
#define GPWTM5_GPTMSYNC_SYNCWT0_TB          (0x00000002)
#define GPWTM5_GPTMSYNC_SYNCWT0_BOTH        (0x00000003)
//--------

//--------
#define GPWTM5_GPTMSYNC_R_SYNCWT1_MASK      (0x0000C000)
#define GPWTM5_GPTMSYNC_R_SYNCWT1_BIT       (14)
#define GPWTM5_GPTMSYNC_R_SYNCWT1_NA        (0x00000000)
#define GPWTM5_GPTMSYNC_R_SYNCWT1_TA        (0x00004000)
#define GPWTM5_GPTMSYNC_R_SYNCWT1_TB        (0x00008000)
#define GPWTM5_GPTMSYNC_R_SYNCWT1_BOTH      (0x0000C000)

#define GPWTM5_GPTMSYNC_SYNCWT1_MASK        (0x00000003)
#define GPWTM5_GPTMSYNC_SYNCWT1_NA          (0x00000000)
#define GPWTM5_GPTMSYNC_SYNCWT1_TA          (0x00000001)
#define GPWTM5_GPTMSYNC_SYNCWT1_TB          (0x00000002)
#define GPWTM5_GPTMSYNC_SYNCWT1_BOTH        (0x00000003)
//--------

//--------
#define GPWTM5_GPTMSYNC_R_SYNCWT2_MASK      (0x00030000)
#define GPWTM5_GPTMSYNC_R_SYNCWT2_BIT       (16)
#define GPWTM5_GPTMSYNC_R_SYNCWT2_NA        (0x00000000)
#define GPWTM5_GPTMSYNC_R_SYNCWT2_TA        (0x00010000)
#define GPWTM5_GPTMSYNC_R_SYNCWT2_TB        (0x00020000)
#define GPWTM5_GPTMSYNC_R_SYNCWT2_BOTH      (0x00030000)

#define GPWTM5_GPTMSYNC_SYNCWT2_MASK        (0x00000003)
#define GPWTM5_GPTMSYNC_SYNCWT2_NA          (0x00000000)
#define GPWTM5_GPTMSYNC_SYNCWT2_TA          (0x00000001)
#define GPWTM5_GPTMSYNC_SYNCWT2_TB          (0x00000002)
#define GPWTM5_GPTMSYNC_SYNCWT2_BOTH        (0x00000003)
//--------

//--------
#define GPWTM5_GPTMSYNC_R_SYNCWT3_MASK      (0x000C0000)
#define GPWTM5_GPTMSYNC_R_SYNCWT3_BIT       (18)
#define GPWTM5_GPTMSYNC_R_SYNCWT3_NA        (0x00000000)
#define GPWTM5_GPTMSYNC_R_SYNCWT3_TA        (0x00040000)
#define GPWTM5_GPTMSYNC_R_SYNCWT3_TB        (0x00080000)
#define GPWTM5_GPTMSYNC_R_SYNCWT3_BOTH      (0x000C0000)

#define GPWTM5_GPTMSYNC_SYNCWT3_MASK        (0x00000003)
#define GPWTM5_GPTMSYNC_SYNCWT3_NA          (0x00000000)
#define GPWTM5_GPTMSYNC_SYNCWT3_TA          (0x00000001)
#define GPWTM5_GPTMSYNC_SYNCWT3_TB          (0x00000002)
#define GPWTM5_GPTMSYNC_SYNCWT3_BOTH        (0x00000003)
//--------

//--------
#define GPWTM5_GPTMSYNC_R_SYNCWT4_MASK      (0x0030000)
#define GPWTM5_GPTMSYNC_R_SYNCWT4_BIT       (20)
#define GPWTM5_GPTMSYNC_R_SYNCWT4_NA        (0x00000000)
#define GPWTM5_GPTMSYNC_R_SYNCWT4_TA        (0x00100000)
#define GPWTM5_GPTMSYNC_R_SYNCWT4_TB        (0x00200000)
#define GPWTM5_GPTMSYNC_R_SYNCWT4_BOTH      (0x00300000)

#define GPWTM5_GPTMSYNC_SYNCWT4_MASK        (0x00000003)
#define GPWTM5_GPTMSYNC_SYNCWT4_NA          (0x00000000)
#define GPWTM5_GPTMSYNC_SYNCWT4_TA          (0x00000001)
#define GPWTM5_GPTMSYNC_SYNCWT4_TB          (0x00000002)
#define GPWTM5_GPTMSYNC_SYNCWT4_BOTH        (0x00000003)
//--------

//--------
#define GPWTM5_GPTMSYNC_R_SYNCWT5_MASK      (0x00C00000)
#define GPWTM5_GPTMSYNC_R_SYNCWT5_BIT       (22)
#define GPWTM5_GPTMSYNC_R_SYNCWT5_NA        (0x00000000)
#define GPWTM5_GPTMSYNC_R_SYNCWT5_TA        (0x00400000)
#define GPWTM5_GPTMSYNC_R_SYNCWT5_TB        (0x00800000)
#define GPWTM5_GPTMSYNC_R_SYNCWT5_BOTH      (0x00C00000)

#define GPWTM5_GPTMSYNC_SYNCWT5_MASK        (0x00000003)
#define GPWTM5_GPTMSYNC_SYNCWT5_NA          (0x00000000)
#define GPWTM5_GPTMSYNC_SYNCWT5_TA          (0x00000001)
#define GPWTM5_GPTMSYNC_SYNCWT5_TB          (0x00000002)
#define GPWTM5_GPTMSYNC_SYNCWT5_BOTH        (0x00000003)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.6 GPTMIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMIMR            (((GPTMIMR_TypeDef*)(GPWTM5_BASE + GPTM_GPTMIMR_OFFSET )))
#define GPWTM5_GPTMIMR_R          (*((volatile  uint32_t *)(GPWTM5_BASE +GPTM_GPTMIMR_OFFSET)))

//--------
#define GPWTM5_GPTMIMR_R_TATOIM_MASK      (0x00000001)
#define GPWTM5_GPTMIMR_R_TATOIM_BIT       (0)
#define GPWTM5_GPTMIMR_R_TATOIM_DIS       (0x00000000)
#define GPWTM5_GPTMIMR_R_TATOIM_EN        (0x00000001)

#define GPWTM5_GPTMIMR_TATOIM_MASK        (0x00000001)
#define GPWTM5_GPTMIMR_TATOIM_DIS         (0x00000000)
#define GPWTM5_GPTMIMR_TATOIM_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMIMR_R_CAMIM_MASK      (0x00000002)
#define GPWTM5_GPTMIMR_R_CAMIM_BIT       (1)
#define GPWTM5_GPTMIMR_R_CAMIM_DIS       (0x00000000)
#define GPWTM5_GPTMIMR_R_CAMIM_EN        (0x00000002)

#define GPWTM5_GPTMIMR_CAMIM_MASK        (0x00000001)
#define GPWTM5_GPTMIMR_CAMIM_DIS         (0x00000000)
#define GPWTM5_GPTMIMR_CAMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMIMR_R_CAEIM_MASK      (0x00000004)
#define GPWTM5_GPTMIMR_R_CAEIM_BIT       (2)
#define GPWTM5_GPTMIMR_R_CAEIM_DIS       (0x00000000)
#define GPWTM5_GPTMIMR_R_CAEIM_EN        (0x00000004)

#define GPWTM5_GPTMIMR_CAEIM_MASK        (0x00000001)
#define GPWTM5_GPTMIMR_CAEIM_DIS         (0x00000000)
#define GPWTM5_GPTMIMR_CAEIM_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMIMR_R_RTCIM_MASK      (0x00000008)
#define GPWTM5_GPTMIMR_R_RTCIM_BIT       (3)
#define GPWTM5_GPTMIMR_R_RTCIM_DIS       (0x00000000)
#define GPWTM5_GPTMIMR_R_RTCIM_EN        (0x00000008)

#define GPWTM5_GPTMIMR_RTCIM_MASK        (0x00000001)
#define GPWTM5_GPTMIMR_RTCIM_DIS         (0x00000000)
#define GPWTM5_GPTMIMR_RTCIM_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMIMR_R_TAMIM_MASK      (0x00000010)
#define GPWTM5_GPTMIMR_R_TAMIM_BIT       (4)
#define GPWTM5_GPTMIMR_R_TAMIM_DIS       (0x00000000)
#define GPWTM5_GPTMIMR_R_TAMIM_EN        (0x00000010)

#define GPWTM5_GPTMIMR_TAMIM_MASK        (0x00000001)
#define GPWTM5_GPTMIMR_TAMIM_DIS         (0x00000000)
#define GPWTM5_GPTMIMR_TAMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMIMR_R_TBTOIM_MASK      (0x00000100)
#define GPWTM5_GPTMIMR_R_TBTOIM_BIT       (8)
#define GPWTM5_GPTMIMR_R_TBTOIM_DIS       (0x00000000)
#define GPWTM5_GPTMIMR_R_TBTOIM_EN        (0x00000100)

#define GPWTM5_GPTMIMR_TBTOIM_MASK        (0x00000001)
#define GPWTM5_GPTMIMR_TBTOIM_DIS         (0x00000000)
#define GPWTM5_GPTMIMR_TBTOIM_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMIMR_R_CBMIM_MASK      (0x00000200)
#define GPWTM5_GPTMIMR_R_CBMIM_BIT       (9)
#define GPWTM5_GPTMIMR_R_CBMIM_DIS       (0x00000000)
#define GPWTM5_GPTMIMR_R_CBMIM_EN        (0x00000200)

#define GPWTM5_GPTMIMR_CBMIM_MASK        (0x00000001)
#define GPWTM5_GPTMIMR_CBMIM_DIS         (0x00000000)
#define GPWTM5_GPTMIMR_CBMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMIMR_R_CBEIM_MASK      (0x00000400)
#define GPWTM5_GPTMIMR_R_CBEIM_BIT       (10)
#define GPWTM5_GPTMIMR_R_CBEIM_DIS       (0x00000000)
#define GPWTM5_GPTMIMR_R_CBEIM_EN        (0x00000400)

#define GPWTM5_GPTMIMR_CBEIM_MASK        (0x00000001)
#define GPWTM5_GPTMIMR_CBEIM_DIS         (0x00000000)
#define GPWTM5_GPTMIMR_CBEIM_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMIMR_R_TBMIM_MASK      (0x00000800)
#define GPWTM5_GPTMIMR_R_TBMIM_BIT       (11)
#define GPWTM5_GPTMIMR_R_TBMIM_DIS       (0x00000000)
#define GPWTM5_GPTMIMR_R_TBMIM_EN        (0x00000800)

#define GPWTM5_GPTMIMR_TBMIM_MASK        (0x00000001)
#define GPWTM5_GPTMIMR_TBMIM_DIS         (0x00000000)
#define GPWTM5_GPTMIMR_TBMIM_EN          (0x00000001)
//--------

//--------
#define GPWTM5_GPTMIMR_R_WUEIM_MASK      (0x00010000)
#define GPWTM5_GPTMIMR_R_WUEIM_BIT       (16)
#define GPWTM5_GPTMIMR_R_WUEIM_DIS       (0x00000000)
#define GPWTM5_GPTMIMR_R_WUEIM_EN        (0x00010000)

#define GPWTM5_GPTMIMR_WUEIM_MASK        (0x00000001)
#define GPWTM5_GPTMIMR_WUEIM_DIS         (0x00000000)
#define GPWTM5_GPTMIMR_WUEIM_EN          (0x00000001)
//--------

#define GPWTM5_GPTMIMR_TATOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(0*4))))
#define GPWTM5_GPTMIMR_CAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(1*4))))
#define GPWTM5_GPTMIMR_CAEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(2*4))))
#define GPWTM5_GPTMIMR_RTCIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(3*4))))
#define GPWTM5_GPTMIMR_TAMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(4*4))))
#define GPWTM5_GPTMIMR_TBTOIM_BB    (*((volatile  uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(8*4))))
#define GPWTM5_GPTMIMR_CBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(9*4))))
#define GPWTM5_GPTMIMR_CBEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(10*4))))
#define GPWTM5_GPTMIMR_TBMIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(11*4))))
#define GPWTM5_GPTMIMR_WUEIM_BB     (*((volatile  uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMIMR_OFFSET)*32)+(16*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.7 GPTMRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMRIS            (((GPTMRIS_TypeDef*)(GPWTM5_BASE + GPTM_GPTMRIS_OFFSET )))
#define GPWTM5_GPTMRIS_R          (*((volatile const uint32_t *)(GPWTM5_BASE +GPTM_GPTMRIS_OFFSET)))



//--------
#define GPWTM5_GPTMRIS_R_TATORIS_MASK      (0x00000001)
#define GPWTM5_GPTMRIS_R_TATORIS_BIT       (0)
#define GPWTM5_GPTMRIS_R_TATORIS_NOACTIVE  (0x00000000)
#define GPWTM5_GPTMRIS_R_TATORIS_ACTIVE    (0x00000001)

#define GPWTM5_GPTMRIS_TATORIS_MASK        (0x00000001)
#define GPWTM5_GPTMRIS_TATORIS_NOACTIVE    (0x00000000)
#define GPWTM5_GPTMRIS_TATORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMRIS_R_CAMRIS_MASK      (0x00000002)
#define GPWTM5_GPTMRIS_R_CAMRIS_BIT       (1)
#define GPWTM5_GPTMRIS_R_CAMRIS_NOACTIVE  (0x00000000)
#define GPWTM5_GPTMRIS_R_CAMRIS_ACTIVE    (0x00000002)

#define GPWTM5_GPTMRIS_CAMRIS_MASK        (0x00000001)
#define GPWTM5_GPTMRIS_CAMRIS_NOACTIVE    (0x00000000)
#define GPWTM5_GPTMRIS_CAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMRIS_R_CAERIS_MASK      (0x00000004)
#define GPWTM5_GPTMRIS_R_CAERIS_BIT       (2)
#define GPWTM5_GPTMRIS_R_CAERIS_NOACTIVE  (0x00000000)
#define GPWTM5_GPTMRIS_R_CAERIS_ACTIVE    (0x00000004)

#define GPWTM5_GPTMRIS_CAERIS_MASK        (0x00000001)
#define GPWTM5_GPTMRIS_CAERIS_NOACTIVE    (0x00000000)
#define GPWTM5_GPTMRIS_CAERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMRIS_R_RTCRIS_MASK      (0x00000008)
#define GPWTM5_GPTMRIS_R_RTCRIS_BIT       (3)
#define GPWTM5_GPTMRIS_R_RTCRIS_NOACTIVE  (0x00000000)
#define GPWTM5_GPTMRIS_R_RTCRIS_ACTIVE    (0x00000008)

#define GPWTM5_GPTMRIS_RTCRIS_MASK        (0x00000001)
#define GPWTM5_GPTMRIS_RTCRIS_NOACTIVE    (0x00000000)
#define GPWTM5_GPTMRIS_RTCRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMRIS_R_TAMRIS_MASK      (0x00000010)
#define GPWTM5_GPTMRIS_R_TAMRIS_BIT       (4)
#define GPWTM5_GPTMRIS_R_TAMRIS_NOACTIVE  (0x00000000)
#define GPWTM5_GPTMRIS_R_TAMRIS_ACTIVE    (0x00000010)

#define GPWTM5_GPTMRIS_TAMRIS_MASK        (0x00000001)
#define GPWTM5_GPTMRIS_TAMRIS_NOACTIVE    (0x00000000)
#define GPWTM5_GPTMRIS_TAMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMRIS_R_TBTORIS_MASK      (0x00000100)
#define GPWTM5_GPTMRIS_R_TBTORIS_BIT       (8)
#define GPWTM5_GPTMRIS_R_TBTORIS_NOACTIVE  (0x00000000)
#define GPWTM5_GPTMRIS_R_TBTORIS_ACTIVE    (0x00000100)

#define GPWTM5_GPTMRIS_TBTORIS_MASK        (0x00000001)
#define GPWTM5_GPTMRIS_TBTORIS_NOACTIVE    (0x00000000)
#define GPWTM5_GPTMRIS_TBTORIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMRIS_R_CBMRIS_MASK      (0x00000200)
#define GPWTM5_GPTMRIS_R_CBMRIS_BIT       (9)
#define GPWTM5_GPTMRIS_R_CBMRIS_NOACTIVE  (0x00000000)
#define GPWTM5_GPTMRIS_R_CBMRIS_ACTIVE    (0x00000200)

#define GPWTM5_GPTMRIS_CBMRIS_MASK        (0x00000001)
#define GPWTM5_GPTMRIS_CBMRIS_NOACTIVE    (0x00000000)
#define GPWTM5_GPTMRIS_CBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMRIS_R_CBERIS_MASK      (0x00000400)
#define GPWTM5_GPTMRIS_R_CBERIS_BIT       (10)
#define GPWTM5_GPTMRIS_R_CBERIS_NOACTIVE  (0x00000000)
#define GPWTM5_GPTMRIS_R_CBERIS_ACTIVE    (0x00000400)

#define GPWTM5_GPTMRIS_CBERIS_MASK        (0x00000001)
#define GPWTM5_GPTMRIS_CBERIS_NOACTIVE    (0x00000000)
#define GPWTM5_GPTMRIS_CBERIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMRIS_R_TBMRIS_MASK      (0x00000800)
#define GPWTM5_GPTMRIS_R_TBMRIS_BIT       (11)
#define GPWTM5_GPTMRIS_R_TBMRIS_NOACTIVE  (0x00000000)
#define GPWTM5_GPTMRIS_R_TBMRIS_ACTIVE    (0x00000800)

#define GPWTM5_GPTMRIS_TBMRIS_MASK        (0x00000001)
#define GPWTM5_GPTMRIS_TBMRIS_NOACTIVE    (0x00000000)
#define GPWTM5_GPTMRIS_TBMRIS_ACTIVE      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMRIS_R_WUERIS_MASK      (0x00010000)
#define GPWTM5_GPTMRIS_R_WUERIS_BIT       (16)
#define GPWTM5_GPTMRIS_R_WUERIS_NOACTIVE  (0x00000000)
#define GPWTM5_GPTMRIS_R_WUERIS_ACTIVE    (0x00010000)

#define GPWTM5_GPTMRIS_WUERIS_MASK        (0x00000001)
#define GPWTM5_GPTMRIS_WUERIS_NOACTIVE    (0x00000000)
#define GPWTM5_GPTMRIS_WUERIS_ACTIVE      (0x00000001)
//--------

#define GPWTM5_GPTMRIS_TATORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(0*4))))
#define GPWTM5_GPTMRIS_CAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(1*4))))
#define GPWTM5_GPTMRIS_CAERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(2*4))))
#define GPWTM5_GPTMRIS_RTCRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(3*4))))
#define GPWTM5_GPTMRIS_TAMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(4*4))))
#define GPWTM5_GPTMRIS_TBTORIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(8*4))))
#define GPWTM5_GPTMRIS_CBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(9*4))))
#define GPWTM5_GPTMRIS_CBERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(10*4))))
#define GPWTM5_GPTMRIS_TBMRIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(11*4))))
#define GPWTM5_GPTMRIS_WUERIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMRIS_OFFSET)*32)+(16*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.8 GPTMMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMMIS            (((GPTMMIS_TypeDef*)(GPWTM5_BASE + GPTM_GPTMMIS_OFFSET )))
#define GPWTM5_GPTMMIS_R          (*((volatile const uint32_t *)(GPWTM5_BASE +GPTM_GPTMMIS_OFFSET)))




//--------
#define GPWTM5_GPTMMIS_R_TATOMIS_MASK      (0x00000001)
#define GPWTM5_GPTMMIS_R_TATOMIS_BIT       (0)
#define GPWTM5_GPTMMIS_R_TATOMIS_NOOCCUR  (0x00000000)
#define GPWTM5_GPTMMIS_R_TATOMIS_OCCUR    (0x00000001)

#define GPWTM5_GPTMMIS_TATOMIS_MASK        (0x00000001)
#define GPWTM5_GPTMMIS_TATOMIS_NOOCCUR    (0x00000000)
#define GPWTM5_GPTMMIS_TATOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMMIS_R_CAMMIS_MASK      (0x00000002)
#define GPWTM5_GPTMMIS_R_CAMMIS_BIT       (1)
#define GPWTM5_GPTMMIS_R_CAMMIS_NOOCCUR  (0x00000000)
#define GPWTM5_GPTMMIS_R_CAMMIS_OCCUR    (0x00000002)

#define GPWTM5_GPTMMIS_CAMMIS_MASK        (0x00000001)
#define GPWTM5_GPTMMIS_CAMMIS_NOOCCUR    (0x00000000)
#define GPWTM5_GPTMMIS_CAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMMIS_R_CAEMIS_MASK      (0x00000004)
#define GPWTM5_GPTMMIS_R_CAEMIS_BIT       (2)
#define GPWTM5_GPTMMIS_R_CAEMIS_NOOCCUR  (0x00000000)
#define GPWTM5_GPTMMIS_R_CAEMIS_OCCUR    (0x00000004)

#define GPWTM5_GPTMMIS_CAEMIS_MASK        (0x00000001)
#define GPWTM5_GPTMMIS_CAEMIS_NOOCCUR    (0x00000000)
#define GPWTM5_GPTMMIS_CAEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMMIS_R_RTCMIS_MASK      (0x00000008)
#define GPWTM5_GPTMMIS_R_RTCMIS_BIT       (3)
#define GPWTM5_GPTMMIS_R_RTCMIS_NOOCCUR  (0x00000000)
#define GPWTM5_GPTMMIS_R_RTCMIS_OCCUR    (0x00000008)

#define GPWTM5_GPTMMIS_RTCMIS_MASK        (0x00000001)
#define GPWTM5_GPTMMIS_RTCMIS_NOOCCUR    (0x00000000)
#define GPWTM5_GPTMMIS_RTCMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMMIS_R_TAMMIS_MASK      (0x00000010)
#define GPWTM5_GPTMMIS_R_TAMMIS_BIT       (4)
#define GPWTM5_GPTMMIS_R_TAMMIS_NOOCCUR  (0x00000000)
#define GPWTM5_GPTMMIS_R_TAMMIS_OCCUR    (0x00000010)

#define GPWTM5_GPTMMIS_TAMMIS_MASK        (0x00000001)
#define GPWTM5_GPTMMIS_TAMMIS_NOOCCUR    (0x00000000)
#define GPWTM5_GPTMMIS_TAMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMMIS_R_TBTOMIS_MASK      (0x00000100)
#define GPWTM5_GPTMMIS_R_TBTOMIS_BIT       (8)
#define GPWTM5_GPTMMIS_R_TBTOMIS_NOOCCUR  (0x00000000)
#define GPWTM5_GPTMMIS_R_TBTOMIS_OCCUR    (0x00000100)

#define GPWTM5_GPTMMIS_TBTOMIS_MASK        (0x00000001)
#define GPWTM5_GPTMMIS_TBTOMIS_NOOCCUR    (0x00000000)
#define GPWTM5_GPTMMIS_TBTOMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMMIS_R_CBMMIS_MASK      (0x00000200)
#define GPWTM5_GPTMMIS_R_CBMMIS_BIT       (9)
#define GPWTM5_GPTMMIS_R_CBMMIS_NOOCCUR  (0x00000000)
#define GPWTM5_GPTMMIS_R_CBMMIS_OCCUR    (0x00000200)

#define GPWTM5_GPTMMIS_CBMMIS_MASK        (0x00000001)
#define GPWTM5_GPTMMIS_CBMMIS_NOOCCUR    (0x00000000)
#define GPWTM5_GPTMMIS_CBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMMIS_R_CBEMIS_MASK      (0x00000400)
#define GPWTM5_GPTMMIS_R_CBEMIS_BIT       (10)
#define GPWTM5_GPTMMIS_R_CBEMIS_NOOCCUR  (0x00000000)
#define GPWTM5_GPTMMIS_R_CBEMIS_OCCUR    (0x00000400)

#define GPWTM5_GPTMMIS_CBEMIS_MASK        (0x00000001)
#define GPWTM5_GPTMMIS_CBEMIS_NOOCCUR    (0x00000000)
#define GPWTM5_GPTMMIS_CBEMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMMIS_R_TBMMIS_MASK      (0x00000800)
#define GPWTM5_GPTMMIS_R_TBMMIS_BIT       (11)
#define GPWTM5_GPTMMIS_R_TBMMIS_NOOCCUR  (0x00000000)
#define GPWTM5_GPTMMIS_R_TBMMIS_OCCUR    (0x00000800)

#define GPWTM5_GPTMMIS_TBMMIS_MASK        (0x00000001)
#define GPWTM5_GPTMMIS_TBMMIS_NOOCCUR    (0x00000000)
#define GPWTM5_GPTMMIS_TBMMIS_OCCUR      (0x00000001)
//--------

//--------
#define GPWTM5_GPTMMIS_R_WUEMIS_MASK      (0x00010000)
#define GPWTM5_GPTMMIS_R_WUEMIS_BIT       (16)
#define GPWTM5_GPTMMIS_R_WUEMIS_NOOCCUR  (0x00000000)
#define GPWTM5_GPTMMIS_R_WUEMIS_OCCUR    (0x00010000)

#define GPWTM5_GPTMMIS_WUEMIS_MASK        (0x00000001)
#define GPWTM5_GPTMMIS_WUEMIS_NOOCCUR    (0x00000000)
#define GPWTM5_GPTMMIS_WUEMIS_OCCUR      (0x00000001)
//--------

#define GPWTM5_GPTMMIS_TATOMIS           (0x00000001)
#define GPWTM5_GPTMMIS_CAMMIS            (0x00000002)
#define GPWTM5_GPTMMIS_CAEMIS            (0x00000004)
#define GPWTM5_GPTMMIS_RTCMIS            (0x00000008)
#define GPWTM5_GPTMMIS_TAMMIS            (0x00000010)
#define GPWTM5_GPTMMIS_TBTOMIS           (0x00000100)
#define GPWTM5_GPTMMIS_CBMMIS            (0x00000200)
#define GPWTM5_GPTMMIS_CBEMIS            (0x00000400)
#define GPWTM5_GPTMMIS_TBMMIS            (0x00000800)
#define GPWTM5_GPTMMIS_WUEMIS            (0x00010000)


#define GPWTM5_GPTMMIS_TATOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(0*4))))
#define GPWTM5_GPTMMIS_CAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(1*4))))
#define GPWTM5_GPTMMIS_CAEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(2*4))))
#define GPWTM5_GPTMMIS_RTCMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(3*4))))
#define GPWTM5_GPTMMIS_TAMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(4*4))))
#define GPWTM5_GPTMMIS_TBTOMIS_BB    (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(8*4))))
#define GPWTM5_GPTMMIS_CBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(9*4))))
#define GPWTM5_GPTMMIS_CBEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(10*4))))
#define GPWTM5_GPTMMIS_TBMMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(11*4))))
#define GPWTM5_GPTMMIS_WUEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMMIS_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.9 GPTMICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMICR            (((GPTMICR_TypeDef*)(GPWTM5_BASE + GPTM_GPTMICR_OFFSET )))
#define GPWTM5_GPTMICR_R          (*((volatile uint32_t *)(GPWTM5_BASE +GPTM_GPTMICR_OFFSET)))



//--------
#define GPWTM5_GPTMICR_R_TATOCINT_MASK      (0x00000001)
#define GPWTM5_GPTMICR_R_TATOCINT_BIT       (0)
#define GPWTM5_GPTMICR_R_TATOCINT_CLEAR     (0x00000001)

#define GPWTM5_GPTMICR_TATOCINT_MASK        (0x00000001)
#define GPWTM5_GPTMICR_TATOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM5_GPTMICR_R_CAMCINT_MASK      (0x00000002)
#define GPWTM5_GPTMICR_R_CAMCINT_BIT       (1)
#define GPWTM5_GPTMICR_R_CAMCINT_CLEAR     (0x00000002)

#define GPWTM5_GPTMICR_CAMCINT_MASK        (0x00000001)
#define GPWTM5_GPTMICR_CAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM5_GPTMICR_R_CAECINT_MASK      (0x00000004)
#define GPWTM5_GPTMICR_R_CAECINT_BIT       (2)
#define GPWTM5_GPTMICR_R_CAECINT_CLEAR     (0x00000004)

#define GPWTM5_GPTMICR_CAECINT_MASK        (0x00000001)
#define GPWTM5_GPTMICR_CAECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM5_GPTMICR_R_RTCCINT_MASK      (0x00000008)
#define GPWTM5_GPTMICR_R_RTCCINT_BIT       (3)
#define GPWTM5_GPTMICR_R_RTCCINT_CLEAR     (0x00000008)

#define GPWTM5_GPTMICR_RTCCINT_MASK        (0x00000001)
#define GPWTM5_GPTMICR_RTCCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM5_GPTMICR_R_TAMCINT_MASK      (0x00000010)
#define GPWTM5_GPTMICR_R_TAMCINT_BIT       (4)
#define GPWTM5_GPTMICR_R_TAMCINT_CLEAR     (0x00000010)

#define GPWTM5_GPTMICR_TAMCINT_MASK        (0x00000001)
#define GPWTM5_GPTMICR_TAMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM5_GPTMICR_R_TBTOCINT_MASK      (0x00000100)
#define GPWTM5_GPTMICR_R_TBTOCINT_BIT       (8)
#define GPWTM5_GPTMICR_R_TBTOCINT_CLEAR     (0x00000100)

#define GPWTM5_GPTMICR_TBTOCINT_MASK        (0x00000001)
#define GPWTM5_GPTMICR_TBTOCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM5_GPTMICR_R_CBMCINT_MASK      (0x00000200)
#define GPWTM5_GPTMICR_R_CBMCINT_BIT       (9)
#define GPWTM5_GPTMICR_R_CBMCINT_CLEAR     (0x00000200)

#define GPWTM5_GPTMICR_CBMCINT_MASK        (0x00000001)
#define GPWTM5_GPTMICR_CBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM5_GPTMICR_R_CBECINT_MASK      (0x00000400)
#define GPWTM5_GPTMICR_R_CBECINT_BIT       (10)
#define GPWTM5_GPTMICR_R_CBECINT_CLEAR     (0x00000400)

#define GPWTM5_GPTMICR_CBECINT_MASK        (0x00000001)
#define GPWTM5_GPTMICR_CBECINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM5_GPTMICR_R_TBMCINT_MASK      (0x00000800)
#define GPWTM5_GPTMICR_R_TBMCINT_BIT       (11)
#define GPWTM5_GPTMICR_R_TBMCINT_CLEAR     (0x00000800)

#define GPWTM5_GPTMICR_TBMCINT_MASK        (0x00000001)
#define GPWTM5_GPTMICR_TBMCINT_CLEAR       (0x00000001)
//--------

//--------
#define GPWTM5_GPTMICR_R_WUECINT_MASK      (0x00010000)
#define GPWTM5_GPTMICR_R_WUECINT_BIT       (16)
#define GPWTM5_GPTMICR_R_WUECINT_CLEAR     (0x00010000)

#define GPWTM5_GPTMICR_WUECINT_MASK        (0x00000001)
#define GPWTM5_GPTMICR_WUECINT_CLEAR       (0x00000001)
//--------


#define GPWTM5_GPTMICR_TATOCINT           (0x00000001)
#define GPWTM5_GPTMICR_CAMCINT            (0x00000002)
#define GPWTM5_GPTMICR_CAECINT            (0x00000004)
#define GPWTM5_GPTMICR_RTCCINT            (0x00000008)
#define GPWTM5_GPTMICR_TAMCINT            (0x00000010)
#define GPWTM5_GPTMICR_TBTOCINT           (0x00000100)
#define GPWTM5_GPTMICR_CBMCINT            (0x00000200)
#define GPWTM5_GPTMICR_CBECINT            (0x00000400)
#define GPWTM5_GPTMICR_TBMCINT            (0x00000800)
#define GPWTM5_GPTMICR_WUECINT            (0x00010000)


#define GPWTM5_GPTMICR_TATOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(0*4))))
#define GPWTM5_GPTMICR_CAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(1*4))))
#define GPWTM5_GPTMICR_CAECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(2*4))))
#define GPWTM5_GPTMICR_RTCCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(3*4))))
#define GPWTM5_GPTMICR_TAMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(4*4))))
#define GPWTM5_GPTMICR_TBTOCINT_BB    (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(8*4))))
#define GPWTM5_GPTMICR_CBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(9*4))))
#define GPWTM5_GPTMICR_CBECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(10*4))))
#define GPWTM5_GPTMICR_TBMCINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(11*4))))
#define GPWTM5_GPTMICR_WUECINT_BB     (*((volatile uint32_t *)(0x42000000+((GPWTM5_OFFSET+GPTM_GPTMICR_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.10 GPTMTAILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMTAILR            (((GPTMTAILR_TypeDef*)(GPWTM5_BASE + GPTM_GPTMTAILR_OFFSET )))
#define GPWTM5_GPTMTAILR_R          (*((volatile uint32_t *)(GPWTM5_BASE +GPTM_GPTMTAILR_OFFSET)))

//--------
#define GPWTM5_GPTMTAILR_R_TAILR_MASK      (0xFFFFFFFF)
#define GPWTM5_GPTMTAILR_R_TAILR_BIT       (0)

#define GPWTM5_GPTMTAILR_TAILR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.11 GPTMTBILR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMTBILR            (((GPTMTBILR_TypeDef*)(GPWTM5_BASE + GPTM_GPTMTBILR_OFFSET )))
#define GPWTM5_GPTMTBILR_R          (*((volatile uint32_t *)(GPWTM5_BASE +GPTM_GPTMTBILR_OFFSET)))

//--------
#define GPWTM5_GPTMTBILR_R_TBILR_MASK      (0xFFFFFFFF)
#define GPWTM5_GPTMTBILR_R_TBILR_BIT       (0)

#define GPWTM5_GPTMTBILR_TBILR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.12 GPTMTAMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMTAMATCHR            (((GPTMTAMATCHR_TypeDef*)(GPWTM5_BASE + GPTM_GPTMTAMATCHR_OFFSET )))
#define GPWTM5_GPTMTAMATCHR_R          (*((volatile uint32_t *)(GPWTM5_BASE +GPTM_GPTMTAMATCHR_OFFSET)))


//--------
#define GPWTM5_GPTMTAMATCHR_R_TAMR_MASK      (0xFFFFFFFF)
#define GPWTM5_GPTMTAMATCHR_R_TAMR_BIT       (0)

#define GPWTM5_GPTMTAMATCHR_TAMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.13 GPTMTBMATCHR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMTBMATCHR            (((GPTMTBMATCHR_TypeDef*)(GPWTM5_BASE + GPTM_GPTMTBMATCHR_OFFSET )))
#define GPWTM5_GPTMTBMATCHR_R          (*((volatile uint32_t *)(GPWTM5_BASE +GPTM_GPTMTBMATCHR_OFFSET)))


//--------
#define GPWTM5_GPTMTBMATCHR_R_TBMR_MASK      (0xFFFFFFFF)
#define GPWTM5_GPTMTBMATCHR_R_TBMR_BIT       (0)

#define GPWTM5_GPTMTBMATCHR_TBMR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.14 GPTMTAPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMTAPR            (((GPTMTAPR_TypeDef*)(GPWTM5_BASE + GPTM_GPTMTAPR_OFFSET )))
#define GPWTM5_GPTMTAPR_R          (*((volatile uint32_t *)(GPWTM5_BASE +GPTM_GPTMTAPR_OFFSET)))


//--------
#define GPWTM5_GPTMTAPR_R_TAPSR_MASK      (0x000000FF)
#define GPWTM5_GPTMTAPR_R_TAPSR_BIT       (0)

#define GPWTM5_GPTMTAPR_TAPSR_MASK        (0x000000FF)
//--------

//--------
#define GPWTM5_GPTMTAPR_R_TAPSRH_MASK      (0x0000FF00)
#define GPWTM5_GPTMTAPR_R_TAPSRH_BIT       (8)

#define GPWTM5_GPTMTAPR_TAPSRH_MASK        (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.15 GPTMTBPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMTBPR            (((GPTMTBPR_TypeDef*)(GPWTM5_BASE + GPTM_GPTMTBPR_OFFSET )))
#define GPWTM5_GPTMTBPR_R          (*((volatile uint32_t *)(GPWTM5_BASE +GPTM_GPTMTBPR_OFFSET)))


//--------
#define GPWTM5_GPTMTBPR_R_TBPSR_MASK      (0x000000FF)
#define GPWTM5_GPTMTBPR_R_TBPSR_BIT       (0)

#define GPWTM5_GPTMTBPR_TBPSR_MASK        (0x000000FF)
//--------


//--------
#define GPWTM5_GPTMTBPR_R_TBPSRH_MASK      (0x0000FF00)
#define GPWTM5_GPTMTBPR_R_TBPSRH_BIT       (8)

#define GPWTM5_GPTMTBPR_TBPSRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.16 GPTMTAPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMTAPMR            (((GPTMTAPMR_TypeDef*)(GPWTM5_BASE + GPTM_GPTMTAPMR_OFFSET )))
#define GPWTM5_GPTMTAPMR_R          (*((volatile uint32_t *)(GPWTM5_BASE +GPTM_GPTMTAPMR_OFFSET)))


//--------
#define GPWTM5_GPTMTAPMR_R_TAPSMR_MASK      (0x000000FF)
#define GPWTM5_GPTMTAPMR_R_TAPSMR_BIT       (0)

#define GPWTM5_GPTMTAMPR_TAPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPWTM5_GPTMTAPMR_R_TAPSMRH_MASK      (0x0000FF00)
#define GPWTM5_GPTMTAPMR_R_TAPSMRH_BIT       (8)

#define GPWTM5_GPTMTAPMR_TAPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.17 GPTMTBPMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMTBPMR            (((GPTMTBPMR_TypeDef*)(GPWTM5_BASE + GPTM_GPTMTBPMR_OFFSET )))
#define GPWTM5_GPTMTBPMR_R          (*((volatile uint32_t *)(GPWTM5_BASE +GPTM_GPTMTBPMR_OFFSET)))

//--------
#define GPWTM5_GPTMTBPMR_R_TBPSMR_MASK      (0x000000FF)
#define GPWTM5_GPTMTBPMR_R_TBPSMR_BIT       (0)

#define GPWTM5_GPTMTBMPR_TBPSMR_MASK        (0x000000FF)
//--------

//--------
#define GPWTM5_GPTMTBPMR_R_TBPSMRH_MASK      (0x0000FF00)
#define GPWTM5_GPTMTBPMR_R_TBPSMRH_BIT       (8)

#define GPWTM5_GPTMTBPMR_TBPSMRH_MASK        (0x000000FF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.18 GPTMTAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMTAR            (((GPTMTAR_TypeDef*)(GPWTM5_BASE + GPTM_GPTMTAR_OFFSET )))
#define GPWTM5_GPTMTAR_R          (*((volatile const  int32_t *)(GPWTM5_BASE +GPTM_GPTMTAR_OFFSET)))


//--------
#define GPWTM5_GPTMTAR_R_TAR_MASK      (0xFFFFFFFF)
#define GPWTM5_GPTMTAR_R_TAR_BIT       (0)

#define GPWTM5_GPTMTAR_TAR_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.19 GPTMTBR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMTBR            (((GPTMTBR_TypeDef*)(GPWTM5_BASE + GPTM_GPTMTBR_OFFSET )))
#define GPWTM5_GPTMTBR_R          (*((volatile const uint32_t *)(GPWTM5_BASE +GPTM_GPTMTBR_OFFSET)))


//--------
#define GPWTM5_GPTMTBR_R_TBR_MASK      (0xFFFFFFFF)
#define GPWTM5_GPTMTBR_R_TBR_BIT       (0)

#define GPWTM5_GPTMTBR_TBR_MASK        (0xFFFFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.20 GPTMTAV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMTAV            (((GPTMTAV_TypeDef*)(GPWTM5_BASE + GPTM_GPTMTAV_OFFSET )))
#define GPWTM5_GPTMTAV_R          (*((volatile uint32_t *)(GPWTM5_BASE +GPTM_GPTMTAV_OFFSET)))

//--------
#define GPWTM5_GPTMTAV_R_TAV_MASK      (0xFFFFFFFF)
#define GPWTM5_GPTMTAV_R_TAV_BIT       (0)

#define GPWTM5_GPTMTAV_TAV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.21 GPTMTBV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMTBV            (((GPTMTBV_TypeDef*)(GPWTM5_BASE + GPTM_GPTMTBV_OFFSET )))
#define GPWTM5_GPTMTBV_R          (*((volatile uint32_t *)(GPWTM5_BASE +GPTM_GPTMTBV_OFFSET)))


//--------
#define GPWTM5_GPTMTBV_R_TBV_MASK      (0xFFFFFFFF)
#define GPWTM5_GPTMTBV_R_TBV_BIT       (0)

#define GPWTM5_GPTMTBV_TBV_MASK        (0xFFFFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.22 GPTMRTCPD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMRTCPD            (((GPTMRTCPD_TypeDef*)(GPWTM5_BASE + GPTM_GPTMRTCPD_OFFSET )))
#define GPWTM5_GPTMRTCPD_R          (*((volatile const uint32_t *)(GPWTM5_BASE +GPTM_GPTMRTCPD_OFFSET)))


//--------
#define GPWTM5_GPTMRTCPD_R_RTCPD_MASK      (0x0000FFFF)
#define GPWTM5_GPTMRTCPD_R_RTCPD_BIT       (0)
#define GPWTM5_GPTMRTCPD_R_RTCPD_DEFAULT   (0x00007FFF)

#define GPWTM5_GPTMRTCPD_RTCPD_MASK        (0x0000FFFF)
#define GPWTM5_GPTMRTCPD_RTCPD_DEFAULT     (0x00007FFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.23 GPTMTAPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPWTM5_GPTMTAPS            (((GPTMTAPS_TypeDef*)(GPWTM5_BASE + GPTM_GPTMTAPS_OFFSET )))
#define GPWTM5_GPTMTAPS_R          (*((volatile const uint32_t *)(GPWTM5_BASE +GPTM_GPTMTAPS_OFFSET)))

//--------
#define GPWTM5_GPTMTAPS_R_PSS_MASK      (0x0000FFFF)
#define GPWTM5_GPTMTAPS_R_PSS_BIT       (0)

#define GPWTM5_GPTMTAPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.24 GPTMTBPS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMTBPS            (((GPTMTBPS_TypeDef*)(GPWTM5_BASE + GPTM_GPTMTBPS_OFFSET )))
#define GPWTM5_GPTMTBPS_R          (*((volatile const uint32_t *)(GPWTM5_BASE +GPTM_GPTMTBPS_OFFSET)))

//--------
#define GPWTM5_GPTMTBPS_R_PSS_MASK      (0x0000FFFF)
#define GPWTM5_GPTMTBPS_R_PSS_BIT       (0)

#define GPWTM5_GPTMTBPS_PSS_MASK        (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.25 GPTMTAPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define GPWTM5_GPTMTAPV            (((GPTMTAPV_TypeDef*)(GPWTM5_BASE + GPTM_GPTMTAPV_OFFSET )))
#define GPWTM5_GPTMTAPV_R          (*((volatile const uint32_t *)(GPWTM5_BASE +GPTM_GPTMTAPV_OFFSET)))

//--------
#define GPWTM5_GPTMTAPV_R_PSV_MASK      (0x0000FFFF)
#define GPWTM5_GPTMTAPV_R_PSV_BIT       (0)

#define GPWTM5_GPTMTAPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.26 GPTMTBPV ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define GPWTM5_GPTMTBPV            (((GPTMTBPV_TypeDef*)(GPWTM5_BASE + GPTM_GPTMTBPV_OFFSET )))
#define GPWTM5_GPTMTBPV_R          (*((volatile const uint32_t *)(GPWTM5_BASE +GPTM_GPTMTBPV_OFFSET)))

//--------
#define GPWTM5_GPTMTBPV_R_PSV_MASK      (0x0000FFFF)
#define GPWTM5_GPTMTBPV_R_PSV_BIT       (0)

#define GPWTM5_GPTMTBPV_PSV_MASK        (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.27 GPTMPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define GPWTM5_GPTMPP            (((GPTMPP_TypeDef*)(GPWTM5_BASE + GPTM_GPTMPP_OFFSET )))
#define GPWTM5_GPTMPP_R          (*((volatile const uint32_t *)(GPWTM5_BASE +GPTM_GPTMPP_OFFSET)))

#define GPWTM5_GPTMPP_SIZE        (0x0000000F)

//--------
#define GPWTM5_GPTMPP_R_SIZE_MASK      (0x0000000F)
#define GPWTM5_GPTMPP_R_SIZE_BIT       (0)
#define GPWTM5_GPTMPP_R_SIZE_16b       (0x00000000)
#define GPWTM5_GPTMPP_R_SIZE_32b       (0x00000001)

#define GPWTM5_GPTMPP_SIZE_MASK        (0x0000000F)
#define GPWTM5_GPTMPP_SIZE_16b         (0x00000000)
#define GPWTM5_GPTMPP_SIZE_32b         (0x00000001)
//--------

extern uint64_t finish;
extern uint64_t BEEP;
extern float BEEPFreq[30];
extern float BEEPTimeA0[30];
extern volatile int32_t CPUClockS;

extern uint32_t mode;
extern volatile int32_t FreqCountLeft;
extern volatile float FreqPromObtained;
extern volatile float Frequency[4096];

int32_t Init_WTIMER0A_us(uint64_t time);
int32_t Init_WTIMER0B_us(uint64_t time, uint32_t modes);

int32_t WTIMER0A_Time(uint64_t time);
int32_t WTIMER0B_Time(uint64_t time);

int32_t WTIMER0A_Interrupt(void);
int32_t WTIMER0A_DisInterrupt(void);

int32_t WTIMER0B_Interrupt(void);
int32_t WTIMER0B_DisInterrupt(void);

int32_t WTIMER1A_Interrupt(void);
int32_t WTIMER1A_DisInterrupt(void);

int32_t Init_WTIMER1A_Time(void);

int32_t Finish_Variables(void);
int32_t Restart_Variables(void);





int32_t Change_timeOut0ABeepSilence(uint32_t time);
int32_t Change_timeOut0AFinalBeepSilence(uint32_t time);
int32_t Change_timeOut0ADigitSilenceHigh(uint32_t time);
int32_t Change_timeOut0ADigitSilenceLow(uint32_t time);
int32_t Change_timeOut0AFinalSilence(uint32_t time);
int32_t Change_TimeOut0A(uint32_t time);

int32_t Get_timeOut0ABeepSilence(uint32_t* time);
int32_t Get_timeOut0AFinalBeepSilence(uint32_t* time);
int32_t Get_timeOut0ADigitSilenceHigh(uint32_t* time);
int32_t Get_timeOut0ADigitSilenceLow(uint32_t* time);
int32_t Get_timeOut0AFinalSilence(uint32_t* time);
int32_t Get_TimeOut0A(uint32_t* time);


void WTIMER0AHandler(void);
void WTIMER0BHandler(void);
void WTIMER1AHandler(void);
void WTIMER1BHandler(void);
void WTIMER2AHandler(void);
void WTIMER2BHandler(void);
void WTIMER3AHandler(void);
void WTIMER3BHandler(void);
void WTIMER4AHandler(void);
void WTIMER4BHandler(void);
void WTIMER5AHandler(void);
void WTIMER5BHandler(void);

void TIMER0AHandler(void);
void TIMER0BHandler(void);
void TIMER1AHandler(void);
void TIMER1BHandler(void);
void TIMER2AHandler(void);
void TIMER2BHandler(void);
void TIMER3AHandler(void);
void TIMER3BHandler(void);
void TIMER4AHandler(void);
void TIMER4BHandler(void);
void TIMER5AHandler(void);
void TIMER5BHandler(void);
#endif /* TIMER_H_ */
