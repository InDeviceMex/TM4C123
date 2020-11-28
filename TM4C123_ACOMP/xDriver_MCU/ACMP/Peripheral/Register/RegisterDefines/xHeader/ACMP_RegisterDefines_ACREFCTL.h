/**
 *
 * @file ACMP_RegisterDefines_ACREFCTL.h
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
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACREFCTL_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACREFCTL_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 4 ACREFCTL *********************************************
******************************************************************************************/
/*--------*/
#define ACMP_ACREFCTL_R_VREF_MASK      ((uint32_t)0x0000000Fu)
#define ACMP_ACREFCTL_R_VREF_BIT                ((uint32_t)0u)
#define ACMP_ACREFCTL_R_VREF_0      ((uint32_t)0x00000000u)
#define ACMP_ACREFCTL_R_VREF_1        ((uint32_t)0x00000001u)
#define ACMP_ACREFCTL_R_VREF_2        ((uint32_t)0x00000002u)
#define ACMP_ACREFCTL_R_VREF_3        ((uint32_t)0x00000003u)
#define ACMP_ACREFCTL_R_VREF_4        ((uint32_t)0x00000004u)
#define ACMP_ACREFCTL_R_VREF_5        ((uint32_t)0x00000005u)
#define ACMP_ACREFCTL_R_VREF_6        ((uint32_t)0x00000006u)
#define ACMP_ACREFCTL_R_VREF_7        ((uint32_t)0x00000007u)
#define ACMP_ACREFCTL_R_VREF_8        ((uint32_t)0x00000008u)
#define ACMP_ACREFCTL_R_VREF_9        ((uint32_t)0x00000009u)
#define ACMP_ACREFCTL_R_VREF_10        ((uint32_t)0x0000000Au)
#define ACMP_ACREFCTL_R_VREF_11       ((uint32_t)0x0000000Bu)
#define ACMP_ACREFCTL_R_VREF_12       ((uint32_t)0x0000000Cu)
#define ACMP_ACREFCTL_R_VREF_13       ((uint32_t)0x0000000Du)
#define ACMP_ACREFCTL_R_VREF_14       ((uint32_t)0x0000000Eu)
#define ACMP_ACREFCTL_R_VREF_15        ((uint32_t)0x0000000Fu)

#define ACMP_ACREFCTL_VREF_MASK      ((uint32_t)0x0000000Fu)
#define ACMP_ACREFCTL_VREF_0      ((uint32_t)0x00000000u)
#define ACMP_ACREFCTL_VREF_1        ((uint32_t)0x00000001u)
#define ACMP_ACREFCTL_VREF_2        ((uint32_t)0x00000002u)
#define ACMP_ACREFCTL_VREF_3        ((uint32_t)0x00000003u)
#define ACMP_ACREFCTL_VREF_4        ((uint32_t)0x00000004u)
#define ACMP_ACREFCTL_VREF_5        ((uint32_t)0x00000005u)
#define ACMP_ACREFCTL_VREF_6        ((uint32_t)0x00000006u)
#define ACMP_ACREFCTL_VREF_7        ((uint32_t)0x00000007u)
#define ACMP_ACREFCTL_VREF_8        ((uint32_t)0x00000008u)
#define ACMP_ACREFCTL_VREF_9        ((uint32_t)0x00000009u)
#define ACMP_ACREFCTL_VREF_10        ((uint32_t)0x0000000Au)
#define ACMP_ACREFCTL_VREF_11       ((uint32_t)0x0000000Bu)
#define ACMP_ACREFCTL_VREF_12       ((uint32_t)0x0000000Cu)
#define ACMP_ACREFCTL_VREF_13       ((uint32_t)0x0000000Du)
#define ACMP_ACREFCTL_VREF_14       ((uint32_t)0x0000000Eu)
#define ACMP_ACREFCTL_VREF_15        ((uint32_t)0x0000000Fu)
/*--------*/

/*--------*/
#define ACMP_ACREFCTL_R_RNG_MASK      ((uint32_t)0x00000100u)
#define ACMP_ACREFCTL_R_RNG_BIT       ((uint32_t)8u)
#define ACMP_ACREFCTL_R_RNG_29_4      ((uint32_t)0x00000000u)
#define ACMP_ACREFCTL_R_RNG_22_12        ((uint32_t)0x00000100u)

#define ACMP_ACREFCTL_RNG_MASK      ((uint32_t)0x00000001u)
#define ACMP_ACREFCTL_RNG_29_4      ((uint32_t)0x00000000u)
#define ACMP_ACREFCTL_RNG_22_12        ((uint32_t)0x00000001u)
/*--------*/


/*--------*/
#define ACMP_ACREFCTL_R_EN_MASK      ((uint32_t)0x00000200u)
#define ACMP_ACREFCTL_R_EN_BIT       ((uint32_t)9u)
#define ACMP_ACREFCTL_R_EN_OFF      ((uint32_t)0x00000000u)
#define ACMP_ACREFCTL_R_EN_ON        ((uint32_t)0x00000200u)

#define ACMP_ACREFCTL_EN_MASK      ((uint32_t)0x00000001u)
#define ACMP_ACREFCTL_EN_OFF       ((uint32_t)0x00000000u)
#define ACMP_ACREFCTL_EN_ON        ((uint32_t)0x00000001u)
/*--------*/

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACREFCTL_H_ */
