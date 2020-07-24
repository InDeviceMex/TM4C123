/**
 *
 * @file SYSCTL_Struct.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTREGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTREGISTER_H_

#include <stdint.h>

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
    volatile    uint32_t WDT0_     :1;
    volatile    uint32_t SW       :1;
    volatile    uint32_t WDT1_     :1;
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
    volatile uint32_t CVAL         :1;
    volatile uint32_t MOSCIM       :1;
    volatile uint32_t NOXTAL       :1;
    const    uint32_t reserved     :29;
}MOSCCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t BA            :1;
    const    uint32_t reserved      :31;
}RMCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t READ_ENABLE0   :1;
    volatile uint32_t READ_ENABLE1   :1;
    volatile uint32_t READ_ENABLE2   :1;
    volatile uint32_t READ_ENABLE3   :1;
    volatile uint32_t READ_ENABLE4   :1;
    volatile uint32_t READ_ENABLE5   :1;
    volatile uint32_t READ_ENABLE6   :1;
    volatile uint32_t READ_ENABLE7   :1;
    volatile uint32_t READ_ENABLE8   :1;
    volatile uint32_t READ_ENABLE9   :1;
    volatile uint32_t READ_ENABLE10  :1;
    volatile uint32_t READ_ENABLE11  :1;
    volatile uint32_t READ_ENABLE12  :1;
    volatile uint32_t READ_ENABLE13  :1;
    volatile uint32_t READ_ENABLE14  :1;
    volatile uint32_t READ_ENABLE15  :1;
    volatile uint32_t READ_ENABLE16  :1;
    volatile uint32_t READ_ENABLE17  :1;
    volatile uint32_t READ_ENABLE18  :1;
    volatile uint32_t READ_ENABLE19  :1;
    volatile uint32_t READ_ENABLE20  :1;
    volatile uint32_t READ_ENABLE21  :1;
    volatile uint32_t READ_ENABLE22  :1;
    volatile uint32_t READ_ENABLE23  :1;
    volatile uint32_t READ_ENABLE24  :1;
    volatile uint32_t READ_ENABLE25  :1;
    volatile uint32_t READ_ENABLE26  :1;
    volatile uint32_t READ_ENABLE27  :1;
    volatile uint32_t READ_ENABLE28  :1;
    volatile uint32_t READ_ENABLE29  :1;
    volatile uint32_t READ_ENABLE30  :1;
    volatile uint32_t READ_ENABLE31  :1;
}FMPRE_TypeDef;

typedef volatile struct
{
    volatile uint32_t PROG_ENABLE0   :1;
    volatile uint32_t PROG_ENABLE1   :1;
    volatile uint32_t PROG_ENABLE2   :1;
    volatile uint32_t PROG_ENABLE3   :1;
    volatile uint32_t PROG_ENABLE4   :1;
    volatile uint32_t PROG_ENABLE5   :1;
    volatile uint32_t PROG_ENABLE6   :1;
    volatile uint32_t PROG_ENABLE7   :1;
    volatile uint32_t PROG_ENABLE8   :1;
    volatile uint32_t PROG_ENABLE9   :1;
    volatile uint32_t PROG_ENABLE10  :1;
    volatile uint32_t PROG_ENABLE11  :1;
    volatile uint32_t PROG_ENABLE12  :1;
    volatile uint32_t PROG_ENABLE13  :1;
    volatile uint32_t PROG_ENABLE14  :1;
    volatile uint32_t PROG_ENABLE15  :1;
    volatile uint32_t PROG_ENABLE16  :1;
    volatile uint32_t PROG_ENABLE17  :1;
    volatile uint32_t PROG_ENABLE18  :1;
    volatile uint32_t PROG_ENABLE19  :1;
    volatile uint32_t PROG_ENABLE20  :1;
    volatile uint32_t PROG_ENABLE21  :1;
    volatile uint32_t PROG_ENABLE22  :1;
    volatile uint32_t PROG_ENABLE23  :1;
    volatile uint32_t PROG_ENABLE24  :1;
    volatile uint32_t PROG_ENABLE25  :1;
    volatile uint32_t PROG_ENABLE26  :1;
    volatile uint32_t PROG_ENABLE27  :1;
    volatile uint32_t PROG_ENABLE28  :1;
    volatile uint32_t PROG_ENABLE29  :1;
    volatile uint32_t PROG_ENABLE30  :1;
    volatile uint32_t PROG_ENABLE31  :1;
}FMPPE_TypeDef;

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
    volatile const uint32_t DBG0        :1;
    volatile const uint32_t DBG1        :1;
    const          uint32_t reserved    :2;
    volatile const uint32_t KEY         :1;
    const          uint32_t reserved1   :3;
    volatile const uint32_t EN          :1;
    volatile const uint32_t POL         :1;
    volatile const uint32_t PIN         :3;
    volatile const uint32_t PORT        :3;
    const          uint32_t reserved2   :15;
    volatile const uint32_t NW          :1;
}BOOTCFG_TypeDef;

typedef volatile struct
{
    volatile const uint32_t DATA        :32;
}USER_REG_TypeDef;

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
    volatile uint32_t UDMA_      :1;
    const    uint32_t reserved  :31;
}PERIPHERAL_DMA_TypeDef;

typedef volatile struct
{
    volatile uint32_t HIB_       :1;
    const    uint32_t reserved  :31;
}PERIPHERAL_HIB_TypeDef;

typedef volatile struct
{
    volatile uint32_t UART0_    :1;
    volatile uint32_t UART1_    :1;
    volatile uint32_t UART2_    :1;
    volatile uint32_t UART3_    :1;
    volatile uint32_t UART4_    :1;
    volatile uint32_t UART5_    :1;
    volatile uint32_t UART6_    :1;
    volatile uint32_t UART7_    :1;
    const    uint32_t reserved :24;
}PERIPHERAL_UART_TypeDef;

typedef volatile struct
{
    volatile uint32_t SSI0_    :1;
    volatile uint32_t SSI1_    :1;
    volatile uint32_t SSI2_    :1;
    volatile uint32_t SSI3_    :1;
    const    uint32_t reserved :28;
}PERIPHERAL_SSI_TypeDef;

typedef volatile struct
{
    volatile uint32_t I2C0_    :1;
    volatile uint32_t I2C1_    :1;
    volatile uint32_t I2C2_    :1;
    volatile uint32_t I2C3_    :1;
    volatile uint32_t I2C4_    :1;
    volatile uint32_t I2C5_    :1;
    const    uint32_t reserved :26;
}PERIPHERAL_I2C_TypeDef;

typedef volatile struct
{
    volatile uint32_t USB_       :1;
    const    uint32_t reserved  :31;
}PERIPHERAL_USB_TypeDef;

typedef volatile struct
{
    volatile uint32_t CAN0_    :1;
    volatile uint32_t CAN1_    :1;
    const    uint32_t reserved :30;
}PERIPHERAL_CAN_TypeDef;

typedef volatile struct
{
    volatile uint32_t ADC0_    :1;
    volatile uint32_t ADC1_    :1;
    const    uint32_t reserved:30;
}PERIPHERAL_ADC_TypeDef;

typedef volatile struct
{
    volatile uint32_t ACMP    :1;
    const    uint32_t reserved:31;
}PERIPHERAL_ACMP_TypeDef;

typedef volatile struct
{
    volatile uint32_t PWM0_    :1;
    volatile uint32_t PWM1_    :1;
    const    uint32_t reserved:30;
}PERIPHERAL_PWM_TypeDef;

typedef volatile struct
{
    volatile uint32_t QEI0_    :1;
    volatile uint32_t QEI1_    :1;
    const    uint32_t reserved:30;
}PERIPHERAL_QEI_TypeDef;

typedef volatile struct
{
    volatile uint32_t EEPROM_    :1;
    const    uint32_t reserved:31;
}PERIPHERAL_EEPROM_TypeDef;

typedef volatile struct
{
    volatile uint32_t WTIMER0_   :1;
    volatile uint32_t WTIMER1_   :1;
    volatile uint32_t WTIMER2_   :1;
    volatile uint32_t WTIMER3_   :1;
    volatile uint32_t WTIMER4_   :1;
    volatile uint32_t WTIMER5_   :1;
    const    uint32_t reserved  :26;
}PERIPHERAL_WTIMER_TypeDef;

typedef volatile struct
{
    volatile const uint32_t SRAMSZ    :16;
    volatile const uint32_t FLASHSZ   :16;
}DC0_TypeDef;/*0x00000008*/

typedef volatile struct
{
    volatile const uint32_t DCJTAG      :1;
    volatile const uint32_t DCSWD       :1;
    volatile const uint32_t DCSWO       :1;
    volatile const uint32_t DCWDT0      :1;
    volatile const uint32_t DCPLL       :1;
    volatile const uint32_t DCTEMPSNS   :1;
    volatile const uint32_t DCHIB       :1;
    volatile const uint32_t DCMPU       :1;
    volatile const uint32_t DCMAXADC0SPD:2;
    volatile const uint32_t DCMAXADC1SPD:2;
    volatile const uint32_t DCMINSYSDIV :4;
    volatile const uint32_t DCADC0      :1;
    volatile const uint32_t DCADC1      :1;
    const    uint32_t       reserved    :2;
    volatile const uint32_t DCPWM0      :1;
    volatile const uint32_t DCPWM1      :1;
    const    uint32_t       reserved1   :2;
    volatile const uint32_t DCCAN0      :1;
    volatile const uint32_t DCCAN1      :1;
    const    uint32_t       reserved2   :2;
    volatile const uint32_t DCWDT1      :1;
    const    uint32_t       reserved3   :3;
}DC1_TypeDef;/*0x00000010*/

typedef volatile struct
{
    volatile const uint32_t DCUART0      :1;
    volatile const uint32_t DCUART1      :1;
    volatile const uint32_t DCUART2      :1;
    const    uint32_t       reserved     :1;
    volatile const uint32_t DCSSI0       :1;
    volatile const uint32_t DCSSI1       :1;
    const    uint32_t       reserved1    :2;
    volatile const uint32_t DCQEI0       :1;
    volatile const uint32_t DCQEI1       :1;
    const    uint32_t       reserved2    :2;
    volatile const uint32_t DCI2C0       :1;
    volatile const uint32_t DCI2C0HS     :1;
    volatile const uint32_t DCI2C1       :1;
    volatile const uint32_t DCI2C1HS     :1;
    volatile const uint32_t DCTIMER0     :1;
    volatile const uint32_t DCTIMER1     :1;
    volatile const uint32_t DCTIMER2     :1;
    volatile const uint32_t DCTIMER3     :1;
    const    uint32_t       reserved3    :4;
    volatile const uint32_t DCCOMP0      :1;
    volatile const uint32_t DCCOMP1      :1;
    volatile const uint32_t DCCOMP2      :1;
    const    uint32_t       reserved4    :1;
    volatile const uint32_t DCI2S0       :1;
    const    uint32_t       reserved5    :1;
    volatile const uint32_t DCEPI0       :1;
    const    uint32_t       reserved6    :1;
}DC2_TypeDef;/*0x00000014*/

typedef volatile struct
{
    volatile const uint32_t DCPWM0       :1;
    volatile const uint32_t DCPWM1       :1;
    volatile const uint32_t DCPWM2       :1;
    volatile const uint32_t DCPWM3       :1;
    volatile const uint32_t DCPWM4       :1;
    volatile const uint32_t DCPWM5       :1;
    volatile const uint32_t DCC0MINUS    :1;
    volatile const uint32_t DCC0PLUS     :1;
    volatile const uint32_t DCC0O        :1;
    volatile const uint32_t DCC1MINUS    :1;
    volatile const uint32_t DCC1PLUS     :1;
    volatile const uint32_t DCC1O        :1;
    volatile const uint32_t DCC2MINUS    :1;
    volatile const uint32_t DCC2PLUS     :1;
    volatile const uint32_t DCC2O        :1;
    volatile const uint32_t DCPWMFAULT   :1;
    volatile const uint32_t DCADC0AIN0   :1;
    volatile const uint32_t DCADC0AIN1   :1;
    volatile const uint32_t DCADC0AIN2   :1;
    volatile const uint32_t DCADC0AIN3   :1;
    volatile const uint32_t DCADC0AIN4   :1;
    volatile const uint32_t DCADC0AIN5   :1;
    volatile const uint32_t DCADC0AIN6   :1;
    volatile const uint32_t DCADC0AIN7   :1;
    volatile const uint32_t DCCCP0       :1;
    volatile const uint32_t DCCCP1       :1;
    volatile const uint32_t DCCCP2       :1;
    volatile const uint32_t DCCCP3       :1;
    volatile const uint32_t DCCCP4       :1;
    volatile const uint32_t DCCCP5       :1;
    const    uint32_t       reserved     :1;
    volatile const uint32_t DCHZ32       :1;
}DC3_TypeDef;/*0x00000018*/

typedef volatile struct
{
    volatile const uint32_t DCGPIOA      :1;
    volatile const uint32_t DCGPIOB      :1;
    volatile const uint32_t DCGPIOC      :1;
    volatile const uint32_t DCGPIOD      :1;
    volatile const uint32_t DCGPIOE      :1;
    volatile const uint32_t DCGPIOF      :1;
    volatile const uint32_t DCGPIOG      :1;
    volatile const uint32_t DCGPIOH      :1;
    volatile const uint32_t DCGPIOJ      :1;
    const    uint32_t       reserved     :3;
    volatile const uint32_t DCROM        :1;
    volatile const uint32_t DCUDMA       :1;
    volatile const uint32_t DCCCP6       :1;
    volatile const uint32_t DCCCP7       :1;
    const    uint32_t       reserved1    :2;
    volatile const uint32_t DCPICAL      :1;
    const    uint32_t       reserved2    :5;
    volatile const uint32_t DCE1588      :1;
    const    uint32_t       reserved3    :3;
    volatile const uint32_t DCEMAC0      :1;
    const    uint32_t       reserved4    :1;
    volatile const uint32_t DCEPHY0      :1;
    const    uint32_t       reserved5    :1;
}DC4_TypeDef;/*0x0000001C*/

typedef volatile struct
{
    volatile const uint32_t DCPWM0      :1;
    volatile const uint32_t DCPWM1      :1;
    volatile const uint32_t DCPWM2      :1;
    volatile const uint32_t DCPWM3      :1;
    volatile const uint32_t DCPWM4      :1;
    volatile const uint32_t DCPWM5      :1;
    volatile const uint32_t DCPWM6      :1;
    volatile const uint32_t DCPWM7      :1;
    const    uint32_t       reserved    :12;
    volatile const uint32_t DCPWMESYNC  :1;
    volatile const uint32_t DCPWMEFLT   :1;
    const    uint32_t       reserved1   :2;
    volatile const uint32_t DCPWMFAULT0 :1;
    volatile const uint32_t DCPWMFAULT1 :1;
    volatile const uint32_t DCPWMFAULT2 :1;
    volatile const uint32_t DCPWMFAULT3 :1;
    const    uint32_t       reserved2   :4;
}DC5_TypeDef;/*0x00000020*/

typedef volatile struct
{
    volatile const uint32_t DCUSB0      :2;
    const    uint32_t       reserved    :2;
    volatile const uint32_t DCUSB0PHY   :1;
    const    uint32_t       reserved1   :27;
}DC6_TypeDef;/*0x00000024*/

typedef volatile struct
{
    volatile const uint32_t DCDMACH0        :1;
    volatile const uint32_t DCDMACH1        :1;
    volatile const uint32_t DCDMACH2        :1;
    volatile const uint32_t DCDMACH3        :1;
    volatile const uint32_t DCDMACH4        :1;
    volatile const uint32_t DCDMACH5        :1;
    volatile const uint32_t DCDMACH6        :1;
    volatile const uint32_t DCDMACH7        :1;
    volatile const uint32_t DCDMACH8        :1;
    volatile const uint32_t DCDMACH9        :1;
    volatile const uint32_t DCDMACH10       :1;
    volatile const uint32_t DCDMACH11       :1;
    volatile const uint32_t DCDMACH12       :1;
    volatile const uint32_t DCDMACH13       :1;
    volatile const uint32_t DCDMACH14       :1;
    volatile const uint32_t DCDMACH15       :1;
    volatile const uint32_t DCDMACH16       :1;
    volatile const uint32_t DCDMACH17       :1;
    volatile const uint32_t DCDMACH18       :1;
    volatile const uint32_t DCDMACH19       :1;
    volatile const uint32_t DCDMACH20       :1;
    volatile const uint32_t DCDMACH21       :1;
    volatile const uint32_t DCDMACH22       :1;
    volatile const uint32_t DCDMACH23       :1;
    volatile const uint32_t DCDMACH24       :1;
    volatile const uint32_t DCDMACH25       :1;
    volatile const uint32_t DCDMACH26       :1;
    volatile const uint32_t DCDMACH27       :1;
    volatile const uint32_t DCDMACH28       :1;
    volatile const uint32_t DCDMACH29       :1;
    volatile const uint32_t DCDMACH30       :1;
    const    uint32_t       reserved        :1;
}DC7_TypeDef;/*0x00000028*/

typedef volatile struct
{
    volatile const uint32_t DCADC0AIN0        :1;
    volatile const uint32_t DCADC0AIN1        :1;
    volatile const uint32_t DCADC0AIN2        :1;
    volatile const uint32_t DCADC0AIN3        :1;
    volatile const uint32_t DCADC0AIN4        :1;
    volatile const uint32_t DCADC0AIN5        :1;
    volatile const uint32_t DCADC0AIN6        :1;
    volatile const uint32_t DCADC0AIN7        :1;
    volatile const uint32_t DCADC0AIN8        :1;
    volatile const uint32_t DCADC0AIN9        :1;
    volatile const uint32_t DCADC0AIN10       :1;
    volatile const uint32_t DCADC0AIN11       :1;
    volatile const uint32_t DCADC0AIN12       :1;
    volatile const uint32_t DCADC0AIN13       :1;
    volatile const uint32_t DCADC0AIN14       :1;
    volatile const uint32_t DCADC0AIN15       :1;
    volatile const uint32_t DCADC1AIN0        :1;
    volatile const uint32_t DCADC1AIN1        :1;
    volatile const uint32_t DCADC1AIN2        :1;
    volatile const uint32_t DCADC1AIN3        :1;
    volatile const uint32_t DCADC1AIN4        :1;
    volatile const uint32_t DCADC1AIN5        :1;
    volatile const uint32_t DCADC1AIN6        :1;
    volatile const uint32_t DCADC1AIN7        :1;
    volatile const uint32_t DCADC1AIN8        :1;
    volatile const uint32_t DCADC1AIN9        :1;
    volatile const uint32_t DCADC1AIN10       :1;
    volatile const uint32_t DCADC1AIN11       :1;
    volatile const uint32_t DCADC1AIN12       :1;
    volatile const uint32_t DCADC1AIN13       :1;
    volatile const uint32_t DCADC1AIN14       :1;
    volatile const uint32_t DCADC1AIN15       :1;
}DC8_TypeDef;/*0x0000002C*/

typedef volatile struct
{
    const    uint32_t       reserved  :3;
    volatile const uint32_t SRCRWDT0      :1;
    const    uint32_t       reserved1 :2;
    volatile const uint32_t SRCRHIB       :1;
    const    uint32_t       reserved2 :9;
    volatile const uint32_t SRCRADC0      :1;
    volatile const uint32_t SRCRADC1      :1;
    const    uint32_t       reserved3 :2;
    volatile const uint32_t SRCRPWM0      :1;
    const    uint32_t       reserved4 :3;
    volatile const uint32_t SRCRCAN0      :1;
    volatile const uint32_t SRCRCAN1      :1;
    const    uint32_t       reserved5 :2;
    volatile const uint32_t SRCRWDT1      :1;
    const    uint32_t       reserved6 :3;
}SRCR0_TypeDef;/*0x00000040*/

typedef volatile struct
{
    volatile const uint32_t SRCRUART0      :1;
    volatile const uint32_t SRCRUART1      :1;
    volatile const uint32_t SRCRUART2      :1;
    const    uint32_t       reserved   :1;
    volatile const uint32_t SRCRSSI0       :1;
    volatile const uint32_t SRCRSSI1       :1;
    const    uint32_t       reserved1  :2;
    volatile const uint32_t SRCRQEI0       :1;
    volatile const uint32_t SRCRQEI1       :1;
    const    uint32_t       reserved2  :2;
    volatile const uint32_t SRCRI2C0       :1;
    const    uint32_t       reserved3  :1;
    volatile const uint32_t SRCRI2C1       :1;
    const    uint32_t       reserved4  :1;
    volatile const uint32_t SRCRTIMER0     :1;
    volatile const uint32_t SRCRTIMER1     :1;
    volatile const uint32_t SRCRTIMER2     :1;
    volatile const uint32_t SRCRTIMER3     :1;
    const    uint32_t       reserved5  :4;
    volatile const uint32_t SRCRCOMP0      :1;
    volatile const uint32_t SRCRCOMP1      :1;
    const    uint32_t       reserved6  :6;
}SRCR1_TypeDef;/*0x00000044*/

typedef volatile struct
{
    volatile const uint32_t SRCRGPIOA      :1;
    volatile const uint32_t SRCRGPIOB      :1;
    volatile const uint32_t SRCRGPIOC      :1;
    volatile const uint32_t SRCRGPIOD      :1;
    volatile const uint32_t SRCRGPIOE      :1;
    volatile const uint32_t SRCRGPIOF      :1;
    const    uint32_t       reserved   :7;
    volatile const uint32_t SRCRUDMA       :1;
    const    uint32_t       reserved1  :2;
    volatile const uint32_t SRCRUSB0       :1;
    const    uint32_t       reserved2  :15;
}SRCR2_TypeDef;/*0x00000048*/

typedef volatile struct
{
    const    uint32_t       reserved  :3;
    volatile const uint32_t RCGCWDT0      :1;
    const    uint32_t       reserved1 :2;
    volatile const uint32_t RCGCHIB       :1;
    const    uint32_t       reserved2 :1;
    volatile const uint32_t RCGCMAXADC0SPD:2;
    volatile const uint32_t RCGCMAXADC1SPD:2;
    const    uint32_t       reserved3 :4;
    volatile const uint32_t RCGCADC0      :1;
    volatile const uint32_t RCGCADC1      :1;
    const    uint32_t       reserved5 :2;
    volatile const uint32_t RCGCPWM0      :1;
    const    uint32_t       reserved6 :3;
    volatile const uint32_t RCGCCAN0      :1;
    volatile const uint32_t RCGCCAN1      :1;
    const    uint32_t       reserved7 :2;
    volatile const uint32_t RCGCWDT1      :1;
    const    uint32_t       reserved8 :3;
}RCGC0_TypeDef;/*0x00000100*/

typedef volatile struct
{
    volatile const uint32_t RCGCUART0      :1;
    volatile const uint32_t RCGCUART1      :1;
    volatile const uint32_t RCGCUART2      :1;
    const    uint32_t       reserved   :1;
    volatile const uint32_t RCGCSSI0       :1;
    volatile const uint32_t RCGCSSI1       :1;
    const    uint32_t       reserved1  :2;
    volatile const uint32_t RCGCQEI0       :1;
    volatile const uint32_t RCGCQEI1       :1;
    const    uint32_t       reserved2  :2;
    volatile const uint32_t RCGCI2C0       :1;
    const    uint32_t       reserved3  :1;
    volatile const uint32_t RCGCI2C1       :1;
    const    uint32_t       reserved4  :1;
    volatile const uint32_t RCGCTIMER0     :1;
    volatile const uint32_t RCGCTIMER1     :1;
    volatile const uint32_t RCGCTIMER2     :1;
    volatile const uint32_t RCGCTIMER3     :1;
    const    uint32_t       reserved5  :4;
    volatile const uint32_t RCGCCOMP0      :1;
    volatile const uint32_t RCGCCOMP1      :1;
    const    uint32_t       reserved6  :6;
}RCGC1_TypeDef;/*0x00000104*/

typedef volatile struct
{
    volatile const uint32_t RCGCGPIOA      :1;
    volatile const uint32_t RCGCGPIOB      :1;
    volatile const uint32_t RCGCGPIOC      :1;
    volatile const uint32_t RCGCGPIOD      :1;
    volatile const uint32_t RCGCGPIOE      :1;
    volatile const uint32_t RCGCGPIOF      :1;
    const    uint32_t       reserved   :7;
    volatile const uint32_t RCGCUDMA       :1;
    const    uint32_t       reserved1  :2;
    volatile const uint32_t RCGCUSB0       :1;
    const    uint32_t       reserved2  :15;
}RCGC2_TypeDef;/*0x00000108*/

typedef volatile struct
{
    const    uint32_t       reserved  :3;
    volatile const uint32_t SCGCWDT0      :1;
    const    uint32_t       reserved1 :2;
    volatile const uint32_t SCGCHIB       :1;
    const    uint32_t       reserved2 :9;
    volatile const uint32_t SCGCADC0      :1;
    volatile const uint32_t SCGCADC1      :1;
    const    uint32_t       reserved3 :2;
    volatile const uint32_t SCGCPWM0      :1;
    const    uint32_t       reserved4 :3;
    volatile const uint32_t SCGCCAN0      :1;
    volatile const uint32_t SCGCCAN1      :1;
    const    uint32_t       reserved5 :2;
    volatile const uint32_t SCGCWDT1      :1;
    const    uint32_t       reserved6 :3;
}SCGC0_TypeDef;/*0x00000110*/

typedef volatile struct
{
    volatile const uint32_t SCGCUART0      :1;
    volatile const uint32_t SCGCUART1      :1;
    volatile const uint32_t SCGCUART2      :1;
    const    uint32_t       reserved   :1;
    volatile const uint32_t SCGCSSI0       :1;
    volatile const uint32_t SCGCSSI1       :1;
    const    uint32_t       reserved1  :2;
    volatile const uint32_t SCGCQEI0       :1;
    volatile const uint32_t SCGCQEI1       :1;
    const    uint32_t       reserved2  :2;
    volatile const uint32_t SCGCI2C0       :1;
    const    uint32_t       reserved3  :1;
    volatile const uint32_t SCGCI2C1       :1;
    const    uint32_t       reserved4  :1;
    volatile const uint32_t SCGCTIMER0     :1;
    volatile const uint32_t SCGCTIMER1     :1;
    volatile const uint32_t SCGCTIMER2     :1;
    volatile const uint32_t SCGCTIMER3     :1;
    const    uint32_t       reserved5  :4;
    volatile const uint32_t SCGCCOMP0      :1;
    volatile const uint32_t SCGCCOMP1      :1;
    const    uint32_t       reserved6  :6;
}SCGC1_TypeDef;/*0x00000104*/

typedef volatile struct
{
    volatile const uint32_t SCGCGPIOA      :1;
    volatile const uint32_t SCGCGPIOB      :1;
    volatile const uint32_t SCGCGPIOC      :1;
    volatile const uint32_t SCGCGPIOD      :1;
    volatile const uint32_t SCGCGPIOE      :1;
    volatile const uint32_t SCGCGPIOF      :1;
    const    uint32_t       reserved   :7;
    volatile const uint32_t SCGCUDMA       :1;
    const    uint32_t       reserved1  :2;
    volatile const uint32_t SCGCUSB0       :1;
    const    uint32_t       reserved2  :15;
}SCGC2_TypeDef;/*0x00000108*/

typedef volatile struct
{
    const    uint32_t       reserved  :3;
    volatile const uint32_t DCGCWDT0      :1;
    const    uint32_t       reserved1 :2;
    volatile const uint32_t DCGCHIB       :1;
    const    uint32_t       reserved2 :9;
    volatile const uint32_t DCGCADC0      :1;
    volatile const uint32_t DCGCADC1      :1;
    const    uint32_t       reserved3 :2;
    volatile const uint32_t DCGCPWM0      :1;
    const    uint32_t       reserved4 :3;
    volatile const uint32_t DCGCCAN0      :1;
    volatile const uint32_t DCGCCAN1      :1;
    const    uint32_t       reserved5 :2;
    volatile const uint32_t DCGCWDT1      :1;
    const    uint32_t       reserved6 :3;
}DCGC0_TypeDef;/*0x00000120*/

typedef volatile struct
{
    volatile const uint32_t DCGCUART0      :1;
    volatile const uint32_t DCGCUART1      :1;
    volatile const uint32_t DCGCUART2      :1;
    const    uint32_t       reserved   :1;
    volatile const uint32_t DCGCSSI0       :1;
    volatile const uint32_t DCGCSSI1       :1;
    const    uint32_t       reserved1  :2;
    volatile const uint32_t DCGCQEI0       :1;
    volatile const uint32_t DCGCQEI1       :1;
    const    uint32_t       reserved2  :2;
    volatile const uint32_t DCGCI2C0       :1;
    const    uint32_t       reserved3  :1;
    volatile const uint32_t DCGCI2C1       :1;
    const    uint32_t       reserved4  :1;
    volatile const uint32_t DCGCTIMER0     :1;
    volatile const uint32_t DCGCTIMER1     :1;
    volatile const uint32_t DCGCTIMER2     :1;
    volatile const uint32_t DCGCTIMER3     :1;
    const    uint32_t       reserved5  :4;
    volatile const uint32_t DCGCCOMP0      :1;
    volatile const uint32_t DCGCCOMP1      :1;
    const    uint32_t       reserved6  :6;
}DCGC1_TypeDef;/*0x00000124*/

typedef volatile struct
{
    volatile const uint32_t DCGCGPIOA      :1;
    volatile const uint32_t DCGCGPIOB      :1;
    volatile const uint32_t DCGCGPIOC      :1;
    volatile const uint32_t DCGCGPIOD      :1;
    volatile const uint32_t DCGCGPIOE      :1;
    volatile const uint32_t DCGCGPIOF      :1;
    const    uint32_t       reserved   :7;
    volatile const uint32_t DCGCUDMA       :1;
    const    uint32_t       reserved1  :2;
    volatile const uint32_t DCGCUSB0       :1;
    const    uint32_t       reserved2  :15;
}DCGC2_TypeDef;/*0x00000128*/

typedef volatile struct
{
    volatile const uint32_t DCADC0DC0        :1;
    volatile const uint32_t DCADC0DC1        :1;
    volatile const uint32_t DCADC0DC2        :1;
    volatile const uint32_t DCADC0DC3        :1;
    volatile const uint32_t DCADC0DC4        :1;
    volatile const uint32_t DCADC0DC5        :1;
    volatile const uint32_t DCADC0DC6        :1;
    volatile const uint32_t DCADC0DC7        :1;
    const    uint32_t       reserved       :8;
    volatile const uint32_t DCADC1DC0        :1;
    volatile const uint32_t DCADC1DC1        :1;
    volatile const uint32_t DCADC1DC2        :1;
    volatile const uint32_t DCADC1DC3        :1;
    volatile const uint32_t DCADC1DC4        :1;
    volatile const uint32_t DCADC1DC5        :1;
    volatile const uint32_t DCADC1DC6        :1;
    volatile const uint32_t DCADC1DC7        :1;
    const    uint32_t       reserved1      :8;
}DC9_TypeDef;/*0x00000190*/

typedef volatile struct
{
    volatile const uint32_t FWB            :1;
    const    uint32_t       reserved       :31;
}NVMSTAT_TypeDef;/*0x000001A0*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTREGISTER_H_ */
