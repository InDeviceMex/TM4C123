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
    ACMP_enMODULE_0 = 0u,
    ACMP_enMODULE_1 = 1u,
    ACMP_enMODULE_MAX = 1u,
    ACMP_enMODULE_UNDEF= 0xFFFFFFFFu,
}ACMP_nMODULE;

typedef enum
{
    ACMP_enMODULEMASK_0 = 0u,
    ACMP_enMODULEMASK_1 = 1u,
    ACMP_enMODULEMASK_UNDEF = 0xFFFFFFFFu,
}ACMP_nMODULEMASK;

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_XHEADER_ACMP_ENUM_H_ */
