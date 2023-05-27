/**
 * Include definiciones de Perifericos del Micro TM4C123G
 */
#include "tm4c123gh6pm.h"

/*
 * Include redefiniciones de variables estandard
 */
#include "stdint.h"

/*
 * Prototipos de Funciones locales
 */
void MAIN__vEnableInterrupts(void);
void MAIN__vDisableInterrupts(void);

void MAIN__vInitLEDS(void);
void MAIN__vInitButtons(void);
void MAIN__vInitButtonsInt(void);

/*EL manejador de la interrupcion se debe de dar de alta en el archivo startup.c*/
void MAIN__vGPIOFHandler(void);

/**
 * Definiciones de los Pines usados en el Periferico GPIO
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

/**
 * Funcion dedicada a habilitar las interrupciones GLobales
 */
void MAIN__vEnableInterrupts(void)
{
    __asm(" cpsie i");
}

/*
 * Funcion dedicada a deshabilitar las interrupciones Globales
 */
void MAIN__vDisableInterrupts(void)
{
    __asm(" cpsid i");
}

/**
 * main.c
 */
void main(void)
{
    /**
     * Este programa tiene como proposito utilizar las interrupciones del periferico GPIO
     * En particular ,utilizaremos el Boton 1 y boton 2 de la placa TIVA C
     * Las interrupciones detectaran flancos de subida como de bajada
     */

    /*Se habilitan interrupciones globales*/
    MAIN__vEnableInterrupts();

    /*Llamada a la incializacion de botones y LED*/
    MAIN__vInitLEDS();
    MAIN__vInitButtons();

    /*Llamada a la inicializacion de interrupciones de botones*/
    MAIN__vInitButtonsInt();

	while(1UL)
	{

	}
}

/**
 * Funcion que inicializa los LED de la placa TIVA C
 */
void MAIN__vInitLEDS(void)
{
    /**
     * Habilitacion del Reloj de GPIOF
     */
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R5;
    /*Espera a que GPIOF este habilitado*/
    while(0UL == (SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R5));

    /*Todos los LED seran salida*/
    GPIO_PORTF_DIR_R |= (LED_RED | LED_BLUE | LED_GREEN);

    /*LA funcion alternativa de los pines para LED estará dehabilitada*/
    GPIO_PORTF_AFSEL_R &=  ~(LED_RED | LED_BLUE | LED_GREEN);

    /*El tipo de salida es Push-pull*/
    GPIO_PORTF_ODR_R &= ~(LED_RED | LED_BLUE | LED_GREEN);

    /*La funcionalidad digital de los pines de LED se habilita*/
    GPIO_PORTF_DEN_R |= (LED_RED | LED_BLUE | LED_GREEN);

    /*La funcionalidad analogica de los pines de LED se deshabilita*/
    GPIO_PORTF_AMSEL_R &= ~(LED_RED | LED_BLUE | LED_GREEN);

    /*Los pines se vinculan a GPIO*/
    GPIO_PORTF_PCTL_R &= ~(0xFUL<<(4UL*1UL)); /*para LED rojo*/
    GPIO_PORTF_PCTL_R &= ~(0xFUL<<(4UL*2UL)); /*para LED azul*/
    GPIO_PORTF_PCTL_R &= ~(0xFUL<<(4UL*3UL)); /*para LED verde*/

    /*Valor inicial de LED apagados*/
    GPIO_PORTF_DATA_R &= ~(LED_RED | LED_BLUE | LED_GREEN);
}


/**
 * Funcion que inicializa los Push button de la placa TIVA C
 */
void MAIN__vInitButtons(void)
{
    /**
     * Habilitacion del Reloj de GPIOF
     */
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R5;
    /*Espera a que GPIOF este habilitado*/
    while(0UL == (SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R5));

    /*Push button 1 esta bloqueada su configuracion, se tiene que desbloquear antes de poder usarlo*/
    GPIO_PORTF_LOCK_R = 0x4C4F434BUL;  /*0x4C4F434B llave para desbloquear el registro CR*/
    GPIO_PORTF_CR_R = 0xFFUL; /*Desbloquea completamente el puerto F*/

    /*Push button se configuran como entrada*/
    GPIO_PORTF_DIR_R &= ~(PUSH_BUTTON_1 | PUSH_BUTTON_2);

    /*funcion alternativa deshabilitada*/
    GPIO_PORTF_AFSEL_R &= ~(PUSH_BUTTON_1 | PUSH_BUTTON_2);

    /*Tipo de salida es push-pull (configuracion no relevante)*/
    GPIO_PORTF_ODR_R &= ~(PUSH_BUTTON_1 | PUSH_BUTTON_2);

    /*HAbilitacion de resistencias de Pull-up*/
    GPIO_PORTF_PUR_R |= (PUSH_BUTTON_1 | PUSH_BUTTON_2);

    /*HAbilitacion de la funcionalidad digital*/
    GPIO_PORTF_DEN_R |= (PUSH_BUTTON_1 | PUSH_BUTTON_2);

    /*Deshabilitacion de la funcionalidad analogica*/
    GPIO_PORTF_AMSEL_R &= ~(PUSH_BUTTON_1 | PUSH_BUTTON_2);

    /*Los pines se vinculan a GPIO*/
    GPIO_PORTF_PCTL_R &= ~(0xFUL<<(4UL*0UL)); /*para pushButoon1*/
    GPIO_PORTF_PCTL_R &= ~(0xFUL<<(4UL*4UL)); /*para pushbutton2*/
}


/*Funcion para habilitar interrupciones en botones*/
void MAIN__vInitButtonsInt(void)
{
    /* Primero se tiene que indicar cual será la prioridad de la interrupcion del GPIOF (vector)
     * Eso se indica por medio del NVIC y los registros PRI (NVIC_PRIx_R)
     * Para poder saber que numero de registro se tiene que modificar se tiene que saber el numero
     * Del vector que se va a configurar.
     *
     * El GPIOF tiene el numero 30
     * cada registro PRI configura 4 vectores
     * por lo tanto 30/4 = 7 2/4,
     * El registro necesario es el NVIC_PRI7_R y seria su segundo parametro de 8 bits
     *
     * Este microcontrolador acepta 8 niveles de interrupcion
     * 0 = mas prioritario
     * 7 = menos prioritario
     **/
    NVIC_PRI7_R &= ~NVIC_PRI7_INT30_M;
    NVIC_PRI7_R |= (7UL << NVIC_PRI7_INT30_S);

    /*Ahora habilitamos el vector de interrupcion eso se realiza igual en el NVIC con el registro EN
     * Cada registro EN puede habilitar hasta 32 interrupciones, por lo tanto el vector 30 se habilita
     * en el registro EN0  NVIC_EN0_R
     * */
    NVIC_EN0_R |= 1UL<< 30UL;

    /*
     * El siguiente paso es configurar la fuente de interrupcion del vector GPIOF
     */

    /*Existen 3 registros para indicar que tipo de interrupcion sera en el GPIOF*/
    /**
     * IS: Interrupt Sense
     * 0 = Edge interrupt ( falling, rising or both)
     * 1 = Level interrupt ( low or high)
     */
    /*Los botones se configuran como interrupcione de borde*/
    GPIO_PORTF_IS_R &= ~(PUSH_BUTTON_1 | PUSH_BUTTON_2);

    /**
     * IBE: Interrupt Both Edges
     *
     * 0 = El borde de interrupcion es controlador por IEV
     * 1 = La interrupcion detecta borde de subida y borde de bajada
     */
    /*Los botones detectaran los 2 bordes*/
    GPIO_PORTF_IBE_R |= (PUSH_BUTTON_1 | PUSH_BUTTON_2);

    /*
     * IEV: interrupt event
     * 0 = borde de bajada o nivel bajo
     * 1 = borde de subida o nivel alto
     */
    /*Este registro no es relevante en esta ocasion*/
    GPIO_PORTF_IEV_R &= ~(PUSH_BUTTON_1 | PUSH_BUTTON_2);

    /*El siguiente paso es habilitar la fuente de interrupcion del GPIOF*/
    /*
     * Se limpia la bandera de interrupcion de los botones
     * en caso que estuviera activos antes de la configuracion
     *
     * Se limpian de forma atomica con el registro ICR
     */
    GPIO_PORTF_ICR_R = (PUSH_BUTTON_1 | PUSH_BUTTON_2);


    /*Para eso existen el Registro IM
     * IM: Interrupt Mask
     * */
    GPIO_PORTF_IM_R |= (PUSH_BUTTON_1 | PUSH_BUTTON_2);

    /*HEmos terminado la configuracion de interrupcion*/
}


/*Se crea el manejador de la interrupcion del GPIO F*/
void MAIN__vGPIOFHandler(void)
{
    /*Se lee el estado de las banderas de interrupcion en el registro MIS*/
    /**
     * MIS: Masked interruput status
     */
    uint32_t u32Reg = GPIO_PORTF_MIS_R;

    /*Ocurrio una interrupcion en el boton 1*/
    if(PUSH_BUTTON_1 & u32Reg)
    {
        /*Limpia la bandera de interrupcion del boton 1*/
        GPIO_PORTF_ICR_R = PUSH_BUTTON_1;

        /*Si el boton esta presionado*/
        if(0UL == (PUSH_BUTTON_1 & GPIO_PORTF_DATA_R))
        {
            /*Prende el LED verde*/
            GPIO_PORTF_DATA_R |= LED_GREEN;
        }
        /*El boton no esta presionado*/
        else
        {
            /*Apaga el LED verde*/
            GPIO_PORTF_DATA_R &= ~LED_GREEN;
        }

    }
    /*Ocurrio una interrupcion en el boton 2*/
    if(PUSH_BUTTON_2 & u32Reg)
    {
        /*Limpia la bandera de interrupcion del boton 2*/
        GPIO_PORTF_ICR_R = PUSH_BUTTON_2;

        /*Si el boton esta presionado*/
        if(0UL == (PUSH_BUTTON_2 & GPIO_PORTF_DATA_R))
        {
            /*Prende el LED azul*/
            GPIO_PORTF_DATA_R |= LED_BLUE;
        }
        /*El boton no esta presionado*/
        else
        {
            /*Apaga el LED azul*/
            GPIO_PORTF_DATA_R &= ~LED_BLUE;
        }

    }


}







