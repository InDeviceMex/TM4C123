/**
 *
 * @file NVIC_DeInitInterrupts.c
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
 * @verbatim 24 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_DeInitInterrupts.h>

#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_Enable.h>

void NVIC__vDeInitInterrupts(void)
{
    NVIC__vClearEnableIRQ(NVIC_enSTIR_WDT01);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER0A);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER1A);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER2A);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER3A);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER4A);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER5A);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER0B);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER1B);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER2B);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER3B);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER4B);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_TIMER5B);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOA);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOB);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOC);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOD);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOE);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_GPIOF);


    NVIC__vClearEnableIRQ(NVIC_enSTIR_UDMASOFT);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_UDMAERROR);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_HIB);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_UART0);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_UART1);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_UART2);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_UART3);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_UART4);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_UART5);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_UART6);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_UART7);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_SSI0);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_SSI1);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_SSI2);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_SSI3);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_I2C0);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_I2C1);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_I2C2);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_I2C3);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_USB);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_CAN0);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_CAN1);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_ADC1SEQ0);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_ADC1SEQ1);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_ADC1SEQ2);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_ADC1SEQ3);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_ADC0SEQ0);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_ADC0SEQ1);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_ADC0SEQ2);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_ADC0SEQ3);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_ACMP0);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_ACMP1);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_PWM0GEN0);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_PWM0GEN1);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_PWM0GEN2);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_PWM0GEN3);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_PWM0FAULT);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_PWM1GEN0);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_PWM1GEN1);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_PWM1GEN2);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_PWM1GEN3);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_PWM1FAULT);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_QEI0);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_QEI1);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_FLASH);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_SYSCTL);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_SYSEXC);

    NVIC__vClearEnableIRQ(NVIC_enSTIR_WTIMER0A);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_WTIMER1A);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_WTIMER2A);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_WTIMER3A);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_WTIMER4A);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_WTIMER5A);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_WTIMER0B);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_WTIMER1B);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_WTIMER2B);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_WTIMER3B);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_WTIMER4B);
    NVIC__vClearEnableIRQ(NVIC_enSTIR_WTIMER5B);
}
