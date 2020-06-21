/**
 *
 * @file SYSCTL_StructPeripheral_Bitbanding.h
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
 * @verbatim 20 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL_Peripheral/SYSCTL_Struct/SYSCTL_StructRegister_Bitbanding.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t                   DID0[32];
        BITBANDING_DID0_TypeDef             DID0_Bit;
    };
    union
    {
        volatile uint32_t                   DID1[32];
        BITBANDING_DID1_TypeDef             DID1_Bit;
    };
    union
    {
        volatile const uint32_t             DC0[32];
        BITBANDING_DC0_TypeDef              DC0_Bit;
    };
    const uint32_t                          reserved[1*32];
    union
    {
        volatile const uint32_t             DC1[32];
        BITBANDING_DC1_TypeDef              DC1_Bit;
    };
    union
    {
        volatile const uint32_t             DC2[32];
        BITBANDING_DC2_TypeDef              DC2_Bit;
    };
    union
    {
        volatile const uint32_t             DC3[32];
        BITBANDING_DC3_TypeDef              DC3_Bit;
    };
    union
    {
        volatile const uint32_t             DC4[32];
        BITBANDING_DC4_TypeDef              DC4_Bit;
    };
    union
    {
        volatile const uint32_t             DC5[32];
        BITBANDING_DC5_TypeDef              DC5_Bit;
    };
    union
    {
        volatile const uint32_t             DC6[32];
        BITBANDING_DC6_TypeDef              DC6_Bit;
    };
    union
    {
        volatile const uint32_t             DC7[32];
        BITBANDING_DC7_TypeDef              DC7_Bit;
    };
    union
    {
        volatile const uint32_t             DC8[32];
        BITBANDING_DC8_TypeDef              DC8_Bit;
    };
    union
    {
        volatile uint32_t                   PBORCTL[32];
        BITBANDING_PBORCTL_TypeDef          PBORCTL_Bit;
    };
    const uint32_t                          reserved1[3*32];
    union
    {
        volatile const uint32_t             SRCR0[32];
        BITBANDING_SRCR0_TypeDef            SRCR0_Bit;
    };
    union
    {
        volatile const uint32_t             SRCR1[32];
        BITBANDING_SRCR1_TypeDef            SRCR1_Bit;
    };
    union
    {
        volatile const uint32_t             SRCR2[32];
        BITBANDING_SRCR2_TypeDef            SRCR2_Bit;
    };
    const uint32_t                          reserved2[1*32];
    union
    {
        volatile uint32_t                   RIS[32];
        BITBANDING_RIS_TypeDef              RIS_Bit;
    };
    union
    {
        volatile uint32_t                   IMC[32];
        BITBANDING_IMC_TypeDef              IMC_Bit;
    };
    union
    {
        volatile uint32_t                   MISC[32];
        BITBANDING_MISC_TypeDef             MISC_Bit;
    };
    union
    {
        volatile uint32_t                   RESC[32];
        BITBANDING_RESC_TypeDef             RESC_Bit;
    };
    union
    {
        volatile uint32_t                   RCC[32];
        BITBANDING_RCC_TypeDef              RCC_Bit;
    };
    const uint32_t                          reserved3[2*32];
    union
    {
        volatile uint32_t                   GPIOHBCTL[32];
        BITBANDING_GPIOHBCTL_TypeDef        GPIOHBCTL_Bit;
    };
    union
    {
        volatile uint32_t                   RCC2[32];
        BITBANDING_RCC2_TypeDef             RCC2_Bit;
    };
    const uint32_t                          reserved4[2*32];
    union
    {
        volatile uint32_t                   MOSCCTL[32];
        BITBANDING_MOSCCTL_TypeDef          MOSCCTL_Bit;
    };
    const uint32_t                          reserved5[28*32];
    union
    {
        volatile uint32_t                   RMCTL[32];
        BITBANDING_RMCTL_TypeDef            RMCTL_Bit;
    };
    const uint32_t                          reserved6[3*32];
    union
    {
        volatile const uint32_t             RCGC0[32];
        BITBANDING_RCGC0_TypeDef            RCGC0_Bit;
    };
    union
    {
        volatile const uint32_t             RCGC1[32];
        BITBANDING_RCGC1_TypeDef            RCGC1_Bit;
    };
    union
    {
        volatile const uint32_t             RCGC2[32];
        BITBANDING_RCGC2_TypeDef            RCGC2_Bit;
    };
    const uint32_t                          reserved7[1*32];
    union
    {
        volatile const uint32_t             SCGC0[32];
        BITBANDING_SCGC0_TypeDef            SCGC0_Bit;
    };
    union
    {
        volatile const uint32_t             SCGC1[32];
        BITBANDING_SCGC1_TypeDef            SCGC1_Bit;
    };
    union
    {
        volatile const uint32_t             SCGC2[32];
        BITBANDING_SCGC2_TypeDef            SCGC2_Bit;
    };
    const uint32_t                          reserved8[1*32];
    union
    {
        volatile const uint32_t             DCGC0[32];
        BITBANDING_DCGC0_TypeDef            DCGC0_Bit;
    };
    union
    {
        volatile const uint32_t             DCGC1[32];
        BITBANDING_DCGC1_TypeDef            DCGC1_Bit;
    };
    union
    {
        volatile const uint32_t             DCGC2[32];
        BITBANDING_DCGC2_TypeDef            DCGC2_Bit;
    };
    const uint32_t                          reserved9[1*32];
    union
    {
        volatile const uint32_t             FMPRE0_ALIAS[32];
        BITBANDING_FMPRE_TypeDef            FMPRE0_ALIAS_Bit;
    };
    union
    {
        volatile const uint32_t             FMPPE0_ALIAS[32];
        BITBANDING_FMPPE_TypeDef            FMPPE0_ALIAS_Bit;
    };
    const uint32_t                          reserved10[3*32];
    union
    {
        volatile uint32_t                   DSLPCLKCFG[32];
        BITBANDING_DSLPCLKCFG_TypeDef       DSLPCLKCFG_Bit;
    };
    const uint32_t                          reserved11[1*32];
    union
    {
        volatile uint32_t                   SYSPROP[32];
        BITBANDING_SYSPROP_TypeDef          SYSPROP_Bit;
    };
    union
    {
        volatile uint32_t                   PIOSCCAL[32];
        BITBANDING_PIOSCCAL_TypeDef         PIOSCCAL_Bit;
    };
    union
    {
        volatile uint32_t                   PIOSCSTAT[32];
        BITBANDING_PIOSCSTAT_TypeDef        PIOSCSTAT_Bit;
    };
    const uint32_t                          reserved12[2*32];
    union
    {
        volatile uint32_t                   PLLFREQ0[32];
        BITBANDING_PLLFREQ0_TypeDef         PLLFREQ0_Bit;
    };
    union
    {
        volatile uint32_t                   PLLFREQ1[32];
        BITBANDING_PLLFREQ1_TypeDef         PLLFREQ1_Bit;
    };
    union
    {
        volatile uint32_t                   PLLSTAT[32];
        BITBANDING_PLLSTAT_TypeDef          PLLSTAT_Bit;
    };
    const uint32_t                          reserved13[7*32];
    union
    {
        volatile uint32_t                   SLSRWRCFG[32];
        BITBANDING_SLSRWRCFG_TypeDef        SLSRWRCFG_Bit;
    };
    union
    {
        volatile uint32_t                   DSLSRWRCFG[32];
        BITBANDING_DSLSRWRCFG_TypeDef       DSLSRWRCFG_Bit;
    };
    union
    {
        volatile uint32_t                   DC9[32];
        BITBANDING_DC9_TypeDef              DC9_Bit;
    };
    const uint32_t                          reserved14[3*32];
    union
    {
        volatile uint32_t                   NVMSTAT[32];
        BITBANDING_NVMSTAT_TypeDef          NVMSTAT_Bit;
    };
    const uint32_t                          reserved15[4*32];
    union
    {
        volatile uint32_t                   LDOSPCTL[32];
        BITBANDING_LDOSPCTL_TypeDef         LDOSPCTL_Bit;
    };
    union
    {
        volatile uint32_t                   LDOSPCAL[32];
        BITBANDING_LDOSPCAL_TypeDef         LDOSPCAL_Bit;
    };
    union
    {
        volatile uint32_t                   LDODPCTL[32];
        BITBANDING_LDODPCTL_TypeDef         LDODPCTL_Bit;
    };
    union
    {
        volatile uint32_t                   LDODPCAL[32];
        BITBANDING_LDODPCAL_TypeDef         LDODPCAL_Bit;
    };
    const uint32_t                          reserved16[2*32];
    union
    {
        volatile uint32_t                   SDPMST[32];
        BITBANDING_SDPMST_TypeDef           SDPMST_Bit;
    };
    union
    {
        volatile uint32_t                   BOOTCFG[32];
        BITBANDING_BOOTCFG_TypeDef          BOOTCFG_Bit;
    };
    const uint32_t                          reserved17[3*32];
    union
    {
        volatile uint32_t                   USER_REG0[32];
        USER_REG_TypeDef                    USER_REG0_Bit;
    };
    union
    {
        volatile uint32_t                   USER_REG1[32];
        USER_REG_TypeDef                    USER_REG1_Bit;
    };
    union
    {
        volatile uint32_t                   USER_REG2[32];
        USER_REG_TypeDef                    USER_REG2_Bit;
    };
    union
    {
        volatile uint32_t                   USER_REG3[32];
        USER_REG_TypeDef                    USER_REG3_Bit;
    };
    const uint32_t                          reserved18[4*32];
    union
    {
      volatile const uint32_t               FMPRE0[32];
      BITBANDING_FMPRE_TypeDef              FMPRE0_Bit;
    };
    union
    {
      volatile const uint32_t               FMPRE1[32];
      BITBANDING_FMPRE_TypeDef              FMPRE1_Bit;
    };
    union
    {
      volatile const uint32_t               FMPRE2[32];
      BITBANDING_FMPRE_TypeDef              FMPRE2_Bit;
    };
    union
    {
      volatile const uint32_t               FMPRE3[32];
      BITBANDING_FMPRE_TypeDef              FMPRE3_Bit;
    };
    const uint32_t                          reserved19[60*32];
    union
    {
        volatile const uint32_t             PP[24][32];
        const BITBANDING_PERIPHERAL_TypeDef PP_Bit[24];
    };
    const uint32_t                          reserved20[40*32];
    union
    {
        volatile const uint32_t             FMPPE0[32];
        const BITBANDING_FMPPE_TypeDef      FMPPE0_Bit;
    };
    union
    {
        volatile const uint32_t             FMPPE1[32];
        const BITBANDING_FMPPE_TypeDef      FMPPE1_Bit;
    };
    union
    {
        volatile const uint32_t             FMPPE2[32];
        const BITBANDING_FMPPE_TypeDef      FMPPE2_Bit;
    };
    union
    {
        volatile const uint32_t             FMPPE3[32];
        const BITBANDING_FMPPE_TypeDef      FMPPE3_Bit;
    };
    const uint32_t                          reserved21[60*32];
    union
    {
        volatile uint32_t                   SR[24][32];
        BITBANDING_PERIPHERAL_TypeDef       SR_Bit[24];
    };
    const uint32_t                          reserved22[40*32];
    union
    {
        volatile uint32_t                   RCGC[24][32];
        BITBANDING_PERIPHERAL_TypeDef       RCGC_Bit[24];
    };
    const uint32_t                          reserved23[40*32];
    union
    {
        volatile uint32_t                   SCGC[24][32];
        BITBANDING_PERIPHERAL_TypeDef       SCGC_Bit[24];
    };
    const uint32_t                          reserved24[40*32];
    union
    {
        volatile uint32_t                   DCGC[24][32];
        BITBANDING_PERIPHERAL_TypeDef       DCGC_Bit[24];
    };
    const uint32_t                          reserved25[104*32];
    union
    {
        volatile uint32_t                   PR[24][32];
        BITBANDING_PERIPHERAL_TypeDef       PR_Bit[24];
    };

}SYSCTL_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTPERIPHERAL_BITBANDING_H_ */
