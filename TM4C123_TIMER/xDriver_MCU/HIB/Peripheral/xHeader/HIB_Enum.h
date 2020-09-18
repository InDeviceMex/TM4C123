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
    HIB_enSTATUS_OK =0u,
    HIB_enSTATUS_ERROR=1u,
    HIB_enSTATUS_BUSY =2u,
    HIB_enSTATUS_UNDEF=0xFFFFFFFFu,
}HIB_nSTATUS;

typedef enum
{
    HIB_enINTERRUPT_RTCALT  =0x0u,
    HIB_enINTERRUPT_LOWBAT  =0x1u,
    HIB_enINTERRUPT_EXTW    =0x2u,
    HIB_enINTERRUPT_WC      =0x3u,
    HIB_enINTERRUPT_MAX     =0x3u,
}HIB_nINTERRUPT;


typedef enum
{
    HIB_enINT_RTCALT    =0x1u,
    HIB_enINT_LOWBAT    =0x4u,
    HIB_enINT_EXTW      =0x8u,
    HIB_enINT_WC        =0x10u,
    HIB_enINT_ALL       =0x1Fu,
    HIB_enINT_UNDEF     =0xFFFFFu,
}HIB_nINT;


typedef enum
{
    HIB_enINT_NOOCCUR=0u,
    HIB_enINT_OCCUR=1u,
    HIB_enINT_STATUS_UNDEF=0xFFFFFFFFu,
}HIB_nINT_STATUS;

typedef enum
{
    HIB_enPRI0=0u,
    HIB_enPRI1=1u,
    HIB_enPRI2=2u,
    HIB_enPRI3=3u,
    HIB_enPRI4=4u,
    HIB_enPRI5=5u,
    HIB_enPRI6=6u,
    HIB_enPRI7=7u,
    HIB_enDEFAULT=0xFFFFFFFFu,
}HIB_nPRIORITY;

typedef enum
{
    HIB_enNOREADY   = 0u,
    HIB_enREADY     = 1u,
}HIB_nREADY;

typedef enum
{
    HIB_enOSCDRIVE_12pF     = 0u,
    HIB_enOSCDRIVE_24pF     = 1u,
    HIB_enOSCDRIVE_UNDEF    = 0xFFFFFFFFu,
}HIB_nOSCDRIVE;

typedef enum
{
    HIB_enOSCBYP_INTERNAL   = 0u,
    HIB_enOSCBYP_EXTERNAL   = 1u,
    HIB_enOSCBYP_UNDEF      = 0xFFFFFFFFu,
}HIB_nOSCBYP;

typedef enum
{
    HIB_enBATCOMP_1_9V   = 0u,
    HIB_enBATCOMP_2_1V   = 1u,
    HIB_enBATCOMP_2_3V   = 2u,
    HIB_enBATCOMP_2_5V   = 3u,
    HIB_enBATCOMP_UNDEF  = 0xFFFFFFFFu,
}HIB_nBATCOMP;

typedef enum
{
    HIB_enBATCHECK_INIT    = 1u,
    HIB_enBATCHECK_UNDEF  = 0xFFFFFFFFu,
}HIB_nBATCHECK;

typedef enum
{
    HIB_enBATCHECK_STATUS_READY   = 0u,
    HIB_enBATCHECK_STATUS_BUSY    = 1u,
    HIB_enBATCHECK_STATUS_UNDEF  = 0xFFFFFFFFu,
}HIB_nBATCHECK_STATUS;
typedef enum
{
    HIB_enBATWAKE_DIS    = 0u,
    HIB_enBATWAKE_EN     = 1u,
    HIB_enBATWAKE_UNDEF  = 0xFFFFFFFFu,
}HIB_nBATWAKE;

typedef enum
{
    HIB_enVDD3ON_EXTERNAL  = 0u,
    HIB_enVDD3ON_INTERNAL  = 1u,
    HIB_enVDD3ON_UNDEF     = 0xFFFFFFFFu,
}HIB_nVDD3ON;

typedef enum
{
    HIB_enVABORT_ALWAYS    = 0u,
    HIB_enVABORT_LOWVOLT   = 1u,
    HIB_enVABORT_UNDEF     = 0xFFFFFFFFu,
}HIB_nVABORT;

typedef enum
{
    HIB_enCLOCK_DIS     = 0u,
    HIB_enCLOCK_EN      = 1u,
    HIB_enCLOCK_UNDEF   = 0xFFFFFFFFu,
}HIB_nCLOCK;

typedef enum
{
    HIB_enPINWAKE_DIS     = 0u,
    HIB_enPINWAKE_EN      = 1u,
    HIB_enPINWAKE_UNDEF   = 0xFFFFFFFFu,
}HIB_nPINWAKE;

typedef enum
{
    HIB_enRTCWAKE_DIS     = 0u,
    HIB_enRTCWAKE_EN      = 1u,
    HIB_enRTCWAKE_UNDEF   = 0xFFFFFFFFu,
}HIB_nRTCWAKE;

typedef enum
{
    HIB_enREQUEST_NO      = 0u,
    HIB_enREQUEST_INIT    = 1u,
    HIB_enREQUEST_UNDEF   = 0xFFFFFFFFu,
}HIB_nREQUEST;

typedef enum
{
    HIB_enRTC_DIS     = 0u,
    HIB_enRTC_EN      = 1u,
    HIB_enRTC_UNDEF   = 0xFFFFFFFFu,
}HIB_nRTC;






#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_ENUM_H_ */
