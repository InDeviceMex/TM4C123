/*
 * SYSCTL.h
 *
 *  Created on: Jan 22, 2018
 *      Author: GOS_TD
 */

#ifndef SYSCTL_H_
#define SYSCTL_H_

#include <stdint.h>

#define SYSCTL_BASE            (0x400FE000)
#define SYSCTL_BASE_BITBANDING (0x42000000)
#define SYSCTL_OFFSET          (0x000FE000)

typedef volatile struct
{
    volatile const  uint32_t MINOR      :8;
    volatile const  uint32_t MAJOR      :8;
    volatile const  uint32_t CLASS      :8;
    const           uint32_t reserved   :4;
    volatile const  uint32_t VER        :3;
    const           uint32_t reserved1  :1;
}DID0_TypeDef;


typedef volatile struct
{
    volatile const uint32_t QUAL      :2;
    volatile const uint32_t ROHS      :1;
    volatile const uint32_t PKG       :2;
    volatile const uint32_t TEMP      :3;
    const          uint32_t reserved  :5;
    volatile const uint32_t PINCOUNT  :3;
    volatile const uint32_t PARTNO    :8;
    volatile const uint32_t FAM       :4;
    volatile const uint32_t VER       :4;
}DID1_TypeDef;


typedef volatile struct
{
    volatile const uint32_t FLASHSZ      :16;
    volatile const uint32_t SRAMSZ       :16;
}DC0_TypeDef;


typedef volatile struct
{
    volatile const uint32_t JTAG_      :1;
    volatile const uint32_t SWD_       :1;
    volatile const uint32_t SWO_       :1;
    volatile const uint32_t WDT0_      :1;
    volatile const uint32_t PLL       :1;
    volatile const uint32_t TEMPSNS   :1;
    volatile const uint32_t HIB_       :1;
    volatile const uint32_t MPU_       :1;
    volatile const uint32_t MAXADC0SPD:2;
    volatile const uint32_t MAXADC1SPD:2;
    volatile const uint32_t MINSYSDIV :4;
    volatile const uint32_t ADC0_      :1;
    volatile const uint32_t ADC1_      :1;
             const uint32_t reserved  :2;
    volatile const uint32_t PWM0_      :1;
    volatile const uint32_t PWM1_      :1;
             const uint32_t reserved1 :2;
    volatile const uint32_t CAN0_      :1;
    volatile const uint32_t CAN1_      :1;
             const uint32_t reserved2 :2;
    volatile const uint32_t WDT1_      :1;
            const uint32_t reserved3 :3;
}DC1_TypeDef;

typedef volatile struct
{
    const       uint32_t reserved   :1;
    volatile    uint32_t BOR1       :1;
    volatile    uint32_t BOR0       :1;
    const       uint32_t reserved1  :29;
}PBORCTL_TypeDef;

typedef volatile struct
{
    const           uint32_t reserved   :1;
    volatile const  uint32_t BOR1RIS    :1;
    const           uint32_t reserved1  :1;
    volatile const  uint32_t MOFRIS     :1;
    const           uint32_t reserved2  :2;
    volatile const  uint32_t PLLLRIS    :1;
    volatile const  uint32_t USBPLLLRIS :1;
    volatile const  uint32_t MOSCPUPRIS :1;
    const           uint32_t reserved3  :1;
    volatile const  uint32_t VDDARIS    :1;
    volatile const  uint32_t BOR0RIS    :1;
    const           uint32_t reserved4  :20;
}RIS_TypeDef;

typedef volatile struct
{
    const       uint32_t reserved   :1;
    volatile    uint32_t BOR1IM     :1;
    const       uint32_t reserved1  :1;
    volatile    uint32_t MOFIM      :1;
    const       uint32_t reserved2  :2;
    volatile    uint32_t PLLLIM     :1;
    volatile    uint32_t USBPLLLIM  :1;
    volatile    uint32_t MOSCPUPIM  :1;
    const       uint32_t reserved3  :1;
    volatile    uint32_t VDDAIM     :1;
    volatile    uint32_t BOR0IM     :1;
    const       uint32_t reserved4  :20;
}IMC_TypeDef;


typedef volatile struct
{
    const       uint32_t reserved   :1;
    volatile    uint32_t BOR1MIS    :1;
    const       uint32_t reserved1  :1;
    volatile    uint32_t MOFMIS     :1;
    const       uint32_t reserved2  :2;
    volatile    uint32_t PLLLMIS    :1;
    volatile    uint32_t USBPLLLMIS :1;
    volatile    uint32_t MOSCPUPMIS :1;
    const       uint32_t reserved3  :1;
    volatile    uint32_t VDDAMIS    :1;
    volatile    uint32_t BOR0MIS    :1;
    const       uint32_t reserved4  :20;
}MISC_TypeDef;

typedef volatile struct
{
    volatile    uint32_t EXT      :1;
    volatile    uint32_t POR      :1;
    volatile    uint32_t BOR      :1;
    volatile    uint32_t WDT0     :1;
    volatile    uint32_t SW       :1;
    volatile    uint32_t WDT1     :1;
    const       uint32_t reserved :10;
    volatile    uint32_t MOSCFAIL :1;
    const       uint32_t reserved1:15;
}RESC_TypeDef;


typedef volatile struct
{
    volatile    uint32_t MOSCDIS        :1;
    const       uint32_t reserved       :3;
    volatile    uint32_t OSCSRC         :2;
    volatile    uint32_t XTAL           :5;
    volatile    uint32_t BYPASS         :1;
    const       uint32_t reserved1      :1;
    volatile    uint32_t PWRDN          :1;
    const       uint32_t reserved2      :3;
    volatile    uint32_t PWMDIV         :3;
    volatile    uint32_t USEPWMDIV      :1;
    const       uint32_t reserved3      :1;
    volatile    uint32_t USESYSDIV      :1;
    volatile    uint32_t SYSDIV         :4;
    volatile    uint32_t ACG            :1;
    const       uint32_t reserved4      :4;
}RCC_TypeDef;

typedef volatile struct
{
    volatile uint32_t PORTA        :1;
    volatile uint32_t PORTB        :1;
    volatile uint32_t PORTC        :1;
    volatile uint32_t PORTD        :1;
    volatile uint32_t PORTE        :1;
    volatile uint32_t PORTF        :1;
    const    uint32_t reserved     :26;
}GPIOHBCTL_TypeDef;


typedef volatile struct
{
    const    uint32_t reserved  :4;
    volatile uint32_t OSCSRC2   :3;
    const    uint32_t reserved1 :4;
    volatile uint32_t BYPASS2   :1;
    const    uint32_t reserved2 :1;
    volatile uint32_t PWRDN2    :1;
    volatile uint32_t USBPWRDN  :1;
    const    uint32_t reserved3 :7;
    volatile uint32_t SYSDIV2LSB:1;
    volatile uint32_t SYSDIV2   :6;
    const    uint32_t reserved4 :1;
    volatile uint32_t DIV400    :1;
    volatile uint32_t USERCC2   :1;
}RCC2_TypeDef;


typedef volatile struct
{
    volatile uint32_t CVAL         :1;
    volatile uint32_t MOSCIM       :1;
    volatile uint32_t NOXTAL       :1;
    const    uint32_t reserved     :29;
}MOSCCTL_TypeDef;


typedef volatile struct
{
    const    uint32_t reserved      :1;
    volatile uint32_t PIOSCPD       :1;
    const    uint32_t reserved1     :2;
    volatile uint32_t DSOSCSRC      :3;
    const    uint32_t reserved2     :16;
    volatile uint32_t DSDIVORIDE    :6;
    const    uint32_t reserved3     :3;
}DSLPCLKCFG_TypeDef;


typedef volatile struct
{
    volatile const  uint32_t FPU_         :1;
    const           uint32_t reserved    :7;
    volatile const  uint32_t FLASHLPM    :1;
    const           uint32_t reserved1   :1;
    volatile const  uint32_t SRAMLPM     :1;
    volatile const  uint32_t SRAMSM      :1;
    volatile const  uint32_t PIOSCPDE    :1;
    const           uint32_t reserved2   :19;
}SYSPROP_TypeDef;


typedef volatile struct
{
    volatile    uint32_t UT         :7;
    const       uint32_t reserved   :1;
    volatile    uint32_t UPDATE     :1;
    volatile    uint32_t CAL        :1;
    const       uint32_t reserved1  :21;
    volatile    uint32_t UTEN       :1;
}PIOSCCAL_TypeDef;

typedef volatile struct
{
    volatile const  uint32_t CT         :7;
    const           uint32_t reserved   :1;
    volatile const  uint32_t RESULT     :2;
    const           uint32_t reserved1  :6;
    volatile const  uint32_t DT         :7;
    const           uint32_t reserved2  :9;
}PIOSCSTAT_TypeDef;


typedef volatile struct
{
    volatile const  uint32_t MINT          :10;
    volatile const  uint32_t MFRAC         :10;
    const           uint32_t reserved      :12;
}PLLFREQ0_TypeDef;


typedef volatile struct
{
    volatile uint32_t N             :5;
    const    uint32_t reserved      :3;
    volatile uint32_t Q             :5;
    const    uint32_t reserved1     :19;
}PLLFREQ1_TypeDef;


typedef volatile struct
{
    volatile const uint32_t LOCK          :1;
    const          uint32_t reserved      :31;
}PLLSTAT_TypeDef;


typedef volatile struct
{
    volatile uint32_t SRAMPM        :2;
    const    uint32_t reserved      :2;
    volatile uint32_t FLASHPM       :2;
    const    uint32_t reserved1     :26;
}SLSRWRCFG_TypeDef;


typedef volatile struct
{
    volatile uint32_t SRAMPM        :2;
    const    uint32_t reserved      :2;
    volatile uint32_t FLASHPM       :2;
    const    uint32_t reserved1     :26;
}DSLSRWRCFG_TypeDef;


typedef volatile struct
{
    volatile    uint32_t VLDO          :8;
    const       uint32_t reserved      :23;
    volatile    uint32_t VADJEN        :1;
}LDOSPCTL_TypeDef;


typedef volatile struct
{
    volatile const uint32_t NOPLL         :8;
    volatile const uint32_t WITHPLL       :8;
    const          uint32_t reserved      :16;
}LDOSPCAL_TypeDef;


typedef volatile struct
{
    volatile    uint32_t VLDO          :8;
    const       uint32_t reserved      :23;
    volatile    uint32_t VADJEN        :1;
}LDODPCTL_TypeDef;


typedef volatile struct
{
    volatile const uint32_t KHZ30         :8;
    volatile const uint32_t WITHPLL       :8;
    const          uint32_t reserved      :16;
}LDODPCAL_TypeDef;


typedef volatile struct
{
    volatile const uint32_t SPDERR   :1;
    volatile const uint32_t FPDERR   :1;
    volatile const uint32_t SRDERR   :1;
    volatile const uint32_t LDMINERR :1;
    volatile const uint32_t LSMINERR :1;
    const          uint32_t reserved :1;
    volatile const uint32_t LMAXERR  :1;
    volatile const uint32_t SRDW     :1;
    const          uint32_t reserved1:8;
    volatile const uint32_t PRACT    :1;
    volatile const uint32_t LOWPWR   :1;
    volatile const uint32_t FLASHLP  :1;
    volatile const uint32_t LDOUA    :1;
    const          uint32_t reserved2:12;
}SDPMST_TypeDef;

typedef volatile struct
{
    volatile uint32_t P0   :1;
    volatile uint32_t P1   :1;
    volatile uint32_t P2   :1;
    volatile uint32_t P3   :1;
    volatile uint32_t P4   :1;
    volatile uint32_t P5   :1;
    volatile uint32_t P6   :1;
    volatile uint32_t P7   :1;
    volatile uint32_t P8   :1;
    volatile uint32_t P9   :1;
    volatile uint32_t P10   :1;
    volatile uint32_t P11   :1;
    volatile uint32_t P12   :1;
    volatile uint32_t P13   :1;
    volatile uint32_t P14   :1;
    volatile uint32_t P15   :1;
    volatile uint32_t P16   :1;
    volatile uint32_t P17   :1;
    volatile uint32_t P18   :1;
    volatile uint32_t P19   :1;
    volatile uint32_t P20   :1;
    volatile uint32_t P21   :1;
    volatile uint32_t P22   :1;
    volatile uint32_t P23   :1;
    volatile uint32_t P24   :1;
    volatile uint32_t P25   :1;
    volatile uint32_t P26   :1;
    volatile uint32_t P27   :1;
    volatile uint32_t P28   :1;
    volatile uint32_t P29   :1;
    volatile uint32_t P30   :1;
    volatile uint32_t P31   :1;
}PERIPHERAL_TypeDef;

typedef volatile struct
{
    volatile uint32_t WDT0_   :1;
    volatile uint32_t WDT1_   :1;
    const    uint32_t reserved:30;
}PERIPHERAL_WD_TypeDef;

typedef volatile struct
{
    volatile uint32_t TIMER0_   :1;
    volatile uint32_t TIMER1_   :1;
    volatile uint32_t TIMER2_   :1;
    volatile uint32_t TIMER3_   :1;
    volatile uint32_t TIMER4_   :1;
    volatile uint32_t TIMER5_   :1;
    const    uint32_t reserved  :26;
}PERIPHERAL_TIMER_TypeDef;


typedef volatile struct
{
    volatile uint32_t GPIOA_   :1;
    volatile uint32_t GPIOB_   :1;
    volatile uint32_t GPIOC_   :1;
    volatile uint32_t GPIOD_   :1;
    volatile uint32_t GPIOE_   :1;
    volatile uint32_t GPIOF_   :1;
    volatile uint32_t GPIOG_   :1;
    volatile uint32_t GPIOH_   :1;
    volatile uint32_t GPIOJ_   :1;
    volatile uint32_t GPIOK_   :1;
    volatile uint32_t GPIOL_   :1;
    volatile uint32_t GPIOM_   :1;
    volatile uint32_t GPION_   :1;
    volatile uint32_t GPIOP_   :1;
    volatile uint32_t GPIOQ_   :1;
    const    uint32_t reserved :17;
}PERIPHERAL_GPIO_TypeDef;


typedef volatile struct
{
    volatile uint32_t UDMA      :1;
    const    uint32_t reserved  :31;
}PERIPHERAL_DMA_TypeDef;


typedef volatile struct
{
    volatile uint32_t HIB       :1;
    const    uint32_t reserved  :31;
}PERIPHERAL_HIB_TypeDef;


typedef volatile struct
{
    volatile uint32_t UART0    :1;
    volatile uint32_t UART1    :1;
    volatile uint32_t UART2    :1;
    volatile uint32_t UART3    :1;
    volatile uint32_t UART4    :1;
    volatile uint32_t UART5    :1;
    volatile uint32_t UART6    :1;
    volatile uint32_t UART7    :1;
    const    uint32_t reserved :24;
}PERIPHERAL_UART_TypeDef;


typedef volatile struct
{
    volatile uint32_t SSI0    :1;
    volatile uint32_t SSI1    :1;
    volatile uint32_t SSI2    :1;
    volatile uint32_t SSI3    :1;
    const    uint32_t reserved :28;
}PERIPHERAL_SSI_TypeDef;


typedef volatile struct
{
    volatile uint32_t I2C0    :1;
    volatile uint32_t I2C1    :1;
    volatile uint32_t I2C2    :1;
    volatile uint32_t I2C3    :1;
    volatile uint32_t I2C4    :1;
    volatile uint32_t I2C5    :1;
    const    uint32_t reserved :26;
}PERIPHERAL_I2C_TypeDef;

typedef volatile struct
{
    volatile uint32_t USB       :1;
    const    uint32_t reserved  :31;
}PERIPHERAL_USB_TypeDef;

typedef volatile struct
{
    volatile uint32_t CAN0    :1;
    volatile uint32_t CAN1    :1;
    const    uint32_t reserved :30;
}PERIPHERAL_CAN_TypeDef;

typedef volatile struct
{
    volatile uint32_t ADC0    :1;
    volatile uint32_t ADC1    :1;
    const    uint32_t reserved:30;
}PERIPHERAL_ADC_TypeDef;

typedef volatile struct
{
    volatile uint32_t ACMP    :1;
    const    uint32_t reserved:31;
}PERIPHERAL_ACMP_TypeDef;

typedef volatile struct
{
    volatile uint32_t PWM0    :1;
    volatile uint32_t PWM1    :1;
    const    uint32_t reserved:30;
}PERIPHERAL_PWM_TypeDef;

typedef volatile struct
{
    volatile uint32_t QEI0    :1;
    volatile uint32_t QEI1    :1;
    const    uint32_t reserved:30;
}PERIPHERAL_QEI_TypeDef;

typedef volatile struct
{
    volatile uint32_t EEPROM    :1;
    const    uint32_t reserved:31;
}PERIPHERAL_EEPROM_TypeDef;

typedef volatile struct
{
    volatile uint32_t WTIMER0   :1;
    volatile uint32_t WTIMER1   :1;
    volatile uint32_t WTIMER2   :1;
    volatile uint32_t WTIMER3   :1;
    volatile uint32_t WTIMER4   :1;
    volatile uint32_t WTIMER5   :1;
    const    uint32_t reserved  :26;
}PERIPHERAL_WTIMER_TypeDef;


typedef volatile struct
{
    union
    {
        volatile uint32_t       DID0;
        DID0_TypeDef            DID0_Bit;
    };
    union
    {
        volatile uint32_t       DID1;
        DID1_TypeDef            DID1_Bit;
    };
    const uint32_t reserved[10];
    union
    {
        volatile uint32_t       PBORCTL;
        PBORCTL_TypeDef         PBORCTL_Bit;
    };
    const uint32_t reserved1[7];
    union
    {
        volatile uint32_t       RIS;
        RIS_TypeDef             RIS_Bit;
    };
    union
    {
        volatile uint32_t       IMC;
        IMC_TypeDef             IMC_Bit;
    };
    union
    {
        volatile uint32_t       MISC;
        MISC_TypeDef            MISC_Bit;
    };
    union
    {
        volatile uint32_t       RESC;
        RESC_TypeDef            RESC_Bit;
    };
    union
    {
        volatile uint32_t       RCC;
        RCC_TypeDef             RCC_Bit;
    };
    const uint32_t reserved2[2];
    union
    {
        volatile uint32_t       GPIOHBCTL;
        GPIOHBCTL_TypeDef       GPIOHBCTL_Bit;
    };
    union
    {
        volatile uint32_t       RCC2;
        RCC2_TypeDef            RCC2_Bit;
    };
    const uint32_t reserved3[2];
    union
    {
        volatile uint32_t       MOSCCTL;
        MOSCCTL_TypeDef         MOSCCTL_Bit;
    };
    const uint32_t reserved4[49];
    union
    {
        volatile uint32_t       DSLPCLKCFG;
        DSLPCLKCFG_TypeDef      DSLPCLKCFG_Bit;
    };
    const uint32_t reserved5[1];
    union
    {
        volatile uint32_t       SYSPROP;
        SYSPROP_TypeDef         SYSPROP_Bit;
    };
    union
    {
        volatile uint32_t       PIOSCCAL;
        PIOSCCAL_TypeDef        PIOSCCAL_Bit;
    };
    union
    {
        volatile uint32_t       PIOSCSTAT;
        PIOSCSTAT_TypeDef       PIOSCSTAT_Bit;
    };
    const uint32_t reserved6[2];
    union
    {
        volatile uint32_t       PLLFREQ0;
        PLLFREQ0_TypeDef        PLLFREQ0_Bit;
    };
    union
    {
        volatile uint32_t       PLLFREQ1;
        PLLFREQ1_TypeDef        PLLFREQ1_Bit;
    };
    union
    {
        volatile uint32_t       PLLSTAT;
        PLLSTAT_TypeDef         PLLSTAT_Bit;
    };
    const uint32_t reserved7[7];
    union
    {
        volatile uint32_t       SLSRWRCFG;
        SLSRWRCFG_TypeDef       SLSRWRCFG_Bit;
    };
    union
    {
        volatile uint32_t       DSLSRWRCFG;
        DSLSRWRCFG_TypeDef      DSLSRWRCFG_Bit;
    };
    const uint32_t reserved8[9];
    union
    {
        volatile uint32_t       LDOSPCTL;
        LDOSPCTL_TypeDef        LDOSPCTL_Bit;
    };
    union
    {
        volatile uint32_t       LDOSPCAL;
        LDOSPCAL_TypeDef        LDOSPCAL_Bit;
    };
    union
    {
        volatile uint32_t       LDODPCTL;
        LDODPCTL_TypeDef        LDODPCTL_Bit;
    };
    union
    {
        volatile uint32_t       LDODPCAL;
        LDODPCAL_TypeDef        LDODPCAL_Bit;
    };
    const uint32_t reserved9[2];
    union
    {
        volatile uint32_t       SDPMST;
        SDPMST_TypeDef          SDPMST_Bit;
    };
    const uint32_t reserved10[76];
    union
    {
        volatile const uint32_t       PP[24];
        const PERIPHERAL_TypeDef      PP_Bit[24];
    };
    const uint32_t reserved11[104];
    union
    {
        volatile uint32_t       SR[24];
        PERIPHERAL_TypeDef      SR_Bit[24];
    };
    const uint32_t reserved12[40];
    union
    {
        volatile uint32_t       RCGC[24];
        PERIPHERAL_TypeDef      RCGC_Bit[24];
    };
    const uint32_t reserved13[40];
    union
    {
        volatile uint32_t       SCGC[24];
        PERIPHERAL_TypeDef      SCGC_Bit[24];
    };
    const uint32_t reserved14[40];
    union
    {
        volatile uint32_t       DCGC[24];
        PERIPHERAL_TypeDef      DCGC_Bit[24];
    };
    const uint32_t reserved15[104];
    union
    {
        volatile uint32_t       PR[24];
        PERIPHERAL_TypeDef      PR_Bit[24];
    };

}SYSCTL_TypeDef;

#define SYSCTL                 (((SYSCTL_TypeDef*)(SYSCTL_BASE)))

#define SYSCTL_DID0_OFFSET          (0x0000)
#define SYSCTL_DID1_OFFSET          (0x0004)
#define SYSCTL_PBORCTL_OFFSET       (0x0030)
#define SYSCTL_RIS_OFFSET           (0x0050)
#define SYSCTL_IMC_OFFSET           (0x0054)
#define SYSCTL_MISC_OFFSET          (0x0058)
#define SYSCTL_RESC_OFFSET          (0x005C)
#define SYSCTL_RCC_OFFSET           (0x0060)
#define SYSCTL_GPIOHBCTL_OFFSET     (0x006C)
#define SYSCTL_RCC2_OFFSET          (0x0070)
#define SYSCTL_MOSCCTL_OFFSET       (0x007C)
#define SYSCTL_DSLPCLKCFG_OFFSET    (0x0144)
#define SYSCTL_SYSPROP_OFFSET       (0x014C)
#define SYSCTL_PIOSCCAL_OFFSET      (0x0150)
#define SYSCTL_PIOSCSTAT_OFFSET     (0x0154)
#define SYSCTL_PLLFREQ0_OFFSET      (0x0160)
#define SYSCTL_PLLFREQ1_OFFSET      (0x0164)
#define SYSCTL_PLLSTAT_OFFSET       (0x0168)
#define SYSCTL_SLSRWRCFG_OFFSET     (0x0188)
#define SYSCTL_DSLSRWRCFG_OFFSET    (0x018C)
#define SYSCTL_LDOSPCTL_OFFSET      (0x01B4)
#define SYSCTL_LDOSPCAL_OFFSET      (0x01B8)
#define SYSCTL_LDODPCTL_OFFSET      (0x01BC)
#define SYSCTL_LDODPCAL_OFFSET      (0x01C0)
#define SYSCTL_SDPMST_OFFSET        (0x01CC)

#define SYSCTL_PPWD_OFFSET          (0x0300)
#define SYSCTL_PPTIMER_OFFSET       (0x0304)
#define SYSCTL_PPGPIO_OFFSET        (0x0308)
#define SYSCTL_PPDMA_OFFSET         (0x030C)
#define SYSCTL_PPHIB_OFFSET         (0x0314)
#define SYSCTL_PPUART_OFFSET        (0x0318)
#define SYSCTL_PPSSI_OFFSET         (0x031C)
#define SYSCTL_PPI2C_OFFSET         (0x0320)
#define SYSCTL_PPUSB_OFFSET         (0x0328)
#define SYSCTL_PPCAN_OFFSET         (0x0334)
#define SYSCTL_PPADC_OFFSET         (0x0338)
#define SYSCTL_PPACMP_OFFSET        (0x033C)
#define SYSCTL_PPPWM_OFFSET         (0x0340)
#define SYSCTL_PPQEI_OFFSET         (0x0344)
#define SYSCTL_PPEEPROM_OFFSET      (0x0358)
#define SYSCTL_PPWTIMER_OFFSET      (0x035C)

#define SYSCTL_SRWD_OFFSET          (0x0500)
#define SYSCTL_SRTIMER_OFFSET       (0x0504)
#define SYSCTL_SRGPIO_OFFSET        (0x0508)
#define SYSCTL_SRDMA_OFFSET         (0x050C)
#define SYSCTL_SRHIB_OFFSET         (0x0514)
#define SYSCTL_SRUART_OFFSET        (0x0518)
#define SYSCTL_SRSSI_OFFSET         (0x051C)
#define SYSCTL_SRI2C_OFFSET         (0x0520)
#define SYSCTL_SRUSB_OFFSET         (0x0528)
#define SYSCTL_SRCAN_OFFSET         (0x0534)
#define SYSCTL_SRADC_OFFSET         (0x0538)
#define SYSCTL_SRACMP_OFFSET        (0x053C)
#define SYSCTL_SRPWM_OFFSET         (0x0540)
#define SYSCTL_SRQEI_OFFSET         (0x0544)
#define SYSCTL_SREEPROM_OFFSET      (0x0558)
#define SYSCTL_SRWTIMER_OFFSET      (0x055C)

#define SYSCTL_RCGCWD_OFFSET          (0x0600)
#define SYSCTL_RCGCTIMER_OFFSET       (0x0604)
#define SYSCTL_RCGCGPIO_OFFSET        (0x0608)
#define SYSCTL_RCGCDMA_OFFSET         (0x060C)
#define SYSCTL_RCGCHIB_OFFSET         (0x0614)
#define SYSCTL_RCGCUART_OFFSET        (0x0618)
#define SYSCTL_RCGCSSI_OFFSET         (0x061C)
#define SYSCTL_RCGCI2C_OFFSET         (0x0620)
#define SYSCTL_RCGCUSB_OFFSET         (0x0628)
#define SYSCTL_RCGCCAN_OFFSET         (0x0634)
#define SYSCTL_RCGCADC_OFFSET         (0x0638)
#define SYSCTL_RCGCACMP_OFFSET        (0x063C)
#define SYSCTL_RCGCPWM_OFFSET         (0x0640)
#define SYSCTL_RCGCQEI_OFFSET         (0x0644)
#define SYSCTL_RCGCEEPROM_OFFSET      (0x0658)
#define SYSCTL_RCGCWTIMER_OFFSET      (0x065C)

#define SYSCTL_SCGCWD_OFFSET          (0x0700)
#define SYSCTL_SCGCTIMER_OFFSET       (0x0704)
#define SYSCTL_SCGCGPIO_OFFSET        (0x0708)
#define SYSCTL_SCGCDMA_OFFSET         (0x070C)
#define SYSCTL_SCGCHIB_OFFSET         (0x0714)
#define SYSCTL_SCGCUART_OFFSET        (0x0718)
#define SYSCTL_SCGCSSI_OFFSET         (0x071C)
#define SYSCTL_SCGCI2C_OFFSET         (0x0720)
#define SYSCTL_SCGCUSB_OFFSET         (0x0728)
#define SYSCTL_SCGCCAN_OFFSET         (0x0734)
#define SYSCTL_SCGCADC_OFFSET         (0x0738)
#define SYSCTL_SCGCACMP_OFFSET        (0x073C)
#define SYSCTL_SCGCPWM_OFFSET         (0x0740)
#define SYSCTL_SCGCQEI_OFFSET         (0x0744)
#define SYSCTL_SCGCEEPROM_OFFSET      (0x0758)
#define SYSCTL_SCGCWTIMER_OFFSET      (0x075C)

#define SYSCTL_DCGCWD_OFFSET          (0x0800)
#define SYSCTL_DCGCTIMER_OFFSET       (0x0804)
#define SYSCTL_DCGCGPIO_OFFSET        (0x0808)
#define SYSCTL_DCGCDMA_OFFSET         (0x080C)
#define SYSCTL_DCGCHIB_OFFSET         (0x0814)
#define SYSCTL_DCGCUART_OFFSET        (0x0818)
#define SYSCTL_DCGCSSI_OFFSET         (0x081C)
#define SYSCTL_DCGCI2C_OFFSET         (0x0820)
#define SYSCTL_DCGCUSB_OFFSET         (0x0828)
#define SYSCTL_DCGCCAN_OFFSET         (0x0834)
#define SYSCTL_DCGCADC_OFFSET         (0x0838)
#define SYSCTL_DCGCACMP_OFFSET        (0x083C)
#define SYSCTL_DCGCPWM_OFFSET         (0x0840)
#define SYSCTL_DCGCQEI_OFFSET         (0x0844)
#define SYSCTL_DCGCEEPROM_OFFSET      (0x0858)
#define SYSCTL_DCGCWTIMER_OFFSET      (0x085C)

#define SYSCTL_PRWD_OFFSET          (0x0A00)
#define SYSCTL_PRTIMER_OFFSET       (0x0A04)
#define SYSCTL_PRGPIO_OFFSET        (0x0A08)
#define SYSCTL_PRDMA_OFFSET         (0x0A0C)
#define SYSCTL_PRHIB_OFFSET         (0x0A14)
#define SYSCTL_PRUART_OFFSET        (0x0A18)
#define SYSCTL_PRSSI_OFFSET         (0x0A1C)
#define SYSCTL_PRI2C_OFFSET         (0x0A20)
#define SYSCTL_PRUSB_OFFSET         (0x0A28)
#define SYSCTL_PRCAN_OFFSET         (0x0A34)
#define SYSCTL_PRADC_OFFSET         (0x0A38)
#define SYSCTL_PRACMP_OFFSET        (0x0A3C)
#define SYSCTL_PRPWM_OFFSET         (0x0A40)
#define SYSCTL_PRQEI_OFFSET         (0x0A44)
#define SYSCTL_PREEPROM_OFFSET      (0x0A58)
#define SYSCTL_PRWTIMER_OFFSET      (0x0A5C)




/*******************************************************************************************
************************************ 1 DID0 *********************************************
*******************************************************************************************/
#define SYSCTL_DID0         (((DID0_TypeDef*)(SYSCTL_BASE+SYSCTL_DID0_OFFSET )))
#define SYSCTL_DID0_R       (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DID0_OFFSET)))

/*--------*/
#define SYSCTL_DID0_R_MINOR_MASK    ((uint32_t)0x000000FF)
#define SYSCTL_DID0_R_MINOR_BIT     (0)
#define SYSCTL_DID0_R_MINOR_INI     ((uint32_t)0x00000000)
#define SYSCTL_DID0_R_MINOR_1METAL  ((uint32_t)0x00000001)
#define SYSCTL_DID0_R_MINOR_2METAL  ((uint32_t)0x00000002)
#define SYSCTL_DID0_R_MINOR_3METAL  ((uint32_t)0x00000003)
#define SYSCTL_DID0_R_MINOR_4METAL  ((uint32_t)0x00000004)

#define SYSCTL_DID0_MINOR_MASK      ((uint32_t)0x000000FF)
#define SYSCTL_DID0_MINOR_INI       ((uint32_t)0x00000000)
#define SYSCTL_DID0_MINOR_1METAL    ((uint32_t)0x00000001)
#define SYSCTL_DID0_MINOR_2METAL    ((uint32_t)0x00000002)
#define SYSCTL_DID0_MINOR_3METAL    ((uint32_t)0x00000003)
#define SYSCTL_DID0_MINOR_4METAL    ((uint32_t)0x00000004)
/*--------*/

/*--------*/
#define SYSCTL_DID0_R_MAJOR_MASK    ((uint32_t)0x0000FF00)
#define SYSCTL_DID0_R_MAJOR_BIT     ((uint32_t)8)
#define SYSCTL_DID0_R_MAJOR_REVA    ((uint32_t)0x00000000)
#define SYSCTL_DID0_R_MAJOR_REVB    ((uint32_t)0x00000100)
#define SYSCTL_DID0_R_MAJOR_REVC    ((uint32_t)0x00000200)
#define SYSCTL_DID0_R_MAJOR_REVD    ((uint32_t)0x00000300)
#define SYSCTL_DID0_R_MAJOR_REVE    ((uint32_t)0x00000400)
#define SYSCTL_DID0_R_MAJOR_REVF    ((uint32_t)0x00000500)

#define SYSCTL_DID0_MAJOR_MASK      ((uint32_t)0x000000FF)
#define SYSCTL_DID0_MAJOR_REVA      ((uint32_t)0x00000000)
#define SYSCTL_DID0_MAJOR_REVB      ((uint32_t)0x00000001)
#define SYSCTL_DID0_MAJOR_REVC      ((uint32_t)0x00000002)
#define SYSCTL_DID0_MAJOR_REVD      ((uint32_t)0x00000003)
#define SYSCTL_DID0_MAJOR_REVE      ((uint32_t)0x00000004)
#define SYSCTL_DID0_MAJOR_REVF      ((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define SYSCTL_DID0_R_CLASS_MASK    ((uint32_t)0x00FF0000)
#define SYSCTL_DID0_R_CLASS_BIT     (16)
#define SYSCTL_DID0_R_CLASS_TIVAC   ((uint32_t)0x00050000)

#define SYSCTL_DID0_CLASS_MASK      ((uint32_t)0x000000FF)
#define SYSCTL_DID0_CLASS_TIVAC     ((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define SYSCTL_DID0_R_VER_MASK      ((uint32_t)0x70000000)
#define SYSCTL_DID0_R_VER_BIT       (28)
#define SYSCTL_DID0_R_VER_DID0      ((uint32_t)0x10000000)

#define SYSCTL_DID0_VER_MASK        ((uint32_t)0x00000007)
#define SYSCTL_DID0_VER_DID0        ((uint32_t)0x00000001)
/*--------*/

/******************************************************************************************
************************************ 2 DID1 *********************************************
******************************************************************************************/
#define SYSCTL_DID1           (((DID1_TypeDef*)(SYSCTL_BASE+SYSCTL_DID1_OFFSET )))
#define SYSCTL_DID1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DID1_OFFSET)))

/*--------*/
#define SYSCTL_DID1_R_QUAL_MASK     ((uint32_t)0x00000003)
#define SYSCTL_DID1_R_QUAL_BIT      (0)
#define SYSCTL_DID1_R_QUAL_ENG      ((uint32_t)0x00000000)
#define SYSCTL_DID1_R_QUAL_PILOT    ((uint32_t)0x00000001)
#define SYSCTL_DID1_R_QUAL_FULLY    ((uint32_t)0x00000002)

#define SYSCTL_DID1_QUAL_MASK       ((uint32_t)0x00000003)
#define SYSCTL_DID1_QUAL_ENG        ((uint32_t)0x00000000)
#define SYSCTL_DID1_QUAL_PILOT      ((uint32_t)0x00000001)
#define SYSCTL_DID1_QUAL_FULLY      ((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_ROHS_MASK     ((uint32_t)0x00000004)
#define SYSCTL_DID1_R_ROHS_BIT      (2)
#define SYSCTL_DID1_R_ROHS_NOROHS   ((uint32_t)0x00000000)
#define SYSCTL_DID1_R_ROHS_ROHS     ((uint32_t)0x00000004)

#define SYSCTL_DID1_ROHS_MASK       ((uint32_t)0x00000001)
#define SYSCTL_DID1_ROHS_NOROHS     ((uint32_t)0x00000000)
#define SYSCTL_DID1_ROHS_ROHS       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_PKG_MASK      ((uint32_t)0x00000018)
#define SYSCTL_DID1_R_PKG_BIT       (3)
#define SYSCTL_DID1_R_PKG_LQFP      ((uint32_t)0x00000008)
#define SYSCTL_DID1_R_PKG_BGA       ((uint32_t)0x00000010)

#define SYSCTL_DID1_PKG_MASK        ((uint32_t)0x00000003)
#define SYSCTL_DID1_PKG_LQFP        ((uint32_t)0x00000001)
#define SYSCTL_DID1_PKG_BGA         ((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_TEMP_MASK     ((uint32_t)0x000000E0)
#define SYSCTL_DID1_R_TEMP_BIT      (5)
#define SYSCTL_DID1_R_TEMP_IND      ((uint32_t)0x00000020)
#define SYSCTL_DID1_R_TEMP_EXT      ((uint32_t)0x00000040)
#define SYSCTL_DID1_R_TEMP_BOTH     ((uint32_t)0x00000060)

#define SYSCTL_DID1_TEMP_MASK       ((uint32_t)0x00000007)
#define SYSCTL_DID1_TEMP_IND        ((uint32_t)0x00000001)
#define SYSCTL_DID1_TEMP_EXT        ((uint32_t)0x00000002)
#define SYSCTL_DID1_TEMP_BOTH       ((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_PINCOUNT_MASK ((uint32_t)0x0000E000)
#define SYSCTL_DID1_R_PINCOUNT_BIT  (13)
#define SYSCTL_DID1_R_PINCOUNT_100  ((uint32_t)0x00004000)
#define SYSCTL_DID1_R_PINCOUNT_64   ((uint32_t)0x00006000)
#define SYSCTL_DID1_R_PINCOUNT_144  ((uint32_t)0x00008000)
#define SYSCTL_DID1_R_PINCOUNT_157  ((uint32_t)0x0000A000)
#define SYSCTL_DID1_R_PINCOUNT_168  ((uint32_t)0x0000C000)

#define SYSCTL_DID1_PINCOUNT_MASK   ((uint32_t)0x00000007)
#define SYSCTL_DID1_PINCOUNT_100    ((uint32_t)0x00000002)
#define SYSCTL_DID1_PINCOUNT_64     ((uint32_t)0x00000003)
#define SYSCTL_DID1_PINCOUNT_144    ((uint32_t)0x00000004)
#define SYSCTL_DID1_PINCOUNT_157    ((uint32_t)0x00000005)
#define SYSCTL_DID1_PINCOUNT_168    ((uint32_t)0x00000006)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_PARTNO_MASK       ((uint32_t)0x00FF0000)
#define SYSCTL_DID1_R_PARTNO_BIT        (16)
#define SYSCTL_DID1_R_PARTNO_TM4C123    ((uint32_t)0x00A10000)

#define SYSCTL_DID1_PARTNO_MASK         ((uint32_t)0x000000FF)
#define SYSCTL_DID1_PARTNO_TM4C123      ((uint32_t)0x000000A1)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_FAM_MASK      ((uint32_t)0x0F000000)
#define SYSCTL_DID1_R_FAM_BIT       (24)
#define SYSCTL_DID1_R_FAM_TIVAC     ((uint32_t)0x00000000)

#define SYSCTL_DID1_FAM_MASK        ((uint32_t)0x0000000F)
#define SYSCTL_DID1_FAM_TIVAC       ((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_VER_MASK      ((uint32_t)0xF0000000)
#define SYSCTL_DID1_R_VER_BIT       (28)
#define SYSCTL_DID1_R_VER_INI       ((uint32_t)0x00000000)
#define SYSCTL_DID1_R_VER_SECOND    ((uint32_t)0x10000000)

#define SYSCTL_DID1_VER_MASK        ((uint32_t)0x0000000F)
#define SYSCTL_DID1_VER_INI         ((uint32_t)0x00000000)
#define SYSCTL_DID1_VER_SECOND      ((uint32_t)0x00000001)
/*--------*/

/******************************************************************************************
************************************ 3 PBORCTL *********************************************
******************************************************************************************/
#define SYSCTL_PBORCTL            (((PBORCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_PBORCTL_OFFSET )))
#define SYSCTL_PBORCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PBORCTL_OFFSET)))

/*--------*/
#define SYSCTL_PBORCTL_R_BOR1_MASK  ((uint32_t)0x00000002)
#define SYSCTL_PBORCTL_R_BOR1_BIT   (1)
#define SYSCTL_PBORCTL_R_BOR1_INT   ((uint32_t)0x00000000)
#define SYSCTL_PBORCTL_R_BOR1_RESET ((uint32_t)0x00000002)

#define SYSCTL_PBORCTL_BOR1_MASK    ((uint32_t)0x00000001)
#define SYSCTL_PBORCTL_BOR1_INT     ((uint32_t)0x00000000)
#define SYSCTL_PBORCTL_BOR1_RESET   ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PBORCTL_R_BOR0_MASK  ((uint32_t)0x00000004)
#define SYSCTL_PBORCTL_R_BOR0_BIT   (2)
#define SYSCTL_PBORCTL_R_BOR0_INT   ((uint32_t)0x00000000)
#define SYSCTL_PBORCTL_R_BOR0_RESET ((uint32_t)0x00000004)

#define SYSCTL_PBORCTL_BOR0_MASK    ((uint32_t)0x00000001)
#define SYSCTL_PBORCTL_BOR0_INT     ((uint32_t)0x00000000)
#define SYSCTL_PBORCTL_BOR0_RESET   ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PBORCTL_BOR1_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PBORCTL_OFFSET)*32)+(SYSCTL_PBORCTL_R_BOR1_BIT*4))))
#define SYSCTL_PBORCTL_BOR0_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PBORCTL_OFFSET)*32)+(SYSCTL_PBORCTL_R_BOR0_BIT*4))))

/******************************************************************************************
************************************ 4 RIS *********************************************
******************************************************************************************/
#define SYSCTL_RIS            (((RIS_TypeDef*)(SYSCTL_BASE+SYSCTL_RIS_OFFSET )))
#define SYSCTL_RIS_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_RIS_OFFSET)))

/*--------*/
#define SYSCTL_RIS_R_BOR1RIS_MASK       ((uint32_t)0x00000002)
#define SYSCTL_RIS_R_BOR1RIS_BIT        (1)
#define SYSCTL_RIS_R_BOR1RIS_NOACTIVE   ((uint32_t)0x00000000)
#define SYSCTL_RIS_R_BOR1RIS_ACTIVE     ((uint32_t)0x00000002)

#define SYSCTL_RIS_BOR1RIS_MASK         ((uint32_t)0x00000001)
#define SYSCTL_RIS_BOR1RIS_NOACTIVE     ((uint32_t)0x00000000)
#define SYSCTL_RIS_BOR1RIS_ACTIVE       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_MOFRIS_MASK       ((uint32_t)0x00000008)
#define SYSCTL_RIS_R_MOFRIS_BIT        (3)
#define SYSCTL_RIS_R_MOFRIS_NOACTIVE   ((uint32_t)0x00000000)
#define SYSCTL_RIS_R_MOFRIS_ACTIVE     ((uint32_t)0x00000008)

#define SYSCTL_RIS_MOFRIS_MASK         ((uint32_t)0x00000001)
#define SYSCTL_RIS_MOFRIS_NOACTIVE     ((uint32_t)0x00000000)
#define SYSCTL_RIS_MOFRIS_ACTIVE       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_PLLLRIS_MASK       ((uint32_t)0x00000040)
#define SYSCTL_RIS_R_PLLLRIS_BIT        (6)
#define SYSCTL_RIS_R_PLLLRIS_NOACTIVE   ((uint32_t)0x00000000)
#define SYSCTL_RIS_R_PLLLRIS_ACTIVE     ((uint32_t)0x00000040)

#define SYSCTL_RIS_PLLLRIS_MASK         ((uint32_t)0x00000001)
#define SYSCTL_RIS_PLLLRIS_NOACTIVE     ((uint32_t)0x00000000)
#define SYSCTL_RIS_PLLLRIS_ACTIVE       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_USBPLLLRIS_MASK       ((uint32_t)0x00000080)
#define SYSCTL_RIS_R_USBPLLLRIS_BIT        (7)
#define SYSCTL_RIS_R_USBPLLLRIS_NOACTIVE   ((uint32_t)0x00000000)
#define SYSCTL_RIS_R_USBPLLLRIS_ACTIVE     ((uint32_t)0x00000080)

#define SYSCTL_RIS_USBPLLLRIS_MASK         ((uint32_t)0x00000001)
#define SYSCTL_RIS_USBPLLLRIS_NOACTIVE     ((uint32_t)0x00000000)
#define SYSCTL_RIS_USBPLLLRIS_ACTIVE       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_MOSCPUPRIS_MASK       ((uint32_t)0x00000100)
#define SYSCTL_RIS_R_MOSCPUPRIS_BIT        (8)
#define SYSCTL_RIS_R_MOSCPUPRIS_NOACTIVE   ((uint32_t)0x00000000)
#define SYSCTL_RIS_R_MOSCPUPRIS_ACTIVE     ((uint32_t)0x00000100)

#define SYSCTL_RIS_MOSCPUPRIS_MASK         ((uint32_t)0x00000001)
#define SYSCTL_RIS_MOSCPUPRIS_NOACTIVE     ((uint32_t)0x00000000)
#define SYSCTL_RIS_MOSCPUPRIS_ACTIVE       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_VDDARIS_MASK       ((uint32_t)0x00000400)
#define SYSCTL_RIS_R_VDDARIS_BIT        (10)
#define SYSCTL_RIS_R_VDDARIS_NOACTIVE   ((uint32_t)0x00000000)
#define SYSCTL_RIS_R_VDDARIS_ACTIVE     ((uint32_t)0x00000400)

#define SYSCTL_RIS_VDDARIS_MASK         ((uint32_t)0x00000001)
#define SYSCTL_RIS_VDDARIS_NOACTIVE     ((uint32_t)0x00000000)
#define SYSCTL_RIS_VDDARIS_ACTIVE       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_BOR0RIS_MASK       ((uint32_t)0x00000800)
#define SYSCTL_RIS_R_BOR0RIS_BIT        (11)
#define SYSCTL_RIS_R_BOR0RIS_NOACTIVE   ((uint32_t)0x00000000)
#define SYSCTL_RIS_R_BOR0RIS_ACTIVE     ((uint32_t)0x00000800)

#define SYSCTL_RIS_BOR0RIS_MASK         ((uint32_t)0x00000001)
#define SYSCTL_RIS_BOR0RIS_NOACTIVE     ((uint32_t)0x00000000)
#define SYSCTL_RIS_BOR0RIS_ACTIVE       ((uint32_t)0x00000001)
/*--------*/


#define SYSCTL_RIS_BOR1RIS_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(SYSCTL_RIS_R_BOR1RIS_BIT*4))))
#define SYSCTL_RIS_MOFRIS_BITBANDING        (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(SYSCTL_RIS_R_MOFRIS_BIT*4))))
#define SYSCTL_RIS_PLLLRIS_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(SYSCTL_RIS_R_PLLLRIS_BIT*4))))
#define SYSCTL_RIS_USBPLLLRIS_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(SYSCTL_RIS_R_USBPLLLRIS_BIT*4))))
#define SYSCTL_RIS_MOSCPUPRIS_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(SYSCTL_RIS_R_MOSCPUPRIS_BIT*4))))
#define SYSCTL_RIS_VDDARIS_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(SYSCTL_RIS_R_VDDARIS_BIT*4))))
#define SYSCTL_RIS_BOR0RIS_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(SYSCTL_RIS_R_BOR0RIS_BIT*4))))


/******************************************************************************************
************************************ 5 IMC *********************************************
******************************************************************************************/
#define SYSCTL_IMC            (((IMC_TypeDef*)(SYSCTL_BASE+SYSCTL_IMC_OFFSET )))
#define SYSCTL_IMC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_IMC_OFFSET)))

/*--------*/
#define SYSCTL_IMC_R_BOR1IM_MASK    ((uint32_t)0x00000002)
#define SYSCTL_IMC_R_BOR1IM_BIT     (1)
#define SYSCTL_IMC_R_BOR1IM_DIS     ((uint32_t)0x00000000)
#define SYSCTL_IMC_R_BOR1IM_EN      ((uint32_t)0x00000002)

#define SYSCTL_IMC_BOR1IM_MASK      ((uint32_t)0x00000001)
#define SYSCTL_IMC_BOR1IM_DIS       ((uint32_t)0x00000000)
#define SYSCTL_IMC_BOR1IM_EN        ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_MOFIM_MASK     ((uint32_t)0x00000008)
#define SYSCTL_IMC_R_MOFIM_BIT      (3)
#define SYSCTL_IMC_R_MOFIM_DIS      ((uint32_t)0x00000000)
#define SYSCTL_IMC_R_MOFIM_EN       ((uint32_t)0x00000008)

#define SYSCTL_IMC_MOFIM_MASK       ((uint32_t)0x00000001)
#define SYSCTL_IMC_MOFIM_DIS        ((uint32_t)0x00000000)
#define SYSCTL_IMC_MOFIM_EN         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_PLLLIM_MASK    ((uint32_t)0x00000040)
#define SYSCTL_IMC_R_PLLLIM_BIT     (6)
#define SYSCTL_IMC_R_PLLLIM_DIS     ((uint32_t)0x00000000)
#define SYSCTL_IMC_R_PLLLIM_EN      ((uint32_t)0x00000040)

#define SYSCTL_IMC_PLLLIM_MASK      ((uint32_t)0x00000001)
#define SYSCTL_IMC_PLLLIM_DIS       ((uint32_t)0x00000000)
#define SYSCTL_IMC_PLLLIM_EN        ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_USBPLLLIM_MASK ((uint32_t)0x00000080)
#define SYSCTL_IMC_R_USBPLLLIM_BIT  (7)
#define SYSCTL_IMC_R_USBPLLLIM_DIS  ((uint32_t)0x00000000)
#define SYSCTL_IMC_R_USBPLLLIM_EN   ((uint32_t)0x00000080)

#define SYSCTL_IMC_USBPLLLIM_MASK   ((uint32_t)0x00000001)
#define SYSCTL_IMC_USBPLLLIM_DIS    ((uint32_t)0x00000000)
#define SYSCTL_IMC_USBPLLLIM_EN     ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_MOSCPUPIM_MASK ((uint32_t)0x00000100)
#define SYSCTL_IMC_R_MOSCPUPIM_BIT  (8)
#define SYSCTL_IMC_R_MOSCPUPIM_DIS  ((uint32_t)0x00000000)
#define SYSCTL_IMC_R_MOSCPUPIM_EN   ((uint32_t)0x00000100)

#define SYSCTL_IMC_MOSCPUPIM_MASK   ((uint32_t)0x00000001)
#define SYSCTL_IMC_MOSCPUPIM_DIS    ((uint32_t)0x00000000)
#define SYSCTL_IMC_MOSCPUPIM_EN     ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_VDDAIM_MASK    ((uint32_t)0x00000400)
#define SYSCTL_IMC_R_VDDAIM_BIT     (10)
#define SYSCTL_IMC_R_VDDAIM_DIS     ((uint32_t)0x00000000)
#define SYSCTL_IMC_R_VDDAIM_EN      ((uint32_t)0x00000400)

#define SYSCTL_IMC_VDDAIM_MASK      ((uint32_t)0x00000001)
#define SYSCTL_IMC_VDDAIM_DIS       ((uint32_t)0x00000000)
#define SYSCTL_IMC_VDDAIM_EN        ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_BOR0IM_MASK    ((uint32_t)0x00000800)
#define SYSCTL_IMC_R_BOR0IM_BIT     (11)
#define SYSCTL_IMC_R_BOR0IM_DIS     ((uint32_t)0x00000000)
#define SYSCTL_IMC_R_BOR0IM_EN      ((uint32_t)0x00000800)

#define SYSCTL_IMC_BOR0IM_MASK      ((uint32_t)0x00000001)
#define SYSCTL_IMC_BOR0IM_DIS       ((uint32_t)0x00000000)
#define SYSCTL_IMC_BOR0IM_EN        ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_IMC_BOR1IM_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(SYSCTL_IMC_R_BOR1IM_BIT*4))))
#define SYSCTL_IMC_MOFIM_BITBANDING        (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(SYSCTL_IMC_R_MOFIM_BIT*4))))
#define SYSCTL_IMC_PLLLIM_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(SYSCTL_IMC_R_PLLLIM_BIT*4))))
#define SYSCTL_IMC_USBPLLLIM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(SYSCTL_IMC_R_USBPLLLIM_BIT*4))))
#define SYSCTL_IMC_MOSCPUPIM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(SYSCTL_IMC_R_MOSCPUPIM_BIT*4))))
#define SYSCTL_IMC_VDDAIM_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(SYSCTL_IMC_R_VDDAIM_BIT*4))))
#define SYSCTL_IMC_BOR0IM_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(SYSCTL_IMC_R_BOR0IM_BIT*4))))

/******************************************************************************************
************************************ 6 MISC *********************************************
******************************************************************************************/
#define SYSCTL_MISC            (((MISC_TypeDef*)(SYSCTL_BASE+SYSCTL_MISC_OFFSET )))
#define SYSCTL_MISC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_MISC_OFFSET)))

/*--------*/
#define SYSCTL_MISC_R_BOR1MIS_MASK      ((uint32_t)0x00000002)
#define SYSCTL_MISC_R_BOR1MIS_BIT       (1)
#define SYSCTL_MISC_R_BOR1MIS_NOOCCUR   ((uint32_t)0x00000000)
#define SYSCTL_MISC_R_BOR1MIS_OCCUR     ((uint32_t)0x00000002)

#define SYSCTL_MISC_BOR1MIS_MASK        ((uint32_t)0x00000001)
#define SYSCTL_MISC_BOR1MIS_NOOCCUR     ((uint32_t)0x00000000)
#define SYSCTL_MISC_BOR1MIS_OCCUR       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_MOFMIS_MASK       ((uint32_t)0x00000008)
#define SYSCTL_MISC_R_MOFMIS_BIT        (3)
#define SYSCTL_MISC_R_MOFMIS_NOOCCUR    ((uint32_t)0x00000000)
#define SYSCTL_MISC_R_MOFMIS_OCCUR      ((uint32_t)0x00000008)

#define SYSCTL_MISC_MOFMIS_MASK         ((uint32_t)0x00000001)
#define SYSCTL_MISC_MOFMIS_NOOCCUR      ((uint32_t)0x00000000)
#define SYSCTL_MISC_MOFMIS_OCCUR        ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_PLLLMIS_MASK      ((uint32_t)0x00000040)
#define SYSCTL_MISC_R_PLLLMIS_BIT       (6)
#define SYSCTL_MISC_R_PLLLMIS_NOOCCUR   ((uint32_t)0x00000000)
#define SYSCTL_MISC_R_PLLLMIS_OCCUR     ((uint32_t)0x00000040)

#define SYSCTL_MISC_PLLLMIS_MASK        ((uint32_t)0x00000001)
#define SYSCTL_MISC_PLLLMIS_NOOCCUR     ((uint32_t)0x00000000)
#define SYSCTL_MISC_PLLLMIS_OCCUR       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_USBPLLLMIS_MASK   ((uint32_t)0x00000080)
#define SYSCTL_MISC_R_USBPLLLMIS_BIT    (7)
#define SYSCTL_MISC_R_USBPLLLMIS_NOOCCUR  ((uint32_t)0x00000000)
#define SYSCTL_MISC_R_USBPLLLMIS_OCCUR   ((uint32_t)0x00000080)

#define SYSCTL_MISC_USBPLLLMIS_MASK     ((uint32_t)0x00000001)
#define SYSCTL_MISC_USBPLLLMIS_NOOCCUR  ((uint32_t)0x00000000)
#define SYSCTL_MISC_USBPLLLMIS_OCCUR    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_MOSCPUPMIS_MASK   ((uint32_t)0x00000100)
#define SYSCTL_MISC_R_MOSCPUPMIS_BIT    (8)
#define SYSCTL_MISC_R_MOSCPUPMIS_NOOCCUR  ((uint32_t)0x00000000)
#define SYSCTL_MISC_R_MOSCPUPMIS_OCCUR   ((uint32_t)0x00000100)

#define SYSCTL_MISC_MOSCPUPMIS_MASK     ((uint32_t)0x00000001)
#define SYSCTL_MISC_MOSCPUPMIS_NOOCCUR  ((uint32_t)0x00000000)
#define SYSCTL_MISC_MOSCPUPMIS_OCCUR    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_VDDAMIS_MASK      ((uint32_t)0x00000400)
#define SYSCTL_MISC_R_VDDAMIS_BIT       (10)
#define SYSCTL_MISC_R_VDDAMIS_NOOCCUR   ((uint32_t)0x00000000)
#define SYSCTL_MISC_R_VDDAMIS_OCCUR     ((uint32_t)0x00000400)

#define SYSCTL_MISC_VDDAMIS_MASK        ((uint32_t)0x00000001)
#define SYSCTL_MISC_VDDAMIS_NOOCCUR     ((uint32_t)0x00000000)
#define SYSCTL_MISC_VDDAMIS_OCCUR       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_BOR0MIS_MASK      ((uint32_t)0x00000800)
#define SYSCTL_MISC_R_BOR0MIS_BIT       (11)
#define SYSCTL_MISC_R_BOR0MIS_NOOCCUR   ((uint32_t)0x00000000)
#define SYSCTL_MISC_R_BOR0MIS_OCCUR     ((uint32_t)0x00000800)

#define SYSCTL_MISC_BOR0MIS_MASK        ((uint32_t)0x00000001)
#define SYSCTL_MISC_BOR0MIS_NOOCCUR     ((uint32_t)0x00000000)
#define SYSCTL_MISC_BOR0MIS_OCCUR       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_MISC_BOR1MIS_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(SYSCTL_MISC_R_BOR1MIS_BIT*4))))
#define SYSCTL_MISC_MOFMIS_BITBANDING        (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(SYSCTL_MISC_R_MOFMIS_BIT*4))))
#define SYSCTL_MISC_PLLLMIS_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(SYSCTL_MISC_R_PLLLMIS_BIT*4))))
#define SYSCTL_MISC_USBPLLLMIS_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(SYSCTL_MISC_R_USBPLLLMIS_BIT*4))))
#define SYSCTL_MISC_MOSCPUPMIS_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(SYSCTL_MISC_R_MOSCPUPMIS_BIT*4))))
#define SYSCTL_MISC_VDDAMIS_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(SYSCTL_MISC_R_VDDAMIS_BIT*4))))
#define SYSCTL_MISC_BOR0MIS_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(SYSCTL_MISC_R_BOR0MIS_BIT*4))))

/******************************************************************************************
************************************ 7 RESC *********************************************
******************************************************************************************/
#define SYSCTL_RESC            (((RESC_TypeDef*)(SYSCTL_BASE+SYSCTL_RESC_OFFSET )))
#define SYSCTL_RESC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RESC_OFFSET)))

/*--------*/
#define SYSCTL_RESC_R_EXT_MASK      ((uint32_t)0x00000001)
#define SYSCTL_RESC_R_EXT_BIT       (0)
#define SYSCTL_RESC_R_EXT_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_RESC_R_EXT_RESET     ((uint32_t)0x00000001)

#define SYSCTL_RESC_EXT_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RESC_EXT_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_RESC_EXT_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_POR_MASK      ((uint32_t)0x00000002)
#define SYSCTL_RESC_R_POR_BIT       (1)
#define SYSCTL_RESC_R_POR_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_RESC_R_POR_RESET     ((uint32_t)0x00000002)

#define SYSCTL_RESC_POR_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RESC_POR_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_RESC_POR_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_BOR_MASK      ((uint32_t)0x00000004)
#define SYSCTL_RESC_R_BOR_BIT       (2)
#define SYSCTL_RESC_R_BOR_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_RESC_R_BOR_RESET     ((uint32_t)0x00000004)

#define SYSCTL_RESC_BOR_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RESC_BOR_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_RESC_BOR_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_WDT0_MASK      ((uint32_t)0x00000008)
#define SYSCTL_RESC_R_WDT0_BIT       (3)
#define SYSCTL_RESC_R_WDT0_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_RESC_R_WDT0_RESET     ((uint32_t)0x00000008)

#define SYSCTL_RESC_WDT0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RESC_WDT0_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_RESC_WDT0_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_SW_MASK      ((uint32_t)0x00000010)
#define SYSCTL_RESC_R_SW_BIT       (4)
#define SYSCTL_RESC_R_SW_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_RESC_R_SW_RESET     ((uint32_t)0x00000010)

#define SYSCTL_RESC_SW_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RESC_SW_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_RESC_SW_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_WDT1_MASK      ((uint32_t)0x00000020)
#define SYSCTL_RESC_R_WDT1_BIT       (5)
#define SYSCTL_RESC_R_WDT1_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_RESC_R_WDT1_RESET     ((uint32_t)0x00000020)

#define SYSCTL_RESC_WDT1_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RESC_WDT1_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_RESC_WDT1_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_MOSCFAIL_MASK      ((uint32_t)0x00010000)
#define SYSCTL_RESC_R_MOSCFAIL_BIT       (16)
#define SYSCTL_RESC_R_MOSCFAIL_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_RESC_R_MOSCFAIL_RESET     ((uint32_t)0x00010000)

#define SYSCTL_RESC_MOSCFAIL_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RESC_MOSCFAIL_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_RESC_MOSCFAIL_RESET       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_RESC_EXT_BITBANDING      (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(SYSCTL_RESC_R_EXT_BIT*4))))
#define SYSCTL_RESC_POR_BITBANDING      (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(SYSCTL_RESC_R_POR_BIT*4))))
#define SYSCTL_RESC_BOR_BITBANDING      (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(SYSCTL_RESC_R_BOR_BIT*4))))
#define SYSCTL_RESC_WDT0_BITBANDING     (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(SYSCTL_RESC_R_WDT0_BIT*4))))
#define SYSCTL_RESC_SW_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(SYSCTL_RESC_R_SW_BIT*4))))
#define SYSCTL_RESC_WDT1_BITBANDING     (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(SYSCTL_RESC_R_WDT1_BIT*4))))
#define SYSCTL_RESC_MOSCFAIL_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(SYSCTL_RESC_R_MOSCFAIL_BIT*4))))

/******************************************************************************************
************************************ 8 RCC *********************************************
******************************************************************************************/
#define SYSCTL_RCC            (((RCC_TypeDef*)(SYSCTL_BASE+SYSCTL_RCC_OFFSET )))
#define SYSCTL_RCC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCC_OFFSET)))

/*--------*/
#define SYSCTL_RCC_R_MOSCDIS_MASK    ((uint32_t)0x00000001)
#define SYSCTL_RCC_R_MOSCDIS_BIT     (0)
#define SYSCTL_RCC_R_MOSCDIS_EN      ((uint32_t)0x00000000)
#define SYSCTL_RCC_R_MOSCDIS_DIS     ((uint32_t)0x00000001)

#define SYSCTL_RCC_MOSCDIS_MASK      ((uint32_t)0x00000001)
#define SYSCTL_RCC_MOSCDIS_EN        ((uint32_t)0x00000000)
#define SYSCTL_RCC_MOSCDIS_DIS       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_OSCSRC_MASK    ((uint32_t)0x00000030)
#define SYSCTL_RCC_R_OSCSRC_BIT     (4)
#define SYSCTL_RCC_R_OSCSRC_MOSC    ((uint32_t)0x00000000)
#define SYSCTL_RCC_R_OSCSRC_PIOSC   ((uint32_t)0x00000010)
#define SYSCTL_RCC_R_OSCSRC_PIOSC4  ((uint32_t)0x00000020)
#define SYSCTL_RCC_R_OSCSRC_LFIOSC  ((uint32_t)0x00000030)

#define SYSCTL_RCC_OSCSRC_MASK      ((uint32_t)0x00000003)
#define SYSCTL_RCC_OSCSRC_MOSC      ((uint32_t)0x00000000)
#define SYSCTL_RCC_OSCSRC_PIOSC     ((uint32_t)0x00000001)
#define SYSCTL_RCC_OSCSRC_PIOSC4    ((uint32_t)0x00000002)
#define SYSCTL_RCC_OSCSRC_LFIOSC    ((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_XTAL_MASK      ((uint32_t)0x000007C0)
#define SYSCTL_RCC_R_XTAL_BIT       (6)
#define SYSCTL_RCC_R_XTAL_4MHZ      ((uint32_t)0x00000180)
#define SYSCTL_RCC_R_XTAL_4_096MHZ  ((uint32_t)0x000001C0)
#define SYSCTL_RCC_R_XTAL_4_9152MHZ ((uint32_t)0x00000200)
#define SYSCTL_RCC_R_XTAL_5MHZ      ((uint32_t)0x00000240)
#define SYSCTL_RCC_R_XTAL_5_12MHZ   ((uint32_t)0x00000280)
#define SYSCTL_RCC_R_XTAL_6MHZ      ((uint32_t)0x000002C0)
#define SYSCTL_RCC_R_XTAL_6_144MHZ  ((uint32_t)0x00000300)
#define SYSCTL_RCC_R_XTAL_7_3728MHZ ((uint32_t)0x00000340)
#define SYSCTL_RCC_R_XTAL_8MHZ      ((uint32_t)0x00000380)
#define SYSCTL_RCC_R_XTAL_8_192MHZ  ((uint32_t)0x000003C0)
#define SYSCTL_RCC_R_XTAL_10MHZ     ((uint32_t)0x00000400)
#define SYSCTL_RCC_R_XTAL_12MHZ     ((uint32_t)0x00000440)
#define SYSCTL_RCC_R_XTAL_12_288MHZ ((uint32_t)0x00000480)
#define SYSCTL_RCC_R_XTAL_13_56MHZ  ((uint32_t)0x000004C0)
#define SYSCTL_RCC_R_XTAL_14_31818MHZ     ((uint32_t)0x00000500)
#define SYSCTL_RCC_R_XTAL_16MHZ     ((uint32_t)0x00000540)
#define SYSCTL_RCC_R_XTAL_16_384MHZ ((uint32_t)0x00000580)
#define SYSCTL_RCC_R_XTAL_18MHZ     ((uint32_t)0x000005C0)
#define SYSCTL_RCC_R_XTAL_20MHZ     ((uint32_t)0x00000600)
#define SYSCTL_RCC_R_XTAL_24MHZ     ((uint32_t)0x00000640)
#define SYSCTL_RCC_R_XTAL_25MHZ     ((uint32_t)0x00000680)

#define SYSCTL_RCC_XTAL_MASK      ((uint32_t)0x0000001F)
#define SYSCTL_RCC_XTAL_4MHZ      ((uint32_t)0x00000006)
#define SYSCTL_RCC_XTAL_4_096MHZ  ((uint32_t)0x00000007)
#define SYSCTL_RCC_XTAL_4_9152MHZ ((uint32_t)0x00000008)
#define SYSCTL_RCC_XTAL_5MHZ      ((uint32_t)0x00000009)
#define SYSCTL_RCC_XTAL_5_12MHZ   ((uint32_t)0x0000000A)
#define SYSCTL_RCC_XTAL_6MHZ      ((uint32_t)0x0000000B)
#define SYSCTL_RCC_XTAL_6_144MHZ  ((uint32_t)0x0000000C)
#define SYSCTL_RCC_XTAL_7_3728MHZ ((uint32_t)0x0000000D)
#define SYSCTL_RCC_XTAL_8MHZ      ((uint32_t)0x0000000E)
#define SYSCTL_RCC_XTAL_8_192MHZ  ((uint32_t)0x0000000F)
#define SYSCTL_RCC_XTAL_10MHZ     ((uint32_t)0x00000010)
#define SYSCTL_RCC_XTAL_12MHZ     ((uint32_t)0x00000011)
#define SYSCTL_RCC_XTAL_12_288MHZ ((uint32_t)0x00000012)
#define SYSCTL_RCC_XTAL_13_56MHZ  ((uint32_t)0x00000013)
#define SYSCTL_RCC_XTAL_14_31818MHZ     ((uint32_t)0x00000014)
#define SYSCTL_RCC_XTAL_16MHZ     ((uint32_t)0x00000015)
#define SYSCTL_RCC_XTAL_16_384MHZ ((uint32_t)0x00000016)
#define SYSCTL_RCC_XTAL_18MHZ     ((uint32_t)0x00000017)
#define SYSCTL_RCC_XTAL_20MHZ     ((uint32_t)0x00000018)
#define SYSCTL_RCC_XTAL_24MHZ     ((uint32_t)0x00000019)
#define SYSCTL_RCC_XTAL_25MHZ     ((uint32_t)0x0000001A)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_BYPASS_MASK    ((uint32_t)0x00000800)
#define SYSCTL_RCC_R_BYPASS_BIT     (11)
#define SYSCTL_RCC_R_BYPASS_PLL     ((uint32_t)0x00000000)
#define SYSCTL_RCC_R_BYPASS_OSC     ((uint32_t)0x00000800)

#define SYSCTL_RCC_BYPASS_MASK      ((uint32_t)0x00000001)
#define SYSCTL_RCC_BYPASS_PLL       ((uint32_t)0x00000000)
#define SYSCTL_RCC_BYPASS_OSC       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_PWRDN_MASK    ((uint32_t)0x00002000)
#define SYSCTL_RCC_R_PWRDN_BIT     (13)
#define SYSCTL_RCC_R_PWRDN_ON      ((uint32_t)0x00000000)
#define SYSCTL_RCC_R_PWRDN_DOWN    ((uint32_t)0x00002000)

#define SYSCTL_RCC_PWRDN_MASK      ((uint32_t)0x00000001)
#define SYSCTL_RCC_PWRDN_ON        ((uint32_t)0x00000000)
#define SYSCTL_RCC_PWRDN_DOWN      ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_PWMDIV_MASK    ((uint32_t)0x000E0000)
#define SYSCTL_RCC_R_PWMDIV_BIT     (17)
#define SYSCTL_RCC_R_PWMDIV_2       ((uint32_t)0x00000000)
#define SYSCTL_RCC_R_PWMDIV_4       ((uint32_t)0x00020000)
#define SYSCTL_RCC_R_PWMDIV_8       ((uint32_t)0x00040000)
#define SYSCTL_RCC_R_PWMDIV_16      ((uint32_t)0x00060000)
#define SYSCTL_RCC_R_PWMDIV_32      ((uint32_t)0x00080000)
#define SYSCTL_RCC_R_PWMDIV_64      ((uint32_t)0x000E0000)

#define SYSCTL_RCC_PWMDIV_MASK      ((uint32_t)0x00000007)
#define SYSCTL_RCC_PWMDIV_2         ((uint32_t)0x00000000)
#define SYSCTL_RCC_PWMDIV_4         ((uint32_t)0x00000001)
#define SYSCTL_RCC_PWMDIV_8         ((uint32_t)0x00000002)
#define SYSCTL_RCC_PWMDIV_16        ((uint32_t)0x00000003)
#define SYSCTL_RCC_PWMDIV_32        ((uint32_t)0x00000004)
#define SYSCTL_RCC_PWMDIV_64        ((uint32_t)0x00000007)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_USEPWMDIV_MASK    ((uint32_t)0x00100000)
#define SYSCTL_RCC_R_USEPWMDIV_BIT     (20)
#define SYSCTL_RCC_R_USEPWMDIV_SYSCLK  ((uint32_t)0x00000000)
#define SYSCTL_RCC_R_USEPWMDIV_PWMDIV  ((uint32_t)0x00100000)

#define SYSCTL_RCC_USEPWMDIV_MASK      ((uint32_t)0x00000001)
#define SYSCTL_RCC_USEPWMDIV_SYSCLK    ((uint32_t)0x00000000)
#define SYSCTL_RCC_USEPWMDIV_PWMDIV    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_USESYSDIV_MASK    ((uint32_t)0x00400000)
#define SYSCTL_RCC_R_USESYSDIV_BIT     (22)
#define SYSCTL_RCC_R_USESYSDIV_SYSCLK  ((uint32_t)0x00000000)
#define SYSCTL_RCC_R_USESYSDIV_SYSDIV  ((uint32_t)0x00400000)

#define SYSCTL_RCC_USESYSDIV_MASK      ((uint32_t)0x00000001)
#define SYSCTL_RCC_USESYSDIV_SYSCLK    ((uint32_t)0x00000000)
#define SYSCTL_RCC_USESYSDIV_SYSDIV    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_SYSDIV_MASK    ((uint32_t)0x07800000)
#define SYSCTL_RCC_R_SYSDIV_BIT     (23)

#define SYSCTL_RCC_SYSDIV_MASK      ((uint32_t)0x0000000F)
/*--------*/


/*--------*/
#define SYSCTL_RCC_R_ACG_MASK    ((uint32_t)0x08000000)
#define SYSCTL_RCC_R_ACG_BIT     (27)
#define SYSCTL_RCC_R_ACG_RCGCn  ((uint32_t)0x00000000)
#define SYSCTL_RCC_R_ACG_SCGCn  ((uint32_t)0x08000000)

#define SYSCTL_RCC_ACG_MASK      ((uint32_t)0x00000001)
#define SYSCTL_RCC_ACG_RCGCn    ((uint32_t)0x00000000)
#define SYSCTL_RCC_ACG_SCGCn    ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_RCC_MOSCDIS_BITBANDING   (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32)+(SYSCTL_RCC_R_MOSCDIS_BIT*4))))
#define SYSCTL_RCC_BYPASS_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32)+(SYSCTL_RCC_R_BYPASS_BIT*4))))
#define SYSCTL_RCC_PWRDN_BITBANDING     (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32)+(SYSCTL_RCC_R_PWRDN_BIT*4))))
#define SYSCTL_RCC_USEPWMDIV_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32)+(SYSCTL_RCC_R_USEPWMDIV_BIT*4))))
#define SYSCTL_RCC_USESYSDIV_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32)+(SYSCTL_RCC_R_USESYSDIV_BIT*4))))
#define SYSCTL_RCC_ACG_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32)+(SYSCTL_RCC_R_ACG_BIT*4))))

/******************************************************************************************
************************************ 9 GPIOHBCTL *********************************************
******************************************************************************************/
#define SYSCTL_GPIOHBCTL            (((GPIOHBCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_GPIOHBCTL_OFFSET )))
#define SYSCTL_GPIOHBCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_GPIOHBCTL_OFFSET)))

/*--------*/
#define SYSCTL_GPIOHBCTL_R_PORTA_MASK    ((uint32_t)0x00000001)
#define SYSCTL_GPIOHBCTL_R_PORTA_BIT     (0)
#define SYSCTL_GPIOHBCTL_R_PORTA_APB      ((uint32_t)0x00000000)
#define SYSCTL_GPIOHBCTL_R_PORTA_AHB     ((uint32_t)0x00000001)

#define SYSCTL_GPIOHBCTL_PORTA_MASK      ((uint32_t)0x00000001)
#define SYSCTL_GPIOHBCTL_PORTA_APB        ((uint32_t)0x00000000)
#define SYSCTL_GPIOHBCTL_PORTA_AHB       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_GPIOHBCTL_R_PORTB_MASK    ((uint32_t)0x00000002)
#define SYSCTL_GPIOHBCTL_R_PORTB_BIT     (1)
#define SYSCTL_GPIOHBCTL_R_PORTB_APB      ((uint32_t)0x00000000)
#define SYSCTL_GPIOHBCTL_R_PORTB_AHB     ((uint32_t)0x00000002)

#define SYSCTL_GPIOHBCTL_PORTB_MASK      ((uint32_t)0x00000001)
#define SYSCTL_GPIOHBCTL_PORTB_APB        ((uint32_t)0x00000000)
#define SYSCTL_GPIOHBCTL_PORTB_AHB       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_GPIOHBCTL_R_PORTC_MASK    ((uint32_t)0x00000004)
#define SYSCTL_GPIOHBCTL_R_PORTC_BIT     (2)
#define SYSCTL_GPIOHBCTL_R_PORTC_APB      ((uint32_t)0x00000000)
#define SYSCTL_GPIOHBCTL_R_PORTC_AHB     ((uint32_t)0x00000004)

#define SYSCTL_GPIOHBCTL_PORTC_MASK      ((uint32_t)0x00000001)
#define SYSCTL_GPIOHBCTL_PORTC_APB        ((uint32_t)0x00000000)
#define SYSCTL_GPIOHBCTL_PORTC_AHB       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_GPIOHBCTL_R_PORTD_MASK    ((uint32_t)0x00000008)
#define SYSCTL_GPIOHBCTL_R_PORTD_BIT     (3)
#define SYSCTL_GPIOHBCTL_R_PORTD_APB      ((uint32_t)0x00000000)
#define SYSCTL_GPIOHBCTL_R_PORTD_AHB     ((uint32_t)0x00000008)

#define SYSCTL_GPIOHBCTL_PORTD_MASK      ((uint32_t)0x00000001)
#define SYSCTL_GPIOHBCTL_PORTD_APB        ((uint32_t)0x00000000)
#define SYSCTL_GPIOHBCTL_PORTD_AHB       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_GPIOHBCTL_R_PORTE_MASK    ((uint32_t)0x00000010)
#define SYSCTL_GPIOHBCTL_R_PORTE_BIT     (4)
#define SYSCTL_GPIOHBCTL_R_PORTE_APB      ((uint32_t)0x00000000)
#define SYSCTL_GPIOHBCTL_R_PORTE_AHB     ((uint32_t)0x00000010)

#define SYSCTL_GPIOHBCTL_PORTE_MASK      ((uint32_t)0x00000001)
#define SYSCTL_GPIOHBCTL_PORTE_APB        ((uint32_t)0x00000000)
#define SYSCTL_GPIOHBCTL_PORTE_AHB       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_GPIOHBCTL_R_PORTF_MASK    ((uint32_t)0x00000020)
#define SYSCTL_GPIOHBCTL_R_PORTF_BIT     (5)
#define SYSCTL_GPIOHBCTL_R_PORTF_APB      ((uint32_t)0x00000000)
#define SYSCTL_GPIOHBCTL_R_PORTF_AHB     ((uint32_t)0x00000020)

#define SYSCTL_GPIOHBCTL_PORTF_MASK      ((uint32_t)0x00000001)
#define SYSCTL_GPIOHBCTL_PORTF_APB        ((uint32_t)0x00000000)
#define SYSCTL_GPIOHBCTL_PORTF_AHB       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_GPIOHBCTL_PORTA_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32)+(SYSCTL_GPIOHBCTL_R_PORTA_BIT*4))))
#define SYSCTL_GPIOHBCTL_PORTB_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32)+(SYSCTL_GPIOHBCTL_R_PORTB_BIT*4))))
#define SYSCTL_GPIOHBCTL_PORTC_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32)+(SYSCTL_GPIOHBCTL_R_PORTC_BIT*4))))
#define SYSCTL_GPIOHBCTL_PORTD_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32)+(SYSCTL_GPIOHBCTL_R_PORTD_BIT*4))))
#define SYSCTL_GPIOHBCTL_PORTE_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32)+(SYSCTL_GPIOHBCTL_R_PORTE_BIT*4))))
#define SYSCTL_GPIOHBCTL_PORTF_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32)+(SYSCTL_GPIOHBCTL_R_PORTF_BIT*4))))



/******************************************************************************************
************************************ 10 RCC2 *********************************************
******************************************************************************************/
#define SYSCTL_RCC2            (((RCC2_TypeDef*)(SYSCTL_BASE+SYSCTL_RCC2_OFFSET )))
#define SYSCTL_RCC2_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCC2_OFFSET)))


/*--------*/
#define SYSCTL_RCC2_R_OSCSRC2_MASK    ((uint32_t)0x00000070)
#define SYSCTL_RCC2_R_OSCSRC2_BIT     (4)
#define SYSCTL_RCC2_R_OSCSRC2_MOSC    ((uint32_t)0x00000000)
#define SYSCTL_RCC2_R_OSCSRC2_PIOSC   ((uint32_t)0x00000010)
#define SYSCTL_RCC2_R_OSCSRC2_PIOSC4  ((uint32_t)0x00000020)
#define SYSCTL_RCC2_R_OSCSRC2_LFIOSC  ((uint32_t)0x00000030)
#define SYSCTL_RCC2_R_OSCSRC2_32_768KHZ  ((uint32_t)0x00000070)

#define SYSCTL_RCC2_OSCSRC2_MASK      ((uint32_t)0x00000007)
#define SYSCTL_RCC2_OSCSRC2_MOSC      ((uint32_t)0x00000000)
#define SYSCTL_RCC2_OSCSRC2_PIOSC     ((uint32_t)0x00000001)
#define SYSCTL_RCC2_OSCSRC2_PIOSC4    ((uint32_t)0x00000002)
#define SYSCTL_RCC2_OSCSRC2_LFIOSC    ((uint32_t)0x00000003)
#define SYSCTL_RCC2_OSCSRC2_32_768KHZ    ((uint32_t)0x00000007)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_BYPASS2_MASK    ((uint32_t)0x00000800)
#define SYSCTL_RCC2_R_BYPASS2_BIT     (11)
#define SYSCTL_RCC2_R_BYPASS2_PLL     ((uint32_t)0x00000000)
#define SYSCTL_RCC2_R_BYPASS2_OSC     ((uint32_t)0x00000800)

#define SYSCTL_RCC2_BYPASS2_MASK      ((uint32_t)0x00000001)
#define SYSCTL_RCC2_BYPASS2_PLL       ((uint32_t)0x00000000)
#define SYSCTL_RCC2_BYPASS2_OSC       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_PWRDN2_MASK    ((uint32_t)0x00002000)
#define SYSCTL_RCC2_R_PWRDN2_BIT     (13)
#define SYSCTL_RCC2_R_PWRDN2_ON      ((uint32_t)0x00000000)
#define SYSCTL_RCC2_R_PWRDN2_DOWN    ((uint32_t)0x00002000)

#define SYSCTL_RCC2_PWRDN2_MASK      ((uint32_t)0x00000001)
#define SYSCTL_RCC2_PWRDN2_ON        ((uint32_t)0x00000000)
#define SYSCTL_RCC2_PWRDN2_DOWN      ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_USBPWRDN_MASK    ((uint32_t)0x00004000)
#define SYSCTL_RCC2_R_USBPWRDN_BIT     (14)
#define SYSCTL_RCC2_R_USBPWRDN_ON      ((uint32_t)0x00000000)
#define SYSCTL_RCC2_R_USBPWRDN_DOWN    ((uint32_t)0x00004000)

#define SYSCTL_RCC2_USBPWRDN_MASK      ((uint32_t)0x00000001)
#define SYSCTL_RCC2_USBPWRDN_ON        ((uint32_t)0x00000000)
#define SYSCTL_RCC2_USBPWRDN_DOWN      ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_SYSDIV2LSB_MASK    ((uint32_t)0x00400000)
#define SYSCTL_RCC2_R_SYSDIV2LSB_BIT     (22)
#define SYSCTL_RCC2_R_SYSDIV2LSB_CLEAR   ((uint32_t)0x00000000)
#define SYSCTL_RCC2_R_SYSDIV2LSB_SET     ((uint32_t)0x00400000)

#define SYSCTL_RCC2_SYSDIV2LSB_MASK      ((uint32_t)0x00000001)
#define SYSCTL_RCC2_SYSDIV2LSB_CLEAR     ((uint32_t)0x00000000)
#define SYSCTL_RCC2_SYSDIV2LSB_SET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_SYSDIV2_MASK    ((uint32_t)0x1F800000)
#define SYSCTL_RCC2_R_SYSDIV2_BIT     (23)

#define SYSCTL_RCC2_SYSDIV2_MASK      ((uint32_t)0x0000003F)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_DIV400_MASK    ((uint32_t)0x40000000)
#define SYSCTL_RCC2_R_DIV400_BIT     (30)
#define SYSCTL_RCC2_R_DIV400_200MHZ  ((uint32_t)0x00000000)
#define SYSCTL_RCC2_R_DIV400_400MHZ  ((uint32_t)0x40000000)

#define SYSCTL_RCC2_DIV400_MASK      ((uint32_t)0x00000001)
#define SYSCTL_RCC2_DIV400_200MHZ    ((uint32_t)0x00000000)
#define SYSCTL_RCC2_DIV400_400MHZ    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_USERCC2_MASK    ((uint32_t)0x80000000)
#define SYSCTL_RCC2_R_USERCC2_BIT     (31)
#define SYSCTL_RCC2_R_USERCC2_RCC     ((uint32_t)0x00000000)
#define SYSCTL_RCC2_R_USERCC2_RCC2    ((uint32_t)0x80000000)

#define SYSCTL_RCC2_USERCC2_MASK      ((uint32_t)0x00000001)
#define SYSCTL_RCC2_USERCC2_RCC       ((uint32_t)0x00000000)
#define SYSCTL_RCC2_USERCC2_RCC2      ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_RCC2_BYPASS2_BITBANDING   (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32)+(SYSCTL_RCC2_R_BYPASS2_BIT*4))))
#define SYSCTL_RCC2_PWRDN2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32)+(SYSCTL_RCC2_R_PWRDN2_BIT*4))))
#define SYSCTL_RCC2_USBPWRDN_BITBANDING     (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32)+(SYSCTL_RCC2_R_USBPWRDN_BIT*4))))
#define SYSCTL_RCC2_SYSDIV2LSB_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32)+(SYSCTL_RCC2_R_SYSDIV2LSB_BIT*4))))
#define SYSCTL_RCC2_DIV400_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32)+(SYSCTL_RCC2_R_DIV400_BIT*4))))
#define SYSCTL_RCC2_USERCC2_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32)+(SYSCTL_RCC2_R_USERCC2_BIT*4))))


/******************************************************************************************
************************************ 11 MOSCCTL *********************************************
******************************************************************************************/
#define SYSCTL_MOSCCTL            (((MOSCCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_MOSCCTL_OFFSET )))
#define SYSCTL_MOSCCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_MOSCCTL_OFFSET)))

/*--------*/
#define SYSCTL_MOSCCTL_R_CVAL_MASK    ((uint32_t)0x00000001)
#define SYSCTL_MOSCCTL_R_CVAL_BIT     (0)
#define SYSCTL_MOSCCTL_R_CVAL_DIS     ((uint32_t)0x00000000)
#define SYSCTL_MOSCCTL_R_CVAL_EN      ((uint32_t)0x00000001)

#define SYSCTL_MOSCCTL_CVAL_MASK      ((uint32_t)0x00000001)
#define SYSCTL_MOSCCTL_CVAL_DIS       ((uint32_t)0x00000000)
#define SYSCTL_MOSCCTL_CVAL_EN        ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_MOSCCTL_R_MOSCIM_MASK    ((uint32_t)0x00000002)
#define SYSCTL_MOSCCTL_R_MOSCIM_BIT     (1)
#define SYSCTL_MOSCCTL_R_MOSCIM_RESET   ((uint32_t)0x00000000)
#define SYSCTL_MOSCCTL_R_MOSCIM_INT     ((uint32_t)0x00000002)

#define SYSCTL_MOSCCTL_MOSCIM_MASK      ((uint32_t)0x00000001)
#define SYSCTL_MOSCCTL_MOSCIM_RESET     ((uint32_t)0x00000000)
#define SYSCTL_MOSCCTL_MOSCIM_INT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_MOSCCTL_R_NOXTAL_MASK        ((uint32_t)0x00000004)
#define SYSCTL_MOSCCTL_R_NOXTAL_BIT         (2)
#define SYSCTL_MOSCCTL_R_NOXTAL_PRESENT     ((uint32_t)0x00000000)
#define SYSCTL_MOSCCTL_R_NOXTAL_NOPRESENT   ((uint32_t)0x00000004)

#define SYSCTL_MOSCCTL_NOXTAL_MASK          ((uint32_t)0x00000001)
#define SYSCTL_MOSCCTL_NOXTAL_PRESENT       ((uint32_t)0x00000000)
#define SYSCTL_MOSCCTL_NOXTAL_NOPRESENT     ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_MOSCCTL_CVAL_BITBANDING      (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MOSCCTL_OFFSET)*32)+(SYSCTL_MOSCCTL_R_CVAL_BIT*4))))
#define SYSCTL_MOSCCTL_MOSCIM_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MOSCCTL_OFFSET)*32)+(SYSCTL_MOSCCTL_R_MOSCIM_BIT*4))))
#define SYSCTL_MOSCCTL_NOXTAL_BITBANDING     (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MOSCCTL_OFFSET)*32)+(SYSCTL_MOSCCTL_R_NOXTAL_BIT*4))))


/******************************************************************************************
************************************12 DSLPCLKCFG *********************************************
******************************************************************************************/
#define SYSCTL_DSLPCLKCFG            (((DSLPCLKCFG_TypeDef*)(SYSCTL_BASE+SYSCTL_DSLPCLKCFG_OFFSET )))
#define SYSCTL_DSLPCLKCFG_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DSLPCLKCFG_OFFSET)))

/*--------*/
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_MASK    ((uint32_t)0x00000002)
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_BIT     (1)
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_NOACTION ((uint32_t)0x00000000)
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_DOWN    ((uint32_t)0x00000002)

#define SYSCTL_DSLPCLKCFG_PIOSCPD_MASK      ((uint32_t)0x00000001)
#define SYSCTL_DSLPCLKCFG_PIOSCPD_NOACTION  ((uint32_t)0x00000000)
#define SYSCTL_DSLPCLKCFG_PIOSCPD_DOWN      ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_MASK    ((uint32_t)0x00000070)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_BIT     (4)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_MOSC    ((uint32_t)0x00000000)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_PIOSC   ((uint32_t)0x00000010)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_LFIOSC  ((uint32_t)0x00000030)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_32_768KHZ  ((uint32_t)0x00000070)

#define SYSCTL_DSLPCLKCFG_DSOSCSRC_MASK         ((uint32_t)0x00000007)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_MOSC         ((uint32_t)0x00000000)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_PIOSC        ((uint32_t)0x00000001)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_LFIOSC       ((uint32_t)0x00000003)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_32_768KHZ    ((uint32_t)0x00000007)
/*--------*/

/*--------*/
#define SYSCTL_DSLPCLKCFG_R_DSDIVORIDE_MASK    ((uint32_t)0x1F800000)
#define SYSCTL_DSLPCLKCFG_R_DSDIVORIDE_BIT     (23)

#define SYSCTL_DSLPCLKCFG_DSDIVORIDE_MASK      ((uint32_t)0x0000003F)
/*--------*/

#define SYSCTL_DSLPCLKCFG_PIOSCPD_BITBANDING      (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DSLPCLKCFG_OFFSET)*32)+(SYSCTL_DSLPCLKCFG_R_PIOSCPD_BIT*4))))


/******************************************************************************************
************************************13 SYSPROP *********************************************
******************************************************************************************/
#define SYSCTL_SYSPROP            (((SYSPROP_TypeDef*)(SYSCTL_BASE+SYSCTL_SYSPROP_OFFSET )))
#define SYSCTL_SYSPROP_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SYSPROP_OFFSET)))

/*--------*/
#define SYSCTL_SYSPROP_R_FPU_MASK       ((uint32_t)0x00000001)
#define SYSCTL_SYSPROP_R_FPU_BIT        (0)
#define SYSCTL_SYSPROP_R_FPU_NOPRESENT  ((uint32_t)0x00000000)
#define SYSCTL_SYSPROP_R_FPU_PRESENT    ((uint32_t)0x00000001)

#define SYSCTL_SYSPROP_FPU_MASK         ((uint32_t)0x00000001)
#define SYSCTL_SYSPROP_FPU_NOPRESENT    ((uint32_t)0x00000000)
#define SYSCTL_SYSPROP_FPU_PRESENT      ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_FLASHLPM_MASK       ((uint32_t)0x00000100)
#define SYSCTL_SYSPROP_R_FLASHLPM_BIT        (8)
#define SYSCTL_SYSPROP_R_FLASHLPM_NOPRESENT  ((uint32_t)0x00000000)
#define SYSCTL_SYSPROP_R_FLASHLPM_PRESENT    ((uint32_t)0x00000100)

#define SYSCTL_SYSPROP_FLASHLPM_MASK         ((uint32_t)0x00000001)
#define SYSCTL_SYSPROP_FLASHLPM_NOPRESENT    ((uint32_t)0x00000000)
#define SYSCTL_SYSPROP_FLASHLPM_PRESENT      ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_SRAMLPM_MASK       ((uint32_t)0x00000400)
#define SYSCTL_SYSPROP_R_SRAMLPM_BIT        (10)
#define SYSCTL_SYSPROP_R_SRAMLPM_NOPRESENT  ((uint32_t)0x00000000)
#define SYSCTL_SYSPROP_R_SRAMLPM_PRESENT    ((uint32_t)0x00000400)

#define SYSCTL_SYSPROP_SRAMLPM_MASK         ((uint32_t)0x00000001)
#define SYSCTL_SYSPROP_SRAMLPM_NOPRESENT    ((uint32_t)0x00000000)
#define SYSCTL_SYSPROP_SRAMLPM_PRESENT      ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_SRAMSM_MASK       ((uint32_t)0x00000800)
#define SYSCTL_SYSPROP_R_SRAMSM_BIT        (11)
#define SYSCTL_SYSPROP_R_SRAMSM_NOPRESENT  ((uint32_t)0x00000000)
#define SYSCTL_SYSPROP_R_SRAMSM_PRESENT    ((uint32_t)0x00000800)

#define SYSCTL_SYSPROP_SRAMSM_MASK         ((uint32_t)0x00000001)
#define SYSCTL_SYSPROP_SRAMSM_NOPRESENT    ((uint32_t)0x00000000)
#define SYSCTL_SYSPROP_SRAMSM_PRESENT      ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_PIOSCPDE_MASK       ((uint32_t)0x00001000)
#define SYSCTL_SYSPROP_R_PIOSCPDE_BIT        (12)
#define SYSCTL_SYSPROP_R_PIOSCPDE_NOPRESENT  ((uint32_t)0x00000000)
#define SYSCTL_SYSPROP_R_PIOSCPDE_PRESENT    ((uint32_t)0x00001000)

#define SYSCTL_SYSPROP_PIOSCPDE_MASK         ((uint32_t)0x00000001)
#define SYSCTL_SYSPROP_PIOSCPDE_NOPRESENT    ((uint32_t)0x00000000)
#define SYSCTL_SYSPROP_PIOSCPDE_PRESENT      ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SYSPROP_FPU_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32)+(SYSCTL_SYSPROP_R_FPU_BIT*4))))
#define SYSCTL_SYSPROP_FLASHLPM_BITBANDING        (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32)+(SYSCTL_SYSPROP_R_FLASHLPM_BIT*4))))
#define SYSCTL_SYSPROP_SRAMLPM_BITBANDING      (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32)+(SYSCTL_SYSPROP_R_SRAMLPM_BIT*4))))
#define SYSCTL_SYSPROP_SRAMSM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32)+(SYSCTL_SYSPROP_R_SRAMSM_BIT*4))))
#define SYSCTL_SYSPROP_PIOSCPDE_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32)+(SYSCTL_SYSPROP_R_PIOSCPDE_BIT*4))))


/******************************************************************************************
************************************14 PIOSCCAL *********************************************
******************************************************************************************/
#define SYSCTL_PIOSCCAL            (((PIOSCCAL_TypeDef*)(SYSCTL_BASE+SYSCTL_PIOSCCAL_OFFSET )))
#define SYSCTL_PIOSCCAL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PIOSCCAL_OFFSET)))

/*--------*/
#define SYSCTL_PIOSCCAL_R_UT_MASK    ((uint32_t)0x0000007F)
#define SYSCTL_PIOSCCAL_R_UT_BIT     (0)

#define SYSCTL_PIOSCCAL_UT_MASK      ((uint32_t)0x0000007F)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCCAL_R_UPDATE_MASK       ((uint32_t)0x00000100)
#define SYSCTL_PIOSCCAL_R_UPDATE_BIT        (8)
#define SYSCTL_PIOSCCAL_R_UPDATE_NOACTION   ((uint32_t)0x00000000)
#define SYSCTL_PIOSCCAL_R_UPDATE_UPDATE     ((uint32_t)0x00000100)

#define SYSCTL_PIOSCCAL_UPDATE_MASK         ((uint32_t)0x00000001)
#define SYSCTL_PIOSCCAL_UPDATE_NOACTION     ((uint32_t)0x00000000)
#define SYSCTL_PIOSCCAL_UPDATE_UPDATE       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCCAL_R_CAL_MASK       ((uint32_t)0x00000200)
#define SYSCTL_PIOSCCAL_R_CAL_BIT        (9)
#define SYSCTL_PIOSCCAL_R_CAL_NOACTION   ((uint32_t)0x00000000)
#define SYSCTL_PIOSCCAL_R_CAL_START      ((uint32_t)0x00000200)

#define SYSCTL_PIOSCCAL_CAL_MASK         ((uint32_t)0x00000001)
#define SYSCTL_PIOSCCAL_CAL_NOACTION     ((uint32_t)0x00000000)
#define SYSCTL_PIOSCCAL_CAL_START        ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCCAL_R_UTEN_MASK       ((uint32_t)0x80000000)
#define SYSCTL_PIOSCCAL_R_UTEN_BIT        (31)
#define SYSCTL_PIOSCCAL_R_UTEN_FACTORY    ((uint32_t)0x00000000)
#define SYSCTL_PIOSCCAL_R_UTEN_TRIM       ((uint32_t)0x80000000)

#define SYSCTL_PIOSCCAL_UTEN_MASK         ((uint32_t)0x00000001)
#define SYSCTL_PIOSCCAL_UTEN_FACTORY      ((uint32_t)0x00000000)
#define SYSCTL_PIOSCCAL_UTEN_TRIM         ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PIOSCCAL_UPDATE_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PIOSCCAL_OFFSET)*32)+(SYSCTL_PIOSCCAL_R_UPDATE_BIT*4))))
#define SYSCTL_PIOSCCAL_CAL_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PIOSCCAL_OFFSET)*32)+(SYSCTL_PIOSCCAL_R_CAL_BIT*4))))
#define SYSCTL_PIOSCCAL_UTEN_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PIOSCCAL_OFFSET)*32)+(SYSCTL_PIOSCCAL_R_UTEN_BIT*4))))

/******************************************************************************************
************************************15 PIOSCSTAT *********************************************
******************************************************************************************/
#define SYSCTL_PIOSCSTAT            (((PIOSCSTAT_TypeDef*)(SYSCTL_BASE+SYSCTL_PIOSCSTAT_OFFSET )))
#define SYSCTL_PIOSCSTAT_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PIOSCSTAT_OFFSET)))

/*--------*/
#define SYSCTL_PIOSCSTAT_R_CT_MASK    ((uint32_t)0x0000007F)
#define SYSCTL_PIOSCSTAT_R_CT_BIT     (0)

#define SYSCTL_PIOSCSTAT_CT_MASK      ((uint32_t)0x0000007F)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCSTAT_R_RESULT_MASK    ((uint32_t)0x00000300)
#define SYSCTL_PIOSCSTAT_R_RESULT_BIT     (8)

#define SYSCTL_PIOSCSTAT_RESULT_MASK      ((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCSTAT_R_DT_MASK      ((uint32_t)0x007F0000)
#define SYSCTL_PIOSCSTAT_R_DT_BIT       (16)

#define SYSCTL_PIOSCSTAT_v_MASK         ((uint32_t)0x0000007F)
/*--------*/

/******************************************************************************************
************************************16 PLLFREQ0 *********************************************
******************************************************************************************/
#define SYSCTL_PLLFREQ0            (((PLLFREQ0_TypeDef*)(SYSCTL_BASE+SYSCTL_PLLFREQ0_OFFSET )))
#define SYSCTL_PLLFREQ0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PLLFREQ0_OFFSET)))

/*--------*/
#define SYSCTL_PLLFREQ0_R_MINT_MASK    ((uint32_t)0x000003FF)
#define SYSCTL_PLLFREQ0_R_MINT_BIT     (0)

#define SYSCTL_PLLFREQ0_MINT_MASK      ((uint32_t)0x000003FF)
/*--------*/

/*--------*/
#define SYSCTL_PLLFREQ0_R_MFRAC_MASK    ((uint32_t)0x000FFC00)
#define SYSCTL_PLLFREQ0_R_MFRAC_BIT     (10)

#define SYSCTL_PLLFREQ0_MFRAC_MASK      ((uint32_t)0x000003FF)
/*--------*/

/******************************************************************************************
************************************17 PLLFREQ1 *********************************************
******************************************************************************************/
#define SYSCTL_PLLFREQ1            (((PLLFREQ1_TypeDef*)(SYSCTL_BASE+SYSCTL_PLLFREQ1_OFFSET )))
#define SYSCTL_PLLFREQ1_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PLLFREQ1_OFFSET)))

/*--------*/
#define SYSCTL_PLLFREQ1_R_N_MASK    ((uint32_t)0x0000001F)
#define SYSCTL_PLLFREQ1_R_N_BIT     (0)

#define SYSCTL_PLLFREQ1_N_MASK      ((uint32_t)0x0000001F)
/*--------*/
/*--------*/
#define SYSCTL_PLLFREQ1_R_Q_MASK    ((uint32_t)0x00001F00)
#define SYSCTL_PLLFREQ1_R_Q_BIT     (8)

#define SYSCTL_PLLFREQ1_Q_MASK      ((uint32_t)0x0000001F)
/*--------*/

/******************************************************************************************
************************************18 PLLSTAT *********************************************
******************************************************************************************/
#define SYSCTL_PLLSTAT            (((PLLSTAT_TypeDef*)(SYSCTL_BASE+SYSCTL_PLLSTAT_OFFSET )))
#define SYSCTL_PLLSTAT_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PLLSTAT_OFFSET)))

/*--------*/
#define SYSCTL_PLLSTAT_R_LOCK_MASK       ((uint32_t)0x00000001)
#define SYSCTL_PLLSTAT_R_LOCK_BIT        (0)
#define SYSCTL_PLLSTAT_R_LOCK_NOLOCK    ((uint32_t)0x00000000)
#define SYSCTL_PLLSTAT_R_LOCK_LOCK      ((uint32_t)0x00000001)

#define SYSCTL_PLLSTAT_LOCK_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PLLSTAT_LOCK_NOLOCK      ((uint32_t)0x00000000)
#define SYSCTL_PLLSTAT_LOCK_LOCK        ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PLLSTAT_LOCK_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PLLSTAT_OFFSET)*32)+(SYSCTL_PLLSTAT_R_LOCK_BIT*4))))

/******************************************************************************************
************************************19 SLSRWRCFG *********************************************
******************************************************************************************/
#define SYSCTL_SLSRWRCFG            (((SLSRWRCFG_TypeDef*)(SYSCTL_BASE+SYSCTL_SLSRWRCFG_OFFSET )))
#define SYSCTL_SLSRWRCFG_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SLSRWRCFG_OFFSET)))

/*--------*/
#define SYSCTL_SLSRWRCFG_R_SRAMPM_MASK       ((uint32_t)0x00000003)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_BIT        (0)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_ACTIVE     ((uint32_t)0x00000000)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_STANDBY    ((uint32_t)0x00000001)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_LOWPOWER   ((uint32_t)0x00000003)

#define SYSCTL_SLSRWRCFG_SRAMPM_MASK       ((uint32_t)0x00000003)
#define SYSCTL_SLSRWRCFG_SRAMPM_ACTIVE     ((uint32_t)0x00000000)
#define SYSCTL_SLSRWRCFG_SRAMPM_STANDBY    ((uint32_t)0x00000001)
#define SYSCTL_SLSRWRCFG_SRAMPM_LOWPOWER   ((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define SYSCTL_SLSRWRCFG_R_FLASHPM_MASK       ((uint32_t)0x00000030)
#define SYSCTL_SLSRWRCFG_R_FLASHPM_BIT        (2)
#define SYSCTL_SLSRWRCFG_R_FLASHPM_ACTIVE     ((uint32_t)0x00000000)
#define SYSCTL_SLSRWRCFG_R_FLASHPM_LOWPOWER   ((uint32_t)0x00000020)

#define SYSCTL_SLSRWRCFG_FLASHPM_MASK       ((uint32_t)0x00000003)
#define SYSCTL_SLSRWRCFG_FLASHPM_ACTIVE     ((uint32_t)0x00000000)
#define SYSCTL_SLSRWRCFG_FLASHPM_LOWPOWER   ((uint32_t)0x00000002)
/*--------*/

/******************************************************************************************
************************************20 DSLSRWRCFG *********************************************
******************************************************************************************/
#define SYSCTL_DSLSRWRCFG            (((DSLSRWRCFG_TypeDef*)(SYSCTL_BASE+SYSCTL_DSLSRWRCFG_OFFSET )))
#define SYSCTL_DSLSRWRCFG_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DSLSRWRCFG_OFFSET)))

/*--------*/
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_MASK       ((uint32_t)0x00000003)
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_BIT        (0)
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_ACTIVE     ((uint32_t)0x00000000)
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_STANDBY    ((uint32_t)0x00000001)
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_LOWPOWER   ((uint32_t)0x00000003)

#define SYSCTL_DSLSRWRCFG_SRAMPM_MASK       ((uint32_t)0x00000003)
#define SYSCTL_DSLSRWRCFG_SRAMPM_ACTIVE     ((uint32_t)0x00000000)
#define SYSCTL_DSLSRWRCFG_SRAMPM_STANDBY    ((uint32_t)0x00000001)
#define SYSCTL_DSLSRWRCFG_SRAMPM_LOWPOWER   ((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define SYSCTL_DSLSRWRCFG_R_FLASHPM_MASK       ((uint32_t)0x00000030)
#define SYSCTL_DSLSRWRCFG_R_FLASHPM_BIT        (2)
#define SYSCTL_DSLSRWRCFG_R_FLASHPM_ACTIVE     ((uint32_t)0x00000000)
#define SYSCTL_DSLSRWRCFG_R_FLASHPM_LOWPOWER   ((uint32_t)0x00000020)

#define SYSCTL_DSLSRWRCFG_FLASHPM_MASK       ((uint32_t)0x00000003)
#define SYSCTL_DSLSRWRCFG_FLASHPM_ACTIVE     ((uint32_t)0x00000000)
#define SYSCTL_DSLSRWRCFG_FLASHPM_LOWPOWER   ((uint32_t)0x00000002)
/*--------*/

/******************************************************************************************
************************************21 LDOSPCTL *********************************************
******************************************************************************************/
#define SYSCTL_LDOSPCTL            (((LDOSPCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_LDOSPCTL_OFFSET )))
#define SYSCTL_LDOSPCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_LDOSPCTL_OFFSET)))

/*--------*/
#define SYSCTL_LDOSPCTL_R_VLDO_MASK    ((uint32_t)0x000000FF)
#define SYSCTL_LDOSPCTL_R_VLDO_BIT     (0)

#define SYSCTL_LDOSPCTL_VLDO_MASK      ((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define SYSCTL_LDOSPCTL_R_VADJEN_MASK    ((uint32_t)0x80000000)
#define SYSCTL_LDOSPCTL_R_VADJEN_BIT     (31)

#define SYSCTL_LDOSPCTL_VADJEN_MASK      ((uint32_t)0x000000F01)
/*--------*/

#define SYSCTL_LDOSPCTL_VADJEN_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_LDOSPCTL_OFFSET)*32)+(SYSCTL_LDOSPCTL_R_VADJEN_BIT*4))))


/******************************************************************************************
************************************22 LDOSPCAL *********************************************
******************************************************************************************/
#define SYSCTL_LDOSPCAL            (((LDOSPCAL_TypeDef*)(SYSCTL_BASE+SYSCTL_LDOSPCAL_OFFSET )))
#define SYSCTL_LDOSPCAL_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_LDOSPCAL_OFFSET)))

/*--------*/
#define SYSCTL_LDOSPCAL_R_NOPLL_MASK    ((uint32_t)0x000000FF)
#define SYSCTL_LDOSPCAL_R_NOPLL_BIT     (0)

#define SYSCTL_LDOSPCAL_NOPLL_MASK      ((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define SYSCTL_LDOSPCAL_R_WITHPLL_MASK    ((uint32_t)0x0000FF00)
#define SYSCTL_LDOSPCAL_R_WITHPLL_BIT     (8)

#define SYSCTL_LDOSPCAL_WITHPLL_MASK      ((uint32_t)0x000000FF)
/*--------*/

/******************************************************************************************
************************************23 LDODPCTL *********************************************
******************************************************************************************/
#define SYSCTL_LDODPCTL            (((LDODPCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_LDODPCTL_OFFSET )))
#define SYSCTL_LDODPCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_LDODPCTL_OFFSET)))

/*--------*/
#define SYSCTL_LDODPCTL_R_VLDO_MASK    ((uint32_t)0x000000FF)
#define SYSCTL_LDODPCTL_R_VLDO_BIT     (0)

#define SYSCTL_LDODPCTL_VLDO_MASK      ((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define SYSCTL_LDODPCTL_R_VADJEN_MASK    ((uint32_t)0x80000000)
#define SYSCTL_LDODPCTL_R_VADJEN_BIT     (31)

#define SYSCTL_LDODPCTL_VADJEN_MASK      ((uint32_t)0x000000F01)
/*--------*/

#define SYSCTL_LDODPCTL_VADJEN_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_LDODPCTL_OFFSET)*32)+(SYSCTL_LDODPCTL_R_VADJEN_BIT*4))))


/******************************************************************************************
************************************24 LDODPCAL *********************************************
******************************************************************************************/
#define SYSCTL_LDODPCAL            (((LDODPCAL_TypeDef*)(SYSCTL_BASE+SYSCTL_LDODPCAL_OFFSET )))
#define SYSCTL_LDODPCAL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_LDODPCAL_OFFSET)))

/*--------*/
#define SYSCTL_LDODPCAL_R_NOPLL_MASK    ((uint32_t)0x000000FF)
#define SYSCTL_LDODPCAL_R_NOPLL_BIT     (0)

#define SYSCTL_LDODPCAL_NOPLL_MASK      ((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define SYSCTL_LDODPCAL_R_KHZ30_MASK    ((uint32_t)0x0000FF00)
#define SYSCTL_LDODPCAL_R_KHZ30_BIT     (8)

#define SYSCTL_LDODPCAL_KHZ30_MASK      ((uint32_t)0x000000FF)
/*--------*/

/******************************************************************************************
************************************25 SDPMST *********************************************
******************************************************************************************/
#define SYSCTL_SDPMST            (((SDPMST_TypeDef*)(SYSCTL_BASE+SYSCTL_SDPMSTL_OFFSET )))
#define SYSCTL_SDPMST_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SDPMST_OFFSET)))

/*--------*/
#define SYSCTL_SDPMST_R_SPDERR_MASK     ((uint32_t)0x00000001)
#define SYSCTL_SDPMST_R_SPDERR_BIT      (0)
#define SYSCTL_SDPMST_R_SPDERR_NOERROR  ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_R_SPDERR_ERROR    ((uint32_t)0x00000001)

#define SYSCTL_SDPMST_SPDERR_MASK       ((uint32_t)0x00000001)
#define SYSCTL_SDPMST_SPDERR_NOERROR    ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_SPDERR_ERROR      ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_FPDERR_MASK     ((uint32_t)0x00000002)
#define SYSCTL_SDPMST_R_FPDERR_BIT      (1)
#define SYSCTL_SDPMST_R_FPDERR_NOERROR  ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_R_FPDERR_ERROR    ((uint32_t)0x00000002)

#define SYSCTL_SDPMST_FPDERR_MASK       ((uint32_t)0x00000001)
#define SYSCTL_SDPMST_FPDERR_NOERROR    ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_FPDERR_ERROR      ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_SRDERR_MASK     ((uint32_t)0x00000004)
#define SYSCTL_SDPMST_R_SRDERR_BIT      (2)
#define SYSCTL_SDPMST_R_SRDERR_NOERROR  ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_R_SRDERR_ERROR    ((uint32_t)0x00000004)

#define SYSCTL_SDPMST_SRDERR_MASK       ((uint32_t)0x00000001)
#define SYSCTL_SDPMST_SRDERR_NOERROR    ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_SRDERR_ERROR      ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LDMINERR_MASK     ((uint32_t)0x00000008)
#define SYSCTL_SDPMST_R_LDMINERR_BIT      (3)
#define SYSCTL_SDPMST_R_LDMINERR_NOERROR  ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_R_LDMINERR_ERROR    ((uint32_t)0x00000008)

#define SYSCTL_SDPMST_LDMINERR_MASK       ((uint32_t)0x00000001)
#define SYSCTL_SDPMST_LDMINERR_NOERROR    ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_LDMINERR_ERROR      ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LSMINERR_MASK     ((uint32_t)0x00000010)
#define SYSCTL_SDPMST_R_LSMINERR_BIT      (4)
#define SYSCTL_SDPMST_R_LSMINERR_NOERROR  ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_R_LSMINERR_ERROR    ((uint32_t)0x00000010)

#define SYSCTL_SDPMST_LSMINERR_MASK       ((uint32_t)0x00000001)
#define SYSCTL_SDPMST_LSMINERR_NOERROR    ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_LSMINERR_ERROR      ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LMAXERR_MASK     ((uint32_t)0x00000040)
#define SYSCTL_SDPMST_R_LMAXERR_BIT      (6)
#define SYSCTL_SDPMST_R_LMAXERR_NOERROR  ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_R_LMAXERR_ERROR    ((uint32_t)0x00000040)

#define SYSCTL_SDPMST_LMAXERR_MASK       ((uint32_t)0x00000001)
#define SYSCTL_SDPMST_LMAXERR_NOERROR    ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_LMAXERR_ERROR      ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_SRDW_MASK     ((uint32_t)0x00000080)
#define SYSCTL_SDPMST_R_SRDW_BIT      (7)
#define SYSCTL_SDPMST_R_SRDW_NOERROR  ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_R_SRDW_ERROR    ((uint32_t)0x00000080)

#define SYSCTL_SDPMST_SRDW_MASK       ((uint32_t)0x00000001)
#define SYSCTL_SDPMST_SRDW_NOERROR    ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_SRDW_ERROR      ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_PRACT_MASK     ((uint32_t)0x00010000)
#define SYSCTL_SDPMST_R_PRACT_BIT      (16)
#define SYSCTL_SDPMST_R_PRACT_NOERROR  ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_R_PRACT_ERROR    ((uint32_t)0x00010000)

#define SYSCTL_SDPMST_PRACT_MASK       ((uint32_t)0x00000001)
#define SYSCTL_SDPMST_PRACT_NOERROR    ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_PRACT_ERROR      ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LOWPWR_MASK     ((uint32_t)0x00020000)
#define SYSCTL_SDPMST_R_LOWPWR_BIT      (17)
#define SYSCTL_SDPMST_R_LOWPWR_NOERROR  ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_R_LOWPWR_ERROR    ((uint32_t)0x00020000)

#define SYSCTL_SDPMST_LOWPWR_MASK       ((uint32_t)0x00000001)
#define SYSCTL_SDPMST_LOWPWR_NOERROR    ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_LOWPWR_ERROR      ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_FLASHLP_MASK     ((uint32_t)0x00040000)
#define SYSCTL_SDPMST_R_FLASHLP_BIT      (18)
#define SYSCTL_SDPMST_R_FLASHLP_NOERROR  ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_R_FLASHLP_ERROR    ((uint32_t)0x00040000)

#define SYSCTL_SDPMST_FLASHLP_MASK       ((uint32_t)0x00000001)
#define SYSCTL_SDPMST_FLASHLP_NOERROR    ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_FLASHLP_ERROR      ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LDOUA_MASK     ((uint32_t)0x00080000)
#define SYSCTL_SDPMST_R_LDOUA_BIT      (19)
#define SYSCTL_SDPMST_R_LDOUA_NOERROR  ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_R_LDOUA_ERROR    ((uint32_t)0x00080000)

#define SYSCTL_SDPMST_LDOUA_MASK       ((uint32_t)0x00000001)
#define SYSCTL_SDPMST_LDOUA_NOERROR    ((uint32_t)0x00000000)
#define SYSCTL_SDPMST_LDOUA_ERROR      ((uint32_t)0x00000001)
/*--------*/



#define SYSCTL_SDPMST_SPDERR_BITBANDING   (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(SYSCTL_SDPMST_R_SPDERR_BIT*4))))
#define SYSCTL_SDPMST_FPDERR_BITBANDING   (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(SYSCTL_SDPMST_R_FPDERR_BIT*4))))
#define SYSCTL_SDPMST_SRDERR_BITBANDING   (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(SYSCTL_SDPMST_R_SRDERR_BIT*4))))
#define SYSCTL_SDPMST_LDMINERR_BITBANDING (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(SYSCTL_SDPMST_R_LDMINERR_BIT*4))))
#define SYSCTL_SDPMST_LSMINERR_BITBANDING (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(SYSCTL_SDPMST_R_LSMINERR_BIT*4))))
#define SYSCTL_SDPMST_LMAXERR_BITBANDING  (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(SYSCTL_SDPMST_R_LMAXERR_BIT*4))))
#define SYSCTL_SDPMST_SRDW_BITBANDING     (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(SYSCTL_SDPMST_R_SRDW_BIT*4))))
#define SYSCTL_SDPMST_PRACT_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(SYSCTL_SDPMST_R_PRACT_BIT*4))))
#define SYSCTL_SDPMST_LOWPWR_BITBANDING   (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(SYSCTL_SDPMST_R_LOWPWR_BIT*4))))
#define SYSCTL_SDPMST_FLASHLP_BITBANDING  (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(SYSCTL_SDPMST_R_FLASHLP_BIT*4))))
#define SYSCTL_SDPMST_LDOUA_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(SYSCTL_SDPMST_R_LDOUA_BIT*4))))

/******************************************************************************************
************************************26 PPWD *********************************************
******************************************************************************************/
#define SYSCTL_PPWD            (((PERIPHERAL_WD_TypeDef*)(SYSCTL_BASE+SYSCTL_PPWD_OFFSET )))
#define SYSCTL_PPWD_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPWD_OFFSET)))

/*--------*/
#define SYSCTL_PPWD_R_WDT0_MASK         ((uint32_t)0x00000001)
#define SYSCTL_PPWD_R_WDT0_BIT          (0)
#define SYSCTL_PPWD_R_WDT0_NOPRESENT    ((uint32_t)0x00000000)
#define SYSCTL_PPWD_R_WDT0_PRESENT      ((uint32_t)0x00000001)

#define SYSCTL_PPWD_WDT0_MASK           ((uint32_t)0x00000001)
#define SYSCTL_PPWD_WDT0_NOPRESENT      ((uint32_t)0x00000000)
#define SYSCTL_PPWD_WDT0_PRESENT        ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPWD_R_WDT1_MASK         ((uint32_t)0x00000002)
#define SYSCTL_PPWD_R_WDT1_BIT          (1)
#define SYSCTL_PPWD_R_WDT1_NOPRESENT    ((uint32_t)0x00000000)
#define SYSCTL_PPWD_R_WDT1_PRESENT      ((uint32_t)0x00000002)

#define SYSCTL_PPWD_WDT1_MASK           ((uint32_t)0x00000001)
#define SYSCTL_PPWD_WDT1_NOPRESENT      ((uint32_t)0x00000000)
#define SYSCTL_PPWD_WDT1_PRESENT        ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PPWD_WDT0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPWD_OFFSET)*32)+(SYSCTL_PPWD_R_WDT0_BIT*4))))
#define SYSCTL_PPWD_WDT1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPWD_OFFSET)*32)+(SYSCTL_PPWD_R_WDT1_BIT*4))))


/******************************************************************************************
************************************27 PPTIMER *********************************************
******************************************************************************************/
#define SYSCTL_PPTIMER            (((PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_PPTIMER_OFFSET )))
#define SYSCTL_PPTIMER_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPTIMER_OFFSET)))

/*--------*/
#define SYSCTL_PPTIMER_R_TIMER0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PPTIMER_R_TIMER0_BIT         (0)
#define SYSCTL_PPTIMER_R_TIMER0_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPTIMER_R_TIMER0_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PPTIMER_TIMER0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPTIMER_TIMER0_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPTIMER_TIMER0_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPTIMER_R_TIMER1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PPTIMER_R_TIMER1_BIT         (1)
#define SYSCTL_PPTIMER_R_TIMER1_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPTIMER_R_TIMER1_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PPTIMER_TIMER1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPTIMER_TIMER1_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPTIMER_TIMER1_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPTIMER_R_TIMER2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_PPTIMER_R_TIMER2_BIT         (2)
#define SYSCTL_PPTIMER_R_TIMER2_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPTIMER_R_TIMER2_PRESENT     ((uint32_t)0x00000004)

#define SYSCTL_PPTIMER_TIMER2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPTIMER_TIMER2_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPTIMER_TIMER2_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPTIMER_R_TIMER3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_PPTIMER_R_TIMER3_BIT         (3)
#define SYSCTL_PPTIMER_R_TIMER3_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPTIMER_R_TIMER3_PRESENT     ((uint32_t)0x00000008)

#define SYSCTL_PPTIMER_TIMER3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPTIMER_TIMER3_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPTIMER_TIMER3_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPTIMER_R_TIMER4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_PPTIMER_R_TIMER4_BIT         (4)
#define SYSCTL_PPTIMER_R_TIMER4_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPTIMER_R_TIMER4_PRESENT     ((uint32_t)0x00000010)

#define SYSCTL_PPTIMER_TIMER4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPTIMER_TIMER4_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPTIMER_TIMER4_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPTIMER_R_TIMER5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_PPTIMER_R_TIMER5_BIT         (5)
#define SYSCTL_PPTIMER_R_TIMER5_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPTIMER_R_TIMER5_PRESENT     ((uint32_t)0x00000020)

#define SYSCTL_PPTIMER_TIMER5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPTIMER_TIMER5_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPTIMER_TIMER5_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PPTIMER_TIMER0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32)+(SYSCTL_PPTIMER_R_TIMER0_BIT*4))))
#define SYSCTL_PPTIMER_TIMER1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32)+(SYSCTL_PPTIMER_R_TIMER1_BIT*4))))
#define SYSCTL_PPTIMER_TIMER2_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32)+(SYSCTL_PPTIMER_R_TIMER2_BIT*4))))
#define SYSCTL_PPTIMER_TIMER3_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32)+(SYSCTL_PPTIMER_R_TIMER3_BIT*4))))
#define SYSCTL_PPTIMER_TIMER4_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32)+(SYSCTL_PPTIMER_R_TIMER4_BIT*4))))
#define SYSCTL_PPTIMER_TIMER5_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32)+(SYSCTL_PPTIMER_R_TIMER5_BIT*4))))

/******************************************************************************************
************************************28 PPGPIO *********************************************
******************************************************************************************/
#define SYSCTL_PPGPIO            (((PERIPHERAL_GPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_PPGPIO_OFFSET )))
#define SYSCTL_PPGPIO_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPGPIO_OFFSET)))

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOA_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PPGPIO_R_GPIOA_BIT         (0)
#define SYSCTL_PPGPIO_R_GPIOA_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_R_GPIOA_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PPGPIO_GPIOA_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPGPIO_GPIOA_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_GPIOA_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOB_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PPGPIO_R_GPIOB_BIT         (1)
#define SYSCTL_PPGPIO_R_GPIOB_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_R_GPIOB_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PPGPIO_GPIOB_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPGPIO_GPIOB_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_GPIOB_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOC_MASK        ((uint32_t)0x00000004)
#define SYSCTL_PPGPIO_R_GPIOC_BIT         (2)
#define SYSCTL_PPGPIO_R_GPIOC_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_R_GPIOC_PRESENT     ((uint32_t)0x00000004)

#define SYSCTL_PPGPIO_GPIOC_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPGPIO_GPIOC_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_GPIOC_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOD_MASK        ((uint32_t)0x00000008)
#define SYSCTL_PPGPIO_R_GPIOD_BIT         (3)
#define SYSCTL_PPGPIO_R_GPIOD_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_R_GPIOD_PRESENT     ((uint32_t)0x00000008)

#define SYSCTL_PPGPIO_GPIOD_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPGPIO_GPIOD_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_GPIOD_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOE_MASK        ((uint32_t)0x00000010)
#define SYSCTL_PPGPIO_R_GPIOE_BIT         (4)
#define SYSCTL_PPGPIO_R_GPIOE_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_R_GPIOE_PRESENT     ((uint32_t)0x00000010)

#define SYSCTL_PPGPIO_GPIOE_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPGPIO_GPIOE_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_GPIOE_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOF_MASK        ((uint32_t)0x00000020)
#define SYSCTL_PPGPIO_R_GPIOF_BIT         (5)
#define SYSCTL_PPGPIO_R_GPIOF_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_R_GPIOF_PRESENT     ((uint32_t)0x00000020)

#define SYSCTL_PPGPIO_GPIOF_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPGPIO_GPIOF_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_GPIOF_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040)
#define SYSCTL_PPGPIO_R_GPIOG_BIT         (6)
#define SYSCTL_PPGPIO_R_GPIOG_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_R_GPIOG_PRESENT     ((uint32_t)0x00000040)

#define SYSCTL_PPGPIO_GPIOG_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPGPIO_GPIOG_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_GPIOG_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040)
#define SYSCTL_PPGPIO_R_GPIOG_BIT         (6)
#define SYSCTL_PPGPIO_R_GPIOG_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_R_GPIOG_PRESENT     ((uint32_t)0x00000040)

#define SYSCTL_PPGPIO_GPIOG_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPGPIO_GPIOG_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_GPIOG_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOH_MASK        ((uint32_t)0x00000080)
#define SYSCTL_PPGPIO_R_GPIOH_BIT         (7)
#define SYSCTL_PPGPIO_R_GPIOH_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_R_GPIOH_PRESENT     ((uint32_t)0x00000080)

#define SYSCTL_PPGPIO_GPIOH_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPGPIO_GPIOH_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_GPIOH_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOJ_MASK        ((uint32_t)0x00000100)
#define SYSCTL_PPGPIO_R_GPIOJ_BIT         (8)
#define SYSCTL_PPGPIO_R_GPIOJ_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_R_GPIOJ_PRESENT     ((uint32_t)0x00000100)

#define SYSCTL_PPGPIO_GPIOJ_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPGPIO_GPIOJ_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_GPIOJ_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOK_MASK        ((uint32_t)0x00000200)
#define SYSCTL_PPGPIO_R_GPIOK_BIT         (9)
#define SYSCTL_PPGPIO_R_GPIOK_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_R_GPIOK_PRESENT     ((uint32_t)0x00000200)

#define SYSCTL_PPGPIO_GPIOK_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPGPIO_GPIOK_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_GPIOK_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOL_MASK        ((uint32_t)0x00000400)
#define SYSCTL_PPGPIO_R_GPIOL_BIT         (10)
#define SYSCTL_PPGPIO_R_GPIOL_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_R_GPIOL_PRESENT     ((uint32_t)0x00000400)

#define SYSCTL_PPGPIO_GPIOL_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPGPIO_GPIOL_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_GPIOL_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOM_MASK        ((uint32_t)0x00000800)
#define SYSCTL_PPGPIO_R_GPIOM_BIT         (11)
#define SYSCTL_PPGPIO_R_GPIOM_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_R_GPIOM_PRESENT     ((uint32_t)0x00000800)

#define SYSCTL_PPGPIO_GPIOM_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPGPIO_GPIOM_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_GPIOM_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPION_MASK        ((uint32_t)0x00001000)
#define SYSCTL_PPGPIO_R_GPION_BIT         (12)
#define SYSCTL_PPGPIO_R_GPION_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_R_GPION_PRESENT     ((uint32_t)0x00001000)

#define SYSCTL_PPGPIO_GPION_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPGPIO_GPION_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_GPION_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOP_MASK        ((uint32_t)0x00002000)
#define SYSCTL_PPGPIO_R_GPIOP_BIT         (13)
#define SYSCTL_PPGPIO_R_GPIOP_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_R_GPIOP_PRESENT     ((uint32_t)0x00002000)

#define SYSCTL_PPGPIO_GPIOP_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPGPIO_GPIOP_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_GPIOP_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOQ_MASK        ((uint32_t)0x00004000)
#define SYSCTL_PPGPIO_R_GPIOQ_BIT         (14)
#define SYSCTL_PPGPIO_R_GPIOQ_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_R_GPIOQ_PRESENT     ((uint32_t)0x00004000)

#define SYSCTL_PPGPIO_GPIOQ_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPGPIO_GPIOQ_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPGPIO_GPIOQ_PRESENT       ((uint32_t)0x00000001)
/*--------*/
#define SYSCTL_PPGPIO_GPIOA_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(SYSCTL_PPGPIO_R_GPIOA_BIT*4))))
#define SYSCTL_PPGPIO_GPIOB_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(SYSCTL_PPGPIO_R_GPIOB_BIT*4))))
#define SYSCTL_PPGPIO_GPIOC_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(SYSCTL_PPGPIO_R_GPIOC_BIT*4))))
#define SYSCTL_PPGPIO_GPIOD_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(SYSCTL_PPGPIO_R_GPIOD_BIT*4))))
#define SYSCTL_PPGPIO_GPIOE_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(SYSCTL_PPGPIO_R_GPIOE_BIT*4))))
#define SYSCTL_PPGPIO_GPIOF_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(SYSCTL_PPGPIO_R_GPIOF_BIT*4))))
#define SYSCTL_PPGPIO_GPIOG_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(SYSCTL_PPGPIO_R_GPIOG_BIT*4))))
#define SYSCTL_PPGPIO_GPIOH_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(SYSCTL_PPGPIO_R_GPIOH_BIT*4))))
#define SYSCTL_PPGPIO_GPIOJ_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(SYSCTL_PPGPIO_R_GPIOJ_BIT*4))))
#define SYSCTL_PPGPIO_GPIOK_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(SYSCTL_PPGPIO_R_GPIOK_BIT*4))))
#define SYSCTL_PPGPIO_GPIOL_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(SYSCTL_PPGPIO_R_GPIOL_BIT*4))))
#define SYSCTL_PPGPIO_GPIOM_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(SYSCTL_PPGPIO_R_GPIOM_BIT*4))))
#define SYSCTL_PPGPIO_GPION_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(SYSCTL_PPGPIO_R_GPION_BIT*4))))
#define SYSCTL_PPGPIO_GPIOP_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(SYSCTL_PPGPIO_R_GPIOP_BIT*4))))
#define SYSCTL_PPGPIO_GPIOQ_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(SYSCTL_PPGPIO_R_GPIOQ_BIT*4))))

/******************************************************************************************
************************************29 PPDMA *********************************************
******************************************************************************************/
#define SYSCTL_PPDMA            (((PERIPHERAL_DMA_TypeDef*)(SYSCTL_BASE+SYSCTL_PPDMA_OFFSET )))
#define SYSCTL_PPDMA_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPDMA_OFFSET)))

/*--------*/
#define SYSCTL_PPDMA_R_UDMA_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PPDMA_R_UDMA_BIT         (0)
#define SYSCTL_PPDMA_R_UDMA_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPDMA_R_UDMA_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PPDMA_UDMA_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPDMA_UDMA_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPDMA_UDMA_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PPDMA_UDMA_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPDMA_OFFSET)*32)+(SYSCTL_PPDMA_R_UDMA_BIT*4))))

/******************************************************************************************
************************************30 PPHIB *********************************************
******************************************************************************************/
#define SYSCTL_PPHIB            (((PERIPHERAL_HIB_TypeDef*)(SYSCTL_BASE+SYSCTL_PPHIB_OFFSET )))
#define SYSCTL_PPHIB_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPHIB_OFFSET)))

/*--------*/
#define SYSCTL_PPHIB_R_HIB_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PPHIB_R_HIB_BIT         (0)
#define SYSCTL_PPHIB_R_HIB_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPHIB_R_HIB_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PPHIB_HIB_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPHIB_HIB_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPHIB_HIB_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PPHIB_HIB_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPHIB_OFFSET)*32)+(SYSCTL_PPHIB_R_HIB_BIT*4))))

/******************************************************************************************
************************************31 PPUART *********************************************
******************************************************************************************/
#define SYSCTL_PPUART            (((PERIPHERAL_UART_TypeDef*)(SYSCTL_BASE+SYSCTL_PPUART_OFFSET )))
#define SYSCTL_PPUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPUART_OFFSET)))

/*--------*/
#define SYSCTL_PPUART_R_UART0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PPUART_R_UART0_BIT         (0)
#define SYSCTL_PPUART_R_UART0_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPUART_R_UART0_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PPUART_UART0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPUART_UART0_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPUART_UART0_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PPUART_R_UART1_BIT         (1)
#define SYSCTL_PPUART_R_UART1_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPUART_R_UART1_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PPUART_UART1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPUART_UART1_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPUART_UART1_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_PPUART_R_UART2_BIT         (2)
#define SYSCTL_PPUART_R_UART2_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPUART_R_UART2_PRESENT     ((uint32_t)0x00000004)

#define SYSCTL_PPUART_UART2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPUART_UART2_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPUART_UART2_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_PPUART_R_UART3_BIT         (3)
#define SYSCTL_PPUART_R_UART3_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPUART_R_UART3_PRESENT     ((uint32_t)0x00000008)

#define SYSCTL_PPUART_UART3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPUART_UART3_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPUART_UART3_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_PPUART_R_UART4_BIT         (4)
#define SYSCTL_PPUART_R_UART4_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPUART_R_UART4_PRESENT     ((uint32_t)0x00000010)

#define SYSCTL_PPUART_UART4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPUART_UART4_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPUART_UART4_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_PPUART_R_UART5_BIT         (5)
#define SYSCTL_PPUART_R_UART5_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPUART_R_UART5_PRESENT     ((uint32_t)0x00000020)

#define SYSCTL_PPUART_UART5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPUART_UART5_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPUART_UART5_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART6_MASK        ((uint32_t)0x00000040)
#define SYSCTL_PPUART_R_UART6_BIT         (6)
#define SYSCTL_PPUART_R_UART6_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPUART_R_UART6_PRESENT     ((uint32_t)0x00000040)

#define SYSCTL_PPUART_UART6_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPUART_UART6_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPUART_UART6_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART7_MASK        ((uint32_t)0x00000080)
#define SYSCTL_PPUART_R_UART7_BIT         (7)
#define SYSCTL_PPUART_R_UART7_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPUART_R_UART7_PRESENT     ((uint32_t)0x00000080)

#define SYSCTL_PPUART_UART7_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPUART_UART7_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPUART_UART7_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PPUART_UART0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(SYSCTL_PPUART_R_UART0_BIT*4))))
#define SYSCTL_PPUART_UART1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(SYSCTL_PPUART_R_UART1_BIT*4))))
#define SYSCTL_PPUART_UART2_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(SYSCTL_PPUART_R_UART2_BIT*4))))
#define SYSCTL_PPUART_UART3_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(SYSCTL_PPUART_R_UART3_BIT*4))))
#define SYSCTL_PPUART_UART4_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(SYSCTL_PPUART_R_UART4_BIT*4))))
#define SYSCTL_PPUART_UART5_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(SYSCTL_PPUART_R_UART5_BIT*4))))
#define SYSCTL_PPUART_UART6_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(SYSCTL_PPUART_R_UART6_BIT*4))))
#define SYSCTL_PPUART_UART7_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(SYSCTL_PPUART_R_UART7_BIT*4))))

/******************************************************************************************
************************************32 PPSSI *********************************************
******************************************************************************************/
#define SYSCTL_PPSSI            (((PERIPHERAL_SSI_TypeDef*)(SYSCTL_BASE+SYSCTL_PPSSI_OFFSET )))
#define SYSCTL_PPSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPSSI_OFFSET)))

/*--------*/
#define SYSCTL_PPSSI_R_SSI0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PPSSI_R_SSI0_BIT         (0)
#define SYSCTL_PPSSI_R_SSI0_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPSSI_R_SSI0_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PPSSI_SSI0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPSSI_SSI0_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPSSI_SSI0_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPSSI_R_SSI1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PPSSI_R_SSI1_BIT         (1)
#define SYSCTL_PPSSI_R_SSI1_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPSSI_R_SSI1_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PPSSI_SSI1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPSSI_SSI1_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPSSI_SSI1_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPSSI_R_SSI2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_PPSSI_R_SSI2_BIT         (2)
#define SYSCTL_PPSSI_R_SSI2_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPSSI_R_SSI2_PRESENT     ((uint32_t)0x00000004)

#define SYSCTL_PPSSI_SSI2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPSSI_SSI2_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPSSI_SSI2_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPSSI_R_SSI3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_PPSSI_R_SSI3_BIT         (3)
#define SYSCTL_PPSSI_R_SSI3_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPSSI_R_SSI3_PRESENT     ((uint32_t)0x00000008)

#define SYSCTL_PPSSI_SSI3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPSSI_SSI3_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPSSI_SSI3_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PPSSI_SSI0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPSSI_OFFSET)*32)+(SYSCTL_PPSSI_R_SSI0_BIT*4))))
#define SYSCTL_PPSSI_SSI1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPSSI_OFFSET)*32)+(SYSCTL_PPSSI_R_SSI1_BIT*4))))
#define SYSCTL_PPSSI_SSI2_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPSSI_OFFSET)*32)+(SYSCTL_PPSSI_R_SSI2_BIT*4))))
#define SYSCTL_PPSSI_SSI3_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPSSI_OFFSET)*32)+(SYSCTL_PPSSI_R_SSI3_BIT*4))))

/******************************************************************************************
************************************33 PPI2C *********************************************
******************************************************************************************/
#define SYSCTL_PPI2C            (((PERIPHERAL_I2C_TypeDef*)(SYSCTL_BASE+SYSCTL_PPI2C_OFFSET )))
#define SYSCTL_PPI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPI2C_OFFSET)))

/*--------*/
#define SYSCTL_PPI2C_R_I2C0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PPI2C_R_I2C0_BIT         (0)
#define SYSCTL_PPI2C_R_I2C0_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPI2C_R_I2C0_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PPI2C_I2C0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPI2C_I2C0_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPI2C_I2C0_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPI2C_R_I2C1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PPI2C_R_I2C1_BIT         (1)
#define SYSCTL_PPI2C_R_I2C1_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPI2C_R_I2C1_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PPI2C_I2C1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPI2C_I2C1_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPI2C_I2C1_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPI2C_R_I2C2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_PPI2C_R_I2C2_BIT         (2)
#define SYSCTL_PPI2C_R_I2C2_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPI2C_R_I2C2_PRESENT     ((uint32_t)0x00000004)

#define SYSCTL_PPI2C_I2C2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPI2C_I2C2_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPI2C_I2C2_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPI2C_R_I2C3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_PPI2C_R_I2C3_BIT         (3)
#define SYSCTL_PPI2C_R_I2C3_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPI2C_R_I2C3_PRESENT     ((uint32_t)0x00000008)

#define SYSCTL_PPI2C_I2C3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPI2C_I2C3_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPI2C_I2C3_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPI2C_R_I2C4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_PPI2C_R_I2C4_BIT         (4)
#define SYSCTL_PPI2C_R_I2C4_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPI2C_R_I2C4_PRESENT     ((uint32_t)0x00000010)

#define SYSCTL_PPI2C_I2C4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPI2C_I2C4_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPI2C_I2C4_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPI2C_R_I2C5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_PPI2C_R_I2C5_BIT         (5)
#define SYSCTL_PPI2C_R_I2C5_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPI2C_R_I2C5_PRESENT     ((uint32_t)0x00000020)

#define SYSCTL_PPI2C_I2C5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPI2C_I2C5_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPI2C_I2C5_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PPI2C_I2C0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32)+(SYSCTL_PPI2C_R_I2C0_BIT*4))))
#define SYSCTL_PPI2C_I2C1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32)+(SYSCTL_PPI2C_R_I2C1_BIT*4))))
#define SYSCTL_PPI2C_I2C2_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32)+(SYSCTL_PPI2C_R_I2C2_BIT*4))))
#define SYSCTL_PPI2C_I2C3_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32)+(SYSCTL_PPI2C_R_I2C3_BIT*4))))
#define SYSCTL_PPI2C_I2C4_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32)+(SYSCTL_PPI2C_R_I2C4_BIT*4))))
#define SYSCTL_PPI2C_I2C5_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32)+(SYSCTL_PPI2C_R_I2C5_BIT*4))))

/******************************************************************************************
************************************34 PPUSB *********************************************
******************************************************************************************/
#define SYSCTL_PPUSB            (((PERIPHERAL_USB_TypeDef*)(SYSCTL_BASE+SYSCTL_PPUSB_OFFSET )))
#define SYSCTL_PPUSB_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPUSB_OFFSET)))

/*--------*/
#define SYSCTL_PPUSB_R_USB_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PPUSB_R_USB_BIT         (0)
#define SYSCTL_PPUSB_R_USB_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPUSB_R_USB_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PPUSB_USB_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPUSB_USB_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPUSB_USB_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PPUSB_USB_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPUSB_OFFSET)*32)+(SYSCTL_PPUSB_R_USB_BIT*4))))

/******************************************************************************************
************************************35 PPCAN *********************************************
******************************************************************************************/
#define SYSCTL_PPCAN            (((PERIPHERAL_CAN_TypeDef*)(SYSCTL_BASE+SYSCTL_PPCAN_OFFSET )))
#define SYSCTL_PPCAN_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPCAN_OFFSET)))

/*--------*/
#define SYSCTL_PPCAN_R_CAN0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PPCAN_R_CAN0_BIT         (0)
#define SYSCTL_PPCAN_R_CAN0_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPCAN_R_CAN0_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PPCAN_CAN0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPCAN_CAN0_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPCAN_CAN0_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPCAN_R_CAN1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PPCAN_R_CAN1_BIT         (1)
#define SYSCTL_PPCAN_R_CAN1_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPCAN_R_CAN1_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PPCAN_CAN1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPCAN_CAN1_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPCAN_CAN1_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PPCAN_CAN0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPCAN_OFFSET)*32)+(SYSCTL_PPCAN_R_CAN0_BIT*4))))
#define SYSCTL_PPCAN_CAN1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPCAN_OFFSET)*32)+(SYSCTL_PPCAN_R_CAN1_BIT*4))))

/******************************************************************************************
************************************36 PPADC *********************************************
******************************************************************************************/
#define SYSCTL_PPADC            (((PERIPHERAL_ADC_TypeDef*)(SYSCTL_BASE+SYSCTL_PPADC_OFFSET )))
#define SYSCTL_PPADC_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPADC_OFFSET)))

/*--------*/
#define SYSCTL_PPADC_R_ADC0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PPADC_R_ADC0_BIT         (0)
#define SYSCTL_PPADC_R_ADC0_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPADC_R_ADC0_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PPADC_ADC0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPADC_ADC0_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPADC_ADC0_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPADC_R_ADC1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PPADC_R_ADC1_BIT         (1)
#define SYSCTL_PPADC_R_ADC1_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPADC_R_ADC1_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PPADC_ADC1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPADC_ADC1_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPADC_ADC1_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PPADC_ADC0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPADC_OFFSET)*32)+(SYSCTL_PPADC_R_ADC0_BIT*4))))
#define SYSCTL_PPADC_ADC1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPADC_OFFSET)*32)+(SYSCTL_PPADC_R_ADC1_BIT*4))))

/******************************************************************************************
************************************37 PPACMP *********************************************
******************************************************************************************/
#define SYSCTL_PPACMP            (((PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_PPACMP_OFFSET )))
#define SYSCTL_PPACMP_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPACMP_OFFSET)))

/*--------*/
#define SYSCTL_PPACMP_R_ACMP_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PPACMP_R_ACMP_BIT         (0)
#define SYSCTL_PPACMP_R_ACMP_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPACMP_R_ACMP_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PPACMP_ACMP_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPACMP_ACMP_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPACMP_ACMP_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PPACMP_ACMP_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPACMP_OFFSET)*32)+(SYSCTL_PPACMP_R_ACMP_BIT*4))))

/****************************************************************************************
************************************38 PPPWM *********************************************
******************************************************************************************/
#define SYSCTL_PPPWM            (((PERIPHERAL_PWM_TypeDef*)(SYSCTL_BASE+SYSCTL_PPPWM_OFFSET )))
#define SYSCTL_PPPWM_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPPWM_OFFSET)))

/*--------*/
#define SYSCTL_PPPWM_R_PWM0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PPPWM_R_PWM0_BIT         (0)
#define SYSCTL_PPPWM_R_PWM0_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPPWM_R_PWM0_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PPPWM_PWM0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPPWM_PWM0_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPPWM_PWM0_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPPWM_R_PWM1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PPPWM_R_PWM1_BIT         (1)
#define SYSCTL_PPPWM_R_PWM1_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPPWM_R_PWM1_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PPPWM_PWM1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPPWM_PWM1_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPPWM_PWM1_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PPPWM_PWM0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPPWM_OFFSET)*32)+(SYSCTL_PPPWM_R_PWM0_BIT*4))))
#define SYSCTL_PPPWM_PWM1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPPWM_OFFSET)*32)+(SYSCTL_PPPWM_R_PWM1_BIT*4))))

/******************************************************************************************
************************************39 PPQEI *********************************************
******************************************************************************************/
#define SYSCTL_PPQEI            (((PERIPHERAL_QEI_TypeDef*)(SYSCTL_BASE+SYSCTL_PPQEI_OFFSET )))
#define SYSCTL_PPQEI_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPQEI_OFFSET)))

/*--------*/
#define SYSCTL_PPQEI_R_QEI0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PPQEI_R_QEI0_BIT         (0)
#define SYSCTL_PPQEI_R_QEI0_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPQEI_R_QEI0_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PPQEI_QEI0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPQEI_QEI0_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPQEI_QEI0_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPQEI_R_QEI1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PPQEI_R_QEI1_BIT         (1)
#define SYSCTL_PPQEI_R_QEI1_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPQEI_R_QEI1_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PPQEI_QEI1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPQEI_QEI1_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPQEI_QEI1_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PPQEI_QEI0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPQEI_OFFSET)*32)+(SYSCTL_PPQEI_R_QEI0_BIT*4))))
#define SYSCTL_PPQEI_QEI1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPQEI_OFFSET)*32)+(SYSCTL_PPQEI_R_QEI1_BIT*4))))

/******************************************************************************************
************************************40 PPEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_PPEEPROM            (((PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_PPEEPROM_OFFSET )))
#define SYSCTL_PPEEPROM_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPEEPROM_OFFSET)))

/*--------*/
#define SYSCTL_PPEEPROM_R_EEPROM_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PPEEPROM_R_EEPROM_BIT         (0)
#define SYSCTL_PPEEPROM_R_EEPROM_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPEEPROM_R_EEPROM_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PPEEPROM_EEPROM_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPEEPROM_EEPROM_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPEEPROM_EEPROM_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PPEEPROM_EEPROM_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPEEPROM_OFFSET)*32)+(SYSCTL_PPEEPROM_R_EEPROM_BIT*4))))


/**********************************************************************************
************************************41 PPWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_PPWTIMER            (((PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_PPWTIMER_OFFSET )))
#define SYSCTL_PPWTIMER_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPWTIMER_OFFSET)))

/*--------*/
#define SYSCTL_PPWTIMER_R_WTIMER0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PPWTIMER_R_WTIMER0_BIT         (0)
#define SYSCTL_PPWTIMER_R_WTIMER0_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPWTIMER_R_WTIMER0_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PPWTIMER_WTIMER0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPWTIMER_WTIMER0_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPWTIMER_WTIMER0_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPWTIMER_R_WTIMER1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PPWTIMER_R_WTIMER1_BIT         (1)
#define SYSCTL_PPWTIMER_R_WTIMER1_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPWTIMER_R_WTIMER1_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PPWTIMER_WTIMER1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPWTIMER_WTIMER1_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPWTIMER_WTIMER1_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPWTIMER_R_WTIMER2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_PPWTIMER_R_WTIMER2_BIT         (2)
#define SYSCTL_PPWTIMER_R_WTIMER2_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPWTIMER_R_WTIMER2_PRESENT     ((uint32_t)0x00000004)

#define SYSCTL_PPWTIMER_WTIMER2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPWTIMER_WTIMER2_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPWTIMER_WTIMER2_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPWTIMER_R_WTIMER3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_PPWTIMER_R_WTIMER3_BIT         (3)
#define SYSCTL_PPWTIMER_R_WTIMER3_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPWTIMER_R_WTIMER3_PRESENT     ((uint32_t)0x00000008)

#define SYSCTL_PPWTIMER_WTIMER3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPWTIMER_WTIMER3_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPWTIMER_WTIMER3_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPWTIMER_R_WTIMER4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_PPWTIMER_R_WTIMER4_BIT         (4)
#define SYSCTL_PPWTIMER_R_WTIMER4_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPWTIMER_R_WTIMER4_PRESENT     ((uint32_t)0x00000010)

#define SYSCTL_PPWTIMER_WTIMER4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPWTIMER_WTIMER4_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPWTIMER_WTIMER4_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PPWTIMER_R_WTIMER5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_PPWTIMER_R_WTIMER5_BIT         (5)
#define SYSCTL_PPWTIMER_R_WTIMER5_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PPWTIMER_R_WTIMER5_PRESENT     ((uint32_t)0x00000020)

#define SYSCTL_PPWTIMER_WTIMER5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PPWTIMER_WTIMER5_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PPWTIMER_WTIMER5_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PPWTIMER_WTIMER0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32)+(SYSCTL_PPWTIMER_R_WTIMER0_BIT*4))))
#define SYSCTL_PPWTIMER_WTIMER1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32)+(SYSCTL_PPWTIMER_R_WTIMER1_BIT*4))))
#define SYSCTL_PPWTIMER_WTIMER2_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32)+(SYSCTL_PPWTIMER_R_WTIMER2_BIT*4))))
#define SYSCTL_PPWTIMER_WTIMER3_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32)+(SYSCTL_PPWTIMER_R_WTIMER3_BIT*4))))
#define SYSCTL_PPWTIMER_WTIMER4_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32)+(SYSCTL_PPWTIMER_R_WTIMER4_BIT*4))))
#define SYSCTL_PPWTIMER_WTIMER5_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32)+(SYSCTL_PPWTIMER_R_WTIMER5_BIT*4))))

/******************************************************************************************
************************************42 SRWD *********************************************
******************************************************************************************/
#define SYSCTL_SRWD            (((PERIPHERAL_WD_TypeDef*)(SYSCTL_BASE+SYSCTL_SRWD_OFFSET )))
#define SYSCTL_SRWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRWD_OFFSET)))

/*--------*/
#define SYSCTL_SRWD_R_WDT0_MASK         ((uint32_t)0x00000001)
#define SYSCTL_SRWD_R_WDT0_BIT          (0)
#define SYSCTL_SRWD_R_WDT0_NORESET    ((uint32_t)0x00000000)
#define SYSCTL_SRWD_R_WDT0_RESET      ((uint32_t)0x00000001)

#define SYSCTL_SRWD_WDT0_MASK           ((uint32_t)0x00000001)
#define SYSCTL_SRWD_WDT0_NORESET      ((uint32_t)0x00000000)
#define SYSCTL_SRWD_WDT0_RESET        ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRWD_R_WDT1_MASK         ((uint32_t)0x00000002)
#define SYSCTL_SRWD_R_WDT1_BIT          (1)
#define SYSCTL_SRWD_R_WDT1_NORESET    ((uint32_t)0x00000000)
#define SYSCTL_SRWD_R_WDT1_RESET      ((uint32_t)0x00000002)

#define SYSCTL_SRWD_WDT1_MASK           ((uint32_t)0x00000001)
#define SYSCTL_SRWD_WDT1_NORESET      ((uint32_t)0x00000000)
#define SYSCTL_SRWD_WDT1_RESET        ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SRWD_WDT0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRWD_OFFSET)*32)+(SYSCTL_SRWD_R_WDT0_BIT*4))))
#define SYSCTL_SRWD_WDT1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRWD_OFFSET)*32)+(SYSCTL_SRWD_R_WDT1_BIT*4))))

/******************************************************************************************
************************************43 SRTIMER *********************************************
******************************************************************************************/
#define SYSCTL_SRTIMER            (((PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_SRTIMER_OFFSET )))
#define SYSCTL_SRTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRTIMER_OFFSET)))

/*--------*/
#define SYSCTL_SRTIMER_R_TIMER0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SRTIMER_R_TIMER0_BIT         (0)
#define SYSCTL_SRTIMER_R_TIMER0_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRTIMER_R_TIMER0_RESET     ((uint32_t)0x00000001)

#define SYSCTL_SRTIMER_TIMER0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRTIMER_TIMER0_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRTIMER_TIMER0_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRTIMER_R_TIMER1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SRTIMER_R_TIMER1_BIT         (1)
#define SYSCTL_SRTIMER_R_TIMER1_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRTIMER_R_TIMER1_RESET     ((uint32_t)0x00000002)

#define SYSCTL_SRTIMER_TIMER1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRTIMER_TIMER1_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRTIMER_TIMER1_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRTIMER_R_TIMER2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_SRTIMER_R_TIMER2_BIT         (2)
#define SYSCTL_SRTIMER_R_TIMER2_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRTIMER_R_TIMER2_RESET     ((uint32_t)0x00000004)

#define SYSCTL_SRTIMER_TIMER2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRTIMER_TIMER2_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRTIMER_TIMER2_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRTIMER_R_TIMER3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_SRTIMER_R_TIMER3_BIT         (3)
#define SYSCTL_SRTIMER_R_TIMER3_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRTIMER_R_TIMER3_RESET     ((uint32_t)0x00000008)

#define SYSCTL_SRTIMER_TIMER3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRTIMER_TIMER3_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRTIMER_TIMER3_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRTIMER_R_TIMER4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_SRTIMER_R_TIMER4_BIT         (4)
#define SYSCTL_SRTIMER_R_TIMER4_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRTIMER_R_TIMER4_RESET     ((uint32_t)0x00000010)

#define SYSCTL_SRTIMER_TIMER4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRTIMER_TIMER4_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRTIMER_TIMER4_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRTIMER_R_TIMER5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_SRTIMER_R_TIMER5_BIT         (5)
#define SYSCTL_SRTIMER_R_TIMER5_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRTIMER_R_TIMER5_RESET     ((uint32_t)0x00000020)

#define SYSCTL_SRTIMER_TIMER5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRTIMER_TIMER5_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRTIMER_TIMER5_RESET       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SRTIMER_TIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32)+(SYSCTL_SRTIMER_R_TIMER0_BIT*4))))
#define SYSCTL_SRTIMER_TIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32)+(SYSCTL_SRTIMER_R_TIMER1_BIT*4))))
#define SYSCTL_SRTIMER_TIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32)+(SYSCTL_SRTIMER_R_TIMER2_BIT*4))))
#define SYSCTL_SRTIMER_TIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32)+(SYSCTL_SRTIMER_R_TIMER3_BIT*4))))
#define SYSCTL_SRTIMER_TIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32)+(SYSCTL_SRTIMER_R_TIMER4_BIT*4))))
#define SYSCTL_SRTIMER_TIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32)+(SYSCTL_SRTIMER_R_TIMER5_BIT*4))))

/******************************************************************************************
************************************44 SRGPIO *********************************************
******************************************************************************************/
#define SYSCTL_SRGPIO            (((PERIPHERAL_GPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_SRGPIO_OFFSET )))
#define SYSCTL_SRGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRGPIO_OFFSET)))

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOA_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SRGPIO_R_GPIOA_BIT         (0)
#define SYSCTL_SRGPIO_R_GPIOA_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_R_GPIOA_RESET     ((uint32_t)0x00000001)

#define SYSCTL_SRGPIO_GPIOA_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRGPIO_GPIOA_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_GPIOA_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOB_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SRGPIO_R_GPIOB_BIT         (1)
#define SYSCTL_SRGPIO_R_GPIOB_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_R_GPIOB_RESET     ((uint32_t)0x00000002)

#define SYSCTL_SRGPIO_GPIOB_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRGPIO_GPIOB_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_GPIOB_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOC_MASK        ((uint32_t)0x00000004)
#define SYSCTL_SRGPIO_R_GPIOC_BIT         (2)
#define SYSCTL_SRGPIO_R_GPIOC_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_R_GPIOC_RESET     ((uint32_t)0x00000004)

#define SYSCTL_SRGPIO_GPIOC_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRGPIO_GPIOC_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_GPIOC_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOD_MASK        ((uint32_t)0x00000008)
#define SYSCTL_SRGPIO_R_GPIOD_BIT         (3)
#define SYSCTL_SRGPIO_R_GPIOD_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_R_GPIOD_RESET     ((uint32_t)0x00000008)

#define SYSCTL_SRGPIO_GPIOD_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRGPIO_GPIOD_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_GPIOD_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOE_MASK        ((uint32_t)0x00000010)
#define SYSCTL_SRGPIO_R_GPIOE_BIT         (4)
#define SYSCTL_SRGPIO_R_GPIOE_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_R_GPIOE_RESET     ((uint32_t)0x00000010)

#define SYSCTL_SRGPIO_GPIOE_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRGPIO_GPIOE_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_GPIOE_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOF_MASK        ((uint32_t)0x00000020)
#define SYSCTL_SRGPIO_R_GPIOF_BIT         (5)
#define SYSCTL_SRGPIO_R_GPIOF_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_R_GPIOF_RESET     ((uint32_t)0x00000020)

#define SYSCTL_SRGPIO_GPIOF_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRGPIO_GPIOF_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_GPIOF_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040)
#define SYSCTL_SRGPIO_R_GPIOG_BIT         (6)
#define SYSCTL_SRGPIO_R_GPIOG_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_R_GPIOG_RESET     ((uint32_t)0x00000040)

#define SYSCTL_SRGPIO_GPIOG_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRGPIO_GPIOG_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_GPIOG_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040)
#define SYSCTL_SRGPIO_R_GPIOG_BIT         (6)
#define SYSCTL_SRGPIO_R_GPIOG_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_R_GPIOG_RESET     ((uint32_t)0x00000040)

#define SYSCTL_SRGPIO_GPIOG_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRGPIO_GPIOG_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_GPIOG_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOH_MASK        ((uint32_t)0x00000080)
#define SYSCTL_SRGPIO_R_GPIOH_BIT         (7)
#define SYSCTL_SRGPIO_R_GPIOH_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_R_GPIOH_RESET     ((uint32_t)0x00000080)

#define SYSCTL_SRGPIO_GPIOH_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRGPIO_GPIOH_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_GPIOH_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOJ_MASK        ((uint32_t)0x00000100)
#define SYSCTL_SRGPIO_R_GPIOJ_BIT         (8)
#define SYSCTL_SRGPIO_R_GPIOJ_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_R_GPIOJ_RESET     ((uint32_t)0x00000100)

#define SYSCTL_SRGPIO_GPIOJ_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRGPIO_GPIOJ_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_GPIOJ_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOK_MASK        ((uint32_t)0x00000200)
#define SYSCTL_SRGPIO_R_GPIOK_BIT         (9)
#define SYSCTL_SRGPIO_R_GPIOK_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_R_GPIOK_RESET     ((uint32_t)0x00000200)

#define SYSCTL_SRGPIO_GPIOK_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRGPIO_GPIOK_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_GPIOK_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOL_MASK        ((uint32_t)0x00000400)
#define SYSCTL_SRGPIO_R_GPIOL_BIT         (10)
#define SYSCTL_SRGPIO_R_GPIOL_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_R_GPIOL_RESET     ((uint32_t)0x00000400)

#define SYSCTL_SRGPIO_GPIOL_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRGPIO_GPIOL_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_GPIOL_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOM_MASK        ((uint32_t)0x00000800)
#define SYSCTL_SRGPIO_R_GPIOM_BIT         (11)
#define SYSCTL_SRGPIO_R_GPIOM_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_R_GPIOM_RESET     ((uint32_t)0x00000800)

#define SYSCTL_SRGPIO_GPIOM_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRGPIO_GPIOM_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_GPIOM_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPION_MASK        ((uint32_t)0x00001000)
#define SYSCTL_SRGPIO_R_GPION_BIT         (12)
#define SYSCTL_SRGPIO_R_GPION_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_R_GPION_RESET     ((uint32_t)0x00001000)

#define SYSCTL_SRGPIO_GPION_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRGPIO_GPION_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_GPION_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOP_MASK        ((uint32_t)0x00002000)
#define SYSCTL_SRGPIO_R_GPIOP_BIT         (13)
#define SYSCTL_SRGPIO_R_GPIOP_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_R_GPIOP_RESET     ((uint32_t)0x00002000)

#define SYSCTL_SRGPIO_GPIOP_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRGPIO_GPIOP_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_GPIOP_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOQ_MASK        ((uint32_t)0x00004000)
#define SYSCTL_SRGPIO_R_GPIOQ_BIT         (14)
#define SYSCTL_SRGPIO_R_GPIOQ_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_R_GPIOQ_RESET     ((uint32_t)0x00004000)

#define SYSCTL_SRGPIO_GPIOQ_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRGPIO_GPIOQ_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRGPIO_GPIOQ_RESET       ((uint32_t)0x00000001)
/*--------*/
#define SYSCTL_SRGPIO_GPIOA_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(SYSCTL_SRGPIO_R_GPIOA_BIT*4))))
#define SYSCTL_SRGPIO_GPIOB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(SYSCTL_SRGPIO_R_GPIOB_BIT*4))))
#define SYSCTL_SRGPIO_GPIOC_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(SYSCTL_SRGPIO_R_GPIOC_BIT*4))))
#define SYSCTL_SRGPIO_GPIOD_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(SYSCTL_SRGPIO_R_GPIOD_BIT*4))))
#define SYSCTL_SRGPIO_GPIOE_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(SYSCTL_SRGPIO_R_GPIOE_BIT*4))))
#define SYSCTL_SRGPIO_GPIOF_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(SYSCTL_SRGPIO_R_GPIOF_BIT*4))))
#define SYSCTL_SRGPIO_GPIOG_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(SYSCTL_SRGPIO_R_GPIOG_BIT*4))))
#define SYSCTL_SRGPIO_GPIOH_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(SYSCTL_SRGPIO_R_GPIOH_BIT*4))))
#define SYSCTL_SRGPIO_GPIOJ_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(SYSCTL_SRGPIO_R_GPIOJ_BIT*4))))
#define SYSCTL_SRGPIO_GPIOK_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(SYSCTL_SRGPIO_R_GPIOK_BIT*4))))
#define SYSCTL_SRGPIO_GPIOL_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(SYSCTL_SRGPIO_R_GPIOL_BIT*4))))
#define SYSCTL_SRGPIO_GPIOM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(SYSCTL_SRGPIO_R_GPIOM_BIT*4))))
#define SYSCTL_SRGPIO_GPION_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(SYSCTL_SRGPIO_R_GPION_BIT*4))))
#define SYSCTL_SRGPIO_GPIOP_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(SYSCTL_SRGPIO_R_GPIOP_BIT*4))))
#define SYSCTL_SRGPIO_GPIOQ_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(SYSCTL_SRGPIO_R_GPIOQ_BIT*4))))

/******************************************************************************************
************************************45 SRDMA *********************************************
******************************************************************************************/
#define SYSCTL_SRDMA            (((PERIPHERAL_DMA_TypeDef*)(SYSCTL_BASE+SYSCTL_SRDMA_OFFSET )))
#define SYSCTL_SRDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRDMA_OFFSET)))

/*--------*/
#define SYSCTL_SRDMA_R_UDMA_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SRDMA_R_UDMA_BIT         (0)
#define SYSCTL_SRDMA_R_UDMA_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRDMA_R_UDMA_RESET     ((uint32_t)0x00000001)

#define SYSCTL_SRDMA_UDMA_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRDMA_UDMA_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRDMA_UDMA_RESET       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SRDMA_UDMA_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRDMA_OFFSET)*32)+(SYSCTL_SRDMA_R_UDMA_BIT*4))))

/******************************************************************************************
************************************46 SRHIB *********************************************
******************************************************************************************/
#define SYSCTL_SRHIB            (((PERIPHERAL_HIB_TypeDef*)(SYSCTL_BASE+SYSCTL_SRHIB_OFFSET )))
#define SYSCTL_SRHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRHIB_OFFSET)))

/*--------*/
#define SYSCTL_SRHIB_R_HIB_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SRHIB_R_HIB_BIT         (0)
#define SYSCTL_SRHIB_R_HIB_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRHIB_R_HIB_RESET     ((uint32_t)0x00000001)

#define SYSCTL_SRHIB_HIB_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRHIB_HIB_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRHIB_HIB_RESET       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SRHIB_HIB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRHIB_OFFSET)*32)+(SYSCTL_SRHIB_R_HIB_BIT*4))))

/******************************************************************************************
************************************47 SRUART *********************************************
******************************************************************************************/
#define SYSCTL_SRUART            (((PERIPHERAL_UART_TypeDef*)(SYSCTL_BASE+SYSCTL_SRUART_OFFSET )))
#define SYSCTL_SRUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRUART_OFFSET)))

/*--------*/
#define SYSCTL_SRUART_R_UART0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SRUART_R_UART0_BIT         (0)
#define SYSCTL_SRUART_R_UART0_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRUART_R_UART0_RESET     ((uint32_t)0x00000001)

#define SYSCTL_SRUART_UART0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRUART_UART0_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRUART_UART0_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SRUART_R_UART1_BIT         (1)
#define SYSCTL_SRUART_R_UART1_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRUART_R_UART1_RESET     ((uint32_t)0x00000002)

#define SYSCTL_SRUART_UART1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRUART_UART1_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRUART_UART1_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_SRUART_R_UART2_BIT         (2)
#define SYSCTL_SRUART_R_UART2_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRUART_R_UART2_RESET     ((uint32_t)0x00000004)

#define SYSCTL_SRUART_UART2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRUART_UART2_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRUART_UART2_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_SRUART_R_UART3_BIT         (3)
#define SYSCTL_SRUART_R_UART3_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRUART_R_UART3_RESET     ((uint32_t)0x00000008)

#define SYSCTL_SRUART_UART3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRUART_UART3_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRUART_UART3_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_SRUART_R_UART4_BIT         (4)
#define SYSCTL_SRUART_R_UART4_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRUART_R_UART4_RESET     ((uint32_t)0x00000010)

#define SYSCTL_SRUART_UART4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRUART_UART4_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRUART_UART4_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_SRUART_R_UART5_BIT         (5)
#define SYSCTL_SRUART_R_UART5_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRUART_R_UART5_RESET     ((uint32_t)0x00000020)

#define SYSCTL_SRUART_UART5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRUART_UART5_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRUART_UART5_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART6_MASK        ((uint32_t)0x00000040)
#define SYSCTL_SRUART_R_UART6_BIT         (6)
#define SYSCTL_SRUART_R_UART6_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRUART_R_UART6_RESET     ((uint32_t)0x00000040)

#define SYSCTL_SRUART_UART6_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRUART_UART6_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRUART_UART6_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART7_MASK        ((uint32_t)0x00000080)
#define SYSCTL_SRUART_R_UART7_BIT         (7)
#define SYSCTL_SRUART_R_UART7_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRUART_R_UART7_RESET     ((uint32_t)0x00000080)

#define SYSCTL_SRUART_UART7_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRUART_UART7_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRUART_UART7_RESET       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SRUART_UART0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(SYSCTL_SRUART_R_UART0_BIT*4))))
#define SYSCTL_SRUART_UART1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(SYSCTL_SRUART_R_UART1_BIT*4))))
#define SYSCTL_SRUART_UART2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(SYSCTL_SRUART_R_UART2_BIT*4))))
#define SYSCTL_SRUART_UART3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(SYSCTL_SRUART_R_UART3_BIT*4))))
#define SYSCTL_SRUART_UART4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(SYSCTL_SRUART_R_UART4_BIT*4))))
#define SYSCTL_SRUART_UART5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(SYSCTL_SRUART_R_UART5_BIT*4))))
#define SYSCTL_SRUART_UART6_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(SYSCTL_SRUART_R_UART6_BIT*4))))
#define SYSCTL_SRUART_UART7_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(SYSCTL_SRUART_R_UART7_BIT*4))))

/******************************************************************************************
************************************48 SRSSI *********************************************
******************************************************************************************/
#define SYSCTL_SRSSI            (((PERIPHERAL_SSI_TypeDef*)(SYSCTL_BASE+SYSCTL_SRSSI_OFFSET )))
#define SYSCTL_SRSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRSSI_OFFSET)))

/*--------*/
#define SYSCTL_SRSSI_R_SSI0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SRSSI_R_SSI0_BIT         (0)
#define SYSCTL_SRSSI_R_SSI0_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRSSI_R_SSI0_RESET     ((uint32_t)0x00000001)

#define SYSCTL_SRSSI_SSI0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRSSI_SSI0_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRSSI_SSI0_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRSSI_R_SSI1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SRSSI_R_SSI1_BIT         (1)
#define SYSCTL_SRSSI_R_SSI1_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRSSI_R_SSI1_RESET     ((uint32_t)0x00000002)

#define SYSCTL_SRSSI_SSI1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRSSI_SSI1_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRSSI_SSI1_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRSSI_R_SSI2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_SRSSI_R_SSI2_BIT         (2)
#define SYSCTL_SRSSI_R_SSI2_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRSSI_R_SSI2_RESET     ((uint32_t)0x00000004)

#define SYSCTL_SRSSI_SSI2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRSSI_SSI2_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRSSI_SSI2_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRSSI_R_SSI3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_SRSSI_R_SSI3_BIT         (3)
#define SYSCTL_SRSSI_R_SSI3_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRSSI_R_SSI3_RESET     ((uint32_t)0x00000008)

#define SYSCTL_SRSSI_SSI3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRSSI_SSI3_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRSSI_SSI3_RESET       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SRSSI_SSI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRSSI_OFFSET)*32)+(SYSCTL_SRSSI_R_SSI0_BIT*4))))
#define SYSCTL_SRSSI_SSI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRSSI_OFFSET)*32)+(SYSCTL_SRSSI_R_SSI1_BIT*4))))
#define SYSCTL_SRSSI_SSI2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRSSI_OFFSET)*32)+(SYSCTL_SRSSI_R_SSI2_BIT*4))))
#define SYSCTL_SRSSI_SSI3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRSSI_OFFSET)*32)+(SYSCTL_SRSSI_R_SSI3_BIT*4))))

/******************************************************************************************
************************************49 SRI2C *********************************************
******************************************************************************************/
#define SYSCTL_SRI2C            (((PERIPHERAL_I2C_TypeDef*)(SYSCTL_BASE+SYSCTL_SRI2C_OFFSET )))
#define SYSCTL_SRI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRI2C_OFFSET)))

/*--------*/
#define SYSCTL_SRI2C_R_I2C0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SRI2C_R_I2C0_BIT         (0)
#define SYSCTL_SRI2C_R_I2C0_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRI2C_R_I2C0_RESET     ((uint32_t)0x00000001)

#define SYSCTL_SRI2C_I2C0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRI2C_I2C0_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRI2C_I2C0_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRI2C_R_I2C1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SRI2C_R_I2C1_BIT         (1)
#define SYSCTL_SRI2C_R_I2C1_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRI2C_R_I2C1_RESET     ((uint32_t)0x00000002)

#define SYSCTL_SRI2C_I2C1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRI2C_I2C1_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRI2C_I2C1_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRI2C_R_I2C2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_SRI2C_R_I2C2_BIT         (2)
#define SYSCTL_SRI2C_R_I2C2_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRI2C_R_I2C2_RESET     ((uint32_t)0x00000004)

#define SYSCTL_SRI2C_I2C2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRI2C_I2C2_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRI2C_I2C2_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRI2C_R_I2C3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_SRI2C_R_I2C3_BIT         (3)
#define SYSCTL_SRI2C_R_I2C3_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRI2C_R_I2C3_RESET     ((uint32_t)0x00000008)

#define SYSCTL_SRI2C_I2C3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRI2C_I2C3_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRI2C_I2C3_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRI2C_R_I2C4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_SRI2C_R_I2C4_BIT         (4)
#define SYSCTL_SRI2C_R_I2C4_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRI2C_R_I2C4_RESET     ((uint32_t)0x00000010)

#define SYSCTL_SRI2C_I2C4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRI2C_I2C4_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRI2C_I2C4_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRI2C_R_I2C5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_SRI2C_R_I2C5_BIT         (5)
#define SYSCTL_SRI2C_R_I2C5_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRI2C_R_I2C5_RESET     ((uint32_t)0x00000020)

#define SYSCTL_SRI2C_I2C5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRI2C_I2C5_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRI2C_I2C5_RESET       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SRI2C_I2C0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32)+(SYSCTL_SRI2C_R_I2C0_BIT*4))))
#define SYSCTL_SRI2C_I2C1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32)+(SYSCTL_SRI2C_R_I2C1_BIT*4))))
#define SYSCTL_SRI2C_I2C2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32)+(SYSCTL_SRI2C_R_I2C2_BIT*4))))
#define SYSCTL_SRI2C_I2C3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32)+(SYSCTL_SRI2C_R_I2C3_BIT*4))))
#define SYSCTL_SRI2C_I2C4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32)+(SYSCTL_SRI2C_R_I2C4_BIT*4))))
#define SYSCTL_SRI2C_I2C5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32)+(SYSCTL_SRI2C_R_I2C5_BIT*4))))

/******************************************************************************************
************************************50 SRUSB *********************************************
******************************************************************************************/
#define SYSCTL_SRUSB            (((PERIPHERAL_USB_TypeDef*)(SYSCTL_BASE+SYSCTL_SRUSB_OFFSET )))
#define SYSCTL_SRUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRUSB_OFFSET)))

/*--------*/
#define SYSCTL_SRUSB_R_USB_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SRUSB_R_USB_BIT         (0)
#define SYSCTL_SRUSB_R_USB_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRUSB_R_USB_RESET     ((uint32_t)0x00000001)

#define SYSCTL_SRUSB_USB_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRUSB_USB_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRUSB_USB_RESET       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SRUSB_USB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRUSB_OFFSET)*32)+(SYSCTL_SRUSB_R_USB_BIT*4))))

/******************************************************************************************
************************************51 SRCAN *********************************************
******************************************************************************************/
#define SYSCTL_SRCAN            (((PERIPHERAL_CAN_TypeDef*)(SYSCTL_BASE+SYSCTL_SRCAN_OFFSET )))
#define SYSCTL_SRCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRCAN_OFFSET)))

/*--------*/
#define SYSCTL_SRCAN_R_CAN0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SRCAN_R_CAN0_BIT         (0)
#define SYSCTL_SRCAN_R_CAN0_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRCAN_R_CAN0_RESET     ((uint32_t)0x00000001)

#define SYSCTL_SRCAN_CAN0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRCAN_CAN0_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRCAN_CAN0_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRCAN_R_CAN1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SRCAN_R_CAN1_BIT         (1)
#define SYSCTL_SRCAN_R_CAN1_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRCAN_R_CAN1_RESET     ((uint32_t)0x00000002)

#define SYSCTL_SRCAN_CAN1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRCAN_CAN1_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRCAN_CAN1_RESET       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SRCAN_CAN0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRCAN_OFFSET)*32)+(SYSCTL_SRCAN_R_CAN0_BIT*4))))
#define SYSCTL_SRCAN_CAN1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRCAN_OFFSET)*32)+(SYSCTL_SRCAN_R_CAN1_BIT*4))))

/******************************************************************************************
************************************52 SRADC *********************************************
******************************************************************************************/
#define SYSCTL_SRADC            (((PERIPHERAL_ADC_TypeDef*)(SYSCTL_BASE+SYSCTL_SRADC_OFFSET )))
#define SYSCTL_SRADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRADC_OFFSET)))

/*--------*/
#define SYSCTL_SRADC_R_ADC0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SRADC_R_ADC0_BIT         (0)
#define SYSCTL_SRADC_R_ADC0_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRADC_R_ADC0_RESET     ((uint32_t)0x00000001)

#define SYSCTL_SRADC_ADC0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRADC_ADC0_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRADC_ADC0_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRADC_R_ADC1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SRADC_R_ADC1_BIT         (1)
#define SYSCTL_SRADC_R_ADC1_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRADC_R_ADC1_RESET     ((uint32_t)0x00000002)

#define SYSCTL_SRADC_ADC1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRADC_ADC1_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRADC_ADC1_RESET       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SRADC_ADC0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRADC_OFFSET)*32)+(SYSCTL_SRADC_R_ADC0_BIT*4))))
#define SYSCTL_SRADC_ADC1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRADC_OFFSET)*32)+(SYSCTL_SRADC_R_ADC1_BIT*4))))

/******************************************************************************************
************************************53 SRACMP *********************************************
******************************************************************************************/
#define SYSCTL_SRACMP            (((PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_SRACMP_OFFSET )))
#define SYSCTL_SRACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRACMP_OFFSET)))

/*--------*/
#define SYSCTL_SRACMP_R_ACMP_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SRACMP_R_ACMP_BIT         (0)
#define SYSCTL_SRACMP_R_ACMP_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRACMP_R_ACMP_RESET     ((uint32_t)0x00000001)

#define SYSCTL_SRACMP_ACMP_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRACMP_ACMP_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRACMP_ACMP_RESET       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SRACMP_ACMP_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRACMP_OFFSET)*32)+(SYSCTL_SRACMP_R_ACMP_BIT*4))))

/****************************************************************************************
************************************54 SRPWM *********************************************
******************************************************************************************/
#define SYSCTL_SRPWM            (((PERIPHERAL_PWM_TypeDef*)(SYSCTL_BASE+SYSCTL_SRPWM_OFFSET )))
#define SYSCTL_SRPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRPWM_OFFSET)))

/*--------*/
#define SYSCTL_SRPWM_R_PWM0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SRPWM_R_PWM0_BIT         (0)
#define SYSCTL_SRPWM_R_PWM0_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRPWM_R_PWM0_RESET     ((uint32_t)0x00000001)

#define SYSCTL_SRPWM_PWM0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRPWM_PWM0_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRPWM_PWM0_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRPWM_R_PWM1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SRPWM_R_PWM1_BIT         (1)
#define SYSCTL_SRPWM_R_PWM1_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRPWM_R_PWM1_RESET     ((uint32_t)0x00000002)

#define SYSCTL_SRPWM_PWM1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRPWM_PWM1_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRPWM_PWM1_RESET       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SRPWM_PWM0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRPWM_OFFSET)*32)+(SYSCTL_SRPWM_R_PWM0_BIT*4))))
#define SYSCTL_SRPWM_PWM1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRPWM_OFFSET)*32)+(SYSCTL_SRPWM_R_PWM1_BIT*4))))

/******************************************************************************************
************************************55 SRQEI *********************************************
******************************************************************************************/
#define SYSCTL_SRQEI            (((PERIPHERAL_QEI_TypeDef*)(SYSCTL_BASE+SYSCTL_SRQEI_OFFSET )))
#define SYSCTL_SRQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRQEI_OFFSET)))

/*--------*/
#define SYSCTL_SRQEI_R_QEI0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SRQEI_R_QEI0_BIT         (0)
#define SYSCTL_SRQEI_R_QEI0_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRQEI_R_QEI0_RESET     ((uint32_t)0x00000001)

#define SYSCTL_SRQEI_QEI0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRQEI_QEI0_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRQEI_QEI0_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRQEI_R_QEI1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SRQEI_R_QEI1_BIT         (1)
#define SYSCTL_SRQEI_R_QEI1_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRQEI_R_QEI1_RESET     ((uint32_t)0x00000002)

#define SYSCTL_SRQEI_QEI1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRQEI_QEI1_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRQEI_QEI1_RESET       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SRQEI_QEI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRQEI_OFFSET)*32)+(SYSCTL_SRQEI_R_QEI0_BIT*4))))
#define SYSCTL_SRQEI_QEI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRQEI_OFFSET)*32)+(SYSCTL_SRQEI_R_QEI1_BIT*4))))

/******************************************************************************************
************************************56 SREEPROM *********************************************
******************************************************************************************/
#define SYSCTL_SREEPROM            (((PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_SREEPROM_OFFSET )))
#define SYSCTL_SREEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SREEPROM_OFFSET)))

/*--------*/
#define SYSCTL_SREEPROM_R_EEPROM_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SREEPROM_R_EEPROM_BIT         (0)
#define SYSCTL_SREEPROM_R_EEPROM_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SREEPROM_R_EEPROM_RESET     ((uint32_t)0x00000001)

#define SYSCTL_SREEPROM_EEPROM_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SREEPROM_EEPROM_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SREEPROM_EEPROM_RESET       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SREEPROM_EEPROM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SREEPROM_OFFSET)*32)+(SYSCTL_SREEPROM_R_EEPROM_BIT*4))))


/**********************************************************************************
************************************57 SRWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_SRWTIMER            (((PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_SRWTIMER_OFFSET )))
#define SYSCTL_SRWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRWTIMER_OFFSET)))

/*--------*/
#define SYSCTL_SRWTIMER_R_WTIMER0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SRWTIMER_R_WTIMER0_BIT         (0)
#define SYSCTL_SRWTIMER_R_WTIMER0_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRWTIMER_R_WTIMER0_RESET     ((uint32_t)0x00000001)

#define SYSCTL_SRWTIMER_WTIMER0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRWTIMER_WTIMER0_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRWTIMER_WTIMER0_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRWTIMER_R_WTIMER1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SRWTIMER_R_WTIMER1_BIT         (1)
#define SYSCTL_SRWTIMER_R_WTIMER1_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRWTIMER_R_WTIMER1_RESET     ((uint32_t)0x00000002)

#define SYSCTL_SRWTIMER_WTIMER1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRWTIMER_WTIMER1_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRWTIMER_WTIMER1_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRWTIMER_R_WTIMER2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_SRWTIMER_R_WTIMER2_BIT         (2)
#define SYSCTL_SRWTIMER_R_WTIMER2_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRWTIMER_R_WTIMER2_RESET     ((uint32_t)0x00000004)

#define SYSCTL_SRWTIMER_WTIMER2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRWTIMER_WTIMER2_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRWTIMER_WTIMER2_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRWTIMER_R_WTIMER3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_SRWTIMER_R_WTIMER3_BIT         (3)
#define SYSCTL_SRWTIMER_R_WTIMER3_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRWTIMER_R_WTIMER3_RESET     ((uint32_t)0x00000008)

#define SYSCTL_SRWTIMER_WTIMER3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRWTIMER_WTIMER3_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRWTIMER_WTIMER3_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRWTIMER_R_WTIMER4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_SRWTIMER_R_WTIMER4_BIT         (4)
#define SYSCTL_SRWTIMER_R_WTIMER4_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRWTIMER_R_WTIMER4_RESET     ((uint32_t)0x00000010)

#define SYSCTL_SRWTIMER_WTIMER4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRWTIMER_WTIMER4_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRWTIMER_WTIMER4_RESET       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SRWTIMER_R_WTIMER5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_SRWTIMER_R_WTIMER5_BIT         (5)
#define SYSCTL_SRWTIMER_R_WTIMER5_NORESET   ((uint32_t)0x00000000)
#define SYSCTL_SRWTIMER_R_WTIMER5_RESET     ((uint32_t)0x00000020)

#define SYSCTL_SRWTIMER_WTIMER5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SRWTIMER_WTIMER5_NORESET     ((uint32_t)0x00000000)
#define SYSCTL_SRWTIMER_WTIMER5_RESET       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SRWTIMER_WTIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32)+(SYSCTL_SRWTIMER_R_WTIMER0_BIT*4))))
#define SYSCTL_SRWTIMER_WTIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32)+(SYSCTL_SRWTIMER_R_WTIMER1_BIT*4))))
#define SYSCTL_SRWTIMER_WTIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32)+(SYSCTL_SRWTIMER_R_WTIMER2_BIT*4))))
#define SYSCTL_SRWTIMER_WTIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32)+(SYSCTL_SRWTIMER_R_WTIMER3_BIT*4))))
#define SYSCTL_SRWTIMER_WTIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32)+(SYSCTL_SRWTIMER_R_WTIMER4_BIT*4))))
#define SYSCTL_SRWTIMER_WTIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32)+(SYSCTL_SRWTIMER_R_WTIMER5_BIT*4))))

/******************************************************************************************
************************************58 RCGCWD *********************************************
******************************************************************************************/
#define SYSCTL_RCGCWD            (((PERIPHERAL_WD_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCWD_OFFSET )))
#define SYSCTL_RCGCWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCWD_OFFSET)))

/*--------*/
#define SYSCTL_RCGCWD_R_WDT0_MASK         ((uint32_t)0x00000001)
#define SYSCTL_RCGCWD_R_WDT0_BIT          (0)
#define SYSCTL_RCGCWD_R_WDT0_DIS    ((uint32_t)0x00000000)
#define SYSCTL_RCGCWD_R_WDT0_EN      ((uint32_t)0x00000001)

#define SYSCTL_RCGCWD_WDT0_MASK           ((uint32_t)0x00000001)
#define SYSCTL_RCGCWD_WDT0_DIS      ((uint32_t)0x00000000)
#define SYSCTL_RCGCWD_WDT0_EN        ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCWD_R_WDT1_MASK         ((uint32_t)0x00000002)
#define SYSCTL_RCGCWD_R_WDT1_BIT          (1)
#define SYSCTL_RCGCWD_R_WDT1_DIS    ((uint32_t)0x00000000)
#define SYSCTL_RCGCWD_R_WDT1_EN      ((uint32_t)0x00000002)

#define SYSCTL_RCGCWD_WDT1_MASK           ((uint32_t)0x00000001)
#define SYSCTL_RCGCWD_WDT1_DIS      ((uint32_t)0x00000000)
#define SYSCTL_RCGCWD_WDT1_EN        ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_RCGCWD_WDT0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCWD_OFFSET)*32)+(SYSCTL_RCGCWD_R_WDT0_BIT*4))))
#define SYSCTL_RCGCWD_WDT1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCWD_OFFSET)*32)+(SYSCTL_RCGCWD_R_WDT1_BIT*4))))

/******************************************************************************************
************************************59 RCGCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_RCGCTIMER            (((PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCTIMER_OFFSET )))
#define SYSCTL_RCGCTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCTIMER_OFFSET)))

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RCGCTIMER_R_TIMER0_BIT         (0)
#define SYSCTL_RCGCTIMER_R_TIMER0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCTIMER_R_TIMER0_EN     ((uint32_t)0x00000001)

#define SYSCTL_RCGCTIMER_TIMER0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCTIMER_TIMER0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCTIMER_TIMER0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_RCGCTIMER_R_TIMER1_BIT         (1)
#define SYSCTL_RCGCTIMER_R_TIMER1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCTIMER_R_TIMER1_EN     ((uint32_t)0x00000002)

#define SYSCTL_RCGCTIMER_TIMER1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCTIMER_TIMER1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCTIMER_TIMER1_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_RCGCTIMER_R_TIMER2_BIT         (2)
#define SYSCTL_RCGCTIMER_R_TIMER2_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCTIMER_R_TIMER2_EN     ((uint32_t)0x00000004)

#define SYSCTL_RCGCTIMER_TIMER2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCTIMER_TIMER2_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCTIMER_TIMER2_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_RCGCTIMER_R_TIMER3_BIT         (3)
#define SYSCTL_RCGCTIMER_R_TIMER3_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCTIMER_R_TIMER3_EN     ((uint32_t)0x00000008)

#define SYSCTL_RCGCTIMER_TIMER3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCTIMER_TIMER3_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCTIMER_TIMER3_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_RCGCTIMER_R_TIMER4_BIT         (4)
#define SYSCTL_RCGCTIMER_R_TIMER4_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCTIMER_R_TIMER4_EN     ((uint32_t)0x00000010)

#define SYSCTL_RCGCTIMER_TIMER4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCTIMER_TIMER4_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCTIMER_TIMER4_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_RCGCTIMER_R_TIMER5_BIT         (5)
#define SYSCTL_RCGCTIMER_R_TIMER5_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCTIMER_R_TIMER5_EN     ((uint32_t)0x00000020)

#define SYSCTL_RCGCTIMER_TIMER5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCTIMER_TIMER5_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCTIMER_TIMER5_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_RCGCTIMER_TIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32)+(SYSCTL_RCGCTIMER_R_TIMER0_BIT*4))))
#define SYSCTL_RCGCTIMER_TIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32)+(SYSCTL_RCGCTIMER_R_TIMER1_BIT*4))))
#define SYSCTL_RCGCTIMER_TIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32)+(SYSCTL_RCGCTIMER_R_TIMER2_BIT*4))))
#define SYSCTL_RCGCTIMER_TIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32)+(SYSCTL_RCGCTIMER_R_TIMER3_BIT*4))))
#define SYSCTL_RCGCTIMER_TIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32)+(SYSCTL_RCGCTIMER_R_TIMER4_BIT*4))))
#define SYSCTL_RCGCTIMER_TIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32)+(SYSCTL_RCGCTIMER_R_TIMER5_BIT*4))))

/******************************************************************************************
************************************60 RCGCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_RCGCGPIO            (((PERIPHERAL_GPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCGPIO_OFFSET )))
#define SYSCTL_RCGCGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCGPIO_OFFSET)))

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOA_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RCGCGPIO_R_GPIOA_BIT         (0)
#define SYSCTL_RCGCGPIO_R_GPIOA_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_R_GPIOA_EN     ((uint32_t)0x00000001)

#define SYSCTL_RCGCGPIO_GPIOA_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCGPIO_GPIOA_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_GPIOA_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOB_MASK        ((uint32_t)0x00000002)
#define SYSCTL_RCGCGPIO_R_GPIOB_BIT         (1)
#define SYSCTL_RCGCGPIO_R_GPIOB_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_R_GPIOB_EN     ((uint32_t)0x00000002)

#define SYSCTL_RCGCGPIO_GPIOB_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCGPIO_GPIOB_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_GPIOB_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOC_MASK        ((uint32_t)0x00000004)
#define SYSCTL_RCGCGPIO_R_GPIOC_BIT         (2)
#define SYSCTL_RCGCGPIO_R_GPIOC_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_R_GPIOC_EN     ((uint32_t)0x00000004)

#define SYSCTL_RCGCGPIO_GPIOC_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCGPIO_GPIOC_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_GPIOC_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOD_MASK        ((uint32_t)0x00000008)
#define SYSCTL_RCGCGPIO_R_GPIOD_BIT         (3)
#define SYSCTL_RCGCGPIO_R_GPIOD_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_R_GPIOD_EN     ((uint32_t)0x00000008)

#define SYSCTL_RCGCGPIO_GPIOD_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCGPIO_GPIOD_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_GPIOD_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOE_MASK        ((uint32_t)0x00000010)
#define SYSCTL_RCGCGPIO_R_GPIOE_BIT         (4)
#define SYSCTL_RCGCGPIO_R_GPIOE_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_R_GPIOE_EN     ((uint32_t)0x00000010)

#define SYSCTL_RCGCGPIO_GPIOE_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCGPIO_GPIOE_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_GPIOE_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOF_MASK        ((uint32_t)0x00000020)
#define SYSCTL_RCGCGPIO_R_GPIOF_BIT         (5)
#define SYSCTL_RCGCGPIO_R_GPIOF_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_R_GPIOF_EN     ((uint32_t)0x00000020)

#define SYSCTL_RCGCGPIO_GPIOF_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCGPIO_GPIOF_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_GPIOF_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040)
#define SYSCTL_RCGCGPIO_R_GPIOG_BIT         (6)
#define SYSCTL_RCGCGPIO_R_GPIOG_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_R_GPIOG_EN     ((uint32_t)0x00000040)

#define SYSCTL_RCGCGPIO_GPIOG_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCGPIO_GPIOG_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_GPIOG_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040)
#define SYSCTL_RCGCGPIO_R_GPIOG_BIT         (6)
#define SYSCTL_RCGCGPIO_R_GPIOG_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_R_GPIOG_EN     ((uint32_t)0x00000040)

#define SYSCTL_RCGCGPIO_GPIOG_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCGPIO_GPIOG_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_GPIOG_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOH_MASK        ((uint32_t)0x00000080)
#define SYSCTL_RCGCGPIO_R_GPIOH_BIT         (7)
#define SYSCTL_RCGCGPIO_R_GPIOH_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_R_GPIOH_EN     ((uint32_t)0x00000080)

#define SYSCTL_RCGCGPIO_GPIOH_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCGPIO_GPIOH_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_GPIOH_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOJ_MASK        ((uint32_t)0x00000100)
#define SYSCTL_RCGCGPIO_R_GPIOJ_BIT         (8)
#define SYSCTL_RCGCGPIO_R_GPIOJ_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_R_GPIOJ_EN     ((uint32_t)0x00000100)

#define SYSCTL_RCGCGPIO_GPIOJ_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCGPIO_GPIOJ_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_GPIOJ_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOK_MASK        ((uint32_t)0x00000200)
#define SYSCTL_RCGCGPIO_R_GPIOK_BIT         (9)
#define SYSCTL_RCGCGPIO_R_GPIOK_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_R_GPIOK_EN     ((uint32_t)0x00000200)

#define SYSCTL_RCGCGPIO_GPIOK_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCGPIO_GPIOK_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_GPIOK_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOL_MASK        ((uint32_t)0x00000400)
#define SYSCTL_RCGCGPIO_R_GPIOL_BIT         (10)
#define SYSCTL_RCGCGPIO_R_GPIOL_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_R_GPIOL_EN     ((uint32_t)0x00000400)

#define SYSCTL_RCGCGPIO_GPIOL_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCGPIO_GPIOL_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_GPIOL_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOM_MASK        ((uint32_t)0x00000800)
#define SYSCTL_RCGCGPIO_R_GPIOM_BIT         (11)
#define SYSCTL_RCGCGPIO_R_GPIOM_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_R_GPIOM_EN     ((uint32_t)0x00000800)

#define SYSCTL_RCGCGPIO_GPIOM_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCGPIO_GPIOM_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_GPIOM_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPION_MASK        ((uint32_t)0x00001000)
#define SYSCTL_RCGCGPIO_R_GPION_BIT         (12)
#define SYSCTL_RCGCGPIO_R_GPION_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_R_GPION_EN     ((uint32_t)0x00001000)

#define SYSCTL_RCGCGPIO_GPION_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCGPIO_GPION_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_GPION_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOP_MASK        ((uint32_t)0x00002000)
#define SYSCTL_RCGCGPIO_R_GPIOP_BIT         (13)
#define SYSCTL_RCGCGPIO_R_GPIOP_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_R_GPIOP_EN     ((uint32_t)0x00002000)

#define SYSCTL_RCGCGPIO_GPIOP_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCGPIO_GPIOP_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_GPIOP_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOQ_MASK        ((uint32_t)0x00004000)
#define SYSCTL_RCGCGPIO_R_GPIOQ_BIT         (14)
#define SYSCTL_RCGCGPIO_R_GPIOQ_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_R_GPIOQ_EN     ((uint32_t)0x00004000)

#define SYSCTL_RCGCGPIO_GPIOQ_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCGPIO_GPIOQ_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCGPIO_GPIOQ_EN       ((uint32_t)0x00000001)
/*--------*/
#define SYSCTL_RCGCGPIO_GPIOA_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(SYSCTL_RCGCGPIO_R_GPIOA_BIT*4))))
#define SYSCTL_RCGCGPIO_GPIOB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(SYSCTL_RCGCGPIO_R_GPIOB_BIT*4))))
#define SYSCTL_RCGCGPIO_GPIOC_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(SYSCTL_RCGCGPIO_R_GPIOC_BIT*4))))
#define SYSCTL_RCGCGPIO_GPIOD_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(SYSCTL_RCGCGPIO_R_GPIOD_BIT*4))))
#define SYSCTL_RCGCGPIO_GPIOE_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(SYSCTL_RCGCGPIO_R_GPIOE_BIT*4))))
#define SYSCTL_RCGCGPIO_GPIOF_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(SYSCTL_RCGCGPIO_R_GPIOF_BIT*4))))
#define SYSCTL_RCGCGPIO_GPIOG_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(SYSCTL_RCGCGPIO_R_GPIOG_BIT*4))))
#define SYSCTL_RCGCGPIO_GPIOH_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(SYSCTL_RCGCGPIO_R_GPIOH_BIT*4))))
#define SYSCTL_RCGCGPIO_GPIOJ_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(SYSCTL_RCGCGPIO_R_GPIOJ_BIT*4))))
#define SYSCTL_RCGCGPIO_GPIOK_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(SYSCTL_RCGCGPIO_R_GPIOK_BIT*4))))
#define SYSCTL_RCGCGPIO_GPIOL_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(SYSCTL_RCGCGPIO_R_GPIOL_BIT*4))))
#define SYSCTL_RCGCGPIO_GPIOM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(SYSCTL_RCGCGPIO_R_GPIOM_BIT*4))))
#define SYSCTL_RCGCGPIO_GPION_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(SYSCTL_RCGCGPIO_R_GPION_BIT*4))))
#define SYSCTL_RCGCGPIO_GPIOP_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(SYSCTL_RCGCGPIO_R_GPIOP_BIT*4))))
#define SYSCTL_RCGCGPIO_GPIOQ_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(SYSCTL_RCGCGPIO_R_GPIOQ_BIT*4))))

/******************************************************************************************
************************************61 RCGCDMA *********************************************
******************************************************************************************/
#define SYSCTL_RCGCDMA            (((PERIPHERAL_DMA_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCDMA_OFFSET )))
#define SYSCTL_RCGCDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCDMA_OFFSET)))

/*--------*/
#define SYSCTL_RCGCDMA_R_UDMA_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RCGCDMA_R_UDMA_BIT         (0)
#define SYSCTL_RCGCDMA_R_UDMA_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCDMA_R_UDMA_EN     ((uint32_t)0x00000001)

#define SYSCTL_RCGCDMA_UDMA_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCDMA_UDMA_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCDMA_UDMA_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_RCGCDMA_UDMA_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCDMA_OFFSET)*32)+(SYSCTL_RCGCDMA_R_UDMA_BIT*4))))

/******************************************************************************************
************************************62 RCGCHIB *********************************************
******************************************************************************************/
#define SYSCTL_RCGCHIB            (((PERIPHERAL_HIB_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCHIB_OFFSET )))
#define SYSCTL_RCGCHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCHIB_OFFSET)))

/*--------*/
#define SYSCTL_RCGCHIB_R_HIB_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RCGCHIB_R_HIB_BIT         (0)
#define SYSCTL_RCGCHIB_R_HIB_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCHIB_R_HIB_EN     ((uint32_t)0x00000001)

#define SYSCTL_RCGCHIB_HIB_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCHIB_HIB_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCHIB_HIB_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_RCGCHIB_HIB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCHIB_OFFSET)*32)+(SYSCTL_RCGCHIB_R_HIB_BIT*4))))

/******************************************************************************************
************************************63 RCGCUART *********************************************
******************************************************************************************/
#define SYSCTL_RCGCUART            (((PERIPHERAL_UART_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCUART_OFFSET )))
#define SYSCTL_RCGCUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCUART_OFFSET)))

/*--------*/
#define SYSCTL_RCGCUART_R_UART0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RCGCUART_R_UART0_BIT         (0)
#define SYSCTL_RCGCUART_R_UART0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCUART_R_UART0_EN     ((uint32_t)0x00000001)

#define SYSCTL_RCGCUART_UART0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCUART_UART0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCUART_UART0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_RCGCUART_R_UART1_BIT         (1)
#define SYSCTL_RCGCUART_R_UART1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCUART_R_UART1_EN     ((uint32_t)0x00000002)

#define SYSCTL_RCGCUART_UART1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCUART_UART1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCUART_UART1_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_RCGCUART_R_UART2_BIT         (2)
#define SYSCTL_RCGCUART_R_UART2_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCUART_R_UART2_EN     ((uint32_t)0x00000004)

#define SYSCTL_RCGCUART_UART2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCUART_UART2_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCUART_UART2_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_RCGCUART_R_UART3_BIT         (3)
#define SYSCTL_RCGCUART_R_UART3_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCUART_R_UART3_EN     ((uint32_t)0x00000008)

#define SYSCTL_RCGCUART_UART3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCUART_UART3_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCUART_UART3_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_RCGCUART_R_UART4_BIT         (4)
#define SYSCTL_RCGCUART_R_UART4_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCUART_R_UART4_EN     ((uint32_t)0x00000010)

#define SYSCTL_RCGCUART_UART4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCUART_UART4_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCUART_UART4_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_RCGCUART_R_UART5_BIT         (5)
#define SYSCTL_RCGCUART_R_UART5_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCUART_R_UART5_EN     ((uint32_t)0x00000020)

#define SYSCTL_RCGCUART_UART5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCUART_UART5_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCUART_UART5_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART6_MASK        ((uint32_t)0x00000040)
#define SYSCTL_RCGCUART_R_UART6_BIT         (6)
#define SYSCTL_RCGCUART_R_UART6_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCUART_R_UART6_EN     ((uint32_t)0x00000040)

#define SYSCTL_RCGCUART_UART6_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCUART_UART6_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCUART_UART6_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART7_MASK        ((uint32_t)0x00000080)
#define SYSCTL_RCGCUART_R_UART7_BIT         (7)
#define SYSCTL_RCGCUART_R_UART7_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCUART_R_UART7_EN     ((uint32_t)0x00000080)

#define SYSCTL_RCGCUART_UART7_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCUART_UART7_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCUART_UART7_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_RCGCUART_UART0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32)+(SYSCTL_RCGCUART_R_UART0_BIT*4))))
#define SYSCTL_RCGCUART_UART1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32)+(SYSCTL_RCGCUART_R_UART1_BIT*4))))
#define SYSCTL_RCGCUART_UART2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32)+(SYSCTL_RCGCUART_R_UART2_BIT*4))))
#define SYSCTL_RCGCUART_UART3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32)+(SYSCTL_RCGCUART_R_UART3_BIT*4))))
#define SYSCTL_RCGCUART_UART4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32)+(SYSCTL_RCGCUART_R_UART4_BIT*4))))
#define SYSCTL_RCGCUART_UART5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32)+(SYSCTL_RCGCUART_R_UART5_BIT*4))))
#define SYSCTL_RCGCUART_UART6_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32)+(SYSCTL_RCGCUART_R_UART6_BIT*4))))
#define SYSCTL_RCGCUART_UART7_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32)+(SYSCTL_RCGCUART_R_UART7_BIT*4))))

/******************************************************************************************
************************************64 RCGCSSI *********************************************
******************************************************************************************/
#define SYSCTL_RCGCSSI            (((PERIPHERAL_SSI_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCSSI_OFFSET )))
#define SYSCTL_RCGCSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCSSI_OFFSET)))

/*--------*/
#define SYSCTL_RCGCSSI_R_SSI0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RCGCSSI_R_SSI0_BIT         (0)
#define SYSCTL_RCGCSSI_R_SSI0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCSSI_R_SSI0_EN     ((uint32_t)0x00000001)

#define SYSCTL_RCGCSSI_SSI0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCSSI_SSI0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCSSI_SSI0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCSSI_R_SSI1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_RCGCSSI_R_SSI1_BIT         (1)
#define SYSCTL_RCGCSSI_R_SSI1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCSSI_R_SSI1_EN     ((uint32_t)0x00000002)

#define SYSCTL_RCGCSSI_SSI1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCSSI_SSI1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCSSI_SSI1_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCSSI_R_SSI2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_RCGCSSI_R_SSI2_BIT         (2)
#define SYSCTL_RCGCSSI_R_SSI2_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCSSI_R_SSI2_EN     ((uint32_t)0x00000004)

#define SYSCTL_RCGCSSI_SSI2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCSSI_SSI2_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCSSI_SSI2_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCSSI_R_SSI3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_RCGCSSI_R_SSI3_BIT         (3)
#define SYSCTL_RCGCSSI_R_SSI3_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCSSI_R_SSI3_EN     ((uint32_t)0x00000008)

#define SYSCTL_RCGCSSI_SSI3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCSSI_SSI3_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCSSI_SSI3_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_RCGCSSI_SSI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCSSI_OFFSET)*32)+(SYSCTL_RCGCSSI_R_SSI0_BIT*4))))
#define SYSCTL_RCGCSSI_SSI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCSSI_OFFSET)*32)+(SYSCTL_RCGCSSI_R_SSI1_BIT*4))))
#define SYSCTL_RCGCSSI_SSI2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCSSI_OFFSET)*32)+(SYSCTL_RCGCSSI_R_SSI2_BIT*4))))
#define SYSCTL_RCGCSSI_SSI3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCSSI_OFFSET)*32)+(SYSCTL_RCGCSSI_R_SSI3_BIT*4))))

/******************************************************************************************
************************************65 RCGCI2C *********************************************
******************************************************************************************/
#define SYSCTL_RCGCI2C            (((PERIPHERAL_I2C_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCI2C_OFFSET )))
#define SYSCTL_RCGCI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCI2C_OFFSET)))

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RCGCI2C_R_I2C0_BIT         (0)
#define SYSCTL_RCGCI2C_R_I2C0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCI2C_R_I2C0_EN     ((uint32_t)0x00000001)

#define SYSCTL_RCGCI2C_I2C0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCI2C_I2C0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCI2C_I2C0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_RCGCI2C_R_I2C1_BIT         (1)
#define SYSCTL_RCGCI2C_R_I2C1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCI2C_R_I2C1_EN     ((uint32_t)0x00000002)

#define SYSCTL_RCGCI2C_I2C1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCI2C_I2C1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCI2C_I2C1_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_RCGCI2C_R_I2C2_BIT         (2)
#define SYSCTL_RCGCI2C_R_I2C2_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCI2C_R_I2C2_EN     ((uint32_t)0x00000004)

#define SYSCTL_RCGCI2C_I2C2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCI2C_I2C2_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCI2C_I2C2_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_RCGCI2C_R_I2C3_BIT         (3)
#define SYSCTL_RCGCI2C_R_I2C3_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCI2C_R_I2C3_EN     ((uint32_t)0x00000008)

#define SYSCTL_RCGCI2C_I2C3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCI2C_I2C3_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCI2C_I2C3_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_RCGCI2C_R_I2C4_BIT         (4)
#define SYSCTL_RCGCI2C_R_I2C4_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCI2C_R_I2C4_EN     ((uint32_t)0x00000010)

#define SYSCTL_RCGCI2C_I2C4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCI2C_I2C4_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCI2C_I2C4_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_RCGCI2C_R_I2C5_BIT         (5)
#define SYSCTL_RCGCI2C_R_I2C5_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCI2C_R_I2C5_EN     ((uint32_t)0x00000020)

#define SYSCTL_RCGCI2C_I2C5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCI2C_I2C5_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCI2C_I2C5_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_RCGCI2C_I2C0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32)+(SYSCTL_RCGCI2C_R_I2C0_BIT*4))))
#define SYSCTL_RCGCI2C_I2C1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32)+(SYSCTL_RCGCI2C_R_I2C1_BIT*4))))
#define SYSCTL_RCGCI2C_I2C2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32)+(SYSCTL_RCGCI2C_R_I2C2_BIT*4))))
#define SYSCTL_RCGCI2C_I2C3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32)+(SYSCTL_RCGCI2C_R_I2C3_BIT*4))))
#define SYSCTL_RCGCI2C_I2C4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32)+(SYSCTL_RCGCI2C_R_I2C4_BIT*4))))
#define SYSCTL_RCGCI2C_I2C5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32)+(SYSCTL_RCGCI2C_R_I2C5_BIT*4))))

/******************************************************************************************
************************************66 RCGCUSB *********************************************
******************************************************************************************/
#define SYSCTL_RCGCUSB            (((PERIPHERAL_USB_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCUSB_OFFSET )))
#define SYSCTL_RCGCUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCUSB_OFFSET)))

/*--------*/
#define SYSCTL_RCGCUSB_R_USB_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RCGCUSB_R_USB_BIT         (0)
#define SYSCTL_RCGCUSB_R_USB_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCUSB_R_USB_EN     ((uint32_t)0x00000001)

#define SYSCTL_RCGCUSB_USB_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCUSB_USB_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCUSB_USB_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_RCGCUSB_USB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCUSB_OFFSET)*32)+(SYSCTL_RCGCUSB_R_USB_BIT*4))))

/******************************************************************************************
************************************67 RCGCCAN *********************************************
******************************************************************************************/
#define SYSCTL_RCGCCAN            (((PERIPHERAL_CAN_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCCAN_OFFSET )))
#define SYSCTL_RCGCCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCCAN_OFFSET)))

/*--------*/
#define SYSCTL_RCGCCAN_R_CAN0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RCGCCAN_R_CAN0_BIT         (0)
#define SYSCTL_RCGCCAN_R_CAN0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCCAN_R_CAN0_EN     ((uint32_t)0x00000001)

#define SYSCTL_RCGCCAN_CAN0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCCAN_CAN0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCCAN_CAN0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCCAN_R_CAN1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_RCGCCAN_R_CAN1_BIT         (1)
#define SYSCTL_RCGCCAN_R_CAN1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCCAN_R_CAN1_EN     ((uint32_t)0x00000002)

#define SYSCTL_RCGCCAN_CAN1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCCAN_CAN1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCCAN_CAN1_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_RCGCCAN_CAN0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCCAN_OFFSET)*32)+(SYSCTL_RCGCCAN_R_CAN0_BIT*4))))
#define SYSCTL_RCGCCAN_CAN1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCCAN_OFFSET)*32)+(SYSCTL_RCGCCAN_R_CAN1_BIT*4))))

/******************************************************************************************
************************************68 RCGCADC *********************************************
******************************************************************************************/
#define SYSCTL_RCGCADC            (((PERIPHERAL_ADC_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCADC_OFFSET )))
#define SYSCTL_RCGCADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCADC_OFFSET)))

/*--------*/
#define SYSCTL_RCGCADC_R_ADC0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RCGCADC_R_ADC0_BIT         (0)
#define SYSCTL_RCGCADC_R_ADC0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCADC_R_ADC0_EN     ((uint32_t)0x00000001)

#define SYSCTL_RCGCADC_ADC0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCADC_ADC0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCADC_ADC0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCADC_R_ADC1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_RCGCADC_R_ADC1_BIT         (1)
#define SYSCTL_RCGCADC_R_ADC1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCADC_R_ADC1_EN     ((uint32_t)0x00000002)

#define SYSCTL_RCGCADC_ADC1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCADC_ADC1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCADC_ADC1_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_RCGCADC_ADC0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCADC_OFFSET)*32)+(SYSCTL_RCGCADC_R_ADC0_BIT*4))))
#define SYSCTL_RCGCADC_ADC1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCADC_OFFSET)*32)+(SYSCTL_RCGCADC_R_ADC1_BIT*4))))

/******************************************************************************************
************************************69 RCGCACMP *********************************************
******************************************************************************************/
#define SYSCTL_RCGCACMP            (((PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCACMP_OFFSET )))
#define SYSCTL_RCGCACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCACMP_OFFSET)))

/*--------*/
#define SYSCTL_RCGCACMP_R_ACMP_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RCGCACMP_R_ACMP_BIT         (0)
#define SYSCTL_RCGCACMP_R_ACMP_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCACMP_R_ACMP_EN     ((uint32_t)0x00000001)

#define SYSCTL_RCGCACMP_ACMP_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCACMP_ACMP_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCACMP_ACMP_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_RCGCACMP_ACMP_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCACMP_OFFSET)*32)+(SYSCTL_RCGCACMP_R_ACMP_BIT*4))))

/****************************************************************************************
************************************70 RCGCPWM *********************************************
******************************************************************************************/
#define SYSCTL_RCGCPWM            (((PERIPHERAL_PWM_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCPWM_OFFSET )))
#define SYSCTL_RCGCPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCPWM_OFFSET)))

/*--------*/
#define SYSCTL_RCGCPWM_R_PWM0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RCGCPWM_R_PWM0_BIT         (0)
#define SYSCTL_RCGCPWM_R_PWM0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCPWM_R_PWM0_EN     ((uint32_t)0x00000001)

#define SYSCTL_RCGCPWM_PWM0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCPWM_PWM0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCPWM_PWM0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCPWM_R_PWM1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_RCGCPWM_R_PWM1_BIT         (1)
#define SYSCTL_RCGCPWM_R_PWM1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCPWM_R_PWM1_EN     ((uint32_t)0x00000002)

#define SYSCTL_RCGCPWM_PWM1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCPWM_PWM1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCPWM_PWM1_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_RCGCPWM_PWM0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCPWM_OFFSET)*32)+(SYSCTL_RCGCPWM_R_PWM0_BIT*4))))
#define SYSCTL_RCGCPWM_PWM1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCPWM_OFFSET)*32)+(SYSCTL_RCGCPWM_R_PWM1_BIT*4))))

/******************************************************************************************
************************************71 RCGCQEI *********************************************
******************************************************************************************/
#define SYSCTL_RCGCQEI            (((PERIPHERAL_QEI_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCQEI_OFFSET )))
#define SYSCTL_RCGCQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCQEI_OFFSET)))

/*--------*/
#define SYSCTL_RCGCQEI_R_QEI0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RCGCQEI_R_QEI0_BIT         (0)
#define SYSCTL_RCGCQEI_R_QEI0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCQEI_R_QEI0_EN     ((uint32_t)0x00000001)

#define SYSCTL_RCGCQEI_QEI0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCQEI_QEI0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCQEI_QEI0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCQEI_R_QEI1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_RCGCQEI_R_QEI1_BIT         (1)
#define SYSCTL_RCGCQEI_R_QEI1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCQEI_R_QEI1_EN     ((uint32_t)0x00000002)

#define SYSCTL_RCGCQEI_QEI1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCQEI_QEI1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCQEI_QEI1_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_RCGCQEI_QEI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCQEI_OFFSET)*32)+(SYSCTL_RCGCQEI_R_QEI0_BIT*4))))
#define SYSCTL_RCGCQEI_QEI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCQEI_OFFSET)*32)+(SYSCTL_RCGCQEI_R_QEI1_BIT*4))))

/******************************************************************************************
************************************72 RCGCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_RCGCEEPROM            (((PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCEEPROM_OFFSET )))
#define SYSCTL_RCGCEEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCEEPROM_OFFSET)))

/*--------*/
#define SYSCTL_RCGCEEPROM_R_EEPROM_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RCGCEEPROM_R_EEPROM_BIT         (0)
#define SYSCTL_RCGCEEPROM_R_EEPROM_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCEEPROM_R_EEPROM_EN     ((uint32_t)0x00000001)

#define SYSCTL_RCGCEEPROM_EEPROM_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCEEPROM_EEPROM_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCEEPROM_EEPROM_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_RCGCEEPROM_EEPROM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCEEPROM_OFFSET)*32)+(SYSCTL_RCGCEEPROM_R_EEPROM_BIT*4))))


/**********************************************************************************
************************************73 RCGCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_RCGCWTIMER            (((PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCWTIMER_OFFSET )))
#define SYSCTL_RCGCWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCWTIMER_OFFSET)))

/*--------*/
#define SYSCTL_RCGCWTIMER_R_WTIMER0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_RCGCWTIMER_R_WTIMER0_BIT         (0)
#define SYSCTL_RCGCWTIMER_R_WTIMER0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCWTIMER_R_WTIMER0_EN     ((uint32_t)0x00000001)

#define SYSCTL_RCGCWTIMER_WTIMER0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCWTIMER_WTIMER0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCWTIMER_WTIMER0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCWTIMER_R_WTIMER1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_RCGCWTIMER_R_WTIMER1_BIT         (1)
#define SYSCTL_RCGCWTIMER_R_WTIMER1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCWTIMER_R_WTIMER1_EN     ((uint32_t)0x00000002)

#define SYSCTL_RCGCWTIMER_WTIMER1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCWTIMER_WTIMER1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCWTIMER_WTIMER1_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCWTIMER_R_WTIMER2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_RCGCWTIMER_R_WTIMER2_BIT         (2)
#define SYSCTL_RCGCWTIMER_R_WTIMER2_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCWTIMER_R_WTIMER2_EN     ((uint32_t)0x00000004)

#define SYSCTL_RCGCWTIMER_WTIMER2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCWTIMER_WTIMER2_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCWTIMER_WTIMER2_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCWTIMER_R_WTIMER3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_RCGCWTIMER_R_WTIMER3_BIT         (3)
#define SYSCTL_RCGCWTIMER_R_WTIMER3_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCWTIMER_R_WTIMER3_EN     ((uint32_t)0x00000008)

#define SYSCTL_RCGCWTIMER_WTIMER3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCWTIMER_WTIMER3_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCWTIMER_WTIMER3_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCWTIMER_R_WTIMER4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_RCGCWTIMER_R_WTIMER4_BIT         (4)
#define SYSCTL_RCGCWTIMER_R_WTIMER4_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCWTIMER_R_WTIMER4_EN     ((uint32_t)0x00000010)

#define SYSCTL_RCGCWTIMER_WTIMER4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCWTIMER_WTIMER4_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCWTIMER_WTIMER4_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_RCGCWTIMER_R_WTIMER5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_RCGCWTIMER_R_WTIMER5_BIT         (5)
#define SYSCTL_RCGCWTIMER_R_WTIMER5_DIS   ((uint32_t)0x00000000)
#define SYSCTL_RCGCWTIMER_R_WTIMER5_EN     ((uint32_t)0x00000020)

#define SYSCTL_RCGCWTIMER_WTIMER5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_RCGCWTIMER_WTIMER5_DIS     ((uint32_t)0x00000000)
#define SYSCTL_RCGCWTIMER_WTIMER5_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_RCGCWTIMER_WTIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32)+(SYSCTL_RCGCWTIMER_R_WTIMER0_BIT*4))))
#define SYSCTL_RCGCWTIMER_WTIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32)+(SYSCTL_RCGCWTIMER_R_WTIMER1_BIT*4))))
#define SYSCTL_RCGCWTIMER_WTIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32)+(SYSCTL_RCGCWTIMER_R_WTIMER2_BIT*4))))
#define SYSCTL_RCGCWTIMER_WTIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32)+(SYSCTL_RCGCWTIMER_R_WTIMER3_BIT*4))))
#define SYSCTL_RCGCWTIMER_WTIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32)+(SYSCTL_RCGCWTIMER_R_WTIMER4_BIT*4))))
#define SYSCTL_RCGCWTIMER_WTIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32)+(SYSCTL_RCGCWTIMER_R_WTIMER5_BIT*4))))

/******************************************************************************************
************************************74 SCGCWD *********************************************
******************************************************************************************/
#define SYSCTL_SCGCWD            (((PERIPHERAL_WD_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCWD_OFFSET )))
#define SYSCTL_SCGCWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCWD_OFFSET)))

/*--------*/
#define SYSCTL_SCGCWD_R_WDT0_MASK         ((uint32_t)0x00000001)
#define SYSCTL_SCGCWD_R_WDT0_BIT          (0)
#define SYSCTL_SCGCWD_R_WDT0_DIS    ((uint32_t)0x00000000)
#define SYSCTL_SCGCWD_R_WDT0_EN      ((uint32_t)0x00000001)

#define SYSCTL_SCGCWD_WDT0_MASK           ((uint32_t)0x00000001)
#define SYSCTL_SCGCWD_WDT0_DIS      ((uint32_t)0x00000000)
#define SYSCTL_SCGCWD_WDT0_EN        ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCWD_R_WDT1_MASK         ((uint32_t)0x00000002)
#define SYSCTL_SCGCWD_R_WDT1_BIT          (1)
#define SYSCTL_SCGCWD_R_WDT1_DIS    ((uint32_t)0x00000000)
#define SYSCTL_SCGCWD_R_WDT1_EN      ((uint32_t)0x00000002)

#define SYSCTL_SCGCWD_WDT1_MASK           ((uint32_t)0x00000001)
#define SYSCTL_SCGCWD_WDT1_DIS      ((uint32_t)0x00000000)
#define SYSCTL_SCGCWD_WDT1_EN        ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SCGCWD_WDT0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCWD_OFFSET)*32)+(SYSCTL_SCGCWD_R_WDT0_BIT*4))))
#define SYSCTL_SCGCWD_WDT1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCWD_OFFSET)*32)+(SYSCTL_SCGCWD_R_WDT1_BIT*4))))

/******************************************************************************************
************************************75 SCGCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_SCGCTIMER            (((PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCTIMER_OFFSET )))
#define SYSCTL_SCGCTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCTIMER_OFFSET)))

/*--------*/
#define SYSCTL_SCGCTIMER_R_TIMER0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SCGCTIMER_R_TIMER0_BIT         (0)
#define SYSCTL_SCGCTIMER_R_TIMER0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCTIMER_R_TIMER0_EN     ((uint32_t)0x00000001)

#define SYSCTL_SCGCTIMER_TIMER0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCTIMER_TIMER0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCTIMER_TIMER0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCTIMER_R_TIMER1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SCGCTIMER_R_TIMER1_BIT         (1)
#define SYSCTL_SCGCTIMER_R_TIMER1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCTIMER_R_TIMER1_EN     ((uint32_t)0x00000002)

#define SYSCTL_SCGCTIMER_TIMER1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCTIMER_TIMER1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCTIMER_TIMER1_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCTIMER_R_TIMER2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_SCGCTIMER_R_TIMER2_BIT         (2)
#define SYSCTL_SCGCTIMER_R_TIMER2_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCTIMER_R_TIMER2_EN     ((uint32_t)0x00000004)

#define SYSCTL_SCGCTIMER_TIMER2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCTIMER_TIMER2_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCTIMER_TIMER2_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCTIMER_R_TIMER3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_SCGCTIMER_R_TIMER3_BIT         (3)
#define SYSCTL_SCGCTIMER_R_TIMER3_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCTIMER_R_TIMER3_EN     ((uint32_t)0x00000008)

#define SYSCTL_SCGCTIMER_TIMER3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCTIMER_TIMER3_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCTIMER_TIMER3_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCTIMER_R_TIMER4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_SCGCTIMER_R_TIMER4_BIT         (4)
#define SYSCTL_SCGCTIMER_R_TIMER4_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCTIMER_R_TIMER4_EN     ((uint32_t)0x00000010)

#define SYSCTL_SCGCTIMER_TIMER4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCTIMER_TIMER4_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCTIMER_TIMER4_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCTIMER_R_TIMER5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_SCGCTIMER_R_TIMER5_BIT         (5)
#define SYSCTL_SCGCTIMER_R_TIMER5_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCTIMER_R_TIMER5_EN     ((uint32_t)0x00000020)

#define SYSCTL_SCGCTIMER_TIMER5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCTIMER_TIMER5_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCTIMER_TIMER5_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SCGCTIMER_TIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32)+(SYSCTL_SCGCTIMER_R_TIMER0_BIT*4))))
#define SYSCTL_SCGCTIMER_TIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32)+(SYSCTL_SCGCTIMER_R_TIMER1_BIT*4))))
#define SYSCTL_SCGCTIMER_TIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32)+(SYSCTL_SCGCTIMER_R_TIMER2_BIT*4))))
#define SYSCTL_SCGCTIMER_TIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32)+(SYSCTL_SCGCTIMER_R_TIMER3_BIT*4))))
#define SYSCTL_SCGCTIMER_TIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32)+(SYSCTL_SCGCTIMER_R_TIMER4_BIT*4))))
#define SYSCTL_SCGCTIMER_TIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32)+(SYSCTL_SCGCTIMER_R_TIMER5_BIT*4))))

/******************************************************************************************
************************************76 SCGCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_SCGCGPIO            (((PERIPHERAL_GPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCGPIO_OFFSET )))
#define SYSCTL_SCGCGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCGPIO_OFFSET)))

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOA_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SCGCGPIO_R_GPIOA_BIT         (0)
#define SYSCTL_SCGCGPIO_R_GPIOA_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_R_GPIOA_EN     ((uint32_t)0x00000001)

#define SYSCTL_SCGCGPIO_GPIOA_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCGPIO_GPIOA_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_GPIOA_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOB_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SCGCGPIO_R_GPIOB_BIT         (1)
#define SYSCTL_SCGCGPIO_R_GPIOB_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_R_GPIOB_EN     ((uint32_t)0x00000002)

#define SYSCTL_SCGCGPIO_GPIOB_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCGPIO_GPIOB_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_GPIOB_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOC_MASK        ((uint32_t)0x00000004)
#define SYSCTL_SCGCGPIO_R_GPIOC_BIT         (2)
#define SYSCTL_SCGCGPIO_R_GPIOC_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_R_GPIOC_EN     ((uint32_t)0x00000004)

#define SYSCTL_SCGCGPIO_GPIOC_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCGPIO_GPIOC_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_GPIOC_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOD_MASK        ((uint32_t)0x00000008)
#define SYSCTL_SCGCGPIO_R_GPIOD_BIT         (3)
#define SYSCTL_SCGCGPIO_R_GPIOD_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_R_GPIOD_EN     ((uint32_t)0x00000008)

#define SYSCTL_SCGCGPIO_GPIOD_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCGPIO_GPIOD_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_GPIOD_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOE_MASK        ((uint32_t)0x00000010)
#define SYSCTL_SCGCGPIO_R_GPIOE_BIT         (4)
#define SYSCTL_SCGCGPIO_R_GPIOE_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_R_GPIOE_EN     ((uint32_t)0x00000010)

#define SYSCTL_SCGCGPIO_GPIOE_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCGPIO_GPIOE_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_GPIOE_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOF_MASK        ((uint32_t)0x00000020)
#define SYSCTL_SCGCGPIO_R_GPIOF_BIT         (5)
#define SYSCTL_SCGCGPIO_R_GPIOF_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_R_GPIOF_EN     ((uint32_t)0x00000020)

#define SYSCTL_SCGCGPIO_GPIOF_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCGPIO_GPIOF_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_GPIOF_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040)
#define SYSCTL_SCGCGPIO_R_GPIOG_BIT         (6)
#define SYSCTL_SCGCGPIO_R_GPIOG_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_R_GPIOG_EN     ((uint32_t)0x00000040)

#define SYSCTL_SCGCGPIO_GPIOG_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCGPIO_GPIOG_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_GPIOG_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040)
#define SYSCTL_SCGCGPIO_R_GPIOG_BIT         (6)
#define SYSCTL_SCGCGPIO_R_GPIOG_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_R_GPIOG_EN     ((uint32_t)0x00000040)

#define SYSCTL_SCGCGPIO_GPIOG_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCGPIO_GPIOG_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_GPIOG_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOH_MASK        ((uint32_t)0x00000080)
#define SYSCTL_SCGCGPIO_R_GPIOH_BIT         (7)
#define SYSCTL_SCGCGPIO_R_GPIOH_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_R_GPIOH_EN     ((uint32_t)0x00000080)

#define SYSCTL_SCGCGPIO_GPIOH_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCGPIO_GPIOH_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_GPIOH_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOJ_MASK        ((uint32_t)0x00000100)
#define SYSCTL_SCGCGPIO_R_GPIOJ_BIT         (8)
#define SYSCTL_SCGCGPIO_R_GPIOJ_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_R_GPIOJ_EN     ((uint32_t)0x00000100)

#define SYSCTL_SCGCGPIO_GPIOJ_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCGPIO_GPIOJ_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_GPIOJ_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOK_MASK        ((uint32_t)0x00000200)
#define SYSCTL_SCGCGPIO_R_GPIOK_BIT         (9)
#define SYSCTL_SCGCGPIO_R_GPIOK_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_R_GPIOK_EN     ((uint32_t)0x00000200)

#define SYSCTL_SCGCGPIO_GPIOK_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCGPIO_GPIOK_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_GPIOK_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOL_MASK        ((uint32_t)0x00000400)
#define SYSCTL_SCGCGPIO_R_GPIOL_BIT         (10)
#define SYSCTL_SCGCGPIO_R_GPIOL_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_R_GPIOL_EN     ((uint32_t)0x00000400)

#define SYSCTL_SCGCGPIO_GPIOL_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCGPIO_GPIOL_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_GPIOL_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOM_MASK        ((uint32_t)0x00000800)
#define SYSCTL_SCGCGPIO_R_GPIOM_BIT         (11)
#define SYSCTL_SCGCGPIO_R_GPIOM_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_R_GPIOM_EN     ((uint32_t)0x00000800)

#define SYSCTL_SCGCGPIO_GPIOM_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCGPIO_GPIOM_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_GPIOM_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPION_MASK        ((uint32_t)0x00001000)
#define SYSCTL_SCGCGPIO_R_GPION_BIT         (12)
#define SYSCTL_SCGCGPIO_R_GPION_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_R_GPION_EN     ((uint32_t)0x00001000)

#define SYSCTL_SCGCGPIO_GPION_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCGPIO_GPION_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_GPION_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOP_MASK        ((uint32_t)0x00002000)
#define SYSCTL_SCGCGPIO_R_GPIOP_BIT         (13)
#define SYSCTL_SCGCGPIO_R_GPIOP_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_R_GPIOP_EN     ((uint32_t)0x00002000)

#define SYSCTL_SCGCGPIO_GPIOP_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCGPIO_GPIOP_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_GPIOP_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOQ_MASK        ((uint32_t)0x00004000)
#define SYSCTL_SCGCGPIO_R_GPIOQ_BIT         (14)
#define SYSCTL_SCGCGPIO_R_GPIOQ_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_R_GPIOQ_EN     ((uint32_t)0x00004000)

#define SYSCTL_SCGCGPIO_GPIOQ_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCGPIO_GPIOQ_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCGPIO_GPIOQ_EN       ((uint32_t)0x00000001)
/*--------*/
#define SYSCTL_SCGCGPIO_GPIOA_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(SYSCTL_SCGCGPIO_R_GPIOA_BIT*4))))
#define SYSCTL_SCGCGPIO_GPIOB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(SYSCTL_SCGCGPIO_R_GPIOB_BIT*4))))
#define SYSCTL_SCGCGPIO_GPIOC_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(SYSCTL_SCGCGPIO_R_GPIOC_BIT*4))))
#define SYSCTL_SCGCGPIO_GPIOD_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(SYSCTL_SCGCGPIO_R_GPIOD_BIT*4))))
#define SYSCTL_SCGCGPIO_GPIOE_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(SYSCTL_SCGCGPIO_R_GPIOE_BIT*4))))
#define SYSCTL_SCGCGPIO_GPIOF_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(SYSCTL_SCGCGPIO_R_GPIOF_BIT*4))))
#define SYSCTL_SCGCGPIO_GPIOG_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(SYSCTL_SCGCGPIO_R_GPIOG_BIT*4))))
#define SYSCTL_SCGCGPIO_GPIOH_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(SYSCTL_SCGCGPIO_R_GPIOH_BIT*4))))
#define SYSCTL_SCGCGPIO_GPIOJ_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(SYSCTL_SCGCGPIO_R_GPIOJ_BIT*4))))
#define SYSCTL_SCGCGPIO_GPIOK_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(SYSCTL_SCGCGPIO_R_GPIOK_BIT*4))))
#define SYSCTL_SCGCGPIO_GPIOL_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(SYSCTL_SCGCGPIO_R_GPIOL_BIT*4))))
#define SYSCTL_SCGCGPIO_GPIOM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(SYSCTL_SCGCGPIO_R_GPIOM_BIT*4))))
#define SYSCTL_SCGCGPIO_GPION_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(SYSCTL_SCGCGPIO_R_GPION_BIT*4))))
#define SYSCTL_SCGCGPIO_GPIOP_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(SYSCTL_SCGCGPIO_R_GPIOP_BIT*4))))
#define SYSCTL_SCGCGPIO_GPIOQ_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(SYSCTL_SCGCGPIO_R_GPIOQ_BIT*4))))

/******************************************************************************************
************************************77 SCGCDMA *********************************************
******************************************************************************************/
#define SYSCTL_SCGCDMA            (((PERIPHERAL_DMA_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCDMA_OFFSET )))
#define SYSCTL_SCGCDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCDMA_OFFSET)))

/*--------*/
#define SYSCTL_SCGCDMA_R_UDMA_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SCGCDMA_R_UDMA_BIT         (0)
#define SYSCTL_SCGCDMA_R_UDMA_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCDMA_R_UDMA_EN     ((uint32_t)0x00000001)

#define SYSCTL_SCGCDMA_UDMA_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCDMA_UDMA_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCDMA_UDMA_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SCGCDMA_UDMA_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCDMA_OFFSET)*32)+(SYSCTL_SCGCDMA_R_UDMA_BIT*4))))

/******************************************************************************************
************************************78 SCGCHIB *********************************************
******************************************************************************************/
#define SYSCTL_SCGCHIB            (((PERIPHERAL_HIB_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCHIB_OFFSET )))
#define SYSCTL_SCGCHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCHIB_OFFSET)))

/*--------*/
#define SYSCTL_SCGCHIB_R_HIB_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SCGCHIB_R_HIB_BIT         (0)
#define SYSCTL_SCGCHIB_R_HIB_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCHIB_R_HIB_EN     ((uint32_t)0x00000001)

#define SYSCTL_SCGCHIB_HIB_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCHIB_HIB_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCHIB_HIB_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SCGCHIB_HIB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCHIB_OFFSET)*32)+(SYSCTL_SCGCHIB_R_HIB_BIT*4))))

/******************************************************************************************
************************************79 SCGCUART *********************************************
******************************************************************************************/
#define SYSCTL_SCGCUART            (((PERIPHERAL_UART_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCUART_OFFSET )))
#define SYSCTL_SCGCUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCUART_OFFSET)))

/*--------*/
#define SYSCTL_SCGCUART_R_UART0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SCGCUART_R_UART0_BIT         (0)
#define SYSCTL_SCGCUART_R_UART0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCUART_R_UART0_EN     ((uint32_t)0x00000001)

#define SYSCTL_SCGCUART_UART0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCUART_UART0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCUART_UART0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SCGCUART_R_UART1_BIT         (1)
#define SYSCTL_SCGCUART_R_UART1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCUART_R_UART1_EN     ((uint32_t)0x00000002)

#define SYSCTL_SCGCUART_UART1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCUART_UART1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCUART_UART1_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_SCGCUART_R_UART2_BIT         (2)
#define SYSCTL_SCGCUART_R_UART2_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCUART_R_UART2_EN     ((uint32_t)0x00000004)

#define SYSCTL_SCGCUART_UART2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCUART_UART2_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCUART_UART2_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_SCGCUART_R_UART3_BIT         (3)
#define SYSCTL_SCGCUART_R_UART3_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCUART_R_UART3_EN     ((uint32_t)0x00000008)

#define SYSCTL_SCGCUART_UART3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCUART_UART3_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCUART_UART3_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_SCGCUART_R_UART4_BIT         (4)
#define SYSCTL_SCGCUART_R_UART4_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCUART_R_UART4_EN     ((uint32_t)0x00000010)

#define SYSCTL_SCGCUART_UART4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCUART_UART4_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCUART_UART4_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_SCGCUART_R_UART5_BIT         (5)
#define SYSCTL_SCGCUART_R_UART5_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCUART_R_UART5_EN     ((uint32_t)0x00000020)

#define SYSCTL_SCGCUART_UART5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCUART_UART5_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCUART_UART5_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART6_MASK        ((uint32_t)0x00000040)
#define SYSCTL_SCGCUART_R_UART6_BIT         (6)
#define SYSCTL_SCGCUART_R_UART6_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCUART_R_UART6_EN     ((uint32_t)0x00000040)

#define SYSCTL_SCGCUART_UART6_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCUART_UART6_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCUART_UART6_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART7_MASK        ((uint32_t)0x00000080)
#define SYSCTL_SCGCUART_R_UART7_BIT         (7)
#define SYSCTL_SCGCUART_R_UART7_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCUART_R_UART7_EN     ((uint32_t)0x00000080)

#define SYSCTL_SCGCUART_UART7_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCUART_UART7_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCUART_UART7_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SCGCUART_UART0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(SYSCTL_SCGCUART_R_UART0_BIT*4))))
#define SYSCTL_SCGCUART_UART1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(SYSCTL_SCGCUART_R_UART1_BIT*4))))
#define SYSCTL_SCGCUART_UART2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(SYSCTL_SCGCUART_R_UART2_BIT*4))))
#define SYSCTL_SCGCUART_UART3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(SYSCTL_SCGCUART_R_UART3_BIT*4))))
#define SYSCTL_SCGCUART_UART4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(SYSCTL_SCGCUART_R_UART4_BIT*4))))
#define SYSCTL_SCGCUART_UART5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(SYSCTL_SCGCUART_R_UART5_BIT*4))))
#define SYSCTL_SCGCUART_UART6_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(SYSCTL_SCGCUART_R_UART6_BIT*4))))
#define SYSCTL_SCGCUART_UART7_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(SYSCTL_SCGCUART_R_UART7_BIT*4))))

/******************************************************************************************
************************************80 SCGCSSI *********************************************
******************************************************************************************/
#define SYSCTL_SCGCSSI            (((PERIPHERAL_SSI_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCSSI_OFFSET )))
#define SYSCTL_SCGCSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCSSI_OFFSET)))

/*--------*/
#define SYSCTL_SCGCSSI_R_SSI0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SCGCSSI_R_SSI0_BIT         (0)
#define SYSCTL_SCGCSSI_R_SSI0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCSSI_R_SSI0_EN     ((uint32_t)0x00000001)

#define SYSCTL_SCGCSSI_SSI0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCSSI_SSI0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCSSI_SSI0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCSSI_R_SSI1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SCGCSSI_R_SSI1_BIT         (1)
#define SYSCTL_SCGCSSI_R_SSI1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCSSI_R_SSI1_EN     ((uint32_t)0x00000002)

#define SYSCTL_SCGCSSI_SSI1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCSSI_SSI1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCSSI_SSI1_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCSSI_R_SSI2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_SCGCSSI_R_SSI2_BIT         (2)
#define SYSCTL_SCGCSSI_R_SSI2_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCSSI_R_SSI2_EN     ((uint32_t)0x00000004)

#define SYSCTL_SCGCSSI_SSI2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCSSI_SSI2_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCSSI_SSI2_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCSSI_R_SSI3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_SCGCSSI_R_SSI3_BIT         (3)
#define SYSCTL_SCGCSSI_R_SSI3_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCSSI_R_SSI3_EN     ((uint32_t)0x00000008)

#define SYSCTL_SCGCSSI_SSI3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCSSI_SSI3_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCSSI_SSI3_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SCGCSSI_SSI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCSSI_OFFSET)*32)+(SYSCTL_SCGCSSI_R_SSI0_BIT*4))))
#define SYSCTL_SCGCSSI_SSI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCSSI_OFFSET)*32)+(SYSCTL_SCGCSSI_R_SSI1_BIT*4))))
#define SYSCTL_SCGCSSI_SSI2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCSSI_OFFSET)*32)+(SYSCTL_SCGCSSI_R_SSI2_BIT*4))))
#define SYSCTL_SCGCSSI_SSI3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCSSI_OFFSET)*32)+(SYSCTL_SCGCSSI_R_SSI3_BIT*4))))

/******************************************************************************************
************************************81 SCGCI2C *********************************************
******************************************************************************************/
#define SYSCTL_SCGCI2C            (((PERIPHERAL_I2C_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCI2C_OFFSET )))
#define SYSCTL_SCGCI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCI2C_OFFSET)))

/*--------*/
#define SYSCTL_SCGCI2C_R_I2C0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SCGCI2C_R_I2C0_BIT         (0)
#define SYSCTL_SCGCI2C_R_I2C0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCI2C_R_I2C0_EN     ((uint32_t)0x00000001)

#define SYSCTL_SCGCI2C_I2C0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCI2C_I2C0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCI2C_I2C0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCI2C_R_I2C1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SCGCI2C_R_I2C1_BIT         (1)
#define SYSCTL_SCGCI2C_R_I2C1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCI2C_R_I2C1_EN     ((uint32_t)0x00000002)

#define SYSCTL_SCGCI2C_I2C1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCI2C_I2C1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCI2C_I2C1_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCI2C_R_I2C2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_SCGCI2C_R_I2C2_BIT         (2)
#define SYSCTL_SCGCI2C_R_I2C2_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCI2C_R_I2C2_EN     ((uint32_t)0x00000004)

#define SYSCTL_SCGCI2C_I2C2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCI2C_I2C2_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCI2C_I2C2_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCI2C_R_I2C3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_SCGCI2C_R_I2C3_BIT         (3)
#define SYSCTL_SCGCI2C_R_I2C3_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCI2C_R_I2C3_EN     ((uint32_t)0x00000008)

#define SYSCTL_SCGCI2C_I2C3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCI2C_I2C3_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCI2C_I2C3_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCI2C_R_I2C4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_SCGCI2C_R_I2C4_BIT         (4)
#define SYSCTL_SCGCI2C_R_I2C4_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCI2C_R_I2C4_EN     ((uint32_t)0x00000010)

#define SYSCTL_SCGCI2C_I2C4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCI2C_I2C4_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCI2C_I2C4_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCI2C_R_I2C5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_SCGCI2C_R_I2C5_BIT         (5)
#define SYSCTL_SCGCI2C_R_I2C5_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCI2C_R_I2C5_EN     ((uint32_t)0x00000020)

#define SYSCTL_SCGCI2C_I2C5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCI2C_I2C5_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCI2C_I2C5_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SCGCI2C_I2C0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32)+(SYSCTL_SCGCI2C_R_I2C0_BIT*4))))
#define SYSCTL_SCGCI2C_I2C1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32)+(SYSCTL_SCGCI2C_R_I2C1_BIT*4))))
#define SYSCTL_SCGCI2C_I2C2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32)+(SYSCTL_SCGCI2C_R_I2C2_BIT*4))))
#define SYSCTL_SCGCI2C_I2C3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32)+(SYSCTL_SCGCI2C_R_I2C3_BIT*4))))
#define SYSCTL_SCGCI2C_I2C4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32)+(SYSCTL_SCGCI2C_R_I2C4_BIT*4))))
#define SYSCTL_SCGCI2C_I2C5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32)+(SYSCTL_SCGCI2C_R_I2C5_BIT*4))))

/******************************************************************************************
************************************82 SCGCUSB *********************************************
******************************************************************************************/
#define SYSCTL_SCGCUSB            (((PERIPHERAL_USB_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCUSB_OFFSET )))
#define SYSCTL_SCGCUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCUSB_OFFSET)))

/*--------*/
#define SYSCTL_SCGCUSB_R_USB_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SCGCUSB_R_USB_BIT         (0)
#define SYSCTL_SCGCUSB_R_USB_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCUSB_R_USB_EN     ((uint32_t)0x00000001)

#define SYSCTL_SCGCUSB_USB_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCUSB_USB_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCUSB_USB_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SCGCUSB_USB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCUSB_OFFSET)*32)+(SYSCTL_SCGCUSB_R_USB_BIT*4))))

/******************************************************************************************
************************************83 SCGCCAN *********************************************
******************************************************************************************/
#define SYSCTL_SCGCCAN            (((PERIPHERAL_CAN_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCCAN_OFFSET )))
#define SYSCTL_SCGCCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCCAN_OFFSET)))

/*--------*/
#define SYSCTL_SCGCCAN_R_CAN0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SCGCCAN_R_CAN0_BIT         (0)
#define SYSCTL_SCGCCAN_R_CAN0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCCAN_R_CAN0_EN     ((uint32_t)0x00000001)

#define SYSCTL_SCGCCAN_CAN0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCCAN_CAN0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCCAN_CAN0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCCAN_R_CAN1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SCGCCAN_R_CAN1_BIT         (1)
#define SYSCTL_SCGCCAN_R_CAN1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCCAN_R_CAN1_EN     ((uint32_t)0x00000002)

#define SYSCTL_SCGCCAN_CAN1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCCAN_CAN1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCCAN_CAN1_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SCGCCAN_CAN0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCCAN_OFFSET)*32)+(SYSCTL_SCGCCAN_R_CAN0_BIT*4))))
#define SYSCTL_SCGCCAN_CAN1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCCAN_OFFSET)*32)+(SYSCTL_SCGCCAN_R_CAN1_BIT*4))))

/******************************************************************************************
************************************84 SCGCADC *********************************************
******************************************************************************************/
#define SYSCTL_SCGCADC            (((PERIPHERAL_ADC_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCADC_OFFSET )))
#define SYSCTL_SCGCADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCADC_OFFSET)))

/*--------*/
#define SYSCTL_SCGCADC_R_ADC0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SCGCADC_R_ADC0_BIT         (0)
#define SYSCTL_SCGCADC_R_ADC0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCADC_R_ADC0_EN     ((uint32_t)0x00000001)

#define SYSCTL_SCGCADC_ADC0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCADC_ADC0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCADC_ADC0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCADC_R_ADC1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SCGCADC_R_ADC1_BIT         (1)
#define SYSCTL_SCGCADC_R_ADC1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCADC_R_ADC1_EN     ((uint32_t)0x00000002)

#define SYSCTL_SCGCADC_ADC1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCADC_ADC1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCADC_ADC1_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SCGCADC_ADC0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCADC_OFFSET)*32)+(SYSCTL_SCGCADC_R_ADC0_BIT*4))))
#define SYSCTL_SCGCADC_ADC1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCADC_OFFSET)*32)+(SYSCTL_SCGCADC_R_ADC1_BIT*4))))

/******************************************************************************************
************************************85 SCGCACMP *********************************************
******************************************************************************************/
#define SYSCTL_SCGCACMP            (((PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCACMP_OFFSET )))
#define SYSCTL_SCGCACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCACMP_OFFSET)))

/*--------*/
#define SYSCTL_SCGCACMP_R_ACMP_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SCGCACMP_R_ACMP_BIT         (0)
#define SYSCTL_SCGCACMP_R_ACMP_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCACMP_R_ACMP_EN     ((uint32_t)0x00000001)

#define SYSCTL_SCGCACMP_ACMP_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCACMP_ACMP_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCACMP_ACMP_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SCGCACMP_ACMP_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCACMP_OFFSET)*32)+(SYSCTL_SCGCACMP_R_ACMP_BIT*4))))

/****************************************************************************************
************************************86 SCGCPWM *********************************************
******************************************************************************************/
#define SYSCTL_SCGCPWM            (((PERIPHERAL_PWM_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCPWM_OFFSET )))
#define SYSCTL_SCGCPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCPWM_OFFSET)))

/*--------*/
#define SYSCTL_SCGCPWM_R_PWM0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SCGCPWM_R_PWM0_BIT         (0)
#define SYSCTL_SCGCPWM_R_PWM0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCPWM_R_PWM0_EN     ((uint32_t)0x00000001)

#define SYSCTL_SCGCPWM_PWM0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCPWM_PWM0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCPWM_PWM0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCPWM_R_PWM1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SCGCPWM_R_PWM1_BIT         (1)
#define SYSCTL_SCGCPWM_R_PWM1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCPWM_R_PWM1_EN     ((uint32_t)0x00000002)

#define SYSCTL_SCGCPWM_PWM1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCPWM_PWM1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCPWM_PWM1_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SCGCPWM_PWM0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCPWM_OFFSET)*32)+(SYSCTL_SCGCPWM_R_PWM0_BIT*4))))
#define SYSCTL_SCGCPWM_PWM1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCPWM_OFFSET)*32)+(SYSCTL_SCGCPWM_R_PWM1_BIT*4))))

/******************************************************************************************
************************************87 SCGCQEI *********************************************
******************************************************************************************/
#define SYSCTL_SCGCQEI            (((PERIPHERAL_QEI_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCQEI_OFFSET )))
#define SYSCTL_SCGCQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCQEI_OFFSET)))

/*--------*/
#define SYSCTL_SCGCQEI_R_QEI0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SCGCQEI_R_QEI0_BIT         (0)
#define SYSCTL_SCGCQEI_R_QEI0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCQEI_R_QEI0_EN     ((uint32_t)0x00000001)

#define SYSCTL_SCGCQEI_QEI0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCQEI_QEI0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCQEI_QEI0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCQEI_R_QEI1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SCGCQEI_R_QEI1_BIT         (1)
#define SYSCTL_SCGCQEI_R_QEI1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCQEI_R_QEI1_EN     ((uint32_t)0x00000002)

#define SYSCTL_SCGCQEI_QEI1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCQEI_QEI1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCQEI_QEI1_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SCGCQEI_QEI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCQEI_OFFSET)*32)+(SYSCTL_SCGCQEI_R_QEI0_BIT*4))))
#define SYSCTL_SCGCQEI_QEI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCQEI_OFFSET)*32)+(SYSCTL_SCGCQEI_R_QEI1_BIT*4))))

/******************************************************************************************
************************************88 SCGCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_SCGCEEPROM            (((PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCEEPROM_OFFSET )))
#define SYSCTL_SCGCEEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCEEPROM_OFFSET)))

/*--------*/
#define SYSCTL_SCGCEEPROM_R_EEPROM_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SCGCEEPROM_R_EEPROM_BIT         (0)
#define SYSCTL_SCGCEEPROM_R_EEPROM_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCEEPROM_R_EEPROM_EN     ((uint32_t)0x00000001)

#define SYSCTL_SCGCEEPROM_EEPROM_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCEEPROM_EEPROM_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCEEPROM_EEPROM_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SCGCEEPROM_EEPROM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCEEPROM_OFFSET)*32)+(SYSCTL_SCGCEEPROM_R_EEPROM_BIT*4))))


/**********************************************************************************
************************************89 SCGCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_SCGCWTIMER            (((PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCWTIMER_OFFSET )))
#define SYSCTL_SCGCWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCWTIMER_OFFSET)))

/*--------*/
#define SYSCTL_SCGCWTIMER_R_WTIMER0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_SCGCWTIMER_R_WTIMER0_BIT         (0)
#define SYSCTL_SCGCWTIMER_R_WTIMER0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCWTIMER_R_WTIMER0_EN     ((uint32_t)0x00000001)

#define SYSCTL_SCGCWTIMER_WTIMER0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCWTIMER_WTIMER0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCWTIMER_WTIMER0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCWTIMER_R_WTIMER1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_SCGCWTIMER_R_WTIMER1_BIT         (1)
#define SYSCTL_SCGCWTIMER_R_WTIMER1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCWTIMER_R_WTIMER1_EN     ((uint32_t)0x00000002)

#define SYSCTL_SCGCWTIMER_WTIMER1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCWTIMER_WTIMER1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCWTIMER_WTIMER1_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCWTIMER_R_WTIMER2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_SCGCWTIMER_R_WTIMER2_BIT         (2)
#define SYSCTL_SCGCWTIMER_R_WTIMER2_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCWTIMER_R_WTIMER2_EN     ((uint32_t)0x00000004)

#define SYSCTL_SCGCWTIMER_WTIMER2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCWTIMER_WTIMER2_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCWTIMER_WTIMER2_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCWTIMER_R_WTIMER3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_SCGCWTIMER_R_WTIMER3_BIT         (3)
#define SYSCTL_SCGCWTIMER_R_WTIMER3_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCWTIMER_R_WTIMER3_EN     ((uint32_t)0x00000008)

#define SYSCTL_SCGCWTIMER_WTIMER3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCWTIMER_WTIMER3_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCWTIMER_WTIMER3_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCWTIMER_R_WTIMER4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_SCGCWTIMER_R_WTIMER4_BIT         (4)
#define SYSCTL_SCGCWTIMER_R_WTIMER4_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCWTIMER_R_WTIMER4_EN     ((uint32_t)0x00000010)

#define SYSCTL_SCGCWTIMER_WTIMER4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCWTIMER_WTIMER4_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCWTIMER_WTIMER4_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_SCGCWTIMER_R_WTIMER5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_SCGCWTIMER_R_WTIMER5_BIT         (5)
#define SYSCTL_SCGCWTIMER_R_WTIMER5_DIS   ((uint32_t)0x00000000)
#define SYSCTL_SCGCWTIMER_R_WTIMER5_EN     ((uint32_t)0x00000020)

#define SYSCTL_SCGCWTIMER_WTIMER5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_SCGCWTIMER_WTIMER5_DIS     ((uint32_t)0x00000000)
#define SYSCTL_SCGCWTIMER_WTIMER5_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_SCGCWTIMER_WTIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32)+(SYSCTL_SCGCWTIMER_R_WTIMER0_BIT*4))))
#define SYSCTL_SCGCWTIMER_WTIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32)+(SYSCTL_SCGCWTIMER_R_WTIMER1_BIT*4))))
#define SYSCTL_SCGCWTIMER_WTIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32)+(SYSCTL_SCGCWTIMER_R_WTIMER2_BIT*4))))
#define SYSCTL_SCGCWTIMER_WTIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32)+(SYSCTL_SCGCWTIMER_R_WTIMER3_BIT*4))))
#define SYSCTL_SCGCWTIMER_WTIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32)+(SYSCTL_SCGCWTIMER_R_WTIMER4_BIT*4))))
#define SYSCTL_SCGCWTIMER_WTIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32)+(SYSCTL_SCGCWTIMER_R_WTIMER5_BIT*4))))

/******************************************************************************************
************************************90 DCGCWD *********************************************
******************************************************************************************/
#define SYSCTL_DCGCWD            (((PERIPHERAL_WD_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCWD_OFFSET )))
#define SYSCTL_DCGCWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCWD_OFFSET)))

/*--------*/
#define SYSCTL_DCGCWD_R_WDT0_MASK         ((uint32_t)0x00000001)
#define SYSCTL_DCGCWD_R_WDT0_BIT          (0)
#define SYSCTL_DCGCWD_R_WDT0_DIS    ((uint32_t)0x00000000)
#define SYSCTL_DCGCWD_R_WDT0_EN      ((uint32_t)0x00000001)

#define SYSCTL_DCGCWD_WDT0_MASK           ((uint32_t)0x00000001)
#define SYSCTL_DCGCWD_WDT0_DIS      ((uint32_t)0x00000000)
#define SYSCTL_DCGCWD_WDT0_EN        ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCWD_R_WDT1_MASK         ((uint32_t)0x00000002)
#define SYSCTL_DCGCWD_R_WDT1_BIT          (1)
#define SYSCTL_DCGCWD_R_WDT1_DIS    ((uint32_t)0x00000000)
#define SYSCTL_DCGCWD_R_WDT1_EN      ((uint32_t)0x00000002)

#define SYSCTL_DCGCWD_WDT1_MASK           ((uint32_t)0x00000001)
#define SYSCTL_DCGCWD_WDT1_DIS      ((uint32_t)0x00000000)
#define SYSCTL_DCGCWD_WDT1_EN        ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_DCGCWD_WDT0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCWD_OFFSET)*32)+(SYSCTL_DCGCWD_R_WDT0_BIT*4))))
#define SYSCTL_DCGCWD_WDT1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCWD_OFFSET)*32)+(SYSCTL_DCGCWD_R_WDT1_BIT*4))))

/******************************************************************************************
************************************91 DCGCTIMER *********************************************
******************************************************************************************/
#define SYSCTL_DCGCTIMER            (((PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCTIMER_OFFSET )))
#define SYSCTL_DCGCTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCTIMER_OFFSET)))

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_DCGCTIMER_R_TIMER0_BIT         (0)
#define SYSCTL_DCGCTIMER_R_TIMER0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCTIMER_R_TIMER0_EN     ((uint32_t)0x00000001)

#define SYSCTL_DCGCTIMER_TIMER0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCTIMER_TIMER0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCTIMER_TIMER0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_DCGCTIMER_R_TIMER1_BIT         (1)
#define SYSCTL_DCGCTIMER_R_TIMER1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCTIMER_R_TIMER1_EN     ((uint32_t)0x00000002)

#define SYSCTL_DCGCTIMER_TIMER1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCTIMER_TIMER1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCTIMER_TIMER1_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_DCGCTIMER_R_TIMER2_BIT         (2)
#define SYSCTL_DCGCTIMER_R_TIMER2_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCTIMER_R_TIMER2_EN     ((uint32_t)0x00000004)

#define SYSCTL_DCGCTIMER_TIMER2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCTIMER_TIMER2_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCTIMER_TIMER2_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_DCGCTIMER_R_TIMER3_BIT         (3)
#define SYSCTL_DCGCTIMER_R_TIMER3_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCTIMER_R_TIMER3_EN     ((uint32_t)0x00000008)

#define SYSCTL_DCGCTIMER_TIMER3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCTIMER_TIMER3_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCTIMER_TIMER3_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_DCGCTIMER_R_TIMER4_BIT         (4)
#define SYSCTL_DCGCTIMER_R_TIMER4_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCTIMER_R_TIMER4_EN     ((uint32_t)0x00000010)

#define SYSCTL_DCGCTIMER_TIMER4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCTIMER_TIMER4_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCTIMER_TIMER4_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_DCGCTIMER_R_TIMER5_BIT         (5)
#define SYSCTL_DCGCTIMER_R_TIMER5_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCTIMER_R_TIMER5_EN     ((uint32_t)0x00000020)

#define SYSCTL_DCGCTIMER_TIMER5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCTIMER_TIMER5_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCTIMER_TIMER5_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_DCGCTIMER_TIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32)+(SYSCTL_DCGCTIMER_R_TIMER0_BIT*4))))
#define SYSCTL_DCGCTIMER_TIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32)+(SYSCTL_DCGCTIMER_R_TIMER1_BIT*4))))
#define SYSCTL_DCGCTIMER_TIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32)+(SYSCTL_DCGCTIMER_R_TIMER2_BIT*4))))
#define SYSCTL_DCGCTIMER_TIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32)+(SYSCTL_DCGCTIMER_R_TIMER3_BIT*4))))
#define SYSCTL_DCGCTIMER_TIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32)+(SYSCTL_DCGCTIMER_R_TIMER4_BIT*4))))
#define SYSCTL_DCGCTIMER_TIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32)+(SYSCTL_DCGCTIMER_R_TIMER5_BIT*4))))

/******************************************************************************************
************************************92 DCGCGPIO *********************************************
******************************************************************************************/
#define SYSCTL_DCGCGPIO            (((PERIPHERAL_GPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCGPIO_OFFSET )))
#define SYSCTL_DCGCGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCGPIO_OFFSET)))

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOA_MASK        ((uint32_t)0x00000001)
#define SYSCTL_DCGCGPIO_R_GPIOA_BIT         (0)
#define SYSCTL_DCGCGPIO_R_GPIOA_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_R_GPIOA_EN     ((uint32_t)0x00000001)

#define SYSCTL_DCGCGPIO_GPIOA_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCGPIO_GPIOA_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_GPIOA_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOB_MASK        ((uint32_t)0x00000002)
#define SYSCTL_DCGCGPIO_R_GPIOB_BIT         (1)
#define SYSCTL_DCGCGPIO_R_GPIOB_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_R_GPIOB_EN     ((uint32_t)0x00000002)

#define SYSCTL_DCGCGPIO_GPIOB_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCGPIO_GPIOB_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_GPIOB_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOC_MASK        ((uint32_t)0x00000004)
#define SYSCTL_DCGCGPIO_R_GPIOC_BIT         (2)
#define SYSCTL_DCGCGPIO_R_GPIOC_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_R_GPIOC_EN     ((uint32_t)0x00000004)

#define SYSCTL_DCGCGPIO_GPIOC_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCGPIO_GPIOC_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_GPIOC_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOD_MASK        ((uint32_t)0x00000008)
#define SYSCTL_DCGCGPIO_R_GPIOD_BIT         (3)
#define SYSCTL_DCGCGPIO_R_GPIOD_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_R_GPIOD_EN     ((uint32_t)0x00000008)

#define SYSCTL_DCGCGPIO_GPIOD_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCGPIO_GPIOD_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_GPIOD_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOE_MASK        ((uint32_t)0x00000010)
#define SYSCTL_DCGCGPIO_R_GPIOE_BIT         (4)
#define SYSCTL_DCGCGPIO_R_GPIOE_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_R_GPIOE_EN     ((uint32_t)0x00000010)

#define SYSCTL_DCGCGPIO_GPIOE_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCGPIO_GPIOE_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_GPIOE_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOF_MASK        ((uint32_t)0x00000020)
#define SYSCTL_DCGCGPIO_R_GPIOF_BIT         (5)
#define SYSCTL_DCGCGPIO_R_GPIOF_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_R_GPIOF_EN     ((uint32_t)0x00000020)

#define SYSCTL_DCGCGPIO_GPIOF_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCGPIO_GPIOF_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_GPIOF_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040)
#define SYSCTL_DCGCGPIO_R_GPIOG_BIT         (6)
#define SYSCTL_DCGCGPIO_R_GPIOG_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_R_GPIOG_EN     ((uint32_t)0x00000040)

#define SYSCTL_DCGCGPIO_GPIOG_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCGPIO_GPIOG_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_GPIOG_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040)
#define SYSCTL_DCGCGPIO_R_GPIOG_BIT         (6)
#define SYSCTL_DCGCGPIO_R_GPIOG_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_R_GPIOG_EN     ((uint32_t)0x00000040)

#define SYSCTL_DCGCGPIO_GPIOG_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCGPIO_GPIOG_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_GPIOG_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOH_MASK        ((uint32_t)0x00000080)
#define SYSCTL_DCGCGPIO_R_GPIOH_BIT         (7)
#define SYSCTL_DCGCGPIO_R_GPIOH_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_R_GPIOH_EN     ((uint32_t)0x00000080)

#define SYSCTL_DCGCGPIO_GPIOH_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCGPIO_GPIOH_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_GPIOH_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOJ_MASK        ((uint32_t)0x00000100)
#define SYSCTL_DCGCGPIO_R_GPIOJ_BIT         (8)
#define SYSCTL_DCGCGPIO_R_GPIOJ_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_R_GPIOJ_EN     ((uint32_t)0x00000100)

#define SYSCTL_DCGCGPIO_GPIOJ_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCGPIO_GPIOJ_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_GPIOJ_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOK_MASK        ((uint32_t)0x00000200)
#define SYSCTL_DCGCGPIO_R_GPIOK_BIT         (9)
#define SYSCTL_DCGCGPIO_R_GPIOK_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_R_GPIOK_EN     ((uint32_t)0x00000200)

#define SYSCTL_DCGCGPIO_GPIOK_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCGPIO_GPIOK_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_GPIOK_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOL_MASK        ((uint32_t)0x00000400)
#define SYSCTL_DCGCGPIO_R_GPIOL_BIT         (10)
#define SYSCTL_DCGCGPIO_R_GPIOL_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_R_GPIOL_EN     ((uint32_t)0x00000400)

#define SYSCTL_DCGCGPIO_GPIOL_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCGPIO_GPIOL_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_GPIOL_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOM_MASK        ((uint32_t)0x00000800)
#define SYSCTL_DCGCGPIO_R_GPIOM_BIT         (11)
#define SYSCTL_DCGCGPIO_R_GPIOM_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_R_GPIOM_EN     ((uint32_t)0x00000800)

#define SYSCTL_DCGCGPIO_GPIOM_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCGPIO_GPIOM_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_GPIOM_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPION_MASK        ((uint32_t)0x00001000)
#define SYSCTL_DCGCGPIO_R_GPION_BIT         (12)
#define SYSCTL_DCGCGPIO_R_GPION_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_R_GPION_EN     ((uint32_t)0x00001000)

#define SYSCTL_DCGCGPIO_GPION_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCGPIO_GPION_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_GPION_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOP_MASK        ((uint32_t)0x00002000)
#define SYSCTL_DCGCGPIO_R_GPIOP_BIT         (13)
#define SYSCTL_DCGCGPIO_R_GPIOP_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_R_GPIOP_EN     ((uint32_t)0x00002000)

#define SYSCTL_DCGCGPIO_GPIOP_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCGPIO_GPIOP_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_GPIOP_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOQ_MASK        ((uint32_t)0x00004000)
#define SYSCTL_DCGCGPIO_R_GPIOQ_BIT         (14)
#define SYSCTL_DCGCGPIO_R_GPIOQ_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_R_GPIOQ_EN     ((uint32_t)0x00004000)

#define SYSCTL_DCGCGPIO_GPIOQ_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCGPIO_GPIOQ_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCGPIO_GPIOQ_EN       ((uint32_t)0x00000001)
/*--------*/
#define SYSCTL_DCGCGPIO_GPIOA_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(SYSCTL_DCGCGPIO_R_GPIOA_BIT*4))))
#define SYSCTL_DCGCGPIO_GPIOB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(SYSCTL_DCGCGPIO_R_GPIOB_BIT*4))))
#define SYSCTL_DCGCGPIO_GPIOC_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(SYSCTL_DCGCGPIO_R_GPIOC_BIT*4))))
#define SYSCTL_DCGCGPIO_GPIOD_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(SYSCTL_DCGCGPIO_R_GPIOD_BIT*4))))
#define SYSCTL_DCGCGPIO_GPIOE_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(SYSCTL_DCGCGPIO_R_GPIOE_BIT*4))))
#define SYSCTL_DCGCGPIO_GPIOF_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(SYSCTL_DCGCGPIO_R_GPIOF_BIT*4))))
#define SYSCTL_DCGCGPIO_GPIOG_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(SYSCTL_DCGCGPIO_R_GPIOG_BIT*4))))
#define SYSCTL_DCGCGPIO_GPIOH_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(SYSCTL_DCGCGPIO_R_GPIOH_BIT*4))))
#define SYSCTL_DCGCGPIO_GPIOJ_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(SYSCTL_DCGCGPIO_R_GPIOJ_BIT*4))))
#define SYSCTL_DCGCGPIO_GPIOK_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(SYSCTL_DCGCGPIO_R_GPIOK_BIT*4))))
#define SYSCTL_DCGCGPIO_GPIOL_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(SYSCTL_DCGCGPIO_R_GPIOL_BIT*4))))
#define SYSCTL_DCGCGPIO_GPIOM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(SYSCTL_DCGCGPIO_R_GPIOM_BIT*4))))
#define SYSCTL_DCGCGPIO_GPION_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(SYSCTL_DCGCGPIO_R_GPION_BIT*4))))
#define SYSCTL_DCGCGPIO_GPIOP_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(SYSCTL_DCGCGPIO_R_GPIOP_BIT*4))))
#define SYSCTL_DCGCGPIO_GPIOQ_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(SYSCTL_DCGCGPIO_R_GPIOQ_BIT*4))))

/******************************************************************************************
************************************93 DCGCDMA *********************************************
******************************************************************************************/
#define SYSCTL_DCGCDMA            (((PERIPHERAL_DMA_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCDMA_OFFSET )))
#define SYSCTL_DCGCDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCDMA_OFFSET)))

/*--------*/
#define SYSCTL_DCGCDMA_R_UDMA_MASK        ((uint32_t)0x00000001)
#define SYSCTL_DCGCDMA_R_UDMA_BIT         (0)
#define SYSCTL_DCGCDMA_R_UDMA_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCDMA_R_UDMA_EN     ((uint32_t)0x00000001)

#define SYSCTL_DCGCDMA_UDMA_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCDMA_UDMA_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCDMA_UDMA_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_DCGCDMA_UDMA_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCDMA_OFFSET)*32)+(SYSCTL_DCGCDMA_R_UDMA_BIT*4))))

/******************************************************************************************
************************************94 DCGCHIB *********************************************
******************************************************************************************/
#define SYSCTL_DCGCHIB            (((PERIPHERAL_HIB_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCHIB_OFFSET )))
#define SYSCTL_DCGCHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCHIB_OFFSET)))

/*--------*/
#define SYSCTL_DCGCHIB_R_HIB_MASK        ((uint32_t)0x00000001)
#define SYSCTL_DCGCHIB_R_HIB_BIT         (0)
#define SYSCTL_DCGCHIB_R_HIB_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCHIB_R_HIB_EN     ((uint32_t)0x00000001)

#define SYSCTL_DCGCHIB_HIB_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCHIB_HIB_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCHIB_HIB_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_DCGCHIB_HIB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCHIB_OFFSET)*32)+(SYSCTL_DCGCHIB_R_HIB_BIT*4))))

/******************************************************************************************
************************************95 DCGCUART *********************************************
******************************************************************************************/
#define SYSCTL_DCGCUART            (((PERIPHERAL_UART_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCUART_OFFSET )))
#define SYSCTL_DCGCUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCUART_OFFSET)))

/*--------*/
#define SYSCTL_DCGCUART_R_UART0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_DCGCUART_R_UART0_BIT         (0)
#define SYSCTL_DCGCUART_R_UART0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCUART_R_UART0_EN     ((uint32_t)0x00000001)

#define SYSCTL_DCGCUART_UART0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCUART_UART0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCUART_UART0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_DCGCUART_R_UART1_BIT         (1)
#define SYSCTL_DCGCUART_R_UART1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCUART_R_UART1_EN     ((uint32_t)0x00000002)

#define SYSCTL_DCGCUART_UART1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCUART_UART1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCUART_UART1_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_DCGCUART_R_UART2_BIT         (2)
#define SYSCTL_DCGCUART_R_UART2_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCUART_R_UART2_EN     ((uint32_t)0x00000004)

#define SYSCTL_DCGCUART_UART2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCUART_UART2_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCUART_UART2_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_DCGCUART_R_UART3_BIT         (3)
#define SYSCTL_DCGCUART_R_UART3_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCUART_R_UART3_EN     ((uint32_t)0x00000008)

#define SYSCTL_DCGCUART_UART3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCUART_UART3_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCUART_UART3_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_DCGCUART_R_UART4_BIT         (4)
#define SYSCTL_DCGCUART_R_UART4_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCUART_R_UART4_EN     ((uint32_t)0x00000010)

#define SYSCTL_DCGCUART_UART4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCUART_UART4_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCUART_UART4_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_DCGCUART_R_UART5_BIT         (5)
#define SYSCTL_DCGCUART_R_UART5_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCUART_R_UART5_EN     ((uint32_t)0x00000020)

#define SYSCTL_DCGCUART_UART5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCUART_UART5_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCUART_UART5_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART6_MASK        ((uint32_t)0x00000040)
#define SYSCTL_DCGCUART_R_UART6_BIT         (6)
#define SYSCTL_DCGCUART_R_UART6_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCUART_R_UART6_EN     ((uint32_t)0x00000040)

#define SYSCTL_DCGCUART_UART6_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCUART_UART6_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCUART_UART6_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART7_MASK        ((uint32_t)0x00000080)
#define SYSCTL_DCGCUART_R_UART7_BIT         (7)
#define SYSCTL_DCGCUART_R_UART7_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCUART_R_UART7_EN     ((uint32_t)0x00000080)

#define SYSCTL_DCGCUART_UART7_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCUART_UART7_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCUART_UART7_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_DCGCUART_UART0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(SYSCTL_DCGCUART_R_UART0_BIT*4))))
#define SYSCTL_DCGCUART_UART1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(SYSCTL_DCGCUART_R_UART1_BIT*4))))
#define SYSCTL_DCGCUART_UART2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(SYSCTL_DCGCUART_R_UART2_BIT*4))))
#define SYSCTL_DCGCUART_UART3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(SYSCTL_DCGCUART_R_UART3_BIT*4))))
#define SYSCTL_DCGCUART_UART4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(SYSCTL_DCGCUART_R_UART4_BIT*4))))
#define SYSCTL_DCGCUART_UART5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(SYSCTL_DCGCUART_R_UART5_BIT*4))))
#define SYSCTL_DCGCUART_UART6_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(SYSCTL_DCGCUART_R_UART6_BIT*4))))
#define SYSCTL_DCGCUART_UART7_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(SYSCTL_DCGCUART_R_UART7_BIT*4))))

/******************************************************************************************
************************************96 DCGCSSI *********************************************
******************************************************************************************/
#define SYSCTL_DCGCSSI            (((PERIPHERAL_SSI_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCSSI_OFFSET )))
#define SYSCTL_DCGCSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCSSI_OFFSET)))

/*--------*/
#define SYSCTL_DCGCSSI_R_SSI0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_DCGCSSI_R_SSI0_BIT         (0)
#define SYSCTL_DCGCSSI_R_SSI0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCSSI_R_SSI0_EN     ((uint32_t)0x00000001)

#define SYSCTL_DCGCSSI_SSI0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCSSI_SSI0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCSSI_SSI0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCSSI_R_SSI1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_DCGCSSI_R_SSI1_BIT         (1)
#define SYSCTL_DCGCSSI_R_SSI1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCSSI_R_SSI1_EN     ((uint32_t)0x00000002)

#define SYSCTL_DCGCSSI_SSI1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCSSI_SSI1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCSSI_SSI1_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCSSI_R_SSI2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_DCGCSSI_R_SSI2_BIT         (2)
#define SYSCTL_DCGCSSI_R_SSI2_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCSSI_R_SSI2_EN     ((uint32_t)0x00000004)

#define SYSCTL_DCGCSSI_SSI2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCSSI_SSI2_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCSSI_SSI2_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCSSI_R_SSI3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_DCGCSSI_R_SSI3_BIT         (3)
#define SYSCTL_DCGCSSI_R_SSI3_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCSSI_R_SSI3_EN     ((uint32_t)0x00000008)

#define SYSCTL_DCGCSSI_SSI3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCSSI_SSI3_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCSSI_SSI3_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_DCGCSSI_SSI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCSSI_OFFSET)*32)+(SYSCTL_DCGCSSI_R_SSI0_BIT*4))))
#define SYSCTL_DCGCSSI_SSI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCSSI_OFFSET)*32)+(SYSCTL_DCGCSSI_R_SSI1_BIT*4))))
#define SYSCTL_DCGCSSI_SSI2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCSSI_OFFSET)*32)+(SYSCTL_DCGCSSI_R_SSI2_BIT*4))))
#define SYSCTL_DCGCSSI_SSI3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCSSI_OFFSET)*32)+(SYSCTL_DCGCSSI_R_SSI3_BIT*4))))

/******************************************************************************************
************************************97 DCGCI2C *********************************************
******************************************************************************************/
#define SYSCTL_DCGCI2C            (((PERIPHERAL_I2C_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCI2C_OFFSET )))
#define SYSCTL_DCGCI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCI2C_OFFSET)))

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_DCGCI2C_R_I2C0_BIT         (0)
#define SYSCTL_DCGCI2C_R_I2C0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCI2C_R_I2C0_EN     ((uint32_t)0x00000001)

#define SYSCTL_DCGCI2C_I2C0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCI2C_I2C0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCI2C_I2C0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_DCGCI2C_R_I2C1_BIT         (1)
#define SYSCTL_DCGCI2C_R_I2C1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCI2C_R_I2C1_EN     ((uint32_t)0x00000002)

#define SYSCTL_DCGCI2C_I2C1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCI2C_I2C1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCI2C_I2C1_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_DCGCI2C_R_I2C2_BIT         (2)
#define SYSCTL_DCGCI2C_R_I2C2_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCI2C_R_I2C2_EN     ((uint32_t)0x00000004)

#define SYSCTL_DCGCI2C_I2C2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCI2C_I2C2_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCI2C_I2C2_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_DCGCI2C_R_I2C3_BIT         (3)
#define SYSCTL_DCGCI2C_R_I2C3_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCI2C_R_I2C3_EN     ((uint32_t)0x00000008)

#define SYSCTL_DCGCI2C_I2C3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCI2C_I2C3_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCI2C_I2C3_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_DCGCI2C_R_I2C4_BIT         (4)
#define SYSCTL_DCGCI2C_R_I2C4_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCI2C_R_I2C4_EN     ((uint32_t)0x00000010)

#define SYSCTL_DCGCI2C_I2C4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCI2C_I2C4_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCI2C_I2C4_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_DCGCI2C_R_I2C5_BIT         (5)
#define SYSCTL_DCGCI2C_R_I2C5_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCI2C_R_I2C5_EN     ((uint32_t)0x00000020)

#define SYSCTL_DCGCI2C_I2C5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCI2C_I2C5_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCI2C_I2C5_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_DCGCI2C_I2C0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32)+(SYSCTL_DCGCI2C_R_I2C0_BIT*4))))
#define SYSCTL_DCGCI2C_I2C1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32)+(SYSCTL_DCGCI2C_R_I2C1_BIT*4))))
#define SYSCTL_DCGCI2C_I2C2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32)+(SYSCTL_DCGCI2C_R_I2C2_BIT*4))))
#define SYSCTL_DCGCI2C_I2C3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32)+(SYSCTL_DCGCI2C_R_I2C3_BIT*4))))
#define SYSCTL_DCGCI2C_I2C4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32)+(SYSCTL_DCGCI2C_R_I2C4_BIT*4))))
#define SYSCTL_DCGCI2C_I2C5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32)+(SYSCTL_DCGCI2C_R_I2C5_BIT*4))))

/******************************************************************************************
************************************98 DCGCUSB *********************************************
******************************************************************************************/
#define SYSCTL_DCGCUSB            (((PERIPHERAL_USB_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCUSB_OFFSET )))
#define SYSCTL_DCGCUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCUSB_OFFSET)))

/*--------*/
#define SYSCTL_DCGCUSB_R_USB_MASK        ((uint32_t)0x00000001)
#define SYSCTL_DCGCUSB_R_USB_BIT         (0)
#define SYSCTL_DCGCUSB_R_USB_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCUSB_R_USB_EN     ((uint32_t)0x00000001)

#define SYSCTL_DCGCUSB_USB_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCUSB_USB_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCUSB_USB_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_DCGCUSB_USB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCUSB_OFFSET)*32)+(SYSCTL_DCGCUSB_R_USB_BIT*4))))

/******************************************************************************************
************************************99 DCGCCAN *********************************************
******************************************************************************************/
#define SYSCTL_DCGCCAN            (((PERIPHERAL_CAN_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCCAN_OFFSET )))
#define SYSCTL_DCGCCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCCAN_OFFSET)))

/*--------*/
#define SYSCTL_DCGCCAN_R_CAN0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_DCGCCAN_R_CAN0_BIT         (0)
#define SYSCTL_DCGCCAN_R_CAN0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCCAN_R_CAN0_EN     ((uint32_t)0x00000001)

#define SYSCTL_DCGCCAN_CAN0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCCAN_CAN0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCCAN_CAN0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCCAN_R_CAN1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_DCGCCAN_R_CAN1_BIT         (1)
#define SYSCTL_DCGCCAN_R_CAN1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCCAN_R_CAN1_EN     ((uint32_t)0x00000002)

#define SYSCTL_DCGCCAN_CAN1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCCAN_CAN1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCCAN_CAN1_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_DCGCCAN_CAN0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCCAN_OFFSET)*32)+(SYSCTL_DCGCCAN_R_CAN0_BIT*4))))
#define SYSCTL_DCGCCAN_CAN1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCCAN_OFFSET)*32)+(SYSCTL_DCGCCAN_R_CAN1_BIT*4))))

/******************************************************************************************
************************************100 DCGCADC *********************************************
******************************************************************************************/
#define SYSCTL_DCGCADC            (((PERIPHERAL_ADC_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCADC_OFFSET )))
#define SYSCTL_DCGCADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCADC_OFFSET)))

/*--------*/
#define SYSCTL_DCGCADC_R_ADC0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_DCGCADC_R_ADC0_BIT         (0)
#define SYSCTL_DCGCADC_R_ADC0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCADC_R_ADC0_EN     ((uint32_t)0x00000001)

#define SYSCTL_DCGCADC_ADC0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCADC_ADC0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCADC_ADC0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCADC_R_ADC1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_DCGCADC_R_ADC1_BIT         (1)
#define SYSCTL_DCGCADC_R_ADC1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCADC_R_ADC1_EN     ((uint32_t)0x00000002)

#define SYSCTL_DCGCADC_ADC1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCADC_ADC1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCADC_ADC1_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_DCGCADC_ADC0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCADC_OFFSET)*32)+(SYSCTL_DCGCADC_R_ADC0_BIT*4))))
#define SYSCTL_DCGCADC_ADC1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCADC_OFFSET)*32)+(SYSCTL_DCGCADC_R_ADC1_BIT*4))))

/******************************************************************************************
************************************101 DCGCACMP *********************************************
******************************************************************************************/
#define SYSCTL_DCGCACMP            (((PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCACMP_OFFSET )))
#define SYSCTL_DCGCACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCACMP_OFFSET)))

/*--------*/
#define SYSCTL_DCGCACMP_R_ACMP_MASK        ((uint32_t)0x00000001)
#define SYSCTL_DCGCACMP_R_ACMP_BIT         (0)
#define SYSCTL_DCGCACMP_R_ACMP_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCACMP_R_ACMP_EN     ((uint32_t)0x00000001)

#define SYSCTL_DCGCACMP_ACMP_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCACMP_ACMP_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCACMP_ACMP_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_DCGCACMP_ACMP_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCACMP_OFFSET)*32)+(SYSCTL_DCGCACMP_R_ACMP_BIT*4))))

/****************************************************************************************
************************************102 DCGCPWM *********************************************
******************************************************************************************/
#define SYSCTL_DCGCPWM            (((PERIPHERAL_PWM_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCPWM_OFFSET )))
#define SYSCTL_DCGCPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCPWM_OFFSET)))

/*--------*/
#define SYSCTL_DCGCPWM_R_PWM0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_DCGCPWM_R_PWM0_BIT         (0)
#define SYSCTL_DCGCPWM_R_PWM0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCPWM_R_PWM0_EN     ((uint32_t)0x00000001)

#define SYSCTL_DCGCPWM_PWM0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCPWM_PWM0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCPWM_PWM0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCPWM_R_PWM1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_DCGCPWM_R_PWM1_BIT         (1)
#define SYSCTL_DCGCPWM_R_PWM1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCPWM_R_PWM1_EN     ((uint32_t)0x00000002)

#define SYSCTL_DCGCPWM_PWM1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCPWM_PWM1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCPWM_PWM1_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_DCGCPWM_PWM0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCPWM_OFFSET)*32)+(SYSCTL_DCGCPWM_R_PWM0_BIT*4))))
#define SYSCTL_DCGCPWM_PWM1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCPWM_OFFSET)*32)+(SYSCTL_DCGCPWM_R_PWM1_BIT*4))))

/******************************************************************************************
************************************103 DCGCQEI *********************************************
******************************************************************************************/
#define SYSCTL_DCGCQEI            (((PERIPHERAL_QEI_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCQEI_OFFSET )))
#define SYSCTL_DCGCQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCQEI_OFFSET)))

/*--------*/
#define SYSCTL_DCGCQEI_R_QEI0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_DCGCQEI_R_QEI0_BIT         (0)
#define SYSCTL_DCGCQEI_R_QEI0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCQEI_R_QEI0_EN     ((uint32_t)0x00000001)

#define SYSCTL_DCGCQEI_QEI0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCQEI_QEI0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCQEI_QEI0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCQEI_R_QEI1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_DCGCQEI_R_QEI1_BIT         (1)
#define SYSCTL_DCGCQEI_R_QEI1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCQEI_R_QEI1_EN     ((uint32_t)0x00000002)

#define SYSCTL_DCGCQEI_QEI1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCQEI_QEI1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCQEI_QEI1_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_DCGCQEI_QEI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCQEI_OFFSET)*32)+(SYSCTL_DCGCQEI_R_QEI0_BIT*4))))
#define SYSCTL_DCGCQEI_QEI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCQEI_OFFSET)*32)+(SYSCTL_DCGCQEI_R_QEI1_BIT*4))))

/******************************************************************************************
************************************104 DCGCEEPROM *********************************************
******************************************************************************************/
#define SYSCTL_DCGCEEPROM            (((PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCEEPROM_OFFSET )))
#define SYSCTL_DCGCEEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCEEPROM_OFFSET)))

/*--------*/
#define SYSCTL_DCGCEEPROM_R_EEPROM_MASK        ((uint32_t)0x00000001)
#define SYSCTL_DCGCEEPROM_R_EEPROM_BIT         (0)
#define SYSCTL_DCGCEEPROM_R_EEPROM_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCEEPROM_R_EEPROM_EN     ((uint32_t)0x00000001)

#define SYSCTL_DCGCEEPROM_EEPROM_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCEEPROM_EEPROM_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCEEPROM_EEPROM_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_DCGCEEPROM_EEPROM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCEEPROM_OFFSET)*32)+(SYSCTL_DCGCEEPROM_R_EEPROM_BIT*4))))


/**********************************************************************************
************************************105 DCGCWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_DCGCWTIMER            (((PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCWTIMER_OFFSET )))
#define SYSCTL_DCGCWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCWTIMER_OFFSET)))

/*--------*/
#define SYSCTL_DCGCWTIMER_R_WTIMER0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_DCGCWTIMER_R_WTIMER0_BIT         (0)
#define SYSCTL_DCGCWTIMER_R_WTIMER0_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCWTIMER_R_WTIMER0_EN     ((uint32_t)0x00000001)

#define SYSCTL_DCGCWTIMER_WTIMER0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCWTIMER_WTIMER0_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCWTIMER_WTIMER0_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCWTIMER_R_WTIMER1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_DCGCWTIMER_R_WTIMER1_BIT         (1)
#define SYSCTL_DCGCWTIMER_R_WTIMER1_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCWTIMER_R_WTIMER1_EN     ((uint32_t)0x00000002)

#define SYSCTL_DCGCWTIMER_WTIMER1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCWTIMER_WTIMER1_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCWTIMER_WTIMER1_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCWTIMER_R_WTIMER2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_DCGCWTIMER_R_WTIMER2_BIT         (2)
#define SYSCTL_DCGCWTIMER_R_WTIMER2_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCWTIMER_R_WTIMER2_EN     ((uint32_t)0x00000004)

#define SYSCTL_DCGCWTIMER_WTIMER2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCWTIMER_WTIMER2_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCWTIMER_WTIMER2_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCWTIMER_R_WTIMER3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_DCGCWTIMER_R_WTIMER3_BIT         (3)
#define SYSCTL_DCGCWTIMER_R_WTIMER3_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCWTIMER_R_WTIMER3_EN     ((uint32_t)0x00000008)

#define SYSCTL_DCGCWTIMER_WTIMER3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCWTIMER_WTIMER3_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCWTIMER_WTIMER3_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCWTIMER_R_WTIMER4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_DCGCWTIMER_R_WTIMER4_BIT         (4)
#define SYSCTL_DCGCWTIMER_R_WTIMER4_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCWTIMER_R_WTIMER4_EN     ((uint32_t)0x00000010)

#define SYSCTL_DCGCWTIMER_WTIMER4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCWTIMER_WTIMER4_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCWTIMER_WTIMER4_EN       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DCGCWTIMER_R_WTIMER5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_DCGCWTIMER_R_WTIMER5_BIT         (5)
#define SYSCTL_DCGCWTIMER_R_WTIMER5_DIS   ((uint32_t)0x00000000)
#define SYSCTL_DCGCWTIMER_R_WTIMER5_EN     ((uint32_t)0x00000020)

#define SYSCTL_DCGCWTIMER_WTIMER5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_DCGCWTIMER_WTIMER5_DIS     ((uint32_t)0x00000000)
#define SYSCTL_DCGCWTIMER_WTIMER5_EN       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_DCGCWTIMER_WTIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32)+(SYSCTL_DCGCWTIMER_R_WTIMER0_BIT*4))))
#define SYSCTL_DCGCWTIMER_WTIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32)+(SYSCTL_DCGCWTIMER_R_WTIMER1_BIT*4))))
#define SYSCTL_DCGCWTIMER_WTIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32)+(SYSCTL_DCGCWTIMER_R_WTIMER2_BIT*4))))
#define SYSCTL_DCGCWTIMER_WTIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32)+(SYSCTL_DCGCWTIMER_R_WTIMER3_BIT*4))))
#define SYSCTL_DCGCWTIMER_WTIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32)+(SYSCTL_DCGCWTIMER_R_WTIMER4_BIT*4))))
#define SYSCTL_DCGCWTIMER_WTIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32)+(SYSCTL_DCGCWTIMER_R_WTIMER5_BIT*4))))


/******************************************************************************************
************************************106 PRWD *********************************************
******************************************************************************************/
#define SYSCTL_PRWD            (((PERIPHERAL_WD_TypeDef*)(SYSCTL_BASE+SYSCTL_PRWD_OFFSET )))
#define SYSCTL_PRWD_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRWD_OFFSET)))

/*--------*/
#define SYSCTL_PRWD_R_WDT0_MASK         ((uint32_t)0x00000001)
#define SYSCTL_PRWD_R_WDT0_BIT          (0)
#define SYSCTL_PRWD_R_WDT0_NOPRESENT    ((uint32_t)0x00000000)
#define SYSCTL_PRWD_R_WDT0_PRESENT      ((uint32_t)0x00000001)

#define SYSCTL_PRWD_WDT0_MASK           ((uint32_t)0x00000001)
#define SYSCTL_PRWD_WDT0_NOPRESENT      ((uint32_t)0x00000000)
#define SYSCTL_PRWD_WDT0_PRESENT        ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRWD_R_WDT1_MASK         ((uint32_t)0x00000002)
#define SYSCTL_PRWD_R_WDT1_BIT          (1)
#define SYSCTL_PRWD_R_WDT1_NOPRESENT    ((uint32_t)0x00000000)
#define SYSCTL_PRWD_R_WDT1_PRESENT      ((uint32_t)0x00000002)

#define SYSCTL_PRWD_WDT1_MASK           ((uint32_t)0x00000001)
#define SYSCTL_PRWD_WDT1_NOPRESENT      ((uint32_t)0x00000000)
#define SYSCTL_PRWD_WDT1_PRESENT        ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PRWD_WDT0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRWD_OFFSET)*32)+(SYSCTL_PRWD_R_WDT0_BIT*4))))
#define SYSCTL_PRWD_WDT1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRWD_OFFSET)*32)+(SYSCTL_PRWD_R_WDT1_BIT*4))))


/******************************************************************************************
************************************107 PRTIMER *********************************************
******************************************************************************************/
#define SYSCTL_PRTIMER            (((PERIPHERAL_TIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_PRTIMER_OFFSET )))
#define SYSCTL_PRTIMER_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRTIMER_OFFSET)))

/*--------*/
#define SYSCTL_PRTIMER_R_TIMER0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PRTIMER_R_TIMER0_BIT         (0)
#define SYSCTL_PRTIMER_R_TIMER0_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRTIMER_R_TIMER0_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PRTIMER_TIMER0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRTIMER_TIMER0_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRTIMER_TIMER0_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRTIMER_R_TIMER1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PRTIMER_R_TIMER1_BIT         (1)
#define SYSCTL_PRTIMER_R_TIMER1_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRTIMER_R_TIMER1_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PRTIMER_TIMER1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRTIMER_TIMER1_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRTIMER_TIMER1_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRTIMER_R_TIMER2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_PRTIMER_R_TIMER2_BIT         (2)
#define SYSCTL_PRTIMER_R_TIMER2_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRTIMER_R_TIMER2_PRESENT     ((uint32_t)0x00000004)

#define SYSCTL_PRTIMER_TIMER2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRTIMER_TIMER2_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRTIMER_TIMER2_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRTIMER_R_TIMER3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_PRTIMER_R_TIMER3_BIT         (3)
#define SYSCTL_PRTIMER_R_TIMER3_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRTIMER_R_TIMER3_PRESENT     ((uint32_t)0x00000008)

#define SYSCTL_PRTIMER_TIMER3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRTIMER_TIMER3_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRTIMER_TIMER3_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRTIMER_R_TIMER4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_PRTIMER_R_TIMER4_BIT         (4)
#define SYSCTL_PRTIMER_R_TIMER4_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRTIMER_R_TIMER4_PRESENT     ((uint32_t)0x00000010)

#define SYSCTL_PRTIMER_TIMER4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRTIMER_TIMER4_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRTIMER_TIMER4_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRTIMER_R_TIMER5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_PRTIMER_R_TIMER5_BIT         (5)
#define SYSCTL_PRTIMER_R_TIMER5_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRTIMER_R_TIMER5_PRESENT     ((uint32_t)0x00000020)

#define SYSCTL_PRTIMER_TIMER5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRTIMER_TIMER5_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRTIMER_TIMER5_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PRTIMER_TIMER0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32)+(SYSCTL_PRTIMER_R_TIMER0_BIT*4))))
#define SYSCTL_PRTIMER_TIMER1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32)+(SYSCTL_PRTIMER_R_TIMER1_BIT*4))))
#define SYSCTL_PRTIMER_TIMER2_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32)+(SYSCTL_PRTIMER_R_TIMER2_BIT*4))))
#define SYSCTL_PRTIMER_TIMER3_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32)+(SYSCTL_PRTIMER_R_TIMER3_BIT*4))))
#define SYSCTL_PRTIMER_TIMER4_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32)+(SYSCTL_PRTIMER_R_TIMER4_BIT*4))))
#define SYSCTL_PRTIMER_TIMER5_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32)+(SYSCTL_PRTIMER_R_TIMER5_BIT*4))))

/******************************************************************************************
************************************108 PRGPIO *********************************************
******************************************************************************************/
#define SYSCTL_PRGPIO            (((PERIPHERAL_GPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_PRGPIO_OFFSET )))
#define SYSCTL_PRGPIO_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRGPIO_OFFSET)))

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOA_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PRGPIO_R_GPIOA_BIT         (0)
#define SYSCTL_PRGPIO_R_GPIOA_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_R_GPIOA_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PRGPIO_GPIOA_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRGPIO_GPIOA_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_GPIOA_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOB_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PRGPIO_R_GPIOB_BIT         (1)
#define SYSCTL_PRGPIO_R_GPIOB_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_R_GPIOB_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PRGPIO_GPIOB_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRGPIO_GPIOB_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_GPIOB_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOC_MASK        ((uint32_t)0x00000004)
#define SYSCTL_PRGPIO_R_GPIOC_BIT         (2)
#define SYSCTL_PRGPIO_R_GPIOC_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_R_GPIOC_PRESENT     ((uint32_t)0x00000004)

#define SYSCTL_PRGPIO_GPIOC_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRGPIO_GPIOC_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_GPIOC_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOD_MASK        ((uint32_t)0x00000008)
#define SYSCTL_PRGPIO_R_GPIOD_BIT         (3)
#define SYSCTL_PRGPIO_R_GPIOD_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_R_GPIOD_PRESENT     ((uint32_t)0x00000008)

#define SYSCTL_PRGPIO_GPIOD_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRGPIO_GPIOD_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_GPIOD_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOE_MASK        ((uint32_t)0x00000010)
#define SYSCTL_PRGPIO_R_GPIOE_BIT         (4)
#define SYSCTL_PRGPIO_R_GPIOE_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_R_GPIOE_PRESENT     ((uint32_t)0x00000010)

#define SYSCTL_PRGPIO_GPIOE_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRGPIO_GPIOE_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_GPIOE_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOF_MASK        ((uint32_t)0x00000020)
#define SYSCTL_PRGPIO_R_GPIOF_BIT         (5)
#define SYSCTL_PRGPIO_R_GPIOF_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_R_GPIOF_PRESENT     ((uint32_t)0x00000020)

#define SYSCTL_PRGPIO_GPIOF_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRGPIO_GPIOF_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_GPIOF_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040)
#define SYSCTL_PRGPIO_R_GPIOG_BIT         (6)
#define SYSCTL_PRGPIO_R_GPIOG_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_R_GPIOG_PRESENT     ((uint32_t)0x00000040)

#define SYSCTL_PRGPIO_GPIOG_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRGPIO_GPIOG_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_GPIOG_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040)
#define SYSCTL_PRGPIO_R_GPIOG_BIT         (6)
#define SYSCTL_PRGPIO_R_GPIOG_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_R_GPIOG_PRESENT     ((uint32_t)0x00000040)

#define SYSCTL_PRGPIO_GPIOG_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRGPIO_GPIOG_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_GPIOG_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOH_MASK        ((uint32_t)0x00000080)
#define SYSCTL_PRGPIO_R_GPIOH_BIT         (7)
#define SYSCTL_PRGPIO_R_GPIOH_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_R_GPIOH_PRESENT     ((uint32_t)0x00000080)

#define SYSCTL_PRGPIO_GPIOH_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRGPIO_GPIOH_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_GPIOH_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOJ_MASK        ((uint32_t)0x00000100)
#define SYSCTL_PRGPIO_R_GPIOJ_BIT         (8)
#define SYSCTL_PRGPIO_R_GPIOJ_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_R_GPIOJ_PRESENT     ((uint32_t)0x00000100)

#define SYSCTL_PRGPIO_GPIOJ_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRGPIO_GPIOJ_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_GPIOJ_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOK_MASK        ((uint32_t)0x00000200)
#define SYSCTL_PRGPIO_R_GPIOK_BIT         (9)
#define SYSCTL_PRGPIO_R_GPIOK_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_R_GPIOK_PRESENT     ((uint32_t)0x00000200)

#define SYSCTL_PRGPIO_GPIOK_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRGPIO_GPIOK_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_GPIOK_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOL_MASK        ((uint32_t)0x00000400)
#define SYSCTL_PRGPIO_R_GPIOL_BIT         (10)
#define SYSCTL_PRGPIO_R_GPIOL_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_R_GPIOL_PRESENT     ((uint32_t)0x00000400)

#define SYSCTL_PRGPIO_GPIOL_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRGPIO_GPIOL_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_GPIOL_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOM_MASK        ((uint32_t)0x00000800)
#define SYSCTL_PRGPIO_R_GPIOM_BIT         (11)
#define SYSCTL_PRGPIO_R_GPIOM_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_R_GPIOM_PRESENT     ((uint32_t)0x00000800)

#define SYSCTL_PRGPIO_GPIOM_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRGPIO_GPIOM_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_GPIOM_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPION_MASK        ((uint32_t)0x00001000)
#define SYSCTL_PRGPIO_R_GPION_BIT         (12)
#define SYSCTL_PRGPIO_R_GPION_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_R_GPION_PRESENT     ((uint32_t)0x00001000)

#define SYSCTL_PRGPIO_GPION_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRGPIO_GPION_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_GPION_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOP_MASK        ((uint32_t)0x00002000)
#define SYSCTL_PRGPIO_R_GPIOP_BIT         (13)
#define SYSCTL_PRGPIO_R_GPIOP_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_R_GPIOP_PRESENT     ((uint32_t)0x00002000)

#define SYSCTL_PRGPIO_GPIOP_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRGPIO_GPIOP_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_GPIOP_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRGPIO_R_GPIOQ_MASK        ((uint32_t)0x00004000)
#define SYSCTL_PRGPIO_R_GPIOQ_BIT         (14)
#define SYSCTL_PRGPIO_R_GPIOQ_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_R_GPIOQ_PRESENT     ((uint32_t)0x00004000)

#define SYSCTL_PRGPIO_GPIOQ_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRGPIO_GPIOQ_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRGPIO_GPIOQ_PRESENT       ((uint32_t)0x00000001)
/*--------*/
#define SYSCTL_PRGPIO_GPIOA_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(SYSCTL_PRGPIO_R_GPIOA_BIT*4))))
#define SYSCTL_PRGPIO_GPIOB_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(SYSCTL_PRGPIO_R_GPIOB_BIT*4))))
#define SYSCTL_PRGPIO_GPIOC_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(SYSCTL_PRGPIO_R_GPIOC_BIT*4))))
#define SYSCTL_PRGPIO_GPIOD_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(SYSCTL_PRGPIO_R_GPIOD_BIT*4))))
#define SYSCTL_PRGPIO_GPIOE_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(SYSCTL_PRGPIO_R_GPIOE_BIT*4))))
#define SYSCTL_PRGPIO_GPIOF_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(SYSCTL_PRGPIO_R_GPIOF_BIT*4))))
#define SYSCTL_PRGPIO_GPIOG_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(SYSCTL_PRGPIO_R_GPIOG_BIT*4))))
#define SYSCTL_PRGPIO_GPIOH_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(SYSCTL_PRGPIO_R_GPIOH_BIT*4))))
#define SYSCTL_PRGPIO_GPIOJ_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(SYSCTL_PRGPIO_R_GPIOJ_BIT*4))))
#define SYSCTL_PRGPIO_GPIOK_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(SYSCTL_PRGPIO_R_GPIOK_BIT*4))))
#define SYSCTL_PRGPIO_GPIOL_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(SYSCTL_PRGPIO_R_GPIOL_BIT*4))))
#define SYSCTL_PRGPIO_GPIOM_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(SYSCTL_PRGPIO_R_GPIOM_BIT*4))))
#define SYSCTL_PRGPIO_GPION_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(SYSCTL_PRGPIO_R_GPION_BIT*4))))
#define SYSCTL_PRGPIO_GPIOP_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(SYSCTL_PRGPIO_R_GPIOP_BIT*4))))
#define SYSCTL_PRGPIO_GPIOQ_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(SYSCTL_PRGPIO_R_GPIOQ_BIT*4))))

/******************************************************************************************
************************************109 PRDMA *********************************************
******************************************************************************************/
#define SYSCTL_PRDMA            (((PERIPHERAL_DMA_TypeDef*)(SYSCTL_BASE+SYSCTL_PRDMA_OFFSET )))
#define SYSCTL_PRDMA_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRDMA_OFFSET)))

/*--------*/
#define SYSCTL_PRDMA_R_UDMA_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PRDMA_R_UDMA_BIT         (0)
#define SYSCTL_PRDMA_R_UDMA_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRDMA_R_UDMA_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PRDMA_UDMA_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRDMA_UDMA_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRDMA_UDMA_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PRDMA_UDMA_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRDMA_OFFSET)*32)+(SYSCTL_PRDMA_R_UDMA_BIT*4))))

/******************************************************************************************
************************************110 PRHIB *********************************************
******************************************************************************************/
#define SYSCTL_PRHIB            (((PERIPHERAL_HIB_TypeDef*)(SYSCTL_BASE+SYSCTL_PRHIB_OFFSET )))
#define SYSCTL_PRHIB_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRHIB_OFFSET)))

/*--------*/
#define SYSCTL_PRHIB_R_HIB_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PRHIB_R_HIB_BIT         (0)
#define SYSCTL_PRHIB_R_HIB_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRHIB_R_HIB_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PRHIB_HIB_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRHIB_HIB_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRHIB_HIB_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PRHIB_HIB_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRHIB_OFFSET)*32)+(SYSCTL_PRHIB_R_HIB_BIT*4))))

/******************************************************************************************
************************************111 PRUART *********************************************
******************************************************************************************/
#define SYSCTL_PRUART            (((PERIPHERAL_UART_TypeDef*)(SYSCTL_BASE+SYSCTL_PRUART_OFFSET )))
#define SYSCTL_PRUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRUART_OFFSET)))

/*--------*/
#define SYSCTL_PRUART_R_UART0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PRUART_R_UART0_BIT         (0)
#define SYSCTL_PRUART_R_UART0_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRUART_R_UART0_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PRUART_UART0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRUART_UART0_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRUART_UART0_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRUART_R_UART1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PRUART_R_UART1_BIT         (1)
#define SYSCTL_PRUART_R_UART1_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRUART_R_UART1_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PRUART_UART1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRUART_UART1_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRUART_UART1_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRUART_R_UART2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_PRUART_R_UART2_BIT         (2)
#define SYSCTL_PRUART_R_UART2_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRUART_R_UART2_PRESENT     ((uint32_t)0x00000004)

#define SYSCTL_PRUART_UART2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRUART_UART2_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRUART_UART2_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRUART_R_UART3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_PRUART_R_UART3_BIT         (3)
#define SYSCTL_PRUART_R_UART3_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRUART_R_UART3_PRESENT     ((uint32_t)0x00000008)

#define SYSCTL_PRUART_UART3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRUART_UART3_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRUART_UART3_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRUART_R_UART4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_PRUART_R_UART4_BIT         (4)
#define SYSCTL_PRUART_R_UART4_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRUART_R_UART4_PRESENT     ((uint32_t)0x00000010)

#define SYSCTL_PRUART_UART4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRUART_UART4_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRUART_UART4_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRUART_R_UART5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_PRUART_R_UART5_BIT         (5)
#define SYSCTL_PRUART_R_UART5_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRUART_R_UART5_PRESENT     ((uint32_t)0x00000020)

#define SYSCTL_PRUART_UART5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRUART_UART5_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRUART_UART5_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRUART_R_UART6_MASK        ((uint32_t)0x00000040)
#define SYSCTL_PRUART_R_UART6_BIT         (6)
#define SYSCTL_PRUART_R_UART6_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRUART_R_UART6_PRESENT     ((uint32_t)0x00000040)

#define SYSCTL_PRUART_UART6_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRUART_UART6_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRUART_UART6_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRUART_R_UART7_MASK        ((uint32_t)0x00000080)
#define SYSCTL_PRUART_R_UART7_BIT         (7)
#define SYSCTL_PRUART_R_UART7_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRUART_R_UART7_PRESENT     ((uint32_t)0x00000080)

#define SYSCTL_PRUART_UART7_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRUART_UART7_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRUART_UART7_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PRUART_UART0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(SYSCTL_PRUART_R_UART0_BIT*4))))
#define SYSCTL_PRUART_UART1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(SYSCTL_PRUART_R_UART1_BIT*4))))
#define SYSCTL_PRUART_UART2_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(SYSCTL_PRUART_R_UART2_BIT*4))))
#define SYSCTL_PRUART_UART3_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(SYSCTL_PRUART_R_UART3_BIT*4))))
#define SYSCTL_PRUART_UART4_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(SYSCTL_PRUART_R_UART4_BIT*4))))
#define SYSCTL_PRUART_UART5_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(SYSCTL_PRUART_R_UART5_BIT*4))))
#define SYSCTL_PRUART_UART6_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(SYSCTL_PRUART_R_UART6_BIT*4))))
#define SYSCTL_PRUART_UART7_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(SYSCTL_PRUART_R_UART7_BIT*4))))

/******************************************************************************************
************************************112 PRSSI *********************************************
******************************************************************************************/
#define SYSCTL_PRSSI            (((PERIPHERAL_SSI_TypeDef*)(SYSCTL_BASE+SYSCTL_PRSSI_OFFSET )))
#define SYSCTL_PRSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRSSI_OFFSET)))

/*--------*/
#define SYSCTL_PRSSI_R_SSI0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PRSSI_R_SSI0_BIT         (0)
#define SYSCTL_PRSSI_R_SSI0_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRSSI_R_SSI0_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PRSSI_SSI0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRSSI_SSI0_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRSSI_SSI0_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRSSI_R_SSI1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PRSSI_R_SSI1_BIT         (1)
#define SYSCTL_PRSSI_R_SSI1_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRSSI_R_SSI1_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PRSSI_SSI1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRSSI_SSI1_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRSSI_SSI1_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRSSI_R_SSI2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_PRSSI_R_SSI2_BIT         (2)
#define SYSCTL_PRSSI_R_SSI2_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRSSI_R_SSI2_PRESENT     ((uint32_t)0x00000004)

#define SYSCTL_PRSSI_SSI2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRSSI_SSI2_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRSSI_SSI2_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRSSI_R_SSI3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_PRSSI_R_SSI3_BIT         (3)
#define SYSCTL_PRSSI_R_SSI3_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRSSI_R_SSI3_PRESENT     ((uint32_t)0x00000008)

#define SYSCTL_PRSSI_SSI3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRSSI_SSI3_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRSSI_SSI3_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PRSSI_SSI0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRSSI_OFFSET)*32)+(SYSCTL_PRSSI_R_SSI0_BIT*4))))
#define SYSCTL_PRSSI_SSI1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRSSI_OFFSET)*32)+(SYSCTL_PRSSI_R_SSI1_BIT*4))))
#define SYSCTL_PRSSI_SSI2_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRSSI_OFFSET)*32)+(SYSCTL_PRSSI_R_SSI2_BIT*4))))
#define SYSCTL_PRSSI_SSI3_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRSSI_OFFSET)*32)+(SYSCTL_PRSSI_R_SSI3_BIT*4))))

/******************************************************************************************
************************************113 PRI2C *********************************************
******************************************************************************************/
#define SYSCTL_PRI2C            (((PERIPHERAL_I2C_TypeDef*)(SYSCTL_BASE+SYSCTL_PRI2C_OFFSET )))
#define SYSCTL_PRI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRI2C_OFFSET)))

/*--------*/
#define SYSCTL_PRI2C_R_I2C0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PRI2C_R_I2C0_BIT         (0)
#define SYSCTL_PRI2C_R_I2C0_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRI2C_R_I2C0_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PRI2C_I2C0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRI2C_I2C0_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRI2C_I2C0_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRI2C_R_I2C1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PRI2C_R_I2C1_BIT         (1)
#define SYSCTL_PRI2C_R_I2C1_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRI2C_R_I2C1_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PRI2C_I2C1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRI2C_I2C1_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRI2C_I2C1_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRI2C_R_I2C2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_PRI2C_R_I2C2_BIT         (2)
#define SYSCTL_PRI2C_R_I2C2_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRI2C_R_I2C2_PRESENT     ((uint32_t)0x00000004)

#define SYSCTL_PRI2C_I2C2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRI2C_I2C2_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRI2C_I2C2_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRI2C_R_I2C3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_PRI2C_R_I2C3_BIT         (3)
#define SYSCTL_PRI2C_R_I2C3_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRI2C_R_I2C3_PRESENT     ((uint32_t)0x00000008)

#define SYSCTL_PRI2C_I2C3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRI2C_I2C3_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRI2C_I2C3_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRI2C_R_I2C4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_PRI2C_R_I2C4_BIT         (4)
#define SYSCTL_PRI2C_R_I2C4_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRI2C_R_I2C4_PRESENT     ((uint32_t)0x00000010)

#define SYSCTL_PRI2C_I2C4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRI2C_I2C4_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRI2C_I2C4_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRI2C_R_I2C5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_PRI2C_R_I2C5_BIT         (5)
#define SYSCTL_PRI2C_R_I2C5_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRI2C_R_I2C5_PRESENT     ((uint32_t)0x00000020)

#define SYSCTL_PRI2C_I2C5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRI2C_I2C5_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRI2C_I2C5_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PRI2C_I2C0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32)+(SYSCTL_PRI2C_R_I2C0_BIT*4))))
#define SYSCTL_PRI2C_I2C1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32)+(SYSCTL_PRI2C_R_I2C1_BIT*4))))
#define SYSCTL_PRI2C_I2C2_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32)+(SYSCTL_PRI2C_R_I2C2_BIT*4))))
#define SYSCTL_PRI2C_I2C3_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32)+(SYSCTL_PRI2C_R_I2C3_BIT*4))))
#define SYSCTL_PRI2C_I2C4_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32)+(SYSCTL_PRI2C_R_I2C4_BIT*4))))
#define SYSCTL_PRI2C_I2C5_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32)+(SYSCTL_PRI2C_R_I2C5_BIT*4))))

/******************************************************************************************
************************************114 PRUSB *********************************************
******************************************************************************************/
#define SYSCTL_PRUSB            (((PERIPHERAL_USB_TypeDef*)(SYSCTL_BASE+SYSCTL_PRUSB_OFFSET )))
#define SYSCTL_PRUSB_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRUSB_OFFSET)))

/*--------*/
#define SYSCTL_PRUSB_R_USB_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PRUSB_R_USB_BIT         (0)
#define SYSCTL_PRUSB_R_USB_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRUSB_R_USB_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PRUSB_USB_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRUSB_USB_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRUSB_USB_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PRUSB_USB_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRUSB_OFFSET)*32)+(SYSCTL_PRUSB_R_USB_BIT*4))))

/******************************************************************************************
************************************115 PRCAN *********************************************
******************************************************************************************/
#define SYSCTL_PRCAN            (((PERIPHERAL_CAN_TypeDef*)(SYSCTL_BASE+SYSCTL_PRCAN_OFFSET )))
#define SYSCTL_PRCAN_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRCAN_OFFSET)))

/*--------*/
#define SYSCTL_PRCAN_R_CAN0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PRCAN_R_CAN0_BIT         (0)
#define SYSCTL_PRCAN_R_CAN0_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRCAN_R_CAN0_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PRCAN_CAN0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRCAN_CAN0_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRCAN_CAN0_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRCAN_R_CAN1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PRCAN_R_CAN1_BIT         (1)
#define SYSCTL_PRCAN_R_CAN1_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRCAN_R_CAN1_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PRCAN_CAN1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRCAN_CAN1_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRCAN_CAN1_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PRCAN_CAN0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRCAN_OFFSET)*32)+(SYSCTL_PRCAN_R_CAN0_BIT*4))))
#define SYSCTL_PRCAN_CAN1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRCAN_OFFSET)*32)+(SYSCTL_PRCAN_R_CAN1_BIT*4))))

/******************************************************************************************
************************************116 PRADC *********************************************
******************************************************************************************/
#define SYSCTL_PRADC            (((PERIPHERAL_ADC_TypeDef*)(SYSCTL_BASE+SYSCTL_PRADC_OFFSET )))
#define SYSCTL_PRADC_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRADC_OFFSET)))

/*--------*/
#define SYSCTL_PRADC_R_ADC0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PRADC_R_ADC0_BIT         (0)
#define SYSCTL_PRADC_R_ADC0_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRADC_R_ADC0_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PRADC_ADC0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRADC_ADC0_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRADC_ADC0_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRADC_R_ADC1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PRADC_R_ADC1_BIT         (1)
#define SYSCTL_PRADC_R_ADC1_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRADC_R_ADC1_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PRADC_ADC1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRADC_ADC1_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRADC_ADC1_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PRADC_ADC0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRADC_OFFSET)*32)+(SYSCTL_PRADC_R_ADC0_BIT*4))))
#define SYSCTL_PRADC_ADC1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRADC_OFFSET)*32)+(SYSCTL_PRADC_R_ADC1_BIT*4))))

/******************************************************************************************
************************************117 PRACMP *********************************************
******************************************************************************************/
#define SYSCTL_PRACMP            (((PERIPHERAL_ACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_PRACMP_OFFSET )))
#define SYSCTL_PRACMP_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRACMP_OFFSET)))

/*--------*/
#define SYSCTL_PRACMP_R_ACMP_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PRACMP_R_ACMP_BIT         (0)
#define SYSCTL_PRACMP_R_ACMP_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRACMP_R_ACMP_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PRACMP_ACMP_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRACMP_ACMP_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRACMP_ACMP_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PRACMP_ACMP_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRACMP_OFFSET)*32)+(SYSCTL_PRACMP_R_ACMP_BIT*4))))

/****************************************************************************************
************************************118 PRPWM *********************************************
******************************************************************************************/
#define SYSCTL_PRPWM            (((PERIPHERAL_PWM_TypeDef*)(SYSCTL_BASE+SYSCTL_PRPWM_OFFSET )))
#define SYSCTL_PRPWM_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRPWM_OFFSET)))

/*--------*/
#define SYSCTL_PRPWM_R_PWM0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PRPWM_R_PWM0_BIT         (0)
#define SYSCTL_PRPWM_R_PWM0_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRPWM_R_PWM0_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PRPWM_PWM0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRPWM_PWM0_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRPWM_PWM0_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRPWM_R_PWM1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PRPWM_R_PWM1_BIT         (1)
#define SYSCTL_PRPWM_R_PWM1_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRPWM_R_PWM1_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PRPWM_PWM1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRPWM_PWM1_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRPWM_PWM1_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PRPWM_PWM0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRPWM_OFFSET)*32)+(SYSCTL_PRPWM_R_PWM0_BIT*4))))
#define SYSCTL_PRPWM_PWM1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRPWM_OFFSET)*32)+(SYSCTL_PRPWM_R_PWM1_BIT*4))))

/******************************************************************************************
************************************119 PRQEI *********************************************
******************************************************************************************/
#define SYSCTL_PRQEI            (((PERIPHERAL_QEI_TypeDef*)(SYSCTL_BASE+SYSCTL_PRQEI_OFFSET )))
#define SYSCTL_PRQEI_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRQEI_OFFSET)))

/*--------*/
#define SYSCTL_PRQEI_R_QEI0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PRQEI_R_QEI0_BIT         (0)
#define SYSCTL_PRQEI_R_QEI0_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRQEI_R_QEI0_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PRQEI_QEI0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRQEI_QEI0_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRQEI_QEI0_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRQEI_R_QEI1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PRQEI_R_QEI1_BIT         (1)
#define SYSCTL_PRQEI_R_QEI1_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRQEI_R_QEI1_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PRQEI_QEI1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRQEI_QEI1_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRQEI_QEI1_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PRQEI_QEI0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRQEI_OFFSET)*32)+(SYSCTL_PRQEI_R_QEI0_BIT*4))))
#define SYSCTL_PRQEI_QEI1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRQEI_OFFSET)*32)+(SYSCTL_PRQEI_R_QEI1_BIT*4))))

/******************************************************************************************
************************************120 PREEPROM *********************************************
******************************************************************************************/
#define SYSCTL_PREEPROM            (((PERIPHERAL_EEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_PREEPROM_OFFSET )))
#define SYSCTL_PREEPROM_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PREEPROM_OFFSET)))

/*--------*/
#define SYSCTL_PREEPROM_R_EEPROM_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PREEPROM_R_EEPROM_BIT         (0)
#define SYSCTL_PREEPROM_R_EEPROM_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PREEPROM_R_EEPROM_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PREEPROM_EEPROM_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PREEPROM_EEPROM_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PREEPROM_EEPROM_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PREEPROM_EEPROM_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PREEPROM_OFFSET)*32)+(SYSCTL_PREEPROM_R_EEPROM_BIT*4))))


/**********************************************************************************
************************************121 PRWTIMER *********************************************
******************************************************************************************/
#define SYSCTL_PRWTIMER            (((PERIPHERAL_WTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_PRWTIMER_OFFSET )))
#define SYSCTL_PRWTIMER_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRWTIMER_OFFSET)))

/*--------*/
#define SYSCTL_PRWTIMER_R_WTIMER0_MASK        ((uint32_t)0x00000001)
#define SYSCTL_PRWTIMER_R_WTIMER0_BIT         (0)
#define SYSCTL_PRWTIMER_R_WTIMER0_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRWTIMER_R_WTIMER0_PRESENT     ((uint32_t)0x00000001)

#define SYSCTL_PRWTIMER_WTIMER0_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRWTIMER_WTIMER0_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRWTIMER_WTIMER0_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRWTIMER_R_WTIMER1_MASK        ((uint32_t)0x00000002)
#define SYSCTL_PRWTIMER_R_WTIMER1_BIT         (1)
#define SYSCTL_PRWTIMER_R_WTIMER1_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRWTIMER_R_WTIMER1_PRESENT     ((uint32_t)0x00000002)

#define SYSCTL_PRWTIMER_WTIMER1_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRWTIMER_WTIMER1_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRWTIMER_WTIMER1_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRWTIMER_R_WTIMER2_MASK        ((uint32_t)0x00000004)
#define SYSCTL_PRWTIMER_R_WTIMER2_BIT         (2)
#define SYSCTL_PRWTIMER_R_WTIMER2_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRWTIMER_R_WTIMER2_PRESENT     ((uint32_t)0x00000004)

#define SYSCTL_PRWTIMER_WTIMER2_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRWTIMER_WTIMER2_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRWTIMER_WTIMER2_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRWTIMER_R_WTIMER3_MASK        ((uint32_t)0x00000008)
#define SYSCTL_PRWTIMER_R_WTIMER3_BIT         (3)
#define SYSCTL_PRWTIMER_R_WTIMER3_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRWTIMER_R_WTIMER3_PRESENT     ((uint32_t)0x00000008)

#define SYSCTL_PRWTIMER_WTIMER3_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRWTIMER_WTIMER3_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRWTIMER_WTIMER3_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRWTIMER_R_WTIMER4_MASK        ((uint32_t)0x00000010)
#define SYSCTL_PRWTIMER_R_WTIMER4_BIT         (4)
#define SYSCTL_PRWTIMER_R_WTIMER4_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRWTIMER_R_WTIMER4_PRESENT     ((uint32_t)0x00000010)

#define SYSCTL_PRWTIMER_WTIMER4_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRWTIMER_WTIMER4_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRWTIMER_WTIMER4_PRESENT       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PRWTIMER_R_WTIMER5_MASK        ((uint32_t)0x00000020)
#define SYSCTL_PRWTIMER_R_WTIMER5_BIT         (5)
#define SYSCTL_PRWTIMER_R_WTIMER5_NOPRESENT   ((uint32_t)0x00000000)
#define SYSCTL_PRWTIMER_R_WTIMER5_PRESENT     ((uint32_t)0x00000020)

#define SYSCTL_PRWTIMER_WTIMER5_MASK          ((uint32_t)0x00000001)
#define SYSCTL_PRWTIMER_WTIMER5_NOPRESENT     ((uint32_t)0x00000000)
#define SYSCTL_PRWTIMER_WTIMER5_PRESENT       ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PRWTIMER_WTIMER0_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32)+(SYSCTL_PRWTIMER_R_WTIMER0_BIT*4))))
#define SYSCTL_PRWTIMER_WTIMER1_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32)+(SYSCTL_PRWTIMER_R_WTIMER1_BIT*4))))
#define SYSCTL_PRWTIMER_WTIMER2_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32)+(SYSCTL_PRWTIMER_R_WTIMER2_BIT*4))))
#define SYSCTL_PRWTIMER_WTIMER3_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32)+(SYSCTL_PRWTIMER_R_WTIMER3_BIT*4))))
#define SYSCTL_PRWTIMER_WTIMER4_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32)+(SYSCTL_PRWTIMER_R_WTIMER4_BIT*4))))
#define SYSCTL_PRWTIMER_WTIMER5_BITBANDING    (*((volatile const uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32)+(SYSCTL_PRWTIMER_R_WTIMER5_BIT*4))))

typedef enum
{
    SYSCTL_enOK=0,
    SYSCTL_enERROR,
}SYSCTL_nSTATUS;

typedef enum
{
    SYSCTL_enRESET_EXT      =0x00001,
    SYSCTL_enRESET_POR      =0x00002,
    SYSCTL_enRESET_BOR      =0x00004,
    SYSCTL_enRESET_WDT0     =0x00008,
    SYSCTL_enRESET_SW       =0x00010,
    SYSCTL_enRESET_WDT1     =0x00020,
    SYSCTL_enRESET_MOSCFAIL =0x00040,
    SYSCTL_enRESET_ALL      =0x0007F,
}SYSCTL_nRESET;


typedef enum
{
    SYSCTL_enWDT0 = ((0<<8)|(0)),
    SYSCTL_enWDT1 = ((0<<8)|(1)),

    SYSCTL_enTIMER0 = ((1<<8)|(0)),
    SYSCTL_enTIMER1 = ((1<<8)|(1)),
    SYSCTL_enTIMER2 = ((1<<8)|(2)),
    SYSCTL_enTIMER3 = ((1<<8)|(3)),
    SYSCTL_enTIMER4 = ((1<<8)|(4)),
    SYSCTL_enTIMER5 = ((1<<8)|(5)),

    SYSCTL_enGPIOA = ((2<<8)|(0)),
    SYSCTL_enGPIOB = ((2<<8)|(1)),
    SYSCTL_enGPIOC = ((2<<8)|(2)),
    SYSCTL_enGPIOD = ((2<<8)|(3)),
    SYSCTL_enGPIOE = ((2<<8)|(4)),
    SYSCTL_enGPIOF = ((2<<8)|(5)),
    SYSCTL_enGPIOG = ((2<<8)|(6)),
    SYSCTL_enGPIOH = ((2<<8)|(7)),
    SYSCTL_enGPIOJ = ((2<<8)|(8)),
    SYSCTL_enGPIOK = ((2<<8)|(9)),
    SYSCTL_enGPIOL = ((2<<8)|(10)),
    SYSCTL_enGPIOM = ((2<<8)|(11)),
    SYSCTL_enGPION = ((2<<8)|(12)),
    SYSCTL_enGPIOP = ((2<<8)|(13)),
    SYSCTL_enGPIOQ = ((2<<8)|(14)),

    SYSCTL_enUDMA = ((3<<8)|(0)),

    SYSCTL_enHIB = ((5<<8)|(0)),

    SYSCTL_enUART0 = ((6<<8)|(0)),
    SYSCTL_enUART1 = ((6<<8)|(1)),
    SYSCTL_enUART2 = ((6<<8)|(2)),
    SYSCTL_enUART3 = ((6<<8)|(3)),
    SYSCTL_enUART4 = ((6<<8)|(4)),
    SYSCTL_enUART5 = ((6<<8)|(5)),
    SYSCTL_enUART6 = ((6<<8)|(6)),
    SYSCTL_enUART7 = ((6<<8)|(7)),

    SYSCTL_enSSI0 = ((7<<8)|(0)),
    SYSCTL_enSSI1 = ((7<<8)|(1)),
    SYSCTL_enSSI2 = ((7<<8)|(2)),
    SYSCTL_enSSI3 = ((7<<8)|(3)),

    SYSCTL_enI2C0 = ((8<<8)|(0)),
    SYSCTL_enI2C1 = ((8<<8)|(1)),
    SYSCTL_enI2C2 = ((8<<8)|(2)),
    SYSCTL_enI2C3 = ((8<<8)|(3)),
    SYSCTL_enI2C4 = ((8<<8)|(4)),
    SYSCTL_enI2C5 = ((8<<8)|(5)),

    SYSCTL_enUSB = ((10<<8)|(0)),

    SYSCTL_enCAN0 = ((13<<8)|(0)),
    SYSCTL_enCAN1 = ((13<<8)|(1)),

    SYSCTL_enADC0 = ((14<<8)|(0)),
    SYSCTL_enADC1 = ((14<<8)|(1)),

    SYSCTL_enACMP = ((15<<8)|(0)),

    SYSCTL_enPWM0 = ((16<<8)|(0)),
    SYSCTL_enPWM1 = ((16<<8)|(1)),

    SYSCTL_enQEI0 = ((17<<8)|(0)),
    SYSCTL_enQEI1 = ((17<<8)|(1)),

    SYSCTL_enEEPROM = ((22<<8)|(0)),

    SYSCTL_enWTIMER0 = ((23<<8)|(0)),
    SYSCTL_enWTIMER1 = ((23<<8)|(1)),
    SYSCTL_enWTIMER2 = ((23<<8)|(2)),
    SYSCTL_enWTIMER3 = ((23<<8)|(3)),
    SYSCTL_enWTIMER4 = ((23<<8)|(4)),
    SYSCTL_enWTIMER5 = ((23<<8)|(5)),
}SYSCTL_nPERIPHERAL;

typedef enum
{
    SYSCTL_enGPIOBUSA = 0x0001,
    SYSCTL_enGPIOBUSB = 0x0002,
    SYSCTL_enGPIOBUSC = 0x0004,
    SYSCTL_enGPIOBUSD = 0x0008,
    SYSCTL_enGPIOBUSE = 0x0010,
    SYSCTL_enGPIOBUSF = 0x0020,
    SYSCTL_enGPIOBUSALL = 0x003F,
}SYSCTL_nGPIOBUS;

SYSCTL_nRESET SYSCTL__enGetResetCause(void);
void SYSCTL__vClearResetCause(SYSCTL_nRESET enReset);
void SYSCTL__vSetGPIOBus_AHB(SYSCTL_nGPIOBUS enGPIO);
void SYSCTL__vSetGPIOBus_APB(SYSCTL_nGPIOBUS enGPIO);

SYSCTL_nSTATUS SYSCTL__enInit(void);
uint32_t SYSCTL__u32GetClock(void);

#endif /* SYSCTL_H_ */
