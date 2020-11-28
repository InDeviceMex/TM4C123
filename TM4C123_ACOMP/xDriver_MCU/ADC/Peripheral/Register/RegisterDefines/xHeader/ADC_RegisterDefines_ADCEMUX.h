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
#define ADC_ADCEMUX_R_EM0_MASK      ((uint32_t)0x0000000Fu)
#define ADC_ADCEMUX_R_EM0_BIT       ((uint32_t)0u)
#define ADC_ADCEMUX_R_EM0_DEFAULT   ((uint32_t)0x00000000u)
#define ADC_ADCEMUX_R_EM0_ACOMP0    ((uint32_t)0x00000001u)
#define ADC_ADCEMUX_R_EM0_ACOMP1    ((uint32_t)0x00000002u)
#define ADC_ADCEMUX_R_EM0_GPIO      ((uint32_t)0x00000004u)
#define ADC_ADCEMUX_R_EM0_TIMER     ((uint32_t)0x00000005u)
#define ADC_ADCEMUX_R_EM0_PWMGEN0   ((uint32_t)0x00000006u)
#define ADC_ADCEMUX_R_EM0_PWMGEN1   ((uint32_t)0x00000007u)
#define ADC_ADCEMUX_R_EM0_PWMGEN2   ((uint32_t)0x00000008u)
#define ADC_ADCEMUX_R_EM0_PWMGEN3   ((uint32_t)0x00000009u)
#define ADC_ADCEMUX_R_EM0_ALWAYS    ((uint32_t)0x0000000Fu)

#define ADC_ADCEMUX_EM0_MASK        ((uint32_t)0x0000000Fu)
#define ADC_ADCEMUX_EM0_DEFAULT     ((uint32_t)0x00000000u)
#define ADC_ADCEMUX_EM0_ACOMP0      ((uint32_t)0x00000001u)
#define ADC_ADCEMUX_EM0_ACOMP1      ((uint32_t)0x00000002u)
#define ADC_ADCEMUX_EM0_GPIO        ((uint32_t)0x00000004u)
#define ADC_ADCEMUX_EM0_TIMER       ((uint32_t)0x00000005u)
#define ADC_ADCEMUX_EM0_PWMGEN0     ((uint32_t)0x00000006u)
#define ADC_ADCEMUX_EM0_PWMGEN1     ((uint32_t)0x00000007u)
#define ADC_ADCEMUX_EM0_PWMGEN2     ((uint32_t)0x00000008u)
#define ADC_ADCEMUX_EM0_PWMGEN3     ((uint32_t)0x00000009u)
#define ADC_ADCEMUX_EM0_ALWAYS      ((uint32_t)0x0000000Fu)
/*--------*/

/*--------*/
#define ADC_ADCEMUX_R_EM1_MASK      ((uint32_t)0x000000F0u)
#define ADC_ADCEMUX_R_EM1_BIT       ((uint32_t)4u)
#define ADC_ADCEMUX_R_EM1_DEFAULT   ((uint32_t)0x00000000u)
#define ADC_ADCEMUX_R_EM1_ACOMP0    ((uint32_t)0x00000010u)
#define ADC_ADCEMUX_R_EM1_ACOMP1    ((uint32_t)0x00000020u)
#define ADC_ADCEMUX_R_EM1_GPIO      ((uint32_t)0x00000040u)
#define ADC_ADCEMUX_R_EM1_TIMER     ((uint32_t)0x00000050u)
#define ADC_ADCEMUX_R_EM1_PWMGEN0   ((uint32_t)0x00000060u)
#define ADC_ADCEMUX_R_EM1_PWMGEN1   ((uint32_t)0x00000070u)
#define ADC_ADCEMUX_R_EM1_PWMGEN2   ((uint32_t)0x00000080u)
#define ADC_ADCEMUX_R_EM1_PWMGEN3   ((uint32_t)0x00000090u)
#define ADC_ADCEMUX_R_EM1_ALWAYS    ((uint32_t)0x000000F0u)

#define ADC_ADCEMUX_EM1_MASK        ((uint32_t)0x0000000Fu)
#define ADC_ADCEMUX_EM1_DEFAULT     ((uint32_t)0x00000000u)
#define ADC_ADCEMUX_EM1_ACOMP0      ((uint32_t)0x00000001u)
#define ADC_ADCEMUX_EM1_ACOMP1      ((uint32_t)0x00000002u)
#define ADC_ADCEMUX_EM1_GPIO        ((uint32_t)0x00000004u)
#define ADC_ADCEMUX_EM1_TIMER       ((uint32_t)0x00000005u)
#define ADC_ADCEMUX_EM1_PWMGEN0     ((uint32_t)0x00000006u)
#define ADC_ADCEMUX_EM1_PWMGEN1     ((uint32_t)0x00000007u)
#define ADC_ADCEMUX_EM1_PWMGEN2     ((uint32_t)0x00000008u)
#define ADC_ADCEMUX_EM1_PWMGEN3     ((uint32_t)0x00000009u)
#define ADC_ADCEMUX_EM1_ALWAYS      ((uint32_t)0x0000000Fu)
/*--------*/

/*--------*/
#define ADC_ADCEMUX_R_EM2_MASK      ((uint32_t)0x00000F00u)
#define ADC_ADCEMUX_R_EM2_BIT       ((uint32_t)8u)
#define ADC_ADCEMUX_R_EM2_DEFAULT   ((uint32_t)0x00000000u)
#define ADC_ADCEMUX_R_EM2_ACOMP0    ((uint32_t)0x00000100u)
#define ADC_ADCEMUX_R_EM2_ACOMP1    ((uint32_t)0x00000200u)
#define ADC_ADCEMUX_R_EM2_GPIO      ((uint32_t)0x00000400u)
#define ADC_ADCEMUX_R_EM2_TIMER     ((uint32_t)0x00000500u)
#define ADC_ADCEMUX_R_EM2_PWMGEN0   ((uint32_t)0x00000600u)
#define ADC_ADCEMUX_R_EM2_PWMGEN1   ((uint32_t)0x00000700u)
#define ADC_ADCEMUX_R_EM2_PWMGEN2   ((uint32_t)0x00000800u)
#define ADC_ADCEMUX_R_EM2_PWMGEN3   ((uint32_t)0x00000900u)
#define ADC_ADCEMUX_R_EM2_ALWAYS    ((uint32_t)0x00000F00u)

#define ADC_ADCEMUX_EM2_MASK        ((uint32_t)0x0000000Fu)
#define ADC_ADCEMUX_EM2_DEFAULT     ((uint32_t)0x00000000u)
#define ADC_ADCEMUX_EM2_ACOMP0      ((uint32_t)0x00000001u)
#define ADC_ADCEMUX_EM2_ACOMP1      ((uint32_t)0x00000002u)
#define ADC_ADCEMUX_EM2_GPIO        ((uint32_t)0x00000004u)
#define ADC_ADCEMUX_EM2_TIMER       ((uint32_t)0x00000005u)
#define ADC_ADCEMUX_EM2_PWMGEN0     ((uint32_t)0x00000006u)
#define ADC_ADCEMUX_EM2_PWMGEN1     ((uint32_t)0x00000007u)
#define ADC_ADCEMUX_EM2_PWMGEN2     ((uint32_t)0x00000008u)
#define ADC_ADCEMUX_EM2_PWMGEN3     ((uint32_t)0x00000009u)
#define ADC_ADCEMUX_EM2_ALWAYS      ((uint32_t)0x0000000Fu)
/*--------*/


/*--------*/
#define ADC_ADCEMUX_R_EM3_MASK      ((uint32_t)0x0000Fu)
#define ADC_ADCEMUX_R_EM3_BIT       ((uint32_t)12u)
#define ADC_ADCEMUX_R_EM3_DEFAULT   ((uint32_t)0x00000000u)
#define ADC_ADCEMUX_R_EM3_ACOMP0    ((uint32_t)0x00001000u)
#define ADC_ADCEMUX_R_EM3_ACOMP1    ((uint32_t)0x00002000u)
#define ADC_ADCEMUX_R_EM3_GPIO      ((uint32_t)0x00004000u)
#define ADC_ADCEMUX_R_EM3_TIMER     ((uint32_t)0x00005000u)
#define ADC_ADCEMUX_R_EM3_PWMGEN0   ((uint32_t)0x00006000u)
#define ADC_ADCEMUX_R_EM3_PWMGEN1   ((uint32_t)0x00007000u)
#define ADC_ADCEMUX_R_EM3_PWMGEN2   ((uint32_t)0x00008000u)
#define ADC_ADCEMUX_R_EM3_PWMGEN3   ((uint32_t)0x00009000u)
#define ADC_ADCEMUX_R_EM3_ALWAYS    ((uint32_t)0x0000F000u)

#define ADC_ADCEMUX_EM3_MASK        ((uint32_t)0x0000000Fu)
#define ADC_ADCEMUX_EM3_DEFAULT     ((uint32_t)0x00000000u)
#define ADC_ADCEMUX_EM3_ACOMP0      ((uint32_t)0x00000001u)
#define ADC_ADCEMUX_EM3_ACOMP1      ((uint32_t)0x00000002u)
#define ADC_ADCEMUX_EM3_GPIO        ((uint32_t)0x00000004u)
#define ADC_ADCEMUX_EM3_TIMER       ((uint32_t)0x00000005u)
#define ADC_ADCEMUX_EM3_PWMGEN0     ((uint32_t)0x00000006u)
#define ADC_ADCEMUX_EM3_PWMGEN1     ((uint32_t)0x00000007u)
#define ADC_ADCEMUX_EM3_PWMGEN2     ((uint32_t)0x00000008u)
#define ADC_ADCEMUX_EM3_PWMGEN3     ((uint32_t)0x00000009u)
#define ADC_ADCEMUX_EM3_ALWAYS      ((uint32_t)0x0000000Fu)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCEMUX_H_ */
