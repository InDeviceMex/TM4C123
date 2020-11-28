/**
 *
 * @file ACMP_RegisterDefines_ACCTL.h
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
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACCTL_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACCTL_H_
#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 6 ACCTL *********************************************
******************************************************************************************/
/*--------*/
#define ACMP_ACCTL_R_CINV_MASK             ((uint32_t)0x00000002u)
#define ACMP_ACCTL_R_CINV_BIT                  ((uint32_t)1u)
#define ACMP_ACCTL_R_CINV_NORMAL         ((uint32_t)0x00000000u)
#define ACMP_ACCTL_R_CINV_INVERTED      ((uint32_t)0x00000002u)

#define ACMP_ACCTL_CINV_MASK               ((uint32_t)0x00000001u)
#define ACMP_ACCTL_CINV_NORMAL           ((uint32_t)0x00000000u)
#define ACMP_ACCTL_CINV_INVERTED         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ACMP_ACCTL_R_ISEN_MASK             ((uint32_t)0x0000000Cu)
#define ACMP_ACCTL_R_ISEN_BIT                  ((uint32_t)2u)
#define ACMP_ACCTL_R_ISEN_LEVEL             ((uint32_t)0x00000000u)
#define ACMP_ACCTL_R_ISEN_FALLING          ((uint32_t)0x00000004u)
#define ACMP_ACCTL_R_ISEN_RISING           ((uint32_t)0x00000008u)
#define ACMP_ACCTL_R_ISEN_EITHER           ((uint32_t)0x0000000Cu)

#define ACMP_ACCTL_ISEN_MASK               ((uint32_t)0x00000003u)
#define ACMP_ACCTL_ISEN_LEVEL              ((uint32_t)0x00000000u)
#define ACMP_ACCTL_ISEN_FALLING            ((uint32_t)0x00000001u)
#define ACMP_ACCTL_ISEN_RISING             ((uint32_t)0x00000002u)
#define ACMP_ACCTL_ISEN_EITHER             ((uint32_t)0x00000003u)
/*--------*/
/*--------*/
#define ACMP_ACCTL_R_ISLVAL_MASK             ((uint32_t)0x00000010u)
#define ACMP_ACCTL_R_ISLVAL_BIT                  ((uint32_t)4u)
#define ACMP_ACCTL_R_ISLVAL_LOW            ((uint32_t)0x00000000u)
#define ACMP_ACCTL_R_ISLVAL_HIGH           ((uint32_t)0x00000010u)

#define ACMP_ACCTL_ISLVAL_MASK               ((uint32_t)0x00000001u)
#define ACMP_ACCTL_ISLVAL_LOW                  ((uint32_t)0x00000000u)
#define ACMP_ACCTL_ISLVAL_HIGH                 ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ACMP_ACCTL_R_TSEN_MASK             ((uint32_t)0x00000060u)
#define ACMP_ACCTL_R_TSEN_BIT                  ((uint32_t)5u)
#define ACMP_ACCTL_R_TSEN_LEVEL              ((uint32_t)0x00000000u)
#define ACMP_ACCTL_R_TSEN_FALLING         ((uint32_t)0x00000020u)
#define ACMP_ACCTL_R_TSEN_RISING           ((uint32_t)0x00000040u)
#define ACMP_ACCTL_R_TSEN_EITHER           ((uint32_t)0x00000060u)

#define ACMP_ACCTL_TSEN_MASK               ((uint32_t)0x00000003u)
#define ACMP_ACCTL_TSEN_LEVEL              ((uint32_t)0x00000000u)
#define ACMP_ACCTL_TSEN_FALLING            ((uint32_t)0x00000001u)
#define ACMP_ACCTL_TSEN_RISING             ((uint32_t)0x00000002u)
#define ACMP_ACCTL_TSEN_EITHER             ((uint32_t)0x00000003u)
/*--------*/

/*--------*/
#define ACMP_ACCTL_R_TSLVAL_MASK             ((uint32_t)0x00000080u)
#define ACMP_ACCTL_R_TSLVAL_BIT                  ((uint32_t)7u)
#define ACMP_ACCTL_R_TSLVAL_LOW            ((uint32_t)0x00000000u)
#define ACMP_ACCTL_R_TSLVAL_HIGH           ((uint32_t)0x00000080u)

#define ACMP_ACCTL_TSLVAL_MASK               ((uint32_t)0x00000001u)
#define ACMP_ACCTL_TSLVAL_LOW                  ((uint32_t)0x00000000u)
#define ACMP_ACCTL_TSLVAL_HIGH                 ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ACMP_ACCTL_R_ASRCP_MASK             ((uint32_t)0x00000600u)
#define ACMP_ACCTL_R_ASRCP_BIT                  ((uint32_t)9u)
#define ACMP_ACCTL_R_ASRCP_CN                  ((uint32_t)0x00000000u)
#define ACMP_ACCTL_R_ASRCP_C0                  ((uint32_t)0x00000200u)
#define ACMP_ACCTL_R_ASRCP_VREF                ((uint32_t)0x00000400u)

#define ACMP_ACCTL_ASRCP_MASK               ((uint32_t)0x00000003u)
#define ACMP_ACCTL_ASRCP_CN                ((uint32_t)0x00000000u)
#define ACMP_ACCTL_ASRCP_C0                ((uint32_t)0x00000001u)
#define ACMP_ACCTL_ASRCP_VREF             ((uint32_t)0x00000002u)
/*--------*/

/*--------*/
#define ACMP_ACCTL_R_TOEN_MASK             ((uint32_t)0x00000800u)
#define ACMP_ACCTL_R_TOEN_BIT                  ((uint32_t)11u)
#define ACMP_ACCTL_R_TOEN_DIS            ((uint32_t)0x00000000u)
#define ACMP_ACCTL_R_TOEN_EN           ((uint32_t)0x00000800u)

#define ACMP_ACCTL_TOEN_MASK               ((uint32_t)0x00000001u)
#define ACMP_ACCTL_TOEN_DIS                  ((uint32_t)0x00000000u)
#define ACMP_ACCTL_TOEN_EN                 ((uint32_t)0x00000001u)
/*--------*/

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACCTL_H_ */
