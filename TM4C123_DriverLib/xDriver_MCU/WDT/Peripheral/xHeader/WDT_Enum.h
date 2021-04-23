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
    WDT_enSTATUS_OK = 0UL,
    WDT_enSTATUS_ERROR = 1UL,
    WDT_enSTATUS_UNDEF = 0xFFFFFFFFUL,
}WDT_nSTATUS;

typedef enum
{
    WDT_enNOREADY = 0UL,
    WDT_enREADY = 1UL,
}WDT_nREADY;

typedef enum
{
    WDT_enMODULE_0 = 0UL,
    WDT_enMODULE_1 = 1UL,
    WDT_enMODULE_MAX = 2UL,
}WDT_nMODULE;

typedef enum
{
    WDT_enWRITE_STATUS_BUSY = 0UL,
    WDT_enWRITE_STATUS_READY = 1UL,
    WDT_enWRITE_STATUS_UNDEF = 0xFFFFFFFFUL,
}WDT_nWRITE_STATUS;

typedef enum
{
    WDT_enRESET_DISABLE = 0UL,
    WDT_enRESET_ENABLE = 1UL,
    WDT_enRESET_UNDEF = 0xFFFFFFFFUL,
}WDT_nRESET;

typedef enum
{
    WDT_enINTERRUPT_DISABLE = 0UL,
    WDT_enINTERRUPT_ENABLE = 1UL,
    WDT_enINTERRUPT_UNDEF = 0xFFFFFFFFUL,
}WDT_nINTERRUPT;

typedef enum
{
    WDT_enINT_TYPE_STANDARD = 0UL,
    WDT_enINT_TYPE_NMI = 1UL,
    WDT_enINT_TYPE_MAX = 2UL,
    WDT_enINT_TYPE_UNDEF = 0xFFFFFFFFUL,
}WDT_nINT_TYPE;

typedef enum
{
    WDT_enINT_STATUS_NOOCCUR = 0UL,
    WDT_enINT_STATUS_OCCUR = 1UL,
    WDT_enINT_STATUS_UNDEF = 0xFFFFFFFFUL,
}WDT_nINT_STATUS;

typedef enum
{
    WDT_enSTALL_CONTINUE = 0UL,
    WDT_enSTALL_FREEZE = 1UL,
    WDT_enSTALL_UNDEF = 0xFFFFFFFFUL,
}WDT_nSTALL;

typedef enum
{
    WDT_enLOCK_UNLOCKED = 0UL,
    WDT_enLOCK_LOCKED = 1UL,
    WDT_enLOCK_UNDEF = 0xFFFFFFFFUL,
}WDT_nLOCK;

typedef enum
{
    WDT_enKEY_LOCK = 0UL,
    WDT_enKEY_UNLOCK = 0x1ACCE551UL,
    WDT_enKEY_UNDEF = 0xFFFFFFFFUL,
}WDT_nKEY;

typedef enum
{
    WDT_enPRI0 = 0UL,
    WDT_enPRI1 = 1UL,
    WDT_enPRI2 = 2UL,
    WDT_enPRI3 = 3UL,
    WDT_enPRI4 = 4UL,
    WDT_enPRI5 = 5UL,
    WDT_enPRI6 = 6UL,
    WDT_enPRI7 = 7UL,
    WDT_enDEFAULT = 0xFFFFFFFFUL,
}WDT_nPRIORITY;

typedef enum
{
    /*  DIR*/
    WDT_enMODE_RESET_STANDARD_CONTINUE_DIS = ((uint32_t) WDT_enRESET_ENABLE << 24UL) | ((uint32_t) WDT_enINT_TYPE_STANDARD << 16UL) | ((uint32_t) WDT_enSTALL_CONTINUE << 8UL) | ((uint32_t) WDT_enINTERRUPT_DISABLE << 0UL),
    WDT_enMODE_RESET_STANDARD_CONTINUE_ENA = ((uint32_t) WDT_enRESET_ENABLE << 24UL) | ((uint32_t) WDT_enINT_TYPE_STANDARD << 16UL) | ((uint32_t) WDT_enSTALL_CONTINUE << 8UL) | ((uint32_t) WDT_enINTERRUPT_ENABLE << 0UL),
    WDT_enMODE_RESET_STANDARD_FREEZE_DIS = ((uint32_t) WDT_enRESET_ENABLE << 24UL) | ((uint32_t) WDT_enINT_TYPE_STANDARD << 16UL) | ((uint32_t) WDT_enSTALL_FREEZE << 8UL) | ((uint32_t) WDT_enINTERRUPT_DISABLE << 0UL),
    WDT_enMODE_RESET_STANDARD_FREEZE_ENA = ((uint32_t) WDT_enRESET_ENABLE << 24UL) | ((uint32_t) WDT_enINT_TYPE_STANDARD << 16UL) | ((uint32_t) WDT_enSTALL_FREEZE << 8UL) | ((uint32_t) WDT_enINTERRUPT_ENABLE << 0UL),
    WDT_enMODE_RESET_NMI_CONTINUE_DIS = ((uint32_t) WDT_enRESET_ENABLE << 24UL) | ((uint32_t) WDT_enINT_TYPE_NMI << 16UL) | ((uint32_t) WDT_enSTALL_CONTINUE << 8UL) | ((uint32_t) WDT_enINTERRUPT_DISABLE << 0UL),
    WDT_enMODE_RESET_NMI_CONTINUE_ENA = ((uint32_t) WDT_enRESET_ENABLE << 24UL) | ((uint32_t) WDT_enINT_TYPE_NMI << 16UL) | ((uint32_t) WDT_enSTALL_CONTINUE << 8UL) | ((uint32_t) WDT_enINTERRUPT_ENABLE << 0UL),
    WDT_enMODE_RESET_NMI_FREEZE_DIS = ((uint32_t) WDT_enRESET_ENABLE << 24UL) | ((uint32_t) WDT_enINT_TYPE_NMI << 16UL) | ((uint32_t) WDT_enSTALL_FREEZE << 8UL) | ((uint32_t) WDT_enINTERRUPT_DISABLE << 0UL),
    WDT_enMODE_RESET_NMI_FREEZE_ENA = ((uint32_t) WDT_enRESET_ENABLE << 24UL) | ((uint32_t) WDT_enINT_TYPE_NMI << 16UL) | ((uint32_t) WDT_enSTALL_FREEZE << 8UL) | ((uint32_t) WDT_enINTERRUPT_ENABLE << 0UL),
    WDT_enMODE_NORESET_STANDARD_CONTINUE_DIS = ((uint32_t) WDT_enRESET_DISABLE << 24UL) | ((uint32_t) WDT_enINT_TYPE_STANDARD << 16UL) | ((uint32_t) WDT_enSTALL_CONTINUE << 8UL) | ((uint32_t) WDT_enINTERRUPT_DISABLE << 0UL),
    WDT_enMODE_NORESET_STANDARD_CONTINUE_ENA = ((uint32_t) WDT_enRESET_DISABLE << 24UL) | ((uint32_t) WDT_enINT_TYPE_STANDARD << 16UL) | ((uint32_t) WDT_enSTALL_CONTINUE << 8UL) | ((uint32_t) WDT_enINTERRUPT_ENABLE << 0UL),
    WDT_enMODE_NORESET_STANDARD_FREEZE_DIS = ((uint32_t) WDT_enRESET_DISABLE << 24UL) | ((uint32_t) WDT_enINT_TYPE_STANDARD << 16UL) | ((uint32_t) WDT_enSTALL_FREEZE << 8UL) | ((uint32_t) WDT_enINTERRUPT_DISABLE << 0UL),
    WDT_enMODE_NORESET_STANDARD_FREEZE_ENA = ((uint32_t) WDT_enRESET_DISABLE << 24UL) | ((uint32_t) WDT_enINT_TYPE_STANDARD << 16UL) | ((uint32_t) WDT_enSTALL_FREEZE << 8UL) | ((uint32_t) WDT_enINTERRUPT_ENABLE << 0UL),
    WDT_enMODE_NORESET_NMI_CONTINUE_DIS = ((uint32_t) WDT_enRESET_DISABLE << 24UL) | ((uint32_t) WDT_enINT_TYPE_NMI << 16UL) | ((uint32_t) WDT_enSTALL_CONTINUE << 8UL) | ((uint32_t) WDT_enINTERRUPT_DISABLE << 0UL),
    WDT_enMODE_NORESET_NMI_CONTINUE_ENA = ((uint32_t) WDT_enRESET_DISABLE << 24UL) | ((uint32_t) WDT_enINT_TYPE_NMI << 16UL) | ((uint32_t) WDT_enSTALL_CONTINUE << 8UL) | ((uint32_t) WDT_enINTERRUPT_ENABLE << 0UL),
    WDT_enMODE_NORESET_NMI_FREEZE_DIS = ((uint32_t) WDT_enRESET_DISABLE << 24UL) | ((uint32_t) WDT_enINT_TYPE_NMI << 16UL) | ((uint32_t) WDT_enSTALL_FREEZE << 8UL) | ((uint32_t) WDT_enINTERRUPT_DISABLE << 0UL),
    WDT_enMODE_NORESET_NMI_FREEZE_ENA = ((uint32_t) WDT_enRESET_DISABLE << 24UL) | ((uint32_t) WDT_enINT_TYPE_NMI << 16UL) | ((uint32_t) WDT_enSTALL_FREEZE << 8UL) | ((uint32_t) WDT_enINTERRUPT_ENABLE << 0UL),
    WDT_enMODE_UNDEF = 0xFFFFFFFFUL,
}WDT_nMODE;

typedef struct
{
    WDT_nINTERRUPT enInterrupt;
    WDT_nSTALL enStall;
    WDT_nINT_TYPE enIntType;
    WDT_nRESET enResetOutput;
}WDT_MODE_Typedef;


#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_ENUM_H_ */
