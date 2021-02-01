/**
 *
 * @file WDT_Enum.h
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
 * @verbatim 19 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_ENUM_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    WDT_enSTATUS_OK=0U,
    WDT_enSTATUS_ERROR=1U,
    WDT_enSTATUS_UNDEF=0xFFFFFFFFU,
}WDT_nSTATUS;

typedef enum
{
    WDT_enNOREADY=0U,
    WDT_enREADY=1U,
}WDT_nREADY;

typedef enum
{
    WDT_enMODULE_0=0U,
    WDT_enMODULE_1=1U,
    WDT_enMODULE_MAX=2U,
}WDT_nMODULE;

typedef enum
{
    WDT_enWRITE_STATUS_BUSY=0U,
    WDT_enWRITE_STATUS_READY=1U,
    WDT_enWRITE_STATUS_UNDEF=0xFFFFFFFFU,
}WDT_nWRITE_STATUS;

typedef enum
{
    WDT_enRESET_DISABLE=0U,
    WDT_enRESET_ENABLE=1U,
    WDT_enRESET_UNDEF=0xFFFFFFFFU,
}WDT_nRESET;

typedef enum
{
    WDT_enINTERRUPT_DISABLE=0U,
    WDT_enINTERRUPT_ENABLE=1U,
    WDT_enINTERRUPT_UNDEF=0xFFFFFFFFU,
}WDT_nINTERRUPT;

typedef enum
{
    WDT_enINT_TYPE_STANDARD=0U,
    WDT_enINT_TYPE_NMI=1U,
    WDT_enINT_TYPE_MAX=1U,
    WDT_enINT_TYPE_UNDEF=0xFFFFFFFFU,
}WDT_nINT_TYPE;

typedef enum
{
    WDT_enINT_STATUS_NOOCCUR=0U,
    WDT_enINT_STATUS_OCCUR=1U,
    WDT_enINT_STATUS_UNDEF=0xFFFFFFFFU,
}WDT_nINT_STATUS;

typedef enum
{
    WDT_enSTALL_CONTINUE=0U,
    WDT_enSTALL_FREEZE=1U,
    WDT_enSTALL_UNDEF=0xFFFFFFFFU,
}WDT_nSTALL;

typedef enum
{
    WDT_enLOCK_UNLOCKED=0U,
    WDT_enLOCK_LOCKED=1U,
    WDT_enLOCK_UNDEF=0xFFFFFFFFU,
}WDT_nLOCK;

typedef enum
{
    WDT_enKEY_LOCK=0U,
    WDT_enKEY_UNLOCK=0x1ACCE551U,
    WDT_enKEY_UNDEF=0xFFFFFFFFU,
}WDT_nKEY;

typedef enum
{
    WDT_enPRI0=0U,
    WDT_enPRI1=1U,
    WDT_enPRI2=2U,
    WDT_enPRI3=3U,
    WDT_enPRI4=4U,
    WDT_enPRI5=5U,
    WDT_enPRI6=6U,
    WDT_enPRI7=7U,
    WDT_enDEFAULT=0xFFFFFFFFU,
}WDT_nPRIORITY;

typedef enum
{
    /*  DIR*/
    WDT_enMODE_RESET_STANDARD_CONTINUE_DIS = ((uint32_t) WDT_enRESET_ENABLE << 24U) | ((uint32_t) WDT_enINT_TYPE_STANDARD << 16U) | ((uint32_t) WDT_enSTALL_CONTINUE << 8U) | ((uint32_t) WDT_enINTERRUPT_DISABLE << 0U),
    WDT_enMODE_RESET_STANDARD_CONTINUE_EN = ((uint32_t) WDT_enRESET_ENABLE << 24U) | ((uint32_t) WDT_enINT_TYPE_STANDARD << 16U) | ((uint32_t) WDT_enSTALL_CONTINUE << 8U) | ((uint32_t) WDT_enINTERRUPT_ENABLE << 0U),
    WDT_enMODE_RESET_STANDARD_FREEZE_DIS = ((uint32_t) WDT_enRESET_ENABLE << 24U) | ((uint32_t) WDT_enINT_TYPE_STANDARD << 16U) | ((uint32_t) WDT_enSTALL_FREEZE << 8U) | ((uint32_t) WDT_enINTERRUPT_DISABLE << 0U),
    WDT_enMODE_RESET_STANDARD_FREEZE_EN = ((uint32_t) WDT_enRESET_ENABLE << 24U) | ((uint32_t) WDT_enINT_TYPE_STANDARD << 16U) | ((uint32_t) WDT_enSTALL_FREEZE << 8U) | ((uint32_t) WDT_enINTERRUPT_ENABLE << 0U),
    WDT_enMODE_RESET_NMI_CONTINUE_DIS = ((uint32_t) WDT_enRESET_ENABLE << 24U) | ((uint32_t) WDT_enINT_TYPE_NMI << 16U) | ((uint32_t) WDT_enSTALL_CONTINUE << 8U) | ((uint32_t) WDT_enINTERRUPT_DISABLE << 0U),
    WDT_enMODE_RESET_NMI_CONTINUE_EN = ((uint32_t) WDT_enRESET_ENABLE << 24U) | ((uint32_t) WDT_enINT_TYPE_NMI << 16U) | ((uint32_t) WDT_enSTALL_CONTINUE << 8U) | ((uint32_t) WDT_enINTERRUPT_ENABLE << 0U),
    WDT_enMODE_RESET_NMI_FREEZE_DIS = ((uint32_t) WDT_enRESET_ENABLE << 24U) | ((uint32_t) WDT_enINT_TYPE_NMI << 16U) | ((uint32_t) WDT_enSTALL_FREEZE << 8U) | ((uint32_t) WDT_enINTERRUPT_DISABLE << 0U),
    WDT_enMODE_RESET_NMI_FREEZE_EN = ((uint32_t) WDT_enRESET_ENABLE << 24U) | ((uint32_t) WDT_enINT_TYPE_NMI << 16U) | ((uint32_t) WDT_enSTALL_FREEZE << 8U) | ((uint32_t) WDT_enINTERRUPT_ENABLE << 0U),
    WDT_enMODE_NORESET_STANDARD_CONTINUE_DIS = ((uint32_t) WDT_enRESET_DISABLE << 24U) | ((uint32_t) WDT_enINT_TYPE_STANDARD << 16U) | ((uint32_t) WDT_enSTALL_CONTINUE << 8U) | ((uint32_t) WDT_enINTERRUPT_DISABLE << 0U),
    WDT_enMODE_NORESET_STANDARD_CONTINUE_EN = ((uint32_t) WDT_enRESET_DISABLE << 24U) | ((uint32_t) WDT_enINT_TYPE_STANDARD << 16U) | ((uint32_t) WDT_enSTALL_CONTINUE << 8U) | ((uint32_t) WDT_enINTERRUPT_ENABLE << 0U),
    WDT_enMODE_NORESET_STANDARD_FREEZE_DIS = ((uint32_t) WDT_enRESET_DISABLE << 24U) | ((uint32_t) WDT_enINT_TYPE_STANDARD << 16U) | ((uint32_t) WDT_enSTALL_FREEZE << 8U) | ((uint32_t) WDT_enINTERRUPT_DISABLE << 0U),
    WDT_enMODE_NORESET_STANDARD_FREEZE_EN = ((uint32_t) WDT_enRESET_DISABLE << 24U) | ((uint32_t) WDT_enINT_TYPE_STANDARD << 16U) | ((uint32_t) WDT_enSTALL_FREEZE << 8U) | ((uint32_t) WDT_enINTERRUPT_ENABLE << 0U),
    WDT_enMODE_NORESET_NMI_CONTINUE_DIS = ((uint32_t) WDT_enRESET_DISABLE << 24U) | ((uint32_t) WDT_enINT_TYPE_NMI << 16U) | ((uint32_t) WDT_enSTALL_CONTINUE << 8U) | ((uint32_t) WDT_enINTERRUPT_DISABLE << 0U),
    WDT_enMODE_NORESET_NMI_CONTINUE_EN = ((uint32_t) WDT_enRESET_DISABLE << 24U) | ((uint32_t) WDT_enINT_TYPE_NMI << 16U) | ((uint32_t) WDT_enSTALL_CONTINUE << 8U) | ((uint32_t) WDT_enINTERRUPT_ENABLE << 0U),
    WDT_enMODE_NORESET_NMI_FREEZE_DIS = ((uint32_t) WDT_enRESET_DISABLE << 24U) | ((uint32_t) WDT_enINT_TYPE_NMI << 16U) | ((uint32_t) WDT_enSTALL_FREEZE << 8U) | ((uint32_t) WDT_enINTERRUPT_DISABLE << 0U),
    WDT_enMODE_NORESET_NMI_FREEZE_EN = ((uint32_t) WDT_enRESET_DISABLE << 24U) | ((uint32_t) WDT_enINT_TYPE_NMI << 16U) | ((uint32_t) WDT_enSTALL_FREEZE << 8U) | ((uint32_t) WDT_enINTERRUPT_ENABLE << 0U),
    WDT_enMODE_UNDEF = 0xFFFFFFFFU,
}WDT_nMODE;

typedef struct
{
    WDT_nINTERRUPT  enInterrupt;
    WDT_nSTALL      enStall;
    WDT_nINT_TYPE   enIntType;
    WDT_nRESET      enResetOutput;
}WDT_MODE_Typedef;


#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_ENUM_H_ */
