/**
 *
 * @file SYSCTL_StructRegister_Bitbanding.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTREGISTER_BITBANDING_H_

#include <xUtils/Standard/Standard.h>

typedef volatile struct
{
    volatile const  uint32_t MINOR[8];
    volatile const  uint32_t MAJOR[8];
    volatile const  uint32_t CLASS[8];
    const           uint32_t reserved[4];
    volatile const  uint32_t VER[3];
    const           uint32_t reserved1;
}BITBANDING_DID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t QUAL      [2];
    volatile const uint32_t ROHS      ;
    volatile const uint32_t PKG       [2];
    volatile const uint32_t TEMP      [3];
    const          uint32_t reserved  [5];
    volatile const uint32_t PINCOUNT  [3];
    volatile const uint32_t PARTNO    [8];
    volatile const uint32_t FAM       [4];
    volatile const uint32_t VER       [4];
}BITBANDING_DID1_TypeDef;

typedef volatile struct
{
    const       uint32_t reserved   ;
    volatile    uint32_t BOR1       ;
    volatile    uint32_t BOR0       ;
    const       uint32_t reserved1  [29];
}BITBANDING_PBORCTL_TypeDef;

typedef volatile struct
{
    const           uint32_t reserved   ;
    volatile const  uint32_t BOR1RIS    ;
    const           uint32_t reserved1  ;
    volatile const  uint32_t MOFRIS     ;
    const           uint32_t reserved2  [2];
    volatile const  uint32_t PLLLRIS    ;
    volatile const  uint32_t USBPLLLRIS ;
    volatile const  uint32_t MOSCPUPRIS ;
    const           uint32_t reserved3  ;
    volatile const  uint32_t VDDARIS    ;
    volatile const  uint32_t BOR0RIS    ;
    const           uint32_t reserved4  [20];
}BITBANDING_RIS_TypeDef;

typedef volatile struct
{
    const       uint32_t reserved   ;
    volatile    uint32_t BOR1IM     ;
    const       uint32_t reserved1  ;
    volatile    uint32_t MOFIM      ;
    const       uint32_t reserved2  [2];
    volatile    uint32_t PLLLIM     ;
    volatile    uint32_t USBPLLLIM  ;
    volatile    uint32_t MOSCPUPIM  ;
    const       uint32_t reserved3  ;
    volatile    uint32_t VDDAIM     ;
    volatile    uint32_t BOR0IM     ;
    const       uint32_t reserved4  [20];
}BITBANDING_IMC_TypeDef;

typedef volatile struct
{
    const       uint32_t reserved   ;
    volatile    uint32_t BOR1MIS    ;
    const       uint32_t reserved1  ;
    volatile    uint32_t MOFMIS     ;
    const       uint32_t reserved2  [2];
    volatile    uint32_t PLLLMIS    ;
    volatile    uint32_t USBPLLLMIS ;
    volatile    uint32_t MOSCPUPMIS ;
    const       uint32_t reserved3  ;
    volatile    uint32_t VDDAMIS    ;
    volatile    uint32_t BOR0MIS    ;
    const       uint32_t reserved4  [20];
}BITBANDING_MISC_TypeDef;

typedef volatile struct
{
    volatile    uint32_t EXT      ;
    volatile    uint32_t POR      ;
    volatile    uint32_t BOR      ;
    volatile    uint32_t WDT0_     ;
    volatile    uint32_t SW       ;
    volatile    uint32_t WDT1_     ;
    const       uint32_t reserved [10];
    volatile    uint32_t MOSCFAIL ;
    const       uint32_t reserved1[15];
}BITBANDING_RESC_TypeDef;

typedef volatile struct
{
    volatile    uint32_t MOSCDIS        ;
    const       uint32_t reserved       [3];
    volatile    uint32_t OSCSRC         [2];
    volatile    uint32_t XTAL           [5];
    volatile    uint32_t BYPASS         ;
    const       uint32_t reserved1      ;
    volatile    uint32_t PWRDN          ;
    const       uint32_t reserved2      [3];
    volatile    uint32_t PWMDIV         [3];
    volatile    uint32_t USEPWMDIV      ;
    const       uint32_t reserved3      ;
    volatile    uint32_t USESYSDIV      ;
    volatile    uint32_t SYSDIV         [4];
    volatile    uint32_t ACG            ;
    const       uint32_t reserved4      [4];
}BITBANDING_RCC_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved  [4];
    volatile uint32_t OSCSRC2   [3];
    const    uint32_t reserved1 [4];
    volatile uint32_t BYPASS2   ;
    const    uint32_t reserved2 ;
    volatile uint32_t PWRDN2    ;
    volatile uint32_t USBPWRDN  ;
    const    uint32_t reserved3 [7];
    volatile uint32_t SYSDIV2LSB;
    volatile uint32_t SYSDIV2   [6];
    const    uint32_t reserved4 ;
    volatile uint32_t DIV400    ;
    volatile uint32_t USERCC2   ;
}BITBANDING_RCC2_TypeDef;

typedef volatile struct
{
    volatile uint32_t PORTA        ;
    volatile uint32_t PORTB        ;
    volatile uint32_t PORTC        ;
    volatile uint32_t PORTD        ;
    volatile uint32_t PORTE        ;
    volatile uint32_t PORTF        ;
    const    uint32_t reserved     [26];
}BITBANDING_GPIOHBCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t CVAL         ;
    volatile uint32_t MOSCIM       ;
    volatile uint32_t NOXTAL       ;
    const    uint32_t reserved     [29];
}BITBANDING_MOSCCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t BA            ;
    const    uint32_t reserved      [31];
}BITBANDING_RMCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t READ_ENABLE0   ;
    volatile uint32_t READ_ENABLE1   ;
    volatile uint32_t READ_ENABLE2   ;
    volatile uint32_t READ_ENABLE3   ;
    volatile uint32_t READ_ENABLE4   ;
    volatile uint32_t READ_ENABLE5   ;
    volatile uint32_t READ_ENABLE6   ;
    volatile uint32_t READ_ENABLE7   ;
    volatile uint32_t READ_ENABLE8   ;
    volatile uint32_t READ_ENABLE9   ;
    volatile uint32_t READ_ENABLE10  ;
    volatile uint32_t READ_ENABLE11  ;
    volatile uint32_t READ_ENABLE12  ;
    volatile uint32_t READ_ENABLE13  ;
    volatile uint32_t READ_ENABLE14  ;
    volatile uint32_t READ_ENABLE15  ;
    volatile uint32_t READ_ENABLE16  ;
    volatile uint32_t READ_ENABLE17  ;
    volatile uint32_t READ_ENABLE18  ;
    volatile uint32_t READ_ENABLE19  ;
    volatile uint32_t READ_ENABLE20  ;
    volatile uint32_t READ_ENABLE21  ;
    volatile uint32_t READ_ENABLE22  ;
    volatile uint32_t READ_ENABLE23  ;
    volatile uint32_t READ_ENABLE24  ;
    volatile uint32_t READ_ENABLE25  ;
    volatile uint32_t READ_ENABLE26  ;
    volatile uint32_t READ_ENABLE27  ;
    volatile uint32_t READ_ENABLE28  ;
    volatile uint32_t READ_ENABLE29  ;
    volatile uint32_t READ_ENABLE30  ;
    volatile uint32_t READ_ENABLE31  ;
}BITBANDING_FMPRE_TypeDef;

typedef volatile struct
{
    volatile uint32_t PROG_ENABLE0   ;
    volatile uint32_t PROG_ENABLE1   ;
    volatile uint32_t PROG_ENABLE2   ;
    volatile uint32_t PROG_ENABLE3   ;
    volatile uint32_t PROG_ENABLE4   ;
    volatile uint32_t PROG_ENABLE5   ;
    volatile uint32_t PROG_ENABLE6   ;
    volatile uint32_t PROG_ENABLE7   ;
    volatile uint32_t PROG_ENABLE8   ;
    volatile uint32_t PROG_ENABLE9   ;
    volatile uint32_t PROG_ENABLE10  ;
    volatile uint32_t PROG_ENABLE11  ;
    volatile uint32_t PROG_ENABLE12  ;
    volatile uint32_t PROG_ENABLE13  ;
    volatile uint32_t PROG_ENABLE14  ;
    volatile uint32_t PROG_ENABLE15  ;
    volatile uint32_t PROG_ENABLE16  ;
    volatile uint32_t PROG_ENABLE17  ;
    volatile uint32_t PROG_ENABLE18  ;
    volatile uint32_t PROG_ENABLE19  ;
    volatile uint32_t PROG_ENABLE20  ;
    volatile uint32_t PROG_ENABLE21  ;
    volatile uint32_t PROG_ENABLE22  ;
    volatile uint32_t PROG_ENABLE23  ;
    volatile uint32_t PROG_ENABLE24  ;
    volatile uint32_t PROG_ENABLE25  ;
    volatile uint32_t PROG_ENABLE26  ;
    volatile uint32_t PROG_ENABLE27  ;
    volatile uint32_t PROG_ENABLE28  ;
    volatile uint32_t PROG_ENABLE29  ;
    volatile uint32_t PROG_ENABLE30  ;
    volatile uint32_t PROG_ENABLE31  ;
}BITBANDING_FMPPE_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved      ;
    volatile uint32_t PIOSCPD       ;
    const    uint32_t reserved1     [2];
    volatile uint32_t DSOSCSRC      [3];
    const    uint32_t reserved2     [16];
    volatile uint32_t DSDIVORIDE    [6];
    const    uint32_t reserved3     [3];
}BITBANDING_DSLPCLKCFG_TypeDef;

typedef volatile struct
{
    volatile const  uint32_t FPU_         ;
    const           uint32_t reserved    [7];
    volatile const  uint32_t FLASHLPM    ;
    const           uint32_t reserved1   ;
    volatile const  uint32_t SRAMLPM     ;
    volatile const  uint32_t SRAMSM      ;
    volatile const  uint32_t PIOSCPDE    ;
    const           uint32_t reserved2   [19];
}BITBANDING_SYSPROP_TypeDef;

typedef volatile struct
{
    volatile    uint32_t UT         [7];
    const       uint32_t reserved   ;
    volatile    uint32_t UPDATE     ;
    volatile    uint32_t CAL        ;
    const       uint32_t reserved1  [21];
    volatile    uint32_t UTEN       ;
}BITBANDING_PIOSCCAL_TypeDef;

typedef volatile struct
{
    volatile const  uint32_t CT         [7];
    const           uint32_t reserved   ;
    volatile const  uint32_t RESULT     [2];
    const           uint32_t reserved1  [6];
    volatile const  uint32_t DT         [7];
    const           uint32_t reserved2  [9];
}BITBANDING_PIOSCSTAT_TypeDef;

typedef volatile struct
{
    volatile const  uint32_t MINT          [10];
    volatile const  uint32_t MFRAC         [10];
    const           uint32_t reserved      [12];
}BITBANDING_PLLFREQ0_TypeDef;

typedef volatile struct
{
    volatile uint32_t N             [5];
    const    uint32_t reserved      [3];
    volatile uint32_t Q             [5];
    const    uint32_t reserved1     [19];
}BITBANDING_PLLFREQ1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t LOCK          ;
    const          uint32_t reserved      [31];
}BITBANDING_PLLSTAT_TypeDef;

typedef volatile struct
{
    volatile uint32_t SRAMPM        [2];
    const    uint32_t reserved      [2];
    volatile uint32_t FLASHPM       [2];
    const    uint32_t reserved1     [26];
}BITBANDING_SLSRWRCFG_TypeDef;

typedef volatile struct
{
    volatile uint32_t SRAMPM        [2];
    const    uint32_t reserved      [2];
    volatile uint32_t FLASHPM       [2];
    const    uint32_t reserved1     [26];
}BITBANDING_DSLSRWRCFG_TypeDef;

typedef volatile struct
{
    volatile    uint32_t VLDO          [8];
    const       uint32_t reserved      [23];
    volatile    uint32_t VADJEN        ;
}BITBANDING_LDOSPCTL_TypeDef;

typedef volatile struct
{
    volatile const uint32_t NOPLL         [8];
    volatile const uint32_t WITHPLL       [8];
    const          uint32_t reserved      [16];
}BITBANDING_LDOSPCAL_TypeDef;

typedef volatile struct
{
    volatile    uint32_t VLDO          [8];
    const       uint32_t reserved      [23];
    volatile    uint32_t VADJEN        ;
}BITBANDING_LDODPCTL_TypeDef;

typedef volatile struct
{
    volatile const uint32_t KHZ30         [8];
    volatile const uint32_t WITHPLL       [8];
    const          uint32_t reserved      [16];
}BITBANDING_LDODPCAL_TypeDef;

typedef volatile struct
{
    volatile const uint32_t SPDERR   ;
    volatile const uint32_t FPDERR   ;
    volatile const uint32_t SRDERR   ;
    volatile const uint32_t LDMINERR ;
    volatile const uint32_t LSMINERR ;
    const          uint32_t reserved ;
    volatile const uint32_t LMAXERR  ;
    volatile const uint32_t SRDW     ;
    const          uint32_t reserved1[8];
    volatile const uint32_t PRACT    ;
    volatile const uint32_t LOWPWR   ;
    volatile const uint32_t FLASHLP  ;
    volatile const uint32_t LDOUA    ;
    const          uint32_t reserved2[12];
}BITBANDING_SDPMST_TypeDef;

typedef volatile struct
{
    volatile const uint32_t DBG0        ;
    volatile const uint32_t DBG1        ;
    const          uint32_t reserved    [2];
    volatile const uint32_t KEY         ;
    const          uint32_t reserved1   [3];
    volatile const uint32_t EN          ;
    volatile const uint32_t POL         ;
    volatile const uint32_t PIN         [3];
    volatile const uint32_t PORT        [3];
    const          uint32_t reserved2   [15];
    volatile const uint32_t NW          ;
}BITBANDING_BOOTCFG_TypeDef;

typedef volatile struct
{
    volatile const uint32_t DATA        [32];
}BITBANDING_USER_REG_TypeDef;

typedef volatile struct
{
    volatile uint32_t P0   ;
    volatile uint32_t P1   ;
    volatile uint32_t P2   ;
    volatile uint32_t P3   ;
    volatile uint32_t P4   ;
    volatile uint32_t P5   ;
    volatile uint32_t P6   ;
    volatile uint32_t P7   ;
    volatile uint32_t P8   ;
    volatile uint32_t P9   ;
    volatile uint32_t P10   ;
    volatile uint32_t P11   ;
    volatile uint32_t P12   ;
    volatile uint32_t P13   ;
    volatile uint32_t P14   ;
    volatile uint32_t P15   ;
    volatile uint32_t P16   ;
    volatile uint32_t P17   ;
    volatile uint32_t P18   ;
    volatile uint32_t P19   ;
    volatile uint32_t P20   ;
    volatile uint32_t P21   ;
    volatile uint32_t P22   ;
    volatile uint32_t P23   ;
    volatile uint32_t P24   ;
    volatile uint32_t P25   ;
    volatile uint32_t P26   ;
    volatile uint32_t P27   ;
    volatile uint32_t P28   ;
    volatile uint32_t P29   ;
    volatile uint32_t P30   ;
    volatile uint32_t P31   ;
}BITBANDING_PERIPHERAL_TypeDef;

typedef volatile struct
{
    volatile uint32_t WDT0_   ;
    volatile uint32_t WDT1_   ;
    const    uint32_t reserved[30];
}BITBANDING_PERIPHERAL_WD_TypeDef;

typedef volatile struct
{
    volatile uint32_t TIMER0_   ;
    volatile uint32_t TIMER1_   ;
    volatile uint32_t TIMER2_   ;
    volatile uint32_t TIMER3_   ;
    volatile uint32_t TIMER4_   ;
    volatile uint32_t TIMER5_   ;
    const    uint32_t reserved  [26];
}BITBANDING_PERIPHERAL_TIMER_TypeDef;

typedef volatile struct
{
    volatile uint32_t GPIOA_   ;
    volatile uint32_t GPIOB_   ;
    volatile uint32_t GPIOC_   ;
    volatile uint32_t GPIOD_   ;
    volatile uint32_t GPIOE_   ;
    volatile uint32_t GPIOF_   ;
    volatile uint32_t GPIOG_   ;
    volatile uint32_t GPIOH_   ;
    volatile uint32_t GPIOJ_   ;
    volatile uint32_t GPIOK_   ;
    volatile uint32_t GPIOL_   ;
    volatile uint32_t GPIOM_   ;
    volatile uint32_t GPION_   ;
    volatile uint32_t GPIOP_   ;
    volatile uint32_t GPIOQ_   ;
    const    uint32_t reserved [17];
}BITBANDING_PERIPHERAL_GPIO_TypeDef;

typedef volatile struct
{
    volatile uint32_t UDMA_      ;
    const    uint32_t reserved  [31];
}BITBANDING_PERIPHERAL_DMA_TypeDef;

typedef volatile struct
{
    volatile uint32_t HIB_      ;
    const    uint32_t reserved  [31];
}BITBANDING_PERIPHERAL_HIB_TypeDef;

typedef volatile struct
{
    volatile uint32_t UART0_    ;
    volatile uint32_t UART1_    ;
    volatile uint32_t UART2_    ;
    volatile uint32_t UART3_    ;
    volatile uint32_t UART4_    ;
    volatile uint32_t UART5_    ;
    volatile uint32_t UART6_    ;
    volatile uint32_t UART7_    ;
    const    uint32_t reserved [24];
}BITBANDING_PERIPHERAL_UART_TypeDef;

typedef volatile struct
{
    volatile uint32_t SSI0_    ;
    volatile uint32_t SSI1_    ;
    volatile uint32_t SSI2_    ;
    volatile uint32_t SSI3_    ;
    const    uint32_t reserved [28];
}BITBANDING_PERIPHERAL_SSI_TypeDef;

typedef volatile struct
{
    volatile uint32_t I2C0_    ;
    volatile uint32_t I2C1_    ;
    volatile uint32_t I2C2_    ;
    volatile uint32_t I2C3_    ;
    volatile uint32_t I2C4_    ;
    volatile uint32_t I2C5_    ;
    const    uint32_t reserved [26];
}BITBANDING_PERIPHERAL_I2C_TypeDef;

typedef volatile struct
{
    volatile uint32_t USB_       ;
    const    uint32_t reserved  [31];
}BITBANDING_PERIPHERAL_USB_TypeDef;

typedef volatile struct
{
    volatile uint32_t CAN0_    ;
    volatile uint32_t CAN1_    ;
    const    uint32_t reserved [30];
}BITBANDING_PERIPHERAL_CAN_TypeDef;

typedef volatile struct
{
    volatile uint32_t ADC0_    ;
    volatile uint32_t ADC1_    ;
    const    uint32_t reserved[30];
}BITBANDING_PERIPHERAL_ADC_TypeDef;

typedef volatile struct
{
    volatile uint32_t ACMP    ;
    const    uint32_t reserved[31];
}BITBANDING_PERIPHERAL_ACMP_TypeDef;

typedef volatile struct
{
    volatile uint32_t PWM0_    ;
    volatile uint32_t PWM1_    ;
    const    uint32_t reserved[30];
}BITBANDING_PERIPHERAL_PWM_TypeDef;

typedef volatile struct
{
    volatile uint32_t QEI0_    ;
    volatile uint32_t QEI1_    ;
    const    uint32_t reserved[30];
}BITBANDING_PERIPHERAL_QEI_TypeDef;

typedef volatile struct
{
    volatile uint32_t EEPROM_ ;
    const    uint32_t reserved[31];
}BITBANDING_PERIPHERAL_EEPROM_TypeDef;

typedef volatile struct
{
    volatile uint32_t WTIMER0_   ;
    volatile uint32_t WTIMER1_   ;
    volatile uint32_t WTIMER2_   ;
    volatile uint32_t WTIMER3_   ;
    volatile uint32_t WTIMER4_   ;
    volatile uint32_t WTIMER5_   ;
    const    uint32_t reserved  [26];
}BITBANDING_PERIPHERAL_WTIMER_TypeDef;

typedef volatile struct
{
    volatile const uint32_t SRAMSZ    [16];
    volatile const uint32_t FLASHSZ   [16];
}BITBANDING_DC0_TypeDef;/*0x00000008*/

typedef volatile struct
{
    volatile const uint32_t DCJTAG      ;
    volatile const uint32_t DCSWD       ;
    volatile const uint32_t DCSWO       ;
    volatile const uint32_t DCWDT0      ;
    volatile const uint32_t DCPLL       ;
    volatile const uint32_t DCTEMPSNS   ;
    volatile const uint32_t DCHIB       ;
    volatile const uint32_t DCMPU       ;
    volatile const uint32_t DCMAXADC0SPD[2];
    volatile const uint32_t DCMAXADC1SPD[2];
    volatile const uint32_t DCMINSYSDIV [4];
    volatile const uint32_t DCADC0      ;
    volatile const uint32_t DCADC1      ;
    const    uint32_t       reserved    [2];
    volatile const uint32_t DCPWM0      ;
    volatile const uint32_t DCPWM1      ;
    const    uint32_t       reserved1   [2];
    volatile const uint32_t DCCAN0      ;
    volatile const uint32_t DCCAN1      ;
    const    uint32_t       reserved2   [2];
    volatile const uint32_t DCWDT1      ;
    const    uint32_t       reserved3   [3];
}BITBANDING_DC1_TypeDef;/*0x00000010*/

typedef volatile struct
{
    volatile const uint32_t DCUART0      ;
    volatile const uint32_t DCUART1      ;
    volatile const uint32_t DCUART2      ;
    const    uint32_t       reserved     ;
    volatile const uint32_t DCSSI0       ;
    volatile const uint32_t DCSSI1       ;
    const    uint32_t       reserved1    [2];
    volatile const uint32_t DCQEI0       ;
    volatile const uint32_t DCQEI1       ;
    const    uint32_t       reserved2    [2];
    volatile const uint32_t DCI2C0       ;
    volatile const uint32_t DCI2C0HS     ;
    volatile const uint32_t DCI2C1       ;
    volatile const uint32_t DCI2C1HS     ;
    volatile const uint32_t DCTIMER0     ;
    volatile const uint32_t DCTIMER1     ;
    volatile const uint32_t DCTIMER2     ;
    volatile const uint32_t DCTIMER3     ;
    const    uint32_t       reserved3    [4];
    volatile const uint32_t DCCOMP0      ;
    volatile const uint32_t DCCOMP1      ;
    volatile const uint32_t DCCOMP2      ;
    const    uint32_t       reserved4    ;
    volatile const uint32_t DCI2S0       ;
    const    uint32_t       reserved5    ;
    volatile const uint32_t DCEPI0       ;
    const    uint32_t       reserved6    ;
}BITBANDING_DC2_TypeDef;/*0x00000014*/

typedef volatile struct
{
    volatile const uint32_t DCPWM0       ;
    volatile const uint32_t DCPWM1       ;
    volatile const uint32_t DCPWM2       ;
    volatile const uint32_t DCPWM3       ;
    volatile const uint32_t DCPWM4       ;
    volatile const uint32_t DCPWM5       ;
    volatile const uint32_t DCC0MINUS    ;
    volatile const uint32_t DCC0PLUS     ;
    volatile const uint32_t DCC0O        ;
    volatile const uint32_t DCC1MINUS    ;
    volatile const uint32_t DCC1PLUS     ;
    volatile const uint32_t DCC1O        ;
    volatile const uint32_t DCC2MINUS    ;
    volatile const uint32_t DCC2PLUS     ;
    volatile const uint32_t DCC2O        ;
    volatile const uint32_t DCPWMFAULT   ;
    volatile const uint32_t DCADC0AIN0   ;
    volatile const uint32_t DCADC0AIN1   ;
    volatile const uint32_t DCADC0AIN2   ;
    volatile const uint32_t DCADC0AIN3   ;
    volatile const uint32_t DCADC0AIN4   ;
    volatile const uint32_t DCADC0AIN5   ;
    volatile const uint32_t DCADC0AIN6   ;
    volatile const uint32_t DCADC0AIN7   ;
    volatile const uint32_t DCCCP0       ;
    volatile const uint32_t DCCCP1       ;
    volatile const uint32_t DCCCP2       ;
    volatile const uint32_t DCCCP3       ;
    volatile const uint32_t DCCCP4       ;
    volatile const uint32_t DCCCP5       ;
    const    uint32_t       reserved     ;
    volatile const uint32_t DCHZ32       ;
}BITBANDING_DC3_TypeDef;/*0x00000018*/

typedef volatile struct
{
    volatile const uint32_t DCGPIOA      ;
    volatile const uint32_t DCGPIOB      ;
    volatile const uint32_t DCGPIOC      ;
    volatile const uint32_t DCGPIOD      ;
    volatile const uint32_t DCGPIOE      ;
    volatile const uint32_t DCGPIOF      ;
    volatile const uint32_t DCGPIOG      ;
    volatile const uint32_t DCGPIOH      ;
    volatile const uint32_t DCGPIOJ      ;
    const    uint32_t       reserved     [3];
    volatile const uint32_t DCROM        ;
    volatile const uint32_t DCUDMA       ;
    volatile const uint32_t DCCCP6       ;
    volatile const uint32_t DCCCP7       ;
    const    uint32_t       reserved1    [2];
    volatile const uint32_t DCPICAL      ;
    const    uint32_t       reserved2    [5];
    volatile const uint32_t DCE1588      ;
    const    uint32_t       reserved3    [3];
    volatile const uint32_t DCEMAC0      ;
    const    uint32_t       reserved4    ;
    volatile const uint32_t DCEPHY0      ;
    const    uint32_t       reserved5    ;
}BITBANDING_DC4_TypeDef;/*0x0000001C*/

typedef volatile struct
{
    volatile const uint32_t DCPWM0      ;
    volatile const uint32_t DCPWM1      ;
    volatile const uint32_t DCPWM2      ;
    volatile const uint32_t DCPWM3      ;
    volatile const uint32_t DCPWM4      ;
    volatile const uint32_t DCPWM5      ;
    volatile const uint32_t DCPWM6      ;
    volatile const uint32_t DCPWM7      ;
    const    uint32_t       reserved    [12];
    volatile const uint32_t DCPWMESYNC  ;
    volatile const uint32_t DCPWMEFLT   ;
    const    uint32_t       reserved1   [2];
    volatile const uint32_t DCPWMFAULT0 ;
    volatile const uint32_t DCPWMFAULT1 ;
    volatile const uint32_t DCPWMFAULT2 ;
    volatile const uint32_t DCPWMFAULT3 ;
    const    uint32_t       reserved2   [4];
}BITBANDING_DC5_TypeDef;/*0x00000020*/

typedef volatile struct
{
    volatile const uint32_t DCUSB0      [2];
    const    uint32_t       reserved    [2];
    volatile const uint32_t DCUSB0PHY   ;
    const    uint32_t       reserved1   [27];
}BITBANDING_DC6_TypeDef;/*0x00000024*/

typedef volatile struct
{
    volatile const uint32_t DCDMACH0        ;
    volatile const uint32_t DCDMACH1        ;
    volatile const uint32_t DCDMACH2        ;
    volatile const uint32_t DCDMACH3        ;
    volatile const uint32_t DCDMACH4        ;
    volatile const uint32_t DCDMACH5        ;
    volatile const uint32_t DCDMACH6        ;
    volatile const uint32_t DCDMACH7        ;
    volatile const uint32_t DCDMACH8        ;
    volatile const uint32_t DCDMACH9        ;
    volatile const uint32_t DCDMACH10       ;
    volatile const uint32_t DCDMACH11       ;
    volatile const uint32_t DCDMACH12       ;
    volatile const uint32_t DCDMACH13       ;
    volatile const uint32_t DCDMACH14       ;
    volatile const uint32_t DCDMACH15       ;
    volatile const uint32_t DCDMACH16       ;
    volatile const uint32_t DCDMACH17       ;
    volatile const uint32_t DCDMACH18       ;
    volatile const uint32_t DCDMACH19       ;
    volatile const uint32_t DCDMACH20       ;
    volatile const uint32_t DCDMACH21       ;
    volatile const uint32_t DCDMACH22       ;
    volatile const uint32_t DCDMACH23       ;
    volatile const uint32_t DCDMACH24       ;
    volatile const uint32_t DCDMACH25       ;
    volatile const uint32_t DCDMACH26       ;
    volatile const uint32_t DCDMACH27       ;
    volatile const uint32_t DCDMACH28       ;
    volatile const uint32_t DCDMACH29       ;
    volatile const uint32_t DCDMACH30       ;
    const    uint32_t       reserved        ;
}BITBANDING_DC7_TypeDef;/*0x00000028*/

typedef volatile struct
{
    volatile const uint32_t DCADC0AIN0        ;
    volatile const uint32_t DCADC0AIN1        ;
    volatile const uint32_t DCADC0AIN2        ;
    volatile const uint32_t DCADC0AIN3        ;
    volatile const uint32_t DCADC0AIN4        ;
    volatile const uint32_t DCADC0AIN5        ;
    volatile const uint32_t DCADC0AIN6        ;
    volatile const uint32_t DCADC0AIN7        ;
    volatile const uint32_t DCADC0AIN8        ;
    volatile const uint32_t DCADC0AIN9        ;
    volatile const uint32_t DCADC0AIN10       ;
    volatile const uint32_t DCADC0AIN11       ;
    volatile const uint32_t DCADC0AIN12       ;
    volatile const uint32_t DCADC0AIN13       ;
    volatile const uint32_t DCADC0AIN14       ;
    volatile const uint32_t DCADC0AIN15       ;
    volatile const uint32_t DCADC1AIN0        ;
    volatile const uint32_t DCADC1AIN1        ;
    volatile const uint32_t DCADC1AIN2        ;
    volatile const uint32_t DCADC1AIN3        ;
    volatile const uint32_t DCADC1AIN4        ;
    volatile const uint32_t DCADC1AIN5        ;
    volatile const uint32_t DCADC1AIN6        ;
    volatile const uint32_t DCADC1AIN7        ;
    volatile const uint32_t DCADC1AIN8        ;
    volatile const uint32_t DCADC1AIN9        ;
    volatile const uint32_t DCADC1AIN10       ;
    volatile const uint32_t DCADC1AIN11       ;
    volatile const uint32_t DCADC1AIN12       ;
    volatile const uint32_t DCADC1AIN13       ;
    volatile const uint32_t DCADC1AIN14       ;
    volatile const uint32_t DCADC1AIN15       ;
}BITBANDING_DC8_TypeDef;/*0x0000002C*/

typedef volatile struct
{
    const    uint32_t       reserved  [3];
    volatile const uint32_t SRCRWDT0      ;
    const    uint32_t       reserved1 [2];
    volatile const uint32_t SRCRHIB       ;
    const    uint32_t       reserved2 [9];
    volatile const uint32_t SRCRADC0      ;
    volatile const uint32_t SRCRADC1      ;
    const    uint32_t       reserved3 [2];
    volatile const uint32_t SRCRPWM0      ;
    const    uint32_t       reserved4 [3];
    volatile const uint32_t SRCRCAN0      ;
    volatile const uint32_t SRCRCAN1      ;
    const    uint32_t       reserved5 [2];
    volatile const uint32_t SRCRWDT1      ;
    const    uint32_t       reserved6 [3];
}BITBANDING_SRCR0_TypeDef;/*0x00000040*/

typedef volatile struct
{
    volatile const uint32_t SRCRUART0      ;
    volatile const uint32_t SRCRUART1      ;
    volatile const uint32_t SRCRUART2      ;
    const    uint32_t       reserved   ;
    volatile const uint32_t SRCRSSI0       ;
    volatile const uint32_t SRCRSSI1       ;
    const    uint32_t       reserved1  [2];
    volatile const uint32_t SRCRQEI0       ;
    volatile const uint32_t SRCRQEI1       ;
    const    uint32_t       reserved2  [2];
    volatile const uint32_t SRCRI2C0       ;
    const    uint32_t       reserved3  ;
    volatile const uint32_t SRCRI2C1       ;
    const    uint32_t       reserved4  ;
    volatile const uint32_t SRCRTIMER0     ;
    volatile const uint32_t SRCRTIMER1     ;
    volatile const uint32_t SRCRTIMER2     ;
    volatile const uint32_t SRCRTIMER3     ;
    const    uint32_t       reserved5  [4];
    volatile const uint32_t SRCRCOMP0      ;
    volatile const uint32_t SRCRCOMP1      ;
    const    uint32_t       reserved6  [6];
}BITBANDING_SRCR1_TypeDef;/*0x00000044*/

typedef volatile struct
{
    volatile const uint32_t SRCRGPIOA      ;
    volatile const uint32_t SRCRGPIOB      ;
    volatile const uint32_t SRCRGPIOC      ;
    volatile const uint32_t SRCRGPIOD      ;
    volatile const uint32_t SRCRGPIOE      ;
    volatile const uint32_t SRCRGPIOF      ;
    const    uint32_t       reserved   [7];
    volatile const uint32_t SRCRUDMA       ;
    const    uint32_t       reserved1  [2];
    volatile const uint32_t SRCRUSB0       ;
    const    uint32_t       reserved2  [15];
}BITBANDING_SRCR2_TypeDef;/*0x00000048*/

typedef volatile struct
{
    const    uint32_t       reserved  [3];
    volatile const uint32_t RCGCWDT0      ;
    const    uint32_t       reserved1 [2];
    volatile const uint32_t RCGCHIB       ;
    const    uint32_t       reserved2 ;
    volatile const uint32_t RCGCMAXADC0SPD[2];
    volatile const uint32_t RCGCMAXADC1SPD[2];
    const    uint32_t       reserved3 [4];
    volatile const uint32_t RCGCADC0      ;
    volatile const uint32_t RCGCADC1      ;
    const    uint32_t       reserved5 [2];
    volatile const uint32_t RCGCPWM0      ;
    const    uint32_t       reserved6 [3];
    volatile const uint32_t RCGCCAN0      ;
    volatile const uint32_t RCGCCAN1      ;
    const    uint32_t       reserved7 [2];
    volatile const uint32_t RCGCWDT1      ;
    const    uint32_t       reserved8 [3];
}BITBANDING_RCGC0_TypeDef;/*0x00000100*/

typedef volatile struct
{
    volatile const uint32_t RCGCUART0      ;
    volatile const uint32_t RCGCUART1      ;
    volatile const uint32_t RCGCUART2      ;
    const    uint32_t       reserved   ;
    volatile const uint32_t RCGCSSI0       ;
    volatile const uint32_t RCGCSSI1       ;
    const    uint32_t       reserved1  [2];
    volatile const uint32_t RCGCQEI0       ;
    volatile const uint32_t RCGCQEI1       ;
    const    uint32_t       reserved2  [2];
    volatile const uint32_t RCGCI2C0       ;
    const    uint32_t       reserved3  ;
    volatile const uint32_t RCGCI2C1       ;
    const    uint32_t       reserved4  ;
    volatile const uint32_t RCGCTIMER0     ;
    volatile const uint32_t RCGCTIMER1     ;
    volatile const uint32_t RCGCTIMER2     ;
    volatile const uint32_t RCGCTIMER3     ;
    const    uint32_t       reserved5  [4];
    volatile const uint32_t RCGCCOMP0      ;
    volatile const uint32_t RCGCCOMP1      ;
    const    uint32_t       reserved6  [6];
}BITBANDING_RCGC1_TypeDef;/*0x00000104*/

typedef volatile struct
{
    volatile const uint32_t RCGCGPIOA      ;
    volatile const uint32_t RCGCGPIOB      ;
    volatile const uint32_t RCGCGPIOC      ;
    volatile const uint32_t RCGCGPIOD      ;
    volatile const uint32_t RCGCGPIOE      ;
    volatile const uint32_t RCGCGPIOF      ;
    const    uint32_t       reserved   [7];
    volatile const uint32_t RCGCUDMA       ;
    const    uint32_t       reserved1  [2];
    volatile const uint32_t RCGCUSB0       ;
    const    uint32_t       reserved2  [15];
}BITBANDING_RCGC2_TypeDef;/*0x00000108*/

typedef volatile struct
{
    const    uint32_t       reserved  [3];
    volatile const uint32_t SCGCWDT0      ;
    const    uint32_t       reserved1 [2];
    volatile const uint32_t SCGCHIB       ;
    const    uint32_t       reserved2 [9];
    volatile const uint32_t SCGCADC0      ;
    volatile const uint32_t SCGCADC1      ;
    const    uint32_t       reserved3 [2];
    volatile const uint32_t SCGCPWM0      ;
    const    uint32_t       reserved4 [3];
    volatile const uint32_t SCGCCAN0      ;
    volatile const uint32_t SCGCCAN1      ;
    const    uint32_t       reserved5 [2];
    volatile const uint32_t SCGCWDT1      ;
    const    uint32_t       reserved6 [3];
}BITBANDING_SCGC0_TypeDef;/*0x00000110*/

typedef volatile struct
{
    volatile const uint32_t SCGCUART0      ;
    volatile const uint32_t SCGCUART1      ;
    volatile const uint32_t SCGCUART2      ;
    const    uint32_t       reserved   ;
    volatile const uint32_t SCGCSSI0       ;
    volatile const uint32_t SCGCSSI1       ;
    const    uint32_t       reserved1  [2];
    volatile const uint32_t SCGCQEI0       ;
    volatile const uint32_t SCGCQEI1       ;
    const    uint32_t       reserved2  [2];
    volatile const uint32_t SCGCI2C0       ;
    const    uint32_t       reserved3  ;
    volatile const uint32_t SCGCI2C1       ;
    const    uint32_t       reserved4  ;
    volatile const uint32_t SCGCTIMER0     ;
    volatile const uint32_t SCGCTIMER1     ;
    volatile const uint32_t SCGCTIMER2     ;
    volatile const uint32_t SCGCTIMER3     ;
    const    uint32_t       reserved5  [4];
    volatile const uint32_t SCGCCOMP0      ;
    volatile const uint32_t SCGCCOMP1      ;
    const    uint32_t       reserved6  [6];
}BITBANDING_SCGC1_TypeDef;/*0x00000104*/

typedef volatile struct
{
    volatile const uint32_t SCGCGPIOA      ;
    volatile const uint32_t SCGCGPIOB      ;
    volatile const uint32_t SCGCGPIOC      ;
    volatile const uint32_t SCGCGPIOD      ;
    volatile const uint32_t SCGCGPIOE      ;
    volatile const uint32_t SCGCGPIOF      ;
    const    uint32_t       reserved   [7];
    volatile const uint32_t SCGCUDMA       ;
    const    uint32_t       reserved1  [2];
    volatile const uint32_t SCGCUSB0       ;
    const    uint32_t       reserved2  [15];
}BITBANDING_SCGC2_TypeDef;/*0x00000108*/

typedef volatile struct
{
    const    uint32_t       reserved  [3];
    volatile const uint32_t DCGCWDT0      ;
    const    uint32_t       reserved1 [2];
    volatile const uint32_t DCGCHIB       ;
    const    uint32_t       reserved2 [9];
    volatile const uint32_t DCGCADC0      ;
    volatile const uint32_t DCGCADC1      ;
    const    uint32_t       reserved3 [2];
    volatile const uint32_t DCGCPWM0      ;
    const    uint32_t       reserved4 [3];
    volatile const uint32_t DCGCCAN0      ;
    volatile const uint32_t DCGCCAN1      ;
    const    uint32_t       reserved5 [2];
    volatile const uint32_t DCGCWDT1      ;
    const    uint32_t       reserved6 [3];
}BITBANDING_DCGC0_TypeDef;/*0x00000120*/

typedef volatile struct
{
    volatile const uint32_t DCGCUART0      ;
    volatile const uint32_t DCGCUART1      ;
    volatile const uint32_t DCGCUART2      ;
    const    uint32_t       reserved   ;
    volatile const uint32_t DCGCSSI0       ;
    volatile const uint32_t DCGCSSI1       ;
    const    uint32_t       reserved1  [2];
    volatile const uint32_t DCGCQEI0       ;
    volatile const uint32_t DCGCQEI1       ;
    const    uint32_t       reserved2  [2];
    volatile const uint32_t DCGCI2C0       ;
    const    uint32_t       reserved3  ;
    volatile const uint32_t DCGCI2C1       ;
    const    uint32_t       reserved4  ;
    volatile const uint32_t DCGCTIMER0     ;
    volatile const uint32_t DCGCTIMER1     ;
    volatile const uint32_t DCGCTIMER2     ;
    volatile const uint32_t DCGCTIMER3     ;
    const    uint32_t       reserved5  [4];
    volatile const uint32_t DCGCCOMP0      ;
    volatile const uint32_t DCGCCOMP1      ;
    const    uint32_t       reserved6  [6];
}BITBANDING_DCGC1_TypeDef;/*0x00000124*/

typedef volatile struct
{
    volatile const uint32_t DCGCGPIOA      ;
    volatile const uint32_t DCGCGPIOB      ;
    volatile const uint32_t DCGCGPIOC      ;
    volatile const uint32_t DCGCGPIOD      ;
    volatile const uint32_t DCGCGPIOE      ;
    volatile const uint32_t DCGCGPIOF      ;
    const    uint32_t       reserved   [7];
    volatile const uint32_t DCGCUDMA       ;
    const    uint32_t       reserved1  [2];
    volatile const uint32_t DCGCUSB0       ;
    const    uint32_t       reserved2  [15];
}BITBANDING_DCGC2_TypeDef;/*0x00000128*/

typedef volatile struct
{
    volatile const uint32_t DCADC0DC0        ;
    volatile const uint32_t DCADC0DC1        ;
    volatile const uint32_t DCADC0DC2        ;
    volatile const uint32_t DCADC0DC3        ;
    volatile const uint32_t DCADC0DC4        ;
    volatile const uint32_t DCADC0DC5        ;
    volatile const uint32_t DCADC0DC6        ;
    volatile const uint32_t DCADC0DC7        ;
    const    uint32_t       reserved       [8];
    volatile const uint32_t DCADC1DC0        ;
    volatile const uint32_t DCADC1DC1        ;
    volatile const uint32_t DCADC1DC2        ;
    volatile const uint32_t DCADC1DC3        ;
    volatile const uint32_t DCADC1DC4        ;
    volatile const uint32_t DCADC1DC5        ;
    volatile const uint32_t DCADC1DC6        ;
    volatile const uint32_t DCADC1DC7        ;
    const    uint32_t       reserved1      [8];
}BITBANDING_DC9_TypeDef;/*0x00000190*/

typedef volatile struct
{
    volatile const uint32_t FWB            ;
    const    uint32_t       reserved       [31];
}BITBANDING_NVMSTAT_TypeDef;/*0x000001A0*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_STRUCT_SYSCTL_STRUCTREGISTER_BITBANDING_H_ */
