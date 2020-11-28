/**
 *
 * @file ACMP_RegisterDefines_ACRIS.h
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
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACRIS_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACRIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
 ************************************ 2 ACRIS *********************************************
 ******************************************************************************************/
/*----------*/
#define ACMP_ACRIS_R_IN_MASK             ((uint32_t)0x00000003Fu)
#define ACMP_ACRIS_R_IN_BIT              ((uint32_t)0u)
#define ACMP_ACRIS_R_IN_NOACTIVE         ((uint32_t)0x00000000u)
#define ACMP_ACRIS_R_IN_ACTIVE           ((uint32_t)0x00000003u)

#define ACMP_ACRIS_IN_MASK               ((uint32_t)0x00000003u)
#define ACMP_ACRIS_IN_NOACTIVE           ((uint32_t)0x00000000u)
#define ACMP_ACRIS_IN_ACTIVE             ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define ACMP_ACRIS_R_IN0_MASK             ((uint32_t)0x00000001u)
#define ACMP_ACRIS_R_IN0_BIT              ((uint32_t)0u)
#define ACMP_ACRIS_R_IN0_NOACTIVE         ((uint32_t)0x00000000u)
#define ACMP_ACRIS_R_IN0_ACTIVE           ((uint32_t)0x00000001u)

#define ACMP_ACRIS_IN0_MASK               ((uint32_t)0x00000001u)
#define ACMP_ACRIS_IN0_NOACTIVE           ((uint32_t)0x00000000u)
#define ACMP_ACRIS_IN0_ACTIVE             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define ACMP_ACRIS_R_IN1_MASK             ((uint32_t)0x00000002u)
#define ACMP_ACRIS_R_IN1_BIT                   ((uint32_t)0u)
#define ACMP_ACRIS_R_IN1_NOACTIVE         ((uint32_t)0x00000000u)
#define ACMP_ACRIS_R_IN1_ACTIVE           ((uint32_t)0x00000002u)

#define ACMP_ACRIS_IN1_MASK               ((uint32_t)0x00000001u)
#define ACMP_ACRIS_IN1_NOACTIVE           ((uint32_t)0x00000000u)
#define ACMP_ACRIS_IN1_ACTIVE             ((uint32_t)0x00000001u)
/*----------*/





#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACRIS_H_ */
