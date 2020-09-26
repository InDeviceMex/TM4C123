    /*
 * SPI.c
 *
 *  Created on: 14 mar. 2018
 *      Author: InDev
 */


#include "SSI.h"


int16_t SSI0Fifo[256];
int8_t SSI0FifoCount=0;
int8_t SSI0FifoRead=0;
int32_t SSI0FifoLost=0;
int32_t SSI0Transmit=1;


int16_t SSI1Fifo[256];
int8_t SSI1FifoCount=0;
int8_t SSI1FifoRead=0;
int32_t SSI1FifoLost=0;
int32_t SSI1Transmit=1;


int16_t SSI2Fifo[256];
int8_t SSI2FifoCount=0;
int8_t SSI2FifoRead=0;
int32_t SSI2FifoLost=0;
int32_t SSI2Transmit=1;


int16_t SSI3Fifo[256];
int8_t SSI3FifoCount=0;
int8_t SSI3FifoRead=0;
int32_t SSI3FifoLost=0;
int32_t SSI3Transmit=1;


//ToDo SSI0
int32_t SSI0_Init(uint32_t frec)
{

    volatile uint32_t cpsdvsr=2;
    volatile uint32_t scr=0;
    volatile uint32_t delay;
    volatile uint32_t frecActual=0;
    volatile uint32_t frecCPU=0;
    frecCPU=SYSCTL_ClockGet();
    frecActual=frecCPU;
    frecActual/=cpsdvsr;
    frecActual/=(1+scr);

    while(frecActual!=frec)
    {
        if(scr<255)
            scr++;
        else
        {
            scr=0;
            cpsdvsr*=2;
        }
        frecActual=frecCPU;
        frecActual/=cpsdvsr;
        frecActual/=(1+scr);
    }



    SYSCTL_RCGCSSI_RCGCSSI0_BB=1;
    SYSCTL_RCGCGPIO_RCGCGPIOA_BB=1;
    delay =SYSCTL_RCGCGPIO_RCGCGPIOA_BB;

    GPIOA_AHB->GPIOLOCK=GPIOA_AHB_GPIOLOCK_LOCK_KEY;
    GPIOA_AHB->GPIOCR|=(PIN2|PIN3|PIN4|PIN5);
    GPIOA_AHB->GPIOAFSEL |= (PIN2|PIN4|PIN5);
    GPIOA_AHB->GPIOAFSEL &=~ (PIN3);

    GPIOA_AHB->GPIOAMSEL &=~ (PIN2|PIN3|PIN4|PIN5);
    GPIOA_AHB_GPIOPCTL->PMC2=2;
    GPIOA_AHB_GPIOPCTL->PMC3=0;
    GPIOA_AHB_GPIOPCTL->PMC4=2;
    GPIOA_AHB_GPIOPCTL->PMC5=2;
    GPIOA_AHB->GPIODEN |= (PIN2|PIN3|PIN4|PIN5);
    GPIOA_AHB->GPIODIR|=(PIN3);
    GPIOA_AHB->GPIOODR&=~(PIN3);
    GPIOA_AHB->GPIOPUR|=(PIN2|PIN4|PIN5);

    GPIOA_AHB_GPIODAT_DAT3_BB =1;

    SSI0_SSICR1_SSE_BB=0;
    SSI0_SSICR1_MS_BB=0;
    SSI0_SSICC->CS=0;
    SSI0_SSICPSR->CPSDVSR=cpsdvsr;
    SSI0_SSICR0->SCR=scr;
    SSI0_SSICR0_SPH_BB=1;
    SSI0_SSICR0_SPO_BB=0;
    SSI0_SSICR0->FRF=0;
    SSI0_SSICR0->DSS=0xF;


    SSI0_SSIIM_RORIM_BB=1;
    SSI0_SSIIM_RTIM_BB=1;
    SSI0_SSIIM_RXIM_BB=1;
    //SSI0_SSIIM_TXIM_BB=1;

    SSI0_SSICR1_SSE_BB=1;

    NVIC_EN0->NVIC_SSI0=1;
    NVIC_PRI1->NVIC_SSI0=7;

    return 1;
}



int32_t SSI0_ReadFifo(int16_t* data)
{
    if(SSI0FifoCount!=SSI0FifoRead)
    {
        *data=SSI0Fifo[SSI0FifoRead];
        SSI0FifoRead++;
        SSI0FifoRead&=0xFF;
        return 1;
    }
    return 0;
}

int32_t SSI0_Send( int16_t data)
{

    if((SSI0_SSISR_TNF_BB))// && SSI0Transmit)
    {
        //SSI0Transmit=0;
        GPIOA_AHB_GPIODAT_DAT3_BB =0;
        SSI0_SSIDR->DATA=data;
        while(SSI0_SSISR_BSY_BB);
         GPIOA_AHB_GPIODAT_DAT3_BB =1;
        return 1;
    }

    return 0;
}


//ToDo SSI1
int32_t SSI1_Init(uint32_t frec)
{

    volatile uint32_t cpsdvsr=2;
    volatile uint32_t scr=0;
    volatile uint32_t delay;
    volatile uint32_t frecActual=0;
    volatile uint32_t frecCPU=0;
    frecCPU=SYSCTL_ClockGet();
    frecActual=frecCPU;
    frecActual/=cpsdvsr;
    frecActual/=(1+scr);

    while(frecActual!=frec)
    {
        if(scr<255)
            scr++;
        else
        {
            scr=0;
            cpsdvsr*=2;
        }
        frecActual=frecCPU;
        frecActual/=cpsdvsr;
        frecActual/=(1+scr);
    }



    SYSCTL_RCGCSSI_RCGCSSI1_BB=1;
    SYSCTL_RCGCGPIO_RCGCGPIOF_BB=1;
    delay =SYSCTL_RCGCGPIO_RCGCGPIOF_BB;

    GPIOF_AHB->GPIOLOCK=GPIOF_AHB_GPIOLOCK_LOCK_KEY;
    GPIOF_AHB->GPIOCR|=(PIN0|PIN1|PIN2|PIN3);
    GPIOF_AHB->GPIOAFSEL |= (PIN0|PIN1|PIN2);
    GPIOF_AHB->GPIOAFSEL &=~ (PIN3);

    GPIOF_AHB->GPIOAMSEL &=~ (PIN0|PIN1|PIN2|PIN3);
    GPIOF_AHB_GPIOPCTL->PMC0=2;
    GPIOF_AHB_GPIOPCTL->PMC1=2;
    GPIOF_AHB_GPIOPCTL->PMC2=2;
    GPIOF_AHB_GPIOPCTL->PMC3=0;
    GPIOF_AHB->GPIODEN |= (PIN0|PIN1|PIN2|PIN3);
    GPIOF_AHB->GPIODIR|=(PIN3);
    GPIOF_AHB->GPIOODR&=~(PIN3);
    GPIOF_AHB->GPIOPUR|=(PIN0|PIN1|PIN2);

    GPIOF_AHB_GPIODAT_DAT3_BB =1;

    SSI1_SSICR1_SSE_BB=0;
    SSI1_SSICR1_MS_BB=0;
    SSI1_SSICC->CS=0;
    SSI1_SSICPSR->CPSDVSR=cpsdvsr;
    SSI1_SSICR0->SCR=scr;
    SSI1_SSICR0_SPH_BB=1;
    SSI1_SSICR0_SPO_BB=0;
    SSI1_SSICR0->FRF=0;
    SSI1_SSICR0->DSS=0xF;


    SSI1_SSIIM_RORIM_BB=1;
    SSI1_SSIIM_RTIM_BB=1;
    SSI1_SSIIM_RXIM_BB=1;
    //SSI0_SSIIM_TXIM_BB=1;

    SSI1_SSICR1_SSE_BB=1;

    NVIC_EN1->NVIC_SSI1=1;
    NVIC_PRI8->NVIC_SSI1=7;

    return 1;
}



int32_t SSI1_ReadFifo(int16_t* data)
{
    if(SSI1FifoCount!=SSI1FifoRead)
    {
        *data=SSI1Fifo[SSI1FifoRead];
        SSI1FifoRead++;
        SSI1FifoRead&=0xFF;
        return 1;
    }
    return 0;
}

int32_t SSI1_Send( int16_t data)
{

    if((SSI1_SSISR_TNF_BB))// && SSI1Transmit)
    {
        //SSI1Transmit=0;
        GPIOF_AHB_GPIODAT_DAT3_BB =0;
        SSI1_SSIDR->DATA=data;
        while(SSI1_SSISR_BSY_BB);
         GPIOF_AHB_GPIODAT_DAT3_BB =1;
        return 1;
    }

    return 0;
}




//ToDO SSI2

int32_t SSI2_Init(uint32_t frec)
{

    volatile uint32_t cpsdvsr=2;
    volatile uint32_t scr=0;
    volatile uint32_t delay;
    volatile uint32_t frecActual=0;
    volatile uint32_t frecCPU=0;
    frecCPU=SYSCTL_ClockGet();
    frecActual=frecCPU;
    frecActual/=cpsdvsr;
    frecActual/=(1+scr);

    while(frecActual!=frec)
    {
        if(scr<255)
            scr++;
        else
        {
            scr=0;
            cpsdvsr*=2;
        }
        frecActual=frecCPU;
        frecActual/=cpsdvsr;
        frecActual/=(1+scr);
    }



    SYSCTL_RCGCSSI_RCGCSSI2_BB=1;
    SYSCTL_RCGCGPIO_RCGCGPIOB_BB=1;
    delay =SYSCTL_RCGCGPIO_RCGCGPIOB_BB;

    GPIOB_AHB->GPIOLOCK=GPIOB_AHB_GPIOLOCK_LOCK_KEY;
    GPIOB_AHB->GPIOCR|=(PIN4|PIN5|PIN6|PIN7);
    GPIOB_AHB->GPIOAFSEL |= (PIN4|PIN6|PIN7);
    GPIOB_AHB->GPIOAFSEL &=~ (PIN5);

    GPIOB_AHB->GPIOAMSEL &=~ (PIN4|PIN5|PIN6|PIN7);
    GPIOB_AHB_GPIOPCTL->PMC4=2;
    GPIOB_AHB_GPIOPCTL->PMC5=0;
    GPIOB_AHB_GPIOPCTL->PMC6=2;
    GPIOB_AHB_GPIOPCTL->PMC7=2;
    GPIOB_AHB->GPIODEN |= (PIN4|PIN5|PIN6|PIN7);
    GPIOB_AHB->GPIODIR|=(PIN5);
    GPIOB_AHB->GPIOODR&=~(PIN5);
    GPIOB_AHB->GPIOPUR|=(PIN4|PIN6|PIN7);

    GPIOB_AHB_GPIODAT_DAT5_BB =1;

    SSI2_SSICR1_SSE_BB=0;
    SSI2_SSICR1_MS_BB=0;
    SSI2_SSICC->CS=0;
    SSI2_SSICPSR->CPSDVSR=cpsdvsr;
    SSI2_SSICR0->SCR=scr;
    SSI2_SSICR0_SPH_BB=1;
    SSI2_SSICR0_SPO_BB=0;
    SSI2_SSICR0->FRF=0;
    SSI2_SSICR0->DSS=0xF;


    SSI2_SSIIM_RORIM_BB=1;
    SSI2_SSIIM_RTIM_BB=1;
    SSI2_SSIIM_RXIM_BB=1;
    //SSI0_SSIIM_TXIM_BB=1;

    SSI2_SSICR1_SSE_BB=1;

    NVIC_EN1->NVIC_SSI2=1;
    NVIC_PRI14->NVIC_SSI2=7;

    return 1;
}



int32_t SSI2_ReadFifo(int16_t* data)
{
    if(SSI2FifoCount!=SSI2FifoRead)
    {
        *data=SSI2Fifo[SSI2FifoRead];
        SSI2FifoRead++;
        SSI2FifoRead&=0xFF;
        return 1;
    }
    return 0;
}

int32_t SSI2_Send( int16_t data)
{

    if((SSI2_SSISR_TNF_BB))// && SSI2Transmit)
    {
        //SSI2Transmit=0;
        GPIOB_AHB_GPIODAT_DAT5_BB =0;
        SSI2_SSIDR->DATA=data;
        while(SSI2_SSISR_BSY_BB);
         GPIOB_AHB_GPIODAT_DAT5_BB =1;
        return 1;
    }

    return 0;
}



//ToDO SSI3

int32_t SSI3_Init(uint32_t frec)
{

    volatile uint32_t cpsdvsr=2;
    volatile uint32_t scr=0;
    volatile uint32_t delay;
    volatile uint32_t frecActual=0;
    volatile uint32_t frecCPU=0;
    frecCPU=SYSCTL_ClockGet();
    frecActual=frecCPU;
    frecActual/=cpsdvsr;
    frecActual/=(1+scr);

    while(frecActual!=frec)
    {
        if(scr<255)
            scr++;
        else
        {
            scr=0;
            cpsdvsr*=2;
        }
        frecActual=frecCPU;
        frecActual/=cpsdvsr;
        frecActual/=(1+scr);
    }



    SYSCTL_RCGCSSI_RCGCSSI3_BB=1;
    SYSCTL_RCGCGPIO_RCGCGPIOD_BB=1;
    delay =SYSCTL_RCGCGPIO_RCGCGPIOD_BB;

    GPIOD_AHB->GPIOLOCK=GPIOD_AHB_GPIOLOCK_LOCK_KEY;
    GPIOD_AHB->GPIOCR|=(PIN0|PIN1|PIN2|PIN3);
    GPIOD_AHB->GPIOAFSEL |= (PIN0|PIN2|PIN3);
    GPIOD_AHB->GPIOAFSEL &=~ (PIN1);

    GPIOD_AHB->GPIOAMSEL &=~ (PIN0|PIN1|PIN2|PIN3);
    GPIOD_AHB_GPIOPCTL->PMC0=1;
    GPIOD_AHB_GPIOPCTL->PMC1=0;
    GPIOD_AHB_GPIOPCTL->PMC2=1;
    GPIOD_AHB_GPIOPCTL->PMC3=1;
    GPIOD_AHB->GPIODEN |= (PIN0|PIN1|PIN2|PIN3);
    GPIOD_AHB->GPIODIR|=(PIN1);
    GPIOD_AHB->GPIOODR&=~(PIN1);
    GPIOD_AHB->GPIOPUR|=(PIN0|PIN2|PIN3);

    GPIOD_AHB_GPIODAT_DAT1_BB =1;

    SSI3_SSICR1_SSE_BB=0;
    SSI3_SSICR1_MS_BB=0;
    SSI3_SSICC->CS=0;
    SSI3_SSICPSR->CPSDVSR=cpsdvsr;
    SSI3_SSICR0->SCR=scr;
    SSI3_SSICR0_SPH_BB=0;
    SSI3_SSICR0_SPO_BB=0;
    SSI3_SSICR0->FRF=0;
    SSI3_SSICR0->DSS=0x7;


    SSI3_SSIIM_RORIM_BB=1;
    SSI3_SSIIM_RTIM_BB=1;
    SSI3_SSIIM_RXIM_BB=1;
    //SSI0_SSIIM_TXIM_BB=1;

    SSI3_SSICR1_SSE_BB=1;

    NVIC_EN1->NVIC_SSI3=1;
    NVIC_PRI14->NVIC_SSI3=7;

    return 1;
}



int32_t SSI3_ReadFifo(int16_t* data)
{
    if(SSI3FifoCount!=SSI3FifoRead)
    {
        *data=SSI3Fifo[SSI3FifoRead];
        SSI3FifoRead++;
        SSI3FifoRead&=0xFF;
        return 1;
    }
    return 0;
}

int32_t SSI3_Send( int16_t data)
{

    if((SSI3_SSISR_TNF_BB))// && SSI3Transmit)
    {
        //SSI3Transmit=0;
        GPIOD_AHB_GPIODAT_DAT1_BB =0;
        SSI3_SSIDR->DATA=data;
        while(SSI3_SSISR_BSY_BB);
         GPIOD_AHB_GPIODAT_DAT1_BB =1;
        return 1;
    }

    return 0;
}


