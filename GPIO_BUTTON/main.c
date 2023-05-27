

/**
 * main.c
 */

/**
 * Include de Definiciones del TM4C123G o TIVA C
 **/
#include "tm4c123gh6pm.h"

/**
 *
 * Include de redefiniciones de variables standard
 */
#include "stdint.h"

/**
 * Definiciones de los Pines del GPIO
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
 * Definiciones de los botones fisicos de la tarjeta TIVA C
 */
#define PUSH_BUTTON_1 GPIO_PIN_0
#define PUSH_BUTTON_2 GPIO_PIN_4

/**
 * Definiciones de los LED fisicos de la tarjeta TIVA C
 */
#define LED_RED GPIO_PIN_1
#define LED_BLUE GPIO_PIN_2
#define LED_GREEN GPIO_PIN_3


void main(void)
{
    /**
     * Habilitacion del Reloj de GPIOF
     *
     * Bit 0 = GPIOA
     * Bit 1 = GPIOB
     * Bit 2 = GPIOC
     * Bit 3 = GPIOD
     * Bit 4 = GPIOE
     * Bit 5 = GPIOF
     *
     *  PushButtons estan en el pin 0 y pin 4 de GPIOF
     **/
    SYSCTL_RCGCGPIO_R = SYSCTL_RCGCGPIO_R5; /*Habilitacion del reloj de GPIOF*/
    while(0UL == (SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R5)); /*Espera hasta que GPIOF este listo para ser accedido*/

    /**
     * GPIOF0 tiene proteccion para escritura, se tien que desbloquear antes de poder confiurarlo
     */

    /**
     * LOOK = Lock register
     *
     * KEY = 0x4C4F434B;
     */
    GPIO_PORTF_LOCK_R = 0x4C4F434BUL;

    /**
     * CR = Commit register
     *
     * 0 = Lock
     * 1 = unlock
     *
     */
    GPIO_PORTF_CR_R = 0xFFUL; /*unlock all GPIOF pines*/


    /**
     * DIR = Direction register
     * 0 = Entrada
     * 1 = salida
     */
    GPIO_PORTF_DIR_R &= ~(PUSH_BUTTON_1 | PUSH_BUTTON_2); /*Configura Botones como entrada*/
    GPIO_PORTF_DIR_R |= (LED_RED | LED_BLUE | LED_GREEN); /*Configura LED como salidas*/

    /**
     * AFSEL = Alternate function selection register
     *
     * 0 = GPIO
     * 1 = Alternate peripheral
     */
    GPIO_PORTF_AFSEL_R &= ~(PUSH_BUTTON_1 | PUSH_BUTTON_2); /*Configuracion de botones como GPIO*/
    GPIO_PORTF_AFSEL_R &= ~(LED_RED | LED_BLUE | LED_GREEN); /*Configuracion de LED como GPIO*/

    /**
     * ODR = Open Drain register
     *
     * 0 = Push-Pull
     * 1 = Open-Drain
     *
     */
    GPIO_PORTF_ODR_R &= ~(PUSH_BUTTON_1 | PUSH_BUTTON_2); /*Configuracion de botones como push-pull (indiferente)*/
    GPIO_PORTF_ODR_R &= ~(LED_RED | LED_BLUE | LED_GREEN);/*Configuracion de LED como push-pull*/


    /**
     * PUR = Pull up resistor register
     * 0 = Pull-up disable
     * 1 = pull-up enable
     *
     * @note: PDR , (pull down resistor register) es complementario
     */
    GPIO_PORTF_PUR_R |=  (PUSH_BUTTON_1 | PUSH_BUTTON_2); /*Para poder se utilizados los botones deben configurarse con resistencia de pull-up*/
    GPIO_PORTF_PUR_R &=  ~(LED_RED | LED_BLUE | LED_GREEN); /*Salidas no necesitan Pull-up , si estan configuradas como push-pull*/

    /**
     * DEN = Digital enable register
     *
     * 0 = Digital function disable
     * 1 = Digital function enable
     */
    GPIO_PORTF_DEN_R |= (PUSH_BUTTON_1 | PUSH_BUTTON_2); /*Tanto LED y botones son digitales*/
    GPIO_PORTF_DEN_R |= (LED_RED | LED_BLUE | LED_GREEN);

    /**
     * AMSEL = Analog mode selection
     * 0 = analog function disable
     * 1 = analog function enable
     */
    GPIO_PORTF_AMSEL_R &=  ~(PUSH_BUTTON_1 | PUSH_BUTTON_2); /*Tanto LED como botones tiene que tener deshabilitado la funcionalidad analogica*/
    GPIO_PORTF_AMSEL_R &=  ~(LED_RED | LED_BLUE | LED_GREEN);

    /**
     * PCTL = Port Control register
     * 0 = GPIO
     */
    GPIO_PORTF_PCTL_R = 0UL; /*Puerto completo como GPIO*/

    GPIO_PORTF_DATA_R = 0UL;

	while(1UL)
	{
	    uint32_t u32Button1State = 0UL;
        uint32_t u32Button2State = 0UL;

        /**
         * Lectura de Boton 1 y boton 2
         */
        u32Button1State = GPIO_PORTF_DATA_R & PUSH_BUTTON_1; /*Obtencion del valor del boton 1*/
        u32Button2State = GPIO_PORTF_DATA_R & PUSH_BUTTON_2; /*Obtencion del valor del boton 2*/

        /**
         * Botones tienen logica invertida por lo tanto:
         *
         * 0 = boton presionado
         * 1 = boton sin presionar
         */
        if(0UL == u32Button1State) /*Boton 1 Presionado*/
        {
            GPIO_PORTF_DATA_R |= LED_RED;
        }
        else /*boton 1 sin presionar*/
        {
            GPIO_PORTF_DATA_R &=  ~LED_RED;
        }


        if(0UL == u32Button2State) /*boton 2 presionado*/
        {
            GPIO_PORTF_DATA_R |= LED_BLUE;
        }
        else
        {
            GPIO_PORTF_DATA_R &=  ~LED_BLUE;
        }
	}
}
