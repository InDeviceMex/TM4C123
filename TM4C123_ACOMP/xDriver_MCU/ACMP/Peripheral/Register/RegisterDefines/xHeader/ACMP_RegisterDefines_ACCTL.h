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
#define ACMP_ACCTL_R_CINV_MASK             ((uint32_t)0x00000002U)
#define ACMP_ACCTL_R_CINV_BIT                  ((uint32_t)1U)
#define ACMP_ACCTL_R_CINV_NORMAL         ((uint32_t)0x00000000U)
#define ACMP_ACCTL_R_CINV_INVERTED      ((uint32_t)0x00000002U)

#define ACMP_ACCTL_CINV_MASK               ((uint32_t)0x00000001U)
#define ACMP_ACCTL_CINV_NORMAL           ((uint32_t)0x00000000U)
#define ACMP_ACCTL_CINV_INVERTED         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define ACMP_ACCTL_R_ISEN_MASK             ((uint32_t)0x0000000CU)
#define ACMP_ACCTL_R_ISEN_BIT                  ((uint32_t)2U)
#define ACMP_ACCTL_R_ISEN_LEVEL             ((uint32_t)0x00000000U)
#define ACMP_ACCTL_R_ISEN_FALLING          ((uint32_t)0x00000004U)
#define ACMP_ACCTL_R_ISEN_RISING           ((uint32_t)0x00000008U)
#define ACMP_ACCTL_R_ISEN_EITHER           ((uint32_t)0x0000000CU)

#define ACMP_ACCTL_ISEN_MASK               ((uint32_t)0x00000003U)
#define ACMP_ACCTL_ISEN_LEVEL              ((uint32_t)0x00000000U)
#define ACMP_ACCTL_ISEN_FALLING            ((uint32_t)0x00000001U)
#define ACMP_ACCTL_ISEN_RISING             ((uint32_t)0x00000002U)
#define ACMP_ACCTL_ISEN_EITHER             ((uint32_t)0x00000003U)
/*--------*/
/*--------*/
#define ACMP_ACCTL_R_ISLVAL_MASK             ((uint32_t)0x00000010U)
#define ACMP_ACCTL_R_ISLVAL_BIT                  ((uint32_t)4U)
#define ACMP_ACCTL_R_ISLVAL_LOW            ((uint32_t)0x00000000U)
#define ACMP_ACCTL_R_ISLVAL_HIGH           ((uint32_t)0x00000010U)

#define ACMP_ACCTL_ISLVAL_MASK               ((uint32_t)0x00000001U)
#define ACMP_ACCTL_ISLVAL_LOW                  ((uint32_t)0x00000000U)
#define ACMP_ACCTL_ISLVAL_HIGH                 ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define ACMP_ACCTL_R_TSEN_MASK             ((uint32_t)0x00000060U)
#define ACMP_ACCTL_R_TSEN_BIT                  ((uint32_t)5U)
#define ACMP_ACCTL_R_TSEN_LEVEL              ((uint32_t)0x00000000U)
#define ACMP_ACCTL_R_TSEN_FALLING         ((uint32_t)0x00000020U)
#define ACMP_ACCTL_R_TSEN_RISING           ((uint32_t)0x00000040U)
#define ACMP_ACCTL_R_TSEN_EITHER           ((uint32_t)0x00000060U)

#define ACMP_ACCTL_TSEN_MASK               ((uint32_t)0x00000003U)
#define ACMP_ACCTL_TSEN_LEVEL              ((uint32_t)0x00000000U)
#define ACMP_ACCTL_TSEN_FALLING            ((uint32_t)0x00000001U)
#define ACMP_ACCTL_TSEN_RISING             ((uint32_t)0x00000002U)
#define ACMP_ACCTL_TSEN_EITHER             ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define ACMP_ACCTL_R_TSLVAL_MASK             ((uint32_t)0x00000080U)
#define ACMP_ACCTL_R_TSLVAL_BIT                  ((uint32_t)7U)
#define ACMP_ACCTL_R_TSLVAL_LOW            ((uint32_t)0x00000000U)
#define ACMP_ACCTL_R_TSLVAL_HIGH           ((uint32_t)0x00000080U)

#define ACMP_ACCTL_TSLVAL_MASK               ((uint32_t)0x00000001U)
#define ACMP_ACCTL_TSLVAL_LOW                  ((uint32_t)0x00000000U)
#define ACMP_ACCTL_TSLVAL_HIGH                 ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define ACMP_ACCTL_R_ASRCP_MASK             ((uint32_t)0x00000600U)
#define ACMP_ACCTL_R_ASRCP_BIT                  ((uint32_t)9U)
#define ACMP_ACCTL_R_ASRCP_CN                  ((uint32_t)0x00000000U)
#define ACMP_ACCTL_R_ASRCP_C0                  ((uint32_t)0x00000200U)
#define ACMP_ACCTL_R_ASRCP_VREF                ((uint32_t)0x00000400U)

#define ACMP_ACCTL_ASRCP_MASK               ((uint32_t)0x00000003U)
#define ACMP_ACCTL_ASRCP_CN                ((uint32_t)0x00000000U)
#define ACMP_ACCTL_ASRCP_C0                ((uint32_t)0x00000001U)
#define ACMP_ACCTL_ASRCP_VREF             ((uint32_t)0x00000002U)
/*--------*/

/*--------*/
#define ACMP_ACCTL_R_TOEN_MASK             ((uint32_t)0x00000800U)
#define ACMP_ACCTL_R_TOEN_BIT                  ((uint32_t)11U)
#define ACMP_ACCTL_R_TOEN_DIS            ((uint32_t)0x00000000U)
#define ACMP_ACCTL_R_TOEN_EN           ((uint32_t)0x00000800U)

#define ACMP_ACCTL_TOEN_MASK               ((uint32_t)0x00000001U)
#define ACMP_ACCTL_TOEN_DIS                  ((uint32_t)0x00000000U)
#define ACMP_ACCTL_TOEN_EN                 ((uint32_t)0x00000001U)
/*--------*/

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ACMP_REGISTERDEFINES_ACCTL_H_ */
