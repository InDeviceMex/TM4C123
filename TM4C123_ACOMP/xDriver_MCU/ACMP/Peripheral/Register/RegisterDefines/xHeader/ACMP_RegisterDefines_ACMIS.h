/**
 *
 * @file ACMP_RegisterDefines_ACMIS.h
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
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACMIS_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACMIS_H_
#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 1 ACMIS *********************************************
******************************************************************************************/
/*--------*/
#define ACMP_ACMIS_R_IN_MASK      ((uint32_t)0x00000003u)
#define ACMP_ACMIS_R_IN_BIT                ((uint32_t)0u)
#define ACMP_ACMIS_R_IN_NOOCCUR       ((uint32_t)0x00000000u)
#define ACMP_ACMIS_R_IN_OCCUR        ((uint32_t)0x00000003u)
#define ACMP_ACMIS_R_IN_CLEAR        ((uint32_t)0x00000003u)

#define ACMP_ACMIS_IN_MASK        ((uint32_t)0x00000003u)
#define ACMP_ACMIS_IN_NOOCCUR         ((uint32_t)0x00000000u)
#define ACMP_ACMIS_IN_OCCUR          ((uint32_t)0x00000003u)
#define ACMP_ACMIS_IN_CLEAR         ((uint32_t)0x00000003u)
/*--------*/

/*--------*/
#define ACMP_ACMIS_R_IN0_MASK      ((uint32_t)0x00000001u)
#define ACMP_ACMIS_R_IN0_BIT       ((uint32_t)0u)
#define ACMP_ACMIS_R_IN0_NOOCCUR       ((uint32_t)0x00000000u)
#define ACMP_ACMIS_R_IN0_OCCUR        ((uint32_t)0x00000001u)
#define ACMP_ACMIS_R_IN0_CLEAR        ((uint32_t)0x00000001u)

#define ACMP_ACMIS_IN0_MASK        ((uint32_t)0x00000001u)
#define ACMP_ACMIS_IN0_NOOCCUR         ((uint32_t)0x00000000u)
#define ACMP_ACMIS_IN0_OCCUR          ((uint32_t)0x00000001u)
#define ACMP_ACMIS_IN0_CLEAR         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ACMP_ACMIS_R_IN1_MASK      ((uint32_t)0x00000002u)
#define ACMP_ACMIS_R_IN1_BIT       ((uint32_t)1u)
#define ACMP_ACMIS_R_IN1_NOOCCUR       ((uint32_t)0x00000000u)
#define ACMP_ACMIS_R_IN1_OCCUR        ((uint32_t)0x00000002u)
#define ACMP_ACMIS_R_IN1_CLEAR        ((uint32_t)0x00000002u)

#define ACMP_ACMIS_IN1_MASK                ((uint32_t)0x00000001u)
#define ACMP_ACMIS_IN1_NOOCCUR         ((uint32_t)0x00000000u)
#define ACMP_ACMIS_IN1_OCCUR          ((uint32_t)0x00000001u)
#define ACMP_ACMIS_IN1_CLEAR         ((uint32_t)0x00000001u)
/*--------*/

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACMIS_H_ */
