/**
 *
 * @file ADC_RegisterDefines_ADCEMUX.h
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
 * @verbatim 14 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCEMUX_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCEMUX_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 6 ADCEMUX *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ADCEMUX_R_EM0_MASK      ((uint32_t)0x0000000FU)
#define ADC_ADCEMUX_R_EM0_BIT       ((uint32_t)0U)
#define ADC_ADCEMUX_R_EM0_DEFAULT   ((uint32_t)0x00000000U)
#define ADC_ADCEMUX_R_EM0_ACOMP0    ((uint32_t)0x00000001U)
#define ADC_ADCEMUX_R_EM0_ACOMP1    ((uint32_t)0x00000002U)
#define ADC_ADCEMUX_R_EM0_GPIO      ((uint32_t)0x00000004U)
#define ADC_ADCEMUX_R_EM0_TIMER     ((uint32_t)0x00000005U)
#define ADC_ADCEMUX_R_EM0_PWMGEN0   ((uint32_t)0x00000006U)
#define ADC_ADCEMUX_R_EM0_PWMGEN1   ((uint32_t)0x00000007U)
#define ADC_ADCEMUX_R_EM0_PWMGEN2   ((uint32_t)0x00000008U)
#define ADC_ADCEMUX_R_EM0_PWMGEN3   ((uint32_t)0x00000009U)
#define ADC_ADCEMUX_R_EM0_ALWAYS    ((uint32_t)0x0000000FU)

#define ADC_ADCEMUX_EM0_MASK        ((uint32_t)0x0000000FU)
#define ADC_ADCEMUX_EM0_DEFAULT     ((uint32_t)0x00000000U)
#define ADC_ADCEMUX_EM0_ACOMP0      ((uint32_t)0x00000001U)
#define ADC_ADCEMUX_EM0_ACOMP1      ((uint32_t)0x00000002U)
#define ADC_ADCEMUX_EM0_GPIO        ((uint32_t)0x00000004U)
#define ADC_ADCEMUX_EM0_TIMER       ((uint32_t)0x00000005U)
#define ADC_ADCEMUX_EM0_PWMGEN0     ((uint32_t)0x00000006U)
#define ADC_ADCEMUX_EM0_PWMGEN1     ((uint32_t)0x00000007U)
#define ADC_ADCEMUX_EM0_PWMGEN2     ((uint32_t)0x00000008U)
#define ADC_ADCEMUX_EM0_PWMGEN3     ((uint32_t)0x00000009U)
#define ADC_ADCEMUX_EM0_ALWAYS      ((uint32_t)0x0000000FU)
/*--------*/

/*--------*/
#define ADC_ADCEMUX_R_EM1_MASK      ((uint32_t)0x000000F0U)
#define ADC_ADCEMUX_R_EM1_BIT       ((uint32_t)4U)
#define ADC_ADCEMUX_R_EM1_DEFAULT   ((uint32_t)0x00000000U)
#define ADC_ADCEMUX_R_EM1_ACOMP0    ((uint32_t)0x00000010U)
#define ADC_ADCEMUX_R_EM1_ACOMP1    ((uint32_t)0x00000020U)
#define ADC_ADCEMUX_R_EM1_GPIO      ((uint32_t)0x00000040U)
#define ADC_ADCEMUX_R_EM1_TIMER     ((uint32_t)0x00000050U)
#define ADC_ADCEMUX_R_EM1_PWMGEN0   ((uint32_t)0x00000060U)
#define ADC_ADCEMUX_R_EM1_PWMGEN1   ((uint32_t)0x00000070U)
#define ADC_ADCEMUX_R_EM1_PWMGEN2   ((uint32_t)0x00000080U)
#define ADC_ADCEMUX_R_EM1_PWMGEN3   ((uint32_t)0x00000090U)
#define ADC_ADCEMUX_R_EM1_ALWAYS    ((uint32_t)0x000000F0U)

#define ADC_ADCEMUX_EM1_MASK        ((uint32_t)0x0000000FU)
#define ADC_ADCEMUX_EM1_DEFAULT     ((uint32_t)0x00000000U)
#define ADC_ADCEMUX_EM1_ACOMP0      ((uint32_t)0x00000001U)
#define ADC_ADCEMUX_EM1_ACOMP1      ((uint32_t)0x00000002U)
#define ADC_ADCEMUX_EM1_GPIO        ((uint32_t)0x00000004U)
#define ADC_ADCEMUX_EM1_TIMER       ((uint32_t)0x00000005U)
#define ADC_ADCEMUX_EM1_PWMGEN0     ((uint32_t)0x00000006U)
#define ADC_ADCEMUX_EM1_PWMGEN1     ((uint32_t)0x00000007U)
#define ADC_ADCEMUX_EM1_PWMGEN2     ((uint32_t)0x00000008U)
#define ADC_ADCEMUX_EM1_PWMGEN3     ((uint32_t)0x00000009U)
#define ADC_ADCEMUX_EM1_ALWAYS      ((uint32_t)0x0000000FU)
/*--------*/

/*--------*/
#define ADC_ADCEMUX_R_EM2_MASK      ((uint32_t)0x00000F00U)
#define ADC_ADCEMUX_R_EM2_BIT       ((uint32_t)8U)
#define ADC_ADCEMUX_R_EM2_DEFAULT   ((uint32_t)0x00000000U)
#define ADC_ADCEMUX_R_EM2_ACOMP0    ((uint32_t)0x00000100U)
#define ADC_ADCEMUX_R_EM2_ACOMP1    ((uint32_t)0x00000200U)
#define ADC_ADCEMUX_R_EM2_GPIO      ((uint32_t)0x00000400U)
#define ADC_ADCEMUX_R_EM2_TIMER     ((uint32_t)0x00000500U)
#define ADC_ADCEMUX_R_EM2_PWMGEN0   ((uint32_t)0x00000600U)
#define ADC_ADCEMUX_R_EM2_PWMGEN1   ((uint32_t)0x00000700U)
#define ADC_ADCEMUX_R_EM2_PWMGEN2   ((uint32_t)0x00000800U)
#define ADC_ADCEMUX_R_EM2_PWMGEN3   ((uint32_t)0x00000900U)
#define ADC_ADCEMUX_R_EM2_ALWAYS    ((uint32_t)0x00000F00U)

#define ADC_ADCEMUX_EM2_MASK        ((uint32_t)0x0000000FU)
#define ADC_ADCEMUX_EM2_DEFAULT     ((uint32_t)0x00000000U)
#define ADC_ADCEMUX_EM2_ACOMP0      ((uint32_t)0x00000001U)
#define ADC_ADCEMUX_EM2_ACOMP1      ((uint32_t)0x00000002U)
#define ADC_ADCEMUX_EM2_GPIO        ((uint32_t)0x00000004U)
#define ADC_ADCEMUX_EM2_TIMER       ((uint32_t)0x00000005U)
#define ADC_ADCEMUX_EM2_PWMGEN0     ((uint32_t)0x00000006U)
#define ADC_ADCEMUX_EM2_PWMGEN1     ((uint32_t)0x00000007U)
#define ADC_ADCEMUX_EM2_PWMGEN2     ((uint32_t)0x00000008U)
#define ADC_ADCEMUX_EM2_PWMGEN3     ((uint32_t)0x00000009U)
#define ADC_ADCEMUX_EM2_ALWAYS      ((uint32_t)0x0000000FU)
/*--------*/


/*--------*/
#define ADC_ADCEMUX_R_EM3_MASK      ((uint32_t)0x0000FU)
#define ADC_ADCEMUX_R_EM3_BIT       ((uint32_t)12U)
#define ADC_ADCEMUX_R_EM3_DEFAULT   ((uint32_t)0x00000000U)
#define ADC_ADCEMUX_R_EM3_ACOMP0    ((uint32_t)0x00001000U)
#define ADC_ADCEMUX_R_EM3_ACOMP1    ((uint32_t)0x00002000U)
#define ADC_ADCEMUX_R_EM3_GPIO      ((uint32_t)0x00004000U)
#define ADC_ADCEMUX_R_EM3_TIMER     ((uint32_t)0x00005000U)
#define ADC_ADCEMUX_R_EM3_PWMGEN0   ((uint32_t)0x00006000U)
#define ADC_ADCEMUX_R_EM3_PWMGEN1   ((uint32_t)0x00007000U)
#define ADC_ADCEMUX_R_EM3_PWMGEN2   ((uint32_t)0x00008000U)
#define ADC_ADCEMUX_R_EM3_PWMGEN3   ((uint32_t)0x00009000U)
#define ADC_ADCEMUX_R_EM3_ALWAYS    ((uint32_t)0x0000F000U)

#define ADC_ADCEMUX_EM3_MASK        ((uint32_t)0x0000000FU)
#define ADC_ADCEMUX_EM3_DEFAULT     ((uint32_t)0x00000000U)
#define ADC_ADCEMUX_EM3_ACOMP0      ((uint32_t)0x00000001U)
#define ADC_ADCEMUX_EM3_ACOMP1      ((uint32_t)0x00000002U)
#define ADC_ADCEMUX_EM3_GPIO        ((uint32_t)0x00000004U)
#define ADC_ADCEMUX_EM3_TIMER       ((uint32_t)0x00000005U)
#define ADC_ADCEMUX_EM3_PWMGEN0     ((uint32_t)0x00000006U)
#define ADC_ADCEMUX_EM3_PWMGEN1     ((uint32_t)0x00000007U)
#define ADC_ADCEMUX_EM3_PWMGEN2     ((uint32_t)0x00000008U)
#define ADC_ADCEMUX_EM3_PWMGEN3     ((uint32_t)0x00000009U)
#define ADC_ADCEMUX_EM3_ALWAYS      ((uint32_t)0x0000000FU)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCEMUX_H_ */
