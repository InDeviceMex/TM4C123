/**
 *
 * @file ACMP_RegisterDefines_ACSTAT.h
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
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACSTAT_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACSTAT_H_
#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 5 ACSTAT *********************************************
******************************************************************************************/
/*--------*/
#define ACMP_ACSTAT_R_OVAL_MASK      ((uint32_t)0x00000002u)
#define ACMP_ACSTAT_R_OVAL_BIT          ((uint32_t)1u)
#define ACMP_ACSTAT_R_OVAL_LOW         ((uint32_t)0x00000000u)
#define ACMP_ACSTAT_R_OVAL_HIGH        ((uint32_t)0x00000002u)

#define ACMP_ACSTAT_OVAL_MASK        ((uint32_t)0x00000001u)
#define ACMP_ACSTAT_OVAL_LOW          ((uint32_t)0x00000000u)
#define ACMP_ACSTAT_OVAL_HIGH         ((uint32_t)0x00000001u)
/*--------*/

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACSTAT_H_ */
