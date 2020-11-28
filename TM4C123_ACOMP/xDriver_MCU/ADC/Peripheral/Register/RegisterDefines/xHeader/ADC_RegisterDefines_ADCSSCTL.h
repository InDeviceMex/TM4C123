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
#define ADC_ADCSSCTL_R_D0_MASK       ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_R_D0_BIT        ((uint32_t)0u)
#define ADC_ADCSSCTL_R_D0_SINGLE     ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_D0_DIFF       ((uint32_t)0x00000001u)

#define ADC_ADCSSCTL_D0_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_D0_SINGLE      ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_D0_DIFF        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_END0_MASK       ((uint32_t)0x00000002u)
#define ADC_ADCSSCTL_R_END0_BIT        ((uint32_t)1u)
#define ADC_ADCSSCTL_R_END0_CONTINUE   ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_END0_END        ((uint32_t)0x00000002u)

#define ADC_ADCSSCTL_END0_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_END0_CONTINUE    ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_END0_END         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_IE0_MASK       ((uint32_t)0x00000004u)
#define ADC_ADCSSCTL_R_IE0_BIT        ((uint32_t)2u)
#define ADC_ADCSSCTL_R_IE0_DIS        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_IE0_EN         ((uint32_t)0x00000004u)

#define ADC_ADCSSCTL_IE0_MASK       ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_IE0_DIS        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_IE0_EN         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_TS0_MASK         ((uint32_t)0x00000008u)
#define ADC_ADCSSCTL_R_TS0_BIT          ((uint32_t)3u)
#define ADC_ADCSSCTL_R_TS0_INPUT        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_TS0_TEMP         ((uint32_t)0x00000008u)

#define ADC_ADCSSCTL_TS0_MASK         ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_TS0_INPUT        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_TS0_TEMP         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_D1_MASK       ((uint32_t)0x00000010u)
#define ADC_ADCSSCTL_R_D1_BIT        ((uint32_t)4u)
#define ADC_ADCSSCTL_R_D1_SINGLE     ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_D1_DIFF       ((uint32_t)0x00000010u)

#define ADC_ADCSSCTL_D1_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_D1_SINGLE      ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_D1_DIFF        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_END1_MASK       ((uint32_t)0x00000020u)
#define ADC_ADCSSCTL_R_END1_BIT        ((uint32_t)5u)
#define ADC_ADCSSCTL_R_END1_CONTINUE   ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_END1_END        ((uint32_t)0x00000020u)

#define ADC_ADCSSCTL_END1_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_END1_CONTINUE    ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_END1_END         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_IE1_MASK       ((uint32_t)0x00000040u)
#define ADC_ADCSSCTL_R_IE1_BIT        ((uint32_t)6u)
#define ADC_ADCSSCTL_R_IE1_DIS        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_IE1_EN         ((uint32_t)0x00000040u)

#define ADC_ADCSSCTL_IE1_MASK       ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_IE1_DIS        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_IE1_EN         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_TS1_MASK         ((uint32_t)0x00000080u)
#define ADC_ADCSSCTL_R_TS1_BIT          ((uint32_t)7u)
#define ADC_ADCSSCTL_R_TS1_INPUT        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_TS1_TEMP         ((uint32_t)0x00000080u)

#define ADC_ADCSSCTL_TS1_MASK         ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_TS1_INPUT        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_TS1_TEMP         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_D2_MASK       ((uint32_t)0x00000100u)
#define ADC_ADCSSCTL_R_D2_BIT        ((uint32_t)8u)
#define ADC_ADCSSCTL_R_D2_SINGLE     ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_D2_DIFF       ((uint32_t)0x00000100u)

#define ADC_ADCSSCTL_D2_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_D2_SINGLE      ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_D2_DIFF        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_END2_MASK       ((uint32_t)0x00000200u)
#define ADC_ADCSSCTL_R_END2_BIT        ((uint32_t)9u)
#define ADC_ADCSSCTL_R_END2_CONTINUE   ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_END2_END        ((uint32_t)0x00000200u)

#define ADC_ADCSSCTL_END2_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_END2_CONTINUE    ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_END2_END         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_IE2_MASK       ((uint32_t)0x00000400u)
#define ADC_ADCSSCTL_R_IE2_BIT        ((uint32_t)10u)
#define ADC_ADCSSCTL_R_IE2_DIS        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_IE2_EN         ((uint32_t)0x00000400u)

#define ADC_ADCSSCTL_IE2_MASK       ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_IE2_DIS        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_IE2_EN         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_TS2_MASK         ((uint32_t)0x00000800u)
#define ADC_ADCSSCTL_R_TS2_BIT          ((uint32_t)11u)
#define ADC_ADCSSCTL_R_TS2_INPUT        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_TS2_TEMP         ((uint32_t)0x00000800u)

#define ADC_ADCSSCTL_TS2_MASK         ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_TS2_INPUT        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_TS2_TEMP         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_D3_MASK       ((uint32_t)0x00001000u)
#define ADC_ADCSSCTL_R_D3_BIT        ((uint32_t)12u)
#define ADC_ADCSSCTL_R_D3_SINGLE     ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_D3_DIFF       ((uint32_t)0x00001000u)

#define ADC_ADCSSCTL_D3_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_D3_SINGLE      ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_D3_DIFF        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_END3_MASK       ((uint32_t)0x00002000u)
#define ADC_ADCSSCTL_R_END3_BIT        ((uint32_t)13u)
#define ADC_ADCSSCTL_R_END3_CONTINUE   ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_END3_END        ((uint32_t)0x00002000u)

#define ADC_ADCSSCTL_END3_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_END3_CONTINUE    ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_END3_END         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_IE3_MASK       ((uint32_t)0x00004000u)
#define ADC_ADCSSCTL_R_IE3_BIT        ((uint32_t)14u)
#define ADC_ADCSSCTL_R_IE3_DIS        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_IE3_EN         ((uint32_t)0x00004000u)

#define ADC_ADCSSCTL_IE3_MASK       ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_IE3_DIS        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_IE3_EN         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_TS3_MASK         ((uint32_t)0x00008000u)
#define ADC_ADCSSCTL_R_TS3_BIT          ((uint32_t)15u)
#define ADC_ADCSSCTL_R_TS3_INPUT        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_TS3_TEMP         ((uint32_t)0x00008000u)

#define ADC_ADCSSCTL_TS3_MASK         ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_TS3_INPUT        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_TS3_TEMP         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_D4_MASK       ((uint32_t)0x00010000u)
#define ADC_ADCSSCTL_R_D4_BIT        ((uint32_t)16u)
#define ADC_ADCSSCTL_R_D4_SINGLE     ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_D4_DIFF       ((uint32_t)0x00010000u)

#define ADC_ADCSSCTL_D4_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_D4_SINGLE      ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_D4_DIFF        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_END4_MASK       ((uint32_t)0x00020000u)
#define ADC_ADCSSCTL_R_END4_BIT        ((uint32_t)17u)
#define ADC_ADCSSCTL_R_END4_CONTINUE   ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_END4_END        ((uint32_t)0x00020000u)

#define ADC_ADCSSCTL_END4_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_END4_CONTINUE    ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_END4_END         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_IE4_MASK       ((uint32_t)0x00040000u)
#define ADC_ADCSSCTL_R_IE4_BIT        ((uint32_t)18u)
#define ADC_ADCSSCTL_R_IE4_DIS        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_IE4_EN         ((uint32_t)0x00040000u)

#define ADC_ADCSSCTL_IE4_MASK       ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_IE4_DIS        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_IE4_EN         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_TS4_MASK         ((uint32_t)0x00080000u)
#define ADC_ADCSSCTL_R_TS4_BIT          ((uint32_t)19u)
#define ADC_ADCSSCTL_R_TS4_INPUT        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_TS4_TEMP         ((uint32_t)0x00080000u)

#define ADC_ADCSSCTL_TS4_MASK         ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_TS4_INPUT        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_TS4_TEMP         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_D5_MASK       ((uint32_t)0x00100000u)
#define ADC_ADCSSCTL_R_D5_BIT        ((uint32_t)20u)
#define ADC_ADCSSCTL_R_D5_SINGLE     ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_D5_DIFF       ((uint32_t)0x00100000u)

#define ADC_ADCSSCTL_D5_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_D5_SINGLE      ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_D5_DIFF        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_END5_MASK       ((uint32_t)0x00200000u)
#define ADC_ADCSSCTL_R_END5_BIT        ((uint32_t)21u)
#define ADC_ADCSSCTL_R_END5_CONTINUE   ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_END5_END        ((uint32_t)0x00200000u)

#define ADC_ADCSSCTL_END5_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_END5_CONTINUE    ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_END5_END         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_IE5_MASK       ((uint32_t)0x00400000u)
#define ADC_ADCSSCTL_R_IE5_BIT        ((uint32_t)22u)
#define ADC_ADCSSCTL_R_IE5_DIS        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_IE5_EN         ((uint32_t)0x00400000u)

#define ADC_ADCSSCTL_IE5_MASK       ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_IE5_DIS        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_IE5_EN         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_TS5_MASK         ((uint32_t)0x00800000u)
#define ADC_ADCSSCTL_R_TS5_BIT          ((uint32_t)23u)
#define ADC_ADCSSCTL_R_TS5_INPUT        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_TS5_TEMP         ((uint32_t)0x00800000u)

#define ADC_ADCSSCTL_TS5_MASK         ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_TS5_INPUT        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_TS5_TEMP         ((uint32_t)0x00000001u)
/*--------*/


/*--------*/
#define ADC_ADCSSCTL_R_D6_MASK       ((uint32_t)0x01000000u)
#define ADC_ADCSSCTL_R_D6_BIT        ((uint32_t)24u)
#define ADC_ADCSSCTL_R_D6_SINGLE     ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_D6_DIFF       ((uint32_t)0x01000000u)

#define ADC_ADCSSCTL_D6_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_D6_SINGLE      ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_D6_DIFF        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_END6_MASK       ((uint32_t)0x02000000u)
#define ADC_ADCSSCTL_R_END6_BIT        ((uint32_t)25u)
#define ADC_ADCSSCTL_R_END6_CONTINUE   ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_END6_END        ((uint32_t)0x02000000u)

#define ADC_ADCSSCTL_END6_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_END6_CONTINUE    ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_END6_END         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_IE6_MASK       ((uint32_t)0x04000000u)
#define ADC_ADCSSCTL_R_IE6_BIT        ((uint32_t)26u)
#define ADC_ADCSSCTL_R_IE6_DIS        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_IE6_EN         ((uint32_t)0x04000000u)

#define ADC_ADCSSCTL_IE6_MASK       ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_IE6_DIS        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_IE6_EN         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_TS6_MASK         ((uint32_t)0x0800000u)
#define ADC_ADCSSCTL_R_TS6_BIT          ((uint32_t)27u)
#define ADC_ADCSSCTL_R_TS6_INPUT        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_TS6_TEMP         ((uint32_t)0x08000000u)

#define ADC_ADCSSCTL_TS6_MASK         ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_TS6_INPUT        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_TS6_TEMP         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_D7_MASK       ((uint32_t)0x10000000u)
#define ADC_ADCSSCTL_R_D7_BIT        ((uint32_t)28u)
#define ADC_ADCSSCTL_R_D7_SINGLE     ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_D7_DIFF       ((uint32_t)0x10000000u)

#define ADC_ADCSSCTL_D7_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_D7_SINGLE      ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_D7_DIFF        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_END7_MASK       ((uint32_t)0x20000000u)
#define ADC_ADCSSCTL_R_END7_BIT        ((uint32_t)29u)
#define ADC_ADCSSCTL_R_END7_CONTINUE   ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_END7_END        ((uint32_t)0x20000000u)

#define ADC_ADCSSCTL_END7_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_END7_CONTINUE    ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_END7_END         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_IE7_MASK       ((uint32_t)0x40000000u)
#define ADC_ADCSSCTL_R_IE7_BIT        ((uint32_t)30u)
#define ADC_ADCSSCTL_R_IE7_DIS        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_IE7_EN         ((uint32_t)0x40000000u)

#define ADC_ADCSSCTL_IE7_MASK       ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_IE7_DIS        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_IE7_EN         ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCSSCTL_R_TS7_MASK         ((uint32_t)0x8000000u)
#define ADC_ADCSSCTL_R_TS7_BIT          ((uint32_t)31u)
#define ADC_ADCSSCTL_R_TS7_INPUT        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_R_TS7_TEMP         ((uint32_t)0x80000000u)

#define ADC_ADCSSCTL_TS7_MASK         ((uint32_t)0x00000001u)
#define ADC_ADCSSCTL_TS7_INPUT        ((uint32_t)0x00000000u)
#define ADC_ADCSSCTL_TS7_TEMP         ((uint32_t)0x00000001u)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSSCTL_H_ */
