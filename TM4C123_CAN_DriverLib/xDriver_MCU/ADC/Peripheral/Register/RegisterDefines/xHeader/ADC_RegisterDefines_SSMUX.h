/**
 *
 * @file ADC_RegisterDefines_SSMUX.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_SSMUX_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_SSMUX_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 15 DCISC *********************************************
******************************************************************************************/
/*--------*/
#define ADC_SSMUX_R_MUX0_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_SSMUX_R_MUX0_BIT    ((uint32_t) 0UL)
#define ADC_SSMUX_R_MUX0_AIN0    ((uint32_t) 0x00000000UL)
#define ADC_SSMUX_R_MUX0_AIN1    ((uint32_t) 0x00000001UL)
#define ADC_SSMUX_R_MUX0_AIN2    ((uint32_t) 0x00000002UL)
#define ADC_SSMUX_R_MUX0_AIN3    ((uint32_t) 0x00000003UL)
#define ADC_SSMUX_R_MUX0_AIN4    ((uint32_t) 0x00000004UL)
#define ADC_SSMUX_R_MUX0_AIN5    ((uint32_t) 0x00000005UL)
#define ADC_SSMUX_R_MUX0_AIN6    ((uint32_t) 0x00000006UL)
#define ADC_SSMUX_R_MUX0_AIN7    ((uint32_t) 0x00000007UL)
#define ADC_SSMUX_R_MUX0_AIN8    ((uint32_t) 0x00000008UL)
#define ADC_SSMUX_R_MUX0_AIN9    ((uint32_t) 0x00000009UL)
#define ADC_SSMUX_R_MUX0_AIN10    ((uint32_t) 0x0000000AUL)
#define ADC_SSMUX_R_MUX0_AIN11    ((uint32_t) 0x0000000BUL)

#define ADC_SSMUX_MUX0_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_SSMUX_MUX0_AIN0    ((uint32_t) 0x00000000UL)
#define ADC_SSMUX_MUX0_AIN1    ((uint32_t) 0x00000001UL)
#define ADC_SSMUX_MUX0_AIN2    ((uint32_t) 0x00000002UL)
#define ADC_SSMUX_MUX0_AIN3    ((uint32_t) 0x00000003UL)
#define ADC_SSMUX_MUX0_AIN4    ((uint32_t) 0x00000004UL)
#define ADC_SSMUX_MUX0_AIN5    ((uint32_t) 0x00000005UL)
#define ADC_SSMUX_MUX0_AIN6    ((uint32_t) 0x00000006UL)
#define ADC_SSMUX_MUX0_AIN7    ((uint32_t) 0x00000007UL)
#define ADC_SSMUX_MUX0_AIN8    ((uint32_t) 0x00000008UL)
#define ADC_SSMUX_MUX0_AIN9    ((uint32_t) 0x00000009UL)
#define ADC_SSMUX_MUX0_AIN10    ((uint32_t) 0x0000000AUL)
#define ADC_SSMUX_MUX0_AIN11    ((uint32_t) 0x0000000BUL)
/*--------*/

/*--------*/
#define ADC_SSMUX_R_MUX1_MASK    ((uint32_t) 0x000000F0UL)
#define ADC_SSMUX_R_MUX1_BIT    ((uint32_t) 4UL)
#define ADC_SSMUX_R_MUX1_AIN0    ((uint32_t) 0x00000000UL)
#define ADC_SSMUX_R_MUX1_AIN1    ((uint32_t) 0x00000010UL)
#define ADC_SSMUX_R_MUX1_AIN2    ((uint32_t) 0x00000020UL)
#define ADC_SSMUX_R_MUX1_AIN3    ((uint32_t) 0x00000030UL)
#define ADC_SSMUX_R_MUX1_AIN4    ((uint32_t) 0x00000040UL)
#define ADC_SSMUX_R_MUX1_AIN5    ((uint32_t) 0x00000050UL)
#define ADC_SSMUX_R_MUX1_AIN6    ((uint32_t) 0x00000060UL)
#define ADC_SSMUX_R_MUX1_AIN7    ((uint32_t) 0x00000070UL)
#define ADC_SSMUX_R_MUX1_AIN8    ((uint32_t) 0x00000080UL)
#define ADC_SSMUX_R_MUX1_AIN9    ((uint32_t) 0x00000090UL)
#define ADC_SSMUX_R_MUX1_AIN10    ((uint32_t) 0x000000A0UL)
#define ADC_SSMUX_R_MUX1_AIN11    ((uint32_t) 0x000000B0UL)

#define ADC_SSMUX_MUX1_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_SSMUX_MUX1_AIN0    ((uint32_t) 0x00000000UL)
#define ADC_SSMUX_MUX1_AIN1    ((uint32_t) 0x00000001UL)
#define ADC_SSMUX_MUX1_AIN2    ((uint32_t) 0x00000002UL)
#define ADC_SSMUX_MUX1_AIN3    ((uint32_t) 0x00000003UL)
#define ADC_SSMUX_MUX1_AIN4    ((uint32_t) 0x00000004UL)
#define ADC_SSMUX_MUX1_AIN5    ((uint32_t) 0x00000005UL)
#define ADC_SSMUX_MUX1_AIN6    ((uint32_t) 0x00000006UL)
#define ADC_SSMUX_MUX1_AIN7    ((uint32_t) 0x00000007UL)
#define ADC_SSMUX_MUX1_AIN8    ((uint32_t) 0x00000008UL)
#define ADC_SSMUX_MUX1_AIN9    ((uint32_t) 0x00000009UL)
#define ADC_SSMUX_MUX1_AIN10    ((uint32_t) 0x0000000AUL)
#define ADC_SSMUX_MUX1_AIN11    ((uint32_t) 0x0000000BUL)
/*--------*/

/*--------*/
#define ADC_SSMUX_R_MUX2_MASK    ((uint32_t) 0x00000F00UL)
#define ADC_SSMUX_R_MUX2_BIT    ((uint32_t) 8UL)
#define ADC_SSMUX_R_MUX2_AIN0    ((uint32_t) 0x00000000UL)
#define ADC_SSMUX_R_MUX2_AIN1    ((uint32_t) 0x00000100UL)
#define ADC_SSMUX_R_MUX2_AIN2    ((uint32_t) 0x00000200UL)
#define ADC_SSMUX_R_MUX2_AIN3    ((uint32_t) 0x00000300UL)
#define ADC_SSMUX_R_MUX2_AIN4    ((uint32_t) 0x00000400UL)
#define ADC_SSMUX_R_MUX2_AIN5    ((uint32_t) 0x00000500UL)
#define ADC_SSMUX_R_MUX2_AIN6    ((uint32_t) 0x00000600UL)
#define ADC_SSMUX_R_MUX2_AIN7    ((uint32_t) 0x00000700UL)
#define ADC_SSMUX_R_MUX2_AIN8    ((uint32_t) 0x00000800UL)
#define ADC_SSMUX_R_MUX2_AIN9    ((uint32_t) 0x00000900UL)
#define ADC_SSMUX_R_MUX2_AIN10    ((uint32_t) 0x00000A00UL)
#define ADC_SSMUX_R_MUX2_AIN11    ((uint32_t) 0x00000B00UL)

#define ADC_SSMUX_MUX2_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_SSMUX_MUX2_AIN0    ((uint32_t) 0x00000000UL)
#define ADC_SSMUX_MUX2_AIN1    ((uint32_t) 0x00000001UL)
#define ADC_SSMUX_MUX2_AIN2    ((uint32_t) 0x00000002UL)
#define ADC_SSMUX_MUX2_AIN3    ((uint32_t) 0x00000003UL)
#define ADC_SSMUX_MUX2_AIN4    ((uint32_t) 0x00000004UL)
#define ADC_SSMUX_MUX2_AIN5    ((uint32_t) 0x00000005UL)
#define ADC_SSMUX_MUX2_AIN6    ((uint32_t) 0x00000006UL)
#define ADC_SSMUX_MUX2_AIN7    ((uint32_t) 0x00000007UL)
#define ADC_SSMUX_MUX2_AIN8    ((uint32_t) 0x00000008UL)
#define ADC_SSMUX_MUX2_AIN9    ((uint32_t) 0x00000009UL)
#define ADC_SSMUX_MUX2_AIN10    ((uint32_t) 0x0000000AUL)
#define ADC_SSMUX_MUX2_AIN11    ((uint32_t) 0x0000000BUL)
/*--------*/

/*--------*/
#define ADC_SSMUX_R_MUX3_MASK    ((uint32_t) 0x0000F000UL)
#define ADC_SSMUX_R_MUX3_BIT    ((uint32_t) 12UL)
#define ADC_SSMUX_R_MUX3_AIN0    ((uint32_t) 0x00000000UL)
#define ADC_SSMUX_R_MUX3_AIN1    ((uint32_t) 0x00001000UL)
#define ADC_SSMUX_R_MUX3_AIN2    ((uint32_t) 0x00002000UL)
#define ADC_SSMUX_R_MUX3_AIN3    ((uint32_t) 0x00003000UL)
#define ADC_SSMUX_R_MUX3_AIN4    ((uint32_t) 0x00004000UL)
#define ADC_SSMUX_R_MUX3_AIN5    ((uint32_t) 0x00005000UL)
#define ADC_SSMUX_R_MUX3_AIN6    ((uint32_t) 0x00006000UL)
#define ADC_SSMUX_R_MUX3_AIN7    ((uint32_t) 0x00007000UL)
#define ADC_SSMUX_R_MUX3_AIN8    ((uint32_t) 0x00008000UL)
#define ADC_SSMUX_R_MUX3_AIN9    ((uint32_t) 0x00009000UL)
#define ADC_SSMUX_R_MUX3_AIN10    ((uint32_t) 0x0000A000UL)
#define ADC_SSMUX_R_MUX3_AIN11    ((uint32_t) 0x0000B000UL)

#define ADC_SSMUX_MUX3_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_SSMUX_MUX3_AIN0    ((uint32_t) 0x00000000UL)
#define ADC_SSMUX_MUX3_AIN1    ((uint32_t) 0x00000001UL)
#define ADC_SSMUX_MUX3_AIN2    ((uint32_t) 0x00000002UL)
#define ADC_SSMUX_MUX3_AIN3    ((uint32_t) 0x00000003UL)
#define ADC_SSMUX_MUX3_AIN4    ((uint32_t) 0x00000004UL)
#define ADC_SSMUX_MUX3_AIN5    ((uint32_t) 0x00000005UL)
#define ADC_SSMUX_MUX3_AIN6    ((uint32_t) 0x00000006UL)
#define ADC_SSMUX_MUX3_AIN7    ((uint32_t) 0x00000007UL)
#define ADC_SSMUX_MUX3_AIN8    ((uint32_t) 0x00000008UL)
#define ADC_SSMUX_MUX3_AIN9    ((uint32_t) 0x00000009UL)
#define ADC_SSMUX_MUX3_AIN10    ((uint32_t) 0x0000000AUL)
#define ADC_SSMUX_MUX3_AIN11    ((uint32_t) 0x0000000BUL)
/*--------*/

/*--------*/
#define ADC_SSMUX_R_MUX4_MASK    ((uint32_t) 0x000F0000UL)
#define ADC_SSMUX_R_MUX4_BIT    ((uint32_t) 16UL)
#define ADC_SSMUX_R_MUX4_AIN0    ((uint32_t) 0x00000000UL)
#define ADC_SSMUX_R_MUX4_AIN1    ((uint32_t) 0x00010000UL)
#define ADC_SSMUX_R_MUX4_AIN2    ((uint32_t) 0x00020000UL)
#define ADC_SSMUX_R_MUX4_AIN3    ((uint32_t) 0x00030000UL)
#define ADC_SSMUX_R_MUX4_AIN4    ((uint32_t) 0x00040000UL)
#define ADC_SSMUX_R_MUX4_AIN5    ((uint32_t) 0x00050000UL)
#define ADC_SSMUX_R_MUX4_AIN6    ((uint32_t) 0x00060000UL)
#define ADC_SSMUX_R_MUX4_AIN7    ((uint32_t) 0x00070000UL)
#define ADC_SSMUX_R_MUX4_AIN8    ((uint32_t) 0x00080000UL)
#define ADC_SSMUX_R_MUX4_AIN9    ((uint32_t) 0x00090000UL)
#define ADC_SSMUX_R_MUX4_AIN10    ((uint32_t) 0x000A0000UL)
#define ADC_SSMUX_R_MUX4_AIN11    ((uint32_t) 0x000B0000UL)

#define ADC_SSMUX_MUX4_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_SSMUX_MUX4_AIN0    ((uint32_t) 0x00000000UL)
#define ADC_SSMUX_MUX4_AIN1    ((uint32_t) 0x00000001UL)
#define ADC_SSMUX_MUX4_AIN2    ((uint32_t) 0x00000002UL)
#define ADC_SSMUX_MUX4_AIN3    ((uint32_t) 0x00000003UL)
#define ADC_SSMUX_MUX4_AIN4    ((uint32_t) 0x00000004UL)
#define ADC_SSMUX_MUX4_AIN5    ((uint32_t) 0x00000005UL)
#define ADC_SSMUX_MUX4_AIN6    ((uint32_t) 0x00000006UL)
#define ADC_SSMUX_MUX4_AIN7    ((uint32_t) 0x00000007UL)
#define ADC_SSMUX_MUX4_AIN8    ((uint32_t) 0x00000008UL)
#define ADC_SSMUX_MUX4_AIN9    ((uint32_t) 0x00000009UL)
#define ADC_SSMUX_MUX4_AIN10    ((uint32_t) 0x0000000AUL)
#define ADC_SSMUX_MUX4_AIN11    ((uint32_t) 0x0000000BUL)
/*--------*/

/*--------*/
#define ADC_SSMUX_R_MUX5_MASK    ((uint32_t) 0x00F00000UL)
#define ADC_SSMUX_R_MUX5_BIT    ((uint32_t) 20UL)
#define ADC_SSMUX_R_MUX5_AIN0    ((uint32_t) 0x00000000UL)
#define ADC_SSMUX_R_MUX5_AIN1    ((uint32_t) 0x00100000UL)
#define ADC_SSMUX_R_MUX5_AIN2    ((uint32_t) 0x00200000UL)
#define ADC_SSMUX_R_MUX5_AIN3    ((uint32_t) 0x00300000UL)
#define ADC_SSMUX_R_MUX5_AIN4    ((uint32_t) 0x00400000UL)
#define ADC_SSMUX_R_MUX5_AIN5    ((uint32_t) 0x00500000UL)
#define ADC_SSMUX_R_MUX5_AIN6    ((uint32_t) 0x00600000UL)
#define ADC_SSMUX_R_MUX5_AIN7    ((uint32_t) 0x00700000UL)
#define ADC_SSMUX_R_MUX5_AIN8    ((uint32_t) 0x00800000UL)
#define ADC_SSMUX_R_MUX5_AIN9    ((uint32_t) 0x00900000UL)
#define ADC_SSMUX_R_MUX5_AIN10    ((uint32_t) 0x00A00000UL)
#define ADC_SSMUX_R_MUX5_AIN11    ((uint32_t) 0x00B00000UL)

#define ADC_SSMUX_MUX5_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_SSMUX_MUX5_AIN0    ((uint32_t) 0x00000000UL)
#define ADC_SSMUX_MUX5_AIN1    ((uint32_t) 0x00000001UL)
#define ADC_SSMUX_MUX5_AIN2    ((uint32_t) 0x00000002UL)
#define ADC_SSMUX_MUX5_AIN3    ((uint32_t) 0x00000003UL)
#define ADC_SSMUX_MUX5_AIN4    ((uint32_t) 0x00000004UL)
#define ADC_SSMUX_MUX5_AIN5    ((uint32_t) 0x00000005UL)
#define ADC_SSMUX_MUX5_AIN6    ((uint32_t) 0x00000006UL)
#define ADC_SSMUX_MUX5_AIN7    ((uint32_t) 0x00000007UL)
#define ADC_SSMUX_MUX5_AIN8    ((uint32_t) 0x00000008UL)
#define ADC_SSMUX_MUX5_AIN9    ((uint32_t) 0x00000009UL)
#define ADC_SSMUX_MUX5_AIN10    ((uint32_t) 0x0000000AUL)
#define ADC_SSMUX_MUX5_AIN11    ((uint32_t) 0x0000000BUL)
/*--------*/

/*--------*/
#define ADC_SSMUX_R_MUX6_MASK    ((uint32_t) 0x0F000000UL)
#define ADC_SSMUX_R_MUX6_BIT    ((uint32_t) 24UL)
#define ADC_SSMUX_R_MUX6_AIN0    ((uint32_t) 0x00000000UL)
#define ADC_SSMUX_R_MUX6_AIN1    ((uint32_t) 0x01000000UL)
#define ADC_SSMUX_R_MUX6_AIN2    ((uint32_t) 0x02000000UL)
#define ADC_SSMUX_R_MUX6_AIN3    ((uint32_t) 0x03000000UL)
#define ADC_SSMUX_R_MUX6_AIN4    ((uint32_t) 0x04000000UL)
#define ADC_SSMUX_R_MUX6_AIN5    ((uint32_t) 0x05000000UL)
#define ADC_SSMUX_R_MUX6_AIN6    ((uint32_t) 0x06000000UL)
#define ADC_SSMUX_R_MUX6_AIN7    ((uint32_t) 0x07000000UL)
#define ADC_SSMUX_R_MUX6_AIN8    ((uint32_t) 0x08000000UL)
#define ADC_SSMUX_R_MUX6_AIN9    ((uint32_t) 0x09000000UL)
#define ADC_SSMUX_R_MUX6_AIN10    ((uint32_t) 0x0A000000UL)
#define ADC_SSMUX_R_MUX6_AIN11    ((uint32_t) 0x0B000000UL)

#define ADC_SSMUX_MUX6_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_SSMUX_MUX6_AIN0    ((uint32_t) 0x00000000UL)
#define ADC_SSMUX_MUX6_AIN1    ((uint32_t) 0x00000001UL)
#define ADC_SSMUX_MUX6_AIN2    ((uint32_t) 0x00000002UL)
#define ADC_SSMUX_MUX6_AIN3    ((uint32_t) 0x00000003UL)
#define ADC_SSMUX_MUX6_AIN4    ((uint32_t) 0x00000004UL)
#define ADC_SSMUX_MUX6_AIN5    ((uint32_t) 0x00000005UL)
#define ADC_SSMUX_MUX6_AIN6    ((uint32_t) 0x00000006UL)
#define ADC_SSMUX_MUX6_AIN7    ((uint32_t) 0x00000007UL)
#define ADC_SSMUX_MUX6_AIN8    ((uint32_t) 0x00000008UL)
#define ADC_SSMUX_MUX6_AIN9    ((uint32_t) 0x00000009UL)
#define ADC_SSMUX_MUX6_AIN10    ((uint32_t) 0x0000000AUL)
#define ADC_SSMUX_MUX6_AIN11    ((uint32_t) 0x0000000BUL)
/*--------*/

/*--------*/
#define ADC_SSMUX_R_MUX7_MASK    ((uint32_t) 0xF0000000UL)
#define ADC_SSMUX_R_MUX7_BIT    ((uint32_t) 28UL)
#define ADC_SSMUX_R_MUX7_AIN0    ((uint32_t) 0x00000000UL)
#define ADC_SSMUX_R_MUX7_AIN1    ((uint32_t) 0x10000000UL)
#define ADC_SSMUX_R_MUX7_AIN2    ((uint32_t) 0x20000000UL)
#define ADC_SSMUX_R_MUX7_AIN3    ((uint32_t) 0x30000000UL)
#define ADC_SSMUX_R_MUX7_AIN4    ((uint32_t) 0x40000000UL)
#define ADC_SSMUX_R_MUX7_AIN5    ((uint32_t) 0x50000000UL)
#define ADC_SSMUX_R_MUX7_AIN6    ((uint32_t) 0x60000000UL)
#define ADC_SSMUX_R_MUX7_AIN7    ((uint32_t) 0x70000000UL)
#define ADC_SSMUX_R_MUX7_AIN8    ((uint32_t) 0x80000000UL)
#define ADC_SSMUX_R_MUX7_AIN9    ((uint32_t) 0x90000000UL)
#define ADC_SSMUX_R_MUX7_AIN10    ((uint32_t) 0xA0000000UL)
#define ADC_SSMUX_R_MUX7_AIN11    ((uint32_t) 0xB0000000UL)

#define ADC_SSMUX_MUX7_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_SSMUX_MUX7_AIN0    ((uint32_t) 0x00000000UL)
#define ADC_SSMUX_MUX7_AIN1    ((uint32_t) 0x00000001UL)
#define ADC_SSMUX_MUX7_AIN2    ((uint32_t) 0x00000002UL)
#define ADC_SSMUX_MUX7_AIN3    ((uint32_t) 0x00000003UL)
#define ADC_SSMUX_MUX7_AIN4    ((uint32_t) 0x00000004UL)
#define ADC_SSMUX_MUX7_AIN5    ((uint32_t) 0x00000005UL)
#define ADC_SSMUX_MUX7_AIN6    ((uint32_t) 0x00000006UL)
#define ADC_SSMUX_MUX7_AIN7    ((uint32_t) 0x00000007UL)
#define ADC_SSMUX_MUX7_AIN8    ((uint32_t) 0x00000008UL)
#define ADC_SSMUX_MUX7_AIN9    ((uint32_t) 0x00000009UL)
#define ADC_SSMUX_MUX7_AIN10    ((uint32_t) 0x0000000AUL)
#define ADC_SSMUX_MUX7_AIN11    ((uint32_t) 0x0000000BUL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_SSMUX_H_ */
