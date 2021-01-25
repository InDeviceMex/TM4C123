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
    ACMP_enOK = 0U,
    ACMP_enERROR = 1U,
}ACMP_nSTATUS;

typedef enum
{
    ACMP_enNOREADY = 0U,
    ACMP_enREADY = 1U,
}ACMP_nREADY;


typedef enum
{
    ACMP_enPRI0=0U,
    ACMP_enPRI1=1U,
    ACMP_enPRI2=2U,
    ACMP_enPRI3=3U,
    ACMP_enPRI4=4U,
    ACMP_enPRI5=5U,
    ACMP_enPRI6=6U,
    ACMP_enPRI7=7U,
    ACMP_enPRIMAX=7U,
    ACMP_enDEFAULT=0xFFFFFFFFU,
}ACMP_nPRIORITY;

typedef enum
{
    ACMP_enMODULE_0 = 0U,
    ACMP_enMODULE_1 = 1U,
    ACMP_enMODULE_MAX = 1U,
    ACMP_enMODULE_UNDEF= 0xFFFFFFFFU,
}ACMP_nMODULE;

typedef enum
{
    ACMP_enMODULEMASK_0 = 0x1U,
    ACMP_enMODULEMASK_1 = 0x2U,
    ACMP_enMODULEMASK_ALL = 0x3U,
    ACMP_enMODULEMASK_MAX = 0x2U,
    ACMP_enMODULEMASK_UNDEF= 0xFFFFFFFFU,
}ACMP_nMODULEMASK;

typedef enum
{
    ACMP_enINT_NOOCCUR = 0U,
    ACMP_enINT_OCCUR = 1U,
    ACMP_enINT_STATUS_UNDEF = 0xFFFFFFFFU,
} ACMP_nINT_STATUS;

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_XHEADER_ACMP_ENUM_H_ */
