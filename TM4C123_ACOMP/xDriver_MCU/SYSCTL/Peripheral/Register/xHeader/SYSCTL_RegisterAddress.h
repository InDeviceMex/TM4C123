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

#define SYSCTL_BASE    ((uint32_t) 0x400FE000UL)
#define SYSCTL_BITBANDING_BASE ((uint32_t) 0x42000000UL)
#define SYSCTL_OFFSET    ((uint32_t) 0x000FE000UL)

#define SYSCTL_DID0_OFFSET    ((uint32_t) 0x0000UL)
#define SYSCTL_DID1_OFFSET    ((uint32_t) 0x0004UL)

#define SYSCTL_PBORCTL_OFFSET    ((uint32_t) 0x0030UL)

#define SYSCTL_RIS_OFFSET    ((uint32_t) 0x0050UL)
#define SYSCTL_IMC_OFFSET    ((uint32_t) 0x0054UL)
#define SYSCTL_MISC_OFFSET    ((uint32_t) 0x0058UL)

#define SYSCTL_RESC_OFFSET    ((uint32_t) 0x005CUL)

#define SYSCTL_RCC_OFFSET    ((uint32_t) 0x0060UL)
#define SYSCTL_RCC2_OFFSET    ((uint32_t) 0x0070UL)

#define SYSCTL_GPIOHBCTL_OFFSET    ((uint32_t) 0x006CUL)
#define SYSCTL_MOSCCTL_OFFSET    ((uint32_t) 0x007CUL)
#define SYSCTL_RMCTL_OFFSET    ((uint32_t) 0x00F0UL)

#define SYSCTL_FMPRE0_ALIAS_OFFSET    ((uint32_t) 0x0130UL)
#define SYSCTL_FMPPE0_ALIAS_OFFSET    ((uint32_t) 0x0134UL)

#define SYSCTL_SYSPROP_OFFSET    ((uint32_t) 0x014CUL)

#define SYSCTL_PIOSCCAL_OFFSET    ((uint32_t) 0x0150UL)
#define SYSCTL_PIOSCSTAT_OFFSET    ((uint32_t) 0x0154UL)

#define SYSCTL_PLLFREQ0_OFFSET    ((uint32_t) 0x0160UL)
#define SYSCTL_PLLFREQ1_OFFSET    ((uint32_t) 0x0164UL)
#define SYSCTL_PLLSTAT_OFFSET    ((uint32_t) 0x0168UL)

#define SYSCTL_SLSRWRCFG_OFFSET    ((uint32_t) 0x0188UL)
#define SYSCTL_DSLSRWRCFG_OFFSET    ((uint32_t) 0x018CUL)
#define SYSCTL_DSLPCLKCFG_OFFSET    ((uint32_t) 0x0144UL)

#define SYSCTL_LDOSPCTL_OFFSET    ((uint32_t) 0x01B4UL)
#define SYSCTL_LDOSPCAL_OFFSET    ((uint32_t) 0x01B8UL)
#define SYSCTL_LDODPCTL_OFFSET    ((uint32_t) 0x01BCUL)
#define SYSCTL_LDODPCAL_OFFSET    ((uint32_t) 0x01C0UL)

#define SYSCTL_SDPMST_OFFSET    ((uint32_t) 0x01CCUL)

#define SYSCTL_BOOTCFG_OFFSET    ((uint32_t) 0x01D0UL)

#define SYSCTL_USER_REG0_OFFSET    ((uint32_t) 0x01E0UL)
#define SYSCTL_USER_REG1_OFFSET    ((uint32_t) 0x01E4UL)
#define SYSCTL_USER_REG2_OFFSET    ((uint32_t) 0x01E8UL)
#define SYSCTL_USER_REG3_OFFSET    ((uint32_t) 0x01ECUL)

#define SYSCTL_FMPRE0_OFFSET    ((uint32_t) 0x0200UL)
#define SYSCTL_FMPRE1_OFFSET    ((uint32_t) 0x0204UL)
#define SYSCTL_FMPRE2_OFFSET    ((uint32_t) 0x0208UL)
#define SYSCTL_FMPRE3_OFFSET    ((uint32_t) 0x020CUL)

#define SYSCTL_PP_OFFSET    ((uint32_t) 0x0300UL)
#define SYSCTL_PPWD_OFFSET    ((uint32_t) 0x0300UL)
#define SYSCTL_PPTIMER_OFFSET    ((uint32_t) 0x0304UL)
#define SYSCTL_PPGPIO_OFFSET    ((uint32_t) 0x0308UL)
#define SYSCTL_PPDMA_OFFSET    ((uint32_t) 0x030CUL)
#define SYSCTL_PPHIB_OFFSET    ((uint32_t) 0x0314UL)
#define SYSCTL_PPUART_OFFSET    ((uint32_t) 0x0318UL)
#define SYSCTL_PPSSI_OFFSET    ((uint32_t) 0x031CUL)
#define SYSCTL_PPI2C_OFFSET    ((uint32_t) 0x0320UL)
#define SYSCTL_PPUSB_OFFSET    ((uint32_t) 0x0328UL)
#define SYSCTL_PPCAN_OFFSET    ((uint32_t) 0x0334UL)
#define SYSCTL_PPADC_OFFSET    ((uint32_t) 0x0338UL)
#define SYSCTL_PPACMP_OFFSET    ((uint32_t) 0x033CUL)
#define SYSCTL_PPPWM_OFFSET    ((uint32_t) 0x0340UL)
#define SYSCTL_PPQEI_OFFSET    ((uint32_t) 0x0344UL)
#define SYSCTL_PPEEPROM_OFFSET    ((uint32_t) 0x0358UL)
#define SYSCTL_PPWTIMER_OFFSET    ((uint32_t) 0x035CUL)

#define SYSCTL_FMPPE0_OFFSET    ((uint32_t) 0x0400UL)
#define SYSCTL_FMPPE1_OFFSET    ((uint32_t) 0x0404UL)
#define SYSCTL_FMPPE2_OFFSET    ((uint32_t) 0x0408UL)
#define SYSCTL_FMPPE3_OFFSET    ((uint32_t) 0x040CUL)

#define SYSCTL_SR_OFFSET    ((uint32_t) 0x0500UL)
#define SYSCTL_SRWD_OFFSET    ((uint32_t) 0x0500UL)
#define SYSCTL_SRTIMER_OFFSET    ((uint32_t) 0x0504UL)
#define SYSCTL_SRGPIO_OFFSET    ((uint32_t) 0x0508UL)
#define SYSCTL_SRDMA_OFFSET    ((uint32_t) 0x050CUL)
#define SYSCTL_SRHIB_OFFSET    ((uint32_t) 0x0514UL)
#define SYSCTL_SRUART_OFFSET    ((uint32_t) 0x0518UL)
#define SYSCTL_SRSSI_OFFSET    ((uint32_t) 0x051CUL)
#define SYSCTL_SRI2C_OFFSET    ((uint32_t) 0x0520UL)
#define SYSCTL_SRUSB_OFFSET    ((uint32_t) 0x0528UL)
#define SYSCTL_SRCAN_OFFSET    ((uint32_t) 0x0534UL)
#define SYSCTL_SRADC_OFFSET    ((uint32_t) 0x0538UL)
#define SYSCTL_SRACMP_OFFSET    ((uint32_t) 0x053CUL)
#define SYSCTL_SRPWM_OFFSET    ((uint32_t) 0x0540UL)
#define SYSCTL_SRQEI_OFFSET    ((uint32_t) 0x0544UL)
#define SYSCTL_SREEPROM_OFFSET    ((uint32_t) 0x0558UL)
#define SYSCTL_SRWTIMER_OFFSET    ((uint32_t) 0x055CUL)

#define SYSCTL_RCGC_OFFSET    ((uint32_t) 0x0600UL)
#define SYSCTL_RCGCWD_OFFSET    ((uint32_t) 0x0600UL)
#define SYSCTL_RCGCTIMER_OFFSET    ((uint32_t) 0x0604UL)
#define SYSCTL_RCGCGPIO_OFFSET    ((uint32_t) 0x0608UL)
#define SYSCTL_RCGCDMA_OFFSET    ((uint32_t) 0x060CUL)
#define SYSCTL_RCGCHIB_OFFSET    ((uint32_t) 0x0614UL)
#define SYSCTL_RCGCUART_OFFSET    ((uint32_t) 0x0618UL)
#define SYSCTL_RCGCSSI_OFFSET    ((uint32_t) 0x061CUL)
#define SYSCTL_RCGCI2C_OFFSET    ((uint32_t) 0x0620UL)
#define SYSCTL_RCGCUSB_OFFSET    ((uint32_t) 0x0628UL)
#define SYSCTL_RCGCCAN_OFFSET    ((uint32_t) 0x0634UL)
#define SYSCTL_RCGCADC_OFFSET    ((uint32_t) 0x0638UL)
#define SYSCTL_RCGCACMP_OFFSET    ((uint32_t) 0x063CUL)
#define SYSCTL_RCGCPWM_OFFSET    ((uint32_t) 0x0640UL)
#define SYSCTL_RCGCQEI_OFFSET    ((uint32_t) 0x0644UL)
#define SYSCTL_RCGCEEPROM_OFFSET    ((uint32_t) 0x0658UL)
#define SYSCTL_RCGCWTIMER_OFFSET    ((uint32_t) 0x065CUL)

#define SYSCTL_SCGC_OFFSET    ((uint32_t) 0x0700UL)
#define SYSCTL_SCGCWD_OFFSET    ((uint32_t) 0x0700UL)
#define SYSCTL_SCGCTIMER_OFFSET    ((uint32_t) 0x0704UL)
#define SYSCTL_SCGCGPIO_OFFSET    ((uint32_t) 0x0708UL)
#define SYSCTL_SCGCDMA_OFFSET    ((uint32_t) 0x070CUL)
#define SYSCTL_SCGCHIB_OFFSET    ((uint32_t) 0x0714UL)
#define SYSCTL_SCGCUART_OFFSET    ((uint32_t) 0x0718UL)
#define SYSCTL_SCGCSSI_OFFSET    ((uint32_t) 0x071CUL)
#define SYSCTL_SCGCI2C_OFFSET    ((uint32_t) 0x0720UL)
#define SYSCTL_SCGCUSB_OFFSET    ((uint32_t) 0x0728UL)
#define SYSCTL_SCGCCAN_OFFSET    ((uint32_t) 0x0734UL)
#define SYSCTL_SCGCADC_OFFSET    ((uint32_t) 0x0738UL)
#define SYSCTL_SCGCACMP_OFFSET    ((uint32_t) 0x073CUL)
#define SYSCTL_SCGCPWM_OFFSET    ((uint32_t) 0x0740UL)
#define SYSCTL_SCGCQEI_OFFSET    ((uint32_t) 0x0744UL)
#define SYSCTL_SCGCEEPROM_OFFSET    ((uint32_t) 0x0758UL)
#define SYSCTL_SCGCWTIMER_OFFSET    ((uint32_t) 0x075CUL)

#define SYSCTL_DCGC_OFFSET    ((uint32_t) 0x0800UL)
#define SYSCTL_DCGCWD_OFFSET    ((uint32_t) 0x0800UL)
#define SYSCTL_DCGCTIMER_OFFSET    ((uint32_t) 0x0804UL)
#define SYSCTL_DCGCGPIO_OFFSET    ((uint32_t) 0x0808UL)
#define SYSCTL_DCGCDMA_OFFSET    ((uint32_t) 0x080CUL)
#define SYSCTL_DCGCHIB_OFFSET    ((uint32_t) 0x0814UL)
#define SYSCTL_DCGCUART_OFFSET    ((uint32_t) 0x0818UL)
#define SYSCTL_DCGCSSI_OFFSET    ((uint32_t) 0x081CUL)
#define SYSCTL_DCGCI2C_OFFSET    ((uint32_t) 0x0820UL)
#define SYSCTL_DCGCUSB_OFFSET    ((uint32_t) 0x0828UL)
#define SYSCTL_DCGCCAN_OFFSET    ((uint32_t) 0x0834UL)
#define SYSCTL_DCGCADC_OFFSET    ((uint32_t) 0x0838UL)
#define SYSCTL_DCGCACMP_OFFSET    ((uint32_t) 0x083CUL)
#define SYSCTL_DCGCPWM_OFFSET    ((uint32_t) 0x0840UL)
#define SYSCTL_DCGCQEI_OFFSET    ((uint32_t) 0x0844UL)
#define SYSCTL_DCGCEEPROM_OFFSET    ((uint32_t) 0x0858UL)
#define SYSCTL_DCGCWTIMER_OFFSET    ((uint32_t) 0x085CUL)

#define SYSCTL_PR_OFFSET    ((uint32_t) 0x0A00UL)
#define SYSCTL_PRWD_OFFSET    ((uint32_t) 0x0A00UL)
#define SYSCTL_PRTIMER_OFFSET    ((uint32_t) 0x0A04UL)
#define SYSCTL_PRGPIO_OFFSET    ((uint32_t) 0x0A08UL)
#define SYSCTL_PRDMA_OFFSET    ((uint32_t) 0x0A0CUL)
#define SYSCTL_PRHIB_OFFSET    ((uint32_t) 0x0A14UL)
#define SYSCTL_PRUART_OFFSET    ((uint32_t) 0x0A18UL)
#define SYSCTL_PRSSI_OFFSET    ((uint32_t) 0x0A1CUL)
#define SYSCTL_PRI2C_OFFSET    ((uint32_t) 0x0A20UL)
#define SYSCTL_PRUSB_OFFSET    ((uint32_t) 0x0A28UL)
#define SYSCTL_PRCAN_OFFSET    ((uint32_t) 0x0A34UL)
#define SYSCTL_PRADC_OFFSET    ((uint32_t) 0x0A38UL)
#define SYSCTL_PRACMP_OFFSET    ((uint32_t) 0x0A3CUL)
#define SYSCTL_PRPWM_OFFSET    ((uint32_t) 0x0A40UL)
#define SYSCTL_PRQEI_OFFSET    ((uint32_t) 0x0A44UL)
#define SYSCTL_PREEPROM_OFFSET    ((uint32_t) 0x0A58UL)
#define SYSCTL_PRWTIMER_OFFSET    ((uint32_t) 0x0A5CUL)

#define SYSCTL_DC0_OFFSET    ((uint32_t) 0x0008UL)
#define SYSCTL_DC1_OFFSET    ((uint32_t) 0x0010UL)
#define SYSCTL_DC2_OFFSET    ((uint32_t) 0x0014UL)
#define SYSCTL_DC3_OFFSET    ((uint32_t) 0x0018UL)
#define SYSCTL_DC4_OFFSET    ((uint32_t) 0x001CUL)
#define SYSCTL_DC5_OFFSET    ((uint32_t) 0x0020UL)
#define SYSCTL_DC6_OFFSET    ((uint32_t) 0x0024UL)
#define SYSCTL_DC7_OFFSET    ((uint32_t) 0x0028UL)
#define SYSCTL_DC8_OFFSET    ((uint32_t) 0x002CUL)
#define SYSCTL_DC9_OFFSET    ((uint32_t) 0x0190UL)

#define SYSCTL_SRCR0_OFFSET    ((uint32_t) 0x0040UL)
#define SYSCTL_SRCR1_OFFSET    ((uint32_t) 0x0044UL)
#define SYSCTL_SRCR2_OFFSET    ((uint32_t) 0x0048UL)
#define SYSCTL_RCGC0_OFFSET    ((uint32_t) 0x0100UL)
#define SYSCTL_RCGC1_OFFSET    ((uint32_t) 0x0104UL)
#define SYSCTL_RCGC2_OFFSET    ((uint32_t) 0x0108UL)
#define SYSCTL_SCGC0_OFFSET    ((uint32_t) 0x0110UL)
#define SYSCTL_SCGC1_OFFSET    ((uint32_t) 0x0114UL)
#define SYSCTL_SCGC2_OFFSET    ((uint32_t) 0x0118UL)
#define SYSCTL_DCGC0_OFFSET    ((uint32_t) 0x0120UL)
#define SYSCTL_DCGC1_OFFSET    ((uint32_t) 0x0124UL)
#define SYSCTL_DCGC2_OFFSET    ((uint32_t) 0x0128UL)

#define SYSCTL_NVMSTAT_OFFSET    ((uint32_t) 0x01A0UL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERADDRESS_H_ */
