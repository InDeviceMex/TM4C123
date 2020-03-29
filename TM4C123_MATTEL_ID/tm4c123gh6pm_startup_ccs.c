//*****************************************************************************
//
// Startup code for use with TI's Code Composer Studio.
//
// Copyright (c) 2011-2014 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Software License Agreement
//
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
//
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
//
//*****************************************************************************

#include <stdint.h>

//*****************************************************************************
//
// Forward declaration of the default fault handlers.
//
//*****************************************************************************
void ResetISR(void);
static void NmiSR(void);
static void IntDefaultHandler(void);
extern void FaultISR(void);
extern void UsageFaultHandler(void);
extern void BusFaultHandler(void);
extern void MPUFaultHandler(void);
extern void PendSVHandler(void);
extern void SysTickHandler(void);

extern void WTIMER0AHandler(void);
extern void WTIMER0BHandler(void);
extern void WTIMER1AHandler(void);
extern void WTIMER1BHandler(void);
extern void WTIMER2AHandler(void);
extern void WTIMER2BHandler(void);
extern void WTIMER3AHandler(void);
extern void WTIMER3BHandler(void);
extern void WTIMER4AHandler(void);
extern void WTIMER4BHandler(void);
extern void WTIMER5AHandler(void);
extern void WTIMER5BHandler(void);

extern void TIMER0AHandler(void);
extern void TIMER0BHandler(void);
extern void TIMER1AHandler(void);
extern void TIMER1BHandler(void);
extern void TIMER2AHandler(void);
extern void TIMER2BHandler(void);
extern void TIMER3AHandler(void);
extern void TIMER3BHandler(void);
extern void TIMER4AHandler(void);
extern void TIMER4BHandler(void);
extern void TIMER5AHandler(void);
extern void TIMER5BHandler(void);

extern void UART0Handler(void);
extern void UART1Handler(void);
extern void UART2Handler(void);
extern void UART3Handler(void);
extern void UART4Handler(void);
extern void UART5Handler(void);
extern void UART6Handler(void);
extern void UART7Handler(void);

extern void I2C0Handler(void);
extern void I2C1Handler(void);
extern void I2C2Handler(void);
extern void I2C3Handler(void);
extern void WDTHandler(void);

//*****************************************************************************
//
// External declaration for the reset handler that is to be called when the
// processor is started
//
//*****************************************************************************
extern void _c_int00(void);

//*****************************************************************************
//
// Linker variable that marks the top of the stack.
//
//*****************************************************************************
extern uint32_t __STACK_TOP;

//*****************************************************************************
//
// External declarations for the interrupt handlers used by the application.
//
//*****************************************************************************
// To be added by user

//*****************************************************************************
//
// The vector table.  Note that the proper constructs must be placed on this to
// ensure that it ends up at physical address 0x0000.0000 or at the start of
// the program if located at a start address other than 0.
//
//*****************************************************************************
#pragma DATA_SECTION(g_pfnVectors, ".intvecs")
void (* const g_pfnVectors[])(void) =
{
    (void (*)(void))((uint32_t)&__STACK_TOP),
                                            // The initial stack pointer
    ResetISR,                            // The reset handler
    NmiSR,                               // The NMI handler
    FaultISR,                            // The hard fault handler
    MPUFaultHandler,                     // The MPU fault handler
    BusFaultHandler,                     // The bus fault handler
    UsageFaultHandler,                   // The usage fault handler
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // SVCall handler
    IntDefaultHandler,                      // Debug monitor handler
    0,                                      // Reserved
    PendSVHandler,                      // The PendSV handler
    SysTickHandler,                     // The SysTick handler
    IntDefaultHandler,                      // GPIO Port A
    IntDefaultHandler,                      // GPIO Port B
    IntDefaultHandler,                      // GPIO Port C
    IntDefaultHandler,                      // GPIO Port D
    IntDefaultHandler,                      // GPIO Port E
    UART0Handler,                      // UART0 Rx and Tx
    UART1Handler,                      // UART1 Rx and Tx
    IntDefaultHandler,                      // SSI0 Rx and Tx
    I2C0Handler,                      // I2C0 Master and Slave
    IntDefaultHandler,                      // PWM Fault
    IntDefaultHandler,                      // PWM Generator 0
    IntDefaultHandler,                      // PWM Generator 1
    IntDefaultHandler,                      // PWM Generator 2
    IntDefaultHandler,                      // Quadrature Encoder 0
    IntDefaultHandler,                      // ADC Sequence 0
    IntDefaultHandler,                      // ADC Sequence 1
    IntDefaultHandler,                      // ADC Sequence 2
    IntDefaultHandler,                      // ADC Sequence 3
    WDTHandler,                      // Watchdog timer
    TIMER0AHandler,                      // TIMER 0 subtimer A
    TIMER0BHandler,                      // TIMER 0 subtimer B
    TIMER1AHandler,                      // TIMER 1 subtimer A
    TIMER1BHandler,                      // TIMER 1 subtimer B
    TIMER2AHandler,                      // TIMER 2 subtimer A
    TIMER2BHandler,                      // TIMER 2 subtimer B
    IntDefaultHandler,                      // Analog Comparator 0
    IntDefaultHandler,                      // Analog Comparator 1
    IntDefaultHandler,                      // Analog Comparator 2
    IntDefaultHandler,                      // System Control (PLL, OSC, BO)
    IntDefaultHandler,                      // FLASH Control
    IntDefaultHandler,                      // GPIO Port F
    IntDefaultHandler,                      // GPIO Port G
    IntDefaultHandler,                      // GPIO Port H
    UART2Handler,                      // UART2 Rx and Tx
    IntDefaultHandler,                      // SSI1 Rx and Tx
    TIMER3AHandler,                      // TIMER 3 subtimer A
    TIMER3BHandler,                      // TIMER 3 subtimer B
    I2C1Handler,                      // I2C1 Master and Slave
    IntDefaultHandler,                      // Quadrature Encoder 1
    IntDefaultHandler,                      // CAN0
    IntDefaultHandler,                      // CAN1
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // Hibernate
    IntDefaultHandler,                      // USB0
    IntDefaultHandler,                      // PWM Generator 3
    IntDefaultHandler,                      // uDMA Software Transfer
    IntDefaultHandler,                      // uDMA Error
    IntDefaultHandler,                      // ADC1 Sequence 0
    IntDefaultHandler,                      // ADC1 Sequence 1
    IntDefaultHandler,                      // ADC1 Sequence 2
    IntDefaultHandler,                      // ADC1 Sequence 3
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // GPIO Port J
    IntDefaultHandler,                      // GPIO Port K
    IntDefaultHandler,                      // GPIO Port L
    IntDefaultHandler,                      // SSI2 Rx and Tx
    IntDefaultHandler,                      // SSI3 Rx and Tx
    UART3Handler,                      // UART3 Rx and Tx
    UART4Handler,                      // UART4 Rx and Tx
    UART5Handler,                      // UART5 Rx and Tx
    UART6Handler,                      // UART6 Rx and Tx
    UART7Handler,                      // UART7 Rx and Tx
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    I2C2Handler,                      // I2C2 Master and Slave
    I2C3Handler,                      // I2C3 Master and Slave
    TIMER4AHandler,                      // TIMER 4 subtimer A
    TIMER4BHandler,                      // TIMER 4 subtimer B
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    TIMER5AHandler,                      // TIMER 5 subtimer A
    TIMER5BHandler,                      // TIMER 5 subtimer B
    WTIMER0AHandler,                      // Wide TIMER 0 subtimer A
    WTIMER0BHandler,                      // Wide TIMER 0 subtimer B
    WTIMER1AHandler,                      // Wide TIMER 1 subtimer A
    WTIMER1BHandler,                      // Wide TIMER 1 subtimer B
    WTIMER2AHandler,                      // Wide TIMER 2 subtimer A
    WTIMER2BHandler,                      // Wide TIMER 2 subtimer B
    WTIMER3AHandler,                      // Wide TIMER 3 subtimer A
    WTIMER3BHandler,                      // Wide TIMER 3 subtimer B
    WTIMER4AHandler,                      // Wide TIMER 4 subtimer A
    WTIMER4BHandler,                      // Wide TIMER 4 subtimer B
    WTIMER5AHandler,                      // Wide TIMER 5 subtimer A
    WTIMER5BHandler,                      // Wide TIMER 5 subtimer B
    IntDefaultHandler,                      // FPU
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // I2C4 Master and Slave
    IntDefaultHandler,                      // I2C5 Master and Slave
    IntDefaultHandler,                      // GPIO Port M
    IntDefaultHandler,                      // GPIO Port N
    IntDefaultHandler,                      // Quadrature Encoder 2
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // GPIO Port P (Summary or P0)
    IntDefaultHandler,                      // GPIO Port P1
    IntDefaultHandler,                      // GPIO Port P2
    IntDefaultHandler,                      // GPIO Port P3
    IntDefaultHandler,                      // GPIO Port P4
    IntDefaultHandler,                      // GPIO Port P5
    IntDefaultHandler,                      // GPIO Port P6
    IntDefaultHandler,                      // GPIO Port P7
    IntDefaultHandler,                      // GPIO Port Q (Summary or Q0)
    IntDefaultHandler,                      // GPIO Port Q1
    IntDefaultHandler,                      // GPIO Port Q2
    IntDefaultHandler,                      // GPIO Port Q3
    IntDefaultHandler,                      // GPIO Port Q4
    IntDefaultHandler,                      // GPIO Port Q5
    IntDefaultHandler,                      // GPIO Port Q6
    IntDefaultHandler,                      // GPIO Port Q7
    IntDefaultHandler,                      // GPIO Port R
    IntDefaultHandler,                      // GPIO Port S
    IntDefaultHandler,                      // PWM 1 Generator 0
    IntDefaultHandler,                      // PWM 1 Generator 1
    IntDefaultHandler,                      // PWM 1 Generator 2
    IntDefaultHandler,                      // PWM 1 Generator 3
    IntDefaultHandler                       // PWM 1 Fault
};

//*****************************************************************************
//
// This is the code that gets called when the processor first starts execution
// following a reset event.  Only the absolutely necessary set is performed,
// after which the application supplied entry() routine is called.  Any fancy
// actions (such as making decisions based on the reset cause register, and
// resetting the bits in that register) are left solely in the hands of the
// application.
//
//*****************************************************************************
void
ResetISR(void)
{
    //
    // Jump to the CCS C initialization routine.  This will enable the
    // floating-point unit as well, so that does not need to be done here.
    //
    __asm("    .global _c_int00\n"
          "    b.w     _c_int00");
}

//*****************************************************************************
//
// This is the code that gets called when the processor receives a NMI.  This
// simply enters an infinite loop, preserving the system state for examination
// by a debugger.
//
//*****************************************************************************
static void
NmiSR(void)
{
    //
    // Enter an infinite loop.
    //
    while(1)
    {
    }
}

//*****************************************************************************
//
// This is the code that gets called when the processor receives an unexpected
// interrupt.  This simply enters an infinite loop, preserving the system state
// for examination by a debugger.
//
//*****************************************************************************
static void
IntDefaultHandler(void)
{
    //
    // Go into an infinite loop.
    //
    while(1)
    {
    }
}
