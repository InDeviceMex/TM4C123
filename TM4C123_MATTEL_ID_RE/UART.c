/*
 * UART.c
 *
 *  Created on: 7 mar. 2018
 *      Author: InDev
 */
#include "UART.h"

uint8_t UART0Fifo[256];
uint8_t UART0FifoCount=0;
uint8_t UART0FifoRead=0;
uint8_t UART0TxEmpty=1;
uint8_t UART0StringData=0;

uint8_t UART1Fifo[256];
uint8_t UART1FifoCount=0;
uint8_t UART1FifoRead=0;
uint8_t UART1TxEmpty=1;

uint8_t UART2Fifo[256];
uint8_t UART2FifoCount=0;
uint8_t UART2FifoRead=0;
uint8_t UART2TxEmpty=1;

uint8_t UART3Fifo[256];
uint8_t UART3FifoCount=0;
uint8_t UART3FifoRead=0;
uint8_t UART3TxEmpty=1;

uint8_t UART4Fifo[256];
uint8_t UART4FifoCount=0;
uint8_t UART4FifoRead=0;
uint8_t UART4TxEmpty=1;

uint8_t UART5Fifo[256];
uint8_t UART5FifoCount=0;
uint8_t UART5FifoRead=0;
uint8_t UART5TxEmpty=1;

uint8_t UART6Fifo[256];
uint8_t UART6FifoCount=0;
uint8_t UART6FifoRead=0;
uint8_t UART6TxEmpty=1;

uint8_t UART7Fifo[256];
uint8_t UART7FifoCount=0;
uint8_t UART7FifoRead=0;
uint8_t UART7TxEmpty=1;


void UART0_Init(uint32_t baudRate)
{

    volatile uint32_t delay;
    volatile uint32_t baudRateInt=0;
    volatile uint32_t baudRateIntF=0;
    volatile float baudRateFloat=0;
    volatile uint32_t HSEbit=1;
    baudRateFloat=(float)SYSCTL_ClockGet();
    baudRateFloat/=baudRate;
    baudRateFloat/=8;
    baudRateInt=(uint32_t)baudRateFloat;
    if(baudRateInt>0xFFFF)
    {
        baudRateFloat/=2;
        HSEbit=0;
    }
    baudRateInt=(uint32_t)baudRateFloat;
    baudRateFloat-=baudRateInt;
    baudRateFloat*=64;
    baudRateFloat+=0.5;
    baudRateIntF=(uint32_t)baudRateFloat;


    SYSCTL_SRUART_SRUART0_BB=1;
    delay =SYSCTL_SRUART_SRUART0_BB;
    SYSCTL_SRUART_SRUART0_BB=0;
    SYSCTL_RCGCUART_RCGCUART0_BB=1;
    SYSCTL_RCGCGPIO_RCGCGPIOA_BB=1;
    delay =SYSCTL_RCGCGPIO_RCGCGPIOA_BB;

    GPIOA_AHB->GPIOLOCK=GPIOA_AHB_GPIOLOCK_R_LOCK_KEY;
    GPIOA_AHB->GPIOCR|=(PIN0|PIN1);
    GPIOA_AHB->GPIOAFSEL |= (PIN0|PIN1);
    GPIOA_AHB->GPIOAMSEL &=~ (PIN0|PIN1);
    GPIOA_AHB_GPIOPCTL->PMC0=1;
    GPIOA_AHB_GPIOPCTL->PMC1=1;
    GPIOA_AHB->GPIODEN |= (PIN0|PIN1);

    UART0_UARTCTL_UARTEN_BB=0;
    UART0_UARTCC->CS=0;
    UART0_UARTCTL_HSE_BB=HSEbit;
    UART0_UARTCTL_RXE_BB=1;
    UART0_UARTCTL_TXE_BB=1;
    UART0_UARTIBRD->DIVINT=baudRateInt;
    UART0_UARTFBRD->DIVFRAC=baudRateIntF; //55
    UART0_UARTLCRH->WLEN=3;
    UART0_UARTLCRH_FEN_BB=1;
    UART0_UARTIFLS->RXIFLSEL=4;
    UART0_UARTIFLS->TXIFLSEL=4;

    UART0_UARTIM_RXIM_BB=1;
    UART0_UARTIM_TXIM_BB=1;
    UART0_UARTIM_RTIM_BB=1;
    UART0_UARTIM_OEIM_BB=1;

/*
    UART0_UARTDMACTL_RXDMAE_BB=1;
    UART0_UARTDMACTL_TXDMAE_BB=1;

    DMA_DMAPRIOSET_SET8_BB=1;
    DMA_DMAALTCLR_CLR8_BB=1;
    DMA_DMAUSEBURSTCLR_CLR8_BB=1;
    DMA_DMAREQMASKCLR_CLR8_BB=1;
    DMA_DMACHASGN_CHASGN8_BB=0;
    DMA_DMACHMAP1->CH8SEL=0;

    //DMACHs->DMASRCENDP0=(uint32_t)&poss[32-1];
    //DMACHs->DMADSTENDP0=(uint32_t)&new[32-1];

    DMACHs->DMACHCTL0.bits.ARBSIZE=5;
    DMACHs->DMACHCTL0.bits.SRCSIZE=2;
    DMACHs->DMACHCTL0.bits.SRCINC=2;
    DMACHs->DMACHCTL0.bits.DSTSIZE=2;
    DMACHs->DMACHCTL0.bits.DSTINC=2;
*/
    UART0_UARTCTL_UARTEN_BB=1;

    NVIC_EN0->NVIC_UART0=1;
    NVIC_PRI1->NVIC_UART0=7;

}




int32_t UART0_SendChar( int8_t data)
{
    if(!UART0_UARTFR_TXFF_BB)
    {
        UART0_UARTDR->DATA=data;
        UART0TxEmpty=1;
        return 1;
    }
    return 0;
}

// Print32_t a int8_tacter to UART0.
int32_t fputc(int32_t ch, FILE *f){
  if((ch == 10) || (ch == 13) || (ch == 27)){
      while(!UART0_SendChar(13));
      while(!UART0_SendChar(10));
    return 1;
  }
  while(!UART0_SendChar((int8_t)ch));
  return 1;
}

int32_t UART0_SendString( int8_t* data)
{
    register int32_t countChar=0;//variable usada para saber cuentos caracteres se imprimieron

     //punteros
     // cadena = contiene una direccion
     //*cadena = apunta al valor de la direccion guardada en cadena
     //cadena++ o cadena+=1 o cadena= cadena + 1, apunta a la sig direccion

     //variables
     //conteo= tiene guardado un valor
     //&conteo = se obtiene la direccion donde se tiene guardado conteo
     //UART0_Pos(*columna,*fila); //indica la posicion inicial del cursor
     while(*data)// realiza el ciclo minetras la cadena tenga algun valor
         //el valor 0 o '\0' es fin de cadena
     {
         while(!UART0_SendChar(*(data))); //envia el caracter correspondiente
        // (*columna)++; //suma 1 a la columna indicando que se ha escrito un valor
        // if((*columna&0xF)==0) //si la columna es 0 indica que empieza una nueva fila
         //{
           //  (*columna)=0;
            // (*fila)++; //invierte el valor e fila para que se reinciie
            // UART0_Pos(*columna,*fila); //pone el cursor en 0,x
         //}

         data++; //el puntero apunta al siguiente caracter
         countChar++; //suma 1 al conteo total de caracter enviados a la LCD
     }
     return countChar;
}

int32_t UART0_ReadChar( int8_t* dato)
{
    if(UART0FifoCount != UART0FifoRead)
    {
        *dato=UART0Fifo[UART0FifoRead];
        UART0FifoRead++;
        UART0FifoRead&=0xFF;
        return 1;
    }
    return 0;
}


// input from UART, return data.
int32_t fgetc(FILE *f){
    int8_t ch=0;
    while(!UART0_ReadChar(&ch));
    while(!UART0_SendChar((int8_t)ch));
  return ch;
}
// Function called when file error occurs.
int32_t ferror(FILE *f){
  /* Your implementation of ferror */
  return EOF;
}

void UART0_Pos(int8_t column, int8_t row)
{
    int8_t conversion[20]={0};

    UART0_SendString("\x1B[");
    Int_To_String(column,conversion);
    UART0_SendString(conversion);
    UART0_SendString(";");
    Int_To_String(row,conversion);
    UART0_SendString(conversion);
    UART0_SendString("f");
}

/*
uint8_t UART0_Print(int8_t* string,uint8_t* column, uint8_t* row)
{
    register uint8_t count=0;//variable usada para saber cuantos caracteres se mandaron a la LCD
    UART0_Pos(*column,*row); //indica la posicion inicial del cursor
    while(*string)// realiza el ciclo mientras la string tenga algun valor
           //el valor 0 o '\0' es fin de string
    {
        UART0_SendChar(*(string)); //envia el caracter correspondiente
        string++; //el puntero apunta al siguiente caracter
        count++; //suma 1 al count total de caracter enviados a la LCD
    }
     return count; //regresa el count de caracteres y caracteres especiales
}
*/


//ToDO realizar un mejor printf  con mas alteraciones

uint64_t UART0_Printf(int8_t* string,...)
{
    register uint64_t count=0;//variable usada para saber cuantos caracteres se mandaron a la LCD

    va_list ap; //crea puntero de los argumentos
    double valueARGd; //variable donde guardara el valor del argumento
    int8_t* valueARGc; //variable donde guardara el valor del argumento
    int32_t valueARGi; //variable donde guardara el valor del argumento
    int64_t valueARGii; //variable donde guardara el valor del argumento
    uint64_t valueARGuu; //variable donde guardara el valor del argumento
    void* valueARGcl; //variable donde guardara el valor del argumento
    int8_t conversion[30];
    va_start(ap, string);//maneja la memoria de los argumentos empezando desde el ultimo conocido ingresado
    while(*string)// realiza el ciclo mientras la string tenga algun valor
    {
        switch (*string) //detecta si existe un caracter especial
        {
        case '%':
            string++;
            switch(*string)
            {
                case 'd': //"%d o %i"
                case 'i':
                    valueARGi=(int32_t)va_arg(ap, int32_t);
                    Int_To_String((int32_t)valueARGi,conversion);
                    count+=UART0_SendString(conversion)-1;
                    break;
                case 'u':// "%u"
                    valueARGi=(uint32_t)va_arg(ap, uint32_t);
                    UInt_To_String((uint32_t)valueARGi,conversion);
                    count+=UART0_SendString(conversion)-1;
                    break;
                case 'x': //"%x"
                    valueARGi=(uint32_t)va_arg(ap, uint32_t);
                    Hex_To_String((uint32_t)valueARGi,conversion);
                    count+=UART0_SendString(conversion)-1;
                    break;
                case 'X':// "%X"
                    valueARGi=(uint32_t)va_arg(ap, uint32_t);
                    HEX_To_String((uint32_t)valueARGi,conversion);
                    count+=UART0_SendString(conversion)-1;
                    break;
                case 'o': //"%o"
                    valueARGi=(uint32_t)va_arg(ap, uint32_t);
                    Oct_To_String((uint32_t)valueARGi,conversion);
                    count+=UART0_SendString(conversion)-1;
                    break;
               case 'p': //"%p"
                    valueARGcl=(void*)va_arg(ap, void*);
                        Bin_To_String((int64_t)valueARGcl,conversion);
                        count+=UART0_SendString(conversion)-1;
                        break;
                case 'f': //"%f"
                    valueARGd=(double)va_arg(ap, double);
                    Float_To_String((float)valueARGd,3,conversion);
                    count+=UART0_SendString(conversion)-1;
                    break;




                case 'c': //"%c"
                    valueARGi=(uint8_t)va_arg(ap, int32_t);
                    while(!UART0_SendChar(valueARGi));//manda el caracter a la LCD
                    break;
                case 's':// "%s"
                    valueARGc=(int8_t*)va_arg(ap,int8_t*);  //el siguiente argumento es un puntero
                    count+=UART0_SendString(valueARGc)-1;//imprime la string del puntero
                    break;
                case 'l'://"%lf" "%8.4lf" "%5.3f" "%l"
                    string++; //aumenta en uno la posicion del string
                    if(*string=='f') //si es 'f' el sig caracter significa que vamos a convertir un double
                    {
                        valueARGd=(double)va_arg(ap, double);
                        Float_To_String((double)valueARGd,5,conversion);
                        count+=UART0_SendString(conversion)-1;
                        break; //break de este caso
                    }
                    if(*string=='l' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                    {
                        string++;
                        if(*string=='d' || *string=='i' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                          {
                          valueARGii=(int64_t)va_arg(ap, int64_t);
                          Int_To_String((int64_t)valueARGii,conversion);
                          count+=UART0_SendString(conversion)-1;
                          break; //break de este caso
                          }
                        if(*string=='u' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                          {
                          valueARGii=(uint64_t)va_arg(ap, uint64_t);
                          UInt_To_String((uint64_t)valueARGuu,conversion);
                          count+=UART0_SendString(conversion)-1;
                          break; //break de este caso
                          }
                    }
                    if(*string=='d' || *string=='i' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                    {
                    valueARGi=(int32_t)va_arg(ap, int32_t);
                    Int_To_String((int32_t)valueARGi,conversion);
                    count+=UART0_SendString(conversion)-1;
                    break; //break de este caso
                    }
                    if(*string=='u' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                    {
                    valueARGi=(uint32_t)va_arg(ap, uint32_t);
                    Int_To_String((uint32_t)valueARGi,conversion);
                    count+=UART0_SendString(conversion)-1;
                    break; //break de este caso
                    }
                    else
                    {
                        string--; //si no encuentra la 'f' regresa a la 'l'
                    string--;//si no es ningun caso anterior regresa al '%'
                    while(!UART0_SendChar(*string));
                    break;
                    }
                default:// "%p"
                    string--;//si no es ningun caso anterior regresa al '%'
                    while(!UART0_SendChar(*string));
                    break;

           }
            break;



        default :
            while(!UART0_SendChar(*(string))); //envia el caracter correspondiente
            break;
        }
        string++; //el puntero apunta al siguiente caracter
        count++; //suma 1 al conteo total de caracter enviados a la LCD
    }
    va_end(ap); //reinicia el puntero

     return count; //regresa el conteo de caracteres y caracteres especiales
}






void UART1_Init(uint32_t baudRate)
{

    volatile uint32_t delay;
    volatile uint32_t baudRateInt=0;
    volatile uint32_t baudRateIntF=0;
    volatile float baudRateFloat=0;
    volatile uint32_t HSEbit=1;
    baudRateFloat=(float)SYSCTL_ClockGet();
    baudRateFloat/=baudRate;
    baudRateFloat/=8;
    baudRateInt=(uint32_t)baudRateFloat;
    if(baudRateInt>0xFFFF)
    {
        baudRateFloat/=2;
        HSEbit=0;
    }
    baudRateInt=(uint32_t)baudRateFloat;
    baudRateFloat-=baudRateInt;
    baudRateFloat*=64;
    baudRateFloat+=0.5;
    baudRateIntF=(uint32_t)baudRateFloat;


    SYSCTL_RCGCUART_RCGCUART1_BB=1;
    SYSCTL_RCGCGPIO_RCGCGPIOB_BB=1;
    delay =SYSCTL_RCGCGPIO_RCGCGPIOB_BB;

    GPIOB_AHB->GPIOLOCK=GPIOB_AHB_GPIOLOCK_R_LOCK_KEY;
    GPIOB_AHB->GPIOCR|=(PIN0|PIN1);
    GPIOB_AHB->GPIOAFSEL |= (PIN0|PIN1);
    GPIOB_AHB->GPIOAMSEL &=~ (PIN0|PIN1);
    GPIOB_AHB_GPIOPCTL->PMC0=1;
    GPIOB_AHB_GPIOPCTL->PMC1=1;
    GPIOB_AHB->GPIODEN |= (PIN0|PIN1);

    UART1_UARTCTL_UARTEN_BB=0;
    UART1_UARTCC->CS=0;
    UART1_UARTCTL_HSE_BB=HSEbit;
    UART1_UARTCTL_RXE_BB=1;
    UART1_UARTCTL_TXE_BB=1;
    UART1_UARTIBRD->DIVINT=baudRateInt;
    UART1_UARTFBRD->DIVFRAC=baudRateIntF; //55
    UART1_UARTLCRH->WLEN=3;
    UART1_UARTLCRH_FEN_BB=1;
    UART1_UARTIFLS->RXIFLSEL=4;
    UART1_UARTIFLS->TXIFLSEL=4;


    UART1_UARTIM_RXIM_BB=1;
    UART1_UARTIM_TXIM_BB=1;
    UART1_UARTIM_RTIM_BB=1;
    UART1_UARTIM_OEIM_BB=1;

/*
    UART1_UARTDMACTL_RXDMAE_BB=1;
    UART1_UARTDMACTL_TXDMAE_BB=1;

    DMA_DMAPRIOSET_SET22_BB=1;
    DMA_DMAALTCLR_CLR22_BB=1;
    DMA_DMAUSEBURSTCLR_CLR22_BB=1;
    DMA_DMAREQMASKCLR_CLR22_BB=1;
    DMA_DMACHASGN_CHASGN22_BB=0;
    DMA_DMACHMAP2->CH22SEL=0;

    //DMACHs->DMASRCENDP0=(uint32_t)&poss[32-1];
    //DMACHs->DMADSTENDP0=(uint32_t)&new[32-1];

    DMACHs->DMACHCTL0.bits.ARBSIZE=5;
    DMACHs->DMACHCTL0.bits.SRCSIZE=2;
    DMACHs->DMACHCTL0.bits.SRCINC=2;
    DMACHs->DMACHCTL0.bits.DSTSIZE=2;
    DMACHs->DMACHCTL0.bits.DSTINC=2;
*/
    UART1_UARTCTL_UARTEN_BB=1;

    NVIC_EN0->NVIC_UART1=1;
    NVIC_PRI1->NVIC_UART1=7;

}




int32_t UART1_SendChar( int8_t data)
{
    if(!UART1_UARTFR_TXFF_BB)
    {
        UART1_UARTDR->DATA=data;
        UART1TxEmpty=1;
        return 1;
    }
    return 0;
}

int32_t UART1_SendString( int8_t* data)
{
    register int32_t countChar=0;//variable usada para saber cuentos caracteres se imprimieron

     //punteros
     // cadena = contiene una direccion
     //*cadena = apunta al valor de la direccion guardada en cadena
     //cadena++ o cadena+=1 o cadena= cadena + 1, apunta a la sig direccion

     //variables
     //conteo= tiene guardado un valor
     //&conteo = se obtiene la direccion donde se tiene guardado conteo
     //UART1_Pos(*columna,*fila); //indica la posicion inicial del cursor
     while(*data)// realiza el ciclo minetras la cadena tenga algun valor
         //el valor 0 o '\0' es fin de cadena
     {
         while(!UART1_SendChar(*(data))); //envia el caracter correspondiente
        // (*columna)++; //suma 1 a la columna indicando que se ha escrito un valor
        // if((*columna&0xF)==0) //si la columna es 0 indica que empieza una nueva fila
         //{
           //  (*columna)=0;
            // (*fila)++; //invierte el valor e fila para que se reinciie
            // UART1_Pos(*columna,*fila); //pone el cursor en 0,x
         //}

         data++; //el puntero apunta al siguiente caracter
         countChar++; //suma 1 al conteo total de caracter enviados a la LCD
     }
     return countChar;
}

int32_t UART1_ReadChar( void)
{
    int8_t UART1F;
    if(UART1FifoCount!=UART1FifoRead)
    {
        UART1F=UART1Fifo[UART1FifoRead];
        UART1FifoRead++;
        UART1FifoRead&=0xFF;
        return UART1F;
    }
    return 0;
}


void UART1_Pos(int8_t column, int8_t row)
{
    int8_t conversion[20]={0};

    UART1_SendString("\x1B[");
    Int_To_String(column,conversion);
    UART1_SendString(conversion);
    UART1_SendString(";");
    Int_To_String(row,conversion);
    UART1_SendString(conversion);
    UART1_SendString("f");
}

/*
uint8_t UART1_Print(int8_t* string,uint8_t* column, uint8_t* row)
{
    register uint8_t count=0;//variable usada para saber cuantos caracteres se mandaron a la LCD
    UART1_Pos(*column,*row); //indica la posicion inicial del cursor
    while(*string)// realiza el ciclo mientras la string tenga algun valor
           //el valor 0 o '\0' es fin de string
    {
        UART1_SendChar(*(string)); //envia el caracter correspondiente
        string++; //el puntero apunta al siguiente caracter
        count++; //suma 1 al count total de caracter enviados a la LCD
    }
     return count; //regresa el count de caracteres y caracteres especiales
}
*/


//ToDO realizar un mejor printf  con mas alteraciones

uint64_t UART1_Printf(int8_t* string,...)
{
    register uint64_t count=0;//variable usada para saber cuantos caracteres se mandaron a la LCD

    va_list ap; //crea puntero de los argumentos
    double valueARGd; //variable donde guardara el valor del argumento
    int8_t* valueARGc; //variable donde guardara el valor del argumento
    int32_t valueARGi; //variable donde guardara el valor del argumento
    int64_t valueARGii; //variable donde guardara el valor del argumento
    uint64_t valueARGuu; //variable donde guardara el valor del argumento
    void* valueARGcl; //variable donde guardara el valor del argumento
    int8_t conversion[30];
    va_start(ap, string);//maneja la memoria de los argumentos empezando desde el ultimo conocido ingresado
    while(*string)// realiza el ciclo mientras la string tenga algun valor
    {
        switch (*string) //detecta si existe un caracter especial
        {
        case '%':
            string++;
            switch(*string)
            {
                case 'd': //"%d o %i"
                case 'i':
                    valueARGi=(int32_t)va_arg(ap, int32_t);
                    Int_To_String_Ceros((int32_t)valueARGi,2,conversion);
                    count+=UART1_SendString(conversion)-1;
                    break;
                case 'u':// "%u"
                    valueARGi=(uint32_t)va_arg(ap, uint32_t);
                    UInt_To_String((uint32_t)valueARGi,conversion);
                    count+=UART1_SendString(conversion)-1;
                    break;
                case 'x': //"%x"
                    valueARGi=(uint32_t)va_arg(ap, uint32_t);
                    Hex_To_String((uint32_t)valueARGi,conversion);
                    count+=UART1_SendString(conversion)-1;
                    break;
                case 'X':// "%X"
                    valueARGi=(uint32_t)va_arg(ap, uint32_t);
                    HEX_To_String((uint32_t)valueARGi,conversion);
                    count+=UART1_SendString(conversion)-1;
                    break;
                case 'o': //"%o"
                    valueARGi=(uint32_t)va_arg(ap, uint32_t);
                    Oct_To_String((uint32_t)valueARGi,conversion);
                    count+=UART1_SendString(conversion)-1;
                    break;
               case 'p': //"%p"
                    valueARGcl=(void*)va_arg(ap, void*);
                        Bin_To_String((int64_t)valueARGcl,conversion);
                        count+=UART1_SendString(conversion)-1;
                        break;
                case 'f': //"%f"
                    valueARGd=(double)va_arg(ap, double);
                    Float_To_String((float)valueARGd,3,conversion);
                    count+=UART1_SendString(conversion)-1;
                    break;




                case 'c': //"%c"
                    valueARGi=(uint8_t)va_arg(ap, int32_t);
                    while(!UART1_SendChar(valueARGi));//manda el caracter a la LCD
                    break;
                case 's':// "%s"
                    valueARGc=(int8_t*)va_arg(ap,int8_t*);  //el siguiente argumento es un puntero
                    count+=UART1_SendString(valueARGc)-1;//imprime la string del puntero
                    break;
                case 'l'://"%lf" "%8.4lf" "%5.3f" "%l"
                    string++; //aumenta en uno la posicion del string
                    if(*string=='f') //si es 'f' el sig caracter significa que vamos a convertir un double
                    {
                        valueARGd=(double)va_arg(ap, double);
                        Float_To_String((double)valueARGd,5,conversion);
                        count+=UART1_SendString(conversion)-1;
                        break; //break de este caso
                    }
                    if(*string=='l' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                    {
                        string++;
                        if(*string=='d' || *string=='i' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                          {
                          valueARGii=(int64_t)va_arg(ap, int64_t);
                          Int_To_String((int64_t)valueARGii,conversion);
                          count+=UART1_SendString(conversion)-1;
                          break; //break de este caso
                          }
                        if(*string=='u' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                          {
                          valueARGii=(uint64_t)va_arg(ap, uint64_t);
                          UInt_To_String((uint64_t)valueARGuu,conversion);
                          count+=UART1_SendString(conversion)-1;
                          break; //break de este caso
                          }
                    }
                    if(*string=='d' || *string=='i' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                    {
                    valueARGi=(int32_t)va_arg(ap, int32_t);
                    Int_To_String((int32_t)valueARGi,conversion);
                    count+=UART1_SendString(conversion)-1;
                    break; //break de este caso
                    }
                    if(*string=='u' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                    {
                    valueARGi=(uint32_t)va_arg(ap, uint32_t);
                    Int_To_String((uint32_t)valueARGi,conversion);
                    count+=UART1_SendString(conversion)-1;
                    break; //break de este caso
                    }
                    else
                    {
                        string--; //si no encuentra la 'f' regresa a la 'l'
                    string--;//si no es ningun caso anterior regresa al '%'
                    while(!UART1_SendChar(*string));
                    break;
                    }
                default:// "%p"
                    string--;//si no es ningun caso anterior regresa al '%'
                    while(!UART1_SendChar(*string));
                    break;

           }
            break;



        default :
            while(!UART1_SendChar(*(string))); //envia el caracter correspondiente
            break;
        }
        string++; //el puntero apunta al siguiente caracter
        count++; //suma 1 al conteo total de caracter enviados a la LCD
    }
    va_end(ap); //reinicia el puntero

     return count; //regresa el conteo de caracteres y caracteres especiales
}






void UART2_Init(uint32_t baudRate)
{

    volatile uint32_t delay;
    volatile uint32_t baudRateInt=0;
    volatile uint32_t baudRateIntF=0;
    volatile float baudRateFloat=0;
    volatile uint32_t HSEbit=1;
    baudRateFloat=(float)SYSCTL_ClockGet();
    baudRateFloat/=baudRate;
    baudRateFloat/=8;
    baudRateInt=(uint32_t)baudRateFloat;
    if(baudRateInt>0xFFFF)
    {
        baudRateFloat/=2;
        HSEbit=0;
    }
    baudRateInt=(uint32_t)baudRateFloat;
    baudRateFloat-=baudRateInt;
    baudRateFloat*=64;
    baudRateFloat+=0.5;
    baudRateIntF=(uint32_t)baudRateFloat;


    SYSCTL_RCGCUART_RCGCUART2_BB=1;
    SYSCTL_RCGCGPIO_RCGCGPIOD_BB=1;
    delay =SYSCTL_RCGCGPIO_RCGCGPIOD_BB;

    GPIOD_AHB->GPIOLOCK=GPIOD_AHB_GPIOLOCK_R_LOCK_KEY;
    GPIOD_AHB->GPIOCR|=(PIN6|PIN7);
    GPIOD_AHB->GPIOAFSEL |= (PIN6|PIN7);
    GPIOD_AHB->GPIOAMSEL &=~ (PIN6|PIN7);
    GPIOD_AHB_GPIOPCTL->PMC6=1;
    GPIOD_AHB_GPIOPCTL->PMC7=1;
    GPIOD_AHB->GPIODEN |= (PIN6|PIN7);

    UART2_UARTCTL_UARTEN_BB=0;
    UART2_UARTCC->CS=0;
    UART2_UARTCTL_HSE_BB=HSEbit;
    UART2_UARTCTL_RXE_BB=1;
    UART2_UARTCTL_TXE_BB=1;
    UART2_UARTIBRD->DIVINT=baudRateInt;
    UART2_UARTFBRD->DIVFRAC=baudRateIntF; //55
    UART2_UARTLCRH->WLEN=3;
    UART2_UARTLCRH_FEN_BB=1;
    UART2_UARTIFLS->RXIFLSEL=4;
    UART2_UARTIFLS->TXIFLSEL=4;


     UART2_UARTIM_RXIM_BB=1;
     UART2_UARTIM_TXIM_BB=1;
     UART2_UARTIM_RTIM_BB=1;
     UART2_UARTIM_OEIM_BB=1;

 /*
     UART2_UARTDMACTL_RXDMAE_BB=1;
     UART2_UARTDMACTL_TXDMAE_BB=1;

     DMA_DMAPRIOSET_SET0_BB=1;
     DMA_DMAALTCLR_CLR0_BB=1;
     DMA_DMAUSEBURSTCLR_CLR0_BB=1;
     DMA_DMAREQMASKCLR_CLR0_BB=1;
     DMA_DMACHASGN_CHASGN0_BB=0;
     DMA_DMACHMAP0->CH0SEL=0;

     //DMACHs->DMASRCENDP0=(uint32_t)&poss[32-1];
     //DMACHs->DMADSTENDP0=(uint32_t)&new[32-1];

     DMACHs->DMACHCTL0.bits.ARBSIZE=5;
     DMACHs->DMACHCTL0.bits.SRCSIZE=2;
     DMACHs->DMACHCTL0.bits.SRCINC=2;
     DMACHs->DMACHCTL0.bits.DSTSIZE=2;
     DMACHs->DMACHCTL0.bits.DSTINC=2;
 */
     UART2_UARTCTL_UARTEN_BB=1;

     NVIC_EN1->NVIC_UART2=1;
     NVIC_PRI8->NVIC_UART2=7;

 }




 int32_t UART2_SendChar( int8_t data)
 {
     if(!UART2_UARTFR_TXFF_BB)
     {
         UART2_UARTDR->DATA=data;
         UART2TxEmpty=1;
         return 1;
     }
     return 0;
 }

 int32_t UART2_SendString( int8_t* data)
 {
     register int32_t countChar=0;//variable usada para saber cuentos caracteres se imprimieron

      //punteros
      // cadena = contiene una direccion
      //*cadena = apunta al valor de la direccion guardada en cadena
      //cadena++ o cadena+=1 o cadena= cadena + 1, apunta a la sig direccion

      //variables
      //conteo= tiene guardado un valor
      //&conteo = se obtiene la direccion donde se tiene guardado conteo
      //UART2_Pos(*columna,*fila); //indica la posicion inicial del cursor
      while(*data)// realiza el ciclo minetras la cadena tenga algun valor
          //el valor 0 o '\0' es fin de cadena
      {
          while(!UART2_SendChar(*(data))); //envia el caracter correspondiente
         // (*columna)++; //suma 1 a la columna indicando que se ha escrito un valor
         // if((*columna&0xF)==0) //si la columna es 0 indica que empieza una nueva fila
          //{
            //  (*columna)=0;
             // (*fila)++; //invierte el valor e fila para que se reinciie
             // UART2_Pos(*columna,*fila); //pone el cursor en 0,x
          //}

          data++; //el puntero apunta al siguiente caracter
          countChar++; //suma 1 al conteo total de caracter enviados a la LCD
      }
      return countChar;
 }

 int32_t UART2_ReadChar( void)
 {
     int8_t UART2F;
     if(UART2FifoCount!=UART2FifoRead)
     {
         UART2F=UART2Fifo[UART2FifoRead];
         UART2FifoRead++;
         UART2FifoRead&=0xFF;
         return UART2F;
     }
     return 0;
 }


 void UART2_Pos(int8_t column, int8_t row)
 {
     int8_t conversion[20]={0};

     UART2_SendString("\x1B[");
     Int_To_String(column,conversion);
     UART2_SendString(conversion);
     UART2_SendString(";");
     Int_To_String(row,conversion);
     UART2_SendString(conversion);
     UART2_SendString("f");
 }

 /*
 uint8_t UART2_Print(int8_t* string,uint8_t* column, uint8_t* row)
 {
     register uint8_t count=0;//variable usada para saber cuantos caracteres se mandaron a la LCD
     UART2_Pos(*column,*row); //indica la posicion inicial del cursor
     while(*string)// realiza el ciclo mientras la string tenga algun valor
            //el valor 0 o '\0' es fin de string
     {
         UART2_SendChar(*(string)); //envia el caracter correspondiente
         string++; //el puntero apunta al siguiente caracter
         count++; //suma 1 al count total de caracter enviados a la LCD
     }
      return count; //regresa el count de caracteres y caracteres especiales
 }
 */


 //ToDO realizar un mejor printf  con mas alteraciones

 uint64_t UART2_Printf(int8_t* string,...)
 {
     register uint64_t count=0;//variable usada para saber cuantos caracteres se mandaron a la LCD

     va_list ap; //crea puntero de los argumentos
     double valueARGd; //variable donde guardara el valor del argumento
     int8_t* valueARGc; //variable donde guardara el valor del argumento
     int32_t valueARGi; //variable donde guardara el valor del argumento
     int64_t valueARGii; //variable donde guardara el valor del argumento
     uint64_t valueARGuu; //variable donde guardara el valor del argumento
     void* valueARGcl; //variable donde guardara el valor del argumento
     int8_t conversion[30];
     va_start(ap, string);//maneja la memoria de los argumentos empezando desde el ultimo conocido ingresado
     while(*string)// realiza el ciclo mientras la string tenga algun valor
     {
         switch (*string) //detecta si existe un caracter especial
         {
         case '%':
             string++;
             switch(*string)
             {
                 case 'd': //"%d o %i"
                 case 'i':
                     valueARGi=(int32_t)va_arg(ap, int32_t);
                     Int_To_String((int32_t)valueARGi,conversion);
                     count+=UART2_SendString(conversion)-1;
                     break;
                 case 'u':// "%u"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     UInt_To_String((uint32_t)valueARGi,conversion);
                     count+=UART2_SendString(conversion)-1;
                     break;
                 case 'x': //"%x"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     Hex_To_String((uint32_t)valueARGi,conversion);
                     count+=UART2_SendString(conversion)-1;
                     break;
                 case 'X':// "%X"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     HEX_To_String((uint32_t)valueARGi,conversion);
                     count+=UART2_SendString(conversion)-1;
                     break;
                 case 'o': //"%o"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     Oct_To_String((uint32_t)valueARGi,conversion);
                     count+=UART2_SendString(conversion)-1;
                     break;
                case 'p': //"%p"
                     valueARGcl=(void*)va_arg(ap, void*);
                         Bin_To_String((int64_t)valueARGcl,conversion);
                         count+=UART2_SendString(conversion)-1;
                         break;
                 case 'f': //"%f"
                     valueARGd=(double)va_arg(ap, double);
                     Float_To_String((float)valueARGd,3,conversion);
                     count+=UART2_SendString(conversion)-1;
                     break;




                 case 'c': //"%c"
                     valueARGi=(uint8_t)va_arg(ap, int32_t);
                     while(!UART2_SendChar(valueARGi));//manda el caracter a la LCD
                     break;
                 case 's':// "%s"
                     valueARGc=(int8_t*)va_arg(ap,int8_t*);  //el siguiente argumento es un puntero
                     count+=UART2_SendString(valueARGc)-1;//imprime la string del puntero
                     break;
                 case 'l'://"%lf" "%8.4lf" "%5.3f" "%l"
                     string++; //aumenta en uno la posicion del string
                     if(*string=='f') //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                         valueARGd=(double)va_arg(ap, double);
                         Float_To_String((double)valueARGd,5,conversion);
                         count+=UART2_SendString(conversion)-1;
                         break; //break de este caso
                     }
                     if(*string=='l' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                         string++;
                         if(*string=='d' || *string=='i' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                           {
                           valueARGii=(int64_t)va_arg(ap, int64_t);
                           Int_To_String((int64_t)valueARGii,conversion);
                           count+=UART2_SendString(conversion)-1;
                           break; //break de este caso
                           }
                         if(*string=='u' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                           {
                           valueARGii=(uint64_t)va_arg(ap, uint64_t);
                           UInt_To_String((uint64_t)valueARGuu,conversion);
                           count+=UART2_SendString(conversion)-1;
                           break; //break de este caso
                           }
                     }
                     if(*string=='d' || *string=='i' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                     valueARGi=(int32_t)va_arg(ap, int32_t);
                     Int_To_String((int32_t)valueARGi,conversion);
                     count+=UART2_SendString(conversion)-1;
                     break; //break de este caso
                     }
                     if(*string=='u' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     Int_To_String((uint32_t)valueARGi,conversion);
                     count+=UART2_SendString(conversion)-1;
                     break; //break de este caso
                     }
                     else
                     {
                         string--; //si no encuentra la 'f' regresa a la 'l'
                     string--;//si no es ningun caso anterior regresa al '%'
                     while(!UART2_SendChar(*string));
                     break;
                     }
                 default:// "%p"
                     string--;//si no es ningun caso anterior regresa al '%'
                     while(!UART2_SendChar(*string));
                     break;

            }
             break;



         default :
             while(!UART2_SendChar(*(string))); //envia el caracter correspondiente
             break;
         }
         string++; //el puntero apunta al siguiente caracter
         count++; //suma 1 al conteo total de caracter enviados a la LCD
     }
     va_end(ap); //reinicia el puntero

      return count; //regresa el conteo de caracteres y caracteres especiales
 }


void UART3_Init(uint32_t baudRate)
{

    volatile uint32_t delay;
    volatile uint32_t baudRateInt=0;
    volatile uint32_t baudRateIntF=0;
    volatile float baudRateFloat=0;
    volatile uint32_t HSEbit=1;
    baudRateFloat=(float)SYSCTL_ClockGet();
    baudRateFloat/=baudRate;
    baudRateFloat/=8;
    baudRateInt=(uint32_t)baudRateFloat;
    if(baudRateInt>0xFFFF)
    {
        baudRateFloat/=2;
        HSEbit=0;
    }
    baudRateInt=(uint32_t)baudRateFloat;
    baudRateFloat-=baudRateInt;
    baudRateFloat*=64;
    baudRateFloat+=0.5;
    baudRateIntF=(uint32_t)baudRateFloat;


    SYSCTL_RCGCUART_RCGCUART3_BB=1;
    SYSCTL_RCGCGPIO_RCGCGPIOC_BB=1;
    delay =SYSCTL_RCGCGPIO_RCGCGPIOC_BB;

    GPIOC_AHB->GPIOLOCK=GPIOC_AHB_GPIOLOCK_R_LOCK_KEY;
    GPIOC_AHB->GPIOCR|=(PIN6|PIN7);
    GPIOC_AHB->GPIOAFSEL |= (PIN6|PIN7);
    GPIOC_AHB->GPIOAMSEL &=~ (PIN6|PIN7);
    GPIOC_AHB_GPIOPCTL->PMC6=1;
    GPIOC_AHB_GPIOPCTL->PMC7=1;
    GPIOC_AHB->GPIODEN |= (PIN6|PIN7);

    UART3_UARTCTL_UARTEN_BB=0;
    UART3_UARTCC->CS=0;
    UART3_UARTCTL_HSE_BB=HSEbit;
    UART3_UARTCTL_RXE_BB=1;
    UART3_UARTCTL_TXE_BB=1;
    UART3_UARTIBRD->DIVINT=baudRateInt;
    UART3_UARTFBRD->DIVFRAC=baudRateIntF; //55
    UART3_UARTLCRH->WLEN=3;
    UART3_UARTLCRH_FEN_BB=1;
    UART3_UARTIFLS->RXIFLSEL=4;
    UART3_UARTIFLS->TXIFLSEL=4;


     UART3_UARTIM_RXIM_BB=1;
     UART3_UARTIM_TXIM_BB=1;
     UART3_UARTIM_RTIM_BB=1;
     UART3_UARTIM_OEIM_BB=1;

 /*
     UART3_UARTDMACTL_RXDMAE_BB=1;
     UART3_UARTDMACTL_TXDMAE_BB=1;

     DMA_DMAPRIOSET_SET0_BB=1;
     DMA_DMAALTCLR_CLR0_BB=1;
     DMA_DMAUSEBURSTCLR_CLR0_BB=1;
     DMA_DMAREQMASKCLR_CLR0_BB=1;
     DMA_DMACHASGN_CHASGN0_BB=0;
     DMA_DMACHMAP0->CH0SEL=0;

     //DMACHs->DMASRCENDP0=(uint32_t)&poss[32-1];
     //DMACHs->DMADSTENDP0=(uint32_t)&new[32-1];

     DMACHs->DMACHCTL0.bits.ARBSIZE=5;
     DMACHs->DMACHCTL0.bits.SRCSIZE=2;
     DMACHs->DMACHCTL0.bits.SRCINC=2;
     DMACHs->DMACHCTL0.bits.DSTSIZE=2;
     DMACHs->DMACHCTL0.bits.DSTINC=2;
 */
     UART3_UARTCTL_UARTEN_BB=1;

     NVIC_EN1->NVIC_UART3=1;
     NVIC_PRI14->NVIC_UART3=7;

 }




 int32_t UART3_SendChar( int8_t data)
 {
     if(!UART3_UARTFR_TXFF_BB)
     {
         UART3_UARTDR->DATA=data;
         UART3TxEmpty=1;
         return 1;
     }
     return 0;
 }

 int32_t UART3_SendString( int8_t* data)
 {
     register int32_t countChar=0;//variable usada para saber cuentos caracteres se imprimieron

      //punteros
      // cadena = contiene una direccion
      //*cadena = apunta al valor de la direccion guardada en cadena
      //cadena++ o cadena+=1 o cadena= cadena + 1, apunta a la sig direccion

      //variables
      //conteo= tiene guardado un valor
      //&conteo = se obtiene la direccion donde se tiene guardado conteo
      //UART3_Pos(*columna,*fila); //indica la posicion inicial del cursor
      while(*data)// realiza el ciclo minetras la cadena tenga algun valor
          //el valor 0 o '\0' es fin de cadena
      {
          while(!UART3_SendChar(*(data))); //envia el caracter correspondiente
         // (*columna)++; //suma 1 a la columna indicando que se ha escrito un valor
         // if((*columna&0xF)==0) //si la columna es 0 indica que empieza una nueva fila
          //{
            //  (*columna)=0;
             // (*fila)++; //invierte el valor e fila para que se reinciie
             // UART3_Pos(*columna,*fila); //pone el cursor en 0,x
          //}

          data++; //el puntero apunta al siguiente caracter
          countChar++; //suma 1 al conteo total de caracter enviados a la LCD
      }
      return countChar;
 }

 int32_t UART3_ReadChar( void)
 {
     int8_t UART3F;
     if(UART3FifoCount!=UART3FifoRead)
     {
         UART3F=UART3Fifo[UART3FifoRead];
         UART3FifoRead++;
         UART3FifoRead&=0xFF;
         return UART3F;
     }
     return 0;
 }


 void UART3_Pos(int8_t column, int8_t row)
 {
     int8_t conversion[20]={0};

     UART3_SendString("\x1B[");
     Int_To_String(column,conversion);
     UART3_SendString(conversion);
     UART3_SendString(";");
     Int_To_String(row,conversion);
     UART3_SendString(conversion);
     UART3_SendString("f");
 }

 /*
 uint8_t UART3_Print(int8_t* string,uint8_t* column, uint8_t* row)
 {
     register uint8_t count=0;//variable usada para saber cuantos caracteres se mandaron a la LCD
     UART3_Pos(*column,*row); //indica la posicion inicial del cursor
     while(*string)// realiza el ciclo mientras la string tenga algun valor
            //el valor 0 o '\0' es fin de string
     {
         UART3_SendChar(*(string)); //envia el caracter correspondiente
         string++; //el puntero apunta al siguiente caracter
         count++; //suma 1 al count total de caracter enviados a la LCD
     }
      return count; //regresa el count de caracteres y caracteres especiales
 }
 */


 //ToDO realizar un mejor printf  con mas alteraciones

 uint64_t UART3_Printf(int8_t* string,...)
 {
     register uint64_t count=0;//variable usada para saber cuantos caracteres se mandaron a la LCD

     va_list ap; //crea puntero de los argumentos
     double valueARGd; //variable donde guardara el valor del argumento
     int8_t* valueARGc; //variable donde guardara el valor del argumento
     int32_t valueARGi; //variable donde guardara el valor del argumento
     int64_t valueARGii; //variable donde guardara el valor del argumento
     uint64_t valueARGuu; //variable donde guardara el valor del argumento
     void* valueARGcl; //variable donde guardara el valor del argumento
     int8_t conversion[30];
     va_start(ap, string);//maneja la memoria de los argumentos empezando desde el ultimo conocido ingresado
     while(*string)// realiza el ciclo mientras la string tenga algun valor
     {
         switch (*string) //detecta si existe un caracter especial
         {
         case '%':
             string++;
             switch(*string)
             {
                 case 'd': //"%d o %i"
                 case 'i':
                     valueARGi=(int32_t)va_arg(ap, int32_t);
                     Int_To_String((int32_t)valueARGi,conversion);
                     count+=UART3_SendString(conversion)-1;
                     break;
                 case 'u':// "%u"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     UInt_To_String((uint32_t)valueARGi,conversion);
                     count+=UART3_SendString(conversion)-1;
                     break;
                 case 'x': //"%x"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     Hex_To_String((uint32_t)valueARGi,conversion);
                     count+=UART3_SendString(conversion)-1;
                     break;
                 case 'X':// "%X"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     HEX_To_String((uint32_t)valueARGi,conversion);
                     count+=UART3_SendString(conversion)-1;
                     break;
                 case 'o': //"%o"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     Oct_To_String((uint32_t)valueARGi,conversion);
                     count+=UART3_SendString(conversion)-1;
                     break;
                case 'p': //"%p"
                     valueARGcl=(void*)va_arg(ap, void*);
                         Bin_To_String((int64_t)valueARGcl,conversion);
                         count+=UART3_SendString(conversion)-1;
                         break;
                 case 'f': //"%f"
                     valueARGd=(double)va_arg(ap, double);
                     Float_To_String((float)valueARGd,3,conversion);
                     count+=UART3_SendString(conversion)-1;
                     break;




                 case 'c': //"%c"
                     valueARGi=(uint8_t)va_arg(ap, int32_t);
                     while(!UART3_SendChar(valueARGi));//manda el caracter a la LCD
                     break;
                 case 's':// "%s"
                     valueARGc=(int8_t*)va_arg(ap,int8_t*);  //el siguiente argumento es un puntero
                     count+=UART3_SendString(valueARGc)-1;//imprime la string del puntero
                     break;
                 case 'l'://"%lf" "%8.4lf" "%5.3f" "%l"
                     string++; //aumenta en uno la posicion del string
                     if(*string=='f') //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                         valueARGd=(double)va_arg(ap, double);
                         Float_To_String((double)valueARGd,5,conversion);
                         count+=UART3_SendString(conversion)-1;
                         break; //break de este caso
                     }
                     if(*string=='l' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                         string++;
                         if(*string=='d' || *string=='i' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                           {
                           valueARGii=(int64_t)va_arg(ap, int64_t);
                           Int_To_String((int64_t)valueARGii,conversion);
                           count+=UART3_SendString(conversion)-1;
                           break; //break de este caso
                           }
                         if(*string=='u' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                           {
                           valueARGii=(uint64_t)va_arg(ap, uint64_t);
                           UInt_To_String((uint64_t)valueARGuu,conversion);
                           count+=UART3_SendString(conversion)-1;
                           break; //break de este caso
                           }
                     }
                     if(*string=='d' || *string=='i' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                     valueARGi=(int32_t)va_arg(ap, int32_t);
                     Int_To_String((int32_t)valueARGi,conversion);
                     count+=UART3_SendString(conversion)-1;
                     break; //break de este caso
                     }
                     if(*string=='u' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     Int_To_String((uint32_t)valueARGi,conversion);
                     count+=UART3_SendString(conversion)-1;
                     break; //break de este caso
                     }
                     else
                     {
                         string--; //si no encuentra la 'f' regresa a la 'l'
                     string--;//si no es ningun caso anterior regresa al '%'
                     while(!UART3_SendChar(*string));
                     break;
                     }
                 default:// "%p"
                     string--;//si no es ningun caso anterior regresa al '%'
                     while(!UART3_SendChar(*string));
                     break;

            }
             break;



         default :
             while(!UART3_SendChar(*(string))); //envia el caracter correspondiente
             break;
         }
         string++; //el puntero apunta al siguiente caracter
         count++; //suma 1 al conteo total de caracter enviados a la LCD
     }
     va_end(ap); //reinicia el puntero

      return count; //regresa el conteo de caracteres y caracteres especiales
 }


void UART4_Init(uint32_t baudRate)
{
    volatile uint32_t delay;
    volatile uint32_t baudRateInt=0;
    volatile uint32_t baudRateIntF=0;
    volatile float baudRateFloat=0;
    volatile uint32_t HSEbit=1;
    baudRateFloat=(float)SYSCTL_ClockGet();
    baudRateFloat/=baudRate;
    baudRateFloat/=8;
    baudRateInt=(uint32_t)baudRateFloat;
    if(baudRateInt>0xFFFF)
    {
        baudRateFloat/=2;
        HSEbit=0;
    }
    baudRateInt=(uint32_t)baudRateFloat;
    baudRateFloat-=baudRateInt;
    baudRateFloat*=64;
    baudRateFloat+=0.5;
    baudRateIntF=(uint32_t)baudRateFloat;


    SYSCTL_RCGCUART_RCGCUART4_BB=1;
    SYSCTL_RCGCGPIO_RCGCGPIOC_BB=1;
    delay =SYSCTL_RCGCGPIO_RCGCGPIOC_BB;

    GPIOC_AHB->GPIOLOCK=GPIOC_AHB_GPIOLOCK_R_LOCK_KEY;
    GPIOC_AHB->GPIOCR|=(PIN4|PIN5);
    GPIOC_AHB->GPIOAFSEL |= (PIN4|PIN5);
    GPIOC_AHB->GPIOAMSEL &=~ (PIN4|PIN5);
    GPIOC_AHB_GPIOPCTL->PMC4=1;
    GPIOC_AHB_GPIOPCTL->PMC5=1;
    GPIOC_AHB->GPIODEN |= (PIN4|PIN5);

    UART4_UARTCTL_UARTEN_BB=0;
    UART4_UARTCC->CS=0;
    UART4_UARTCTL_HSE_BB=HSEbit;
    UART4_UARTCTL_RXE_BB=1;
    UART4_UARTCTL_TXE_BB=1;
    UART4_UARTIBRD->DIVINT=baudRateInt;
    UART4_UARTFBRD->DIVFRAC=baudRateIntF; //55
    UART4_UARTLCRH->WLEN=3;
    UART4_UARTLCRH_FEN_BB=1;
    UART4_UARTIFLS->RXIFLSEL=4;
    UART4_UARTIFLS->TXIFLSEL=4;


     UART4_UARTIM_RXIM_BB=1;
     UART4_UARTIM_TXIM_BB=1;
     UART4_UARTIM_RTIM_BB=1;
     UART4_UARTIM_OEIM_BB=1;

 /*
     UART4_UARTDMACTL_RXDMAE_BB=1;
     UART4_UARTDMACTL_TXDMAE_BB=1;

     DMA_DMAPRIOSET_SET0_BB=1;
     DMA_DMAALTCLR_CLR0_BB=1;
     DMA_DMAUSEBURSTCLR_CLR0_BB=1;
     DMA_DMAREQMASKCLR_CLR0_BB=1;
     DMA_DMACHASGN_CHASGN0_BB=0;
     DMA_DMACHMAP0->CH0SEL=0;

     //DMACHs->DMASRCENDP0=(uint32_t)&poss[32-1];
     //DMACHs->DMADSTENDP0=(uint32_t)&new[32-1];

     DMACHs->DMACHCTL0.bits.ARBSIZE=5;
     DMACHs->DMACHCTL0.bits.SRCSIZE=2;
     DMACHs->DMACHCTL0.bits.SRCINC=2;
     DMACHs->DMACHCTL0.bits.DSTSIZE=2;
     DMACHs->DMACHCTL0.bits.DSTINC=2;
 */
     UART4_UARTCTL_UARTEN_BB=1;

     NVIC_EN1->NVIC_UART4=1;
     NVIC_PRI15->NVIC_UART4=7;

 }




 int32_t UART4_SendChar( int8_t data)
 {
     if(!UART4_UARTFR_TXFF_BB)
     {
         UART4_UARTDR->DATA=data;
         UART4TxEmpty=1;
         return 1;
     }
     return 0;
 }

 int32_t UART4_SendString( int8_t* data)
 {
     register int32_t countChar=0;//variable usada para saber cuentos caracteres se imprimieron

      //punteros
      // cadena = contiene una direccion
      //*cadena = apunta al valor de la direccion guardada en cadena
      //cadena++ o cadena+=1 o cadena= cadena + 1, apunta a la sig direccion

      //variables
      //conteo= tiene guardado un valor
      //&conteo = se obtiene la direccion donde se tiene guardado conteo
      //UART4_Pos(*columna,*fila); //indica la posicion inicial del cursor
      while(*data)// realiza el ciclo minetras la cadena tenga algun valor
          //el valor 0 o '\0' es fin de cadena
      {
          while(!UART4_SendChar(*(data))); //envia el caracter correspondiente
         // (*columna)++; //suma 1 a la columna indicando que se ha escrito un valor
         // if((*columna&0xF)==0) //si la columna es 0 indica que empieza una nueva fila
          //{
            //  (*columna)=0;
             // (*fila)++; //invierte el valor e fila para que se reinciie
             // UART4_Pos(*columna,*fila); //pone el cursor en 0,x
          //}

          data++; //el puntero apunta al siguiente caracter
          countChar++; //suma 1 al conteo total de caracter enviados a la LCD
      }
      return countChar;
 }

 int32_t UART4_ReadChar( void)
 {
     int8_t UART4F;
     if(UART4FifoCount!=UART4FifoRead)
     {
         UART4F=UART4Fifo[UART4FifoRead];
         UART4FifoRead++;
         UART4FifoRead&=0xFF;
         return UART4F;
     }
     return 0;
 }


 void UART4_Pos(int8_t column, int8_t row)
 {
     int8_t conversion[20]={0};

     UART4_SendString("\x1B[");
     Int_To_String(column,conversion);
     UART4_SendString(conversion);
     UART4_SendString(";");
     Int_To_String(row,conversion);
     UART4_SendString(conversion);
     UART4_SendString("f");
 }

 /*
 uint8_t UART4_Print(int8_t* string,uint8_t* column, uint8_t* row)
 {
     register uint8_t count=0;//variable usada para saber cuantos caracteres se mandaron a la LCD
     UART4_Pos(*column,*row); //indica la posicion inicial del cursor
     while(*string)// realiza el ciclo mientras la string tenga algun valor
            //el valor 0 o '\0' es fin de string
     {
         UART4_SendChar(*(string)); //envia el caracter correspondiente
         string++; //el puntero apunta al siguiente caracter
         count++; //suma 1 al count total de caracter enviados a la LCD
     }
      return count; //regresa el count de caracteres y caracteres especiales
 }
 */


 //ToDO realizar un mejor printf  con mas alteraciones

 uint64_t UART4_Printf(int8_t* string,...)
 {
     register uint64_t count=0;//variable usada para saber cuantos caracteres se mandaron a la LCD

     va_list ap; //crea puntero de los argumentos
     double valueARGd; //variable donde guardara el valor del argumento
     int8_t* valueARGc; //variable donde guardara el valor del argumento
     int32_t valueARGi; //variable donde guardara el valor del argumento
     int64_t valueARGii; //variable donde guardara el valor del argumento
     uint64_t valueARGuu; //variable donde guardara el valor del argumento
     void* valueARGcl; //variable donde guardara el valor del argumento
     int8_t conversion[30];
     va_start(ap, string);//maneja la memoria de los argumentos empezando desde el ultimo conocido ingresado
     while(*string)// realiza el ciclo mientras la string tenga algun valor
     {
         switch (*string) //detecta si existe un caracter especial
         {
         case '%':
             string++;
             switch(*string)
             {
                 case 'd': //"%d o %i"
                 case 'i':
                     valueARGi=(int32_t)va_arg(ap, int32_t);
                     Int_To_String((int32_t)valueARGi,conversion);
                     count+=UART4_SendString(conversion)-1;
                     break;
                 case 'u':// "%u"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     UInt_To_String((uint32_t)valueARGi,conversion);
                     count+=UART4_SendString(conversion)-1;
                     break;
                 case 'x': //"%x"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     Hex_To_String((uint32_t)valueARGi,conversion);
                     count+=UART4_SendString(conversion)-1;
                     break;
                 case 'X':// "%X"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     HEX_To_String((uint32_t)valueARGi,conversion);
                     count+=UART4_SendString(conversion)-1;
                     break;
                 case 'o': //"%o"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     Oct_To_String((uint32_t)valueARGi,conversion);
                     count+=UART4_SendString(conversion)-1;
                     break;
                case 'p': //"%p"
                     valueARGcl=(void*)va_arg(ap, void*);
                         Bin_To_String((int64_t)valueARGcl,conversion);
                         count+=UART4_SendString(conversion)-1;
                         break;
                 case 'f': //"%f"
                     valueARGd=(double)va_arg(ap, double);
                     Float_To_String((float)valueARGd,3,conversion);
                     count+=UART4_SendString(conversion)-1;
                     break;




                 case 'c': //"%c"
                     valueARGi=(uint8_t)va_arg(ap, int32_t);
                     while(!UART4_SendChar(valueARGi));//manda el caracter a la LCD
                     break;
                 case 's':// "%s"
                     valueARGc=(int8_t*)va_arg(ap,int8_t*);  //el siguiente argumento es un puntero
                     count+=UART4_SendString(valueARGc)-1;//imprime la string del puntero
                     break;
                 case 'l'://"%lf" "%8.4lf" "%5.3f" "%l"
                     string++; //aumenta en uno la posicion del string
                     if(*string=='f') //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                         valueARGd=(double)va_arg(ap, double);
                         Float_To_String((double)valueARGd,5,conversion);
                         count+=UART4_SendString(conversion)-1;
                         break; //break de este caso
                     }
                     if(*string=='l' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                         string++;
                         if(*string=='d' || *string=='i' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                           {
                           valueARGii=(int64_t)va_arg(ap, int64_t);
                           Int_To_String((int64_t)valueARGii,conversion);
                           count+=UART4_SendString(conversion)-1;
                           break; //break de este caso
                           }
                         if(*string=='u' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                           {
                           valueARGii=(uint64_t)va_arg(ap, uint64_t);
                           UInt_To_String((uint64_t)valueARGuu,conversion);
                           count+=UART4_SendString(conversion)-1;
                           break; //break de este caso
                           }
                     }
                     if(*string=='d' || *string=='i' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                     valueARGi=(int32_t)va_arg(ap, int32_t);
                     Int_To_String((int32_t)valueARGi,conversion);
                     count+=UART4_SendString(conversion)-1;
                     break; //break de este caso
                     }
                     if(*string=='u' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     Int_To_String((uint32_t)valueARGi,conversion);
                     count+=UART4_SendString(conversion)-1;
                     break; //break de este caso
                     }
                     else
                     {
                         string--; //si no encuentra la 'f' regresa a la 'l'
                     string--;//si no es ningun caso anterior regresa al '%'
                     while(!UART4_SendChar(*string));
                     break;
                     }
                 default:// "%p"
                     string--;//si no es ningun caso anterior regresa al '%'
                     while(!UART4_SendChar(*string));
                     break;

            }
             break;



         default :
             while(!UART4_SendChar(*(string))); //envia el caracter correspondiente
             break;
         }
         string++; //el puntero apunta al siguiente caracter
         count++; //suma 1 al conteo total de caracter enviados a la LCD
     }
     va_end(ap); //reinicia el puntero

      return count; //regresa el conteo de caracteres y caracteres especiales
 }

void UART5_Init(uint32_t baudRate)
{

    volatile uint32_t delay;
    volatile uint32_t baudRateInt=0;
    volatile uint32_t baudRateIntF=0;
    volatile float baudRateFloat=0;
    volatile uint32_t HSEbit=1;
    baudRateFloat=(float)SYSCTL_ClockGet();
    baudRateFloat/=baudRate;
    baudRateFloat/=8;
    baudRateInt=(uint32_t)baudRateFloat;
    if(baudRateInt>0xFFFF)
    {
        baudRateFloat/=2;
        HSEbit=0;
    }
    baudRateInt=(uint32_t)baudRateFloat;
    baudRateFloat-=baudRateInt;
    baudRateFloat*=64;
    baudRateFloat+=0.5;
    baudRateIntF=(uint32_t)baudRateFloat;


    SYSCTL_RCGCUART_RCGCUART5_BB=1;
    SYSCTL_RCGCGPIO_RCGCGPIOE_BB=1;
    delay =SYSCTL_RCGCGPIO_RCGCGPIOE_BB;

    GPIOE_AHB->GPIOLOCK=GPIOE_AHB_GPIOLOCK_R_LOCK_KEY;
    GPIOE_AHB->GPIOCR|=(PIN4|PIN5);
    GPIOE_AHB->GPIOAFSEL |= (PIN4|PIN5);
    GPIOE_AHB->GPIOAMSEL &=~ (PIN4|PIN5);
    GPIOE_AHB_GPIOPCTL->PMC4=1;
    GPIOE_AHB_GPIOPCTL->PMC5=1;
    GPIOE_AHB->GPIODEN |= (PIN4|PIN5);

    UART5_UARTCTL_UARTEN_BB=0;
    UART5_UARTCC->CS=0;
    UART5_UARTCTL_HSE_BB=HSEbit;
    UART5_UARTCTL_RXE_BB=1;
    UART5_UARTCTL_TXE_BB=1;
    UART5_UARTIBRD->DIVINT=baudRateInt;
    UART5_UARTFBRD->DIVFRAC=baudRateIntF; //55
    UART5_UARTLCRH->WLEN=3;
    UART5_UARTLCRH_FEN_BB=1;
    UART5_UARTIFLS->RXIFLSEL=4;
    UART5_UARTIFLS->TXIFLSEL=4;


     UART5_UARTIM_RXIM_BB=1;
     UART5_UARTIM_TXIM_BB=1;
     UART5_UARTIM_RTIM_BB=1;
     UART5_UARTIM_OEIM_BB=1;

 /*
     UART5_UARTDMACTL_RXDMAE_BB=1;
     UART5_UARTDMACTL_TXDMAE_BB=1;

     DMA_DMAPRIOSET_SET0_BB=1;
     DMA_DMAALTCLR_CLR0_BB=1;
     DMA_DMAUSEBURSTCLR_CLR0_BB=1;
     DMA_DMAREQMASKCLR_CLR0_BB=1;
     DMA_DMACHASGN_CHASGN0_BB=0;
     DMA_DMACHMAP0->CH0SEL=0;

     //DMACHs->DMASRCENDP0=(uint32_t)&poss[32-1];
     //DMACHs->DMADSTENDP0=(uint32_t)&new[32-1];

     DMACHs->DMACHCTL0.bits.ARBSIZE=5;
     DMACHs->DMACHCTL0.bits.SRCSIZE=2;
     DMACHs->DMACHCTL0.bits.SRCINC=2;
     DMACHs->DMACHCTL0.bits.DSTSIZE=2;
     DMACHs->DMACHCTL0.bits.DSTINC=2;
 */
     UART5_UARTCTL_UARTEN_BB=1;

     NVIC_EN1->NVIC_UART5=1;
     NVIC_PRI15->NVIC_UART5=7;

 }




 int32_t UART5_SendChar( int8_t data)
 {
     if(!UART5_UARTFR_TXFF_BB)
     {
         UART5_UARTDR->DATA=data;
         UART5TxEmpty=1;
         return 1;
     }
     return 0;
 }

 int32_t UART5_SendString( int8_t* data)
 {
     register int32_t countChar=0;//variable usada para saber cuentos caracteres se imprimieron

      //punteros
      // cadena = contiene una direccion
      //*cadena = apunta al valor de la direccion guardada en cadena
      //cadena++ o cadena+=1 o cadena= cadena + 1, apunta a la sig direccion

      //variables
      //conteo= tiene guardado un valor
      //&conteo = se obtiene la direccion donde se tiene guardado conteo
      //UART5_Pos(*columna,*fila); //indica la posicion inicial del cursor
      while(*data)// realiza el ciclo minetras la cadena tenga algun valor
          //el valor 0 o '\0' es fin de cadena
      {
          while(!UART5_SendChar(*(data))); //envia el caracter correspondiente
         // (*columna)++; //suma 1 a la columna indicando que se ha escrito un valor
         // if((*columna&0xF)==0) //si la columna es 0 indica que empieza una nueva fila
          //{
            //  (*columna)=0;
             // (*fila)++; //invierte el valor e fila para que se reinciie
             // UART5_Pos(*columna,*fila); //pone el cursor en 0,x
          //}

          data++; //el puntero apunta al siguiente caracter
          countChar++; //suma 1 al conteo total de caracter enviados a la LCD
      }
      return countChar;
 }

 int32_t UART5_ReadChar( void)
 {
     int8_t UART5F;
     if(UART5FifoCount!=UART5FifoRead)
     {
         UART5F=UART5Fifo[UART5FifoRead];
         UART5FifoRead++;
         UART5FifoRead&=0xFF;
         return UART5F;
     }
     return 0;
 }


 void UART5_Pos(int8_t column, int8_t row)
 {
     int8_t conversion[20]={0};

     UART5_SendString("\x1B[");
     Int_To_String(column,conversion);
     UART5_SendString(conversion);
     UART5_SendString(";");
     Int_To_String(row,conversion);
     UART5_SendString(conversion);
     UART5_SendString("f");
 }

 /*
 uint8_t UART5_Print(int8_t* string,uint8_t* column, uint8_t* row)
 {
     register uint8_t count=0;//variable usada para saber cuantos caracteres se mandaron a la LCD
     UART5_Pos(*column,*row); //indica la posicion inicial del cursor
     while(*string)// realiza el ciclo mientras la string tenga algun valor
            //el valor 0 o '\0' es fin de string
     {
         UART5_SendChar(*(string)); //envia el caracter correspondiente
         string++; //el puntero apunta al siguiente caracter
         count++; //suma 1 al count total de caracter enviados a la LCD
     }
      return count; //regresa el count de caracteres y caracteres especiales
 }
 */


 //ToDO realizar un mejor printf  con mas alteraciones

 uint64_t UART5_Printf(int8_t* string,...)
 {
     register uint64_t count=0;//variable usada para saber cuantos caracteres se mandaron a la LCD

     va_list ap; //crea puntero de los argumentos
     double valueARGd; //variable donde guardara el valor del argumento
     int8_t* valueARGc; //variable donde guardara el valor del argumento
     int32_t valueARGi; //variable donde guardara el valor del argumento
     int64_t valueARGii; //variable donde guardara el valor del argumento
     uint64_t valueARGuu; //variable donde guardara el valor del argumento
     void* valueARGcl; //variable donde guardara el valor del argumento
     int8_t conversion[30];
     va_start(ap, string);//maneja la memoria de los argumentos empezando desde el ultimo conocido ingresado
     while(*string)// realiza el ciclo mientras la string tenga algun valor
     {
         switch (*string) //detecta si existe un caracter especial
         {
         case '%':
             string++;
             switch(*string)
             {
                 case 'd': //"%d o %i"
                 case 'i':
                     valueARGi=(int32_t)va_arg(ap, int32_t);
                     Int_To_String((int32_t)valueARGi,conversion);
                     count+=UART5_SendString(conversion)-1;
                     break;
                 case 'u':// "%u"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     UInt_To_String((uint32_t)valueARGi,conversion);
                     count+=UART5_SendString(conversion)-1;
                     break;
                 case 'x': //"%x"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     Hex_To_String((uint32_t)valueARGi,conversion);
                     count+=UART5_SendString(conversion)-1;
                     break;
                 case 'X':// "%X"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     HEX_To_String((uint32_t)valueARGi,conversion);
                     count+=UART5_SendString(conversion)-1;
                     break;
                 case 'o': //"%o"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     Oct_To_String((uint32_t)valueARGi,conversion);
                     count+=UART5_SendString(conversion)-1;
                     break;
                case 'p': //"%p"
                     valueARGcl=(void*)va_arg(ap, void*);
                         Bin_To_String((int64_t)valueARGcl,conversion);
                         count+=UART5_SendString(conversion)-1;
                         break;
                 case 'f': //"%f"
                     valueARGd=(double)va_arg(ap, double);
                     Float_To_String((float)valueARGd,3,conversion);
                     count+=UART5_SendString(conversion)-1;
                     break;




                 case 'c': //"%c"
                     valueARGi=(uint8_t)va_arg(ap, int32_t);
                     while(!UART5_SendChar(valueARGi));//manda el caracter a la LCD
                     break;
                 case 's':// "%s"
                     valueARGc=(int8_t*)va_arg(ap,int8_t*);  //el siguiente argumento es un puntero
                     count+=UART5_SendString(valueARGc)-1;//imprime la string del puntero
                     break;
                 case 'l'://"%lf" "%8.4lf" "%5.3f" "%l"
                     string++; //aumenta en uno la posicion del string
                     if(*string=='f') //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                         valueARGd=(double)va_arg(ap, double);
                         Float_To_String((double)valueARGd,5,conversion);
                         count+=UART5_SendString(conversion)-1;
                         break; //break de este caso
                     }
                     if(*string=='l' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                         string++;
                         if(*string=='d' || *string=='i' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                           {
                           valueARGii=(int64_t)va_arg(ap, int64_t);
                           Int_To_String((int64_t)valueARGii,conversion);
                           count+=UART5_SendString(conversion)-1;
                           break; //break de este caso
                           }
                         if(*string=='u' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                           {
                           valueARGii=(uint64_t)va_arg(ap, uint64_t);
                           UInt_To_String((uint64_t)valueARGuu,conversion);
                           count+=UART5_SendString(conversion)-1;
                           break; //break de este caso
                           }
                     }
                     if(*string=='d' || *string=='i' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                     valueARGi=(int32_t)va_arg(ap, int32_t);
                     Int_To_String((int32_t)valueARGi,conversion);
                     count+=UART5_SendString(conversion)-1;
                     break; //break de este caso
                     }
                     if(*string=='u' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     Int_To_String((uint32_t)valueARGi,conversion);
                     count+=UART5_SendString(conversion)-1;
                     break; //break de este caso
                     }
                     else
                     {
                         string--; //si no encuentra la 'f' regresa a la 'l'
                     string--;//si no es ningun caso anterior regresa al '%'
                     while(!UART5_SendChar(*string));
                     break;
                     }
                 default:// "%p"
                     string--;//si no es ningun caso anterior regresa al '%'
                     while(!UART5_SendChar(*string));
                     break;

            }
             break;



         default :
             while(!UART5_SendChar(*(string))); //envia el caracter correspondiente
             break;
         }
         string++; //el puntero apunta al siguiente caracter
         count++; //suma 1 al conteo total de caracter enviados a la LCD
     }
     va_end(ap); //reinicia el puntero

      return count; //regresa el conteo de caracteres y caracteres especiales
 }


void UART6_Init(uint32_t baudRate)
{

    volatile uint32_t delay;
    volatile uint32_t baudRateInt=0;
    volatile uint32_t baudRateIntF=0;
    volatile float baudRateFloat=0;
    volatile uint32_t HSEbit=1;
    baudRateFloat=(float)SYSCTL_ClockGet();
    baudRateFloat/=baudRate;
    baudRateFloat/=8;
    baudRateInt=(uint32_t)baudRateFloat;
    if(baudRateInt>0xFFFF)
    {
        baudRateFloat/=2;
        HSEbit=0;
    }
    baudRateInt=(uint32_t)baudRateFloat;
    baudRateFloat-=baudRateInt;
    baudRateFloat*=64;
    baudRateFloat+=0.5;
    baudRateIntF=(uint32_t)baudRateFloat;


    SYSCTL_RCGCUART_RCGCUART6_BB=1;
    SYSCTL_RCGCGPIO_RCGCGPIOD_BB=1;
    delay =SYSCTL_RCGCGPIO_RCGCGPIOD_BB;

    GPIOD_AHB->GPIOLOCK=GPIOD_AHB_GPIOLOCK_R_LOCK_KEY;
    GPIOD_AHB->GPIOCR|=(PIN4|PIN5);
    GPIOD_AHB->GPIOAFSEL |= (PIN4|PIN5);
    GPIOD_AHB->GPIOAMSEL &=~ (PIN4|PIN5);
    GPIOD_AHB_GPIOPCTL->PMC4=1;
    GPIOD_AHB_GPIOPCTL->PMC5=1;
    GPIOD_AHB->GPIODEN |= (PIN4|PIN5);


    UART6_UARTCTL_UARTEN_BB=0;
    UART6_UARTCC->CS=0;
    UART6_UARTCTL_HSE_BB=HSEbit;
    UART6_UARTCTL_RXE_BB=1;
    UART6_UARTCTL_TXE_BB=1;
    UART6_UARTIBRD->DIVINT=baudRateInt;
    UART6_UARTFBRD->DIVFRAC=baudRateIntF; //55
    UART6_UARTLCRH->WLEN=3;
    UART6_UARTLCRH_FEN_BB=1;
    UART6_UARTIFLS->RXIFLSEL=4;
    UART6_UARTIFLS->TXIFLSEL=4;


     UART6_UARTIM_RXIM_BB=1;
     UART6_UARTIM_TXIM_BB=1;
     UART6_UARTIM_RTIM_BB=1;
     UART6_UARTIM_OEIM_BB=1;

 /*
     UART6_UARTDMACTL_RXDMAE_BB=1;
     UART6_UARTDMACTL_TXDMAE_BB=1;

     DMA_DMAPRIOSET_SET0_BB=1;
     DMA_DMAALTCLR_CLR0_BB=1;
     DMA_DMAUSEBURSTCLR_CLR0_BB=1;
     DMA_DMAREQMASKCLR_CLR0_BB=1;
     DMA_DMACHASGN_CHASGN0_BB=0;
     DMA_DMACHMAP0->CH0SEL=0;

     //DMACHs->DMASRCENDP0=(uint32_t)&poss[32-1];
     //DMACHs->DMADSTENDP0=(uint32_t)&new[32-1];

     DMACHs->DMACHCTL0.bits.ARBSIZE=5;
     DMACHs->DMACHCTL0.bits.SRCSIZE=2;
     DMACHs->DMACHCTL0.bits.SRCINC=2;
     DMACHs->DMACHCTL0.bits.DSTSIZE=2;
     DMACHs->DMACHCTL0.bits.DSTINC=2;
 */
     UART6_UARTCTL_UARTEN_BB=1;

     NVIC_EN1->NVIC_UART6=1;
     NVIC_PRI15->NVIC_UART6=7;

 }




 int32_t UART6_SendChar( int8_t data)
 {
     if(!UART6_UARTFR_TXFF_BB)
     {
         UART6_UARTDR->DATA=data;
         UART6TxEmpty=1;
         return 1;
     }
     return 0;
 }

 int32_t UART6_SendString( int8_t* data)
 {
     register int32_t countChar=0;//variable usada para saber cuentos caracteres se imprimieron

      //punteros
      // cadena = contiene una direccion
      //*cadena = apunta al valor de la direccion guardada en cadena
      //cadena++ o cadena+=1 o cadena= cadena + 1, apunta a la sig direccion

      //variables
      //conteo= tiene guardado un valor
      //&conteo = se obtiene la direccion donde se tiene guardado conteo
      //UART6_Pos(*columna,*fila); //indica la posicion inicial del cursor
      while(*data)// realiza el ciclo minetras la cadena tenga algun valor
          //el valor 0 o '\0' es fin de cadena
      {
          while(!UART6_SendChar(*(data))); //envia el caracter correspondiente
         // (*columna)++; //suma 1 a la columna indicando que se ha escrito un valor
         // if((*columna&0xF)==0) //si la columna es 0 indica que empieza una nueva fila
          //{
            //  (*columna)=0;
             // (*fila)++; //invierte el valor e fila para que se reinciie
             // UART6_Pos(*columna,*fila); //pone el cursor en 0,x
          //}

          data++; //el puntero apunta al siguiente caracter
          countChar++; //suma 1 al conteo total de caracter enviados a la LCD
      }
      return countChar;
 }

 int32_t UART6_ReadChar( void)
 {
     int8_t UART6F;
     if(UART6FifoCount!=UART6FifoRead)
     {
         UART6F=UART6Fifo[UART6FifoRead];
         UART6FifoRead++;
         UART6FifoRead&=0xFF;
         return UART6F;
     }
     return 0;
 }


 void UART6_Pos(int8_t column, int8_t row)
 {
     int8_t conversion[20]={0};

     UART6_SendString("\x1B[");
     Int_To_String(column,conversion);
     UART6_SendString(conversion);
     UART6_SendString(";");
     Int_To_String(row,conversion);
     UART6_SendString(conversion);
     UART6_SendString("f");
 }

 /*
 uint8_t UART6_Print(int8_t* string,uint8_t* column, uint8_t* row)
 {
     register uint8_t count=0;//variable usada para saber cuantos caracteres se mandaron a la LCD
     UART6_Pos(*column,*row); //indica la posicion inicial del cursor
     while(*string)// realiza el ciclo mientras la string tenga algun valor
            //el valor 0 o '\0' es fin de string
     {
         UART6_SendChar(*(string)); //envia el caracter correspondiente
         string++; //el puntero apunta al siguiente caracter
         count++; //suma 1 al count total de caracter enviados a la LCD
     }
      return count; //regresa el count de caracteres y caracteres especiales
 }
 */


 //ToDO realizar un mejor printf  con mas alteraciones

 uint64_t UART6_Printf(int8_t* string,...)
 {
     register uint64_t count=0;//variable usada para saber cuantos caracteres se mandaron a la LCD

     va_list ap; //crea puntero de los argumentos
     double valueARGd; //variable donde guardara el valor del argumento
     int8_t* valueARGc; //variable donde guardara el valor del argumento
     int32_t valueARGi; //variable donde guardara el valor del argumento
     int64_t valueARGii; //variable donde guardara el valor del argumento
     uint64_t valueARGuu; //variable donde guardara el valor del argumento
     void* valueARGcl; //variable donde guardara el valor del argumento
     int8_t conversion[30];
     va_start(ap, string);//maneja la memoria de los argumentos empezando desde el ultimo conocido ingresado
     while(*string)// realiza el ciclo mientras la string tenga algun valor
     {
         switch (*string) //detecta si existe un caracter especial
         {
         case '%':
             string++;
             switch(*string)
             {
                 case 'd': //"%d o %i"
                 case 'i':
                     valueARGi=(int32_t)va_arg(ap, int32_t);
                     Int_To_String((int32_t)valueARGi,conversion);
                     count+=UART6_SendString(conversion)-1;
                     break;
                 case 'u':// "%u"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     UInt_To_String((uint32_t)valueARGi,conversion);
                     count+=UART6_SendString(conversion)-1;
                     break;
                 case 'x': //"%x"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     Hex_To_String((uint32_t)valueARGi,conversion);
                     count+=UART6_SendString(conversion)-1;
                     break;
                 case 'X':// "%X"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     HEX_To_String((uint32_t)valueARGi,conversion);
                     count+=UART6_SendString(conversion)-1;
                     break;
                 case 'o': //"%o"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     Oct_To_String((uint32_t)valueARGi,conversion);
                     count+=UART6_SendString(conversion)-1;
                     break;
                case 'p': //"%p"
                     valueARGcl=(void*)va_arg(ap, void*);
                         Bin_To_String((int64_t)valueARGcl,conversion);
                         count+=UART6_SendString(conversion)-1;
                         break;
                 case 'f': //"%f"
                     valueARGd=(double)va_arg(ap, double);
                     Float_To_String((float)valueARGd,3,conversion);
                     count+=UART6_SendString(conversion)-1;
                     break;




                 case 'c': //"%c"
                     valueARGi=(uint8_t)va_arg(ap, int32_t);
                     while(!UART6_SendChar(valueARGi));//manda el caracter a la LCD
                     break;
                 case 's':// "%s"
                     valueARGc=(int8_t*)va_arg(ap,int8_t*);  //el siguiente argumento es un puntero
                     count+=UART6_SendString(valueARGc)-1;//imprime la string del puntero
                     break;
                 case 'l'://"%lf" "%8.4lf" "%5.3f" "%l"
                     string++; //aumenta en uno la posicion del string
                     if(*string=='f') //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                         valueARGd=(double)va_arg(ap, double);
                         Float_To_String((double)valueARGd,5,conversion);
                         count+=UART6_SendString(conversion)-1;
                         break; //break de este caso
                     }
                     if(*string=='l' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                         string++;
                         if(*string=='d' || *string=='i' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                           {
                           valueARGii=(int64_t)va_arg(ap, int64_t);
                           Int_To_String((int64_t)valueARGii,conversion);
                           count+=UART6_SendString(conversion)-1;
                           break; //break de este caso
                           }
                         if(*string=='u' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                           {
                           valueARGii=(uint64_t)va_arg(ap, uint64_t);
                           UInt_To_String((uint64_t)valueARGuu,conversion);
                           count+=UART6_SendString(conversion)-1;
                           break; //break de este caso
                           }
                     }
                     if(*string=='d' || *string=='i' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                     valueARGi=(int32_t)va_arg(ap, int32_t);
                     Int_To_String((int32_t)valueARGi,conversion);
                     count+=UART6_SendString(conversion)-1;
                     break; //break de este caso
                     }
                     if(*string=='u' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     Int_To_String((uint32_t)valueARGi,conversion);
                     count+=UART6_SendString(conversion)-1;
                     break; //break de este caso
                     }
                     else
                     {
                         string--; //si no encuentra la 'f' regresa a la 'l'
                     string--;//si no es ningun caso anterior regresa al '%'
                     while(!UART6_SendChar(*string));
                     break;
                     }
                 default:// "%p"
                     string--;//si no es ningun caso anterior regresa al '%'
                     while(!UART6_SendChar(*string));
                     break;

            }
             break;



         default :
             while(!UART6_SendChar(*(string))); //envia el caracter correspondiente
             break;
         }
         string++; //el puntero apunta al siguiente caracter
         count++; //suma 1 al conteo total de caracter enviados a la LCD
     }
     va_end(ap); //reinicia el puntero

      return count; //regresa el conteo de caracteres y caracteres especiales
 }

void UART7_Init(uint32_t baudRate)
{

    volatile uint32_t delay;
    volatile uint32_t baudRateInt=0;
    volatile uint32_t baudRateIntF=0;
    volatile float baudRateFloat=0;
    volatile uint32_t HSEbit=1;
    baudRateFloat=(float)SYSCTL_ClockGet();
    baudRateFloat/=baudRate;
    baudRateFloat/=8;
    baudRateInt=(uint32_t)baudRateFloat;
    if(baudRateInt>0xFFFF)
    {
        baudRateFloat/=2;
        HSEbit=0;
    }
    baudRateInt=(uint32_t)baudRateFloat;
    baudRateFloat-=baudRateInt;
    baudRateFloat*=64;
    baudRateFloat+=0.5;
    baudRateIntF=(uint32_t)baudRateFloat;


    SYSCTL_RCGCUART_RCGCUART7_BB=1;
    SYSCTL_RCGCGPIO_RCGCGPIOE_BB=1;
    delay =SYSCTL_RCGCGPIO_RCGCGPIOE_BB;

    GPIOE_AHB->GPIOLOCK=GPIOE_AHB_GPIOLOCK_R_LOCK_KEY;
    GPIOE_AHB->GPIOCR|=(PIN0|PIN1);
    GPIOE_AHB->GPIOAFSEL |= (PIN0|PIN1);
    GPIOE_AHB->GPIOAMSEL &=~ (PIN0|PIN1);
    GPIOE_AHB_GPIOPCTL->PMC0=1;
    GPIOE_AHB_GPIOPCTL->PMC1=1;
    GPIOE_AHB->GPIODEN |= (PIN0|PIN1);

    UART7_UARTCTL_UARTEN_BB=0;
    UART7_UARTCC->CS=0;
    UART7_UARTCTL_HSE_BB=HSEbit;
    UART7_UARTCTL_RXE_BB=1;
    UART7_UARTCTL_TXE_BB=1;
    UART7_UARTIBRD->DIVINT=baudRateInt;
    UART7_UARTFBRD->DIVFRAC=baudRateIntF; //55
    UART7_UARTLCRH->WLEN=3;
    UART7_UARTLCRH_FEN_BB=1;
    UART7_UARTIFLS->RXIFLSEL=4;
    UART7_UARTIFLS->TXIFLSEL=4;


     UART7_UARTIM_RXIM_BB=1;
     UART7_UARTIM_TXIM_BB=1;
     UART7_UARTIM_RTIM_BB=1;
     UART7_UARTIM_OEIM_BB=1;

 /*
     UART7_UARTDMACTL_RXDMAE_BB=1;
     UART7_UARTDMACTL_TXDMAE_BB=1;

     DMA_DMAPRIOSET_SET0_BB=1;
     DMA_DMAALTCLR_CLR0_BB=1;
     DMA_DMAUSEBURSTCLR_CLR0_BB=1;
     DMA_DMAREQMASKCLR_CLR0_BB=1;
     DMA_DMACHASGN_CHASGN0_BB=0;
     DMA_DMACHMAP0->CH0SEL=0;

     //DMACHs->DMASRCENDP0=(uint32_t)&poss[32-1];
     //DMACHs->DMADSTENDP0=(uint32_t)&new[32-1];

     DMACHs->DMACHCTL0.bits.ARBSIZE=5;
     DMACHs->DMACHCTL0.bits.SRCSIZE=2;
     DMACHs->DMACHCTL0.bits.SRCINC=2;
     DMACHs->DMACHCTL0.bits.DSTSIZE=2;
     DMACHs->DMACHCTL0.bits.DSTINC=2;
 */
     UART7_UARTCTL_UARTEN_BB=1;

     NVIC_EN1->NVIC_UART7=1;
     NVIC_PRI15->NVIC_UART7=7;

 }




 int32_t UART7_SendChar( int8_t data)
 {
     if(!UART7_UARTFR_TXFF_BB)
     {
         UART7_UARTDR->DATA=data;
         UART7TxEmpty=1;
         return 1;
     }
     return 0;
 }

 int32_t UART7_SendString( int8_t* data)
 {
     register int32_t countChar=0;//variable usada para saber cuentos caracteres se imprimieron

      //punteros
      // cadena = contiene una direccion
      //*cadena = apunta al valor de la direccion guardada en cadena
      //cadena++ o cadena+=1 o cadena= cadena + 1, apunta a la sig direccion

      //variables
      //conteo= tiene guardado un valor
      //&conteo = se obtiene la direccion donde se tiene guardado conteo
      //UART7_Pos(*columna,*fila); //indica la posicion inicial del cursor
      while(*data)// realiza el ciclo minetras la cadena tenga algun valor
          //el valor 0 o '\0' es fin de cadena
      {
          while(!UART7_SendChar(*(data))); //envia el caracter correspondiente
         // (*columna)++; //suma 1 a la columna indicando que se ha escrito un valor
         // if((*columna&0xF)==0) //si la columna es 0 indica que empieza una nueva fila
          //{
            //  (*columna)=0;
             // (*fila)++; //invierte el valor e fila para que se reinciie
             // UART7_Pos(*columna,*fila); //pone el cursor en 0,x
          //}

          data++; //el puntero apunta al siguiente caracter
          countChar++; //suma 1 al conteo total de caracter enviados a la LCD
      }
      return countChar;
 }

 int32_t UART7_ReadChar( void)
 {
     int8_t UART7F;
     if(UART7FifoCount!=UART7FifoRead)
     {
         UART7F=UART7Fifo[UART7FifoRead];
         UART7FifoRead++;
         UART7FifoRead&=0xFF;
         return UART7F;
     }
     return 0;
 }


 void UART7_Pos(int8_t column, int8_t row)
 {
     int8_t conversion[20]={0};

     UART7_SendString("\x1B[");
     Int_To_String(column,conversion);
     UART7_SendString(conversion);
     UART7_SendString(";");
     Int_To_String(row,conversion);
     UART7_SendString(conversion);
     UART7_SendString("f");
 }

 /*
 uint8_t UART7_Print(int8_t* string,uint8_t* column, uint8_t* row)
 {
     register uint8_t count=0;//variable usada para saber cuantos caracteres se mandaron a la LCD
     UART7_Pos(*column,*row); //indica la posicion inicial del cursor
     while(*string)// realiza el ciclo mientras la string tenga algun valor
            //el valor 0 o '\0' es fin de string
     {
         UART7_SendChar(*(string)); //envia el caracter correspondiente
         string++; //el puntero apunta al siguiente caracter
         count++; //suma 1 al count total de caracter enviados a la LCD
     }
      return count; //regresa el count de caracteres y caracteres especiales
 }
 */


 //ToDO realizar un mejor printf  con mas alteraciones

 uint64_t UART7_Printf(int8_t* string,...)
 {
     register uint64_t count=0;//variable usada para saber cuantos caracteres se mandaron a la LCD

     va_list ap; //crea puntero de los argumentos
     double valueARGd; //variable donde guardara el valor del argumento
     int8_t* valueARGc; //variable donde guardara el valor del argumento
     int32_t valueARGi; //variable donde guardara el valor del argumento
     int64_t valueARGii; //variable donde guardara el valor del argumento
     uint64_t valueARGuu; //variable donde guardara el valor del argumento
     void* valueARGcl; //variable donde guardara el valor del argumento
     int8_t conversion[30];
     va_start(ap, string);//maneja la memoria de los argumentos empezando desde el ultimo conocido ingresado
     while(*string)// realiza el ciclo mientras la string tenga algun valor
     {
         switch (*string) //detecta si existe un caracter especial
         {
         case '%':
             string++;
             switch(*string)
             {
                 case 'd': //"%d o %i"
                 case 'i':
                     valueARGi=(int32_t)va_arg(ap, int32_t);
                     Int_To_String((int32_t)valueARGi,conversion);
                     count+=UART7_SendString(conversion)-1;
                     break;
                 case 'u':// "%u"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     UInt_To_String((uint32_t)valueARGi,conversion);
                     count+=UART7_SendString(conversion)-1;
                     break;
                 case 'x': //"%x"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     Hex_To_String((uint32_t)valueARGi,conversion);
                     count+=UART7_SendString(conversion)-1;
                     break;
                 case 'X':// "%X"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     HEX_To_String((uint32_t)valueARGi,conversion);
                     count+=UART7_SendString(conversion)-1;
                     break;
                 case 'o': //"%o"
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     Oct_To_String((uint32_t)valueARGi,conversion);
                     count+=UART7_SendString(conversion)-1;
                     break;
                case 'p': //"%p"
                     valueARGcl=(void*)va_arg(ap, void*);
                         Bin_To_String((int64_t)valueARGcl,conversion);
                         count+=UART7_SendString(conversion)-1;
                         break;
                 case 'f': //"%f"
                     valueARGd=(double)va_arg(ap, double);
                     Float_To_String((float)valueARGd,3,conversion);
                     count+=UART7_SendString(conversion)-1;
                     break;




                 case 'c': //"%c"
                     valueARGi=(uint8_t)va_arg(ap, int32_t);
                     while(!UART7_SendChar(valueARGi));//manda el caracter a la LCD
                     break;
                 case 's':// "%s"
                     valueARGc=(int8_t*)va_arg(ap,int8_t*);  //el siguiente argumento es un puntero
                     count+=UART7_SendString(valueARGc)-1;//imprime la string del puntero
                     break;
                 case 'l'://"%lf" "%8.4lf" "%5.3f" "%l"
                     string++; //aumenta en uno la posicion del string
                     if(*string=='f') //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                         valueARGd=(double)va_arg(ap, double);
                         Float_To_String((double)valueARGd,5,conversion);
                         count+=UART7_SendString(conversion)-1;
                         break; //break de este caso
                     }
                     if(*string=='l' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                         string++;
                         if(*string=='d' || *string=='i' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                           {
                           valueARGii=(int64_t)va_arg(ap, int64_t);
                           Int_To_String((int64_t)valueARGii,conversion);
                           count+=UART7_SendString(conversion)-1;
                           break; //break de este caso
                           }
                         if(*string=='u' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                           {
                           valueARGii=(uint64_t)va_arg(ap, uint64_t);
                           UInt_To_String((uint64_t)valueARGuu,conversion);
                           count+=UART7_SendString(conversion)-1;
                           break; //break de este caso
                           }
                     }
                     if(*string=='d' || *string=='i' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                     valueARGi=(int32_t)va_arg(ap, int32_t);
                     Int_To_String((int32_t)valueARGi,conversion);
                     count+=UART7_SendString(conversion)-1;
                     break; //break de este caso
                     }
                     if(*string=='u' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                     {
                     valueARGi=(uint32_t)va_arg(ap, uint32_t);
                     Int_To_String((uint32_t)valueARGi,conversion);
                     count+=UART7_SendString(conversion)-1;
                     break; //break de este caso
                     }
                     else
                     {
                         string--; //si no encuentra la 'f' regresa a la 'l'
                     string--;//si no es ningun caso anterior regresa al '%'
                     while(!UART7_SendChar(*string));
                     break;
                     }
                 default:// "%p"
                     string--;//si no es ningun caso anterior regresa al '%'
                     while(!UART7_SendChar(*string));
                     break;

            }
             break;



         default :
             while(!UART7_SendChar(*(string))); //envia el caracter correspondiente
             break;
         }
         string++; //el puntero apunta al siguiente caracter
         count++; //suma 1 al conteo total de caracter enviados a la LCD
     }
     va_end(ap); //reinicia el puntero

      return count; //regresa el conteo de caracteres y caracteres especiales
 }

