/**
 *
 * @file ADC_RegisterPeripheral_Module1.h
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
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_ADC_REGISTERPERIPHERAL_MODULE1_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_ADC_REGISTERPERIPHERAL_MODULE1_H_

#include <xDriver_MCU/ADC/Peripheral/Register/xHeader/ADC_RegisterAddress.h>
#include <xDriver_MCU/ADC/Peripheral/Register/RegisterDefines/ADC_RegisterDefines.h>
#include <xDriver_MCU/ADC/Peripheral/Struct/xHeader/ADC_StructPeripheral.h>

/******************************************************************************************
************************************ ADC1 *********************************************
******************************************************************************************/

#define ADC1              (((ADC_TypeDef*)(ADC1_BASE)))

/******************************************************************************************
************************************ 1 ADCACTSS *********************************************
******************************************************************************************/
#define ADC1_ADCACTSS            (((ADCACTSS_TypeDef*)(ADC1_BASE + ADC_ADCACTSS_OFFSET )))
#define ADC1_ADCACTSS_R          (*((volatile uint32_t*)(ADC1_BASE +ADC_ADCACTSS_OFFSET)))

/******************************************************************************************
************************************ 2 ADCRIS *********************************************
******************************************************************************************/
#define ADC1_ADCRIS            (((ADCRIS_TypeDef*)(ADC1_BASE + ADC_ADCRIS_OFFSET )))
#define ADC1_ADCRIS_R          (*((volatile uint32_t*)(ADC1_BASE +ADC_ADCRIS_OFFSET)))

/******************************************************************************************
************************************ 3 ADCIM *********************************************
******************************************************************************************/
#define ADC1_ADCIM            (((ADCIM_TypeDef*)(ADC1_BASE + ADC_ADCIM_OFFSET )))
#define ADC1_ADCIM_R          (*((volatile uint32_t*)(ADC1_BASE +ADC_ADCIM_OFFSET)))

/******************************************************************************************
************************************ 4 ADCISC *********************************************
******************************************************************************************/
#define ADC1_ADCISC            (((ADCISC_TypeDef*)(ADC1_BASE + ADC_ADCISC_OFFSET )))
#define ADC1_ADCISC_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCISC_OFFSET)))

/******************************************************************************************
************************************ 5 ADCOSTAT *********************************************
******************************************************************************************/
#define ADC1_ADCOSTAT            (((ADCOSTAT_TypeDef*)(ADC1_BASE + ADC_ADCOSTAT_OFFSET )))
#define ADC1_ADCOSTAT_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCOSTAT_OFFSET)))

/******************************************************************************************
************************************ 6 ADCEMUX *********************************************
******************************************************************************************/
#define ADC1_ADCEMUX            (((ADCEMUX_TypeDef*)(ADC1_BASE + ADC_ADCEMUX_OFFSET )))
#define ADC1_ADCEMUX_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCEMUX_OFFSET)))

/******************************************************************************************
************************************ 7 ADCUSTAT *********************************************
******************************************************************************************/
#define ADC1_ADCUSTAT            (((ADCUSTAT_TypeDef*)(ADC1_BASE + ADC_ADCUSTAT_OFFSET )))
#define ADC1_ADCUSTAT_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCUSTAT_OFFSET)))

/******************************************************************************************
************************************ 8 ADCTSSEL *********************************************
******************************************************************************************/
#define ADC1_ADCTSSEL            (((ADCTSSEL_TypeDef*)(ADC1_BASE + ADC_ADCTSSEL_OFFSET )))
#define ADC1_ADCTSSEL_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCTSSEL_OFFSET)))

/******************************************************************************************
************************************ 9 ADCSSPRI *********************************************
******************************************************************************************/
#define ADC1_ADCSSPRI            (((ADCSSPRI_TypeDef*)(ADC1_BASE + ADC_ADCSSPRI_OFFSET )))
#define ADC1_ADCSSPRI_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSPRI_OFFSET)))

/******************************************************************************************
************************************ 10 ADCSPC *********************************************
******************************************************************************************/
#define ADC1_ADCSPC            (((ADCSPC_TypeDef*)(ADC1_BASE + ADC_ADCSPC_OFFSET )))
#define ADC1_ADCSPC_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSPC_OFFSET)))

/******************************************************************************************
************************************ 11 ADCPSSI *********************************************
******************************************************************************************/
#define ADC1_ADCPSSI            (((ADCPSSI_TypeDef*)(ADC1_BASE + ADC_ADCPSSI_OFFSET )))
#define ADC1_ADCPSSI_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCPSSI_OFFSET)))

/******************************************************************************************
************************************ 12 ADCSAC *********************************************
******************************************************************************************/
#define ADC1_ADCSAC            (((ADCSAC_TypeDef*)(ADC1_BASE + ADC_ADCSAC_OFFSET )))
#define ADC1_ADCSAC_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSAC_OFFSET)))

/******************************************************************************************
************************************ 13 ADCDCISC *********************************************
******************************************************************************************/
#define ADC1_ADCDCISC            (((ADCDCISC_TypeDef*)(ADC1_BASE + ADC_ADCDCISC_OFFSET )))
#define ADC1_ADCDCISC_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCISC_OFFSET)))

/******************************************************************************************
************************************ 14 ADCCTL *********************************************
******************************************************************************************/
#define ADC1_ADCCTL            (((ADCCTL_TypeDef*)(ADC1_BASE + ADC_ADCCTL_OFFSET )))
#define ADC1_ADCCTL_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCCTL_OFFSET)))

/******************************************************************************************
************************************ 15 ADCSSMUX *********************************************
******************************************************************************************/
#define ADC1_ADCSSMUX0            (((ADCSSMUX8_TypeDef*)(ADC1_BASE + ADC_ADCSSMUX0_OFFSET )))
#define ADC1_ADCSSMUX0_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSMUX0_OFFSET)))

#define ADC1_ADCSSMUX1            (((ADCSSMUX4_TypeDef*)(ADC1_BASE + ADC_ADCSSMUX1_OFFSET )))
#define ADC1_ADCSSMUX1_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSMUX1_OFFSET)))

#define ADC1_ADCSSMUX2            (((ADCSSMUX4_TypeDef*)(ADC1_BASE + ADC_ADCSSMUX2_OFFSET )))
#define ADC1_ADCSSMUX2_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSMUX2_OFFSET)))

#define ADC1_ADCSSMUX3            (((ADCSSMUX1_TypeDef*)(ADC1_BASE + ADC_ADCSSMUX3_OFFSET )))
#define ADC1_ADCSSMUX3_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSMUX3_OFFSET)))

/******************************************************************************************
************************************ 16 ADCSSCTL *********************************************
******************************************************************************************/
#define ADC1_ADCSSCTL0            (((ADCSSCTL8_TypeDef*)(ADC1_BASE + ADC_ADCSSCTL0_OFFSET )))
#define ADC1_ADCSSCTL0_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSCTL0_OFFSET)))

#define ADC1_ADCSSCTL1            (((ADCSSCTL4_TypeDef*)(ADC1_BASE + ADC_ADCSSCTL1_OFFSET )))
#define ADC1_ADCSSCTL1_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSCTL1_OFFSET)))

#define ADC1_ADCSSCTL2            (((ADCSSCTL4_TypeDef*)(ADC1_BASE + ADC_ADCSSCTL2_OFFSET )))
#define ADC1_ADCSSCTL2_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSCTL2_OFFSET)))

#define ADC1_ADCSSCTL3            (((ADCSSCTL1_TypeDef*)(ADC1_BASE + ADC_ADCSSCTL3_OFFSET )))
#define ADC1_ADCSSCTL3_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSCTL3_OFFSET)))

/******************************************************************************************
************************************ 17 ADCSSFIFO *********************************************
******************************************************************************************/
#define ADC1_ADCSSFIFO0            (((ADCSSFIFO_TypeDef*)(ADC1_BASE + ADC_ADCSSFIFO0_OFFSET )))
#define ADC1_ADCSSFIFO0_R          (*((volatile const uint32_t *)(ADC1_BASE +ADC_ADCSSFIFO0_OFFSET)))

#define ADC1_ADCSSFIFO1            (((ADCSSFIFO_TypeDef*)(ADC1_BASE + ADC_ADCSSFIFO1_OFFSET )))
#define ADC1_ADCSSFIFO1_R          (*((volatile const uint32_t *)(ADC1_BASE +ADC_ADCSSFIFO1_OFFSET)))

#define ADC1_ADCSSFIFO2            (((ADCSSFIFO_TypeDef*)(ADC1_BASE + ADC_ADCSSFIFO2_OFFSET )))
#define ADC1_ADCSSFIFO2_R          (*((volatile const uint32_t *)(ADC1_BASE +ADC_ADCSSFIFO2_OFFSET)))

#define ADC1_ADCSSFIFO3            (((ADCSSFIFO_TypeDef*)(ADC1_BASE + ADC_ADCSSFIFO3_OFFSET )))
#define ADC1_ADCSSFIFO3_R          (*((volatile const uint32_t *)(ADC1_BASE +ADC_ADCSSFIFO3_OFFSET)))

/******************************************************************************************
************************************ 18 ADCSSFSTAT *********************************************
******************************************************************************************/
#define ADC1_ADCSSFSTAT0            (((ADCSSFSTAT_TypeDef*)(ADC1_BASE + ADC_ADCSSFSTAT0_OFFSET )))
#define ADC1_ADCSSFSTAT0_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSFSTAT0_OFFSET)))

#define ADC1_ADCSSFSTAT1            (((ADCSSFSTAT_TypeDef*)(ADC1_BASE + ADC_ADCSSFSTAT1_OFFSET )))
#define ADC1_ADCSSFSTAT1_R          (*((volatile const uint32_t *)(ADC1_BASE +ADC_ADCSSFSTAT1_OFFSET)))

#define ADC1_ADCSSFSTAT2            (((ADCSSFSTAT_TypeDef*)(ADC1_BASE + ADC_ADCSSFSTAT2_OFFSET )))
#define ADC1_ADCSSFSTAT2_R          (*((volatile const uint32_t *)(ADC1_BASE +ADC_ADCSSFSTAT2_OFFSET)))

#define ADC1_ADCSSFSTAT3            (((ADCSSFSTAT_TypeDef*)(ADC1_BASE + ADC_ADCSSFSTAT3_OFFSET )))
#define ADC1_ADCSSFSTAT3_R          (*((volatile const uint32_t *)(ADC1_BASE +ADC_ADCSSFSTAT3_OFFSET)))

/******************************************************************************************
************************************ 19 ADCSSOP *********************************************
******************************************************************************************/
#define ADC1_ADCSSOP0            (((ADCSSOP8_TypeDef*)(ADC1_BASE + ADC_ADCSSOP0_OFFSET )))
#define ADC1_ADCSSOP0_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSOP0_OFFSET)))

#define ADC1_ADCSSOP1            (((ADCSSOP4_TypeDef*)(ADC1_BASE + ADC_ADCSSOP1_OFFSET )))
#define ADC1_ADCSSOP1_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSOP1_OFFSET)))

#define ADC1_ADCSSOP2            (((ADCSSOP4_TypeDef*)(ADC1_BASE + ADC_ADCSSOP2_OFFSET )))
#define ADC1_ADCSSOP2_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSOP2_OFFSET)))

#define ADC1_ADCSSOP3            (((ADCSSOP1_TypeDef*)(ADC1_BASE + ADC_ADCSSOP3_OFFSET )))
#define ADC1_ADCSSOP3_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSOP3_OFFSET)))

/******************************************************************************************
************************************ 20 ADCSSDC *********************************************
******************************************************************************************/
#define ADC1_ADCSSDC0            (((ADCSSDC8_TypeDef*)(ADC1_BASE + ADC_ADCSSDC0_OFFSET )))
#define ADC1_ADCSSDC0_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSDC0_OFFSET)))

#define ADC1_ADCSSDC1            (((ADCSSDC4_TypeDef*)(ADC1_BASE + ADC_ADCSSDC1_OFFSET )))
#define ADC1_ADCSSDC1_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSDC1_OFFSET)))

#define ADC1_ADCSSDC2            (((ADCSSDC4_TypeDef*)(ADC1_BASE + ADC_ADCSSDC2_OFFSET )))
#define ADC1_ADCSSDC2_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSDC2_OFFSET)))

#define ADC1_ADCSSDC3            (((ADCSSDC1_TypeDef*)(ADC1_BASE + ADC_ADCSSDC3_OFFSET )))
#define ADC1_ADCSSDC3_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSDC3_OFFSET)))

/******************************************************************************************
************************************ 21 ADCDCRIC *********************************************
******************************************************************************************/
#define ADC1_ADCDCRIC            (((ADCDCRIC_TypeDef*)(ADC1_BASE + ADC_ADCDCRIC_OFFSET )))
#define ADC1_ADCDCRIC_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCRIC_OFFSET)))

/******************************************************************************************
************************************ 22 ADCDCCTL *********************************************
******************************************************************************************/
#define ADC1_ADCDCCTL0            (((ADCDCCTL_TypeDef*)(ADC1_BASE + ADC_ADCDCCTL0_OFFSET )))
#define ADC1_ADCDCCTL0_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCTL0_OFFSET)))

#define ADC1_ADCDCCTL1            (((ADCDCCTL_TypeDef*)(ADC1_BASE + ADC_ADCDCCTL1_OFFSET )))
#define ADC1_ADCDCCTL1_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCTL1_OFFSET)))

#define ADC1_ADCDCCTL2            (((ADCDCCTL_TypeDef*)(ADC1_BASE + ADC_ADCDCCTL2_OFFSET )))
#define ADC1_ADCDCCTL2_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCTL2_OFFSET)))

#define ADC1_ADCDCCTL3            (((ADCDCCTL_TypeDef*)(ADC1_BASE + ADC_ADCDCCTL3_OFFSET )))
#define ADC1_ADCDCCTL3_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCTL3_OFFSET)))

#define ADC1_ADCDCCTL4            (((ADCDCCTL_TypeDef*)(ADC1_BASE + ADC_ADCDCCTL4_OFFSET )))
#define ADC1_ADCDCCTL4_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCTL4_OFFSET)))

#define ADC1_ADCDCCTL5            (((ADCDCCTL_TypeDef*)(ADC1_BASE + ADC_ADCDCCTL5_OFFSET )))
#define ADC1_ADCDCCTL5_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCTL5_OFFSET)))

#define ADC1_ADCDCCTL6            (((ADCDCCTL_TypeDef*)(ADC1_BASE + ADC_ADCDCCTL6_OFFSET )))
#define ADC1_ADCDCCTL6_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCTL6_OFFSET)))

#define ADC1_ADCDCCTL7            (((ADCDCCTL_TypeDef*)(ADC1_BASE + ADC_ADCDCCTL7_OFFSET )))
#define ADC1_ADCDCCTL7_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCTL7_OFFSET)))

/******************************************************************************************
************************************ 23 ADCDCCMP *********************************************
******************************************************************************************/
#define ADC1_ADCDCCMP0            (((ADCDCCMP_TypeDef*)(ADC1_BASE + ADC_ADCDCCMP0_OFFSET )))
#define ADC1_ADCDCCMP0_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCMP0_OFFSET)))

#define ADC1_ADCDCCMP1            (((ADCDCCMP_TypeDef*)(ADC1_BASE + ADC_ADCDCCMP1_OFFSET )))
#define ADC1_ADCDCCMP1_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCMP1_OFFSET)))

#define ADC1_ADCDCCMP2            (((ADCDCCMP_TypeDef*)(ADC1_BASE + ADC_ADCDCCMP2_OFFSET )))
#define ADC1_ADCDCCMP2_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCMP2_OFFSET)))

#define ADC1_ADCDCCMP3            (((ADCDCCMP_TypeDef*)(ADC1_BASE + ADC_ADCDCCMP3_OFFSET )))
#define ADC1_ADCDCCMP3_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCMP3_OFFSET)))

#define ADC1_ADCDCCMP4            (((ADCDCCMP_TypeDef*)(ADC1_BASE + ADC_ADCDCCMP4_OFFSET )))
#define ADC1_ADCDCCMP4_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCMP4_OFFSET)))

#define ADC1_ADCDCCMP5            (((ADCDCCMP_TypeDef*)(ADC1_BASE + ADC_ADCDCCMP5_OFFSET )))
#define ADC1_ADCDCCMP5_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCMP5_OFFSET)))

#define ADC1_ADCDCCMP6            (((ADCDCCMP_TypeDef*)(ADC1_BASE + ADC_ADCDCCMP6_OFFSET )))
#define ADC1_ADCDCCMP6_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCMP6_OFFSET)))

#define ADC1_ADCDCCMP7            (((ADCDCCMP_TypeDef*)(ADC1_BASE + ADC_ADCDCCMP7_OFFSET )))
#define ADC1_ADCDCCMP7_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCMP7_OFFSET)))

/******************************************************************************************
************************************ 24 ADCPP *********************************************
******************************************************************************************/
#define ADC1_ADCPP            (((ADCPP_TypeDef*)(ADC1_BASE + ADC_ADCPP_OFFSET )))
#define ADC1_ADCPP_R          (*((volatile const uint32_t *)(ADC1_BASE +ADC_ADCPP_OFFSET)))

/******************************************************************************************
************************************ 25 ADCPC *********************************************
******************************************************************************************/
#define ADC1_ADCPC            (((ADCPC_TypeDef*)(ADC1_BASE + ADC_ADCPC_OFFSET )))
#define ADC1_ADCPC_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCPC_OFFSET)))

/******************************************************************************************
************************************ 26 ADCCC *********************************************
******************************************************************************************/
#define ADC1_ADCCC            (((ADCCC_TypeDef*)(ADC1_BASE + ADC_ADCCC_OFFSET )))
#define ADC1_ADCCC_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCCC_OFFSET)))

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_ADC_REGISTERPERIPHERAL_MODULE1_H_ */
