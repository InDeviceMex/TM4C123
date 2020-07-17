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

#include <stdint.h>

#define SYSCTL_BASE            ((uint32_t)0x400FE000u)
#define SYSCTL_BITBANDING_BASE ((uint32_t)0x42000000u)
#define SYSCTL_OFFSET          ((uint32_t)0x000FE000u)




#define SYSCTL_DID0_OFFSET          ((uint32_t)0x0000u)
#define SYSCTL_DID1_OFFSET          ((uint32_t)0x0004u)

#define SYSCTL_PBORCTL_OFFSET       ((uint32_t)0x0030u)

#define SYSCTL_RIS_OFFSET           ((uint32_t)0x0050u)
#define SYSCTL_IMC_OFFSET           ((uint32_t)0x0054u)
#define SYSCTL_MISC_OFFSET          ((uint32_t)0x0058u)

#define SYSCTL_RESC_OFFSET          ((uint32_t)0x005Cu)

#define SYSCTL_RCC_OFFSET           ((uint32_t)0x0060u)
#define SYSCTL_RCC2_OFFSET          ((uint32_t)0x0070u)

#define SYSCTL_GPIOHBCTL_OFFSET     ((uint32_t)0x006Cu)
#define SYSCTL_MOSCCTL_OFFSET       ((uint32_t)0x007Cu)
#define SYSCTL_RMCTL_OFFSET         ((uint32_t)0x00F0u)

#define SYSCTL_FMPRE0_ALIAS_OFFSET  ((uint32_t)0x0130u)
#define SYSCTL_FMPPE0_ALIAS_OFFSET  ((uint32_t)0x0134u)

#define SYSCTL_SYSPROP_OFFSET       ((uint32_t)0x014Cu)

#define SYSCTL_PIOSCCAL_OFFSET      ((uint32_t)0x0150u)
#define SYSCTL_PIOSCSTAT_OFFSET     ((uint32_t)0x0154u)

#define SYSCTL_PLLFREQ0_OFFSET      ((uint32_t)0x0160u)
#define SYSCTL_PLLFREQ1_OFFSET      ((uint32_t)0x0164u)
#define SYSCTL_PLLSTAT_OFFSET       ((uint32_t)0x0168u)

#define SYSCTL_SLSRWRCFG_OFFSET     ((uint32_t)0x0188u)
#define SYSCTL_DSLSRWRCFG_OFFSET    ((uint32_t)0x018Cu)
#define SYSCTL_DSLPCLKCFG_OFFSET    ((uint32_t)0x0144u)

#define SYSCTL_LDOSPCTL_OFFSET      ((uint32_t)0x01B4u)
#define SYSCTL_LDOSPCAL_OFFSET      ((uint32_t)0x01B8u)
#define SYSCTL_LDODPCTL_OFFSET      ((uint32_t)0x01BCu)
#define SYSCTL_LDODPCAL_OFFSET      ((uint32_t)0x01C0u)

#define SYSCTL_SDPMST_OFFSET        ((uint32_t)0x01CCu)

#define SYSCTL_BOOTCFG_OFFSET       ((uint32_t)0x01D0u)

#define SYSCTL_USER_REG0_OFFSET     ((uint32_t)0x01E0u)
#define SYSCTL_USER_REG1_OFFSET     ((uint32_t)0x01E4u)
#define SYSCTL_USER_REG2_OFFSET     ((uint32_t)0x01E8u)
#define SYSCTL_USER_REG3_OFFSET     ((uint32_t)0x01ECu)

#define SYSCTL_FMPRE0_OFFSET        ((uint32_t)0x0200u)
#define SYSCTL_FMPRE1_OFFSET        ((uint32_t)0x0204u)
#define SYSCTL_FMPRE2_OFFSET        ((uint32_t)0x0208u)
#define SYSCTL_FMPRE3_OFFSET        ((uint32_t)0x020Cu)

#define SYSCTL_PPWD_OFFSET          ((uint32_t)0x0300u)
#define SYSCTL_PPTIMER_OFFSET       ((uint32_t)0x0304u)
#define SYSCTL_PPGPIO_OFFSET        ((uint32_t)0x0308u)
#define SYSCTL_PPDMA_OFFSET         ((uint32_t)0x030Cu)
#define SYSCTL_PPHIB_OFFSET         ((uint32_t)0x0314u)
#define SYSCTL_PPUART_OFFSET        ((uint32_t)0x0318u)
#define SYSCTL_PPSSI_OFFSET         ((uint32_t)0x031Cu)
#define SYSCTL_PPI2C_OFFSET         ((uint32_t)0x0320u)
#define SYSCTL_PPUSB_OFFSET         ((uint32_t)0x0328u)
#define SYSCTL_PPCAN_OFFSET         ((uint32_t)0x0334u)
#define SYSCTL_PPADC_OFFSET         ((uint32_t)0x0338u)
#define SYSCTL_PPACMP_OFFSET        ((uint32_t)0x033Cu)
#define SYSCTL_PPPWM_OFFSET         ((uint32_t)0x0340u)
#define SYSCTL_PPQEI_OFFSET         ((uint32_t)0x0344u)
#define SYSCTL_PPEEPROM_OFFSET      ((uint32_t)0x0358u)
#define SYSCTL_PPWTIMER_OFFSET      ((uint32_t)0x035Cu)

#define SYSCTL_FMPPE0_OFFSET        ((uint32_t)0x0400u)
#define SYSCTL_FMPPE1_OFFSET        ((uint32_t)0x0404u)
#define SYSCTL_FMPPE2_OFFSET        ((uint32_t)0x0408u)
#define SYSCTL_FMPPE3_OFFSET        ((uint32_t)0x040Cu)

#define SYSCTL_SRWD_OFFSET          ((uint32_t)0x0500u)
#define SYSCTL_SRTIMER_OFFSET       ((uint32_t)0x0504u)
#define SYSCTL_SRGPIO_OFFSET        ((uint32_t)0x0508u)
#define SYSCTL_SRDMA_OFFSET         ((uint32_t)0x050Cu)
#define SYSCTL_SRHIB_OFFSET         ((uint32_t)0x0514u)
#define SYSCTL_SRUART_OFFSET        ((uint32_t)0x0518u)
#define SYSCTL_SRSSI_OFFSET         ((uint32_t)0x051Cu)
#define SYSCTL_SRI2C_OFFSET         ((uint32_t)0x0520u)
#define SYSCTL_SRUSB_OFFSET         ((uint32_t)0x0528u)
#define SYSCTL_SRCAN_OFFSET         ((uint32_t)0x0534u)
#define SYSCTL_SRADC_OFFSET         ((uint32_t)0x0538u)
#define SYSCTL_SRACMP_OFFSET        ((uint32_t)0x053Cu)
#define SYSCTL_SRPWM_OFFSET         ((uint32_t)0x0540u)
#define SYSCTL_SRQEI_OFFSET         ((uint32_t)0x0544u)
#define SYSCTL_SREEPROM_OFFSET      ((uint32_t)0x0558u)
#define SYSCTL_SRWTIMER_OFFSET      ((uint32_t)0x055Cu)

#define SYSCTL_RCGCWD_OFFSET          ((uint32_t)0x0600u)
#define SYSCTL_RCGCTIMER_OFFSET       ((uint32_t)0x0604u)
#define SYSCTL_RCGCGPIO_OFFSET        ((uint32_t)0x0608u)
#define SYSCTL_RCGCDMA_OFFSET         ((uint32_t)0x060Cu)
#define SYSCTL_RCGCHIB_OFFSET         ((uint32_t)0x0614u)
#define SYSCTL_RCGCUART_OFFSET        ((uint32_t)0x0618u)
#define SYSCTL_RCGCSSI_OFFSET         ((uint32_t)0x061Cu)
#define SYSCTL_RCGCI2C_OFFSET         ((uint32_t)0x0620u)
#define SYSCTL_RCGCUSB_OFFSET         ((uint32_t)0x0628u)
#define SYSCTL_RCGCCAN_OFFSET         ((uint32_t)0x0634u)
#define SYSCTL_RCGCADC_OFFSET         ((uint32_t)0x0638u)
#define SYSCTL_RCGCACMP_OFFSET        ((uint32_t)0x063Cu)
#define SYSCTL_RCGCPWM_OFFSET         ((uint32_t)0x0640u)
#define SYSCTL_RCGCQEI_OFFSET         ((uint32_t)0x0644u)
#define SYSCTL_RCGCEEPROM_OFFSET      ((uint32_t)0x0658u)
#define SYSCTL_RCGCWTIMER_OFFSET      ((uint32_t)0x065Cu)

#define SYSCTL_SCGCWD_OFFSET          ((uint32_t)0x0700u)
#define SYSCTL_SCGCTIMER_OFFSET       ((uint32_t)0x0704u)
#define SYSCTL_SCGCGPIO_OFFSET        ((uint32_t)0x0708u)
#define SYSCTL_SCGCDMA_OFFSET         ((uint32_t)0x070Cu)
#define SYSCTL_SCGCHIB_OFFSET         ((uint32_t)0x0714u)
#define SYSCTL_SCGCUART_OFFSET        ((uint32_t)0x0718u)
#define SYSCTL_SCGCSSI_OFFSET         ((uint32_t)0x071Cu)
#define SYSCTL_SCGCI2C_OFFSET         ((uint32_t)0x0720u)
#define SYSCTL_SCGCUSB_OFFSET         ((uint32_t)0x0728u)
#define SYSCTL_SCGCCAN_OFFSET         ((uint32_t)0x0734u)
#define SYSCTL_SCGCADC_OFFSET         ((uint32_t)0x0738u)
#define SYSCTL_SCGCACMP_OFFSET        ((uint32_t)0x073Cu)
#define SYSCTL_SCGCPWM_OFFSET         ((uint32_t)0x0740u)
#define SYSCTL_SCGCQEI_OFFSET         ((uint32_t)0x0744u)
#define SYSCTL_SCGCEEPROM_OFFSET      ((uint32_t)0x0758u)
#define SYSCTL_SCGCWTIMER_OFFSET      ((uint32_t)0x075Cu)

#define SYSCTL_DCGCWD_OFFSET          ((uint32_t)0x0800u)
#define SYSCTL_DCGCTIMER_OFFSET       ((uint32_t)0x0804u)
#define SYSCTL_DCGCGPIO_OFFSET        ((uint32_t)0x0808u)
#define SYSCTL_DCGCDMA_OFFSET         ((uint32_t)0x080Cu)
#define SYSCTL_DCGCHIB_OFFSET         ((uint32_t)0x0814u)
#define SYSCTL_DCGCUART_OFFSET        ((uint32_t)0x0818u)
#define SYSCTL_DCGCSSI_OFFSET         ((uint32_t)0x081Cu)
#define SYSCTL_DCGCI2C_OFFSET         ((uint32_t)0x0820u)
#define SYSCTL_DCGCUSB_OFFSET         ((uint32_t)0x0828u)
#define SYSCTL_DCGCCAN_OFFSET         ((uint32_t)0x0834u)
#define SYSCTL_DCGCADC_OFFSET         ((uint32_t)0x0838u)
#define SYSCTL_DCGCACMP_OFFSET        ((uint32_t)0x083Cu)
#define SYSCTL_DCGCPWM_OFFSET         ((uint32_t)0x0840u)
#define SYSCTL_DCGCQEI_OFFSET         ((uint32_t)0x0844u)
#define SYSCTL_DCGCEEPROM_OFFSET      ((uint32_t)0x0858u)
#define SYSCTL_DCGCWTIMER_OFFSET      ((uint32_t)0x085Cu)

#define SYSCTL_PRWD_OFFSET          ((uint32_t)0x0A00u)
#define SYSCTL_PRTIMER_OFFSET       ((uint32_t)0x0A04u)
#define SYSCTL_PRGPIO_OFFSET        ((uint32_t)0x0A08u)
#define SYSCTL_PRDMA_OFFSET         ((uint32_t)0x0A0Cu)
#define SYSCTL_PRHIB_OFFSET         ((uint32_t)0x0A14u)
#define SYSCTL_PRUART_OFFSET        ((uint32_t)0x0A18u)
#define SYSCTL_PRSSI_OFFSET         ((uint32_t)0x0A1Cu)
#define SYSCTL_PRI2C_OFFSET         ((uint32_t)0x0A20u)
#define SYSCTL_PRUSB_OFFSET         ((uint32_t)0x0A28u)
#define SYSCTL_PRCAN_OFFSET         ((uint32_t)0x0A34u)
#define SYSCTL_PRADC_OFFSET         ((uint32_t)0x0A38u)
#define SYSCTL_PRACMP_OFFSET        ((uint32_t)0x0A3Cu)
#define SYSCTL_PRPWM_OFFSET         ((uint32_t)0x0A40u)
#define SYSCTL_PRQEI_OFFSET         ((uint32_t)0x0A44u)
#define SYSCTL_PREEPROM_OFFSET      ((uint32_t)0x0A58u)
#define SYSCTL_PRWTIMER_OFFSET      ((uint32_t)0x0A5Cu)

#define SYSCTL_DC0_OFFSET       ((uint32_t)0x0008u)
#define SYSCTL_DC1_OFFSET       ((uint32_t)0x0010u)
#define SYSCTL_DC2_OFFSET       ((uint32_t)0x0014u)
#define SYSCTL_DC3_OFFSET       ((uint32_t)0x0018u)
#define SYSCTL_DC4_OFFSET       ((uint32_t)0x001Cu)
#define SYSCTL_DC5_OFFSET       ((uint32_t)0x0020u)
#define SYSCTL_DC6_OFFSET       ((uint32_t)0x0024u)
#define SYSCTL_DC7_OFFSET       ((uint32_t)0x0028u)
#define SYSCTL_DC8_OFFSET       ((uint32_t)0x002Cu)
#define SYSCTL_DC9_OFFSET       ((uint32_t)0x0190u)

#define SYSCTL_SRCR0_OFFSET     ((uint32_t)0x0040u)
#define SYSCTL_SRCR1_OFFSET     ((uint32_t)0x0044u)
#define SYSCTL_SRCR2_OFFSET     ((uint32_t)0x0048u)
#define SYSCTL_RCGC0_OFFSET     ((uint32_t)0x0100u)
#define SYSCTL_RCGC1_OFFSET     ((uint32_t)0x0104u)
#define SYSCTL_RCGC2_OFFSET     ((uint32_t)0x0108u)
#define SYSCTL_SCGC0_OFFSET     ((uint32_t)0x0110u)
#define SYSCTL_SCGC1_OFFSET     ((uint32_t)0x0114u)
#define SYSCTL_SCGC2_OFFSET     ((uint32_t)0x0118u)
#define SYSCTL_DCGC0_OFFSET     ((uint32_t)0x0120u)
#define SYSCTL_DCGC1_OFFSET     ((uint32_t)0x0124u)
#define SYSCTL_DCGC2_OFFSET     ((uint32_t)0x0128u)

#define SYSCTL_NVMSTAT_OFFSET   ((uint32_t)0x01A0u)



#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERADDRESS_H_ */
