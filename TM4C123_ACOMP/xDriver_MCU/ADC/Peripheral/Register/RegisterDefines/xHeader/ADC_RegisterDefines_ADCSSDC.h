/**
 *
 * @file ADC_RegisterDefines_ADCSSDC.h
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
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSSDC_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSSDC_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 20 ADCSSDC *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ADCSSDC_R_S0DCSEL_MASK       ((uint32_t)0x0000000Fu)
#define ADC_ADCSSDC_R_S0DCSEL_BIT        ((uint32_t)0u)
#define ADC_ADCSSDC_R_S0DCSEL_DC0        ((uint32_t)0x00000000u)
#define ADC_ADCSSDC_R_S0DCSEL_DC1        ((uint32_t)0x00000001u)
#define ADC_ADCSSDC_R_S0DCSEL_DC2        ((uint32_t)0x00000002u)
#define ADC_ADCSSDC_R_S0DCSEL_DC3        ((uint32_t)0x00000003u)
#define ADC_ADCSSDC_R_S0DCSEL_DC4        ((uint32_t)0x00000004u)
#define ADC_ADCSSDC_R_S0DCSEL_DC5        ((uint32_t)0x00000005u)
#define ADC_ADCSSDC_R_S0DCSEL_DC6        ((uint32_t)0x00000006u)
#define ADC_ADCSSDC_R_S0DCSEL_DC7        ((uint32_t)0x00000007u)

#define ADC_ADCSSDC_S0DCSEL_MASK        ((uint32_t)0x0000000Fu)
#define ADC_ADCSSDC_S0DCSEL_DC0         ((uint32_t)0x00000000u)
#define ADC_ADCSSDC_S0DCSEL_DC1         ((uint32_t)0x00000001u)
#define ADC_ADCSSDC_S0DCSEL_DC2         ((uint32_t)0x00000002u)
#define ADC_ADCSSDC_S0DCSEL_DC3         ((uint32_t)0x00000003u)
#define ADC_ADCSSDC_S0DCSEL_DC4         ((uint32_t)0x00000004u)
#define ADC_ADCSSDC_S0DCSEL_DC5         ((uint32_t)0x00000005u)
#define ADC_ADCSSDC_S0DCSEL_DC6         ((uint32_t)0x00000006u)
#define ADC_ADCSSDC_S0DCSEL_DC7         ((uint32_t)0x00000007u)
/*--------*/

/*--------*/
#define ADC_ADCSSDC_R_S1DCSEL_MASK       ((uint32_t)0x000000F0u)
#define ADC_ADCSSDC_R_S1DCSEL_BIT        ((uint32_t)4u)
#define ADC_ADCSSDC_R_S1DCSEL_DC0        ((uint32_t)0x00000000u)
#define ADC_ADCSSDC_R_S1DCSEL_DC1        ((uint32_t)0x00000010u)
#define ADC_ADCSSDC_R_S1DCSEL_DC2        ((uint32_t)0x00000020u)
#define ADC_ADCSSDC_R_S1DCSEL_DC3        ((uint32_t)0x00000030u)
#define ADC_ADCSSDC_R_S1DCSEL_DC4        ((uint32_t)0x00000040u)
#define ADC_ADCSSDC_R_S1DCSEL_DC5        ((uint32_t)0x00000050u)
#define ADC_ADCSSDC_R_S1DCSEL_DC6        ((uint32_t)0x00000060u)
#define ADC_ADCSSDC_R_S1DCSEL_DC7        ((uint32_t)0x00000070u)

#define ADC_ADCSSDC_S1DCSEL_MASK        ((uint32_t)0x0000000Fu)
#define ADC_ADCSSDC_S1DCSEL_DC0         ((uint32_t)0x00000000u)
#define ADC_ADCSSDC_S1DCSEL_DC1         ((uint32_t)0x00000001u)
#define ADC_ADCSSDC_S1DCSEL_DC2         ((uint32_t)0x00000002u)
#define ADC_ADCSSDC_S1DCSEL_DC3         ((uint32_t)0x00000003u)
#define ADC_ADCSSDC_S1DCSEL_DC4         ((uint32_t)0x00000004u)
#define ADC_ADCSSDC_S1DCSEL_DC5         ((uint32_t)0x00000005u)
#define ADC_ADCSSDC_S1DCSEL_DC6         ((uint32_t)0x00000006u)
#define ADC_ADCSSDC_S1DCSEL_DC7         ((uint32_t)0x00000007u)
/*--------*/

/*--------*/
#define ADC_ADCSSDC_R_S2DCSEL_MASK       ((uint32_t)0x00000F00u)
#define ADC_ADCSSDC_R_S2DCSEL_BIT        ((uint32_t)8u)
#define ADC_ADCSSDC_R_S2DCSEL_DC0        ((uint32_t)0x00000000u)
#define ADC_ADCSSDC_R_S2DCSEL_DC1        ((uint32_t)0x00000100u)
#define ADC_ADCSSDC_R_S2DCSEL_DC2        ((uint32_t)0x00000200u)
#define ADC_ADCSSDC_R_S2DCSEL_DC3        ((uint32_t)0x00000300u)
#define ADC_ADCSSDC_R_S2DCSEL_DC4        ((uint32_t)0x00000400u)
#define ADC_ADCSSDC_R_S2DCSEL_DC5        ((uint32_t)0x00000500u)
#define ADC_ADCSSDC_R_S2DCSEL_DC6        ((uint32_t)0x00000600u)
#define ADC_ADCSSDC_R_S2DCSEL_DC7        ((uint32_t)0x00000700u)

#define ADC_ADCSSDC_S2DCSEL_MASK        ((uint32_t)0x0000000Fu)
#define ADC_ADCSSDC_S2DCSEL_DC0         ((uint32_t)0x00000000u)
#define ADC_ADCSSDC_S2DCSEL_DC1         ((uint32_t)0x00000001u)
#define ADC_ADCSSDC_S2DCSEL_DC2         ((uint32_t)0x00000002u)
#define ADC_ADCSSDC_S2DCSEL_DC3         ((uint32_t)0x00000003u)
#define ADC_ADCSSDC_S2DCSEL_DC4         ((uint32_t)0x00000004u)
#define ADC_ADCSSDC_S2DCSEL_DC5         ((uint32_t)0x00000005u)
#define ADC_ADCSSDC_S2DCSEL_DC6         ((uint32_t)0x00000006u)
#define ADC_ADCSSDC_S2DCSEL_DC7         ((uint32_t)0x00000007u)
/*--------*/

/*--------*/
#define ADC_ADCSSDC_R_S3DCSEL_MASK       ((uint32_t)0x0000F000u)
#define ADC_ADCSSDC_R_S3DCSEL_BIT        ((uint32_t)12u)
#define ADC_ADCSSDC_R_S3DCSEL_DC0        ((uint32_t)0x00000000u)
#define ADC_ADCSSDC_R_S3DCSEL_DC1        ((uint32_t)0x00001000u)
#define ADC_ADCSSDC_R_S3DCSEL_DC2        ((uint32_t)0x00002000u)
#define ADC_ADCSSDC_R_S3DCSEL_DC3        ((uint32_t)0x00003000u)
#define ADC_ADCSSDC_R_S3DCSEL_DC4        ((uint32_t)0x00004000u)
#define ADC_ADCSSDC_R_S3DCSEL_DC5        ((uint32_t)0x00005000u)
#define ADC_ADCSSDC_R_S3DCSEL_DC6        ((uint32_t)0x00006000u)
#define ADC_ADCSSDC_R_S3DCSEL_DC7        ((uint32_t)0x00007000u)

#define ADC_ADCSSDC_S3DCSEL_MASK        ((uint32_t)0x0000000Fu)
#define ADC_ADCSSDC_S3DCSEL_DC0         ((uint32_t)0x00000000u)
#define ADC_ADCSSDC_S3DCSEL_DC1         ((uint32_t)0x00000001u)
#define ADC_ADCSSDC_S3DCSEL_DC2         ((uint32_t)0x00000002u)
#define ADC_ADCSSDC_S3DCSEL_DC3         ((uint32_t)0x00000003u)
#define ADC_ADCSSDC_S3DCSEL_DC4         ((uint32_t)0x00000004u)
#define ADC_ADCSSDC_S3DCSEL_DC5         ((uint32_t)0x00000005u)
#define ADC_ADCSSDC_S3DCSEL_DC6         ((uint32_t)0x00000006u)
#define ADC_ADCSSDC_S3DCSEL_DC7         ((uint32_t)0x00000007u)
/*--------*/

/*--------*/
#define ADC_ADCSSDC_R_S4DCSEL_MASK       ((uint32_t)0x000F0000u)
#define ADC_ADCSSDC_R_S4DCSEL_BIT        ((uint32_t)16u)
#define ADC_ADCSSDC_R_S4DCSEL_DC0        ((uint32_t)0x00000000u)
#define ADC_ADCSSDC_R_S4DCSEL_DC1        ((uint32_t)0x00010000u)
#define ADC_ADCSSDC_R_S4DCSEL_DC2        ((uint32_t)0x00020000u)
#define ADC_ADCSSDC_R_S4DCSEL_DC3        ((uint32_t)0x00030000u)
#define ADC_ADCSSDC_R_S4DCSEL_DC4        ((uint32_t)0x00040000u)
#define ADC_ADCSSDC_R_S4DCSEL_DC5        ((uint32_t)0x00050000u)
#define ADC_ADCSSDC_R_S4DCSEL_DC6        ((uint32_t)0x00060000u)
#define ADC_ADCSSDC_R_S4DCSEL_DC7        ((uint32_t)0x00070000u)

#define ADC_ADCSSDC_S4DCSEL_MASK        ((uint32_t)0x0000000Fu)
#define ADC_ADCSSDC_S4DCSEL_DC0         ((uint32_t)0x00000000u)
#define ADC_ADCSSDC_S4DCSEL_DC1         ((uint32_t)0x00000001u)
#define ADC_ADCSSDC_S4DCSEL_DC2         ((uint32_t)0x00000002u)
#define ADC_ADCSSDC_S4DCSEL_DC3         ((uint32_t)0x00000003u)
#define ADC_ADCSSDC_S4DCSEL_DC4         ((uint32_t)0x00000004u)
#define ADC_ADCSSDC_S4DCSEL_DC5         ((uint32_t)0x00000005u)
#define ADC_ADCSSDC_S4DCSEL_DC6         ((uint32_t)0x00000006u)
#define ADC_ADCSSDC_S4DCSEL_DC7         ((uint32_t)0x00000007u)
/*--------*/

/*--------*/
#define ADC_ADCSSDC_R_S5DCSEL_MASK       ((uint32_t)0x00F00000u)
#define ADC_ADCSSDC_R_S5DCSEL_BIT        ((uint32_t)20u)
#define ADC_ADCSSDC_R_S5DCSEL_DC0        ((uint32_t)0x00000000u)
#define ADC_ADCSSDC_R_S5DCSEL_DC1        ((uint32_t)0x00100000u)
#define ADC_ADCSSDC_R_S5DCSEL_DC2        ((uint32_t)0x00200000u)
#define ADC_ADCSSDC_R_S5DCSEL_DC3        ((uint32_t)0x00300000u)
#define ADC_ADCSSDC_R_S5DCSEL_DC4        ((uint32_t)0x00400000u)
#define ADC_ADCSSDC_R_S5DCSEL_DC5        ((uint32_t)0x00500000u)
#define ADC_ADCSSDC_R_S5DCSEL_DC6        ((uint32_t)0x00600000u)
#define ADC_ADCSSDC_R_S5DCSEL_DC7        ((uint32_t)0x00700000u)

#define ADC_ADCSSDC_S5DCSEL_MASK        ((uint32_t)0x0000000Fu)
#define ADC_ADCSSDC_S5DCSEL_DC0         ((uint32_t)0x00000000u)
#define ADC_ADCSSDC_S5DCSEL_DC1         ((uint32_t)0x00000001u)
#define ADC_ADCSSDC_S5DCSEL_DC2         ((uint32_t)0x00000002u)
#define ADC_ADCSSDC_S5DCSEL_DC3         ((uint32_t)0x00000003u)
#define ADC_ADCSSDC_S5DCSEL_DC4         ((uint32_t)0x00000004u)
#define ADC_ADCSSDC_S5DCSEL_DC5         ((uint32_t)0x00000005u)
#define ADC_ADCSSDC_S5DCSEL_DC6         ((uint32_t)0x00000006u)
#define ADC_ADCSSDC_S5DCSEL_DC7         ((uint32_t)0x00000007u)
/*--------*/

/*--------*/
#define ADC_ADCSSDC_R_S6DCSEL_MASK       ((uint32_t)0x0F000000u)
#define ADC_ADCSSDC_R_S6DCSEL_BIT        ((uint32_t)24u)
#define ADC_ADCSSDC_R_S6DCSEL_DC0        ((uint32_t)0x00000000u)
#define ADC_ADCSSDC_R_S6DCSEL_DC1        ((uint32_t)0x01000000u)
#define ADC_ADCSSDC_R_S6DCSEL_DC2        ((uint32_t)0x02000000u)
#define ADC_ADCSSDC_R_S6DCSEL_DC3        ((uint32_t)0x03000000u)
#define ADC_ADCSSDC_R_S6DCSEL_DC4        ((uint32_t)0x04000000u)
#define ADC_ADCSSDC_R_S6DCSEL_DC5        ((uint32_t)0x05000000u)
#define ADC_ADCSSDC_R_S6DCSEL_DC6        ((uint32_t)0x06000000u)
#define ADC_ADCSSDC_R_S6DCSEL_DC7        ((uint32_t)0x07000000u)

#define ADC_ADCSSDC_S6DCSEL_MASK        ((uint32_t)0x0000000Fu)
#define ADC_ADCSSDC_S6DCSEL_DC0         ((uint32_t)0x00000000u)
#define ADC_ADCSSDC_S6DCSEL_DC1         ((uint32_t)0x00000001u)
#define ADC_ADCSSDC_S6DCSEL_DC2         ((uint32_t)0x00000002u)
#define ADC_ADCSSDC_S6DCSEL_DC3         ((uint32_t)0x00000003u)
#define ADC_ADCSSDC_S6DCSEL_DC4         ((uint32_t)0x00000004u)
#define ADC_ADCSSDC_S6DCSEL_DC5         ((uint32_t)0x00000005u)
#define ADC_ADCSSDC_S6DCSEL_DC6         ((uint32_t)0x00000006u)
#define ADC_ADCSSDC_S6DCSEL_DC7         ((uint32_t)0x00000007u)
/*--------*/

/*--------*/
#define ADC_ADCSSDC_R_S7DCSEL_MASK       ((uint32_t)0xF0000000u)
#define ADC_ADCSSDC_R_S7DCSEL_BIT        ((uint32_t)28u)
#define ADC_ADCSSDC_R_S7DCSEL_DC0        ((uint32_t)0x00000000u)
#define ADC_ADCSSDC_R_S7DCSEL_DC1        ((uint32_t)0x10000000u)
#define ADC_ADCSSDC_R_S7DCSEL_DC2        ((uint32_t)0x2000000u)
#define ADC_ADCSSDC_R_S7DCSEL_DC3        ((uint32_t)0x30000000u)
#define ADC_ADCSSDC_R_S7DCSEL_DC4        ((uint32_t)0x40000000u)
#define ADC_ADCSSDC_R_S7DCSEL_DC5        ((uint32_t)0x50000000u)
#define ADC_ADCSSDC_R_S7DCSEL_DC6        ((uint32_t)0x60000000u)
#define ADC_ADCSSDC_R_S7DCSEL_DC7        ((uint32_t)0x70000000u)

#define ADC_ADCSSDC_S7DCSEL_MASK        ((uint32_t)0x0000000Fu)
#define ADC_ADCSSDC_S7DCSEL_DC0         ((uint32_t)0x00000000u)
#define ADC_ADCSSDC_S7DCSEL_DC1         ((uint32_t)0x00000001u)
#define ADC_ADCSSDC_S7DCSEL_DC2         ((uint32_t)0x00000002u)
#define ADC_ADCSSDC_S7DCSEL_DC3         ((uint32_t)0x00000003u)
#define ADC_ADCSSDC_S7DCSEL_DC4         ((uint32_t)0x00000004u)
#define ADC_ADCSSDC_S7DCSEL_DC5         ((uint32_t)0x00000005u)
#define ADC_ADCSSDC_S7DCSEL_DC6         ((uint32_t)0x00000006u)
#define ADC_ADCSSDC_S7DCSEL_DC7         ((uint32_t)0x00000007u)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSSDC_H_ */
