/**
 *
 * @file TIMER_RegisterDefines_Standard_64_CTL.h
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
 * @verbatim 6 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_CTL_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_CTL_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_GPTMCTL_R_TAEN_MASK            ((uint32_t)0x00000001U)
#define GPWTM_GPTMCTL_R_TAEN_BIT             (0U)
#define GPWTM_GPTMCTL_R_TAEN_DIS             ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_R_TAEN_EN              ((uint32_t)0x00000001U)

#define GPWTM_GPTMCTL_TAEN_MASK              ((uint32_t)0x00000001U)
#define GPWTM_GPTMCTL_TAEN_DIS               ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_TAEN_EN                ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_GPTMCTL_R_TASTALL_MASK         ((uint32_t)0x00000002U)
#define GPWTM_GPTMCTL_R_TASTALL_BIT          (1U)
#define GPWTM_GPTMCTL_R_TASTALL_CONTINUE     ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_R_TASTALL_FREEZE       ((uint32_t)0x00000002U)

#define GPWTM_GPTMCTL_TASTALL_MASK           ((uint32_t)0x00000001U)
#define GPWTM_GPTMCTL_TASTALL_CONTINUE       ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_TASTALL_FREEZE         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_GPTMCTL_R_TAEVENT_MASK         ((uint32_t)0x0000000CU)
#define GPWTM_GPTMCTL_R_TAEVENT_BIT          (2U)
#define GPWTM_GPTMCTL_R_TAEVENT_POS          ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_R_TAEVENT_NEG          ((uint32_t)0x00000004U)
#define GPWTM_GPTMCTL_R_TAEVENT_BOTH         ((uint32_t)0x0000000CU)

#define GPWTM_GPTMCTL_TAEVENT_MASK           ((uint32_t)0x00000003U)
#define GPWTM_GPTMCTL_TAEVENT_NEG            ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_TAEVENT_POS            ((uint32_t)0x00000001U)
#define GPWTM_GPTMCTL_TAEVENT_BOTH           ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define GPWTM_GPTMCTL_R_RTCEN_MASK           ((uint32_t)0x00000010U)
#define GPWTM_GPTMCTL_R_RTCEN_BIT            (4U)
#define GPWTM_GPTMCTL_R_RTCEN_CONTINUE       ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_R_RTCEN_FREEZE         ((uint32_t)0x00000010U)

#define GPWTM_GPTMCTL_RTCEN_MASK             ((uint32_t)0x00000001U)
#define GPWTM_GPTMCTL_RTCEN_CONTINUE         ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_RTCEN_FREEZE           ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_GPTMCTL_R_TAOTE_MASK           ((uint32_t)0x00000020U)
#define GPWTM_GPTMCTL_R_TAOTE_BIT            (5U)
#define GPWTM_GPTMCTL_R_TAOTE_DIS            ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_R_TAOTE_EN             ((uint32_t)0x00000020U)

#define GPWTM_GPTMCTL_TAOTE_MASK             ((uint32_t)0x00000001U)
#define GPWTM_GPTMCTL_TAOTE_DIS              ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_TAOTE_EN               ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_GPTMCTL_R_TAPWML_MASK          ((uint32_t)0x00000040U)
#define GPWTM_GPTMCTL_R_TAPWML_BIT           (6U)
#define GPWTM_GPTMCTL_R_TAPWML_NA            ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_R_TAPWML_INV           ((uint32_t)0x00000040U)

#define GPWTM_GPTMCTL_TAPWML_MASK            ((uint32_t)0x00000001U)
#define GPWTM_GPTMCTL_TAPWML_NA              ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_TAPWML_INV             ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_GPTMCTL_R_TBEN_MASK            ((uint32_t)0x00000100U)
#define GPWTM_GPTMCTL_R_TBEN_BIT             (8U)
#define GPWTM_GPTMCTL_R_TBEN_DIS             ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_R_TBEN_EN              ((uint32_t)0x00000100U)

#define GPWTM_GPTMCTL_TBEN_MASK              ((uint32_t)0x00000001U)
#define GPWTM_GPTMCTL_TBEN_DIS               ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_TBEN_EN                ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_GPTMCTL_R_TBSTALL_MASK         ((uint32_t)0x00000200U)
#define GPWTM_GPTMCTL_R_TBSTALL_BIT          (9U)
#define GPWTM_GPTMCTL_R_TBSTALL_CONTINUE     ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_R_TBSTALL_FREEZE       ((uint32_t)0x00000200U)

#define GPWTM_GPTMCTL_TBSTALL_MASK           ((uint32_t)0x00000001U)
#define GPWTM_GPTMCTL_TBSTALL_CONTINUE       ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_TBSTALL_FREEZE         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_GPTMCTL_R_TBEVENT_MASK         ((uint32_t)0x00000C00U)
#define GPWTM_GPTMCTL_R_TBEVENT_BIT          (10U)
#define GPWTM_GPTMCTL_R_TBEVENT_POS          ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_R_TBEVENT_NEG          ((uint32_t)0x00000400U)
#define GPWTM_GPTMCTL_R_TBEVENT_BOTH         ((uint32_t)0x00000C00U)

#define GPWTM_GPTMCTL_TBEVENT_MASK           ((uint32_t)0x00000003U)
#define GPWTM_GPTMCTL_TBEVENT_NEG            ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_TBEVENT_POS            ((uint32_t)0x00000001U)
#define GPWTM_GPTMCTL_TBEVENT_BOTH           ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define GPWTM_GPTMCTL_R_TBOTE_MASK           ((uint32_t)0x00002000U)
#define GPWTM_GPTMCTL_R_TBOTE_BIT            (13U)
#define GPWTM_GPTMCTL_R_TBOTE_DIS            ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_R_TBOTE_EN             ((uint32_t)0x00002000U)

#define GPWTM_GPTMCTL_TBOTE_MASK             ((uint32_t)0x00000001U)
#define GPWTM_GPTMCTL_TBOTE_DIS              ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_TBOTE_EN               ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_GPTMCTL_R_TBPWML_MASK          ((uint32_t)0x00004000U)
#define GPWTM_GPTMCTL_R_TBPWML_BIT           (14U)
#define GPWTM_GPTMCTL_R_TBPWML_NA            ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_R_TBPWML_INV           ((uint32_t)0x00004000U)

#define GPWTM_GPTMCTL_TBPWML_MASK            ((uint32_t)0x00000001U)
#define GPWTM_GPTMCTL_TBPWML_NA              ((uint32_t)0x00000000U)
#define GPWTM_GPTMCTL_TBPWML_INV             ((uint32_t)0x00000001U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_CTL_H_ */
