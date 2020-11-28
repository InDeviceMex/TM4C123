/**
 *
 * @file ACMP_RegisterDefines_ACMPPP.h
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
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACMPPP_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACMPPP_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
 ************************************ 7 ACMPPP *********************************************
 ******************************************************************************************/
/*----------*/
#define ACMP_ACMPPP_R_CMP0_MASK                     ((uint32_t)0x00000001u)
#define ACMP_ACMPPP_R_CMP0_BIT                         ((uint32_t)0u)
#define ACMP_ACMPPP_R_CMP0_NOPRESENT         ((uint32_t)0x00000000u)
#define ACMP_ACMPPP_R_CMP0_PRESENT             ((uint32_t)0x00000001u)

#define ACMP_ACMPPP_CMP0_MASK               ((uint32_t)0x00000001u)
#define ACMP_ACMPPP_CMP0_NOPRESENT           ((uint32_t)0x00000000u)
#define ACMP_ACMPPP_CMP0_PRESENT            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define ACMP_ACMPPP_R_CMP1_MASK                     ((uint32_t)0x00000002u)
#define ACMP_ACMPPP_R_CMP1_BIT                         ((uint32_t)1u)
#define ACMP_ACMPPP_R_CMP1_NOPRESENT         ((uint32_t)0x00000000u)
#define ACMP_ACMPPP_R_CMP1_PRESENT             ((uint32_t)0x00000002u)

#define ACMP_ACMPPP_CMP1_MASK               ((uint32_t)0x00000001u)
#define ACMP_ACMPPP_CMP1_NOPRESENT           ((uint32_t)0x00000000u)
#define ACMP_ACMPPP_CMP1_PRESENT            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define ACMP_ACMPPP_R_C0O_MASK                     ((uint32_t)0x00010000u)
#define ACMP_ACMPPP_R_C0O_BIT                         ((uint32_t)16u)
#define ACMP_ACMPPP_R_C0O_NOPRESENT         ((uint32_t)0x00000000u)
#define ACMP_ACMPPP_R_C0O_PRESENT             ((uint32_t)0x00010000u)

#define ACMP_ACMPPP_C0O_MASK               ((uint32_t)0x00000001u)
#define ACMP_ACMPPP_C0O_NOPRESENT           ((uint32_t)0x00000000u)
#define ACMP_ACMPPP_C0O_PRESENT            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define ACMP_ACMPPP_R_C1O_MASK                     ((uint32_t)0x00020000u)
#define ACMP_ACMPPP_R_C1O_BIT                         ((uint32_t)17u)
#define ACMP_ACMPPP_R_C1O_NOPRESENT         ((uint32_t)0x00000000u)
#define ACMP_ACMPPP_R_C1O_PRESENT              ((uint32_t)0x00020000u)

#define ACMP_ACMPPP_C1O_MASK               ((uint32_t)0x00000001u)
#define ACMP_ACMPPP_C1O_NOPRESENT           ((uint32_t)0x00000000u)
#define ACMP_ACMPPP_C1O_PRESENT            ((uint32_t)0x00000001u)
/*----------*/




#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACMPPP_H_ */
