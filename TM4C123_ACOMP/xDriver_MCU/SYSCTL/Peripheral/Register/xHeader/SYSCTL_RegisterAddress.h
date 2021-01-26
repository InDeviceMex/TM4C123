/**
 *
 * @file SYSCTL_RegisterAddress.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define SYSCTL_BASE            ((uint32_t)0x400FE000U)
#define SYSCTL_BITBANDING_BASE ((uint32_t)0x42000000U)
#define SYSCTL_OFFSET          ((uint32_t)0x000FE000U)




#define SYSCTL_DID0_OFFSET          ((uint32_t)0x0000U)
#define SYSCTL_DID1_OFFSET          ((uint32_t)0x0004U)

#define SYSCTL_PBORCTL_OFFSET       ((uint32_t)0x0030U)

#define SYSCTL_RIS_OFFSET           ((uint32_t)0x0050U)
#define SYSCTL_IMC_OFFSET           ((uint32_t)0x0054U)
#define SYSCTL_MISC_OFFSET          ((uint32_t)0x0058U)

#define SYSCTL_RESC_OFFSET          ((uint32_t)0x005CU)

#define SYSCTL_RCC_OFFSET           ((uint32_t)0x0060U)
#define SYSCTL_RCC2_OFFSET          ((uint32_t)0x0070U)

#define SYSCTL_GPIOHBCTL_OFFSET     ((uint32_t)0x006CU)
#define SYSCTL_MOSCCTL_OFFSET       ((uint32_t)0x007CU)
#define SYSCTL_RMCTL_OFFSET         ((uint32_t)0x00F0U)

#define SYSCTL_FMPRE0_ALIAS_OFFSET  ((uint32_t)0x0130U)
#define SYSCTL_FMPPE0_ALIAS_OFFSET  ((uint32_t)0x0134U)

#define SYSCTL_SYSPROP_OFFSET       ((uint32_t)0x014CU)

#define SYSCTL_PIOSCCAL_OFFSET      ((uint32_t)0x0150U)
#define SYSCTL_PIOSCSTAT_OFFSET     ((uint32_t)0x0154U)

#define SYSCTL_PLLFREQ0_OFFSET      ((uint32_t)0x0160U)
#define SYSCTL_PLLFREQ1_OFFSET      ((uint32_t)0x0164U)
#define SYSCTL_PLLSTAT_OFFSET       ((uint32_t)0x0168U)

#define SYSCTL_SLSRWRCFG_OFFSET     ((uint32_t)0x0188U)
#define SYSCTL_DSLSRWRCFG_OFFSET    ((uint32_t)0x018CU)
#define SYSCTL_DSLPCLKCFG_OFFSET    ((uint32_t)0x0144U)

#define SYSCTL_LDOSPCTL_OFFSET      ((uint32_t)0x01B4U)
#define SYSCTL_LDOSPCAL_OFFSET      ((uint32_t)0x01B8U)
#define SYSCTL_LDODPCTL_OFFSET      ((uint32_t)0x01BCU)
#define SYSCTL_LDODPCAL_OFFSET      ((uint32_t)0x01C0U)

#define SYSCTL_SDPMST_OFFSET        ((uint32_t)0x01CCU)

#define SYSCTL_BOOTCFG_OFFSET       ((uint32_t)0x01D0U)

#define SYSCTL_USER_REG0_OFFSET     ((uint32_t)0x01E0U)
#define SYSCTL_USER_REG1_OFFSET     ((uint32_t)0x01E4U)
#define SYSCTL_USER_REG2_OFFSET     ((uint32_t)0x01E8U)
#define SYSCTL_USER_REG3_OFFSET     ((uint32_t)0x01ECU)

#define SYSCTL_FMPRE0_OFFSET        ((uint32_t)0x0200U)
#define SYSCTL_FMPRE1_OFFSET        ((uint32_t)0x0204U)
#define SYSCTL_FMPRE2_OFFSET        ((uint32_t)0x0208U)
#define SYSCTL_FMPRE3_OFFSET        ((uint32_t)0x020CU)

#define SYSCTL_PP_OFFSET          ((uint32_t)0x0300U)
#define SYSCTL_PPWD_OFFSET          ((uint32_t)0x0300U)
#define SYSCTL_PPTIMER_OFFSET       ((uint32_t)0x0304U)
#define SYSCTL_PPGPIO_OFFSET        ((uint32_t)0x0308U)
#define SYSCTL_PPDMA_OFFSET         ((uint32_t)0x030CU)
#define SYSCTL_PPHIB_OFFSET         ((uint32_t)0x0314U)
#define SYSCTL_PPUART_OFFSET        ((uint32_t)0x0318U)
#define SYSCTL_PPSSI_OFFSET         ((uint32_t)0x031CU)
#define SYSCTL_PPI2C_OFFSET         ((uint32_t)0x0320U)
#define SYSCTL_PPUSB_OFFSET         ((uint32_t)0x0328U)
#define SYSCTL_PPCAN_OFFSET         ((uint32_t)0x0334U)
#define SYSCTL_PPADC_OFFSET         ((uint32_t)0x0338U)
#define SYSCTL_PPACMP_OFFSET        ((uint32_t)0x033CU)
#define SYSCTL_PPPWM_OFFSET         ((uint32_t)0x0340U)
#define SYSCTL_PPQEI_OFFSET         ((uint32_t)0x0344U)
#define SYSCTL_PPEEPROM_OFFSET      ((uint32_t)0x0358U)
#define SYSCTL_PPWTIMER_OFFSET      ((uint32_t)0x035CU)

#define SYSCTL_FMPPE0_OFFSET        ((uint32_t)0x0400U)
#define SYSCTL_FMPPE1_OFFSET        ((uint32_t)0x0404U)
#define SYSCTL_FMPPE2_OFFSET        ((uint32_t)0x0408U)
#define SYSCTL_FMPPE3_OFFSET        ((uint32_t)0x040CU)

#define SYSCTL_SR_OFFSET          ((uint32_t)0x0500U)
#define SYSCTL_SRWD_OFFSET          ((uint32_t)0x0500U)
#define SYSCTL_SRTIMER_OFFSET       ((uint32_t)0x0504U)
#define SYSCTL_SRGPIO_OFFSET        ((uint32_t)0x0508U)
#define SYSCTL_SRDMA_OFFSET         ((uint32_t)0x050CU)
#define SYSCTL_SRHIB_OFFSET         ((uint32_t)0x0514U)
#define SYSCTL_SRUART_OFFSET        ((uint32_t)0x0518U)
#define SYSCTL_SRSSI_OFFSET         ((uint32_t)0x051CU)
#define SYSCTL_SRI2C_OFFSET         ((uint32_t)0x0520U)
#define SYSCTL_SRUSB_OFFSET         ((uint32_t)0x0528U)
#define SYSCTL_SRCAN_OFFSET         ((uint32_t)0x0534U)
#define SYSCTL_SRADC_OFFSET         ((uint32_t)0x0538U)
#define SYSCTL_SRACMP_OFFSET        ((uint32_t)0x053CU)
#define SYSCTL_SRPWM_OFFSET         ((uint32_t)0x0540U)
#define SYSCTL_SRQEI_OFFSET         ((uint32_t)0x0544U)
#define SYSCTL_SREEPROM_OFFSET      ((uint32_t)0x0558U)
#define SYSCTL_SRWTIMER_OFFSET      ((uint32_t)0x055CU)

#define SYSCTL_RCGC_OFFSET          ((uint32_t)0x0600U)
#define SYSCTL_RCGCWD_OFFSET          ((uint32_t)0x0600U)
#define SYSCTL_RCGCTIMER_OFFSET       ((uint32_t)0x0604U)
#define SYSCTL_RCGCGPIO_OFFSET        ((uint32_t)0x0608U)
#define SYSCTL_RCGCDMA_OFFSET         ((uint32_t)0x060CU)
#define SYSCTL_RCGCHIB_OFFSET         ((uint32_t)0x0614U)
#define SYSCTL_RCGCUART_OFFSET        ((uint32_t)0x0618U)
#define SYSCTL_RCGCSSI_OFFSET         ((uint32_t)0x061CU)
#define SYSCTL_RCGCI2C_OFFSET         ((uint32_t)0x0620U)
#define SYSCTL_RCGCUSB_OFFSET         ((uint32_t)0x0628U)
#define SYSCTL_RCGCCAN_OFFSET         ((uint32_t)0x0634U)
#define SYSCTL_RCGCADC_OFFSET         ((uint32_t)0x0638U)
#define SYSCTL_RCGCACMP_OFFSET        ((uint32_t)0x063CU)
#define SYSCTL_RCGCPWM_OFFSET         ((uint32_t)0x0640U)
#define SYSCTL_RCGCQEI_OFFSET         ((uint32_t)0x0644U)
#define SYSCTL_RCGCEEPROM_OFFSET      ((uint32_t)0x0658U)
#define SYSCTL_RCGCWTIMER_OFFSET      ((uint32_t)0x065CU)

#define SYSCTL_SCGC_OFFSET          ((uint32_t)0x0700U)
#define SYSCTL_SCGCWD_OFFSET          ((uint32_t)0x0700U)
#define SYSCTL_SCGCTIMER_OFFSET       ((uint32_t)0x0704U)
#define SYSCTL_SCGCGPIO_OFFSET        ((uint32_t)0x0708U)
#define SYSCTL_SCGCDMA_OFFSET         ((uint32_t)0x070CU)
#define SYSCTL_SCGCHIB_OFFSET         ((uint32_t)0x0714U)
#define SYSCTL_SCGCUART_OFFSET        ((uint32_t)0x0718U)
#define SYSCTL_SCGCSSI_OFFSET         ((uint32_t)0x071CU)
#define SYSCTL_SCGCI2C_OFFSET         ((uint32_t)0x0720U)
#define SYSCTL_SCGCUSB_OFFSET         ((uint32_t)0x0728U)
#define SYSCTL_SCGCCAN_OFFSET         ((uint32_t)0x0734U)
#define SYSCTL_SCGCADC_OFFSET         ((uint32_t)0x0738U)
#define SYSCTL_SCGCACMP_OFFSET        ((uint32_t)0x073CU)
#define SYSCTL_SCGCPWM_OFFSET         ((uint32_t)0x0740U)
#define SYSCTL_SCGCQEI_OFFSET         ((uint32_t)0x0744U)
#define SYSCTL_SCGCEEPROM_OFFSET      ((uint32_t)0x0758U)
#define SYSCTL_SCGCWTIMER_OFFSET      ((uint32_t)0x075CU)

#define SYSCTL_DCGC_OFFSET          ((uint32_t)0x0800U)
#define SYSCTL_DCGCWD_OFFSET          ((uint32_t)0x0800U)
#define SYSCTL_DCGCTIMER_OFFSET       ((uint32_t)0x0804U)
#define SYSCTL_DCGCGPIO_OFFSET        ((uint32_t)0x0808U)
#define SYSCTL_DCGCDMA_OFFSET         ((uint32_t)0x080CU)
#define SYSCTL_DCGCHIB_OFFSET         ((uint32_t)0x0814U)
#define SYSCTL_DCGCUART_OFFSET        ((uint32_t)0x0818U)
#define SYSCTL_DCGCSSI_OFFSET         ((uint32_t)0x081CU)
#define SYSCTL_DCGCI2C_OFFSET         ((uint32_t)0x0820U)
#define SYSCTL_DCGCUSB_OFFSET         ((uint32_t)0x0828U)
#define SYSCTL_DCGCCAN_OFFSET         ((uint32_t)0x0834U)
#define SYSCTL_DCGCADC_OFFSET         ((uint32_t)0x0838U)
#define SYSCTL_DCGCACMP_OFFSET        ((uint32_t)0x083CU)
#define SYSCTL_DCGCPWM_OFFSET         ((uint32_t)0x0840U)
#define SYSCTL_DCGCQEI_OFFSET         ((uint32_t)0x0844U)
#define SYSCTL_DCGCEEPROM_OFFSET      ((uint32_t)0x0858U)
#define SYSCTL_DCGCWTIMER_OFFSET      ((uint32_t)0x085CU)

#define SYSCTL_PR_OFFSET          ((uint32_t)0x0A00U)
#define SYSCTL_PRWD_OFFSET          ((uint32_t)0x0A00U)
#define SYSCTL_PRTIMER_OFFSET       ((uint32_t)0x0A04U)
#define SYSCTL_PRGPIO_OFFSET        ((uint32_t)0x0A08U)
#define SYSCTL_PRDMA_OFFSET         ((uint32_t)0x0A0CU)
#define SYSCTL_PRHIB_OFFSET         ((uint32_t)0x0A14U)
#define SYSCTL_PRUART_OFFSET        ((uint32_t)0x0A18U)
#define SYSCTL_PRSSI_OFFSET         ((uint32_t)0x0A1CU)
#define SYSCTL_PRI2C_OFFSET         ((uint32_t)0x0A20U)
#define SYSCTL_PRUSB_OFFSET         ((uint32_t)0x0A28U)
#define SYSCTL_PRCAN_OFFSET         ((uint32_t)0x0A34U)
#define SYSCTL_PRADC_OFFSET         ((uint32_t)0x0A38U)
#define SYSCTL_PRACMP_OFFSET        ((uint32_t)0x0A3CU)
#define SYSCTL_PRPWM_OFFSET         ((uint32_t)0x0A40U)
#define SYSCTL_PRQEI_OFFSET         ((uint32_t)0x0A44U)
#define SYSCTL_PREEPROM_OFFSET      ((uint32_t)0x0A58U)
#define SYSCTL_PRWTIMER_OFFSET      ((uint32_t)0x0A5CU)

#define SYSCTL_DC0_OFFSET       ((uint32_t)0x0008U)
#define SYSCTL_DC1_OFFSET       ((uint32_t)0x0010U)
#define SYSCTL_DC2_OFFSET       ((uint32_t)0x0014U)
#define SYSCTL_DC3_OFFSET       ((uint32_t)0x0018U)
#define SYSCTL_DC4_OFFSET       ((uint32_t)0x001CU)
#define SYSCTL_DC5_OFFSET       ((uint32_t)0x0020U)
#define SYSCTL_DC6_OFFSET       ((uint32_t)0x0024U)
#define SYSCTL_DC7_OFFSET       ((uint32_t)0x0028U)
#define SYSCTL_DC8_OFFSET       ((uint32_t)0x002CU)
#define SYSCTL_DC9_OFFSET       ((uint32_t)0x0190U)

#define SYSCTL_SRCR0_OFFSET     ((uint32_t)0x0040U)
#define SYSCTL_SRCR1_OFFSET     ((uint32_t)0x0044U)
#define SYSCTL_SRCR2_OFFSET     ((uint32_t)0x0048U)
#define SYSCTL_RCGC0_OFFSET     ((uint32_t)0x0100U)
#define SYSCTL_RCGC1_OFFSET     ((uint32_t)0x0104U)
#define SYSCTL_RCGC2_OFFSET     ((uint32_t)0x0108U)
#define SYSCTL_SCGC0_OFFSET     ((uint32_t)0x0110U)
#define SYSCTL_SCGC1_OFFSET     ((uint32_t)0x0114U)
#define SYSCTL_SCGC2_OFFSET     ((uint32_t)0x0118U)
#define SYSCTL_DCGC0_OFFSET     ((uint32_t)0x0120U)
#define SYSCTL_DCGC1_OFFSET     ((uint32_t)0x0124U)
#define SYSCTL_DCGC2_OFFSET     ((uint32_t)0x0128U)

#define SYSCTL_NVMSTAT_OFFSET   ((uint32_t)0x01A0U)



#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERADDRESS_H_ */
