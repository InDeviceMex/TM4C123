

/**
 * main.c
 */

/**
 * include de definciones para utilizar TM4C123G
 */
#include "tm4c123gh6pm.h"

/**
 * Include de redefinicion de variables estandard
 */
#include "stdint.h"

/**
 * Definiciones sobre PINES de GPIO
 */
#define GPIO_PIN_0 (0x1UL)
#define GPIO_PIN_1 (0x2UL)
#define GPIO_PIN_2 (0x4UL)
#define GPIO_PIN_3 (0x8UL)
#define GPIO_PIN_4 (0x10UL)
#define GPIO_PIN_5 (0x20UL)
#define GPIO_PIN_6 (0x40UL)
#define GPIO_PIN_7 (0x80UL)

/**
 * Definciones de Pines de LED RGB de la placa tiva C
 */
#define LED_RED GPIO_PIN_1
#define LED_BLUE GPIO_PIN_2
#define LED_GREEN GPIO_PIN_3


void main(void)
{
    /**
     * Configuracion y habilitacion de Reloj del Periferico GPIOF
     *
     * bit 0 = GPIOA
     * bit 1 = GPIOB
     * bit 2 = GPIOC
     * bit 3 = GPIOD
     * bit 4 = GPIOE
     * bit 5 = GPIOF -> LED estan en este periferico
     * */
    SYSCTL_RCGCGPIO_R = SYSCTL_RCGCGPIO_R5; /*Habilita Reloj GPIOF*/
    while(0UL == (SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R5)); /*Espera que GPIOF este listo*/

    /**
     * Configuracion de LED in GPIOF
     */

    /**
     * DIR , Direction register
     * 1 = Output
     * 0 = input
     */
    GPIO_PORTF_DIR_R |=  LED_RED | LED_BLUE | LED_GREEN ; /*Los 3 LED son salidas*/

    /**
     * AFSEL = Alternate Function Register
     * 0 = GPIO
     *
     */
    GPIO_PORTF_AFSEL_R &= ~(LED_RED | LED_BLUE | LED_GREEN) ;

    /**
     * ODR = Open Drian Register
     *  0 = Push-Pull
     *  1 = Open-Drain
     *
     *  Salidas deben configurarse como Push-pull, para poder obtener valores 1 y 0 en la salida
     */
    GPIO_PORTF_ODR_R &= ~(LED_RED | LED_BLUE | LED_GREEN) ;

    /**
     * DEN = Digital Enable
     * 0 = Digital function disable
     * 1 = Digital function enable
     *
     * GPIO son digitales, deben estar habilitadas la funcion digital
     *
     */
    GPIO_PORTF_DEN_R |=  LED_RED | LED_BLUE | LED_GREEN ; /*Los 3 LED son salidas*/

    /**
     * Como registro complementatio existe
     *
     * AMSEL = Analog mode selection
     * 0 = Analog disable
     * 1 = Analog enable
     *
     * GPIO son digitales , Funcion analogica debe estar deshabilitada
     *
     */
    GPIO_PORTF_AMSEL_R &= ~(LED_RED | LED_BLUE | LED_GREEN) ;

    /**
     * PCTL = Port Control
     *  0 = GPIO
     *
     *  Registro que indica a que periferico digital estar vinculado cada pin
     *
     */
    GPIO_PORTF_PCTL_R = 0UL;

    /**
     * GPIO LEd RGB configurados
     * LED RGB OFF
     * **/
    GPIO_PORTF_DATA_R &= ~(LED_RED | LED_BLUE | LED_GREEN) ;

    while(1UL)
    {
        /**
         * Variable utilizada para realizar retardos por SW
         */
        uint32_t u32Count = 0UL;

        /**
         * Prende LED Rojo de la tarjeta TIVA C
         */
        GPIO_PORTF_DATA_R |= LED_RED;
        /**
         * Retardo por SW
         * */
        for(u32Count = 0UL; u32Count < 500000UL ; u32Count++){}
        /**
         * Apaga LED Rojo de la tarjeta TIVA C
         */
        GPIO_PORTF_DATA_R &= ~LED_RED;
        /**
         * Retardo por SW
         * */
        for(u32Count = 0UL; u32Count < 500000UL ; u32Count++){}
    }
}
