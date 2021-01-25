/**
 *
 * @file SCB_Enum.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_ENUM_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    SCB_enOK=0u,
    SCB_enERROR=1u,
}SCB_nSTATUS;

typedef enum
{
    SCB_enPRIGROUP_XXX =0u,
    SCB_enPRIGROUP_XXY =1u,
    SCB_enPRIGROUP_XYY =2u,
    SCB_enPRIGROUP_YYY =3u,
    SCB_enPRIGROUP_MAX =3u,
    SCB_enPRIGROUP_ERROR =0xFFFFFFFFu,
}SCB_nPRIGROUP;

typedef enum
{
    SCB_enNOPENDING=0u,
    SCB_enPENDING=1u,
}SCB_nPENDSTATE;

typedef enum
{
    SCB_enUCFSR_UNDEFINSTR=0x0001u,
    SCB_enUCFSR_INVSTATE=0x0002u,
    SCB_enUCFSR_INVPC=0x0004u,
    SCB_enUCFSR_NOCP=0x0008u,
    SCB_enUCFSR_UNALIGNED=0x0100u,
    SCB_enUCFSR_DIVBYZERO=0x0200u,
}SCB_nUCFSR;

typedef enum
{
    SCB_enBCFSR_BFARVALID=0x80u,
    SCB_enBCFSR_LSPERR=0x20u,
    SCB_enBCFSR_STKERR=0x10u,
    SCB_enBCFSR_UNSTKERR=0x08u,
    SCB_enBCFSR_IMPRECISERR=0x04u,
    SCB_enBCFSR_PRECISERR=0x02u,
    SCB_enBCFSR_IBUSERR=0x01u,
}SCB_nBCFSR;

typedef enum
{
    SCB_enMCFSR_MMARVALID=0x80u,
    SCB_enMCFSR_MLSPERR=0x20u,
    SCB_enMCFSR_MSTKERR=0x10u,
    SCB_enMCFSR_MUNSTKERR=0x08u,
    SCB_enMCFSR_DACCVIOL=0x02u,
    SCB_enMCFSR_IACCVIOL=0x01u,
}SCB_nMCFSR;

typedef enum
{
    SCB_enSHPR0 =0u,
    SCB_enSHPR1 =1u,
    SCB_enSHPR2 =2u,
    SCB_enSHPR3 =3u,
    SCB_enSHPR4 =4u,
    SCB_enSHPR5 =5u,
    SCB_enSHPR6 =6u,
    SCB_enSHPR7 =7u,
}SCB_nSHPR;

typedef enum
{
    SCB_enALIGN_4BYTE =0u,
    SCB_enALIGN_8BYTE =1u,
    SCB_enALIGN_ERROR =0xFFFFFFFFu,
}SCB_nAlignment;

typedef enum
{
    SCB_enWAKEUP_ONLY =0u,
    SCB_enWAKEUP_ALL   =1u,
    SCB_enWAKEUP_ERROR   =0xFFFFFFFFu,
}SCB_nWAKEUPSOURCE;

typedef enum
{
    SCB_enSLEEPONEXIT_NOSLEEP =0u,
    SCB_enSLEEPONEXIT_SLEEP   =1u,
    SCB_enSLEEPONEXIT_ERROR   =0xFFFFFFFFu,
}SCB_nSLEEPONEXIT;

typedef enum
{
    SCB_enSleepDeep_Sleep=0u,
    SCB_enSleepDeep_DeepSleep=1u,
    SCB_enSleepDeep_ERROR=0xFFFFFFFFu,
}SCB_nSleepDeep;

typedef enum
{
 SCB_enVECISR_THREAD      =((uint32_t)0x00000000u),
 SCB_enVECISR_RESET      =((uint32_t)0x00000001u),
 SCB_enVECISR_NMI        =((uint32_t)0x00000002u),
 SCB_enVECISR_HARDFAULT  =((uint32_t)0x00000003u),
 SCB_enVECISR_MEMMANAGE  =((uint32_t)0x00000004u),
 SCB_enVECISR_BUSFAULT   =((uint32_t)0x00000005u),
 SCB_enVECISR_USAGEFAULT =((uint32_t)0x00000006u),
 SCB_enVECISR_RES7       =((uint32_t)0x00000007u),
 SCB_enVECISR_RES8       =((uint32_t)0x00000008u),
 SCB_enVECISR_RES9       =((uint32_t)0x00000009u),
 SCB_enVECISR_RES10      =((uint32_t)0x0000000Au),
 SCB_enVECISR_SVCALL     =((uint32_t)0x0000000Bu),
 SCB_enVECISR_DEBUGMON   =((uint32_t)0x0000000Cu),
 SCB_enVECISR_RES13      =((uint32_t)0x0000000Du),
 SCB_enVECISR_PENDSV     =((uint32_t)0x0000000Eu),
 SCB_enVECISR_SYSTICK    =((uint32_t)0x0000000Fu),
 SCB_enVECISR_GPIOA      =((uint32_t)0x00000010u),
 SCB_enVECISR_GPIOB      =((uint32_t)0x00000011u),
 SCB_enVECISR_GPIOC      =((uint32_t)0x00000012u),
 SCB_enVECISR_GPIOD      =((uint32_t)0x00000013u),
 SCB_enVECISR_GPIOE      =((uint32_t)0x00000014u),
 SCB_enVECISR_UART0      =((uint32_t)0x00000015u),
 SCB_enVECISR_UART1      =((uint32_t)0x00000016u),
 SCB_enVECISR_SSI0       =((uint32_t)0x00000017u),
 SCB_enVECISR_I2C0       =((uint32_t)0x00000018u),
 SCB_enVECISR_PWM0FAULT   =((uint32_t)0x00000019u),
 SCB_enVECISR_PWM0GEN0    =((uint32_t)0x0000001Au),
 SCB_enVECISR_PWM0GEN1    =((uint32_t)0x0000001Bu),
 SCB_enVECISR_PWM0GEN2    =((uint32_t)0x0000001Cu),
 SCB_enVECISR_QEI0       =((uint32_t)0x0000001Du),
 SCB_enVECISR_ADC0SEQ0   =((uint32_t)0x0000001Eu),
 SCB_enVECISR_ADC0SEQ1   =((uint32_t)0x0000001Fu),
 SCB_enVECISR_ADC0SEQ2   =((uint32_t)0x00000020u),
 SCB_enVECISR_ADC0SEQ3   =((uint32_t)0x00000021u),
 SCB_enVECISR_WDT01      =((uint32_t)0x00000022u),
 SCB_enVECISR_TIMER0A    =((uint32_t)0x00000023u),
 SCB_enVECISR_TIMER0B    =((uint32_t)0x00000024u),
 SCB_enVECISR_TIMER1A    =((uint32_t)0x00000025u),
 SCB_enVECISR_TIMER1B    =((uint32_t)0x00000026u),
 SCB_enVECISR_TIMER2A    =((uint32_t)0x00000027u),
 SCB_enVECISR_TIMER2B    =((uint32_t)0x00000028u),
 SCB_enVECISR_ACOMP0     =((uint32_t)0x00000029u),
 SCB_enVECISR_ACOMP1     =((uint32_t)0x0000002Au),
 SCB_enVECISR_RES43      =((uint32_t)0x0000002Bu),
 SCB_enVECISR_SYSCTL     =((uint32_t)0x0000002Cu),
 SCB_enVECISR_FLASH      =((uint32_t)0x0000002Du),
 SCB_enVECISR_GPIOF      =((uint32_t)0x0000002Eu),
 SCB_enVECISR_RES47      =((uint32_t)0x0000002Fu),
 SCB_enVECISR_RES48      =((uint32_t)0x00000030u),
 SCB_enVECISR_UART2      =((uint32_t)0x00000031u),
 SCB_enVECISR_SSI1       =((uint32_t)0x00000032u),
 SCB_enVECISR_TIMER3A    =((uint32_t)0x00000033u),
 SCB_enVECISR_TIMER3B    =((uint32_t)0x00000034u),
 SCB_enVECISR_I2C1       =((uint32_t)0x00000035u),
 SCB_enVECISR_QEI1       =((uint32_t)0x00000036u),
 SCB_enVECISR_CAN0       =((uint32_t)0x00000037u),
 SCB_enVECISR_CAN1       =((uint32_t)0x00000038u),
 SCB_enVECISR_RES57      =((uint32_t)0x00000039u),
 SCB_enVECISR_RES58      =((uint32_t)0x0000003Au),
 SCB_enVECISR_HIB        =((uint32_t)0x0000003Bu),
 SCB_enVECISR_USB        =((uint32_t)0x0000003Cu),
 SCB_enVECISR_PWM0GEN3   =((uint32_t)0x0000003Du),
 SCB_enVECISR_UDMASOFT   =((uint32_t)0x0000003Eu),
 SCB_enVECISR_UDMAERROR  =((uint32_t)0x0000003Fu),
 SCB_enVECISR_ADC1SEQ0   =((uint32_t)0x00000040u),
 SCB_enVECISR_ADC1SEQ1   =((uint32_t)0x00000041u),
 SCB_enVECISR_ADC1SEQ2   =((uint32_t)0x00000042u),
 SCB_enVECISR_ADC1SEQ3   =((uint32_t)0x00000043u),
 SCB_enVECISR_RES68      =((uint32_t)0x00000044u),
 SCB_enVECISR_RES69      =((uint32_t)0x00000045u),
 SCB_enVECISR_RES70      =((uint32_t)0x00000046u),
 SCB_enVECISR_RES71      =((uint32_t)0x00000047u),
 SCB_enVECISR_RES72      =((uint32_t)0x00000048u),
 SCB_enVECISR_SSI2       =((uint32_t)0x00000049u),
 SCB_enVECISR_SSI3       =((uint32_t)0x0000004Au),
 SCB_enVECISR_UART3      =((uint32_t)0x0000004Bu),
 SCB_enVECISR_UART4      =((uint32_t)0x0000004Cu),
 SCB_enVECISR_UART5      =((uint32_t)0x0000004Du),
 SCB_enVECISR_UART6      =((uint32_t)0x0000004Eu),
 SCB_enVECISR_UART7      =((uint32_t)0x0000004Fu),
 SCB_enVECISR_RES80      =((uint32_t)0x00000050u),
 SCB_enVECISR_RES81      =((uint32_t)0x00000051u),
 SCB_enVECISR_RES82      =((uint32_t)0x00000052u),
 SCB_enVECISR_RES83      =((uint32_t)0x00000053u),
 SCB_enVECISR_I2C2       =((uint32_t)0x00000054u),
 SCB_enVECISR_I2C3       =((uint32_t)0x00000055u),
 SCB_enVECISR_TIMER4A    =((uint32_t)0x00000056u),
 SCB_enVECISR_TIMER4B    =((uint32_t)0x00000057u),
 SCB_enVECISR_RES88      =((uint32_t)0x00000058u),
 SCB_enVECISR_RES89      =((uint32_t)0x00000059u),
 SCB_enVECISR_RES90      =((uint32_t)0x0000005Au),
 SCB_enVECISR_RES91      =((uint32_t)0x0000005Bu),
 SCB_enVECISR_RES92      =((uint32_t)0x0000005Cu),
 SCB_enVECISR_RES93      =((uint32_t)0x0000005Du),
 SCB_enVECISR_RES94      =((uint32_t)0x0000005Eu),
 SCB_enVECISR_RES95      =((uint32_t)0x0000005Fu),
 SCB_enVECISR_RES96      =((uint32_t)0x00000060u),
 SCB_enVECISR_RES97      =((uint32_t)0x00000061u),
 SCB_enVECISR_RES98      =((uint32_t)0x00000062u),
 SCB_enVECISR_RES99      =((uint32_t)0x00000063u),
 SCB_enVECISR_RES100     =((uint32_t)0x00000064u),
 SCB_enVECISR_RES101     =((uint32_t)0x00000065u),
 SCB_enVECISR_RES102     =((uint32_t)0x00000066u),
 SCB_enVECISR_RES103     =((uint32_t)0x00000067u),
 SCB_enVECISR_RES104     =((uint32_t)0x00000068u),
 SCB_enVECISR_RES105     =((uint32_t)0x00000069u),
 SCB_enVECISR_RES106     =((uint32_t)0x0000006Au),
 SCB_enVECISR_RES107     =((uint32_t)0x0000006Bu),
 SCB_enVECISR_TIMER5A    =((uint32_t)0x0000006Cu),
 SCB_enVECISR_TIMER5B    =((uint32_t)0x0000006Du),
 SCB_enVECISR_WTIMER0A   =((uint32_t)0x0000006Eu),
 SCB_enVECISR_WTIMER0B   =((uint32_t)0x0000006Fu),
 SCB_enVECISR_WTIMER1A   =((uint32_t)0x00000070u),
 SCB_enVECISR_WTIMER1B   =((uint32_t)0x00000071u),
 SCB_enVECISR_WTIMER2A   =((uint32_t)0x00000072u),
 SCB_enVECISR_WTIMER2B   =((uint32_t)0x00000073u),
 SCB_enVECISR_WTIMER3A   =((uint32_t)0x00000074u),
 SCB_enVECISR_WTIMER3B   =((uint32_t)0x00000075u),
 SCB_enVECISR_WTIMER4A   =((uint32_t)0x00000076u),
 SCB_enVECISR_WTIMER4B   =((uint32_t)0x00000077u),
 SCB_enVECISR_WTIMER5A   =((uint32_t)0x00000078u),
 SCB_enVECISR_WTIMER5B   =((uint32_t)0x00000079u),
 SCB_enVECISR_SYSEXC     =((uint32_t)0x0000007Au),
 SCB_enVECISR_RES123     =((uint32_t)0x0000007Bu),
 SCB_enVECISR_RES124     =((uint32_t)0x0000007Cu),
 SCB_enVECISR_RES125     =((uint32_t)0x0000007Du),
 SCB_enVECISR_RES126     =((uint32_t)0x0000007Eu),
 SCB_enVECISR_RES127     =((uint32_t)0x0000007Fu),
 SCB_enVECISR_RES128     =((uint32_t)0x00000080u),
 SCB_enVECISR_RES129     =((uint32_t)0x00000081u),
 SCB_enVECISR_RES130     =((uint32_t)0x00000082u),
 SCB_enVECISR_RES131     =((uint32_t)0x00000083u),
 SCB_enVECISR_RES132     =((uint32_t)0x00000084u),
 SCB_enVECISR_RES133     =((uint32_t)0x00000085u),
 SCB_enVECISR_RES134     =((uint32_t)0x00000086u),
 SCB_enVECISR_RES135     =((uint32_t)0x00000087u),
 SCB_enVECISR_RES136     =((uint32_t)0x00000088u),
 SCB_enVECISR_RES137     =((uint32_t)0x00000089u),
 SCB_enVECISR_RES138     =((uint32_t)0x0000008Au),
 SCB_enVECISR_RES139     =((uint32_t)0x0000008Bu),
 SCB_enVECISR_RES140     =((uint32_t)0x0000008Cu),
 SCB_enVECISR_RES141     =((uint32_t)0x0000008Du),
 SCB_enVECISR_RES142     =((uint32_t)0x0000008Eu),
 SCB_enVECISR_RES143     =((uint32_t)0x0000008Fu),
 SCB_enVECISR_RES144     =((uint32_t)0x00000090u),
 SCB_enVECISR_RES145     =((uint32_t)0x00000091u),
 SCB_enVECISR_RES146     =((uint32_t)0x00000092u),
 SCB_enVECISR_RES147     =((uint32_t)0x00000093u),
 SCB_enVECISR_RES148     =((uint32_t)0x00000094u),
 SCB_enVECISR_RES149     =((uint32_t)0x00000095u),
 SCB_enVECISR_PWM1GEN0   =((uint32_t)0x00000096u),
 SCB_enVECISR_PWM1GEN1   =((uint32_t)0x00000097u),
 SCB_enVECISR_PWM1GEN2   =((uint32_t)0x00000098u),
 SCB_enVECISR_PWM1GEN3   =((uint32_t)0x00000099u),
 SCB_enVECISR_PWM1FAULT  =((uint32_t)0x0000009Au),
}SCB_nVECISR;






#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_ENUM_H_ */
