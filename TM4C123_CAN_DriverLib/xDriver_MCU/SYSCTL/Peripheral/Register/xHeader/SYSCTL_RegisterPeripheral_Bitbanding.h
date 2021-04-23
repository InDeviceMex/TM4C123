/**
 *
 * @file SYSCTL_RegisterPeripheral_Bitbanding.h
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
 * @verbatim 23 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/SYSCTL/Peripheral/Register/RegisterDefines/SYSCTL_RegisterDefines.h>
#include <xDriver_MCU/SYSCTL/Peripheral/Register/xHeader/SYSCTL_RegisterAddress.h>
#include <xDriver_MCU/SYSCTL/Peripheral/Struct/xHeader/SYSCTL_StructPeripheral_Bitbanding.h>

#define SYSCTL_BITBANDING    ((SYSCTL_BITBANDING_TypeDef*) (SYSCTL_BITBANDING_BASE + SYSCTL_OFFSET * 32UL))

/*******************************************************************************************
************************************ 1 DID0 *********************************************
*******************************************************************************************/
#define SYSCTL_BITBANDING_DID0    ((BITBANDING_DID0_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DID0_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 2 DID1 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DID1    ((BITBANDING_DID1_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DID1_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 3 PBORCTL *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PBORCTL    ((BITBANDING_PBORCTL_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PBORCTL_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PBORCTL_BOR1 (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PBORCTL_OFFSET) * 32UL) + (SYSCTL_PBORCTL_R_BOR1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PBORCTL_BOR0 (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PBORCTL_OFFSET) * 32UL) + (SYSCTL_PBORCTL_R_BOR0_BIT * 4UL))))

/******************************************************************************************
************************************ 4 RIS *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RIS    ((BITBANDING_RIS_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RIS_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RIS_BOR1RIS    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RIS_OFFSET) * 32UL) + (SYSCTL_RIS_R_BOR1RIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_RIS_MOFRIS    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RIS_OFFSET) * 32UL) + (SYSCTL_RIS_R_MOFRIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_RIS_PLLLRIS    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RIS_OFFSET) * 32UL) + (SYSCTL_RIS_R_PLLLRIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_RIS_USBPLLLRIS    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RIS_OFFSET) * 32UL) + (SYSCTL_RIS_R_USBPLLLRIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_RIS_MOSCPUPRIS    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RIS_OFFSET) * 32UL) + (SYSCTL_RIS_R_MOSCPUPRIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_RIS_VDDARIS    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RIS_OFFSET) * 32UL) + (SYSCTL_RIS_R_VDDARIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_RIS_BOR0RIS    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RIS_OFFSET) * 32UL) + (SYSCTL_RIS_R_BOR0RIS_BIT * 4UL))))

/******************************************************************************************
************************************ 5 IMC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_IMC    ((BITBANDING_IMC_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_IMC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_IMC_BOR1IM    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_IMC_OFFSET) * 32UL) + (SYSCTL_IMC_R_BOR1IM_BIT * 4UL))))
#define SYSCTL_BITBANDING_IMC_MOFIM    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_IMC_OFFSET) * 32UL) + (SYSCTL_IMC_R_MOFIM_BIT * 4UL))))
#define SYSCTL_BITBANDING_IMC_PLLLIM    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_IMC_OFFSET) * 32UL) + (SYSCTL_IMC_R_PLLLIM_BIT * 4UL))))
#define SYSCTL_BITBANDING_IMC_USBPLLLIM    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_IMC_OFFSET) * 32UL) + (SYSCTL_IMC_R_USBPLLLIM_BIT * 4UL))))
#define SYSCTL_BITBANDING_IMC_MOSCPUPIM    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_IMC_OFFSET) * 32UL) + (SYSCTL_IMC_R_MOSCPUPIM_BIT * 4UL))))
#define SYSCTL_BITBANDING_IMC_VDDAIM    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_IMC_OFFSET) * 32UL) + (SYSCTL_IMC_R_VDDAIM_BIT * 4UL))))
#define SYSCTL_BITBANDING_IMC_BOR0IM    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_IMC_OFFSET) * 32UL) + (SYSCTL_IMC_R_BOR0IM_BIT * 4UL))))

/******************************************************************************************
************************************ 6 MISC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_MISC    ((BITBANDING_MISC_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MISC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_MISC_BOR1MIS    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MISC_OFFSET) * 32UL) + (SYSCTL_MISC_R_BOR1MIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_MISC_MOFMIS    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MISC_OFFSET) * 32UL) + (SYSCTL_MISC_R_MOFMIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_MISC_PLLLMIS    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MISC_OFFSET) * 32UL) + (SYSCTL_MISC_R_PLLLMIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_MISC_USBPLLLMIS    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MISC_OFFSET) * 32UL) + (SYSCTL_MISC_R_USBPLLLMIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_MISC_MOSCPUPMIS    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MISC_OFFSET) * 32UL) + (SYSCTL_MISC_R_MOSCPUPMIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_MISC_VDDAMIS    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MISC_OFFSET) * 32UL) + (SYSCTL_MISC_R_VDDAMIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_MISC_BOR0MIS    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MISC_OFFSET) * 32UL) + (SYSCTL_MISC_R_BOR0MIS_BIT * 4UL))))

/******************************************************************************************
************************************ 7 RESC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RESC    ((BITBANDING_RESC_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RESC_EXT    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESC_OFFSET) * 32UL) + (SYSCTL_RESC_R_EXT_BIT * 4UL))))
#define SYSCTL_BITBANDING_RESC_POR    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESC_OFFSET) * 32UL) + (SYSCTL_RESC_R_POR_BIT * 4UL))))
#define SYSCTL_BITBANDING_RESC_BOR    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESC_OFFSET) * 32UL) + (SYSCTL_RESC_R_BOR_BIT * 4UL))))
#define SYSCTL_BITBANDING_RESC_WDT0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESC_OFFSET) * 32UL) + (SYSCTL_RESC_R_WDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RESC_SW    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESC_OFFSET) * 32UL) + (SYSCTL_RESC_R_SW_BIT * 4UL))))
#define SYSCTL_BITBANDING_RESC_WDT1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESC_OFFSET) * 32UL) + (SYSCTL_RESC_R_WDT1_BIT * 4UL))))
#define SYSCTL_BITBANDING_RESC_MOSCFAIL (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RESC_OFFSET) * 32UL) + (SYSCTL_RESC_R_MOSCFAIL_BIT * 4UL))))

/******************************************************************************************
************************************ 8 RCC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCC    ((BITBANDING_RCC_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCC_MOSCDIS    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCC_OFFSET) * 32UL) + (SYSCTL_RCC_R_MOSCDIS_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCC_BYPASS    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCC_OFFSET) * 32UL) + (SYSCTL_RCC_R_BYPASS_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCC_PWRDN    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCC_OFFSET) * 32UL) + (SYSCTL_RCC_R_PWRDN_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCC_USEPWMDIV (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCC_OFFSET) * 32UL) + (SYSCTL_RCC_R_USEPWMDIV_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCC_USESYSDIV (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCC_OFFSET) * 32UL) + (SYSCTL_RCC_R_USESYSDIV_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCC_ACG    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCC_OFFSET) * 32UL) + (SYSCTL_RCC_R_ACG_BIT * 4UL))))

/******************************************************************************************
************************************ 9 HBCTL *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_BHCTL    ((BITBANDING_GPIOBHCTL_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_BHCTL_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_HBCTL_PORTA (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_GPIOHBCTL_OFFSET) * 32UL) + (SYSCTL_GPIOHBCTL_R_PORTA_BIT * 4UL))))
#define SYSCTL_BITBANDING_HBCTL_PORTB (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_GPIOHBCTL_OFFSET) * 32UL) + (SYSCTL_GPIOHBCTL_R_PORTB_BIT * 4UL))))
#define SYSCTL_BITBANDING_HBCTL_PORTC (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_GPIOHBCTL_OFFSET) * 32UL) + (SYSCTL_GPIOHBCTL_R_PORTC_BIT * 4UL))))
#define SYSCTL_BITBANDING_HBCTL_PORTD (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_GPIOHBCTL_OFFSET) * 32UL) + (SYSCTL_GPIOHBCTL_R_PORTD_BIT * 4UL))))
#define SYSCTL_BITBANDING_HBCTL_PORTE (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_GPIOHBCTL_OFFSET) * 32UL) + (SYSCTL_GPIOHBCTL_R_PORTE_BIT * 4UL))))
#define SYSCTL_BITBANDING_HBCTL_PORTF (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_GPIOHBCTL_OFFSET) * 32UL) + (SYSCTL_GPIOHBCTL_R_PORTF_BIT * 4UL))))

/******************************************************************************************
************************************ 10 RCC2 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCC2    ((BITBANDING_RCC2_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCC2_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCC2_BYPASS2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCC2_OFFSET) * 32UL) + (SYSCTL_RCC2_R_BYPASS2_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCC2_PWRDN2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCC2_OFFSET) * 32UL) + (SYSCTL_RCC2_R_PWRDN2_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCC2_USBPWRDN    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCC2_OFFSET) * 32UL) + (SYSCTL_RCC2_R_USBPWRDN_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCC2_SYSDIV2LSB (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCC2_OFFSET) * 32UL) + (SYSCTL_RCC2_R_SYSDIV2LSB_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCC2_DIV400 (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCC2_OFFSET) * 32UL) + (SYSCTL_RCC2_R_DIV400_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCC2_USERCC2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCC2_OFFSET) * 32UL) + (SYSCTL_RCC2_R_USERCC2_BIT * 4UL))))

/******************************************************************************************
************************************ 11 MOSCCTL *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_MOSCCTL    ((BITBANDING_MOSCCTL_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MOSCCTL_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_MOSCCTL_CVAL    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MOSCCTL_OFFSET) * 32UL) + (SYSCTL_MOSCCTL_R_CVAL_BIT * 4UL))))
#define SYSCTL_BITBANDING_MOSCCTL_MOSCIM    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MOSCCTL_OFFSET) * 32UL) + (SYSCTL_MOSCCTL_R_MOSCIM_BIT * 4UL))))
#define SYSCTL_BITBANDING_MOSCCTL_NOXTAL    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_MOSCCTL_OFFSET) * 32UL) + (SYSCTL_MOSCCTL_R_NOXTAL_BIT * 4UL))))

/******************************************************************************************
************************************12 DSLPCLKCFG *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DSLPCLKCFG    ((BITBANDING_DSLPCLKCFG_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DSLPCLKCFG_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DSLPCLKCFG_PIOSCPD    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DSLPCLKCFG_OFFSET) * 32UL) + (SYSCTL_DSLPCLKCFG_R_PIOSCPD_BIT * 4UL))))

/******************************************************************************************
************************************13 SYSPROP *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SYSPROP    ((BITBANDING_SYSPROP_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SYSPROP_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SYSPROP_FPU    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SYSPROP_OFFSET) * 32UL) + (SYSCTL_SYSPROP_R_FPU_BIT * 4UL))))
#define SYSCTL_BITBANDING_SYSPROP_FLASHLPM    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SYSPROP_OFFSET) * 32UL) + (SYSCTL_SYSPROP_R_FLASHLPM_BIT * 4UL))))
#define SYSCTL_BITBANDING_SYSPROP_SRAMLPM    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SYSPROP_OFFSET) * 32UL) + (SYSCTL_SYSPROP_R_SRAMLPM_BIT * 4UL))))
#define SYSCTL_BITBANDING_SYSPROP_SRAMSM    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SYSPROP_OFFSET) * 32UL) + (SYSCTL_SYSPROP_R_SRAMSM_BIT * 4UL))))
#define SYSCTL_BITBANDING_SYSPROP_PIOSCPDE    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SYSPROP_OFFSET) * 32UL) + (SYSCTL_SYSPROP_R_PIOSCPDE_BIT * 4UL))))

/******************************************************************************************
************************************14 PIOSCCAL *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PIOSCCAL    ((BITBANDING_PIOSCCAL_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PIOSCCAL_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PIOSCCAL_UPDATE    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PIOSCCAL_OFFSET) * 32UL) + (SYSCTL_PIOSCCAL_R_UPDATE_BIT * 4UL))))
#define SYSCTL_BITBANDING_PIOSCCAL_CAL    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PIOSCCAL_OFFSET) * 32UL) + (SYSCTL_PIOSCCAL_R_CAL_BIT * 4UL))))
#define SYSCTL_BITBANDING_PIOSCCAL_UTEN    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PIOSCCAL_OFFSET) * 32UL) + (SYSCTL_PIOSCCAL_R_UTEN_BIT * 4UL))))

/******************************************************************************************
************************************15 PIOSCSTAT *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PIOSCSTAT    ((BITBANDING_PIOSCSTAT_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PIOSCSTAT_OFFSET) * 32UL)))

/******************************************************************************************
************************************16 PLLFREQ0 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PLLFREQ0    ((BITBANDING_PLLFREQ0_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PLLFREQ0_OFFSET) * 32UL)))

/******************************************************************************************
************************************17 PLLFREQ1 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PLLFREQ1    ((BITBANDING_PLLFREQ1_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PLLFREQ1_OFFSET) * 32UL)))

/******************************************************************************************
************************************18 PLLSTAT *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PLLSTAT    ((BITBANDING_PLLSTAT_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PLLSTAT_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PLLSTAT_LOCK    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PLLSTAT_OFFSET) * 32UL) + (SYSCTL_PLLSTAT_R_LOCK_BIT * 4UL))))

/******************************************************************************************
************************************19 SLSRWRCFG *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SLSRWRCFG    ((BITBANDING_SLSRWRCFG_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SLSRWRCFG_OFFSET) * 32UL)))

/******************************************************************************************
************************************20 DSLSRWRCFG *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DSLSRWRCFG    ((BITBANDING_DSLSRWRCFG_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DSLSRWRCFG_OFFSET) * 32UL)))

/******************************************************************************************
************************************21 LDOSPCTL *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_LDOSPCTL    ((BITBANDING_LDOSPCTL_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_LDOSPCTL_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_LDOSPCTL_VADJEN    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_LDOSPCTL_OFFSET) * 32UL) + (SYSCTL_LDOSPCTL_R_VADJEN_BIT * 4UL))))

/******************************************************************************************
************************************22 LDOSPCAL *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_LDOSPCAL    ((BITBANDING_LDOSPCAL_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_LDOSPCAL_OFFSET) * 32UL)))

/******************************************************************************************
************************************23 LDODPCTL *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_LDODPCTL    ((BITBANDING_LDODPCTL_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_LDODPCTL_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_LDODPCTL_VADJEN    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_LDODPCTL_OFFSET) * 32UL) + (SYSCTL_LDODPCTL_R_VADJEN_BIT * 4UL))))

/******************************************************************************************
************************************24 LDODPCAL *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_LDODPCAL    ((BITBANDING_LDODPCAL_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_LDODPCAL_OFFSET) * 32UL)))

/******************************************************************************************
************************************25 SDPMST *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SDPMST    ((BITBANDING_SDPMST_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SDPMST_SPDERR    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_SPDERR_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_FPDERR    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_FPDERR_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_SRDERR    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_SRDERR_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_LDMINERR (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_LDMINERR_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_LSMINERR (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_LSMINERR_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_LMAXERR    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_LMAXERR_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_SRDW    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_SRDW_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_PRACT    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_PRACT_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_LOWPWR    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_LOWPWR_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_FLASHLP    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_FLASHLP_BIT * 4UL))))
#define SYSCTL_BITBANDING_SDPMST_LDOUA    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SDPMST_OFFSET) * 32UL) + (SYSCTL_SDPMST_R_LDOUA_BIT * 4UL))))

/******************************************************************************************
************************************26 PPWD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPWD    ((BITBANDING_PERIPHERAL_WD_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPWD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPWD_WDT0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPWD_OFFSET) * 32UL) + (SYSCTL_PPWD_R_WDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPWD_WDT1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPWD_OFFSET) * 32UL) + (SYSCTL_PPWD_R_WDT1_BIT * 4UL))))

/******************************************************************************************
************************************27 PPTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPTIMER    ((BITBANDING_PERIPHERAL_TIMER_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPTIMER_TIMER0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPTIMER_OFFSET) * 32UL) + (SYSCTL_PPTIMER_R_TIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPTIMER_TIMER1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPTIMER_OFFSET) * 32UL) + (SYSCTL_PPTIMER_R_TIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPTIMER_TIMER2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPTIMER_OFFSET) * 32UL) + (SYSCTL_PPTIMER_R_TIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPTIMER_TIMER3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPTIMER_OFFSET) * 32UL) + (SYSCTL_PPTIMER_R_TIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPTIMER_TIMER4    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPTIMER_OFFSET) * 32UL) + (SYSCTL_PPTIMER_R_TIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPTIMER_TIMER5    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPTIMER_OFFSET) * 32UL) + (SYSCTL_PPTIMER_R_TIMER5_BIT * 4UL))))

/******************************************************************************************
************************************28 PPGPIO *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPGPIO    ((BITBANDING_PERIPHERAL_GPIO_BITBANDING_TypeDef*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOA    (*((volatile const uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOA_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOB    (*((volatile const uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOB_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOC    (*((volatile const uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOC_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOD    (*((volatile const uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOD_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOE    (*((volatile const uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOE_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOF    (*((volatile const uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOF_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOG    (*((volatile const uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOG_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOH    (*((volatile const uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOH_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOJ    (*((volatile const uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOJ_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOK    (*((volatile const uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOK_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOL    (*((volatile const uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOL_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOM    (*((volatile const uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOM_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPION    (*((volatile const uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPION_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOP    (*((volatile const uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOP_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPGPIO_BITBANDING_GPIOQ    (*((volatile const uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PPGPIO_OFFSET) * 32UL) + (SYSCTL_PPGPIO_R_GPIOQ_BIT * 4UL))))

/******************************************************************************************
************************************29 PPDMA *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPDMA    ((BITBANDING_PERIPHERAL_DMA_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPDMA_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPDMA_UDMA    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPDMA_OFFSET) * 32UL) + (SYSCTL_PPDMA_R_UDMA_BIT * 4UL))))

/******************************************************************************************
************************************30 PPHIB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPHIB    ((BITBANDING_PERIPHERAL_HIB_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPHIB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPHIB_HIB    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPHIB_OFFSET) * 32UL) + (SYSCTL_PPHIB_R_HIB_BIT * 4UL))))

/******************************************************************************************
************************************31 PPUART *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPUART    ((BITBANDING_PERIPHERAL_UART_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUART_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPUART_UART0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUART_OFFSET) * 32UL) + (SYSCTL_PPUART_R_UART0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPUART_UART1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUART_OFFSET) * 32UL) + (SYSCTL_PPUART_R_UART1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPUART_UART2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUART_OFFSET) * 32UL) + (SYSCTL_PPUART_R_UART2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPUART_UART3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUART_OFFSET) * 32UL) + (SYSCTL_PPUART_R_UART3_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPUART_UART4    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUART_OFFSET) * 32UL) + (SYSCTL_PPUART_R_UART4_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPUART_UART5    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUART_OFFSET) * 32UL) + (SYSCTL_PPUART_R_UART5_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPUART_UART6    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUART_OFFSET) * 32UL) + (SYSCTL_PPUART_R_UART6_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPUART_UART7    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUART_OFFSET) * 32UL) + (SYSCTL_PPUART_R_UART7_BIT * 4UL))))

/******************************************************************************************
************************************32 PPSSI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPSSI    ((BITBANDING_PERIPHERAL_SSI_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPSSI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPSSI_SSI0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPSSI_OFFSET) * 32UL) + (SYSCTL_PPSSI_R_SSI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPSSI_SSI1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPSSI_OFFSET) * 32UL) + (SYSCTL_PPSSI_R_SSI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPSSI_SSI2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPSSI_OFFSET) * 32UL) + (SYSCTL_PPSSI_R_SSI2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPSSI_SSI3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPSSI_OFFSET) * 32UL) + (SYSCTL_PPSSI_R_SSI3_BIT * 4UL))))

/******************************************************************************************
************************************33 PPI2C *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPI2C    ((BITBANDING_PERIPHERAL_I2C_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPI2C_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPI2C_I2C0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPI2C_OFFSET) * 32UL) + (SYSCTL_PPI2C_R_I2C0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPI2C_I2C1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPI2C_OFFSET) * 32UL) + (SYSCTL_PPI2C_R_I2C1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPI2C_I2C2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPI2C_OFFSET) * 32UL) + (SYSCTL_PPI2C_R_I2C2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPI2C_I2C3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPI2C_OFFSET) * 32UL) + (SYSCTL_PPI2C_R_I2C3_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPI2C_I2C4    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPI2C_OFFSET) * 32UL) + (SYSCTL_PPI2C_R_I2C4_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPI2C_I2C5    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPI2C_OFFSET) * 32UL) + (SYSCTL_PPI2C_R_I2C5_BIT * 4UL))))

/******************************************************************************************
************************************34 PPUSB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPUSB    ((BITBANDING_PERIPHERAL_USB_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUSB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPUSB_USB    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPUSB_OFFSET) * 32UL) + (SYSCTL_PPUSB_R_USB_BIT * 4UL))))

/******************************************************************************************
************************************35 PPCAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPCAN    ((BITBANDING_PERIPHERAL_CAN_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPCAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPCAN_CAN0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPCAN_OFFSET) * 32UL) + (SYSCTL_PPCAN_R_CAN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPCAN_CAN1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPCAN_OFFSET) * 32UL) + (SYSCTL_PPCAN_R_CAN1_BIT * 4UL))))

/******************************************************************************************
************************************36 PPADC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPADC    ((BITBANDING_PERIPHERAL_ADC_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPADC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPADC_ADC0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPADC_OFFSET) * 32UL) + (SYSCTL_PPADC_R_ADC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPADC_ADC1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPADC_OFFSET) * 32UL) + (SYSCTL_PPADC_R_ADC1_BIT * 4UL))))

/******************************************************************************************
************************************37 PPACMP *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPACMP    ((BITBANDING_PERIPHERAL_ACMP_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPACMP_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPACMP_ACMP    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPACMP_OFFSET) * 32UL) + (SYSCTL_PPACMP_R_ACMP_BIT * 4UL))))

/****************************************************************************************
************************************38 PPPWM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPPWM    ((BITBANDING_PERIPHERAL_PWM_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPPWM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPPWM_PWM0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPPWM_OFFSET) * 32UL) + (SYSCTL_PPPWM_R_PWM0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPPWM_PWM1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPPWM_OFFSET) * 32UL) + (SYSCTL_PPPWM_R_PWM1_BIT * 4UL))))

/******************************************************************************************
************************************39 PPQEI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPQEI    ((BITBANDING_PERIPHERAL_QEI_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPQEI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPQEI_QEI0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPQEI_OFFSET) * 32UL) + (SYSCTL_PPQEI_R_QEI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPQEI_QEI1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPQEI_OFFSET) * 32UL) + (SYSCTL_PPQEI_R_QEI1_BIT * 4UL))))

/******************************************************************************************
************************************40 PPEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPEEPROM    ((BITBANDING_PERIPHERAL_EEPROM_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPEEPROM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPEEPROM_EEPROM    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPEEPROM_OFFSET) * 32UL) + (SYSCTL_PPEEPROM_R_EEPROM_BIT * 4UL))))

/**********************************************************************************
************************************41 PPWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PPWTIMER    ((BITBANDING_PERIPHERAL_WTIMER_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPWTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PPWTIMER_WTIMER0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPWTIMER_OFFSET) * 32UL) + (SYSCTL_PPWTIMER_R_WTIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPWTIMER_WTIMER1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPWTIMER_OFFSET) * 32UL) + (SYSCTL_PPWTIMER_R_WTIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPWTIMER_WTIMER2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPWTIMER_OFFSET) * 32UL) + (SYSCTL_PPWTIMER_R_WTIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPWTIMER_WTIMER3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPWTIMER_OFFSET) * 32UL) + (SYSCTL_PPWTIMER_R_WTIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPWTIMER_WTIMER4    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPWTIMER_OFFSET) * 32UL) + (SYSCTL_PPWTIMER_R_WTIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_PPWTIMER_WTIMER5    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PPWTIMER_OFFSET) * 32UL) + (SYSCTL_PPWTIMER_R_WTIMER5_BIT * 4UL))))

/******************************************************************************************
************************************42 SRWD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRWD    ((BITBANDING_PERIPHERAL_WD_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRWD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRWD_WDT0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRWD_OFFSET) * 32UL) + (SYSCTL_SRWD_R_WDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRWD_WDT1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRWD_OFFSET) * 32UL) + (SYSCTL_SRWD_R_WDT1_BIT * 4UL))))

/******************************************************************************************
************************************43 SRTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRTIMER    ((BITBANDING_PERIPHERAL_TIMER_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRTIMER_TIMER0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRTIMER_OFFSET) * 32UL) + (SYSCTL_SRTIMER_R_TIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRTIMER_TIMER1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRTIMER_OFFSET) * 32UL) + (SYSCTL_SRTIMER_R_TIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRTIMER_TIMER2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRTIMER_OFFSET) * 32UL) + (SYSCTL_SRTIMER_R_TIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRTIMER_TIMER3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRTIMER_OFFSET) * 32UL) + (SYSCTL_SRTIMER_R_TIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRTIMER_TIMER4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRTIMER_OFFSET) * 32UL) + (SYSCTL_SRTIMER_R_TIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRTIMER_TIMER5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRTIMER_OFFSET) * 32UL) + (SYSCTL_SRTIMER_R_TIMER5_BIT * 4UL))))

/******************************************************************************************
************************************44 SRGPIO *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRGPIO    ((BITBANDING_PERIPHERAL_GPIO_BITBANDING_TypeDef*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOA    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOA_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOB    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOB_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOC    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOC_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOD    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOD_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOE    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOE_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOF    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOF_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOG    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOG_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOH    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOH_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOJ    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOJ_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOK    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOK_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOL    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOL_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOM    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOM_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPION    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPION_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOP    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOP_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRGPIO_BITBANDING_GPIOQ    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SRGPIO_OFFSET) * 32UL) + (SYSCTL_SRGPIO_R_GPIOQ_BIT * 4UL))))

/******************************************************************************************
************************************45 SRDMA *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRDMA    ((BITBANDING_PERIPHERAL_DMA_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRDMA_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRDMA_UDMA    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRDMA_OFFSET) * 32UL) + (SYSCTL_SRDMA_R_UDMA_BIT * 4UL))))

/******************************************************************************************
************************************46 SRHIB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRHIB    ((BITBANDING_PERIPHERAL_HIB_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRHIB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRHIB_HIB    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRHIB_OFFSET) * 32UL) + (SYSCTL_SRHIB_R_HIB_BIT * 4UL))))

/******************************************************************************************
************************************47 SRUART *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRUART    ((BITBANDING_PERIPHERAL_UART_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUART_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRUART_UART0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUART_OFFSET) * 32UL) + (SYSCTL_SRUART_R_UART0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRUART_UART1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUART_OFFSET) * 32UL) + (SYSCTL_SRUART_R_UART1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRUART_UART2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUART_OFFSET) * 32UL) + (SYSCTL_SRUART_R_UART2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRUART_UART3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUART_OFFSET) * 32UL) + (SYSCTL_SRUART_R_UART3_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRUART_UART4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUART_OFFSET) * 32UL) + (SYSCTL_SRUART_R_UART4_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRUART_UART5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUART_OFFSET) * 32UL) + (SYSCTL_SRUART_R_UART5_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRUART_UART6    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUART_OFFSET) * 32UL) + (SYSCTL_SRUART_R_UART6_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRUART_UART7    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUART_OFFSET) * 32UL) + (SYSCTL_SRUART_R_UART7_BIT * 4UL))))

/******************************************************************************************
************************************48 SRSSI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRSSI    ((BITBANDING_PERIPHERAL_SSI_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRSSI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRSSI_SSI0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRSSI_OFFSET) * 32UL) + (SYSCTL_SRSSI_R_SSI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRSSI_SSI1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRSSI_OFFSET) * 32UL) + (SYSCTL_SRSSI_R_SSI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRSSI_SSI2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRSSI_OFFSET) * 32UL) + (SYSCTL_SRSSI_R_SSI2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRSSI_SSI3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRSSI_OFFSET) * 32UL) + (SYSCTL_SRSSI_R_SSI3_BIT * 4UL))))

/******************************************************************************************
************************************49 SRI2C *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRI2C    ((BITBANDING_PERIPHERAL_I2C_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRI2C_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRI2C_I2C0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRI2C_OFFSET) * 32UL) + (SYSCTL_SRI2C_R_I2C0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRI2C_I2C1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRI2C_OFFSET) * 32UL) + (SYSCTL_SRI2C_R_I2C1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRI2C_I2C2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRI2C_OFFSET) * 32UL) + (SYSCTL_SRI2C_R_I2C2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRI2C_I2C3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRI2C_OFFSET) * 32UL) + (SYSCTL_SRI2C_R_I2C3_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRI2C_I2C4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRI2C_OFFSET) * 32UL) + (SYSCTL_SRI2C_R_I2C4_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRI2C_I2C5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRI2C_OFFSET) * 32UL) + (SYSCTL_SRI2C_R_I2C5_BIT * 4UL))))

/******************************************************************************************
************************************50 SRUSB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRUSB    ((BITBANDING_PERIPHERAL_USB_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUSB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRUSB_USB    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRUSB_OFFSET) * 32UL) + (SYSCTL_SRUSB_R_USB_BIT * 4UL))))

/******************************************************************************************
************************************51 SRCAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRCAN    ((BITBANDING_PERIPHERAL_CAN_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRCAN_CAN0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCAN_OFFSET) * 32UL) + (SYSCTL_SRCAN_R_CAN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCAN_CAN1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCAN_OFFSET) * 32UL) + (SYSCTL_SRCAN_R_CAN1_BIT * 4UL))))

/******************************************************************************************
************************************52 SRADC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRADC    ((BITBANDING_PERIPHERAL_ADC_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRADC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRADC_ADC0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRADC_OFFSET) * 32UL) + (SYSCTL_SRADC_R_ADC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRADC_ADC1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRADC_OFFSET) * 32UL) + (SYSCTL_SRADC_R_ADC1_BIT * 4UL))))

/******************************************************************************************
************************************53 SRACMP *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRACMP    ((BITBANDING_PERIPHERAL_ACMP_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRACMP_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRACMP_ACMP    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRACMP_OFFSET) * 32UL) + (SYSCTL_SRACMP_R_ACMP_BIT * 4UL))))

/****************************************************************************************
************************************54 SRPWM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRPWM    ((BITBANDING_PERIPHERAL_PWM_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRPWM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRPWM_PWM0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRPWM_OFFSET) * 32UL) + (SYSCTL_SRPWM_R_PWM0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRPWM_PWM1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRPWM_OFFSET) * 32UL) + (SYSCTL_SRPWM_R_PWM1_BIT * 4UL))))

/******************************************************************************************
************************************55 SRQEI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRQEI    ((BITBANDING_PERIPHERAL_QEI_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRQEI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRQEI_QEI0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRQEI_OFFSET) * 32UL) + (SYSCTL_SRQEI_R_QEI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRQEI_QEI1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRQEI_OFFSET) * 32UL) + (SYSCTL_SRQEI_R_QEI1_BIT * 4UL))))

/******************************************************************************************
************************************56 SREEPROM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SREEPROM    ((BITBANDING_PERIPHERAL_EEPROM_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SREEPROM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SREEPROM_EEPROM    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SREEPROM_OFFSET) * 32UL) + (SYSCTL_SREEPROM_R_EEPROM_BIT * 4UL))))

/**********************************************************************************
************************************57 SRWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRWTIMER    ((BITBANDING_PERIPHERAL_WTIMER_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRWTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRWTIMER_WTIMER0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRWTIMER_OFFSET) * 32UL) + (SYSCTL_SRWTIMER_R_WTIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRWTIMER_WTIMER1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRWTIMER_OFFSET) * 32UL) + (SYSCTL_SRWTIMER_R_WTIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRWTIMER_WTIMER2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRWTIMER_OFFSET) * 32UL) + (SYSCTL_SRWTIMER_R_WTIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRWTIMER_WTIMER3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRWTIMER_OFFSET) * 32UL) + (SYSCTL_SRWTIMER_R_WTIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRWTIMER_WTIMER4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRWTIMER_OFFSET) * 32UL) + (SYSCTL_SRWTIMER_R_WTIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRWTIMER_WTIMER5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRWTIMER_OFFSET) * 32UL) + (SYSCTL_SRWTIMER_R_WTIMER5_BIT * 4UL))))

/******************************************************************************************
************************************58 RCGCWD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCWD    ((BITBANDING_PERIPHERAL_WD_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCWD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCWD_WDT0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCWD_OFFSET) * 32UL) + (SYSCTL_RCGCWD_R_WDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCWD_WDT1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCWD_OFFSET) * 32UL) + (SYSCTL_RCGCWD_R_WDT1_BIT * 4UL))))

/******************************************************************************************
************************************59 RCGCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCTIMER    ((BITBANDING_PERIPHERAL_TIMER_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCTIMER_TIMER0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCTIMER_R_TIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCTIMER_TIMER1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCTIMER_R_TIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCTIMER_TIMER2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCTIMER_R_TIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCTIMER_TIMER3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCTIMER_R_TIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCTIMER_TIMER4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCTIMER_R_TIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCTIMER_TIMER5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCTIMER_R_TIMER5_BIT * 4UL))))

/******************************************************************************************
************************************60 RCGCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCGPIO    ((BITBANDING_PERIPHERAL_GPIO_BITBANDING_TypeDef*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOA    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOA_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOB    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOB_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOC    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOC_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOD    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOD_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOE    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOE_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOF    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOF_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOG    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOG_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOH    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOH_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOJ    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOJ_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOK    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOK_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOL    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOL_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOM    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOM_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPION    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPION_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOP    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOP_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCGPIO_BITBANDING_GPIOQ    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_RCGCGPIO_OFFSET) * 32UL) + (SYSCTL_RCGCGPIO_R_GPIOQ_BIT * 4UL))))

/******************************************************************************************
************************************61 RCGCDMA *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCDMA    ((BITBANDING_PERIPHERAL_DMA_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCDMA_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCDMA_UDMA    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCDMA_OFFSET) * 32UL) + (SYSCTL_RCGCDMA_R_UDMA_BIT * 4UL))))

/******************************************************************************************
************************************62 RCGCHIB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCHIB    ((BITBANDING_PERIPHERAL_HIB_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCHIB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCHIB_HIB    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCHIB_OFFSET) * 32UL) + (SYSCTL_RCGCHIB_R_HIB_BIT * 4UL))))

/******************************************************************************************
************************************63 RCGCUART *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCUART    ((BITBANDING_PERIPHERAL_UART_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUART_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCUART_UART0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUART_OFFSET) * 32UL) + (SYSCTL_RCGCUART_R_UART0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCUART_UART1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUART_OFFSET) * 32UL) + (SYSCTL_RCGCUART_R_UART1_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCUART_UART2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUART_OFFSET) * 32UL) + (SYSCTL_RCGCUART_R_UART2_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCUART_UART3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUART_OFFSET) * 32UL) + (SYSCTL_RCGCUART_R_UART3_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCUART_UART4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUART_OFFSET) * 32UL) + (SYSCTL_RCGCUART_R_UART4_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCUART_UART5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUART_OFFSET) * 32UL) + (SYSCTL_RCGCUART_R_UART5_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCUART_UART6    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUART_OFFSET) * 32UL) + (SYSCTL_RCGCUART_R_UART6_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCUART_UART7    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUART_OFFSET) * 32UL) + (SYSCTL_RCGCUART_R_UART7_BIT * 4UL))))

/******************************************************************************************
************************************64 RCGCSSI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCSSI    ((BITBANDING_PERIPHERAL_SSI_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCSSI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCSSI_SSI0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCSSI_OFFSET) * 32UL) + (SYSCTL_RCGCSSI_R_SSI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCSSI_SSI1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCSSI_OFFSET) * 32UL) + (SYSCTL_RCGCSSI_R_SSI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCSSI_SSI2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCSSI_OFFSET) * 32UL) + (SYSCTL_RCGCSSI_R_SSI2_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCSSI_SSI3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCSSI_OFFSET) * 32UL) + (SYSCTL_RCGCSSI_R_SSI3_BIT * 4UL))))

/******************************************************************************************
************************************65 RCGCI2C *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCI2C    ((BITBANDING_PERIPHERAL_I2C_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCI2C_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCI2C_I2C0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCI2C_OFFSET) * 32UL) + (SYSCTL_RCGCI2C_R_I2C0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCI2C_OFFSET) * 32UL) + (SYSCTL_RCGCI2C_R_I2C1_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCI2C_OFFSET) * 32UL) + (SYSCTL_RCGCI2C_R_I2C2_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCI2C_OFFSET) * 32UL) + (SYSCTL_RCGCI2C_R_I2C3_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCI2C_OFFSET) * 32UL) + (SYSCTL_RCGCI2C_R_I2C4_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCI2C_I2C5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCI2C_OFFSET) * 32UL) + (SYSCTL_RCGCI2C_R_I2C5_BIT * 4UL))))

/******************************************************************************************
************************************66 RCGCUSB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCUSB    ((BITBANDING_PERIPHERAL_USB_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUSB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCUSB_USB    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCUSB_OFFSET) * 32UL) + (SYSCTL_RCGCUSB_R_USB_BIT * 4UL))))

/******************************************************************************************
************************************67 RCGCCAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCCAN    ((BITBANDING_PERIPHERAL_CAN_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCCAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCCAN_CAN0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCCAN_OFFSET) * 32UL) + (SYSCTL_RCGCCAN_R_CAN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCCAN_CAN1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCCAN_OFFSET) * 32UL) + (SYSCTL_RCGCCAN_R_CAN1_BIT * 4UL))))

/******************************************************************************************
************************************68 RCGCADC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCADC    ((BITBANDING_PERIPHERAL_ADC_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCADC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCADC_ADC0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCADC_OFFSET) * 32UL) + (SYSCTL_RCGCADC_R_ADC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCADC_ADC1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCADC_OFFSET) * 32UL) + (SYSCTL_RCGCADC_R_ADC1_BIT * 4UL))))

/******************************************************************************************
************************************69 RCGCACMP *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCACMP    ((BITBANDING_PERIPHERAL_ACMP_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCACMP_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCACMP_ACMP    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCACMP_OFFSET) * 32UL) + (SYSCTL_RCGCACMP_R_ACMP_BIT * 4UL))))

/****************************************************************************************
************************************70 RCGCPWM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCPWM    ((BITBANDING_PERIPHERAL_PWM_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCPWM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCPWM_PWM0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCPWM_OFFSET) * 32UL) + (SYSCTL_RCGCPWM_R_PWM0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCPWM_PWM1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCPWM_OFFSET) * 32UL) + (SYSCTL_RCGCPWM_R_PWM1_BIT * 4UL))))

/******************************************************************************************
************************************71 RCGCQEI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCQEI    ((BITBANDING_PERIPHERAL_QEI_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCQEI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCQEI_QEI0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCQEI_OFFSET) * 32UL) + (SYSCTL_RCGCQEI_R_QEI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCQEI_QEI1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCQEI_OFFSET) * 32UL) + (SYSCTL_RCGCQEI_R_QEI1_BIT * 4UL))))

/******************************************************************************************
************************************72 RCGCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCEEPROM    ((BITBANDING_PERIPHERAL_EEPROM_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCEEPROM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCEEPROM_EEPROM    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCEEPROM_OFFSET) * 32UL) + (SYSCTL_RCGCEEPROM_R_EEPROM_BIT * 4UL))))

/**********************************************************************************
************************************73 RCGCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGCWTIMER    ((BITBANDING_PERIPHERAL_WTIMER_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCWTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGCWTIMER_WTIMER0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCWTIMER_R_WTIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCWTIMER_WTIMER1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCWTIMER_R_WTIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCWTIMER_WTIMER2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCWTIMER_R_WTIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCWTIMER_WTIMER3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCWTIMER_R_WTIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCWTIMER_WTIMER4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCWTIMER_R_WTIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGCWTIMER_WTIMER5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_RCGCWTIMER_R_WTIMER5_BIT * 4UL))))

/******************************************************************************************
************************************74 SCGCWD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCWD    ((BITBANDING_PERIPHERAL_WD_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCWD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCWD_WDT0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCWD_OFFSET) * 32UL) + (SYSCTL_SCGCWD_R_WDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCWD_WDT1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCWD_OFFSET) * 32UL) + (SYSCTL_SCGCWD_R_WDT1_BIT * 4UL))))

/******************************************************************************************
************************************75 SCGCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCTIMER    ((BITBANDING_PERIPHERAL_TIMER_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCTIMER_TIMER0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCTIMER_R_TIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCTIMER_TIMER1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCTIMER_R_TIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCTIMER_TIMER2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCTIMER_R_TIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCTIMER_TIMER3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCTIMER_R_TIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCTIMER_TIMER4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCTIMER_R_TIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCTIMER_TIMER5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCTIMER_R_TIMER5_BIT * 4UL))))

/******************************************************************************************
************************************76 SCGCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCGPIO    ((BITBANDING_PERIPHERAL_GPIO_BITBANDING_TypeDef*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOA    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOA_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOB    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOB_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOC    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOC_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOD    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOD_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOE    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOE_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOF    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOF_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOG    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOG_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOH    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOH_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOJ    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOJ_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOK    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOK_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOL    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOL_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOM    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOM_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPION    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPION_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOP    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOP_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCGPIO_BITBANDING_GPIOQ    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_SCGCGPIO_OFFSET) * 32UL) + (SYSCTL_SCGCGPIO_R_GPIOQ_BIT * 4UL))))

/******************************************************************************************
************************************77 SCGCDMA *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCDMA    ((BITBANDING_PERIPHERAL_DMA_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCDMA_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCDMA_UDMA    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCDMA_OFFSET) * 32UL) + (SYSCTL_SCGCDMA_R_UDMA_BIT * 4UL))))

/******************************************************************************************
************************************78 SCGCHIB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCHIB    ((BITBANDING_PERIPHERAL_HIB_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCHIB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCHIB_HIB    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCHIB_OFFSET) * 32UL) + (SYSCTL_SCGCHIB_R_HIB_BIT * 4UL))))

/******************************************************************************************
************************************79 SCGCUART *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCUART    ((BITBANDING_PERIPHERAL_UART_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUART_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCUART_UART0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUART_OFFSET) * 32UL) + (SYSCTL_SCGCUART_R_UART0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCUART_UART1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUART_OFFSET) * 32UL) + (SYSCTL_SCGCUART_R_UART1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCUART_UART2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUART_OFFSET) * 32UL) + (SYSCTL_SCGCUART_R_UART2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCUART_UART3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUART_OFFSET) * 32UL) + (SYSCTL_SCGCUART_R_UART3_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCUART_UART4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUART_OFFSET) * 32UL) + (SYSCTL_SCGCUART_R_UART4_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCUART_UART5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUART_OFFSET) * 32UL) + (SYSCTL_SCGCUART_R_UART5_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCUART_UART6    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUART_OFFSET) * 32UL) + (SYSCTL_SCGCUART_R_UART6_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCUART_UART7    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUART_OFFSET) * 32UL) + (SYSCTL_SCGCUART_R_UART7_BIT * 4UL))))

/******************************************************************************************
************************************80 SCGCSSI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCSSI    ((BITBANDING_PERIPHERAL_SSI_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCSSI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCSSI_SSI0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCSSI_OFFSET) * 32UL) + (SYSCTL_SCGCSSI_R_SSI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCSSI_SSI1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCSSI_OFFSET) * 32UL) + (SYSCTL_SCGCSSI_R_SSI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCSSI_SSI2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCSSI_OFFSET) * 32UL) + (SYSCTL_SCGCSSI_R_SSI2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCSSI_SSI3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCSSI_OFFSET) * 32UL) + (SYSCTL_SCGCSSI_R_SSI3_BIT * 4UL))))

/******************************************************************************************
************************************81 SCGCI2C *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCI2C    ((BITBANDING_PERIPHERAL_I2C_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCI2C_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCI2C_I2C0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCI2C_OFFSET) * 32UL) + (SYSCTL_SCGCI2C_R_I2C0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCI2C_OFFSET) * 32UL) + (SYSCTL_SCGCI2C_R_I2C1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCI2C_OFFSET) * 32UL) + (SYSCTL_SCGCI2C_R_I2C2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCI2C_OFFSET) * 32UL) + (SYSCTL_SCGCI2C_R_I2C3_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCI2C_OFFSET) * 32UL) + (SYSCTL_SCGCI2C_R_I2C4_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCI2C_I2C5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCI2C_OFFSET) * 32UL) + (SYSCTL_SCGCI2C_R_I2C5_BIT * 4UL))))

/******************************************************************************************
************************************82 SCGCUSB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCUSB    ((BITBANDING_PERIPHERAL_USB_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUSB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCUSB_USB    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCUSB_OFFSET) * 32UL) + (SYSCTL_SCGCUSB_R_USB_BIT * 4UL))))

/******************************************************************************************
************************************83 SCGCCAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCCAN    ((BITBANDING_PERIPHERAL_CAN_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCCAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCCAN_CAN0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCCAN_OFFSET) * 32UL) + (SYSCTL_SCGCCAN_R_CAN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCCAN_CAN1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCCAN_OFFSET) * 32UL) + (SYSCTL_SCGCCAN_R_CAN1_BIT * 4UL))))

/******************************************************************************************
************************************84 SCGCADC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCADC    ((BITBANDING_PERIPHERAL_ADC_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCADC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCADC_ADC0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCADC_OFFSET) * 32UL) + (SYSCTL_SCGCADC_R_ADC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCADC_ADC1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCADC_OFFSET) * 32UL) + (SYSCTL_SCGCADC_R_ADC1_BIT * 4UL))))

/******************************************************************************************
************************************85 SCGCACMP *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCACMP    ((BITBANDING_PERIPHERAL_ACMP_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCACMP_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCACMP_ACMP    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCACMP_OFFSET) * 32UL) + (SYSCTL_SCGCACMP_R_ACMP_BIT * 4UL))))

/****************************************************************************************
************************************86 SCGCPWM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCPWM    ((BITBANDING_PERIPHERAL_PWM_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCPWM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCPWM_PWM0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCPWM_OFFSET) * 32UL) + (SYSCTL_SCGCPWM_R_PWM0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCPWM_PWM1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCPWM_OFFSET) * 32UL) + (SYSCTL_SCGCPWM_R_PWM1_BIT * 4UL))))

/******************************************************************************************
************************************87 SCGCQEI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCQEI    ((BITBANDING_PERIPHERAL_QEI_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCQEI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCQEI_QEI0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCQEI_OFFSET) * 32UL) + (SYSCTL_SCGCQEI_R_QEI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCQEI_QEI1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCQEI_OFFSET) * 32UL) + (SYSCTL_SCGCQEI_R_QEI1_BIT * 4UL))))

/******************************************************************************************
************************************88 SCGCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCEEPROM    ((BITBANDING_PERIPHERAL_EEPROM_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCEEPROM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCEEPROM_EEPROM    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCEEPROM_OFFSET) * 32UL) + (SYSCTL_SCGCEEPROM_R_EEPROM_BIT * 4UL))))

/**********************************************************************************
************************************89 SCGCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGCWTIMER    ((BITBANDING_PERIPHERAL_WTIMER_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCWTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGCWTIMER_WTIMER0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCWTIMER_R_WTIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCWTIMER_WTIMER1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCWTIMER_R_WTIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCWTIMER_WTIMER2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCWTIMER_R_WTIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCWTIMER_WTIMER3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCWTIMER_R_WTIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCWTIMER_WTIMER4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCWTIMER_R_WTIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGCWTIMER_WTIMER5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_SCGCWTIMER_R_WTIMER5_BIT * 4UL))))

/******************************************************************************************
************************************90 DCGCWD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCWD    ((BITBANDING_PERIPHERAL_WD_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCWD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCWD_WDT0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCWD_OFFSET) * 32UL) + (SYSCTL_DCGCWD_R_WDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCWD_WDT1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCWD_OFFSET) * 32UL) + (SYSCTL_DCGCWD_R_WDT1_BIT * 4UL))))

/******************************************************************************************
************************************91 DCGCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCTIMER    ((BITBANDING_PERIPHERAL_TIMER_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCTIMER_TIMER0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCTIMER_R_TIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCTIMER_TIMER1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCTIMER_R_TIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCTIMER_TIMER2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCTIMER_R_TIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCTIMER_TIMER3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCTIMER_R_TIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCTIMER_TIMER4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCTIMER_R_TIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCTIMER_TIMER5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCTIMER_R_TIMER5_BIT * 4UL))))

/******************************************************************************************
************************************92 DCGCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCGPIO    ((BITBANDING_PERIPHERAL_GPIO_BITBANDING_TypeDef*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOA    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOA_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOB    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOB_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOC    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOC_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOD    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOD_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOE    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOE_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOF    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOF_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOG    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOG_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOH    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOH_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOJ    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOJ_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOK    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOK_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOL    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOL_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOM    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOM_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPION    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPION_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOP    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOP_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCGPIO_BITBANDING_GPIOQ    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_DCGCGPIO_OFFSET) * 32UL) + (SYSCTL_DCGCGPIO_R_GPIOQ_BIT * 4UL))))

/******************************************************************************************
************************************93 DCGCDMA *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCDMA    ((BITBANDING_PERIPHERAL_DMA_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCDMA_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCDMA_UDMA    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCDMA_OFFSET) * 32UL) + (SYSCTL_DCGCDMA_R_UDMA_BIT * 4UL))))

/******************************************************************************************
************************************94 DCGCHIB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCHIB    ((BITBANDING_PERIPHERAL_HIB_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCHIB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCHIB_HIB    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCHIB_OFFSET) * 32UL) + (SYSCTL_DCGCHIB_R_HIB_BIT * 4UL))))

/******************************************************************************************
************************************95 DCGCUART *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCUART    ((BITBANDING_PERIPHERAL_UART_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUART_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCUART_UART0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUART_OFFSET) * 32UL) + (SYSCTL_DCGCUART_R_UART0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCUART_UART1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUART_OFFSET) * 32UL) + (SYSCTL_DCGCUART_R_UART1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCUART_UART2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUART_OFFSET) * 32UL) + (SYSCTL_DCGCUART_R_UART2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCUART_UART3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUART_OFFSET) * 32UL) + (SYSCTL_DCGCUART_R_UART3_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCUART_UART4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUART_OFFSET) * 32UL) + (SYSCTL_DCGCUART_R_UART4_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCUART_UART5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUART_OFFSET) * 32UL) + (SYSCTL_DCGCUART_R_UART5_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCUART_UART6    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUART_OFFSET) * 32UL) + (SYSCTL_DCGCUART_R_UART6_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCUART_UART7    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUART_OFFSET) * 32UL) + (SYSCTL_DCGCUART_R_UART7_BIT * 4UL))))

/******************************************************************************************
************************************96 DCGCSSI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCSSI    ((BITBANDING_PERIPHERAL_SSI_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCSSI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCSSI_SSI0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCSSI_OFFSET) * 32UL) + (SYSCTL_DCGCSSI_R_SSI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCSSI_SSI1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCSSI_OFFSET) * 32UL) + (SYSCTL_DCGCSSI_R_SSI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCSSI_SSI2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCSSI_OFFSET) * 32UL) + (SYSCTL_DCGCSSI_R_SSI2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCSSI_SSI3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCSSI_OFFSET) * 32UL) + (SYSCTL_DCGCSSI_R_SSI3_BIT * 4UL))))

/******************************************************************************************
************************************97 DCGCI2C *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCI2C    ((BITBANDING_PERIPHERAL_I2C_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCI2C_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCI2C_I2C0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCI2C_OFFSET) * 32UL) + (SYSCTL_DCGCI2C_R_I2C0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCI2C_OFFSET) * 32UL) + (SYSCTL_DCGCI2C_R_I2C1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCI2C_OFFSET) * 32UL) + (SYSCTL_DCGCI2C_R_I2C2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCI2C_OFFSET) * 32UL) + (SYSCTL_DCGCI2C_R_I2C3_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCI2C_OFFSET) * 32UL) + (SYSCTL_DCGCI2C_R_I2C4_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCI2C_I2C5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCI2C_OFFSET) * 32UL) + (SYSCTL_DCGCI2C_R_I2C5_BIT * 4UL))))

/******************************************************************************************
************************************98 DCGCUSB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCUSB    ((BITBANDING_PERIPHERAL_USB_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUSB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCUSB_USB    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCUSB_OFFSET) * 32UL) + (SYSCTL_DCGCUSB_R_USB_BIT * 4UL))))

/******************************************************************************************
************************************99 DCGCCAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCCAN    ((BITBANDING_PERIPHERAL_CAN_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCCAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCCAN_CAN0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCCAN_OFFSET) * 32UL) + (SYSCTL_DCGCCAN_R_CAN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCCAN_CAN1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCCAN_OFFSET) * 32UL) + (SYSCTL_DCGCCAN_R_CAN1_BIT * 4UL))))

/******************************************************************************************
************************************100 DCGCADC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCADC    ((BITBANDING_PERIPHERAL_ADC_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCADC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCADC_ADC0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCADC_OFFSET) * 32UL) + (SYSCTL_DCGCADC_R_ADC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCADC_ADC1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCADC_OFFSET) * 32UL) + (SYSCTL_DCGCADC_R_ADC1_BIT * 4UL))))

/******************************************************************************************
************************************101 DCGCACMP *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCACMP    ((BITBANDING_PERIPHERAL_ACMP_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCACMP_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCACMP_ACMP    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCACMP_OFFSET) * 32UL) + (SYSCTL_DCGCACMP_R_ACMP_BIT * 4UL))))

/****************************************************************************************
************************************102 DCGCPWM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCPWM    ((BITBANDING_PERIPHERAL_PWM_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCPWM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCPWM_PWM0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCPWM_OFFSET) * 32UL) + (SYSCTL_DCGCPWM_R_PWM0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCPWM_PWM1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCPWM_OFFSET) * 32UL) + (SYSCTL_DCGCPWM_R_PWM1_BIT * 4UL))))

/******************************************************************************************
************************************103 DCGCQEI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCQEI    ((BITBANDING_PERIPHERAL_QEI_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCQEI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCQEI_QEI0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCQEI_OFFSET) * 32UL) + (SYSCTL_DCGCQEI_R_QEI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCQEI_QEI1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCQEI_OFFSET) * 32UL) + (SYSCTL_DCGCQEI_R_QEI1_BIT * 4UL))))

/******************************************************************************************
************************************104 DCGCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCEEPROM    ((BITBANDING_PERIPHERAL_EEPROM_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCEEPROM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCEEPROM_EEPROM    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCEEPROM_OFFSET) * 32UL) + (SYSCTL_DCGCEEPROM_R_EEPROM_BIT * 4UL))))

/**********************************************************************************
************************************105 DCGCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGCWTIMER    ((BITBANDING_PERIPHERAL_WTIMER_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCWTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGCWTIMER_WTIMER0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCWTIMER_R_WTIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCWTIMER_WTIMER1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCWTIMER_R_WTIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCWTIMER_WTIMER2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCWTIMER_R_WTIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCWTIMER_WTIMER3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCWTIMER_R_WTIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCWTIMER_WTIMER4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCWTIMER_R_WTIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGCWTIMER_WTIMER5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGCWTIMER_OFFSET) * 32UL) + (SYSCTL_DCGCWTIMER_R_WTIMER5_BIT * 4UL))))

/******************************************************************************************
************************************106 PRWD *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRWD    ((BITBANDING_PERIPHERAL_WD_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRWD_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRWD_WDT0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRWD_OFFSET) * 32UL) + (SYSCTL_PRWD_R_WDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRWD_WDT1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRWD_OFFSET) * 32UL) + (SYSCTL_PRWD_R_WDT1_BIT * 4UL))))

/******************************************************************************************
************************************107 PRTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRTIMER    ((BITBANDING_PERIPHERAL_TIMER_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRTIMER_TIMER0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRTIMER_OFFSET) * 32UL) + (SYSCTL_PRTIMER_R_TIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRTIMER_TIMER1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRTIMER_OFFSET) * 32UL) + (SYSCTL_PRTIMER_R_TIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRTIMER_TIMER2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRTIMER_OFFSET) * 32UL) + (SYSCTL_PRTIMER_R_TIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRTIMER_TIMER3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRTIMER_OFFSET) * 32UL) + (SYSCTL_PRTIMER_R_TIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRTIMER_TIMER4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRTIMER_OFFSET) * 32UL) + (SYSCTL_PRTIMER_R_TIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRTIMER_TIMER5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRTIMER_OFFSET) * 32UL) + (SYSCTL_PRTIMER_R_TIMER5_BIT * 4UL))))

/******************************************************************************************
************************************108 PRGPIO *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRGPIO    ((BITBANDING_PERIPHERAL_GPIO_BITBANDING_TypeDef*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOA    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOA_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOB    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOB_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOC    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOC_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOD    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOD_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOE    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOE_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOF    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOF_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOG    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOG_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOH    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOH_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOJ    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOJ_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOK    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOK_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOL    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOL_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOM    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOM_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPION    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPION_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOP    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOP_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRGPIO_BITBANDING_GPIOQ    (*((volatile uint32_t*) (SYSCTL_BASE  + (SYSCTL_OFFSET + SYSCTL_PRGPIO_OFFSET) * 32UL) + (SYSCTL_PRGPIO_R_GPIOQ_BIT * 4UL))))

/******************************************************************************************
************************************109 PRDMA *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRDMA    ((BITBANDING_PERIPHERAL_DMA_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRDMA_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRDMA_UDMA    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRDMA_OFFSET) * 32UL) + (SYSCTL_PRDMA_R_UDMA_BIT * 4UL))))

/******************************************************************************************
************************************110 PRHIB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRHIB    ((BITBANDING_PERIPHERAL_HIB_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRHIB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRHIB_HIB    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRHIB_OFFSET) * 32UL) + (SYSCTL_PRHIB_R_HIB_BIT * 4UL))))

/******************************************************************************************
************************************111 PRUART *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRUART    ((BITBANDING_PERIPHERAL_UART_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUART_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRUART_UART0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUART_OFFSET) * 32UL) + (SYSCTL_PRUART_R_UART0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRUART_UART1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUART_OFFSET) * 32UL) + (SYSCTL_PRUART_R_UART1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRUART_UART2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUART_OFFSET) * 32UL) + (SYSCTL_PRUART_R_UART2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRUART_UART3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUART_OFFSET) * 32UL) + (SYSCTL_PRUART_R_UART3_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRUART_UART4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUART_OFFSET) * 32UL) + (SYSCTL_PRUART_R_UART4_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRUART_UART5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUART_OFFSET) * 32UL) + (SYSCTL_PRUART_R_UART5_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRUART_UART6    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUART_OFFSET) * 32UL) + (SYSCTL_PRUART_R_UART6_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRUART_UART7    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUART_OFFSET) * 32UL) + (SYSCTL_PRUART_R_UART7_BIT * 4UL))))

/******************************************************************************************
************************************112 PRSSI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRSSI    ((BITBANDING_PERIPHERAL_SSI_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRSSI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRSSI_SSI0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRSSI_OFFSET) * 32UL) + (SYSCTL_PRSSI_R_SSI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRSSI_SSI1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRSSI_OFFSET) * 32UL) + (SYSCTL_PRSSI_R_SSI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRSSI_SSI2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRSSI_OFFSET) * 32UL) + (SYSCTL_PRSSI_R_SSI2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRSSI_SSI3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRSSI_OFFSET) * 32UL) + (SYSCTL_PRSSI_R_SSI3_BIT * 4UL))))

/******************************************************************************************
************************************113 PRI2C *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRI2C    ((BITBANDING_PERIPHERAL_I2C_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRI2C_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRI2C_I2C0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRI2C_OFFSET) * 32UL) + (SYSCTL_PRI2C_R_I2C0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRI2C_I2C1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRI2C_OFFSET) * 32UL) + (SYSCTL_PRI2C_R_I2C1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRI2C_I2C2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRI2C_OFFSET) * 32UL) + (SYSCTL_PRI2C_R_I2C2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRI2C_I2C3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRI2C_OFFSET) * 32UL) + (SYSCTL_PRI2C_R_I2C3_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRI2C_I2C4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRI2C_OFFSET) * 32UL) + (SYSCTL_PRI2C_R_I2C4_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRI2C_I2C5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRI2C_OFFSET) * 32UL) + (SYSCTL_PRI2C_R_I2C5_BIT * 4UL))))

/******************************************************************************************
************************************114 PRUSB *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRUSB    ((BITBANDING_PERIPHERAL_USB_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUSB_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRUSB_USB    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRUSB_OFFSET) * 32UL) + (SYSCTL_PRUSB_R_USB_BIT * 4UL))))

/******************************************************************************************
************************************115 PRCAN *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRCAN    ((BITBANDING_PERIPHERAL_CAN_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRCAN_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRCAN_CAN0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRCAN_OFFSET) * 32UL) + (SYSCTL_PRCAN_R_CAN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRCAN_CAN1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRCAN_OFFSET) * 32UL) + (SYSCTL_PRCAN_R_CAN1_BIT * 4UL))))

/******************************************************************************************
************************************116 PRADC *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRADC    ((BITBANDING_PERIPHERAL_ADC_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRADC_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRADC_ADC0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRADC_OFFSET) * 32UL) + (SYSCTL_PRADC_R_ADC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRADC_ADC1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRADC_OFFSET) * 32UL) + (SYSCTL_PRADC_R_ADC1_BIT * 4UL))))

/******************************************************************************************
************************************117 PRACMP *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRACMP    ((BITBANDING_PERIPHERAL_ACMP_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRACMP_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRACMP_ACMP    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRACMP_OFFSET) * 32UL) + (SYSCTL_PRACMP_R_ACMP_BIT * 4UL))))

/****************************************************************************************
************************************118 PRPWM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRPWM    ((BITBANDING_PERIPHERAL_PWM_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRPWM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRPWM_PWM0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRPWM_OFFSET) * 32UL) + (SYSCTL_PRPWM_R_PWM0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRPWM_PWM1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRPWM_OFFSET) * 32UL) + (SYSCTL_PRPWM_R_PWM1_BIT * 4UL))))

/******************************************************************************************
************************************119 PRQEI *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRQEI    ((BITBANDING_PERIPHERAL_QEI_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRQEI_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRQEI_QEI0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRQEI_OFFSET) * 32UL) + (SYSCTL_PRQEI_R_QEI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRQEI_QEI1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRQEI_OFFSET) * 32UL) + (SYSCTL_PRQEI_R_QEI1_BIT * 4UL))))

/******************************************************************************************
************************************120 PREEPROM *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PREEPROM    ((BITBANDING_PERIPHERAL_EEPROM_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PREEPROM_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PREEPROM_EEPROM    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PREEPROM_OFFSET) * 32UL) + (SYSCTL_PREEPROM_R_EEPROM_BIT * 4UL))))

/**********************************************************************************
************************************121 PRWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_PRWTIMER    ((BITBANDING_PERIPHERAL_WTIMER_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRWTIMER_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_PRWTIMER_WTIMER0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRWTIMER_OFFSET) * 32UL) + (SYSCTL_PRWTIMER_R_WTIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRWTIMER_WTIMER1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRWTIMER_OFFSET) * 32UL) + (SYSCTL_PRWTIMER_R_WTIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRWTIMER_WTIMER2    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRWTIMER_OFFSET) * 32UL) + (SYSCTL_PRWTIMER_R_WTIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRWTIMER_WTIMER3    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRWTIMER_OFFSET) * 32UL) + (SYSCTL_PRWTIMER_R_WTIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRWTIMER_WTIMER4    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRWTIMER_OFFSET) * 32UL) + (SYSCTL_PRWTIMER_R_WTIMER4_BIT * 4UL))))
#define SYSCTL_BITBANDING_PRWTIMER_WTIMER5    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_PRWTIMER_OFFSET) * 32UL) + (SYSCTL_PRWTIMER_R_WTIMER5_BIT * 4UL))))

/**********************************************************************************
************************************122 DC0 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DC0    ((BITBANDING_DC0_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC0_OFFSET) * 32UL)))

/**********************************************************************************
************************************123 DC1 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DC1    ((BITBANDING_DC1_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC1_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DC1_DCJTAG    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC1_OFFSET) * 32UL) + (SYSCTL_DC1_R_DCJTAG_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC1_DCSWD    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC1_OFFSET) * 32UL) + (SYSCTL_DC1_R_DCSWD_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC1_DCSWO    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC1_OFFSET) * 32UL) + (SYSCTL_DC1_R_DCSWO_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC1_DCWDT0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC1_OFFSET) * 32UL) + (SYSCTL_DC1_R_DCWDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC1_DCPLL    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC1_OFFSET) * 32UL) + (SYSCTL_DC1_R_DCPLL_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC1_DCTEMPSNS    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC1_OFFSET) * 32UL) + (SYSCTL_DC1_R_DCTEMPSNS_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC1_DCHIB    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC1_OFFSET) * 32UL) + (SYSCTL_DC1_R_DCHIB_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC1_DCMPU    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC1_OFFSET) * 32UL) + (SYSCTL_DC1_R_DCMPU_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC1_DCADC0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC1_OFFSET) * 32UL) + (SYSCTL_DC1_R_DCADC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC1_DCADC1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC1_OFFSET) * 32UL) + (SYSCTL_DC1_R_DCADC1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC1_DCPWM0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC1_OFFSET) * 32UL) + (SYSCTL_DC1_R_DCPWM0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC1_DCPWM1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC1_OFFSET) * 32UL) + (SYSCTL_DC1_R_DCPWM1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC1_DCCAN0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC1_OFFSET) * 32UL) + (SYSCTL_DC1_R_DCCAN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC1_DCCAN1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC1_OFFSET) * 32UL) + (SYSCTL_DC1_R_DCCAN1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC1_DCWDT1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC1_OFFSET) * 32UL) + (SYSCTL_DC1_R_DCWDT1_BIT * 4UL))))

/**********************************************************************************
************************************124 DC2 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DC2    ((BITBANDING_DC2_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DC2_DCUART0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCUART0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCUART1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCUART1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCUART2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCUART2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCSSI0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCSSI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCSSI1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCSSI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCQEI0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCQEI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCQEI1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCQEI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCI2C0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCI2C0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCI2C0HS    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCI2C0HS_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCI2C1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCI2C1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCI2C1HS    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCI2C1HS_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCTIMER0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCTIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCTIMER1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCTIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCTIMER2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCTIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCTIMER3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCTIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCCOMP0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCCOMP0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCCOMP1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCCOMP1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCCOMP2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCCOMP2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCI2S0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCI2S0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC2_DCEPI0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC2_OFFSET) * 32UL) + SYSCTL_DC2_R_DCEPI0_BIT * 4UL))))

/**********************************************************************************
************************************125 DC3 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DC3    ((BITBANDING_DC3_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DC3_DCPWM0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCPWM0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCPWM1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCPWM1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCPWM2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCPWM2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCPWM3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCPWM3_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCPWM4    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCPWM4_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCPWM5    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCPWM5_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCC0MINUS    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCC0MINUS_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCC0PLUS    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCC0PLUS_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCC0O    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCC0O_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCC1MINUS    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCC1MINUS_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCC1PLUS    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCC1PLUS_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCC1O    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCC1O_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCC2MINUS    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCC2MINUS_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCC2PLUS    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCC2PLUS_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCC2O    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCC2O_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCPWMFAULT    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCPWMFAULT_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCADC0AIN0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCADC0AIN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCADC0AIN1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCADC0AIN1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCADC0AIN2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCADC0AIN2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCADC0AIN3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCADC0AIN3_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCADC0AIN4    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCADC0AIN4_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCADC0AIN5    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCADC0AIN5_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCADC0AIN6    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCADC0AIN6_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCADC0AIN7    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCADC0AIN7_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCCCP0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCCCP0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCCCP1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCCCP1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCCCP2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCCCP2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCCCP3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCCCP3_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCCCP4    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCCCP4_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DCCCP5    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DCCCP5_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC3_DC32KHZ    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC3_OFFSET) * 32UL) + SYSCTL_DC3_R_DC32KHZ_BIT * 4UL))))

/**********************************************************************************
************************************126 DC4 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DC4    ((BITBANDING_DC4_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC4_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DC4_DCGPIOA    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC4_OFFSET) * 32UL) + SYSCTL_DC4_R_DCGPIOA_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC4_DCGPIOB    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC4_OFFSET) * 32UL) + SYSCTL_DC4_R_DCGPIOB_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC4_DCGPIOC    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC4_OFFSET) * 32UL) + SYSCTL_DC4_R_DCGPIOC_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC4_DCGPIOD    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC4_OFFSET) * 32UL) + SYSCTL_DC4_R_DCGPIOD_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC4_DCGPIOE    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC4_OFFSET) * 32UL) + SYSCTL_DC4_R_DCGPIOE_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC4_DCGPIOF    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC4_OFFSET) * 32UL) + SYSCTL_DC4_R_DCGPIOF_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC4_DCGPIOG    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC4_OFFSET) * 32UL) + SYSCTL_DC4_R_DCGPIOG_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC4_DCGPIOH    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC4_OFFSET) * 32UL) + SYSCTL_DC4_R_DCGPIOH_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC4_DCGPIOJ    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC4_OFFSET) * 32UL) + SYSCTL_DC4_R_DCGPIOJ_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC4_DCROM    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC4_OFFSET) * 32UL) + SYSCTL_DC4_R_DCROM_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC4_DCUDMA    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC4_OFFSET) * 32UL) + SYSCTL_DC4_R_DCUDMA_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC4_DCCCP6    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC4_OFFSET) * 32UL) + SYSCTL_DC4_R_DCCCP6_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC4_DCCCP7    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC4_OFFSET) * 32UL) + SYSCTL_DC4_R_DCCCP7_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC4_DCPICAL    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC4_OFFSET) * 32UL) + SYSCTL_DC4_R_DCPICAL_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC4_DCE1588    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC4_OFFSET) * 32UL) + SYSCTL_DC4_R_DCE1588_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC4_DCEMAC0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC4_OFFSET) * 32UL) + SYSCTL_DC4_R_DCEMAC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC4_DCEPHY0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC4_OFFSET) * 32UL) + SYSCTL_DC4_R_DCEPHY0_BIT * 4UL))))

/**********************************************************************************
************************************127 DC5 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DC5    ((BITBANDING_DC5_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC5_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DC5_DCPWM0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC5_OFFSET) * 32UL) + SYSCTL_DC5_R_DCPWM0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC5_DCPWM1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC5_OFFSET) * 32UL) + SYSCTL_DC5_R_DCPWM1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC5_DCPWM2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC5_OFFSET) * 32UL) + SYSCTL_DC5_R_DCPWM2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC5_DCPWM3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC5_OFFSET) * 32UL) + SYSCTL_DC5_R_DCPWM3_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC5_DCPWM4    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC5_OFFSET) * 32UL) + SYSCTL_DC5_R_DCPWM4_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC5_DCPWM5    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC5_OFFSET) * 32UL) + SYSCTL_DC5_R_DCPWM5_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC5_DCPWM6    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC5_OFFSET) * 32UL) + SYSCTL_DC5_R_DCPWM6_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC5_DCPWM7    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC5_OFFSET) * 32UL) + SYSCTL_DC5_R_DCPWM7_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC5_DCPWMESYNC    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC5_OFFSET) * 32UL) + SYSCTL_DC5_R_DCPWMESYNC_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC5_DCPWMEFLT    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC5_OFFSET) * 32UL) + SYSCTL_DC5_R_DCPWMEFLT_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC5_DCPWMFAULT0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC5_OFFSET) * 32UL) + SYSCTL_DC5_R_DCPWMFAULT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC5_DCPWMFAULT1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC5_OFFSET) * 32UL) + SYSCTL_DC5_R_DCPWMFAULT1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC5_DCPWMFAULT2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC5_OFFSET) * 32UL) + SYSCTL_DC5_R_DCPWMFAULT2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC5_DCPWMFAULT3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC5_OFFSET) * 32UL) + SYSCTL_DC5_R_DCPWMFAULT3_BIT * 4UL))))

/**********************************************************************************
************************************128 DC6 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DC6    ((BITBANDING_DC6_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC6_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DC6_DCUSB0PHY    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC6_OFFSET) * 32UL) + (SYSCTL_DC6_R_DCUSB0PHY_BIT * 4UL))))

/**********************************************************************************
************************************129 DC7 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DC7    ((BITBANDING_DC7_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DC7_DCDMACH0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH3_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH4    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH4_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH5    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH5_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH6    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH6_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH7    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH7_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH8    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH8_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH9    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH9_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH10    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH10_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH11    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH11_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH12    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH12_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH13    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH13_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH14    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH14_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH15    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH15_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH16    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH16_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH17    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH17_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH18    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH18_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH19    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH19_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH20    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH20_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH21    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH21_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH22    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH22_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH23    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH23_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH24    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH24_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH25    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH25_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH26    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH26_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH27    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH27_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH28    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH28_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH29    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH29_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC7_DCDMACH30    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC7_OFFSET) * 32UL) + SYSCTL_DC7_R_DCDMACH30_BIT * 4UL))))

/**********************************************************************************
************************************130 DC8 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DC8    ((BITBANDING_DC8_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DC8_DCADC0AIN0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC0AIN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC0AIN1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC0AIN2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC0AIN3_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN4    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC0AIN4_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN5    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC0AIN5_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN6    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC0AIN6_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN7    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC0AIN7_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN8    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC0AIN8_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN9    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC0AIN9_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN10    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC0AIN10_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN11    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC0AIN11_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN12    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC0AIN12_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN13    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC0AIN13_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN14    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC0AIN14_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC0AIN15    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC0AIN15_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC1AIN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC1AIN1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC1AIN2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC1AIN3_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN4    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC1AIN4_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN5    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC1AIN5_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN6    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC1AIN6_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN7    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC1AIN7_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN8    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC1AIN8_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN9    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC1AIN9_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN10    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC1AIN10_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN11    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC1AIN11_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN12    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC1AIN12_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN13    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC1AIN13_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN14    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC1AIN14_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC8_DCADC1AIN15    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC8_OFFSET) * 32UL) + SYSCTL_DC8_R_DCADC1AIN15_BIT * 4UL))))

/**********************************************************************************
************************************131 SRCR0 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRCR0    ((BITBANDING_SRCR0_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR0_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRCR0_SRCRWDT0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR0_OFFSET) * 32UL) + SYSCTL_SRCR0_R_SRCRWDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR0_SRCRHIB    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR0_OFFSET) * 32UL) + SYSCTL_SRCR0_R_SRCRHIB_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR0_SRCRADC0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR0_OFFSET) * 32UL) + SYSCTL_SRCR0_R_SRCRADC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR0_SRCRADC1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR0_OFFSET) * 32UL) + SYSCTL_SRCR0_R_SRCRADC1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR0_SRCRPWM0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR0_OFFSET) * 32UL) + SYSCTL_SRCR0_R_SRCRPWM0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR0_SRCRCAN0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR0_OFFSET) * 32UL) + SYSCTL_SRCR0_R_SRCRCAN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR0_SRCRCAN1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR0_OFFSET) * 32UL) + SYSCTL_SRCR0_R_SRCRCAN1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR0_SRCRWDT1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR0_OFFSET) * 32UL) + SYSCTL_SRCR0_R_SRCRWDT1_BIT * 4UL))))

/**********************************************************************************
************************************132 SRCR1 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRCR1    ((BITBANDING_SRCR1_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR1_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRCR1_SRCRUART0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR1_OFFSET) * 32UL) + (SYSCTL_SRCR1_R_SRCRUART0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR1_SRCRUART1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR1_OFFSET) * 32UL) + (SYSCTL_SRCR1_R_SRCRUART1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR1_SRCRUART2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR1_OFFSET) * 32UL) + (SYSCTL_SRCR1_R_SRCRUART2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR1_SRCRSSI0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR1_OFFSET) * 32UL) + (SYSCTL_SRCR1_R_SRCRSSI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR1_SRCRSSI1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR1_OFFSET) * 32UL) + (SYSCTL_SRCR1_R_SRCRSSI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR1_SRCRQEI0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR1_OFFSET) * 32UL) + (SYSCTL_SRCR1_R_SRCRQEI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR1_SRCRQEI1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR1_OFFSET) * 32UL) + (SYSCTL_SRCR1_R_SRCRQEI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR1_SRCRI2C0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR1_OFFSET) * 32UL) + (SYSCTL_SRCR1_R_SRCRI2C0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR1_SRCRI2C1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR1_OFFSET) * 32UL) + (SYSCTL_SRCR1_R_SRCRI2C1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR1_SRCRTIMER0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR1_OFFSET) * 32UL) + (SYSCTL_SRCR1_R_SRCRTIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR1_SRCRTIMER1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR1_OFFSET) * 32UL) + (SYSCTL_SRCR1_R_SRCRTIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR1_SRCRTIMER2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR1_OFFSET) * 32UL) + (SYSCTL_SRCR1_R_SRCRTIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR1_SRCRTIMER3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR1_OFFSET) * 32UL) + (SYSCTL_SRCR1_R_SRCRTIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR1_SRCRCOMP0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR1_OFFSET) * 32UL) + (SYSCTL_SRCR1_R_SRCRCOMP0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR1_SRCRCOMP1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR1_OFFSET) * 32UL) + (SYSCTL_SRCR1_R_SRCRCOMP1_BIT * 4UL))))

/**********************************************************************************
************************************133 SRCR2 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SRCR2    ((BITBANDING_SRCR2_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR2_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SRCR2_SRCRGPIOA    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR2_OFFSET) * 32UL) + (SYSCTL_SRCR2_R_SRCRGPIOA_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR2_SRCRGPIOB    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR2_OFFSET) * 32UL) + (SYSCTL_SRCR2_R_SRCRGPIOB_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR2_SRCRGPIOC    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR2_OFFSET) * 32UL) + (SYSCTL_SRCR2_R_SRCRGPIOC_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR2_SRCRGPIOD    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR2_OFFSET) * 32UL) + (SYSCTL_SRCR2_R_SRCRGPIOD_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR2_SRCRGPIOE    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR2_OFFSET) * 32UL) + (SYSCTL_SRCR2_R_SRCRGPIOE_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR2_SRCRGPIOF    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR2_OFFSET) * 32UL) + (SYSCTL_SRCR2_R_SRCRGPIOF_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR2_SRCRUDMA    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR2_OFFSET) * 32UL) + (SYSCTL_SRCR2_R_SRCRUDMA_BIT * 4UL))))
#define SYSCTL_BITBANDING_SRCR2_SRCRUSB0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SRCR2_OFFSET) * 32UL) + (SYSCTL_SRCR2_R_SRCRUSB0_BIT * 4UL))))

/**********************************************************************************
************************************134 RCGC0 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGC0    ((BITBANDING_RCGC0_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC0_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGC0_RCGCWDT0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC0_OFFSET) * 32UL) + (SYSCTL_RCGC0_R_RCGCWDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC0_RCGCHIB    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC0_OFFSET) * 32UL) + (SYSCTL_RCGC0_R_RCGCHIB_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC0_RCGCADC0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC0_OFFSET) * 32UL) + (SYSCTL_RCGC0_R_RCGCADC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC0_RCGCADC1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC0_OFFSET) * 32UL) + (SYSCTL_RCGC0_R_RCGCADC1_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC0_RCGCPWM0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC0_OFFSET) * 32UL) + (SYSCTL_RCGC0_R_RCGCPWM0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC0_RCGCCAN0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC0_OFFSET) * 32UL) + (SYSCTL_RCGC0_R_RCGCCAN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC0_RCGCCAN1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC0_OFFSET) * 32UL) + (SYSCTL_RCGC0_R_RCGCCAN1_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC0_RCGCWDT1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC0_OFFSET) * 32UL) + (SYSCTL_RCGC0_R_RCGCWDT1_BIT * 4UL))))

/**********************************************************************************
************************************135 RCGC1 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGC1    ((BITBANDING_RCGC1_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC1_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGC1_RCGCUART0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC1_OFFSET) * 32UL) + (SYSCTL_RCGC1_R_RCGCUART0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC1_RCGCUART1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC1_OFFSET) * 32UL) + (SYSCTL_RCGC1_R_RCGCUART1_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC1_RCGCUART2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC1_OFFSET) * 32UL) + (SYSCTL_RCGC1_R_RCGCUART2_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC1_RCGCSSI0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC1_OFFSET) * 32UL) + (SYSCTL_RCGC1_R_RCGCSSI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC1_RCGCSSI1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC1_OFFSET) * 32UL) + (SYSCTL_RCGC1_R_RCGCSSI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC1_RCGCQEI0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC1_OFFSET) * 32UL) + (SYSCTL_RCGC1_R_RCGCQEI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC1_RCGCQEI1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC1_OFFSET) * 32UL) + (SYSCTL_RCGC1_R_RCGCQEI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC1_RCGCI2C0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC1_OFFSET) * 32UL) + (SYSCTL_RCGC1_R_RCGCI2C0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC1_RCGCI2C1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC1_OFFSET) * 32UL) + (SYSCTL_RCGC1_R_RCGCI2C1_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC1_RCGCTIMER0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC1_OFFSET) * 32UL) + (SYSCTL_RCGC1_R_RCGCTIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC1_RCGCTIMER1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC1_OFFSET) * 32UL) + (SYSCTL_RCGC1_R_RCGCTIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC1_RCGCTIMER2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC1_OFFSET) * 32UL) + (SYSCTL_RCGC1_R_RCGCTIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC1_RCGCTIMER3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC1_OFFSET) * 32UL) + (SYSCTL_RCGC1_R_RCGCTIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC1_RCGCCOMP0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC1_OFFSET) * 32UL) + (SYSCTL_RCGC1_R_RCGCCOMP0_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC1_RCGCCOMP1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC1_OFFSET) * 32UL) + (SYSCTL_RCGC1_R_RCGCCOMP1_BIT * 4UL))))

/**********************************************************************************
************************************136 RCGC2 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RCGC2    ((BITBANDING_RCGC2_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC2_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RCGC2_RCGCGPIOA    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC2_OFFSET) * 32UL) + (SYSCTL_RCGC2_R_RCGCGPIOA_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC2_RCGCGPIOB    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC2_OFFSET) * 32UL) + (SYSCTL_RCGC2_R_RCGCGPIOB_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC2_RCGCGPIOC    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC2_OFFSET) * 32UL) + (SYSCTL_RCGC2_R_RCGCGPIOC_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC2_RCGCGPIOD    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC2_OFFSET) * 32UL) + (SYSCTL_RCGC2_R_RCGCGPIOD_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC2_RCGCGPIOE    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC2_OFFSET) * 32UL) + (SYSCTL_RCGC2_R_RCGCGPIOE_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC2_RCGCGPIOF    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC2_OFFSET) * 32UL) + (SYSCTL_RCGC2_R_RCGCGPIOF_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC2_RCGCUDMA    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC2_OFFSET) * 32UL) + (SYSCTL_RCGC2_R_RCGCUDMA_BIT * 4UL))))
#define SYSCTL_BITBANDING_RCGC2_RCGCUSB0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RCGC2_OFFSET) * 32UL) + (SYSCTL_RCGC2_R_RCGCUSB0_BIT * 4UL))))

/**********************************************************************************
************************************137 SCGC0 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGC0    ((BITBANDING_SCGC0_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC0_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGC0_SCGCWDT0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC0_OFFSET) * 32UL) + (SYSCTL_SCGC0_R_SCGCWDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC0_SCGCHIB    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC0_OFFSET) * 32UL) + (SYSCTL_SCGC0_R_SCGCHIB_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC0_SCGCADC0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC0_OFFSET) * 32UL) + (SYSCTL_SCGC0_R_SCGCADC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC0_SCGCADC1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC0_OFFSET) * 32UL) + (SYSCTL_SCGC0_R_SCGCADC1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC0_SCGCPWM0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC0_OFFSET) * 32UL) + (SYSCTL_SCGC0_R_SCGCPWM0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC0_SCGCCAN0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC0_OFFSET) * 32UL) + (SYSCTL_SCGC0_R_SCGCCAN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC0_SCGCCAN1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC0_OFFSET) * 32UL) + (SYSCTL_SCGC0_R_SCGCCAN1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC0_SCGCWDT1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC0_OFFSET) * 32UL) + (SYSCTL_SCGC0_R_SCGCWDT1_BIT * 4UL))))

/**********************************************************************************
************************************138 SCGC1 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGC1    ((BITBANDING_SCGC1_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC1_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGC1_SCGCUART0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC1_OFFSET) * 32UL) + (SYSCTL_SCGC1_R_SCGCUART0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC1_SCGCUART1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC1_OFFSET) * 32UL) + (SYSCTL_SCGC1_R_SCGCUART1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC1_SCGCUART2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC1_OFFSET) * 32UL) + (SYSCTL_SCGC1_R_SCGCUART2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC1_SCGCSSI0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC1_OFFSET) * 32UL) + (SYSCTL_SCGC1_R_SCGCSSI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC1_SCGCSSI1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC1_OFFSET) * 32UL) + (SYSCTL_SCGC1_R_SCGCSSI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC1_SCGCQEI0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC1_OFFSET) * 32UL) + (SYSCTL_SCGC1_R_SCGCQEI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC1_SCGCQEI1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC1_OFFSET) * 32UL) + (SYSCTL_SCGC1_R_SCGCQEI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC1_SCGCI2C0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC1_OFFSET) * 32UL) + (SYSCTL_SCGC1_R_SCGCI2C0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC1_SCGCI2C1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC1_OFFSET) * 32UL) + (SYSCTL_SCGC1_R_SCGCI2C1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC1_SCGCTIMER0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC1_OFFSET) * 32UL) + (SYSCTL_SCGC1_R_SCGCTIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC1_SCGCTIMER1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC1_OFFSET) * 32UL) + (SYSCTL_SCGC1_R_SCGCTIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC1_SCGCTIMER2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC1_OFFSET) * 32UL) + (SYSCTL_SCGC1_R_SCGCTIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC1_SCGCTIMER3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC1_OFFSET) * 32UL) + (SYSCTL_SCGC1_R_SCGCTIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC1_SCGCCOMP0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC1_OFFSET) * 32UL) + (SYSCTL_SCGC1_R_SCGCCOMP0_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC1_SCGCCOMP1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC1_OFFSET) * 32UL) + (SYSCTL_SCGC1_R_SCGCCOMP1_BIT * 4UL))))

/**********************************************************************************
************************************139 SCGC2 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_SCGC2    ((BITBANDING_SCGC2_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC2_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_SCGC2_SCGCGPIOA    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC2_OFFSET) * 32UL) + (SYSCTL_SCGC2_R_SCGCGPIOA_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC2_SCGCGPIOB    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC2_OFFSET) * 32UL) + (SYSCTL_SCGC2_R_SCGCGPIOB_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC2_SCGCGPIOC    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC2_OFFSET) * 32UL) + (SYSCTL_SCGC2_R_SCGCGPIOC_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC2_SCGCGPIOD    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC2_OFFSET) * 32UL) + (SYSCTL_SCGC2_R_SCGCGPIOD_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC2_SCGCGPIOE    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC2_OFFSET) * 32UL) + (SYSCTL_SCGC2_R_SCGCGPIOE_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC2_SCGCGPIOF    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC2_OFFSET) * 32UL) + (SYSCTL_SCGC2_R_SCGCGPIOF_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC2_SCGCUDMA    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC2_OFFSET) * 32UL) + (SYSCTL_SCGC2_R_SCGCUDMA_BIT * 4UL))))
#define SYSCTL_BITBANDING_SCGC2_SCGCUSB0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_SCGC2_OFFSET) * 32UL) + (SYSCTL_SCGC2_R_SCGCUSB0_BIT * 4UL))))

/**********************************************************************************
************************************140 DCGC0 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGC0    ((BITBANDING_DCGC0_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC0_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGC0_DCGCWDT0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC0_OFFSET) * 32UL) + (SYSCTL_DCGC0_R_DCGCWDT0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC0_DCGCHIB    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC0_OFFSET) * 32UL) + (SYSCTL_DCGC0_R_DCGCHIB_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC0_DCGCADC0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC0_OFFSET) * 32UL) + (SYSCTL_DCGC0_R_DCGCADC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC0_DCGCADC1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC0_OFFSET) * 32UL) + (SYSCTL_DCGC0_R_DCGCADC1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC0_DCGCPWM0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC0_OFFSET) * 32UL) + (SYSCTL_DCGC0_R_DCGCPWM0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC0_DCGCCAN0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC0_OFFSET) * 32UL) + (SYSCTL_DCGC0_R_DCGCCAN0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC0_DCGCCAN1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC0_OFFSET) * 32UL) + (SYSCTL_DCGC0_R_DCGCCAN1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC0_DCGCWDT1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC0_OFFSET) * 32UL) + (SYSCTL_DCGC0_R_DCGCWDT1_BIT * 4UL))))

/**********************************************************************************
************************************141 DCGC1 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGC1    ((BITBANDING_DCGC1_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC1_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGC1_DCGCUART0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC1_OFFSET) * 32UL) + (SYSCTL_DCGC1_R_DCGCUART0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC1_DCGCUART1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC1_OFFSET) * 32UL) + (SYSCTL_DCGC1_R_DCGCUART1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC1_DCGCUART2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC1_OFFSET) * 32UL) + (SYSCTL_DCGC1_R_DCGCUART2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC1_DCGCSSI0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC1_OFFSET) * 32UL) + (SYSCTL_DCGC1_R_DCGCSSI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC1_DCGCSSI1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC1_OFFSET) * 32UL) + (SYSCTL_DCGC1_R_DCGCSSI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC1_DCGCQEI0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC1_OFFSET) * 32UL) + (SYSCTL_DCGC1_R_DCGCQEI0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC1_DCGCQEI1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC1_OFFSET) * 32UL) + (SYSCTL_DCGC1_R_DCGCQEI1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC1_DCGCI2C0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC1_OFFSET) * 32UL) + (SYSCTL_DCGC1_R_DCGCI2C0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC1_DCGCI2C1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC1_OFFSET) * 32UL) + (SYSCTL_DCGC1_R_DCGCI2C1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC1_DCGCTIMER0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC1_OFFSET) * 32UL) + (SYSCTL_DCGC1_R_DCGCTIMER0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC1_DCGCTIMER1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC1_OFFSET) * 32UL) + (SYSCTL_DCGC1_R_DCGCTIMER1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC1_DCGCTIMER2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC1_OFFSET) * 32UL) + (SYSCTL_DCGC1_R_DCGCTIMER2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC1_DCGCTIMER3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC1_OFFSET) * 32UL) + (SYSCTL_DCGC1_R_DCGCTIMER3_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC1_DCGCCOMP0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC1_OFFSET) * 32UL) + (SYSCTL_DCGC1_R_DCGCCOMP0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC1_DCGCCOMP1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC1_OFFSET) * 32UL) + (SYSCTL_DCGC1_R_DCGCCOMP1_BIT * 4UL))))

/**********************************************************************************
************************************142 DCGC2 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DCGC2    ((BITBANDING_DCGC2_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC2_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DCGC2_DCGCGPIOA    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC2_OFFSET) * 32UL) + (SYSCTL_DCGC2_R_DCGCGPIOA_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC2_DCGCGPIOB    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC2_OFFSET) * 32UL) + (SYSCTL_DCGC2_R_DCGCGPIOB_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC2_DCGCGPIOC    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC2_OFFSET) * 32UL) + (SYSCTL_DCGC2_R_DCGCGPIOC_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC2_DCGCGPIOD    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC2_OFFSET) * 32UL) + (SYSCTL_DCGC2_R_DCGCGPIOD_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC2_DCGCGPIOE    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC2_OFFSET) * 32UL) + (SYSCTL_DCGC2_R_DCGCGPIOE_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC2_DCGCGPIOF    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC2_OFFSET) * 32UL) + (SYSCTL_DCGC2_R_DCGCGPIOF_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC2_DCGCUDMA    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC2_OFFSET) * 32UL) + (SYSCTL_DCGC2_R_DCGCUDMA_BIT * 4UL))))
#define SYSCTL_BITBANDING_DCGC2_DCGCUSB0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DCGC2_OFFSET) * 32UL) + (SYSCTL_DCGC2_R_DCGCUSB0_BIT * 4UL))))

/**********************************************************************************
************************************143 DC9 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_DC9    ((BITBANDING_DC9_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC9_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_DC9_DCADC0DC0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC9_OFFSET) * 32UL) + (SYSCTL_DC9_R_DCADC0DC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC9_DCADC0DC1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC9_OFFSET) * 32UL) + (SYSCTL_DC9_R_DCADC0DC1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC9_DCADC0DC2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC9_OFFSET) * 32UL) + (SYSCTL_DC9_R_DCADC0DC2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC9_DCADC0DC3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC9_OFFSET) * 32UL) + (SYSCTL_DC9_R_DCADC0DC3_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC9_DCADC0DC4    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC9_OFFSET) * 32UL) + (SYSCTL_DC9_R_DCADC0DC4_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC9_DCADC0DC5    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC9_OFFSET) * 32UL) + (SYSCTL_DC9_R_DCADC0DC5_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC9_DCADC0DC6    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC9_OFFSET) * 32UL) + (SYSCTL_DC9_R_DCADC0DC6_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC9_DCADC0DC7    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC9_OFFSET) * 32UL) + (SYSCTL_DC9_R_DCADC0DC7_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC9_DCADC1DC0    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC9_OFFSET) * 32UL) + (SYSCTL_DC9_R_DCADC1DC0_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC9_DCADC1DC1    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC9_OFFSET) * 32UL) + (SYSCTL_DC9_R_DCADC1DC1_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC9_DCADC1DC2    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC9_OFFSET) * 32UL) + (SYSCTL_DC9_R_DCADC1DC2_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC9_DCADC1DC3    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC9_OFFSET) * 32UL) + (SYSCTL_DC9_R_DCADC1DC3_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC9_DCADC1DC4    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC9_OFFSET) * 32UL) + (SYSCTL_DC9_R_DCADC1DC4_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC9_DCADC1DC5    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC9_OFFSET) * 32UL) + (SYSCTL_DC9_R_DCADC1DC5_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC9_DCADC1DC6    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC9_OFFSET) * 32UL) + (SYSCTL_DC9_R_DCADC1DC6_BIT * 4UL))))
#define SYSCTL_BITBANDING_DC9_DCADC1DC7    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_DC9_OFFSET) * 32UL) + (SYSCTL_DC9_R_DCADC1DC7_BIT * 4UL))))

/**********************************************************************************
************************************144 NVMSTAT *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_NVMSTAT    ((BITBANDING_NVMSTAT_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_NVMSTAT_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_NVMSTAT_FWB    (*((volatile const uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_NVMSTAT_OFFSET) * 32UL) + (SYSCTL_NVMSTAT_R_FWB_BIT * 4UL))))

/******************************************************************************************
************************************ 145-Flash RMCTL *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_RMCTL    ((BITBANDING_RMCTL_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RMCTL_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_RMCTL_BA    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_RMCTL_OFFSET) * 32UL) + (SYSCTL_RMCTL_R_BA_BIT * 4UL))))

/******************************************************************************************
************************************ 146-Flash FMPRE0_ALIAS *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE0_ALIAS    ((BITBANDING_FMPRE_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE0_ALIAS_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 147-Flash FMPRE0 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE0    ((BITBANDING_FMPRE_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE0_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 148-Flash FMPRE1 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE1    ((BITBANDING_FMPRE_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE1_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 149-Flash FMPRE2 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE2    ((BITBANDING_FMPRE_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE2_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 150-Flash FMPRE3 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPRE3    ((BITBANDING_FMPRE_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPRE3_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 151-Flash FMPPE0_ALIAS *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE0_ALIAS    ((BITBANDING_FMPPE_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE0_ALIAS_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 152-Flash FMPPE0 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE0    ((BITBANDING_FMPPE_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE0_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 153-Flash FMPPE1 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE1    ((BITBANDING_FMPPE_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE1_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 154-Flash FMPPE2 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE2    ((BITBANDING_FMPPE_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE2_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 155-Flash FMPPE3 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_FMPPE3    ((BITBANDING_FMPPE_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_FMPPE3_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 156-Flash BOOTCFG *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_BOOTCFG    ((BITBANDING_FMPPE_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_BOOTCFG_OFFSET) * 32UL)))

#define SYSCTL_BITBANDING_BOOTCFG_DBG0    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_BOOTCFG_OFFSET) * 32UL) + (SYSCTL_BOOTCFG_R_DBG0_BIT * 4UL))))
#define SYSCTL_BITBANDING_BOOTCFG_DBG1    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_BOOTCFG_OFFSET) * 32UL) + (SYSCTL_BOOTCFG_R_DBG1_BIT * 4UL))))
#define SYSCTL_BITBANDING_BOOTCFG_KEY    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_BOOTCFG_OFFSET) * 32UL) + (SYSCTL_BOOTCFG_R_KEY_BIT * 4UL))))
#define SYSCTL_BITBANDING_BOOTCFG_ENA    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_BOOTCFG_OFFSET) * 32UL) + (SYSCTL_BOOTCFG_R_EN_BIT * 4UL))))
#define SYSCTL_BITBANDING_BOOTCFG_POL    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_BOOTCFG_OFFSET) * 32UL) + (SYSCTL_BOOTCFG_R_POL_BIT * 4UL))))
#define SYSCTL_BITBANDING_BOOTCFG_NW    (*((volatile uint32_t*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_BOOTCFG_OFFSET) * 32UL) + (SYSCTL_BOOTCFG_R_NW_BIT * 4UL))))

/******************************************************************************************
************************************ 157-Flash USER_REG0 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_USER_REG0    ((BITBANDING_USER_REG_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_USER_REG0_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 158-Flash USER_REG1 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_USER_REG1    ((BITBANDING_USER_REG_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_USER_REG1_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 159-Flash USER_REG2 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_USER_REG2    ((BITBANDING_USER_REG_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_USER_REG2_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 160-Flash USER_REG3 *********************************************
******************************************************************************************/
#define SYSCTL_BITBANDING_USER_REG3    ((BITBANDING_USER_REG_TypeDef*) (SYSCTL_BITBANDING_BASE + ((SYSCTL_OFFSET + SYSCTL_USER_REG3_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERPERIPHERAL_BITBANDING_H_ */
