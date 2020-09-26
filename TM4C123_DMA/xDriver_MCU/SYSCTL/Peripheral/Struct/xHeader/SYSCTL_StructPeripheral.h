/**
 *
 * @file SYSCTL_StructPeripheral.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/SYSCTL/Peripheral/Struct/xHeader/SYSCTL_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t           DID0;
        DID0_TypeDef                DID0_Bit;
    };
    union
    {
        volatile uint32_t           DID1;
        DID1_TypeDef                DID1_Bit;
    };
    union
    {
        volatile const uint32_t     DC0;
        DC0_TypeDef                 DC0_Bit;
    };
    const uint32_t reserved[1];
    union
    {
        volatile const uint32_t     DC1;
        DC1_TypeDef                 DC1_Bit;
    };
    union
    {
        volatile const uint32_t     DC2;
        DC2_TypeDef                 DC2_Bit;
    };
    union
    {
        volatile const uint32_t     DC3;
        DC3_TypeDef                 DC3_Bit;
    };
    union
    {
        volatile const uint32_t     DC4;
        DC4_TypeDef                 DC4_Bit;
    };
    union
    {
        volatile const uint32_t     DC5;
        DC5_TypeDef                 DC5_Bit;
    };
    union
    {
        volatile const uint32_t     DC6;
        DC6_TypeDef                 DC6_Bit;
    };
    union
    {
        volatile const uint32_t     DC7;
        DC7_TypeDef                 DC7_Bit;
    };
    union
    {
        volatile const uint32_t     DC8;
        DC8_TypeDef                 DC8_Bit;
    };
    union
    {
        volatile uint32_t           PBORCTL;
        PBORCTL_TypeDef             PBORCTL_Bit;
    };
    const uint32_t                  reserved1[3];
    union
    {
        volatile const uint32_t     SRCR0;
        SRCR0_TypeDef               SRCR0_Bit;
    };
    union
    {
        volatile const uint32_t     SRCR1;
        SRCR1_TypeDef               SRCR1_Bit;
    };
    union
    {
        volatile const uint32_t     SRCR2;
        SRCR2_TypeDef               SRCR2_Bit;
    };
    const uint32_t                  reserved2[1];
    union
    {
        volatile uint32_t           RIS;
        RIS_TypeDef                 RIS_Bit;
    };
    union
    {
        volatile uint32_t           IMC;
        IMC_TypeDef                 IMC_Bit;
    };
    union
    {
        volatile uint32_t           MISC;
        MISC_TypeDef                MISC_Bit;
    };
    union
    {
        volatile uint32_t           RESC;
        RESC_TypeDef                RESC_Bit;
    };
    union
    {
        volatile uint32_t           RCC;
        RCC_TypeDef                 RCC_Bit;
    };
    const uint32_t                  reserved3[2];
    union
    {
        volatile uint32_t           GPIOHBCTL;
        GPIOHBCTL_TypeDef           GPIOHBCTL_Bit;
    };
    union
    {
        volatile uint32_t           RCC2;
        RCC2_TypeDef                RCC2_Bit;
    };
    const uint32_t                  reserved4[2];
    union
    {
        volatile uint32_t           MOSCCTL;
        MOSCCTL_TypeDef             MOSCCTL_Bit;
    };
    const uint32_t                  reserved5[28];
    union
    {
        volatile uint32_t           RMCTL;
        RMCTL_TypeDef               RMCTL_Bit;
    };
    const uint32_t                  reserved6[3];
    union
    {
        volatile const uint32_t     RCGC0;
        RCGC0_TypeDef               RCGC0_Bit;
    };
    union
    {
        volatile const uint32_t     RCGC1;
        RCGC1_TypeDef               RCGC1_Bit;
    };
    union
    {
        volatile const uint32_t     RCGC2;
        RCGC2_TypeDef               RCGC2_Bit;
    };
    const uint32_t                  reserved7[1];
    union
    {
        volatile const uint32_t     SCGC0;
        SCGC0_TypeDef               SCGC0_Bit;
    };
    union
    {
        volatile const uint32_t     SCGC1;
        SCGC1_TypeDef               SCGC1_Bit;
    };
    union
    {
        volatile const uint32_t     SCGC2;
        SCGC2_TypeDef               SCGC2_Bit;
    };
    const uint32_t                  reserved8[1];
    union
    {
        volatile const uint32_t     DCGC0;
        DCGC0_TypeDef               DCGC0_Bit;
    };
    union
    {
        volatile const uint32_t     DCGC1;
        DCGC1_TypeDef               DCGC1_Bit;
    };
    union
    {
        volatile const uint32_t     DCGC2;
        DCGC2_TypeDef               DCGC2_Bit;
    };
    const uint32_t                  reserved9[1];
    union
    {
        volatile const uint32_t     FMPRE0_ALIAS;
        FMPRE_TypeDef               FMPRE0_ALIAS_Bit;
    };
    union
    {
        volatile const uint32_t     FMPPE0_ALIAS;
        FMPPE_TypeDef               FMPPE0_ALIAS_Bit;
    };
    const uint32_t                  reserved10[3];
    union
    {
        volatile uint32_t           DSLPCLKCFG;
        DSLPCLKCFG_TypeDef          DSLPCLKCFG_Bit;
    };
    const uint32_t                  reserved11[1];
    union
    {
        volatile uint32_t           SYSPROP;
        SYSPROP_TypeDef             SYSPROP_Bit;
    };
    union
    {
        volatile uint32_t           PIOSCCAL;
        PIOSCCAL_TypeDef            PIOSCCAL_Bit;
    };
    union
    {
        volatile uint32_t           PIOSCSTAT;
        PIOSCSTAT_TypeDef           PIOSCSTAT_Bit;
    };
    const uint32_t                  reserved12[2];
    union
    {
        volatile uint32_t           PLLFREQ0;
        PLLFREQ0_TypeDef            PLLFREQ0_Bit;
    };
    union
    {
        volatile uint32_t           PLLFREQ1;
        PLLFREQ1_TypeDef            PLLFREQ1_Bit;
    };
    union
    {
        volatile uint32_t           PLLSTAT;
        PLLSTAT_TypeDef             PLLSTAT_Bit;
    };
    const uint32_t                  reserved13[7];
    union
    {
        volatile uint32_t           SLSRWRCFG;
        SLSRWRCFG_TypeDef           SLSRWRCFG_Bit;
    };
    union
    {
        volatile uint32_t           DSLSRWRCFG;
        DSLSRWRCFG_TypeDef          DSLSRWRCFG_Bit;
    };
    union
    {
        volatile uint32_t           DC9;
        DC9_TypeDef                 DC9_Bit;
    };
    const uint32_t                  reserved14[3];
    union
    {
        volatile uint32_t           NVMSTAT;
        NVMSTAT_TypeDef             NVMSTAT_Bit;
    };
    const uint32_t                  reserved15[4];
    union
    {
        volatile uint32_t           LDOSPCTL;
        LDOSPCTL_TypeDef            LDOSPCTL_Bit;
    };
    union
    {
        volatile uint32_t           LDOSPCAL;
        LDOSPCAL_TypeDef            LDOSPCAL_Bit;
    };
    union
    {
        volatile uint32_t           LDODPCTL;
        LDODPCTL_TypeDef            LDODPCTL_Bit;
    };
    union
    {
        volatile uint32_t           LDODPCAL;
        LDODPCAL_TypeDef            LDODPCAL_Bit;
    };
    const uint32_t                  reserved16[2];
    union
    {
        volatile uint32_t           SDPMST;
        SDPMST_TypeDef              SDPMST_Bit;
    };
    union
    {
        volatile uint32_t           BOOTCFG;
        SDPMST_TypeDef              BOOTCFG_Bit;
    };
    const uint32_t                  reserved17[3];
    union
    {
        volatile uint32_t           USER_REG0;
        USER_REG_TypeDef            USER_REG0_Bit;
    };
    union
    {
        volatile uint32_t           USER_REG1;
        USER_REG_TypeDef            USER_REG1_Bit;
    };
    union
    {
        volatile uint32_t           USER_REG2;
        USER_REG_TypeDef            USER_REG2_Bit;
    };
    union
    {
        volatile uint32_t           USER_REG3;
        USER_REG_TypeDef            USER_REG3_Bit;
    };
    const uint32_t                  reserved18[4];
    union
    {
        volatile const uint32_t     FMPRE0;
        FMPRE_TypeDef               FMPRE0_Bit;
    };
    union
    {
        volatile const uint32_t     FMPRE1;
        FMPRE_TypeDef               FMPRE1_Bit;
    };
    union
    {
        volatile const uint32_t     FMPRE2;
        FMPRE_TypeDef               FMPRE2_Bit;
    };
    union
    {
        volatile const uint32_t     FMPRE3;
        FMPRE_TypeDef               FMPRE3_Bit;
    };
    const uint32_t                  reserved19[60];
    union
    {
        volatile const uint32_t     PP[24];
        const PERIPHERAL_TypeDef    PP_Bit[24];
    };
    const uint32_t                  reserved20[40];
    union
    {
        volatile const uint32_t     FMPPE0;
        const FMPPE_TypeDef         FMPPE0_Bit;
    };
    union
    {
        volatile const uint32_t     FMPPE1;
        const FMPPE_TypeDef         FMPPE1_Bit;
    };
    union
    {
        volatile const uint32_t     FMPPE2;
        const FMPPE_TypeDef         FMPPE2_Bit;
    };
    union
    {
        volatile const uint32_t     FMPPE3;
        const FMPPE_TypeDef         FMPPE3_Bit;
    };
    const uint32_t                  reserved21[60];
    union
    {
        volatile uint32_t           SR[24];
        PERIPHERAL_TypeDef          SR_Bit[24];
    };
    const uint32_t                  reserved22[40];
    union
    {
        volatile uint32_t           RCGC[24];
        PERIPHERAL_TypeDef          RCGC_Bit[24];
    };
    const uint32_t                  reserved23[40];
    union
    {
        volatile uint32_t           SCGC[24];
        PERIPHERAL_TypeDef          SCGC_Bit[24];
    };
    const uint32_t                  reserved24[40];
    union
    {
        volatile uint32_t           DCGC[24];
        PERIPHERAL_TypeDef          DCGC_Bit[24];
    };
    const uint32_t                  reserved25[104];
    union
    {
        volatile uint32_t           PR[24];
        PERIPHERAL_TypeDef          PR_Bit[24];
    };

}SYSCTL_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTPERIPHERAL_H_ */
