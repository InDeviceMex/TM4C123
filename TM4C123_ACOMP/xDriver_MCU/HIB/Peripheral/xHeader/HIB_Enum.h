/*
 * HIB_Enum.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_ENUM_H_

typedef enum
{
    HIB_enSTATUS_OK =0U,
    HIB_enSTATUS_ERROR=1U,
    HIB_enSTATUS_BUSY =2U,
    HIB_enSTATUS_UNDEF=0xFFFFFFFFU,
}HIB_nSTATUS;

typedef enum
{
    HIB_enINTERRUPT_RTCALT  =0x0U,
    HIB_enINTERRUPT_LOWBAT  =0x1U,
    HIB_enINTERRUPT_EXTW    =0x2U,
    HIB_enINTERRUPT_WC      =0x3U,
    HIB_enINTERRUPT_MAX     =0x3U,
}HIB_nINTERRUPT;


typedef enum
{
    HIB_enINT_RTCALT    =0x1U,
    HIB_enINT_LOWBAT    =0x4U,
    HIB_enINT_EXTW      =0x8U,
    HIB_enINT_WC        =0x10U,
    HIB_enINT_ALL       =0x1FU,
    HIB_enINT_UNDEF     =0xFFFFFU,
}HIB_nINT;


typedef enum
{
    HIB_enINT_NOOCCUR=0U,
    HIB_enINT_OCCUR=1U,
    HIB_enINT_STATUS_UNDEF=0xFFFFFFFFU,
}HIB_nINT_STATUS;

typedef enum
{
    HIB_enPRI0=0U,
    HIB_enPRI1=1U,
    HIB_enPRI2=2U,
    HIB_enPRI3=3U,
    HIB_enPRI4=4U,
    HIB_enPRI5=5U,
    HIB_enPRI6=6U,
    HIB_enPRI7=7U,
    HIB_enDEFAULT=0xFFFFFFFFU,
}HIB_nPRIORITY;

typedef enum
{
    HIB_enNOREADY   = 0U,
    HIB_enREADY     = 1U,
}HIB_nREADY;

typedef enum
{
    HIB_enOSCDRIVE_12pF     = 0U,
    HIB_enOSCDRIVE_24pF     = 1U,
    HIB_enOSCDRIVE_UNDEF    = 0xFFFFFFFFU,
}HIB_nOSCDRIVE;

typedef enum
{
    HIB_enOSCBYP_INTERNAL   = 0U,
    HIB_enOSCBYP_EXTERNAL   = 1U,
    HIB_enOSCBYP_UNDEF      = 0xFFFFFFFFU,
}HIB_nOSCBYP;

typedef enum
{
    HIB_enBATCOMP_1_9V   = 0U,
    HIB_enBATCOMP_2_1V   = 1U,
    HIB_enBATCOMP_2_3V   = 2U,
    HIB_enBATCOMP_2_5V   = 3U,
    HIB_enBATCOMP_UNDEF  = 0xFFFFFFFFU,
}HIB_nBATCOMP;

typedef enum
{
    HIB_enBATCHECK_INIT    = 1U,
    HIB_enBATCHECK_UNDEF  = 0xFFFFFFFFU,
}HIB_nBATCHECK;

typedef enum
{
    HIB_enBATCHECK_STATUS_READY   = 0U,
    HIB_enBATCHECK_STATUS_BUSY    = 1U,
    HIB_enBATCHECK_STATUS_UNDEF  = 0xFFFFFFFFU,
}HIB_nBATCHECK_STATUS;
typedef enum
{
    HIB_enBATWAKE_DIS    = 0U,
    HIB_enBATWAKE_EN     = 1U,
    HIB_enBATWAKE_UNDEF  = 0xFFFFFFFFU,
}HIB_nBATWAKE;

typedef enum
{
    HIB_enVDD3ON_EXTERNAL  = 0U,
    HIB_enVDD3ON_INTERNAL  = 1U,
    HIB_enVDD3ON_UNDEF     = 0xFFFFFFFFU,
}HIB_nVDD3ON;

typedef enum
{
    HIB_enVABORT_ALWAYS    = 0U,
    HIB_enVABORT_LOWVOLT   = 1U,
    HIB_enVABORT_UNDEF     = 0xFFFFFFFFU,
}HIB_nVABORT;

typedef enum
{
    HIB_enCLOCK_DIS     = 0U,
    HIB_enCLOCK_EN      = 1U,
    HIB_enCLOCK_UNDEF   = 0xFFFFFFFFU,
}HIB_nCLOCK;

typedef enum
{
    HIB_enPINWAKE_DIS     = 0U,
    HIB_enPINWAKE_EN      = 1U,
    HIB_enPINWAKE_UNDEF   = 0xFFFFFFFFU,
}HIB_nPINWAKE;

typedef enum
{
    HIB_enRTCWAKE_DIS     = 0U,
    HIB_enRTCWAKE_EN      = 1U,
    HIB_enRTCWAKE_UNDEF   = 0xFFFFFFFFU,
}HIB_nRTCWAKE;

typedef enum
{
    HIB_enREQUEST_NO      = 0U,
    HIB_enREQUEST_INIT    = 1U,
    HIB_enREQUEST_UNDEF   = 0xFFFFFFFFU,
}HIB_nREQUEST;

typedef enum
{
    HIB_enRTC_DIS     = 0U,
    HIB_enRTC_EN      = 1U,
    HIB_enRTC_UNDEF   = 0xFFFFFFFFU,
}HIB_nRTC;






#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_ENUM_H_ */
