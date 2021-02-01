/**
 *
 * @file ADC_RegisterDefines_ADCSSCTL.h
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
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSSCTL_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSSCTL_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 16 ADCSSCTL *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ADCSSCTL_R_D0_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_R_D0_BIT    ((uint32_t) 0U)
#define ADC_ADCSSCTL_R_D0_SINGLE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_D0_DIFF    ((uint32_t) 0x00000001U)

#define ADC_ADCSSCTL_D0_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_D0_SINGLE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_D0_DIFF    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_END0_MASK    ((uint32_t) 0x00000002U)
#define ADC_ADCSSCTL_R_END0_BIT    ((uint32_t) 1U)
#define ADC_ADCSSCTL_R_END0_CONTINUE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_END0_END    ((uint32_t) 0x00000002U)

#define ADC_ADCSSCTL_END0_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_END0_CONTINUE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_END0_END    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_IE0_MASK    ((uint32_t) 0x00000004U)
#define ADC_ADCSSCTL_R_IE0_BIT    ((uint32_t) 2U)
#define ADC_ADCSSCTL_R_IE0_DIS    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_IE0_EN    ((uint32_t) 0x00000004U)

#define ADC_ADCSSCTL_IE0_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_IE0_DIS    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_IE0_EN    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_TS0_MASK    ((uint32_t) 0x00000008U)
#define ADC_ADCSSCTL_R_TS0_BIT    ((uint32_t) 3U)
#define ADC_ADCSSCTL_R_TS0_INPUT    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_TS0_TEMP    ((uint32_t) 0x00000008U)

#define ADC_ADCSSCTL_TS0_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_TS0_INPUT    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_TS0_TEMP    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_D1_MASK    ((uint32_t) 0x00000010U)
#define ADC_ADCSSCTL_R_D1_BIT    ((uint32_t) 4U)
#define ADC_ADCSSCTL_R_D1_SINGLE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_D1_DIFF    ((uint32_t) 0x00000010U)

#define ADC_ADCSSCTL_D1_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_D1_SINGLE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_D1_DIFF    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_END1_MASK    ((uint32_t) 0x00000020U)
#define ADC_ADCSSCTL_R_END1_BIT    ((uint32_t) 5U)
#define ADC_ADCSSCTL_R_END1_CONTINUE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_END1_END    ((uint32_t) 0x00000020U)

#define ADC_ADCSSCTL_END1_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_END1_CONTINUE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_END1_END    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_IE1_MASK    ((uint32_t) 0x00000040U)
#define ADC_ADCSSCTL_R_IE1_BIT    ((uint32_t) 6U)
#define ADC_ADCSSCTL_R_IE1_DIS    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_IE1_EN    ((uint32_t) 0x00000040U)

#define ADC_ADCSSCTL_IE1_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_IE1_DIS    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_IE1_EN    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_TS1_MASK    ((uint32_t) 0x00000080U)
#define ADC_ADCSSCTL_R_TS1_BIT    ((uint32_t) 7U)
#define ADC_ADCSSCTL_R_TS1_INPUT    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_TS1_TEMP    ((uint32_t) 0x00000080U)

#define ADC_ADCSSCTL_TS1_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_TS1_INPUT    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_TS1_TEMP    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_D2_MASK    ((uint32_t) 0x00000100U)
#define ADC_ADCSSCTL_R_D2_BIT    ((uint32_t) 8U)
#define ADC_ADCSSCTL_R_D2_SINGLE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_D2_DIFF    ((uint32_t) 0x00000100U)

#define ADC_ADCSSCTL_D2_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_D2_SINGLE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_D2_DIFF    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_END2_MASK    ((uint32_t) 0x00000200U)
#define ADC_ADCSSCTL_R_END2_BIT    ((uint32_t) 9U)
#define ADC_ADCSSCTL_R_END2_CONTINUE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_END2_END    ((uint32_t) 0x00000200U)

#define ADC_ADCSSCTL_END2_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_END2_CONTINUE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_END2_END    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_IE2_MASK    ((uint32_t) 0x00000400U)
#define ADC_ADCSSCTL_R_IE2_BIT    ((uint32_t) 10U)
#define ADC_ADCSSCTL_R_IE2_DIS    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_IE2_EN    ((uint32_t) 0x00000400U)

#define ADC_ADCSSCTL_IE2_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_IE2_DIS    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_IE2_EN    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_TS2_MASK    ((uint32_t) 0x00000800U)
#define ADC_ADCSSCTL_R_TS2_BIT    ((uint32_t) 11U)
#define ADC_ADCSSCTL_R_TS2_INPUT    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_TS2_TEMP    ((uint32_t) 0x00000800U)

#define ADC_ADCSSCTL_TS2_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_TS2_INPUT    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_TS2_TEMP    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_D3_MASK    ((uint32_t) 0x00001000U)
#define ADC_ADCSSCTL_R_D3_BIT    ((uint32_t) 12U)
#define ADC_ADCSSCTL_R_D3_SINGLE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_D3_DIFF    ((uint32_t) 0x00001000U)

#define ADC_ADCSSCTL_D3_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_D3_SINGLE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_D3_DIFF    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_END3_MASK    ((uint32_t) 0x00002000U)
#define ADC_ADCSSCTL_R_END3_BIT    ((uint32_t) 13U)
#define ADC_ADCSSCTL_R_END3_CONTINUE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_END3_END    ((uint32_t) 0x00002000U)

#define ADC_ADCSSCTL_END3_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_END3_CONTINUE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_END3_END    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_IE3_MASK    ((uint32_t) 0x00004000U)
#define ADC_ADCSSCTL_R_IE3_BIT    ((uint32_t) 14U)
#define ADC_ADCSSCTL_R_IE3_DIS    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_IE3_EN    ((uint32_t) 0x00004000U)

#define ADC_ADCSSCTL_IE3_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_IE3_DIS    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_IE3_EN    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_TS3_MASK    ((uint32_t) 0x00008000U)
#define ADC_ADCSSCTL_R_TS3_BIT    ((uint32_t) 15U)
#define ADC_ADCSSCTL_R_TS3_INPUT    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_TS3_TEMP    ((uint32_t) 0x00008000U)

#define ADC_ADCSSCTL_TS3_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_TS3_INPUT    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_TS3_TEMP    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_D4_MASK    ((uint32_t) 0x00010000U)
#define ADC_ADCSSCTL_R_D4_BIT    ((uint32_t) 16U)
#define ADC_ADCSSCTL_R_D4_SINGLE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_D4_DIFF    ((uint32_t) 0x00010000U)

#define ADC_ADCSSCTL_D4_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_D4_SINGLE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_D4_DIFF    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_END4_MASK    ((uint32_t) 0x00020000U)
#define ADC_ADCSSCTL_R_END4_BIT    ((uint32_t) 17U)
#define ADC_ADCSSCTL_R_END4_CONTINUE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_END4_END    ((uint32_t) 0x00020000U)

#define ADC_ADCSSCTL_END4_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_END4_CONTINUE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_END4_END    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_IE4_MASK    ((uint32_t) 0x00040000U)
#define ADC_ADCSSCTL_R_IE4_BIT    ((uint32_t) 18U)
#define ADC_ADCSSCTL_R_IE4_DIS    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_IE4_EN    ((uint32_t) 0x00040000U)

#define ADC_ADCSSCTL_IE4_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_IE4_DIS    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_IE4_EN    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_TS4_MASK    ((uint32_t) 0x00080000U)
#define ADC_ADCSSCTL_R_TS4_BIT    ((uint32_t) 19U)
#define ADC_ADCSSCTL_R_TS4_INPUT    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_TS4_TEMP    ((uint32_t) 0x00080000U)

#define ADC_ADCSSCTL_TS4_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_TS4_INPUT    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_TS4_TEMP    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_D5_MASK    ((uint32_t) 0x00100000U)
#define ADC_ADCSSCTL_R_D5_BIT    ((uint32_t) 20U)
#define ADC_ADCSSCTL_R_D5_SINGLE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_D5_DIFF    ((uint32_t) 0x00100000U)

#define ADC_ADCSSCTL_D5_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_D5_SINGLE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_D5_DIFF    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_END5_MASK    ((uint32_t) 0x00200000U)
#define ADC_ADCSSCTL_R_END5_BIT    ((uint32_t) 21U)
#define ADC_ADCSSCTL_R_END5_CONTINUE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_END5_END    ((uint32_t) 0x00200000U)

#define ADC_ADCSSCTL_END5_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_END5_CONTINUE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_END5_END    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_IE5_MASK    ((uint32_t) 0x00400000U)
#define ADC_ADCSSCTL_R_IE5_BIT    ((uint32_t) 22U)
#define ADC_ADCSSCTL_R_IE5_DIS    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_IE5_EN    ((uint32_t) 0x00400000U)

#define ADC_ADCSSCTL_IE5_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_IE5_DIS    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_IE5_EN    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_TS5_MASK    ((uint32_t) 0x00800000U)
#define ADC_ADCSSCTL_R_TS5_BIT    ((uint32_t) 23U)
#define ADC_ADCSSCTL_R_TS5_INPUT    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_TS5_TEMP    ((uint32_t) 0x00800000U)

#define ADC_ADCSSCTL_TS5_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_TS5_INPUT    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_TS5_TEMP    ((uint32_t) 0x00000001U)
/*--------*/


/*--------*/
#define ADC_ADCSSCTL_R_D6_MASK    ((uint32_t) 0x01000000U)
#define ADC_ADCSSCTL_R_D6_BIT    ((uint32_t) 24U)
#define ADC_ADCSSCTL_R_D6_SINGLE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_D6_DIFF    ((uint32_t) 0x01000000U)

#define ADC_ADCSSCTL_D6_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_D6_SINGLE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_D6_DIFF    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_END6_MASK    ((uint32_t) 0x02000000U)
#define ADC_ADCSSCTL_R_END6_BIT    ((uint32_t) 25U)
#define ADC_ADCSSCTL_R_END6_CONTINUE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_END6_END    ((uint32_t) 0x02000000U)

#define ADC_ADCSSCTL_END6_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_END6_CONTINUE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_END6_END    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_IE6_MASK    ((uint32_t) 0x04000000U)
#define ADC_ADCSSCTL_R_IE6_BIT    ((uint32_t) 26U)
#define ADC_ADCSSCTL_R_IE6_DIS    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_IE6_EN    ((uint32_t) 0x04000000U)

#define ADC_ADCSSCTL_IE6_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_IE6_DIS    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_IE6_EN    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_TS6_MASK    ((uint32_t) 0x0800000U)
#define ADC_ADCSSCTL_R_TS6_BIT    ((uint32_t) 27U)
#define ADC_ADCSSCTL_R_TS6_INPUT    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_TS6_TEMP    ((uint32_t) 0x08000000U)

#define ADC_ADCSSCTL_TS6_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_TS6_INPUT    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_TS6_TEMP    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_D7_MASK    ((uint32_t) 0x10000000U)
#define ADC_ADCSSCTL_R_D7_BIT    ((uint32_t) 28U)
#define ADC_ADCSSCTL_R_D7_SINGLE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_D7_DIFF    ((uint32_t) 0x10000000U)

#define ADC_ADCSSCTL_D7_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_D7_SINGLE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_D7_DIFF    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_END7_MASK    ((uint32_t) 0x20000000U)
#define ADC_ADCSSCTL_R_END7_BIT    ((uint32_t) 29U)
#define ADC_ADCSSCTL_R_END7_CONTINUE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_END7_END    ((uint32_t) 0x20000000U)

#define ADC_ADCSSCTL_END7_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_END7_CONTINUE    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_END7_END    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_IE7_MASK    ((uint32_t) 0x40000000U)
#define ADC_ADCSSCTL_R_IE7_BIT    ((uint32_t) 30U)
#define ADC_ADCSSCTL_R_IE7_DIS    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_IE7_EN    ((uint32_t) 0x40000000U)

#define ADC_ADCSSCTL_IE7_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_IE7_DIS    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_IE7_EN    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_TS7_MASK    ((uint32_t) 0x8000000U)
#define ADC_ADCSSCTL_R_TS7_BIT    ((uint32_t) 31U)
#define ADC_ADCSSCTL_R_TS7_INPUT    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_R_TS7_TEMP    ((uint32_t) 0x80000000U)

#define ADC_ADCSSCTL_TS7_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSCTL_TS7_INPUT    ((uint32_t) 0x00000000U)
#define ADC_ADCSSCTL_TS7_TEMP    ((uint32_t) 0x00000001U)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSSCTL_H_ */
