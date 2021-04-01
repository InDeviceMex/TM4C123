/**
 *
 * @file ACMP_Enum.h
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
 * @verbatim 28 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_XHEADER_ACMP_ENUM_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_XHEADER_ACMP_ENUM_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    ACMP_enSTATUS_OK = 0UL,
    ACMP_enSTATUS_ERROR = 1UL,
    ACMP_enSTATUS_UNDEF = 0xFFFFFFFFUL,
}ACMP_nSTATUS;

typedef enum
{
    ACMP_enNOREADY = 0UL,
    ACMP_enREADY = 1UL,
}ACMP_nREADY;

typedef enum
{
    ACMP_enMODULE_0 = 0UL,
    ACMP_enMODULE_MAX = 1UL,
}ACMP_nMODULE;

typedef enum
{
    ACMP_enPRI0 = 0UL,
    ACMP_enPRI1 = 1UL,
    ACMP_enPRI2 = 2UL,
    ACMP_enPRI3 = 3UL,
    ACMP_enPRI4 = 4UL,
    ACMP_enPRI5 = 5UL,
    ACMP_enPRI6 = 6UL,
    ACMP_enPRI7 = 7UL,
    ACMP_enPRIMAX = 7UL,
    ACMP_enDEFAULT = 0xFFFFFFFFUL,
}ACMP_nPRIORITY;

typedef enum
{
    ACMP_enCOMP_0 = 0UL,
    ACMP_enCOMP_1 = 1UL,
    ACMP_enCOMP_MAX = 2UL,
    ACMP_enCOMP_UNDEF = 0xFFFFFFFFUL,
}ACMP_nCOMP;

typedef enum
{
    ACMP_enCOMPMASK_0 = 0x1UL,
    ACMP_enCOMPMASK_1 = 0x2UL,
    ACMP_enCOMPMASK_ALL = 0x3UL,
    ACMP_enCOMPMASK_UNDEF = 0xFFFFFFFFUL,
}ACMP_nCOMPMASK;

typedef enum
{
    ACMP_enINT_NOOCCUR = 0UL,
    ACMP_enINT_OCCUR = 1UL,
    ACMP_enINT_STATUS_UNDEF = 0xFFFFFFFFUL,
} ACMP_nINT_STATUS;

typedef enum
{
    ACMP_enRESISTOR_ENABLE_DIS = 0UL,
    ACMP_enRESISTOR_ENABLE_ENA = 1UL,
    ACMP_enRESISTOR_ENABLE_UNDEF = 0xFFFFFFFFUL,
} ACMP_nRESISTOR_ENABLE;

typedef enum
{
    ACMP_enRESISTOR_STEP_29_4 = 0UL,
    ACMP_enRESISTOR_STEP_22_12 = 1UL,
    ACMP_enRESISTOR_STEP_UNDEF = 0xFFFFFFFFUL,
} ACMP_nRESISTOR_STEP;

typedef enum
{
    ACMP_enOUTPUT_VALUE_VMIN_GREATER = 0UL,
    ACMP_enOUTPUT_VALUE_VMAX_LOWER = 0UL,
    ACMP_enOUTPUT_VALUE_VMIN_LOWER = 1UL,
    ACMP_enOUTPUT_VALUE_VMAX_GREATER = 1UL,
    ACMP_enOUTPUT_VALUE_UNDEF = 0xFFFFFFFFUL,
} ACMP_nOUTPUT_VALUE;

typedef enum
{
    ACMP_enVMAX_PIN_CN = 0UL,
    ACMP_enVMAX_PIN_C0 = 1UL,
    ACMP_enVMAX_PIN_VIREF = 2UL,
    ACMP_enVMAX_PIN_UNDEF = 0xFFFFFFFFUL,
} ACMP_nVMAX_PIN;

typedef enum
{
    ACMP_enADC_DIS = 0UL,
    ACMP_enADC_ENA = 1UL,
    ACMP_enADC_UNDEF = 0xFFFFFFFFUL,
} ACMP_nADC;

typedef enum
{
    ACMP_enADC_SENSE_LEVEL = 0UL,
    ACMP_enADC_SENSE_EDGE = 1UL,
    ACMP_enADC_SENSE_UNDEF = 0xFFFFFFFFUL,
} ACMP_nADC_SENSE;

typedef enum
{
    ACMP_enADC_LEVEL_LOW = 0UL,
    ACMP_enADC_LEVEL_HIGH = 1UL,
    ACMP_enADC_LEVEL_UNDEF = 0xFFFFFFFFUL,
} ACMP_nADC_LEVEL;

typedef enum
{
    ACMP_enADC_EDGE_FALLING = 0UL,
    ACMP_enADC_EDGE_RISING = 1UL,
    ACMP_enADC_EDGE_BOTH = 2UL,
    ACMP_enADC_EDGE_UNDEF = 0xFFFFFFFFUL,
} ACMP_nADC_EDGE;

typedef enum
{
    ACMP_enINT_SENSE_LEVEL = 0UL,
    ACMP_enINT_SENSE_EDGE = 1UL,
    ACMP_enINT_SENSE_UNDEF = 0xFFFFFFFFUL,
} ACMP_nINT_SENSE;

typedef enum
{
    ACMP_enINT_LEVEL_LOW = 0UL,
    ACMP_enINT_LEVEL_HIGH = 1UL,
    ACMP_enINT_LEVEL_UNDEF = 0xFFFFFFFFUL,
} ACMP_nINT_LEVEL;

typedef enum
{
    ACMP_enINT_EDGE_FALLING = 0UL,
    ACMP_enINT_EDGE_RISING = 1UL,
    ACMP_enINT_EDGE_BOTH = 2UL,
    ACMP_enINT_EDGE_UNDEF = 0xFFFFFFFFUL,
} ACMP_nINT_EDGE;

typedef enum
{
    ACMP_enOUTPUT_INVERT_DIS = 0UL,
    ACMP_enOUTPUT_INVERT_ENA = 1UL,
    ACMP_enOUTPUT_INVERT_UNDEF = 0xFFFFFFFFUL,
} ACMP_nOUTPUT_INVERT;

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_XHEADER_ACMP_ENUM_H_ */
