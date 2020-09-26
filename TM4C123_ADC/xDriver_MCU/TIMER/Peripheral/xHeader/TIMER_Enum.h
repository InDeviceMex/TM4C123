/**
 *
 * @file TIMER_Enum.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 4 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_ENUM_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    TIMER_enINT_NOOCCUR=0u,
    TIMER_enINT_OCCUR=1u,
    TIMER_enINT_STATUS_UNDEF=0xFFFFFFFFu,
}TIMER_nINT_STATUS;

typedef enum
{
    TIMER_enOK=0u,
    TIMER_enERROR=1u,
}TIMER_nSTATUS;

typedef enum
{
    TIMER_enNOREADY=0u,
    TIMER_enREADY=1u,
}TIMER_nREADY;

typedef enum
{
    TIMER_en32=0u,
    TIMER_en64=1u,
    TIMER_enLETTER_MAX=1u,
}TIMER_nLETTER;

typedef enum
{
    TIMER_enA=0u,
    TIMER_enB=1u,
    TIMER_enW=2u,
    TIMER_enWIDE_MAX=2u,
}TIMER_nWIDE;


typedef enum
{
    TIMER_enMODULE_NUM_0=0u,
    TIMER_enMODULE_NUM_1=1u,
    TIMER_enMODULE_NUM_2=2u,
    TIMER_enMODULE_NUM_3=3u,
    TIMER_enMODULE_NUM_4=4u,
    TIMER_enMODULE_NUM_5=5u,
    TIMER_enMODULE_NUM_MAX=5u,
}TIMER_nMODULE_NUM;

typedef enum
{
 TIMER_enMISC_MAX = (5u),
 TIMER_enMISC_INT =(5u),
 TIMER_enMISC_32  =(0u),
 TIMER_enMISC_64  =(1u),
 TIMER_enMISC_A   =(0u),
 TIMER_enMISC_B  =(1u),
 TIMER_enMISC_W  =(2u),
}TIMER_nMISC;

typedef enum
{
    TIMER_enT0A=(((uint32_t)0u<<16u)|((uint32_t)0u<<8u)|0u),
    TIMER_enT1A=(((uint32_t)0u<<16u)|((uint32_t)0u<<8u)|1u),
    TIMER_enT2A=(((uint32_t)0u<<16u)|((uint32_t)0u<<8u)|2u),
    TIMER_enT3A=(((uint32_t)0u<<16u)|((uint32_t)0u<<8u)|3u),
    TIMER_enT4A=(((uint32_t)0u<<16u)|((uint32_t)0u<<8u)|4u),
    TIMER_enT5A=(((uint32_t)0u<<16u)|((uint32_t)0u<<8u)|5u),

    TIMER_enT0B=(((uint32_t)0u<<16u)|((uint32_t)1u<<8u)|0u),
    TIMER_enT1B=(((uint32_t)0u<<16u)|((uint32_t)1u<<8u)|1u),
    TIMER_enT2B=(((uint32_t)0u<<16u)|((uint32_t)1u<<8u)|2u),
    TIMER_enT3B=(((uint32_t)0u<<16u)|((uint32_t)1u<<8u)|3u),
    TIMER_enT4B=(((uint32_t)0u<<16u)|((uint32_t)1u<<8u)|4u),
    TIMER_enT5B=(((uint32_t)0u<<16u)|((uint32_t)1u<<8u)|5u),

    TIMER_enT0W=(((uint32_t)0u<<16u)|((uint32_t)2u<<8u)|0u),
    TIMER_enT1W=(((uint32_t)0u<<16u)|((uint32_t)2u<<8u)|1u),
    TIMER_enT2W=(((uint32_t)0u<<16u)|((uint32_t)2u<<8u)|2u),
    TIMER_enT3W=(((uint32_t)0u<<16u)|((uint32_t)2u<<8u)|3u),
    TIMER_enT4W=(((uint32_t)0u<<16u)|((uint32_t)2u<<8u)|4u),
    TIMER_enT5W=(((uint32_t)0u<<16u)|((uint32_t)2u<<8u)|5u),

    TIMER_enWT0A=(((uint32_t)1u<<16u)|((uint32_t)0u<<8u)|0u),
    TIMER_enWT1A=(((uint32_t)1u<<16u)|((uint32_t)0u<<8u)|1u),
    TIMER_enWT2A=(((uint32_t)1u<<16u)|((uint32_t)0u<<8u)|2u),
    TIMER_enWT3A=(((uint32_t)1u<<16u)|((uint32_t)0u<<8u)|3u),
    TIMER_enWT4A=(((uint32_t)1u<<16u)|((uint32_t)0u<<8u)|4u),
    TIMER_enWT5A=(((uint32_t)1u<<16u)|((uint32_t)0u<<8u)|5u),

    TIMER_enWT0B=(((uint32_t)1u<<16u)|((uint32_t)1u<<8u)|0u),
    TIMER_enWT1B=(((uint32_t)1u<<16u)|((uint32_t)1u<<8u)|1u),
    TIMER_enWT2B=(((uint32_t)1u<<16u)|((uint32_t)1u<<8u)|2u),
    TIMER_enWT3B=(((uint32_t)1u<<16u)|((uint32_t)1u<<8u)|3u),
    TIMER_enWT4B=(((uint32_t)1u<<16u)|((uint32_t)1u<<8u)|4u),
    TIMER_enWT5B=(((uint32_t)1u<<16u)|((uint32_t)1u<<8u)|5u),

    TIMER_enWT0W=(((uint32_t)1u<<16u)|((uint32_t)2u<<8u)|0u),
    TIMER_enWT1W=(((uint32_t)1u<<16u)|((uint32_t)2u<<8u)|1u),
    TIMER_enWT2W=(((uint32_t)1u<<16u)|((uint32_t)2u<<8u)|2u),
    TIMER_enWT3W=(((uint32_t)1u<<16u)|((uint32_t)2u<<8u)|3u),
    TIMER_enWT4W=(((uint32_t)1u<<16u)|((uint32_t)2u<<8u)|4u),
    TIMER_enWT5W=(((uint32_t)1u<<16u)|((uint32_t)2u<<8u)|5u),
    TIMER_enMODULE_UNDEF = 0xFFFFFFFF,
}TIMER_nMODULE;


typedef enum
{
    TIMER_enINTERRUPT_TIMEOUT=0u,
    TIMER_enINTERRUPT_CAPTURE_MATCH=1u,
    TIMER_enINTERRUPT_CAPTURE_EVENT=2u,
    TIMER_enINTERRUPT_MATCH=3u,
    TIMER_enINTERRUPT_RTC=4u,
    TIMER_enINTERRUPT_WRITE_UPDATE=5u,
}TIMER_nINTERRUPT;

typedef enum
{
    TIMER_enINT_TIMEOUT=0x01u,
    TIMER_enINT_CAPTURE_MATCH=0x02u,
    TIMER_enINT_CAPTURE_EVENT=0x04u,

    TIMER_enINT_RTC=0x08u,
    TIMER_enINT_MATCH=0x10u,

    TIMER_enINT_WRITE_UPDATE=0x10000u,
    TIMER_enINT_ALL = 0x1001Fu,
    TIMER_enINT_UNDEF = 0xFFFFFu,
}TIMER_nINT;

typedef enum
{
    TIMER_enINT_TA_TIMEOUT=0x1u,
    TIMER_enINT_TA_CAPTURE_MATCH=0x2u,
    /*TAPWMIE needs to be enabled with PWM mode*/
    TIMER_enINT_TA_CAPTURE_EVENT=0x4u,
    /*TAMIE needs to enabled with MATCH_TA*/
    TIMER_enINT_TA_MATCH=0x10u,
    TIMER_enINT_TA_ALL = 0x17u,
}TIMER_nINT_TA;

typedef enum
{
    TIMER_enINT_TW_TIMEOUT=0x1u,
    TIMER_enINT_TW_CAPTURE_MATCH=0x2u,
    TIMER_enINT_TW_CAPTURE_EVENT=0x4u,
    TIMER_enINT_TW_RTC=0x8u,
    /*TWMIE needs to enabled with MATCH_TW*/
    TIMER_enINT_TW_MATCH=0x10u,
    TIMER_enINT_TW_WRITE_UPDATE=0x10000u,
    TIMER_enINT_TW_ALL = 0x1001Fu,
}TIMER_nINT_TW;

typedef enum
{
    TIMER_enINT_TB_TIMEOUT=(uint32_t)0x1u<<8u,
    TIMER_enINT_TB_CAPTURE_MATCH=(uint32_t)0x2u<<8u,
    /*TBPWMIE needs to be enabled with PWM mode*/
    TIMER_enINT_TB_CAPTURE_EVENT=(uint32_t)0x4u<<8u,
    /*TBMIE needs to enabled with MATCH_TB*/
    TIMER_enINT_TB_MATCH=(uint32_t)0x8u<<8u,
    TIMER_enINT_TB_ALL=(uint32_t)0x0F00u,
}TIMER_nINT_TB;

typedef enum
{
    TIMER_enPRI0=0u,
    TIMER_enPRI1=1u,
    TIMER_enPRI2=2u,
    TIMER_enPRI3=3u,
    TIMER_enPRI4=4u,
    TIMER_enPRI5=5u,
    TIMER_enPRI6=6u,
    TIMER_enPRI7=7u,
    TIMER_enDEFAULT=0xFFFFFFFFu,
}TIMER_nPRIORITY;

typedef enum
{
    TIMER_enCONFIG_WIDE=0u,
    TIMER_enCONFIG_RTC=1u,
    TIMER_enCONFIG_INDIVIDUAL=4u,
    TIMER_enCONFIG_UNDEF=0xFFFFFFFFu,
}TIMER_nCONFIG;

typedef enum
{
    TIMER_enSUB_MODE_RESERVED=0u,
    TIMER_enSUB_MODE_ONE_SHOT=1u,
    TIMER_enSUB_MODE_PERIODIC=2u,
    TIMER_enSUB_MODE_CAPTURE=3u,
    TIMER_enSUB_MODE_UNDEF=0xFFFFFFFFu,
}TIMER_nSUB_MODE;

typedef enum
{
    TIMER_enEDGE_MODE_COUNT=0u,
    TIMER_enEDGE_MODE_TIME=1u,
    TIMER_enEDGE_MODE_UNDEF=0xFFFFFFFFu,
}TIMER_nEDGE_MODE;

typedef enum
{
    TIMER_enALT_MODE_CC=0u,
    TIMER_enALT_MODE_PWM=1u,
    TIMER_enALT_MODE_UNDEF=0xFFFFFFFFu,
}TIMER_nALT_MODE;

typedef enum
{
    TIMER_enCOUNT_DIR_DOWN=0u,
    TIMER_enCOUNT_DIR_UP=1u,
    TIMER_enCOUNT_DIR_UNDEF=0xFFFFFFFFu,
}TIMER_nCOUNT_DIR;

typedef enum
{
    TIMER_enWAIT_NOTRIGGER=0u,
    TIMER_enWAIT_DAISY=1u,
    TIMER_enWAIT_UNDEF=0xFFFFFFFFu,
}TIMER_nWAIT;

typedef enum
{
    TIMER_enSNAPSHOT_DIS=0u,
    TIMER_enSNAPSHOT_EN=1u,
    TIMER_enSNAPSHOT_UNDEF=0xFFFFFFFFu,
}TIMER_nSNAPSHOT;

typedef enum
{
    TIMER_enPWM_INT_DIS=0u,
    TIMER_enPWM_INT_EN=1u,
    TIMER_enPWM_INT_UNDEF=0xFFFFFFFFu,
}TIMER_nPWM_INT;

typedef enum
{
    TIMER_enEVENT_INT_DIS=0u,
    TIMER_enEVENT_INT_EN=1u,
    TIMER_enEVENT_INT_UNDEF=0xFFFFFFFFu,
}TIMER_nEVENT_INT;

typedef enum
{
    TIMER_enUPDATE_INTERVAL_CYCLE=0u,
    TIMER_enUPDATE_INTERVAL_TIMEOUT=1u,
    TIMER_enUPDATE_INTERVAL_UNDEF=0xFFFFFFFFu,
}TIMER_nUPDATE_INTERVAL;

typedef enum
{
    TIMER_enUPDATE_MATCH_CYCLE=0u,
    TIMER_enUPDATE_MATCH_TIMEOUT=1u,
    TIMER_enUPDATE_MATCH_UNDEF=0xFFFFFFFFu,
}TIMER_nUPDATE_MATCH;

typedef enum
{
    TIMER_enPWM_OUT_INIT_LOW=0u,
    TIMER_enPWM_OUT_INIT_HIGH=1u,
    TIMER_enPWM_OUT_INIT_UNDEF=0xFFFFFFFFu,
}TIMER_nPWM_OUT_INIT;

typedef enum
{
    TIMER_enENABLE_STOP=0u,
    TIMER_enENABLE_START=1u,
    TIMER_enENABLE_UNDEF=0xFFFFFFFFu,
}TIMER_nENABLE;

typedef enum
{
    TIMER_enSTALL_CONTINUE=0u,
    TIMER_enSTALL_FREEZE=1u,
    TIMER_enSTALL_UNDEF=0xFFFFFFFFu,
}TIMER_nSTALL;

typedef enum
{
    TIMER_enRTC_STALL_FREEZE=0u,
    TIMER_enRTC_STALL_CONTINUE=1u,
    TIMER_enRTC_STALL_UNDEF=0xFFFFFFFFu,
}TIMER_nRTC_STALL;

typedef enum
{
    TIMER_enADC_TRIGGER_DIS=0u,
    TIMER_enADC_TRIGGER_EN=1u,
    TIMER_enADC_TRIGGER_UNDEF=0xFFFFFFFFu,
}TIMER_nADC_TRIGGER;

typedef enum
{
    TIMER_enPWM_OUTPUT_STRAIGHT=0u,
    TIMER_enPWM_OUTPUT_INVERTED=1u,
    TIMER_enPWM_OUTPUT_UNDEF=0xFFFFFFFFu,
}TIMER_nPWM_OUTPUT;

typedef enum
{
    TIMER_enEDGE_EVENT_POSITIVE=0u,
    TIMER_enEDGE_EVENT_NEGATIVE=1u,
    TIMER_enEDGE_EVENT_BOTH=3u,
    TIMER_enEDGE_EVENT_UNDEF=0xFFFFFFFFu,
}TIMER_nEDGE_EVENT;

typedef enum
{
    TIMER_enSYNC_T0A=(uint32_t)((uint32_t)1u<<0u),
    TIMER_enSYNC_T0W=(uint32_t)((uint32_t)1u<<0u),
    TIMER_enSYNC_T0B=(uint32_t)((uint32_t)2u<<0u),
    TIMER_enSYNC_T1A=(uint32_t)((uint32_t)1u<<2u),
    TIMER_enSYNC_T1W=(uint32_t)((uint32_t)1u<<2u),
    TIMER_enSYNC_T1B=(uint32_t)((uint32_t)2u<<2u),
    TIMER_enSYNC_T2A=(uint32_t)((uint32_t)1u<<4u),
    TIMER_enSYNC_T2W=(uint32_t)((uint32_t)1u<<4u),
    TIMER_enSYNC_T2B=(uint32_t)((uint32_t)2u<<4u),
    TIMER_enSYNC_T3A=(uint32_t)((uint32_t)1u<<6u),
    TIMER_enSYNC_T3W=(uint32_t)((uint32_t)1u<<6u),
    TIMER_enSYNC_T3B=(uint32_t)((uint32_t)2u<<6u),
    TIMER_enSYNC_T4A=(uint32_t)((uint32_t)1u<<8u),
    TIMER_enSYNC_T4W=(uint32_t)((uint32_t)1u<<8u),
    TIMER_enSYNC_T4B=(uint32_t)((uint32_t)2u<<8u),
    TIMER_enSYNC_T5A=(uint32_t)((uint32_t)1u<<10u),
    TIMER_enSYNC_T5W=(uint32_t)((uint32_t)1u<<10u),
    TIMER_enSYNC_T5B=(uint32_t)((uint32_t)2u<<10u),
    TIMER_enSYNC_WT0A=(uint32_t)((uint32_t)1u<<12u),
    TIMER_enSYNC_WT0W=(uint32_t)((uint32_t)1u<<12u),
    TIMER_enSYNC_WT0B=(uint32_t)((uint32_t)2u<<12u),
    TIMER_enSYNC_WT1A=(uint32_t)((uint32_t)1u<<14u),
    TIMER_enSYNC_WT1W=(uint32_t)((uint32_t)1u<<12u),
    TIMER_enSYNC_WT1B=(uint32_t)((uint32_t)2u<<14u),
    TIMER_enSYNC_WT2A=(uint32_t)((uint32_t)1u<<16u),
    TIMER_enSYNC_WT2W=(uint32_t)((uint32_t)1u<<16u),
    TIMER_enSYNC_WT2B=(uint32_t)((uint32_t)2u<<16u),
    TIMER_enSYNC_WT3A=(uint32_t)((uint32_t)1u<<18u),
    TIMER_enSYNC_WT3W=(uint32_t)((uint32_t)1u<<18u),
    TIMER_enSYNC_WT3B=(uint32_t)((uint32_t)2u<<18u),
    TIMER_enSYNC_WT4A=(uint32_t)((uint32_t)1u<<20u),
    TIMER_enSYNC_WT4W=(uint32_t)((uint32_t)1u<<20u),
    TIMER_enSYNC_WT4B=(uint32_t)((uint32_t)2u<<20u),
    TIMER_enSYNC_WT5A=(uint32_t)((uint32_t)1u<<22u),
    TIMER_enSYNC_WT5W=(uint32_t)((uint32_t)1u<<22u),
    TIMER_enSYNC_WT5B=(uint32_t)((uint32_t)2u<<22u),
    TIMER_enSYNC_ALL=(uint32_t)((uint32_t)0xFFFFFFFFu),
}TIMER_nSYNC;

typedef enum
{
    /*  DIR*/
    TIMER_enMODE_ONE_SHOT_INDIVIDUAL_UP=            ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_ONE_SHOT<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_UP,
    TIMER_enMODE_ONE_SHOT_WIDE_UP=                  ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_WIDE<<16)         |((uint32_t)TIMER_enSUB_MODE_ONE_SHOT<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_UP,
    TIMER_enMODE_ONE_SHOT_INDIVIDUAL_DOWN=          ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_ONE_SHOT<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_ONE_SHOT_WIDE_DOWN=                ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_WIDE<<16)         |((uint32_t)TIMER_enSUB_MODE_ONE_SHOT<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_DOWN,

    TIMER_enMODE_PERIODIC_INDIVIDUAL_UP=            ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_UP,
    TIMER_enMODE_PERIODIC_INDIVIDUAL_SNAPSHOT_UP=   ((uint32_t)TIMER_enSNAPSHOT_EN<<30)    |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_UP,
    TIMER_enMODE_PERIODIC_WIDE_UP=                  ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_WIDE<<16)         |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_UP,
    TIMER_enMODE_PERIODIC_WIDE_SNAPSHOT_UP=         ((uint32_t)TIMER_enSNAPSHOT_EN<<30)    |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_WIDE<<16)         |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_UP,
    TIMER_enMODE_PERIODIC_INDIVIDUAL_DOWN=          ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_PERIODIC_INDIVIDUAL_SNAPSHOT_DOWN= ((uint32_t)TIMER_enSNAPSHOT_EN<<30)    |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_PERIODIC_WIDE_DOWN=                ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_WIDE<<16)         |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_PERIODIC_WIDE_SNAPSHOT_DOWN=       ((uint32_t)TIMER_enSNAPSHOT_EN<<30)    |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_WIDE<<16)         |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_DOWN,

    TIMER_enMODE_RTC_WIDE_UP=                       ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_RTC<<16)          |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_UP,

    TIMER_enMODE_EDGE_COUNT_POSITIVE_INDIVIDUAL_UP= ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_CAPTURE<<12)   |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_UP,
    TIMER_enMODE_EDGE_COUNT_NEGATIVE_INDIVIDUAL_UP= ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_NEGATIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_CAPTURE<<12)   |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_UP,
    TIMER_enMODE_EDGE_COUNT_BOTH_INDIVIDUAL_UP=     ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_BOTH<<28)       |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_CAPTURE<<12)   |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_UP,
    TIMER_enMODE_EDGE_COUNT_POSITIVE_INDIVIDUAL_DOWN=((uint32_t)TIMER_enSNAPSHOT_DIS<<30)  |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_CAPTURE<<12)   |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_EDGE_COUNT_NEGATIVE_INDIVIDUAL_DOWN=((uint32_t)TIMER_enSNAPSHOT_DIS<<30)  |((uint32_t)TIMER_enEDGE_EVENT_NEGATIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_CAPTURE<<12)   |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_EDGE_COUNT_BOTH_INDIVIDUAL_DOWN=   ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_BOTH<<28)       |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_CAPTURE<<12)   |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_DOWN,

    TIMER_enMODE_EDGE_TIME_POSITIVE_INDIVIDUAL_UP=  ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_CAPTURE<<12)   |((uint32_t)TIMER_enEDGE_MODE_TIME<<8) |((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_UP,
    TIMER_enMODE_EDGE_TIME_NEGATIVE_INDIVIDUAL_UP=  ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_NEGATIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_CAPTURE<<12)   |((uint32_t)TIMER_enEDGE_MODE_TIME<<8) |((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_UP,
    TIMER_enMODE_EDGE_TIME_BOTH_INDIVIDUAL_UP=      ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_BOTH<<28)       |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_CAPTURE<<12)   |((uint32_t)TIMER_enEDGE_MODE_TIME<<8) |((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_UP,
    TIMER_enMODE_EDGE_TIME_POSITIVE_INDIVIDUAL_DOWN=((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_CAPTURE<<12)   |((uint32_t)TIMER_enEDGE_MODE_TIME<<8) |((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_EDGE_TIME_NEGATIVE_INDIVIDUAL_DOWN=((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_NEGATIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_CAPTURE<<12)   |((uint32_t)TIMER_enEDGE_MODE_TIME<<8) |((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_EDGE_TIME_BOTH_INDIVIDUAL_DOWN=    ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_BOTH<<28)       |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_CAPTURE<<12)   |((uint32_t)TIMER_enEDGE_MODE_TIME<<8) |((uint32_t)TIMER_enALT_MODE_CC<<4) |(uint32_t)TIMER_enCOUNT_DIR_DOWN,

    TIMER_enMODE_PWM_INDIVIDUAL_LOW_POSITIVE_DOWN=              ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_PWM<<4)|(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_PWM_INDIVIDUAL_LOW_NEGATIVE_DOWN=              ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_NEGATIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_PWM<<4)|(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_PWM_INDIVIDUAL_LOW_BOTH_DOWN=                  ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_BOTH<<28)       |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_PWM<<4)|(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_PWM_INDIVIDUAL_LOW_INVERTED_POSITIVE_DOWN=     ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_INVERTED<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_PWM<<4)|(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_PWM_INDIVIDUAL_LOW_INVERTED_NEGATIVE_DOWN=     ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_NEGATIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_INVERTED<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_PWM<<4)|(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_PWM_INDIVIDUAL_LOW_INVERTED_BOTH_DOWN=         ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_BOTH<<28)       |((uint32_t)TIMER_enPWM_OUT_INIT_LOW<<24)   |((uint32_t)TIMER_enPWM_OUTPUT_INVERTED<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_PWM<<4)|(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_PWM_INDIVIDUAL_HIGH_POSITIVE_DOWN=             ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_HIGH<<24)  |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_PWM<<4)|(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_PWM_INDIVIDUAL_HIGH_NEGATIVE_DOWN=             ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_NEGATIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_HIGH<<24)  |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_PWM<<4)|(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_PWM_INDIVIDUAL_HIGH_BOTH_DOWN=                 ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_BOTH<<28)       |((uint32_t)TIMER_enPWM_OUT_INIT_HIGH<<24)  |((uint32_t)TIMER_enPWM_OUTPUT_STRAIGHT<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_PWM<<4)|(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_PWM_INDIVIDUAL_HIGH_INVERTED_POSITIVE_DOWN=    ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_POSITIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_HIGH<<24)  |((uint32_t)TIMER_enPWM_OUTPUT_INVERTED<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_PWM<<4)|(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_PWM_INDIVIDUAL_HIGH_INVERTED_NEGATIVE_DOWN=    ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_NEGATIVE<<28)   |((uint32_t)TIMER_enPWM_OUT_INIT_HIGH<<24)  |((uint32_t)TIMER_enPWM_OUTPUT_INVERTED<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_PWM<<4)|(uint32_t)TIMER_enCOUNT_DIR_DOWN,
    TIMER_enMODE_PWM_INDIVIDUAL_HIGH_INVERTED_BOTH_DOWN=        ((uint32_t)TIMER_enSNAPSHOT_DIS<<30)   |((uint32_t)TIMER_enEDGE_EVENT_BOTH<<28)       |((uint32_t)TIMER_enPWM_OUT_INIT_HIGH<<24)  |((uint32_t)TIMER_enPWM_OUTPUT_INVERTED<<20)   |((uint32_t)TIMER_enCONFIG_INDIVIDUAL<<16)   |((uint32_t)TIMER_enSUB_MODE_PERIODIC<<12)  |((uint32_t)TIMER_enEDGE_MODE_COUNT<<8)|((uint32_t)TIMER_enALT_MODE_PWM<<4)|(uint32_t)TIMER_enCOUNT_DIR_DOWN,

    TIMER_enMODE_UNDEF=                             0xFFFFFFFF,
}TIMER_nMODE;

typedef enum
{
    TIMER_enPRESCALER_NA=0u,
    TIMER_enPRESCALER_PRESCALER=1u,
    TIMER_enPRESCALER_EXTENSION=2u,
    TIMER_enPRESCALER_UNDEF=0xFFFFFFFFu,
}TIMER_nPRESCALER;

/*ONESHOT OR PERIODIC and CONTINUES check DIR*/
/* PWM*/
/* CAPTURE*/
typedef struct
{
    TIMER_nCONFIG enConfig;
    TIMER_nSUB_MODE enSubMode;
    TIMER_nEDGE_MODE enEdgeMode;
    TIMER_nALT_MODE enAltMode;
    TIMER_nCOUNT_DIR enDirection;
    TIMER_nSNAPSHOT enSnapShot;
    TIMER_nPWM_OUT_INIT enPWMOutInit;
    TIMER_nPWM_OUTPUT enPWMOut;
    TIMER_nEDGE_EVENT enEdgeEvent;
}TIMER_MODE_Typedef;

typedef struct
{

    TIMER_nWAIT             enWaitTrigger;
    TIMER_nUPDATE_INTERVAL  enUpdateInterval;
    TIMER_nUPDATE_MATCH     enUpdateMatch;
    TIMER_nPWM_INT          enPWMInterrupt;
    TIMER_nEVENT_INT        enEventInterrupt;
    TIMER_nSTALL            enStall;
    TIMER_nRTC_STALL        enRTCStall;
    TIMER_nADC_TRIGGER      enADCTrigger;
}TIMER_EXTRAMODE_Typedef;





#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_ENUM_H_ */
