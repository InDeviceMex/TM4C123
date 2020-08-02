/**
 *
 * @file SYSCTL_RegisterPeripheral.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/SYSCTL/Header/Peripheral/Register/SYSCTL_RegisterAddress.h>
#include <xDriver_MCU/SYSCTL/Header/Peripheral/Struct/SYSCTL_StructPeripheral.h>

#define SYSCTL                 (((SYSCTL_TypeDef*)(SYSCTL_BASE)))

/*******************************************************************************************
************************************ 1 DID0 *********************************************
*******************************************************************************************/
#define SYSCTL_DID0         (((DID0_TypeDef*)(SYSCTL_BASE+SYSCTL_DID0_OFFSET )))
#define SYSCTL_DID0_R       (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DID0_OFFSET)))

/******************************************************************************************
************************************ 2 DID1 *********************************************
******************************************************************************************/
#define SYSCTL_DID1           (((DID1_TypeDef*)(SYSCTL_BASE+SYSCTL_DID1_OFFSET )))
#define SYSCTL_DID1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DID1_OFFSET)))

/******************************************************************************************
************************************ 3 PBORCTL *********************************************
******************************************************************************************/
#define SYSCTL_PBORCTL            (((PBORCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_PBORCTL_OFFSET )))
#define SYSCTL_PBORCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PBORCTL_OFFSET)))

/******************************************************************************************
************************************ 4 RIS *********************************************
******************************************************************************************/
#define SYSCTL_RIS            (((RIS_TypeDef*)(SYSCTL_BASE+SYSCTL_RIS_OFFSET )))
#define SYSCTL_RIS_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_RIS_OFFSET)))

/******************************************************************************************
************************************ 5 IMC *********************************************
******************************************************************************************/
#define SYSCTL_IMC            (((IMC_TypeDef*)(SYSCTL_BASE+SYSCTL_IMC_OFFSET )))
#define SYSCTL_IMC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_IMC_OFFSET)))

/******************************************************************************************
************************************ 6 MISC *********************************************
******************************************************************************************/
#define SYSCTL_MISC            (((MISC_TypeDef*)(SYSCTL_BASE+SYSCTL_MISC_OFFSET )))
#define SYSCTL_MISC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_MISC_OFFSET)))

/******************************************************************************************
************************************ 7 RESC *********************************************
******************************************************************************************/
#define SYSCTL_RESC            (((RESC_TypeDef*)(SYSCTL_BASE+SYSCTL_RESC_OFFSET )))
#define SYSCTL_RESC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RESC_OFFSET)))

/******************************************************************************************
************************************ 8 RCC *********************************************
******************************************************************************************/
#define SYSCTL_RCC            (((RCC_TypeDef*)(SYSCTL_BASE+SYSCTL_RCC_OFFSET )))
#define SYSCTL_RCC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCC_OFFSET)))

/******************************************************************************************
************************************ 9 GPIOHBCTL *********************************************
******************************************************************************************/
#define SYSCTL_GPIOHBCTL            (((GPIOHBCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_GPIOHBCTL_OFFSET )))
#define SYSCTL_GPIOHBCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_GPIOHBCTL_OFFSET)))

/******************************************************************************************
************************************ 10 RCC2 *********************************************
******************************************************************************************/
#define SYSCTL_RCC2            (((RCC2_TypeDef*)(SYSCTL_BASE+SYSCTL_RCC2_OFFSET )))
#define SYSCTL_RCC2_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCC2_OFFSET)))

/******************************************************************************************
************************************ 11 MOSCCTL *********************************************
******************************************************************************************/
#define SYSCTL_MOSCCTL            (((MOSCCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_MOSCCTL_OFFSET )))
#define SYSCTL_MOSCCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_MOSCCTL_OFFSET)))

/******************************************************************************************
************************************12 DSLPCLKCFG *********************************************
******************************************************************************************/
#define SYSCTL_DSLPCLKCFG            (((DSLPCLKCFG_TypeDef*)(SYSCTL_BASE+SYSCTL_DSLPCLKCFG_OFFSET )))
#define SYSCTL_DSLPCLKCFG_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DSLPCLKCFG_OFFSET)))

/******************************************************************************************
************************************13 SYSPROP *********************************************
******************************************************************************************/
#define SYSCTL_SYSPROP            (((SYSPROP_TypeDef*)(SYSCTL_BASE+SYSCTL_SYSPROP_OFFSET )))
#define SYSCTL_SYSPROP_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SYSPROP_OFFSET)))

/******************************************************************************************
************************************14 PIOSCCAL *********************************************
******************************************************************************************/
#define SYSCTL_PIOSCCAL            (((PIOSCCAL_TypeDef*)(SYSCTL_BASE+SYSCTL_PIOSCCAL_OFFSET )))
#define SYSCTL_PIOSCCAL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PIOSCCAL_OFFSET)))

/******************************************************************************************
************************************15 PIOSCSTAT *********************************************
******************************************************************************************/
#define SYSCTL_PIOSCSTAT            (((PIOSCSTAT_TypeDef*)(SYSCTL_BASE+SYSCTL_PIOSCSTAT_OFFSET )))
#define SYSCTL_PIOSCSTAT_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PIOSCSTAT_OFFSET)))

/******************************************************************************************
************************************16 PLLFREQ0 *********************************************
******************************************************************************************/
#define SYSCTL_PLLFREQ0            (((PLLFREQ0_TypeDef*)(SYSCTL_BASE+SYSCTL_PLLFREQ0_OFFSET )))
#define SYSCTL_PLLFREQ0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PLLFREQ0_OFFSET)))

/******************************************************************************************
************************************17 PLLFREQ1 *********************************************
******************************************************************************************/
#define SYSCTL_PLLFREQ1            (((PLLFREQ1_TypeDef*)(SYSCTL_BASE+SYSCTL_PLLFREQ1_OFFSET )))
#define SYSCTL_PLLFREQ1_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PLLFREQ1_OFFSET)))

/******************************************************************************************
************************************18 PLLSTAT *********************************************
******************************************************************************************/
#define SYSCTL_PLLSTAT            (((PLLSTAT_TypeDef*)(SYSCTL_BASE+SYSCTL_PLLSTAT_OFFSET )))
#define SYSCTL_PLLSTAT_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PLLSTAT_OFFSET)))

/******************************************************************************************
************************************19 SLSRWRCFG *********************************************
******************************************************************************************/
#define SYSCTL_SLSRWRCFG            (((SLSRWRCFG_TypeDef*)(SYSCTL_BASE+SYSCTL_SLSRWRCFG_OFFSET )))
#define SYSCTL_SLSRWRCFG_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SLSRWRCFG_OFFSET)))

/******************************************************************************************
************************************20 DSLSRWRCFG *********************************************
******************************************************************************************/
#define SYSCTL_DSLSRWRCFG            (((DSLSRWRCFG_TypeDef*)(SYSCTL_BASE+SYSCTL_DSLSRWRCFG_OFFSET )))
#define SYSCTL_DSLSRWRCFG_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DSLSRWRCFG_OFFSET)))

/******************************************************************************************
************************************21 LDOSPCTL *********************************************
******************************************************************************************/
#define SYSCTL_LDOSPCTL            (((LDOSPCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_LDOSPCTL_OFFSET )))
#define SYSCTL_LDOSPCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_LDOSPCTL_OFFSET)))

/******************************************************************************************
************************************22 LDOSPCAL *********************************************
******************************************************************************************/
#define SYSCTL_LDOSPCAL            (((LDOSPCAL_TypeDef*)(SYSCTL_BASE+SYSCTL_LDOSPCAL_OFFSET )))
#define SYSCTL_LDOSPCAL_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_LDOSPCAL_OFFSET)))

/******************************************************************************************
************************************23 LDODPCTL *********************************************
******************************************************************************************/
#define SYSCTL_LDODPCTL            (((LDODPCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_LDODPCTL_OFFSET )))
#define SYSCTL_LDODPCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_LDODPCTL_OFFSET)))

/******************************************************************************************
************************************24 LDODPCAL *********************************************
******************************************************************************************/
#define SYSCTL_LDODPCAL            (((LDODPCAL_TypeDef*)(SYSCTL_BASE+SYSCTL_LDODPCAL_OFFSET )))
#define SYSCTL_LDODPCAL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_LDODPCAL_OFFSET)))

/******************************************************************************************
************************************25 SDPMST *********************************************
******************************************************************************************/
#define SYSCTL_SDPMST            (((SDPMST_TypeDef*)(SYSCTL_BASE+SYSCTL_SDPMSTL_OFFSET )))
#define SYSCTL_SDPMST_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SDPMST_OFFSET)))

/******************************************************************************************
************************************26 PPWD *********************************************
******************************************************************************************/
#define SYSCTL_PPWD            (((PERIPHERAL_WD_TypeDef*)(SYSCTL_BASE+SYSCTL_PPWD_OFFSET )))
#define SYSCTL_PPWD_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPWD_OFFSET)))

/******************************************************************************************
************************************27 PPTIMER *********************************************
******************************************************************************************/
#define SYSCTL_PPTIMER            (((PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_PPTIMER_OFFSET )))
#define SYSCTL_PPTIMER_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPTIMER_OFFSET)))

/******************************************************************************************
************************************28 PPGPIO *********************************************
******************************************************************************************/
#define SYSCTL_PPGPIO            (((PERIPHERAL_GPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_PPGPIO_OFFSET )))
#define SYSCTL_PPGPIO_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPGPIO_OFFSET)))

/******************************************************************************************
************************************29 PPDMA *********************************************
******************************************************************************************/
#define SYSCTL_PPDMA            (((PERIPHERAL_DMA_TypeDef*)(SYSCTL_BASE+SYSCTL_PPDMA_OFFSET )))
#define SYSCTL_PPDMA_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPDMA_OFFSET)))

/******************************************************************************************
************************************30 PPHIB *********************************************
******************************************************************************************/
#define SYSCTL_PPHIB            (((PERIPHERAL_HIB_TypeDef*)(SYSCTL_BASE+SYSCTL_PPHIB_OFFSET )))
#define SYSCTL_PPHIB_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPHIB_OFFSET)))

/******************************************************************************************
************************************31 PPUART *********************************************
******************************************************************************************/
#define SYSCTL_PPUART            (((PERIPHERAL_UART_TypeDef*)(SYSCTL_BASE+SYSCTL_PPUART_OFFSET )))
#define SYSCTL_PPUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPUART_OFFSET)))

/******************************************************************************************
************************************32 PPSSI *********************************************
******************************************************************************************/
#define SYSCTL_PPSSI            (((PERIPHERAL_SSI_TypeDef*)(SYSCTL_BASE+SYSCTL_PPSSI_OFFSET )))
#define SYSCTL_PPSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPSSI_OFFSET)))

/******************************************************************************************
************************************33 PPI2C *********************************************
******************************************************************************************/
#define SYSCTL_PPI2C            (((PERIPHERAL_I2C_TypeDef*)(SYSCTL_BASE+SYSCTL_PPI2C_OFFSET )))
#define SYSCTL_PPI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPI2C_OFFSET)))

/******************************************************************************************
************************************34 PPUSB *********************************************
******************************************************************************************/
#define SYSCTL_PPUSB            (((PERIPHERAL_USB_TypeDef*)(SYSCTL_BASE+SYSCTL_PPUSB_OFFSET )))
#define SYSCTL_PPUSB_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPUSB_OFFSET)))

/******************************************************************************************
************************************35 PPCAN *********************************************
******************************************************************************************/
#define SYSCTL_PPCAN            (((PERIPHERAL_CAN_TypeDef*)(SYSCTL_BASE+SYSCTL_PPCAN_OFFSET )))
#define SYSCTL_PPCAN_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPCAN_OFFSET)))

/******************************************************************************************
************************************36 PPADC *********************************************
******************************************************************************************/
#define SYSCTL_PPADC            (((PERIPHERAL_ADC_TypeDef*)(SYSCTL_BASE+SYSCTL_PPADC_OFFSET )))
#define SYSCTL_PPADC_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPADC_OFFSET)))

/******************************************************************************************
************************************37 PPACMP *********************************************
******************************************************************************************/
#define SYSCTL_PPACMP            (((PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_PPACMP_OFFSET )))
#define SYSCTL_PPACMP_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPACMP_OFFSET)))

/****************************************************************************************
************************************38 PPPWM *********************************************
******************************************************************************************/
#define SYSCTL_PPPWM            (((PERIPHERAL_PWM_TypeDef*)(SYSCTL_BASE+SYSCTL_PPPWM_OFFSET )))
#define SYSCTL_PPPWM_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPPWM_OFFSET)))

/******************************************************************************************
************************************39 PPQEI *********************************************
******************************************************************************************/
#define SYSCTL_PPQEI            (((PERIPHERAL_QEI_TypeDef*)(SYSCTL_BASE+SYSCTL_PPQEI_OFFSET )))
#define SYSCTL_PPQEI_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPQEI_OFFSET)))

/******************************************************************************************
************************************40 PPEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_PPEEPROM            (((PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_PPEEPROM_OFFSET )))
#define SYSCTL_PPEEPROM_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPEEPROM_OFFSET)))

/**********************************************************************************
************************************41 PPWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_PPWTIMER            (((PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_PPWTIMER_OFFSET )))
#define SYSCTL_PPWTIMER_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPWTIMER_OFFSET)))

/******************************************************************************************
************************************42 SRWD *********************************************
******************************************************************************************/
#define SYSCTL_SRWD            (((PERIPHERAL_WD_TypeDef*)(SYSCTL_BASE+SYSCTL_SRWD_OFFSET )))
#define SYSCTL_SRWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRWD_OFFSET)))

/******************************************************************************************
************************************43 SRTIMER *********************************************
******************************************************************************************/
#define SYSCTL_SRTIMER            (((PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_SRTIMER_OFFSET )))
#define SYSCTL_SRTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRTIMER_OFFSET)))

/******************************************************************************************
************************************44 SRGPIO *********************************************
******************************************************************************************/
#define SYSCTL_SRGPIO            (((PERIPHERAL_GPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_SRGPIO_OFFSET )))
#define SYSCTL_SRGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRGPIO_OFFSET)))

/******************************************************************************************
************************************45 SRDMA *********************************************
******************************************************************************************/
#define SYSCTL_SRDMA            (((PERIPHERAL_DMA_TypeDef*)(SYSCTL_BASE+SYSCTL_SRDMA_OFFSET )))
#define SYSCTL_SRDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRDMA_OFFSET)))

/******************************************************************************************
************************************46 SRHIB *********************************************
******************************************************************************************/
#define SYSCTL_SRHIB            (((PERIPHERAL_HIB_TypeDef*)(SYSCTL_BASE+SYSCTL_SRHIB_OFFSET )))
#define SYSCTL_SRHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRHIB_OFFSET)))

/******************************************************************************************
************************************47 SRUART *********************************************
******************************************************************************************/
#define SYSCTL_SRUART            (((PERIPHERAL_UART_TypeDef*)(SYSCTL_BASE+SYSCTL_SRUART_OFFSET )))
#define SYSCTL_SRUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRUART_OFFSET)))

/******************************************************************************************
************************************48 SRSSI *********************************************
******************************************************************************************/
#define SYSCTL_SRSSI            (((PERIPHERAL_SSI_TypeDef*)(SYSCTL_BASE+SYSCTL_SRSSI_OFFSET )))
#define SYSCTL_SRSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRSSI_OFFSET)))

/******************************************************************************************
************************************49 SRI2C *********************************************
******************************************************************************************/
#define SYSCTL_SRI2C            (((PERIPHERAL_I2C_TypeDef*)(SYSCTL_BASE+SYSCTL_SRI2C_OFFSET )))
#define SYSCTL_SRI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRI2C_OFFSET)))

/******************************************************************************************
************************************50 SRUSB *********************************************
******************************************************************************************/
#define SYSCTL_SRUSB            (((PERIPHERAL_USB_TypeDef*)(SYSCTL_BASE+SYSCTL_SRUSB_OFFSET )))
#define SYSCTL_SRUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRUSB_OFFSET)))

/******************************************************************************************
************************************51 SRCAN *********************************************
******************************************************************************************/
#define SYSCTL_SRCAN            (((PERIPHERAL_CAN_TypeDef*)(SYSCTL_BASE+SYSCTL_SRCAN_OFFSET )))
#define SYSCTL_SRCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRCAN_OFFSET)))

/******************************************************************************************
************************************52 SRADC *********************************************
******************************************************************************************/
#define SYSCTL_SRADC            (((PERIPHERAL_ADC_TypeDef*)(SYSCTL_BASE+SYSCTL_SRADC_OFFSET )))
#define SYSCTL_SRADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRADC_OFFSET)))

/******************************************************************************************
************************************53 SRACMP *********************************************
******************************************************************************************/
#define SYSCTL_SRACMP            (((PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_SRACMP_OFFSET )))
#define SYSCTL_SRACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRACMP_OFFSET)))

/****************************************************************************************
************************************54 SRPWM *********************************************
******************************************************************************************/
#define SYSCTL_SRPWM            (((PERIPHERAL_PWM_TypeDef*)(SYSCTL_BASE+SYSCTL_SRPWM_OFFSET )))
#define SYSCTL_SRPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRPWM_OFFSET)))

/******************************************************************************************
************************************55 SRQEI *********************************************
******************************************************************************************/
#define SYSCTL_SRQEI            (((PERIPHERAL_QEI_TypeDef*)(SYSCTL_BASE+SYSCTL_SRQEI_OFFSET )))
#define SYSCTL_SRQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRQEI_OFFSET)))

/******************************************************************************************
************************************56 SREEPROM *********************************************
******************************************************************************************/
#define SYSCTL_SREEPROM            (((PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_SREEPROM_OFFSET )))
#define SYSCTL_SREEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SREEPROM_OFFSET)))

/**********************************************************************************
************************************57 SRWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_SRWTIMER            (((PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_SRWTIMER_OFFSET )))
#define SYSCTL_SRWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRWTIMER_OFFSET)))

/******************************************************************************************
************************************58 RCGCWD *********************************************
******************************************************************************************/
#define SYSCTL_RCGCWD            (((PERIPHERAL_WD_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCWD_OFFSET )))
#define SYSCTL_RCGCWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCWD_OFFSET)))

/******************************************************************************************
************************************59 RCGCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_RCGCTIMER            (((PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCTIMER_OFFSET )))
#define SYSCTL_RCGCTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCTIMER_OFFSET)))

/******************************************************************************************
************************************60 RCGCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_RCGCGPIO            (((PERIPHERAL_GPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCGPIO_OFFSET )))
#define SYSCTL_RCGCGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCGPIO_OFFSET)))

/******************************************************************************************
************************************61 RCGCDMA *********************************************
******************************************************************************************/
#define SYSCTL_RCGCDMA            (((PERIPHERAL_DMA_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCDMA_OFFSET )))
#define SYSCTL_RCGCDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCDMA_OFFSET)))

/******************************************************************************************
************************************62 RCGCHIB *********************************************
******************************************************************************************/
#define SYSCTL_RCGCHIB            (((PERIPHERAL_HIB_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCHIB_OFFSET )))
#define SYSCTL_RCGCHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCHIB_OFFSET)))

/******************************************************************************************
************************************63 RCGCUART *********************************************
******************************************************************************************/
#define SYSCTL_RCGCUART            (((PERIPHERAL_UART_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCUART_OFFSET )))
#define SYSCTL_RCGCUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCUART_OFFSET)))

/******************************************************************************************
************************************64 RCGCSSI *********************************************
******************************************************************************************/
#define SYSCTL_RCGCSSI            (((PERIPHERAL_SSI_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCSSI_OFFSET )))
#define SYSCTL_RCGCSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCSSI_OFFSET)))

/******************************************************************************************
************************************65 RCGCI2C *********************************************
******************************************************************************************/
#define SYSCTL_RCGCI2C            (((PERIPHERAL_I2C_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCI2C_OFFSET )))
#define SYSCTL_RCGCI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCI2C_OFFSET)))

/******************************************************************************************
************************************66 RCGCUSB *********************************************
******************************************************************************************/
#define SYSCTL_RCGCUSB            (((PERIPHERAL_USB_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCUSB_OFFSET )))
#define SYSCTL_RCGCUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCUSB_OFFSET)))

/******************************************************************************************
************************************67 RCGCCAN *********************************************
******************************************************************************************/
#define SYSCTL_RCGCCAN            (((PERIPHERAL_CAN_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCCAN_OFFSET )))
#define SYSCTL_RCGCCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCCAN_OFFSET)))

/******************************************************************************************
************************************68 RCGCADC *********************************************
******************************************************************************************/
#define SYSCTL_RCGCADC            (((PERIPHERAL_ADC_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCADC_OFFSET )))
#define SYSCTL_RCGCADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCADC_OFFSET)))

/******************************************************************************************
************************************69 RCGCACMP *********************************************
******************************************************************************************/
#define SYSCTL_RCGCACMP            (((PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCACMP_OFFSET )))
#define SYSCTL_RCGCACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCACMP_OFFSET)))

/****************************************************************************************
************************************70 RCGCPWM *********************************************
******************************************************************************************/
#define SYSCTL_RCGCPWM            (((PERIPHERAL_PWM_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCPWM_OFFSET )))
#define SYSCTL_RCGCPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCPWM_OFFSET)))

/******************************************************************************************
************************************71 RCGCQEI *********************************************
******************************************************************************************/
#define SYSCTL_RCGCQEI            (((PERIPHERAL_QEI_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCQEI_OFFSET )))
#define SYSCTL_RCGCQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCQEI_OFFSET)))

/******************************************************************************************
************************************72 RCGCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_RCGCEEPROM            (((PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCEEPROM_OFFSET )))
#define SYSCTL_RCGCEEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCEEPROM_OFFSET)))

/**********************************************************************************
************************************73 RCGCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_RCGCWTIMER            (((PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCWTIMER_OFFSET )))
#define SYSCTL_RCGCWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCWTIMER_OFFSET)))

/******************************************************************************************
************************************74 SCGCWD *********************************************
******************************************************************************************/
#define SYSCTL_SCGCWD            (((PERIPHERAL_WD_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCWD_OFFSET )))
#define SYSCTL_SCGCWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCWD_OFFSET)))

/******************************************************************************************
************************************75 SCGCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_SCGCTIMER            (((PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCTIMER_OFFSET )))
#define SYSCTL_SCGCTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCTIMER_OFFSET)))

/******************************************************************************************
************************************76 SCGCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_SCGCGPIO            (((PERIPHERAL_GPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCGPIO_OFFSET )))
#define SYSCTL_SCGCGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCGPIO_OFFSET)))

/******************************************************************************************
************************************77 SCGCDMA *********************************************
******************************************************************************************/
#define SYSCTL_SCGCDMA            (((PERIPHERAL_DMA_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCDMA_OFFSET )))
#define SYSCTL_SCGCDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCDMA_OFFSET)))

/******************************************************************************************
************************************78 SCGCHIB *********************************************
******************************************************************************************/
#define SYSCTL_SCGCHIB            (((PERIPHERAL_HIB_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCHIB_OFFSET )))
#define SYSCTL_SCGCHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCHIB_OFFSET)))

/******************************************************************************************
************************************79 SCGCUART *********************************************
******************************************************************************************/
#define SYSCTL_SCGCUART            (((PERIPHERAL_UART_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCUART_OFFSET )))
#define SYSCTL_SCGCUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCUART_OFFSET)))

/******************************************************************************************
************************************80 SCGCSSI *********************************************
******************************************************************************************/
#define SYSCTL_SCGCSSI            (((PERIPHERAL_SSI_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCSSI_OFFSET )))
#define SYSCTL_SCGCSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCSSI_OFFSET)))

/******************************************************************************************
************************************81 SCGCI2C *********************************************
******************************************************************************************/
#define SYSCTL_SCGCI2C            (((PERIPHERAL_I2C_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCI2C_OFFSET )))
#define SYSCTL_SCGCI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCI2C_OFFSET)))

/******************************************************************************************
************************************82 SCGCUSB *********************************************
******************************************************************************************/
#define SYSCTL_SCGCUSB            (((PERIPHERAL_USB_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCUSB_OFFSET )))
#define SYSCTL_SCGCUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCUSB_OFFSET)))

/******************************************************************************************
************************************83 SCGCCAN *********************************************
******************************************************************************************/
#define SYSCTL_SCGCCAN            (((PERIPHERAL_CAN_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCCAN_OFFSET )))
#define SYSCTL_SCGCCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCCAN_OFFSET)))

/******************************************************************************************
************************************84 SCGCADC *********************************************
******************************************************************************************/
#define SYSCTL_SCGCADC            (((PERIPHERAL_ADC_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCADC_OFFSET )))
#define SYSCTL_SCGCADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCADC_OFFSET)))

/******************************************************************************************
************************************85 SCGCACMP *********************************************
******************************************************************************************/
#define SYSCTL_SCGCACMP            (((PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCACMP_OFFSET )))
#define SYSCTL_SCGCACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCACMP_OFFSET)))

/****************************************************************************************
************************************86 SCGCPWM *********************************************
******************************************************************************************/
#define SYSCTL_SCGCPWM            (((PERIPHERAL_PWM_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCPWM_OFFSET )))
#define SYSCTL_SCGCPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCPWM_OFFSET)))

/******************************************************************************************
************************************87 SCGCQEI *********************************************
******************************************************************************************/
#define SYSCTL_SCGCQEI            (((PERIPHERAL_QEI_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCQEI_OFFSET )))
#define SYSCTL_SCGCQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCQEI_OFFSET)))

/******************************************************************************************
************************************88 SCGCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_SCGCEEPROM            (((PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCEEPROM_OFFSET )))
#define SYSCTL_SCGCEEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCEEPROM_OFFSET)))

/**********************************************************************************
************************************89 SCGCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_SCGCWTIMER            (((PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCWTIMER_OFFSET )))
#define SYSCTL_SCGCWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCWTIMER_OFFSET)))

/******************************************************************************************
************************************90 DCGCWD *********************************************
******************************************************************************************/
#define SYSCTL_DCGCWD            (((PERIPHERAL_WD_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCWD_OFFSET )))
#define SYSCTL_DCGCWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCWD_OFFSET)))

/******************************************************************************************
************************************91 DCGCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_DCGCTIMER            (((PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCTIMER_OFFSET )))
#define SYSCTL_DCGCTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCTIMER_OFFSET)))

/******************************************************************************************
************************************92 DCGCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_DCGCGPIO            (((PERIPHERAL_GPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCGPIO_OFFSET )))
#define SYSCTL_DCGCGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCGPIO_OFFSET)))

/******************************************************************************************
************************************93 DCGCDMA *********************************************
******************************************************************************************/
#define SYSCTL_DCGCDMA            (((PERIPHERAL_DMA_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCDMA_OFFSET )))
#define SYSCTL_DCGCDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCDMA_OFFSET)))

/******************************************************************************************
************************************94 DCGCHIB *********************************************
******************************************************************************************/
#define SYSCTL_DCGCHIB            (((PERIPHERAL_HIB_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCHIB_OFFSET )))
#define SYSCTL_DCGCHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCHIB_OFFSET)))

/******************************************************************************************
************************************95 DCGCUART *********************************************
******************************************************************************************/
#define SYSCTL_DCGCUART            (((PERIPHERAL_UART_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCUART_OFFSET )))
#define SYSCTL_DCGCUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCUART_OFFSET)))

/******************************************************************************************
************************************96 DCGCSSI *********************************************
******************************************************************************************/
#define SYSCTL_DCGCSSI            (((PERIPHERAL_SSI_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCSSI_OFFSET )))
#define SYSCTL_DCGCSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCSSI_OFFSET)))

/******************************************************************************************
************************************97 DCGCI2C *********************************************
******************************************************************************************/
#define SYSCTL_DCGCI2C            (((PERIPHERAL_I2C_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCI2C_OFFSET )))
#define SYSCTL_DCGCI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCI2C_OFFSET)))

/******************************************************************************************
************************************98 DCGCUSB *********************************************
******************************************************************************************/
#define SYSCTL_DCGCUSB            (((PERIPHERAL_USB_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCUSB_OFFSET )))
#define SYSCTL_DCGCUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCUSB_OFFSET)))

/******************************************************************************************
************************************99 DCGCCAN *********************************************
******************************************************************************************/
#define SYSCTL_DCGCCAN            (((PERIPHERAL_CAN_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCCAN_OFFSET )))
#define SYSCTL_DCGCCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCCAN_OFFSET)))

/******************************************************************************************
************************************100 DCGCADC *********************************************
******************************************************************************************/
#define SYSCTL_DCGCADC            (((PERIPHERAL_ADC_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCADC_OFFSET )))
#define SYSCTL_DCGCADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCADC_OFFSET)))

/******************************************************************************************
************************************101 DCGCACMP *********************************************
******************************************************************************************/
#define SYSCTL_DCGCACMP            (((PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCACMP_OFFSET )))
#define SYSCTL_DCGCACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCACMP_OFFSET)))

/****************************************************************************************
************************************102 DCGCPWM *********************************************
******************************************************************************************/
#define SYSCTL_DCGCPWM            (((PERIPHERAL_PWM_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCPWM_OFFSET )))
#define SYSCTL_DCGCPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCPWM_OFFSET)))

/******************************************************************************************
************************************103 DCGCQEI *********************************************
******************************************************************************************/
#define SYSCTL_DCGCQEI            (((PERIPHERAL_QEI_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCQEI_OFFSET )))
#define SYSCTL_DCGCQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCQEI_OFFSET)))

/******************************************************************************************
************************************104 DCGCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_DCGCEEPROM            (((PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCEEPROM_OFFSET )))
#define SYSCTL_DCGCEEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCEEPROM_OFFSET)))

/**********************************************************************************
************************************105 DCGCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_DCGCWTIMER            (((PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCWTIMER_OFFSET )))
#define SYSCTL_DCGCWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCWTIMER_OFFSET)))

/******************************************************************************************
************************************106 PRWD *********************************************
******************************************************************************************/
#define SYSCTL_PRWD            (((PERIPHERAL_WD_TypeDef*)(SYSCTL_BASE+SYSCTL_PRWD_OFFSET )))
#define SYSCTL_PRWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRWD_OFFSET)))

/******************************************************************************************
************************************107 PRTIMER *********************************************
******************************************************************************************/
#define SYSCTL_PRTIMER            (((PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_PRTIMER_OFFSET )))
#define SYSCTL_PRTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRTIMER_OFFSET)))

/******************************************************************************************
************************************108 PRGPIO *********************************************
******************************************************************************************/
#define SYSCTL_PRGPIO            (((PERIPHERAL_GPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_PRGPIO_OFFSET )))
#define SYSCTL_PRGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRGPIO_OFFSET)))

/******************************************************************************************
************************************109 PRDMA *********************************************
******************************************************************************************/
#define SYSCTL_PRDMA            (((PERIPHERAL_DMA_TypeDef*)(SYSCTL_BASE+SYSCTL_PRDMA_OFFSET )))
#define SYSCTL_PRDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRDMA_OFFSET)))

/******************************************************************************************
************************************110 PRHIB *********************************************
******************************************************************************************/
#define SYSCTL_PRHIB            (((PERIPHERAL_HIB_TypeDef*)(SYSCTL_BASE+SYSCTL_PRHIB_OFFSET )))
#define SYSCTL_PRHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRHIB_OFFSET)))

/******************************************************************************************
************************************111 PRUART *********************************************
******************************************************************************************/
#define SYSCTL_PRUART            (((PERIPHERAL_UART_TypeDef*)(SYSCTL_BASE+SYSCTL_PRUART_OFFSET )))
#define SYSCTL_PRUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRUART_OFFSET)))

/******************************************************************************************
************************************112 PRSSI *********************************************
******************************************************************************************/
#define SYSCTL_PRSSI            (((PERIPHERAL_SSI_TypeDef*)(SYSCTL_BASE+SYSCTL_PRSSI_OFFSET )))
#define SYSCTL_PRSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRSSI_OFFSET)))

/******************************************************************************************
************************************113 PRI2C *********************************************
******************************************************************************************/
#define SYSCTL_PRI2C            (((PERIPHERAL_I2C_TypeDef*)(SYSCTL_BASE+SYSCTL_PRI2C_OFFSET )))
#define SYSCTL_PRI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRI2C_OFFSET)))

/******************************************************************************************
************************************114 PRUSB *********************************************
******************************************************************************************/
#define SYSCTL_PRUSB            (((PERIPHERAL_USB_TypeDef*)(SYSCTL_BASE+SYSCTL_PRUSB_OFFSET )))
#define SYSCTL_PRUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRUSB_OFFSET)))

/******************************************************************************************
************************************115 PRCAN *********************************************
******************************************************************************************/
#define SYSCTL_PRCAN            (((PERIPHERAL_CAN_TypeDef*)(SYSCTL_BASE+SYSCTL_PRCAN_OFFSET )))
#define SYSCTL_PRCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRCAN_OFFSET)))

/******************************************************************************************
************************************116 PRADC *********************************************
******************************************************************************************/
#define SYSCTL_PRADC            (((PERIPHERAL_ADC_TypeDef*)(SYSCTL_BASE+SYSCTL_PRADC_OFFSET )))
#define SYSCTL_PRADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRADC_OFFSET)))

/******************************************************************************************
************************************117 PRACMP *********************************************
******************************************************************************************/
#define SYSCTL_PRACMP            (((PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_PRACMP_OFFSET )))
#define SYSCTL_PRACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRACMP_OFFSET)))

/****************************************************************************************
************************************118 PRPWM *********************************************
******************************************************************************************/
#define SYSCTL_PRPWM            (((PERIPHERAL_PWM_TypeDef*)(SYSCTL_BASE+SYSCTL_PRPWM_OFFSET )))
#define SYSCTL_PRPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRPWM_OFFSET)))

/******************************************************************************************
************************************119 PRQEI *********************************************
******************************************************************************************/
#define SYSCTL_PRQEI            (((PERIPHERAL_QEI_TypeDef*)(SYSCTL_BASE+SYSCTL_PRQEI_OFFSET )))
#define SYSCTL_PRQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRQEI_OFFSET)))

/******************************************************************************************
************************************120 PREEPROM *********************************************
******************************************************************************************/
#define SYSCTL_PREEPROM            (((PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_PREEPROM_OFFSET )))
#define SYSCTL_PREEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PREEPROM_OFFSET)))

/**********************************************************************************
************************************121 PRWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_PRWTIMER            (((PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_PRWTIMER_OFFSET )))
#define SYSCTL_PRWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRWTIMER_OFFSET)))

/**********************************************************************************
************************************122 DC0 *********************************************
******************************************************************************************/
#define SYSCTL_DC0            (((DC0_TypeDef*)(SYSCTL_BASE+SYSCTL_DC0_OFFSET )))
#define SYSCTL_DC0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC0_OFFSET)))

/**********************************************************************************
************************************123 DC1 *********************************************
******************************************************************************************/
#define SYSCTL_DC1            (((DC1_TypeDef*)(SYSCTL_BASE+SYSCTL_DC1_OFFSET )))
#define SYSCTL_DC1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC1_OFFSET)))

/**********************************************************************************
************************************124 DC2 *********************************************
******************************************************************************************/
#define SYSCTL_DC2            (((DC2_TypeDef*)(SYSCTL_BASE+SYSCTL_DC2_OFFSET )))
#define SYSCTL_DC2_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC2_OFFSET)))

/**********************************************************************************
************************************125 DC3 *********************************************
******************************************************************************************/
#define SYSCTL_DC3            (((DC3_TypeDef*)(SYSCTL_BASE+SYSCTL_DC3_OFFSET )))
#define SYSCTL_DC3_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC3_OFFSET)))

/**********************************************************************************
************************************126 DC4 *********************************************
******************************************************************************************/
#define SYSCTL_DC4            (((DC4_TypeDef*)(SYSCTL_BASE+SYSCTL_DC4_OFFSET )))
#define SYSCTL_DC4_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC4_OFFSET)))

/**********************************************************************************
************************************127 DC5 *********************************************
******************************************************************************************/
#define SYSCTL_DC5            (((DC5_TypeDef*)(SYSCTL_BASE+SYSCTL_DC5_OFFSET )))
#define SYSCTL_DC5_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC5_OFFSET)))

/**********************************************************************************
************************************128 DC6 *********************************************
******************************************************************************************/
#define SYSCTL_DC6            (((DC6_TypeDef*)(SYSCTL_BASE+SYSCTL_DC6_OFFSET )))
#define SYSCTL_DC6_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC6_OFFSET)))

/**********************************************************************************
************************************129 DC7 *********************************************
******************************************************************************************/
#define SYSCTL_DC7            (((DC7_TypeDef*)(SYSCTL_BASE+SYSCTL_DC7_OFFSET )))
#define SYSCTL_DC7_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC7_OFFSET)))

/**********************************************************************************
************************************130 DC8 *********************************************
******************************************************************************************/
#define SYSCTL_DC8            (((DC8_TypeDef*)(SYSCTL_BASE+SYSCTL_DC8_OFFSET )))
#define SYSCTL_DC8_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC8_OFFSET)))

/**********************************************************************************
************************************131 SRCR0 *********************************************
******************************************************************************************/
#define SYSCTL_SRCR0            (((SRCR0_TypeDef*)(SYSCTL_BASE+SYSCTL_SRCR0_OFFSET )))
#define SYSCTL_SRCR0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SRCR0_OFFSET)))

/**********************************************************************************
************************************132 SRCR1 *********************************************
******************************************************************************************/
#define SYSCTL_SRCR1            (((SRCR1_TypeDef*)(SYSCTL_BASE+SYSCTL_SRCR1_OFFSET )))
#define SYSCTL_SRCR1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SRCR1_OFFSET)))

/**********************************************************************************
************************************133 SRCR2 *********************************************
******************************************************************************************/
#define SYSCTL_SRCR2            (((SRCR2_TypeDef*)(SYSCTL_BASE+SYSCTL_SRCR2_OFFSET )))
#define SYSCTL_SRCR2_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SRCR2_OFFSET)))

/**********************************************************************************
************************************134 RCGC0 *********************************************
******************************************************************************************/
#define SYSCTL_RCGC0            (((RCGC0_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGC0_OFFSET )))
#define SYSCTL_RCGC0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_RCGC0_OFFSET)))

/**********************************************************************************
************************************135 RCGC1 *********************************************
******************************************************************************************/
#define SYSCTL_RCGC1            (((RCGC1_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGC1_OFFSET )))
#define SYSCTL_RCGC1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_RCGC1_OFFSET)))

/**********************************************************************************
************************************136 RCGC2 *********************************************
******************************************************************************************/
#define SYSCTL_RCGC2            (((RCGC2_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGC2_OFFSET )))
#define SYSCTL_RCGC2_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_RCGC2_OFFSET)))

/**********************************************************************************
************************************137 SCGC0 *********************************************
******************************************************************************************/
#define SYSCTL_SCGC0            (((SCGC0_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGC0_OFFSET )))
#define SYSCTL_SCGC0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SCGC0_OFFSET)))

/**********************************************************************************
************************************138 SCGC1 *********************************************
******************************************************************************************/
#define SYSCTL_SCGC1            (((SCGC1_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGC1_OFFSET )))
#define SYSCTL_SCGC1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SCGC1_OFFSET)))

/**********************************************************************************
************************************139 SCGC2 *********************************************
******************************************************************************************/
#define SYSCTL_SCGC2            (((SCGC2_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGC2_OFFSET )))
#define SYSCTL_SCGC2_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SCGC2_OFFSET)))

/**********************************************************************************
************************************140 DCGC0 *********************************************
******************************************************************************************/
#define SYSCTL_DCGC0            (((DCGC0_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGC0_OFFSET )))
#define SYSCTL_DCGC0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DCGC0_OFFSET)))

/**********************************************************************************
************************************141 DCGC1 *********************************************
******************************************************************************************/
#define SYSCTL_DCGC1            (((DCGC1_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGC1_OFFSET )))
#define SYSCTL_DCGC1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DCGC1_OFFSET)))

/**********************************************************************************
************************************142 DCGC2 *********************************************
******************************************************************************************/
#define SYSCTL_DCGC2            (((DCGC2_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGC2_OFFSET )))
#define SYSCTL_DCGC2_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DCGC2_OFFSET)))

/**********************************************************************************
************************************143 DC9 *********************************************
******************************************************************************************/
#define SYSCTL_DC9            (((DC9_TypeDef*)(SYSCTL_BASE+SYSCTL_DC9_OFFSET )))
#define SYSCTL_DC9_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC9_OFFSET)))

/**********************************************************************************
************************************144 NVMSTAT *********************************************
******************************************************************************************/
#define SYSCTL_NVMSTAT            (((NVMSTAT_TypeDef*)(SYSCTL_BASE+SYSCTL_NVMSTAT_OFFSET )))
#define SYSCTL_NVMSTAT_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_NVMSTAT_OFFSET)))

/******************************************************************************************
************************************ 145-Flash RMCTL *********************************************
******************************************************************************************/
#define SYSCTL_RMCTL            (((RMCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_RMCTL_OFFSET )))
#define SYSCTL_RMCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RMCTL_OFFSET)))

/******************************************************************************************
************************************ 146-Flash FMPRE0_ALIAS *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE0_ALIAS                   (((FMPRE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPRE0_ALIAS_OFFSET )))
#define SYSCTL_FMPRE0_ALIAS_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPRE0_ALIAS_OFFSET)))

/******************************************************************************************
************************************ 147-Flash FMPRE0 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE0                   (((FMPRE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPRE0_OFFSET )))
#define SYSCTL_FMPRE0_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPRE0_OFFSET)))

/******************************************************************************************
************************************ 148-Flash FMPRE1 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE1                   (((FMPRE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPRE1_OFFSET )))
#define SYSCTL_FMPRE1_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPRE1_OFFSET)))

/******************************************************************************************
************************************ 149-Flash FMPRE2 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE2                   (((FMPRE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPRE2_OFFSET )))
#define SYSCTL_FMPRE2_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPRE2_OFFSET)))

/******************************************************************************************
************************************ 150-Flash FMPRE3 *********************************************
******************************************************************************************/
#define SYSCTL_FMPRE3                   (((FMPRE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPRE3_OFFSET )))
#define SYSCTL_FMPRE3_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPRE3_OFFSET)))

/******************************************************************************************
************************************ 151-Flash FMPPE0_ALIAS *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE0_ALIAS                   (((FMPPE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPPE0_ALIAS_OFFSET )))
#define SYSCTL_FMPPE0_ALIAS_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPPE0_ALIAS_OFFSET)))

/******************************************************************************************
************************************ 152-Flash FMPPE0 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE0                   (((FMPPE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPPE0_OFFSET )))
#define SYSCTL_FMPPE0_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPPE0_OFFSET)))

/******************************************************************************************
************************************ 153-Flash FMPPE1 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE1                   (((FMPPE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPPE1_OFFSET )))
#define SYSCTL_FMPPE1_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPPE1_OFFSET)))

/******************************************************************************************
************************************ 154-Flash FMPPE2 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE2                   (((FMPPE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPPE2_OFFSET )))
#define SYSCTL_FMPPE2_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPPE2_OFFSET)))

/******************************************************************************************
************************************ 155-Flash FMPPE3 *********************************************
******************************************************************************************/
#define SYSCTL_FMPPE3                   (((FMPPE_TypeDef*)(SYSCTL_BASE+SYSCTL_FMPPE3_OFFSET )))
#define SYSCTL_FMPPE3_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_FMPPE3_OFFSET)))

/******************************************************************************************
************************************ 156-Flash BOOTCFG *********************************************
******************************************************************************************/
#define SYSCTL_BOOTCFG                   (((FMPPE_TypeDef*)(SYSCTL_BASE+SYSCTL_BOOTCFG_OFFSET )))
#define SYSCTL_BOOTCFG_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_BOOTCFG_OFFSET)))

/******************************************************************************************
************************************ 157-Flash USER_REG0 *********************************************
******************************************************************************************/
#define SYSCTL_USER_REG0                   (((USER_REG_TypeDef*)(SYSCTL_BASE+SYSCTL_USER_REG0_OFFSET )))
#define SYSCTL_USER_REG0_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_USER_REG0_OFFSET)))

/******************************************************************************************
************************************ 158-Flash USER_REG1 *********************************************
******************************************************************************************/
#define SYSCTL_USER_REG1                   (((USER_REG_TypeDef*)(SYSCTL_BASE+SYSCTL_USER_REG1_OFFSET )))
#define SYSCTL_USER_REG1_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_USER_REG1_OFFSET)))

/******************************************************************************************
************************************ 159-Flash USER_REG2 *********************************************
******************************************************************************************/
#define SYSCTL_USER_REG2                   (((USER_REG_TypeDef*)(SYSCTL_BASE+SYSCTL_USER_REG2_OFFSET )))
#define SYSCTL_USER_REG2_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_USER_REG2_OFFSET)))

/******************************************************************************************
************************************ 160-Flash USER_REG3 *********************************************
******************************************************************************************/
#define SYSCTL_USER_REG3                   (((USER_REG_TypeDef*)(SYSCTL_BASE+SYSCTL_USER_REG3_OFFSET )))
#define SYSCTL_USER_REG3_R                 (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_USER_REG3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERPERIPHERAL_H_ */
