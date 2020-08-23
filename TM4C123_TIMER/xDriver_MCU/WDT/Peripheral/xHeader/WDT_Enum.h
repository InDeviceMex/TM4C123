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

#include <stdint.h>

typedef enum
{
    WDT_enOK=0u,
    WDT_enERROR=1u,
}WDT_nSTATUS;

typedef enum
{
    WDT_enNOREADY=0u,
    WDT_enREADY=1u,
}WDT_nREADY;

typedef enum
{
    WDT_enMODULE_0=0u,
    WDT_enMODULE_1=1u,
    WDT_enMODULE_MAX=1u,
}WDT_nMODULE;

typedef enum
{
    WDT_enWRITE_STATUS_BUSY=0u,
    WDT_enWRITE_STATUS_READY=1u,
    WDT_enWRITE_STATUS_UNDEF=0xFFu,
}WDT_nWRITE_STATUS;

typedef enum
{
    WDT_enRESET_DISABLE=0u,
    WDT_enRESET_ENABLE=1u,
    WDT_enRESET_UNDEF=0xFFu,
}WDT_nRESET;

typedef enum
{
    WDT_enINTERRUPT_DISABLE=0u,
    WDT_enINTERRUPT_ENABLE=1u,
    WDT_enINTERRUPT_UNDEF=0xFFu,
}WDT_nINTERRUPT;

typedef enum
{
    WDT_enINT_TYPE_STANDARD=0u,
    WDT_enINT_TYPE_NMI=1u,
    WDT_enINT_TYPE_MAX=1u,
    WDT_enINT_TYPE_UNDEF=0xFFu,
}WDT_nINT_TYPE;

typedef enum
{
    WDT_enINT_STATUS_NOOCCUR=0u,
    WDT_enINT_STATUS_OCCUR=1u,
    WDT_enINT_STATUS_UNDEF=0xFFu,
}WDT_nINT_STATUS;

typedef enum
{
    WDT_enSTALL_CONTINUE=0u,
    WDT_enSTALL_FREEZE=1u,
    WDT_enSTALL_UNDEF=0xFFu,
}WDT_nSTALL;

typedef enum
{
    WDT_enLOCK_UNLOCKED=0u,
    WDT_enLOCK_LOCKED=1u,
    WDT_enLOCK_UNDEF=0xFFu,
}WDT_nLOCK;

typedef enum
{
    WDT_enKEY_LOCK=0u,
    WDT_enKEY_UNLOCK=0x1ACCE551u,
    WDT_enKEY_UNDEF=0xFFFFFFFFu,
}WDT_nKEY;

typedef enum
{
    WDT_enPRI0=0u,
    WDT_enPRI1=1u,
    WDT_enPRI2=2u,
    WDT_enPRI3=3u,
    WDT_enPRI4=4u,
    WDT_enPRI5=5u,
    WDT_enPRI6=6u,
    WDT_enPRI7=7u,
    WDT_enDEFAULT=0xFFu,
}WDT_nPRIORITY;

typedef enum
{
    /*  DIR*/
    WDT_enMODE_RESET_STANDARD_CONTINUE_DIS          = ((uint32_t)WDT_enRESET_ENABLE<<24u)  | ((uint32_t)WDT_enINT_TYPE_STANDARD<<16u)| ((uint32_t)WDT_enSTALL_CONTINUE<<8u)| ((uint32_t)WDT_enINTERRUPT_DISABLE<<0u),
    WDT_enMODE_RESET_STANDARD_CONTINUE_EN           = ((uint32_t)WDT_enRESET_ENABLE<<24u)  | ((uint32_t)WDT_enINT_TYPE_STANDARD<<16u)| ((uint32_t)WDT_enSTALL_CONTINUE<<8u)| ((uint32_t)WDT_enINTERRUPT_ENABLE<<0u),
    WDT_enMODE_RESET_STANDARD_FREEZE_DIS            = ((uint32_t)WDT_enRESET_ENABLE<<24u)  | ((uint32_t)WDT_enINT_TYPE_STANDARD<<16u)| ((uint32_t)WDT_enSTALL_FREEZE<<8u)  | ((uint32_t)WDT_enINTERRUPT_DISABLE<<0u),
    WDT_enMODE_RESET_STANDARD_FREEZE_EN             = ((uint32_t)WDT_enRESET_ENABLE<<24u)  | ((uint32_t)WDT_enINT_TYPE_STANDARD<<16u)| ((uint32_t)WDT_enSTALL_FREEZE<<8u)  | ((uint32_t)WDT_enINTERRUPT_ENABLE<<0u),
    WDT_enMODE_RESET_NMI_CONTINUE_DIS               = ((uint32_t)WDT_enRESET_ENABLE<<24u)  | ((uint32_t)WDT_enINT_TYPE_NMI<<16u)     | ((uint32_t)WDT_enSTALL_CONTINUE<<8u)| ((uint32_t)WDT_enINTERRUPT_DISABLE<<0u),
    WDT_enMODE_RESET_NMI_CONTINUE_EN                = ((uint32_t)WDT_enRESET_ENABLE<<24u)  | ((uint32_t)WDT_enINT_TYPE_NMI<<16u)     | ((uint32_t)WDT_enSTALL_CONTINUE<<8u)| ((uint32_t)WDT_enINTERRUPT_ENABLE<<0u),
    WDT_enMODE_RESET_NMI_FREEZE_DIS                 = ((uint32_t)WDT_enRESET_ENABLE<<24u)  | ((uint32_t)WDT_enINT_TYPE_NMI<<16u)     | ((uint32_t)WDT_enSTALL_FREEZE<<8u)  | ((uint32_t)WDT_enINTERRUPT_DISABLE<<0u),
    WDT_enMODE_RESET_NMI_FREEZE_EN                  = ((uint32_t)WDT_enRESET_ENABLE<<24u)  | ((uint32_t)WDT_enINT_TYPE_NMI<<16u)     | ((uint32_t)WDT_enSTALL_FREEZE<<8u)  | ((uint32_t)WDT_enINTERRUPT_ENABLE<<0u),
    WDT_enMODE_NORESET_STANDARD_CONTINUE_DIS        = ((uint32_t)WDT_enRESET_DISABLE<<24u) | ((uint32_t)WDT_enINT_TYPE_STANDARD<<16u)| ((uint32_t)WDT_enSTALL_CONTINUE<<8u)| ((uint32_t)WDT_enINTERRUPT_DISABLE<<0u),
    WDT_enMODE_NORESET_STANDARD_CONTINUE_EN         = ((uint32_t)WDT_enRESET_DISABLE<<24u) | ((uint32_t)WDT_enINT_TYPE_STANDARD<<16u)| ((uint32_t)WDT_enSTALL_CONTINUE<<8u)| ((uint32_t)WDT_enINTERRUPT_ENABLE<<0u),
    WDT_enMODE_NORESET_STANDARD_FREEZE_DIS          = ((uint32_t)WDT_enRESET_DISABLE<<24u) | ((uint32_t)WDT_enINT_TYPE_STANDARD<<16u)| ((uint32_t)WDT_enSTALL_FREEZE<<8u)  | ((uint32_t)WDT_enINTERRUPT_DISABLE<<0u),
    WDT_enMODE_NORESET_STANDARD_FREEZE_EN           = ((uint32_t)WDT_enRESET_DISABLE<<24u) | ((uint32_t)WDT_enINT_TYPE_STANDARD<<16u)| ((uint32_t)WDT_enSTALL_FREEZE<<8u)  | ((uint32_t)WDT_enINTERRUPT_ENABLE<<0u),
    WDT_enMODE_NORESET_NMI_CONTINUE_DIS             = ((uint32_t)WDT_enRESET_DISABLE<<24u) | ((uint32_t)WDT_enINT_TYPE_NMI<<16u)     | ((uint32_t)WDT_enSTALL_CONTINUE<<8u)| ((uint32_t)WDT_enINTERRUPT_DISABLE<<0u),
    WDT_enMODE_NORESET_NMI_CONTINUE_EN              = ((uint32_t)WDT_enRESET_DISABLE<<24u) | ((uint32_t)WDT_enINT_TYPE_NMI<<16u)     | ((uint32_t)WDT_enSTALL_CONTINUE<<8u)| ((uint32_t)WDT_enINTERRUPT_ENABLE<<0u),
    WDT_enMODE_NORESET_NMI_FREEZE_DIS               = ((uint32_t)WDT_enRESET_DISABLE<<24u) | ((uint32_t)WDT_enINT_TYPE_NMI<<16u)     | ((uint32_t)WDT_enSTALL_FREEZE<<8u)  | ((uint32_t)WDT_enINTERRUPT_DISABLE<<0u),
    WDT_enMODE_NORESET_NMI_FREEZE_EN                = ((uint32_t)WDT_enRESET_DISABLE<<24u) | ((uint32_t)WDT_enINT_TYPE_NMI<<16u)     | ((uint32_t)WDT_enSTALL_FREEZE<<8u)  | ((uint32_t)WDT_enINTERRUPT_ENABLE<<0u),
    WDT_enMODE_UNDEF                                =  0xFFFFFFFFu,
}WDT_nMODE;

typedef struct
{
    WDT_nINTERRUPT  enInterrupt;
    WDT_nSTALL      enStall;
    WDT_nINT_TYPE   enIntType;
    WDT_nRESET      enResetOutput;
}WDT_MODE_Typedef;


#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_ENUM_H_ */
