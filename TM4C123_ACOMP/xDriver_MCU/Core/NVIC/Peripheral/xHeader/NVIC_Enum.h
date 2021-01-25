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

#include <xUtils/Standard/Standard.h>

typedef enum
{
    NVIC_enOK =0U,
    NVIC_enERROR=1
}NVIC_nSTATUS;

typedef enum
{
    NVIC_enDISABLE=0UL,
    NVIC_enENABLE =1UL,
}NVIC_nENABLE;

typedef enum
{
    NVIC_enNOPENDING=0UL,
    NVIC_enPENDING =1UL,
}NVIC_nPENDING;

typedef enum
{
    NVIC_enNOACTIVE=0UL,
    NVIC_enACTIVE =1UL,
}NVIC_nACTIVE;


typedef enum
{
    NVIC_enPRI0=0U,
    NVIC_enPRI1=1U,
    NVIC_enPRI2=2U,
    NVIC_enPRI3=3U,
    NVIC_enPRI4=4U,
    NVIC_enPRI5=5U,
    NVIC_enPRI6=6U,
    NVIC_enPRI7=7U,
    NVIC_enDEFAULT=0xFFFFFFFFU,
}NVIC_nPRIORITY;
typedef enum
{
     NVIC_enSTIR_GPIOA      =((uint32_t)0x00000000U),
     NVIC_enSTIR_GPIOB      =((uint32_t)0x00000001U),
     NVIC_enSTIR_GPIOC      =((uint32_t)0x00000002U),
     NVIC_enSTIR_GPIOD      =((uint32_t)0x00000003U),
     NVIC_enSTIR_GPIOE      =((uint32_t)0x00000004U),
     NVIC_enSTIR_UART0      =((uint32_t)0x00000005U),
     NVIC_enSTIR_UART1      =((uint32_t)0x00000006U),
     NVIC_enSTIR_SSI0       =((uint32_t)0x00000007U),
     NVIC_enSTIR_I2C0       =((uint32_t)0x00000008U),
     NVIC_enSTIR_PWM0FAULT   =((uint32_t)0x00000009U),
     NVIC_enSTIR_PWM0GEN0    =((uint32_t)0x0000000AU),
     NVIC_enSTIR_PWM0GEN1    =((uint32_t)0x0000000BU),
     NVIC_enSTIR_PWM0GEN2    =((uint32_t)0x0000000CU),
     NVIC_enSTIR_QEI0       =((uint32_t)0x0000000DU),
     NVIC_enSTIR_ADC0SEQ0   =((uint32_t)0x0000000EU),
     NVIC_enSTIR_ADC0SEQ1   =((uint32_t)0x0000000FU),
     NVIC_enSTIR_ADC0SEQ2   =((uint32_t)0x00000010U),
     NVIC_enSTIR_ADC0SEQ3   =((uint32_t)0x00000011U),
     NVIC_enSTIR_WDT01      =((uint32_t)0x00000012U),
     NVIC_enSTIR_TIMER0A    =((uint32_t)0x00000013U),
     NVIC_enSTIR_TIMER0B    =((uint32_t)0x00000014U),
     NVIC_enSTIR_TIMER1A    =((uint32_t)0x00000015U),
     NVIC_enSTIR_TIMER1B    =((uint32_t)0x00000016U),
     NVIC_enSTIR_TIMER2A    =((uint32_t)0x00000017U),
     NVIC_enSTIR_TIMER2B    =((uint32_t)0x00000018U),
     NVIC_enSTIR_ACOMP0     =((uint32_t)0x00000019U),
     NVIC_enSTIR_ACOMP1     =((uint32_t)0x0000001AU),
     NVIC_enSTIR_RES43      =((uint32_t)0x0000001BU),
     NVIC_enSTIR_SYSCTL     =((uint32_t)0x0000001CU),
     NVIC_enSTIR_FLASH      =((uint32_t)0x0000001DU),
     NVIC_enSTIR_GPIOF      =((uint32_t)0x0000001EU),
     NVIC_enSTIR_RES47      =((uint32_t)0x0000001FU),
     NVIC_enSTIR_RES48      =((uint32_t)0x00000020U),
     NVIC_enSTIR_UART2      =((uint32_t)0x00000021U),
     NVIC_enSTIR_SSI1       =((uint32_t)0x00000022U),
     NVIC_enSTIR_TIMER3A    =((uint32_t)0x00000023U),
     NVIC_enSTIR_TIMER3B    =((uint32_t)0x00000024U),
     NVIC_enSTIR_I2C1       =((uint32_t)0x00000025U),
     NVIC_enSTIR_QEI1       =((uint32_t)0x00000026U),
     NVIC_enSTIR_CAN0       =((uint32_t)0x00000027U),
     NVIC_enSTIR_CAN1       =((uint32_t)0x00000028U),
     NVIC_enSTIR_RES57      =((uint32_t)0x00000029U),
     NVIC_enSTIR_RES58      =((uint32_t)0x0000002AU),
     NVIC_enSTIR_HIB        =((uint32_t)0x0000002BU),
     NVIC_enSTIR_USB        =((uint32_t)0x0000002CU),
     NVIC_enSTIR_PWM0GEN3   =((uint32_t)0x0000002DU),
     NVIC_enSTIR_UDMASOFT   =((uint32_t)0x0000002EU),
     NVIC_enSTIR_UDMAERROR  =((uint32_t)0x0000002FU),
     NVIC_enSTIR_ADC1SEQ0   =((uint32_t)0x00000030U),
     NVIC_enSTIR_ADC1SEQ1   =((uint32_t)0x00000031U),
     NVIC_enSTIR_ADC1SEQ2   =((uint32_t)0x00000032U),
     NVIC_enSTIR_ADC1SEQ3   =((uint32_t)0x00000033U),
     NVIC_enSTIR_RES68      =((uint32_t)0x00000034U),
     NVIC_enSTIR_RES69      =((uint32_t)0x00000035U),
     NVIC_enSTIR_RES70      =((uint32_t)0x00000036U),
     NVIC_enSTIR_RES71      =((uint32_t)0x00000037U),
     NVIC_enSTIR_RES72      =((uint32_t)0x00000038U),
     NVIC_enSTIR_SSI2       =((uint32_t)0x00000039U),
     NVIC_enSTIR_SSI3       =((uint32_t)0x0000003AU),
     NVIC_enSTIR_UART3      =((uint32_t)0x0000003BU),
     NVIC_enSTIR_UART4      =((uint32_t)0x0000003CU),
     NVIC_enSTIR_UART5      =((uint32_t)0x0000003DU),
     NVIC_enSTIR_UART6      =((uint32_t)0x0000003EU),
     NVIC_enSTIR_UART7      =((uint32_t)0x0000003FU),
     NVIC_enSTIR_RES80      =((uint32_t)0x00000040U),
     NVIC_enSTIR_RES81      =((uint32_t)0x00000041U),
     NVIC_enSTIR_RES82      =((uint32_t)0x00000042U),
     NVIC_enSTIR_RES83      =((uint32_t)0x00000043U),
     NVIC_enSTIR_I2C2       =((uint32_t)0x00000044U),
     NVIC_enSTIR_I2C3       =((uint32_t)0x00000045U),
     NVIC_enSTIR_TIMER4A    =((uint32_t)0x00000046U),
     NVIC_enSTIR_TIMER4B    =((uint32_t)0x00000047U),
     NVIC_enSTIR_RES88      =((uint32_t)0x00000048U),
     NVIC_enSTIR_RES89      =((uint32_t)0x00000049U),
     NVIC_enSTIR_RES90      =((uint32_t)0x0000004AU),
     NVIC_enSTIR_RES91      =((uint32_t)0x0000004BU),
     NVIC_enSTIR_RES92      =((uint32_t)0x0000004CU),
     NVIC_enSTIR_RES93      =((uint32_t)0x0000004DU),
     NVIC_enSTIR_RES94      =((uint32_t)0x0000004EU),
     NVIC_enSTIR_RES95      =((uint32_t)0x0000004FU),
     NVIC_enSTIR_RES96      =((uint32_t)0x00000050U),
     NVIC_enSTIR_RES97      =((uint32_t)0x00000051U),
     NVIC_enSTIR_RES98      =((uint32_t)0x00000052U),
     NVIC_enSTIR_RES99      =((uint32_t)0x00000053U),
     NVIC_enSTIR_RES100     =((uint32_t)0x00000054U),
     NVIC_enSTIR_RES101     =((uint32_t)0x00000055U),
     NVIC_enSTIR_RES102     =((uint32_t)0x00000056U),
     NVIC_enSTIR_RES103     =((uint32_t)0x00000057U),
     NVIC_enSTIR_RES104     =((uint32_t)0x00000058U),
     NVIC_enSTIR_RES105     =((uint32_t)0x00000059U),
     NVIC_enSTIR_RES106     =((uint32_t)0x0000005AU),
     NVIC_enSTIR_RES107     =((uint32_t)0x0000005BU),
     NVIC_enSTIR_TIMER5A    =((uint32_t)0x0000005CU),
     NVIC_enSTIR_TIMER5B    =((uint32_t)0x0000005DU),
     NVIC_enSTIR_WTIMER0A   =((uint32_t)0x0000005EU),
     NVIC_enSTIR_WTIMER0B   =((uint32_t)0x0000005FU),
     NVIC_enSTIR_WTIMER1A   =((uint32_t)0x00000060U),
     NVIC_enSTIR_WTIMER1B   =((uint32_t)0x00000061U),
     NVIC_enSTIR_WTIMER2A   =((uint32_t)0x00000062U),
     NVIC_enSTIR_WTIMER2B   =((uint32_t)0x00000063U),
     NVIC_enSTIR_WTIMER3A   =((uint32_t)0x00000064U),
     NVIC_enSTIR_WTIMER3B   =((uint32_t)0x00000065U),
     NVIC_enSTIR_WTIMER4A   =((uint32_t)0x00000066U),
     NVIC_enSTIR_WTIMER4B   =((uint32_t)0x00000067U),
     NVIC_enSTIR_WTIMER5A   =((uint32_t)0x00000068U),
     NVIC_enSTIR_WTIMER5B   =((uint32_t)0x00000069U),
     NVIC_enSTIR_SYSEXC     =((uint32_t)0x0000006AU),
     NVIC_enSTIR_RES123     =((uint32_t)0x0000006BU),
     NVIC_enSTIR_RES124     =((uint32_t)0x0000006CU),
     NVIC_enSTIR_RES125     =((uint32_t)0x0000006DU),
     NVIC_enSTIR_RES126     =((uint32_t)0x0000006EU),
     NVIC_enSTIR_RES127     =((uint32_t)0x0000006FU),
     NVIC_enSTIR_RES128     =((uint32_t)0x00000070U),
     NVIC_enSTIR_RES129     =((uint32_t)0x00000071U),
     NVIC_enSTIR_RES130     =((uint32_t)0x00000072U),
     NVIC_enSTIR_RES131     =((uint32_t)0x00000073U),
     NVIC_enSTIR_RES132     =((uint32_t)0x00000074U),
     NVIC_enSTIR_RES133     =((uint32_t)0x00000075U),
     NVIC_enSTIR_RES134     =((uint32_t)0x00000076U),
     NVIC_enSTIR_RES135     =((uint32_t)0x00000077U),
     NVIC_enSTIR_RES136     =((uint32_t)0x00000078U),
     NVIC_enSTIR_RES137     =((uint32_t)0x00000079U),
     NVIC_enSTIR_RES138     =((uint32_t)0x0000007AU),
     NVIC_enSTIR_RES139     =((uint32_t)0x0000007BU),
     NVIC_enSTIR_RES140     =((uint32_t)0x0000007CU),
     NVIC_enSTIR_RES141     =((uint32_t)0x0000007DU),
     NVIC_enSTIR_RES142     =((uint32_t)0x0000007EU),
     NVIC_enSTIR_RES143     =((uint32_t)0x0000007FU),
     NVIC_enSTIR_RES144     =((uint32_t)0x00000080U),
     NVIC_enSTIR_RES145     =((uint32_t)0x00000081U),
     NVIC_enSTIR_RES146     =((uint32_t)0x00000082U),
     NVIC_enSTIR_RES147     =((uint32_t)0x00000083U),
     NVIC_enSTIR_RES148     =((uint32_t)0x00000084U),
     NVIC_enSTIR_RES149     =((uint32_t)0x00000085U),
     NVIC_enSTIR_PWM1GEN0   =((uint32_t)0x00000086U),
     NVIC_enSTIR_PWM1GEN1   =((uint32_t)0x00000087U),
     NVIC_enSTIR_PWM1GEN2   =((uint32_t)0x00000088U),
     NVIC_enSTIR_PWM1GEN3   =((uint32_t)0x00000089U),
     NVIC_enSTIR_PWM1FAULT  =((uint32_t)0x0000008AU),
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
      GPIOA_IRQn                = 0U,
      GPIOB_IRQn                = 1U,
      GPIOC_IRQn                = 2U,
      GPIOD_IRQn                = 3U,
      GPIOE_IRQn                = 4U,
      UART0_IRQn                = 5U,
      UART1_IRQn                = 6U,
      SSI0_IRQn                 = 7U,
      I2C0_IRQn                 = 8U,
      PWM0FAULT_IRQn             = 9U,
      PWM0GEN0_IRQn              = 10U,
      PWM0GEN1_IRQn              = 11U,
      PWM0GEN2_IRQn              = 12U,
      QEI0_IRQn                 = 13U,
      ADC0SEQ0_IRQn             = 14U,
      ADC0SEQ1_IRQn             = 15U,
      ADC0SEQ2_IRQn             = 16U,
      ADC0SEQ3_IRQn             = 17U,
      WDT01_IRQn                = 18U,
      TIMER0A_IRQn              = 19U,
      TIMER0B_IRQn              = 20U,
      TIMER1A_IRQn              = 21U,
      TIMER1B_IRQn              = 22U,
      TIMER2A_IRQn              = 23U,
      TIMER2B_IRQn              = 24U,
      ACOMP0_IRQn               = 25U,
      ACOMP1_IRQn               = 26U,
      RES43_IRQn                = 27U,
      SYSCTL_IRQn               = 28U,
      FLASH_IRQn                = 29U,
      GPIOF_IRQn                = 30U,
      RES47_IRQn                = 31U,
      RES48_IRQn                = 32U,
      UART2_IRQn                = 33U,
      SSI1_IRQn                 = 34U,
      TIMER3A_IRQn              = 35U,
      TIMER3B_IRQn              = 36U,
      I2C1_IRQn                 = 37U,
      QEI1_IRQn                 = 38U,
      CAN0_IRQn                 = 39U,
      CAN1_IRQn                 = 40U,
      RES57_IRQn                = 41U,
      RES58_IRQn                = 42U,
      HIB_IRQn                  = 43U,
      USB_IRQn                  = 44U,
      PWM0GEN3_IRQn             = 45U,
      UDMASOFT_IRQn             = 46U,
      UDMAERROR_IRQn            = 47U,
      ADC1SEQ0_IRQn             = 48U,
      ADC1SEQ1_IRQn             = 49U,
      ADC1SEQ2_IRQn             = 50U,
      ADC1SEQ3_IRQn             = 51U,
      RES68_IRQn                = 52U,
      RES69_IRQn                = 53U,
      RES70_IRQn                = 54U,
      RES71_IRQn                = 55U,
      RES72_IRQn                = 56U,
      SSI2_IRQn                 = 57U,
      SSI3_IRQn                 = 58U,
      UART3_IRQn                = 59U,
      UART4_IRQn                = 60U,
      UART5_IRQn                = 61U,
      UART6_IRQn                = 62U,
      UART7_IRQn                = 63U,
      RES80_IRQn                = 64U,
      RES81_IRQn                = 65U,
      RES82_IRQn                = 66U,
      RES83_IRQn                = 67U,
      I2C2_IRQn                 = 68U,
      I2C3_IRQn                 = 69U,
      TIMER4A_IRQn              = 70U,
      TIMER4B_IRQn              = 71U,
      RES88_IRQn                = 72U,
      RES89_IRQn                = 73U,
      RES90_IRQn                = 74U,
      RES91_IRQn                = 75U,
      RES92_IRQn                = 76U,
      RES93_IRQn                = 77U,
      RES94_IRQn                = 78U,
      RES95_IRQn                = 79U,
      RES96_IRQn                = 80U,
      RES97_IRQn                = 81U,
      RES98_IRQn                = 82U,
      RES99_IRQn                = 83U,
      RES100_IRQn               = 84U,
      RES101_IRQn               = 85U,
      RES102_IRQn               = 86U,
      RES103_IRQn               = 87U,
      RES104_IRQn               = 88U,
      RES105_IRQn               = 89U,
      RES106_IRQn               = 90U,
      RES107_IRQn               = 91U,
      TIMER5A_IRQn              = 92U,
      TIMER5B_IRQn              = 93U,
      WTIMER0A_IRQn             = 94U,
      WTIMER0B_IRQn             = 95U,
      WTIMER1A_IRQn             = 96U,
      WTIMER1B_IRQn             = 97U,
      WTIMER2A_IRQn             = 98U,
      WTIMER2B_IRQn             = 99U,
      WTIMER3A_IRQn             = 100U,
      WTIMER3B_IRQn             = 101U,
      WTIMER4A_IRQn             = 102U,
      WTIMER4B_IRQn             = 103U,
      WTIMER5A_IRQn             = 104U,
      WTIMER5B_IRQn             = 105U,
      SYSEXC_IRQn               = 106U,
      RES123_IRQn               = 107U,
      RES124_IRQn               = 108U,
      RES125_IRQn               = 109U,
      RES126_IRQn               = 110U,
      RES127_IRQn               = 111U,
      RES128_IRQn               = 112U,
      RES129_IRQn               = 113U,
      RES130_IRQn               = 114U,
      RES131_IRQn               = 115U,
      RES132_IRQn               = 116U,
      RES133_IRQn               = 117U,
      RES134_IRQn               = 118U,
      RES135_IRQn               = 119U,
      RES136_IRQn               = 120U,
      RES137_IRQn               = 121U,
      RES138_IRQn               = 122U,
      RES139_IRQn               = 123U,
      RES140_IRQn               = 124U,
      RES141_IRQn               = 125U,
      RES142_IRQn               = 126U,
      RES143_IRQn               = 127U,
      RES144_IRQn               = 128U,
      RES145_IRQn               = 129U,
      RES146_IRQn               = 130U,
      RES147_IRQn               = 131U,
      RES148_IRQn               = 132U,
      RES149_IRQn               = 133U,
      PWM1GEN0_IRQn             = 134U,
      PWM1GEN1_IRQn             = 135U,
      PWM1GEN2_IRQn             = 136U,
      PWM1GEN3_IRQn             = 137U,
      PWM1FAULT_IRQn            = 138U,
} IRQn_Type;

/*
enum
{
    NVIC_PRIORITY_RES106        =1U,
    NVIC_PRIORITY_SSI2 =1U,
    NVIC_PRIORITY_RES105        =2U,

    NVIC_PRIORITY_RES94         =2U,
    NVIC_PRIORITY_RES104        =3U,
    NVIC_PRIORITY_ADC0SEQ0      =4U,

    NVIC_PRIORITY_UART2         =5U,
    NVIC_PRIORITY_SSI1          =5U,
    NVIC_PRIORITY_RES72         =6U,
    NVIC_PRIORITY_ADC1SEQ0      =7U,



      NVIC_PRIORITY_GPIOA       =7U,
      NVIC_PRIORITY_GPIOB       =7U,
      NVIC_PRIORITY_GPIOC       =7U,
      NVIC_PRIORITY_GPIOD       =7U,
      NVIC_PRIORITY_GPIOE       =7U,
      NVIC_PRIORITY_UART0       =7U,
      NVIC_PRIORITY_UART1       =7U,
      NVIC_PRIORITY_SSI0        =7U,
      NVIC_PRIORITY_I2C0        =7U,
      NVIC_PRIORITY_PWM0FAULT    =7U,
      NVIC_PRIORITY_PWM0GEN0     =7U,
      NVIC_PRIORITY_PWM0GEN1    =7U,
      NVIC_PRIORITY_PWM0GEN2        =7U,
      NVIC_PRIORITY_QEI0        =7U,
      NVIC_PRIORITY_ADC0SEQ1    =7U,
      NVIC_PRIORITY_ADC0SEQ2    =7U,
      NVIC_PRIORITY_ADC0SEQ3    =7U,
      NVIC_PRIORITY_WDT01       =7U,
      NVIC_PRIORITY_TIMER0A     =7U,
      NVIC_PRIORITY_TIMER0B     =7U,
      NVIC_PRIORITY_TIMER1A     =7U,
      NVIC_PRIORITY_TIMER1B     =7U,
      NVIC_PRIORITY_TIMER2A     =7U,
      NVIC_PRIORITY_TIMER2B     =7U,
      NVIC_PRIORITY_ACOMP0      =7U,
      NVIC_PRIORITY_ACOMP1      =7U,
      NVIC_PRIORITY_RES43       =7U,
      NVIC_PRIORITY_SYSCTL      =7U,
      NVIC_PRIORITY_FLASH       =7U,
      NVIC_PRIORITY_GPIOF       =7U,
      NVIC_PRIORITY_RES47       =7U,
      NVIC_PRIORITY_RES48       =7U,
      NVIC_PRIORITY_TIMER3A     =7U,
      NVIC_PRIORITY_TIMER3B     =7U,
      NVIC_PRIORITY_I2C1        =7U,
      NVIC_PRIORITY_QEI1        =7U,
      NVIC_PRIORITY_CAN0        =7U,
      NVIC_PRIORITY_CAN1        =7U,
      NVIC_PRIORITY_RES57       =7U,
      NVIC_PRIORITY_RES58       =7U,
      NVIC_PRIORITY_HIB         =7U,
      NVIC_PRIORITY_USB         =7U,
      NVIC_PRIORITY_PWM0GEN3    =7U,
      NVIC_PRIORITY_UDMASOFT    =7U,
      NVIC_PRIORITY_UDMAERROR    =7U,
      NVIC_PRIORITY_ADC1SEQ2    =7U,
      NVIC_PRIORITY_ADC1SEQ3    =7U,
      NVIC_PRIORITY_RES68       =7U,
      NVIC_PRIORITY_RES69       =7U,
      NVIC_PRIORITY_RES70       =7U,
      NVIC_PRIORITY_RES71       =7U,
      NVIC_PRIORITY_SSI3        =7U,
      NVIC_PRIORITY_UART3       =7U,
      NVIC_PRIORITY_UART4       =7U,
      NVIC_PRIORITY_UART5       =7U,
      NVIC_PRIORITY_UART6       =7U,
      NVIC_PRIORITY_UART7       =7U,
      NVIC_PRIORITY_RES80       =7U,
      NVIC_PRIORITY_RES81       =7U,
      NVIC_PRIORITY_RES82       =7U,
      NVIC_PRIORITY_RES83       =7U,
      NVIC_PRIORITY_I2C2        =7U,
      NVIC_PRIORITY_I2C3        =7U,
      NVIC_PRIORITY_TIMER4A     =7U,
      NVIC_PRIORITY_TIMER4B     =7U,
      NVIC_PRIORITY_RES88       =7U,
      NVIC_PRIORITY_RES89       =7U,
      NVIC_PRIORITY_RES90       =7U,
      NVIC_PRIORITY_RES91       =7U,
      NVIC_PRIORITY_RES92       =7U,
      NVIC_PRIORITY_RES93       =7U,
      NVIC_PRIORITY_RES96       =7U,
      NVIC_PRIORITY_RES97       =7U,
      NVIC_PRIORITY_RES98       =7U,
      NVIC_PRIORITY_RES99       =7U,
      NVIC_PRIORITY_RES100      =7U,
      NVIC_PRIORITY_RES101      =7U,
      NVIC_PRIORITY_RES102      =7U,
      NVIC_PRIORITY_RES103      =7U,
      NVIC_PRIORITY_RES107      =7U,
      NVIC_PRIORITY_TIMER5A     =7U,
      NVIC_PRIORITY_TIMER5B     =7U,
      NVIC_PRIORITY_WTIMER0A    =7U,
      NVIC_PRIORITY_WTIMER0B    =7U,
      NVIC_PRIORITY_WTIMER1A    =7U,
      NVIC_PRIORITY_WTIMER1B    =7U,
}NVIC_IPR_Priority;
*/




#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_ENUM_H_ */
