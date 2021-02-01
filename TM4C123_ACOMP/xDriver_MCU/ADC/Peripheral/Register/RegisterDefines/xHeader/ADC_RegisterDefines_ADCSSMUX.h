/**
 *
 * @file ADC_RegisterDefines_ADCSSMUX.h
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
 * @verbatim 15 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSSMUX_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSSMUX_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 15 ADCDCISC *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ADCSSMUX_R_MUX0_MASK    ((uint32_t) 0x0000000FU)
#define ADC_ADCSSMUX_R_MUX0_BIT    ((uint32_t) 0U)
#define ADC_ADCSSMUX_R_MUX0_AIN0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSMUX_R_MUX0_AIN1    ((uint32_t) 0x00000001U)
#define ADC_ADCSSMUX_R_MUX0_AIN2    ((uint32_t) 0x00000002U)
#define ADC_ADCSSMUX_R_MUX0_AIN3    ((uint32_t) 0x00000003U)
#define ADC_ADCSSMUX_R_MUX0_AIN4    ((uint32_t) 0x00000004U)
#define ADC_ADCSSMUX_R_MUX0_AIN5    ((uint32_t) 0x00000005U)
#define ADC_ADCSSMUX_R_MUX0_AIN6    ((uint32_t) 0x00000006U)
#define ADC_ADCSSMUX_R_MUX0_AIN7    ((uint32_t) 0x00000007U)
#define ADC_ADCSSMUX_R_MUX0_AIN8    ((uint32_t) 0x00000008U)
#define ADC_ADCSSMUX_R_MUX0_AIN9    ((uint32_t) 0x00000009U)
#define ADC_ADCSSMUX_R_MUX0_AIN10    ((uint32_t) 0x0000000AU)
#define ADC_ADCSSMUX_R_MUX0_AIN11    ((uint32_t) 0x0000000BU)

#define ADC_ADCSSMUX_MUX0_MASK    ((uint32_t) 0x0000000FU)
#define ADC_ADCSSMUX_MUX0_AIN0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSMUX_MUX0_AIN1    ((uint32_t) 0x00000001U)
#define ADC_ADCSSMUX_MUX0_AIN2    ((uint32_t) 0x00000002U)
#define ADC_ADCSSMUX_MUX0_AIN3    ((uint32_t) 0x00000003U)
#define ADC_ADCSSMUX_MUX0_AIN4    ((uint32_t) 0x00000004U)
#define ADC_ADCSSMUX_MUX0_AIN5    ((uint32_t) 0x00000005U)
#define ADC_ADCSSMUX_MUX0_AIN6    ((uint32_t) 0x00000006U)
#define ADC_ADCSSMUX_MUX0_AIN7    ((uint32_t) 0x00000007U)
#define ADC_ADCSSMUX_MUX0_AIN8    ((uint32_t) 0x00000008U)
#define ADC_ADCSSMUX_MUX0_AIN9    ((uint32_t) 0x00000009U)
#define ADC_ADCSSMUX_MUX0_AIN10    ((uint32_t) 0x0000000AU)
#define ADC_ADCSSMUX_MUX0_AIN11    ((uint32_t) 0x0000000BU)
/*--------*/

/*--------*/
#define ADC_ADCSSMUX_R_MUX1_MASK    ((uint32_t) 0x000000F0U)
#define ADC_ADCSSMUX_R_MUX1_BIT    ((uint32_t) 4U)
#define ADC_ADCSSMUX_R_MUX1_AIN0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSMUX_R_MUX1_AIN1    ((uint32_t) 0x00000010U)
#define ADC_ADCSSMUX_R_MUX1_AIN2    ((uint32_t) 0x00000020U)
#define ADC_ADCSSMUX_R_MUX1_AIN3    ((uint32_t) 0x00000030U)
#define ADC_ADCSSMUX_R_MUX1_AIN4    ((uint32_t) 0x00000040U)
#define ADC_ADCSSMUX_R_MUX1_AIN5    ((uint32_t) 0x00000050U)
#define ADC_ADCSSMUX_R_MUX1_AIN6    ((uint32_t) 0x00000060U)
#define ADC_ADCSSMUX_R_MUX1_AIN7    ((uint32_t) 0x00000070U)
#define ADC_ADCSSMUX_R_MUX1_AIN8    ((uint32_t) 0x00000080U)
#define ADC_ADCSSMUX_R_MUX1_AIN9    ((uint32_t) 0x00000090U)
#define ADC_ADCSSMUX_R_MUX1_AIN10    ((uint32_t) 0x000000A0U)
#define ADC_ADCSSMUX_R_MUX1_AIN11    ((uint32_t) 0x000000B0U)

#define ADC_ADCSSMUX_MUX1_MASK    ((uint32_t) 0x0000000FU)
#define ADC_ADCSSMUX_MUX1_AIN0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSMUX_MUX1_AIN1    ((uint32_t) 0x00000001U)
#define ADC_ADCSSMUX_MUX1_AIN2    ((uint32_t) 0x00000002U)
#define ADC_ADCSSMUX_MUX1_AIN3    ((uint32_t) 0x00000003U)
#define ADC_ADCSSMUX_MUX1_AIN4    ((uint32_t) 0x00000004U)
#define ADC_ADCSSMUX_MUX1_AIN5    ((uint32_t) 0x00000005U)
#define ADC_ADCSSMUX_MUX1_AIN6    ((uint32_t) 0x00000006U)
#define ADC_ADCSSMUX_MUX1_AIN7    ((uint32_t) 0x00000007U)
#define ADC_ADCSSMUX_MUX1_AIN8    ((uint32_t) 0x00000008U)
#define ADC_ADCSSMUX_MUX1_AIN9    ((uint32_t) 0x00000009U)
#define ADC_ADCSSMUX_MUX1_AIN10    ((uint32_t) 0x0000000AU)
#define ADC_ADCSSMUX_MUX1_AIN11    ((uint32_t) 0x0000000BU)
/*--------*/

/*--------*/
#define ADC_ADCSSMUX_R_MUX2_MASK    ((uint32_t) 0x00000F00U)
#define ADC_ADCSSMUX_R_MUX2_BIT    ((uint32_t) 8U)
#define ADC_ADCSSMUX_R_MUX2_AIN0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSMUX_R_MUX2_AIN1    ((uint32_t) 0x00000100U)
#define ADC_ADCSSMUX_R_MUX2_AIN2    ((uint32_t) 0x00000200U)
#define ADC_ADCSSMUX_R_MUX2_AIN3    ((uint32_t) 0x00000300U)
#define ADC_ADCSSMUX_R_MUX2_AIN4    ((uint32_t) 0x00000400U)
#define ADC_ADCSSMUX_R_MUX2_AIN5    ((uint32_t) 0x00000500U)
#define ADC_ADCSSMUX_R_MUX2_AIN6    ((uint32_t) 0x00000600U)
#define ADC_ADCSSMUX_R_MUX2_AIN7    ((uint32_t) 0x00000700U)
#define ADC_ADCSSMUX_R_MUX2_AIN8    ((uint32_t) 0x00000800U)
#define ADC_ADCSSMUX_R_MUX2_AIN9    ((uint32_t) 0x00000900U)
#define ADC_ADCSSMUX_R_MUX2_AIN10    ((uint32_t) 0x00000A00U)
#define ADC_ADCSSMUX_R_MUX2_AIN11    ((uint32_t) 0x00000B00U)

#define ADC_ADCSSMUX_MUX2_MASK    ((uint32_t) 0x0000000FU)
#define ADC_ADCSSMUX_MUX2_AIN0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSMUX_MUX2_AIN1    ((uint32_t) 0x00000001U)
#define ADC_ADCSSMUX_MUX2_AIN2    ((uint32_t) 0x00000002U)
#define ADC_ADCSSMUX_MUX2_AIN3    ((uint32_t) 0x00000003U)
#define ADC_ADCSSMUX_MUX2_AIN4    ((uint32_t) 0x00000004U)
#define ADC_ADCSSMUX_MUX2_AIN5    ((uint32_t) 0x00000005U)
#define ADC_ADCSSMUX_MUX2_AIN6    ((uint32_t) 0x00000006U)
#define ADC_ADCSSMUX_MUX2_AIN7    ((uint32_t) 0x00000007U)
#define ADC_ADCSSMUX_MUX2_AIN8    ((uint32_t) 0x00000008U)
#define ADC_ADCSSMUX_MUX2_AIN9    ((uint32_t) 0x00000009U)
#define ADC_ADCSSMUX_MUX2_AIN10    ((uint32_t) 0x0000000AU)
#define ADC_ADCSSMUX_MUX2_AIN11    ((uint32_t) 0x0000000BU)
/*--------*/

/*--------*/
#define ADC_ADCSSMUX_R_MUX3_MASK    ((uint32_t) 0x0000F000U)
#define ADC_ADCSSMUX_R_MUX3_BIT    ((uint32_t) 12U)
#define ADC_ADCSSMUX_R_MUX3_AIN0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSMUX_R_MUX3_AIN1    ((uint32_t) 0x00001000U)
#define ADC_ADCSSMUX_R_MUX3_AIN2    ((uint32_t) 0x00002000U)
#define ADC_ADCSSMUX_R_MUX3_AIN3    ((uint32_t) 0x00003000U)
#define ADC_ADCSSMUX_R_MUX3_AIN4    ((uint32_t) 0x00004000U)
#define ADC_ADCSSMUX_R_MUX3_AIN5    ((uint32_t) 0x00005000U)
#define ADC_ADCSSMUX_R_MUX3_AIN6    ((uint32_t) 0x00006000U)
#define ADC_ADCSSMUX_R_MUX3_AIN7    ((uint32_t) 0x00007000U)
#define ADC_ADCSSMUX_R_MUX3_AIN8    ((uint32_t) 0x00008000U)
#define ADC_ADCSSMUX_R_MUX3_AIN9    ((uint32_t) 0x00009000U)
#define ADC_ADCSSMUX_R_MUX3_AIN10    ((uint32_t) 0x0000A000U)
#define ADC_ADCSSMUX_R_MUX3_AIN11    ((uint32_t) 0x0000B000U)

#define ADC_ADCSSMUX_MUX3_MASK    ((uint32_t) 0x0000000FU)
#define ADC_ADCSSMUX_MUX3_AIN0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSMUX_MUX3_AIN1    ((uint32_t) 0x00000001U)
#define ADC_ADCSSMUX_MUX3_AIN2    ((uint32_t) 0x00000002U)
#define ADC_ADCSSMUX_MUX3_AIN3    ((uint32_t) 0x00000003U)
#define ADC_ADCSSMUX_MUX3_AIN4    ((uint32_t) 0x00000004U)
#define ADC_ADCSSMUX_MUX3_AIN5    ((uint32_t) 0x00000005U)
#define ADC_ADCSSMUX_MUX3_AIN6    ((uint32_t) 0x00000006U)
#define ADC_ADCSSMUX_MUX3_AIN7    ((uint32_t) 0x00000007U)
#define ADC_ADCSSMUX_MUX3_AIN8    ((uint32_t) 0x00000008U)
#define ADC_ADCSSMUX_MUX3_AIN9    ((uint32_t) 0x00000009U)
#define ADC_ADCSSMUX_MUX3_AIN10    ((uint32_t) 0x0000000AU)
#define ADC_ADCSSMUX_MUX3_AIN11    ((uint32_t) 0x0000000BU)
/*--------*/

/*--------*/
#define ADC_ADCSSMUX_R_MUX4_MASK    ((uint32_t) 0x000F0000U)
#define ADC_ADCSSMUX_R_MUX4_BIT    ((uint32_t) 16U)
#define ADC_ADCSSMUX_R_MUX4_AIN0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSMUX_R_MUX4_AIN1    ((uint32_t) 0x00010000U)
#define ADC_ADCSSMUX_R_MUX4_AIN2    ((uint32_t) 0x00020000U)
#define ADC_ADCSSMUX_R_MUX4_AIN3    ((uint32_t) 0x00030000U)
#define ADC_ADCSSMUX_R_MUX4_AIN4    ((uint32_t) 0x00040000U)
#define ADC_ADCSSMUX_R_MUX4_AIN5    ((uint32_t) 0x00050000U)
#define ADC_ADCSSMUX_R_MUX4_AIN6    ((uint32_t) 0x00060000U)
#define ADC_ADCSSMUX_R_MUX4_AIN7    ((uint32_t) 0x00070000U)
#define ADC_ADCSSMUX_R_MUX4_AIN8    ((uint32_t) 0x00080000U)
#define ADC_ADCSSMUX_R_MUX4_AIN9    ((uint32_t) 0x00090000U)
#define ADC_ADCSSMUX_R_MUX4_AIN10    ((uint32_t) 0x000A0000U)
#define ADC_ADCSSMUX_R_MUX4_AIN11    ((uint32_t) 0x000B0000U)

#define ADC_ADCSSMUX_MUX4_MASK    ((uint32_t) 0x0000000FU)
#define ADC_ADCSSMUX_MUX4_AIN0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSMUX_MUX4_AIN1    ((uint32_t) 0x00000001U)
#define ADC_ADCSSMUX_MUX4_AIN2    ((uint32_t) 0x00000002U)
#define ADC_ADCSSMUX_MUX4_AIN3    ((uint32_t) 0x00000003U)
#define ADC_ADCSSMUX_MUX4_AIN4    ((uint32_t) 0x00000004U)
#define ADC_ADCSSMUX_MUX4_AIN5    ((uint32_t) 0x00000005U)
#define ADC_ADCSSMUX_MUX4_AIN6    ((uint32_t) 0x00000006U)
#define ADC_ADCSSMUX_MUX4_AIN7    ((uint32_t) 0x00000007U)
#define ADC_ADCSSMUX_MUX4_AIN8    ((uint32_t) 0x00000008U)
#define ADC_ADCSSMUX_MUX4_AIN9    ((uint32_t) 0x00000009U)
#define ADC_ADCSSMUX_MUX4_AIN10    ((uint32_t) 0x0000000AU)
#define ADC_ADCSSMUX_MUX4_AIN11    ((uint32_t) 0x0000000BU)
/*--------*/

/*--------*/
#define ADC_ADCSSMUX_R_MUX5_MASK    ((uint32_t) 0x00F00000U)
#define ADC_ADCSSMUX_R_MUX5_BIT    ((uint32_t) 20U)
#define ADC_ADCSSMUX_R_MUX5_AIN0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSMUX_R_MUX5_AIN1    ((uint32_t) 0x00100000U)
#define ADC_ADCSSMUX_R_MUX5_AIN2    ((uint32_t) 0x00200000U)
#define ADC_ADCSSMUX_R_MUX5_AIN3    ((uint32_t) 0x00300000U)
#define ADC_ADCSSMUX_R_MUX5_AIN4    ((uint32_t) 0x00400000U)
#define ADC_ADCSSMUX_R_MUX5_AIN5    ((uint32_t) 0x00500000U)
#define ADC_ADCSSMUX_R_MUX5_AIN6    ((uint32_t) 0x00600000U)
#define ADC_ADCSSMUX_R_MUX5_AIN7    ((uint32_t) 0x00700000U)
#define ADC_ADCSSMUX_R_MUX5_AIN8    ((uint32_t) 0x00800000U)
#define ADC_ADCSSMUX_R_MUX5_AIN9    ((uint32_t) 0x00900000U)
#define ADC_ADCSSMUX_R_MUX5_AIN10    ((uint32_t) 0x00A00000U)
#define ADC_ADCSSMUX_R_MUX5_AIN11    ((uint32_t) 0x00B00000U)

#define ADC_ADCSSMUX_MUX5_MASK    ((uint32_t) 0x0000000FU)
#define ADC_ADCSSMUX_MUX5_AIN0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSMUX_MUX5_AIN1    ((uint32_t) 0x00000001U)
#define ADC_ADCSSMUX_MUX5_AIN2    ((uint32_t) 0x00000002U)
#define ADC_ADCSSMUX_MUX5_AIN3    ((uint32_t) 0x00000003U)
#define ADC_ADCSSMUX_MUX5_AIN4    ((uint32_t) 0x00000004U)
#define ADC_ADCSSMUX_MUX5_AIN5    ((uint32_t) 0x00000005U)
#define ADC_ADCSSMUX_MUX5_AIN6    ((uint32_t) 0x00000006U)
#define ADC_ADCSSMUX_MUX5_AIN7    ((uint32_t) 0x00000007U)
#define ADC_ADCSSMUX_MUX5_AIN8    ((uint32_t) 0x00000008U)
#define ADC_ADCSSMUX_MUX5_AIN9    ((uint32_t) 0x00000009U)
#define ADC_ADCSSMUX_MUX5_AIN10    ((uint32_t) 0x0000000AU)
#define ADC_ADCSSMUX_MUX5_AIN11    ((uint32_t) 0x0000000BU)
/*--------*/

/*--------*/
#define ADC_ADCSSMUX_R_MUX6_MASK    ((uint32_t) 0x0F000000U)
#define ADC_ADCSSMUX_R_MUX6_BIT    ((uint32_t) 24U)
#define ADC_ADCSSMUX_R_MUX6_AIN0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSMUX_R_MUX6_AIN1    ((uint32_t) 0x01000000U)
#define ADC_ADCSSMUX_R_MUX6_AIN2    ((uint32_t) 0x02000000U)
#define ADC_ADCSSMUX_R_MUX6_AIN3    ((uint32_t) 0x03000000U)
#define ADC_ADCSSMUX_R_MUX6_AIN4    ((uint32_t) 0x04000000U)
#define ADC_ADCSSMUX_R_MUX6_AIN5    ((uint32_t) 0x05000000U)
#define ADC_ADCSSMUX_R_MUX6_AIN6    ((uint32_t) 0x06000000U)
#define ADC_ADCSSMUX_R_MUX6_AIN7    ((uint32_t) 0x07000000U)
#define ADC_ADCSSMUX_R_MUX6_AIN8    ((uint32_t) 0x08000000U)
#define ADC_ADCSSMUX_R_MUX6_AIN9    ((uint32_t) 0x09000000U)
#define ADC_ADCSSMUX_R_MUX6_AIN10    ((uint32_t) 0x0A000000U)
#define ADC_ADCSSMUX_R_MUX6_AIN11    ((uint32_t) 0x0B000000U)

#define ADC_ADCSSMUX_MUX6_MASK    ((uint32_t) 0x0000000FU)
#define ADC_ADCSSMUX_MUX6_AIN0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSMUX_MUX6_AIN1    ((uint32_t) 0x00000001U)
#define ADC_ADCSSMUX_MUX6_AIN2    ((uint32_t) 0x00000002U)
#define ADC_ADCSSMUX_MUX6_AIN3    ((uint32_t) 0x00000003U)
#define ADC_ADCSSMUX_MUX6_AIN4    ((uint32_t) 0x00000004U)
#define ADC_ADCSSMUX_MUX6_AIN5    ((uint32_t) 0x00000005U)
#define ADC_ADCSSMUX_MUX6_AIN6    ((uint32_t) 0x00000006U)
#define ADC_ADCSSMUX_MUX6_AIN7    ((uint32_t) 0x00000007U)
#define ADC_ADCSSMUX_MUX6_AIN8    ((uint32_t) 0x00000008U)
#define ADC_ADCSSMUX_MUX6_AIN9    ((uint32_t) 0x00000009U)
#define ADC_ADCSSMUX_MUX6_AIN10    ((uint32_t) 0x0000000AU)
#define ADC_ADCSSMUX_MUX6_AIN11    ((uint32_t) 0x0000000BU)
/*--------*/

/*--------*/
#define ADC_ADCSSMUX_R_MUX7_MASK    ((uint32_t) 0xF0000000U)
#define ADC_ADCSSMUX_R_MUX7_BIT    ((uint32_t) 28U)
#define ADC_ADCSSMUX_R_MUX7_AIN0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSMUX_R_MUX7_AIN1    ((uint32_t) 0x10000000U)
#define ADC_ADCSSMUX_R_MUX7_AIN2    ((uint32_t) 0x20000000U)
#define ADC_ADCSSMUX_R_MUX7_AIN3    ((uint32_t) 0x30000000U)
#define ADC_ADCSSMUX_R_MUX7_AIN4    ((uint32_t) 0x40000000U)
#define ADC_ADCSSMUX_R_MUX7_AIN5    ((uint32_t) 0x50000000U)
#define ADC_ADCSSMUX_R_MUX7_AIN6    ((uint32_t) 0x60000000U)
#define ADC_ADCSSMUX_R_MUX7_AIN7    ((uint32_t) 0x70000000U)
#define ADC_ADCSSMUX_R_MUX7_AIN8    ((uint32_t) 0x80000000U)
#define ADC_ADCSSMUX_R_MUX7_AIN9    ((uint32_t) 0x90000000U)
#define ADC_ADCSSMUX_R_MUX7_AIN10    ((uint32_t) 0xA0000000U)
#define ADC_ADCSSMUX_R_MUX7_AIN11    ((uint32_t) 0xB0000000U)

#define ADC_ADCSSMUX_MUX7_MASK    ((uint32_t) 0x0000000FU)
#define ADC_ADCSSMUX_MUX7_AIN0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSMUX_MUX7_AIN1    ((uint32_t) 0x00000001U)
#define ADC_ADCSSMUX_MUX7_AIN2    ((uint32_t) 0x00000002U)
#define ADC_ADCSSMUX_MUX7_AIN3    ((uint32_t) 0x00000003U)
#define ADC_ADCSSMUX_MUX7_AIN4    ((uint32_t) 0x00000004U)
#define ADC_ADCSSMUX_MUX7_AIN5    ((uint32_t) 0x00000005U)
#define ADC_ADCSSMUX_MUX7_AIN6    ((uint32_t) 0x00000006U)
#define ADC_ADCSSMUX_MUX7_AIN7    ((uint32_t) 0x00000007U)
#define ADC_ADCSSMUX_MUX7_AIN8    ((uint32_t) 0x00000008U)
#define ADC_ADCSSMUX_MUX7_AIN9    ((uint32_t) 0x00000009U)
#define ADC_ADCSSMUX_MUX7_AIN10    ((uint32_t) 0x0000000AU)
#define ADC_ADCSSMUX_MUX7_AIN11    ((uint32_t) 0x0000000BU)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSSMUX_H_ */
