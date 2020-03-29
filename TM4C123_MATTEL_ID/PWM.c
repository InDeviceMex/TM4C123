/*
 * PWM.c
 *
 *  Created on: Jun 6, 2018
 *      Author: GOS_TD
 */



#include <PWM.h>

#define PWM_ENABLE_PWM1EN       0x00000002  // PWM1 Output Enable
#define PWM_ENABLE_PWM0EN       0x00000001  // PWM0 Output Enable
#define PWM_0_CTL_MODE          0x00000002  // Counter Mode
#define PWM_0_CTL_ENABLE        0x00000001  // PWM Block Enable
#define PWM_0_GENA_ACTLOAD_ZERO 0x00000008  // Set the output signal to 0
#define PWM_0_GENA_ACTZERO_ONE  0x00000003  // Set the output signal to 1
#define PWM_0_GENB_ACTCMPAD_ZERO                                              \
                                0x00000080  // Set the output signal to 0
#define PWM_0_GENB_ACTCMPAU_ONE 0x00000030  // Set the output signal to 1
#define SYSCTL_RCC_USEPWMDIV    0x00100000  // Enable PWM Clock Divisor
#define SYSCTL_RCC_PWMDIV_M     0x000E0000  // PWM Unit Clock Divisor
#define SYSCTL_RCGC0_PWM0       0x00100000  // PWM Clock Gating Control
#define SYSCTL_RCGC2_GPIOB      0x00000002  // Port B Clock Gating Control


void PWM0Dual_Init(unsigned short period)
{
  volatile unsigned long delay;

  SYSCTL_RCGCPWM->RCGCPWM0 = 0x01;             // 1) activate PWM0
  SYSCTL_RCGCGPIO->RCGCGPIOB= 0x01;            // 2) activate port B
  delay = SYSCTL_RCGCGPIO_R;            // allow time to finish activating
  GPIOB_AHB->GPIOAFSEL |= (PIN7|PIN6);           // enable alt funct on PB7-6
  GPIOB_AHB_GPIOPCTL->PMC6 =4;     // configure PB7-6 as PWM0
  GPIOB_AHB_GPIOPCTL->PMC7=4;
  GPIOB_AHB->GPIOAMSEL &= ~(PIN7|PIN6);          // disable analog functionality on PB7-6
  GPIOB_AHB->GPIODEN |= (PIN7|PIN6);             // enable digital I/O on PB7-6
  SYSCTL_RCC->USEPWMDIV=1; // 3) use PWM divider
  SYSCTL_RCC->PWMDIV = 5; //    clear PWM divider field
  PWM0->PWM0CTL = 0;                     // 4) disable PWM while initializing
  //PWM0, Generator A (PWM0/PB6) goes to 0 when count==reload and 1 when count==0
  PWM0->PWM0GENA = (PWM_0_GENA_ACTLOAD_ZERO|PWM_0_GENA_ACTZERO_ONE);
  //PWM0, Generator B (PWM1/PB7) goes to 0 when count==CMPA counting down and 1 when count==CMPA counting up
  PWM0->PWM0GENB = (PWM_0_GENB_ACTCMPAD_ZERO|PWM_0_GENB_ACTCMPAU_ONE);
  PWM0->PWM0LOAD = (period - 1)/2;       // 5) count from zero to this number and back to zero in (period - 1) cycles
  PWM0->PWM0CMPA = (period - 1)/4;       // 6) count value when PWM1/PB7 toggles
                                        // 7) start PWM0 in Count Up/Down mode
  PWM0->PWM0CTL |= (PWM_0_CTL_MODE|PWM_0_CTL_ENABLE);
                                        // enable PWM1-0
  PWM0->PWMENABLE |= (PWM_ENABLE_PWM1EN|PWM_ENABLE_PWM0EN);
}
// change period
// period is 16-bit number of PWM clock cycles in one period (3<=period)
void PWM0Dual_Period(unsigned short period)
{
    PWM0->PWM0LOAD = (period - 1)/2;       // 5) count from zero to this number and back to zero in (period - 1) cycles
    PWM0->PWM0CMPA = (period - 1)/4;       // 6) count value when PWM1/PB7 toggles
}

