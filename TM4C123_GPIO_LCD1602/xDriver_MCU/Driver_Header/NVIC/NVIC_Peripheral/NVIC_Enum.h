/**
 *
 * @file NVIC_Enum.h
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_ENUM_H_

typedef enum
{
    NVIC_enOK =0u,
    NVIC_enERROR=1
}NVIC_nSTATUS;
typedef enum
{
    NVIC_enENABLE =0u,
    NVIC_enDISABLE=1
}NVIC_nENABLE;

typedef enum
{
    NVIC_enPENDING =0u,
    NVIC_enNOPENDING=1
}NVIC_nPENDING;
typedef enum
{
    NVIC_enACTIVE =0u,
    NVIC_enNOACTIVE=1
}NVIC_nACTIVE;


typedef enum
{
    NVIC_enPRI0=0u,
    NVIC_enPRI1=1u,
    NVIC_enPRI2=2u,
    NVIC_enPRI3=3u,
    NVIC_enPRI4=4u,
    NVIC_enPRI5=5u,
    NVIC_enPRI6=6u,
    NVIC_enPRI7=7u,
    NVIC_enDEFAULT=0xFFu,
}NVIC_nPRIORITY;
typedef enum
{
     NVIC_enSTIR_GPIOA      =((uint32_t)0x00000000u),
     NVIC_enSTIR_GPIOB      =((uint32_t)0x00000001u),
     NVIC_enSTIR_GPIOC      =((uint32_t)0x00000002u),
     NVIC_enSTIR_GPIOD      =((uint32_t)0x00000003u),
     NVIC_enSTIR_GPIOE      =((uint32_t)0x00000004u),
     NVIC_enSTIR_UART0      =((uint32_t)0x00000005u),
     NVIC_enSTIR_UART1      =((uint32_t)0x00000006u),
     NVIC_enSTIR_SSI0       =((uint32_t)0x00000007u),
     NVIC_enSTIR_I2C0       =((uint32_t)0x00000008u),
     NVIC_enSTIR_PWM0FAULT   =((uint32_t)0x00000009u),
     NVIC_enSTIR_PWM0GEN0    =((uint32_t)0x0000000Au),
     NVIC_enSTIR_PWM0GEN1    =((uint32_t)0x0000000Bu),
     NVIC_enSTIR_PWM0GEN2    =((uint32_t)0x0000000Cu),
     NVIC_enSTIR_QEI0       =((uint32_t)0x0000000Du),
     NVIC_enSTIR_ADC0SEQ0   =((uint32_t)0x0000000Eu),
     NVIC_enSTIR_ADC0SEQ1   =((uint32_t)0x0000000Fu),
     NVIC_enSTIR_ADC0SEQ2   =((uint32_t)0x00000010u),
     NVIC_enSTIR_ADC0SEQ3   =((uint32_t)0x00000011u),
     NVIC_enSTIR_WDT01      =((uint32_t)0x00000012u),
     NVIC_enSTIR_TIMER0A    =((uint32_t)0x00000013u),
     NVIC_enSTIR_TIMER0B    =((uint32_t)0x00000014u),
     NVIC_enSTIR_TIMER1A    =((uint32_t)0x00000015u),
     NVIC_enSTIR_TIMER1B    =((uint32_t)0x00000016u),
     NVIC_enSTIR_TIMER2A    =((uint32_t)0x00000017u),
     NVIC_enSTIR_TIMER2B    =((uint32_t)0x00000018u),
     NVIC_enSTIR_ACOMP0     =((uint32_t)0x00000019u),
     NVIC_enSTIR_ACOMP1     =((uint32_t)0x0000001Au),
     NVIC_enSTIR_RES43      =((uint32_t)0x0000001Bu),
     NVIC_enSTIR_SYSCTL     =((uint32_t)0x0000001Cu),
     NVIC_enSTIR_FLASH      =((uint32_t)0x0000001Du),
     NVIC_enSTIR_GPIOF      =((uint32_t)0x0000001Eu),
     NVIC_enSTIR_RES47      =((uint32_t)0x0000001Fu),
     NVIC_enSTIR_RES48      =((uint32_t)0x00000020u),
     NVIC_enSTIR_UART2      =((uint32_t)0x00000021u),
     NVIC_enSTIR_SSI1       =((uint32_t)0x00000022u),
     NVIC_enSTIR_TIMER3A    =((uint32_t)0x00000023u),
     NVIC_enSTIR_TIMER3B    =((uint32_t)0x00000024u),
     NVIC_enSTIR_I2C1       =((uint32_t)0x00000025u),
     NVIC_enSTIR_QEI1       =((uint32_t)0x00000026u),
     NVIC_enSTIR_CAN0       =((uint32_t)0x00000027u),
     NVIC_enSTIR_CAN1       =((uint32_t)0x00000028u),
     NVIC_enSTIR_RES57      =((uint32_t)0x00000029u),
     NVIC_enSTIR_RES58      =((uint32_t)0x0000002Au),
     NVIC_enSTIR_HIB        =((uint32_t)0x0000002Bu),
     NVIC_enSTIR_USB        =((uint32_t)0x0000002Cu),
     NVIC_enSTIR_PWM0GEN3   =((uint32_t)0x0000002Du),
     NVIC_enSTIR_UDMASOFT   =((uint32_t)0x0000002Eu),
     NVIC_enSTIR_UDMAERROR  =((uint32_t)0x0000002Fu),
     NVIC_enSTIR_ADC1SEQ0   =((uint32_t)0x00000030u),
     NVIC_enSTIR_ADC1SEQ1   =((uint32_t)0x00000031u),
     NVIC_enSTIR_ADC1SEQ2   =((uint32_t)0x00000032u),
     NVIC_enSTIR_ADC1SEQ3   =((uint32_t)0x00000033u),
     NVIC_enSTIR_RES68      =((uint32_t)0x00000034u),
     NVIC_enSTIR_RES69      =((uint32_t)0x00000035u),
     NVIC_enSTIR_RES70      =((uint32_t)0x00000036u),
     NVIC_enSTIR_RES71      =((uint32_t)0x00000037u),
     NVIC_enSTIR_RES72      =((uint32_t)0x00000038u),
     NVIC_enSTIR_SSI2       =((uint32_t)0x00000039u),
     NVIC_enSTIR_SSI3       =((uint32_t)0x0000003Au),
     NVIC_enSTIR_UART3      =((uint32_t)0x0000003Bu),
     NVIC_enSTIR_UART4      =((uint32_t)0x0000003Cu),
     NVIC_enSTIR_UART5      =((uint32_t)0x0000003Du),
     NVIC_enSTIR_UART6      =((uint32_t)0x0000003Eu),
     NVIC_enSTIR_UART7      =((uint32_t)0x0000003Fu),
     NVIC_enSTIR_RES80      =((uint32_t)0x00000040u),
     NVIC_enSTIR_RES81      =((uint32_t)0x00000041u),
     NVIC_enSTIR_RES82      =((uint32_t)0x00000042u),
     NVIC_enSTIR_RES83      =((uint32_t)0x00000043u),
     NVIC_enSTIR_I2C2       =((uint32_t)0x00000044u),
     NVIC_enSTIR_I2C3       =((uint32_t)0x00000045u),
     NVIC_enSTIR_TIMER4A    =((uint32_t)0x00000046u),
     NVIC_enSTIR_TIMER4B    =((uint32_t)0x00000047u),
     NVIC_enSTIR_RES88      =((uint32_t)0x00000048u),
     NVIC_enSTIR_RES89      =((uint32_t)0x00000049u),
     NVIC_enSTIR_RES90      =((uint32_t)0x0000004Au),
     NVIC_enSTIR_RES91      =((uint32_t)0x0000004Bu),
     NVIC_enSTIR_RES92      =((uint32_t)0x0000004Cu),
     NVIC_enSTIR_RES93      =((uint32_t)0x0000004Du),
     NVIC_enSTIR_RES94      =((uint32_t)0x0000004Eu),
     NVIC_enSTIR_RES95      =((uint32_t)0x0000004Fu),
     NVIC_enSTIR_RES96      =((uint32_t)0x00000050u),
     NVIC_enSTIR_RES97      =((uint32_t)0x00000051u),
     NVIC_enSTIR_RES98      =((uint32_t)0x00000052u),
     NVIC_enSTIR_RES99      =((uint32_t)0x00000053u),
     NVIC_enSTIR_RES100     =((uint32_t)0x00000054u),
     NVIC_enSTIR_RES101     =((uint32_t)0x00000055u),
     NVIC_enSTIR_RES102     =((uint32_t)0x00000056u),
     NVIC_enSTIR_RES103     =((uint32_t)0x00000057u),
     NVIC_enSTIR_RES104     =((uint32_t)0x00000058u),
     NVIC_enSTIR_RES105     =((uint32_t)0x00000059u),
     NVIC_enSTIR_RES106     =((uint32_t)0x0000005Au),
     NVIC_enSTIR_RES107     =((uint32_t)0x0000005Bu),
     NVIC_enSTIR_TIMER5A    =((uint32_t)0x0000005Cu),
     NVIC_enSTIR_TIMER5B    =((uint32_t)0x0000005Du),
     NVIC_enSTIR_WTIMER0A   =((uint32_t)0x0000005Eu),
     NVIC_enSTIR_WTIMER0B   =((uint32_t)0x0000005Fu),
     NVIC_enSTIR_WTIMER1A   =((uint32_t)0x00000060u),
     NVIC_enSTIR_WTIMER1B   =((uint32_t)0x00000061u),
     NVIC_enSTIR_WTIMER2A   =((uint32_t)0x00000062u),
     NVIC_enSTIR_WTIMER2B   =((uint32_t)0x00000063u),
     NVIC_enSTIR_WTIMER3A   =((uint32_t)0x00000064u),
     NVIC_enSTIR_WTIMER3B   =((uint32_t)0x00000065u),
     NVIC_enSTIR_WTIMER4A   =((uint32_t)0x00000066u),
     NVIC_enSTIR_WTIMER4B   =((uint32_t)0x00000067u),
     NVIC_enSTIR_WTIMER5A   =((uint32_t)0x00000068u),
     NVIC_enSTIR_WTIMER5B   =((uint32_t)0x00000069u),
     NVIC_enSTIR_SYSEXC     =((uint32_t)0x0000006Au),
     NVIC_enSTIR_RES123     =((uint32_t)0x0000006Bu),
     NVIC_enSTIR_RES124     =((uint32_t)0x0000006Cu),
     NVIC_enSTIR_RES125     =((uint32_t)0x0000006Du),
     NVIC_enSTIR_RES126     =((uint32_t)0x0000006Eu),
     NVIC_enSTIR_RES127     =((uint32_t)0x0000006Fu),
     NVIC_enSTIR_RES128     =((uint32_t)0x00000070u),
     NVIC_enSTIR_RES129     =((uint32_t)0x00000071u),
     NVIC_enSTIR_RES130     =((uint32_t)0x00000072u),
     NVIC_enSTIR_RES131     =((uint32_t)0x00000073u),
     NVIC_enSTIR_RES132     =((uint32_t)0x00000074u),
     NVIC_enSTIR_RES133     =((uint32_t)0x00000075u),
     NVIC_enSTIR_RES134     =((uint32_t)0x00000076u),
     NVIC_enSTIR_RES135     =((uint32_t)0x00000077u),
     NVIC_enSTIR_RES136     =((uint32_t)0x00000078u),
     NVIC_enSTIR_RES137     =((uint32_t)0x00000079u),
     NVIC_enSTIR_RES138     =((uint32_t)0x0000007Au),
     NVIC_enSTIR_RES139     =((uint32_t)0x0000007Bu),
     NVIC_enSTIR_RES140     =((uint32_t)0x0000007Cu),
     NVIC_enSTIR_RES141     =((uint32_t)0x0000007Du),
     NVIC_enSTIR_RES142     =((uint32_t)0x0000007Eu),
     NVIC_enSTIR_RES143     =((uint32_t)0x0000007Fu),
     NVIC_enSTIR_RES144     =((uint32_t)0x00000080u),
     NVIC_enSTIR_RES145     =((uint32_t)0x00000081u),
     NVIC_enSTIR_RES146     =((uint32_t)0x00000082u),
     NVIC_enSTIR_RES147     =((uint32_t)0x00000083u),
     NVIC_enSTIR_RES148     =((uint32_t)0x00000084u),
     NVIC_enSTIR_RES149     =((uint32_t)0x00000085u),
     NVIC_enSTIR_PWM1GEN0   =((uint32_t)0x00000086u),
     NVIC_enSTIR_PWM1GEN1   =((uint32_t)0x00000087u),
     NVIC_enSTIR_PWM1GEN2   =((uint32_t)0x00000088u),
     NVIC_enSTIR_PWM1GEN3   =((uint32_t)0x00000089u),
     NVIC_enSTIR_PWM1FAULT  =((uint32_t)0x0000008Au),
}NVIC_nSTIR;

typedef enum
{/******  Cortex-M4 Processor Exceptions Numbers ****************************************************************/
      ThreadMode_IRQn             = -16,
      Reset_IRQn                 = -15,
      NonMaskableInt_IRQn         = -14,    /*!< 2 Non Maskable Interrupt                                          */
      HardFault_IRQn              = -13,
      MemoryManagement_IRQn       = -12,    /*!< 4 Cortex-M4 Memory Management Interrupt                           */
      BusFault_IRQn               = -11,    /*!< 5 Cortex-M4 Bus Fault Interrupt                                   */
      UsageFault_IRQn             = -10,    /*!< 6 Cortex-M4 Usage Fault Interrupt                                 */
      SVCall_IRQn                 = -5,     /*!< 11 Cortex-M4 SV Call Interrupt                                    */
      DebugMonitor_IRQn           = -4,     /*!< 12 Cortex-M4 Debug Monitor Interrupt                              */
      PendSV_IRQn                 = -2,     /*!< 14 Cortex-M4 Pend SV Interrupt                                    */
      SysTick_IRQn                = -1,     /*!< 15 Cortex-M4 System Tick Interrupt                                */
/******  TM4C specific Interrupt Numbers **********************************************************************/
      GPIOA_IRQn                = 0u,
      GPIOB_IRQn                = 1u,
      GPIOC_IRQn                = 2u,
      GPIOD_IRQn                = 3u,
      GPIOE_IRQn                = 4u,
      UART0_IRQn                = 5u,
      UART1_IRQn                = 6u,
      SSI0_IRQn                 = 7u,
      I2C0_IRQn                 = 8u,
      PWM0FAULT_IRQn             = 9u,
      PWM0GEN0_IRQn              = 10u,
      PWM0GEN1_IRQn              = 11u,
      PWM0GEN2_IRQn              = 12u,
      QEI0_IRQn                 = 13u,
      ADC0SEQ0_IRQn             = 14u,
      ADC0SEQ1_IRQn             = 15u,
      ADC0SEQ2_IRQn             = 16u,
      ADC0SEQ3_IRQn             = 17u,
      WDT01_IRQn                = 18u,
      TIMER0A_IRQn              = 19u,
      TIMER0B_IRQn              = 20u,
      TIMER1A_IRQn              = 21u,
      TIMER1B_IRQn              = 22u,
      TIMER2A_IRQn              = 23u,
      TIMER2B_IRQn              = 24u,
      ACOMP0_IRQn               = 25u,
      ACOMP1_IRQn               = 26u,
      RES43_IRQn                = 27u,
      SYSCTL_IRQn               = 28u,
      FLASH_IRQn                = 29u,
      GPIOF_IRQn                = 30u,
      RES47_IRQn                = 31u,
      RES48_IRQn                = 32u,
      UART2_IRQn                = 33u,
      SSI1_IRQn                 = 34u,
      TIMER3A_IRQn              = 35u,
      TIMER3B_IRQn              = 36u,
      I2C1_IRQn                 = 37u,
      QEI1_IRQn                 = 38u,
      CAN0_IRQn                 = 39u,
      CAN1_IRQn                 = 40u,
      RES57_IRQn                = 41u,
      RES58_IRQn                = 42u,
      HIB_IRQn                  = 43u,
      USB_IRQn                  = 44u,
      PWM0GEN3_IRQn             = 45u,
      UDMASOFT_IRQn             = 46u,
      UDMAERROR_IRQn            = 47u,
      ADC1SEQ0_IRQn             = 48u,
      ADC1SEQ1_IRQn             = 49u,
      ADC1SEQ2_IRQn             = 50u,
      ADC1SEQ3_IRQn             = 51u,
      RES68_IRQn                = 52u,
      RES69_IRQn                = 53u,
      RES70_IRQn                = 54u,
      RES71_IRQn                = 55u,
      RES72_IRQn                = 56u,
      SSI2_IRQn                 = 57u,
      SSI3_IRQn                 = 58u,
      UART3_IRQn                = 59u,
      UART4_IRQn                = 60u,
      UART5_IRQn                = 61u,
      UART6_IRQn                = 62u,
      UART7_IRQn                = 63u,
      RES80_IRQn                = 64u,
      RES81_IRQn                = 65u,
      RES82_IRQn                = 66u,
      RES83_IRQn                = 67u,
      I2C2_IRQn                 = 68u,
      I2C3_IRQn                 = 69u,
      TIMER4A_IRQn              = 70u,
      TIMER4B_IRQn              = 71u,
      RES88_IRQn                = 72u,
      RES89_IRQn                = 73u,
      RES90_IRQn                = 74u,
      RES91_IRQn                = 75u,
      RES92_IRQn                = 76u,
      RES93_IRQn                = 77u,
      RES94_IRQn                = 78u,
      RES95_IRQn                = 79u,
      RES96_IRQn                = 80u,
      RES97_IRQn                = 81u,
      RES98_IRQn                = 82u,
      RES99_IRQn                = 83u,
      RES100_IRQn               = 84u,
      RES101_IRQn               = 85u,
      RES102_IRQn               = 86u,
      RES103_IRQn               = 87u,
      RES104_IRQn               = 88u,
      RES105_IRQn               = 89u,
      RES106_IRQn               = 90u,
      RES107_IRQn               = 91u,
      TIMER5A_IRQn              = 92u,
      TIMER5B_IRQn              = 93u,
      WTIMER0A_IRQn             = 94u,
      WTIMER0B_IRQn             = 95u,
      WTIMER1A_IRQn             = 96u,
      WTIMER1B_IRQn             = 97u,
      WTIMER2A_IRQn             = 98u,
      WTIMER2B_IRQn             = 99u,
      WTIMER3A_IRQn             = 100u,
      WTIMER3B_IRQn             = 101u,
      WTIMER4A_IRQn             = 102u,
      WTIMER4B_IRQn             = 103u,
      WTIMER5A_IRQn             = 104u,
      WTIMER5B_IRQn             = 105u,
      SYSEXC_IRQn               = 106u,
      RES123_IRQn               = 107u,
      RES124_IRQn               = 108u,
      RES125_IRQn               = 109u,
      RES126_IRQn               = 110u,
      RES127_IRQn               = 111u,
      RES128_IRQn               = 112u,
      RES129_IRQn               = 113u,
      RES130_IRQn               = 114u,
      RES131_IRQn               = 115u,
      RES132_IRQn               = 116u,
      RES133_IRQn               = 117u,
      RES134_IRQn               = 118u,
      RES135_IRQn               = 119u,
      RES136_IRQn               = 120u,
      RES137_IRQn               = 121u,
      RES138_IRQn               = 122u,
      RES139_IRQn               = 123u,
      RES140_IRQn               = 124u,
      RES141_IRQn               = 125u,
      RES142_IRQn               = 126u,
      RES143_IRQn               = 127u,
      RES144_IRQn               = 128u,
      RES145_IRQn               = 129u,
      RES146_IRQn               = 130u,
      RES147_IRQn               = 131u,
      RES148_IRQn               = 132u,
      RES149_IRQn               = 133u,
      PWM1GEN0_IRQn             = 134u,
      PWM1GEN1_IRQn             = 135u,
      PWM1GEN2_IRQn             = 136u,
      PWM1GEN3_IRQn             = 137u,
      PWM1FAULT_IRQn            = 138u,
} IRQn_Type;

/*
enum
{
    NVIC_PRIORITY_RES106        =1u,
    NVIC_PRIORITY_SSI2 =1u,
    NVIC_PRIORITY_RES105        =2u,

    NVIC_PRIORITY_RES94         =2u,
    NVIC_PRIORITY_RES104        =3u,
    NVIC_PRIORITY_ADC0SEQ0      =4u,

    NVIC_PRIORITY_UART2         =5u,
    NVIC_PRIORITY_SSI1          =5u,
    NVIC_PRIORITY_RES72         =6u,
    NVIC_PRIORITY_ADC1SEQ0      =7u,



      NVIC_PRIORITY_GPIOA       =7u,
      NVIC_PRIORITY_GPIOB       =7u,
      NVIC_PRIORITY_GPIOC       =7u,
      NVIC_PRIORITY_GPIOD       =7u,
      NVIC_PRIORITY_GPIOE       =7u,
      NVIC_PRIORITY_UART0       =7u,
      NVIC_PRIORITY_UART1       =7u,
      NVIC_PRIORITY_SSI0        =7u,
      NVIC_PRIORITY_I2C0        =7u,
      NVIC_PRIORITY_PWM0FAULT    =7u,
      NVIC_PRIORITY_PWM0GEN0     =7u,
      NVIC_PRIORITY_PWM0GEN1    =7u,
      NVIC_PRIORITY_PWM0GEN2        =7u,
      NVIC_PRIORITY_QEI0        =7u,
      NVIC_PRIORITY_ADC0SEQ1    =7u,
      NVIC_PRIORITY_ADC0SEQ2    =7u,
      NVIC_PRIORITY_ADC0SEQ3    =7u,
      NVIC_PRIORITY_WDT01       =7u,
      NVIC_PRIORITY_TIMER0A     =7u,
      NVIC_PRIORITY_TIMER0B     =7u,
      NVIC_PRIORITY_TIMER1A     =7u,
      NVIC_PRIORITY_TIMER1B     =7u,
      NVIC_PRIORITY_TIMER2A     =7u,
      NVIC_PRIORITY_TIMER2B     =7u,
      NVIC_PRIORITY_ACOMP0      =7u,
      NVIC_PRIORITY_ACOMP1      =7u,
      NVIC_PRIORITY_RES43       =7u,
      NVIC_PRIORITY_SYSCTL      =7u,
      NVIC_PRIORITY_FLASH       =7u,
      NVIC_PRIORITY_GPIOF       =7u,
      NVIC_PRIORITY_RES47       =7u,
      NVIC_PRIORITY_RES48       =7u,
      NVIC_PRIORITY_TIMER3A     =7u,
      NVIC_PRIORITY_TIMER3B     =7u,
      NVIC_PRIORITY_I2C1        =7u,
      NVIC_PRIORITY_QEI1        =7u,
      NVIC_PRIORITY_CAN0        =7u,
      NVIC_PRIORITY_CAN1        =7u,
      NVIC_PRIORITY_RES57       =7u,
      NVIC_PRIORITY_RES58       =7u,
      NVIC_PRIORITY_HIB         =7u,
      NVIC_PRIORITY_USB         =7u,
      NVIC_PRIORITY_PWM0GEN3    =7u,
      NVIC_PRIORITY_UDMASOFT    =7u,
      NVIC_PRIORITY_UDMAERROR    =7u,
      NVIC_PRIORITY_ADC1SEQ2    =7u,
      NVIC_PRIORITY_ADC1SEQ3    =7u,
      NVIC_PRIORITY_RES68       =7u,
      NVIC_PRIORITY_RES69       =7u,
      NVIC_PRIORITY_RES70       =7u,
      NVIC_PRIORITY_RES71       =7u,
      NVIC_PRIORITY_SSI3        =7u,
      NVIC_PRIORITY_UART3       =7u,
      NVIC_PRIORITY_UART4       =7u,
      NVIC_PRIORITY_UART5       =7u,
      NVIC_PRIORITY_UART6       =7u,
      NVIC_PRIORITY_UART7       =7u,
      NVIC_PRIORITY_RES80       =7u,
      NVIC_PRIORITY_RES81       =7u,
      NVIC_PRIORITY_RES82       =7u,
      NVIC_PRIORITY_RES83       =7u,
      NVIC_PRIORITY_I2C2        =7u,
      NVIC_PRIORITY_I2C3        =7u,
      NVIC_PRIORITY_TIMER4A     =7u,
      NVIC_PRIORITY_TIMER4B     =7u,
      NVIC_PRIORITY_RES88       =7u,
      NVIC_PRIORITY_RES89       =7u,
      NVIC_PRIORITY_RES90       =7u,
      NVIC_PRIORITY_RES91       =7u,
      NVIC_PRIORITY_RES92       =7u,
      NVIC_PRIORITY_RES93       =7u,
      NVIC_PRIORITY_RES96       =7u,
      NVIC_PRIORITY_RES97       =7u,
      NVIC_PRIORITY_RES98       =7u,
      NVIC_PRIORITY_RES99       =7u,
      NVIC_PRIORITY_RES100      =7u,
      NVIC_PRIORITY_RES101      =7u,
      NVIC_PRIORITY_RES102      =7u,
      NVIC_PRIORITY_RES103      =7u,
      NVIC_PRIORITY_RES107      =7u,
      NVIC_PRIORITY_TIMER5A     =7u,
      NVIC_PRIORITY_TIMER5B     =7u,
      NVIC_PRIORITY_WTIMER0A    =7u,
      NVIC_PRIORITY_WTIMER0B    =7u,
      NVIC_PRIORITY_WTIMER1A    =7u,
      NVIC_PRIORITY_WTIMER1B    =7u,
}NVIC_IPR_Priority;
*/




#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_ENUM_H_ */
