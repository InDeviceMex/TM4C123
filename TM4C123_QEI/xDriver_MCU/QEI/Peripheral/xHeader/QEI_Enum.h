/**
 *
 * @file QEI_Enum.h
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
 * @verbatim Apr 5, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 5, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_PERIPHERAL_XHEADER_QEI_ENUM_H_
#define XDRIVER_MCU_QEI_PERIPHERAL_XHEADER_QEI_ENUM_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    QEI_enSTATUS_OK = 0UL,
    QEI_enSTATUS_ERROR = 1UL,
    QEI_enSTATUS_UNDEF = 0xFFFFFFFFUL,
}QEI_nSTATUS;

typedef enum
{
    QEI_enNOREADY = 0UL,
    QEI_enREADY = 1UL,
}QEI_nREADY;

typedef enum
{
    QEI_enMODULE_0 = 0UL,
    QEI_enMODULE_1 = 1UL,
    QEI_enMODULE_MAX = 2UL,
}QEI_nMODULE;

typedef enum
{
    QEI_enPRI0 = 0UL,
    QEI_enPRI1 = 1UL,
    QEI_enPRI2 = 2UL,
    QEI_enPRI3 = 3UL,
    QEI_enPRI4 = 4UL,
    QEI_enPRI5 = 5UL,
    QEI_enPRI6 = 6UL,
    QEI_enPRI7 = 7UL,
    QEI_enPRIMAX = 7UL,
    QEI_enDEFAULT = 0xFFFFFFFFUL,
}QEI_nPRIORITY;

typedef enum
{
    QEI_enINTERRUPT_INDEX = 0UL,
    QEI_enINTERRUPT_TIMER = 1UL,
    QEI_enINTERRUPT_DIRECTION = 2UL,
    QEI_enINTERRUPT_ERROR = 3UL,
    QEI_enINTERRUPT_MAX = 4UL,
    QEI_enINTERRUPT_UNDEF = 0xFFFFFFFFUL,
}QEI_nINTERRUPT;

typedef enum
{
    QEI_enINT_SOURCE_INDEX = 0x1UL,
    QEI_enINT_SOURCE_TIMER = 0x2UL,
    QEI_enINT_SOURCE_DIRECTION = 0x4UL,
    QEI_enINT_SOURCE_ERROR = 0x8UL,
    QEI_enINT_SOURCE_ALL = 0xFUL,
    QEI_enINT_SOURCE_UNDEF = 0xFFFFFFFFUL,
}QEI_nINT_SOURCE;

typedef enum
{
    QEI_enINT_NOOCCUR = 0UL,
    QEI_enINT_OCCUR = 1UL,
    QEI_enINT_STATUS_UNDEF = 0xFFFFFFFFUL,
} QEI_nINT_STATUS;

typedef enum
{
    QEI_enDIRECTION_FORWARD = 0UL,
    QEI_enDIRECTION_REVERSE = 1UL,
    QEI_enDIRECTION_UNDEF = 0xFFFFFFFFUL,
} QEI_nDIRECTION;


#endif /* XDRIVER_MCU_QEI_PERIPHERAL_XHEADER_QEI_ENUM_H_ */
