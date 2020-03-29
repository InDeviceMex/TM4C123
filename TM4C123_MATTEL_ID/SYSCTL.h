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
#define SYSCTL_OFFSET          (0x000FE000)

typedef volatile struct
{
    volatile const uint32_t MINOR        :8;
    volatile const uint32_t MAJOR        :8;
    volatile const uint32_t CLASS        :8;
    const    uint32_t       reserved     :4;
    volatile const uint32_t VER          :3;
    const    uint32_t       reserved1    :1;
}DID0_TypeDef; //0x00000000


typedef volatile struct
{
    volatile const uint32_t QUAL      :2;
    volatile const uint32_t ROHS      :1;
    volatile const uint32_t PKG       :2;
    volatile const uint32_t TEMP      :3;
    const    uint32_t       reserved  :5;
    volatile const uint32_t PINCOUNT  :3;
    volatile const uint32_t PARTNO    :8;
    volatile const uint32_t FAM       :4;
    volatile const uint32_t VER       :4;
}DID1_TypeDef;//0x00000004

typedef volatile struct
{
    volatile const uint32_t SRAMSZ    :16;
    volatile const uint32_t FLASHSZ   :16;
}DC0_TypeDef;//0x00000008

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
}DC1_TypeDef;//0x00000010

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
}DC2_TypeDef;//0x00000014


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
}DC3_TypeDef;//0x00000018


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
}DC4_TypeDef;//0x0000001C


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
}DC5_TypeDef;//0x00000020


typedef volatile struct
{
    volatile const uint32_t DCUSB0      :2;
    const    uint32_t       reserved    :2;
    volatile const uint32_t DCUSB0PHY   :1;
    const    uint32_t       reserved1   :27;
}DC6_TypeDef;//0x00000024

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
}DC7_TypeDef;//0x00000028



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
}DC8_TypeDef;//0x0000002C


typedef volatile struct
    {
    const    uint32_t reserved :1;
    volatile uint32_t BOR1     :1;
    volatile uint32_t BOR0     :1;
    const    uint32_t reserved1:29;
}PBORCTL_TypeDef;//0x00000030

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
}SRCR0_TypeDef;//0x00000040


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
}SRCR1_TypeDef;//0x00000044


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
}SRCR2_TypeDef;//0x00000048


typedef volatile struct
{
    const    uint32_t       reserved       :1;
    volatile const uint32_t BOR1RIS        :1;
    const    uint32_t       reserved1      :1;
    volatile const uint32_t MOFRIS         :1;
    const    uint32_t       reserved2      :2;
    volatile const uint32_t PLLLRIS        :1;
    volatile const uint32_t USBPLLLRIS     :1;
    volatile const uint32_t MOSCPUPRIS     :1;
    const    uint32_t       reserved3      :1;
    volatile const uint32_t VDDARIS        :1;
    volatile const uint32_t BOR0RIS        :1;
    const    uint32_t       reserved4      :20;
}RIS_TypeDef;//0x00000050

typedef volatile struct
{
    const    uint32_t reserved :1;
    volatile uint32_t BOR1IM   :1;
    const    uint32_t reserved1:1;
    volatile uint32_t MOFIM    :1;
    const    uint32_t reserved2:2;
    volatile uint32_t PLLLIM   :1;
    volatile uint32_t USBPLLLIM:1;
    volatile uint32_t MOSCPUPIM:1;
    const    uint32_t reserved3:1;
    volatile uint32_t VDDAIM   :1;
    volatile uint32_t BOR0IM   :1;
    const    uint32_t reserved4:20;
}IMC_TypeDef;//0x00000054


typedef volatile struct
{
    const    uint32_t reserved   :1;
    volatile uint32_t BOR1MIS    :1;
    const    uint32_t reserved1  :1;
    volatile uint32_t MOFMIS     :1;
    const    uint32_t reserved2  :2;
    volatile uint32_t PLLLMIS    :1;
    volatile uint32_t USBPLLLMIS :1;
    volatile uint32_t MOSCPUPMIS :1;
    const    uint32_t reserved3  :1;
    volatile uint32_t VDDAMIS    :1;
    volatile uint32_t BOR0MIS    :1;
    const    uint32_t reserved4  :20;
}MISC_TypeDef;//0x00000058


typedef volatile struct
{
    volatile uint32_t EXT      :1;
    volatile uint32_t POR      :1;
    volatile uint32_t BOR      :1;
    volatile uint32_t WDT0     :1;
    volatile uint32_t SW       :1;
    volatile uint32_t WDT1     :1;
    const    uint32_t reserved :10;
    volatile uint32_t MOSCFAIL :1;
    const    uint32_t reserved1:15;
}RESC_TypeDef;//0x0000005C



typedef volatile struct
{
    volatile uint32_t MOSCDIS      :1;
    const    uint32_t reserved     :3;
    volatile uint32_t OSCSRC       :2;
    volatile uint32_t XTAL         :5;
    volatile uint32_t BYPASS       :1;
    const    uint32_t reserved1    :1;
    volatile uint32_t PWRDN        :1;
    const    uint32_t reserved2    :3;
    volatile uint32_t PWMDIV       :3;
    volatile uint32_t USEPWMDIV    :1;
    const    uint32_t reserved3    :1;
    volatile uint32_t USESYSDIV    :1;
    volatile uint32_t SYSDIV       :4;
    volatile uint32_t ACG          :1;
    const    uint32_t reserved4    :4;
}RCC_TypeDef;//0x00000060


typedef volatile struct
{
    volatile uint32_t PORTA        :1;
    volatile uint32_t PORTB        :1;
    volatile uint32_t PORTC        :1;
    volatile uint32_t PORTD        :1;
    volatile uint32_t PORTE        :1;
    volatile uint32_t PORTF        :1;
    const    uint32_t reserved     :26;
}GPIOHBCTL_TypeDef;//0x0000006C


typedef volatile struct
{
    const    uint32_t reserved     :4;
    volatile uint32_t OSCSRC2      :3;
    const    uint32_t reserved1    :4;
    volatile uint32_t BYPASS2      :1;
    const    uint32_t reserved2    :1;
    volatile uint32_t PWRDN2       :1;
    volatile uint32_t USBPWRDN     :1;
    const    uint32_t reserved3    :7;
    volatile uint32_t SYSDIV2LSB   :1;
    volatile uint32_t SYSDIV2      :6;
    const    uint32_t reserved4    :1;
    volatile uint32_t DIV400       :1;
    volatile uint32_t USERCC2      :1;
}RCC2_TypeDef;//0x00000070

typedef volatile struct
{
    volatile uint32_t CVAL         :1;
    volatile uint32_t MOSCIM       :1;
    volatile uint32_t NOXTAL       :1;
    const    uint32_t reserved     :29;
}MOSCCTL_TypeDef;//0x0000007C



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
}RCGC0_TypeDef;//0x00000100


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
}RCGC1_TypeDef;//0x00000104


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
}RCGC2_TypeDef;//0x00000108



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
}SCGC0_TypeDef;//0x00000110


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
}SCGC1_TypeDef;//0x00000104


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
}SCGC2_TypeDef;//0x00000108



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
}DCGC0_TypeDef;//0x00000120


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
}DCGC1_TypeDef;//0x00000124


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
}DCGC2_TypeDef;//0x00000128


typedef volatile struct
{
    const    uint32_t reserved    :1;
    volatile uint32_t PIOSCPD     :1;
    const    uint32_t reserved1   :2;
    volatile uint32_t DSOSCSRC    :3;
    const    uint32_t reserved2   :16;
    volatile uint32_t DSDIVORIDE  :6;
    const    uint32_t reserved3   :3;
}DSLPCLKCFG_TypeDef;//0x00000144


typedef volatile struct
{
    volatile const uint32_t FPUr        :1;
    const    uint32_t       reserved    :7;
    volatile const uint32_t FLASHLPM    :1;
    const    uint32_t       reserved1   :1;
    volatile const uint32_t SRAMLPM     :1;
    volatile const uint32_t SRAMSM      :1;
    volatile const uint32_t PIOSCPDE    :1;
    const    uint32_t       reserved2   :19;
}SYSPROP_TypeDef;//0x0000014C


typedef volatile struct
{
    volatile uint32_t UT          :7;
    const    uint32_t reserved    :1;
    volatile uint32_t UPDATE      :1;
    volatile uint32_t CAL         :1;
    const    uint32_t reserved2   :21;
    volatile uint32_t UTEN        :1;
}PIOSCCAL_TypeDef;//0x00000150


typedef volatile struct
{
    volatile const uint32_t CT          :7;
    const    uint32_t       reserved    :1;
    volatile const uint32_t RESULT      :2;
    const    uint32_t       reserved2   :6;
    volatile const uint32_t DT          :7;
    const    uint32_t       reserved3   :9;
}PIOSCSTAT_TypeDef;//0x00000154

typedef volatile struct
{
    volatile const uint32_t MINT          :10;
    volatile const uint32_t MFRAC         :10;
    const    uint32_t       reserved      :12;
}PLLFREQ0_TypeDef;//0x00000160

typedef volatile struct
{
    volatile const uint32_t N             :5;
    const    uint32_t       reserved      :3;
    volatile const uint32_t Q             :5;
    const    uint32_t       reserved1     :19;
}PLLFREQ1_TypeDef;//0x00000164

typedef volatile struct
{
    volatile const uint32_t LOCK          :1;
    const    uint32_t       reserved      :31;
}PLLSTAT_TypeDef;//0x00000168

typedef volatile struct
{
    volatile uint32_t SRAMPM        :2;
    const    uint32_t reserved      :2;
    volatile uint32_t FLASHPM       :2;
    const    uint32_t reserved1     :26;
}SLPPWRCFG_TypeDef;//0x00000188


typedef volatile struct
{
    volatile uint32_t SRAMPM        :2;
    const    uint32_t reserved      :2;
    volatile uint32_t FLASHPM       :2;
    const    uint32_t reserved1     :26;
}DSLPPWRCFG_TypeDef;//0x0000018C


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
}DC9_TypeDef;//0x00000190


typedef volatile struct
{
    volatile const uint32_t FWB            :1;
    const    uint32_t       reserved       :31;
}NVMSTAT_TypeDef;//0x000001A0


typedef volatile struct
{
    volatile uint32_t VLDO          :8;
    const    uint32_t reserved      :23;
    volatile uint32_t VADJEN        :1;
}LDOSPCTL_TypeDef;//0x000001B4

typedef volatile struct
{
    volatile const uint32_t NOPLL         :8;
    volatile const uint32_t WITHPLL       :8;
    const uint32_t          reserved      :16;
}LDOSPCAL_TypeDef;//0x000001B8

typedef volatile struct
{
    volatile uint32_t VLDO          :8;
    const    uint32_t reserved      :23;
    volatile uint32_t VADJEN        :1;
}LDODPCTL_TypeDef;//0x000001BC

typedef volatile struct
{
    volatile const uint32_t KHZ30         :8;
    volatile const uint32_t WITHPLL       :8;
    const    uint32_t       reserved      :16;
}LDODPCAL_TypeDef;//0x000001C0

typedef volatile struct
{
    volatile const uint32_t SPDERR   :1;
    volatile const uint32_t FPDERR   :1;
    volatile const uint32_t SRDERR   :1;
    volatile const uint32_t LDMINERR :1;
    volatile const uint32_t LSMINERR :1;
    const    uint32_t       reserved :1;
    volatile const uint32_t LMAXERR  :1;
    volatile const uint32_t SRDW     :1;
    const    uint32_t       reserved1:8;
    volatile const uint32_t PRACT    :1;
    volatile const uint32_t LOWPWR   :1;
    volatile const uint32_t FLASHLP  :1;
    volatile const uint32_t LDOUA    :1;
    const uint32_t          reserved2:12;
}SDPMST_TypeDef;//0x000001CC


typedef volatile struct
{
    volatile const uint32_t PPWDT0   :1;
    volatile const uint32_t PPWDT1   :1;
    const    uint32_t       reserved :30;
}PPWD_TypeDef;//0x00000300

typedef volatile struct
{
    volatile const uint32_t PPTIMER0   :1;
    volatile const uint32_t PPTIMER1   :1;
    volatile const uint32_t PPTIMER2   :1;
    volatile const uint32_t PPTIMER3   :1;
    volatile const uint32_t PPTIMER4   :1;
    volatile const uint32_t PPTIMER5   :1;
    const    uint32_t       reserved   :26;
}PPTIMER_TypeDef;//0x00000304


typedef volatile struct
{
    volatile const uint32_t PPGPIOA   :1;
    volatile const uint32_t PPGPIOB   :1;
    volatile const uint32_t PPGPIOC   :1;
    volatile const uint32_t PPGPIOD   :1;
    volatile const uint32_t PPGPIOE   :1;
    volatile const uint32_t PPGPIOF   :1;
    volatile const uint32_t PPGPIOG   :1;
    volatile const uint32_t PPGPIOH   :1;
    volatile const uint32_t PPGPIOJ   :1;
    volatile const uint32_t PPGPIOK   :1;
    volatile const uint32_t PPGPIOL   :1;
    volatile const uint32_t PPGPIOM   :1;
    volatile const uint32_t PPGPION   :1;
    volatile const uint32_t PPGPIOP   :1;
    volatile const uint32_t PPGPIOQ   :1;
    const    uint32_t       reserved  :17;
}PPGPIO_TypeDef;//0x00000308

typedef volatile struct
{
    volatile const uint32_t PPUDMA    :1;
    const    uint32_t       reserved  :31;
}PPDMA_TypeDef;//0x0000030C

typedef volatile struct
{
    volatile const uint32_t PPHIB    :1;
    const    uint32_t       reserved :31;
}PPHIB_TypeDef;//0x00000314

typedef volatile struct
{
    volatile const uint32_t PPUART0    :1;
    volatile const uint32_t PPUART1    :1;
    volatile const uint32_t PPUART2    :1;
    volatile const uint32_t PPUART3    :1;
    volatile const uint32_t PPUART4    :1;
    volatile const uint32_t PPUART5    :1;
    volatile const uint32_t PPUART6    :1;
    volatile const uint32_t PPUART7    :1;
    const    uint32_t       reserved   :24;
}PPUART_TypeDef;//0x00000318

typedef volatile struct
{
    volatile const uint32_t PPSSI0    :1;
    volatile const uint32_t PPSSI1    :1;
    volatile const uint32_t PPSSI2    :1;
    volatile const uint32_t PPSSI3    :1;
    const    uint32_t       reserved  :28;
}PPSSI_TypeDef;//0x0000031C


typedef volatile struct
{
    volatile const uint32_t PPI2C0    :1;
    volatile const uint32_t PPI2C1    :1;
    volatile const uint32_t PPI2C2    :1;
    volatile const uint32_t PPI2C3    :1;
    volatile const uint32_t PPI2C4    :1;
    volatile const uint32_t PPI2C5    :1;
    const    uint32_t       reserved  :26;
}PPI2C_TypeDef;//0x00000320

typedef volatile struct
{
    volatile const uint32_t PPUSB          :1;
    const    uint32_t       reserved       :31;
}PPUSB_TypeDef;//0x00000328

typedef volatile struct
{
    volatile const uint32_t PPCAN0    :1;
    volatile const uint32_t PPCAN1    :1;
    const    uint32_t       reserved  :30;
}PPCAN_TypeDef;//0x00000334


typedef volatile struct
{
    volatile const uint32_t PPADC0    :1;
    volatile const uint32_t PPADC1    :1;
    const    uint32_t       reserved  :30;
}PPADC_TypeDef;//0x00000338


typedef volatile struct
{
    volatile const uint32_t PPACMP    :1;
    const    uint32_t       reserved  :31;
}PPACMP_TypeDef;//0x0000033C

typedef volatile struct
{
    volatile const uint32_t PPPWM0    :1;
    volatile const uint32_t PPPWM1    :1;
    const    uint32_t       reserved  :30;
}PPPWM_TypeDef;//0x00000340

typedef volatile struct
{
    volatile const uint32_t PPQEI0    :1;
    volatile const uint32_t PPQEI1    :1;
    const    uint32_t       reserved  :30;
}PPQEI_TypeDef;//0x00000344


typedef volatile struct
{
    volatile const uint32_t PPEEPROM    :1;
    const    uint32_t       reserved    :31;
}PPEEPROM_TypeDef;//0x00000358


typedef volatile struct
{
volatile const uint32_t PPWMTIMER0   :1;
volatile const uint32_t PPWMTIMER1   :1;
volatile const uint32_t PPWMTIMER2   :1;
volatile const uint32_t PPWMTIMER3   :1;
volatile const uint32_t PPWMTIMER4   :1;
volatile const uint32_t PPWMTIMER5   :1;
const    uint32_t       reserved     :26;
}PPWTIMER_TypeDef;//0x0000035C


typedef volatile struct
{
    volatile uint32_t SRWDT0   :1;
    volatile uint32_t SRWDT1   :1;
    const    uint32_t reserved :30;
}SRWD_TypeDef;//0x00000500

typedef volatile struct
{
    volatile uint32_t SRTIMER0   :1;
    volatile uint32_t SRTIMER1   :1;
    volatile uint32_t SRTIMER2   :1;
    volatile uint32_t SRTIMER3   :1;
    volatile uint32_t SRTIMER4   :1;
    volatile uint32_t SRTIMER5   :1;
    const    uint32_t reserved   :26;
}SRTIMER_TypeDef;//0x00000504


typedef volatile struct
{
    volatile uint32_t SRGPIOA   :1;
    volatile uint32_t SRGPIOB   :1;
    volatile uint32_t SRGPIOC   :1;
    volatile uint32_t SRGPIOD   :1;
    volatile uint32_t SRGPIOE   :1;
    volatile uint32_t SRGPIOF   :1;
    volatile uint32_t SRGPIOG   :1;
    volatile uint32_t SRGPIOH   :1;
    volatile uint32_t SRGPIOJ   :1;
    volatile uint32_t SRGPIOK   :1;
    volatile uint32_t SRGPIOL   :1;
    volatile uint32_t SRGPIOM   :1;
    volatile uint32_t SRGPION   :1;
    volatile uint32_t SRGPIOP   :1;
    volatile uint32_t SRGPIOQ   :1;
    const    uint32_t reserved  :17;
}SRGPIO_TypeDef;//0x00000508

typedef volatile struct
{
    volatile uint32_t SRUDMA    :1;
    const    uint32_t reserved  :31;
}SRDMA_TypeDef;//0x0000050C

typedef volatile struct
{
    volatile uint32_t SRHIB    :1;
    const    uint32_t reserved :31;
}SRHIB_TypeDef;//0x00000514

typedef volatile struct
{
    volatile uint32_t SRUART0    :1;
    volatile uint32_t SRUART1    :1;
    volatile uint32_t SRUART2    :1;
    volatile uint32_t SRUART3    :1;
    volatile uint32_t SRUART4    :1;
    volatile uint32_t SRUART5    :1;
    volatile uint32_t SRUART6    :1;
    volatile uint32_t SRUART7    :1;
    const    uint32_t reserved   :24;
}SRUART_TypeDef;//0x00000518

typedef volatile struct
{
    volatile uint32_t SRSSI0    :1;
    volatile uint32_t SRSSI1    :1;
    volatile uint32_t SRSSI2    :1;
    volatile uint32_t SRSSI3    :1;
    const    uint32_t reserved  :28;
}SRSSI_TypeDef;//0x0000051C


typedef volatile struct
{
    volatile uint32_t SRI2C0    :1;
    volatile uint32_t SRI2C1    :1;
    volatile uint32_t SRI2C2    :1;
    volatile uint32_t SRI2C3    :1;
    volatile uint32_t SRI2C4    :1;
    volatile uint32_t SRI2C5    :1;
    const    uint32_t reserved  :26;
}SRI2C_TypeDef;//0x00000520

typedef volatile struct
{
    volatile uint32_t SRUSB          :1;
    const    uint32_t reserved       :31;
}SRUSB_TypeDef;//0x00000528

typedef volatile struct
{
    volatile uint32_t SRCAN0    :1;
    volatile uint32_t SRCAN1    :1;
    const    uint32_t reserved  :30;
}SRCAN_TypeDef;//0x00000534


typedef volatile struct
{
    volatile uint32_t SRADC0    :1;
    volatile uint32_t SRADC1    :1;
    const    uint32_t reserved  :30;
}SRADC_TypeDef;//0x00000538


typedef volatile struct
{
    volatile uint32_t SRACMP    :1;
    const    uint32_t reserved  :31;
}SRACMP_TypeDef;//0x0000053C

typedef volatile struct
{
    volatile uint32_t SRPWM0    :1;
    volatile uint32_t SRPWM1    :1;
    const    uint32_t reserved  :30;
}SRPWM_TypeDef;//0x00000540

typedef volatile struct
{
    volatile uint32_t SRQEI0    :1;
    volatile uint32_t SRQEI1    :1;
    const    uint32_t reserved  :30;
}SRQEI_TypeDef;//0x00000544


typedef volatile struct
{
    volatile uint32_t SREEPROM    :1;
    const    uint32_t reserved    :31;
}SREEPROM_TypeDef;//0x00000558


typedef volatile struct
{
volatile uint32_t SRWMTIMER0   :1;
volatile uint32_t SRWMTIMER1   :1;
volatile uint32_t SRWMTIMER2   :1;
volatile uint32_t SRWMTIMER3   :1;
volatile uint32_t SRWMTIMER4   :1;
volatile uint32_t SRWMTIMER5   :1;
const    uint32_t reserved     :26;
}SRWTIMER_TypeDef;//0x0000055C


typedef volatile struct
{
    volatile uint32_t RCGCWDT0   :1;
    volatile uint32_t RCGCWDT1   :1;
    const    uint32_t reserved   :30;
}RCGCWD_TypeDef;//0x00000600

typedef volatile struct
{
    volatile uint32_t RCGCTIMER0   :1;
    volatile uint32_t RCGCTIMER1   :1;
    volatile uint32_t RCGCTIMER2   :1;
    volatile uint32_t RCGCTIMER3   :1;
    volatile uint32_t RCGCTIMER4   :1;
    volatile uint32_t RCGCTIMER5   :1;
    const    uint32_t reserved     :26;
}RCGCTIMER_TypeDef;//0x00000604


typedef volatile struct
{
    volatile uint32_t RCGCGPIOA   :1;
    volatile uint32_t RCGCGPIOB   :1;
    volatile uint32_t RCGCGPIOC   :1;
    volatile uint32_t RCGCGPIOD   :1;
    volatile uint32_t RCGCGPIOE   :1;
    volatile uint32_t RCGCGPIOF   :1;
    volatile uint32_t RCGCGPIOG   :1;
    volatile uint32_t RCGCGPIOH   :1;
    volatile uint32_t RCGCGPIOJ   :1;
    volatile uint32_t RCGCGPIOK   :1;
    volatile uint32_t RCGCGPIOL   :1;
    volatile uint32_t RCGCGPIOM   :1;
    volatile uint32_t RCGCGPION   :1;
    volatile uint32_t RCGCGPIOP   :1;
    volatile uint32_t RCGCGPIOQ   :1;
    const    uint32_t reserved    :17;
}RCGCGPIO_TypeDef;//0x00000608

typedef volatile struct
{
    volatile uint32_t RCGCUDMA    :1;
    const    uint32_t reserved    :31;
}RCGCDMA_TypeDef;//0x0000060C

typedef volatile struct
{
    volatile uint32_t RCGCHIB    :1;
    const    uint32_t reserved   :31;
}RCGCHIB_TypeDef;//0x00000614

typedef volatile struct
{
    volatile uint32_t RCGCUART0    :1;
    volatile uint32_t RCGCUART1    :1;
    volatile uint32_t RCGCUART2    :1;
    volatile uint32_t RCGCUART3    :1;
    volatile uint32_t RCGCUART4    :1;
    volatile uint32_t RCGCUART5    :1;
    volatile uint32_t RCGCUART6    :1;
    volatile uint32_t RCGCUART7    :1;
    const    uint32_t reserved     :24;
}RCGCUART_TypeDef;//0x00000618

typedef volatile struct
{
    volatile uint32_t RCGCSSI0    :1;
    volatile uint32_t RCGCSSI1    :1;
    volatile uint32_t RCGCSSI2    :1;
    volatile uint32_t RCGCSSI3    :1;
    const    uint32_t reserved    :28;
}RCGCSSI_TypeDef;//0x0000061C


typedef volatile struct
{
    volatile uint32_t RCGCI2C0    :1;
    volatile uint32_t RCGCI2C1    :1;
    volatile uint32_t RCGCI2C2    :1;
    volatile uint32_t RCGCI2C3    :1;
    volatile uint32_t RCGCI2C4    :1;
    volatile uint32_t RCGCI2C5    :1;
    const    uint32_t reserved    :26;
}RCGCI2C_TypeDef;//0x00000620

typedef volatile struct
{
    volatile uint32_t RCGCUSB          :1;
    const    uint32_t reserved         :31;
}RCGCUSB_TypeDef;//0x00000628

typedef volatile struct
{
    volatile uint32_t RCGCCAN0    :1;
    volatile uint32_t RCGCCAN1    :1;
    const    uint32_t reserved    :30;
}RCGCCAN_TypeDef;//0x00000634


typedef volatile struct
{
    volatile uint32_t RCGCADC0    :1;
    volatile uint32_t RCGCADC1    :1;
    const    uint32_t reserved    :30;
}RCGCADC_TypeDef;//0x00000638


typedef volatile struct
{
    volatile uint32_t RCGCACMP    :1;
    const    uint32_t reserved    :31;
}RCGCACMP_TypeDef;//0x0000063C

typedef volatile struct
{
    volatile uint32_t RCGCPWM0    :1;
    volatile uint32_t RCGCPWM1    :1;
    const    uint32_t reserved    :30;
}RCGCPWM_TypeDef;//0x00000640

typedef volatile struct
{
    volatile uint32_t RCGCQEI0    :1;
    volatile uint32_t RCGCQEI1    :1;
    const    uint32_t reserved    :30;
}RCGCQEI_TypeDef;//0x00000644


typedef volatile struct
{
    volatile uint32_t RCGCEEPROM    :1;
    const    uint32_t reserved      :31;
}RCGCEEPROM_TypeDef;//0x00000658


typedef volatile struct
{
volatile uint32_t RCGCWMTIMER0   :1;
volatile uint32_t RCGCWMTIMER1   :1;
volatile uint32_t RCGCWMTIMER2   :1;
volatile uint32_t RCGCWMTIMER3   :1;
volatile uint32_t RCGCWMTIMER4   :1;
volatile uint32_t RCGCWMTIMER5   :1;
const    uint32_t reserved       :26;
}RCGCWTIMER_TypeDef;//0x0000065C





typedef volatile struct
{
    volatile uint32_t SCGCWDT0   :1;
    volatile uint32_t SCGCWDT1   :1;
    const    uint32_t reserved   :30;
}SCGCWD_TypeDef;//0x00000700

typedef volatile struct
{
    volatile uint32_t SCGCTIMER0   :1;
    volatile uint32_t SCGCTIMER1   :1;
    volatile uint32_t SCGCTIMER2   :1;
    volatile uint32_t SCGCTIMER3   :1;
    volatile uint32_t SCGCTIMER4   :1;
    volatile uint32_t SCGCTIMER5   :1;
    const    uint32_t reserved     :26;
}SCGCTIMER_TypeDef;//0x00000704


typedef volatile struct
{
    volatile uint32_t SCGCGPIOA   :1;
    volatile uint32_t SCGCGPIOB   :1;
    volatile uint32_t SCGCGPIOC   :1;
    volatile uint32_t SCGCGPIOD   :1;
    volatile uint32_t SCGCGPIOE   :1;
    volatile uint32_t SCGCGPIOF   :1;
    volatile uint32_t SCGCGPIOG   :1;
    volatile uint32_t SCGCGPIOH   :1;
    volatile uint32_t SCGCGPIOJ   :1;
    volatile uint32_t SCGCGPIOK   :1;
    volatile uint32_t SCGCGPIOL   :1;
    volatile uint32_t SCGCGPIOM   :1;
    volatile uint32_t SCGCGPION   :1;
    volatile uint32_t SCGCGPIOP   :1;
    volatile uint32_t SCGCGPIOQ   :1;
    const    uint32_t reserved    :17;
}SCGCGPIO_TypeDef;//0x00000708

typedef volatile struct
{
    volatile uint32_t SCGCUDMA    :1;
    const    uint32_t reserved    :31;
}SCGCDMA_TypeDef;//0x0000070C

typedef volatile struct
{
    volatile uint32_t SCGCHIB    :1;
    const    uint32_t reserved   :31;
}SCGCHIB_TypeDef;//0x00000714

typedef volatile struct
{
    volatile uint32_t SCGCUART0    :1;
    volatile uint32_t SCGCUART1    :1;
    volatile uint32_t SCGCUART2    :1;
    volatile uint32_t SCGCUART3    :1;
    volatile uint32_t SCGCUART4    :1;
    volatile uint32_t SCGCUART5    :1;
    volatile uint32_t SCGCUART6    :1;
    volatile uint32_t SCGCUART7    :1;
    const    uint32_t reserved     :24;
}SCGCUART_TypeDef;//0x00000718

typedef volatile struct
{
    volatile uint32_t SCGCSSI0    :1;
    volatile uint32_t SCGCSSI1    :1;
    volatile uint32_t SCGCSSI2    :1;
    volatile uint32_t SCGCSSI3    :1;
    const    uint32_t reserved    :28;
}SCGCSSI_TypeDef;//0x0000071C


typedef volatile struct
{
    volatile uint32_t SCGCI2C0    :1;
    volatile uint32_t SCGCI2C1    :1;
    volatile uint32_t SCGCI2C2    :1;
    volatile uint32_t SCGCI2C3    :1;
    volatile uint32_t SCGCI2C4    :1;
    volatile uint32_t SCGCI2C5    :1;
    const    uint32_t reserved    :26;
}SCGCI2C_TypeDef;//0x00000720

typedef volatile struct
{
    volatile uint32_t SCGCUSB          :1;
    const    uint32_t reserved         :31;
}SCGCUSB_TypeDef;//0x00000728

typedef volatile struct
{
    volatile uint32_t SCGCCAN0    :1;
    volatile uint32_t SCGCCAN1    :1;
    const    uint32_t reserved    :30;
}SCGCCAN_TypeDef;//0x00000734


typedef volatile struct
{
    volatile uint32_t SCGCADC0    :1;
    volatile uint32_t SCGCADC1    :1;
    const    uint32_t reserved    :30;
}SCGCADC_TypeDef;//0x00000738


typedef volatile struct
{
    volatile uint32_t SCGCACMP    :1;
    const    uint32_t reserved    :31;
}SCGCACMP_TypeDef;//0x0000073C

typedef volatile struct
{
    volatile uint32_t SCGCPWM0    :1;
    volatile uint32_t SCGCPWM1    :1;
    const    uint32_t reserved    :30;
}SCGCPWM_TypeDef;//0x00000740

typedef volatile struct
{
    volatile uint32_t SCGCQEI0    :1;
    volatile uint32_t SCGCQEI1    :1;
    const    uint32_t reserved    :30;
}SCGCQEI_TypeDef;//0x00000744


typedef volatile struct
{
    volatile uint32_t SCGCEEPROM    :1;
    const    uint32_t reserved      :31;
}SCGCEEPROM_TypeDef;//0x00000758


typedef volatile struct
{
volatile uint32_t SCGCWMTIMER0   :1;
volatile uint32_t SCGCWMTIMER1   :1;
volatile uint32_t SCGCWMTIMER2   :1;
volatile uint32_t SCGCWMTIMER3   :1;
volatile uint32_t SCGCWMTIMER4   :1;
volatile uint32_t SCGCWMTIMER5   :1;
const    uint32_t reserved       :26;
}SCGCWTIMER_TypeDef;//0x0000075C





typedef volatile struct
{
    volatile uint32_t DCGCWDT0   :1;
    volatile uint32_t DCGCWDT1   :1;
    const    uint32_t reserved   :30;
}DCGCWD_TypeDef;//0x00000800

typedef volatile struct
{
    volatile uint32_t DCGCTIMER0   :1;
    volatile uint32_t DCGCTIMER1   :1;
    volatile uint32_t DCGCTIMER2   :1;
    volatile uint32_t DCGCTIMER3   :1;
    volatile uint32_t DCGCTIMER4   :1;
    volatile uint32_t DCGCTIMER5   :1;
    const    uint32_t reserved     :26;
}DCGCTIMER_TypeDef;//0x00000804


typedef volatile struct
{
    volatile uint32_t DCGCGPIOA   :1;
    volatile uint32_t DCGCGPIOB   :1;
    volatile uint32_t DCGCGPIOC   :1;
    volatile uint32_t DCGCGPIOD   :1;
    volatile uint32_t DCGCGPIOE   :1;
    volatile uint32_t DCGCGPIOF   :1;
    volatile uint32_t DCGCGPIOG   :1;
    volatile uint32_t DCGCGPIOH   :1;
    volatile uint32_t DCGCGPIOJ   :1;
    volatile uint32_t DCGCGPIOK   :1;
    volatile uint32_t DCGCGPIOL   :1;
    volatile uint32_t DCGCGPIOM   :1;
    volatile uint32_t DCGCGPION   :1;
    volatile uint32_t DCGCGPIOP   :1;
    volatile uint32_t DCGCGPIOQ   :1;
    const    uint32_t reserved    :17;
}DCGCGPIO_TypeDef;//0x00000808

typedef volatile struct
{
    volatile uint32_t DCGCUDMA    :1;
    const    uint32_t reserved    :31;
}DCGCDMA_TypeDef;//0x0000080C

typedef volatile struct
{
    volatile uint32_t DCGCHIB    :1;
    const    uint32_t reserved   :31;
}DCGCHIB_TypeDef;//0x00000814

typedef volatile struct
{
    volatile uint32_t DCGCUART0    :1;
    volatile uint32_t DCGCUART1    :1;
    volatile uint32_t DCGCUART2    :1;
    volatile uint32_t DCGCUART3    :1;
    volatile uint32_t DCGCUART4    :1;
    volatile uint32_t DCGCUART5    :1;
    volatile uint32_t DCGCUART6    :1;
    volatile uint32_t DCGCUART7    :1;
    const    uint32_t reserved     :24;
}DCGCUART_TypeDef;//0x00000818

typedef volatile struct
{
    volatile uint32_t DCGCSSI0    :1;
    volatile uint32_t DCGCSSI1    :1;
    volatile uint32_t DCGCSSI2    :1;
    volatile uint32_t DCGCSSI3    :1;
    const    uint32_t reserved    :28;
}DCGCSSI_TypeDef;//0x0000081C


typedef volatile struct
{
    volatile uint32_t DCGCI2C0    :1;
    volatile uint32_t DCGCI2C1    :1;
    volatile uint32_t DCGCI2C2    :1;
    volatile uint32_t DCGCI2C3    :1;
    volatile uint32_t DCGCI2C4    :1;
    volatile uint32_t DCGCI2C5    :1;
    const    uint32_t reserved    :26;
}DCGCI2C_TypeDef;//0x00000820

typedef volatile struct
{
    volatile uint32_t DCGCUSB          :1;
    const    uint32_t reserved         :31;
}DCGCUSB_TypeDef;//0x00000828

typedef volatile struct
{
    volatile uint32_t DCGCCAN0    :1;
    volatile uint32_t DCGCCAN1    :1;
    const    uint32_t reserved    :30;
}DCGCCAN_TypeDef;//0x00000834


typedef volatile struct
{
    volatile uint32_t DCGCADC0    :1;
    volatile uint32_t DCGCADC1    :1;
    const    uint32_t reserved    :30;
}DCGCADC_TypeDef;//0x00000838


typedef volatile struct
{
    volatile uint32_t DCGCACMP    :1;
    const    uint32_t reserved    :31;
}DCGCACMP_TypeDef;//0x0000083C

typedef volatile struct
{
    volatile uint32_t DCGCPWM0    :1;
    volatile uint32_t DCGCPWM1    :1;
    const    uint32_t reserved    :30;
}DCGCPWM_TypeDef;//0x00000840

typedef volatile struct
{
    volatile uint32_t DCGCQEI0    :1;
    volatile uint32_t DCGCQEI1    :1;
    const    uint32_t reserved    :30;
}DCGCQEI_TypeDef;//0x00000844


typedef volatile struct
{
    volatile uint32_t DCGCEEPROM    :1;
    const    uint32_t reserved      :31;
}DCGCEEPROM_TypeDef;//0x00000858


typedef volatile struct
{
volatile uint32_t DCGCWMTIMER0   :1;
volatile uint32_t DCGCWMTIMER1   :1;
volatile uint32_t DCGCWMTIMER2   :1;
volatile uint32_t DCGCWMTIMER3   :1;
volatile uint32_t DCGCWMTIMER4   :1;
volatile uint32_t DCGCWMTIMER5   :1;
const    uint32_t reserved       :26;
}DCGCWTIMER_TypeDef;//0x0000085C



typedef volatile struct
{
    volatile const uint32_t PRWDT0   :1;
    volatile const uint32_t PRWDT1   :1;
    const    uint32_t       reserved :30;
}PRWD_TypeDef;//0x00000A00

typedef volatile struct
{
    volatile const uint32_t PRTIMER0   :1;
    volatile const uint32_t PRTIMER1   :1;
    volatile const uint32_t PRTIMER2   :1;
    volatile const uint32_t PRTIMER3   :1;
    volatile const uint32_t PRTIMER4   :1;
    volatile const uint32_t PRTIMER5   :1;
    const    uint32_t       reserved   :26;
}PRTIMER_TypeDef;//0x00000A04


typedef volatile struct
{
    volatile const uint32_t PRGPIOA   :1;
    volatile const uint32_t PRGPIOB   :1;
    volatile const uint32_t PRGPIOC   :1;
    volatile const uint32_t PRGPIOD   :1;
    volatile const uint32_t PRGPIOE   :1;
    volatile const uint32_t PRGPIOF   :1;
    volatile const uint32_t PRGPIOG   :1;
    volatile const uint32_t PRGPIOH   :1;
    volatile const uint32_t PRGPIOJ   :1;
    volatile const uint32_t PRGPIOK   :1;
    volatile const uint32_t PRGPIOL   :1;
    volatile const uint32_t PRGPIOM   :1;
    volatile const uint32_t PRGPION   :1;
    volatile const uint32_t PRGPIOP   :1;
    volatile const uint32_t PRGPIOQ   :1;
    const    uint32_t       reserved  :17;
}PRGPIO_TypeDef;//0x00000A08

typedef volatile struct
{
    volatile const uint32_t PRUDMA    :1;
    const    uint32_t       reserved  :31;
}PRDMA_TypeDef;//0x00000A0C

typedef volatile struct
{
    volatile const uint32_t PRHIB    :1;
    const    uint32_t       reserved :31;
}PRHIB_TypeDef;//0x00000A14

typedef volatile struct
{
    volatile const uint32_t PRUART0    :1;
    volatile const uint32_t PRUART1    :1;
    volatile const uint32_t PRUART2    :1;
    volatile const uint32_t PRUART3    :1;
    volatile const uint32_t PRUART4    :1;
    volatile const uint32_t PRUART5    :1;
    volatile const uint32_t PRUART6    :1;
    volatile const uint32_t PRUART7    :1;
    const    uint32_t       reserved   :24;
}PRUART_TypeDef;//0x00000A18

typedef volatile struct
{
    volatile const uint32_t PRSSI0    :1;
    volatile const uint32_t PRSSI1    :1;
    volatile const uint32_t PRSSI2    :1;
    volatile const uint32_t PRSSI3    :1;
    const    uint32_t       reserved  :28;
}PRSSI_TypeDef;//0x00000A1C


typedef volatile struct
{
    volatile const uint32_t PRI2C0    :1;
    volatile const uint32_t PRI2C1    :1;
    volatile const uint32_t PRI2C2    :1;
    volatile const uint32_t PRI2C3    :1;
    volatile const uint32_t PRI2C4    :1;
    volatile const uint32_t PRI2C5    :1;
    const    uint32_t       reserved  :26;
}PRI2C_TypeDef;//0x00000A20

typedef volatile struct
{
    volatile const uint32_t PRUSB          :1;
    const    uint32_t       reserved       :31;
}PRUSB_TypeDef;//0x00000A28

typedef volatile struct
{
    volatile const uint32_t PRCAN0    :1;
    volatile const uint32_t PRCAN1    :1;
    const    uint32_t       reserved  :30;
}PRCAN_TypeDef;//0x00000A34


typedef volatile struct
{
    volatile const uint32_t PRADC0    :1;
    volatile const uint32_t PRADC1    :1;
    const    uint32_t       reserved  :30;
}PRADC_TypeDef;//0x00000A38


typedef volatile struct
{
    volatile const uint32_t PRACMP    :1;
    const    uint32_t       reserved  :31;
}PRACMP_TypeDef;//0x00000A3C

typedef volatile struct
{
    volatile const uint32_t PRPWM0    :1;
    volatile const uint32_t PRPWM1    :1;
    const    uint32_t       reserved  :30;
}PRPWM_TypeDef;//0x00000A40

typedef volatile struct
{
    volatile const uint32_t PRQEI0    :1;
    volatile const uint32_t PRQEI1    :1;
    const    uint32_t       reserved  :30;
}PRQEI_TypeDef;//0x00000A44


typedef volatile struct
{
    volatile const uint32_t PREEPROM    :1;
    const    uint32_t       reserved    :31;
}PREEPROM_TypeDef;//0x00000A58


typedef volatile struct
{
volatile const uint32_t PRWMTIMER0   :1;
volatile const uint32_t PRWMTIMER1   :1;
volatile const uint32_t PRWMTIMER2   :1;
volatile const uint32_t PRWMTIMER3   :1;
volatile const uint32_t PRWMTIMER4   :1;
volatile const uint32_t PRWMTIMER5   :1;
const    uint32_t       reserved     :26;
}PRWTIMER_TypeDef;//0x00000A5C



typedef volatile struct
{
    union
    {
        volatile const uint32_t      DID0;
        DID0_TypeDef                      DID0_Bit;
    };
    union
    {
        volatile const uint32_t      DID1;
        DID1_TypeDef                      DID1_Bit;
    };
    union
    {
        volatile const uint32_t      DC0;
        DC0_TypeDef                       DC0_Bit;
    };
    const uint32_t             reserved[1];
    union
    {
        volatile const uint32_t      DC1;
        DC1_TypeDef                       DC1_Bit;
    };
    union
    {
        volatile const uint32_t      DC2;
        DC2_TypeDef                       DC2_Bit;
    };
    union
    {
        volatile const uint32_t      DC3;
        DC3_TypeDef                       DC3_Bit;
    };
    union
    {
        volatile const uint32_t      DC4;
        DC4_TypeDef                       DC4_Bit;
    };
    union
    {
        volatile const uint32_t      DC5;
        DC5_TypeDef                       DC5_Bit;
    };
    union
    {
        volatile const uint32_t      DC6;
        DC6_TypeDef                       DC6_Bit;
    };
    union
    {
        volatile const uint32_t      DC7;
        DC7_TypeDef                       DC7_Bit;
    };
    union
    {
        volatile const uint32_t      DC8;
        DC8_TypeDef                       DC8_Bit;
    };
    union
    {
        volatile uint32_t      PBORCTL;
        PBORCTL_TypeDef             PBORCTL_Bit;
    };
    const uint32_t             reserved1[3];
    union
    {
        volatile const uint32_t      SRCR0;
        SRCR0_TypeDef                     SRCR0_Bit;
    };
    union
    {
        volatile const uint32_t      SRCR1;
        SRCR1_TypeDef                    SRCR1_Bit;
    };
    union
    {
        volatile const uint32_t      SRCR2;
        SRCR2_TypeDef                     SRCR2_Bit;
    };
    const uint32_t             reserved2[1];
    union
    {
        volatile const uint32_t      RIS;
        RIS_TypeDef                       RIS_Bit;
    };
    union
    {
        volatile uint32_t      IMC;
        volatile IMC_TypeDef        IMC_Bit;
    };
    union
    {
        volatile uint32_t      MISC;
        volatile MISC_TypeDef       MISC_Bit;
    };
    union
    {
        volatile uint32_t      RESC;
        RESC_TypeDef       RESC_Bit;
    };
    union
    {
        volatile uint32_t      RCC;
        RCC_TypeDef        RCC_Bit;
    };
    const uint32_t             reserved3[2];
    union
    {
        volatile uint32_t      GPIOHBCTL;
        GPIOHBCTL_TypeDef           GPIOHBCTL_Bit;
    };
    union
    {
        volatile uint32_t      RCC2;
        RCC2_TypeDef                RCC2_Bit;
    };
    const uint32_t             reserved4[2];
    union
    {
        volatile uint32_t      MOSCCTL;
        volatile MOSCCTL_TypeDef    MOSCCTL_Bit;
    };
    const uint32_t             reserved5[32];
    union
    {
        volatile const uint32_t      RCGC0;
        RCGC0_TypeDef                     RCGC0_Bit;
    };
    union
    {
        volatile const uint32_t      RCGC1;
        RCGC1_TypeDef                     RCGC1_Bit;
    };
    union
    {
        volatile const uint32_t      RCGC2;
        RCGC2_TypeDef                     RCGC2_Bit;
    };
    const uint32_t             reserved6[1];
    union
    {
        volatile const uint32_t      SCGC0;
        SCGC0_TypeDef                     SCGC0_Bit;
    };
    union
    {
        volatile const uint32_t      SCGC1;
        SCGC1_TypeDef                     SCGC1_Bit;
    };
    union
    {
        volatile const uint32_t      SCGC2;
        SCGC2_TypeDef                     SCGC2_Bit;
    };
    const uint32_t             reserved7[1];
    union
    {
        volatile const uint32_t      DCGC0;
        DCGC0_TypeDef                     DCGC0_Bit;
    };
    union
    {
        volatile const uint32_t      DCGC1;
        DCGC1_TypeDef                     DCGC1_Bit;
    };
    union
    {
        volatile const uint32_t      DCGC2;
        DCGC2_TypeDef                     DCGC2_Bit;
    };
    const uint32_t             reserved8[6];
    union
    {
        volatile uint32_t      DSLPCLKCFG;
        DSLPCLKCFG_TypeDef          DSLPCLKCFG_Bit;
    };
    const uint32_t             reserved9[1];
    union
    {
        volatile const uint32_t      SYSPROP;
        SYSPROP_TypeDef                   SYSPROP_Bit;
    };
    union
    {
        volatile uint32_t      PIOSCCAL;
        PIOSCCAL_TypeDef            PIOSCCAL_Bit;
    };
    union
    {
        volatile const uint32_t      PIOSCSTAT;
        PIOSCSTAT_TypeDef                 PIOSCSTAT_Bit;
    };
    const uint32_t             reserved10[2];
    union
    {
        volatile const uint32_t      PLLFREQ0;
        PLLFREQ0_TypeDef                  PLLFREQ0_Bit;
    };
    union
    {
        volatile uint32_t      PLLFREQ1;
        PLLFREQ1_TypeDef            PLLFREQ1_Bit;
    };
    union
    {
        volatile const uint32_t      PLLSTAT;
        PLLSTAT_TypeDef                   PLLSTAT_Bit;
    };
    const uint32_t             reserved11[7];
    union
    {
        volatile uint32_t      SLPPWRCFG;
        SLPPWRCFG_TypeDef           SLPPWRCFG_Bit;
    };
    union
    {
        volatile uint32_t      DSLPPWRCFG;
        DSLPPWRCFG_TypeDef          DSLPPWRCFG_Bit;
    };
    union
    {
        volatile uint32_t      DC9;
        DC9_TypeDef                 DC9_Bit;
    };
    const uint32_t             reserved12[3];
    union
    {
        volatile uint32_t      NVMSTAT;
        NVMSTAT_TypeDef             NVMSTAT_Bit;
    };
    const uint32_t             reserved13[4];
    union
    {
        volatile uint32_t      LDOSPCTL;
        LDOSPCTL_TypeDef            LDOSPCTL_Bit;
    };
    union
    {
        volatile const uint32_t      LDOSPCAL;
        LDOSPCAL_TypeDef                  LDOSPCAL_Bit;
    };
    union
    {
        volatile uint32_t      LDODPCTL;
        LDODPCTL_TypeDef            LDODPCTL_Bit;
    };
    union
    {
        volatile const uint32_t      LDODPCAL;
        LDODPCAL_TypeDef                  LDODPCAL_Bit;
    };
    const uint32_t             reserved14[2];
    union
    {
        volatile const uint32_t      SDPMST;
        SDPMST_TypeDef                    SDPMST_Bit;
    };
    const uint32_t             reserved15[76];






    union
    {
        volatile const uint32_t      PPWD;
        PPWD_TypeDef                      PPWD_Bit;
    };
    union
    {
        volatile const uint32_t      PPTIMER;
        PPTIMER_TypeDef                   PPTIMER_Bit;
    };
    union
    {
        volatile const uint32_t      PPGPIO;
        PPGPIO_TypeDef                    PPGPIO_Bit;
    };
    union
    {
        volatile const uint32_t      PPDMA;
        PPDMA_TypeDef                     PPDMA_Bit;
    };
    const uint32_t             reserved16[1];
    union
    {
        volatile const uint32_t      PPHIB;
        PPHIB_TypeDef                     PPHIB_Bit;
    };
    union
    {
        volatile const uint32_t      PPUART;
        PPUART_TypeDef                    PPUART_Bit;
    };
    union
    {
        volatile const uint32_t      PPSSI;
        PPSSI_TypeDef                     PPSSI_Bit;
    };
    union
    {
        volatile const uint32_t      PPI2C;
        PPI2C_TypeDef                     PPI2C_Bit;
    };
    const uint32_t             reserved17[1];
    union
    {
        volatile const uint32_t      PPUSB;
        PPUSB_TypeDef                     PPUSB_Bit;
    };
    const uint32_t             reserved18[2];
    union
    {
        volatile const uint32_t      PPCAN;
        PPCAN_TypeDef                     PPCAN_Bit;
    };
    union
    {
        volatile const uint32_t      PPADC;
        PPADC_TypeDef                     PPADC_Bit;
    };
    union
    {
        volatile const uint32_t      PPACMP;
        PPACMP_TypeDef                    PPACMP_Bit;
    };
    union
    {
        volatile const uint32_t      PPPWM;
        PPPWM_TypeDef                     PPPWM_Bit;
    };
    union
    {
        volatile const uint32_t      PPQEI;
        PPQEI_TypeDef                     PPQEI_Bit;
    };
    const uint32_t             reserved19[4];
    union
    {
        volatile const uint32_t      PPEEPROM;
        PPEEPROM_TypeDef                  PPEEPROM_Bit;
    };
    union
    {
        volatile const uint32_t      PPWTIMER;
        PPWTIMER_TypeDef                  PPWTIMER_Bit;
    };
    const uint32_t             reserved20[104];









    union
    {
        volatile uint32_t      SRWD;
        SRWD_TypeDef                SRWD_Bit;
    };
    union
    {
        volatile uint32_t      SRTIMER;
        SRTIMER_TypeDef             SRTIMER_Bit;
    };
    union
    {
        volatile uint32_t      SRGPIO;
        SRGPIO_TypeDef              SRGPIO_Bit;
    };
    union
    {
        volatile uint32_t      SRDMA;
        SRDMA_TypeDef               SRDMA_Bit;
    };
    const uint32_t             reserved21[1];
    union
    {
        volatile uint32_t      SRHIB;
        SRHIB_TypeDef               SRHIB_Bit;
    };
    union
    {
        volatile uint32_t      SRUART;
        SRUART_TypeDef              SRUART_Bit;
    };
    union
    {
        volatile uint32_t      SRSSI;
        SRSSI_TypeDef               SRSSI_Bit;
    };
    union
    {
        volatile uint32_t      SRI2C;
        SRI2C_TypeDef               SRI2C_Bit;
    };
    const uint32_t             reserved22[1];
    union
    {
        volatile uint32_t      SRUSB;
        SRUSB_TypeDef               SRUSB_Bit;
    };
    const uint32_t             reserved23[2];
    union
    {
        volatile uint32_t      SRCAN;
        SRCAN_TypeDef               SRCAN_Bit;
    };
    union
    {
        volatile uint32_t      SRADC;
        SRADC_TypeDef               SRADC_Bit;
    };
    union
    {
        volatile uint32_t      SRACMP;
        SRACMP_TypeDef              SRACMP_Bit;
    };
    union
    {
        volatile uint32_t      SRPWM;
        SRPWM_TypeDef               SRPWM_Bit;
    };
    union
    {
        volatile uint32_t      SRQEI;
        SRQEI_TypeDef               SRQEI_Bit;
    };
    const uint32_t             reserved24[4];
    union
    {
        volatile uint32_t      SREEPROM;
        SREEPROM_TypeDef            SREEPROM_Bit;
    };
    union
    {
        volatile uint32_t      SRWTIMER;
        SRWTIMER_TypeDef            SRWTIMER_Bit;
    };
    const uint32_t             reserved25[40];







    union
    {
        volatile uint32_t      RCGCWD;
        RCGCWD_TypeDef              RCGCWD_Bit;
    };
    union
    {
        volatile uint32_t      RCGCTIMER;
        RCGCTIMER_TypeDef           RCGCTIMER_Bit;
    };
    union
    {
        volatile uint32_t      RCGCGPIO;
        RCGCGPIO_TypeDef            RCGCGPIO_Bit;
    };
    union
    {
        volatile uint32_t      RCGCDMA;
        RCGCDMA_TypeDef             RCGCDMA_Bit;
    };
    const uint32_t             reserved26[1];
    union
    {
        volatile uint32_t      RCGCHIB;
        RCGCHIB_TypeDef             RCGCHIB_Bit;
    };
    union
    {
        volatile uint32_t      RCGCUART;
        RCGCUART_TypeDef            RCGCUART_Bit;
    };
    union
    {
        volatile uint32_t      RCGCSSI;
        RCGCSSI_TypeDef             RCGCSSI_Bit;
    };
    union
    {
        volatile uint32_t      RCGCI2C;
        RCGCI2C_TypeDef             RCGCI2C_Bit;
    };
    const uint32_t             reserved27[1];
    union
    {
        volatile uint32_t      RCGCUSB;
        RCGCUSB_TypeDef             RCGCUSB_Bit;
    };
    const uint32_t             reserved28[2];
    union
    {
        volatile uint32_t      RCGCCAN;
        RCGCCAN_TypeDef             RCGCCAN_Bit;
    };
    union
    {
        volatile uint32_t      RCGCADC;
        RCGCADC_TypeDef             RCGCADC_Bit;
    };
    union
    {
        volatile uint32_t      RCGCACMP;
        RCGCACMP_TypeDef            RCGCACMP_Bit;
    };
    union
    {
        volatile uint32_t      RCGCPWM;
        RCGCPWM_TypeDef             RCGCPWM_Bit;
    };
    union
    {
        volatile uint32_t      RCGCQEI;
        RCGCQEI_TypeDef             RCGCQEI_Bit;
    };
    const uint32_t             reserved29[4];
    union
    {
        volatile uint32_t      RCGCEEPROM;
        RCGCEEPROM_TypeDef          RCGCEEPROM_Bit;
    };
    union
    {
        volatile uint32_t      RCGCWTIMER;
        RCGCWTIMER_TypeDef          RCGCWTIMER_Bit;
    };
    const uint32_t             reserved30[40];








    union
    {
        volatile uint32_t      SCGCWD;
        SCGCWD_TypeDef              SCGCWD_Bit;
    };
    union
    {
        volatile uint32_t      SCGCTIMER;
        SCGCTIMER_TypeDef           SCGCTIMER_Bit;
    };
    union
    {
        volatile uint32_t      SCGCGPIO;
        SCGCGPIO_TypeDef            SCGCGPIO_Bit;
    };
    union
    {
        volatile uint32_t      SCGCDMA;
        SCGCDMA_TypeDef             SCGCDMA_Bit;
    };
    const uint32_t             reserved31[1];
    union
    {
        volatile uint32_t      SCGCHIB;
        SCGCHIB_TypeDef             SCGCHIB_Bit;
    };
    union
    {
        volatile uint32_t      SCGCUART;
        SCGCUART_TypeDef            SCGCUART_Bit;
    };
    union
    {
        volatile uint32_t      SCGCSSI;
        SCGCSSI_TypeDef             SCGCSSI_Bit;
    };
    union
    {
        volatile uint32_t      SCGCI2C;
        SCGCI2C_TypeDef             SCGCI2C_Bit;
    };
    const uint32_t             reserved32[1];
    union
    {
        volatile uint32_t      SCGCUSB;
        SCGCUSB_TypeDef             SCGCUSB_Bit;
    };
    const uint32_t             reserved33[2];
    union
    {
        volatile uint32_t      SCGCCAN;
        SCGCCAN_TypeDef             SCGCCAN_Bit;
    };
    union
    {
        volatile uint32_t      SCGCADC;
        SCGCADC_TypeDef             SCGCADC_Bit;
    };
    union
    {
        volatile uint32_t      SCGCACMP;
        SCGCACMP_TypeDef            SCGCACMP_Bit;
    };
    union
    {
        volatile uint32_t      SCGCPWM;
        SCGCPWM_TypeDef             SCGCPWM_Bit;
    };
    union
    {
        volatile uint32_t      SCGCQEI;
        SCGCQEI_TypeDef             SCGCQEI_Bit;
    };
    const uint32_t             reserved34[4];
    union
    {
        volatile uint32_t      SCGCEEPROM;
        SCGCEEPROM_TypeDef          SCGCEEPROM_Bit;
    };
    union
    {
        volatile uint32_t      SCGCWTIMER;
        SCGCWTIMER_TypeDef          SCGCWTIMER_Bit;
    };
    const uint32_t             reserved35[40];








    union
    {
        volatile uint32_t      DCGCWD;
        DCGCWD_TypeDef              DCGCWD_Bit;
    };
    union
    {
        volatile uint32_t      DCGCTIMER;
        DCGCTIMER_TypeDef           DCGCTIMER_Bit;
    };
    union
    {
        volatile uint32_t      DCGCGPIO;
        DCGCGPIO_TypeDef            DCGCGPIO_Bit;
    };
    union
    {
        volatile uint32_t      DCGCDMA;
        DCGCDMA_TypeDef             DCGCDMA_Bit;
    };
    const uint32_t             reserved36[1];
    union
    {
        volatile uint32_t      DCGCHIB;
        DCGCHIB_TypeDef             DCGCHIB_Bit;
    };
    union
    {
        volatile uint32_t      DCGCUART;
        DCGCUART_TypeDef            DCGCUART_Bit;
    };
    union
    {
        volatile uint32_t      DCGCSSI;
        DCGCSSI_TypeDef             DCGCSSI_Bit;
    };
    union
    {
        volatile uint32_t      DCGCI2C;
        DCGCI2C_TypeDef             DCGCI2C_Bit;
    };
    const uint32_t             reserved37[1];
    union
    {
        volatile uint32_t      DCGCUSB;
        DCGCUSB_TypeDef             DCGCUSB_Bit;
    };
    const uint32_t             reserved38[2];
    union
    {
        volatile uint32_t      DCGCCAN;
        DCGCCAN_TypeDef             DCGCCAN_Bit;
    };
    union
    {
        volatile uint32_t      DCGCADC;
        DCGCADC_TypeDef             DCGCADC_Bit;
    };
    union
    {
        volatile uint32_t      DCGCACMP;
        DCGCACMP_TypeDef            DCGCACMP_Bit;
    };
    union
    {
        volatile uint32_t      DCGCPWM;
        DCGCPWM_TypeDef             DCGCPWM_Bit;
    };
    union
    {
        volatile uint32_t      DCGCQEI;
        DCGCQEI_TypeDef             DCGCQEI_Bit;
    };
    const uint32_t             reserved39[4];
    union
    {
        volatile uint32_t      DCGCEEPROM;
        DCGCEEPROM_TypeDef          DCGCEEPROM_Bit;
    };
    union
    {
        volatile uint32_t      DCGCWTIMER;
        DCGCWTIMER_TypeDef          DCGCWTIMER_Bit;
    };
    const uint32_t             reserved40[104];








    union
    {
        volatile const uint32_t      PRWD;
        PRWD_TypeDef                      PRWD_Bit;
    };
    union
    {
        volatile const uint32_t      PRTIMER;
        PRTIMER_TypeDef                   PRTIMER_Bit;
    };
    union
    {
        volatile const uint32_t      PRGPIO;
        PRGPIO_TypeDef                    PRGPIO_Bit;
    };
    union
    {
        volatile const uint32_t      PRDMA;
        PRDMA_TypeDef                     PRDMA_Bit;
    };
    const uint32_t             reserved41[1];
    union
    {
        volatile const uint32_t      PRHIB;
        PRHIB_TypeDef                     PRHIB_Bit;
    };
    union
    {
        volatile const uint32_t      PRUART;
        PRUART_TypeDef                    PRUART_Bit;
    };
    union
    {
        volatile const uint32_t      PRSSI;
        PRSSI_TypeDef                     PRSSI_Bit;
    };
    union
    {
        volatile const uint32_t      PRI2C;
        PRI2C_TypeDef                     PRI2C_Bit;
    };
    const uint32_t             reserved42[1];
    union
    {
        volatile const uint32_t      PRUSB;
        PRUSB_TypeDef                     PRUSB_Bit;
    };
    const uint32_t             reserved43[2];
    union
    {
        volatile const uint32_t      PRCAN;
        PRCAN_TypeDef                     PRCAN_Bit;
    };
    union
    {
        volatile const uint32_t      PRADC;
        PRADC_TypeDef                     PRADC_Bit;
    };
    union
    {
        volatile const uint32_t      PRACMP;
        PRACMP_TypeDef                    PRACMP_Bit;
    };
    union
    {
        volatile const uint32_t      PRPWM;
        PRPWM_TypeDef                     PRPWM_Bit;
    };
    union
    {
        volatile const uint32_t      PRQEI;
        PRQEI_TypeDef                     PRQEI_Bit;
    };
    const uint32_t             reserved44[4];
    union
    {
        volatile const uint32_t      PREEPROM;
        PREEPROM_TypeDef                  PREEPROM_Bit;
    };
    union
    {
        volatile const uint32_t      PRWTIMER;
        PRWTIMER_TypeDef                  PRWTIMER_Bit;
    };
    const uint32_t             reserved45[360];


}SYSCTL_TypeDef;

#define SYSCTL                 (((SYSCTL_TypeDef*)(SYSCTL_BASE)))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 DID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DID0_OFFSET     (0x0000)
#define SYSCTL_DID0            (((DID0_TypeDef*)(SYSCTL_BASE+SYSCTL_DID0_OFFSET )))
#define SYSCTL_DID0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DID0_OFFSET)))

//--------
#define SYSCTL_DID0_R_MINOR_MASK       (0x000000FF)
#define SYSCTL_DID0_R_MINOR_BIT        (0)
#define SYSCTL_DID0_R_MINOR_INI        (0x00000000)
#define SYSCTL_DID0_R_MINOR_1METAL     (0x00000001)
#define SYSCTL_DID0_R_MINOR_2METAL     (0x00000002)
#define SYSCTL_DID0_R_MINOR_3METAL     (0x00000003)
#define SYSCTL_DID0_R_MINOR_4METAL     (0x00000004)
#define SYSCTL_DID0_R_MINOR_5METAL     (0x00000005)

#define SYSCTL_DID0_MINOR_MASK         (0x000000FF)
#define SYSCTL_DID0_MINOR_INI          (0x00000000)
#define SYSCTL_DID0_MINOR_1METAL       (0x00000001)
#define SYSCTL_DID0_MINOR_2METAL       (0x00000002)
#define SYSCTL_DID0_MINOR_3METAL       (0x00000003)
#define SYSCTL_DID0_MINOR_4METAL       (0x00000004)
#define SYSCTL_DID0_MINOR_5METAL       (0x00000005)
//--------

//--------
#define SYSCTL_DID0_R_MAJOR_MASK     (0x0000FF00)
#define SYSCTL_DID0_R_MAJOR_BIT      (8)
#define SYSCTL_DID0_R_MAJOR_REVA     (0x00000000)
#define SYSCTL_DID0_R_MAJOR_REVB     (0x00000100)
#define SYSCTL_DID0_R_MAJOR_REVC     (0x00000200)
#define SYSCTL_DID0_R_MAJOR_REVD     (0x00000300)
#define SYSCTL_DID0_R_MAJOR_REVE     (0x00000400)
#define SYSCTL_DID0_R_MAJOR_REVF     (0x00000500)

#define SYSCTL_DID0_MAJOR_MASK       (0x000000FF)
#define SYSCTL_DID0_MAJOR_REVA       (0x00000000)
#define SYSCTL_DID0_MAJOR_REVB       (0x00000001)
#define SYSCTL_DID0_MAJOR_REVC       (0x00000002)
#define SYSCTL_DID0_MAJOR_REVD       (0x00000003)
#define SYSCTL_DID0_MAJOR_REVE       (0x00000004)
#define SYSCTL_DID0_MAJOR_REVF       (0x00000005)
//--------

//--------
#define SYSCTL_DID0_R_CLASS_MASK     (0x00FF0000)
#define SYSCTL_DID0_R_CLASS_BIT      (16)
#define SYSCTL_DID0_R_CLASS_TIVAC    (0x00050000)

#define SYSCTL_DID0_CLASS_MASK       (0x000000FF)
#define SYSCTL_DID0_CLASS_TIVAC      (0x00000005)
//--------

//--------
#define SYSCTL_DID0_R_VER_MASK     (0x70000000)
#define SYSCTL_DID0_R_VER_BIT      (28)
#define SYSCTL_DID0_R_VER_FIRST    (0x00000000)
#define SYSCTL_DID0_R_VER_SECOND   (0x10000000)
#define SYSCTL_DID0_R_VER_THIRD    (0x20000000)

#define SYSCTL_DID0_VER_MASK     (0x00000007)
#define SYSCTL_DID0_VER_FIRST    (0x00000000)
#define SYSCTL_DID0_VER_SECOND   (0x00000001)
#define SYSCTL_DID0_VER_THIRD    (0x00000002)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 DID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DID1_OFFSET     (0x0004)
#define SYSCTL_DID1            (((DID1_TypeDef*)(SYSCTL_BASE+SYSCTL_DID1_OFFSET )))
#define SYSCTL_DID1_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DID1_OFFSET)))


//--------
#define SYSCTL_DID1_R_QUAL_MASK       (0x00000003)
#define SYSCTL_DID1_R_QUAL_BIT        (0)
#define SYSCTL_DID1_R_QUAL_ENG        (0x00000000)
#define SYSCTL_DID1_R_QUAL_PILOT      (0x00000001)
#define SYSCTL_DID1_R_QUAL_FULLY      (0x00000002)

#define SYSCTL_DID1_QUAL_MASK         (0x00000003)
#define SYSCTL_DID1_QUAL_ENG          (0x00000000)
#define SYSCTL_DID1_QUAL_PILOT        (0x00000001)
#define SYSCTL_DID1_QUAL_FULLY        (0x00000002)
//--------

//--------
#define SYSCTL_DID1_R_ROHS_MASK       (0x00000004)
#define SYSCTL_DID1_R_ROHS_BIT        (2)
#define SYSCTL_DID1_R_ROHS_NOROHS     (0x00000000)
#define SYSCTL_DID1_R_ROHS_ROHS       (0x00000004)

#define SYSCTL_DID1_ROHS_MASK         (0x00000001)
#define SYSCTL_DID1_ROHS_NOROHS       (0x00000000)
#define SYSCTL_DID1_ROHS_ROHS         (0x00000001)
//--------

//--------
#define SYSCTL_DID1_R_PKG_MASK       (0x00000018)
#define SYSCTL_DID1_R_PKG_BIT        (3)
#define SYSCTL_DID1_R_PKG_LQFP       (0x00000008)
#define SYSCTL_DID1_R_PKG_BGA        (0x00000010)

#define SYSCTL_DID1_PKG_MASK         (0x00000003)
#define SYSCTL_DID1_PKG_LQFP         (0x00000001)
#define SYSCTL_DID1_PKG_BGA          (0x00000002)
//--------

//--------
#define SYSCTL_DID1_R_TEMP_MASK       (0x000000E0)
#define SYSCTL_DID1_R_TEMP_BIT        (5)
#define SYSCTL_DID1_R_TEMP_IND        (0x00000020)
#define SYSCTL_DID1_R_TEMP_EXT        (0x00000040)
#define SYSCTL_DID1_R_TEMP_BOTH       (0x00000060)

#define SYSCTL_DID1_TEMP_MASK         (0x00000007)
#define SYSCTL_DID1_TEMP_IND          (0x00000001)
#define SYSCTL_DID1_TEMP_EXT          (0x00000002)
#define SYSCTL_DID1_TEMP_BOTH         (0x00000003)
//--------

//--------
#define SYSCTL_DID1_R_PINCOUNT_MASK       (0x0000E000)
#define SYSCTL_DID1_R_PINCOUNT_BIT        (13)
#define SYSCTL_DID1_R_PINCOUNT_100        (0x00004000)
#define SYSCTL_DID1_R_PINCOUNT_64         (0x00006000)
#define SYSCTL_DID1_R_PINCOUNT_144        (0x00008000)
#define SYSCTL_DID1_R_PINCOUNT_157        (0x0000A000)
#define SYSCTL_DID1_R_PINCOUNT_168        (0x0000C000)

#define SYSCTL_DID1_PINCOUNT_MASK         (0x00000007)
#define SYSCTL_DID1_PINCOUNT_100          (0x00000002)
#define SYSCTL_DID1_PINCOUNT_64           (0x00000003)
#define SYSCTL_DID1_PINCOUNT_144          (0x00000004)
#define SYSCTL_DID1_PINCOUNT_157          (0x00000005)
#define SYSCTL_DID1_PINCOUNT_168          (0x00000006)
//--------

//--------
#define SYSCTL_DID1_R_PARTNO_MASK       (0x00FF0000)
#define SYSCTL_DID1_R_PARTNO_BIT        (16)
#define SYSCTL_DID1_R_PARTNO_TM4C123    (0x00A10000)

#define SYSCTL_DID1_PARTNO_MASK         (0x000000FF)
#define SYSCTL_DID1_PARTNO_TM4C123      (0x000000A1)
//--------

//--------
#define SYSCTL_DID1_R_FAM_MASK       (0x0F000000)
#define SYSCTL_DID1_R_FAM_BIT        (24)
#define SYSCTL_DID1_R_FAM_TM4        (0x00000000)

#define SYSCTL_DID1_FAM_MASK         (0x0000000F)
#define SYSCTL_DID1_FAM_TM4          (0x00000000)
//--------

//--------
#define SYSCTL_DID1_R_VER_MASK       (0xF0000000)
#define SYSCTL_DID1_R_VER_BIT        (28)
#define SYSCTL_DID1_R_VER_FIRST      (0x00000000)
#define SYSCTL_DID1_R_VER_SECOND     (0x10000000)
#define SYSCTL_DID1_R_VER_THIRD      (0x20000000)

#define SYSCTL_DID1_VER_MASK         (0x0000000F)
#define SYSCTL_DID1_VER_FIRST        (0x00000000)
#define SYSCTL_DID1_VER_SECOND       (0x00000001)
#define SYSCTL_DID1_VER_THIRD        (0x00000002)
//--------

#define SYSCTL_DID1_ROHS_BB (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DID1_OFFSET)*32)+(2 *4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 DC0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DC0_OFFSET     (0x0008)
#define SYSCTL_DC0            (((DC0_TypeDef*)(SYSCTL_BASE+SYSCTL_DC0_OFFSET )))
#define SYSCTL_DC0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC0_OFFSET)))


//--------
#define SYSCTL_DC0_R_FLASHSZ_MASK       (0x0000FFFF)
#define SYSCTL_DC0_R_FLASHSZ_BIT        (0)
#define SYSCTL_DC0_R_FLASHSZ_8K         (0x00000003)
#define SYSCTL_DC0_R_FLASHSZ_16K        (0x00000007)
#define SYSCTL_DC0_R_FLASHSZ_32K        (0x0000000F)
#define SYSCTL_DC0_R_FLASHSZ_64K        (0x0000001F)
#define SYSCTL_DC0_R_FLASHSZ_96K        (0x0000002F)
#define SYSCTL_DC0_R_FLASHSZ_128K       (0x0000003F)
#define SYSCTL_DC0_R_FLASHSZ_192K       (0x0000005F)
#define SYSCTL_DC0_R_FLASHSZ_256K       (0x0000007F)

#define SYSCTL_DC0_FLASHSZ_MASK       (0x0000FFFF)
#define SYSCTL_DC0_FLASHSZ_8K         (0x00000003)
#define SYSCTL_DC0_FLASHSZ_16K        (0x00000007)
#define SYSCTL_DC0_FLASHSZ_32K        (0x0000000F)
#define SYSCTL_DC0_FLASHSZ_64K        (0x0000001F)
#define SYSCTL_DC0_FLASHSZ_96K        (0x0000002F)
#define SYSCTL_DC0_FLASHSZ_128K       (0x0000003F)
#define SYSCTL_DC0_FLASHSZ_192K       (0x0000005F)
#define SYSCTL_DC0_FLASHSZ_256K       (0x0000007F)
//--------

//--------
#define SYSCTL_DC0_R_SRAMSZ_MASK       (0xFFFF0000)
#define SYSCTL_DC0_R_SRAMSZ_BIT        (16)
#define SYSCTL_DC0_R_SRAMSZ_2K         (0x00070000)
#define SYSCTL_DC0_R_SRAMSZ_4K         (0x000F0000)
#define SYSCTL_DC0_R_SRAMSZ_6K         (0x00170000)
#define SYSCTL_DC0_R_SRAMSZ_8K         (0x001F0000)
#define SYSCTL_DC0_R_SRAMSZ_12K        (0x002F0000)
#define SYSCTL_DC0_R_SRAMSZ_16K        (0x003F0000)
#define SYSCTL_DC0_R_SRAMSZ_20K        (0x004F0000)
#define SYSCTL_DC0_R_SRAMSZ_24K        (0x005F0000)
#define SYSCTL_DC0_R_SRAMSZ_32K        (0x007F0000)

#define SYSCTL_DC0_SRAMSZ_MASK       (0x0000FFFF)
#define SYSCTL_DC0_SRAMSZ_2K         (0x00000007)
#define SYSCTL_DC0_SRAMSZ_4K         (0x0000000F)
#define SYSCTL_DC0_SRAMSZ_6K         (0x00000017)
#define SYSCTL_DC0_SRAMSZ_8K         (0x0000001F)
#define SYSCTL_DC0_SRAMSZ_12K        (0x0000002F)
#define SYSCTL_DC0_SRAMSZ_16K        (0x0000003F)
#define SYSCTL_DC0_SRAMSZ_20K        (0x0000004F)
#define SYSCTL_DC0_SRAMSZ_24K        (0x0000005F)
#define SYSCTL_DC0_SRAMSZ_32K        (0x0000007F)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 DC1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DC1_OFFSET     (0x0010)
#define SYSCTL_DC1            (((DC1_TypeDef*)(SYSCTL_BASE+SYSCTL_DC1_OFFSET )))
#define SYSCTL_DC1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC1_OFFSET)))


//--------
#define SYSCTL_DC1_R_DCJTAG_MASK       (0x00000001)
#define SYSCTL_DC1_R_DCJTAG_BIT        (0)
#define SYSCTL_DC1_R_DCJTAG_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_R_DCJTAG_PRESENT    (0x00000001)

#define SYSCTL_DC1_DCJTAG_MASK       (0x00000001)
#define SYSCTL_DC1_DCJTAG_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_DCJTAG_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC1_R_DCSWD_MASK       (0x00000002)
#define SYSCTL_DC1_R_DCSWD_BIT        (1)
#define SYSCTL_DC1_R_DCSWD_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_R_DCSWD_PRESENT    (0x00000002)

#define SYSCTL_DC1_DCSWD_MASK       (0x00000001)
#define SYSCTL_DC1_DCSWD_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_DCSWD_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC1_R_DCSWO_MASK       (0x00000004)
#define SYSCTL_DC1_R_DCSWO_BIT        (2)
#define SYSCTL_DC1_R_DCSWO_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_R_DCSWO_PRESENT    (0x00000004)

#define SYSCTL_DC1_DCSWO_MASK       (0x00000001)
#define SYSCTL_DC1_DCSWO_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_DCSWO_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC1_R_DCWDT0_MASK       (0x00000008)
#define SYSCTL_DC1_R_DCWDT0_BIT        (3)
#define SYSCTL_DC1_R_DCWDT0_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_R_DCWDT0_PRESENT    (0x00000008)

#define SYSCTL_DC1_DCWDT0_MASK       (0x00000001)
#define SYSCTL_DC1_DCWDT0_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_DCWDT0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC1_R_DCPLL_MASK       (0x00000010)
#define SYSCTL_DC1_R_DCPLL_BIT        (4)
#define SYSCTL_DC1_R_DCPLL_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_R_DCPLL_PRESENT    (0x00000010)

#define SYSCTL_DC1_DCPLL_MASK       (0x00000001)
#define SYSCTL_DC1_DCPLL_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_DCPLL_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC1_R_DCTEMPSNS_MASK       (0x00000020)
#define SYSCTL_DC1_R_DCTEMPSNS_BIT        (5)
#define SYSCTL_DC1_R_DCTEMPSNS_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_R_DCTEMPSNS_PRESENT    (0x00000010)

#define SYSCTL_DC1_DCTEMPSNS_MASK       (0x00000001)
#define SYSCTL_DC1_DCTEMPSNS_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_DCTEMPSNS_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC1_R_DCHIB_MASK       (0x00000040)
#define SYSCTL_DC1_R_DCHIB_BIT        (6)
#define SYSCTL_DC1_R_DCHIB_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_R_DCHIB_PRESENT    (0x00000040)

#define SYSCTL_DC1_DCHIB_MASK       (0x00000001)
#define SYSCTL_DC1_DCHIB_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_DCHIB_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC1_R_DCMPU_MASK       (0x00000080)
#define SYSCTL_DC1_R_DCMPU_BIT        (7)
#define SYSCTL_DC1_R_DCMPU_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_R_DCMPU_PRESENT    (0x00000080)

#define SYSCTL_DC1_DCMPU_MASK       (0x00000001)
#define SYSCTL_DC1_DCMPU_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_DCMPU_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC1_R_DCMAXADC0SPD_MASK       (0x00000300)
#define SYSCTL_DC1_R_DCMAXADC0SPD_BIT        (8)
#define SYSCTL_DC1_R_DCMAXADC0SPD_125K       (0x00000000)
#define SYSCTL_DC1_R_DCMAXADC0SPD_250K       (0x00000100)
#define SYSCTL_DC1_R_DCMAXADC0SPD_500K       (0x00000200)
#define SYSCTL_DC1_R_DCMAXADC0SPD_1M         (0x00000300)

#define SYSCTL_DC1_DCMAXADC0SPD_MASK       (0x00000003)
#define SYSCTL_DC1_DCMAXADC0SPD_125K       (0x00000000)
#define SYSCTL_DC1_DCMAXADC0SPD_250K       (0x00000001)
#define SYSCTL_DC1_DCMAXADC0SPD_500K       (0x00000002)
#define SYSCTL_DC1_DCMAXADC0SPD_1M         (0x00000003)
//--------

//--------
#define SYSCTL_DC1_R_DCMAXADC1SPD_MASK       (0x00000C00)
#define SYSCTL_DC1_R_DCMAXADC1SPD_BIT        (10)
#define SYSCTL_DC1_R_DCMAXADC1SPD_125K       (0x00000000)
#define SYSCTL_DC1_R_DCMAXADC1SPD_250K       (0x00000400)
#define SYSCTL_DC1_R_DCMAXADC1SPD_500K       (0x00000600)
#define SYSCTL_DC1_R_DCMAXADC1SPD_1M         (0x00000800)

#define SYSCTL_DC1_DCMAXADC1SPD_MASK       (0x00000003)
#define SYSCTL_DC1_DCMAXADC1SPD_125K       (0x00000000)
#define SYSCTL_DC1_DCMAXADC1SPD_250K       (0x00000001)
#define SYSCTL_DC1_DCMAXADC1SPD_500K       (0x00000002)
#define SYSCTL_DC1_DCMAXADC1SPD_1M         (0x00000003)
//--------

//--------
#define SYSCTL_DC1_R_DCMINSYSDIV_MASK       (0x0000F000)
#define SYSCTL_DC1_R_DCMINSYSDIV_BIT        (12)
#define SYSCTL_DC1_R_DCMINSYSDIV_PLL2_5     (0x00002000)
#define SYSCTL_DC1_R_DCMINSYSDIV_PLL4       (0x00003000)
#define SYSCTL_DC1_R_DCMINSYSDIV_PLL5       (0x00004000)
#define SYSCTL_DC1_R_DCMINSYSDIV_PLL8       (0x00007000)
#define SYSCTL_DC1_R_DCMINSYSDIV_PLL10      (0x00009000)

#define SYSCTL_DC1_DCMINSYSDIV_MASK       (0x0000000F)
#define SYSCTL_DC1_DCMINSYSDIV_PLL2_5     (0x00000002)
#define SYSCTL_DC1_DCMINSYSDIV_PLL4       (0x00000003)
#define SYSCTL_DC1_DCMINSYSDIV_PLL5       (0x00000004)
#define SYSCTL_DC1_DCMINSYSDIV_PLL8       (0x00000007)
#define SYSCTL_DC1_DCMINSYSDIV_PLL10      (0x00000009)
//--------

//--------
#define SYSCTL_DC1_R_DCADC0_MASK       (0x00010000)
#define SYSCTL_DC1_R_DCADC0_BIT        (16)
#define SYSCTL_DC1_R_DCADC0_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_R_DCADC0_PRESENT    (0x00010000)

#define SYSCTL_DC1_DCADC0_MASK       (0x00000001)
#define SYSCTL_DC1_DCADC0_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_DCADC0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC1_R_DCADC1_MASK       (0x00020000)
#define SYSCTL_DC1_R_DCADC1_BIT        (17)
#define SYSCTL_DC1_R_DCADC1_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_R_DCADC1_PRESENT    (0x00020000)

#define SYSCTL_DC1_DCADC1_MASK       (0x00000001)
#define SYSCTL_DC1_DCADC1_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_DCADC1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC1_R_DCPWM0_MASK       (0x00100000)
#define SYSCTL_DC1_R_DCPWM0_BIT        (20)
#define SYSCTL_DC1_R_DCPWM0_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_R_DCPWM0_PRESENT    (0x00100000)

#define SYSCTL_DC1_DCPWM0_MASK       (0x00000001)
#define SYSCTL_DC1_DCPWM0_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_DCPWM0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC1_R_DCPWM1_MASK       (0x00200000)
#define SYSCTL_DC1_R_DCPWM1_BIT        (21)
#define SYSCTL_DC1_R_DCPWM1_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_R_DCPWM1_PRESENT    (0x00200000)

#define SYSCTL_DC1_DCPWM1_MASK       (0x00000001)
#define SYSCTL_DC1_DCPWM1_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_DCPWM1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC1_R_DCCAN0_MASK       (0x01000000)
#define SYSCTL_DC1_R_DCCAN0_BIT        (24)
#define SYSCTL_DC1_R_DCCAN0_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_R_DCCAN0_PRESENT    (0x01000000)

#define SYSCTL_DC1_DCCAN0_MASK       (0x00000001)
#define SYSCTL_DC1_DCCAN0_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_DCCAN0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC1_R_DCCAN1_MASK       (0x02000000)
#define SYSCTL_DC1_R_DCCAN1_BIT        (25)
#define SYSCTL_DC1_R_DCCAN1_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_R_DCCAN1_PRESENT    (0x02000000)

#define SYSCTL_DC1_DCCAN1_MASK       (0x00000001)
#define SYSCTL_DC1_DCCAN1_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_DCCAN1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC1_R_DCWDT1_MASK       (0x10000000)
#define SYSCTL_DC1_R_DCWDT1_BIT        (28)
#define SYSCTL_DC1_R_DCWDT1_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_R_DCWDT1_PRESENT    (0x10000000)

#define SYSCTL_DC1_DCWDT1_MASK       (0x00000001)
#define SYSCTL_DC1_DCWDT1_NOPRESENT  (0x00000000)
#define SYSCTL_DC1_DCWDT1_PRESENT    (0x00000001)
//--------


#define SYSCTL_DC1_DCJTAG_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32)+(0*4))))
#define SYSCTL_DC1_DCSWD_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32)+(1*4))))
#define SYSCTL_DC1_DCSWO_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32)+(2*4))))
#define SYSCTL_DC1_DCWDT0_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32)+(3*4))))
#define SYSCTL_DC1_DCPLL_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32)+(4*4))))
#define SYSCTL_DC1_DCTEMPSNS_BB   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32)+(5*4))))
#define SYSCTL_DC1_DCHIB_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32)+(6*4))))
#define SYSCTL_DC1_DCMPU_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32)+(7*4))))
#define SYSCTL_DC1_DCADC0_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32)+(16*4))))
#define SYSCTL_DC1_DCADC1_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32)+(17*4))))
#define SYSCTL_DC1_DCPWM0_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32)+(20*4))))
#define SYSCTL_DC1_DCPWM1_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32)+(21*4))))
#define SYSCTL_DC1_DCCAN0_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32)+(24*4))))
#define SYSCTL_DC1_DCCAN1_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32)+(25*4))))
#define SYSCTL_DC1_DCWDT1_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC1_OFFSET)*32)+(28*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 DC2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DC2_OFFSET     (0x0014)
#define SYSCTL_DC2            (((DC2_TypeDef*)(SYSCTL_BASE+SYSCTL_DC2_OFFSET )))
#define SYSCTL_DC2_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC2_OFFSET)))


//--------
#define SYSCTL_DC2_R_DCUART0_MASK       (0x00000001)
#define SYSCTL_DC2_R_DCUART0_BIT        (0)
#define SYSCTL_DC2_R_DCUART0_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCUART0_PRESENT    (0x00000001)

#define SYSCTL_DC2_DCUART0_MASK       (0x00000001)
#define SYSCTL_DC2_DCUART0_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCUART0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC2_R_DCUART1_MASK       (0x00000002)
#define SYSCTL_DC2_R_DCUART1_BIT        (1)
#define SYSCTL_DC2_R_DCUART1_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCUART1_PRESENT    (0x00000002)

#define SYSCTL_DC2_DCUART1_MASK       (0x00000001)
#define SYSCTL_DC2_DCUART1_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCUART1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC2_R_DCUART2_MASK       (0x00000004)
#define SYSCTL_DC2_R_DCUART2_BIT        (2)
#define SYSCTL_DC2_R_DCUART2_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCUART2_PRESENT    (0x00000004)

#define SYSCTL_DC2_DCUART2_MASK       (0x00000001)
#define SYSCTL_DC2_DCUART2_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCUART2_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC2_R_DCSSI0_MASK       (0x00000010)
#define SYSCTL_DC2_R_DCSSI0_BIT        (4)
#define SYSCTL_DC2_R_DCSSI0_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCSSI0_PRESENT    (0x00000010)

#define SYSCTL_DC2_DCSSI0_MASK       (0x00000001)
#define SYSCTL_DC2_DCSSI0_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCSSI0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC2_R_DCSSI1_MASK       (0x00000020)
#define SYSCTL_DC2_R_DCSSI1_BIT        (5)
#define SYSCTL_DC2_R_DCSSI1_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCSSI1_PRESENT    (0x00000010)

#define SYSCTL_DC2_DCSSI1_MASK       (0x00000001)
#define SYSCTL_DC2_DCSSI1_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCSSI1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC2_R_DCQEI0_MASK       (0x00000100)
#define SYSCTL_DC2_R_DCQEI0_BIT        (8)
#define SYSCTL_DC2_R_DCQEI0_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCQEI0_PRESENT    (0x00000100)

#define SYSCTL_DC2_DCQEI0_MASK       (0x00000001)
#define SYSCTL_DC2_DCQEI0_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCQEI0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC2_R_DCQEI1_MASK       (0x00000200)
#define SYSCTL_DC2_R_DCQEI1_BIT        (9)
#define SYSCTL_DC2_R_DCQEI1_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCQEI1_PRESENT    (0x00000200)

#define SYSCTL_DC2_DCQEI1_MASK       (0x00000001)
#define SYSCTL_DC2_DCQEI1_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCQEI1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC2_R_DCI2C0_MASK       (0x00001000)
#define SYSCTL_DC2_R_DCI2C0_BIT        (12)
#define SYSCTL_DC2_R_DCI2C0_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCI2C0_PRESENT    (0x00001000)

#define SYSCTL_DC2_DCI2C0_MASK       (0x00000001)
#define SYSCTL_DC2_DCI2C0_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCI2C0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC2_R_DCI2C0HS_MASK       (0x00002000)
#define SYSCTL_DC2_R_DCI2C0HS_BIT        (13)
#define SYSCTL_DC2_R_DCI2C0HS_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCI2C0HS_PRESENT    (0x00002000)

#define SYSCTL_DC2_DCI2C0HS_MASK       (0x00000001)
#define SYSCTL_DC2_DCI2C0HS_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCI2C0HS_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC2_R_DCI2C1_MASK       (0x00004000)
#define SYSCTL_DC2_R_DCI2C1_BIT        (14)
#define SYSCTL_DC2_R_DCI2C1_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCI2C1_PRESENT    (0x00004000)

#define SYSCTL_DC2_DCI2C1_MASK       (0x00000001)
#define SYSCTL_DC2_DCI2C1_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCI2C1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC2_R_DCI2C1HS_MASK       (0x00008000)
#define SYSCTL_DC2_R_DCI2C1HS_BIT        (15)
#define SYSCTL_DC2_R_DCI2C1HS_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCI2C1HS_PRESENT    (0x00008000)

#define SYSCTL_DC2_DCI2C1HS_MASK       (0x00000001)
#define SYSCTL_DC2_DCI2C1HS_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCI2C1HS_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC2_R_DCTIMER0_MASK       (0x00010000)
#define SYSCTL_DC2_R_DCTIMER0_BIT        (16)
#define SYSCTL_DC2_R_DCTIMER0_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCTIMER0_PRESENT    (0x00010000)

#define SYSCTL_DC2_DCTIMER0_MASK       (0x00000001)
#define SYSCTL_DC2_DCTIMER0_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCTIMER0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC2_R_DCTIMER1_MASK       (0x00020000)
#define SYSCTL_DC2_R_DCTIMER1_BIT        (17)
#define SYSCTL_DC2_R_DCTIMER1_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCTIMER1_PRESENT    (0x00020000)

#define SYSCTL_DC2_DCTIMER1_MASK       (0x00000001)
#define SYSCTL_DC2_DCTIMER1_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCTIMER1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC2_R_DCTIMER2_MASK       (0x00040000)
#define SYSCTL_DC2_R_DCTIMER2_BIT        (18)
#define SYSCTL_DC2_R_DCTIMER2_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCTIMER2_PRESENT    (0x00040000)

#define SYSCTL_DC2_DCTIMER2_MASK       (0x00000001)
#define SYSCTL_DC2_DCTIMER2_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCTIMER2_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC2_R_DCTIMER3_MASK       (0x00080000)
#define SYSCTL_DC2_R_DCTIMER3_BIT        (19)
#define SYSCTL_DC2_R_DCTIMER3_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCTIMER3_PRESENT    (0x00080000)

#define SYSCTL_DC2_DCTIMER3_MASK       (0x00000001)
#define SYSCTL_DC2_DCTIMER3_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCTIMER3_PRESENT    (0x00000001)
//--------


//--------
#define SYSCTL_DC2_R_DCCOMP0_MASK       (0x01000000)
#define SYSCTL_DC2_R_DCCOMP0_BIT        (24)
#define SYSCTL_DC2_R_DCCOMP0_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCCOMP0_PRESENT    (0x01000000)

#define SYSCTL_DC2_DCCOMP0_MASK       (0x00000001)
#define SYSCTL_DC2_DCCOMP0_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCCOMP0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC2_R_DCCOMP1_MASK       (0x02000000)
#define SYSCTL_DC2_R_DCCOMP1_BIT        (25)
#define SYSCTL_DC2_R_DCCOMP1_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCCOMP1_PRESENT    (0x02000000)

#define SYSCTL_DC2_DCCOMP1_MASK       (0x00000001)
#define SYSCTL_DC2_DCCOMP1_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCCOMP1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC2_R_DCCOMP2_MASK       (0x04000000)
#define SYSCTL_DC2_R_DCCOMP2_BIT        (26)
#define SYSCTL_DC2_R_DCCOMP2_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCCOMP2_PRESENT    (0x04000000)

#define SYSCTL_DC2_DCCOMP2_MASK       (0x00000001)
#define SYSCTL_DC2_DCCOMP2_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCCOMP2_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC2_R_DCI2S0_MASK       (0x10000000)
#define SYSCTL_DC2_R_DCI2S0_BIT        (28)
#define SYSCTL_DC2_R_DCI2S0_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCI2S0_PRESENT    (0x10000000)

#define SYSCTL_DC2_DCI2S0_MASK       (0x00000001)
#define SYSCTL_DC2_DCI2S0_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCI2S0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC2_R_DCEPI0_MASK       (0x40000000)
#define SYSCTL_DC2_R_DCEPI0_BIT        (30)
#define SYSCTL_DC2_R_DCEPI0_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_R_DCEPI0_PRESENT    (0x40000000)

#define SYSCTL_DC2_DCEPI0_MASK       (0x00000001)
#define SYSCTL_DC2_DCEPI0_NOPRESENT  (0x00000000)
#define SYSCTL_DC2_DCEPI0_PRESENT    (0x00000001)
//--------

#define SYSCTL_DC2_DCUART0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(0*4))))
#define SYSCTL_DC2_DCUART1_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(1*4))))
#define SYSCTL_DC2_DCUART2_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(2*4))))
#define SYSCTL_DC2_DCSSI0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(4*4))))
#define SYSCTL_DC2_DCSSI1_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(5*4))))
#define SYSCTL_DC2_DCQEI0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(8*4))))
#define SYSCTL_DC2_DCQEI1_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(9*4))))
#define SYSCTL_DC2_DCI2C0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(12*4))))
#define SYSCTL_DC2_DCI2C0HS_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(13*4))))
#define SYSCTL_DC2_DCI2C1_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(14*4))))
#define SYSCTL_DC2_DCI2C1HS_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(15*4))))
#define SYSCTL_DC2_DCTIMER0_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(16*4))))
#define SYSCTL_DC2_DCTIMER1_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(17*4))))
#define SYSCTL_DC2_DCTIMER2_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(18*4))))
#define SYSCTL_DC2_DCTIMER3_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(19*4))))
#define SYSCTL_DC2_DCCOMP0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(24*4))))
#define SYSCTL_DC2_DCCOMP1_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(25*4))))
#define SYSCTL_DC2_DCCOMP2_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(26*4))))
#define SYSCTL_DC2_DCI2S0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(28*4))))
#define SYSCTL_DC2_DCEPI0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC2_OFFSET)*32)+(29*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 DC3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DC3_OFFSET     (0x0018)
#define SYSCTL_DC3            (((DC3_TypeDef*)(SYSCTL_BASE+SYSCTL_DC3_OFFSET )))
#define SYSCTL_DC3_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC3_OFFSET)))


//--------
#define SYSCTL_DC3_R_DCPWM0_MASK       (0x00000001)
#define SYSCTL_DC3_R_DCPWM0_BIT        (0)
#define SYSCTL_DC3_R_DCPWM0_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCPWM0_PRESENT    (0x00000001)

#define SYSCTL_DC3_DCPWM0_MASK       (0x00000001)
#define SYSCTL_DC3_DCPWM0_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCPWM0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCPWM1_MASK       (0x00000002)
#define SYSCTL_DC3_R_DCPWM1_BIT        (1)
#define SYSCTL_DC3_R_DCPWM1_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCPWM1_PRESENT    (0x00000002)

#define SYSCTL_DC3_DCPWM1_MASK       (0x00000001)
#define SYSCTL_DC3_DCPWM1_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCPWM1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCPWM2_MASK       (0x00000004)
#define SYSCTL_DC3_R_DCPWM2_BIT        (2)
#define SYSCTL_DC3_R_DCPWM2_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCPWM2_PRESENT    (0x00000004)

#define SYSCTL_DC3_DCPWM2_MASK       (0x00000001)
#define SYSCTL_DC3_DCPWM2_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCPWM2_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCPWM3_MASK       (0x00000008)
#define SYSCTL_DC3_R_DCPWM3_BIT        (3)
#define SYSCTL_DC3_R_DCPWM3_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCPWM3_PRESENT    (0x00000008)

#define SYSCTL_DC3_DCPWM3_MASK       (0x00000001)
#define SYSCTL_DC3_DCPWM3_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCPWM3_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCPWM4_MASK       (0x00000010)
#define SYSCTL_DC3_R_DCPWM4_BIT        (4)
#define SYSCTL_DC3_R_DCPWM4_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCPWM4_PRESENT    (0x00000010)

#define SYSCTL_DC3_DCPWM4_MASK       (0x00000001)
#define SYSCTL_DC3_DCPWM4_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCPWM4_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCPWM5_MASK       (0x00000020)
#define SYSCTL_DC3_R_DCPWM5_BIT        (5)
#define SYSCTL_DC3_R_DCPWM5_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCPWM5_PRESENT    (0x00000020)

#define SYSCTL_DC3_DCPWM5_MASK       (0x00000001)
#define SYSCTL_DC3_DCPWM5_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCPWM5_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCC0MINUS_MASK       (0x00000040)
#define SYSCTL_DC3_R_DCC0MINUS_BIT        (6)
#define SYSCTL_DC3_R_DCC0MINUS_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCC0MINUS_PRESENT    (0x00000040)

#define SYSCTL_DC3_DCC0MINUS_MASK       (0x00000001)
#define SYSCTL_DC3_DCC0MINUS_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCC0MINUS_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCC0PLUS_MASK       (0x00000080)
#define SYSCTL_DC3_R_DCC0PLUS_BIT        (7)
#define SYSCTL_DC3_R_DCC0PLUS_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCC0PLUS_PRESENT    (0x00000080)

#define SYSCTL_DC3_DCC0PLUS_MASK       (0x00000001)
#define SYSCTL_DC3_DCC0PLUS_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCC0PLUS_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCC0O_MASK       (0x00000100)
#define SYSCTL_DC3_R_DCC0O_BIT        (8)
#define SYSCTL_DC3_R_DCC0O_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCC0O_PRESENT    (0x00000100)

#define SYSCTL_DC3_DCC0O_MASK       (0x00000001)
#define SYSCTL_DC3_DCC0O_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCC0O_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCC1MINUS_MASK       (0x00000200)
#define SYSCTL_DC3_R_DCC1MINUS_BIT        (9)
#define SYSCTL_DC3_R_DCC1MINUS_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCC1MINUS_PRESENT    (0x00000200)

#define SYSCTL_DC3_DCC1MINUS_MASK       (0x00000001)
#define SYSCTL_DC3_DCC1MINUS_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCC1MINUS_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCC1PLUS_MASK       (0x00000400)
#define SYSCTL_DC3_R_DCC1PLUS_BIT        (10)
#define SYSCTL_DC3_R_DCC1PLUS_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCC1PLUS_PRESENT    (0x00000400)

#define SYSCTL_DC3_DCC1PLUS_MASK       (0x00000001)
#define SYSCTL_DC3_DCC1PLUS_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCC1PLUS_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCC1O_MASK       (0x00000800)
#define SYSCTL_DC3_R_DCC1O_BIT        (11)
#define SYSCTL_DC3_R_DCC1O_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCC1O_PRESENT    (0x00000800)

#define SYSCTL_DC3_DCC1O_MASK       (0x00000001)
#define SYSCTL_DC3_DCC1O_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCC1O_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCC2MINUS_MASK       (0x00001000)
#define SYSCTL_DC3_R_DCC2MINUS_BIT        (12)
#define SYSCTL_DC3_R_DCC2MINUS_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCC2MINUS_PRESENT    (0x00001000)

#define SYSCTL_DC3_DCC2MINUS_MASK       (0x00000001)
#define SYSCTL_DC3_DCC2MINUS_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCC2MINUS_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCC2PLUS_MASK       (0x00002000)
#define SYSCTL_DC3_R_DCC2PLUS_BIT        (13)
#define SYSCTL_DC3_R_DCC2PLUS_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCC2PLUS_PRESENT    (0x00002000)

#define SYSCTL_DC3_DCC2PLUS_MASK       (0x00000001)
#define SYSCTL_DC3_DCC2PLUS_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCC2PLUS_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCC2O_MASK       (0x00004000)
#define SYSCTL_DC3_R_DCC2O_BIT        (14)
#define SYSCTL_DC3_R_DCC2O_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCC2O_PRESENT    (0x00004000)

#define SYSCTL_DC3_DCC2O_MASK       (0x00000001)
#define SYSCTL_DC3_DCC2O_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCC2O_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCPWMFAULT_MASK       (0x00008000)
#define SYSCTL_DC3_R_DCPWMFAULT_BIT        (15)
#define SYSCTL_DC3_R_DCPWMFAULT_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCPWMFAULT_PRESENT    (0x00008000)

#define SYSCTL_DC3_DCPWMFAULT_MASK       (0x00000001)
#define SYSCTL_DC3_DCPWMFAULT_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCPWMFAULT_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCADC0AIN0_MASK       (0x00010000)
#define SYSCTL_DC3_R_DCADC0AIN0_BIT        (16)
#define SYSCTL_DC3_R_DCADC0AIN0_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCADC0AIN0_PRESENT    (0x00010000)

#define SYSCTL_DC3_DCADC0AIN0_MASK       (0x00000001)
#define SYSCTL_DC3_DCADC0AIN0_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCADC0AIN0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCADC0AIN1_MASK       (0x00020000)
#define SYSCTL_DC3_R_DCADC0AIN1_BIT        (17)
#define SYSCTL_DC3_R_DCADC0AIN1_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCADC0AIN1_PRESENT    (0x00020000)

#define SYSCTL_DC3_DCADC0AIN1_MASK       (0x00000001)
#define SYSCTL_DC3_DCADC0AIN1_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCADC0AIN1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCADC0AIN2_MASK       (0x00040000)
#define SYSCTL_DC3_R_DCADC0AIN2_BIT        (18)
#define SYSCTL_DC3_R_DCADC0AIN2_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCADC0AIN2_PRESENT    (0x00040000)

#define SYSCTL_DC3_DCADC0AIN2_MASK       (0x00000001)
#define SYSCTL_DC3_DCADC0AIN2_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCADC0AIN2_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCADC0AIN3_MASK       (0x00080000)
#define SYSCTL_DC3_R_DCADC0AIN3_BIT        (19)
#define SYSCTL_DC3_R_DCADC0AIN3_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCADC0AIN3_PRESENT    (0x00080000)

#define SYSCTL_DC3_DCADC0AIN3_MASK       (0x00000001)
#define SYSCTL_DC3_DCADC0AIN3_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCADC0AIN3_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCADC0AIN4_MASK       (0x00100000)
#define SYSCTL_DC3_R_DCADC0AIN4_BIT        (20)
#define SYSCTL_DC3_R_DCADC0AIN4_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCADC0AIN4_PRESENT    (0x00100000)

#define SYSCTL_DC3_DCADC0AIN4_MASK       (0x00000001)
#define SYSCTL_DC3_DCADC0AIN4_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCADC0AIN4_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCADC0AIN5_MASK       (0x00200000)
#define SYSCTL_DC3_R_DCADC0AIN5_BIT        (21)
#define SYSCTL_DC3_R_DCADC0AIN5_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCADC0AIN5_PRESENT    (0x00200000)

#define SYSCTL_DC3_DCADC0AIN5_MASK       (0x00000001)
#define SYSCTL_DC3_DCADC0AIN5_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCADC0AIN5_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCADC0AIN6_MASK       (0x00400000)
#define SYSCTL_DC3_R_DCADC0AIN6_BIT        (22)
#define SYSCTL_DC3_R_DCADC0AIN6_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCADC0AIN6_PRESENT    (0x00400000)

#define SYSCTL_DC3_DCADC0AIN6_MASK       (0x00000001)
#define SYSCTL_DC3_DCADC0AIN6_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCADC0AIN6_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCADC0AIN7_MASK       (0x00800000)
#define SYSCTL_DC3_R_DCADC0AIN7_BIT        (23)
#define SYSCTL_DC3_R_DCADC0AIN7_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCADC0AIN7_PRESENT    (0x00800000)

#define SYSCTL_DC3_DCADC0AIN7_MASK       (0x00000001)
#define SYSCTL_DC3_DCADC0AIN7_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCADC0AIN7_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCCCP0_MASK       (0x01000000)
#define SYSCTL_DC3_R_DCCCP0_BIT        (24)
#define SYSCTL_DC3_R_DCCCP0_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCCCP0_PRESENT    (0x01000000)

#define SYSCTL_DC3_DCCCP0_MASK       (0x00000001)
#define SYSCTL_DC3_DCCCP0_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCCCP0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCCCP1_MASK       (0x02000000)
#define SYSCTL_DC3_R_DCCCP1_BIT        (25)
#define SYSCTL_DC3_R_DCCCP1_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCCCP1_PRESENT    (0x02000000)

#define SYSCTL_DC3_DCCCP1_MASK       (0x00000001)
#define SYSCTL_DC3_DCCCP1_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCCCP1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCCCP2_MASK       (0x04000000)
#define SYSCTL_DC3_R_DCCCP2_BIT        (26)
#define SYSCTL_DC3_R_DCCCP2_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCCCP2_PRESENT    (0x04000000)

#define SYSCTL_DC3_DCCCP2_MASK       (0x00000001)
#define SYSCTL_DC3_DCCCP2_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCCCP2_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCCCP3_MASK       (0x08000000)
#define SYSCTL_DC3_R_DCCCP3_BIT        (27)
#define SYSCTL_DC3_R_DCCCP3_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCCCP3_PRESENT    (0x08000000)

#define SYSCTL_DC3_DCCCP3_MASK       (0x00000001)
#define SYSCTL_DC3_DCCCP3_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCCCP3_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCCCP4_MASK       (0x10000000)
#define SYSCTL_DC3_R_DCCCP4_BIT        (28)
#define SYSCTL_DC3_R_DCCCP4_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCCCP4_PRESENT    (0x10000000)

#define SYSCTL_DC3_DCCCP4_MASK       (0x00000001)
#define SYSCTL_DC3_DCCCP4_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCCCP4_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DCCCP5_MASK       (0x20000000)
#define SYSCTL_DC3_R_DCCCP5_BIT        (29)
#define SYSCTL_DC3_R_DCCCP5_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DCCCP5_PRESENT    (0x20000000)

#define SYSCTL_DC3_DCCCP5_MASK       (0x00000001)
#define SYSCTL_DC3_DCCCP5_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DCCCP5_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC3_R_DC32KHZ_MASK       (0x80000000)
#define SYSCTL_DC3_R_DC32KHZ_BIT        (31)
#define SYSCTL_DC3_R_DC32KHZ_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_R_DC32KHZ_PRESENT    (0x80000000)

#define SYSCTL_DC3_DC32KHZ_MASK       (0x00000001)
#define SYSCTL_DC3_DC32KHZ_NOPRESENT  (0x00000000)
#define SYSCTL_DC3_DC32KHZ_PRESENT    (0x00000001)
//--------

#define SYSCTL_DC3_DCPWM0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(0*4))))
#define SYSCTL_DC3_DCPWM1_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(1*4))))
#define SYSCTL_DC3_DCPWM2_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(2*4))))
#define SYSCTL_DC3_DCPWM3_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(3*4))))
#define SYSCTL_DC3_DCPWM4_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(4*4))))
#define SYSCTL_DC3_DCPWM5_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(5*4))))
#define SYSCTL_DC3_DCC0MINUS_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(6*4))))
#define SYSCTL_DC3_DCC0PLUS_BB     (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(7*4))))
#define SYSCTL_DC3_DCC0O_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(8*4))))
#define SYSCTL_DC3_DCC1MINUS_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(9*4))))
#define SYSCTL_DC3_DCC1PLUS_BB     (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(10*4))))
#define SYSCTL_DC3_DCC1O_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(11*4))))
#define SYSCTL_DC3_DCC2MINUS_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(12*4))))
#define SYSCTL_DC3_DCC2PLUS_BB     (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(13*4))))
#define SYSCTL_DC3_DCC2O_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(14*4))))
#define SYSCTL_DC3_DCPWMFAULT_BB   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(15*4))))
#define SYSCTL_DC3_DCADC0AIN0_BB   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(16*4))))
#define SYSCTL_DC3_DCADC0AIN1_BB   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(17*4))))
#define SYSCTL_DC3_DCADC0AIN2_BB   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(18*4))))
#define SYSCTL_DC3_DCADC0AIN3_BB   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(19*4))))
#define SYSCTL_DC3_DCADC0AIN4_BB   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(20*4))))
#define SYSCTL_DC3_DCADC0AIN5_BB   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(21*4))))
#define SYSCTL_DC3_DCADC0AIN6_BB   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(22*4))))
#define SYSCTL_DC3_DCADC0AIN7_BB   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(23*4))))
#define SYSCTL_DC3_DCCCP0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(24*4))))
#define SYSCTL_DC3_DCCCP1_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(25*4))))
#define SYSCTL_DC3_DCCCP2_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(26*4))))
#define SYSCTL_DC3_DCCCP3_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(27*4))))
#define SYSCTL_DC3_DCCCP4_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(28*4))))
#define SYSCTL_DC3_DCCCP5_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(29*4))))
#define SYSCTL_DC3_DC32KHZ_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC3_OFFSET)*32)+(31*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 DC4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DC4_OFFSET     (0x001C)
#define SYSCTL_DC4            (((DC4_TypeDef*)(SYSCTL_BASE+SYSCTL_DC4_OFFSET )))
#define SYSCTL_DC4_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC4_OFFSET)))


//--------
#define SYSCTL_DC4_R_DCGPIOA_MASK       (0x00000001)
#define SYSCTL_DC4_R_DCGPIOA_BIT        (0)
#define SYSCTL_DC4_R_DCGPIOA_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_R_DCGPIOA_PRESENT    (0x00000001)

#define SYSCTL_DC4_DCGPIOA_MASK       (0x00000001)
#define SYSCTL_DC4_DCGPIOA_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_DCGPIOA_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC4_R_DCGPIOB_MASK       (0x00000002)
#define SYSCTL_DC4_R_DCGPIOB_BIT        (1)
#define SYSCTL_DC4_R_DCGPIOB_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_R_DCGPIOB_PRESENT    (0x00000002)

#define SYSCTL_DC4_DCGPIOB_MASK       (0x00000001)
#define SYSCTL_DC4_DCGPIOB_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_DCGPIOB_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC4_R_DCGPIOC_MASK       (0x00000004)
#define SYSCTL_DC4_R_DCGPIOC_BIT        (2)
#define SYSCTL_DC4_R_DCGPIOC_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_R_DCGPIOC_PRESENT    (0x00000004)

#define SYSCTL_DC4_DCGPIOC_MASK       (0x00000001)
#define SYSCTL_DC4_DCGPIOC_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_DCGPIOC_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC4_R_DCGPIOD_MASK       (0x00000008)
#define SYSCTL_DC4_R_DCGPIOD_BIT        (3)
#define SYSCTL_DC4_R_DCGPIOD_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_R_DCGPIOD_PRESENT    (0x00000008)

#define SYSCTL_DC4_DCGPIOD_MASK       (0x00000001)
#define SYSCTL_DC4_DCGPIOD_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_DCGPIOD_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC4_R_DCGPIOE_MASK       (0x00000010)
#define SYSCTL_DC4_R_DCGPIOE_BIT        (4)
#define SYSCTL_DC4_R_DCGPIOE_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_R_DCGPIOE_PRESENT    (0x00000010)

#define SYSCTL_DC4_DCGPIOE_MASK       (0x00000001)
#define SYSCTL_DC4_DCGPIOE_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_DCGPIOE_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC4_R_DCGPIOF_MASK       (0x00000020)
#define SYSCTL_DC4_R_DCGPIOF_BIT        (5)
#define SYSCTL_DC4_R_DCGPIOF_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_R_DCGPIOF_PRESENT    (0x00000020)

#define SYSCTL_DC4_DCGPIOF_MASK       (0x00000001)
#define SYSCTL_DC4_DCGPIOF_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_DCGPIOF_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC4_R_DCGPIOG_MASK       (0x00000040)
#define SYSCTL_DC4_R_DCGPIOG_BIT        (6)
#define SYSCTL_DC4_R_DCGPIOG_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_R_DCGPIOG_PRESENT    (0x00000040)

#define SYSCTL_DC4_DCGPIOG_MASK       (0x00000001)
#define SYSCTL_DC4_DCGPIOG_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_DCGPIOG_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC4_R_DCGPIOH_MASK       (0x00000080)
#define SYSCTL_DC4_R_DCGPIOH_BIT        (7)
#define SYSCTL_DC4_R_DCGPIOH_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_R_DCGPIOH_PRESENT    (0x00000080)

#define SYSCTL_DC4_DCGPIOH_MASK       (0x00000001)
#define SYSCTL_DC4_DCGPIOH_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_DCGPIOH_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC4_R_DCGPIOJ_MASK       (0x00000100)
#define SYSCTL_DC4_R_DCGPIOJ_BIT        (8)
#define SYSCTL_DC4_R_DCGPIOJ_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_R_DCGPIOJ_PRESENT    (0x00000100)

#define SYSCTL_DC4_DCGPIOJ_MASK       (0x00000001)
#define SYSCTL_DC4_DCGPIOJ_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_DCGPIOJ_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC4_R_DCROM_MASK       (0x00001000)
#define SYSCTL_DC4_R_DCROM_BIT        (12)
#define SYSCTL_DC4_R_DCROM_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_R_DCROM_PRESENT    (0x00001000)

#define SYSCTL_DC4_DCROM_MASK       (0x00000001)
#define SYSCTL_DC4_DCROM_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_DCROM_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC4_R_DCUDMA_MASK       (0x00002000)
#define SYSCTL_DC4_R_DCUDMA_BIT        (13)
#define SYSCTL_DC4_R_DCUDMA_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_R_DCUDMA_PRESENT    (0x00002000)

#define SYSCTL_DC4_DCUDMA_MASK       (0x00000001)
#define SYSCTL_DC4_DCUDMA_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_DCUDMA_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC4_R_DCCCP6_MASK       (0x00004000)
#define SYSCTL_DC4_R_DCCCP6_BIT        (14)
#define SYSCTL_DC4_R_DCCCP6_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_R_DCCCP6_PRESENT    (0x00004000)

#define SYSCTL_DC4_DCCCP6_MASK       (0x00000001)
#define SYSCTL_DC4_DCCCP6_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_DCCCP6_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC4_R_DCCCP7_MASK       (0x00008000)
#define SYSCTL_DC4_R_DCCCP7_BIT        (15)
#define SYSCTL_DC4_R_DCCCP7_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_R_DCCCP7_PRESENT    (0x00008000)

#define SYSCTL_DC4_DCCCP7_MASK       (0x00000001)
#define SYSCTL_DC4_DCCCP7_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_DCCCP7_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC4_R_DCPICAL_MASK       (0x00040000)
#define SYSCTL_DC4_R_DCPICAL_BIT        (18)
#define SYSCTL_DC4_R_DCPICAL_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_R_DCPICAL_PRESENT    (0x00040000)

#define SYSCTL_DC4_DCPICAL_MASK       (0x00000001)
#define SYSCTL_DC4_DCPICAL_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_DCPICAL_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC4_R_DCE1588_MASK       (0x01000000)
#define SYSCTL_DC4_R_DCE1588_BIT        (24)
#define SYSCTL_DC4_R_DCE1588_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_R_DCE1588_PRESENT    (0x01000000)

#define SYSCTL_DC4_DCE1588_MASK       (0x00000001)
#define SYSCTL_DC4_DCE1588_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_DCE1588_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC4_R_DCEMAC0_MASK       (0x10000000)
#define SYSCTL_DC4_R_DCEMAC0_BIT        (28)
#define SYSCTL_DC4_R_DCEMAC0_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_R_DCEMAC0_PRESENT    (0x10000000)

#define SYSCTL_DC4_DCEMAC0_MASK       (0x00000001)
#define SYSCTL_DC4_DCEMAC0_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_DCEMAC0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC4_R_DCEPHY0_MASK       (0x40000000)
#define SYSCTL_DC4_R_DCEPHY0_BIT        (30)
#define SYSCTL_DC4_R_DCEPHY0_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_R_DCEPHY0_PRESENT    (0x40000000)

#define SYSCTL_DC4_DCEPHY0_MASK       (0x00000001)
#define SYSCTL_DC4_DCEPHY0_NOPRESENT  (0x00000000)
#define SYSCTL_DC4_DCEPHY0_PRESENT    (0x00000001)
//--------

#define SYSCTL_DC4_DCGPIOA_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32)+(0*4))))
#define SYSCTL_DC4_DCGPIOB_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32)+(1*4))))
#define SYSCTL_DC4_DCGPIOC_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32)+(2*4))))
#define SYSCTL_DC4_DCGPIOD_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32)+(3*4))))
#define SYSCTL_DC4_DCGPIOE_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32)+(4*4))))
#define SYSCTL_DC4_DCGPIOF_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32)+(5*4))))
#define SYSCTL_DC4_DCGPIOG_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32)+(6*4))))
#define SYSCTL_DC4_DCGPIOH_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32)+(7*4))))
#define SYSCTL_DC4_DCGPIOJ_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32)+(8*4))))
#define SYSCTL_DC4_DCROM_BB         (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32)+(12*4))))
#define SYSCTL_DC4_DCUDMA_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32)+(13*4))))
#define SYSCTL_DC4_DCCCP6_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32)+(14*4))))
#define SYSCTL_DC4_DCCCP7_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32)+(15*4))))
#define SYSCTL_DC4_DCPICAL_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32)+(18*4))))
#define SYSCTL_DC4_DCE1588_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32)+(24*4))))
#define SYSCTL_DC4_DCEMAC0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32)+(28*4))))
#define SYSCTL_DC4_DCEPHY0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC4_OFFSET)*32)+(30*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 DC5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DC5_OFFSET     (0x0020)
#define SYSCTL_DC5            (((DC5_TypeDef*)(SYSCTL_BASE+SYSCTL_DC5_OFFSET )))
#define SYSCTL_DC5_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC5_OFFSET)))


//--------
#define SYSCTL_DC5_R_DCPWM0_MASK       (0x00000001)
#define SYSCTL_DC5_R_DCPWM0_BIT        (0)
#define SYSCTL_DC5_R_DCPWM0_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_R_DCPWM0_PRESENT    (0x00000001)

#define SYSCTL_DC5_DCPWM0_MASK       (0x00000001)
#define SYSCTL_DC5_DCPWM0_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_DCPWM0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC5_R_DCPWM1_MASK       (0x00000002)
#define SYSCTL_DC5_R_DCPWM1_BIT        (1)
#define SYSCTL_DC5_R_DCPWM1_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_R_DCPWM1_PRESENT    (0x00000002)

#define SYSCTL_DC5_DCPWM1_MASK       (0x00000001)
#define SYSCTL_DC5_DCPWM1_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_DCPWM1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC5_R_DCPWM2_MASK       (0x00000004)
#define SYSCTL_DC5_R_DCPWM2_BIT        (2)
#define SYSCTL_DC5_R_DCPWM2_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_R_DCPWM2_PRESENT    (0x00000004)

#define SYSCTL_DC5_DCPWM2_MASK       (0x00000001)
#define SYSCTL_DC5_DCPWM2_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_DCPWM2_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC5_R_DCPWM3_MASK       (0x00000008)
#define SYSCTL_DC5_R_DCPWM3_BIT        (3)
#define SYSCTL_DC5_R_DCPWM3_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_R_DCPWM3_PRESENT    (0x00000008)

#define SYSCTL_DC5_DCPWM3_MASK       (0x00000001)
#define SYSCTL_DC5_DCPWM3_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_DCPWM3_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC5_R_DCPWM4_MASK       (0x00000010)
#define SYSCTL_DC5_R_DCPWM4_BIT        (4)
#define SYSCTL_DC5_R_DCPWM4_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_R_DCPWM4_PRESENT    (0x00000010)

#define SYSCTL_DC5_DCPWM4_MASK       (0x00000001)
#define SYSCTL_DC5_DCPWM4_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_DCPWM4_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC5_R_DCPWM5_MASK       (0x00000020)
#define SYSCTL_DC5_R_DCPWM5_BIT        (5)
#define SYSCTL_DC5_R_DCPWM5_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_R_DCPWM5_PRESENT    (0x00000020)

#define SYSCTL_DC5_DCPWM5_MASK       (0x00000001)
#define SYSCTL_DC5_DCPWM5_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_DCPWM5_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC5_R_DCPWM6_MASK       (0x00000040)
#define SYSCTL_DC5_R_DCPWM6_BIT        (6)
#define SYSCTL_DC5_R_DCPWM6_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_R_DCPWM6_PRESENT    (0x00000040)

#define SYSCTL_DC5_DCPWM6_MASK       (0x00000001)
#define SYSCTL_DC5_DCPWM6_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_DCPWM6_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC5_R_DCPWM7_MASK       (0x00000080)
#define SYSCTL_DC5_R_DCPWM7_BIT        (7)
#define SYSCTL_DC5_R_DCPWM7_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_R_DCPWM7_PRESENT    (0x00000080)

#define SYSCTL_DC5_DCPWM7_MASK       (0x00000001)
#define SYSCTL_DC5_DCPWM7_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_DCPWM7_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC5_R_DCPWMESYNC_MASK       (0x00100000)
#define SYSCTL_DC5_R_DCPWMESYNC_BIT        (20)
#define SYSCTL_DC5_R_DCPWMESYNC_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_R_DCPWMESYNC_PRESENT    (0x00100000)

#define SYSCTL_DC5_DCPWMESYNC_MASK       (0x00000001)
#define SYSCTL_DC5_DCPWMESYNC_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_DCPWMESYNC_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC5_R_DCPWMEFLT_MASK       (0x00200000)
#define SYSCTL_DC5_R_DCPWMEFLT_BIT        (21)
#define SYSCTL_DC5_R_DCPWMEFLT_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_R_DCPWMEFLT_PRESENT    (0x00200000)

#define SYSCTL_DC5_DCPWMEFLT_MASK       (0x00000001)
#define SYSCTL_DC5_DCPWMEFLT_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_DCPWMEFLT_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC5_R_DCPWMFAULT0_MASK       (0x01000000)
#define SYSCTL_DC5_R_DCPWMFAULT0_BIT        (24)
#define SYSCTL_DC5_R_DCPWMFAULT0_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_R_DCPWMFAULT0_PRESENT    (0x01000000)

#define SYSCTL_DC5_DCPWMFAULT0_MASK       (0x00000001)
#define SYSCTL_DC5_DCPWMFAULT0_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_DCPWMFAULT0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC5_R_DCPWMFAULT1_MASK       (0x02000000)
#define SYSCTL_DC5_R_DCPWMFAULT1_BIT        (25)
#define SYSCTL_DC5_R_DCPWMFAULT1_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_R_DCPWMFAULT1_PRESENT    (0x02000000)

#define SYSCTL_DC5_DCPWMFAULT1_MASK       (0x00000001)
#define SYSCTL_DC5_DCPWMFAULT1_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_DCPWMFAULT1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC5_R_DCPWMFAULT2_MASK       (0x04000000)
#define SYSCTL_DC5_R_DCPWMFAULT2_BIT        (26)
#define SYSCTL_DC5_R_DCPWMFAULT2_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_R_DCPWMFAULT2_PRESENT    (0x04000000)

#define SYSCTL_DC5_DCPWMFAULT2_MASK       (0x00000001)
#define SYSCTL_DC5_DCPWMFAULT2_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_DCPWMFAULT2_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC5_R_DCPWMFAULT3_MASK       (0x08000000)
#define SYSCTL_DC5_R_DCPWMFAULT3_BIT        (27)
#define SYSCTL_DC5_R_DCPWMFAULT3_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_R_DCPWMFAULT3_PRESENT    (0x08000000)

#define SYSCTL_DC5_DCPWMFAULT0_MASK       (0x00000001)
#define SYSCTL_DC5_DCPWMFAULT0_NOPRESENT  (0x00000000)
#define SYSCTL_DC5_DCPWMFAULT0_PRESENT    (0x00000001)
//--------


#define SYSCTL_DC5_DCPWM0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32)+(0*4))))
#define SYSCTL_DC5_DCPWM1_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32)+(1*4))))
#define SYSCTL_DC5_DCPWM2_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32)+(2*4))))
#define SYSCTL_DC5_DCPWM3_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32)+(3*4))))
#define SYSCTL_DC5_DCPWM4_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32)+(4*4))))
#define SYSCTL_DC5_DCPWM5_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32)+(5*4))))
#define SYSCTL_DC5_DCPWM6_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32)+(6*4))))
#define SYSCTL_DC5_DCPWM7_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32)+(7*4))))
#define SYSCTL_DC5_DCPWMESYNC_BB   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32)+(20*4))))
#define SYSCTL_DC5_DCPWMEFLT_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32)+(21*4))))
#define SYSCTL_DC5_DCPWMFAULT0_BB  (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32)+(24*4))))
#define SYSCTL_DC5_DCPWMFAULT1_BB  (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32)+(25*4))))
#define SYSCTL_DC5_DCPWMFAULT2_BB  (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32)+(26*4))))
#define SYSCTL_DC5_DCPWMFAULT3_BB  (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC5_OFFSET)*32)+(27*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 9 DC6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DC6_OFFSET     (0x0024)
#define SYSCTL_DC6            (((DC6_TypeDef*)(SYSCTL_BASE+SYSCTL_DC6_OFFSET )))
#define SYSCTL_DC6_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC6_OFFSET)))


//--------
#define SYSCTL_DC6_R_DCUSB0_MASK       (0x00000003)
#define SYSCTL_DC6_R_DCUSB0_BIT        (0)
#define SYSCTL_DC6_R_DCUSB0_NOPRESENT  (0x00000000)
#define SYSCTL_DC6_R_DCUSB0_DEVICE     (0x00000001)
#define SYSCTL_DC6_R_DCUSB0_HOST       (0x00000002)
#define SYSCTL_DC6_R_DCUSB0_OTG        (0x00000003)

#define SYSCTL_DC6_DCUSB0_MASK       (0x00000003)
#define SYSCTL_DC6_DCUSB0_NOPRESENT  (0x00000000)
#define SYSCTL_DC6_DCUSB0_DEVICE     (0x00000001)
#define SYSCTL_DC6_DCUSB0_HOST       (0x00000002)
#define SYSCTL_DC6_DCUSB0_OTG        (0x00000003)
//--------

//--------
#define SYSCTL_DC6_R_DCUSB0PHY_MASK       (0x00000010)
#define SYSCTL_DC6_R_DCUSB0PHY_BIT        (4)
#define SYSCTL_DC6_R_DCUSB0PHY_NOPRESENT  (0x00000000)
#define SYSCTL_DC6_R_DCUSB0PHY_PRESENT    (0x00000010)

#define SYSCTL_DC6_DCUSB0PHY_MASK       (0x00000001)
#define SYSCTL_DC6_DCUSB0PHY_NOPRESENT  (0x00000000)
#define SYSCTL_DC6_DCUSB0PHY_PRESENT    (0x00000001)
//--------


#define SYSCTL_DC6_DCUSB0PHY_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC6_OFFSET)*32)+(4*4))))






////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 10 DC7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DC7_OFFSET     (0x0028)
#define SYSCTL_DC7            (((DC7_TypeDef*)(SYSCTL_BASE+SYSCTL_DC7_OFFSET )))
#define SYSCTL_DC7_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC7_OFFSET)))


//--------
#define SYSCTL_DC7_R_DCDMACH0_MASK       (0x00000001)
#define SYSCTL_DC7_R_DCDMACH0_BIT        (0)
#define SYSCTL_DC7_R_DCDMACH0_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH0_PRESENT    (0x00000001)

#define SYSCTL_DC7_DCDMACH0_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH0_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH1_MASK       (0x00000002)
#define SYSCTL_DC7_R_DCDMACH1_BIT        (1)
#define SYSCTL_DC7_R_DCDMACH1_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH1_PRESENT    (0x00000002)

#define SYSCTL_DC7_DCDMACH1_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH1_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH2_MASK       (0x00000004)
#define SYSCTL_DC7_R_DCDMACH2_BIT        (2)
#define SYSCTL_DC7_R_DCDMACH2_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH2_PRESENT    (0x00000004)

#define SYSCTL_DC7_DCDMACH2_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH2_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH2_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH3_MASK       (0x00000008)
#define SYSCTL_DC7_R_DCDMACH3_BIT        (3)
#define SYSCTL_DC7_R_DCDMACH3_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH3_PRESENT    (0x00000008)

#define SYSCTL_DC7_DCDMACH3_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH3_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH3_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH4_MASK       (0x00000010)
#define SYSCTL_DC7_R_DCDMACH4_BIT        (4)
#define SYSCTL_DC7_R_DCDMACH4_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH4_PRESENT    (0x00000010)

#define SYSCTL_DC7_DCDMACH4_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH4_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH4_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH5_MASK       (0x00000020)
#define SYSCTL_DC7_R_DCDMACH5_BIT        (5)
#define SYSCTL_DC7_R_DCDMACH5_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH5_PRESENT    (0x00000020)

#define SYSCTL_DC7_DCDMACH5_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH5_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH5_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH6_MASK       (0x00000040)
#define SYSCTL_DC7_R_DCDMACH6_BIT        (6)
#define SYSCTL_DC7_R_DCDMACH6_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH6_PRESENT    (0x00000040)

#define SYSCTL_DC7_DCDMACH6_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH6_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH6_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH7_MASK       (0x00000080)
#define SYSCTL_DC7_R_DCDMACH7_BIT        (7)
#define SYSCTL_DC7_R_DCDMACH7_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH7_PRESENT    (0x00000080)

#define SYSCTL_DC7_DCDMACH7_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH7_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH7_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH8_MASK       (0x00000100)
#define SYSCTL_DC7_R_DCDMACH8_BIT        (8)
#define SYSCTL_DC7_R_DCDMACH8_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH8_PRESENT    (0x00000100)

#define SYSCTL_DC7_DCDMACH8_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH8_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH8_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH9_MASK       (0x00000200)
#define SYSCTL_DC7_R_DCDMACH9_BIT        (9)
#define SYSCTL_DC7_R_DCDMACH9_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH9_PRESENT    (0x00000200)

#define SYSCTL_DC7_DCDMACH9_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH9_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH9_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH10_MASK       (0x00000400)
#define SYSCTL_DC7_R_DCDMACH10_BIT        (10)
#define SYSCTL_DC7_R_DCDMACH10_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH10_PRESENT    (0x00000400)

#define SYSCTL_DC7_DCDMACH10_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH10_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH10_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH11_MASK       (0x00000800)
#define SYSCTL_DC7_R_DCDMACH11_BIT        (11)
#define SYSCTL_DC7_R_DCDMACH11_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH11_PRESENT    (0x00000800)

#define SYSCTL_DC7_DCDMACH11_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH11_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH11_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH12_MASK       (0x00001000)
#define SYSCTL_DC7_R_DCDMACH12_BIT        (12)
#define SYSCTL_DC7_R_DCDMACH12_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH12_PRESENT    (0x00001000)

#define SYSCTL_DC7_DCDMACH12_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH12_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH12_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH13_MASK       (0x00002000)
#define SYSCTL_DC7_R_DCDMACH13_BIT        (13)
#define SYSCTL_DC7_R_DCDMACH13_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH13_PRESENT    (0x00002000)

#define SYSCTL_DC7_DCDMACH13_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH13_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH13_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH14_MASK       (0x00004000)
#define SYSCTL_DC7_R_DCDMACH14_BIT        (14)
#define SYSCTL_DC7_R_DCDMACH14_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH14_PRESENT    (0x00004000)

#define SYSCTL_DC7_DCDMACH14_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH14_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH14_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH15_MASK       (0x00008000)
#define SYSCTL_DC7_R_DCDMACH15_BIT        (15)
#define SYSCTL_DC7_R_DCDMACH15_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH15_PRESENT    (0x00008000)

#define SYSCTL_DC7_DCDMACH15_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH15_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH15_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH16_MASK       (0x00010000)
#define SYSCTL_DC7_R_DCDMACH16_BIT        (16)
#define SYSCTL_DC7_R_DCDMACH16_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH16_PRESENT    (0x00010000)

#define SYSCTL_DC7_DCDMACH16_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH16_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH16_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH17_MASK       (0x00020000)
#define SYSCTL_DC7_R_DCDMACH17_BIT        (17)
#define SYSCTL_DC7_R_DCDMACH17_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH17_PRESENT    (0x00020000)

#define SYSCTL_DC7_DCDMACH17_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH17_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH17_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH18_MASK       (0x00040000)
#define SYSCTL_DC7_R_DCDMACH18_BIT        (18)
#define SYSCTL_DC7_R_DCDMACH18_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH18_PRESENT    (0x00040000)

#define SYSCTL_DC7_DCDMACH18_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH18_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH18_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH19_MASK       (0x00080000)
#define SYSCTL_DC7_R_DCDMACH19_BIT        (19)
#define SYSCTL_DC7_R_DCDMACH19_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH19_PRESENT    (0x00080000)

#define SYSCTL_DC7_DCDMACH19_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH19_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH19_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH20_MASK       (0x00100000)
#define SYSCTL_DC7_R_DCDMACH20_BIT        (20)
#define SYSCTL_DC7_R_DCDMACH20_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH20_PRESENT    (0x00100000)

#define SYSCTL_DC7_DCDMACH20_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH20_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH20_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH21_MASK       (0x00200000)
#define SYSCTL_DC7_R_DCDMACH21_BIT        (21)
#define SYSCTL_DC7_R_DCDMACH21_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH21_PRESENT    (0x00200000)

#define SYSCTL_DC7_DCDMACH21_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH21_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH21_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH22_MASK       (0x00400000)
#define SYSCTL_DC7_R_DCDMACH22_BIT        (22)
#define SYSCTL_DC7_R_DCDMACH22_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH22_PRESENT    (0x00400000)

#define SYSCTL_DC7_DCDMACH22_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH22_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH22_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH23_MASK       (0x00800000)
#define SYSCTL_DC7_R_DCDMACH23_BIT        (23)
#define SYSCTL_DC7_R_DCDMACH23_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH23_PRESENT    (0x00800000)

#define SYSCTL_DC7_DCDMACH23_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH23_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH23_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH24_MASK       (0x01000000)
#define SYSCTL_DC7_R_DCDMACH24_BIT        (24)
#define SYSCTL_DC7_R_DCDMACH24_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH24_PRESENT    (0x01000000)

#define SYSCTL_DC7_DCDMACH24_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH24_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH24_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH25_MASK       (0x02000000)
#define SYSCTL_DC7_R_DCDMACH25_BIT        (25)
#define SYSCTL_DC7_R_DCDMACH25_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH25_PRESENT    (0x02000000)

#define SYSCTL_DC7_DCDMACH25_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH25_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH25_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH26_MASK       (0x04000000)
#define SYSCTL_DC7_R_DCDMACH26_BIT        (26)
#define SYSCTL_DC7_R_DCDMACH26_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH26_PRESENT    (0x04000000)

#define SYSCTL_DC7_DCDMACH26_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH26_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH26_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH27_MASK       (0x08000000)
#define SYSCTL_DC7_R_DCDMACH27_BIT        (27)
#define SYSCTL_DC7_R_DCDMACH27_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH27_PRESENT    (0x08000000)

#define SYSCTL_DC7_DCDMACH27_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH27_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH27_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH28_MASK       (0x10000000)
#define SYSCTL_DC7_R_DCDMACH28_BIT        (28)
#define SYSCTL_DC7_R_DCDMACH28_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH28_PRESENT    (0x10000000)

#define SYSCTL_DC7_DCDMACH28_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH28_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH28_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH29_MASK       (0x20000000)
#define SYSCTL_DC7_R_DCDMACH29_BIT        (29)
#define SYSCTL_DC7_R_DCDMACH29_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH29_PRESENT    (0x20000000)

#define SYSCTL_DC7_DCDMACH29_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH29_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH29_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC7_R_DCDMACH30_MASK       (0x40000000)
#define SYSCTL_DC7_R_DCDMACH30_BIT        (30)
#define SYSCTL_DC7_R_DCDMACH30_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_R_DCDMACH30_PRESENT    (0x40000000)

#define SYSCTL_DC7_DCDMACH30_MASK       (0x00000001)
#define SYSCTL_DC7_DCDMACH30_NOPRESENT  (0x00000000)
#define SYSCTL_DC7_DCDMACH30_PRESENT    (0x00000001)
//--------

#define SYSCTL_DC7_DCDMACH0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(0*4))))
#define SYSCTL_DC7_DCDMACH1_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(1*4))))
#define SYSCTL_DC7_DCDMACH2_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(2*4))))
#define SYSCTL_DC7_DCDMACH3_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(3*4))))
#define SYSCTL_DC7_DCDMACH4_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(4*4))))
#define SYSCTL_DC7_DCDMACH5_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(5*4))))
#define SYSCTL_DC7_DCDMACH6_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(6*4))))
#define SYSCTL_DC7_DCDMACH7_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(7*4))))
#define SYSCTL_DC7_DCDMACH8_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(8*4))))
#define SYSCTL_DC7_DCDMACH9_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(9*4))))
#define SYSCTL_DC7_DCDMACH10_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(10*4))))
#define SYSCTL_DC7_DCDMACH11_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(11*4))))
#define SYSCTL_DC7_DCDMACH12_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(12*4))))
#define SYSCTL_DC7_DCDMACH13_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(13*4))))
#define SYSCTL_DC7_DCDMACH14_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(14*4))))
#define SYSCTL_DC7_DCDMACH15_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(15*4))))
#define SYSCTL_DC7_DCDMACH16_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(16*4))))
#define SYSCTL_DC7_DCDMACH17_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(17*4))))
#define SYSCTL_DC7_DCDMACH18_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(18*4))))
#define SYSCTL_DC7_DCDMACH19_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(19*4))))
#define SYSCTL_DC7_DCDMACH20_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(20*4))))
#define SYSCTL_DC7_DCDMACH21_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(21*4))))
#define SYSCTL_DC7_DCDMACH22_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(22*4))))
#define SYSCTL_DC7_DCDMACH23_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(23*4))))
#define SYSCTL_DC7_DCDMACH24_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(24*4))))
#define SYSCTL_DC7_DCDMACH25_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(25*4))))
#define SYSCTL_DC7_DCDMACH26_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(26*4))))
#define SYSCTL_DC7_DCDMACH27_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(27*4))))
#define SYSCTL_DC7_DCDMACH28_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(28*4))))
#define SYSCTL_DC7_DCDMACH29_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(29*4))))
#define SYSCTL_DC7_DCDMACH30_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC7_OFFSET)*32)+(30*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 11 DC8 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DC8_OFFSET     (0x002C)
#define SYSCTL_DC8            (((DC8_TypeDef*)(SYSCTL_BASE+SYSCTL_DC8_OFFSET )))
#define SYSCTL_DC8_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC8_OFFSET)))


//--------
#define SYSCTL_DC8_R_DCADC0AIN0_MASK       (0x00000001)
#define SYSCTL_DC8_R_DCADC0AIN0_BIT        (0)
#define SYSCTL_DC8_R_DCADC0AIN0_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC0AIN0_PRESENT    (0x00000001)

#define SYSCTL_DC8_DCADC0AIN0_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC0AIN0_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC0AIN0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC0AIN1_MASK       (0x00000002)
#define SYSCTL_DC8_R_DCADC0AIN1_BIT        (1)
#define SYSCTL_DC8_R_DCADC0AIN1_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC0AIN1_PRESENT    (0x00000002)

#define SYSCTL_DC8_DCADC0AIN1_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC0AIN1_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC0AIN1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC0AIN2_MASK       (0x00000004)
#define SYSCTL_DC8_R_DCADC0AIN2_BIT        (2)
#define SYSCTL_DC8_R_DCADC0AIN2_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC0AIN2_PRESENT    (0x00000004)

#define SYSCTL_DC8_DCADC0AIN2_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC0AIN2_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC0AIN2_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC0AIN3_MASK       (0x00000008)
#define SYSCTL_DC8_R_DCADC0AIN3_BIT        (3)
#define SYSCTL_DC8_R_DCADC0AIN3_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC0AIN3_PRESENT    (0x00000008)

#define SYSCTL_DC8_DCADC0AIN3_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC0AIN3_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC0AIN3_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC0AIN4_MASK       (0x00000010)
#define SYSCTL_DC8_R_DCADC0AIN4_BIT        (4)
#define SYSCTL_DC8_R_DCADC0AIN4_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC0AIN4_PRESENT    (0x00000010)

#define SYSCTL_DC8_DCADC0AIN4_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC0AIN4_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC0AIN4_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC0AIN5_MASK       (0x00000020)
#define SYSCTL_DC8_R_DCADC0AIN5_BIT        (5)
#define SYSCTL_DC8_R_DCADC0AIN5_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC0AIN5_PRESENT    (0x00000020)

#define SYSCTL_DC8_DCADC0AIN5_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC0AIN5_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC0AIN5_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC0AIN6_MASK       (0x00000040)
#define SYSCTL_DC8_R_DCADC0AIN6_BIT        (6)
#define SYSCTL_DC8_R_DCADC0AIN6_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC0AIN6_PRESENT    (0x00000040)

#define SYSCTL_DC8_DCADC0AIN6_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC0AIN6_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC0AIN6_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC0AIN7_MASK       (0x00000080)
#define SYSCTL_DC8_R_DCADC0AIN7_BIT        (7)
#define SYSCTL_DC8_R_DCADC0AIN7_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC0AIN7_PRESENT    (0x00000080)

#define SYSCTL_DC8_DCADC0AIN7_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC0AIN7_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC0AIN7_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC0AIN8_MASK       (0x00000100)
#define SYSCTL_DC8_R_DCADC0AIN8_BIT        (8)
#define SYSCTL_DC8_R_DCADC0AIN8_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC0AIN8_PRESENT    (0x00000100)

#define SYSCTL_DC8_DCADC0AIN8_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC0AIN8_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC0AIN8_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC0AIN9_MASK       (0x00000200)
#define SYSCTL_DC8_R_DCADC0AIN9_BIT        (9)
#define SYSCTL_DC8_R_DCADC0AIN9_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC0AIN9_PRESENT    (0x00000200)

#define SYSCTL_DC8_DCADC0AIN9_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC0AIN9_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC0AIN9_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC0AIN10_MASK       (0x00000400)
#define SYSCTL_DC8_R_DCADC0AIN10_BIT        (10)
#define SYSCTL_DC8_R_DCADC0AIN10_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC0AIN10_PRESENT    (0x00000400)

#define SYSCTL_DC8_DCADC0AIN10_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC0AIN10_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC0AIN10_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC0AIN11_MASK       (0x00000800)
#define SYSCTL_DC8_R_DCADC0AIN11_BIT        (11)
#define SYSCTL_DC8_R_DCADC0AIN11_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC0AIN11_PRESENT    (0x00000800)

#define SYSCTL_DC8_DCADC0AIN11_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC0AIN11_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC0AIN11_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC0AIN12_MASK       (0x00001000)
#define SYSCTL_DC8_R_DCADC0AIN12_BIT        (12)
#define SYSCTL_DC8_R_DCADC0AIN12_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC0AIN12_PRESENT    (0x00001000)

#define SYSCTL_DC8_DCADC0AIN12_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC0AIN12_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC0AIN12_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC0AIN13_MASK       (0x00002000)
#define SYSCTL_DC8_R_DCADC0AIN13_BIT        (13)
#define SYSCTL_DC8_R_DCADC0AIN13_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC0AIN13_PRESENT    (0x00002000)

#define SYSCTL_DC8_DCADC0AIN13_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC0AIN13_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC0AIN13_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC0AIN14_MASK       (0x00004000)
#define SYSCTL_DC8_R_DCADC0AIN14_BIT        (14)
#define SYSCTL_DC8_R_DCADC0AIN14_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC0AIN14_PRESENT    (0x00004000)

#define SYSCTL_DC8_DCADC0AIN14_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC0AIN14_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC0AIN14_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC0AIN15_MASK       (0x00008000)
#define SYSCTL_DC8_R_DCADC0AIN15_BIT        (15)
#define SYSCTL_DC8_R_DCADC0AIN15_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC0AIN15_PRESENT    (0x00008000)

#define SYSCTL_DC8_DCADC0AIN15_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC0AIN15_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC0AIN15_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC1AIN0_MASK       (0x00010000)
#define SYSCTL_DC8_R_DCADC1AIN0_BIT        (16)
#define SYSCTL_DC8_R_DCADC1AIN0_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC1AIN0_PRESENT    (0x00010000)

#define SYSCTL_DC8_DCADC1AIN0_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC1AIN0_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC1AIN0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC1AIN1_MASK       (0x00020000)
#define SYSCTL_DC8_R_DCADC1AIN1_BIT        (17)
#define SYSCTL_DC8_R_DCADC1AIN1_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC1AIN1_PRESENT    (0x00020000)

#define SYSCTL_DC8_DCADC1AIN1_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC1AIN1_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC1AIN1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC1AIN2_MASK       (0x00040000)
#define SYSCTL_DC8_R_DCADC1AIN2_BIT        (18)
#define SYSCTL_DC8_R_DCADC1AIN2_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC1AIN2_PRESENT    (0x00040000)

#define SYSCTL_DC8_DCADC1AIN2_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC1AIN2_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC1AIN2_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC1AIN3_MASK       (0x00080000)
#define SYSCTL_DC8_R_DCADC1AIN3_BIT        (19)
#define SYSCTL_DC8_R_DCADC1AIN3_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC1AIN3_PRESENT    (0x00080000)

#define SYSCTL_DC8_DCADC1AIN3_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC1AIN3_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC1AIN3_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC1AIN4_MASK       (0x00100000)
#define SYSCTL_DC8_R_DCADC1AIN4_BIT        (20)
#define SYSCTL_DC8_R_DCADC1AIN4_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC1AIN4_PRESENT    (0x00100000)

#define SYSCTL_DC8_DCADC1AIN4_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC1AIN4_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC1AIN4_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC1AIN5_MASK       (0x00200000)
#define SYSCTL_DC8_R_DCADC1AIN5_BIT        (21)
#define SYSCTL_DC8_R_DCADC1AIN5_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC1AIN5_PRESENT    (0x00200000)

#define SYSCTL_DC8_DCADC1AIN5_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC1AIN5_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC1AIN5_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC1AIN6_MASK       (0x00400000)
#define SYSCTL_DC8_R_DCADC1AIN6_BIT        (22)
#define SYSCTL_DC8_R_DCADC1AIN6_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC1AIN6_PRESENT    (0x00400000)

#define SYSCTL_DC8_DCADC1AIN6_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC1AIN6_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC1AIN6_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC1AIN7_MASK       (0x00800000)
#define SYSCTL_DC8_R_DCADC1AIN7_BIT        (23)
#define SYSCTL_DC8_R_DCADC1AIN7_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC1AIN7_PRESENT    (0x00800000)

#define SYSCTL_DC8_DCADC1AIN7_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC1AIN7_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC1AIN7_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC1AIN8_MASK       (0x01000000)
#define SYSCTL_DC8_R_DCADC1AIN8_BIT        (24)
#define SYSCTL_DC8_R_DCADC1AIN8_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC1AIN8_PRESENT    (0x01000000)

#define SYSCTL_DC8_DCADC1AIN8_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC1AIN8_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC1AIN8_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC1AIN9_MASK       (0x02000000)
#define SYSCTL_DC8_R_DCADC1AIN9_BIT        (25)
#define SYSCTL_DC8_R_DCADC1AIN9_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC1AIN9_PRESENT    (0x02000000)

#define SYSCTL_DC8_DCADC1AIN9_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC1AIN9_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC1AIN9_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC1AIN10_MASK       (0x04000000)
#define SYSCTL_DC8_R_DCADC1AIN10_BIT        (26)
#define SYSCTL_DC8_R_DCADC1AIN10_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC1AIN10_PRESENT    (0x04000000)

#define SYSCTL_DC8_DCADC1AIN10_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC1AIN10_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC1AIN10_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC1AIN11_MASK       (0x08000000)
#define SYSCTL_DC8_R_DCADC1AIN11_BIT        (27)
#define SYSCTL_DC8_R_DCADC1AIN11_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC1AIN11_PRESENT    (0x08000000)

#define SYSCTL_DC8_DCADC1AIN11_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC1AIN11_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC1AIN11_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC1AIN12_MASK       (0x10000000)
#define SYSCTL_DC8_R_DCADC1AIN12_BIT        (28)
#define SYSCTL_DC8_R_DCADC1AIN12_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC1AIN12_PRESENT    (0x10000000)

#define SYSCTL_DC8_DCADC1AIN12_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC1AIN12_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC1AIN12_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC1AIN13_MASK       (0x20000000)
#define SYSCTL_DC8_R_DCADC1AIN13_BIT        (29)
#define SYSCTL_DC8_R_DCADC1AIN13_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC1AIN13_PRESENT    (0x20000000)

#define SYSCTL_DC8_DCADC1AIN13_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC1AIN13_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC1AIN13_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC8_R_DCADC1AIN14_MASK       (0x40000000)
#define SYSCTL_DC8_R_DCADC1AIN14_BIT        (30)
#define SYSCTL_DC8_R_DCADC1AIN14_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC1AIN14_PRESENT    (0x40000000)

#define SYSCTL_DC8_DCADC1AIN14_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC1AIN14_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC1AIN14_PRESENT    (0x00000001)
//--------


//--------
#define SYSCTL_DC8_R_DCADC1AIN15_MASK       (0x80000000)
#define SYSCTL_DC8_R_DCADC1AIN15_BIT        (31)
#define SYSCTL_DC8_R_DCADC1AIN15_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_R_DCADC1AIN15_PRESENT    (0x80000000)

#define SYSCTL_DC8_DCADC1AIN15_MASK       (0x00000001)
#define SYSCTL_DC8_DCADC1AIN15_NOPRESENT  (0x00000000)
#define SYSCTL_DC8_DCADC1AIN15_PRESENT    (0x00000001)
//--------

#define SYSCTL_DC8_DCADC0AIN0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(0*4))))
#define SYSCTL_DC8_DCADC0AIN1_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(1*4))))
#define SYSCTL_DC8_DCADC0AIN2_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(2*4))))
#define SYSCTL_DC8_DCADC0AIN3_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(3*4))))
#define SYSCTL_DC8_DCADC0AIN4_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(4*4))))
#define SYSCTL_DC8_DCADC0AIN5_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(5*4))))
#define SYSCTL_DC8_DCADC0AIN6_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(6*4))))
#define SYSCTL_DC8_DCADC0AIN7_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(7*4))))
#define SYSCTL_DC8_DCADC0AIN8_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(8*4))))
#define SYSCTL_DC8_DCADC0AIN9_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(9*4))))
#define SYSCTL_DC8_DCADC0AIN10_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(10*4))))
#define SYSCTL_DC8_DCADC0AIN11_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(11*4))))
#define SYSCTL_DC8_DCADC0AIN12_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(12*4))))
#define SYSCTL_DC8_DCADC0AIN13_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(13*4))))
#define SYSCTL_DC8_DCADC0AIN14_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(14*4))))
#define SYSCTL_DC8_DCADC0AIN15_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(15*4))))
#define SYSCTL_DC8_DCADC1AIN0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(16*4))))
#define SYSCTL_DC8_DCADC1AIN1_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(17*4))))
#define SYSCTL_DC8_DCADC1AIN2_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(18*4))))
#define SYSCTL_DC8_DCADC1AIN3_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(19*4))))
#define SYSCTL_DC8_DCADC1AIN4_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(20*4))))
#define SYSCTL_DC8_DCADC1AIN5_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(21*4))))
#define SYSCTL_DC8_DCADC1AIN6_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(22*4))))
#define SYSCTL_DC8_DCADC1AIN7_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(23*4))))
#define SYSCTL_DC8_DCADC1AIN8_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(24*4))))
#define SYSCTL_DC8_DCADC1AIN9_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(25*4))))
#define SYSCTL_DC8_DCADC1AIN10_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(26*4))))
#define SYSCTL_DC8_DCADC1AIN11_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(27*4))))
#define SYSCTL_DC8_DCADC1AIN12_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(28*4))))
#define SYSCTL_DC8_DCADC1AIN13_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(29*4))))
#define SYSCTL_DC8_DCADC1AIN14_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(30*4))))
#define SYSCTL_DC8_DCADC1AIN15_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC8_OFFSET)*32)+(31*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 12 PBORCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PBORCTL_OFFSET     (0x0030)
#define SYSCTL_PBORCTL            (((PBORCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_PBORCTL_OFFSET )))
#define SYSCTL_PBORCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PBORCTL_OFFSET)))


//--------
#define SYSCTL_PBORCTL_R_BOR1_MASK       (0x00000002)
#define SYSCTL_PBORCTL_R_BOR1_BIT        (1)
#define SYSCTL_PBORCTL_R_BOR1_INT        (0x00000000)
#define SYSCTL_PBORCTL_R_BOR1_RESET      (0x00000002)

#define SYSCTL_PBORCTL_BOR1_MASK         (0x00000001)
#define SYSCTL_PBORCTL_BOR1_INT          (0x00000000)
#define SYSCTL_PBORCTL_BOR1_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_PBORCTL_R_BOR0_MASK       (0x00000004)
#define SYSCTL_PBORCTL_R_BOR0_BIT        (2)
#define SYSCTL_PBORCTL_R_BOR0_INT        (0x00000000)
#define SYSCTL_PBORCTL_R_BOR0_RESET      (0x00000004)

#define SYSCTL_PBORCTL_BOR0_MASK         (0x00000001)
#define SYSCTL_PBORCTL_BOR0_INT          (0x00000000)
#define SYSCTL_PBORCTL_BOR0_RESET        (0x00000001)
//--------

#define SYSCTL_PBORCTL_BOR1_BB (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PBORCTL_OFFSET)*32)+(1*4))))
#define SYSCTL_PBORCTL_BOR0_BB (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PBORCTL_OFFSET)*32)+(2*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 13 SRCR0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_SRCR0_OFFSET     (0x0040)
#define SYSCTL_SRCR0            (((SRCR0_TypeDef*)(SYSCTL_BASE+SYSCTL_SRCR0_OFFSET )))
#define SYSCTL_SRCR0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SRCR0_OFFSET)))

//--------
#define SYSCTL_SRCR0_R_SRCRWDT0_MASK       (0x00000008)
#define SYSCTL_SRCR0_R_SRCRWDT0_BIT        (3)
#define SYSCTL_SRCR0_R_SRCRWDT0_SET  (0x00000000)
#define SYSCTL_SRCR0_R_SRCRWDT0_RESET    (0x00000008)

#define SYSCTL_SRCR0_SRCRWDT0_MASK       (0x00000001)
#define SYSCTL_SRCR0_SRCRWDT0_SET  (0x00000000)
#define SYSCTL_SRCR0_SRCRWDT0_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR0_R_SRCRHIB_MASK       (0x00000040)
#define SYSCTL_SRCR0_R_SRCRHIB_BIT        (6)
#define SYSCTL_SRCR0_R_SRCRHIB_SET  (0x00000000)
#define SYSCTL_SRCR0_R_SRCRHIB_RESET    (0x00000040)

#define SYSCTL_SRCR0_SRCRHIB_MASK       (0x00000001)
#define SYSCTL_SRCR0_SRCRHIB_SET  (0x00000000)
#define SYSCTL_SRCR0_SRCRHIB_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR0_R_SRCRADC0_MASK       (0x00010000)
#define SYSCTL_SRCR0_R_SRCRADC0_BIT        (16)
#define SYSCTL_SRCR0_R_SRCRADC0_SET  (0x00000000)
#define SYSCTL_SRCR0_R_SRCRADC0_RESET    (0x00010000)

#define SYSCTL_SRCR0_SRCRADC0_MASK       (0x00000001)
#define SYSCTL_SRCR0_SRCRADC0_SET  (0x00000000)
#define SYSCTL_SRCR0_SRCRADC0_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR0_R_SRCRADC1_MASK       (0x00020000)
#define SYSCTL_SRCR0_R_SRCRADC1_BIT        (17)
#define SYSCTL_SRCR0_R_SRCRADC1_SET  (0x00000000)
#define SYSCTL_SRCR0_R_SRCRADC1_RESET    (0x00020000)

#define SYSCTL_SRCR0_SRCRADC1_MASK       (0x00000001)
#define SYSCTL_SRCR0_SRCRADC1_SET  (0x00000000)
#define SYSCTL_SRCR0_SRCRADC1_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR0_R_SRCRPWM0_MASK       (0x00100000)
#define SYSCTL_SRCR0_R_SRCRPWM0_BIT        (20)
#define SYSCTL_SRCR0_R_SRCRPWM0_SET  (0x00000000)
#define SYSCTL_SRCR0_R_SRCRPWM0_RESET    (0x00100000)

#define SYSCTL_SRCR0_SRCRPWM0_MASK       (0x00000001)
#define SYSCTL_SRCR0_SRCRPWM0_SET  (0x00000000)
#define SYSCTL_SRCR0_SRCRPWM0_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR0_R_SRCRCAN0_MASK       (0x01000000)
#define SYSCTL_SRCR0_R_SRCRCAN0_BIT        (24)
#define SYSCTL_SRCR0_R_SRCRCAN0_SET  (0x00000000)
#define SYSCTL_SRCR0_R_SRCRCAN0_RESET    (0x01000000)

#define SYSCTL_SRCR0_SRCRCAN0_MASK       (0x00000001)
#define SYSCTL_SRCR0_SRCRCAN0_SET  (0x00000000)
#define SYSCTL_SRCR0_SRCRCAN0_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR0_R_SRCRCAN1_MASK       (0x02000000)
#define SYSCTL_SRCR0_R_SRCRCAN1_BIT        (25)
#define SYSCTL_SRCR0_R_SRCRCAN1_SET  (0x00000000)
#define SYSCTL_SRCR0_R_SRCRCAN1_RESET    (0x02000000)

#define SYSCTL_SRCR0_SRCRCAN1_MASK       (0x00000001)
#define SYSCTL_SRCR0_SRCRCAN1_SET  (0x00000000)
#define SYSCTL_SRCR0_SRCRCAN1_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR0_R_SRCRWDT1_MASK       (0x10000000)
#define SYSCTL_SRCR0_R_SRCRWDT1_BIT        (28)
#define SYSCTL_SRCR0_R_SRCRWDT1_SET  (0x00000000)
#define SYSCTL_SRCR0_R_SRCRWDT1_RESET    (0x10000000)

#define SYSCTL_SRCR0_SRCRWDT1_MASK       (0x00000001)
#define SYSCTL_SRCR0_SRCRWDT1_SET  (0x00000000)
#define SYSCTL_SRCR0_SRCRWDT1_RESET    (0x00000001)
//--------

#define SYSCTL_SRCR0_SRCRWDT0_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR0_OFFSET)*32)+(3*4))))
#define SYSCTL_SRCR0_SRCRHIB_BB       (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR0_OFFSET)*32)+(6*4))))
#define SYSCTL_SRCR0_SRCRADC0_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR0_OFFSET)*32)+(16*4))))
#define SYSCTL_SRCR0_SRCRADC1_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR0_OFFSET)*32)+(17*4))))
#define SYSCTL_SRCR0_SRCRPWM0_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR0_OFFSET)*32)+(20*4))))
#define SYSCTL_SRCR0_SRCRCAN0_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR0_OFFSET)*32)+(24*4))))
#define SYSCTL_SRCR0_SRCRCAN1_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR0_OFFSET)*32)+(25*4))))
#define SYSCTL_SRCR0_SRCRWDT1_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR0_OFFSET)*32)+(28*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 14 SRCR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_SRCR1_OFFSET     (0x0044)
#define SYSCTL_SRCR1            (((SRCR1_TypeDef*)(SYSCTL_BASE+SYSCTL_SRCR1_OFFSET )))
#define SYSCTL_SRCR1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SRCR1_OFFSET)))


//--------
#define SYSCTL_SRCR1_R_SRCRUART0_MASK       (0x00000001)
#define SYSCTL_SRCR1_R_SRCRUART0_BIT        (0)
#define SYSCTL_SRCR1_R_SRCRUART0_SET  (0x00000000)
#define SYSCTL_SRCR1_R_SRCRUART0_RESET    (0x00000001)

#define SYSCTL_SRCR1_SRCRUART0_MASK       (0x00000001)
#define SYSCTL_SRCR1_SRCRUART0_SET  (0x00000000)
#define SYSCTL_SRCR1_SRCRUART0_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR1_R_SRCRUART1_MASK       (0x00000002)
#define SYSCTL_SRCR1_R_SRCRUART1_BIT        (1)
#define SYSCTL_SRCR1_R_SRCRUART1_SET  (0x00000000)
#define SYSCTL_SRCR1_R_SRCRUART1_RESET    (0x00000002)

#define SYSCTL_SRCR1_SRCRUART1_MASK       (0x00000001)
#define SYSCTL_SRCR1_SRCRUART1_SET  (0x00000000)
#define SYSCTL_SRCR1_SRCRUART1_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR1_R_SRCRUART2_MASK       (0x00000004)
#define SYSCTL_SRCR1_R_SRCRUART2_BIT        (2)
#define SYSCTL_SRCR1_R_SRCRUART2_SET  (0x00000000)
#define SYSCTL_SRCR1_R_SRCRUART2_RESET    (0x00000004)

#define SYSCTL_SRCR1_SRCRUART2_MASK       (0x00000001)
#define SYSCTL_SRCR1_SRCRUART2_SET  (0x00000000)
#define SYSCTL_SRCR1_SRCRUART2_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR1_R_SRCRSSI0_MASK       (0x00000010)
#define SYSCTL_SRCR1_R_SRCRSSI0_BIT        (4)
#define SYSCTL_SRCR1_R_SRCRSSI0_SET  (0x00000000)
#define SYSCTL_SRCR1_R_SRCRSSI0_RESET    (0x00000010)

#define SYSCTL_SRCR1_SRCRSSI0_MASK       (0x00000001)
#define SYSCTL_SRCR1_SRCRSSI0_SET  (0x00000000)
#define SYSCTL_SRCR1_SRCRSSI0_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR1_R_SRCRSSI1_MASK       (0x00000020)
#define SYSCTL_SRCR1_R_SRCRSSI1_BIT        (5)
#define SYSCTL_SRCR1_R_SRCRSSI1_SET  (0x00000000)
#define SYSCTL_SRCR1_R_SRCRSSI1_RESET    (0x00000010)

#define SYSCTL_SRCR1_SRCRSSI1_MASK       (0x00000001)
#define SYSCTL_SRCR1_SRCRSSI1_SET  (0x00000000)
#define SYSCTL_SRCR1_SRCRSSI1_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR1_R_SRCRQEI0_MASK       (0x00000100)
#define SYSCTL_SRCR1_R_SRCRQEI0_BIT        (8)
#define SYSCTL_SRCR1_R_SRCRQEI0_SET  (0x00000000)
#define SYSCTL_SRCR1_R_SRCRQEI0_RESET    (0x00000100)

#define SYSCTL_SRCR1_SRCRQEI0_MASK       (0x00000001)
#define SYSCTL_SRCR1_SRCRQEI0_SET  (0x00000000)
#define SYSCTL_SRCR1_SRCRQEI0_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR1_R_SRCRQEI1_MASK       (0x00000200)
#define SYSCTL_SRCR1_R_SRCRQEI1_BIT        (9)
#define SYSCTL_SRCR1_R_SRCRQEI1_SET  (0x00000000)
#define SYSCTL_SRCR1_R_SRCRQEI1_RESET    (0x00000200)

#define SYSCTL_SRCR1_SRCRQEI1_MASK       (0x00000001)
#define SYSCTL_SRCR1_SRCRQEI1_SET  (0x00000000)
#define SYSCTL_SRCR1_SRCRQEI1_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR1_R_SRCRI2C0_MASK       (0x00001000)
#define SYSCTL_SRCR1_R_SRCRI2C0_BIT        (12)
#define SYSCTL_SRCR1_R_SRCRI2C0_SET  (0x00000000)
#define SYSCTL_SRCR1_R_SRCRI2C0_RESET    (0x00001000)

#define SYSCTL_SRCR1_SRCRI2C0_MASK       (0x00000001)
#define SYSCTL_SRCR1_SRCRI2C0_SET  (0x00000000)
#define SYSCTL_SRCR1_SRCRI2C0_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR1_R_SRCRI2C1_MASK       (0x00004000)
#define SYSCTL_SRCR1_R_SRCRI2C1_BIT        (14)
#define SYSCTL_SRCR1_R_SRCRI2C1_SET  (0x00000000)
#define SYSCTL_SRCR1_R_SRCRI2C1_RESET    (0x00004000)

#define SYSCTL_SRCR1_SRCRI2C1_MASK       (0x00000001)
#define SYSCTL_SRCR1_SRCRI2C1_SET  (0x00000000)
#define SYSCTL_SRCR1_SRCRI2C1_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR1_R_SRCRTIMER0_MASK       (0x00010000)
#define SYSCTL_SRCR1_R_SRCRTIMER0_BIT        (16)
#define SYSCTL_SRCR1_R_SRCRTIMER0_SET  (0x00000000)
#define SYSCTL_SRCR1_R_SRCRTIMER0_RESET    (0x00010000)

#define SYSCTL_SRCR1_SRCRTIMER0_MASK       (0x00000001)
#define SYSCTL_SRCR1_SRCRTIMER0_SET  (0x00000000)
#define SYSCTL_SRCR1_SRCRTIMER0_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR1_R_SRCRTIMER1_MASK       (0x00020000)
#define SYSCTL_SRCR1_R_SRCRTIMER1_BIT        (17)
#define SYSCTL_SRCR1_R_SRCRTIMER1_SET  (0x00000000)
#define SYSCTL_SRCR1_R_SRCRTIMER1_RESET    (0x00020000)

#define SYSCTL_SRCR1_SRCRTIMER1_MASK       (0x00000001)
#define SYSCTL_SRCR1_SRCRTIMER1_SET  (0x00000000)
#define SYSCTL_SRCR1_SRCRTIMER1_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR1_R_SRCRTIMER2_MASK       (0x00040000)
#define SYSCTL_SRCR1_R_SRCRTIMER2_BIT        (18)
#define SYSCTL_SRCR1_R_SRCRTIMER2_SET  (0x00000000)
#define SYSCTL_SRCR1_R_SRCRTIMER2_RESET    (0x00040000)

#define SYSCTL_SRCR1_SRCRTIMER2_MASK       (0x00000001)
#define SYSCTL_SRCR1_SRCRTIMER2_SET  (0x00000000)
#define SYSCTL_SRCR1_SRCRTIMER2_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR1_R_SRCRTIMER3_MASK       (0x00080000)
#define SYSCTL_SRCR1_R_SRCRTIMER3_BIT        (19)
#define SYSCTL_SRCR1_R_SRCRTIMER3_SET  (0x00000000)
#define SYSCTL_SRCR1_R_SRCRTIMER3_RESET    (0x00080000)

#define SYSCTL_SRCR1_SRCRTIMER3_MASK       (0x00000001)
#define SYSCTL_SRCR1_SRCRTIMER3_SET  (0x00000000)
#define SYSCTL_SRCR1_SRCRTIMER3_RESET    (0x00000001)
//--------


//--------
#define SYSCTL_SRCR1_R_SRCRCOMP0_MASK       (0x01000000)
#define SYSCTL_SRCR1_R_SRCRCOMP0_BIT        (24)
#define SYSCTL_SRCR1_R_SRCRCOMP0_SET  (0x00000000)
#define SYSCTL_SRCR1_R_SRCRCOMP0_RESET    (0x01000000)

#define SYSCTL_SRCR1_SRCRCOMP0_MASK       (0x00000001)
#define SYSCTL_SRCR1_SRCRCOMP0_SET  (0x00000000)
#define SYSCTL_SRCR1_SRCRCOMP0_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR1_R_SRCRCOMP1_MASK       (0x02000000)
#define SYSCTL_SRCR1_R_SRCRCOMP1_BIT        (25)
#define SYSCTL_SRCR1_R_SRCRCOMP1_SET  (0x00000000)
#define SYSCTL_SRCR1_R_SRCRCOMP1_RESET    (0x02000000)

#define SYSCTL_SRCR1_SRCRCOMP1_MASK       (0x00000001)
#define SYSCTL_SRCR1_SRCRCOMP1_SET  (0x00000000)
#define SYSCTL_SRCR1_SRCRCOMP1_RESET    (0x00000001)
//--------


#define SYSCTL_SRCR1_SRCRUART0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32)+(0*4))))
#define SYSCTL_SRCR1_SRCRUART1_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32)+(1*4))))
#define SYSCTL_SRCR1_SRCRUART2_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32)+(2*4))))
#define SYSCTL_SRCR1_SRCRSSI0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32)+(4*4))))
#define SYSCTL_SRCR1_SRCRSSI1_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32)+(5*4))))
#define SYSCTL_SRCR1_SRCRQEI0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32)+(8*4))))
#define SYSCTL_SRCR1_SRCRQEI1_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32)+(9*4))))
#define SYSCTL_SRCR1_SRCRI2C0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32)+(12*4))))
#define SYSCTL_SRCR1_SRCRI2C1_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32)+(14*4))))
#define SYSCTL_SRCR1_SRCRTIMER0_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32)+(16*4))))
#define SYSCTL_SRCR1_SRCRTIMER1_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32)+(17*4))))
#define SYSCTL_SRCR1_SRCRTIMER2_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32)+(18*4))))
#define SYSCTL_SRCR1_SRCRTIMER3_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32)+(19*4))))
#define SYSCTL_SRCR1_SRCRCOMP0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32)+(24*4))))
#define SYSCTL_SRCR1_SRCRCOMP1_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR1_OFFSET)*32)+(25*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 15 SRCR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_SRCR2_OFFSET     (0x0048)
#define SYSCTL_SRCR2            (((SRCR2_TypeDef*)(SYSCTL_BASE+SYSCTL_SRCR2_OFFSET )))
#define SYSCTL_SRCR2_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SRCR2_OFFSET)))


//--------
#define SYSCTL_SRCR2_R_SRCRGPIOA_MASK       (0x00000001)
#define SYSCTL_SRCR2_R_SRCRGPIOA_BIT        (0)
#define SYSCTL_SRCR2_R_SRCRGPIOA_SET  (0x00000000)
#define SYSCTL_SRCR2_R_SRCRGPIOA_RESET    (0x00000001)

#define SYSCTL_SRCR2_SRCRGPIOA_MASK       (0x00000001)
#define SYSCTL_SRCR2_SRCRGPIOA_SET  (0x00000000)
#define SYSCTL_SRCR2_SRCRGPIOA_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR2_R_SRCRGPIOB_MASK       (0x00000002)
#define SYSCTL_SRCR2_R_SRCRGPIOB_BIT        (1)
#define SYSCTL_SRCR2_R_SRCRGPIOB_SET  (0x00000000)
#define SYSCTL_SRCR2_R_SRCRGPIOB_RESET    (0x00000002)

#define SYSCTL_SRCR2_SRCRGPIOB_MASK       (0x00000001)
#define SYSCTL_SRCR2_SRCRGPIOB_SET  (0x00000000)
#define SYSCTL_SRCR2_SRCRGPIOB_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR2_R_SRCRGPIOC_MASK       (0x00000004)
#define SYSCTL_SRCR2_R_SRCRGPIOC_BIT        (2)
#define SYSCTL_SRCR2_R_SRCRGPIOC_SET  (0x00000000)
#define SYSCTL_SRCR2_R_SRCRGPIOC_RESET    (0x00000004)

#define SYSCTL_SRCR2_SRCRGPIOC_MASK       (0x00000001)
#define SYSCTL_SRCR2_SRCRGPIOC_SET  (0x00000000)
#define SYSCTL_SRCR2_SRCRGPIOC_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR2_R_SRCRGPIOD_MASK       (0x00000008)
#define SYSCTL_SRCR2_R_SRCRGPIOD_BIT        (3)
#define SYSCTL_SRCR2_R_SRCRGPIOD_SET  (0x00000000)
#define SYSCTL_SRCR2_R_SRCRGPIOD_RESET    (0x00000008)

#define SYSCTL_SRCR2_SRCRGPIOD_MASK       (0x00000001)
#define SYSCTL_SRCR2_SRCRGPIOD_SET  (0x00000000)
#define SYSCTL_SRCR2_SRCRGPIOD_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR2_R_SRCRGPIOE_MASK       (0x00000010)
#define SYSCTL_SRCR2_R_SRCRGPIOE_BIT        (4)
#define SYSCTL_SRCR2_R_SRCRGPIOE_SET  (0x00000000)
#define SYSCTL_SRCR2_R_SRCRGPIOE_RESET    (0x00000010)

#define SYSCTL_SRCR2_SRCRGPIOE_MASK       (0x00000001)
#define SYSCTL_SRCR2_SRCRGPIOE_SET  (0x00000000)
#define SYSCTL_SRCR2_SRCRGPIOE_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR2_R_SRCRGPIOF_MASK       (0x00000020)
#define SYSCTL_SRCR2_R_SRCRGPIOF_BIT        (5)
#define SYSCTL_SRCR2_R_SRCRGPIOF_SET  (0x00000000)
#define SYSCTL_SRCR2_R_SRCRGPIOF_RESET    (0x00000020)

#define SYSCTL_SRCR2_SRCRGPIOF_MASK       (0x00000001)
#define SYSCTL_SRCR2_SRCRGPIOF_SET  (0x00000000)
#define SYSCTL_SRCR2_SRCRGPIOF_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR2_R_SRCRUDMA_MASK       (0x00002000)
#define SYSCTL_SRCR2_R_SRCRUDMA_BIT        (13)
#define SYSCTL_SRCR2_R_SRCRUDMA_SET  (0x00000000)
#define SYSCTL_SRCR2_R_SRCRUDMA_RESET    (0x00002000)

#define SYSCTL_SRCR2_SRCRUDMA_MASK       (0x00000001)
#define SYSCTL_SRCR2_SRCRUDMA_SET  (0x00000000)
#define SYSCTL_SRCR2_SRCRUDMA_RESET    (0x00000001)
//--------

//--------
#define SYSCTL_SRCR2_R_SRCRUSB0_MASK       (0x00010000)
#define SYSCTL_SRCR2_R_SRCRUSB0_BIT        (16)
#define SYSCTL_SRCR2_R_SRCRUSB0_SET  (0x00000000)
#define SYSCTL_SRCR2_R_SRCRUSB0_RESET    (0x00010000)

#define SYSCTL_SRCR2_SRCRUSB0_MASK       (0x00000001)
#define SYSCTL_SRCR2_SRCRUSB0_SET  (0x00000000)
#define SYSCTL_SRCR2_SRCRUSB0_RESET    (0x00000001)
//--------

#define SYSCTL_SRCR2_SRCRGPIOA_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR2_OFFSET)*32)+(0*4))))
#define SYSCTL_SRCR2_SRCRGPIOB_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR2_OFFSET)*32)+(1*4))))
#define SYSCTL_SRCR2_SRCRGPIOC_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR2_OFFSET)*32)+(2*4))))
#define SYSCTL_SRCR2_SRCRGPIOD_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR2_OFFSET)*32)+(3*4))))
#define SYSCTL_SRCR2_SRCRGPIOE_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR2_OFFSET)*32)+(4*4))))
#define SYSCTL_SRCR2_SRCRGPIOF_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR2_OFFSET)*32)+(5*4))))
#define SYSCTL_SRCR2_SRCRUDMA_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR2_OFFSET)*32)+(13*4))))
#define SYSCTL_SRCR2_SRCRUSB0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCR2_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 16 RIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_RIS_OFFSET     (0x0050)
#define SYSCTL_RIS            (((RIS_TypeDef*)(SYSCTL_BASE+SYSCTL_RIS_OFFSET )))
#define SYSCTL_RIS_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_RIS_OFFSET)))

//--------
#define SYSCTL_RIS_R_BOR1RIS_MASK        (0x00000002)
#define SYSCTL_RIS_R_BOR1RIS_BIT         (1)
#define SYSCTL_RIS_R_BOR1RIS_NOACTIVE    (0x00000000)
#define SYSCTL_RIS_R_BOR1RIS_ACTIVE      (0x00000002)

#define SYSCTL_RIS_BOR1RIS_MASK        (0x00000001)
#define SYSCTL_RIS_BOR1RIS_NOACTIVE    (0x00000000)
#define SYSCTL_RIS_BOR1RIS_ACTIVE      (0x00000001)
//--------

//--------
#define SYSCTL_RIS_R_MOFRIS_MASK        (0x00000008)
#define SYSCTL_RIS_R_MOFRIS_BIT         (3)
#define SYSCTL_RIS_R_MOFRIS_NOACTIVE    (0x00000000)
#define SYSCTL_RIS_R_MOFRIS_ACTIVE      (0x00000008)

#define SYSCTL_RIS_MOFRIS_MASK        (0x00000001)
#define SYSCTL_RIS_MOFRIS_NOACTIVE    (0x00000000)
#define SYSCTL_RIS_MOFRIS_ACTIVE      (0x00000001)
//--------

//--------
#define SYSCTL_RIS_R_PLLRIS_MASK        (0x00000040)
#define SYSCTL_RIS_R_PLLRIS_BIT         (6)
#define SYSCTL_RIS_R_PLLRIS_NOACTIVE    (0x00000000)
#define SYSCTL_RIS_R_PLLRIS_ACTIVE      (0x00000040)

#define SYSCTL_RIS_PLLRIS_MASK        (0x00000001)
#define SYSCTL_RIS_PLLRIS_NOACTIVE    (0x00000000)
#define SYSCTL_RIS_PLLRIS_ACTIVE      (0x00000001)
//--------

//--------
#define SYSCTL_RIS_R_USBPLLRIS_MASK        (0x00000080)
#define SYSCTL_RIS_R_USBPLLRIS_BIT         (7)
#define SYSCTL_RIS_R_USBPLLRIS_NOACTIVE    (0x00000000)
#define SYSCTL_RIS_R_USBPLLRIS_ACTIVE      (0x00000080)

#define SYSCTL_RIS_USBPLLRIS_MASK        (0x00000001)
#define SYSCTL_RIS_USBPLLRIS_NOACTIVE    (0x00000000)
#define SYSCTL_RIS_USBPLLRIS_ACTIVE      (0x00000001)
//--------

//--------
#define SYSCTL_RIS_R_MOSCPUPRIS_MASK        (0x00000100)
#define SYSCTL_RIS_R_MOSCPUPRIS_BIT         (8)
#define SYSCTL_RIS_R_MOSCPUPRIS_NOACTIVE    (0x00000000)
#define SYSCTL_RIS_R_MOSCPUPRIS_ACTIVE      (0x00000100)

#define SYSCTL_RIS_MOSCPUPRIS_MASK        (0x00000001)
#define SYSCTL_RIS_MOSCPUPRIS_NOACTIVE    (0x00000000)
#define SYSCTL_RIS_MOSCPUPRIS_ACTIVE      (0x00000001)
//--------

//--------
#define SYSCTL_RIS_R_VDDARIS_MASK        (0x00000400)
#define SYSCTL_RIS_R_VDDARIS_BIT         (10)
#define SYSCTL_RIS_R_VDDARIS_NOACTIVE    (0x00000000)
#define SYSCTL_RIS_R_VDDARIS_ACTIVE      (0x00000400)

#define SYSCTL_RIS_VDDARIS_MASK        (0x00000001)
#define SYSCTL_RIS_VDDARIS_NOACTIVE    (0x00000000)
#define SYSCTL_RIS_VDDARIS_ACTIVE      (0x00000001)
//--------

//--------
#define SYSCTL_RIS_R_BOR0RIS_MASK        (0x00000800)
#define SYSCTL_RIS_R_BOR0RIS_BIT         (11)
#define SYSCTL_RIS_R_BOR0RIS_NOACTIVE    (0x00000000)
#define SYSCTL_RIS_R_BOR0RIS_ACTIVE      (0x00000800)

#define SYSCTL_RIS_BOR0RIS_MASK        (0x00000001)
#define SYSCTL_RIS_BOR0RIS_NOACTIVE    (0x00000000)
#define SYSCTL_RIS_BOR0RIS_ACTIVE      (0x00000001)
//--------

#define SYSCTL_RIS_BOR1RIS_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(1*4))))
#define SYSCTL_RIS_MOFRIS_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(3*4))))
#define SYSCTL_RIS_PLLLRIS_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(6*4))))
#define SYSCTL_RIS_USBPLLLRIS_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(7*4))))
#define SYSCTL_RIS_MOSCPUPRIS_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(8*4))))
#define SYSCTL_RIS_VDDARIS_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(10*4))))
#define SYSCTL_RIS_BOR0RIS_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(11*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 17 IMC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_IMC_OFFSET     (0x0054)
#define SYSCTL_IMC            (((IMC_TypeDef*)(SYSCTL_BASE+SYSCTL_IMC_OFFSET )))
#define SYSCTL_IMC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_IMC_OFFSET)))



//--------
#define SYSCTL_IMC_R_BOR1IM_MASK       (0x00000002)
#define SYSCTL_IMC_R_BOR1IM_BIT        (1)
#define SYSCTL_IMC_R_BOR1IM_DIS        (0x00000000)
#define SYSCTL_IMC_R_BOR1IM_EN         (0x00000002)

#define SYSCTL_IMC_BOR1IM_MASK       (0x00000001)
#define SYSCTL_IMC_BOR1IM_DIS        (0x00000000)
#define SYSCTL_IMC_BOR1IM_EN         (0x00000001)
//--------

//--------
#define SYSCTL_IMC_R_MOFIM_MASK       (0x00000008)
#define SYSCTL_IMC_R_MOFIM_BIT        (3)
#define SYSCTL_IMC_R_MOFIM_DIS        (0x00000000)
#define SYSCTL_IMC_R_MOFIM_EN         (0x00000008)

#define SYSCTL_IMC_MOFIM_MASK       (0x00000001)
#define SYSCTL_IMC_MOFIM_DIS        (0x00000000)
#define SYSCTL_IMC_MOFIM_EN         (0x00000001)
//--------

//--------
#define SYSCTL_IMC_R_PLLIM_MASK       (0x00000040)
#define SYSCTL_IMC_R_PLLIM_BIT        (6)
#define SYSCTL_IMC_R_PLLIM_DIS        (0x00000000)
#define SYSCTL_IMC_R_PLLIM_EN         (0x00000040)

#define SYSCTL_IMC_PLLIM_MASK       (0x00000001)
#define SYSCTL_IMC_PLLIM_DIS        (0x00000000)
#define SYSCTL_IMC_PLLIM_EN         (0x00000001)
//--------

//--------
#define SYSCTL_IMC_R_USBPLLIM_MASK       (0x00000080)
#define SYSCTL_IMC_R_USBPLLIM_BIT        (7)
#define SYSCTL_IMC_R_USBPLLIM_DIS        (0x00000000)
#define SYSCTL_IMC_R_USBPLLIM_EN         (0x00000080)

#define SYSCTL_IMC_USBPLLIM_MASK       (0x00000001)
#define SYSCTL_IMC_USBPLLIM_DIS        (0x00000000)
#define SYSCTL_IMC_USBPLLIM_EN         (0x00000001)
//--------

//--------
#define SYSCTL_IMC_R_MOSCPUPIM_MASK       (0x00000100)
#define SYSCTL_IMC_R_MOSCPUPIM_BIT        (8)
#define SYSCTL_IMC_R_MOSCPUPIM_DIS        (0x00000000)
#define SYSCTL_IMC_R_MOSCPUPIM_EN         (0x00000100)

#define SYSCTL_IMC_MOSCPUPIM_MASK       (0x00000001)
#define SYSCTL_IMC_MOSCPUPIM_DIS        (0x00000000)
#define SYSCTL_IMC_MOSCPUPIM_EN         (0x00000001)
//--------


//--------
#define SYSCTL_IMC_R_VDDAIM_MASK       (0x00000400)
#define SYSCTL_IMC_R_VDDAIM_BIT        (10)
#define SYSCTL_IMC_R_VDDAIM_DIS        (0x00000000)
#define SYSCTL_IMC_R_VDDAIM_EN         (0x00000400)

#define SYSCTL_IMC_VDDAIM_MASK       (0x00000001)
#define SYSCTL_IMC_VDDAIM_DIS        (0x00000000)
#define SYSCTL_IMC_VDDAIM_EN         (0x00000001)
//--------

//--------
#define SYSCTL_IMC_R_BOR0IM_MASK       (0x00000800)
#define SYSCTL_IMC_R_BOR0IM_BIT        (11)
#define SYSCTL_IMC_R_BOR0IM_DIS        (0x00000000)
#define SYSCTL_IMC_R_BOR0IM_EN         (0x00000800)

#define SYSCTL_IMC_BOR0IM_MASK       (0x00000001)
#define SYSCTL_IMC_BOR0IM_DIS        (0x00000000)
//--------

#define SYSCTL_IMC_BOR1IM_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(1*4))))
#define SYSCTL_IMC_MOFIM_BB     (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(3*4))))
#define SYSCTL_IMC_PLLLIM_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(6*4))))
#define SYSCTL_IMC_USBPLLLIM_BB (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(7*4))))
#define SYSCTL_IMC_MOSCPUPIM_BB (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(8*4))))
#define SYSCTL_IMC_VDDAIM_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(10*4))))
#define SYSCTL_IMC_BOR0IM_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 18 MISC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define SYSCTL_MISC_OFFSET     (0x0058)
#define SYSCTL_MISC            (((MISC_TypeDef*)(SYSCTL_BASE+SYSCTL_MISC_OFFSET )))
#define SYSCTL_MISC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_MISC_OFFSET)))



//--------
#define SYSCTL_MISC_R_BOR1MIS_MASK       (0x00000002)
#define SYSCTL_MISC_R_BOR1MIS_BIT        (1)
#define SYSCTL_MISC_R_BOR1MIS_NOOCCUR    (0x00000000)
#define SYSCTL_MISC_R_BOR1MIS_OCCUR      (0x00000002)
#define SYSCTL_MISC_R_BOR1MIS_CLEAR      (0x00000002)

#define SYSCTL_MISC_BOR1MIS_MASK       (0x00000001)
#define SYSCTL_MISC_BOR1MIS_NOOCCUR    (0x00000000)
#define SYSCTL_MISC_BOR1MIS_OCCUR      (0x00000001)
#define SYSCTL_MISC_BOR1MIS_CLEAR      (0x00000001)
//--------

//--------
#define SYSCTL_MISC_R_MOFMIS_MASK       (0x00000008)
#define SYSCTL_MISC_R_MOFMIS_BIT        (3)
#define SYSCTL_MISC_R_MOFMIS_NOOCCUR    (0x00000000)
#define SYSCTL_MISC_R_MOFMIS_OCCUR      (0x00000008)
#define SYSCTL_MISC_R_MOFMIS_CLEAR      (0x00000008)

#define SYSCTL_MISC_MOFMIS_MASK       (0x00000001)
#define SYSCTL_MISC_MOFMIS_NOOCCUR    (0x00000000)
#define SYSCTL_MISC_MOFMIS_OCCUR      (0x00000001)
#define SYSCTL_MISC_MOFMIS_CLEAR      (0x00000001)
//--------

//--------
#define SYSCTL_MISC_R_PLLMIS_MASK       (0x00000040)
#define SYSCTL_MISC_R_PLLMIS_BIT        (6)
#define SYSCTL_MISC_R_PLLMIS_NOOCCUR    (0x00000000)
#define SYSCTL_MISC_R_PLLMIS_OCCUR      (0x00000040)
#define SYSCTL_MISC_R_PLLMIS_CLEAR      (0x00000040)

#define SYSCTL_MISC_PLLMIS_MASK       (0x00000001)
#define SYSCTL_MISC_PLLMIS_NOOCCUR    (0x00000000)
#define SYSCTL_MISC_PLLMIS_OCCUR      (0x00000001)
#define SYSCTL_MISC_PLLMIS_CLEAR      (0x00000001)
//--------

//--------
#define SYSCTL_MISC_R_USBPLLMIS_MASK       (0x00000080)
#define SYSCTL_MISC_R_USBPLLMIS_BIT        (7)
#define SYSCTL_MISC_R_USBPLLMIS_NOOCCUR    (0x00000000)
#define SYSCTL_MISC_R_USBPLLMIS_OCCUR      (0x00000080)
#define SYSCTL_MISC_R_USBPLLMIS_CLEAR      (0x00000080)

#define SYSCTL_MISC_USBPLLMIS_MASK       (0x00000001)
#define SYSCTL_MISC_USBPLLMIS_NOOCCUR    (0x00000000)
#define SYSCTL_MISC_USBPLLMIS_OCCUR      (0x00000001)
#define SYSCTL_MISC_USBPLLMIS_CLEAr      (0x00000001)
//--------

//--------
#define SYSCTL_MISC_R_MOSCPUPMIS_MASK       (0x00000100)
#define SYSCTL_MISC_R_MOSCPUPMIS_BIT        (8)
#define SYSCTL_MISC_R_MOSCPUPMIS_NOOCCUR    (0x00000000)
#define SYSCTL_MISC_R_MOSCPUPMIS_OCCUR      (0x00000100)
#define SYSCTL_MISC_R_MOSCPUPMIS_CLEAR      (0x00000100)

#define SYSCTL_MISC_MOSCPUPMIS_MASK       (0x00000001)
#define SYSCTL_MISC_MOSCPUPMIS_NOOCCUR    (0x00000000)
#define SYSCTL_MISC_MOSCPUPMIS_OCCUR      (0x00000001)
#define SYSCTL_MISC_MOSCPUPMIS_CLEAR      (0x00000001)
//--------


//--------
#define SYSCTL_MISC_R_VDDAMIS_MASK       (0x00000400)
#define SYSCTL_MISC_R_VDDAMIS_BIT        (10)
#define SYSCTL_MISC_R_VDDAMIS_NOOCCUR    (0x00000000)
#define SYSCTL_MISC_R_VDDAMIS_OCCUR      (0x00000400)
#define SYSCTL_MISC_R_VDDAMIS_CLEAR      (0x00000400)

#define SYSCTL_MISC_VDDAMIS_MASK       (0x00000001)
#define SYSCTL_MISC_VDDAMIS_NOOCCUR    (0x00000000)
#define SYSCTL_MISC_VDDAMIS_OCCUR      (0x00000001)
#define SYSCTL_MISC_VDDAMIS_CLEAR      (0x00000001)
//--------

//--------
#define SYSCTL_MISC_R_BOR0MIS_MASK       (0x00000800)
#define SYSCTL_MISC_R_BOR0MIS_BIT        (11)
#define SYSCTL_MISC_R_BOR0MIS_NOOCCUR    (0x00000000)
#define SYSCTL_MISC_R_BOR0MIS_OCCUR      (0x00000800)
#define SYSCTL_MISC_R_BOR0MIS_CLEAR      (0x00000800)

#define SYSCTL_MISC_BOR0MIS_MASK       (0x00000001)
#define SYSCTL_MISC_BOR0MIS_NOOCCUR    (0x00000000)
#define SYSCTL_MISC_BOR0MIS_OCCUR      (0x00000001)
#define SYSCTL_MISC_BOR0MIS_CLEAR      (0x00000001)
//--------

#define SYSCTL_MISC_BOR1MIS_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(1*4))))
#define SYSCTL_MISC_MOFMIS_BB       (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(3*4))))
#define SYSCTL_MISC_PLLLMIS_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(6*4))))
#define SYSCTL_MISC_USBPLLLMIS_BB   (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(7*4))))
#define SYSCTL_MISC_MOSCPUPMIS_BB   (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(8*4))))
#define SYSCTL_MISC_VDDAMIS_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(10*4))))
#define SYSCTL_MISC_BOR0MIS_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(11*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 19 RESC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_RESC_OFFSET     (0x005C)
#define SYSCTL_RESC            (((RESC_TypeDef*)(SYSCTL_BASE+SYSCTL_RESC_OFFSET )))
#define SYSCTL_RESC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RESC_OFFSET)))



//--------
#define SYSCTL_RESC_R_EXT_MASK       (0x00000001)
#define SYSCTL_RESC_R_EXT_BIT        (0)
#define SYSCTL_RESC_R_EXT_NOOCCUR    (0x00000000)
#define SYSCTL_RESC_R_EXT_OCCUR      (0x00000001)
#define SYSCTL_RESC_R_EXT_CLEAR      (0x00000000)

#define SYSCTL_RESC_EXT_MASK       (0x00000001)
#define SYSCTL_RESC_EXT_NOOCCUR    (0x00000000)
#define SYSCTL_RESC_EXT_OCCUR      (0x00000001)
#define SYSCTL_RESC_EXT_CLEAR      (0x00000000)
//--------

//--------
#define SYSCTL_RESC_R_POR_MASK       (0x00000002)
#define SYSCTL_RESC_R_POR_BIT        (1)
#define SYSCTL_RESC_R_POR_NOOCCUR    (0x00000000)
#define SYSCTL_RESC_R_POR_OCCUR      (0x00000002)
#define SYSCTL_RESC_R_POR_CLEAR      (0x00000000)

#define SYSCTL_RESC_POR_MASK       (0x00000001)
#define SYSCTL_RESC_POR_NOOCCUR    (0x00000000)
#define SYSCTL_RESC_POR_OCCUR      (0x00000001)
#define SYSCTL_RESC_POR_CLEAR      (0x00000000)
//--------

//--------
#define SYSCTL_RESC_R_BOR_MASK       (0x00000004)
#define SYSCTL_RESC_R_BOR_BIT        (2)
#define SYSCTL_RESC_R_BOR_NOOCCUR    (0x00000000)
#define SYSCTL_RESC_R_BOR_OCCUR      (0x00000004)
#define SYSCTL_RESC_R_BOR_CLEAR      (0x00000000)

#define SYSCTL_RESC_BOR_MASK       (0x00000001)
#define SYSCTL_RESC_BOR_NOOCCUR    (0x00000000)
#define SYSCTL_RESC_BOR_OCCUR      (0x00000001)
#define SYSCTL_RESC_BOR_CLEAR      (0x00000000)
//--------

//--------
#define SYSCTL_RESC_R_WDT0_MASK       (0x00000008)
#define SYSCTL_RESC_R_WDT0_BIT        (3)
#define SYSCTL_RESC_R_WDT0_NOOCCUR    (0x00000000)
#define SYSCTL_RESC_R_WDT0_OCCUR      (0x00000008)
#define SYSCTL_RESC_R_WDT0_CLEAR      (0x00000000)

#define SYSCTL_RESC_WDT0_MASK       (0x00000001)
#define SYSCTL_RESC_WDT0_NOOCCUR    (0x00000000)
#define SYSCTL_RESC_WDT0_OCCUR      (0x00000001)
#define SYSCTL_RESC_WDT0_CLEAR      (0x00000000)
//--------

//--------
#define SYSCTL_RESC_R_SW_MASK       (0x00000010)
#define SYSCTL_RESC_R_SW_BIT        (4)
#define SYSCTL_RESC_R_SW_NOOCCUR    (0x00000000)
#define SYSCTL_RESC_R_SW_OCCUR      (0x00000010)
#define SYSCTL_RESC_R_SW_CLEAR      (0x00000000)

#define SYSCTL_RESC_SW_MASK       (0x00000001)
#define SYSCTL_RESC_SW_NOOCCUR    (0x00000000)
#define SYSCTL_RESC_SW_OCCUR      (0x00000001)
#define SYSCTL_RESC_SW_CLEAR      (0x00000000)
//--------

//--------
#define SYSCTL_RESC_R_WDT1_MASK       (0x00000020)
#define SYSCTL_RESC_R_WDT1_BIT        (5)
#define SYSCTL_RESC_R_WDT1_NOOCCUR    (0x00000000)
#define SYSCTL_RESC_R_WDT1_OCCUR      (0x00000020)
#define SYSCTL_RESC_R_WDT1_CLEAR      (0x00000000)

#define SYSCTL_RESC_WDT1_MASK       (0x00000001)
#define SYSCTL_RESC_WDT1_NOOCCUR    (0x00000000)
#define SYSCTL_RESC_WDT1_OCCUR      (0x00000001)
#define SYSCTL_RESC_WDT1_CLEAR      (0x00000000)
//--------

//--------
#define SYSCTL_RESC_R_MOSCFAIL_MASK       (0x00010000)
#define SYSCTL_RESC_R_MOSCFAIL_BIT        (16)
#define SYSCTL_RESC_R_MOSCFAIL_NOOCCUR    (0x00000000)
#define SYSCTL_RESC_R_MOSCFAIL_OCCUR      (0x00010000)
#define SYSCTL_RESC_R_MOSCFAIL_CLEAR      (0x00000000)

#define SYSCTL_RESC_MOSCFAIL_MASK       (0x00000001)
#define SYSCTL_RESC_MOSCFAIL_NOOCCUR    (0x00000000)
#define SYSCTL_RESC_MOSCFAIL_OCCUR      (0x00000001)
#define SYSCTL_RESC_MOSCFAIL_CLEAR      (0x00000000)
//--------


#define SYSCTL_RESC_EXT_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(0*4))))
#define SYSCTL_RESC_POR_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(1*4))))
#define SYSCTL_RESC_BOR_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(2*4))))
#define SYSCTL_RESC_WDT0_BB     (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(3*4))))
#define SYSCTL_RESC_SW_BB       (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(4*4))))
#define SYSCTL_RESC_WDT1_BB     (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(5*4))))
#define SYSCTL_RESC_MOSCFAIL_BB (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(16*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 20 RCC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_RCC_OFFSET     (0x0060)
#define SYSCTL_RCC            (((RCC_TypeDef*)(SYSCTL_BASE+SYSCTL_RCC_OFFSET )))
#define SYSCTL_RCC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCC_OFFSET)))

//--------
#define SYSCTL_RCC_R_MOSCDIS_MASK       (0x00000001)
#define SYSCTL_RCC_R_MOSCDIS_BIT        (0)
#define SYSCTL_RCC_R_MOSCDIS_EN        (0x00000000)
#define SYSCTL_RCC_R_MOSCDIS_DIS         (0x00000001)

#define SYSCTL_RCC_MOSCDIS_MASK       (0x00000001)
#define SYSCTL_RCC_MOSCDIS_EN        (0x00000000)
#define SYSCTL_RCC_MOSCDIS_DIS         (0x00000001)
//--------

//--------
#define SYSCTL_RCC_R_OSCSRC_MASK       (0x00000030)
#define SYSCTL_RCC_R_OSCSRC_BIT        (4)
#define SYSCTL_RCC_R_OSCSRC_MOSC       (0x00000000)
#define SYSCTL_RCC_R_OSCSRC_PIOSC      (0x00000010)
#define SYSCTL_RCC_R_OSCSRC_PIOSC_4    (0x00000020)
#define SYSCTL_RCC_R_OSCSRC_LFIOSC     (0x00000030)

#define SYSCTL_RCC_OSCSRC_MASK       (0x00000003)
#define SYSCTL_RCC_OSCSRC_MOSC       (0x00000000)
#define SYSCTL_RCC_OSCSRC_PIOSC      (0x00000001)
#define SYSCTL_RCC_OSCSRC_PIOSC_4    (0x00000002)
#define SYSCTL_RCC_OSCSRC_LFIOSC     (0x00000003)
//--------

//--------
#define SYSCTL_RCC_R_XTAL_MASK       (0x000007C0)
#define SYSCTL_RCC_R_XTAL_BIT        (6)
#define SYSCTL_RCC_R_XTAL_4000KHZ    (0x00000180)//6
#define SYSCTL_RCC_R_XTAL_4096KHZ    (0x000001C0)//7
#define SYSCTL_RCC_R_XTAL_4951KHz    (0x00000200)//8
#define SYSCTL_RCC_R_XTAL_5000KHz    (0x00000240)//9
#define SYSCTL_RCC_R_XTAL_5120KHz    (0x00000280)//A
#define SYSCTL_RCC_R_XTAL_6000KHZ    (0x000002C0)//B
#define SYSCTL_RCC_R_XTAL_6144KHZ    (0x00000300)//C
#define SYSCTL_RCC_R_XTAL_7372KHz    (0x00000340)//D
#define SYSCTL_RCC_R_XTAL_8000KHz    (0x00000380)//E
#define SYSCTL_RCC_R_XTAL_8192KHZ    (0x000003C0)//F
#define SYSCTL_RCC_R_XTAL_10000KHZ   (0x00000400)//10
#define SYSCTL_RCC_R_XTAL_12000KHz   (0x00000440)//11
#define SYSCTL_RCC_R_XTAL_12288KHz   (0x00000480)//12
#define SYSCTL_RCC_R_XTAL_13560KHZ   (0x000004C0)//13
#define SYSCTL_RCC_R_XTAL_14318KHZ   (0x00000500)//14
#define SYSCTL_RCC_R_XTAL_16000KHz   (0x00000540)//15
#define SYSCTL_RCC_R_XTAL_16384KHz   (0x00000580)//16
#define SYSCTL_RCC_R_XTAL_18000KHZ   (0x000005C0)//17
#define SYSCTL_RCC_R_XTAL_20000KHz   (0x00000600)//18
#define SYSCTL_RCC_R_XTAL_24000KHz   (0x00000640)//19
#define SYSCTL_RCC_R_XTAL_25000KHZ   (0x00000680)//1A

#define SYSCTL_RCC_XTAL_MASK       (0x0000001F)
#define SYSCTL_RCC_XTAL_4000KHZ    (0x00000006)
#define SYSCTL_RCC_XTAL_4096KHZ    (0x00000007)
#define SYSCTL_RCC_XTAL_4951KHz    (0x00000008)
#define SYSCTL_RCC_XTAL_5000KHz    (0x00000009)
#define SYSCTL_RCC_XTAL_5120KHz    (0x0000000A)
#define SYSCTL_RCC_XTAL_6000KHZ    (0x0000000B)
#define SYSCTL_RCC_XTAL_6144KHZ    (0x0000000C)
#define SYSCTL_RCC_XTAL_7372KHz    (0x0000000D)
#define SYSCTL_RCC_XTAL_8000KHz    (0x0000000E)
#define SYSCTL_RCC_XTAL_8192KHZ    (0x0000000F)
#define SYSCTL_RCC_XTAL_10000KHZ    (0x00000010)
#define SYSCTL_RCC_XTAL_12000KHz    (0x00000011)
#define SYSCTL_RCC_XTAL_12288KHz    (0x00000012)
#define SYSCTL_RCC_XTAL_13560KHZ    (0x00000013)
#define SYSCTL_RCC_XTAL_14318KHZ    (0x00000014)
#define SYSCTL_RCC_XTAL_16000KHz    (0x00000015)
#define SYSCTL_RCC_XTAL_16384KHz    (0x00000016)
#define SYSCTL_RCC_XTAL_18000KHZ    (0x00000017)
#define SYSCTL_RCC_XTAL_20000KHz    (0x00000018)
#define SYSCTL_RCC_XTAL_24000KHz    (0x00000019)
#define SYSCTL_RCC_XTAL_25000KHZ    (0x0000001A)
//--------

//--------
#define SYSCTL_RCC_R_BYPASS_MASK       (0x00000800)
#define SYSCTL_RCC_R_BYPASS_BIT        (11)
#define SYSCTL_RCC_R_BYPASS_PLL        (0x00000000)
#define SYSCTL_RCC_R_BYPASS_OSC        (0x00000800)

#define SYSCTL_RCC_BYPASS_MASK       (0x00000001)
#define SYSCTL_RCC_BYPASS_PLL        (0x00000000)
#define SYSCTL_RCC_BYPASS_OSC        (0x00000001)
//--------

//--------
#define SYSCTL_RCC_R_PWRDN_MASK       (0x00002000)
#define SYSCTL_RCC_R_PWRDN_BIT        (13)
#define SYSCTL_RCC_R_PWRDN_ON         (0x00000000)
#define SYSCTL_RCC_R_PWRDN_OFF        (0x00002000)

#define SYSCTL_RCC_PWRDN_MASK       (0x00000001)
#define SYSCTL_RCC_PWRDN_ON         (0x00000000)
#define SYSCTL_RCC_PWRDN_OFF        (0x00000001)
//--------

//--------
#define SYSCTL_RCC_R_PWMDIV_MASK       (0x000E0000)
#define SYSCTL_RCC_R_PWMDIV_BIT        (17)
#define SYSCTL_RCC_R_PWMDIV_2          (0x00000000)
#define SYSCTL_RCC_R_PWMDIV_4          (0x00020000)
#define SYSCTL_RCC_R_PWMDIV_8          (0x00040000)
#define SYSCTL_RCC_R_PWMDIV_16         (0x00060000)
#define SYSCTL_RCC_R_PWMDIV_32         (0x00080000)
#define SYSCTL_RCC_R_PWMDIV_64         (0x000E0000)

#define SYSCTL_RCC_PWMDIV_MASK       (0x00000007)
#define SYSCTL_RCC_PWMDIV_2          (0x00000000)
#define SYSCTL_RCC_PWMDIV_4          (0x00000001)
#define SYSCTL_RCC_PWMDIV_8          (0x00000002)
#define SYSCTL_RCC_PWMDIV_16         (0x00000003)
#define SYSCTL_RCC_PWMDIV_32         (0x00000004)
#define SYSCTL_RCC_PWMDIV_64         (0x00000007)
//--------

//--------
#define SYSCTL_RCC_R_USEPWMDIV_MASK       (0x00100000)
#define SYSCTL_RCC_R_USEPWMDIV_BIT        (20)
#define SYSCTL_RCC_R_USEPWMDIV_SYSCLK     (0x00000000)
#define SYSCTL_RCC_R_USEPWMDIV_PWMDIV     (0x00100000)

#define SYSCTL_RCC_USEPWMDIV_MASK       (0x00000001)
#define SYSCTL_RCC_USEPWMDIV_SYSCLK     (0x00000000)
#define SYSCTL_RCC_USEPWMDIV_PWMDIV     (0x00000001)
//--------

//--------
#define SYSCTL_RCC_R_USESYSDIV_MASK       (0x00400000)
#define SYSCTL_RCC_R_USESYSDIV_BIT        (22)
#define SYSCTL_RCC_R_USESYSDIV_UNDIV      (0x00000000)
#define SYSCTL_RCC_R_USESYSDIV_DIV        (0x00400000)

#define SYSCTL_RCC_USESYSDIV_MASK       (0x00000001)
#define SYSCTL_RCC_USESYSDIV_UNDIV      (0x00000000)
#define SYSCTL_RCC_USESYSDIV_DIV        (0x00000001)
//--------

//--------
#define SYSCTL_RCC_R_SYSDIV_MASK       (0x07800000)
#define SYSCTL_RCC_R_SYSDIV_BIT        (23)
#define SYSCTL_RCC_R_SYSDIV_1          (0x00000000)
#define SYSCTL_RCC_R_SYSDIV_2          (0x00800000)
#define SYSCTL_RCC_R_SYSDIV_3          (0x01000000)
#define SYSCTL_RCC_R_SYSDIV_4          (0x01800000)
#define SYSCTL_RCC_R_SYSDIV_5          (0x02000000)
#define SYSCTL_RCC_R_SYSDIV_6          (0x02800000)
#define SYSCTL_RCC_R_SYSDIV_7          (0x03000000)
#define SYSCTL_RCC_R_SYSDIV_8          (0x03800000)
#define SYSCTL_RCC_R_SYSDIV_9          (0x04000000)
#define SYSCTL_RCC_R_SYSDIV_10         (0x04800000)
#define SYSCTL_RCC_R_SYSDIV_11         (0x05000000)
#define SYSCTL_RCC_R_SYSDIV_12         (0x05800000)
#define SYSCTL_RCC_R_SYSDIV_13         (0x06000000)
#define SYSCTL_RCC_R_SYSDIV_14         (0x06800000)
#define SYSCTL_RCC_R_SYSDIV_15         (0x07000000)
#define SYSCTL_RCC_R_SYSDIV_16         (0x07800000)

#define SYSCTL_RCC_SYSDIV_MASK       (0x0000000F)
#define SYSCTL_RCC_SYSDIV_1          (0x00000000)
#define SYSCTL_RCC_SYSDIV_2          (0x00000001)
#define SYSCTL_RCC_SYSDIV_3          (0x00000002)
#define SYSCTL_RCC_SYSDIV_4          (0x00000003)
#define SYSCTL_RCC_SYSDIV_5          (0x00000004)
#define SYSCTL_RCC_SYSDIV_6          (0x00000005)
#define SYSCTL_RCC_SYSDIV_7          (0x00000006)
#define SYSCTL_RCC_SYSDIV_8          (0x00000007)
#define SYSCTL_RCC_SYSDIV_9          (0x00000008)
#define SYSCTL_RCC_SYSDIV_10         (0x00000009)
#define SYSCTL_RCC_SYSDIV_11         (0x0000000A)
#define SYSCTL_RCC_SYSDIV_12         (0x0000000B)
#define SYSCTL_RCC_SYSDIV_13         (0x0000000C)
#define SYSCTL_RCC_SYSDIV_14         (0x0000000D)
#define SYSCTL_RCC_SYSDIV_15         (0x0000000E)
#define SYSCTL_RCC_SYSDIV_16         (0x0000000F)
//--------

//--------
#define SYSCTL_RCC_R_ACG_MASK       (0x00400000)
#define SYSCTL_RCC_R_ACG_BIT        (27)
#define SYSCTL_RCC_R_ACG_DIS        (0x00000000)
#define SYSCTL_RCC_R_ACG_EN         (0x00400000)

#define SYSCTL_RCC_ACG_MASK       (0x00000001)
#define SYSCTL_RCC_ACG_DIS        (0x00000000)
#define SYSCTL_RCC_ACG_EN         (0x00000001)
//--------

#define SYSCTL_RCC_MOSCDIS_BB   (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32)+(0*4))))
#define SYSCTL_RCC_BYPASS_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32)+(11*4))))
#define SYSCTL_RCC_PWRDN_BB     (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32)+(13*4))))
#define SYSCTL_RCC_USEPWMDIV_BB (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32)+(20*4))))
#define SYSCTL_RCC_USESYSDIV_BB (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32)+(22*4))))
#define SYSCTL_RCC_ACG_BB       (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32)+(27*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 21 GPIOHBCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_GPIOHBCTL_OFFSET     (0x006C)
#define SYSCTL_GPIOHBCTL            (((GPIOHBCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_GPIOHBCTL_OFFSET )))
#define SYSCTL_GPIOHBCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_GPIOHBCTL_OFFSET)))

//--------
#define SYSCTL_GPIOHBCTL_R_PORTA_MASK       (0x00000001)
#define SYSCTL_GPIOHBCTL_R_PORTA_BIT        (0)
#define SYSCTL_GPIOHBCTL_R_PORTA_APB        (0x00000000)
#define SYSCTL_GPIOHBCTL_R_PORTA_AHB        (0x00000001)

#define SYSCTL_GPIOHBCTL_PORTA_MASK       (0x00000001)
#define SYSCTL_GPIOHBCTL_PORTA_APB        (0x00000000)
#define SYSCTL_GPIOHBCTL_PORTA_AHB        (0x00000001)
//--------

//--------
#define SYSCTL_GPIOHBCTL_R_PORTB_MASK       (0x00000002)
#define SYSCTL_GPIOHBCTL_R_PORTB_BIT        (1)
#define SYSCTL_GPIOHBCTL_R_PORTB_APB        (0x00000000)
#define SYSCTL_GPIOHBCTL_R_PORTB_AHB        (0x00000002)

#define SYSCTL_GPIOHBCTL_PORTB_MASK       (0x00000001)
#define SYSCTL_GPIOHBCTL_PORTB_APB        (0x00000000)
#define SYSCTL_GPIOHBCTL_PORTB_AHB        (0x00000001)
//--------

//--------
#define SYSCTL_GPIOHBCTL_R_PORTC_MASK       (0x00000004)
#define SYSCTL_GPIOHBCTL_R_PORTC_BIT        (2)
#define SYSCTL_GPIOHBCTL_R_PORTC_APB        (0x00000000)
#define SYSCTL_GPIOHBCTL_R_PORTC_AHB        (0x00000004)

#define SYSCTL_GPIOHBCTL_PORTC_MASK       (0x00000001)
#define SYSCTL_GPIOHBCTL_PORTC_APB        (0x00000000)
#define SYSCTL_GPIOHBCTL_PORTC_AHB        (0x00000001)
//--------

//--------
#define SYSCTL_GPIOHBCTL_R_PORTD_MASK       (0x00000008)
#define SYSCTL_GPIOHBCTL_R_PORTD_BIT        (3)
#define SYSCTL_GPIOHBCTL_R_PORTD_APB        (0x00000000)
#define SYSCTL_GPIOHBCTL_R_PORTD_AHB        (0x00000008)

#define SYSCTL_GPIOHBCTL_PORTD_MASK       (0x00000001)
#define SYSCTL_GPIOHBCTL_PORTD_APB        (0x00000000)
#define SYSCTL_GPIOHBCTL_PORTD_AHB        (0x00000001)
//--------

//--------
#define SYSCTL_GPIOHBCTL_R_PORTE_MASK       (0x00000010)
#define SYSCTL_GPIOHBCTL_R_PORTE_BIT        (4)
#define SYSCTL_GPIOHBCTL_R_PORTE_APB        (0x00000000)
#define SYSCTL_GPIOHBCTL_R_PORTE_AHB        (0x00000010)

#define SYSCTL_GPIOHBCTL_PORTE_MASK       (0x00000001)
#define SYSCTL_GPIOHBCTL_PORTE_APB        (0x00000000)
#define SYSCTL_GPIOHBCTL_PORTE_AHB        (0x00000001)
//--------

//--------
#define SYSCTL_GPIOHBCTL_R_PORTF_MASK       (0x00000020)
#define SYSCTL_GPIOHBCTL_R_PORTF_BIT        (5)
#define SYSCTL_GPIOHBCTL_R_PORTF_APB        (0x00000000)
#define SYSCTL_GPIOHBCTL_R_PORTF_AHB        (0x00000020)

#define SYSCTL_GPIOHBCTL_PORTF_MASK       (0x00000001)
#define SYSCTL_GPIOHBCTL_PORTF_APB        (0x00000000)
#define SYSCTL_GPIOHBCTL_PORTF_AHB        (0x00000001)
//--------


#define SYSCTL_GPIOHBCTL_PORTA_BB (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32)+(0*4))))
#define SYSCTL_GPIOHBCTL_PORTB_BB (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32)+(1*4))))
#define SYSCTL_GPIOHBCTL_PORTC_BB (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32)+(2*4))))
#define SYSCTL_GPIOHBCTL_PORTD_BB (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32)+(3*4))))
#define SYSCTL_GPIOHBCTL_PORTE_BB (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32)+(4*4))))
#define SYSCTL_GPIOHBCTL_PORTF_BB (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32)+(5*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 22 RCC2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define SYSCTL_RCC2_OFFSET     (0x0070)
#define SYSCTL_RCC2            (((RCC2_TypeDef*)(SYSCTL_BASE+SYSCTL_RCC2_OFFSET )))
#define SYSCTL_RCC2_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCC2_OFFSET)))


//--------
#define SYSCTL_RCC2_R_OSCSRC2_MASK       (0x00000070)
#define SYSCTL_RCC2_R_OSCSRC2_BIT        (4)
#define SYSCTL_RCC2_R_OSCSRC2_MOSC       (0x00000000)
#define SYSCTL_RCC2_R_OSCSRC2_PIOSC      (0x00000010)
#define SYSCTL_RCC2_R_OSCSRC2_PIOSC_4    (0x00000020)
#define SYSCTL_RCC2_R_OSCSRC2_LFIOSC     (0x00000030)
#define SYSCTL_RCC2_R_OSCSRC2_LFIOSC     (0x00000030)
#define SYSCTL_RCC2_R_OSCSRC2_32768KHz   (0x00000070)

#define SYSCTL_RCC2_OSCSRC2_MASK       (0x00000007)
#define SYSCTL_RCC2_OSCSRC2_MOSC       (0x00000000)
#define SYSCTL_RCC2_OSCSRC2_PIOSC      (0x00000001)
#define SYSCTL_RCC2_OSCSRC2_PIOSC_4    (0x00000002)
#define SYSCTL_RCC2_OSCSRC2_LFIOSC     (0x00000003)
#define SYSCTL_RCC2_OSCSRC2_32768KHz   (0x00000007)
//--------

//--------
#define SYSCTL_RCC2_R_BYPASS2_MASK       (0x00000800)
#define SYSCTL_RCC2_R_BYPASS2_BIT        (11)
#define SYSCTL_RCC2_R_BYPASS2_PLL        (0x00000000)
#define SYSCTL_RCC2_R_BYPASS2_OSC        (0x00000800)

#define SYSCTL_RCC2_BYPASS2_MASK       (0x00000001)
#define SYSCTL_RCC2_BYPASS2_PLL        (0x00000000)
#define SYSCTL_RCC2_BYPASS2_OSC        (0x00000001)
//--------

//--------
#define SYSCTL_RCC2_R_PWRDN2_MASK       (0x00002000)
#define SYSCTL_RCC2_R_PWRDN2_BIT        (13)
#define SYSCTL_RCC2_R_PWRDN2_ON         (0x00000000)
#define SYSCTL_RCC2_R_PWRDN2_OFF        (0x00002000)

#define SYSCTL_RCC2_PWRDN2_MASK       (0x00000001)
#define SYSCTL_RCC2_PWRDN2_ON         (0x00000000)
#define SYSCTL_RCC2_PWRDN2_OFF        (0x00000001)
//--------

//--------
#define SYSCTL_RCC2_R_USBPWRDN_MASK       (0x00004000)
#define SYSCTL_RCC2_R_USBPWRDN_BIT        (14)
#define SYSCTL_RCC2_R_USBPWRDN_ON         (0x00000000)
#define SYSCTL_RCC2_R_USBPWRDN_OFF        (0x00004000)

#define SYSCTL_RCC2_USBPWRDN_MASK       (0x00000001)
#define SYSCTL_RCC2_USBPWRDN_ON         (0x00000000)
#define SYSCTL_RCC2_USBPWRDN_OFF        (0x00000001)
//--------

//--------
#define SYSCTL_RCC2_R_SYSDIV2LSB_MASK       (0x00400000)
#define SYSCTL_RCC2_R_SYSDIV2LSB_BIT        (22)
#define SYSCTL_RCC2_R_SYSDIV2LSB_DIS        (0x00000000)
#define SYSCTL_RCC2_R_SYSDIV2LSB_EN         (0x00400000)

#define SYSCTL_RCC2_SYSDIV2LSB_MASK       (0x00000001)
#define SYSCTL_RCC2_SYSDIV2LSB_DIS        (0x00000000)
#define SYSCTL_RCC2_SYSDIV2LSB_EN         (0x00000001)
//--------

//--------
#define SYSCTL_RCC2_R_SYSDIV2_MASK       (0x1F800000)
#define SYSCTL_RCC2_R_SYSDIV2_BIT        (23)

#define SYSCTL_RCC2_SYSDIV2_MASK         (0x000001F8)
//--------

//--------
#define SYSCTL_RCC2_R_DIV400_MASK       (0x40000000)
#define SYSCTL_RCC2_R_DIV400_BIT        (30)
#define SYSCTL_RCC2_R_DIV400_DIS        (0x00000000)
#define SYSCTL_RCC2_R_DIV400_EN         (0x40000000)

#define SYSCTL_RCC2_DIV400_MASK       (0x00000001)
#define SYSCTL_RCC2_DIV400_DIS        (0x00000000)
#define SYSCTL_RCC2_DIV400_EN         (0x00000001)
//--------


//--------
#define SYSCTL_RCC2_R_USERCC2_MASK       (0x80000000)
#define SYSCTL_RCC2_R_USERCC2_BIT        (31)
#define SYSCTL_RCC2_R_USERCC2_RCC        (0x00000000)
#define SYSCTL_RCC2_R_USERCC2_RCC2       (0x80000000)

#define SYSCTL_RCC2_USERCC2_MASK       (0x00000001)
#define SYSCTL_RCC2_USERCC2_RCC        (0x00000000)
#define SYSCTL_RCC2_USERCC2_RCC2       (0x00000001)
//--------


#define SYSCTL_RCC2_BYPASS2_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32)+(11*4))))
#define SYSCTL_RCC2_PWRDN2_BB       (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32)+(13*4))))
#define SYSCTL_RCC2_USBPWRDN_BB     (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32)+(14*4))))
#define SYSCTL_RCC2_SYSDIV2LSB_BB   (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32)+(22*4))))
#define SYSCTL_RCC2_DIV400_BB       (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32)+(30*4))))
#define SYSCTL_RCC2_USERCC2_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32)+(31*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 23 MOSCCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_MOSCCTL_OFFSET     (0x007C)
#define SYSCTL_MOSCCTL            (((MOSCCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_MOSCCTL_OFFSET )))
#define SYSCTL_MOSCCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_MOSCCTL_OFFSET)))


//--------
#define SYSCTL_MOSCCTL_R_CVAL_MASK       (0x00000001)
#define SYSCTL_MOSCCTL_R_CVAL_BIT        (0)
#define SYSCTL_MOSCCTL_R_CVAL_DIS        (0x00000000)
#define SYSCTL_MOSCCTL_R_CVAL_EN         (0x00000001)

#define SYSCTL_MOSCCTL_CVAL_MASK       (0x00000001)
#define SYSCTL_MOSCCTL_CVAL_DIS        (0x00000000)
#define SYSCTL_MOSCCTL_CVAL_EN         (0x00000001)
//--------

//--------
#define SYSCTL_MOSCCTL_R_MOSCIM_MASK       (0x00000002)
#define SYSCTL_MOSCCTL_R_MOSCIM_BIT        (1)
#define SYSCTL_MOSCCTL_R_MOSCIM_RST        (0x00000000)
#define SYSCTL_MOSCCTL_R_MOSCIM_INT        (0x00000002)

#define SYSCTL_MOSCCTL_MOSCIM_MASK       (0x00000001)
#define SYSCTL_MOSCCTL_MOSCIM_RST        (0x00000000)
#define SYSCTL_MOSCCTL_MOSCIM_INT        (0x00000001)
//--------

//--------
#define SYSCTL_MOSCCTL_R_NOXTAL_MASK       (0x00000004)
#define SYSCTL_MOSCCTL_R_NOXTAL_BIT        (2)
#define SYSCTL_MOSCCTL_R_NOXTAL_PRESENT    (0x00000000)
#define SYSCTL_MOSCCTL_R_NOXTAL_NOPRESENT  (0x00000004)

#define SYSCTL_MOSCCTL_NOXTAL_MASK       (0x00000001)
#define SYSCTL_MOSCCTL_NOXTAL_PRESENT    (0x00000000)
#define SYSCTL_MOSCCTL_NOXTAL_NOPRESENT  (0x00000001)
//--------

#define SYSCTL_MOSCCTL_CVAL_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_MOSCCTL_OFFSET)*32)+(0*4))))
#define SYSCTL_MOSCCTL_MOSCIM_BB       (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_MOSCCTL_OFFSET)*32)+(1*4))))
#define SYSCTL_MOSCCTL_NOXTAL_BB     (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_MOSCCTL_OFFSET)*32)+(2*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 24 RCGC0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_RCGC0_OFFSET     (0x0100)
#define SYSCTL_RCGC0            (((RCGC0_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGC0_OFFSET )))
#define SYSCTL_RCGC0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_RCGC0_OFFSET)))

//--------
#define SYSCTL_RCGC0_R_RCGCWDT0_MASK       (0x00000008)
#define SYSCTL_RCGC0_R_RCGCWDT0_BIT        (3)
#define SYSCTL_RCGC0_R_RCGCWDT0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC0_R_RCGCWDT0_CLOCK         (0x00000008)

#define SYSCTL_RCGC0_RCGCWDT0_MASK       (0x00000001)
#define SYSCTL_RCGC0_RCGCWDT0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC0_RCGCWDT0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC0_R_RCGCHIB_MASK       (0x00000040)
#define SYSCTL_RCGC0_R_RCGCHIB_BIT        (6)
#define SYSCTL_RCGC0_R_RCGCHIB_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC0_R_RCGCHIB_CLOCK         (0x00000040)

#define SYSCTL_RCGC0_RCGCHIB_MASK       (0x00000001)
#define SYSCTL_RCGC0_RCGCHIB_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC0_RCGCHIB_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC0_R_RCGCMAXADC0SPD_MASK       (0x00000030)
#define SYSCTL_RCGC0_R_RCGCMAXADC0SPD_BIT        (8)
#define SYSCTL_RCGC0_R_RCGCMAXADC0SPD_125K       (0x00000000)
#define SYSCTL_RCGC0_R_RCGCMAXADC0SPD_250K       (0x00000010)
#define SYSCTL_RCGC0_R_RCGCMAXADC0SPD_500K       (0x00000020)
#define SYSCTL_RCGC0_R_RCGCMAXADC0SPD_1M         (0x00000030)

#define SYSCTL_RCGC0_RCGCMAXADC0SPD_MASK         (0x00000003)
#define SYSCTL_RCGC0_RCGCMAXADC0SPD_125K         (0x00000000)
#define SYSCTL_RCGC0_RCGCMAXADC0SPD_250K         (0x00000001)
#define SYSCTL_RCGC0_RCGCMAXADC0SPD_500K         (0x00000002)
#define SYSCTL_RCGC0_RCGCMAXADC0SPD_1M           (0x00000003)
//--------

//--------
#define SYSCTL_RCGC0_R_RCGCMAXADC1SPD_MASK       (0x000000C0)
#define SYSCTL_RCGC0_R_RCGCMAXADC1SPD_BIT        (10)
#define SYSCTL_RCGC0_R_RCGCMAXADC1SPD_125K       (0x00000000)
#define SYSCTL_RCGC0_R_RCGCMAXADC1SPD_250K       (0x00000040)
#define SYSCTL_RCGC0_R_RCGCMAXADC1SPD_500K       (0x00000080)
#define SYSCTL_RCGC0_R_RCGCMAXADC1SPD_1M         (0x000000C0)

#define SYSCTL_RCGC0_RCGCMAXADC1SPD_MASK         (0x00000003)
#define SYSCTL_RCGC0_RCGCMAXADC1SPD_125K         (0x00000000)
#define SYSCTL_RCGC0_RCGCMAXADC1SPD_250K         (0x00000001)
#define SYSCTL_RCGC0_RCGCMAXADC1SPD_500K         (0x00000002)
#define SYSCTL_RCGC0_RCGCMAXADC1SPD_1M           (0x00000003)
//--------

//--------
#define SYSCTL_RCGC0_R_RCGCADC0_MASK       (0x00010000)
#define SYSCTL_RCGC0_R_RCGCADC0_BIT        (16)
#define SYSCTL_RCGC0_R_RCGCADC0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC0_R_RCGCADC0_CLOCK         (0x00010000)

#define SYSCTL_RCGC0_RCGCADC0_MASK       (0x00000001)
#define SYSCTL_RCGC0_RCGCADC0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC0_RCGCADC0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC0_R_RCGCADC1_MASK       (0x00020000)
#define SYSCTL_RCGC0_R_RCGCADC1_BIT        (17)
#define SYSCTL_RCGC0_R_RCGCADC1_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC0_R_RCGCADC1_CLOCK         (0x00020000)

#define SYSCTL_RCGC0_RCGCADC1_MASK       (0x00000001)
#define SYSCTL_RCGC0_RCGCADC1_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC0_RCGCADC1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC0_R_RCGCPWM0_MASK       (0x00100000)
#define SYSCTL_RCGC0_R_RCGCPWM0_BIT        (20)
#define SYSCTL_RCGC0_R_RCGCPWM0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC0_R_RCGCPWM0_CLOCK         (0x00100000)

#define SYSCTL_RCGC0_RCGCPWM0_MASK       (0x00000001)
#define SYSCTL_RCGC0_RCGCPWM0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC0_RCGCPWM0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC0_R_RCGCCAN0_MASK       (0x01000000)
#define SYSCTL_RCGC0_R_RCGCCAN0_BIT        (24)
#define SYSCTL_RCGC0_R_RCGCCAN0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC0_R_RCGCCAN0_CLOCK         (0x01000000)

#define SYSCTL_RCGC0_RCGCCAN0_MASK       (0x00000001)
#define SYSCTL_RCGC0_RCGCCAN0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC0_RCGCCAN0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC0_R_RCGCCAN1_MASK       (0x02000000)
#define SYSCTL_RCGC0_R_RCGCCAN1_BIT        (25)
#define SYSCTL_RCGC0_R_RCGCCAN1_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC0_R_RCGCCAN1_CLOCK         (0x02000000)

#define SYSCTL_RCGC0_RCGCCAN1_MASK       (0x00000001)
#define SYSCTL_RCGC0_RCGCCAN1_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC0_RCGCCAN1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC0_R_RCGCWDT1_MASK       (0x10000000)
#define SYSCTL_RCGC0_R_RCGCWDT1_BIT        (28)
#define SYSCTL_RCGC0_R_RCGCWDT1_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC0_R_RCGCWDT1_CLOCK         (0x10000000)

#define SYSCTL_RCGC0_RCGCWDT1_MASK       (0x00000001)
#define SYSCTL_RCGC0_RCGCWDT1_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC0_RCGCWDT1_CLOCK         (0x00000001)
//--------

#define SYSCTL_RCGC0_RCGCWDT0_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC0_OFFSET)*32)+(3*4))))
#define SYSCTL_RCGC0_RCGCHIB_BB       (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC0_OFFSET)*32)+(6*4))))
#define SYSCTL_RCGC0_RCGCADC0_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC0_OFFSET)*32)+(16*4))))
#define SYSCTL_RCGC0_RCGCADC1_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC0_OFFSET)*32)+(17*4))))
#define SYSCTL_RCGC0_RCGCPWM0_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC0_OFFSET)*32)+(20*4))))
#define SYSCTL_RCGC0_RCGCCAN0_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC0_OFFSET)*32)+(24*4))))
#define SYSCTL_RCGC0_RCGCCAN1_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC0_OFFSET)*32)+(25*4))))
#define SYSCTL_RCGC0_RCGCWDT1_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC0_OFFSET)*32)+(28*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 25 RCGC1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_RCGC1_OFFSET     (0x0104)
#define SYSCTL_RCGC1            (((RCGC1_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGC1_OFFSET )))
#define SYSCTL_RCGC1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_RCGC1_OFFSET)))


//--------
#define SYSCTL_RCGC1_R_RCGCUART0_MASK       (0x00000001)
#define SYSCTL_RCGC1_R_RCGCUART0_BIT        (0)
#define SYSCTL_RCGC1_R_RCGCUART0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_R_RCGCUART0_CLOCK         (0x00000001)

#define SYSCTL_RCGC1_RCGCUART0_MASK       (0x00000001)
#define SYSCTL_RCGC1_RCGCUART0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_RCGCUART0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC1_R_RCGCUART1_MASK       (0x00000002)
#define SYSCTL_RCGC1_R_RCGCUART1_BIT        (1)
#define SYSCTL_RCGC1_R_RCGCUART1_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_R_RCGCUART1_CLOCK         (0x00000002)

#define SYSCTL_RCGC1_RCGCUART1_MASK       (0x00000001)
#define SYSCTL_RCGC1_RCGCUART1_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_RCGCUART1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC1_R_RCGCUART2_MASK       (0x00000004)
#define SYSCTL_RCGC1_R_RCGCUART2_BIT        (2)
#define SYSCTL_RCGC1_R_RCGCUART2_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_R_RCGCUART2_CLOCK         (0x00000004)

#define SYSCTL_RCGC1_RCGCUART2_MASK       (0x00000001)
#define SYSCTL_RCGC1_RCGCUART2_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_RCGCUART2_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC1_R_RCGCSSI0_MASK       (0x00000010)
#define SYSCTL_RCGC1_R_RCGCSSI0_BIT        (4)
#define SYSCTL_RCGC1_R_RCGCSSI0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_R_RCGCSSI0_CLOCK         (0x00000010)

#define SYSCTL_RCGC1_RCGCSSI0_MASK       (0x00000001)
#define SYSCTL_RCGC1_RCGCSSI0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_RCGCSSI0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC1_R_RCGCSSI1_MASK       (0x00000020)
#define SYSCTL_RCGC1_R_RCGCSSI1_BIT        (5)
#define SYSCTL_RCGC1_R_RCGCSSI1_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_R_RCGCSSI1_CLOCK         (0x00000010)

#define SYSCTL_RCGC1_RCGCSSI1_MASK       (0x00000001)
#define SYSCTL_RCGC1_RCGCSSI1_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_RCGCSSI1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC1_R_RCGCQEI0_MASK       (0x00000100)
#define SYSCTL_RCGC1_R_RCGCQEI0_BIT        (8)
#define SYSCTL_RCGC1_R_RCGCQEI0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_R_RCGCQEI0_CLOCK         (0x00000100)

#define SYSCTL_RCGC1_RCGCQEI0_MASK       (0x00000001)
#define SYSCTL_RCGC1_RCGCQEI0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_RCGCQEI0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC1_R_RCGCQEI1_MASK       (0x00000200)
#define SYSCTL_RCGC1_R_RCGCQEI1_BIT        (9)
#define SYSCTL_RCGC1_R_RCGCQEI1_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_R_RCGCQEI1_CLOCK         (0x00000200)

#define SYSCTL_RCGC1_RCGCQEI1_MASK       (0x00000001)
#define SYSCTL_RCGC1_RCGCQEI1_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_RCGCQEI1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC1_R_RCGCI2C0_MASK       (0x00001000)
#define SYSCTL_RCGC1_R_RCGCI2C0_BIT        (12)
#define SYSCTL_RCGC1_R_RCGCI2C0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_R_RCGCI2C0_CLOCK         (0x00001000)

#define SYSCTL_RCGC1_RCGCI2C0_MASK       (0x00000001)
#define SYSCTL_RCGC1_RCGCI2C0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_RCGCI2C0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC1_R_RCGCI2C1_MASK       (0x00004000)
#define SYSCTL_RCGC1_R_RCGCI2C1_BIT        (14)
#define SYSCTL_RCGC1_R_RCGCI2C1_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_R_RCGCI2C1_CLOCK         (0x00004000)

#define SYSCTL_RCGC1_RCGCI2C1_MASK       (0x00000001)
#define SYSCTL_RCGC1_RCGCI2C1_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_RCGCI2C1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC1_R_RCGCTIMER0_MASK       (0x00010000)
#define SYSCTL_RCGC1_R_RCGCTIMER0_BIT        (16)
#define SYSCTL_RCGC1_R_RCGCTIMER0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_R_RCGCTIMER0_CLOCK         (0x00010000)

#define SYSCTL_RCGC1_RCGCTIMER0_MASK       (0x00000001)
#define SYSCTL_RCGC1_RCGCTIMER0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_RCGCTIMER0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC1_R_RCGCTIMER1_MASK       (0x00020000)
#define SYSCTL_RCGC1_R_RCGCTIMER1_BIT        (17)
#define SYSCTL_RCGC1_R_RCGCTIMER1_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_R_RCGCTIMER1_CLOCK         (0x00020000)

#define SYSCTL_RCGC1_RCGCTIMER1_MASK       (0x00000001)
#define SYSCTL_RCGC1_RCGCTIMER1_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_RCGCTIMER1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC1_R_RCGCTIMER2_MASK       (0x00040000)
#define SYSCTL_RCGC1_R_RCGCTIMER2_BIT        (18)
#define SYSCTL_RCGC1_R_RCGCTIMER2_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_R_RCGCTIMER2_CLOCK         (0x00040000)

#define SYSCTL_RCGC1_RCGCTIMER2_MASK       (0x00000001)
#define SYSCTL_RCGC1_RCGCTIMER2_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_RCGCTIMER2_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC1_R_RCGCTIMER3_MASK       (0x00080000)
#define SYSCTL_RCGC1_R_RCGCTIMER3_BIT        (19)
#define SYSCTL_RCGC1_R_RCGCTIMER3_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_R_RCGCTIMER3_CLOCK         (0x00080000)

#define SYSCTL_RCGC1_RCGCTIMER3_MASK       (0x00000001)
#define SYSCTL_RCGC1_RCGCTIMER3_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_RCGCTIMER3_CLOCK         (0x00000001)
//--------


//--------
#define SYSCTL_RCGC1_R_RCGCCOMP0_MASK       (0x01000000)
#define SYSCTL_RCGC1_R_RCGCCOMP0_BIT        (24)
#define SYSCTL_RCGC1_R_RCGCCOMP0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_R_RCGCCOMP0_CLOCK         (0x01000000)

#define SYSCTL_RCGC1_RCGCCOMP0_MASK       (0x00000001)
#define SYSCTL_RCGC1_RCGCCOMP0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_RCGCCOMP0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC1_R_RCGCCOMP1_MASK       (0x02000000)
#define SYSCTL_RCGC1_R_RCGCCOMP1_BIT        (25)
#define SYSCTL_RCGC1_R_RCGCCOMP1_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_R_RCGCCOMP1_CLOCK         (0x02000000)

#define SYSCTL_RCGC1_RCGCCOMP1_MASK       (0x00000001)
#define SYSCTL_RCGC1_RCGCCOMP1_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC1_RCGCCOMP1_CLOCK         (0x00000001)
//--------


#define SYSCTL_RCGC1_RCGCUART0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGC1_RCGCUART1_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32)+(1*4))))
#define SYSCTL_RCGC1_RCGCUART2_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32)+(2*4))))
#define SYSCTL_RCGC1_RCGCSSI0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32)+(4*4))))
#define SYSCTL_RCGC1_RCGCSSI1_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32)+(5*4))))
#define SYSCTL_RCGC1_RCGCQEI0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32)+(8*4))))
#define SYSCTL_RCGC1_RCGCQEI1_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32)+(9*4))))
#define SYSCTL_RCGC1_RCGCI2C0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32)+(12*4))))
#define SYSCTL_RCGC1_RCGCI2C1_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32)+(14*4))))
#define SYSCTL_RCGC1_RCGCTIMER0_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32)+(16*4))))
#define SYSCTL_RCGC1_RCGCTIMER1_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32)+(17*4))))
#define SYSCTL_RCGC1_RCGCTIMER2_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32)+(18*4))))
#define SYSCTL_RCGC1_RCGCTIMER3_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32)+(19*4))))
#define SYSCTL_RCGC1_RCGCCOMP0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32)+(24*4))))
#define SYSCTL_RCGC1_RCGCCOMP1_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC1_OFFSET)*32)+(25*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 26 RCGC2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_RCGC2_OFFSET     (0x0108)
#define SYSCTL_RCGC2            (((RCGC2_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGC2_OFFSET )))
#define SYSCTL_RCGC2_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_RCGC2_OFFSET)))


//--------
#define SYSCTL_RCGC2_R_RCGCGPIOA_MASK       (0x00000001)
#define SYSCTL_RCGC2_R_RCGCGPIOA_BIT        (0)
#define SYSCTL_RCGC2_R_RCGCGPIOA_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC2_R_RCGCGPIOA_CLOCK         (0x00000001)

#define SYSCTL_RCGC2_RCGCGPIOA_MASK       (0x00000001)
#define SYSCTL_RCGC2_RCGCGPIOA_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC2_RCGCGPIOA_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC2_R_RCGCGPIOB_MASK       (0x00000002)
#define SYSCTL_RCGC2_R_RCGCGPIOB_BIT        (1)
#define SYSCTL_RCGC2_R_RCGCGPIOB_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC2_R_RCGCGPIOB_CLOCK         (0x00000002)

#define SYSCTL_RCGC2_RCGCGPIOB_MASK       (0x00000001)
#define SYSCTL_RCGC2_RCGCGPIOB_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC2_RCGCGPIOB_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC2_R_RCGCGPIOC_MASK       (0x00000004)
#define SYSCTL_RCGC2_R_RCGCGPIOC_BIT        (2)
#define SYSCTL_RCGC2_R_RCGCGPIOC_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC2_R_RCGCGPIOC_CLOCK         (0x00000004)

#define SYSCTL_RCGC2_RCGCGPIOC_MASK       (0x00000001)
#define SYSCTL_RCGC2_RCGCGPIOC_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC2_RCGCGPIOC_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC2_R_RCGCGPIOD_MASK       (0x00000008)
#define SYSCTL_RCGC2_R_RCGCGPIOD_BIT        (3)
#define SYSCTL_RCGC2_R_RCGCGPIOD_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC2_R_RCGCGPIOD_CLOCK         (0x00000008)

#define SYSCTL_RCGC2_RCGCGPIOD_MASK       (0x00000001)
#define SYSCTL_RCGC2_RCGCGPIOD_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC2_RCGCGPIOD_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC2_R_RCGCGPIOE_MASK       (0x00000010)
#define SYSCTL_RCGC2_R_RCGCGPIOE_BIT        (4)
#define SYSCTL_RCGC2_R_RCGCGPIOE_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC2_R_RCGCGPIOE_CLOCK         (0x00000010)

#define SYSCTL_RCGC2_RCGCGPIOE_MASK       (0x00000001)
#define SYSCTL_RCGC2_RCGCGPIOE_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC2_RCGCGPIOE_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC2_R_RCGCGPIOF_MASK       (0x00000020)
#define SYSCTL_RCGC2_R_RCGCGPIOF_BIT        (5)
#define SYSCTL_RCGC2_R_RCGCGPIOF_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC2_R_RCGCGPIOF_CLOCK         (0x00000020)

#define SYSCTL_RCGC2_RCGCGPIOF_MASK       (0x00000001)
#define SYSCTL_RCGC2_RCGCGPIOF_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC2_RCGCGPIOF_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC2_R_RCGCUDMA_MASK       (0x00002000)
#define SYSCTL_RCGC2_R_RCGCUDMA_BIT        (13)
#define SYSCTL_RCGC2_R_RCGCUDMA_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC2_R_RCGCUDMA_CLOCK         (0x00002000)

#define SYSCTL_RCGC2_RCGCUDMA_MASK       (0x00000001)
#define SYSCTL_RCGC2_RCGCUDMA_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC2_RCGCUDMA_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_RCGC2_R_RCGCUSB0_MASK       (0x00010000)
#define SYSCTL_RCGC2_R_RCGCUSB0_BIT        (16)
#define SYSCTL_RCGC2_R_RCGCUSB0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC2_R_RCGCUSB0_CLOCK         (0x00010000)

#define SYSCTL_RCGC2_RCGCUSB0_MASK       (0x00000001)
#define SYSCTL_RCGC2_RCGCUSB0_UNCLOCK        (0x00000000)
#define SYSCTL_RCGC2_RCGCUSB0_CLOCK         (0x00000001)
//--------

#define SYSCTL_RCGC2_RCGCGPIOA_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC2_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGC2_RCGCGPIOB_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC2_OFFSET)*32)+(1*4))))
#define SYSCTL_RCGC2_RCGCGPIOC_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC2_OFFSET)*32)+(2*4))))
#define SYSCTL_RCGC2_RCGCGPIOD_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC2_OFFSET)*32)+(3*4))))
#define SYSCTL_RCGC2_RCGCGPIOE_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC2_OFFSET)*32)+(4*4))))
#define SYSCTL_RCGC2_RCGCGPIOF_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC2_OFFSET)*32)+(5*4))))
#define SYSCTL_RCGC2_RCGCUDMA_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC2_OFFSET)*32)+(13*4))))
#define SYSCTL_RCGC2_RCGCUSB0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGC2_OFFSET)*32)+(16*4))))

//Todo

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 27 SCGC0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_SCGC0_OFFSET     (0x0110)
#define SYSCTL_SCGC0            (((SCGC0_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGC0_OFFSET )))
#define SYSCTL_SCGC0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SCGC0_OFFSET)))

//--------
#define SYSCTL_SCGC0_R_SCGCWDT0_MASK       (0x00000008)
#define SYSCTL_SCGC0_R_SCGCWDT0_BIT        (3)
#define SYSCTL_SCGC0_R_SCGCWDT0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC0_R_SCGCWDT0_CLOCK         (0x00000008)

#define SYSCTL_SCGC0_SCGCWDT0_MASK       (0x00000001)
#define SYSCTL_SCGC0_SCGCWDT0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC0_SCGCWDT0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC0_R_SCGCHIB_MASK       (0x00000040)
#define SYSCTL_SCGC0_R_SCGCHIB_BIT        (6)
#define SYSCTL_SCGC0_R_SCGCHIB_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC0_R_SCGCHIB_CLOCK         (0x00000040)

#define SYSCTL_SCGC0_SCGCHIB_MASK       (0x00000001)
#define SYSCTL_SCGC0_SCGCHIB_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC0_SCGCHIB_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC0_R_SCGCMAXADC0SPD_MASK       (0x00000030)
#define SYSCTL_SCGC0_R_SCGCMAXADC0SPD_BIT        (8)
#define SYSCTL_SCGC0_R_SCGCMAXADC0SPD_125K       (0x00000000)
#define SYSCTL_SCGC0_R_SCGCMAXADC0SPD_250K       (0x00000010)
#define SYSCTL_SCGC0_R_SCGCMAXADC0SPD_500K       (0x00000020)
#define SYSCTL_SCGC0_R_SCGCMAXADC0SPD_1M         (0x00000030)

#define SYSCTL_SCGC0_SCGCMAXADC0SPD_MASK         (0x00000003)
#define SYSCTL_SCGC0_SCGCMAXADC0SPD_125K         (0x00000000)
#define SYSCTL_SCGC0_SCGCMAXADC0SPD_250K         (0x00000001)
#define SYSCTL_SCGC0_SCGCMAXADC0SPD_500K         (0x00000002)
#define SYSCTL_SCGC0_SCGCMAXADC0SPD_1M           (0x00000003)
//--------

//--------
#define SYSCTL_SCGC0_R_SCGCMAXADC1SPD_MASK       (0x000000C0)
#define SYSCTL_SCGC0_R_SCGCMAXADC1SPD_BIT        (10)
#define SYSCTL_SCGC0_R_SCGCMAXADC1SPD_125K       (0x00000000)
#define SYSCTL_SCGC0_R_SCGCMAXADC1SPD_250K       (0x00000040)
#define SYSCTL_SCGC0_R_SCGCMAXADC1SPD_500K       (0x00000080)
#define SYSCTL_SCGC0_R_SCGCMAXADC1SPD_1M         (0x000000C0)

#define SYSCTL_SCGC0_SCGCMAXADC1SPD_MASK         (0x00000003)
#define SYSCTL_SCGC0_SCGCMAXADC1SPD_125K         (0x00000000)
#define SYSCTL_SCGC0_SCGCMAXADC1SPD_250K         (0x00000001)
#define SYSCTL_SCGC0_SCGCMAXADC1SPD_500K         (0x00000002)
#define SYSCTL_SCGC0_SCGCMAXADC1SPD_1M           (0x00000003)
//--------

//--------
#define SYSCTL_SCGC0_R_SCGCADC0_MASK       (0x00010000)
#define SYSCTL_SCGC0_R_SCGCADC0_BIT        (16)
#define SYSCTL_SCGC0_R_SCGCADC0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC0_R_SCGCADC0_CLOCK         (0x00010000)

#define SYSCTL_SCGC0_SCGCADC0_MASK       (0x00000001)
#define SYSCTL_SCGC0_SCGCADC0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC0_SCGCADC0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC0_R_SCGCADC1_MASK       (0x00020000)
#define SYSCTL_SCGC0_R_SCGCADC1_BIT        (17)
#define SYSCTL_SCGC0_R_SCGCADC1_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC0_R_SCGCADC1_CLOCK         (0x00020000)

#define SYSCTL_SCGC0_SCGCADC1_MASK       (0x00000001)
#define SYSCTL_SCGC0_SCGCADC1_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC0_SCGCADC1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC0_R_SCGCPWM0_MASK       (0x00100000)
#define SYSCTL_SCGC0_R_SCGCPWM0_BIT        (20)
#define SYSCTL_SCGC0_R_SCGCPWM0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC0_R_SCGCPWM0_CLOCK         (0x00100000)

#define SYSCTL_SCGC0_SCGCPWM0_MASK       (0x00000001)
#define SYSCTL_SCGC0_SCGCPWM0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC0_SCGCPWM0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC0_R_SCGCCAN0_MASK       (0x01000000)
#define SYSCTL_SCGC0_R_SCGCCAN0_BIT        (24)
#define SYSCTL_SCGC0_R_SCGCCAN0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC0_R_SCGCCAN0_CLOCK         (0x01000000)

#define SYSCTL_SCGC0_SCGCCAN0_MASK       (0x00000001)
#define SYSCTL_SCGC0_SCGCCAN0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC0_SCGCCAN0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC0_R_SCGCCAN1_MASK       (0x02000000)
#define SYSCTL_SCGC0_R_SCGCCAN1_BIT        (25)
#define SYSCTL_SCGC0_R_SCGCCAN1_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC0_R_SCGCCAN1_CLOCK         (0x02000000)

#define SYSCTL_SCGC0_SCGCCAN1_MASK       (0x00000001)
#define SYSCTL_SCGC0_SCGCCAN1_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC0_SCGCCAN1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC0_R_SCGCWDT1_MASK       (0x10000000)
#define SYSCTL_SCGC0_R_SCGCWDT1_BIT        (28)
#define SYSCTL_SCGC0_R_SCGCWDT1_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC0_R_SCGCWDT1_CLOCK         (0x10000000)

#define SYSCTL_SCGC0_SCGCWDT1_MASK       (0x00000001)
#define SYSCTL_SCGC0_SCGCWDT1_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC0_SCGCWDT1_CLOCK         (0x00000001)
//--------

#define SYSCTL_SCGC0_SCGCWDT0_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC0_OFFSET)*32)+(3*4))))
#define SYSCTL_SCGC0_SCGCHIB_BB       (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC0_OFFSET)*32)+(6*4))))
#define SYSCTL_SCGC0_SCGCADC0_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC0_OFFSET)*32)+(16*4))))
#define SYSCTL_SCGC0_SCGCADC1_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC0_OFFSET)*32)+(17*4))))
#define SYSCTL_SCGC0_SCGCPWM0_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC0_OFFSET)*32)+(20*4))))
#define SYSCTL_SCGC0_SCGCCAN0_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC0_OFFSET)*32)+(24*4))))
#define SYSCTL_SCGC0_SCGCCAN1_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC0_OFFSET)*32)+(25*4))))
#define SYSCTL_SCGC0_SCGCWDT1_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC0_OFFSET)*32)+(28*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 28 SCGC1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_SCGC1_OFFSET     (0x0114)
#define SYSCTL_SCGC1            (((SCGC1_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGC1_OFFSET )))
#define SYSCTL_SCGC1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SCGC1_OFFSET)))


//--------
#define SYSCTL_SCGC1_R_SCGCUART0_MASK       (0x00000001)
#define SYSCTL_SCGC1_R_SCGCUART0_BIT        (0)
#define SYSCTL_SCGC1_R_SCGCUART0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_R_SCGCUART0_CLOCK         (0x00000001)

#define SYSCTL_SCGC1_SCGCUART0_MASK       (0x00000001)
#define SYSCTL_SCGC1_SCGCUART0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_SCGCUART0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC1_R_SCGCUART1_MASK       (0x00000002)
#define SYSCTL_SCGC1_R_SCGCUART1_BIT        (1)
#define SYSCTL_SCGC1_R_SCGCUART1_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_R_SCGCUART1_CLOCK         (0x00000002)

#define SYSCTL_SCGC1_SCGCUART1_MASK       (0x00000001)
#define SYSCTL_SCGC1_SCGCUART1_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_SCGCUART1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC1_R_SCGCUART2_MASK       (0x00000004)
#define SYSCTL_SCGC1_R_SCGCUART2_BIT        (2)
#define SYSCTL_SCGC1_R_SCGCUART2_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_R_SCGCUART2_CLOCK         (0x00000004)

#define SYSCTL_SCGC1_SCGCUART2_MASK       (0x00000001)
#define SYSCTL_SCGC1_SCGCUART2_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_SCGCUART2_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC1_R_SCGCSSI0_MASK       (0x00000010)
#define SYSCTL_SCGC1_R_SCGCSSI0_BIT        (4)
#define SYSCTL_SCGC1_R_SCGCSSI0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_R_SCGCSSI0_CLOCK         (0x00000010)

#define SYSCTL_SCGC1_SCGCSSI0_MASK       (0x00000001)
#define SYSCTL_SCGC1_SCGCSSI0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_SCGCSSI0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC1_R_SCGCSSI1_MASK       (0x00000020)
#define SYSCTL_SCGC1_R_SCGCSSI1_BIT        (5)
#define SYSCTL_SCGC1_R_SCGCSSI1_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_R_SCGCSSI1_CLOCK         (0x00000010)

#define SYSCTL_SCGC1_SCGCSSI1_MASK       (0x00000001)
#define SYSCTL_SCGC1_SCGCSSI1_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_SCGCSSI1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC1_R_SCGCQEI0_MASK       (0x00000100)
#define SYSCTL_SCGC1_R_SCGCQEI0_BIT        (8)
#define SYSCTL_SCGC1_R_SCGCQEI0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_R_SCGCQEI0_CLOCK         (0x00000100)

#define SYSCTL_SCGC1_SCGCQEI0_MASK       (0x00000001)
#define SYSCTL_SCGC1_SCGCQEI0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_SCGCQEI0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC1_R_SCGCQEI1_MASK       (0x00000200)
#define SYSCTL_SCGC1_R_SCGCQEI1_BIT        (9)
#define SYSCTL_SCGC1_R_SCGCQEI1_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_R_SCGCQEI1_CLOCK         (0x00000200)

#define SYSCTL_SCGC1_SCGCQEI1_MASK       (0x00000001)
#define SYSCTL_SCGC1_SCGCQEI1_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_SCGCQEI1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC1_R_SCGCI2C0_MASK       (0x00001000)
#define SYSCTL_SCGC1_R_SCGCI2C0_BIT        (12)
#define SYSCTL_SCGC1_R_SCGCI2C0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_R_SCGCI2C0_CLOCK         (0x00001000)

#define SYSCTL_SCGC1_SCGCI2C0_MASK       (0x00000001)
#define SYSCTL_SCGC1_SCGCI2C0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_SCGCI2C0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC1_R_SCGCI2C1_MASK       (0x00004000)
#define SYSCTL_SCGC1_R_SCGCI2C1_BIT        (14)
#define SYSCTL_SCGC1_R_SCGCI2C1_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_R_SCGCI2C1_CLOCK         (0x00004000)

#define SYSCTL_SCGC1_SCGCI2C1_MASK       (0x00000001)
#define SYSCTL_SCGC1_SCGCI2C1_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_SCGCI2C1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC1_R_SCGCTIMER0_MASK       (0x00010000)
#define SYSCTL_SCGC1_R_SCGCTIMER0_BIT        (16)
#define SYSCTL_SCGC1_R_SCGCTIMER0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_R_SCGCTIMER0_CLOCK         (0x00010000)

#define SYSCTL_SCGC1_SCGCTIMER0_MASK       (0x00000001)
#define SYSCTL_SCGC1_SCGCTIMER0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_SCGCTIMER0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC1_R_SCGCTIMER1_MASK       (0x00020000)
#define SYSCTL_SCGC1_R_SCGCTIMER1_BIT        (17)
#define SYSCTL_SCGC1_R_SCGCTIMER1_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_R_SCGCTIMER1_CLOCK         (0x00020000)

#define SYSCTL_SCGC1_SCGCTIMER1_MASK       (0x00000001)
#define SYSCTL_SCGC1_SCGCTIMER1_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_SCGCTIMER1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC1_R_SCGCTIMER2_MASK       (0x00040000)
#define SYSCTL_SCGC1_R_SCGCTIMER2_BIT        (18)
#define SYSCTL_SCGC1_R_SCGCTIMER2_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_R_SCGCTIMER2_CLOCK         (0x00040000)

#define SYSCTL_SCGC1_SCGCTIMER2_MASK       (0x00000001)
#define SYSCTL_SCGC1_SCGCTIMER2_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_SCGCTIMER2_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC1_R_SCGCTIMER3_MASK       (0x00080000)
#define SYSCTL_SCGC1_R_SCGCTIMER3_BIT        (19)
#define SYSCTL_SCGC1_R_SCGCTIMER3_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_R_SCGCTIMER3_CLOCK         (0x00080000)

#define SYSCTL_SCGC1_SCGCTIMER3_MASK       (0x00000001)
#define SYSCTL_SCGC1_SCGCTIMER3_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_SCGCTIMER3_CLOCK         (0x00000001)
//--------


//--------
#define SYSCTL_SCGC1_R_SCGCCOMP0_MASK       (0x01000000)
#define SYSCTL_SCGC1_R_SCGCCOMP0_BIT        (24)
#define SYSCTL_SCGC1_R_SCGCCOMP0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_R_SCGCCOMP0_CLOCK         (0x01000000)

#define SYSCTL_SCGC1_SCGCCOMP0_MASK       (0x00000001)
#define SYSCTL_SCGC1_SCGCCOMP0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_SCGCCOMP0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC1_R_SCGCCOMP1_MASK       (0x02000000)
#define SYSCTL_SCGC1_R_SCGCCOMP1_BIT        (25)
#define SYSCTL_SCGC1_R_SCGCCOMP1_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_R_SCGCCOMP1_CLOCK         (0x02000000)

#define SYSCTL_SCGC1_SCGCCOMP1_MASK       (0x00000001)
#define SYSCTL_SCGC1_SCGCCOMP1_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC1_SCGCCOMP1_CLOCK         (0x00000001)
//--------


#define SYSCTL_SCGC1_SCGCUART0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGC1_SCGCUART1_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32)+(1*4))))
#define SYSCTL_SCGC1_SCGCUART2_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32)+(2*4))))
#define SYSCTL_SCGC1_SCGCSSI0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32)+(4*4))))
#define SYSCTL_SCGC1_SCGCSSI1_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32)+(5*4))))
#define SYSCTL_SCGC1_SCGCQEI0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32)+(8*4))))
#define SYSCTL_SCGC1_SCGCQEI1_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32)+(9*4))))
#define SYSCTL_SCGC1_SCGCI2C0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32)+(12*4))))
#define SYSCTL_SCGC1_SCGCI2C1_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32)+(14*4))))
#define SYSCTL_SCGC1_SCGCTIMER0_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32)+(16*4))))
#define SYSCTL_SCGC1_SCGCTIMER1_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32)+(17*4))))
#define SYSCTL_SCGC1_SCGCTIMER2_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32)+(18*4))))
#define SYSCTL_SCGC1_SCGCTIMER3_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32)+(19*4))))
#define SYSCTL_SCGC1_SCGCCOMP0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32)+(24*4))))
#define SYSCTL_SCGC1_SCGCCOMP1_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC1_OFFSET)*32)+(25*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 29 SCGC2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_SCGC2_OFFSET     (0x0118)
#define SYSCTL_SCGC2            (((SCGC2_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGC2_OFFSET )))
#define SYSCTL_SCGC2_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SCGC2_OFFSET)))


//--------
#define SYSCTL_SCGC2_R_SCGCGPIOA_MASK       (0x00000001)
#define SYSCTL_SCGC2_R_SCGCGPIOA_BIT        (0)
#define SYSCTL_SCGC2_R_SCGCGPIOA_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC2_R_SCGCGPIOA_CLOCK         (0x00000001)

#define SYSCTL_SCGC2_SCGCGPIOA_MASK       (0x00000001)
#define SYSCTL_SCGC2_SCGCGPIOA_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC2_SCGCGPIOA_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC2_R_SCGCGPIOB_MASK       (0x00000002)
#define SYSCTL_SCGC2_R_SCGCGPIOB_BIT        (1)
#define SYSCTL_SCGC2_R_SCGCGPIOB_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC2_R_SCGCGPIOB_CLOCK         (0x00000002)

#define SYSCTL_SCGC2_SCGCGPIOB_MASK       (0x00000001)
#define SYSCTL_SCGC2_SCGCGPIOB_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC2_SCGCGPIOB_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC2_R_SCGCGPIOC_MASK       (0x00000004)
#define SYSCTL_SCGC2_R_SCGCGPIOC_BIT        (2)
#define SYSCTL_SCGC2_R_SCGCGPIOC_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC2_R_SCGCGPIOC_CLOCK         (0x00000004)

#define SYSCTL_SCGC2_SCGCGPIOC_MASK       (0x00000001)
#define SYSCTL_SCGC2_SCGCGPIOC_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC2_SCGCGPIOC_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC2_R_SCGCGPIOD_MASK       (0x00000008)
#define SYSCTL_SCGC2_R_SCGCGPIOD_BIT        (3)
#define SYSCTL_SCGC2_R_SCGCGPIOD_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC2_R_SCGCGPIOD_CLOCK         (0x00000008)

#define SYSCTL_SCGC2_SCGCGPIOD_MASK       (0x00000001)
#define SYSCTL_SCGC2_SCGCGPIOD_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC2_SCGCGPIOD_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC2_R_SCGCGPIOE_MASK       (0x00000010)
#define SYSCTL_SCGC2_R_SCGCGPIOE_BIT        (4)
#define SYSCTL_SCGC2_R_SCGCGPIOE_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC2_R_SCGCGPIOE_CLOCK         (0x00000010)

#define SYSCTL_SCGC2_SCGCGPIOE_MASK       (0x00000001)
#define SYSCTL_SCGC2_SCGCGPIOE_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC2_SCGCGPIOE_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC2_R_SCGCGPIOF_MASK       (0x00000020)
#define SYSCTL_SCGC2_R_SCGCGPIOF_BIT        (5)
#define SYSCTL_SCGC2_R_SCGCGPIOF_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC2_R_SCGCGPIOF_CLOCK         (0x00000020)

#define SYSCTL_SCGC2_SCGCGPIOF_MASK       (0x00000001)
#define SYSCTL_SCGC2_SCGCGPIOF_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC2_SCGCGPIOF_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC2_R_SCGCUDMA_MASK       (0x00002000)
#define SYSCTL_SCGC2_R_SCGCUDMA_BIT        (13)
#define SYSCTL_SCGC2_R_SCGCUDMA_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC2_R_SCGCUDMA_CLOCK         (0x00002000)

#define SYSCTL_SCGC2_SCGCUDMA_MASK       (0x00000001)
#define SYSCTL_SCGC2_SCGCUDMA_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC2_SCGCUDMA_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_SCGC2_R_SCGCUSB0_MASK       (0x00010000)
#define SYSCTL_SCGC2_R_SCGCUSB0_BIT        (16)
#define SYSCTL_SCGC2_R_SCGCUSB0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC2_R_SCGCUSB0_CLOCK         (0x00010000)

#define SYSCTL_SCGC2_SCGCUSB0_MASK       (0x00000001)
#define SYSCTL_SCGC2_SCGCUSB0_UNCLOCK        (0x00000000)
#define SYSCTL_SCGC2_SCGCUSB0_CLOCK         (0x00000001)
//--------

#define SYSCTL_SCGC2_SCGCGPIOA_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC2_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGC2_SCGCGPIOB_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC2_OFFSET)*32)+(1*4))))
#define SYSCTL_SCGC2_SCGCGPIOC_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC2_OFFSET)*32)+(2*4))))
#define SYSCTL_SCGC2_SCGCGPIOD_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC2_OFFSET)*32)+(3*4))))
#define SYSCTL_SCGC2_SCGCGPIOE_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC2_OFFSET)*32)+(4*4))))
#define SYSCTL_SCGC2_SCGCGPIOF_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC2_OFFSET)*32)+(5*4))))
#define SYSCTL_SCGC2_SCGCUDMA_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC2_OFFSET)*32)+(13*4))))
#define SYSCTL_SCGC2_SCGCUSB0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGC2_OFFSET)*32)+(16*4))))

//ToDO

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 30 DCGC0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DCGC0_OFFSET     (0x0120)
#define SYSCTL_DCGC0            (((DCGC0_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGC0_OFFSET )))
#define SYSCTL_DCGC0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DCGC0_OFFSET)))

//--------
#define SYSCTL_DCGC0_R_DCGCWDT0_MASK       (0x00000008)
#define SYSCTL_DCGC0_R_DCGCWDT0_BIT        (3)
#define SYSCTL_DCGC0_R_DCGCWDT0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC0_R_DCGCWDT0_CLOCK         (0x00000008)

#define SYSCTL_DCGC0_DCGCWDT0_MASK       (0x00000001)
#define SYSCTL_DCGC0_DCGCWDT0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC0_DCGCWDT0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC0_R_DCGCHIB_MASK       (0x00000040)
#define SYSCTL_DCGC0_R_DCGCHIB_BIT        (6)
#define SYSCTL_DCGC0_R_DCGCHIB_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC0_R_DCGCHIB_CLOCK         (0x00000040)

#define SYSCTL_DCGC0_DCGCHIB_MASK       (0x00000001)
#define SYSCTL_DCGC0_DCGCHIB_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC0_DCGCHIB_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC0_R_DCGCMAXADC0SPD_MASK       (0x00000030)
#define SYSCTL_DCGC0_R_DCGCMAXADC0SPD_BIT        (8)
#define SYSCTL_DCGC0_R_DCGCMAXADC0SPD_125K       (0x00000000)
#define SYSCTL_DCGC0_R_DCGCMAXADC0SPD_250K       (0x00000010)
#define SYSCTL_DCGC0_R_DCGCMAXADC0SPD_500K       (0x00000020)
#define SYSCTL_DCGC0_R_DCGCMAXADC0SPD_1M         (0x00000030)

#define SYSCTL_DCGC0_DCGCMAXADC0SPD_MASK         (0x00000003)
#define SYSCTL_DCGC0_DCGCMAXADC0SPD_125K         (0x00000000)
#define SYSCTL_DCGC0_DCGCMAXADC0SPD_250K         (0x00000001)
#define SYSCTL_DCGC0_DCGCMAXADC0SPD_500K         (0x00000002)
#define SYSCTL_DCGC0_DCGCMAXADC0SPD_1M           (0x00000003)
//--------

//--------
#define SYSCTL_DCGC0_R_DCGCMAXADC1SPD_MASK       (0x000000C0)
#define SYSCTL_DCGC0_R_DCGCMAXADC1SPD_BIT        (10)
#define SYSCTL_DCGC0_R_DCGCMAXADC1SPD_125K       (0x00000000)
#define SYSCTL_DCGC0_R_DCGCMAXADC1SPD_250K       (0x00000040)
#define SYSCTL_DCGC0_R_DCGCMAXADC1SPD_500K       (0x00000080)
#define SYSCTL_DCGC0_R_DCGCMAXADC1SPD_1M         (0x000000C0)

#define SYSCTL_DCGC0_DCGCMAXADC1SPD_MASK         (0x00000003)
#define SYSCTL_DCGC0_DCGCMAXADC1SPD_125K         (0x00000000)
#define SYSCTL_DCGC0_DCGCMAXADC1SPD_250K         (0x00000001)
#define SYSCTL_DCGC0_DCGCMAXADC1SPD_500K         (0x00000002)
#define SYSCTL_DCGC0_DCGCMAXADC1SPD_1M           (0x00000003)
//--------

//--------
#define SYSCTL_DCGC0_R_DCGCADC0_MASK       (0x00010000)
#define SYSCTL_DCGC0_R_DCGCADC0_BIT        (16)
#define SYSCTL_DCGC0_R_DCGCADC0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC0_R_DCGCADC0_CLOCK         (0x00010000)

#define SYSCTL_DCGC0_DCGCADC0_MASK       (0x00000001)
#define SYSCTL_DCGC0_DCGCADC0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC0_DCGCADC0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC0_R_DCGCADC1_MASK       (0x00020000)
#define SYSCTL_DCGC0_R_DCGCADC1_BIT        (17)
#define SYSCTL_DCGC0_R_DCGCADC1_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC0_R_DCGCADC1_CLOCK         (0x00020000)

#define SYSCTL_DCGC0_DCGCADC1_MASK       (0x00000001)
#define SYSCTL_DCGC0_DCGCADC1_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC0_DCGCADC1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC0_R_DCGCPWM0_MASK       (0x00100000)
#define SYSCTL_DCGC0_R_DCGCPWM0_BIT        (20)
#define SYSCTL_DCGC0_R_DCGCPWM0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC0_R_DCGCPWM0_CLOCK         (0x00100000)

#define SYSCTL_DCGC0_DCGCPWM0_MASK       (0x00000001)
#define SYSCTL_DCGC0_DCGCPWM0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC0_DCGCPWM0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC0_R_DCGCCAN0_MASK       (0x01000000)
#define SYSCTL_DCGC0_R_DCGCCAN0_BIT        (24)
#define SYSCTL_DCGC0_R_DCGCCAN0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC0_R_DCGCCAN0_CLOCK         (0x01000000)

#define SYSCTL_DCGC0_DCGCCAN0_MASK       (0x00000001)
#define SYSCTL_DCGC0_DCGCCAN0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC0_DCGCCAN0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC0_R_DCGCCAN1_MASK       (0x02000000)
#define SYSCTL_DCGC0_R_DCGCCAN1_BIT        (25)
#define SYSCTL_DCGC0_R_DCGCCAN1_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC0_R_DCGCCAN1_CLOCK         (0x02000000)

#define SYSCTL_DCGC0_DCGCCAN1_MASK       (0x00000001)
#define SYSCTL_DCGC0_DCGCCAN1_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC0_DCGCCAN1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC0_R_DCGCWDT1_MASK       (0x10000000)
#define SYSCTL_DCGC0_R_DCGCWDT1_BIT        (28)
#define SYSCTL_DCGC0_R_DCGCWDT1_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC0_R_DCGCWDT1_CLOCK         (0x10000000)

#define SYSCTL_DCGC0_DCGCWDT1_MASK       (0x00000001)
#define SYSCTL_DCGC0_DCGCWDT1_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC0_DCGCWDT1_CLOCK         (0x00000001)
//--------

#define SYSCTL_DCGC0_DCGCWDT0_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC0_OFFSET)*32)+(3*4))))
#define SYSCTL_DCGC0_DCGCHIB_BB       (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC0_OFFSET)*32)+(6*4))))
#define SYSCTL_DCGC0_DCGCADC0_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC0_OFFSET)*32)+(16*4))))
#define SYSCTL_DCGC0_DCGCADC1_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC0_OFFSET)*32)+(17*4))))
#define SYSCTL_DCGC0_DCGCPWM0_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC0_OFFSET)*32)+(20*4))))
#define SYSCTL_DCGC0_DCGCCAN0_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC0_OFFSET)*32)+(24*4))))
#define SYSCTL_DCGC0_DCGCCAN1_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC0_OFFSET)*32)+(25*4))))
#define SYSCTL_DCGC0_DCGCWDT1_BB      (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC0_OFFSET)*32)+(28*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 31 DCGC1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DCGC1_OFFSET     (0x0124)
#define SYSCTL_DCGC1            (((DCGC1_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGC1_OFFSET )))
#define SYSCTL_DCGC1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DCGC1_OFFSET)))


//--------
#define SYSCTL_DCGC1_R_DCGCUART0_MASK       (0x00000001)
#define SYSCTL_DCGC1_R_DCGCUART0_BIT        (0)
#define SYSCTL_DCGC1_R_DCGCUART0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_R_DCGCUART0_CLOCK         (0x00000001)

#define SYSCTL_DCGC1_DCGCUART0_MASK       (0x00000001)
#define SYSCTL_DCGC1_DCGCUART0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_DCGCUART0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC1_R_DCGCUART1_MASK       (0x00000002)
#define SYSCTL_DCGC1_R_DCGCUART1_BIT        (1)
#define SYSCTL_DCGC1_R_DCGCUART1_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_R_DCGCUART1_CLOCK         (0x00000002)

#define SYSCTL_DCGC1_DCGCUART1_MASK       (0x00000001)
#define SYSCTL_DCGC1_DCGCUART1_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_DCGCUART1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC1_R_DCGCUART2_MASK       (0x00000004)
#define SYSCTL_DCGC1_R_DCGCUART2_BIT        (2)
#define SYSCTL_DCGC1_R_DCGCUART2_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_R_DCGCUART2_CLOCK         (0x00000004)

#define SYSCTL_DCGC1_DCGCUART2_MASK       (0x00000001)
#define SYSCTL_DCGC1_DCGCUART2_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_DCGCUART2_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC1_R_DCGCSSI0_MASK       (0x00000010)
#define SYSCTL_DCGC1_R_DCGCSSI0_BIT        (4)
#define SYSCTL_DCGC1_R_DCGCSSI0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_R_DCGCSSI0_CLOCK         (0x00000010)

#define SYSCTL_DCGC1_DCGCSSI0_MASK       (0x00000001)
#define SYSCTL_DCGC1_DCGCSSI0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_DCGCSSI0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC1_R_DCGCSSI1_MASK       (0x00000020)
#define SYSCTL_DCGC1_R_DCGCSSI1_BIT        (5)
#define SYSCTL_DCGC1_R_DCGCSSI1_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_R_DCGCSSI1_CLOCK         (0x00000010)

#define SYSCTL_DCGC1_DCGCSSI1_MASK       (0x00000001)
#define SYSCTL_DCGC1_DCGCSSI1_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_DCGCSSI1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC1_R_DCGCQEI0_MASK       (0x00000100)
#define SYSCTL_DCGC1_R_DCGCQEI0_BIT        (8)
#define SYSCTL_DCGC1_R_DCGCQEI0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_R_DCGCQEI0_CLOCK         (0x00000100)

#define SYSCTL_DCGC1_DCGCQEI0_MASK       (0x00000001)
#define SYSCTL_DCGC1_DCGCQEI0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_DCGCQEI0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC1_R_DCGCQEI1_MASK       (0x00000200)
#define SYSCTL_DCGC1_R_DCGCQEI1_BIT        (9)
#define SYSCTL_DCGC1_R_DCGCQEI1_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_R_DCGCQEI1_CLOCK         (0x00000200)

#define SYSCTL_DCGC1_DCGCQEI1_MASK       (0x00000001)
#define SYSCTL_DCGC1_DCGCQEI1_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_DCGCQEI1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC1_R_DCGCI2C0_MASK       (0x00001000)
#define SYSCTL_DCGC1_R_DCGCI2C0_BIT        (12)
#define SYSCTL_DCGC1_R_DCGCI2C0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_R_DCGCI2C0_CLOCK         (0x00001000)

#define SYSCTL_DCGC1_DCGCI2C0_MASK       (0x00000001)
#define SYSCTL_DCGC1_DCGCI2C0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_DCGCI2C0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC1_R_DCGCI2C1_MASK       (0x00004000)
#define SYSCTL_DCGC1_R_DCGCI2C1_BIT        (14)
#define SYSCTL_DCGC1_R_DCGCI2C1_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_R_DCGCI2C1_CLOCK         (0x00004000)

#define SYSCTL_DCGC1_DCGCI2C1_MASK       (0x00000001)
#define SYSCTL_DCGC1_DCGCI2C1_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_DCGCI2C1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC1_R_DCGCTIMER0_MASK       (0x00010000)
#define SYSCTL_DCGC1_R_DCGCTIMER0_BIT        (16)
#define SYSCTL_DCGC1_R_DCGCTIMER0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_R_DCGCTIMER0_CLOCK         (0x00010000)

#define SYSCTL_DCGC1_DCGCTIMER0_MASK       (0x00000001)
#define SYSCTL_DCGC1_DCGCTIMER0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_DCGCTIMER0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC1_R_DCGCTIMER1_MASK       (0x00020000)
#define SYSCTL_DCGC1_R_DCGCTIMER1_BIT        (17)
#define SYSCTL_DCGC1_R_DCGCTIMER1_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_R_DCGCTIMER1_CLOCK         (0x00020000)

#define SYSCTL_DCGC1_DCGCTIMER1_MASK       (0x00000001)
#define SYSCTL_DCGC1_DCGCTIMER1_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_DCGCTIMER1_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC1_R_DCGCTIMER2_MASK       (0x00040000)
#define SYSCTL_DCGC1_R_DCGCTIMER2_BIT        (18)
#define SYSCTL_DCGC1_R_DCGCTIMER2_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_R_DCGCTIMER2_CLOCK         (0x00040000)

#define SYSCTL_DCGC1_DCGCTIMER2_MASK       (0x00000001)
#define SYSCTL_DCGC1_DCGCTIMER2_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_DCGCTIMER2_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC1_R_DCGCTIMER3_MASK       (0x00080000)
#define SYSCTL_DCGC1_R_DCGCTIMER3_BIT        (19)
#define SYSCTL_DCGC1_R_DCGCTIMER3_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_R_DCGCTIMER3_CLOCK         (0x00080000)

#define SYSCTL_DCGC1_DCGCTIMER3_MASK       (0x00000001)
#define SYSCTL_DCGC1_DCGCTIMER3_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_DCGCTIMER3_CLOCK         (0x00000001)
//--------


//--------
#define SYSCTL_DCGC1_R_DCGCCOMP0_MASK       (0x01000000)
#define SYSCTL_DCGC1_R_DCGCCOMP0_BIT        (24)
#define SYSCTL_DCGC1_R_DCGCCOMP0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_R_DCGCCOMP0_CLOCK         (0x01000000)

#define SYSCTL_DCGC1_DCGCCOMP0_MASK       (0x00000001)
#define SYSCTL_DCGC1_DCGCCOMP0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_DCGCCOMP0_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC1_R_DCGCCOMP1_MASK       (0x02000000)
#define SYSCTL_DCGC1_R_DCGCCOMP1_BIT        (25)
#define SYSCTL_DCGC1_R_DCGCCOMP1_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_R_DCGCCOMP1_CLOCK         (0x02000000)

#define SYSCTL_DCGC1_DCGCCOMP1_MASK       (0x00000001)
#define SYSCTL_DCGC1_DCGCCOMP1_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC1_DCGCCOMP1_CLOCK         (0x00000001)
//--------


#define SYSCTL_DCGC1_DCGCUART0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGC1_DCGCUART1_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32)+(1*4))))
#define SYSCTL_DCGC1_DCGCUART2_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32)+(2*4))))
#define SYSCTL_DCGC1_DCGCSSI0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32)+(4*4))))
#define SYSCTL_DCGC1_DCGCSSI1_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32)+(5*4))))
#define SYSCTL_DCGC1_DCGCQEI0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32)+(8*4))))
#define SYSCTL_DCGC1_DCGCQEI1_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32)+(9*4))))
#define SYSCTL_DCGC1_DCGCI2C0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32)+(12*4))))
#define SYSCTL_DCGC1_DCGCI2C1_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32)+(14*4))))
#define SYSCTL_DCGC1_DCGCTIMER0_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32)+(16*4))))
#define SYSCTL_DCGC1_DCGCTIMER1_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32)+(17*4))))
#define SYSCTL_DCGC1_DCGCTIMER2_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32)+(18*4))))
#define SYSCTL_DCGC1_DCGCTIMER3_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32)+(19*4))))
#define SYSCTL_DCGC1_DCGCCOMP0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32)+(24*4))))
#define SYSCTL_DCGC1_DCGCCOMP1_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC1_OFFSET)*32)+(25*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 32 DCGC2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DCGC2_OFFSET     (0x0128)
#define SYSCTL_DCGC2            (((DCGC2_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGC2_OFFSET )))
#define SYSCTL_DCGC2_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DCGC2_OFFSET)))


//--------
#define SYSCTL_DCGC2_R_DCGCGPIOA_MASK       (0x00000001)
#define SYSCTL_DCGC2_R_DCGCGPIOA_BIT        (0)
#define SYSCTL_DCGC2_R_DCGCGPIOA_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC2_R_DCGCGPIOA_CLOCK         (0x00000001)

#define SYSCTL_DCGC2_DCGCGPIOA_MASK       (0x00000001)
#define SYSCTL_DCGC2_DCGCGPIOA_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC2_DCGCGPIOA_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC2_R_DCGCGPIOB_MASK       (0x00000002)
#define SYSCTL_DCGC2_R_DCGCGPIOB_BIT        (1)
#define SYSCTL_DCGC2_R_DCGCGPIOB_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC2_R_DCGCGPIOB_CLOCK         (0x00000002)

#define SYSCTL_DCGC2_DCGCGPIOB_MASK       (0x00000001)
#define SYSCTL_DCGC2_DCGCGPIOB_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC2_DCGCGPIOB_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC2_R_DCGCGPIOC_MASK       (0x00000004)
#define SYSCTL_DCGC2_R_DCGCGPIOC_BIT        (2)
#define SYSCTL_DCGC2_R_DCGCGPIOC_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC2_R_DCGCGPIOC_CLOCK         (0x00000004)

#define SYSCTL_DCGC2_DCGCGPIOC_MASK       (0x00000001)
#define SYSCTL_DCGC2_DCGCGPIOC_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC2_DCGCGPIOC_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC2_R_DCGCGPIOD_MASK       (0x00000008)
#define SYSCTL_DCGC2_R_DCGCGPIOD_BIT        (3)
#define SYSCTL_DCGC2_R_DCGCGPIOD_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC2_R_DCGCGPIOD_CLOCK         (0x00000008)

#define SYSCTL_DCGC2_DCGCGPIOD_MASK       (0x00000001)
#define SYSCTL_DCGC2_DCGCGPIOD_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC2_DCGCGPIOD_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC2_R_DCGCGPIOE_MASK       (0x00000010)
#define SYSCTL_DCGC2_R_DCGCGPIOE_BIT        (4)
#define SYSCTL_DCGC2_R_DCGCGPIOE_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC2_R_DCGCGPIOE_CLOCK         (0x00000010)

#define SYSCTL_DCGC2_DCGCGPIOE_MASK       (0x00000001)
#define SYSCTL_DCGC2_DCGCGPIOE_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC2_DCGCGPIOE_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC2_R_DCGCGPIOF_MASK       (0x00000020)
#define SYSCTL_DCGC2_R_DCGCGPIOF_BIT        (5)
#define SYSCTL_DCGC2_R_DCGCGPIOF_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC2_R_DCGCGPIOF_CLOCK         (0x00000020)

#define SYSCTL_DCGC2_DCGCGPIOF_MASK       (0x00000001)
#define SYSCTL_DCGC2_DCGCGPIOF_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC2_DCGCGPIOF_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC2_R_DCGCUDMA_MASK       (0x00002000)
#define SYSCTL_DCGC2_R_DCGCUDMA_BIT        (13)
#define SYSCTL_DCGC2_R_DCGCUDMA_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC2_R_DCGCUDMA_CLOCK         (0x00002000)

#define SYSCTL_DCGC2_DCGCUDMA_MASK       (0x00000001)
#define SYSCTL_DCGC2_DCGCUDMA_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC2_DCGCUDMA_CLOCK         (0x00000001)
//--------

//--------
#define SYSCTL_DCGC2_R_DCGCUSB0_MASK       (0x00010000)
#define SYSCTL_DCGC2_R_DCGCUSB0_BIT        (16)
#define SYSCTL_DCGC2_R_DCGCUSB0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC2_R_DCGCUSB0_CLOCK         (0x00010000)

#define SYSCTL_DCGC2_DCGCUSB0_MASK       (0x00000001)
#define SYSCTL_DCGC2_DCGCUSB0_UNCLOCK        (0x00000000)
#define SYSCTL_DCGC2_DCGCUSB0_CLOCK         (0x00000001)
//--------

#define SYSCTL_DCGC2_DCGCGPIOA_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC2_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGC2_DCGCGPIOB_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC2_OFFSET)*32)+(1*4))))
#define SYSCTL_DCGC2_DCGCGPIOC_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC2_OFFSET)*32)+(2*4))))
#define SYSCTL_DCGC2_DCGCGPIOD_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC2_OFFSET)*32)+(3*4))))
#define SYSCTL_DCGC2_DCGCGPIOE_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC2_OFFSET)*32)+(4*4))))
#define SYSCTL_DCGC2_DCGCGPIOF_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC2_OFFSET)*32)+(5*4))))
#define SYSCTL_DCGC2_DCGCUDMA_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC2_OFFSET)*32)+(13*4))))
#define SYSCTL_DCGC2_DCGCUSB0_BB        (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGC2_OFFSET)*32)+(16*4))))

//Todo

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////33 DSLPCLKCFG ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DSLPCLKCFG_OFFSET     (0x0144)
#define SYSCTL_DSLPCLKCFG            (((DSLPCLKCFG_TypeDef*)(SYSCTL_BASE+SYSCTL_DSLPCLKCFG_OFFSET )))
#define SYSCTL_DSLPCLKCFG_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DSLPCLKCFG_OFFSET)))

//--------
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_MASK       (0x00000002)
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_BIT        (1)
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_NA         (0x00000000)
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_PWRDN      (0x00000002)

#define SYSCTL_DSLPCLKCFG_PIOSCPD_MASK       (0x00000001)
#define SYSCTL_DSLPCLKCFG_PIOSCPD_NA         (0x00000000)
#define SYSCTL_DSLPCLKCFG_PIOSCPD_PWRDN      (0x00000001)
//--------

//--------
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_MASK       (0x00000007)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_BIT        (4)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_MOSC       (0x00000000)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_PIOSC      (0x00000001)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_LFIOSC     (0x00000003)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_32768Hz    (0x00000007)

#define SYSCTL_DSLPCLKCFG_DSOSCSRC_MASK       (0x00000007)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_MOSC       (0x00000000)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_PIOSC      (0x00000001)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_LFIOSC     (0x00000003)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_32768Hz    (0x00000007)
//--------

//--------
#define SYSCTL_DSLPCLKCFG_R_DSDIVORIDE_MASK       (0x1F800000)
#define SYSCTL_DSLPCLKCFG_R_DSDIVORIDE_BIT        (23)

#define SYSCTL_DSLPCLKCFG_DSDIVORIDE_MASK       (0x0000003F)
//--------

#define SYSCTL_DSLPCLKCFG_PIOSCPD_BB       (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DSLPCLKCFG_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////34 SYSPROP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define SYSCTL_SYSPROP_OFFSET     (0x014C)
#define SYSCTL_SYSPROP            (((SYSPROP_TypeDef*)(SYSCTL_BASE+SYSCTL_SYSPROP_OFFSET )))
#define SYSCTL_SYSPROP_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SYSPROP_OFFSET)))

//--------
#define SYSCTL_SYSPROP_R_FPU_MASK       (0x00000001)
#define SYSCTL_SYSPROP_R_FPU_BIT        (0)
#define SYSCTL_SYSPROP_R_FPU_NOPRESENT  (0x00000000)
#define SYSCTL_SYSPROP_R_FPU_PRESENT    (0x00000001)

#define SYSCTL_SYSPROP_FPU_MASK       (0x00000001)
#define SYSCTL_SYSPROP_FPU_NOPRESENT  (0x00000000)
#define SYSCTL_SYSPROP_FPU_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_SYSPROP_R_FLASHLPM_MASK       (0x00000100)
#define SYSCTL_SYSPROP_R_FLASHLPM_BIT        (8)
#define SYSCTL_SYSPROP_R_FLASHLPM_NOPRESENT  (0x00000000)
#define SYSCTL_SYSPROP_R_FLASHLPM_PRESENT    (0x00000100)

#define SYSCTL_SYSPROP_FLASHLPM_MASK       (0x00000001)
#define SYSCTL_SYSPROP_FLASHLPM_NOPRESENT  (0x00000000)
#define SYSCTL_SYSPROP_FLASHLPM_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_SYSPROP_R_SRAMLPM_MASK       (0x00000400)
#define SYSCTL_SYSPROP_R_SRAMLPM_BIT        (10)
#define SYSCTL_SYSPROP_R_SRAMLPM_NOPRESENT  (0x00000000)
#define SYSCTL_SYSPROP_R_SRAMLPM_PRESENT    (0x00000400)

#define SYSCTL_SYSPROP_SRAMLPM_MASK       (0x00000001)
#define SYSCTL_SYSPROP_SRAMLPM_NOPRESENT  (0x00000000)
#define SYSCTL_SYSPROP_SRAMLPM_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_SYSPROP_R_SRAMSM_MASK       (0x00000800)
#define SYSCTL_SYSPROP_R_SRAMSM_BIT        (11)
#define SYSCTL_SYSPROP_R_SRAMSM_NOPRESENT  (0x00000000)
#define SYSCTL_SYSPROP_R_SRAMSM_PRESENT    (0x00000800)

#define SYSCTL_SYSPROP_SRAMSM_MASK       (0x00000001)
#define SYSCTL_SYSPROP_SRAMSM_NOPRESENT  (0x00000000)
#define SYSCTL_SYSPROP_SRAMSM_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_SYSPROP_R_SRAMSM_MASK       (0x00000800)
#define SYSCTL_SYSPROP_R_SRAMSM_BIT        (11)
#define SYSCTL_SYSPROP_R_SRAMSM_NOPRESENT  (0x00000000)
#define SYSCTL_SYSPROP_R_SRAMSM_PRESENT    (0x00000800)

#define SYSCTL_SYSPROP_SRAMSM_MASK       (0x00000001)
#define SYSCTL_SYSPROP_SRAMSM_NOPRESENT  (0x00000000)
#define SYSCTL_SYSPROP_SRAMSM_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_SYSPROP_R_PIOSCPDE_MASK       (0x00001000)
#define SYSCTL_SYSPROP_R_PIOSCPDE_BIT        (12)
#define SYSCTL_SYSPROP_R_PIOSCPDE_NOPRESENT  (0x00000000)
#define SYSCTL_SYSPROP_R_PIOSCPDE_PRESENT    (0x00001000)

#define SYSCTL_SYSPROP_PIOSCPDE_MASK       (0x00000001)
#define SYSCTL_SYSPROP_PIOSCPDE_NOPRESENT  (0x00000000)
#define SYSCTL_SYSPROP_PIOSCPDE_PRESENT    (0x00000001)
//--------

#define SYSCTL_SYSPROP_FPU_BB          (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32)+(0*4))))
#define SYSCTL_SYSPROP_FLASHLPM_BB     (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32)+(8*4))))
#define SYSCTL_SYSPROP_SRAMLPM_BB      (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32)+(10*4))))
#define SYSCTL_SYSPROP_SRAMSM_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32)+(11*4))))
#define SYSCTL_SYSPROP_PIOSCPDE_BB     (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32)+(12*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////35 PIOSCCAL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_PIOSCCAL_OFFSET     (0x014C)
#define SYSCTL_PIOSCCAL            (((PIOSCCAL_TypeDef*)(SYSCTL_BASE+SYSCTL_PIOSCCAL_OFFSET )))
#define SYSCTL_PIOSCCAL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PIOSCCAL_OFFSET)))

//--------
#define SYSCTL_PIOSCCAL_R_UT_MASK       (0x0000007F)
#define SYSCTL_PIOSCCAL_R_UT_BIT        (0)

#define SYSCTL_PIOSCCAL_UT_MASK       (0x0000007F)
//--------

//--------
#define SYSCTL_PIOSCCAL_R_UPDATE_MASK       (0x00000100)
#define SYSCTL_PIOSCCAL_R_UPDATE_BIT        (8)
#define SYSCTL_PIOSCCAL_R_UPDATE_NA         (0x00000000)
#define SYSCTL_PIOSCCAL_R_UPDATE_UPDATE     (0x00000100)

#define SYSCTL_PIOSCCAL_UPDATE_MASK       (0x000000001)
#define SYSCTL_PIOSCCAL_UPDATE_NA         (0x000000000)
#define SYSCTL_PIOSCCAL_UPDATE_UPDATE     (0x000000001)
//--------

//--------
#define SYSCTL_PIOSCCAL_R_CAL_MASK       (0x00000200)
#define SYSCTL_PIOSCCAL_R_CAL_BIT        (9)
#define SYSCTL_PIOSCCAL_R_CAL_NA         (0x00000000)
#define SYSCTL_PIOSCCAL_R_CAL_START      (0x00000200)

#define SYSCTL_PIOSCCAL_CAL_MASK       (0x000000001)
#define SYSCTL_PIOSCCAL_CAL_NA         (0x000000000)
#define SYSCTL_PIOSCCAL_CAL_START      (0x000000001)
//--------

//--------
#define SYSCTL_PIOSCCAL_R_UTEN_MASK       (0x80000000)
#define SYSCTL_PIOSCCAL_R_UTEN_BIT        (31)
#define SYSCTL_PIOSCCAL_R_UTEN_FACTORY    (0x00000000)
#define SYSCTL_PIOSCCAL_R_UTEN_TRIM       (0x80000000)

#define SYSCTL_PIOSCCAL_UTEN_MASK       (0x000000001)
#define SYSCTL_PIOSCCAL_UTEN_FACTORY    (0x000000000)
#define SYSCTL_PIOSCCAL_UTEN_TRIM       (0x000000001)
//--------

#define SYSCTL_PIOSCCA_R_UT_MASK    (0x0000007F)
#define SYSCTL_PIOSCCA_R_UPDATE     (0x00000100)
#define SYSCTL_PIOSCCA_R_CAL        (0x00000200)
#define SYSCTL_PIOSCCA_R_UTEN       (0x80000000)

#define SYSCTLPIOSCCAL_UPDATE_BB          (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTLPIOSCCAL_OFFSET)*32)+(8*4))))
#define SYSCTLPIOSCCAL_CAL_BB             (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTLPIOSCCAL_OFFSET)*32)+(9*4))))
#define SYSCTLPIOSCCAL_UTEN_BB            (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTLPIOSCCAL_OFFSET)*32)+(31*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////36 PIOSCSTAT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_PIOSCSTAT_OFFSET     (0x0154)
#define SYSCTL_PIOSCSTAT            (((PIOSCSTAT_TypeDef*)(SYSCTL_BASE+SYSCTL_PIOSCSTAT_OFFSET )))
#define SYSCTL_PIOSCSTAT_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PIOSCSTAT_OFFSET)))

//--------
#define SYSCTL_PIOSCSTAT_R_CT_MASK       (0x0000007F)
#define SYSCTL_PIOSCSTAT_R_CT_BIT        (0)
#define SYSCTL_PIOSCSTAT_R_CT_FACTORY    (0x00000040)

#define SYSCTL_PIOSCSTAT_CT_MASK       (0x0000007F)
#define SYSCTL_PIOSCSTAT_CT_FACTORY    (0x00000040)
//--------

//--------
#define SYSCTL_PIOSCSTAT_R_RESULT_MASK       (0x00000300)
#define SYSCTL_PIOSCSTAT_R_RESULT_BIT        (8)
#define SYSCTL_PIOSCSTAT_R_RESULT_NOATTEMPT  (0x00000000)
#define SYSCTL_PIOSCSTAT_R_RESULT_COMPLETE   (0x00000100)
#define SYSCTL_PIOSCSTAT_R_RESULT_FAILED     (0x00000200)

#define SYSCTL_PIOSCSTAT_RESULT_MASK       (0x00000003)
#define SYSCTL_PIOSCSTAT_RESULT_NOATTEMPT  (0x00000000)
#define SYSCTL_PIOSCSTAT_RESULT_COMPLETE   (0x00000001)
#define SYSCTL_PIOSCSTAT_RESULT_FAILED     (0x00000002)
//--------

//--------
#define SYSCTL_PIOSCSTAT_R_DT_MASK       (0x007F0000)
#define SYSCTL_PIOSCSTAT_R_DT_BIT        (16)
#define SYSCTL_PIOSCSTAT_R_DT_FACTORY    (0x00400000)

#define SYSCTL_PIOSCSTAT_DT_MASK       (0x0000007F)
#define SYSCTL_PIOSCSTAT_DT_FACTORY    (0x00000040)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////37 PLLFREQ0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_PLLFREQ0_OFFSET     (0x0160)
#define SYSCTL_PLLFREQ0            (((PLLFREQ0_TypeDef*)(SYSCTL_BASE+SYSCTL_PLLFREQ0_OFFSET )))
#define SYSCTL_PLLFREQ0_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PLLFREQ0_OFFSET)))

//--------
#define SYSCTL_PLLFREQ0_R_MINT_MASK       (0x000003FF)
#define SYSCTL_PLLFREQ0_R_MINT_BIT        (0)
#define SYSCTL_PLLFREQ0_R_MINT_RESET      (0x00000000)

#define SYSCTL_PLLFREQ0_MINT_MASK       (0x000003FF)
#define SYSCTL_PLLFREQ0_MINT_RESET      (0x00000000)
//--------

//--------
#define SYSCTL_PLLFREQ0_R_MFRAC_MASK       (0x000FFC00)
#define SYSCTL_PLLFREQ0_R_MFRAC_BIT        (10)
#define SYSCTL_PLLFREQ0_R_MFRAC_RESET      (0x0000C800)

#define SYSCTL_PLLFREQ0_MFRAC_MASK       (0x000003FF)
#define SYSCTL_PLLFREQ0_MFRAC_RESET      (0x00000032)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////38 PLLFREQ1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_PLLFREQ1_OFFSET     (0x0164)
#define SYSCTL_PLLFREQ1            (((PLLFREQ1_TypeDef*)(SYSCTL_BASE+SYSCTL_PLLFREQ1_OFFSET )))
#define SYSCTL_PLLFREQ1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PLLFREQ1_OFFSET)))

//--------
#define SYSCTL_PLLFREQ1_R_N_MASK       (0x0000001F)
#define SYSCTL_PLLFREQ1_R_N_BIT        (0)
#define SYSCTL_PLLFREQ1_R_N_RESET      (0x00000001)

#define SYSCTL_PLLFREQ1_N_MASK       (0x0000001F)
#define SYSCTL_PLLFREQ1_N_RESET      (0x00000001)
//--------

//--------
#define SYSCTL_PLLFREQ1_R_Q_MASK       (0x00001F00)
#define SYSCTL_PLLFREQ1_R_Q_BIT        (8)
#define SYSCTL_PLLFREQ1_R_Q_RESET      (0x00000000)

#define SYSCTL_PLLFREQ1_Q_MASK       (0x0000001F)
#define SYSCTL_PLLFREQ1_Q_RESET      (0x00000000)
//--------
////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////39 PLLSTAT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_PLLSTAT_OFFSET     (0x0168)
#define SYSCTL_PLLSTAT            (((PLLFREQ1_TypeDef*)(SYSCTL_BASE+SYSCTL_PLLSTAT_OFFSET )))
#define SYSCTL_PLLSTAT_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PLLSTAT_OFFSET)))

//--------
#define SYSCTL_PLLSTAT_R_LOCK_MASK       (0x00000001)
#define SYSCTL_PLLSTAT_R_LOCK_BIT        (0)
#define SYSCTL_PLLSTAT_R_LOCK_UNLOCK     (0x00000000)
#define SYSCTL_PLLSTAT_R_LOCK_LOCK       (0x00000001)

#define SYSCTL_PLLSTAT_LOCK_MASK       (0x00000001)
#define SYSCTL_PLLSTAT_LOCK_UNLOCK     (0x00000000)
#define SYSCTL_PLLSTAT_LOCK_LOCK       (0x00000001)
//--------

#define SYSCTL_PLLSTAT_LOCK_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PLLSTAT_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////40 SLSRWRCFG ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_SLSRWRCFG_OFFSET     (0x0188)
#define SYSCTL_SLSRWRCFG            (((SLSRWRCFG_TypeDef*)(SYSCTL_BASE+SYSCTL_SLSRWRCFG_OFFSET )))
#define SYSCTL_SLSRWRCFG_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SLSRWRCFG_OFFSET)))

//--------
#define SYSCTL_SLSRWRCFG_R_SRAMPM_MASK       (0x00000003)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_BIT        (0)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_ACTIVE     (0x00000000)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_STANDBY    (0x00000001)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_LPWR       (0x00000003)

#define SYSCTL_SLSRWRCFG_SRAMPM_MASK       (0x00000003)
#define SYSCTL_SLSRWRCFG_SRAMPM_ACTIVE     (0x00000000)
#define SYSCTL_SLSRWRCFG_SRAMPM_STANDBY    (0x00000001)
#define SYSCTL_SLSRWRCFG_SRAMPM_LPWR       (0x00000003)
//--------

//--------
#define SYSCTL_SLSRWRCFG_R_FLASHPM_MASK       (0x00000030)
#define SYSCTL_SLSRWRCFG_R_FLASHPM_BIT        (4)
#define SYSCTL_SLSRWRCFG_R_FLASHPM_ACTIVE     (0x00000000)
#define SYSCTL_SLSRWRCFG_R_FLASHPM_LPWR       (0x00000020)

#define SYSCTL_SLSRWRCFG_FLASHPM_MASK       (0x00000003)
#define SYSCTL_SLSRWRCFG_FLASHPM_ACTIVE     (0x00000000)
#define SYSCTL_SLSRWRCFG_FLASHPM_LPWR       (0x00000002)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////41 DSLSRWRCFG ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DSLSRWRCFG_OFFSET     (0x018C)
#define SYSCTL_DSLSRWRCFG            (((DSLSRWRCFG_TypeDef*)(SYSCTL_BASE+SYSCTL_DSLSRWRCFG_OFFSET )))
#define SYSCTL_DSLSRWRCFG_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DSLSRWRCFG_OFFSET)))

//--------
#define SYSCTL_DSLPPWRCFG_R_SRAMPM_MASK       (0x00000003)
#define SYSCTL_DSLPPWRCFG_R_SRAMPM_BIT        (0)
#define SYSCTL_DSLPPWRCFG_R_SRAMPM_ACTIVE     (0x00000000)
#define SYSCTL_DSLPPWRCFG_R_SRAMPM_STANDBY    (0x00000001)
#define SYSCTL_DSLPPWRCFG_R_SRAMPM_LPWR       (0x00000003)

#define SYSCTL_DSLPPWRCFG_SRAMPM_MASK       (0x00000003)
#define SYSCTL_DSLPPWRCFG_SRAMPM_ACTIVE     (0x00000000)
#define SYSCTL_DSLPPWRCFG_SRAMPM_STANDBY    (0x00000001)
#define SYSCTL_DSLPPWRCFG_SRAMPM_LPWR       (0x00000003)
//--------

//--------
#define SYSCTL_DSLPPWRCFG_R_FLASHPM_MASK       (0x00000030)
#define SYSCTL_DSLPPWRCFG_R_FLASHPM_BIT        (4)
#define SYSCTL_DSLPPWRCFG_R_FLASHPM_ACTIVE     (0x00000000)
#define SYSCTL_DSLPPWRCFG_R_FLASHPM_LPWR       (0x00000020)

#define SYSCTL_DSLPPWRCFG_FLASHPM_MASK       (0x00000003)
#define SYSCTL_DSLPPWRCFG_FLASHPM_ACTIVE     (0x00000000)
#define SYSCTL_DSLPPWRCFG_FLASHPM_LPWR       (0x00000002)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 42 DC9 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DC9_OFFSET     (0x0190)
#define SYSCTL_DC9            (((DC9_TypeDef*)(SYSCTL_BASE+SYSCTL_DC9_OFFSET )))
#define SYSCTL_DC9_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DC9_OFFSET)))


//--------
#define SYSCTL_DC9_R_DCADC0DC0_MASK       (0x00000001)
#define SYSCTL_DC9_R_DCADC0DC0_BIT        (0)
#define SYSCTL_DC9_R_DCADC0DC0_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_R_DCADC0DC0_PRESENT    (0x00000001)

#define SYSCTL_DC9_DCADC0DC0_MASK       (0x00000001)
#define SYSCTL_DC9_DCADC0DC0_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_DCADC0DC0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC9_R_DCADC0DC1_MASK       (0x00000002)
#define SYSCTL_DC9_R_DCADC0DC1_BIT        (1)
#define SYSCTL_DC9_R_DCADC0DC1_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_R_DCADC0DC1_PRESENT    (0x00000002)

#define SYSCTL_DC9_DCADC0DC1_MASK       (0x00000001)
#define SYSCTL_DC9_DCADC0DC1_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_DCADC0DC1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC9_R_DCADC0DC2_MASK       (0x00000004)
#define SYSCTL_DC9_R_DCADC0DC2_BIT        (2)
#define SYSCTL_DC9_R_DCADC0DC2_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_R_DCADC0DC2_PRESENT    (0x00000004)

#define SYSCTL_DC9_DCADC0DC2_MASK       (0x00000001)
#define SYSCTL_DC9_DCADC0DC2_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_DCADC0DC2_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC9_R_DCADC0DC3_MASK       (0x00000008)
#define SYSCTL_DC9_R_DCADC0DC3_BIT        (3)
#define SYSCTL_DC9_R_DCADC0DC3_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_R_DCADC0DC3_PRESENT    (0x00000008)

#define SYSCTL_DC9_DCADC0DC3_MASK       (0x00000001)
#define SYSCTL_DC9_DCADC0DC3_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_DCADC0DC3_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC9_R_DCADC0DC4_MASK       (0x00000010)
#define SYSCTL_DC9_R_DCADC0DC4_BIT        (4)
#define SYSCTL_DC9_R_DCADC0DC4_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_R_DCADC0DC4_PRESENT    (0x00000010)

#define SYSCTL_DC9_DCADC0DC4_MASK       (0x00000001)
#define SYSCTL_DC9_DCADC0DC4_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_DCADC0DC4_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC9_R_DCADC0DC5_MASK       (0x00000020)
#define SYSCTL_DC9_R_DCADC0DC5_BIT        (5)
#define SYSCTL_DC9_R_DCADC0DC5_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_R_DCADC0DC5_PRESENT    (0x00000020)

#define SYSCTL_DC9_DCADC0DC5_MASK       (0x00000001)
#define SYSCTL_DC9_DCADC0DC5_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_DCADC0DC5_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC9_R_DCADC0DC6_MASK       (0x00000040)
#define SYSCTL_DC9_R_DCADC0DC6_BIT        (6)
#define SYSCTL_DC9_R_DCADC0DC6_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_R_DCADC0DC6_PRESENT    (0x00000040)

#define SYSCTL_DC9_DCADC0DC6_MASK       (0x00000001)
#define SYSCTL_DC9_DCADC0DC6_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_DCADC0DC6_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC9_R_DCADC0DC7_MASK       (0x00000080)
#define SYSCTL_DC9_R_DCADC0DC7_BIT        (7)
#define SYSCTL_DC9_R_DCADC0DC7_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_R_DCADC0DC7_PRESENT    (0x00000080)

#define SYSCTL_DC9_DCADC0DC7_MASK       (0x00000001)
#define SYSCTL_DC9_DCADC0DC7_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_DCADC0DC7_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC9_R_DCADC1DC0_MASK       (0x00010000)
#define SYSCTL_DC9_R_DCADC1DC0_BIT        (16)
#define SYSCTL_DC9_R_DCADC1DC0_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_R_DCADC1DC0_PRESENT    (0x00010000)

#define SYSCTL_DC9_DCADC1DC0_MASK       (0x00000001)
#define SYSCTL_DC9_DCADC1DC0_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_DCADC1DC0_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC9_R_DCADC1DC1_MASK       (0x00020000)
#define SYSCTL_DC9_R_DCADC1DC1_BIT        (17)
#define SYSCTL_DC9_R_DCADC1DC1_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_R_DCADC1DC1_PRESENT    (0x00020000)

#define SYSCTL_DC9_DCADC1DC1_MASK       (0x00000001)
#define SYSCTL_DC9_DCADC1DC1_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_DCADC1DC1_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC9_R_DCADC1DC2_MASK       (0x00040000)
#define SYSCTL_DC9_R_DCADC1DC2_BIT        (18)
#define SYSCTL_DC9_R_DCADC1DC2_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_R_DCADC1DC2_PRESENT    (0x00040000)

#define SYSCTL_DC9_DCADC1DC2_MASK       (0x00000001)
#define SYSCTL_DC9_DCADC1DC2_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_DCADC1DC2_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC9_R_DCADC1DC3_MASK       (0x00080000)
#define SYSCTL_DC9_R_DCADC1DC3_BIT        (19)
#define SYSCTL_DC9_R_DCADC1DC3_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_R_DCADC1DC3_PRESENT    (0x00080000)

#define SYSCTL_DC9_DCADC1DC3_MASK       (0x00000001)
#define SYSCTL_DC9_DCADC1DC3_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_DCADC1DC3_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC9_R_DCADC1DC4_MASK       (0x00100000)
#define SYSCTL_DC9_R_DCADC1DC4_BIT        (20)
#define SYSCTL_DC9_R_DCADC1DC4_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_R_DCADC1DC4_PRESENT    (0x00100000)

#define SYSCTL_DC9_DCADC1DC4_MASK       (0x00000001)
#define SYSCTL_DC9_DCADC1DC4_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_DCADC1DC4_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC9_R_DCADC1DC5_MASK       (0x00200000)
#define SYSCTL_DC9_R_DCADC1DC5_BIT        (21)
#define SYSCTL_DC9_R_DCADC1DC5_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_R_DCADC1DC5_PRESENT    (0x00200000)

#define SYSCTL_DC9_DCADC1DC5_MASK       (0x00000001)
#define SYSCTL_DC9_DCADC1DC5_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_DCADC1DC5_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC9_R_DCADC1DC6_MASK       (0x00400000)
#define SYSCTL_DC9_R_DCADC1DC6_BIT        (22)
#define SYSCTL_DC9_R_DCADC1DC6_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_R_DCADC1DC6_PRESENT    (0x00400000)

#define SYSCTL_DC9_DCADC1DC6_MASK       (0x00000001)
#define SYSCTL_DC9_DCADC1DC6_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_DCADC1DC6_PRESENT    (0x00000001)
//--------

//--------
#define SYSCTL_DC9_R_DCADC1DC7_MASK       (0x00800000)
#define SYSCTL_DC9_R_DCADC1DC7_BIT        (23)
#define SYSCTL_DC9_R_DCADC1DC7_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_R_DCADC1DC7_PRESENT    (0x00800000)

#define SYSCTL_DC9_DCADC1DC7_MASK       (0x00000001)
#define SYSCTL_DC9_DCADC1DC7_NOPRESENT  (0x00000000)
#define SYSCTL_DC9_DCADC1DC7_PRESENT    (0x00000001)
//--------
#define SYSCTL_DC9_DCADC0DC0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32)+(0*4))))
#define SYSCTL_DC9_DCADC0DC1_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32)+(1*4))))
#define SYSCTL_DC9_DCADC0DC2_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32)+(2*4))))
#define SYSCTL_DC9_DCADC0DC3_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32)+(3*4))))
#define SYSCTL_DC9_DCADC0DC4_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32)+(4*4))))
#define SYSCTL_DC9_DCADC0DC5_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32)+(5*4))))
#define SYSCTL_DC9_DCADC0DC6_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32)+(6*4))))
#define SYSCTL_DC9_DCADC0DC7_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32)+(7*4))))
#define SYSCTL_DC9_DCADC1DC0_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32)+(16*4))))
#define SYSCTL_DC9_DCADC1DC1_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32)+(17*4))))
#define SYSCTL_DC9_DCADC1DC2_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32)+(18*4))))
#define SYSCTL_DC9_DCADC1DC3_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32)+(19*4))))
#define SYSCTL_DC9_DCADC1DC4_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32)+(20*4))))
#define SYSCTL_DC9_DCADC1DC5_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32)+(21*4))))
#define SYSCTL_DC9_DCADC1DC6_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32)+(22*4))))
#define SYSCTL_DC9_DCADC1DC7_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DC9_OFFSET)*32)+(23*4))))





////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 43 NVMSTAT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_NVMSTAT_OFFSET     (0x01A0)
#define SYSCTL_NVMSTAT            (((NVMSTAT_TypeDef*)(SYSCTL_BASE+SYSCTL_NVMSTAT_OFFSET )))
#define SYSCTL_NVMSTAT_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_NVMSTAT_OFFSET)))

//--------
#define SYSCTL_NVMSTAT_R_FWB_MASK       (0x00000001)
#define SYSCTL_NVMSTAT_R_FWB_BIT        (0)
#define SYSCTL_NVMSTAT_R_FWB_NOPRESENT  (0x00000000)
#define SYSCTL_NVMSTAT_R_FWB_PRESENT    (0x00000001)

#define SYSCTL_NVMSTAT_FWB_MASK       (0x00000001)
#define SYSCTL_NVMSTAT_FWB_NOPRESENT  (0x00000000)
#define SYSCTL_NVMSTAT_FWB_PRESENT    (0x00000001)
//--------

#define SYSCTL_NVMSTAT_FWB_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_NVMSTAT_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////44 LDOSPCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_LDOSPCTL_OFFSET     (0x01B4)
#define SYSCTL_LDOSPCTL            (((LDOSPCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_LDOSPCTL_OFFSET )))
#define SYSCTL_LDOSPCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_LDOSPCTL_OFFSET)))

//--------
#define SYSCTL_LDOSPCTL_R_VLDO_MASK       (0x000000FF)
#define SYSCTL_LDOSPCTL_R_VLDO_BIT        (0)
#define SYSCTL_LDOSPCTL_R_VLDO_900mV      (0x00000012)
#define SYSCTL_LDOSPCTL_R_VLDO_950mV      (0x00000013)
#define SYSCTL_LDOSPCTL_R_VLDO_1000mV     (0x00000014)
#define SYSCTL_LDOSPCTL_R_VLDO_1050mV     (0x00000015)
#define SYSCTL_LDOSPCTL_R_VLDO_1100mV     (0x00000016)
#define SYSCTL_LDOSPCTL_R_VLDO_1150mV     (0x00000017)
#define SYSCTL_LDOSPCTL_R_VLDO_1200mV     (0x00000018)

#define SYSCTL_LDOSPCTL_VLDO_MASK       (0x000000FF)
#define SYSCTL_LDOSPCTL_VLDO_900mV      (0x00000012)
#define SYSCTL_LDOSPCTL_VLDO_950mV      (0x00000013)
#define SYSCTL_LDOSPCTL_VLDO_1000mV     (0x00000014)
#define SYSCTL_LDOSPCTL_VLDO_1050mV     (0x00000015)
#define SYSCTL_LDOSPCTL_VLDO_1100mV     (0x00000016)
#define SYSCTL_LDOSPCTL_VLDO_1150mV     (0x00000017)
#define SYSCTL_LDOSPCTL_VLDO_1200mV     (0x00000018)
//--------

//--------
#define SYSCTL_LDOSPCTL_R_VADJEN_MASK       (0x80000000)
#define SYSCTL_LDOSPCTL_R_VADJEN_BIT        (31)
#define SYSCTL_LDOSPCTL_R_VADJEN_DIS        (0x00000000)
#define SYSCTL_LDOSPCTL_R_VADJEN_EN         (0x80000000)

#define SYSCTL_LDOSPCTL_VADJEN_MASK       (0x00000001)
#define SYSCTL_LDOSPCTL_VADJEN_DIS        (0x00000000)
#define SYSCTL_LDOSPCTL_VADJEN_EN         (0x00000001)
//--------

#define SYSCTL_LDOSPCTL_VADJEN_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_LDOSPCTL_OFFSET)*32)+(31*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////45 LDOSPCAL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_LDOSPCAL_OFFSET     (0x01B8)
#define SYSCTL_LDOSPCAL            (((LDOSPCAL_TypeDef*)(SYSCTL_BASE+SYSCTL_LDOSPCAL_OFFSET )))
#define SYSCTL_LDOSPCAL_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_LDOSPCAL_OFFSET)))

//--------
#define SYSCTL_LDOSPCAL_R_NOPLL_MASK       (0x000000FF)
#define SYSCTL_LDOSPCAL_R_NOPLL_BIT        (0)

#define SYSCTL_LDOSPCAL_NOPLL_MASK       (0x000000FF)
//--------

//--------
#define SYSCTL_LDOSPCAL_R_WITHPLL_MASK       (0x0000FF00)
#define SYSCTL_LDOSPCAL_R_WITHPLL_BIT        (8)

#define SYSCTL_LDOSPCAL_WITHPLL_MASK       (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////46 LDODPCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_LDODPCTL_OFFSET     (0x01BC)
#define SYSCTL_LDODPCTL            (((LDODPCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_LDODPCTL_OFFSET )))
#define SYSCTL_LDODPCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_LDODPCTL_OFFSET)))

//--------
#define SYSCTL_LDODPCTL_R_VLDO_MASK       (0x000000FF)
#define SYSCTL_LDODPCTL_R_VLDO_BIT        (0)
#define SYSCTL_LDODPCTL_R_VLDO_900mV      (0x00000012)
#define SYSCTL_LDODPCTL_R_VLDO_950mV      (0x00000013)
#define SYSCTL_LDODPCTL_R_VLDO_1000mV     (0x00000014)
#define SYSCTL_LDODPCTL_R_VLDO_1050mV     (0x00000015)
#define SYSCTL_LDODPCTL_R_VLDO_1100mV     (0x00000016)
#define SYSCTL_LDODPCTL_R_VLDO_1150mV     (0x00000017)
#define SYSCTL_LDODPCTL_R_VLDO_1200mV     (0x00000018)

#define SYSCTL_LDODPCTL_VLDO_MASK       (0x000000FF)
#define SYSCTL_LDODPCTL_VLDO_900mV      (0x00000012)
#define SYSCTL_LDODPCTL_VLDO_950mV      (0x00000013)
#define SYSCTL_LDODPCTL_VLDO_1000mV     (0x00000014)
#define SYSCTL_LDODPCTL_VLDO_1050mV     (0x00000015)
#define SYSCTL_LDODPCTL_VLDO_1100mV     (0x00000016)
#define SYSCTL_LDODPCTL_VLDO_1150mV     (0x00000017)
#define SYSCTL_LDODPCTL_VLDO_1200mV     (0x00000018)
//--------

//--------
#define SYSCTL_LDODPCTL_R_VADJEN_MASK       (0x80000000)
#define SYSCTL_LDODPCTL_R_VADJEN_BIT        (31)
#define SYSCTL_LDODPCTL_R_VADJEN_DIS        (0x00000000)
#define SYSCTL_LDODPCTL_R_VADJEN_EN         (0x80000000)

#define SYSCTL_LDODPCTL_VADJEN_MASK       (0x00000001)
#define SYSCTL_LDODPCTL_VADJEN_DIS        (0x00000000)
#define SYSCTL_LDODPCTL_VADJEN_EN         (0x00000001)
//--------

#define SYSCTL_LDODPCTL_VADJEN_BB       (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_LDODPCTL_OFFSET)*32)+(31*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////47 LDODPCAL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define SYSCTL_LDODPCAL_OFFSET     (0x01C0)
#define SYSCTL_LDODPCAL            (((LDODPCAL_TypeDef*)(SYSCTL_BASE+SYSCTL_LDODPCAL_OFFSET )))
#define SYSCTL_LDODPCAL_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_LDODPCAL_OFFSET)))

//--------
#define SYSCTL_LDODPCAL_R_30KHZ_MASK       (0x000000FF)
#define SYSCTL_LDODPCAL_R_30KHZ_BIT        (0)

#define SYSCTL_LDODPCAL_30KHZ_MASK         (0x000000FF)
//--------

//--------
#define SYSCTL_LDODPCAL_R_NOPLL_MASK       (0x0000FF00)
#define SYSCTL_LDODPCAL_R_NOPLL_BIT        (8)

#define SYSCTL_LDODPCAL_NOPLL_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////48 SDPMST ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_SDPMST_OFFSET     (0x01CC)
#define SYSCTL_SDPMST            (((SDPMST_TypeDef*)(SYSCTL_BASE+SYSCTL_SDPMSTL_OFFSET )))
#define SYSCTL_SDPMST_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_SDPMST_OFFSET)))

//--------
#define SYSCTL_SDPMST_R_SPDERR_MASK       (0x00000001)
#define SYSCTL_SDPMST_R_SPDERR_BIT        (0)
#define SYSCTL_SDPMST_R_SPDERR_NOERROR    (0x00000000)
#define SYSCTL_SDPMST_R_SPDERR_ERROR      (0x00000001)

#define SYSCTL_SDPMST_SPDERR_MASK       (0x00000001)
#define SYSCTL_SDPMST_SPDERR_NOERROR    (0x00000000)
#define SYSCTL_SDPMST_SPDERR_ERROR      (0x00000001)
//--------

//--------
#define SYSCTL_SDPMST_R_FPDERR_MASK       (0x00000002)
#define SYSCTL_SDPMST_R_FPDERR_BIT        (1)
#define SYSCTL_SDPMST_R_FPDERR_NOERROR    (0x00000000)
#define SYSCTL_SDPMST_R_FPDERR_ERROR      (0x00000002)

#define SYSCTL_SDPMST_FPDERR_MASK       (0x00000001)
#define SYSCTL_SDPMST_FPDERR_NOERROR    (0x00000000)
#define SYSCTL_SDPMST_FPDERR_ERROR      (0x00000001)
//--------

//--------
#define SYSCTL_SDPMST_R_PPDERR_MASK       (0x00000004)
#define SYSCTL_SDPMST_R_PPDERR_BIT        (2)
#define SYSCTL_SDPMST_R_PPDERR_NOERROR    (0x00000000)
#define SYSCTL_SDPMST_R_PPDERR_ERROR      (0x00000004)

#define SYSCTL_SDPMST_PPDERR_MASK       (0x00000001)
#define SYSCTL_SDPMST_PPDERR_NOERROR    (0x00000000)
#define SYSCTL_SDPMST_PPDERR_ERROR      (0x00000001)
//--------

//--------
#define SYSCTL_SDPMST_R_LDMINERR_MASK       (0x00000008)
#define SYSCTL_SDPMST_R_LDMINERR_BIT        (3)
#define SYSCTL_SDPMST_R_LDMINERR_NOERROR    (0x00000000)
#define SYSCTL_SDPMST_R_LDMINERR_ERROR      (0x00000008)

#define SYSCTL_SDPMST_LDMINERR_MASK       (0x00000001)
#define SYSCTL_SDPMST_LDMINERR_NOERROR    (0x00000000)
#define SYSCTL_SDPMST_LDMINERR_ERROR      (0x00000001)
//--------

//--------
#define SYSCTL_SDPMST_R_LSMINERR_MASK       (0x00000010)
#define SYSCTL_SDPMST_R_LSMINERR_BIT        (4)
#define SYSCTL_SDPMST_R_LSMINERR_NOERROR    (0x00000000)
#define SYSCTL_SDPMST_R_LSMINERR_ERROR      (0x00000010)

#define SYSCTL_SDPMST_LSMINERR_MASK       (0x00000001)
#define SYSCTL_SDPMST_LSMINERR_NOERROR    (0x00000000)
#define SYSCTL_SDPMST_LSMINERR_ERROR      (0x00000001)
//--------

//--------
#define SYSCTL_SDPMST_R_LMAXERR_MASK       (0x00000040)
#define SYSCTL_SDPMST_R_LMAXERR_BIT        (6)
#define SYSCTL_SDPMST_R_LMAXERR_NOERROR    (0x00000000)
#define SYSCTL_SDPMST_R_LMAXERR_ERROR      (0x00000040)

#define SYSCTL_SDPMST_LMAXERR_MASK       (0x00000001)
#define SYSCTL_SDPMST_LMAXERR_NOERROR    (0x00000000)
#define SYSCTL_SDPMST_LMAXERR_ERROR      (0x00000001)
//--------

//--------
#define SYSCTL_SDPMST_R_PPDW_MASK       (0x00000080)
#define SYSCTL_SDPMST_R_PPDW_BIT        (7)
#define SYSCTL_SDPMST_R_PPDW_NOERROR    (0x00000000)
#define SYSCTL_SDPMST_R_PPDW_ERROR      (0x00000080)

#define SYSCTL_SDPMST_PPDW_MASK       (0x00000001)
#define SYSCTL_SDPMST_PPDW_NOERROR    (0x00000000)
#define SYSCTL_SDPMST_PPDW_ERROR      (0x00000001)
//--------

//--------
#define SYSCTL_SDPMST_R_PRACT_MASK        (0x00010000)
#define SYSCTL_SDPMST_R_PRACT_BIT         (16)
#define SYSCTL_SDPMST_R_PRACT_NOACTIVE    (0x00000000)
#define SYSCTL_SDPMST_R_PRACT_ACTIVE      (0x00010000)

#define SYSCTL_SDPMST_PRACT_MASK        (0x00000001)
#define SYSCTL_SDPMST_PRACT_NOACTIVE    (0x00000000)
#define SYSCTL_SDPMST_PRACT_ACTIVE      (0x00000001)
//--------

//--------
#define SYSCTL_SDPMST_R_LOWPWR_MASK        (0x00020000)
#define SYSCTL_SDPMST_R_LOWPWR_BIT         (17)
#define SYSCTL_SDPMST_R_LOWPWR_RUN         (0x00000000)
#define SYSCTL_SDPMST_R_LOWPWR_SLEEP       (0x00020000)

#define SYSCTL_SDPMST_LOWPWR_MASK        (0x00000001)
#define SYSCTL_SDPMST_LOWPWR_RUN         (0x00000000)
#define SYSCTL_SDPMST_LOWPWR_SLEEP       (0x00000001)
//--------

//--------
#define SYSCTL_SDPMST_R_FLASHLP_MASK        (0x00040000)
#define SYSCTL_SDPMST_R_FLASHLP_BIT         (18)
#define SYSCTL_SDPMST_R_FLASHLP_NOACTIVE    (0x00000000)
#define SYSCTL_SDPMST_R_FLASHLP_ACTIVE      (0x00040000)

#define SYSCTL_SDPMST_FLASHLP_MASK        (0x00000001)
#define SYSCTL_SDPMST_FLASHLP_NOACTIVE    (0x00000000)
#define SYSCTL_SDPMST_FLASHLP_ACTIVE      (0x00000001)
//--------

//--------
#define SYSCTL_SDPMST_R_LDOUA_MASK          (0x00080000)
#define SYSCTL_SDPMST_R_LDOUA_BIT           (19)
#define SYSCTL_SDPMST_R_LDOUA_NOCHANGING    (0x00000000)
#define SYSCTL_SDPMST_R_LDOUA_CHANGiNG      (0x00080000)

#define SYSCTL_SDPMST_LDOUA_MASK          (0x00000001)
#define SYSCTL_SDPMST_LDOUA_NOCHANGING    (0x00000000)
#define SYSCTL_SDPMST_LDOUA_CHANGING      (0x00000001)
//--------


#define SYSCTL_SDPMST_SPDERR_BB   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(0*4))))
#define SYSCTL_SDPMST_FPDERR_BB   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(1*4))))
#define SYSCTL_SDPMST_PPDERR_BB   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(2*4))))
#define SYSCTL_SDPMST_LDMINERR_BB (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(3*4))))
#define SYSCTL_SDPMST_LSMINERR_BB (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(4*4))))
#define SYSCTL_SDPMST_LMAXERR_BB  (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(6*4))))
#define SYSCTL_SDPMST_PPDW_BB     (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(7*4))))
#define SYSCTL_SDPMST_PRACT_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(16*4))))
#define SYSCTL_SDPMST_LOWPWR_BB   (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(17*4))))
#define SYSCTL_SDPMST_FLASHLP_BB  (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(18*4))))
#define SYSCTL_SDPMST_LDOUA_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(19*4))))





















//ToDo

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////49 PPWD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////




#define SYSCTL_PPWD_OFFSET     (0x0300)
#define SYSCTL_PPWD            (((PPWD_TypeDef*)(SYSCTL_BASE+SYSCTL_PPWD_OFFSET )))
#define SYSCTL_PPWD_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPWD_OFFSET)))

//--------
#define SYSCTL_PPWD_R_PPWDT0_MASK          (0x00000001)
#define SYSCTL_PPWD_R_PPWDT0_BIT           (0)
#define SYSCTL_PPWD_R_PPWDT0_NOPRESENT     (0x00000000)
#define SYSCTL_PPWD_R_PPWDT0_PRESENT       (0x00000001)

#define SYSCTL_PPWD_PPWDT0_MASK         (0x00000001)
#define SYSCTL_PPWD_PPWDT0_NOPRESENT    (0x00000000)
#define SYSCTL_PPWD_PPWDT0_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPWD_R_PPWDT1_MASK          (0x00000002)
#define SYSCTL_PPWD_R_PPWDT1_BIT           (1)
#define SYSCTL_PPWD_R_PPWDT1_NOPRESENT     (0x00000000)
#define SYSCTL_PPWD_R_PPWDT1_PRESENT       (0x00000002)

#define SYSCTL_PPWD_PPWDT1_MASK         (0x00000001)
#define SYSCTL_PPWD_PPWDT1_NOPRESENT    (0x00000000)
#define SYSCTL_PPWD_PPWDT1_PRESENT      (0x00000001)
//--------

#define SYSCTL_PPWD_PPWDT0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPWD_OFFSET)*32)+(0*4))))
#define SYSCTL_PPWD_PPWDT1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPWD_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////50 PPTIMER ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_PPTIMER_OFFSET     (0x0304)
#define SYSCTL_PPTIMER            (((PPTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_PPTIMER_OFFSET )))
#define SYSCTL_PPTIMER_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPTIMER_OFFSET)))

//--------
#define SYSCTL_PPTIMER_R_PPTIMER0_MASK          (0x00000001)
#define SYSCTL_PPTIMER_R_PPTIMER0_BIT           (0)
#define SYSCTL_PPTIMER_R_PPTIMER0_NOPRESENT     (0x00000000)
#define SYSCTL_PPTIMER_R_PPTIMER0_PRESENT       (0x00000001)

#define SYSCTL_PPTIMER_PPTIMER0_MASK         (0x00000001)
#define SYSCTL_PPTIMER_PPTIMER0_NOPRESENT    (0x00000000)
#define SYSCTL_PPTIMER_PPTIMER0_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPTIMER_R_PPTIMER1_MASK          (0x00000002)
#define SYSCTL_PPTIMER_R_PPTIMER1_BIT           (1)
#define SYSCTL_PPTIMER_R_PPTIMER1_NOPRESENT     (0x00000000)
#define SYSCTL_PPTIMER_R_PPTIMER1_PRESENT       (0x00000002)

#define SYSCTL_PPTIMER_PPTIMER1_MASK         (0x00000001)
#define SYSCTL_PPTIMER_PPTIMER1_NOPRESENT    (0x00000000)
#define SYSCTL_PPTIMER_PPTIMER1_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPTIMER_R_PPTIMER2_MASK          (0x00000004)
#define SYSCTL_PPTIMER_R_PPTIMER2_BIT           (2)
#define SYSCTL_PPTIMER_R_PPTIMER2_NOPRESENT     (0x00000000)
#define SYSCTL_PPTIMER_R_PPTIMER2_PRESENT       (0x00000004)

#define SYSCTL_PPTIMER_PPTIMER2_MASK         (0x00000001)
#define SYSCTL_PPTIMER_PPTIMER2_NOPRESENT    (0x00000000)
#define SYSCTL_PPTIMER_PPTIMER2_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPTIMER_R_PPTIMER3_MASK          (0x00000008)
#define SYSCTL_PPTIMER_R_PPTIMER3_BIT           (3)
#define SYSCTL_PPTIMER_R_PPTIMER3_NOPRESENT     (0x00000000)
#define SYSCTL_PPTIMER_R_PPTIMER3_PRESENT       (0x00000008)

#define SYSCTL_PPTIMER_PPTIMER3_MASK         (0x00000001)
#define SYSCTL_PPTIMER_PPTIMER3_NOPRESENT    (0x00000000)
#define SYSCTL_PPTIMER_PPTIMER3_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPTIMER_R_PPTIMER4_MASK          (0x00000010)
#define SYSCTL_PPTIMER_R_PPTIMER4_BIT           (4)
#define SYSCTL_PPTIMER_R_PPTIMER4_NOPRESENT     (0x00000000)
#define SYSCTL_PPTIMER_R_PPTIMER4_PRESENT       (0x00000010)

#define SYSCTL_PPTIMER_PPTIMER4_MASK         (0x00000001)
#define SYSCTL_PPTIMER_PPTIMER4_NOPRESENT    (0x00000000)
#define SYSCTL_PPTIMER_PPTIMER4_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPTIMER_R_PPTIMER5_MASK          (0x00000020)
#define SYSCTL_PPTIMER_R_PPTIMER5_BIT           (5)
#define SYSCTL_PPTIMER_R_PPTIMER5_NOPRESENT     (0x00000000)
#define SYSCTL_PPTIMER_R_PPTIMER5_PRESENT       (0x00000020)

#define SYSCTL_PPTIMER_PPTIMER5_MASK         (0x00000001)
#define SYSCTL_PPTIMER_PPTIMER5_NOPRESENT    (0x00000000)
#define SYSCTL_PPTIMER_PPTIMER5_PRESENT      (0x00000001)
//--------

#define SYSCTL_PPTIMER_PPTIMER0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_PPTIMER_PPTIMER1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_PPTIMER_PPTIMER2_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_PPTIMER_PPTIMER3_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_PPTIMER_PPTIMER4_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_PPTIMER_PPTIMER5_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32)+(5*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////51 PPGPIO ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PPGPIO_OFFSET     (0x0308)
#define SYSCTL_PPGPIO            (((PPGPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_PPGPIO_OFFSET )))
#define SYSCTL_PPGPIO_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPGPIO_OFFSET)))


//--------
#define SYSCTL_PPGPIO_R_PPGPIOA_MASK          (0x00000001)
#define SYSCTL_PPGPIO_R_PPGPIOA_BIT           (0)
#define SYSCTL_PPGPIO_R_PPGPIOA_NOPRESENT     (0x00000000)
#define SYSCTL_PPGPIO_R_PPGPIOA_PRESENT       (0x00000001)

#define SYSCTL_PPGPIO_PPGPIOA_MASK         (0x00000001)
#define SYSCTL_PPGPIO_PPGPIOA_NOPRESENT    (0x00000000)
#define SYSCTL_PPGPIO_PPGPIOA_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPGPIO_R_PPGPIOB_MASK          (0x00000002)
#define SYSCTL_PPGPIO_R_PPGPIOB_BIT           (1)
#define SYSCTL_PPGPIO_R_PPGPIOB_NOPRESENT     (0x00000000)
#define SYSCTL_PPGPIO_R_PPGPIOB_PRESENT       (0x00000002)

#define SYSCTL_PPGPIO_PPGPIOB_MASK         (0x00000001)
#define SYSCTL_PPGPIO_PPGPIOB_NOPRESENT    (0x00000000)
#define SYSCTL_PPGPIO_PPGPIOB_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPGPIO_R_PPGPIOC_MASK          (0x00000004)
#define SYSCTL_PPGPIO_R_PPGPIOC_BIT           (2)
#define SYSCTL_PPGPIO_R_PPGPIOC_NOPRESENT     (0x00000000)
#define SYSCTL_PPGPIO_R_PPGPIOC_PRESENT       (0x00000004)

#define SYSCTL_PPGPIO_PPGPIOC_MASK         (0x00000001)
#define SYSCTL_PPGPIO_PPGPIOC_NOPRESENT    (0x00000000)
#define SYSCTL_PPGPIO_PPGPIOC_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPGPIO_R_PPGPIOD_MASK          (0x00000008)
#define SYSCTL_PPGPIO_R_PPGPIOD_BIT           (3)
#define SYSCTL_PPGPIO_R_PPGPIOD_NOPRESENT     (0x00000000)
#define SYSCTL_PPGPIO_R_PPGPIOD_PRESENT       (0x00000008)

#define SYSCTL_PPGPIO_PPGPIOD_MASK         (0x00000001)
#define SYSCTL_PPGPIO_PPGPIOD_NOPRESENT    (0x00000000)
#define SYSCTL_PPGPIO_PPGPIOD_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPGPIO_R_PPGPIOE_MASK          (0x00000010)
#define SYSCTL_PPGPIO_R_PPGPIOE_BIT           (4)
#define SYSCTL_PPGPIO_R_PPGPIOE_NOPRESENT     (0x00000000)
#define SYSCTL_PPGPIO_R_PPGPIOE_PRESENT       (0x00000010)

#define SYSCTL_PPGPIO_PPGPIOE_MASK         (0x00000001)
#define SYSCTL_PPGPIO_PPGPIOE_NOPRESENT    (0x00000000)
#define SYSCTL_PPGPIO_PPGPIOE_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPGPIO_R_PPGPIOF_MASK          (0x00000020)
#define SYSCTL_PPGPIO_R_PPGPIOF_BIT           (5)
#define SYSCTL_PPGPIO_R_PPGPIOF_NOPRESENT     (0x00000000)
#define SYSCTL_PPGPIO_R_PPGPIOF_PRESENT       (0x00000020)

#define SYSCTL_PPGPIO_PPGPIOF_MASK         (0x00000001)
#define SYSCTL_PPGPIO_PPGPIOF_NOPRESENT    (0x00000000)
#define SYSCTL_PPGPIO_PPGPIOF_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPGPIO_R_PPGPIOG_MASK          (0x00000040)
#define SYSCTL_PPGPIO_R_PPGPIOG_BIT           (6)
#define SYSCTL_PPGPIO_R_PPGPIOG_NOPRESENT     (0x00000000)
#define SYSCTL_PPGPIO_R_PPGPIOG_PRESENT       (0x00000040)

#define SYSCTL_PPGPIO_PPGPIOG_MASK         (0x00000001)
#define SYSCTL_PPGPIO_PPGPIOG_NOPRESENT    (0x00000000)
#define SYSCTL_PPGPIO_PPGPIOG_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPGPIO_R_PPGPIOH_MASK          (0x00000080)
#define SYSCTL_PPGPIO_R_PPGPIOH_BIT           (7)
#define SYSCTL_PPGPIO_R_PPGPIOH_NOPRESENT     (0x00000000)
#define SYSCTL_PPGPIO_R_PPGPIOH_PRESENT       (0x00000080)

#define SYSCTL_PPGPIO_PPGPIOH_MASK         (0x00000001)
#define SYSCTL_PPGPIO_PPGPIOH_NOPRESENT    (0x00000000)
#define SYSCTL_PPGPIO_PPGPIOH_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPGPIO_R_PPGPIOJ_MASK          (0x00000100)
#define SYSCTL_PPGPIO_R_PPGPIOJ_BIT           (8)
#define SYSCTL_PPGPIO_R_PPGPIOJ_NOPRESENT     (0x00000000)
#define SYSCTL_PPGPIO_R_PPGPIOJ_PRESENT       (0x00000100)

#define SYSCTL_PPGPIO_PPGPIOJ_MASK         (0x00000001)
#define SYSCTL_PPGPIO_PPGPIOJ_NOPRESENT    (0x00000000)
#define SYSCTL_PPGPIO_PPGPIOJ_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPGPIO_R_PPGPIOK_MASK          (0x00000200)
#define SYSCTL_PPGPIO_R_PPGPIOK_BIT           (9)
#define SYSCTL_PPGPIO_R_PPGPIOK_NOPRESENT     (0x00000000)
#define SYSCTL_PPGPIO_R_PPGPIOK_PRESENT       (0x00000200)

#define SYSCTL_PPGPIO_PPGPIOK_MASK         (0x00000001)
#define SYSCTL_PPGPIO_PPGPIOK_NOPRESENT    (0x00000000)
#define SYSCTL_PPGPIO_PPGPIOK_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPGPIO_R_PPGPIOL_MASK          (0x00000400)
#define SYSCTL_PPGPIO_R_PPGPIOL_BIT           (10)
#define SYSCTL_PPGPIO_R_PPGPIOL_NOPRESENT     (0x00000000)
#define SYSCTL_PPGPIO_R_PPGPIOL_PRESENT       (0x00000400)

#define SYSCTL_PPGPIO_PPGPIOL_MASK         (0x00000001)
#define SYSCTL_PPGPIO_PPGPIOL_NOPRESENT    (0x00000000)
#define SYSCTL_PPGPIO_PPGPIOL_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPGPIO_R_PPGPIOM_MASK          (0x00000800)
#define SYSCTL_PPGPIO_R_PPGPIOM_BIT           (11)
#define SYSCTL_PPGPIO_R_PPGPIOM_NOPRESENT     (0x00000000)
#define SYSCTL_PPGPIO_R_PPGPIOM_PRESENT       (0x00000800)

#define SYSCTL_PPGPIO_PPGPIOM_MASK         (0x00000001)
#define SYSCTL_PPGPIO_PPGPIOM_NOPRESENT    (0x00000000)
#define SYSCTL_PPGPIO_PPGPIOM_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPGPIO_R_PPGPION_MASK          (0x00001000)
#define SYSCTL_PPGPIO_R_PPGPION_BIT           (12)
#define SYSCTL_PPGPIO_R_PPGPION_NOPRESENT     (0x00000000)
#define SYSCTL_PPGPIO_R_PPGPION_PRESENT       (0x00001000)

#define SYSCTL_PPGPIO_PPGPION_MASK         (0x00000001)
#define SYSCTL_PPGPIO_PPGPION_NOPRESENT    (0x00000000)
#define SYSCTL_PPGPIO_PPGPION_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPGPIO_R_PPGPIOP_MASK          (0x00002000)
#define SYSCTL_PPGPIO_R_PPGPIOP_BIT           (13)
#define SYSCTL_PPGPIO_R_PPGPIOP_NOPRESENT     (0x00000000)
#define SYSCTL_PPGPIO_R_PPGPIOP_PRESENT       (0x00002000)

#define SYSCTL_PPGPIO_PPGPIOP_MASK         (0x00000001)
#define SYSCTL_PPGPIO_PPGPIOP_NOPRESENT    (0x00000000)
#define SYSCTL_PPGPIO_PPGPIOP_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPGPIO_R_PPGPIOQ_MASK          (0x00004000)
#define SYSCTL_PPGPIO_R_PPGPIOQ_BIT           (14)
#define SYSCTL_PPGPIO_R_PPGPIOQ_NOPRESENT     (0x00000000)
#define SYSCTL_PPGPIO_R_PPGPIOQ_PRESENT       (0x00004000)

#define SYSCTL_PPGPIO_PPGPIOQ_MASK         (0x00000001)
#define SYSCTL_PPGPIO_PPGPIOQ_NOPRESENT    (0x00000000)
#define SYSCTL_PPGPIO_PPGPIOQ_PRESENT      (0x00000001)
//--------

#define SYSCTL_PPGPIO_PPGPIOA_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(0*4))))
#define SYSCTL_PPGPIO_PPGPIOB_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(1*4))))
#define SYSCTL_PPGPIO_PPGPIOC_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(2*4))))
#define SYSCTL_PPGPIO_PPGPIOD_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(3*4))))
#define SYSCTL_PPGPIO_PPGPIOE_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(4*4))))
#define SYSCTL_PPGPIO_PPGPIOF_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(5*4))))
#define SYSCTL_PPGPIO_PPGPIOG_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(6*4))))
#define SYSCTL_PPGPIO_PPGPIOH_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(7*4))))
#define SYSCTL_PPGPIO_PPGPIOJ_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(8*4))))
#define SYSCTL_PPGPIO_PPGPIOK_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(9*4))))
#define SYSCTL_PPGPIO_PPGPIOL_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(10*4))))
#define SYSCTL_PPGPIO_PPGPIOM_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(11*4))))
#define SYSCTL_PPGPIO_PPGPION_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(12*4))))
#define SYSCTL_PPGPIO_PPGPIOP_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(13*4))))
#define SYSCTL_PPGPIO_PPGPIOQ_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(14*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////52 PPDMA ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_PPDMA_OFFSET     (0x030C)
#define SYSCTL_PPDMA            (((PPDMA_TypeDef*)(SYSCTL_BASE+SYSCTL_PPDMA_OFFSET )))
#define SYSCTL_PPDMA_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPDMA_OFFSET)))

//--------
#define SYSCTL_PPUDMA_R_PPUDMA_MASK          (0x00000001)
#define SYSCTL_PPUDMA_R_PPUDMA_BIT           (0)
#define SYSCTL_PPUDMA_R_PPUDMA_NOPRESENT     (0x00000000)
#define SYSCTL_PPUDMA_R_PPUDMA_PRESENT       (0x00000001)

#define SYSCTL_PPUDMA_PPUDMA_MASK         (0x00000001)
#define SYSCTL_PPUDMA_PPUDMA_NOPRESENT    (0x00000000)
#define SYSCTL_PPUDMA_PPUDMA_PRESENT      (0x00000001)
//--------

#define SYSCTL_PPDMA_PPUDMA_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPDMA_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////53 PPHIB ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PPHIB_OFFSET     (0x0314)
#define SYSCTL_PPHIB            (((PPHIB_TypeDef*)(SYSCTL_BASE+SYSCTL_PPHIB_OFFSET )))
#define SYSCTL_PPHIB_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPHIB_OFFSET)))

//--------
#define SYSCTL_PPHIB_R_PPHIB_MASK          (0x00000001)
#define SYSCTL_PPHIB_R_PPHIB_BIT           (0)
#define SYSCTL_PPHIB_R_PPHIB_NOPRESENT     (0x00000000)
#define SYSCTL_PPHIB_R_PPHIB_PRESENT       (0x00000001)

#define SYSCTL_PPHIB_PPHIB_MASK         (0x00000001)
#define SYSCTL_PPHIB_PPHIB_NOPRESENT    (0x00000000)
#define SYSCTL_PPHIB_PPHIB_PRESENT      (0x00000001)
//--------

#define SYSCTL_PPHIB_PPHIB_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPHIB_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////54 PPUART ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define SYSCTL_PPUART_OFFSET     (0x0318)
#define SYSCTL_PPUART            (((PPUART_TypeDef*)(SYSCTL_BASE+SYSCTL_PPUART_OFFSET )))
#define SYSCTL_PPUART_R          (*((volatile const  long *)(SYSCTL_BASE+SYSCTL_PPUART_OFFSET)))


//--------
#define SYSCTL_PPUART_R_PPUART0_MASK          (0x00000001)
#define SYSCTL_PPUART_R_PPUART0_BIT           (0)
#define SYSCTL_PPUART_R_PPUART0_NOPRESENT     (0x00000000)
#define SYSCTL_PPUART_R_PPUART0_PRESENT       (0x00000001)

#define SYSCTL_PPUART_PPUART0_MASK         (0x00000001)
#define SYSCTL_PPUART_PPUART0_NOPRESENT    (0x00000000)
#define SYSCTL_PPUART_PPUART0_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPUART_R_PPUART1_MASK          (0x00000002)
#define SYSCTL_PPUART_R_PPUART1_BIT           (1)
#define SYSCTL_PPUART_R_PPUART1_NOPRESENT     (0x00000000)
#define SYSCTL_PPUART_R_PPUART1_PRESENT       (0x00000002)

#define SYSCTL_PPUART_PPUART1_MASK         (0x00000001)
#define SYSCTL_PPUART_PPUART1_NOPRESENT    (0x00000000)
#define SYSCTL_PPUART_PPUART1_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPUART_R_PPUART2_MASK          (0x00000004)
#define SYSCTL_PPUART_R_PPUART2_BIT           (2)
#define SYSCTL_PPUART_R_PPUART2_NOPRESENT     (0x00000000)
#define SYSCTL_PPUART_R_PPUART2_PRESENT       (0x00000004)

#define SYSCTL_PPUART_PPUART2_MASK         (0x00000001)
#define SYSCTL_PPUART_PPUART2_NOPRESENT    (0x00000000)
#define SYSCTL_PPUART_PPUART2_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPUART_R_PPUART3_MASK          (0x00000008)
#define SYSCTL_PPUART_R_PPUART3_BIT           (3)
#define SYSCTL_PPUART_R_PPUART3_NOPRESENT     (0x00000000)
#define SYSCTL_PPUART_R_PPUART3_PRESENT       (0x00000008)

#define SYSCTL_PPUART_PPUART3_MASK         (0x00000001)
#define SYSCTL_PPUART_PPUART3_NOPRESENT    (0x00000000)
#define SYSCTL_PPUART_PPUART3_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPUART_R_PPUART4_MASK          (0x00000010)
#define SYSCTL_PPUART_R_PPUART4_BIT           (4)
#define SYSCTL_PPUART_R_PPUART4_NOPRESENT     (0x00000000)
#define SYSCTL_PPUART_R_PPUART4_PRESENT       (0x00000010)

#define SYSCTL_PPUART_PPUART4_MASK         (0x00000001)
#define SYSCTL_PPUART_PPUART4_NOPRESENT    (0x00000000)
#define SYSCTL_PPUART_PPUART4_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPUART_R_PPUART5_MASK          (0x00000020)
#define SYSCTL_PPUART_R_PPUART5_BIT           (5)
#define SYSCTL_PPUART_R_PPUART5_NOPRESENT     (0x00000000)
#define SYSCTL_PPUART_R_PPUART5_PRESENT       (0x00000020)

#define SYSCTL_PPUART_PPUART5_MASK         (0x00000001)
#define SYSCTL_PPUART_PPUART5_NOPRESENT    (0x00000000)
#define SYSCTL_PPUART_PPUART5_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPUART_R_PPUART6_MASK          (0x00000040)
#define SYSCTL_PPUART_R_PPUART6_BIT           (6)
#define SYSCTL_PPUART_R_PPUART6_NOPRESENT     (0x00000000)
#define SYSCTL_PPUART_R_PPUART6_PRESENT       (0x00000040)

#define SYSCTL_PPUART_PPUART6_MASK         (0x00000001)
#define SYSCTL_PPUART_PPUART6_NOPRESENT    (0x00000000)
#define SYSCTL_PPUART_PPUART6_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPUART_R_PPUART7_MASK          (0x00000080)
#define SYSCTL_PPUART_R_PPUART7_BIT           (7)
#define SYSCTL_PPUART_R_PPUART7_NOPRESENT     (0x00000000)
#define SYSCTL_PPUART_R_PPUART7_PRESENT       (0x00000080)

#define SYSCTL_PPUART_PPUART7_MASK         (0x00000001)
#define SYSCTL_PPUART_PPUART7_NOPRESENT    (0x00000000)
#define SYSCTL_PPUART_PPUART7_PRESENT      (0x00000001)
//--------


#define SYSCTL_PPUART_PPUART0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(0*4))))
#define SYSCTL_PPUART_PPUART1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(1*4))))
#define SYSCTL_PPUART_PPUART2_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(2*4))))
#define SYSCTL_PPUART_PPUART3_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(3*4))))
#define SYSCTL_PPUART_PPUART4_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(4*4))))
#define SYSCTL_PPUART_PPUART5_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(5*4))))
#define SYSCTL_PPUART_PPUART6_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(6*4))))
#define SYSCTL_PPUART_PPUART7_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////55 PPSSI ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PPSSI_OFFSET     (0x031C)
#define SYSCTL_PPSSI            (((PPSSI_TypeDef*)(SYSCTL_BASE+SYSCTL_PPSSI_OFFSET )))
#define SYSCTL_PPSSI_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPSSI_OFFSET)))

//--------
#define SYSCTL_PPSSI_R_PPSSI0_MASK          (0x00000001)
#define SYSCTL_PPSSI_R_PPSSI0_BIT           (0)
#define SYSCTL_PPSSI_R_PPSSI0_NOPRESENT     (0x00000000)
#define SYSCTL_PPSSI_R_PPSSI0_PRESENT       (0x00000001)

#define SYSCTL_PPSSI_PPSSI0_MASK         (0x00000001)
#define SYSCTL_PPSSI_PPSSI0_NOPRESENT    (0x00000000)
#define SYSCTL_PPSSI_PPSSI0_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPSSI_R_PPSSI1_MASK          (0x00000002)
#define SYSCTL_PPSSI_R_PPSSI1_BIT           (1)
#define SYSCTL_PPSSI_R_PPSSI1_NOPRESENT     (0x00000000)
#define SYSCTL_PPSSI_R_PPSSI1_PRESENT       (0x00000002)

#define SYSCTL_PPSSI_PPSSI1_MASK         (0x00000001)
#define SYSCTL_PPSSI_PPSSI1_NOPRESENT    (0x00000000)
#define SYSCTL_PPSSI_PPSSI1_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPSSI_R_PPSSI2_MASK          (0x00000004)
#define SYSCTL_PPSSI_R_PPSSI2_BIT           (2)
#define SYSCTL_PPSSI_R_PPSSI2_NOPRESENT     (0x00000000)
#define SYSCTL_PPSSI_R_PPSSI2_PRESENT       (0x00000004)

#define SYSCTL_PPSSI_PPSSI2_MASK         (0x00000001)
#define SYSCTL_PPSSI_PPSSI2_NOPRESENT    (0x00000000)
#define SYSCTL_PPSSI_PPSSI2_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPSSI_R_PPSSI3_MASK          (0x00000008)
#define SYSCTL_PPSSI_R_PPSSI3_BIT           (3)
#define SYSCTL_PPSSI_R_PPSSI3_NOPRESENT     (0x00000000)
#define SYSCTL_PPSSI_R_PPSSI3_PRESENT       (0x00000008)

#define SYSCTL_PPSSI_PPSSI3_MASK         (0x00000001)
#define SYSCTL_PPSSI_PPSSI3_NOPRESENT    (0x00000000)
#define SYSCTL_PPSSI_PPSSI3_PRESENT      (0x00000001)
//--------


#define SYSCTL_PPSSI_PPSSI0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPSSI_OFFSET)*32)+(0*4))))
#define SYSCTL_PPSSI_PPSSI1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPSSI_OFFSET)*32)+(1*4))))
#define SYSCTL_PPSSI_PPSSI2_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPSSI_OFFSET)*32)+(2*4))))
#define SYSCTL_PPSSI_PPSSI3_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPSSI_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////56 PPI2C ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define SYSCTL_PPI2C_OFFSET     (0x0320)
#define SYSCTL_PPI2C            (((PPI2C_TypeDef*)(SYSCTL_BASE+SYSCTL_PPI2C_OFFSET )))
#define SYSCTL_PPI2C_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPI2C_OFFSET)))

//--------
#define SYSCTL_PPI2C_R_PPI2C0_MASK          (0x00000001)
#define SYSCTL_PPI2C_R_PPI2C0_BIT           (0)
#define SYSCTL_PPI2C_R_PPI2C0_NOPRESENT     (0x00000000)
#define SYSCTL_PPI2C_R_PPI2C0_PRESENT       (0x00000001)

#define SYSCTL_PPI2C_PPI2C0_MASK         (0x00000001)
#define SYSCTL_PPI2C_PPI2C0_NOPRESENT    (0x00000000)
#define SYSCTL_PPI2C_PPI2C0_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPI2C_R_PPI2C1_MASK          (0x00000002)
#define SYSCTL_PPI2C_R_PPI2C1_BIT           (1)
#define SYSCTL_PPI2C_R_PPI2C1_NOPRESENT     (0x00000000)
#define SYSCTL_PPI2C_R_PPI2C1_PRESENT       (0x00000002)

#define SYSCTL_PPI2C_PPI2C1_MASK         (0x00000001)
#define SYSCTL_PPI2C_PPI2C1_NOPRESENT    (0x00000000)
#define SYSCTL_PPI2C_PPI2C1_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPI2C_R_PPI2C2_MASK          (0x00000004)
#define SYSCTL_PPI2C_R_PPI2C2_BIT           (2)
#define SYSCTL_PPI2C_R_PPI2C2_NOPRESENT     (0x00000000)
#define SYSCTL_PPI2C_R_PPI2C2_PRESENT       (0x00000004)

#define SYSCTL_PPI2C_PPI2C2_MASK         (0x00000001)
#define SYSCTL_PPI2C_PPI2C2_NOPRESENT    (0x00000000)
#define SYSCTL_PPI2C_PPI2C2_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPI2C_R_PPI2C3_MASK          (0x00000008)
#define SYSCTL_PPI2C_R_PPI2C3_BIT           (3)
#define SYSCTL_PPI2C_R_PPI2C3_NOPRESENT     (0x00000000)
#define SYSCTL_PPI2C_R_PPI2C3_PRESENT       (0x00000008)

#define SYSCTL_PPI2C_PPI2C3_MASK         (0x00000001)
#define SYSCTL_PPI2C_PPI2C3_NOPRESENT    (0x00000000)
#define SYSCTL_PPI2C_PPI2C3_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPI2C_R_PPI2C4_MASK          (0x00000010)
#define SYSCTL_PPI2C_R_PPI2C4_BIT           (4)
#define SYSCTL_PPI2C_R_PPI2C4_NOPRESENT     (0x00000000)
#define SYSCTL_PPI2C_R_PPI2C4_PRESENT       (0x00000010)

#define SYSCTL_PPI2C_PPI2C4_MASK         (0x00000001)
#define SYSCTL_PPI2C_PPI2C4_NOPRESENT    (0x00000000)
#define SYSCTL_PPI2C_PPI2C4_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPI2C_R_PPI2C5_MASK          (0x00000020)
#define SYSCTL_PPI2C_R_PPI2C5_BIT           (5)
#define SYSCTL_PPI2C_R_PPI2C5_NOPRESENT     (0x00000000)
#define SYSCTL_PPI2C_R_PPI2C5_PRESENT       (0x00000020)

#define SYSCTL_PPI2C_PPI2C5_MASK         (0x00000001)
#define SYSCTL_PPI2C_PPI2C5_NOPRESENT    (0x00000000)
#define SYSCTL_PPI2C_PPI2C5_PRESENT      (0x00000001)
//--------

#define SYSCTL_PPI2C_PPI2C0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32)+(0*4))))
#define SYSCTL_PPI2C_PPI2C1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32)+(1*4))))
#define SYSCTL_PPI2C_PPI2C2_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32)+(2*4))))
#define SYSCTL_PPI2C_PPI2C3_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32)+(3*4))))
#define SYSCTL_PPI2C_PPI2C4_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32)+(4*4))))
#define SYSCTL_PPI2C_PPI2C5_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32)+(5*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////57 PPUSB ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_PPUSB_OFFSET     (0x0328)
#define SYSCTL_PPUSB            (((PPUSB_TypeDef*)(SYSCTL_BASE+SYSCTL_PPUSB_OFFSET )))
#define SYSCTL_PPUSB_R          (*((const volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPUSB_OFFSET)))

//--------
#define SYSCTL_PPUSB_R_PPUSB0_MASK          (0x00000001)
#define SYSCTL_PPUSB_R_PPUSB0_BIT           (0)
#define SYSCTL_PPUSB_R_PPUSB0_NOPRESENT     (0x00000000)
#define SYSCTL_PPUSB_R_PPUSB0_PRESENT       (0x00000001)

#define SYSCTL_PPUSB_PPUSB0_MASK         (0x00000001)
#define SYSCTL_PPUSB_PPUSB0_NOPRESENT    (0x00000000)
#define SYSCTL_PPUSB_PPUSB0_PRESENT      (0x00000001)
//--------

#define SYSCTL_PPUSB_PPUSB_BB    (*((const volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPUSB_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////58 PPCAN ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PPCAN_OFFSET     (0x0334)
#define SYSCTL_PPCAN            (((PPCAN_TypeDef*)(SYSCTL_BASE+SYSCTL_PPCAN_OFFSET )))
#define SYSCTL_PPCAN_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPCAN_OFFSET)))

//--------
#define SYSCTL_PPCAN_R_PPCAN0_MASK          (0x00000001)
#define SYSCTL_PPCAN_R_PPCAN0_BIT           (0)
#define SYSCTL_PPCAN_R_PPCAN0_NOPRESENT     (0x00000000)
#define SYSCTL_PPCAN_R_PPCAN0_PRESENT       (0x00000001)

#define SYSCTL_PPCAN_PPCAN0_MASK         (0x00000001)
#define SYSCTL_PPCAN_PPCAN0_NOPRESENT    (0x00000000)
#define SYSCTL_PPCAN_PPCAN0_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPCAN_R_PPCAN1_MASK          (0x00000002)
#define SYSCTL_PPCAN_R_PPCAN1_BIT           (1)
#define SYSCTL_PPCAN_R_PPCAN1_NOPRESENT     (0x00000000)
#define SYSCTL_PPCAN_R_PPCAN1_PRESENT       (0x00000002)

#define SYSCTL_PPCAN_PPCAN1_MASK         (0x00000001)
#define SYSCTL_PPCAN_PPCAN1_NOPRESENT    (0x00000000)
#define SYSCTL_PPCAN_PPCAN1_PRESENT      (0x00000001)
//--------

#define SYSCTL_PPCAN_PPCAN0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPCAN_OFFSET)*32)+(0*4))))
#define SYSCTL_PPCAN_PPCAN1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPCAN_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////59 PPADC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PPADC_OFFSET     (0x0338)
#define SYSCTL_PPADC            (((PPADC_TypeDef*)(SYSCTL_BASE+SYSCTL_PPADC_OFFSET )))
#define SYSCTL_PPADC_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPADC_OFFSET)))

//--------
#define SYSCTL_PPADC_R_PPADC0_MASK          (0x00000001)
#define SYSCTL_PPADC_R_PPADC0_BIT           (0)
#define SYSCTL_PPADC_R_PPADC0_NOPRESENT     (0x00000000)
#define SYSCTL_PPADC_R_PPADC0_PRESENT       (0x00000001)

#define SYSCTL_PPADC_PPADC0_MASK         (0x00000001)
#define SYSCTL_PPADC_PPADC0_NOPRESENT    (0x00000000)
#define SYSCTL_PPADC_PPADC0_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPADC_R_PPADC1_MASK          (0x00000002)
#define SYSCTL_PPADC_R_PPADC1_BIT           (1)
#define SYSCTL_PPADC_R_PPADC1_NOPRESENT     (0x00000000)
#define SYSCTL_PPADC_R_PPADC1_PRESENT       (0x00000002)

#define SYSCTL_PPADC_PPADC1_MASK         (0x00000001)
#define SYSCTL_PPADC_PPADC1_NOPRESENT    (0x00000000)
#define SYSCTL_PPADC_PPADC1_PRESENT      (0x00000001)
//--------

#define SYSCTL_PPADC_PPADC0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPADC_OFFSET)*32)+(0*4))))
#define SYSCTL_PPADC_PPADC1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPADC_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////60 PPACMP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PPACMP_OFFSET     (0x033C)
#define SYSCTL_PPACMP            (((PPACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_PPACMP_OFFSET )))
#define SYSCTL_PPACMP_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPACMP_OFFSET)))

//--------
#define SYSCTL_PPACMP_R_PPACMP0_MASK          (0x00000001)
#define SYSCTL_PPACMP_R_PPACMP0_BIT           (0)
#define SYSCTL_PPACMP_R_PPACMP0_NOPRESENT     (0x00000000)
#define SYSCTL_PPACMP_R_PPACMP0_PRESENT       (0x00000001)

#define SYSCTL_PPACMP_PPACMP0_MASK         (0x00000001)
#define SYSCTL_PPACMP_PPACMP0_NOPRESENT    (0x00000000)
#define SYSCTL_PPACMP_PPACMP0_PRESENT      (0x00000001)
//--------

#define SYSCTL_PPACMP_PPACMP_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPACMP_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////61 PPPWM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PPPWM_OFFSET     (0x0340)
#define SYSCTL_PPPWM            (((PPPWM_TypeDef*)(SYSCTL_BASE+SYSCTL_PPPWM_OFFSET )))
#define SYSCTL_PPPWM_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPPWM_OFFSET)))

//--------
#define SYSCTL_PPPWM_R_PPPWM0_MASK          (0x00000001)
#define SYSCTL_PPPWM_R_PPPWM0_BIT           (0)
#define SYSCTL_PPPWM_R_PPPWM0_NOPRESENT     (0x00000000)
#define SYSCTL_PPPWM_R_PPPWM0_PRESENT       (0x00000001)

#define SYSCTL_PPPWM_PPPWM0_MASK         (0x00000001)
#define SYSCTL_PPPWM_PPPWM0_NOPRESENT    (0x00000000)
#define SYSCTL_PPPWM_PPPWM0_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPPWM_R_PPPWM1_MASK          (0x00000002)
#define SYSCTL_PPPWM_R_PPPWM1_BIT           (1)
#define SYSCTL_PPPWM_R_PPPWM1_NOPRESENT     (0x00000000)
#define SYSCTL_PPPWM_R_PPPWM1_PRESENT       (0x00000002)

#define SYSCTL_PPPWM_PPPWM1_MASK         (0x00000001)
#define SYSCTL_PPPWM_PPPWM1_NOPRESENT    (0x00000000)
#define SYSCTL_PPPWM_PPPWM1_PRESENT      (0x00000001)
//--------

#define SYSCTL_PPPWM_PPPWM0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPPWM_OFFSET)*32)+(0*4))))
#define SYSCTL_PPPWM_PPPWM1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPPWM_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////62 PPQEI ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PPQEI_OFFSET     (0x0344)
#define SYSCTL_PPQEI            (((PPQEI_TypeDef*)(SYSCTL_BASE+SYSCTL_PPQEI_OFFSET )))
#define SYSCTL_PPQEI_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPQEI_OFFSET)))


//--------
#define SYSCTL_PPQEI_R_PPQEI0_MASK          (0x00000001)
#define SYSCTL_PPQEI_R_PPQEI0_BIT           (0)
#define SYSCTL_PPQEI_R_PPQEI0_NOPRESENT     (0x00000000)
#define SYSCTL_PPQEI_R_PPQEI0_PRESENT       (0x00000001)

#define SYSCTL_PPQEI_PPQEI0_MASK         (0x00000001)
#define SYSCTL_PPQEI_PPQEI0_NOPRESENT    (0x00000000)
#define SYSCTL_PPQEI_PPQEI0_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPQEI_R_PPQEI1_MASK          (0x00000002)
#define SYSCTL_PPQEI_R_PPQEI1_BIT           (1)
#define SYSCTL_PPQEI_R_PPQEI1_NOPRESENT     (0x00000000)
#define SYSCTL_PPQEI_R_PPQEI1_PRESENT       (0x00000002)

#define SYSCTL_PPQEI_PPQEI1_MASK         (0x00000001)
#define SYSCTL_PPQEI_PPQEI1_NOPRESENT    (0x00000000)
#define SYSCTL_PPQEI_PPQEI1_PRESENT      (0x00000001)
//--------

#define SYSCTL_PPQEI_PPQEI0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPQEI_OFFSET)*32)+(0*4))))
#define SYSCTL_PPQEI_PPQEI1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPQEI_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////63 PPEEPROM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PPEEPROM_OFFSET     (0x0358)
#define SYSCTL_PPEEPROM            (((PPEEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_PPEEPROM_OFFSET )))
#define SYSCTL_PPEEPROM_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPEEPROM_OFFSET)))

//--------
#define SYSCTL_PPEEPROM_R_PPEEPROM0_MASK          (0x00000001)
#define SYSCTL_PPEEPROM_R_PPEEPROM0_BIT           (0)
#define SYSCTL_PPEEPROM_R_PPEEPROM0_NOPRESENT     (0x00000000)
#define SYSCTL_PPEEPROM_R_PPEEPROM0_PRESENT       (0x00000001)

#define SYSCTL_PPEEPROM_PPEEPROM0_MASK         (0x00000001)
#define SYSCTL_PPEEPROM_PPEEPROM0_NOPRESENT    (0x00000000)
#define SYSCTL_PPEEPROM_PPEEPROM0_PRESENT      (0x00000001)
//--------

#define SYSCTL_PPEEPROM_PPEEPROM_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPEEPROM_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////64 PPWTIMER ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_PPWTIMER_OFFSET     (0x035C)
#define SYSCTL_PPWTIMER            (((PPWTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_PPWTIMER_OFFSET )))
#define SYSCTL_PPWTIMER_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PPWTIMER_OFFSET)))

//--------
#define SYSCTL_PPWTIMER_R_PPWTIMER0_MASK          (0x00000001)
#define SYSCTL_PPWTIMER_R_PPWTIMER0_BIT           (0)
#define SYSCTL_PPWTIMER_R_PPWTIMER0_NOPRESENT     (0x00000000)
#define SYSCTL_PPWTIMER_R_PPWTIMER0_PRESENT       (0x00000001)

#define SYSCTL_PPWTIMER_PPWTIMER0_MASK         (0x00000001)
#define SYSCTL_PPWTIMER_PPWTIMER0_NOPRESENT    (0x00000000)
#define SYSCTL_PPWTIMER_PPWTIMER0_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPWTIMER_R_PPWTIMER1_MASK          (0x00000002)
#define SYSCTL_PPWTIMER_R_PPWTIMER1_BIT           (1)
#define SYSCTL_PPWTIMER_R_PPWTIMER1_NOPRESENT     (0x00000000)
#define SYSCTL_PPWTIMER_R_PPWTIMER1_PRESENT       (0x00000002)

#define SYSCTL_PPWTIMER_PPWTIMER1_MASK         (0x00000001)
#define SYSCTL_PPWTIMER_PPWTIMER1_NOPRESENT    (0x00000000)
#define SYSCTL_PPWTIMER_PPWTIMER1_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPWTIMER_R_PPWTIMER2_MASK          (0x00000004)
#define SYSCTL_PPWTIMER_R_PPWTIMER2_BIT           (2)
#define SYSCTL_PPWTIMER_R_PPWTIMER2_NOPRESENT     (0x00000000)
#define SYSCTL_PPWTIMER_R_PPWTIMER2_PRESENT       (0x00000004)

#define SYSCTL_PPWTIMER_PPWTIMER2_MASK         (0x00000001)
#define SYSCTL_PPWTIMER_PPWTIMER2_NOPRESENT    (0x00000000)
#define SYSCTL_PPWTIMER_PPWTIMER2_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPWTIMER_R_PPWTIMER3_MASK          (0x00000008)
#define SYSCTL_PPWTIMER_R_PPWTIMER3_BIT           (3)
#define SYSCTL_PPWTIMER_R_PPWTIMER3_NOPRESENT     (0x00000000)
#define SYSCTL_PPWTIMER_R_PPWTIMER3_PRESENT       (0x00000008)

#define SYSCTL_PPWTIMER_PPWTIMER3_MASK         (0x00000001)
#define SYSCTL_PPWTIMER_PPWTIMER3_NOPRESENT    (0x00000000)
#define SYSCTL_PPWTIMER_PPWTIMER3_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPWTIMER_R_PPWTIMER4_MASK          (0x00000010)
#define SYSCTL_PPWTIMER_R_PPWTIMER4_BIT           (4)
#define SYSCTL_PPWTIMER_R_PPWTIMER4_NOPRESENT     (0x00000000)
#define SYSCTL_PPWTIMER_R_PPWTIMER4_PRESENT       (0x00000010)

#define SYSCTL_PPWTIMER_PPWTIMER4_MASK         (0x00000001)
#define SYSCTL_PPWTIMER_PPWTIMER4_NOPRESENT    (0x00000000)
#define SYSCTL_PPWTIMER_PPWTIMER4_PRESENT      (0x00000001)
//--------

//--------
#define SYSCTL_PPWTIMER_R_PPWTIMER5_MASK          (0x00000020)
#define SYSCTL_PPWTIMER_R_PPWTIMER5_BIT           (5)
#define SYSCTL_PPWTIMER_R_PPWTIMER5_NOPRESENT     (0x00000000)
#define SYSCTL_PPWTIMER_R_PPWTIMER5_PRESENT       (0x00000020)

#define SYSCTL_PPWTIMER_PPWTIMER5_MASK         (0x00000001)
#define SYSCTL_PPWTIMER_PPWTIMER5_NOPRESENT    (0x00000000)
#define SYSCTL_PPWTIMER_PPWTIMER5_PRESENT      (0x00000001)
//--------

#define SYSCTL_PPWTIMER_PPWTIMER0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_PPWTIMER_PPWTIMER1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_PPWTIMER_PPWTIMER2_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_PPWTIMER_PPWTIMER3_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_PPWTIMER_PPWTIMER4_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_PPWTIMER_PPWTIMER5_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32)+(5*4))))


//ToDo

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////65 SRWD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////




#define SYSCTL_SRWD_OFFSET     (0x0500)
#define SYSCTL_SRWD            (((SRWD_TypeDef*)(SYSCTL_BASE+SYSCTL_SRWD_OFFSET )))
#define SYSCTL_SRWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRWD_OFFSET)))

//--------
#define SYSCTL_SRWD_R_SRWDT0_MASK          (0x00000001)
#define SYSCTL_SRWD_R_SRWDT0_BIT           (0)
#define SYSCTL_SRWD_R_SRWDT0_SET           (0x00000000)
#define SYSCTL_SRWD_R_SRWDT0_RESET         (0x00000001)

#define SYSCTL_SRWD_SRWDT0_MASK         (0x00000001)
#define SYSCTL_SRWD_SRWDT0_SET          (0x00000000)
#define SYSCTL_SRWD_SRWDT0_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRWD_R_SRWDT1_MASK          (0x00000002)
#define SYSCTL_SRWD_R_SRWDT1_BIT           (1)
#define SYSCTL_SRWD_R_SRWDT1_SET           (0x00000000)
#define SYSCTL_SRWD_R_SRWDT1_RESET         (0x00000002)

#define SYSCTL_SRWD_SRWDT1_MASK         (0x00000001)
#define SYSCTL_SRWD_SRWDT1_SET          (0x00000000)
#define SYSCTL_SRWD_SRWDT1_RESET        (0x00000001)
//--------

#define SYSCTL_SRWD_SRWDT0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRWD_OFFSET)*32)+(0*4))))
#define SYSCTL_SRWD_SRWDT1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRWD_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////66 SRTIMER ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_SRTIMER_OFFSET     (0x0504)
#define SYSCTL_SRTIMER            (((SRTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_SRTIMER_OFFSET )))
#define SYSCTL_SRTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRTIMER_OFFSET)))

//--------
#define SYSCTL_SRTIMER_R_SRTIMER0_MASK          (0x00000001)
#define SYSCTL_SRTIMER_R_SRTIMER0_BIT           (0)
#define SYSCTL_SRTIMER_R_SRTIMER0_SET           (0x00000000)
#define SYSCTL_SRTIMER_R_SRTIMER0_RESET         (0x00000001)

#define SYSCTL_SRTIMER_SRTIMER0_MASK         (0x00000001)
#define SYSCTL_SRTIMER_SRTIMER0_SET          (0x00000000)
#define SYSCTL_SRTIMER_SRTIMER0_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRTIMER_R_SRTIMER1_MASK          (0x00000002)
#define SYSCTL_SRTIMER_R_SRTIMER1_BIT           (1)
#define SYSCTL_SRTIMER_R_SRTIMER1_SET           (0x00000000)
#define SYSCTL_SRTIMER_R_SRTIMER1_RESET         (0x00000002)

#define SYSCTL_SRTIMER_SRTIMER1_MASK         (0x00000001)
#define SYSCTL_SRTIMER_SRTIMER1_SET          (0x00000000)
#define SYSCTL_SRTIMER_SRTIMER1_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRTIMER_R_SRTIMER2_MASK          (0x00000004)
#define SYSCTL_SRTIMER_R_SRTIMER2_BIT           (2)
#define SYSCTL_SRTIMER_R_SRTIMER2_SET           (0x00000000)
#define SYSCTL_SRTIMER_R_SRTIMER2_RESET         (0x00000004)

#define SYSCTL_SRTIMER_SRTIMER2_MASK         (0x00000001)
#define SYSCTL_SRTIMER_SRTIMER2_SET          (0x00000000)
#define SYSCTL_SRTIMER_SRTIMER2_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRTIMER_R_SRTIMER3_MASK          (0x00000008)
#define SYSCTL_SRTIMER_R_SRTIMER3_BIT           (3)
#define SYSCTL_SRTIMER_R_SRTIMER3_SET           (0x00000000)
#define SYSCTL_SRTIMER_R_SRTIMER3_RESET         (0x00000008)

#define SYSCTL_SRTIMER_SRTIMER3_MASK         (0x00000001)
#define SYSCTL_SRTIMER_SRTIMER3_SET          (0x00000000)
#define SYSCTL_SRTIMER_SRTIMER3_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRTIMER_R_SRTIMER4_MASK          (0x00000010)
#define SYSCTL_SRTIMER_R_SRTIMER4_BIT           (4)
#define SYSCTL_SRTIMER_R_SRTIMER4_SET           (0x00000000)
#define SYSCTL_SRTIMER_R_SRTIMER4_RESET         (0x00000010)

#define SYSCTL_SRTIMER_SRTIMER4_MASK         (0x00000001)
#define SYSCTL_SRTIMER_SRTIMER4_SET          (0x00000000)
#define SYSCTL_SRTIMER_SRTIMER4_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRTIMER_R_SRTIMER5_MASK          (0x00000020)
#define SYSCTL_SRTIMER_R_SRTIMER5_BIT           (5)
#define SYSCTL_SRTIMER_R_SRTIMER5_SET           (0x00000000)
#define SYSCTL_SRTIMER_R_SRTIMER5_RESET         (0x00000020)

#define SYSCTL_SRTIMER_SRTIMER5_MASK         (0x00000001)
#define SYSCTL_SRTIMER_SRTIMER5_SET          (0x00000000)
#define SYSCTL_SRTIMER_SRTIMER5_RESET        (0x00000001)
//--------

#define SYSCTL_SRTIMER_SRTIMER0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_SRTIMER_SRTIMER1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_SRTIMER_SRTIMER2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_SRTIMER_SRTIMER3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_SRTIMER_SRTIMER4_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_SRTIMER_SRTIMER5_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32)+(5*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////67 SRGPIO ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_SRGPIO_OFFSET     (0x0508)
#define SYSCTL_SRGPIO            (((SRGPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_SRGPIO_OFFSET )))
#define SYSCTL_SRGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRGPIO_OFFSET)))


//--------
#define SYSCTL_SRGPIO_R_SRGPIOA_MASK          (0x00000001)
#define SYSCTL_SRGPIO_R_SRGPIOA_BIT           (0)
#define SYSCTL_SRGPIO_R_SRGPIOA_SET           (0x00000000)
#define SYSCTL_SRGPIO_R_SRGPIOA_RESET         (0x00000001)

#define SYSCTL_SRGPIO_SRGPIOA_MASK         (0x00000001)
#define SYSCTL_SRGPIO_SRGPIOA_SET          (0x00000000)
#define SYSCTL_SRGPIO_SRGPIOA_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRGPIO_R_SRGPIOB_MASK          (0x00000002)
#define SYSCTL_SRGPIO_R_SRGPIOB_BIT           (1)
#define SYSCTL_SRGPIO_R_SRGPIOB_SET           (0x00000000)
#define SYSCTL_SRGPIO_R_SRGPIOB_RESET         (0x00000002)

#define SYSCTL_SRGPIO_SRGPIOB_MASK         (0x00000001)
#define SYSCTL_SRGPIO_SRGPIOB_SET          (0x00000000)
#define SYSCTL_SRGPIO_SRGPIOB_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRGPIO_R_SRGPIOC_MASK          (0x00000004)
#define SYSCTL_SRGPIO_R_SRGPIOC_BIT           (2)
#define SYSCTL_SRGPIO_R_SRGPIOC_SET           (0x00000000)
#define SYSCTL_SRGPIO_R_SRGPIOC_RESET         (0x00000004)

#define SYSCTL_SRGPIO_SRGPIOC_MASK         (0x00000001)
#define SYSCTL_SRGPIO_SRGPIOC_SET          (0x00000000)
#define SYSCTL_SRGPIO_SRGPIOC_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRGPIO_R_SRGPIOD_MASK          (0x00000008)
#define SYSCTL_SRGPIO_R_SRGPIOD_BIT           (3)
#define SYSCTL_SRGPIO_R_SRGPIOD_SET           (0x00000000)
#define SYSCTL_SRGPIO_R_SRGPIOD_RESET         (0x00000008)

#define SYSCTL_SRGPIO_SRGPIOD_MASK         (0x00000001)
#define SYSCTL_SRGPIO_SRGPIOD_SET          (0x00000000)
#define SYSCTL_SRGPIO_SRGPIOD_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRGPIO_R_SRGPIOE_MASK          (0x00000010)
#define SYSCTL_SRGPIO_R_SRGPIOE_BIT           (4)
#define SYSCTL_SRGPIO_R_SRGPIOE_SET           (0x00000000)
#define SYSCTL_SRGPIO_R_SRGPIOE_RESET         (0x00000010)

#define SYSCTL_SRGPIO_SRGPIOE_MASK         (0x00000001)
#define SYSCTL_SRGPIO_SRGPIOE_SET          (0x00000000)
#define SYSCTL_SRGPIO_SRGPIOE_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRGPIO_R_SRGPIOF_MASK          (0x00000020)
#define SYSCTL_SRGPIO_R_SRGPIOF_BIT           (5)
#define SYSCTL_SRGPIO_R_SRGPIOF_SET           (0x00000000)
#define SYSCTL_SRGPIO_R_SRGPIOF_RESET         (0x00000020)

#define SYSCTL_SRGPIO_SRGPIOF_MASK         (0x00000001)
#define SYSCTL_SRGPIO_SRGPIOF_SET          (0x00000000)
#define SYSCTL_SRGPIO_SRGPIOF_RESET        (0x00000001)
//--------


#define SYSCTL_SRGPIO_SRGPIOA_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(0*4))))
#define SYSCTL_SRGPIO_SRGPIOB_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(1*4))))
#define SYSCTL_SRGPIO_SRGPIOC_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(2*4))))
#define SYSCTL_SRGPIO_SRGPIOD_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(3*4))))
#define SYSCTL_SRGPIO_SRGPIOE_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(4*4))))
#define SYSCTL_SRGPIO_SRGPIOF_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(5*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////68 SRDMA ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_SRDMA_OFFSET     (0x050C)
#define SYSCTL_SRDMA            (((SRDMA_TypeDef*)(SYSCTL_BASE+SYSCTL_SRDMA_OFFSET )))
#define SYSCTL_SRDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRDMA_OFFSET)))

//--------
#define SYSCTL_SRUDMA_R_SRUDMA_MASK          (0x00000001)
#define SYSCTL_SRUDMA_R_SRUDMA_BIT           (0)
#define SYSCTL_SRUDMA_R_SRUDMA_SET           (0x00000000)
#define SYSCTL_SRUDMA_R_SRUDMA_RESET         (0x00000001)

#define SYSCTL_SRUDMA_SRUDMA_MASK         (0x00000001)
#define SYSCTL_SRUDMA_SRUDMA_SET          (0x00000000)
#define SYSCTL_SRUDMA_SRUDMA_RESET        (0x00000001)
//--------

#define SYSCTL_SRDMA_SRUDMA_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRDMA_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////69 SRHIB ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_SRHIB_OFFSET     (0x0514)
#define SYSCTL_SRHIB            (((SRHIB_TypeDef*)(SYSCTL_BASE+SYSCTL_SRHIB_OFFSET )))
#define SYSCTL_SRHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRHIB_OFFSET)))

//--------
#define SYSCTL_SRHIB_R_SRHIB_MASK          (0x00000001)
#define SYSCTL_SRHIB_R_SRHIB_BIT           (0)
#define SYSCTL_SRHIB_R_SRHIB_SET           (0x00000000)
#define SYSCTL_SRHIB_R_SRHIB_RESET         (0x00000001)

#define SYSCTL_SRHIB_SRHIB_MASK         (0x00000001)
#define SYSCTL_SRHIB_SRHIB_SET          (0x00000000)
#define SYSCTL_SRHIB_SRHIB_RESET        (0x00000001)
//--------

#define SYSCTL_SRHIB_SRHIB_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRHIB_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////70 SRUART ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define SYSCTL_SRUART_OFFSET     (0x0518)
#define SYSCTL_SRUART            (((SRUART_TypeDef*)(SYSCTL_BASE+SYSCTL_SRUART_OFFSET )))
#define SYSCTL_SRUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRUART_OFFSET)))


//--------
#define SYSCTL_SRUART_R_SRUART0_MASK          (0x00000001)
#define SYSCTL_SRUART_R_SRUART0_BIT           (0)
#define SYSCTL_SRUART_R_SRUART0_SET           (0x00000000)
#define SYSCTL_SRUART_R_SRUART0_RESET         (0x00000001)

#define SYSCTL_SRUART_SRUART0_MASK         (0x00000001)
#define SYSCTL_SRUART_SRUART0_SET          (0x00000000)
#define SYSCTL_SRUART_SRUART0_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRUART_R_SRUART1_MASK          (0x00000002)
#define SYSCTL_SRUART_R_SRUART1_BIT           (1)
#define SYSCTL_SRUART_R_SRUART1_SET           (0x00000000)
#define SYSCTL_SRUART_R_SRUART1_RESET         (0x00000002)

#define SYSCTL_SRUART_SRUART1_MASK         (0x00000001)
#define SYSCTL_SRUART_SRUART1_SET          (0x00000000)
#define SYSCTL_SRUART_SRUART1_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRUART_R_SRUART2_MASK          (0x00000004)
#define SYSCTL_SRUART_R_SRUART2_BIT           (2)
#define SYSCTL_SRUART_R_SRUART2_SET           (0x00000000)
#define SYSCTL_SRUART_R_SRUART2_RESET         (0x00000004)

#define SYSCTL_SRUART_SRUART2_MASK         (0x00000001)
#define SYSCTL_SRUART_SRUART2_SET          (0x00000000)
#define SYSCTL_SRUART_SRUART2_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRUART_R_SRUART3_MASK          (0x00000008)
#define SYSCTL_SRUART_R_SRUART3_BIT           (3)
#define SYSCTL_SRUART_R_SRUART3_SET           (0x00000000)
#define SYSCTL_SRUART_R_SRUART3_RESET         (0x00000008)

#define SYSCTL_SRUART_SRUART3_MASK         (0x00000001)
#define SYSCTL_SRUART_SRUART3_SET          (0x00000000)
#define SYSCTL_SRUART_SRUART3_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRUART_R_SRUART4_MASK          (0x00000010)
#define SYSCTL_SRUART_R_SRUART4_BIT           (4)
#define SYSCTL_SRUART_R_SRUART4_SET           (0x00000000)
#define SYSCTL_SRUART_R_SRUART4_RESET         (0x00000010)

#define SYSCTL_SRUART_SRUART4_MASK         (0x00000001)
#define SYSCTL_SRUART_SRUART4_SET          (0x00000000)
#define SYSCTL_SRUART_SRUART4_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRUART_R_SRUART5_MASK          (0x00000020)
#define SYSCTL_SRUART_R_SRUART5_BIT           (5)
#define SYSCTL_SRUART_R_SRUART5_SET           (0x00000000)
#define SYSCTL_SRUART_R_SRUART5_RESET         (0x00000020)

#define SYSCTL_SRUART_SRUART5_MASK         (0x00000001)
#define SYSCTL_SRUART_SRUART5_SET          (0x00000000)
#define SYSCTL_SRUART_SRUART5_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRUART_R_SRUART6_MASK          (0x00000040)
#define SYSCTL_SRUART_R_SRUART6_BIT           (6)
#define SYSCTL_SRUART_R_SRUART6_SET           (0x00000000)
#define SYSCTL_SRUART_R_SRUART6_RESET         (0x00000040)

#define SYSCTL_SRUART_SRUART6_MASK         (0x00000001)
#define SYSCTL_SRUART_SRUART6_SET          (0x00000000)
#define SYSCTL_SRUART_SRUART6_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRUART_R_SRUART7_MASK          (0x00000080)
#define SYSCTL_SRUART_R_SRUART7_BIT           (7)
#define SYSCTL_SRUART_R_SRUART7_SET           (0x00000000)
#define SYSCTL_SRUART_R_SRUART7_RESET         (0x00000080)

#define SYSCTL_SRUART_SRUART7_MASK         (0x00000001)
#define SYSCTL_SRUART_SRUART7_SET          (0x00000000)
#define SYSCTL_SRUART_SRUART7_RESET        (0x00000001)
//--------


#define SYSCTL_SRUART_SRUART0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(0*4))))
#define SYSCTL_SRUART_SRUART1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(1*4))))
#define SYSCTL_SRUART_SRUART2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(2*4))))
#define SYSCTL_SRUART_SRUART3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(3*4))))
#define SYSCTL_SRUART_SRUART4_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(4*4))))
#define SYSCTL_SRUART_SRUART5_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(5*4))))
#define SYSCTL_SRUART_SRUART6_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(6*4))))
#define SYSCTL_SRUART_SRUART7_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////71 SRSSI ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_SRSSI_OFFSET     (0x051C)
#define SYSCTL_SRSSI            (((SRSSI_TypeDef*)(SYSCTL_BASE+SYSCTL_SRSSI_OFFSET )))
#define SYSCTL_SRSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRSSI_OFFSET)))

//--------
#define SYSCTL_SRSSI_R_SRSSI0_MASK          (0x00000001)
#define SYSCTL_SRSSI_R_SRSSI0_BIT           (0)
#define SYSCTL_SRSSI_R_SRSSI0_SET           (0x00000000)
#define SYSCTL_SRSSI_R_SRSSI0_RESET         (0x00000001)

#define SYSCTL_SRSSI_SRSSI0_MASK         (0x00000001)
#define SYSCTL_SRSSI_SRSSI0_SET          (0x00000000)
#define SYSCTL_SRSSI_SRSSI0_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRSSI_R_SRSSI1_MASK          (0x00000002)
#define SYSCTL_SRSSI_R_SRSSI1_BIT           (1)
#define SYSCTL_SRSSI_R_SRSSI1_SET           (0x00000000)
#define SYSCTL_SRSSI_R_SRSSI1_RESET         (0x00000002)

#define SYSCTL_SRSSI_SRSSI1_MASK         (0x00000001)
#define SYSCTL_SRSSI_SRSSI1_SET          (0x00000000)
#define SYSCTL_SRSSI_SRSSI1_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRSSI_R_SRSSI2_MASK          (0x00000004)
#define SYSCTL_SRSSI_R_SRSSI2_BIT           (2)
#define SYSCTL_SRSSI_R_SRSSI2_SET           (0x00000000)
#define SYSCTL_SRSSI_R_SRSSI2_RESET         (0x00000004)

#define SYSCTL_SRSSI_SRSSI2_MASK         (0x00000001)
#define SYSCTL_SRSSI_SRSSI2_SET          (0x00000000)
#define SYSCTL_SRSSI_SRSSI2_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRSSI_R_SRSSI3_MASK          (0x00000008)
#define SYSCTL_SRSSI_R_SRSSI3_BIT           (3)
#define SYSCTL_SRSSI_R_SRSSI3_SET           (0x00000000)
#define SYSCTL_SRSSI_R_SRSSI3_RESET         (0x00000008)

#define SYSCTL_SRSSI_SRSSI3_MASK         (0x00000001)
#define SYSCTL_SRSSI_SRSSI3_SET          (0x00000000)
#define SYSCTL_SRSSI_SRSSI3_RESET        (0x00000001)
//--------


#define SYSCTL_SRSSI_SRSSI0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRSSI_OFFSET)*32)+(0*4))))
#define SYSCTL_SRSSI_SRSSI1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRSSI_OFFSET)*32)+(1*4))))
#define SYSCTL_SRSSI_SRSSI2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRSSI_OFFSET)*32)+(2*4))))
#define SYSCTL_SRSSI_SRSSI3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRSSI_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////72 SRI2C ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define SYSCTL_SRI2C_OFFSET     (0x0520)
#define SYSCTL_SRI2C            (((SRI2C_TypeDef*)(SYSCTL_BASE+SYSCTL_SRI2C_OFFSET )))
#define SYSCTL_SRI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRI2C_OFFSET)))

//--------
#define SYSCTL_SRI2C_R_SRI2C0_MASK          (0x00000001)
#define SYSCTL_SRI2C_R_SRI2C0_BIT           (0)
#define SYSCTL_SRI2C_R_SRI2C0_SET           (0x00000000)
#define SYSCTL_SRI2C_R_SRI2C0_RESET         (0x00000001)

#define SYSCTL_SRI2C_SRI2C0_MASK         (0x00000001)
#define SYSCTL_SRI2C_SRI2C0_SET          (0x00000000)
#define SYSCTL_SRI2C_SRI2C0_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRI2C_R_SRI2C1_MASK          (0x00000002)
#define SYSCTL_SRI2C_R_SRI2C1_BIT           (1)
#define SYSCTL_SRI2C_R_SRI2C1_SET           (0x00000000)
#define SYSCTL_SRI2C_R_SRI2C1_RESET         (0x00000002)

#define SYSCTL_SRI2C_SRI2C1_MASK         (0x00000001)
#define SYSCTL_SRI2C_SRI2C1_SET          (0x00000000)
#define SYSCTL_SRI2C_SRI2C1_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRI2C_R_SRI2C2_MASK          (0x00000004)
#define SYSCTL_SRI2C_R_SRI2C2_BIT           (2)
#define SYSCTL_SRI2C_R_SRI2C2_SET           (0x00000000)
#define SYSCTL_SRI2C_R_SRI2C2_RESET         (0x00000004)

#define SYSCTL_SRI2C_SRI2C2_MASK         (0x00000001)
#define SYSCTL_SRI2C_SRI2C2_SET          (0x00000000)
#define SYSCTL_SRI2C_SRI2C2_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRI2C_R_SRI2C3_MASK          (0x00000008)
#define SYSCTL_SRI2C_R_SRI2C3_BIT           (3)
#define SYSCTL_SRI2C_R_SRI2C3_SET           (0x00000000)
#define SYSCTL_SRI2C_R_SRI2C3_RESET         (0x00000008)

#define SYSCTL_SRI2C_SRI2C3_MASK         (0x00000001)
#define SYSCTL_SRI2C_SRI2C3_SET          (0x00000000)
#define SYSCTL_SRI2C_SRI2C3_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRI2C_R_SRI2C4_MASK          (0x00000010)
#define SYSCTL_SRI2C_R_SRI2C4_BIT           (4)
#define SYSCTL_SRI2C_R_SRI2C4_SET           (0x00000000)
#define SYSCTL_SRI2C_R_SRI2C4_RESET         (0x00000010)

#define SYSCTL_SRI2C_SRI2C4_MASK         (0x00000001)
#define SYSCTL_SRI2C_SRI2C4_SET          (0x00000000)
#define SYSCTL_SRI2C_SRI2C4_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRI2C_R_SRI2C5_MASK          (0x00000020)
#define SYSCTL_SRI2C_R_SRI2C5_BIT           (5)
#define SYSCTL_SRI2C_R_SRI2C5_SET           (0x00000000)
#define SYSCTL_SRI2C_R_SRI2C5_RESET         (0x00000020)

#define SYSCTL_SRI2C_SRI2C5_MASK         (0x00000001)
#define SYSCTL_SRI2C_SRI2C5_SET          (0x00000000)
#define SYSCTL_SRI2C_SRI2C5_RESET        (0x00000001)
//--------

#define SYSCTL_SRI2C_SRI2C0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32)+(0*4))))
#define SYSCTL_SRI2C_SRI2C1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32)+(1*4))))
#define SYSCTL_SRI2C_SRI2C2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32)+(2*4))))
#define SYSCTL_SRI2C_SRI2C3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32)+(3*4))))
#define SYSCTL_SRI2C_SRI2C4_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32)+(4*4))))
#define SYSCTL_SRI2C_SRI2C5_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32)+(5*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////73 SRUSB ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_SRUSB_OFFSET     (0x0528)
#define SYSCTL_SRUSB            (((SRUSB_TypeDef*)(SYSCTL_BASE+SYSCTL_SRUSB_OFFSET )))
#define SYSCTL_SRUSB_R          (*((const volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRUSB_OFFSET)))

//--------
#define SYSCTL_SRUSB_R_SRUSB0_MASK          (0x00000001)
#define SYSCTL_SRUSB_R_SRUSB0_BIT           (0)
#define SYSCTL_SRUSB_R_SRUSB0_SET           (0x00000000)
#define SYSCTL_SRUSB_R_SRUSB0_RESET         (0x00000001)

#define SYSCTL_SRUSB_SRUSB0_MASK         (0x00000001)
#define SYSCTL_SRUSB_SRUSB0_SET          (0x00000000)
#define SYSCTL_SRUSB_SRUSB0_RESET        (0x00000001)
//--------

#define SYSCTL_SRUSB_SRUSB_BB    (*((const volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRUSB_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////74 SrCAN ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_SRCAN_OFFSET     (0x0534)
#define SYSCTL_SRCAN            (((SRCAN_TypeDef*)(SYSCTL_BASE+SYSCTL_SRCAN_OFFSET )))
#define SYSCTL_SRCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRCAN_OFFSET)))

//--------
#define SYSCTL_SRCAN_R_SRCAN0_MASK          (0x00000001)
#define SYSCTL_SRCAN_R_SRCAN0_BIT           (0)
#define SYSCTL_SRCAN_R_SRCAN0_SET           (0x00000000)
#define SYSCTL_SRCAN_R_SRCAN0_RESET         (0x00000001)

#define SYSCTL_SRCAN_SRCAN0_MASK         (0x00000001)
#define SYSCTL_SRCAN_SRCAN0_SET          (0x00000000)
#define SYSCTL_SRCAN_SRCAN0_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRCAN_R_SRCAN1_MASK          (0x00000002)
#define SYSCTL_SRCAN_R_SRCAN1_BIT           (1)
#define SYSCTL_SRCAN_R_SRCAN1_SET           (0x00000000)
#define SYSCTL_SRCAN_R_SRCAN1_RESET         (0x00000002)

#define SYSCTL_SRCAN_SRCAN1_MASK         (0x00000001)
#define SYSCTL_SRCAN_SRCAN1_SET          (0x00000000)
#define SYSCTL_SRCAN_SRCAN1_RESET        (0x00000001)
//--------

#define SYSCTL_SRCAN_SRCAN0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCAN_OFFSET)*32)+(0*4))))
#define SYSCTL_SRCAN_SRCAN1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRCAN_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////75 SRADC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_SRADC_OFFSET     (0x0538)
#define SYSCTL_SRADC            (((SRADC_TypeDef*)(SYSCTL_BASE+SYSCTL_SRADC_OFFSET )))
#define SYSCTL_SRADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRADC_OFFSET)))

//--------
#define SYSCTL_SRADC_R_SRADC0_MASK          (0x00000001)
#define SYSCTL_SRADC_R_SRADC0_BIT           (0)
#define SYSCTL_SRADC_R_SRADC0_SET           (0x00000000)
#define SYSCTL_SRADC_R_SRADC0_RESET         (0x00000001)

#define SYSCTL_SRADC_SRADC0_MASK         (0x00000001)
#define SYSCTL_SRADC_SRADC0_SET          (0x00000000)
#define SYSCTL_SRADC_SRADC0_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRADC_R_SRADC1_MASK          (0x00000002)
#define SYSCTL_SRADC_R_SRADC1_BIT           (1)
#define SYSCTL_SRADC_R_SRADC1_SET           (0x00000000)
#define SYSCTL_SRADC_R_SRADC1_RESET         (0x00000002)

#define SYSCTL_SRADC_SRADC1_MASK         (0x00000001)
#define SYSCTL_SRADC_SRADC1_SET          (0x00000000)
#define SYSCTL_SRADC_SRADC1_RESET        (0x00000001)
//--------

#define SYSCTL_SRADC_SRADC0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRADC_OFFSET)*32)+(0*4))))
#define SYSCTL_SRADC_SRADC1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRADC_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////76 SRACMP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_SRACMP_OFFSET     (0x053C)
#define SYSCTL_SRACMP            (((SRACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_SRACMP_OFFSET )))
#define SYSCTL_SRACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRACMP_OFFSET)))

//--------
#define SYSCTL_SRACMP_R_SRACMP0_MASK          (0x00000001)
#define SYSCTL_SRACMP_R_SRACMP0_BIT           (0)
#define SYSCTL_SRACMP_R_SRACMP0_SET           (0x00000000)
#define SYSCTL_SRACMP_R_SRACMP0_RESET         (0x00000001)

#define SYSCTL_SRACMP_SRACMP0_MASK         (0x00000001)
#define SYSCTL_SRACMP_SRACMP0_SET          (0x00000000)
#define SYSCTL_SRACMP_SRACMP0_RESET        (0x00000001)
//--------

#define SYSCTL_SRACMP_SRACMP_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRACMP_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////77 SRPWM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_SRPWM_OFFSET     (0x0540)
#define SYSCTL_SRPWM            (((SRPWM_TypeDef*)(SYSCTL_BASE+SYSCTL_SRPWM_OFFSET )))
#define SYSCTL_SRPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRPWM_OFFSET)))

//--------
#define SYSCTL_SRPWM_R_SRPWM0_MASK          (0x00000001)
#define SYSCTL_SRPWM_R_SRPWM0_BIT           (0)
#define SYSCTL_SRPWM_R_SRPWM0_SET           (0x00000000)
#define SYSCTL_SRPWM_R_SRPWM0_RESET         (0x00000001)

#define SYSCTL_SRPWM_SRPWM0_MASK         (0x00000001)
#define SYSCTL_SRPWM_SRPWM0_SET          (0x00000000)
#define SYSCTL_SRPWM_SRPWM0_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRPWM_R_SRPWM1_MASK          (0x00000002)
#define SYSCTL_SRPWM_R_SRPWM1_BIT           (1)
#define SYSCTL_SRPWM_R_SRPWM1_SET           (0x00000000)
#define SYSCTL_SRPWM_R_SRPWM1_RESET         (0x00000002)

#define SYSCTL_SRPWM_SRPWM1_MASK         (0x00000001)
#define SYSCTL_SRPWM_SRPWM1_SET          (0x00000000)
#define SYSCTL_SRPWM_SRPWM1_RESET        (0x00000001)
//--------

#define SYSCTL_SRPWM_SRPWM0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRPWM_OFFSET)*32)+(0*4))))
#define SYSCTL_SRPWM_SRPWM1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRPWM_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////78 SRQEI ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_SRQEI_OFFSET     (0x0544)
#define SYSCTL_SRQEI            (((SRQEI_TypeDef*)(SYSCTL_BASE+SYSCTL_SRQEI_OFFSET )))
#define SYSCTL_SRQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRQEI_OFFSET)))


//--------
#define SYSCTL_SRQEI_R_SRQEI0_MASK          (0x00000001)
#define SYSCTL_SRQEI_R_SRQEI0_BIT           (0)
#define SYSCTL_SRQEI_R_SRQEI0_SET           (0x00000000)
#define SYSCTL_SRQEI_R_SRQEI0_RESET         (0x00000001)

#define SYSCTL_SRQEI_SRQEI0_MASK         (0x00000001)
#define SYSCTL_SRQEI_SRQEI0_SET          (0x00000000)
#define SYSCTL_SRQEI_SRQEI0_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRQEI_R_SRQEI1_MASK          (0x00000002)
#define SYSCTL_SRQEI_R_SRQEI1_BIT           (1)
#define SYSCTL_SRQEI_R_SRQEI1_SET           (0x00000000)
#define SYSCTL_SRQEI_R_SRQEI1_RESET         (0x00000002)

#define SYSCTL_SRQEI_SRQEI1_MASK         (0x00000001)
#define SYSCTL_SRQEI_SRQEI1_SET          (0x00000000)
#define SYSCTL_SRQEI_SRQEI1_RESET        (0x00000001)
//--------

#define SYSCTL_SRQEI_SRQEI0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRQEI_OFFSET)*32)+(0*4))))
#define SYSCTL_SRQEI_SRQEI1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRQEI_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////79 SREEPROM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_SREEPROM_OFFSET     (0x0558)
#define SYSCTL_SREEPROM            (((SREEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_SREEPROM_OFFSET )))
#define SYSCTL_SREEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SREEPROM_OFFSET)))

//--------
#define SYSCTL_SREEPROM_R_SREEPROM0_MASK          (0x00000001)
#define SYSCTL_SREEPROM_R_SREEPROM0_BIT           (0)
#define SYSCTL_SREEPROM_R_SREEPROM0_SET           (0x00000000)
#define SYSCTL_SREEPROM_R_SREEPROM0_RESET         (0x00000001)

#define SYSCTL_SREEPROM_SREEPROM0_MASK         (0x00000001)
#define SYSCTL_SREEPROM_SREEPROM0_SET          (0x00000000)
#define SYSCTL_SREEPROM_SREEPROM0_RESET        (0x00000001)
//--------

#define SYSCTL_SREEPROM_SREEPROM_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SREEPROM_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////80 SRWTIMER ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_SRWTIMER_OFFSET     (0x055C)
#define SYSCTL_SRWTIMER            (((SRWTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_SRWTIMER_OFFSET )))
#define SYSCTL_SRWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRWTIMER_OFFSET)))

//--------
#define SYSCTL_SRWTIMER_R_SRWTIMER0_MASK          (0x00000001)
#define SYSCTL_SRWTIMER_R_SRWTIMER0_BIT           (0)
#define SYSCTL_SRWTIMER_R_SRWTIMER0_SET           (0x00000000)
#define SYSCTL_SRWTIMER_R_SRWTIMER0_RESET         (0x00000001)

#define SYSCTL_SRWTIMER_SRWTIMER0_MASK         (0x00000001)
#define SYSCTL_SRWTIMER_SRWTIMER0_SET          (0x00000000)
#define SYSCTL_SRWTIMER_SRWTIMER0_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRWTIMER_R_SRWTIMER1_MASK          (0x00000002)
#define SYSCTL_SRWTIMER_R_SRWTIMER1_BIT           (1)
#define SYSCTL_SRWTIMER_R_SRWTIMER1_SET           (0x00000000)
#define SYSCTL_SRWTIMER_R_SRWTIMER1_RESET         (0x00000002)

#define SYSCTL_SRWTIMER_SRWTIMER1_MASK         (0x00000001)
#define SYSCTL_SRWTIMER_SRWTIMER1_SET          (0x00000000)
#define SYSCTL_SRWTIMER_SRWTIMER1_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRWTIMER_R_SRWTIMER2_MASK          (0x00000004)
#define SYSCTL_SRWTIMER_R_SRWTIMER2_BIT           (2)
#define SYSCTL_SRWTIMER_R_SRWTIMER2_SET           (0x00000000)
#define SYSCTL_SRWTIMER_R_SRWTIMER2_RESET         (0x00000004)

#define SYSCTL_SRWTIMER_SRWTIMER2_MASK         (0x00000001)
#define SYSCTL_SRWTIMER_SRWTIMER2_SET          (0x00000000)
#define SYSCTL_SRWTIMER_SRWTIMER2_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRWTIMER_R_SRWTIMER3_MASK          (0x00000008)
#define SYSCTL_SRWTIMER_R_SRWTIMER3_BIT           (3)
#define SYSCTL_SRWTIMER_R_SRWTIMER3_SET           (0x00000000)
#define SYSCTL_SRWTIMER_R_SRWTIMER3_RESET         (0x00000008)

#define SYSCTL_SRWTIMER_SRWTIMER3_MASK         (0x00000001)
#define SYSCTL_SRWTIMER_SRWTIMER3_SET          (0x00000000)
#define SYSCTL_SRWTIMER_SRWTIMER3_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRWTIMER_R_SRWTIMER4_MASK          (0x00000010)
#define SYSCTL_SRWTIMER_R_SRWTIMER4_BIT           (4)
#define SYSCTL_SRWTIMER_R_SRWTIMER4_SET           (0x00000000)
#define SYSCTL_SRWTIMER_R_SRWTIMER4_RESET         (0x00000010)

#define SYSCTL_SRWTIMER_SRWTIMER4_MASK         (0x00000001)
#define SYSCTL_SRWTIMER_SRWTIMER4_SET          (0x00000000)
#define SYSCTL_SRWTIMER_SRWTIMER4_RESET        (0x00000001)
//--------

//--------
#define SYSCTL_SRWTIMER_R_SRWTIMER5_MASK          (0x00000020)
#define SYSCTL_SRWTIMER_R_SRWTIMER5_BIT           (5)
#define SYSCTL_SRWTIMER_R_SRWTIMER5_SET           (0x00000000)
#define SYSCTL_SRWTIMER_R_SRWTIMER5_RESET         (0x00000020)

#define SYSCTL_SRWTIMER_SRWTIMER5_MASK            (0x00000001)
#define SYSCTL_SRWTIMER_SRWTIMER5_SET             (0x00000000)
#define SYSCTL_SRWTIMER_SRWTIMER5_RESET           (0x00000001)
//--------

#define SYSCTL_SRWTIMER_SRWTIMER0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_SRWTIMER_SRWTIMER1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_SRWTIMER_SRWTIMER2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_SRWTIMER_SRWTIMER3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_SRWTIMER_SRWTIMER4_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_SRWTIMER_SRWTIMER5_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32)+(5*4))))





//ToDo

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////81 RCGCWD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////




#define SYSCTL_RCGCWD_OFFSET     (0x0600)
#define SYSCTL_RCGCWD            (((RCGCWD_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCWD_OFFSET )))
#define SYSCTL_RCGCWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCWD_OFFSET)))

//--------
#define SYSCTL_RCGCWD_R_RCGCWDT0_MASK          (0x00000001)
#define SYSCTL_RCGCWD_R_RCGCWDT0_BIT           (0)
#define SYSCTL_RCGCWD_R_RCGCWDT0_DIS           (0x00000000)
#define SYSCTL_RCGCWD_R_RCGCWDT0_EN            (0x00000001)

#define SYSCTL_RCGCWD_RCGCWDT0_MASK         (0x00000001)
#define SYSCTL_RCGCWD_RCGCWDT0_DIS          (0x00000000)
#define SYSCTL_RCGCWD_RCGCWDT0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCWD_R_RCGCWDT1_MASK          (0x00000002)
#define SYSCTL_RCGCWD_R_RCGCWDT1_BIT           (1)
#define SYSCTL_RCGCWD_R_RCGCWDT1_DIS           (0x00000000)
#define SYSCTL_RCGCWD_R_RCGCWDT1_EN            (0x00000002)

#define SYSCTL_RCGCWD_RCGCWDT1_MASK         (0x00000001)
#define SYSCTL_RCGCWD_RCGCWDT1_DIS          (0x00000000)
#define SYSCTL_RCGCWD_RCGCWDT1_EN           (0x00000001)
//--------

#define SYSCTL_RCGCWD_RCGCWDT0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCWD_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGCWD_RCGCWDT1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCWD_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////82 RCGCTIMER ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_RCGCTIMER_OFFSET     (0x0604)
#define SYSCTL_RCGCTIMER            (((RCGCTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCTIMER_OFFSET )))
#define SYSCTL_RCGCTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCTIMER_OFFSET)))

//--------
#define SYSCTL_RCGCTIMER_R_RCGCTIMER0_MASK          (0x00000001)
#define SYSCTL_RCGCTIMER_R_RCGCTIMER0_BIT           (0)
#define SYSCTL_RCGCTIMER_R_RCGCTIMER0_DIS           (0x00000000)
#define SYSCTL_RCGCTIMER_R_RCGCTIMER0_EN            (0x00000001)

#define SYSCTL_RCGCTIMER_RCGCTIMER0_MASK         (0x00000001)
#define SYSCTL_RCGCTIMER_RCGCTIMER0_DIS          (0x00000000)
#define SYSCTL_RCGCTIMER_RCGCTIMER0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCTIMER_R_RCGCTIMER1_MASK          (0x00000002)
#define SYSCTL_RCGCTIMER_R_RCGCTIMER1_BIT           (1)
#define SYSCTL_RCGCTIMER_R_RCGCTIMER1_DIS           (0x00000000)
#define SYSCTL_RCGCTIMER_R_RCGCTIMER1_EN            (0x00000002)

#define SYSCTL_RCGCTIMER_RCGCTIMER1_MASK         (0x00000001)
#define SYSCTL_RCGCTIMER_RCGCTIMER1_DIS          (0x00000000)
#define SYSCTL_RCGCTIMER_RCGCTIMER1_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCTIMER_R_RCGCTIMER2_MASK          (0x00000004)
#define SYSCTL_RCGCTIMER_R_RCGCTIMER2_BIT           (2)
#define SYSCTL_RCGCTIMER_R_RCGCTIMER2_DIS           (0x00000000)
#define SYSCTL_RCGCTIMER_R_RCGCTIMER2_EN            (0x00000004)

#define SYSCTL_RCGCTIMER_RCGCTIMER2_MASK         (0x00000001)
#define SYSCTL_RCGCTIMER_RCGCTIMER2_DIS          (0x00000000)
#define SYSCTL_RCGCTIMER_RCGCTIMER2_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCTIMER_R_RCGCTIMER3_MASK          (0x00000008)
#define SYSCTL_RCGCTIMER_R_RCGCTIMER3_BIT           (3)
#define SYSCTL_RCGCTIMER_R_RCGCTIMER3_DIS           (0x00000000)
#define SYSCTL_RCGCTIMER_R_RCGCTIMER3_EN            (0x00000008)

#define SYSCTL_RCGCTIMER_RCGCTIMER3_MASK         (0x00000001)
#define SYSCTL_RCGCTIMER_RCGCTIMER3_DIS          (0x00000000)
#define SYSCTL_RCGCTIMER_RCGCTIMER3_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCTIMER_R_RCGCTIMER4_MASK          (0x00000010)
#define SYSCTL_RCGCTIMER_R_RCGCTIMER4_BIT           (4)
#define SYSCTL_RCGCTIMER_R_RCGCTIMER4_DIS           (0x00000000)
#define SYSCTL_RCGCTIMER_R_RCGCTIMER4_EN            (0x00000010)

#define SYSCTL_RCGCTIMER_RCGCTIMER4_MASK         (0x00000001)
#define SYSCTL_RCGCTIMER_RCGCTIMER4_DIS          (0x00000000)
#define SYSCTL_RCGCTIMER_RCGCTIMER4_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCTIMER_R_RCGCTIMER5_MASK          (0x00000020)
#define SYSCTL_RCGCTIMER_R_RCGCTIMER5_BIT           (5)
#define SYSCTL_RCGCTIMER_R_RCGCTIMER5_DIS           (0x00000000)
#define SYSCTL_RCGCTIMER_R_RCGCTIMER5_EN            (0x00000020)

#define SYSCTL_RCGCTIMER_RCGCTIMER5_MASK         (0x00000001)
#define SYSCTL_RCGCTIMER_RCGCTIMER5_DIS          (0x00000000)
#define SYSCTL_RCGCTIMER_RCGCTIMER5_EN           (0x00000001)
//--------

#define SYSCTL_RCGCTIMER_RCGCTIMER0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGCTIMER_RCGCTIMER1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_RCGCTIMER_RCGCTIMER2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_RCGCTIMER_RCGCTIMER3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_RCGCTIMER_RCGCTIMER4_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_RCGCTIMER_RCGCTIMER5_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCTIMER_OFFSET)*32)+(5*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////83 RCGCGPIO ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_RCGCGPIO_OFFSET     (0x0608)
#define SYSCTL_RCGCGPIO            (((RCGCGPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCGPIO_OFFSET )))
#define SYSCTL_RCGCGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCGPIO_OFFSET)))


//--------
#define SYSCTL_RCGCGPIO_R_RCGCGPIOA_MASK          (0x00000001)
#define SYSCTL_RCGCGPIO_R_RCGCGPIOA_BIT           (0)
#define SYSCTL_RCGCGPIO_R_RCGCGPIOA_DIS           (0x00000000)
#define SYSCTL_RCGCGPIO_R_RCGCGPIOA_EN            (0x00000001)

#define SYSCTL_RCGCGPIO_RCGCGPIOA_MASK         (0x00000001)
#define SYSCTL_RCGCGPIO_RCGCGPIOA_DIS          (0x00000000)
#define SYSCTL_RCGCGPIO_RCGCGPIOA_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCGPIO_R_RCGCGPIOB_MASK          (0x00000002)
#define SYSCTL_RCGCGPIO_R_RCGCGPIOB_BIT           (1)
#define SYSCTL_RCGCGPIO_R_RCGCGPIOB_DIS           (0x00000000)
#define SYSCTL_RCGCGPIO_R_RCGCGPIOB_EN            (0x00000002)

#define SYSCTL_RCGCGPIO_RCGCGPIOB_MASK         (0x00000001)
#define SYSCTL_RCGCGPIO_RCGCGPIOB_DIS          (0x00000000)
#define SYSCTL_RCGCGPIO_RCGCGPIOB_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCGPIO_R_RCGCGPIOC_MASK          (0x00000004)
#define SYSCTL_RCGCGPIO_R_RCGCGPIOC_BIT           (2)
#define SYSCTL_RCGCGPIO_R_RCGCGPIOC_DIS           (0x00000000)
#define SYSCTL_RCGCGPIO_R_RCGCGPIOC_EN            (0x00000004)

#define SYSCTL_RCGCGPIO_RCGCGPIOC_MASK         (0x00000001)
#define SYSCTL_RCGCGPIO_RCGCGPIOC_DIS          (0x00000000)
#define SYSCTL_RCGCGPIO_RCGCGPIOC_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCGPIO_R_RCGCGPIOD_MASK          (0x00000008)
#define SYSCTL_RCGCGPIO_R_RCGCGPIOD_BIT           (3)
#define SYSCTL_RCGCGPIO_R_RCGCGPIOD_DIS           (0x00000000)
#define SYSCTL_RCGCGPIO_R_RCGCGPIOD_EN            (0x00000008)

#define SYSCTL_RCGCGPIO_RCGCGPIOD_MASK         (0x00000001)
#define SYSCTL_RCGCGPIO_RCGCGPIOD_DIS          (0x00000000)
#define SYSCTL_RCGCGPIO_RCGCGPIOD_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCGPIO_R_RCGCGPIOE_MASK          (0x00000010)
#define SYSCTL_RCGCGPIO_R_RCGCGPIOE_BIT           (4)
#define SYSCTL_RCGCGPIO_R_RCGCGPIOE_DIS           (0x00000000)
#define SYSCTL_RCGCGPIO_R_RCGCGPIOE_EN            (0x00000010)

#define SYSCTL_RCGCGPIO_RCGCGPIOE_MASK         (0x00000001)
#define SYSCTL_RCGCGPIO_RCGCGPIOE_DIS          (0x00000000)
#define SYSCTL_RCGCGPIO_RCGCGPIOE_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCGPIO_R_RCGCGPIOF_MASK          (0x00000020)
#define SYSCTL_RCGCGPIO_R_RCGCGPIOF_BIT           (5)
#define SYSCTL_RCGCGPIO_R_RCGCGPIOF_DIS           (0x00000000)
#define SYSCTL_RCGCGPIO_R_RCGCGPIOF_EN            (0x00000020)

#define SYSCTL_RCGCGPIO_RCGCGPIOF_MASK         (0x00000001)
#define SYSCTL_RCGCGPIO_RCGCGPIOF_DIS          (0x00000000)
#define SYSCTL_RCGCGPIO_RCGCGPIOF_EN           (0x00000001)
//--------


#define SYSCTL_RCGCGPIO_RCGCGPIOA_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGCGPIO_RCGCGPIOB_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(1*4))))
#define SYSCTL_RCGCGPIO_RCGCGPIOC_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(2*4))))
#define SYSCTL_RCGCGPIO_RCGCGPIOD_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(3*4))))
#define SYSCTL_RCGCGPIO_RCGCGPIOE_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(4*4))))
#define SYSCTL_RCGCGPIO_RCGCGPIOF_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCGPIO_OFFSET)*32)+(5*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////84 RCGCDMA ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_RCGCDMA_OFFSET     (0x060C)
#define SYSCTL_RCGCDMA            (((RCGCDMA_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCDMA_OFFSET )))
#define SYSCTL_RCGCDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCDMA_OFFSET)))

//--------
#define SYSCTL_RCGCUDMA_R_RCGCUDMA_MASK          (0x00000001)
#define SYSCTL_RCGCUDMA_R_RCGCUDMA_BIT           (0)
#define SYSCTL_RCGCUDMA_R_RCGCUDMA_DIS           (0x00000000)
#define SYSCTL_RCGCUDMA_R_RCGCUDMA_EN            (0x00000001)

#define SYSCTL_RCGCUDMA_RCGCUDMA_MASK         (0x00000001)
#define SYSCTL_RCGCUDMA_RCGCUDMA_DIS          (0x00000000)
#define SYSCTL_RCGCUDMA_RCGCUDMA_EN           (0x00000001)
//--------

#define SYSCTL_RCGCDMA_RCGCUDMA_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCDMA_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////85 RCGCHIB ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_RCGCHIB_OFFSET     (0x0614)
#define SYSCTL_RCGCHIB            (((RCGCHIB_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCHIB_OFFSET )))
#define SYSCTL_RCGCHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCHIB_OFFSET)))

//--------
#define SYSCTL_RCGCHIB_R_RCGCHIB_MASK          (0x00000001)
#define SYSCTL_RCGCHIB_R_RCGCHIB_BIT           (0)
#define SYSCTL_RCGCHIB_R_RCGCHIB_DIS           (0x00000000)
#define SYSCTL_RCGCHIB_R_RCGCHIB_EN            (0x00000001)

#define SYSCTL_RCGCHIB_RCGCHIB_MASK         (0x00000001)
#define SYSCTL_RCGCHIB_RCGCHIB_DIS          (0x00000000)
#define SYSCTL_RCGCHIB_RCGCHIB_EN           (0x00000001)
//--------

#define SYSCTL_RCGCHIB_RCGCHIB_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCHIB_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////86 RCGCUART ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define SYSCTL_RCGCUART_OFFSET     (0x0618)
#define SYSCTL_RCGCUART            (((RCGCUART_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCUART_OFFSET )))
#define SYSCTL_RCGCUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCUART_OFFSET)))


//--------
#define SYSCTL_RCGCUART_R_RCGCUART0_MASK          (0x00000001)
#define SYSCTL_RCGCUART_R_RCGCUART0_BIT           (0)
#define SYSCTL_RCGCUART_R_RCGCUART0_DIS           (0x00000000)
#define SYSCTL_RCGCUART_R_RCGCUART0_EN            (0x00000001)

#define SYSCTL_RCGCUART_RCGCUART0_MASK         (0x00000001)
#define SYSCTL_RCGCUART_RCGCUART0_DIS          (0x00000000)
#define SYSCTL_RCGCUART_RCGCUART0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCUART_R_RCGCUART1_MASK          (0x00000002)
#define SYSCTL_RCGCUART_R_RCGCUART1_BIT           (1)
#define SYSCTL_RCGCUART_R_RCGCUART1_DIS           (0x00000000)
#define SYSCTL_RCGCUART_R_RCGCUART1_EN            (0x00000002)

#define SYSCTL_RCGCUART_RCGCUART1_MASK         (0x00000001)
#define SYSCTL_RCGCUART_RCGCUART1_DIS          (0x00000000)
#define SYSCTL_RCGCUART_RCGCUART1_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCUART_R_RCGCUART2_MASK          (0x00000004)
#define SYSCTL_RCGCUART_R_RCGCUART2_BIT           (2)
#define SYSCTL_RCGCUART_R_RCGCUART2_DIS           (0x00000000)
#define SYSCTL_RCGCUART_R_RCGCUART2_EN            (0x00000004)

#define SYSCTL_RCGCUART_RCGCUART2_MASK         (0x00000001)
#define SYSCTL_RCGCUART_RCGCUART2_DIS          (0x00000000)
#define SYSCTL_RCGCUART_RCGCUART2_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCUART_R_RCGCUART3_MASK          (0x00000008)
#define SYSCTL_RCGCUART_R_RCGCUART3_BIT           (3)
#define SYSCTL_RCGCUART_R_RCGCUART3_DIS           (0x00000000)
#define SYSCTL_RCGCUART_R_RCGCUART3_EN            (0x00000008)

#define SYSCTL_RCGCUART_RCGCUART3_MASK         (0x00000001)
#define SYSCTL_RCGCUART_RCGCUART3_DIS          (0x00000000)
#define SYSCTL_RCGCUART_RCGCUART3_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCUART_R_RCGCUART4_MASK          (0x00000010)
#define SYSCTL_RCGCUART_R_RCGCUART4_BIT           (4)
#define SYSCTL_RCGCUART_R_RCGCUART4_DIS           (0x00000000)
#define SYSCTL_RCGCUART_R_RCGCUART4_EN            (0x00000010)

#define SYSCTL_RCGCUART_RCGCUART4_MASK         (0x00000001)
#define SYSCTL_RCGCUART_RCGCUART4_DIS          (0x00000000)
#define SYSCTL_RCGCUART_RCGCUART4_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCUART_R_RCGCUART5_MASK          (0x00000020)
#define SYSCTL_RCGCUART_R_RCGCUART5_BIT           (5)
#define SYSCTL_RCGCUART_R_RCGCUART5_DIS           (0x00000000)
#define SYSCTL_RCGCUART_R_RCGCUART5_EN            (0x00000020)

#define SYSCTL_RCGCUART_RCGCUART5_MASK         (0x00000001)
#define SYSCTL_RCGCUART_RCGCUART5_DIS          (0x00000000)
#define SYSCTL_RCGCUART_RCGCUART5_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCUART_R_RCGCUART6_MASK          (0x00000040)
#define SYSCTL_RCGCUART_R_RCGCUART6_BIT           (6)
#define SYSCTL_RCGCUART_R_RCGCUART6_DIS           (0x00000000)
#define SYSCTL_RCGCUART_R_RCGCUART6_EN            (0x00000040)

#define SYSCTL_RCGCUART_RCGCUART6_MASK         (0x00000001)
#define SYSCTL_RCGCUART_RCGCUART6_DIS          (0x00000000)
#define SYSCTL_RCGCUART_RCGCUART6_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCUART_R_RCGCUART7_MASK          (0x00000080)
#define SYSCTL_RCGCUART_R_RCGCUART7_BIT           (7)
#define SYSCTL_RCGCUART_R_RCGCUART7_DIS           (0x00000000)
#define SYSCTL_RCGCUART_R_RCGCUART7_EN            (0x00000080)

#define SYSCTL_RCGCUART_RCGCUART7_MASK         (0x00000001)
#define SYSCTL_RCGCUART_RCGCUART7_DIS          (0x00000000)
#define SYSCTL_RCGCUART_RCGCUART7_EN           (0x00000001)
//--------


#define SYSCTL_RCGCUART_RCGCUART0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGCUART_RCGCUART1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32)+(1*4))))
#define SYSCTL_RCGCUART_RCGCUART2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32)+(2*4))))
#define SYSCTL_RCGCUART_RCGCUART3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32)+(3*4))))
#define SYSCTL_RCGCUART_RCGCUART4_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32)+(4*4))))
#define SYSCTL_RCGCUART_RCGCUART5_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32)+(5*4))))
#define SYSCTL_RCGCUART_RCGCUART6_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32)+(6*4))))
#define SYSCTL_RCGCUART_RCGCUART7_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCUART_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////87 RCGCSSI ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_RCGCSSI_OFFSET     (0x061C)
#define SYSCTL_RCGCSSI            (((RCGCSSI_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCSSI_OFFSET )))
#define SYSCTL_RCGCSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCSSI_OFFSET)))

//--------
#define SYSCTL_RCGCSSI_R_RCGCSSI0_MASK          (0x00000001)
#define SYSCTL_RCGCSSI_R_RCGCSSI0_BIT           (0)
#define SYSCTL_RCGCSSI_R_RCGCSSI0_DIS           (0x00000000)
#define SYSCTL_RCGCSSI_R_RCGCSSI0_EN            (0x00000001)

#define SYSCTL_RCGCSSI_RCGCSSI0_MASK         (0x00000001)
#define SYSCTL_RCGCSSI_RCGCSSI0_DIS          (0x00000000)
#define SYSCTL_RCGCSSI_RCGCSSI0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCSSI_R_RCGCSSI1_MASK          (0x00000002)
#define SYSCTL_RCGCSSI_R_RCGCSSI1_BIT           (1)
#define SYSCTL_RCGCSSI_R_RCGCSSI1_DIS           (0x00000000)
#define SYSCTL_RCGCSSI_R_RCGCSSI1_EN            (0x00000002)

#define SYSCTL_RCGCSSI_RCGCSSI1_MASK         (0x00000001)
#define SYSCTL_RCGCSSI_RCGCSSI1_DIS          (0x00000000)
#define SYSCTL_RCGCSSI_RCGCSSI1_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCSSI_R_RCGCSSI2_MASK          (0x00000004)
#define SYSCTL_RCGCSSI_R_RCGCSSI2_BIT           (2)
#define SYSCTL_RCGCSSI_R_RCGCSSI2_DIS           (0x00000000)
#define SYSCTL_RCGCSSI_R_RCGCSSI2_EN            (0x00000004)

#define SYSCTL_RCGCSSI_RCGCSSI2_MASK         (0x00000001)
#define SYSCTL_RCGCSSI_RCGCSSI2_DIS          (0x00000000)
#define SYSCTL_RCGCSSI_RCGCSSI2_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCSSI_R_RCGCSSI3_MASK          (0x00000008)
#define SYSCTL_RCGCSSI_R_RCGCSSI3_BIT           (3)
#define SYSCTL_RCGCSSI_R_RCGCSSI3_DIS           (0x00000000)
#define SYSCTL_RCGCSSI_R_RCGCSSI3_EN            (0x00000008)

#define SYSCTL_RCGCSSI_RCGCSSI3_MASK         (0x00000001)
#define SYSCTL_RCGCSSI_RCGCSSI3_DIS          (0x00000000)
#define SYSCTL_RCGCSSI_RCGCSSI3_EN           (0x00000001)
//--------


#define SYSCTL_RCGCSSI_RCGCSSI0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCSSI_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGCSSI_RCGCSSI1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCSSI_OFFSET)*32)+(1*4))))
#define SYSCTL_RCGCSSI_RCGCSSI2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCSSI_OFFSET)*32)+(2*4))))
#define SYSCTL_RCGCSSI_RCGCSSI3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCSSI_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////88 RCGCI2C ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define SYSCTL_RCGCI2C_OFFSET     (0x0620)
#define SYSCTL_RCGCI2C            (((RCGCI2C_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCI2C_OFFSET )))
#define SYSCTL_RCGCI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCI2C_OFFSET)))

//--------
#define SYSCTL_RCGCI2C_R_RCGCI2C0_MASK          (0x00000001)
#define SYSCTL_RCGCI2C_R_RCGCI2C0_BIT           (0)
#define SYSCTL_RCGCI2C_R_RCGCI2C0_DIS           (0x00000000)
#define SYSCTL_RCGCI2C_R_RCGCI2C0_EN            (0x00000001)

#define SYSCTL_RCGCI2C_RCGCI2C0_MASK         (0x00000001)
#define SYSCTL_RCGCI2C_RCGCI2C0_DIS          (0x00000000)
#define SYSCTL_RCGCI2C_RCGCI2C0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCI2C_R_RCGCI2C1_MASK          (0x00000002)
#define SYSCTL_RCGCI2C_R_RCGCI2C1_BIT           (1)
#define SYSCTL_RCGCI2C_R_RCGCI2C1_DIS           (0x00000000)
#define SYSCTL_RCGCI2C_R_RCGCI2C1_EN            (0x00000002)

#define SYSCTL_RCGCI2C_RCGCI2C1_MASK         (0x00000001)
#define SYSCTL_RCGCI2C_RCGCI2C1_DIS          (0x00000000)
#define SYSCTL_RCGCI2C_RCGCI2C1_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCI2C_R_RCGCI2C2_MASK          (0x00000004)
#define SYSCTL_RCGCI2C_R_RCGCI2C2_BIT           (2)
#define SYSCTL_RCGCI2C_R_RCGCI2C2_DIS           (0x00000000)
#define SYSCTL_RCGCI2C_R_RCGCI2C2_EN            (0x00000004)

#define SYSCTL_RCGCI2C_RCGCI2C2_MASK         (0x00000001)
#define SYSCTL_RCGCI2C_RCGCI2C2_DIS          (0x00000000)
#define SYSCTL_RCGCI2C_RCGCI2C2_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCI2C_R_RCGCI2C3_MASK          (0x00000008)
#define SYSCTL_RCGCI2C_R_RCGCI2C3_BIT           (3)
#define SYSCTL_RCGCI2C_R_RCGCI2C3_DIS           (0x00000000)
#define SYSCTL_RCGCI2C_R_RCGCI2C3_EN            (0x00000008)

#define SYSCTL_RCGCI2C_RCGCI2C3_MASK         (0x00000001)
#define SYSCTL_RCGCI2C_RCGCI2C3_DIS          (0x00000000)
#define SYSCTL_RCGCI2C_RCGCI2C3_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCI2C_R_RCGCI2C4_MASK          (0x00000010)
#define SYSCTL_RCGCI2C_R_RCGCI2C4_BIT           (4)
#define SYSCTL_RCGCI2C_R_RCGCI2C4_DIS           (0x00000000)
#define SYSCTL_RCGCI2C_R_RCGCI2C4_EN            (0x00000010)

#define SYSCTL_RCGCI2C_RCGCI2C4_MASK         (0x00000001)
#define SYSCTL_RCGCI2C_RCGCI2C4_DIS          (0x00000000)
#define SYSCTL_RCGCI2C_RCGCI2C4_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCI2C_R_RCGCI2C5_MASK          (0x00000020)
#define SYSCTL_RCGCI2C_R_RCGCI2C5_BIT           (5)
#define SYSCTL_RCGCI2C_R_RCGCI2C5_DIS           (0x00000000)
#define SYSCTL_RCGCI2C_R_RCGCI2C5_EN            (0x00000020)

#define SYSCTL_RCGCI2C_RCGCI2C5_MASK         (0x00000001)
#define SYSCTL_RCGCI2C_RCGCI2C5_DIS          (0x00000000)
#define SYSCTL_RCGCI2C_RCGCI2C5_EN           (0x00000001)
//--------

#define SYSCTL_RCGCI2C_RCGCI2C0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGCI2C_RCGCI2C1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32)+(1*4))))
#define SYSCTL_RCGCI2C_RCGCI2C2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32)+(2*4))))
#define SYSCTL_RCGCI2C_RCGCI2C3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32)+(3*4))))
#define SYSCTL_RCGCI2C_RCGCI2C4_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32)+(4*4))))
#define SYSCTL_RCGCI2C_RCGCI2C5_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCI2C_OFFSET)*32)+(5*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////89 RCGCUSB ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_RCGCUSB_OFFSET     (0x0628)
#define SYSCTL_RCGCUSB            (((RCGCUSB_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCUSB_OFFSET )))
#define SYSCTL_RCGCUSB_R          (*((const volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCUSB_OFFSET)))

//--------
#define SYSCTL_RCGCUSB_R_RCGCUSB0_MASK          (0x00000001)
#define SYSCTL_RCGCUSB_R_RCGCUSB0_BIT           (0)
#define SYSCTL_RCGCUSB_R_RCGCUSB0_DIS           (0x00000000)
#define SYSCTL_RCGCUSB_R_RCGCUSB0_EN            (0x00000001)

#define SYSCTL_RCGCUSB_RCGCUSB0_MASK         (0x00000001)
#define SYSCTL_RCGCUSB_RCGCUSB0_DIS          (0x00000000)
#define SYSCTL_RCGCUSB_RCGCUSB0_EN           (0x00000001)
//--------

#define SYSCTL_RCGCUSB_RCGCUSB_BB    (*((const volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCUSB_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////90 RCGCCAN ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_RCGCCAN_OFFSET     (0x0634)
#define SYSCTL_RCGCCAN            (((RCGCCAN_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCCAN_OFFSET )))
#define SYSCTL_RCGCCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCCAN_OFFSET)))

//--------
#define SYSCTL_RCGCCAN_R_RCGCCAN0_MASK          (0x00000001)
#define SYSCTL_RCGCCAN_R_RCGCCAN0_BIT           (0)
#define SYSCTL_RCGCCAN_R_RCGCCAN0_DIS           (0x00000000)
#define SYSCTL_RCGCCAN_R_RCGCCAN0_EN            (0x00000001)

#define SYSCTL_RCGCCAN_RCGCCAN0_MASK         (0x00000001)
#define SYSCTL_RCGCCAN_RCGCCAN0_DIS          (0x00000000)
#define SYSCTL_RCGCCAN_RCGCCAN0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCCAN_R_RCGCCAN1_MASK          (0x00000002)
#define SYSCTL_RCGCCAN_R_RCGCCAN1_BIT           (1)
#define SYSCTL_RCGCCAN_R_RCGCCAN1_DIS           (0x00000000)
#define SYSCTL_RCGCCAN_R_RCGCCAN1_EN            (0x00000002)

#define SYSCTL_RCGCCAN_RCGCCAN1_MASK         (0x00000001)
#define SYSCTL_RCGCCAN_RCGCCAN1_DIS          (0x00000000)
#define SYSCTL_RCGCCAN_RCGCCAN1_EN           (0x00000001)
//--------

#define SYSCTL_RCGCCAN_RCGCCAN0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCCAN_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGCCAN_RCGCCAN1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCCAN_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////91 RCGCADC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_RCGCADC_OFFSET     (0x0638)
#define SYSCTL_RCGCADC            (((RCGCADC_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCADC_OFFSET )))
#define SYSCTL_RCGCADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCADC_OFFSET)))

//--------
#define SYSCTL_RCGCADC_R_RCGCADC0_MASK          (0x00000001)
#define SYSCTL_RCGCADC_R_RCGCADC0_BIT           (0)
#define SYSCTL_RCGCADC_R_RCGCADC0_DIS           (0x00000000)
#define SYSCTL_RCGCADC_R_RCGCADC0_EN            (0x00000001)

#define SYSCTL_RCGCADC_RCGCADC0_MASK         (0x00000001)
#define SYSCTL_RCGCADC_RCGCADC0_DIS          (0x00000000)
#define SYSCTL_RCGCADC_RCGCADC0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCADC_R_RCGCADC1_MASK          (0x00000002)
#define SYSCTL_RCGCADC_R_RCGCADC1_BIT           (1)
#define SYSCTL_RCGCADC_R_RCGCADC1_DIS           (0x00000000)
#define SYSCTL_RCGCADC_R_RCGCADC1_EN            (0x00000002)

#define SYSCTL_RCGCADC_RCGCADC1_MASK         (0x00000001)
#define SYSCTL_RCGCADC_RCGCADC1_DIS          (0x00000000)
#define SYSCTL_RCGCADC_RCGCADC1_EN           (0x00000001)
//--------

#define SYSCTL_RCGCADC_RCGCADC0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCADC_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGCADC_RCGCADC1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCADC_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////92 RCGCACMP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_RCGCACMP_OFFSET     (0x063C)
#define SYSCTL_RCGCACMP            (((RCGCACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCACMP_OFFSET )))
#define SYSCTL_RCGCACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCACMP_OFFSET)))

//--------
#define SYSCTL_RCGCACMP_R_RCGCACMP0_MASK          (0x00000001)
#define SYSCTL_RCGCACMP_R_RCGCACMP0_BIT           (0)
#define SYSCTL_RCGCACMP_R_RCGCACMP0_DIS           (0x00000000)
#define SYSCTL_RCGCACMP_R_RCGCACMP0_EN            (0x00000001)

#define SYSCTL_RCGCACMP_RCGCACMP0_MASK         (0x00000001)
#define SYSCTL_RCGCACMP_RCGCACMP0_DIS          (0x00000000)
#define SYSCTL_RCGCACMP_RCGCACMP0_EN           (0x00000001)
//--------

#define SYSCTL_RCGCACMP_RCGCACMP_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCACMP_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////93 RCGCPWM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_RCGCPWM_OFFSET     (0x0640)
#define SYSCTL_RCGCPWM            (((RCGCPWM_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCPWM_OFFSET )))
#define SYSCTL_RCGCPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCPWM_OFFSET)))

//--------
#define SYSCTL_RCGCPWM_R_RCGCPWM0_MASK          (0x00000001)
#define SYSCTL_RCGCPWM_R_RCGCPWM0_BIT           (0)
#define SYSCTL_RCGCPWM_R_RCGCPWM0_DIS           (0x00000000)
#define SYSCTL_RCGCPWM_R_RCGCPWM0_EN            (0x00000001)

#define SYSCTL_RCGCPWM_RCGCPWM0_MASK         (0x00000001)
#define SYSCTL_RCGCPWM_RCGCPWM0_DIS          (0x00000000)
#define SYSCTL_RCGCPWM_RCGCPWM0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCPWM_R_RCGCPWM1_MASK          (0x00000002)
#define SYSCTL_RCGCPWM_R_RCGCPWM1_BIT           (1)
#define SYSCTL_RCGCPWM_R_RCGCPWM1_DIS           (0x00000000)
#define SYSCTL_RCGCPWM_R_RCGCPWM1_EN            (0x00000002)

#define SYSCTL_RCGCPWM_RCGCPWM1_MASK         (0x00000001)
#define SYSCTL_RCGCPWM_RCGCPWM1_DIS          (0x00000000)
#define SYSCTL_RCGCPWM_RCGCPWM1_EN           (0x00000001)
//--------

#define SYSCTL_RCGCPWM_RCGCPWM0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCPWM_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGCPWM_RCGCPWM1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCPWM_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////94 RCGCQEI ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_RCGCQEI_OFFSET     (0x0644)
#define SYSCTL_RCGCQEI            (((RCGCQEI_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCQEI_OFFSET )))
#define SYSCTL_RCGCQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCQEI_OFFSET)))


//--------
#define SYSCTL_RCGCQEI_R_RCGCQEI0_MASK          (0x00000001)
#define SYSCTL_RCGCQEI_R_RCGCQEI0_BIT           (0)
#define SYSCTL_RCGCQEI_R_RCGCQEI0_DIS           (0x00000000)
#define SYSCTL_RCGCQEI_R_RCGCQEI0_EN            (0x00000001)

#define SYSCTL_RCGCQEI_RCGCQEI0_MASK         (0x00000001)
#define SYSCTL_RCGCQEI_RCGCQEI0_DIS          (0x00000000)
#define SYSCTL_RCGCQEI_RCGCQEI0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCQEI_R_RCGCQEI1_MASK          (0x00000002)
#define SYSCTL_RCGCQEI_R_RCGCQEI1_BIT           (1)
#define SYSCTL_RCGCQEI_R_RCGCQEI1_DIS           (0x00000000)
#define SYSCTL_RCGCQEI_R_RCGCQEI1_EN            (0x00000002)

#define SYSCTL_RCGCQEI_RCGCQEI1_MASK         (0x00000001)
#define SYSCTL_RCGCQEI_RCGCQEI1_DIS          (0x00000000)
#define SYSCTL_RCGCQEI_RCGCQEI1_EN           (0x00000001)
//--------

#define SYSCTL_RCGCQEI_RCGCQEI0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCQEI_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGCQEI_RCGCQEI1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCQEI_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////95 RCGCEEPROM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_RCGCEEPROM_OFFSET     (0x0658)
#define SYSCTL_RCGCEEPROM            (((RCGCEEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCEEPROM_OFFSET )))
#define SYSCTL_RCGCEEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCEEPROM_OFFSET)))

//--------
#define SYSCTL_RCGCEEPROM_R_RCGCEEPROM0_MASK          (0x00000001)
#define SYSCTL_RCGCEEPROM_R_RCGCEEPROM0_BIT           (0)
#define SYSCTL_RCGCEEPROM_R_RCGCEEPROM0_DIS           (0x00000000)
#define SYSCTL_RCGCEEPROM_R_RCGCEEPROM0_EN            (0x00000001)

#define SYSCTL_RCGCEEPROM_RCGCEEPROM0_MASK         (0x00000001)
#define SYSCTL_RCGCEEPROM_RCGCEEPROM0_DIS          (0x00000000)
#define SYSCTL_RCGCEEPROM_RCGCEEPROM0_EN           (0x00000001)
//--------

#define SYSCTL_RCGCEEPROM_RCGCEEPROM_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCEEPROM_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////96 RCGCWTIMER ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_RCGCWTIMER_OFFSET     (0x065C)
#define SYSCTL_RCGCWTIMER            (((RCGCWTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_RCGCWTIMER_OFFSET )))
#define SYSCTL_RCGCWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCWTIMER_OFFSET)))

//--------
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER0_MASK          (0x00000001)
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER0_BIT           (0)
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER0_DIS           (0x00000000)
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER0_EN            (0x00000001)

#define SYSCTL_RCGCWTIMER_RCGCWTIMER0_MASK         (0x00000001)
#define SYSCTL_RCGCWTIMER_RCGCWTIMER0_DIS          (0x00000000)
#define SYSCTL_RCGCWTIMER_RCGCWTIMER0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER1_MASK          (0x00000002)
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER1_BIT           (1)
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER1_DIS           (0x00000000)
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER1_EN            (0x00000002)

#define SYSCTL_RCGCWTIMER_RCGCWTIMER1_MASK         (0x00000001)
#define SYSCTL_RCGCWTIMER_RCGCWTIMER1_DIS          (0x00000000)
#define SYSCTL_RCGCWTIMER_RCGCWTIMER1_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER2_MASK          (0x00000004)
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER2_BIT           (2)
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER2_DIS           (0x00000000)
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER2_EN            (0x00000004)

#define SYSCTL_RCGCWTIMER_RCGCWTIMER2_MASK         (0x00000001)
#define SYSCTL_RCGCWTIMER_RCGCWTIMER2_DIS          (0x00000000)
#define SYSCTL_RCGCWTIMER_RCGCWTIMER2_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER3_MASK          (0x00000008)
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER3_BIT           (3)
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER3_DIS           (0x00000000)
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER3_EN            (0x00000008)

#define SYSCTL_RCGCWTIMER_RCGCWTIMER3_MASK         (0x00000001)
#define SYSCTL_RCGCWTIMER_RCGCWTIMER3_DIS          (0x00000000)
#define SYSCTL_RCGCWTIMER_RCGCWTIMER3_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER4_MASK          (0x00000010)
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER4_BIT           (4)
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER4_DIS           (0x00000000)
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER4_EN            (0x00000010)

#define SYSCTL_RCGCWTIMER_RCGCWTIMER4_MASK         (0x00000001)
#define SYSCTL_RCGCWTIMER_RCGCWTIMER4_DIS          (0x00000000)
#define SYSCTL_RCGCWTIMER_RCGCWTIMER4_EN           (0x00000001)
//--------

//--------
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER5_MASK          (0x00000020)
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER5_BIT           (5)
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER5_DIS           (0x00000000)
#define SYSCTL_RCGCWTIMER_R_RCGCWTIMER5_EN            (0x00000020)

#define SYSCTL_RCGCWTIMER_RCGCWTIMER5_MASK            (0x00000001)
#define SYSCTL_RCGCWTIMER_RCGCWTIMER5_DIS             (0x00000000)
#define SYSCTL_RCGCWTIMER_RCGCWTIMER5_EN              (0x00000001)
//--------

#define SYSCTL_RCGCWTIMER_RCGCWTIMER0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGCWTIMER_RCGCWTIMER1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_RCGCWTIMER_RCGCWTIMER2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_RCGCWTIMER_RCGCWTIMER3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_RCGCWTIMER_RCGCWTIMER4_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_RCGCWTIMER_RCGCWTIMER5_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_RCGCWTIMER_OFFSET)*32)+(5*4))))



//ToDo

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////97 SCGCWD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////




#define SYSCTL_SCGCWD_OFFSET     (0x0700)
#define SYSCTL_SCGCWD            (((SCGCWD_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCWD_OFFSET )))
#define SYSCTL_SCGCWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCWD_OFFSET)))

//--------
#define SYSCTL_SCGCWD_R_SCGCWDT0_MASK          (0x00000001)
#define SYSCTL_SCGCWD_R_SCGCWDT0_BIT           (0)
#define SYSCTL_SCGCWD_R_SCGCWDT0_DIS           (0x00000000)
#define SYSCTL_SCGCWD_R_SCGCWDT0_EN            (0x00000001)

#define SYSCTL_SCGCWD_SCGCWDT0_MASK         (0x00000001)
#define SYSCTL_SCGCWD_SCGCWDT0_DIS          (0x00000000)
#define SYSCTL_SCGCWD_SCGCWDT0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCWD_R_SCGCWDT1_MASK          (0x00000002)
#define SYSCTL_SCGCWD_R_SCGCWDT1_BIT           (1)
#define SYSCTL_SCGCWD_R_SCGCWDT1_DIS           (0x00000000)
#define SYSCTL_SCGCWD_R_SCGCWDT1_EN            (0x00000002)

#define SYSCTL_SCGCWD_SCGCWDT1_MASK         (0x00000001)
#define SYSCTL_SCGCWD_SCGCWDT1_DIS          (0x00000000)
#define SYSCTL_SCGCWD_SCGCWDT1_EN           (0x00000001)
//--------

#define SYSCTL_SCGCWD_SCGCWDT0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCWD_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCWD_SCGCWDT1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCWD_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////98 SCGCTIMER ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_SCGCTIMER_OFFSET     (0x0704)
#define SYSCTL_SCGCTIMER            (((SCGCTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCTIMER_OFFSET )))
#define SYSCTL_SCGCTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCTIMER_OFFSET)))

//--------
#define SYSCTL_SCGCTIMER_R_SCGCTIMER0_MASK          (0x00000001)
#define SYSCTL_SCGCTIMER_R_SCGCTIMER0_BIT           (0)
#define SYSCTL_SCGCTIMER_R_SCGCTIMER0_DIS           (0x00000000)
#define SYSCTL_SCGCTIMER_R_SCGCTIMER0_EN            (0x00000001)

#define SYSCTL_SCGCTIMER_SCGCTIMER0_MASK         (0x00000001)
#define SYSCTL_SCGCTIMER_SCGCTIMER0_DIS          (0x00000000)
#define SYSCTL_SCGCTIMER_SCGCTIMER0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCTIMER_R_SCGCTIMER1_MASK          (0x00000002)
#define SYSCTL_SCGCTIMER_R_SCGCTIMER1_BIT           (1)
#define SYSCTL_SCGCTIMER_R_SCGCTIMER1_DIS           (0x00000000)
#define SYSCTL_SCGCTIMER_R_SCGCTIMER1_EN            (0x00000002)

#define SYSCTL_SCGCTIMER_SCGCTIMER1_MASK         (0x00000001)
#define SYSCTL_SCGCTIMER_SCGCTIMER1_DIS          (0x00000000)
#define SYSCTL_SCGCTIMER_SCGCTIMER1_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCTIMER_R_SCGCTIMER2_MASK          (0x00000004)
#define SYSCTL_SCGCTIMER_R_SCGCTIMER2_BIT           (2)
#define SYSCTL_SCGCTIMER_R_SCGCTIMER2_DIS           (0x00000000)
#define SYSCTL_SCGCTIMER_R_SCGCTIMER2_EN            (0x00000004)

#define SYSCTL_SCGCTIMER_SCGCTIMER2_MASK         (0x00000001)
#define SYSCTL_SCGCTIMER_SCGCTIMER2_DIS          (0x00000000)
#define SYSCTL_SCGCTIMER_SCGCTIMER2_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCTIMER_R_SCGCTIMER3_MASK          (0x00000008)
#define SYSCTL_SCGCTIMER_R_SCGCTIMER3_BIT           (3)
#define SYSCTL_SCGCTIMER_R_SCGCTIMER3_DIS           (0x00000000)
#define SYSCTL_SCGCTIMER_R_SCGCTIMER3_EN            (0x00000008)

#define SYSCTL_SCGCTIMER_SCGCTIMER3_MASK         (0x00000001)
#define SYSCTL_SCGCTIMER_SCGCTIMER3_DIS          (0x00000000)
#define SYSCTL_SCGCTIMER_SCGCTIMER3_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCTIMER_R_SCGCTIMER4_MASK          (0x00000010)
#define SYSCTL_SCGCTIMER_R_SCGCTIMER4_BIT           (4)
#define SYSCTL_SCGCTIMER_R_SCGCTIMER4_DIS           (0x00000000)
#define SYSCTL_SCGCTIMER_R_SCGCTIMER4_EN            (0x00000010)

#define SYSCTL_SCGCTIMER_SCGCTIMER4_MASK         (0x00000001)
#define SYSCTL_SCGCTIMER_SCGCTIMER4_DIS          (0x00000000)
#define SYSCTL_SCGCTIMER_SCGCTIMER4_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCTIMER_R_SCGCTIMER5_MASK          (0x00000020)
#define SYSCTL_SCGCTIMER_R_SCGCTIMER5_BIT           (5)
#define SYSCTL_SCGCTIMER_R_SCGCTIMER5_DIS           (0x00000000)
#define SYSCTL_SCGCTIMER_R_SCGCTIMER5_EN            (0x00000020)

#define SYSCTL_SCGCTIMER_SCGCTIMER5_MASK         (0x00000001)
#define SYSCTL_SCGCTIMER_SCGCTIMER5_DIS          (0x00000000)
#define SYSCTL_SCGCTIMER_SCGCTIMER5_EN           (0x00000001)
//--------

#define SYSCTL_SCGCTIMER_SCGCTIMER0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCTIMER_SCGCTIMER1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_SCGCTIMER_SCGCTIMER2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_SCGCTIMER_SCGCTIMER3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_SCGCTIMER_SCGCTIMER4_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_SCGCTIMER_SCGCTIMER5_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32)+(5*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////99 SCGCGPIO ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_SCGCGPIO_OFFSET     (0x0708)
#define SYSCTL_SCGCGPIO            (((SCGCGPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCGPIO_OFFSET )))
#define SYSCTL_SCGCGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCGPIO_OFFSET)))


//--------
#define SYSCTL_SCGCGPIO_R_SCGCGPIOA_MASK          (0x00000001)
#define SYSCTL_SCGCGPIO_R_SCGCGPIOA_BIT           (0)
#define SYSCTL_SCGCGPIO_R_SCGCGPIOA_DIS           (0x00000000)
#define SYSCTL_SCGCGPIO_R_SCGCGPIOA_EN            (0x00000001)

#define SYSCTL_SCGCGPIO_SCGCGPIOA_MASK         (0x00000001)
#define SYSCTL_SCGCGPIO_SCGCGPIOA_DIS          (0x00000000)
#define SYSCTL_SCGCGPIO_SCGCGPIOA_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCGPIO_R_SCGCGPIOB_MASK          (0x00000002)
#define SYSCTL_SCGCGPIO_R_SCGCGPIOB_BIT           (1)
#define SYSCTL_SCGCGPIO_R_SCGCGPIOB_DIS           (0x00000000)
#define SYSCTL_SCGCGPIO_R_SCGCGPIOB_EN            (0x00000002)

#define SYSCTL_SCGCGPIO_SCGCGPIOB_MASK         (0x00000001)
#define SYSCTL_SCGCGPIO_SCGCGPIOB_DIS          (0x00000000)
#define SYSCTL_SCGCGPIO_SCGCGPIOB_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCGPIO_R_SCGCGPIOC_MASK          (0x00000004)
#define SYSCTL_SCGCGPIO_R_SCGCGPIOC_BIT           (2)
#define SYSCTL_SCGCGPIO_R_SCGCGPIOC_DIS           (0x00000000)
#define SYSCTL_SCGCGPIO_R_SCGCGPIOC_EN            (0x00000004)

#define SYSCTL_SCGCGPIO_SCGCGPIOC_MASK         (0x00000001)
#define SYSCTL_SCGCGPIO_SCGCGPIOC_DIS          (0x00000000)
#define SYSCTL_SCGCGPIO_SCGCGPIOC_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCGPIO_R_SCGCGPIOD_MASK          (0x00000008)
#define SYSCTL_SCGCGPIO_R_SCGCGPIOD_BIT           (3)
#define SYSCTL_SCGCGPIO_R_SCGCGPIOD_DIS           (0x00000000)
#define SYSCTL_SCGCGPIO_R_SCGCGPIOD_EN            (0x00000008)

#define SYSCTL_SCGCGPIO_SCGCGPIOD_MASK         (0x00000001)
#define SYSCTL_SCGCGPIO_SCGCGPIOD_DIS          (0x00000000)
#define SYSCTL_SCGCGPIO_SCGCGPIOD_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCGPIO_R_SCGCGPIOE_MASK          (0x00000010)
#define SYSCTL_SCGCGPIO_R_SCGCGPIOE_BIT           (4)
#define SYSCTL_SCGCGPIO_R_SCGCGPIOE_DIS           (0x00000000)
#define SYSCTL_SCGCGPIO_R_SCGCGPIOE_EN            (0x00000010)

#define SYSCTL_SCGCGPIO_SCGCGPIOE_MASK         (0x00000001)
#define SYSCTL_SCGCGPIO_SCGCGPIOE_DIS          (0x00000000)
#define SYSCTL_SCGCGPIO_SCGCGPIOE_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCGPIO_R_SCGCGPIOF_MASK          (0x00000020)
#define SYSCTL_SCGCGPIO_R_SCGCGPIOF_BIT           (5)
#define SYSCTL_SCGCGPIO_R_SCGCGPIOF_DIS           (0x00000000)
#define SYSCTL_SCGCGPIO_R_SCGCGPIOF_EN            (0x00000020)

#define SYSCTL_SCGCGPIO_SCGCGPIOF_MASK         (0x00000001)
#define SYSCTL_SCGCGPIO_SCGCGPIOF_DIS          (0x00000000)
#define SYSCTL_SCGCGPIO_SCGCGPIOF_EN           (0x00000001)
//--------


#define SYSCTL_SCGCGPIO_SCGCGPIOA_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCGPIO_SCGCGPIOB_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(1*4))))
#define SYSCTL_SCGCGPIO_SCGCGPIOC_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(2*4))))
#define SYSCTL_SCGCGPIO_SCGCGPIOD_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(3*4))))
#define SYSCTL_SCGCGPIO_SCGCGPIOE_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(4*4))))
#define SYSCTL_SCGCGPIO_SCGCGPIOF_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(5*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////100 SCGCDMA ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_SCGCDMA_OFFSET     (0x070C)
#define SYSCTL_SCGCDMA            (((SCGCDMA_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCDMA_OFFSET )))
#define SYSCTL_SCGCDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCDMA_OFFSET)))

//--------
#define SYSCTL_SCGCUDMA_R_SCGCUDMA_MASK          (0x00000001)
#define SYSCTL_SCGCUDMA_R_SCGCUDMA_BIT           (0)
#define SYSCTL_SCGCUDMA_R_SCGCUDMA_DIS           (0x00000000)
#define SYSCTL_SCGCUDMA_R_SCGCUDMA_EN            (0x00000001)

#define SYSCTL_SCGCUDMA_SCGCUDMA_MASK         (0x00000001)
#define SYSCTL_SCGCUDMA_SCGCUDMA_DIS          (0x00000000)
#define SYSCTL_SCGCUDMA_SCGCUDMA_EN           (0x00000001)
//--------

#define SYSCTL_SCGCDMA_SCGCUDMA_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCDMA_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////101 SCGCHIB ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_SCGCHIB_OFFSET     (0x0714)
#define SYSCTL_SCGCHIB            (((SCGCHIB_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCHIB_OFFSET )))
#define SYSCTL_SCGCHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCHIB_OFFSET)))

//--------
#define SYSCTL_SCGCHIB_R_SCGCHIB_MASK          (0x00000001)
#define SYSCTL_SCGCHIB_R_SCGCHIB_BIT           (0)
#define SYSCTL_SCGCHIB_R_SCGCHIB_DIS           (0x00000000)
#define SYSCTL_SCGCHIB_R_SCGCHIB_EN            (0x00000001)

#define SYSCTL_SCGCHIB_SCGCHIB_MASK         (0x00000001)
#define SYSCTL_SCGCHIB_SCGCHIB_DIS          (0x00000000)
#define SYSCTL_SCGCHIB_SCGCHIB_EN           (0x00000001)
//--------

#define SYSCTL_SCGCHIB_SCGCHIB_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCHIB_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////102 SCGCUART ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define SYSCTL_SCGCUART_OFFSET     (0x0718)
#define SYSCTL_SCGCUART            (((SCGCUART_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCUART_OFFSET )))
#define SYSCTL_SCGCUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCUART_OFFSET)))


//--------
#define SYSCTL_SCGCUART_R_SCGCUART0_MASK          (0x00000001)
#define SYSCTL_SCGCUART_R_SCGCUART0_BIT           (0)
#define SYSCTL_SCGCUART_R_SCGCUART0_DIS           (0x00000000)
#define SYSCTL_SCGCUART_R_SCGCUART0_EN            (0x00000001)

#define SYSCTL_SCGCUART_SCGCUART0_MASK         (0x00000001)
#define SYSCTL_SCGCUART_SCGCUART0_DIS          (0x00000000)
#define SYSCTL_SCGCUART_SCGCUART0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCUART_R_SCGCUART1_MASK          (0x00000002)
#define SYSCTL_SCGCUART_R_SCGCUART1_BIT           (1)
#define SYSCTL_SCGCUART_R_SCGCUART1_DIS           (0x00000000)
#define SYSCTL_SCGCUART_R_SCGCUART1_EN            (0x00000002)

#define SYSCTL_SCGCUART_SCGCUART1_MASK         (0x00000001)
#define SYSCTL_SCGCUART_SCGCUART1_DIS          (0x00000000)
#define SYSCTL_SCGCUART_SCGCUART1_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCUART_R_SCGCUART2_MASK          (0x00000004)
#define SYSCTL_SCGCUART_R_SCGCUART2_BIT           (2)
#define SYSCTL_SCGCUART_R_SCGCUART2_DIS           (0x00000000)
#define SYSCTL_SCGCUART_R_SCGCUART2_EN            (0x00000004)

#define SYSCTL_SCGCUART_SCGCUART2_MASK         (0x00000001)
#define SYSCTL_SCGCUART_SCGCUART2_DIS          (0x00000000)
#define SYSCTL_SCGCUART_SCGCUART2_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCUART_R_SCGCUART3_MASK          (0x00000008)
#define SYSCTL_SCGCUART_R_SCGCUART3_BIT           (3)
#define SYSCTL_SCGCUART_R_SCGCUART3_DIS           (0x00000000)
#define SYSCTL_SCGCUART_R_SCGCUART3_EN            (0x00000008)

#define SYSCTL_SCGCUART_SCGCUART3_MASK         (0x00000001)
#define SYSCTL_SCGCUART_SCGCUART3_DIS          (0x00000000)
#define SYSCTL_SCGCUART_SCGCUART3_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCUART_R_SCGCUART4_MASK          (0x00000010)
#define SYSCTL_SCGCUART_R_SCGCUART4_BIT           (4)
#define SYSCTL_SCGCUART_R_SCGCUART4_DIS           (0x00000000)
#define SYSCTL_SCGCUART_R_SCGCUART4_EN            (0x00000010)

#define SYSCTL_SCGCUART_SCGCUART4_MASK         (0x00000001)
#define SYSCTL_SCGCUART_SCGCUART4_DIS          (0x00000000)
#define SYSCTL_SCGCUART_SCGCUART4_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCUART_R_SCGCUART5_MASK          (0x00000020)
#define SYSCTL_SCGCUART_R_SCGCUART5_BIT           (5)
#define SYSCTL_SCGCUART_R_SCGCUART5_DIS           (0x00000000)
#define SYSCTL_SCGCUART_R_SCGCUART5_EN            (0x00000020)

#define SYSCTL_SCGCUART_SCGCUART5_MASK         (0x00000001)
#define SYSCTL_SCGCUART_SCGCUART5_DIS          (0x00000000)
#define SYSCTL_SCGCUART_SCGCUART5_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCUART_R_SCGCUART6_MASK          (0x00000040)
#define SYSCTL_SCGCUART_R_SCGCUART6_BIT           (6)
#define SYSCTL_SCGCUART_R_SCGCUART6_DIS           (0x00000000)
#define SYSCTL_SCGCUART_R_SCGCUART6_EN            (0x00000040)

#define SYSCTL_SCGCUART_SCGCUART6_MASK         (0x00000001)
#define SYSCTL_SCGCUART_SCGCUART6_DIS          (0x00000000)
#define SYSCTL_SCGCUART_SCGCUART6_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCUART_R_SCGCUART7_MASK          (0x00000080)
#define SYSCTL_SCGCUART_R_SCGCUART7_BIT           (7)
#define SYSCTL_SCGCUART_R_SCGCUART7_DIS           (0x00000000)
#define SYSCTL_SCGCUART_R_SCGCUART7_EN            (0x00000080)

#define SYSCTL_SCGCUART_SCGCUART7_MASK         (0x00000001)
#define SYSCTL_SCGCUART_SCGCUART7_DIS          (0x00000000)
#define SYSCTL_SCGCUART_SCGCUART7_EN           (0x00000001)
//--------


#define SYSCTL_SCGCUART_SCGCUART0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCUART_SCGCUART1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(1*4))))
#define SYSCTL_SCGCUART_SCGCUART2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(2*4))))
#define SYSCTL_SCGCUART_SCGCUART3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(3*4))))
#define SYSCTL_SCGCUART_SCGCUART4_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(4*4))))
#define SYSCTL_SCGCUART_SCGCUART5_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(5*4))))
#define SYSCTL_SCGCUART_SCGCUART6_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(6*4))))
#define SYSCTL_SCGCUART_SCGCUART7_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////103 SCGCSSI ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_SCGCSSI_OFFSET     (0x071C)
#define SYSCTL_SCGCSSI            (((SCGCSSI_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCSSI_OFFSET )))
#define SYSCTL_SCGCSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCSSI_OFFSET)))

//--------
#define SYSCTL_SCGCSSI_R_SCGCSSI0_MASK          (0x00000001)
#define SYSCTL_SCGCSSI_R_SCGCSSI0_BIT           (0)
#define SYSCTL_SCGCSSI_R_SCGCSSI0_DIS           (0x00000000)
#define SYSCTL_SCGCSSI_R_SCGCSSI0_EN            (0x00000001)

#define SYSCTL_SCGCSSI_SCGCSSI0_MASK         (0x00000001)
#define SYSCTL_SCGCSSI_SCGCSSI0_DIS          (0x00000000)
#define SYSCTL_SCGCSSI_SCGCSSI0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCSSI_R_SCGCSSI1_MASK          (0x00000002)
#define SYSCTL_SCGCSSI_R_SCGCSSI1_BIT           (1)
#define SYSCTL_SCGCSSI_R_SCGCSSI1_DIS           (0x00000000)
#define SYSCTL_SCGCSSI_R_SCGCSSI1_EN            (0x00000002)

#define SYSCTL_SCGCSSI_SCGCSSI1_MASK         (0x00000001)
#define SYSCTL_SCGCSSI_SCGCSSI1_DIS          (0x00000000)
#define SYSCTL_SCGCSSI_SCGCSSI1_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCSSI_R_SCGCSSI2_MASK          (0x00000004)
#define SYSCTL_SCGCSSI_R_SCGCSSI2_BIT           (2)
#define SYSCTL_SCGCSSI_R_SCGCSSI2_DIS           (0x00000000)
#define SYSCTL_SCGCSSI_R_SCGCSSI2_EN            (0x00000004)

#define SYSCTL_SCGCSSI_SCGCSSI2_MASK         (0x00000001)
#define SYSCTL_SCGCSSI_SCGCSSI2_DIS          (0x00000000)
#define SYSCTL_SCGCSSI_SCGCSSI2_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCSSI_R_SCGCSSI3_MASK          (0x00000008)
#define SYSCTL_SCGCSSI_R_SCGCSSI3_BIT           (3)
#define SYSCTL_SCGCSSI_R_SCGCSSI3_DIS           (0x00000000)
#define SYSCTL_SCGCSSI_R_SCGCSSI3_EN            (0x00000008)

#define SYSCTL_SCGCSSI_SCGCSSI3_MASK         (0x00000001)
#define SYSCTL_SCGCSSI_SCGCSSI3_DIS          (0x00000000)
#define SYSCTL_SCGCSSI_SCGCSSI3_EN           (0x00000001)
//--------


#define SYSCTL_SCGCSSI_SCGCSSI0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCSSI_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCSSI_SCGCSSI1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCSSI_OFFSET)*32)+(1*4))))
#define SYSCTL_SCGCSSI_SCGCSSI2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCSSI_OFFSET)*32)+(2*4))))
#define SYSCTL_SCGCSSI_SCGCSSI3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCSSI_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////104 SCGCI2C ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define SYSCTL_SCGCI2C_OFFSET     (0x0720)
#define SYSCTL_SCGCI2C            (((SCGCI2C_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCI2C_OFFSET )))
#define SYSCTL_SCGCI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCI2C_OFFSET)))

//--------
#define SYSCTL_SCGCI2C_R_SCGCI2C0_MASK          (0x00000001)
#define SYSCTL_SCGCI2C_R_SCGCI2C0_BIT           (0)
#define SYSCTL_SCGCI2C_R_SCGCI2C0_DIS           (0x00000000)
#define SYSCTL_SCGCI2C_R_SCGCI2C0_EN            (0x00000001)

#define SYSCTL_SCGCI2C_SCGCI2C0_MASK         (0x00000001)
#define SYSCTL_SCGCI2C_SCGCI2C0_DIS          (0x00000000)
#define SYSCTL_SCGCI2C_SCGCI2C0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCI2C_R_SCGCI2C1_MASK          (0x00000002)
#define SYSCTL_SCGCI2C_R_SCGCI2C1_BIT           (1)
#define SYSCTL_SCGCI2C_R_SCGCI2C1_DIS           (0x00000000)
#define SYSCTL_SCGCI2C_R_SCGCI2C1_EN            (0x00000002)

#define SYSCTL_SCGCI2C_SCGCI2C1_MASK         (0x00000001)
#define SYSCTL_SCGCI2C_SCGCI2C1_DIS          (0x00000000)
#define SYSCTL_SCGCI2C_SCGCI2C1_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCI2C_R_SCGCI2C2_MASK          (0x00000004)
#define SYSCTL_SCGCI2C_R_SCGCI2C2_BIT           (2)
#define SYSCTL_SCGCI2C_R_SCGCI2C2_DIS           (0x00000000)
#define SYSCTL_SCGCI2C_R_SCGCI2C2_EN            (0x00000004)

#define SYSCTL_SCGCI2C_SCGCI2C2_MASK         (0x00000001)
#define SYSCTL_SCGCI2C_SCGCI2C2_DIS          (0x00000000)
#define SYSCTL_SCGCI2C_SCGCI2C2_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCI2C_R_SCGCI2C3_MASK          (0x00000008)
#define SYSCTL_SCGCI2C_R_SCGCI2C3_BIT           (3)
#define SYSCTL_SCGCI2C_R_SCGCI2C3_DIS           (0x00000000)
#define SYSCTL_SCGCI2C_R_SCGCI2C3_EN            (0x00000008)

#define SYSCTL_SCGCI2C_SCGCI2C3_MASK         (0x00000001)
#define SYSCTL_SCGCI2C_SCGCI2C3_DIS          (0x00000000)
#define SYSCTL_SCGCI2C_SCGCI2C3_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCI2C_R_SCGCI2C4_MASK          (0x00000010)
#define SYSCTL_SCGCI2C_R_SCGCI2C4_BIT           (4)
#define SYSCTL_SCGCI2C_R_SCGCI2C4_DIS           (0x00000000)
#define SYSCTL_SCGCI2C_R_SCGCI2C4_EN            (0x00000010)

#define SYSCTL_SCGCI2C_SCGCI2C4_MASK         (0x00000001)
#define SYSCTL_SCGCI2C_SCGCI2C4_DIS          (0x00000000)
#define SYSCTL_SCGCI2C_SCGCI2C4_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCI2C_R_SCGCI2C5_MASK          (0x00000020)
#define SYSCTL_SCGCI2C_R_SCGCI2C5_BIT           (5)
#define SYSCTL_SCGCI2C_R_SCGCI2C5_DIS           (0x00000000)
#define SYSCTL_SCGCI2C_R_SCGCI2C5_EN            (0x00000020)

#define SYSCTL_SCGCI2C_SCGCI2C5_MASK         (0x00000001)
#define SYSCTL_SCGCI2C_SCGCI2C5_DIS          (0x00000000)
#define SYSCTL_SCGCI2C_SCGCI2C5_EN           (0x00000001)
//--------

#define SYSCTL_SCGCI2C_SCGCI2C0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCI2C_SCGCI2C1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32)+(1*4))))
#define SYSCTL_SCGCI2C_SCGCI2C2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32)+(2*4))))
#define SYSCTL_SCGCI2C_SCGCI2C3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32)+(3*4))))
#define SYSCTL_SCGCI2C_SCGCI2C4_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32)+(4*4))))
#define SYSCTL_SCGCI2C_SCGCI2C5_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32)+(5*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////105 SCGCUSB ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_SCGCUSB_OFFSET     (0x0728)
#define SYSCTL_SCGCUSB            (((SCGCUSB_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCUSB_OFFSET )))
#define SYSCTL_SCGCUSB_R          (*((const volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCUSB_OFFSET)))

//--------
#define SYSCTL_SCGCUSB_R_SCGCUSB0_MASK          (0x00000001)
#define SYSCTL_SCGCUSB_R_SCGCUSB0_BIT           (0)
#define SYSCTL_SCGCUSB_R_SCGCUSB0_DIS           (0x00000000)
#define SYSCTL_SCGCUSB_R_SCGCUSB0_EN            (0x00000001)

#define SYSCTL_SCGCUSB_SCGCUSB0_MASK         (0x00000001)
#define SYSCTL_SCGCUSB_SCGCUSB0_DIS          (0x00000000)
#define SYSCTL_SCGCUSB_SCGCUSB0_EN           (0x00000001)
//--------

#define SYSCTL_SCGCUSB_SCGCUSB_BB    (*((const volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCUSB_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////106 SCGCCAN ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_SCGCCAN_OFFSET     (0x0734)
#define SYSCTL_SCGCCAN            (((SCGCCAN_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCCAN_OFFSET )))
#define SYSCTL_SCGCCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCCAN_OFFSET)))

//--------
#define SYSCTL_SCGCCAN_R_SCGCCAN0_MASK          (0x00000001)
#define SYSCTL_SCGCCAN_R_SCGCCAN0_BIT           (0)
#define SYSCTL_SCGCCAN_R_SCGCCAN0_DIS           (0x00000000)
#define SYSCTL_SCGCCAN_R_SCGCCAN0_EN            (0x00000001)

#define SYSCTL_SCGCCAN_SCGCCAN0_MASK         (0x00000001)
#define SYSCTL_SCGCCAN_SCGCCAN0_DIS          (0x00000000)
#define SYSCTL_SCGCCAN_SCGCCAN0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCCAN_R_SCGCCAN1_MASK          (0x00000002)
#define SYSCTL_SCGCCAN_R_SCGCCAN1_BIT           (1)
#define SYSCTL_SCGCCAN_R_SCGCCAN1_DIS           (0x00000000)
#define SYSCTL_SCGCCAN_R_SCGCCAN1_EN            (0x00000002)

#define SYSCTL_SCGCCAN_SCGCCAN1_MASK         (0x00000001)
#define SYSCTL_SCGCCAN_SCGCCAN1_DIS          (0x00000000)
#define SYSCTL_SCGCCAN_SCGCCAN1_EN           (0x00000001)
//--------

#define SYSCTL_SCGCCAN_SCGCCAN0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCCAN_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCCAN_SCGCCAN1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCCAN_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////107 SCGCADC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_SCGCADC_OFFSET     (0x0738)
#define SYSCTL_SCGCADC            (((SCGCADC_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCADC_OFFSET )))
#define SYSCTL_SCGCADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCADC_OFFSET)))

//--------
#define SYSCTL_SCGCADC_R_SCGCADC0_MASK          (0x00000001)
#define SYSCTL_SCGCADC_R_SCGCADC0_BIT           (0)
#define SYSCTL_SCGCADC_R_SCGCADC0_DIS           (0x00000000)
#define SYSCTL_SCGCADC_R_SCGCADC0_EN            (0x00000001)

#define SYSCTL_SCGCADC_SCGCADC0_MASK         (0x00000001)
#define SYSCTL_SCGCADC_SCGCADC0_DIS          (0x00000000)
#define SYSCTL_SCGCADC_SCGCADC0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCADC_R_SCGCADC1_MASK          (0x00000002)
#define SYSCTL_SCGCADC_R_SCGCADC1_BIT           (1)
#define SYSCTL_SCGCADC_R_SCGCADC1_DIS           (0x00000000)
#define SYSCTL_SCGCADC_R_SCGCADC1_EN            (0x00000002)

#define SYSCTL_SCGCADC_SCGCADC1_MASK         (0x00000001)
#define SYSCTL_SCGCADC_SCGCADC1_DIS          (0x00000000)
#define SYSCTL_SCGCADC_SCGCADC1_EN           (0x00000001)
//--------

#define SYSCTL_SCGCADC_SCGCADC0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCADC_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCADC_SCGCADC1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCADC_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////108 SCGCACMP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_SCGCACMP_OFFSET     (0x073C)
#define SYSCTL_SCGCACMP            (((SCGCACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCACMP_OFFSET )))
#define SYSCTL_SCGCACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCACMP_OFFSET)))

//--------
#define SYSCTL_SCGCACMP_R_SCGCACMP0_MASK          (0x00000001)
#define SYSCTL_SCGCACMP_R_SCGCACMP0_BIT           (0)
#define SYSCTL_SCGCACMP_R_SCGCACMP0_DIS           (0x00000000)
#define SYSCTL_SCGCACMP_R_SCGCACMP0_EN            (0x00000001)

#define SYSCTL_SCGCACMP_SCGCACMP0_MASK         (0x00000001)
#define SYSCTL_SCGCACMP_SCGCACMP0_DIS          (0x00000000)
#define SYSCTL_SCGCACMP_SCGCACMP0_EN           (0x00000001)
//--------

#define SYSCTL_SCGCACMP_SCGCACMP_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCACMP_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////109 SCGCPWM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_SCGCPWM_OFFSET     (0x0740)
#define SYSCTL_SCGCPWM            (((SCGCPWM_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCPWM_OFFSET )))
#define SYSCTL_SCGCPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCPWM_OFFSET)))

//--------
#define SYSCTL_SCGCPWM_R_SCGCPWM0_MASK          (0x00000001)
#define SYSCTL_SCGCPWM_R_SCGCPWM0_BIT           (0)
#define SYSCTL_SCGCPWM_R_SCGCPWM0_DIS           (0x00000000)
#define SYSCTL_SCGCPWM_R_SCGCPWM0_EN            (0x00000001)

#define SYSCTL_SCGCPWM_SCGCPWM0_MASK         (0x00000001)
#define SYSCTL_SCGCPWM_SCGCPWM0_DIS          (0x00000000)
#define SYSCTL_SCGCPWM_SCGCPWM0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCPWM_R_SCGCPWM1_MASK          (0x00000002)
#define SYSCTL_SCGCPWM_R_SCGCPWM1_BIT           (1)
#define SYSCTL_SCGCPWM_R_SCGCPWM1_DIS           (0x00000000)
#define SYSCTL_SCGCPWM_R_SCGCPWM1_EN            (0x00000002)

#define SYSCTL_SCGCPWM_SCGCPWM1_MASK         (0x00000001)
#define SYSCTL_SCGCPWM_SCGCPWM1_DIS          (0x00000000)
#define SYSCTL_SCGCPWM_SCGCPWM1_EN           (0x00000001)
//--------

#define SYSCTL_SCGCPWM_SCGCPWM0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCPWM_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCPWM_SCGCPWM1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCPWM_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////110 SCGCQEI ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_SCGCQEI_OFFSET     (0x0744)
#define SYSCTL_SCGCQEI            (((SCGCQEI_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCQEI_OFFSET )))
#define SYSCTL_SCGCQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCQEI_OFFSET)))


//--------
#define SYSCTL_SCGCQEI_R_SCGCQEI0_MASK          (0x00000001)
#define SYSCTL_SCGCQEI_R_SCGCQEI0_BIT           (0)
#define SYSCTL_SCGCQEI_R_SCGCQEI0_DIS           (0x00000000)
#define SYSCTL_SCGCQEI_R_SCGCQEI0_EN            (0x00000001)

#define SYSCTL_SCGCQEI_SCGCQEI0_MASK         (0x00000001)
#define SYSCTL_SCGCQEI_SCGCQEI0_DIS          (0x00000000)
#define SYSCTL_SCGCQEI_SCGCQEI0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCQEI_R_SCGCQEI1_MASK          (0x00000002)
#define SYSCTL_SCGCQEI_R_SCGCQEI1_BIT           (1)
#define SYSCTL_SCGCQEI_R_SCGCQEI1_DIS           (0x00000000)
#define SYSCTL_SCGCQEI_R_SCGCQEI1_EN            (0x00000002)

#define SYSCTL_SCGCQEI_SCGCQEI1_MASK         (0x00000001)
#define SYSCTL_SCGCQEI_SCGCQEI1_DIS          (0x00000000)
#define SYSCTL_SCGCQEI_SCGCQEI1_EN           (0x00000001)
//--------

#define SYSCTL_SCGCQEI_SCGCQEI0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCQEI_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCQEI_SCGCQEI1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCQEI_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////111 SCGCEEPROM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_SCGCEEPROM_OFFSET     (0x0758)
#define SYSCTL_SCGCEEPROM            (((SCGCEEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCEEPROM_OFFSET )))
#define SYSCTL_SCGCEEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCEEPROM_OFFSET)))

//--------
#define SYSCTL_SCGCEEPROM_R_SCGCEEPROM0_MASK          (0x00000001)
#define SYSCTL_SCGCEEPROM_R_SCGCEEPROM0_BIT           (0)
#define SYSCTL_SCGCEEPROM_R_SCGCEEPROM0_DIS           (0x00000000)
#define SYSCTL_SCGCEEPROM_R_SCGCEEPROM0_EN            (0x00000001)

#define SYSCTL_SCGCEEPROM_SCGCEEPROM0_MASK         (0x00000001)
#define SYSCTL_SCGCEEPROM_SCGCEEPROM0_DIS          (0x00000000)
#define SYSCTL_SCGCEEPROM_SCGCEEPROM0_EN           (0x00000001)
//--------

#define SYSCTL_SCGCEEPROM_SCGCEEPROM_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCEEPROM_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////112 SCGCWTIMER ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_SCGCWTIMER_OFFSET     (0x075C)
#define SYSCTL_SCGCWTIMER            (((SCGCWTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_SCGCWTIMER_OFFSET )))
#define SYSCTL_SCGCWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCWTIMER_OFFSET)))

//--------
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER0_MASK          (0x00000001)
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER0_BIT           (0)
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER0_DIS           (0x00000000)
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER0_EN            (0x00000001)

#define SYSCTL_SCGCWTIMER_SCGCWTIMER0_MASK         (0x00000001)
#define SYSCTL_SCGCWTIMER_SCGCWTIMER0_DIS          (0x00000000)
#define SYSCTL_SCGCWTIMER_SCGCWTIMER0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER1_MASK          (0x00000002)
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER1_BIT           (1)
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER1_DIS           (0x00000000)
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER1_EN            (0x00000002)

#define SYSCTL_SCGCWTIMER_SCGCWTIMER1_MASK         (0x00000001)
#define SYSCTL_SCGCWTIMER_SCGCWTIMER1_DIS          (0x00000000)
#define SYSCTL_SCGCWTIMER_SCGCWTIMER1_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER2_MASK          (0x00000004)
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER2_BIT           (2)
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER2_DIS           (0x00000000)
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER2_EN            (0x00000004)

#define SYSCTL_SCGCWTIMER_SCGCWTIMER2_MASK         (0x00000001)
#define SYSCTL_SCGCWTIMER_SCGCWTIMER2_DIS          (0x00000000)
#define SYSCTL_SCGCWTIMER_SCGCWTIMER2_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER3_MASK          (0x00000008)
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER3_BIT           (3)
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER3_DIS           (0x00000000)
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER3_EN            (0x00000008)

#define SYSCTL_SCGCWTIMER_SCGCWTIMER3_MASK         (0x00000001)
#define SYSCTL_SCGCWTIMER_SCGCWTIMER3_DIS          (0x00000000)
#define SYSCTL_SCGCWTIMER_SCGCWTIMER3_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER4_MASK          (0x00000010)
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER4_BIT           (4)
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER4_DIS           (0x00000000)
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER4_EN            (0x00000010)

#define SYSCTL_SCGCWTIMER_SCGCWTIMER4_MASK         (0x00000001)
#define SYSCTL_SCGCWTIMER_SCGCWTIMER4_DIS          (0x00000000)
#define SYSCTL_SCGCWTIMER_SCGCWTIMER4_EN           (0x00000001)
//--------

//--------
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER5_MASK          (0x00000020)
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER5_BIT           (5)
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER5_DIS           (0x00000000)
#define SYSCTL_SCGCWTIMER_R_SCGCWTIMER5_EN            (0x00000020)

#define SYSCTL_SCGCWTIMER_SCGCWTIMER5_MASK            (0x00000001)
#define SYSCTL_SCGCWTIMER_SCGCWTIMER5_DIS             (0x00000000)
#define SYSCTL_SCGCWTIMER_SCGCWTIMER5_EN              (0x00000001)
//--------

#define SYSCTL_SCGCWTIMER_SCGCWTIMER0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCWTIMER_SCGCWTIMER1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_SCGCWTIMER_SCGCWTIMER2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_SCGCWTIMER_SCGCWTIMER3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_SCGCWTIMER_SCGCWTIMER4_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_SCGCWTIMER_SCGCWTIMER5_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32)+(5*4))))




//ToDo

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////113 DCGCWD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DCGCWD_OFFSET     (0x0800)
#define SYSCTL_DCGCWD            (((DCGCWD_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCWD_OFFSET )))
#define SYSCTL_DCGCWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCWD_OFFSET)))

//--------
#define SYSCTL_DCGCWD_R_DCGCWDT0_MASK          (0x00000001)
#define SYSCTL_DCGCWD_R_DCGCWDT0_BIT           (0)
#define SYSCTL_DCGCWD_R_DCGCWDT0_DIS           (0x00000000)
#define SYSCTL_DCGCWD_R_DCGCWDT0_EN            (0x00000001)

#define SYSCTL_DCGCWD_DCGCWDT0_MASK         (0x00000001)
#define SYSCTL_DCGCWD_DCGCWDT0_DIS          (0x00000000)
#define SYSCTL_DCGCWD_DCGCWDT0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCWD_R_DCGCWDT1_MASK          (0x00000002)
#define SYSCTL_DCGCWD_R_DCGCWDT1_BIT           (1)
#define SYSCTL_DCGCWD_R_DCGCWDT1_DIS           (0x00000000)
#define SYSCTL_DCGCWD_R_DCGCWDT1_EN            (0x00000002)

#define SYSCTL_DCGCWD_DCGCWDT1_MASK         (0x00000001)
#define SYSCTL_DCGCWD_DCGCWDT1_DIS          (0x00000000)
#define SYSCTL_DCGCWD_DCGCWDT1_EN           (0x00000001)
//--------

#define SYSCTL_DCGCWD_DCGCWDT0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCWD_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCWD_DCGCWDT1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCWD_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////114 DCGCTIMER ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DCGCTIMER_OFFSET     (0x0804)
#define SYSCTL_DCGCTIMER            (((DCGCTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCTIMER_OFFSET )))
#define SYSCTL_DCGCTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCTIMER_OFFSET)))

//--------
#define SYSCTL_DCGCTIMER_R_DCGCTIMER0_MASK          (0x00000001)
#define SYSCTL_DCGCTIMER_R_DCGCTIMER0_BIT           (0)
#define SYSCTL_DCGCTIMER_R_DCGCTIMER0_DIS           (0x00000000)
#define SYSCTL_DCGCTIMER_R_DCGCTIMER0_EN            (0x00000001)

#define SYSCTL_DCGCTIMER_DCGCTIMER0_MASK         (0x00000001)
#define SYSCTL_DCGCTIMER_DCGCTIMER0_DIS          (0x00000000)
#define SYSCTL_DCGCTIMER_DCGCTIMER0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCTIMER_R_DCGCTIMER1_MASK          (0x00000002)
#define SYSCTL_DCGCTIMER_R_DCGCTIMER1_BIT           (1)
#define SYSCTL_DCGCTIMER_R_DCGCTIMER1_DIS           (0x00000000)
#define SYSCTL_DCGCTIMER_R_DCGCTIMER1_EN            (0x00000002)

#define SYSCTL_DCGCTIMER_DCGCTIMER1_MASK         (0x00000001)
#define SYSCTL_DCGCTIMER_DCGCTIMER1_DIS          (0x00000000)
#define SYSCTL_DCGCTIMER_DCGCTIMER1_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCTIMER_R_DCGCTIMER2_MASK          (0x00000004)
#define SYSCTL_DCGCTIMER_R_DCGCTIMER2_BIT           (2)
#define SYSCTL_DCGCTIMER_R_DCGCTIMER2_DIS           (0x00000000)
#define SYSCTL_DCGCTIMER_R_DCGCTIMER2_EN            (0x00000004)

#define SYSCTL_DCGCTIMER_DCGCTIMER2_MASK         (0x00000001)
#define SYSCTL_DCGCTIMER_DCGCTIMER2_DIS          (0x00000000)
#define SYSCTL_DCGCTIMER_DCGCTIMER2_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCTIMER_R_DCGCTIMER3_MASK          (0x00000008)
#define SYSCTL_DCGCTIMER_R_DCGCTIMER3_BIT           (3)
#define SYSCTL_DCGCTIMER_R_DCGCTIMER3_DIS           (0x00000000)
#define SYSCTL_DCGCTIMER_R_DCGCTIMER3_EN            (0x00000008)

#define SYSCTL_DCGCTIMER_DCGCTIMER3_MASK         (0x00000001)
#define SYSCTL_DCGCTIMER_DCGCTIMER3_DIS          (0x00000000)
#define SYSCTL_DCGCTIMER_DCGCTIMER3_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCTIMER_R_DCGCTIMER4_MASK          (0x00000010)
#define SYSCTL_DCGCTIMER_R_DCGCTIMER4_BIT           (4)
#define SYSCTL_DCGCTIMER_R_DCGCTIMER4_DIS           (0x00000000)
#define SYSCTL_DCGCTIMER_R_DCGCTIMER4_EN            (0x00000010)

#define SYSCTL_DCGCTIMER_DCGCTIMER4_MASK         (0x00000001)
#define SYSCTL_DCGCTIMER_DCGCTIMER4_DIS          (0x00000000)
#define SYSCTL_DCGCTIMER_DCGCTIMER4_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCTIMER_R_DCGCTIMER5_MASK          (0x00000020)
#define SYSCTL_DCGCTIMER_R_DCGCTIMER5_BIT           (5)
#define SYSCTL_DCGCTIMER_R_DCGCTIMER5_DIS           (0x00000000)
#define SYSCTL_DCGCTIMER_R_DCGCTIMER5_EN            (0x00000020)

#define SYSCTL_DCGCTIMER_DCGCTIMER5_MASK         (0x00000001)
#define SYSCTL_DCGCTIMER_DCGCTIMER5_DIS          (0x00000000)
#define SYSCTL_DCGCTIMER_DCGCTIMER5_EN           (0x00000001)
//--------

#define SYSCTL_DCGCTIMER_DCGCTIMER0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCTIMER_DCGCTIMER1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_DCGCTIMER_DCGCTIMER2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_DCGCTIMER_DCGCTIMER3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_DCGCTIMER_DCGCTIMER4_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_DCGCTIMER_DCGCTIMER5_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32)+(5*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////115 DCGCGPIO ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_DCGCGPIO_OFFSET     (0x0808)
#define SYSCTL_DCGCGPIO            (((DCGCGPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCGPIO_OFFSET )))
#define SYSCTL_DCGCGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCGPIO_OFFSET)))


//--------
#define SYSCTL_DCGCGPIO_R_DCGCGPIOA_MASK          (0x00000001)
#define SYSCTL_DCGCGPIO_R_DCGCGPIOA_BIT           (0)
#define SYSCTL_DCGCGPIO_R_DCGCGPIOA_DIS           (0x00000000)
#define SYSCTL_DCGCGPIO_R_DCGCGPIOA_EN            (0x00000001)

#define SYSCTL_DCGCGPIO_DCGCGPIOA_MASK         (0x00000001)
#define SYSCTL_DCGCGPIO_DCGCGPIOA_DIS          (0x00000000)
#define SYSCTL_DCGCGPIO_DCGCGPIOA_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCGPIO_R_DCGCGPIOB_MASK          (0x00000002)
#define SYSCTL_DCGCGPIO_R_DCGCGPIOB_BIT           (1)
#define SYSCTL_DCGCGPIO_R_DCGCGPIOB_DIS           (0x00000000)
#define SYSCTL_DCGCGPIO_R_DCGCGPIOB_EN            (0x00000002)

#define SYSCTL_DCGCGPIO_DCGCGPIOB_MASK         (0x00000001)
#define SYSCTL_DCGCGPIO_DCGCGPIOB_DIS          (0x00000000)
#define SYSCTL_DCGCGPIO_DCGCGPIOB_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCGPIO_R_DCGCGPIOC_MASK          (0x00000004)
#define SYSCTL_DCGCGPIO_R_DCGCGPIOC_BIT           (2)
#define SYSCTL_DCGCGPIO_R_DCGCGPIOC_DIS           (0x00000000)
#define SYSCTL_DCGCGPIO_R_DCGCGPIOC_EN            (0x00000004)

#define SYSCTL_DCGCGPIO_DCGCGPIOC_MASK         (0x00000001)
#define SYSCTL_DCGCGPIO_DCGCGPIOC_DIS          (0x00000000)
#define SYSCTL_DCGCGPIO_DCGCGPIOC_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCGPIO_R_DCGCGPIOD_MASK          (0x00000008)
#define SYSCTL_DCGCGPIO_R_DCGCGPIOD_BIT           (3)
#define SYSCTL_DCGCGPIO_R_DCGCGPIOD_DIS           (0x00000000)
#define SYSCTL_DCGCGPIO_R_DCGCGPIOD_EN            (0x00000008)

#define SYSCTL_DCGCGPIO_DCGCGPIOD_MASK         (0x00000001)
#define SYSCTL_DCGCGPIO_DCGCGPIOD_DIS          (0x00000000)
#define SYSCTL_DCGCGPIO_DCGCGPIOD_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCGPIO_R_DCGCGPIOE_MASK          (0x00000010)
#define SYSCTL_DCGCGPIO_R_DCGCGPIOE_BIT           (4)
#define SYSCTL_DCGCGPIO_R_DCGCGPIOE_DIS           (0x00000000)
#define SYSCTL_DCGCGPIO_R_DCGCGPIOE_EN            (0x00000010)

#define SYSCTL_DCGCGPIO_DCGCGPIOE_MASK         (0x00000001)
#define SYSCTL_DCGCGPIO_DCGCGPIOE_DIS          (0x00000000)
#define SYSCTL_DCGCGPIO_DCGCGPIOE_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCGPIO_R_DCGCGPIOF_MASK          (0x00000020)
#define SYSCTL_DCGCGPIO_R_DCGCGPIOF_BIT           (5)
#define SYSCTL_DCGCGPIO_R_DCGCGPIOF_DIS           (0x00000000)
#define SYSCTL_DCGCGPIO_R_DCGCGPIOF_EN            (0x00000020)

#define SYSCTL_DCGCGPIO_DCGCGPIOF_MASK         (0x00000001)
#define SYSCTL_DCGCGPIO_DCGCGPIOF_DIS          (0x00000000)
#define SYSCTL_DCGCGPIO_DCGCGPIOF_EN           (0x00000001)
//--------


#define SYSCTL_DCGCGPIO_DCGCGPIOA_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCGPIO_DCGCGPIOB_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(1*4))))
#define SYSCTL_DCGCGPIO_DCGCGPIOC_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(2*4))))
#define SYSCTL_DCGCGPIO_DCGCGPIOD_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(3*4))))
#define SYSCTL_DCGCGPIO_DCGCGPIOE_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(4*4))))
#define SYSCTL_DCGCGPIO_DCGCGPIOF_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(5*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////116 DCGCDMA ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DCGCDMA_OFFSET     (0x080C)
#define SYSCTL_DCGCDMA            (((DCGCDMA_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCDMA_OFFSET )))
#define SYSCTL_DCGCDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCDMA_OFFSET)))

//--------
#define SYSCTL_DCGCUDMA_R_DCGCUDMA_MASK          (0x00000001)
#define SYSCTL_DCGCUDMA_R_DCGCUDMA_BIT           (0)
#define SYSCTL_DCGCUDMA_R_DCGCUDMA_DIS           (0x00000000)
#define SYSCTL_DCGCUDMA_R_DCGCUDMA_EN            (0x00000001)

#define SYSCTL_DCGCUDMA_DCGCUDMA_MASK         (0x00000001)
#define SYSCTL_DCGCUDMA_DCGCUDMA_DIS          (0x00000000)
#define SYSCTL_DCGCUDMA_DCGCUDMA_EN           (0x00000001)
//--------

#define SYSCTL_DCGCDMA_DCGCUDMA_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCDMA_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////117 DCGCHIB ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_DCGCHIB_OFFSET     (0x0814)
#define SYSCTL_DCGCHIB            (((DCGCHIB_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCHIB_OFFSET )))
#define SYSCTL_DCGCHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCHIB_OFFSET)))

//--------
#define SYSCTL_DCGCHIB_R_DCGCHIB_MASK          (0x00000001)
#define SYSCTL_DCGCHIB_R_DCGCHIB_BIT           (0)
#define SYSCTL_DCGCHIB_R_DCGCHIB_DIS           (0x00000000)
#define SYSCTL_DCGCHIB_R_DCGCHIB_EN            (0x00000001)

#define SYSCTL_DCGCHIB_DCGCHIB_MASK         (0x00000001)
#define SYSCTL_DCGCHIB_DCGCHIB_DIS          (0x00000000)
#define SYSCTL_DCGCHIB_DCGCHIB_EN           (0x00000001)
//--------

#define SYSCTL_DCGCHIB_DCGCHIB_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCHIB_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////118 DCGCUART ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define SYSCTL_DCGCUART_OFFSET     (0x0818)
#define SYSCTL_DCGCUART            (((DCGCUART_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCUART_OFFSET )))
#define SYSCTL_DCGCUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCUART_OFFSET)))


//--------
#define SYSCTL_DCGCUART_R_DCGCUART0_MASK          (0x00000001)
#define SYSCTL_DCGCUART_R_DCGCUART0_BIT           (0)
#define SYSCTL_DCGCUART_R_DCGCUART0_DIS           (0x00000000)
#define SYSCTL_DCGCUART_R_DCGCUART0_EN            (0x00000001)

#define SYSCTL_DCGCUART_DCGCUART0_MASK         (0x00000001)
#define SYSCTL_DCGCUART_DCGCUART0_DIS          (0x00000000)
#define SYSCTL_DCGCUART_DCGCUART0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCUART_R_DCGCUART1_MASK          (0x00000002)
#define SYSCTL_DCGCUART_R_DCGCUART1_BIT           (1)
#define SYSCTL_DCGCUART_R_DCGCUART1_DIS           (0x00000000)
#define SYSCTL_DCGCUART_R_DCGCUART1_EN            (0x00000002)

#define SYSCTL_DCGCUART_DCGCUART1_MASK         (0x00000001)
#define SYSCTL_DCGCUART_DCGCUART1_DIS          (0x00000000)
#define SYSCTL_DCGCUART_DCGCUART1_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCUART_R_DCGCUART2_MASK          (0x00000004)
#define SYSCTL_DCGCUART_R_DCGCUART2_BIT           (2)
#define SYSCTL_DCGCUART_R_DCGCUART2_DIS           (0x00000000)
#define SYSCTL_DCGCUART_R_DCGCUART2_EN            (0x00000004)

#define SYSCTL_DCGCUART_DCGCUART2_MASK         (0x00000001)
#define SYSCTL_DCGCUART_DCGCUART2_DIS          (0x00000000)
#define SYSCTL_DCGCUART_DCGCUART2_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCUART_R_DCGCUART3_MASK          (0x00000008)
#define SYSCTL_DCGCUART_R_DCGCUART3_BIT           (3)
#define SYSCTL_DCGCUART_R_DCGCUART3_DIS           (0x00000000)
#define SYSCTL_DCGCUART_R_DCGCUART3_EN            (0x00000008)

#define SYSCTL_DCGCUART_DCGCUART3_MASK         (0x00000001)
#define SYSCTL_DCGCUART_DCGCUART3_DIS          (0x00000000)
#define SYSCTL_DCGCUART_DCGCUART3_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCUART_R_DCGCUART4_MASK          (0x00000010)
#define SYSCTL_DCGCUART_R_DCGCUART4_BIT           (4)
#define SYSCTL_DCGCUART_R_DCGCUART4_DIS           (0x00000000)
#define SYSCTL_DCGCUART_R_DCGCUART4_EN            (0x00000010)

#define SYSCTL_DCGCUART_DCGCUART4_MASK         (0x00000001)
#define SYSCTL_DCGCUART_DCGCUART4_DIS          (0x00000000)
#define SYSCTL_DCGCUART_DCGCUART4_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCUART_R_DCGCUART5_MASK          (0x00000020)
#define SYSCTL_DCGCUART_R_DCGCUART5_BIT           (5)
#define SYSCTL_DCGCUART_R_DCGCUART5_DIS           (0x00000000)
#define SYSCTL_DCGCUART_R_DCGCUART5_EN            (0x00000020)

#define SYSCTL_DCGCUART_DCGCUART5_MASK         (0x00000001)
#define SYSCTL_DCGCUART_DCGCUART5_DIS          (0x00000000)
#define SYSCTL_DCGCUART_DCGCUART5_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCUART_R_DCGCUART6_MASK          (0x00000040)
#define SYSCTL_DCGCUART_R_DCGCUART6_BIT           (6)
#define SYSCTL_DCGCUART_R_DCGCUART6_DIS           (0x00000000)
#define SYSCTL_DCGCUART_R_DCGCUART6_EN            (0x00000040)

#define SYSCTL_DCGCUART_DCGCUART6_MASK         (0x00000001)
#define SYSCTL_DCGCUART_DCGCUART6_DIS          (0x00000000)
#define SYSCTL_DCGCUART_DCGCUART6_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCUART_R_DCGCUART7_MASK          (0x00000080)
#define SYSCTL_DCGCUART_R_DCGCUART7_BIT           (7)
#define SYSCTL_DCGCUART_R_DCGCUART7_DIS           (0x00000000)
#define SYSCTL_DCGCUART_R_DCGCUART7_EN            (0x00000080)

#define SYSCTL_DCGCUART_DCGCUART7_MASK         (0x00000001)
#define SYSCTL_DCGCUART_DCGCUART7_DIS          (0x00000000)
#define SYSCTL_DCGCUART_DCGCUART7_EN           (0x00000001)
//--------


#define SYSCTL_DCGCUART_DCGCUART0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCUART_DCGCUART1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(1*4))))
#define SYSCTL_DCGCUART_DCGCUART2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(2*4))))
#define SYSCTL_DCGCUART_DCGCUART3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(3*4))))
#define SYSCTL_DCGCUART_DCGCUART4_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(4*4))))
#define SYSCTL_DCGCUART_DCGCUART5_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(5*4))))
#define SYSCTL_DCGCUART_DCGCUART6_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(6*4))))
#define SYSCTL_DCGCUART_DCGCUART7_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////119 DCGCSSI ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_DCGCSSI_OFFSET     (0x081C)
#define SYSCTL_DCGCSSI            (((DCGCSSI_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCSSI_OFFSET )))
#define SYSCTL_DCGCSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCSSI_OFFSET)))

//--------
#define SYSCTL_DCGCSSI_R_DCGCSSI0_MASK          (0x00000001)
#define SYSCTL_DCGCSSI_R_DCGCSSI0_BIT           (0)
#define SYSCTL_DCGCSSI_R_DCGCSSI0_DIS           (0x00000000)
#define SYSCTL_DCGCSSI_R_DCGCSSI0_EN            (0x00000001)

#define SYSCTL_DCGCSSI_DCGCSSI0_MASK         (0x00000001)
#define SYSCTL_DCGCSSI_DCGCSSI0_DIS          (0x00000000)
#define SYSCTL_DCGCSSI_DCGCSSI0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCSSI_R_DCGCSSI1_MASK          (0x00000002)
#define SYSCTL_DCGCSSI_R_DCGCSSI1_BIT           (1)
#define SYSCTL_DCGCSSI_R_DCGCSSI1_DIS           (0x00000000)
#define SYSCTL_DCGCSSI_R_DCGCSSI1_EN            (0x00000002)

#define SYSCTL_DCGCSSI_DCGCSSI1_MASK         (0x00000001)
#define SYSCTL_DCGCSSI_DCGCSSI1_DIS          (0x00000000)
#define SYSCTL_DCGCSSI_DCGCSSI1_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCSSI_R_DCGCSSI2_MASK          (0x00000004)
#define SYSCTL_DCGCSSI_R_DCGCSSI2_BIT           (2)
#define SYSCTL_DCGCSSI_R_DCGCSSI2_DIS           (0x00000000)
#define SYSCTL_DCGCSSI_R_DCGCSSI2_EN            (0x00000004)

#define SYSCTL_DCGCSSI_DCGCSSI2_MASK         (0x00000001)
#define SYSCTL_DCGCSSI_DCGCSSI2_DIS          (0x00000000)
#define SYSCTL_DCGCSSI_DCGCSSI2_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCSSI_R_DCGCSSI3_MASK          (0x00000008)
#define SYSCTL_DCGCSSI_R_DCGCSSI3_BIT           (3)
#define SYSCTL_DCGCSSI_R_DCGCSSI3_DIS           (0x00000000)
#define SYSCTL_DCGCSSI_R_DCGCSSI3_EN            (0x00000008)

#define SYSCTL_DCGCSSI_DCGCSSI3_MASK         (0x00000001)
#define SYSCTL_DCGCSSI_DCGCSSI3_DIS          (0x00000000)
#define SYSCTL_DCGCSSI_DCGCSSI3_EN           (0x00000001)
//--------


#define SYSCTL_DCGCSSI_DCGCSSI0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCSSI_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCSSI_DCGCSSI1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCSSI_OFFSET)*32)+(1*4))))
#define SYSCTL_DCGCSSI_DCGCSSI2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCSSI_OFFSET)*32)+(2*4))))
#define SYSCTL_DCGCSSI_DCGCSSI3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCSSI_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////120 DCGCI2C ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define SYSCTL_DCGCI2C_OFFSET     (0x0820)
#define SYSCTL_DCGCI2C            (((DCGCI2C_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCI2C_OFFSET )))
#define SYSCTL_DCGCI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCI2C_OFFSET)))

//--------
#define SYSCTL_DCGCI2C_R_DCGCI2C0_MASK          (0x00000001)
#define SYSCTL_DCGCI2C_R_DCGCI2C0_BIT           (0)
#define SYSCTL_DCGCI2C_R_DCGCI2C0_DIS           (0x00000000)
#define SYSCTL_DCGCI2C_R_DCGCI2C0_EN            (0x00000001)

#define SYSCTL_DCGCI2C_DCGCI2C0_MASK         (0x00000001)
#define SYSCTL_DCGCI2C_DCGCI2C0_DIS          (0x00000000)
#define SYSCTL_DCGCI2C_DCGCI2C0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCI2C_R_DCGCI2C1_MASK          (0x00000002)
#define SYSCTL_DCGCI2C_R_DCGCI2C1_BIT           (1)
#define SYSCTL_DCGCI2C_R_DCGCI2C1_DIS           (0x00000000)
#define SYSCTL_DCGCI2C_R_DCGCI2C1_EN            (0x00000002)

#define SYSCTL_DCGCI2C_DCGCI2C1_MASK         (0x00000001)
#define SYSCTL_DCGCI2C_DCGCI2C1_DIS          (0x00000000)
#define SYSCTL_DCGCI2C_DCGCI2C1_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCI2C_R_DCGCI2C2_MASK          (0x00000004)
#define SYSCTL_DCGCI2C_R_DCGCI2C2_BIT           (2)
#define SYSCTL_DCGCI2C_R_DCGCI2C2_DIS           (0x00000000)
#define SYSCTL_DCGCI2C_R_DCGCI2C2_EN            (0x00000004)

#define SYSCTL_DCGCI2C_DCGCI2C2_MASK         (0x00000001)
#define SYSCTL_DCGCI2C_DCGCI2C2_DIS          (0x00000000)
#define SYSCTL_DCGCI2C_DCGCI2C2_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCI2C_R_DCGCI2C3_MASK          (0x00000008)
#define SYSCTL_DCGCI2C_R_DCGCI2C3_BIT           (3)
#define SYSCTL_DCGCI2C_R_DCGCI2C3_DIS           (0x00000000)
#define SYSCTL_DCGCI2C_R_DCGCI2C3_EN            (0x00000008)

#define SYSCTL_DCGCI2C_DCGCI2C3_MASK         (0x00000001)
#define SYSCTL_DCGCI2C_DCGCI2C3_DIS          (0x00000000)
#define SYSCTL_DCGCI2C_DCGCI2C3_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCI2C_R_DCGCI2C4_MASK          (0x00000010)
#define SYSCTL_DCGCI2C_R_DCGCI2C4_BIT           (4)
#define SYSCTL_DCGCI2C_R_DCGCI2C4_DIS           (0x00000000)
#define SYSCTL_DCGCI2C_R_DCGCI2C4_EN            (0x00000010)

#define SYSCTL_DCGCI2C_DCGCI2C4_MASK         (0x00000001)
#define SYSCTL_DCGCI2C_DCGCI2C4_DIS          (0x00000000)
#define SYSCTL_DCGCI2C_DCGCI2C4_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCI2C_R_DCGCI2C5_MASK          (0x00000020)
#define SYSCTL_DCGCI2C_R_DCGCI2C5_BIT           (5)
#define SYSCTL_DCGCI2C_R_DCGCI2C5_DIS           (0x00000000)
#define SYSCTL_DCGCI2C_R_DCGCI2C5_EN            (0x00000020)

#define SYSCTL_DCGCI2C_DCGCI2C5_MASK         (0x00000001)
#define SYSCTL_DCGCI2C_DCGCI2C5_DIS          (0x00000000)
#define SYSCTL_DCGCI2C_DCGCI2C5_EN           (0x00000001)
//--------

#define SYSCTL_DCGCI2C_DCGCI2C0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCI2C_DCGCI2C1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32)+(1*4))))
#define SYSCTL_DCGCI2C_DCGCI2C2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32)+(2*4))))
#define SYSCTL_DCGCI2C_DCGCI2C3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32)+(3*4))))
#define SYSCTL_DCGCI2C_DCGCI2C4_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32)+(4*4))))
#define SYSCTL_DCGCI2C_DCGCI2C5_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32)+(5*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////121 DCGCUSB ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DCGCUSB_OFFSET     (0x0828)
#define SYSCTL_DCGCUSB            (((DCGCUSB_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCUSB_OFFSET )))
#define SYSCTL_DCGCUSB_R          (*((const volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCUSB_OFFSET)))

//--------
#define SYSCTL_DCGCUSB_R_DCGCUSB0_MASK          (0x00000001)
#define SYSCTL_DCGCUSB_R_DCGCUSB0_BIT           (0)
#define SYSCTL_DCGCUSB_R_DCGCUSB0_DIS           (0x00000000)
#define SYSCTL_DCGCUSB_R_DCGCUSB0_EN            (0x00000001)

#define SYSCTL_DCGCUSB_DCGCUSB0_MASK         (0x00000001)
#define SYSCTL_DCGCUSB_DCGCUSB0_DIS          (0x00000000)
#define SYSCTL_DCGCUSB_DCGCUSB0_EN           (0x00000001)
//--------

#define SYSCTL_DCGCUSB_DCGCUSB_BB    (*((const volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCUSB_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////122 DCGCCAN ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_DCGCCAN_OFFSET     (0x0834)
#define SYSCTL_DCGCCAN            (((DCGCCAN_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCCAN_OFFSET )))
#define SYSCTL_DCGCCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCCAN_OFFSET)))

//--------
#define SYSCTL_DCGCCAN_R_DCGCCAN0_MASK          (0x00000001)
#define SYSCTL_DCGCCAN_R_DCGCCAN0_BIT           (0)
#define SYSCTL_DCGCCAN_R_DCGCCAN0_DIS           (0x00000000)
#define SYSCTL_DCGCCAN_R_DCGCCAN0_EN            (0x00000001)

#define SYSCTL_DCGCCAN_DCGCCAN0_MASK         (0x00000001)
#define SYSCTL_DCGCCAN_DCGCCAN0_DIS          (0x00000000)
#define SYSCTL_DCGCCAN_DCGCCAN0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCCAN_R_DCGCCAN1_MASK          (0x00000002)
#define SYSCTL_DCGCCAN_R_DCGCCAN1_BIT           (1)
#define SYSCTL_DCGCCAN_R_DCGCCAN1_DIS           (0x00000000)
#define SYSCTL_DCGCCAN_R_DCGCCAN1_EN            (0x00000002)

#define SYSCTL_DCGCCAN_DCGCCAN1_MASK         (0x00000001)
#define SYSCTL_DCGCCAN_DCGCCAN1_DIS          (0x00000000)
#define SYSCTL_DCGCCAN_DCGCCAN1_EN           (0x00000001)
//--------

#define SYSCTL_DCGCCAN_DCGCCAN0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCCAN_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCCAN_DCGCCAN1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCCAN_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////123 DCGCADC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_DCGCADC_OFFSET     (0x0838)
#define SYSCTL_DCGCADC            (((DCGCADC_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCADC_OFFSET )))
#define SYSCTL_DCGCADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCADC_OFFSET)))

//--------
#define SYSCTL_DCGCADC_R_DCGCADC0_MASK          (0x00000001)
#define SYSCTL_DCGCADC_R_DCGCADC0_BIT           (0)
#define SYSCTL_DCGCADC_R_DCGCADC0_DIS           (0x00000000)
#define SYSCTL_DCGCADC_R_DCGCADC0_EN            (0x00000001)

#define SYSCTL_DCGCADC_DCGCADC0_MASK         (0x00000001)
#define SYSCTL_DCGCADC_DCGCADC0_DIS          (0x00000000)
#define SYSCTL_DCGCADC_DCGCADC0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCADC_R_DCGCADC1_MASK          (0x00000002)
#define SYSCTL_DCGCADC_R_DCGCADC1_BIT           (1)
#define SYSCTL_DCGCADC_R_DCGCADC1_DIS           (0x00000000)
#define SYSCTL_DCGCADC_R_DCGCADC1_EN            (0x00000002)

#define SYSCTL_DCGCADC_DCGCADC1_MASK         (0x00000001)
#define SYSCTL_DCGCADC_DCGCADC1_DIS          (0x00000000)
#define SYSCTL_DCGCADC_DCGCADC1_EN           (0x00000001)
//--------

#define SYSCTL_DCGCADC_DCGCADC0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCADC_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCADC_DCGCADC1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCADC_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////124 DCGCACMP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_DCGCACMP_OFFSET     (0x083C)
#define SYSCTL_DCGCACMP            (((DCGCACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCACMP_OFFSET )))
#define SYSCTL_DCGCACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCACMP_OFFSET)))

//--------
#define SYSCTL_DCGCACMP_R_DCGCACMP0_MASK          (0x00000001)
#define SYSCTL_DCGCACMP_R_DCGCACMP0_BIT           (0)
#define SYSCTL_DCGCACMP_R_DCGCACMP0_DIS           (0x00000000)
#define SYSCTL_DCGCACMP_R_DCGCACMP0_EN            (0x00000001)

#define SYSCTL_DCGCACMP_DCGCACMP0_MASK         (0x00000001)
#define SYSCTL_DCGCACMP_DCGCACMP0_DIS          (0x00000000)
#define SYSCTL_DCGCACMP_DCGCACMP0_EN           (0x00000001)
//--------

#define SYSCTL_DCGCACMP_DCGCACMP_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCACMP_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////125 DCGCPWM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_DCGCPWM_OFFSET     (0x0840)
#define SYSCTL_DCGCPWM            (((DCGCPWM_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCPWM_OFFSET )))
#define SYSCTL_DCGCPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCPWM_OFFSET)))

//--------
#define SYSCTL_DCGCPWM_R_DCGCPWM0_MASK          (0x00000001)
#define SYSCTL_DCGCPWM_R_DCGCPWM0_BIT           (0)
#define SYSCTL_DCGCPWM_R_DCGCPWM0_DIS           (0x00000000)
#define SYSCTL_DCGCPWM_R_DCGCPWM0_EN            (0x00000001)

#define SYSCTL_DCGCPWM_DCGCPWM0_MASK         (0x00000001)
#define SYSCTL_DCGCPWM_DCGCPWM0_DIS          (0x00000000)
#define SYSCTL_DCGCPWM_DCGCPWM0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCPWM_R_DCGCPWM1_MASK          (0x00000002)
#define SYSCTL_DCGCPWM_R_DCGCPWM1_BIT           (1)
#define SYSCTL_DCGCPWM_R_DCGCPWM1_DIS           (0x00000000)
#define SYSCTL_DCGCPWM_R_DCGCPWM1_EN            (0x00000002)

#define SYSCTL_DCGCPWM_DCGCPWM1_MASK         (0x00000001)
#define SYSCTL_DCGCPWM_DCGCPWM1_DIS          (0x00000000)
#define SYSCTL_DCGCPWM_DCGCPWM1_EN           (0x00000001)
//--------

#define SYSCTL_DCGCPWM_DCGCPWM0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCPWM_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCPWM_DCGCPWM1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCPWM_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////126 DCGCQEI ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_DCGCQEI_OFFSET     (0x0844)
#define SYSCTL_DCGCQEI            (((DCGCQEI_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCQEI_OFFSET )))
#define SYSCTL_DCGCQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCQEI_OFFSET)))


//--------
#define SYSCTL_DCGCQEI_R_DCGCQEI0_MASK          (0x00000001)
#define SYSCTL_DCGCQEI_R_DCGCQEI0_BIT           (0)
#define SYSCTL_DCGCQEI_R_DCGCQEI0_DIS           (0x00000000)
#define SYSCTL_DCGCQEI_R_DCGCQEI0_EN            (0x00000001)

#define SYSCTL_DCGCQEI_DCGCQEI0_MASK         (0x00000001)
#define SYSCTL_DCGCQEI_DCGCQEI0_DIS          (0x00000000)
#define SYSCTL_DCGCQEI_DCGCQEI0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCQEI_R_DCGCQEI1_MASK          (0x00000002)
#define SYSCTL_DCGCQEI_R_DCGCQEI1_BIT           (1)
#define SYSCTL_DCGCQEI_R_DCGCQEI1_DIS           (0x00000000)
#define SYSCTL_DCGCQEI_R_DCGCQEI1_EN            (0x00000002)

#define SYSCTL_DCGCQEI_DCGCQEI1_MASK         (0x00000001)
#define SYSCTL_DCGCQEI_DCGCQEI1_DIS          (0x00000000)
#define SYSCTL_DCGCQEI_DCGCQEI1_EN           (0x00000001)
//--------

#define SYSCTL_DCGCQEI_DCGCQEI0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCQEI_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCQEI_DCGCQEI1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCQEI_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////127 DCGCEEPROM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_DCGCEEPROM_OFFSET     (0x0858)
#define SYSCTL_DCGCEEPROM            (((DCGCEEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCEEPROM_OFFSET )))
#define SYSCTL_DCGCEEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCEEPROM_OFFSET)))

//--------
#define SYSCTL_DCGCEEPROM_R_DCGCEEPROM0_MASK          (0x00000001)
#define SYSCTL_DCGCEEPROM_R_DCGCEEPROM0_BIT           (0)
#define SYSCTL_DCGCEEPROM_R_DCGCEEPROM0_DIS           (0x00000000)
#define SYSCTL_DCGCEEPROM_R_DCGCEEPROM0_EN            (0x00000001)

#define SYSCTL_DCGCEEPROM_DCGCEEPROM0_MASK         (0x00000001)
#define SYSCTL_DCGCEEPROM_DCGCEEPROM0_DIS          (0x00000000)
#define SYSCTL_DCGCEEPROM_DCGCEEPROM0_EN           (0x00000001)
//--------

#define SYSCTL_DCGCEEPROM_DCGCEEPROM_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCEEPROM_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////128 DCGCWTIMER ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_DCGCWTIMER_OFFSET     (0x085C)
#define SYSCTL_DCGCWTIMER            (((DCGCWTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_DCGCWTIMER_OFFSET )))
#define SYSCTL_DCGCWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCWTIMER_OFFSET)))

//--------
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER0_MASK          (0x00000001)
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER0_BIT           (0)
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER0_DIS           (0x00000000)
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER0_EN            (0x00000001)

#define SYSCTL_DCGCWTIMER_DCGCWTIMER0_MASK         (0x00000001)
#define SYSCTL_DCGCWTIMER_DCGCWTIMER0_DIS          (0x00000000)
#define SYSCTL_DCGCWTIMER_DCGCWTIMER0_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER1_MASK          (0x00000002)
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER1_BIT           (1)
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER1_DIS           (0x00000000)
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER1_EN            (0x00000002)

#define SYSCTL_DCGCWTIMER_DCGCWTIMER1_MASK         (0x00000001)
#define SYSCTL_DCGCWTIMER_DCGCWTIMER1_DIS          (0x00000000)
#define SYSCTL_DCGCWTIMER_DCGCWTIMER1_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER2_MASK          (0x00000004)
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER2_BIT           (2)
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER2_DIS           (0x00000000)
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER2_EN            (0x00000004)

#define SYSCTL_DCGCWTIMER_DCGCWTIMER2_MASK         (0x00000001)
#define SYSCTL_DCGCWTIMER_DCGCWTIMER2_DIS          (0x00000000)
#define SYSCTL_DCGCWTIMER_DCGCWTIMER2_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER3_MASK          (0x00000008)
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER3_BIT           (3)
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER3_DIS           (0x00000000)
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER3_EN            (0x00000008)

#define SYSCTL_DCGCWTIMER_DCGCWTIMER3_MASK         (0x00000001)
#define SYSCTL_DCGCWTIMER_DCGCWTIMER3_DIS          (0x00000000)
#define SYSCTL_DCGCWTIMER_DCGCWTIMER3_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER4_MASK          (0x00000010)
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER4_BIT           (4)
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER4_DIS           (0x00000000)
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER4_EN            (0x00000010)

#define SYSCTL_DCGCWTIMER_DCGCWTIMER4_MASK         (0x00000001)
#define SYSCTL_DCGCWTIMER_DCGCWTIMER4_DIS          (0x00000000)
#define SYSCTL_DCGCWTIMER_DCGCWTIMER4_EN           (0x00000001)
//--------

//--------
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER5_MASK          (0x00000020)
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER5_BIT           (5)
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER5_DIS           (0x00000000)
#define SYSCTL_DCGCWTIMER_R_DCGCWTIMER5_EN            (0x00000020)

#define SYSCTL_DCGCWTIMER_DCGCWTIMER5_MASK            (0x00000001)
#define SYSCTL_DCGCWTIMER_DCGCWTIMER5_DIS             (0x00000000)
#define SYSCTL_DCGCWTIMER_DCGCWTIMER5_EN              (0x00000001)
//--------

#define SYSCTL_DCGCWTIMER_DCGCWTIMER0_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCWTIMER_DCGCWTIMER1_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_DCGCWTIMER_DCGCWTIMER2_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_DCGCWTIMER_DCGCWTIMER3_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_DCGCWTIMER_DCGCWTIMER4_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_DCGCWTIMER_DCGCWTIMER5_BB    (*((volatile uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32)+(5*4))))



//todo

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////129 PRWD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_PRWD_OFFSET     (0x0A00)
#define SYSCTL_PRWD            (((PRWD_TypeDef*)(SYSCTL_BASE+SYSCTL_PRWD_OFFSET )))
#define SYSCTL_PRWD_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRWD_OFFSET)))

//--------
#define SYSCTL_PRWD_R_PRWDT0_MASK          (0x00000001)
#define SYSCTL_PRWD_R_PRWDT0_BIT           (0)
#define SYSCTL_PRWD_R_PRWDT0_NORDY         (0x00000000)
#define SYSCTL_PRWD_R_PRWDT0_RDY           (0x00000001)

#define SYSCTL_PRWD_PRWDT0_MASK         (0x00000001)
#define SYSCTL_PRWD_PRWDT0_NORDY        (0x00000000)
#define SYSCTL_PRWD_PRWDT0_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRWD_R_PRWDT1_MASK          (0x00000002)
#define SYSCTL_PRWD_R_PRWDT1_BIT           (1)
#define SYSCTL_PRWD_R_PRWDT1_NORDY         (0x00000000)
#define SYSCTL_PRWD_R_PRWDT1_RDY           (0x00000002)

#define SYSCTL_PRWD_PRWDT1_MASK         (0x00000001)
#define SYSCTL_PRWD_PRWDT1_NORDY        (0x00000000)
#define SYSCTL_PRWD_PRWDT1_RDY          (0x00000001)
//--------

#define SYSCTL_PRWD_PRWDT0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRWD_OFFSET)*32)+(0*4))))
#define SYSCTL_PRWD_PRWDT1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRWD_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////130 PRTIMER ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_PRTIMER_OFFSET     (0x0A04)
#define SYSCTL_PRTIMER            (((PRTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_PRTIMER_OFFSET )))
#define SYSCTL_PRTIMER_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRTIMER_OFFSET)))

//--------
#define SYSCTL_PRTIMER_R_PRTIMER0_MASK          (0x00000001)
#define SYSCTL_PRTIMER_R_PRTIMER0_BIT           (0)
#define SYSCTL_PRTIMER_R_PRTIMER0_NORDY         (0x00000000)
#define SYSCTL_PRTIMER_R_PRTIMER0_RDY           (0x00000001)

#define SYSCTL_PRTIMER_PRTIMER0_MASK         (0x00000001)
#define SYSCTL_PRTIMER_PRTIMER0_NORDY        (0x00000000)
#define SYSCTL_PRTIMER_PRTIMER0_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRTIMER_R_PRTIMER1_MASK          (0x00000002)
#define SYSCTL_PRTIMER_R_PRTIMER1_BIT           (1)
#define SYSCTL_PRTIMER_R_PRTIMER1_NORDY         (0x00000000)
#define SYSCTL_PRTIMER_R_PRTIMER1_RDY           (0x00000002)

#define SYSCTL_PRTIMER_PRTIMER1_MASK         (0x00000001)
#define SYSCTL_PRTIMER_PRTIMER1_NORDY        (0x00000000)
#define SYSCTL_PRTIMER_PRTIMER1_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRTIMER_R_PRTIMER2_MASK          (0x00000004)
#define SYSCTL_PRTIMER_R_PRTIMER2_BIT           (2)
#define SYSCTL_PRTIMER_R_PRTIMER2_NORDY         (0x00000000)
#define SYSCTL_PRTIMER_R_PRTIMER2_RDY           (0x00000004)

#define SYSCTL_PRTIMER_PRTIMER2_MASK         (0x00000001)
#define SYSCTL_PRTIMER_PRTIMER2_NORDY        (0x00000000)
#define SYSCTL_PRTIMER_PRTIMER2_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRTIMER_R_PRTIMER3_MASK          (0x00000008)
#define SYSCTL_PRTIMER_R_PRTIMER3_BIT           (3)
#define SYSCTL_PRTIMER_R_PRTIMER3_NORDY         (0x00000000)
#define SYSCTL_PRTIMER_R_PRTIMER3_RDY           (0x00000008)

#define SYSCTL_PRTIMER_PRTIMER3_MASK         (0x00000001)
#define SYSCTL_PRTIMER_PRTIMER3_NORDY        (0x00000000)
#define SYSCTL_PRTIMER_PRTIMER3_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRTIMER_R_PRTIMER4_MASK          (0x00000010)
#define SYSCTL_PRTIMER_R_PRTIMER4_BIT           (4)
#define SYSCTL_PRTIMER_R_PRTIMER4_NORDY         (0x00000000)
#define SYSCTL_PRTIMER_R_PRTIMER4_RDY           (0x00000010)

#define SYSCTL_PRTIMER_PRTIMER4_MASK         (0x00000001)
#define SYSCTL_PRTIMER_PRTIMER4_NORDY        (0x00000000)
#define SYSCTL_PRTIMER_PRTIMER4_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRTIMER_R_PRTIMER5_MASK          (0x00000020)
#define SYSCTL_PRTIMER_R_PRTIMER5_BIT           (5)
#define SYSCTL_PRTIMER_R_PRTIMER5_NORDY         (0x00000000)
#define SYSCTL_PRTIMER_R_PRTIMER5_RDY           (0x00000020)

#define SYSCTL_PRTIMER_PRTIMER5_MASK         (0x00000001)
#define SYSCTL_PRTIMER_PRTIMER5_NORDY        (0x00000000)
#define SYSCTL_PRTIMER_PRTIMER5_RDY          (0x00000001)
//--------

#define SYSCTL_PRTIMER_PRTIMER0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_PRTIMER_PRTIMER1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_PRTIMER_PRTIMER2_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_PRTIMER_PRTIMER3_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_PRTIMER_PRTIMER4_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_PRTIMER_PRTIMER5_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32)+(5*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////131 PRGPIO ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PRGPIO_OFFSET     (0x0A08)
#define SYSCTL_PRGPIO            (((PRGPIO_TypeDef*)(SYSCTL_BASE+SYSCTL_PRGPIO_OFFSET )))
#define SYSCTL_PRGPIO_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRGPIO_OFFSET)))


//--------
#define SYSCTL_PRGPIO_R_PRGPIOA_MASK          (0x00000001)
#define SYSCTL_PRGPIO_R_PRGPIOA_BIT           (0)
#define SYSCTL_PRGPIO_R_PRGPIOA_NORDY         (0x00000000)
#define SYSCTL_PRGPIO_R_PRGPIOA_RDY           (0x00000001)

#define SYSCTL_PRGPIO_PRGPIOA_MASK         (0x00000001)
#define SYSCTL_PRGPIO_PRGPIOA_NORDY        (0x00000000)
#define SYSCTL_PRGPIO_PRGPIOA_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRGPIO_R_PRGPIOB_MASK          (0x00000002)
#define SYSCTL_PRGPIO_R_PRGPIOB_BIT           (1)
#define SYSCTL_PRGPIO_R_PRGPIOB_NORDY         (0x00000000)
#define SYSCTL_PRGPIO_R_PRGPIOB_RDY           (0x00000002)

#define SYSCTL_PRGPIO_PRGPIOB_MASK         (0x00000001)
#define SYSCTL_PRGPIO_PRGPIOB_NORDY        (0x00000000)
#define SYSCTL_PRGPIO_PRGPIOB_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRGPIO_R_PRGPIOC_MASK          (0x00000004)
#define SYSCTL_PRGPIO_R_PRGPIOC_BIT           (2)
#define SYSCTL_PRGPIO_R_PRGPIOC_NORDY         (0x00000000)
#define SYSCTL_PRGPIO_R_PRGPIOC_RDY           (0x00000004)

#define SYSCTL_PRGPIO_PRGPIOC_MASK         (0x00000001)
#define SYSCTL_PRGPIO_PRGPIOC_NORDY        (0x00000000)
#define SYSCTL_PRGPIO_PRGPIOC_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRGPIO_R_PRGPIOD_MASK         (0x00000008)
#define SYSCTL_PRGPIO_R_PRGPIOD_BIT          (3)
#define SYSCTL_PRGPIO_R_PRGPIOD_NORDY        (0x00000000)
#define SYSCTL_PRGPIO_R_PRGPIOD_RDY          (0x00000008)

#define SYSCTL_PRGPIO_PRGPIOD_MASK         (0x00000001)
#define SYSCTL_PRGPIO_PRGPIOD_NORDY        (0x00000000)
#define SYSCTL_PRGPIO_PRGPIOD_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRGPIO_R_PRGPIOE_MASK          (0x00000010)
#define SYSCTL_PRGPIO_R_PRGPIOE_BIT           (4)
#define SYSCTL_PRGPIO_R_PRGPIOE_NORDY         (0x00000000)
#define SYSCTL_PRGPIO_R_PRGPIOE_RDY           (0x00000010)

#define SYSCTL_PRGPIO_PRGPIOE_MASK         (0x00000001)
#define SYSCTL_PRGPIO_PRGPIOE_NORDY        (0x00000000)
#define SYSCTL_PRGPIO_PRGPIOE_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRGPIO_R_PRGPIOF_MASK          (0x00000020)
#define SYSCTL_PRGPIO_R_PRGPIOF_BIT           (5)
#define SYSCTL_PRGPIO_R_PRGPIOF_NORDY         (0x00000000)
#define SYSCTL_PRGPIO_R_PRGPIOF_RDY           (0x00000020)

#define SYSCTL_PRGPIO_PRGPIOF_MASK         (0x00000001)
#define SYSCTL_PRGPIO_PRGPIOF_NORDY        (0x00000000)
#define SYSCTL_PRGPIO_PRGPIOF_RDY          (0x00000001)
//--------


#define SYSCTL_PRGPIO_PRGPIOA_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(0*4))))
#define SYSCTL_PRGPIO_PRGPIOB_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(1*4))))
#define SYSCTL_PRGPIO_PRGPIOC_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(2*4))))
#define SYSCTL_PRGPIO_PRGPIOD_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(3*4))))
#define SYSCTL_PRGPIO_PRGPIOE_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(4*4))))
#define SYSCTL_PRGPIO_PRGPIOF_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(5*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////132 PRDMA ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_PRDMA_OFFSET     (0x0A0C)
#define SYSCTL_PRDMA            (((PRDMA_TypeDef*)(SYSCTL_BASE+SYSCTL_PRDMA_OFFSET )))
#define SYSCTL_PRDMA_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRDMA_OFFSET)))

//--------
#define SYSCTL_PRUDMA_R_PRUDMA_MASK          (0x00000001)
#define SYSCTL_PRUDMA_R_PRUDMA_BIT           (0)
#define SYSCTL_PRUDMA_R_PRUDMA_NORDY         (0x00000000)
#define SYSCTL_PRUDMA_R_PRUDMA_RDY           (0x00000001)

#define SYSCTL_PRUDMA_PRUDMA_MASK         (0x00000001)
#define SYSCTL_PRUDMA_PRUDMA_NORDY        (0x00000000)
#define SYSCTL_PRUDMA_PRUDMA_RDY          (0x00000001)
//--------

#define SYSCTL_PRDMA_PRUDMA_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRDMA_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////133 PRHIB ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PRHIB_OFFSET     (0x0A14)
#define SYSCTL_PRHIB            (((PRHIB_TypeDef*)(SYSCTL_BASE+SYSCTL_PRHIB_OFFSET )))
#define SYSCTL_PRHIB_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRHIB_OFFSET)))

//--------
#define SYSCTL_PRHIB_R_PRHIB_MASK          (0x00000001)
#define SYSCTL_PRHIB_R_PRHIB_BIT           (0)
#define SYSCTL_PRHIB_R_PRHIB_NORDY         (0x00000000)
#define SYSCTL_PRHIB_R_PRHIB_RDY           (0x00000001)

#define SYSCTL_PRHIB_PRHIB_MASK         (0x00000001)
#define SYSCTL_PRHIB_PRHIB_NORDY        (0x00000000)
#define SYSCTL_PRHIB_PRHIB_RDY          (0x00000001)
//--------

#define SYSCTL_PRHIB_PRHIB_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRHIB_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////134 PRUART ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define SYSCTL_PRUART_OFFSET     (0x0A18)
#define SYSCTL_PRUART            (((PRUART_TypeDef*)(SYSCTL_BASE+SYSCTL_PRUART_OFFSET )))
#define SYSCTL_PRUART_R          (*((volatile const unsigned  long *)(SYSCTL_BASE+SYSCTL_PRUART_OFFSET)))


//--------
#define SYSCTL_PRUART_R_PRUART0_MASK          (0x00000001)
#define SYSCTL_PRUART_R_PRUART0_BIT           (0)
#define SYSCTL_PRUART_R_PRUART0_NORDY         (0x00000000)
#define SYSCTL_PRUART_R_PRUART0_RDY           (0x00000001)

#define SYSCTL_PRUART_PRUART0_MASK         (0x00000001)
#define SYSCTL_PRUART_PRUART0_NORDY        (0x00000000)
#define SYSCTL_PRUART_PRUART0_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRUART_R_PRUART1_MASK          (0x00000002)
#define SYSCTL_PRUART_R_PRUART1_BIT           (1)
#define SYSCTL_PRUART_R_PRUART1_NORDY         (0x00000000)
#define SYSCTL_PRUART_R_PRUART1_RDY           (0x00000002)

#define SYSCTL_PRUART_PRUART1_MASK         (0x00000001)
#define SYSCTL_PRUART_PRUART1_NORDY        (0x00000000)
#define SYSCTL_PRUART_PRUART1_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRUART_R_PRUART2_MASK          (0x00000004)
#define SYSCTL_PRUART_R_PRUART2_BIT           (2)
#define SYSCTL_PRUART_R_PRUART2_NORDY         (0x00000000)
#define SYSCTL_PRUART_R_PRUART2_RDY           (0x00000004)

#define SYSCTL_PRUART_PRUART2_MASK         (0x00000001)
#define SYSCTL_PRUART_PRUART2_NORDY        (0x00000000)
#define SYSCTL_PRUART_PRUART2_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRUART_R_PRUART3_MASK          (0x00000008)
#define SYSCTL_PRUART_R_PRUART3_BIT           (3)
#define SYSCTL_PRUART_R_PRUART3_NORDY         (0x00000000)
#define SYSCTL_PRUART_R_PRUART3_RDY           (0x00000008)

#define SYSCTL_PRUART_PRUART3_MASK         (0x00000001)
#define SYSCTL_PRUART_PRUART3_NORDY        (0x00000000)
#define SYSCTL_PRUART_PRUART3_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRUART_R_PRUART4_MASK          (0x00000010)
#define SYSCTL_PRUART_R_PRUART4_BIT           (4)
#define SYSCTL_PRUART_R_PRUART4_NORDY         (0x00000000)
#define SYSCTL_PRUART_R_PRUART4_RDY           (0x00000010)

#define SYSCTL_PRUART_PRUART4_MASK         (0x00000001)
#define SYSCTL_PRUART_PRUART4_NORDY        (0x00000000)
#define SYSCTL_PRUART_PRUART4_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRUART_R_PRUART5_MASK          (0x00000020)
#define SYSCTL_PRUART_R_PRUART5_BIT           (5)
#define SYSCTL_PRUART_R_PRUART5_NORDY         (0x00000000)
#define SYSCTL_PRUART_R_PRUART5_RDY           (0x00000020)

#define SYSCTL_PRUART_PRUART5_MASK         (0x00000001)
#define SYSCTL_PRUART_PRUART5_NORDY        (0x00000000)
#define SYSCTL_PRUART_PRUART5_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRUART_R_PRUART6_MASK          (0x00000040)
#define SYSCTL_PRUART_R_PRUART6_BIT           (6)
#define SYSCTL_PRUART_R_PRUART6_NORDY         (0x00000000)
#define SYSCTL_PRUART_R_PRUART6_RDY           (0x00000040)

#define SYSCTL_PRUART_PRUART6_MASK         (0x00000001)
#define SYSCTL_PRUART_PRUART6_NORDY        (0x00000000)
#define SYSCTL_PRUART_PRUART6_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRUART_R_PRUART7_MASK          (0x00000080)
#define SYSCTL_PRUART_R_PRUART7_BIT           (7)
#define SYSCTL_PRUART_R_PRUART7_NORDY         (0x00000000)
#define SYSCTL_PRUART_R_PRUART7_RDY           (0x00000080)

#define SYSCTL_PRUART_PRUART7_MASK         (0x00000001)
#define SYSCTL_PRUART_PRUART7_NORDY        (0x00000000)
#define SYSCTL_PRUART_PRUART7_RDY          (0x00000001)
//--------


#define SYSCTL_PRUART_PRUART0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(0*4))))
#define SYSCTL_PRUART_PRUART1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(1*4))))
#define SYSCTL_PRUART_PRUART2_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(2*4))))
#define SYSCTL_PRUART_PRUART3_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(3*4))))
#define SYSCTL_PRUART_PRUART4_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(4*4))))
#define SYSCTL_PRUART_PRUART5_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(5*4))))
#define SYSCTL_PRUART_PRUART6_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(6*4))))
#define SYSCTL_PRUART_PRUART7_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////135 PRSSI ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PRSSI_OFFSET     (0x0A1C)
#define SYSCTL_PRSSI            (((PRSSI_TypeDef*)(SYSCTL_BASE+SYSCTL_PRSSI_OFFSET )))
#define SYSCTL_PRSSI_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRSSI_OFFSET)))

//--------
#define SYSCTL_PRSSI_R_PRSSI0_MASK          (0x00000001)
#define SYSCTL_PRSSI_R_PRSSI0_BIT           (0)
#define SYSCTL_PRSSI_R_PRSSI0_NORDY         (0x00000000)
#define SYSCTL_PRSSI_R_PRSSI0_RDY           (0x00000001)

#define SYSCTL_PRSSI_PRSSI0_MASK         (0x00000001)
#define SYSCTL_PRSSI_PRSSI0_NORDY        (0x00000000)
#define SYSCTL_PRSSI_PRSSI0_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRSSI_R_PRSSI1_MASK          (0x00000002)
#define SYSCTL_PRSSI_R_PRSSI1_BIT           (1)
#define SYSCTL_PRSSI_R_PRSSI1_NORDY         (0x00000000)
#define SYSCTL_PRSSI_R_PRSSI1_RDY           (0x00000002)

#define SYSCTL_PRSSI_PRSSI1_MASK         (0x00000001)
#define SYSCTL_PRSSI_PRSSI1_NORDY        (0x00000000)
#define SYSCTL_PRSSI_PRSSI1_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRSSI_R_PRSSI2_MASK          (0x00000004)
#define SYSCTL_PRSSI_R_PRSSI2_BIT           (2)
#define SYSCTL_PRSSI_R_PRSSI2_NORDY         (0x00000000)
#define SYSCTL_PRSSI_R_PRSSI2_RDY           (0x00000004)

#define SYSCTL_PRSSI_PRSSI2_MASK         (0x00000001)
#define SYSCTL_PRSSI_PRSSI2_NORDY        (0x00000000)
#define SYSCTL_PRSSI_PRSSI2_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRSSI_R_PRSSI3_MASK          (0x00000008)
#define SYSCTL_PRSSI_R_PRSSI3_BIT           (3)
#define SYSCTL_PRSSI_R_PRSSI3_NORDY         (0x00000000)
#define SYSCTL_PRSSI_R_PRSSI3_RDY           (0x00000008)

#define SYSCTL_PRSSI_PRSSI3_MASK         (0x00000001)
#define SYSCTL_PRSSI_PRSSI3_NORDY        (0x00000000)
#define SYSCTL_PRSSI_PRSSI3_RDY          (0x00000001)
//--------


#define SYSCTL_PRSSI_PRSSI0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRSSI_OFFSET)*32)+(0*4))))
#define SYSCTL_PRSSI_PRSSI1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRSSI_OFFSET)*32)+(1*4))))
#define SYSCTL_PRSSI_PRSSI2_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRSSI_OFFSET)*32)+(2*4))))
#define SYSCTL_PRSSI_PRSSI3_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRSSI_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////136 PRI2C ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////



#define SYSCTL_PRI2C_OFFSET     (0x0A20)
#define SYSCTL_PRI2C            (((PRI2C_TypeDef*)(SYSCTL_BASE+SYSCTL_PRI2C_OFFSET )))
#define SYSCTL_PRI2C_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRI2C_OFFSET)))

//--------
#define SYSCTL_PRI2C_R_PRI2C0_MASK          (0x00000001)
#define SYSCTL_PRI2C_R_PRI2C0_BIT           (0)
#define SYSCTL_PRI2C_R_PRI2C0_NORDY         (0x00000000)
#define SYSCTL_PRI2C_R_PRI2C0_RDY           (0x00000001)

#define SYSCTL_PRI2C_PRI2C0_MASK         (0x00000001)
#define SYSCTL_PRI2C_PRI2C0_NORDY        (0x00000000)
#define SYSCTL_PRI2C_PRI2C0_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRI2C_R_PRI2C1_MASK          (0x00000002)
#define SYSCTL_PRI2C_R_PRI2C1_BIT           (1)
#define SYSCTL_PRI2C_R_PRI2C1_NORDY         (0x00000000)
#define SYSCTL_PRI2C_R_PRI2C1_RDY           (0x00000002)

#define SYSCTL_PRI2C_PRI2C1_MASK         (0x00000001)
#define SYSCTL_PRI2C_PRI2C1_NORDY        (0x00000000)
#define SYSCTL_PRI2C_PRI2C1_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRI2C_R_PRI2C2_MASK          (0x00000004)
#define SYSCTL_PRI2C_R_PRI2C2_BIT           (2)
#define SYSCTL_PRI2C_R_PRI2C2_NORDY         (0x00000000)
#define SYSCTL_PRI2C_R_PRI2C2_RDY           (0x00000004)

#define SYSCTL_PRI2C_PRI2C2_MASK         (0x00000001)
#define SYSCTL_PRI2C_PRI2C2_NORDY        (0x00000000)
#define SYSCTL_PRI2C_PRI2C2_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRI2C_R_PRI2C3_MASK          (0x00000008)
#define SYSCTL_PRI2C_R_PRI2C3_BIT           (3)
#define SYSCTL_PRI2C_R_PRI2C3_NORDY         (0x00000000)
#define SYSCTL_PRI2C_R_PRI2C3_RDY           (0x00000008)

#define SYSCTL_PRI2C_PRI2C3_MASK         (0x00000001)
#define SYSCTL_PRI2C_PRI2C3_NORDY        (0x00000000)
#define SYSCTL_PRI2C_PRI2C3_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRI2C_R_PRI2C4_MASK          (0x00000010)
#define SYSCTL_PRI2C_R_PRI2C4_BIT           (4)
#define SYSCTL_PRI2C_R_PRI2C4_NORDY         (0x00000000)
#define SYSCTL_PRI2C_R_PRI2C4_RDY           (0x00000010)

#define SYSCTL_PRI2C_PRI2C4_MASK         (0x00000001)
#define SYSCTL_PRI2C_PRI2C4_NORDY        (0x00000000)
#define SYSCTL_PRI2C_PRI2C4_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRI2C_R_PRI2C5_MASK          (0x00000020)
#define SYSCTL_PRI2C_R_PRI2C5_BIT           (5)
#define SYSCTL_PRI2C_R_PRI2C5_NORDY         (0x00000000)
#define SYSCTL_PRI2C_R_PRI2C5_RDY           (0x00000020)

#define SYSCTL_PRI2C_PRI2C5_MASK         (0x00000001)
#define SYSCTL_PRI2C_PRI2C5_NORDY        (0x00000000)
#define SYSCTL_PRI2C_PRI2C5_RDY          (0x00000001)
//--------

#define SYSCTL_PRI2C_PRI2C0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32)+(0*4))))
#define SYSCTL_PRI2C_PRI2C1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32)+(1*4))))
#define SYSCTL_PRI2C_PRI2C2_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32)+(2*4))))
#define SYSCTL_PRI2C_PRI2C3_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32)+(3*4))))
#define SYSCTL_PRI2C_PRI2C4_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32)+(4*4))))
#define SYSCTL_PRI2C_PRI2C5_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32)+(5*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////137 PRUSB ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_PRUSB_OFFSET     (0x0A28)
#define SYSCTL_PRUSB            (((PRUSB_TypeDef*)(SYSCTL_BASE+SYSCTL_PRUSB_OFFSET )))
#define SYSCTL_PRUSB_R          (*((const volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRUSB_OFFSET)))

//--------
#define SYSCTL_PRUSB_R_PRUSB0_MASK          (0x00000001)
#define SYSCTL_PRUSB_R_PRUSB0_BIT           (0)
#define SYSCTL_PRUSB_R_PRUSB0_NORDY         (0x00000000)
#define SYSCTL_PRUSB_R_PRUSB0_RDY           (0x00000001)

#define SYSCTL_PRUSB_PRUSB0_MASK         (0x00000001)
#define SYSCTL_PRUSB_PRUSB0_NORDY        (0x00000000)
#define SYSCTL_PRUSB_PRUSB0_RDY          (0x00000001)
//--------

#define SYSCTL_PRUSB_PRUSB_BB    (*((const volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRUSB_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////138 PRCAN ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PRCAN_OFFSET     (0x0A34)
#define SYSCTL_PRCAN            (((PRCAN_TypeDef*)(SYSCTL_BASE+SYSCTL_PRCAN_OFFSET )))
#define SYSCTL_PRCAN_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRCAN_OFFSET)))

//--------
#define SYSCTL_PRCAN_R_PRCAN0_MASK          (0x00000001)
#define SYSCTL_PRCAN_R_PRCAN0_BIT           (0)
#define SYSCTL_PRCAN_R_PRCAN0_NORDY         (0x00000000)
#define SYSCTL_PRCAN_R_PRCAN0_RDY           (0x00000001)

#define SYSCTL_PRCAN_PRCAN0_MASK         (0x00000001)
#define SYSCTL_PRCAN_PRCAN0_NORDY        (0x00000000)
#define SYSCTL_PRCAN_PRCAN0_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRCAN_R_PRCAN1_MASK          (0x00000002)
#define SYSCTL_PRCAN_R_PRCAN1_BIT           (1)
#define SYSCTL_PRCAN_R_PRCAN1_NORDY         (0x00000000)
#define SYSCTL_PRCAN_R_PRCAN1_RDY           (0x00000002)

#define SYSCTL_PRCAN_PRCAN1_MASK         (0x00000001)
#define SYSCTL_PRCAN_PRCAN1_NORDY        (0x00000000)
#define SYSCTL_PRCAN_PRCAN1_RDY          (0x00000001)
//--------

#define SYSCTL_PRCAN_PRCAN0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRCAN_OFFSET)*32)+(0*4))))
#define SYSCTL_PRCAN_PRCAN1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRCAN_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////139 PRADC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PRADC_OFFSET     (0x0A38)
#define SYSCTL_PRADC            (((PRADC_TypeDef*)(SYSCTL_BASE+SYSCTL_PRADC_OFFSET )))
#define SYSCTL_PRADC_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRADC_OFFSET)))

//--------
#define SYSCTL_PRADC_R_PRADC0_MASK          (0x00000001)
#define SYSCTL_PRADC_R_PRADC0_BIT           (0)
#define SYSCTL_PRADC_R_PRADC0_NORDY         (0x00000000)
#define SYSCTL_PRADC_R_PRADC0_RDY           (0x00000001)

#define SYSCTL_PRADC_PRADC0_MASK         (0x00000001)
#define SYSCTL_PRADC_PRADC0_NORDY        (0x00000000)
#define SYSCTL_PRADC_PRADC0_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRADC_R_PRADC1_MASK          (0x00000002)
#define SYSCTL_PRADC_R_PRADC1_BIT           (1)
#define SYSCTL_PRADC_R_PRADC1_NORDY         (0x00000000)
#define SYSCTL_PRADC_R_PRADC1_RDY           (0x00000002)

#define SYSCTL_PRADC_PRADC1_MASK         (0x00000001)
#define SYSCTL_PRADC_PRADC1_NORDY        (0x00000000)
#define SYSCTL_PRADC_PRADC1_RDY          (0x00000001)
//--------

#define SYSCTL_PRADC_PRADC0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRADC_OFFSET)*32)+(0*4))))
#define SYSCTL_PRADC_PRADC1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRADC_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////140 PRACMP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PRACMP_OFFSET     (0x0A3C)
#define SYSCTL_PRACMP            (((PRACMP_TypeDef*)(SYSCTL_BASE+SYSCTL_PRACMP_OFFSET )))
#define SYSCTL_PRACMP_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRACMP_OFFSET)))

//--------
#define SYSCTL_PRACMP_R_PRACMP0_MASK          (0x00000001)
#define SYSCTL_PRACMP_R_PRACMP0_BIT           (0)
#define SYSCTL_PRACMP_R_PRACMP0_NORDY         (0x00000000)
#define SYSCTL_PRACMP_R_PRACMP0_RDY           (0x00000001)

#define SYSCTL_PRACMP_PRACMP0_MASK         (0x00000001)
#define SYSCTL_PRACMP_PRACMP0_NORDY        (0x00000000)
#define SYSCTL_PRACMP_PRACMP0_RDY          (0x00000001)
//--------

#define SYSCTL_PRACMP_PRACMP_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRACMP_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////141 PRPWM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PRPWM_OFFSET     (0x0A40)
#define SYSCTL_PRPWM            (((PRPWM_TypeDef*)(SYSCTL_BASE+SYSCTL_PRPWM_OFFSET )))
#define SYSCTL_PRPWM_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRPWM_OFFSET)))

//--------
#define SYSCTL_PRPWM_R_PRPWM0_MASK          (0x00000001)
#define SYSCTL_PRPWM_R_PRPWM0_BIT           (0)
#define SYSCTL_PRPWM_R_PRPWM0_NORDY         (0x00000000)
#define SYSCTL_PRPWM_R_PRPWM0_RDY           (0x00000001)

#define SYSCTL_PRPWM_PRPWM0_MASK         (0x00000001)
#define SYSCTL_PRPWM_PRPWM0_NORDY        (0x00000000)
#define SYSCTL_PRPWM_PRPWM0_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRPWM_R_PRPWM1_MASK          (0x00000002)
#define SYSCTL_PRPWM_R_PRPWM1_BIT           (1)
#define SYSCTL_PRPWM_R_PRPWM1_NORDY         (0x00000000)
#define SYSCTL_PRPWM_R_PRPWM1_RDY           (0x00000002)

#define SYSCTL_PRPWM_PRPWM1_MASK         (0x00000001)
#define SYSCTL_PRPWM_PRPWM1_NORDY        (0x00000000)
#define SYSCTL_PRPWM_PRPWM1_RDY          (0x00000001)
//--------

#define SYSCTL_PRPWM_PRPWM0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRPWM_OFFSET)*32)+(0*4))))
#define SYSCTL_PRPWM_PRPWM1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRPWM_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////142 PRQEI ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PRQEI_OFFSET     (0x0A44)
#define SYSCTL_PRQEI            (((PRQEI_TypeDef*)(SYSCTL_BASE+SYSCTL_PRQEI_OFFSET )))
#define SYSCTL_PRQEI_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRQEI_OFFSET)))


//--------
#define SYSCTL_PRQEI_R_PRQEI0_MASK          (0x00000001)
#define SYSCTL_PRQEI_R_PRQEI0_BIT           (0)
#define SYSCTL_PRQEI_R_PRQEI0_NORDY         (0x00000000)
#define SYSCTL_PRQEI_R_PRQEI0_RDY           (0x00000001)

#define SYSCTL_PRQEI_PRQEI0_MASK         (0x00000001)
#define SYSCTL_PRQEI_PRQEI0_NORDY        (0x00000000)
#define SYSCTL_PRQEI_PRQEI0_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRQEI_R_PRQEI1_MASK          (0x00000002)
#define SYSCTL_PRQEI_R_PRQEI1_BIT           (1)
#define SYSCTL_PRQEI_R_PRQEI1_NORDY         (0x00000000)
#define SYSCTL_PRQEI_R_PRQEI1_RDY           (0x00000002)

#define SYSCTL_PRQEI_PRQEI1_MASK         (0x00000001)
#define SYSCTL_PRQEI_PRQEI1_NORDY        (0x00000000)
#define SYSCTL_PRQEI_PRQEI1_RDY          (0x00000001)
//--------

#define SYSCTL_PRQEI_PRQEI0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRQEI_OFFSET)*32)+(0*4))))
#define SYSCTL_PRQEI_PRQEI1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRQEI_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////143 PREEPROM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define SYSCTL_PREEPROM_OFFSET     (0x0A58)
#define SYSCTL_PREEPROM            (((PREEPROM_TypeDef*)(SYSCTL_BASE+SYSCTL_PREEPROM_OFFSET )))
#define SYSCTL_PREEPROM_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PREEPROM_OFFSET)))

//--------
#define SYSCTL_PREEPROM_R_PREEPROM0_MASK          (0x00000001)
#define SYSCTL_PREEPROM_R_PREEPROM0_BIT           (0)
#define SYSCTL_PREEPROM_R_PREEPROM0_NORDY         (0x00000000)
#define SYSCTL_PREEPROM_R_PREEPROM0_RDY           (0x00000001)

#define SYSCTL_PREEPROM_PREEPROM0_MASK         (0x00000001)
#define SYSCTL_PREEPROM_PREEPROM0_NORDY        (0x00000000)
#define SYSCTL_PREEPROM_PREEPROM0_RDY          (0x00000001)
//--------

#define SYSCTL_PREEPROM_PREEPROM_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PREEPROM_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////144 PRWTIMER ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SYSCTL_PRWTIMER_OFFSET     (0x0A5C)
#define SYSCTL_PRWTIMER            (((PRWTIMER_TypeDef*)(SYSCTL_BASE+SYSCTL_PRWTIMER_OFFSET )))
#define SYSCTL_PRWTIMER_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_PRWTIMER_OFFSET)))

//--------
#define SYSCTL_PRWTIMER_R_PRWTIMER0_MASK          (0x00000001)
#define SYSCTL_PRWTIMER_R_PRWTIMER0_BIT           (0)
#define SYSCTL_PRWTIMER_R_PRWTIMER0_NORDY         (0x00000000)
#define SYSCTL_PRWTIMER_R_PRWTIMER0_RDY           (0x00000001)

#define SYSCTL_PRWTIMER_PRWTIMER0_MASK         (0x00000001)
#define SYSCTL_PRWTIMER_PRWTIMER0_NORDY        (0x00000000)
#define SYSCTL_PRWTIMER_PRWTIMER0_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRWTIMER_R_PRWTIMER1_MASK          (0x00000002)
#define SYSCTL_PRWTIMER_R_PRWTIMER1_BIT           (1)
#define SYSCTL_PRWTIMER_R_PRWTIMER1_NORDY         (0x00000000)
#define SYSCTL_PRWTIMER_R_PRWTIMER1_RDY           (0x00000002)

#define SYSCTL_PRWTIMER_PRWTIMER1_MASK         (0x00000001)
#define SYSCTL_PRWTIMER_PRWTIMER1_NORDY        (0x00000000)
#define SYSCTL_PRWTIMER_PRWTIMER1_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRWTIMER_R_PRWTIMER2_MASK          (0x00000004)
#define SYSCTL_PRWTIMER_R_PRWTIMER2_BIT           (2)
#define SYSCTL_PRWTIMER_R_PRWTIMER2_NORDY         (0x00000000)
#define SYSCTL_PRWTIMER_R_PRWTIMER2_RDY           (0x00000004)

#define SYSCTL_PRWTIMER_PRWTIMER2_MASK         (0x00000001)
#define SYSCTL_PRWTIMER_PRWTIMER2_NORDY        (0x00000000)
#define SYSCTL_PRWTIMER_PRWTIMER2_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRWTIMER_R_PRWTIMER3_MASK          (0x00000008)
#define SYSCTL_PRWTIMER_R_PRWTIMER3_BIT           (3)
#define SYSCTL_PRWTIMER_R_PRWTIMER3_NORDY         (0x00000000)
#define SYSCTL_PRWTIMER_R_PRWTIMER3_RDY           (0x00000008)

#define SYSCTL_PRWTIMER_PRWTIMER3_MASK         (0x00000001)
#define SYSCTL_PRWTIMER_PRWTIMER3_NORDY        (0x00000000)
#define SYSCTL_PRWTIMER_PRWTIMER3_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRWTIMER_R_PRWTIMER4_MASK          (0x00000010)
#define SYSCTL_PRWTIMER_R_PRWTIMER4_BIT           (4)
#define SYSCTL_PRWTIMER_R_PRWTIMER4_NORDY         (0x00000000)
#define SYSCTL_PRWTIMER_R_PRWTIMER4_RDY           (0x00000010)

#define SYSCTL_PRWTIMER_PRWTIMER4_MASK         (0x00000001)
#define SYSCTL_PRWTIMER_PRWTIMER4_NORDY        (0x00000000)
#define SYSCTL_PRWTIMER_PRWTIMER4_RDY          (0x00000001)
//--------

//--------
#define SYSCTL_PRWTIMER_R_PRWTIMER5_MASK          (0x00000020)
#define SYSCTL_PRWTIMER_R_PRWTIMER5_BIT           (5)
#define SYSCTL_PRWTIMER_R_PRWTIMER5_NORDY         (0x00000000)
#define SYSCTL_PRWTIMER_R_PRWTIMER5_RDY           (0x00000020)

#define SYSCTL_PRWTIMER_PRWTIMER5_MASK            (0x00000001)
#define SYSCTL_PRWTIMER_PRWTIMER5_NORDY           (0x00000000)
#define SYSCTL_PRWTIMER_PRWTIMER5_RDY             (0x00000001)
//--------

#define SYSCTL_PRWTIMER_PRWTIMER0_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_PRWTIMER_PRWTIMER1_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_PRWTIMER_PRWTIMER2_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_PRWTIMER_PRWTIMER3_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_PRWTIMER_PRWTIMER4_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_PRWTIMER_PRWTIMER5_BB    (*((volatile const uint32_t *)(0x42000000+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32)+(5*4))))



int32_t SYSCTL_Init(void);
uint32_t SYSCTL_ClockGet(void);

#endif /* SYSCTL_H_ */
