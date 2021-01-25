/**
 *
 * @file NVIC_RegisterDefines_Set1_IABR.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_SET1_NVIC_REGISTERDEFINES_SET1_IABR_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_SET1_NVIC_REGISTERDEFINES_SET1_IABR_H_

#include <xUtils/Standard/Standard.h>

/********************************************************************************************/
/************************************* IABR1 ***********************************************/
/********************************************************************************************/

/*----------*/
#define NVIC_IABR1_R_NVIC_RES48_MASK    ((uint32_t)0x00000001U)
#define NVIC_IABR1_R_NVIC_RES48_BIT     (0U)
#define NVIC_IABR1_R_NVIC_RES48_DIS     ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_RES48_EN      ((uint32_t)0x00000001U)

#define NVIC_IABR1_NVIC_RES48_MASK      ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_RES48_DIS       ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_RES48_EN        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_UART2_MASK    ((uint32_t)0x00000002U)
#define NVIC_IABR1_R_NVIC_UART2_BIT     (1U)
#define NVIC_IABR1_R_NVIC_UART2_DIS     ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_UART2_EN      ((uint32_t)0x00000002U)

#define NVIC_IABR1_NVIC_UART2_MASK      ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_UART2_DIS       ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_UART2_EN        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_SSI1_MASK     ((uint32_t)0x00000004U)
#define NVIC_IABR1_R_NVIC_SSI1_BIT      (2U)
#define NVIC_IABR1_R_NVIC_SSI1_DIS      ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_SSI1_EN       ((uint32_t)0x00000004U)

#define NVIC_IABR1_NVIC_SSI1_MASK       ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_SSI1_DIS        ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_SSI1_EN         ((uint32_t)0x00000001U)
/*----------*/


/*----------*/
#define NVIC_IABR1_R_NVIC_TIMER3A_MASK  ((uint32_t)0x00000008U)
#define NVIC_IABR1_R_NVIC_TIMER3A_BIT   (3U)
#define NVIC_IABR1_R_NVIC_TIMER3A_DIS   ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_TIMER3A_EN    ((uint32_t)0x00000008U)

#define NVIC_IABR1_NVIC_TIMER3A_MASK    ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_TIMER3A_DIS     ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_TIMER3A_EN      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_TIMER3B_MASK  ((uint32_t)0x00000010U)
#define NVIC_IABR1_R_NVIC_TIMER3B_BIT   (4U)
#define NVIC_IABR1_R_NVIC_TIMER3B_DIS   ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_TIMER3B_EN    ((uint32_t)0x00000010U)

#define NVIC_IABR1_NVIC_TIMER3B_MASK    ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_TIMER3B_DIS     ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_TIMER3B_EN      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_I2C1_MASK     ((uint32_t)0x00000020U)
#define NVIC_IABR1_R_NVIC_I2C1_BIT      (5U)
#define NVIC_IABR1_R_NVIC_I2C1_DIS      ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_I2C1_EN       ((uint32_t)0x00000020U)

#define NVIC_IABR1_NVIC_I2C1_MASK       ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_I2C1_DIS        ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_I2C1_EN         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_QEI1_MASK     ((uint32_t)0x00000040U)
#define NVIC_IABR1_R_NVIC_QEI1_BIT      (6U)
#define NVIC_IABR1_R_NVIC_QEI1_DIS      ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_QEI1_EN       ((uint32_t)0x00000040U)

#define NVIC_IABR1_NVIC_QEI1_MASK       ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_QEI1_DIS        ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_QEI1_EN         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_CAN0_MASK     ((uint32_t)0x00000080U)
#define NVIC_IABR1_R_NVIC_CAN0_BIT      (7U)
#define NVIC_IABR1_R_NVIC_CAN0_DIS      ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_CAN0_EN       ((uint32_t)0x00000080U)

#define NVIC_IABR1_NVIC_CAN0_MASK       ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_CAN0_DIS        ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_CAN0_EN         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_CAN1_MASK     ((uint32_t)0x00000100U)
#define NVIC_IABR1_R_NVIC_CAN1_BIT      (8U)
#define NVIC_IABR1_R_NVIC_CAN1_DIS      ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_CAN1_EN       ((uint32_t)0x00000100U)

#define NVIC_IABR1_NVIC_CAN1_MASK       ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_CAN1_DIS        ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_CAN1_EN         ((uint32_t)0x00000001U)
/*----------*/


/*----------*/
#define NVIC_IABR1_R_NVIC_RES57_MASK    ((uint32_t)0x00000200U)
#define NVIC_IABR1_R_NVIC_RES57_BIT     (9U)
#define NVIC_IABR1_R_NVIC_RES57_DIS     ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_RES57_EN      ((uint32_t)0x00000200U)

#define NVIC_IABR1_NVIC_RES57_MASK      ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_RES57_DIS       ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_RES57_EN        ((uint32_t)0x00000001U)
/*----------*/


/*----------*/
#define NVIC_IABR1_R_NVIC_RES58_MASK    ((uint32_t)0x00000400U)
#define NVIC_IABR1_R_NVIC_RES58_BIT     (10U)
#define NVIC_IABR1_R_NVIC_RES58_DIS     ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_RES58_EN      ((uint32_t)0x00000400U)

#define NVIC_IABR1_NVIC_RES58_MASK      ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_RES58_DIS       ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_RES58_EN        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_HIB_MASK      ((uint32_t)0x00000800U)
#define NVIC_IABR1_R_NVIC_HIB_BIT       (11U)
#define NVIC_IABR1_R_NVIC_HIB_DIS       ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_HIB_EN        ((uint32_t)0x00000800U)

#define NVIC_IABR1_NVIC_HIB_MASK        ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_HIB_DIS         ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_HIB_EN          ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_USB_MASK      ((uint32_t)0x00001000U)
#define NVIC_IABR1_R_NVIC_USB_BIT       (12U)
#define NVIC_IABR1_R_NVIC_USB_DIS       ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_USB_EN        ((uint32_t)0x00001000U)

#define NVIC_IABR1_NVIC_USB_MASK        ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_USB_DIS         ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_USB_EN          ((uint32_t)0x00000001U)
/*----------*/


/*----------*/
#define NVIC_IABR1_R_NVIC_PWM0GEN3_MASK ((uint32_t)0x00002000U)
#define NVIC_IABR1_R_NVIC_PWM0GEN3_BIT  (13U)
#define NVIC_IABR1_R_NVIC_PWM0GEN3_DIS  ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_PWM0GEN3_EN   ((uint32_t)0x00002000U)

#define NVIC_IABR1_NVIC_PWM0GEN3_MASK   ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_PWM0GEN3_DIS    ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_PWM0GEN3_EN     ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_UDMASOFT_MASK ((uint32_t)0x00004000U)
#define NVIC_IABR1_R_NVIC_UDMASOFT_BIT  (14U)
#define NVIC_IABR1_R_NVIC_UDMASOFT_DIS  ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_UDMASOFT_EN   ((uint32_t)0x00004000U)

#define NVIC_IABR1_NVIC_UDMASOFT_MASK   ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_UDMASOFT_DIS    ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_UDMASOFT_EN     ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_UDMAERROR_MASK ((uint32_t)0x00008000U)
#define NVIC_IABR1_R_NVIC_UDMAERROR_BIT (15U)
#define NVIC_IABR1_R_NVIC_UDMAERROR_DIS ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_UDMAERROR_EN  ((uint32_t)0x00008000U)

#define NVIC_IABR1_NVIC_UDMAERROR_MASK  ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_UDMAERROR_DIS   ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_UDMAERROR_EN    ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_ADC1SEQ0_MASK ((uint32_t)0x00010000U)
#define NVIC_IABR1_R_NVIC_ADC1SEQ0_BIT  (16U)
#define NVIC_IABR1_R_NVIC_ADC1SEQ0_DIS  ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_ADC1SEQ0_EN   ((uint32_t)0x00010000U)

#define NVIC_IABR1_NVIC_ADC1SEQ0_MASK   ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_ADC1SEQ0_DIS    ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_ADC1SEQ0_EN     ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_ADC1SEQ1_MASK ((uint32_t)0x00020000U)
#define NVIC_IABR1_R_NVIC_ADC1SEQ1_BIT  (17U)
#define NVIC_IABR1_R_NVIC_ADC1SEQ1_DIS  ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_ADC1SEQ1_EN   ((uint32_t)0x00020000U)

#define NVIC_IABR1_NVIC_ADC1SEQ1_MASK   ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_ADC1SEQ1_DIS    ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_ADC1SEQ1_EN     ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_ADC1SEQ2_MASK ((uint32_t)0x00040000U)
#define NVIC_IABR1_R_NVIC_ADC1SEQ2_BIT  (18U)
#define NVIC_IABR1_R_NVIC_ADC1SEQ2_DIS  ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_ADC1SEQ2_EN   ((uint32_t)0x00040000U)

#define NVIC_IABR1_NVIC_ADC1SEQ2_MASK   ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_ADC1SEQ2_DIS    ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_ADC1SEQ2_EN     ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_ADC1SEQ3_MASK ((uint32_t)0x00080000U)
#define NVIC_IABR1_R_NVIC_ADC1SEQ3_BIT  (19U)
#define NVIC_IABR1_R_NVIC_ADC1SEQ3_DIS  ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_ADC1SEQ3_EN   ((uint32_t)0x00080000U)

#define NVIC_IABR1_NVIC_ADC1SEQ3_MASK   ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_ADC1SEQ3_DIS    ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_ADC1SEQ3_EN     ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_RES68_MASK    ((uint32_t)0x00100000U)
#define NVIC_IABR1_R_NVIC_RES68_BIT     (20U)
#define NVIC_IABR1_R_NVIC_RES68_DIS     ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_RES68_EN      ((uint32_t)0x00100000U)

#define NVIC_IABR1_NVIC_RES68_MASK      ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_RES68_DIS       ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_RES68_EN        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_RES69_MASK    ((uint32_t)0x00200000U)
#define NVIC_IABR1_R_NVIC_RES69_BIT     (21U)
#define NVIC_IABR1_R_NVIC_RES69_DIS     ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_RES69_EN      ((uint32_t)0x00200000U)

#define NVIC_IABR1_NVIC_RES69_MASK      ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_RES69_DIS       ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_RES69_EN        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_RES70_MASK    ((uint32_t)0x00400000U)
#define NVIC_IABR1_R_NVIC_RES70_BIT     (22U)
#define NVIC_IABR1_R_NVIC_RES70_DIS     ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_RES70_EN      ((uint32_t)0x00400000U)

#define NVIC_IABR1_NVIC_RES70_MASK      ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_RES70_DIS       ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_RES70_EN        ((uint32_t)0x00000001U)
/*----------*/


/*----------*/
#define NVIC_IABR1_R_NVIC_RES71_MASK    ((uint32_t)0x00800000U)
#define NVIC_IABR1_R_NVIC_RES71_BIT     (23U)
#define NVIC_IABR1_R_NVIC_RES71_DIS     ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_RES71_EN      ((uint32_t)0x00800000U)

#define NVIC_IABR1_NVIC_RES71_MASK      ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_RES71_DIS       ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_RES71_EN        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_RES72_MASK    ((uint32_t)0x01000000U)
#define NVIC_IABR1_R_NVIC_RES72_BIT     (24U)
#define NVIC_IABR1_R_NVIC_RES72_DIS     ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_RES72_EN      ((uint32_t)0x01000000U)

#define NVIC_IABR1_NVIC_RES72_MASK      ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_RES72_DIS       ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_RES72_EN        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_SSI2_MASK     ((uint32_t)0x02000000U)
#define NVIC_IABR1_R_NVIC_SSI2_BIT      (25U)
#define NVIC_IABR1_R_NVIC_SSI2_DIS      ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_SSI2_EN       ((uint32_t)0x02000000U)

#define NVIC_IABR1_NVIC_SSI2_MASK       ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_SSI2_DIS        ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_SSI2_EN         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_SSI3_MASK     ((uint32_t)0x04000000U)
#define NVIC_IABR1_R_NVIC_SSI3_BIT      (26U)
#define NVIC_IABR1_R_NVIC_SSI3_DIS      ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_SSI3_EN       ((uint32_t)0x04000000U)

#define NVIC_IABR1_NVIC_SSI3_MASK       ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_SSI3_DIS        ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_SSI3_EN         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_UART3_MASK    ((uint32_t)0x08000000U)
#define NVIC_IABR1_R_NVIC_UART3_BIT     (27U)
#define NVIC_IABR1_R_NVIC_UART3_DIS     ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_UART3_EN      ((uint32_t)0x08000000U)

#define NVIC_IABR1_NVIC_UART3_MASK      ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_UART3_DIS       ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_UART3_EN        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_UART4_MASK    ((uint32_t)0x10000000U)
#define NVIC_IABR1_R_NVIC_UART4_BIT     (28U)
#define NVIC_IABR1_R_NVIC_UART4_DIS     ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_UART4_EN      ((uint32_t)0x10000000U)

#define NVIC_IABR1_NVIC_UART4_MASK      ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_UART4_DIS       ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_UART4_EN        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_UART5_MASK    ((uint32_t)0x20000000U)
#define NVIC_IABR1_R_NVIC_UART5_BIT     (29U)
#define NVIC_IABR1_R_NVIC_UART5_DIS     ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_UART5_EN      ((uint32_t)0x20000000U)

#define NVIC_IABR1_NVIC_UART5_MASK      ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_UART5_DIS       ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_UART5_EN        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_UART6_MASK    ((uint32_t)0x40000000U)
#define NVIC_IABR1_R_NVIC_UART6_BIT     (30U)
#define NVIC_IABR1_R_NVIC_UART6_DIS     ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_UART6_EN      ((uint32_t)0x40000000U)

#define NVIC_IABR1_NVIC_UART6_MASK      ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_UART6_DIS       ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_UART6_EN        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_UART7_MASK    ((uint32_t)0x80000000U)
#define NVIC_IABR1_R_NVIC_UART7_BIT     (31U)
#define NVIC_IABR1_R_NVIC_UART7_DIS     ((uint32_t)0x00000000U)
#define NVIC_IABR1_R_NVIC_UART7_EN      ((uint32_t)0x80000000U)

#define NVIC_IABR1_NVIC_UART7_MASK      ((uint32_t)0x00000001U)
#define NVIC_IABR1_NVIC_UART7_DIS       ((uint32_t)0x00000000U)
#define NVIC_IABR1_NVIC_UART7_EN        ((uint32_t)0x00000001U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_SET1_NVIC_REGISTERDEFINES_SET1_IABR_H_ */
