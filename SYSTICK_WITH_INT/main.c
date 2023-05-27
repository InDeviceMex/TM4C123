/*Copiaremos las definiciones del anterior proyecto*/

/**
 *
 * Include definiciones de Perifericos de Micro TM4C123G
 */
#include "tm4c123gh6pm.h"
/**
 *
 * include redefinicion de variables estandard
 */
#include "stdint.h"

/**
 * Prototipos de funciones locales
 */
void MAIN__vInitButtons(void);
void MAIN__vInitLEDS(void);
void MAIN__vInitSystick(void);

void MAIN__vInitLEDS(void);
void MAIN__vInitButtons(void);

void MAIN__vEnableInterrupts(void);
void MAIN__vDisableInterrupts(void);

void MAIN__vSystickHandler(void);

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

void MAIN__vEnableInterrupts(void)
{
    /*Se cre las directivas en ensamblador, ya que son instrucicones en ensamblador*/
    __asm(" cpsie i");
}

void MAIN__vDisableInterrupts(void)
{
    __asm(" cpsid i");
}

/**
 * main.c
 */
void main(void)
{
    /*Vamos a trabajar con interrupciones por lo tanto se tienen que habilitar las interrupciones globales
     * Estas interrupciones se habilitan en el startup, pero nosotros crearemos nuestras propias funciones*/
    MAIN__vEnableInterrupts();

    /*Crearemos una funcion para inicializar el Systick llamada MAIN__vInitSystick(void)*/

    /*Llamada a funciones de configuracion*/
    MAIN__vInitButtons();
    MAIN__vInitLEDS();
    MAIN__vInitSystick();

    while(1UL)
    {

    }
}

/*Creamos el manejador de la interrupcion del Systick
 * y lo daremos de alta en el vector de interrupciones en el archivo startup*/
void MAIN__vSystickHandler(void)
{
    /*Como se utiliza interrupciones, la bandera COUNT en el SYSTICK
     * se limpia automaticamente al entrar a la interrupcion
     * */

    /*Solo pondremos codigo a ejecutar*/
    GPIO_PORTF_DATA_R ^= LED_RED; /*Conmutara el LED verde cada segundo*/
}

void MAIN__vInitSystick(void)
{
    /*La configuracion sera muy parecida, el cambio es en la habilitacion de la interrupciones*/
    /**
     * Systick Control
     *
     * ENABLE
     * 0 = systick disable
     * 1 = systick enable
     *
     * INTEN
     * 0 = int deshabilitada
     * 1 = int habilitada
     *
     * COUNT
     * 0 = cuenta no ha llegado a 0
     * 1 = cuenta llego a 0
     *
     * CLK_SRC
     *
     * 0 = Piosc/4 = 16Mhz/4  = 4Mhz
     * 1 = Sysclk = 16Mhz
     *
     */
    NVIC_ST_CTRL_R = NVIC_ST_CTRL_INTEN; /*Piosc/4, int enable, systick disable*/

    /**
     * Systick Reload = periodo de recarga
     *
     * maximas cuentas 24 bits = 16,777,216
     * 0 - 16,777,215
     *
     * si se requiere un retardo de 1 segundo con piosc/4
     *
     * entonces se necesita idnicar un periodo de 4000000 - 1UL (contando el 0)
     *
     */
    NVIC_ST_RELOAD_R = 4000000UL - 1UL;


    /**
     * Reincia la cuenta actual del SYSTICK
     */
    NVIC_ST_CURRENT_R = 0UL;

    /**
     * HAbilitacion del SYSTICK
     */
    NVIC_ST_CTRL_R |= NVIC_ST_CTRL_ENABLE;
}

/*Ahora copiaremos la configuraciond de botones y leds del proyecto anterior*/

void MAIN__vInitLEDS(void)
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
     /*Espera hasta que GPIOF este listo para ser accedido*/
     while(0UL == (SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R5));

     /**
      * DIR = Direction register
      * 0 = Entrada
      * 1 = salida
      */
     GPIO_PORTF_DIR_R |=  (LED_RED | LED_BLUE | LED_GREEN); /*Configura LEDS como salidas*/

     /**
      * AFSEL = Alternate function selection register
      *
      * 0 = GPIO
      * 1 = Alternate peripheral
      */
     GPIO_PORTF_AFSEL_R &= ~(LED_RED | LED_BLUE | LED_GREEN); /*Configuracion de LED como GPIO*/

     /**
      * ODR = Open Drain register
      *
      * 0 = Push-Pull
      * 1 = Open-Drain
      *
      */
     GPIO_PORTF_ODR_R &= ~(LED_RED | LED_BLUE | LED_GREEN);/*Configuracion de LED como push-pull*/


     /**
      * PUR = Pull up resistor register
      * 0 = Pull-up disable
      * 1 = pull-up enable
      *
      * @note: PDR , (pull down resistor register) es complementario
      */
     /*Salidas no necesitan Pull-up , si estan configuradas como push-pull*/
     GPIO_PORTF_PUR_R &=  ~(LED_RED | LED_BLUE | LED_GREEN);

     /**
      * DEN = Digital enable register
      *
      * 0 = Digital function disable
      * 1 = Digital function enable
      */
     GPIO_PORTF_DEN_R |= (LED_RED | LED_BLUE | LED_GREEN);

     /**
      * AMSEL = Analog mode selection
      * 0 = analog function disable
      * 1 = analog function enable
      */
     GPIO_PORTF_AMSEL_R &=  ~(LED_RED | LED_BLUE | LED_GREEN);

     /**
      * PCTL = Port Control register
      * 0 = GPIO
      */
     GPIO_PORTF_PCTL_R = 0UL; /*Puerto completo como GPIO*/

     GPIO_PORTF_DATA_R &=  ~(LED_RED | LED_BLUE | LED_GREEN);
}


void MAIN__vInitButtons(void)
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
     /*Espera hasta que GPIOF este listo para ser accedido*/
     while(0UL == (SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R5));

     /**
      * GPIOF0 tiene proteccion para escritura, se tien que desbloquear antes de poder configurarlo
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

     /**
      * AFSEL = Alternate function selection register
      *
      * 0 = GPIO
      * 1 = Alternate peripheral
      */
     GPIO_PORTF_AFSEL_R &= ~(PUSH_BUTTON_1 | PUSH_BUTTON_2); /*Configuracion de botones como GPIO*/

     /**
      * ODR = Open Drain register
      *
      * 0 = Push-Pull
      * 1 = Open-Drain
      *
      */
     /*Configuracion de botones como push-pull (indiferente)*/
     GPIO_PORTF_ODR_R &= ~(PUSH_BUTTON_1 | PUSH_BUTTON_2);


     /**
      * PUR = Pull up resistor register
      * 0 = Pull-up disable
      * 1 = pull-up enable
      *
      * @note: PDR , (pull down resistor register) es complementario
      */
     /*Para poder se utilizados los botones deben configurarse con resistencia de pull-up*/
     GPIO_PORTF_PUR_R |=  (PUSH_BUTTON_1 | PUSH_BUTTON_2);

     /**
      * DEN = Digital enable register
      *
      * 0 = Digital function disable
      * 1 = Digital function enable
      */
     GPIO_PORTF_DEN_R |= (PUSH_BUTTON_1 | PUSH_BUTTON_2); /*Tanto LED y botones son digitales*/

     /**
      * AMSEL = Analog mode selection
      * 0 = analog function disable
      * 1 = analog function enable
      */
     /*Tanto LED como botones tiene que tener deshabilitado la funcionalidad analogica*/
     GPIO_PORTF_AMSEL_R &=  ~(PUSH_BUTTON_1 | PUSH_BUTTON_2);

     /**
      * PCTL = Port Control register
      * 0 = GPIO
      */
     GPIO_PORTF_PCTL_R = 0UL; /*Puerto completo como GPIO*/

     GPIO_PORTF_DATA_R &=  ~(PUSH_BUTTON_1 | PUSH_BUTTON_2);
}
