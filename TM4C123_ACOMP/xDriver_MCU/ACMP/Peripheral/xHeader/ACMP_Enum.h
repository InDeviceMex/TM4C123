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
    ACMP_enOK = 0u,
    ACMP_enERROR = 1u,
}ACMP_nSTATUS;

typedef enum
{
    ACMP_enNOREADY = 0u,
    ACMP_enREADY = 1u,
}ACMP_nREADY;


typedef enum
{
    ACMP_enPRI0=0u,
    ACMP_enPRI1=1u,
    ACMP_enPRI2=2u,
    ACMP_enPRI3=3u,
    ACMP_enPRI4=4u,
    ACMP_enPRI5=5u,
    ACMP_enPRI6=6u,
    ACMP_enPRI7=7u,
    ACMP_enPRIMAX=7u,
    ACMP_enDEFAULT=0xFFFFFFFFu,
}ACMP_nPRIORITY;

typedef enum
{
    ACMP_enMODULE_0 = 0u,
    ACMP_enMODULE_1 = 1u,
    ACMP_enMODULE_MAX = 1u,
    ACMP_enMODULE_UNDEF= 0xFFFFFFFFu,
}ACMP_nMODULE;

typedef enum
{
    ACMP_enMODULEMASK_0 = 0x1u,
    ACMP_enMODULEMASK_1 = 0x2u,
    ACMP_enMODULEMASK_ALL = 0x3u,
    ACMP_enMODULEMASK_MAX = 0x2u,
    ACMP_enMODULEMASK_UNDEF= 0xFFFFFFFFu,
}ACMP_nMODULEMASK;

typedef enum
{
    ACMP_enINT_NOOCCUR = 0u,
    ACMP_enINT_OCCUR = 1u,
    ACMP_enINT_STATUS_UNDEF = 0xFFFFFFFFu,
} ACMP_nINT_STATUS;

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_XHEADER_ACMP_ENUM_H_ */
