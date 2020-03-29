/*
 * I2C.c
 *
 *  Created on: 27 mar. 2018
 *      Author: InDev
 */

#include "I2C.h"



#define I2C0MAX 16
int8_t I2C0c=0;
int8_t I2C0dire[I2C0MAX];
int32_t I2C0cant[I2C0MAX];
int8_t* I2C0dat_[I2C0MAX];
int8_t I2C0dispA=0;
int8_t I2C0busy=0;


#define I2C1MAX 16
int8_t I2C1c=0;
int8_t I2C1dire[I2C1MAX];
int32_t I2C1cant[I2C1MAX];
int8_t* I2C1dat_[I2C1MAX];
int8_t I2C1dispA=0;
int8_t I2C1busy=0;


#define I2C2MAX 16
int8_t I2C2c=0;
int8_t I2C2dire[I2C2MAX];
int32_t I2C2cant[I2C2MAX];
int8_t* I2C2dat_[I2C2MAX];
int8_t I2C2dispA=0;
int8_t I2C2busy=0;



#define I2C3MAX 16
int8_t I2C3c=0;
int8_t I2C3dire[I2C3MAX];
int32_t I2C3cant[I2C3MAX];
int8_t* I2C3dat_[I2C3MAX];
int8_t I2C3dispA=0;
int8_t I2C3busy=0;


//ToDo I2C0
void I2C0_Init(uint32_t frec)
{

    volatile uint32_t delay;
    volatile uint32_t frecInt=0;
    volatile uint32_t frecIntF=0;
    volatile float frecFloat=0;
    volatile uint32_t HSEbit=0;
    volatile uint32_t TPR=0;
    if(frec<=1000000)
    {
        frecFloat=(float)SYSCTL_ClockGet();
        frecFloat/=20; //(2*10)
        frecFloat/=frec;
        frecFloat-=1;
        TPR=(uint32_t)frecFloat;
    }
    else
    {
        frecFloat=(float)SYSCTL_ClockGet();
        frecFloat/=6;//(2*3)
        frecFloat/=frec;
        frecFloat-=1;
        TPR=(uint32_t)frecFloat;
        HSEbit=1;
    }


    SYSCTL_RCGCI2C_RCGCI2C0_BB=1;
    SYSCTL_RCGCGPIO_RCGCGPIOB_BB=1;
    delay =SYSCTL_RCGCGPIO_RCGCGPIOB_BB;

    GPIOB_AHB->GPIOLOCK=GPIOB_AHB_GPIOLOCK_R_LOCK_KEY;
    GPIOB_AHB->GPIOCR|=(PIN2|PIN3);
    GPIOB_AHB->GPIOAFSEL |= (PIN2|PIN3);
    GPIOB_AHB->GPIOAMSEL &=~ (PIN2|PIN3);
    GPIOB_AHB_GPIOPCTL->PMC2=3;
    GPIOB_AHB_GPIOPCTL->PMC3=3;
    GPIOB_AHB->GPIODEN |= (PIN2|PIN3);
    GPIOB_AHB->GPIOODR|=(PIN3);
    GPIOB_AHB->GPIOPUR|=(PIN3);
    GPIOB_AHB->GPIOODR&=~(PIN2);

    I2C0_I2CMCR->MFE=1;
    I2C0_I2CMCLKOCNT->CNTL=10;
    I2C0_I2CMTPR->TPR=TPR;
    I2C0_I2CMTPR->HS=HSEbit;


    I2C0_I2CMIMR_IM_BB=1;
    I2C0_I2CMIMR_CLKIM_BB=1;



    NVIC_EN0->NVIC_I2C0=1;
    NVIC_PRI2->NVIC_I2C0=7;

}

int8_t I2C0_add(int8_t dir)
{
    int8_t ID;
    ID=I2C0c;
    I2C0dire[I2C0c]=dir;
    I2C0c++;
    I2C0c&=(I2C0MAX-1);
    return ID;
}


int32_t I2C0_WriteByte(uint8_t data, uint8_t address)
{
    I2C0_I2CMSA->R_S=0;
    I2C0_I2CMSA->SA=address;

    I2C0_I2CMDR->DATA=data;
    while(I2C0_I2CMCSR->BUSY);
    I2C0_I2CMCSW_R=7;
    while(I2C0_I2CMCSR->BUSY);
    if(I2C0_I2CMCSR->ERROR)
    {
        return 0;
    }
    return 1;
}


int32_t I2C0_WriteByteNoStop(uint8_t data, uint8_t address)
{
    I2C0_I2CMSA->R_S=0;
    I2C0_I2CMSA->SA=address;

    I2C0_I2CMDR->DATA=data;
    while(I2C0_I2CMCSR->BUSY);
    I2C0_I2CMCSW_R=3;
    while(I2C0_I2CMCSR->BUSY);
    if(I2C0_I2CMCSR->ERROR)
    {
        return 0;
    }
    return 1;
}


int32_t I2C0_ReadByte(uint8_t* data, uint8_t address)
{
    I2C0_I2CMSA->R_S=1;
    I2C0_I2CMSA->SA=address;

    while(I2C0_I2CMCSR->BUSY);
    I2C0_I2CMCSW_R=7;
    while(I2C0_I2CMCSR->BUSY);
    if(I2C0_I2CMCSR->ERROR)
    {
        return 0;
    }
    *data=I2C0_I2CMDR->DATA;
    return 1;
}



int32_t I2C0_ReadByteNoStop(uint8_t* data, uint8_t address)
{
    I2C0_I2CMSA->R_S=1;
    I2C0_I2CMSA->SA=address;

    while(I2C0_I2CMCSR->BUSY);
    I2C0_I2CMCSW_R=3;
    while(I2C0_I2CMCSR->BUSY);
    if(I2C0_I2CMCSR->ERROR)
    {
        return 0;
    }
    *data=I2C0_I2CMDR->DATA;
    return 1;
}

int32_t I2C0_Write(uint8_t* data, int32_t number, uint8_t address)
{
    int32_t count=0;

    if(number==1)
    {
        return I2C0_WriteByte(*data,address);
    }

    I2C0_I2CMSA->R_S=0;
    I2C0_I2CMSA->SA=address;

    while(count<number)
    {
        I2C0_I2CMDR->DATA=*data;


        if(count==0)
        {
            while(I2C0_I2CMCSR->BUSY);
            I2C0_I2CMCSW_R=3;//START ,RUN
        }
        else if(count==(number-1))
            I2C0_I2CMCSW_R=5; //STOP, RUN
        else
            I2C0_I2CMCSW_R=1;

       // I2C0_I2CMCSW->RUN=1; //RUN

        data++;
        count++;
        while(I2C0_I2CMCSR->BUSY);
        if(I2C0_I2CMCSR->ERROR)
        {
            if(!I2C0_I2CMCSR->ARBLST)
            {
                I2C0_I2CMCSW_R=4;
            }
            return 0;

        }
    }
    return 1;
}

int32_t I2C0_Read(uint8_t* data, int32_t number, uint8_t address)
{
    int32_t count=0;

    if(number==1)
    {
        return I2C0_ReadByte(data,address);
    }

    I2C0_I2CMSA->R_S=1;
    I2C0_I2CMSA->SA=address;

    while(count<number)
    {

        if(count==0)
        {
            while(I2C0_I2CMCSR->BUSY);
            I2C0_I2CMCSW_R=0xB;//START ,RUN
        }
        else if(count==(number-1))
        {
            I2C0_I2CMCSW_R=0x5;
        }
        else
        {
            I2C0_I2CMCSW_R=0x9; //RUN
        }


        while(I2C0_I2CMCSR->BUSY);
        if(I2C0_I2CMCSR->ERROR)
        {
            if(!I2C0_I2CMCSR->ARBLST)
            {
                I2C0_I2CMCSW_R=4;
            }
            return 0;

        }

        *data=I2C0_I2CMDR->DATA;
        data++;
        count++;



    }
    return 1;
}




int32_t I2C0_WriteNoStop(uint8_t* data, int32_t number, uint8_t address)
{
    int32_t count=0;

    if(number==1)
    {
        return I2C0_WriteByteNoStop(*data,address);
    }

    I2C0_I2CMSA->R_S=0;
    I2C0_I2CMSA->SA=address;

    while(count<number)
    {
        I2C0_I2CMDR->DATA=*data;


        if(count==0)
        {
            while(I2C0_I2CMCSR->BUSY);
            I2C0_I2CMCSW_R=3;//START ,RUN
        }
        else if(count==(number-1))
            I2C0_I2CMCSW_R=0x1; //STOP, RUN
        else
            I2C0_I2CMCSW_R=0x1;
        data++;
        count++;
        while(I2C0_I2CMCSR->BUSY);
        if(I2C0_I2CMCSR->ERROR)
        {
            if(!I2C0_I2CMCSR->ARBLST)
            {
                I2C0_I2CMCSW_R=4;
            }
            return 0;

        }
    }
    return 1;
}

int32_t I2C0_ReadNoStop(uint8_t* data, int32_t number, uint8_t address)
{
    int32_t count=0;

    if(number==1)
    {
        return I2C0_ReadByteNoStop(data,address);
    }

    I2C0_I2CMSA->R_S=1;
    I2C0_I2CMSA->SA=address;

    while(count<number)
    {

        if(count==0)
        {
            while(I2C0_I2CMCSR->BUSY);
            I2C0_I2CMCSW_R=0xB;//START ,RUN
        }
        else if(count==(number-1))
        {
            I2C0_I2CMCSW_R=0x1;
        }
        else
        {
            I2C0_I2CMCSW_R=0x9; //RUN
        }


        while(I2C0_I2CMCSR->BUSY);
        if(I2C0_I2CMCSR->ERROR)
        {
            if(!I2C0_I2CMCSR->ARBLST)
            {
                I2C0_I2CMCSW_R=4;
            }
            return 0;

        }

        *data=I2C0_I2CMDR->DATA;
        data++;
        count++;



    }
    return 1;
}




int32_t I2C0_WriteRead(uint8_t* dataTx, int32_t numberTx,uint8_t* dataRx, int32_t numberRx, uint8_t address)
{
    if(I2C0_WriteNoStop(dataTx,numberTx,address))
       if(I2C0_Read(dataRx,numberRx,address))
           return 1;

    return 0;
}


int32_t I2C0_ReadWrite(uint8_t* dataTx, int32_t numberTx,uint8_t* dataRx, int32_t numberRx, uint8_t address)
{
    if(I2C0_ReadNoStop(dataRx,numberRx,address))
       if(I2C0_Write(dataTx,numberTx,address))
           return 1;

    return 0;
}



//ToDo I2C1


void I2C1_Init(uint32_t frec)
{

    volatile uint32_t delay;
    volatile uint32_t frecInt=0;
    volatile uint32_t frecIntF=0;
    volatile float frecFloat=0;
    volatile uint32_t HSEbit=0;
    volatile uint32_t TPR=0;
    if(frec<=1000000)
    {
        frecFloat=(float)SYSCTL_ClockGet();
        frecFloat/=20; //(2*10)
        frecFloat/=frec;
        frecFloat-=1;
        TPR=(uint32_t)frecFloat;
    }
    else
    {
        frecFloat=(float)SYSCTL_ClockGet();
        frecFloat/=6;//(2*3)
        frecFloat/=frec;
        frecFloat-=1;
        TPR=(uint32_t)frecFloat;
        HSEbit=1;
    }


    SYSCTL_RCGCI2C_RCGCI2C1_BB=1;
    SYSCTL_RCGCGPIO_RCGCGPIOA_BB=1;
    delay =SYSCTL_RCGCGPIO_RCGCGPIOA_BB;

    GPIOA_AHB->GPIOLOCK=GPIOA_AHB_GPIOLOCK_R_LOCK_KEY;
    GPIOA_AHB->GPIOCR|=(PIN6|PIN7);
    GPIOA_AHB->GPIOAFSEL |= (PIN6|PIN7);
    GPIOA_AHB->GPIOAMSEL &=~ (PIN6|PIN7);
    GPIOA_AHB_GPIOPCTL->PMC6=3;
    GPIOA_AHB_GPIOPCTL->PMC7=3;
    GPIOA_AHB->GPIODEN |= (PIN6|PIN7);
    GPIOA_AHB->GPIOODR|=(PIN7);
    GPIOA_AHB->GPIOPUR|=(PIN7);
    GPIOA_AHB->GPIOODR&=~(PIN6);

    I2C1_I2CMCR->MFE=1;
    I2C1_I2CMCLKOCNT->CNTL=10;
    I2C1_I2CMTPR->TPR=TPR;
    I2C1_I2CMTPR->HS=HSEbit;


    I2C1_I2CMIMR_IM_BB=1;
    I2C1_I2CMIMR_CLKIM_BB=1;



    NVIC_EN1->NVIC_I2C1=1;
    NVIC_PRI9->NVIC_I2C1=7;

}

int8_t I2C1_add(int8_t dir)
{
    int8_t ID;
    ID=I2C1c;
    I2C1dire[I2C1c]=dir;
    I2C1c++;
    I2C1c&=(I2C1MAX-1);
    return ID;
}


int32_t I2C1_WriteByte(uint8_t data, uint8_t address)
{
    int32_t timeOut=500000;
    I2C1_I2CMSA->R_S=0;
    I2C1_I2CMSA->SA=address;

    I2C1_I2CMDR->DATA=data;
    timeOut=500000;
    while(I2C1_I2CMCSR->BUSY)
    {
        timeOut--;
        if(timeOut==0)
            return 0;
    }
    I2C1_I2CMCSW_R=7;
    timeOut=500000;
    while(I2C1_I2CMCSR->BUSY)
    {
        timeOut--;
        if(timeOut==0)
            return 0;
    }
    if(I2C1_I2CMCSR->ERROR)
    {
        return 0;
    }
    return 1;
}


int32_t I2C1_WriteByteNoStop(uint8_t data, uint8_t address)
{
    int32_t timeOut=500000;
    I2C1_I2CMSA->R_S=0;
    I2C1_I2CMSA->SA=address;

    I2C1_I2CMDR->DATA=data;
    timeOut=500000;
    while(I2C1_I2CMCSR->BUSY)
    {
        timeOut--;
        if(timeOut==0)
            return 0;
    }
    I2C1_I2CMCSW_R=3;
    timeOut=500000;
    while(I2C1_I2CMCSR->BUSY)
    {
        timeOut--;
        if(timeOut==0)
            return 0;
    }
    if(I2C1_I2CMCSR->ERROR)
    {
        return 0;
    }
    return 1;
}


int32_t I2C1_ReadByte(uint8_t* data, uint8_t address)
{
    int32_t timeOut=500000;
    I2C1_I2CMSA->R_S=1;
    I2C1_I2CMSA->SA=address;timeOut=500000;
    while(I2C1_I2CMCSR->BUSY)
    {
        timeOut--;
        if(timeOut==0)
            return 0;
    }
    I2C1_I2CMCSW_R=7;timeOut=500000;
    while(I2C1_I2CMCSR->BUSY)
    {
        timeOut--;
        if(timeOut==0)
            return 0;
    }
    if(I2C1_I2CMCSR->ERROR)
    {
        return 0;
    }
    *data=I2C1_I2CMDR->DATA;
    return 1;
}



int32_t I2C1_ReadByteNoStop(uint8_t* data, uint8_t address)
{
    int32_t timeOut=500000;
    I2C1_I2CMSA->R_S=1;
    I2C1_I2CMSA->SA=address;
    timeOut=500000;
    while(I2C1_I2CMCSR->BUSY)
    {
        timeOut--;
        if(timeOut==0)
            return 0;
    }
    I2C1_I2CMCSW_R=3;
    timeOut=500000;
    while(I2C1_I2CMCSR->BUSY)
    {
        timeOut--;
        if(timeOut==0)
            return 0;
    }
    if(I2C1_I2CMCSR->ERROR)
    {
        return 0;
    }
    *data=I2C1_I2CMDR->DATA;
    return 1;
}

int32_t I2C1_Write(uint8_t* data, int32_t number, uint8_t address)
{
    int32_t count=0;
    int32_t timeOut=500000;
    if(number==1)
    {
        return I2C1_WriteByte(*data,address);
    }

    I2C1_I2CMSA->R_S=0;
    I2C1_I2CMSA->SA=address;

    while(count<number)
    {
        I2C1_I2CMDR->DATA=*data;


        if(count==0)
        {
            timeOut=500000;
            while(I2C1_I2CMCSR->BUSY)
            {
                timeOut--;
                if(timeOut==0)
                    return 0;
            }
            I2C1_I2CMCSW_R=3;//START ,RUN
        }
        else if(count==(number-1))
            I2C1_I2CMCSW_R=5; //STOP, RUN
        else
            I2C1_I2CMCSW_R=1;

       // I2C1_I2CMCSW->RUN=1; //RUN

        data++;
        count++;
        timeOut=500000;
        while(I2C1_I2CMCSR->BUSY)
        {
            timeOut--;
            if(timeOut==0)
                return 0;
        }
        if(I2C1_I2CMCSR->ERROR)
        {
            if(!I2C1_I2CMCSR->ARBLST)
            {
                I2C1_I2CMCSW_R=4;
            }
            return 0;

        }
    }
    return 1;
}

int32_t I2C1_Read(uint8_t* data, int32_t number, uint8_t address)
{
    int32_t count=0;
    int32_t timeOut=500000;

    if(number==1)
    {
        return I2C1_ReadByte(data,address);
    }

    I2C1_I2CMSA->R_S=1;
    I2C1_I2CMSA->SA=address;

    while(count<number)
    {

        if(count==0)
        {
            timeOut=500000;
            while(I2C1_I2CMCSR->BUSY)
            {
                timeOut--;
                if(timeOut==0)
                    return 0;
            }
            I2C1_I2CMCSW_R=0xB;//START ,RUN
        }
        else if(count==(number-1))
        {
            I2C1_I2CMCSW_R=0x5;
        }
        else
        {
            I2C1_I2CMCSW_R=0x9; //RUN
        }
        timeOut=500000;
        while(I2C1_I2CMCSR->BUSY)
        {
            timeOut--;
            if(timeOut==0)
                return 0;
        }
        if(I2C1_I2CMCSR->ERROR)
        {
            if(!I2C1_I2CMCSR->ARBLST)
            {
                I2C1_I2CMCSW_R=4;
            }
            return 0;

        }

        *data=I2C1_I2CMDR->DATA;
        data++;
        count++;



    }
    return 1;
}




int32_t I2C1_WriteNoStop(uint8_t* data, int32_t number, uint8_t address)
{
    int32_t count=0;
    int32_t timeOut=500000;
    if(number==1)
    {
        return I2C1_WriteByteNoStop(*data,address);
    }

    I2C1_I2CMSA->R_S=0;
    I2C1_I2CMSA->SA=address;

    while(count<number)
    {
        I2C1_I2CMDR->DATA=*data;


        if(count==0)
        {
            timeOut=500000;
            while(I2C1_I2CMCSR->BUSY)
            {
                timeOut--;
                if(timeOut==0)
                    return 0;
            }
            I2C1_I2CMCSW_R=3;//START ,RUN
        }
        else if(count==(number-1))
            I2C1_I2CMCSW_R=0x1; //STOP, RUN
        else
            I2C1_I2CMCSW_R=0x1;
        data++;
        count++;
        timeOut=500000;
        while(I2C1_I2CMCSR->BUSY)
        {
            timeOut--;
            if(timeOut==0)
                return 0;
        }
        if(I2C1_I2CMCSR->ERROR)
        {
            if(!I2C1_I2CMCSR->ARBLST)
            {
                I2C1_I2CMCSW_R=4;
            }
            return 0;

        }
    }
    return 1;
}

int32_t I2C1_ReadNoStop(uint8_t* data, int32_t number, uint8_t address)
{
    int32_t count=0;
    int32_t timeOut=500000;

    if(number==1)
    {
        return I2C1_ReadByteNoStop(data,address);
    }

    I2C1_I2CMSA->R_S=1;
    I2C1_I2CMSA->SA=address;

    while(count<number)
    {

        if(count==0)
        {
            timeOut=500000;
            while(I2C1_I2CMCSR->BUSY)
            {
                timeOut--;
                if(timeOut==0)
                    return 0;
            }
            I2C1_I2CMCSW_R=0xB;//START ,RUN
        }
        else if(count==(number-1))
        {
            I2C1_I2CMCSW_R=0x1;
        }
        else
        {
            I2C1_I2CMCSW_R=0x9; //RUN
        }

        timeOut=500000;
        while(I2C1_I2CMCSR->BUSY)
        {
            timeOut--;
            if(timeOut==0)
               return 0;
        }
        if(I2C1_I2CMCSR->ERROR)
        {
            if(!I2C1_I2CMCSR->ARBLST)
            {
                I2C1_I2CMCSW_R=4;
            }
            return 0;

        }

        *data=I2C1_I2CMDR->DATA;
        data++;
        count++;



    }
    return 1;
}




int32_t I2C1_WriteRead(uint8_t* dataTx, int32_t numberTx,uint8_t* dataRx, int32_t numberRx, uint8_t address)
{
    if(I2C1_WriteNoStop(dataTx,numberTx,address))
       if(I2C1_Read(dataRx,numberRx,address))
           return 1;

    return 0;
}


int32_t I2C1_ReadWrite(uint8_t* dataTx, int32_t numberTx,uint8_t* dataRx, int32_t numberRx, uint8_t address)
{
    if(I2C1_ReadNoStop(dataRx,numberRx,address))
       if(I2C1_Write(dataTx,numberTx,address))
           return 1;

    return 0;
}





//ToDo I2C2


void I2C2_Init(uint32_t frec)
{

    volatile uint32_t delay;
    volatile uint32_t frecInt=0;
    volatile uint32_t frecIntF=0;
    volatile float frecFloat=0;
    volatile uint32_t HSEbit=0;
    volatile uint32_t TPR=0;
    if(frec<=1000000)
    {
        frecFloat=(float)SYSCTL_ClockGet();
        frecFloat/=20; //(2*10)
        frecFloat/=frec;
        frecFloat-=1;
        TPR=(uint32_t)frecFloat;
    }
    else
    {
        frecFloat=(float)SYSCTL_ClockGet();
        frecFloat/=6;//(2*3)
        frecFloat/=frec;
        frecFloat-=1;
        TPR=(uint32_t)frecFloat;
        HSEbit=1;
    }


    SYSCTL_RCGCI2C_RCGCI2C2_BB=1;
    SYSCTL_RCGCGPIO_RCGCGPIOE_BB=1;
    delay =SYSCTL_RCGCGPIO_RCGCGPIOE_BB;

    GPIOE_AHB->GPIOLOCK=GPIOE_AHB_GPIOLOCK_R_LOCK_KEY;
    GPIOE_AHB->GPIOCR|=(PIN4|PIN5);
    GPIOE_AHB->GPIOAFSEL |= (PIN4|PIN5);
    GPIOE_AHB->GPIOAMSEL &=~ (PIN4|PIN5);
    GPIOE_AHB_GPIOPCTL->PMC4=3;
    GPIOE_AHB_GPIOPCTL->PMC5=3;
    GPIOE_AHB->GPIODEN |= (PIN4|PIN5);
    GPIOE_AHB->GPIOODR|=(PIN5);
    GPIOE_AHB->GPIOPUR|=(PIN5);
    GPIOE_AHB->GPIOODR&=~(PIN4);

    I2C2_I2CMCR->MFE=1;
    I2C2_I2CMCLKOCNT->CNTL=10;
    I2C2_I2CMTPR->TPR=TPR;
    I2C2_I2CMTPR->HS=HSEbit;


    I2C2_I2CMIMR_IM_BB=1;
    I2C2_I2CMIMR_CLKIM_BB=1;



    NVIC_EN2->NVIC_I2C2=1;
    NVIC_PRI17->NVIC_I2C2=7;

}

int8_t I2C2_add(int8_t dir)
{
    int8_t ID;
    ID=I2C2c;
    I2C2dire[I2C2c]=dir;
    I2C2c++;
    I2C2c&=(I2C2MAX-1);
    return ID;
}


int32_t I2C2_WriteByte(uint8_t data, uint8_t address)
{
    I2C2_I2CMSA->R_S=0;
    I2C2_I2CMSA->SA=address;

    I2C2_I2CMDR->DATA=data;
    while(I2C2_I2CMCSR->BUSY);
    I2C2_I2CMCSW_R=7;
    while(I2C2_I2CMCSR->BUSY);
    if(I2C2_I2CMCSR->ERROR)
    {
        return 0;
    }
    return 1;
}


int32_t I2C2_WriteByteNoStop(uint8_t data, uint8_t address)
{
    I2C2_I2CMSA->R_S=0;
    I2C2_I2CMSA->SA=address;

    I2C2_I2CMDR->DATA=data;
    while(I2C2_I2CMCSR->BUSY);
    I2C2_I2CMCSW_R=3;
    while(I2C2_I2CMCSR->BUSY);
    if(I2C2_I2CMCSR->ERROR)
    {
        return 0;
    }
    return 1;
}


int32_t I2C2_ReadByte(uint8_t* data, uint8_t address)
{
    I2C2_I2CMSA->R_S=1;
    I2C2_I2CMSA->SA=address;

    while(I2C2_I2CMCSR->BUSY);
    I2C2_I2CMCSW_R=7;
    while(I2C2_I2CMCSR->BUSY);
    if(I2C2_I2CMCSR->ERROR)
    {
        return 0;
    }
    *data=I2C2_I2CMDR->DATA;
    return 1;
}



int32_t I2C2_ReadByteNoStop(uint8_t* data, uint8_t address)
{
    I2C2_I2CMSA->R_S=1;
    I2C2_I2CMSA->SA=address;

    while(I2C2_I2CMCSR->BUSY);
    I2C2_I2CMCSW_R=3;
    while(I2C2_I2CMCSR->BUSY);
    if(I2C2_I2CMCSR->ERROR)
    {
        return 0;
    }
    *data=I2C2_I2CMDR->DATA;
    return 1;
}

int32_t I2C2_Write(uint8_t* data, int32_t number, uint8_t address)
{
    int32_t count=0;

    if(number==1)
    {
        return I2C2_WriteByte(*data,address);
    }

    I2C2_I2CMSA->R_S=0;
    I2C2_I2CMSA->SA=address;

    while(count<number)
    {
        I2C2_I2CMDR->DATA=*data;


        if(count==0)
        {
            while(I2C2_I2CMCSR->BUSY);
            I2C2_I2CMCSW_R=3;//START ,RUN
        }
        else if(count==(number-1))
            I2C2_I2CMCSW_R=5; //STOP, RUN
        else
            I2C2_I2CMCSW_R=1;

       // I2C2_I2CMCSW->RUN=1; //RUN

        data++;
        count++;
        while(I2C2_I2CMCSR->BUSY);
        if(I2C2_I2CMCSR->ERROR)
        {
            if(!I2C2_I2CMCSR->ARBLST)
            {
                I2C2_I2CMCSW_R=4;
            }
            return 0;

        }
    }
    return 1;
}

int32_t I2C2_Read(uint8_t* data, int32_t number, uint8_t address)
{
    int32_t count=0;

    if(number==1)
    {
        return I2C2_ReadByte(data,address);
    }

    I2C2_I2CMSA->R_S=1;
    I2C2_I2CMSA->SA=address;

    while(count<number)
    {

        if(count==0)
        {
            while(I2C2_I2CMCSR->BUSY);
            I2C2_I2CMCSW_R=0xB;//START ,RUN
        }
        else if(count==(number-1))
        {
            I2C2_I2CMCSW_R=0x5;
        }
        else
        {
            I2C2_I2CMCSW_R=0x9; //RUN
        }


        while(I2C2_I2CMCSR->BUSY);
        if(I2C2_I2CMCSR->ERROR)
        {
            if(!I2C2_I2CMCSR->ARBLST)
            {
                I2C2_I2CMCSW_R=4;
            }
            return 0;

        }

        *data=I2C2_I2CMDR->DATA;
        data++;
        count++;



    }
    return 1;
}




int32_t I2C2_WriteNoStop(uint8_t* data, int32_t number, uint8_t address)
{
    int32_t count=0;

    if(number==1)
    {
        return I2C2_WriteByteNoStop(*data,address);
    }

    I2C2_I2CMSA->R_S=0;
    I2C2_I2CMSA->SA=address;

    while(count<number)
    {
        I2C2_I2CMDR->DATA=*data;


        if(count==0)
        {
            while(I2C2_I2CMCSR->BUSY);
            I2C2_I2CMCSW_R=3;//START ,RUN
        }
        else if(count==(number-1))
            I2C2_I2CMCSW_R=0x1; //STOP, RUN
        else
            I2C2_I2CMCSW_R=0x1;
        data++;
        count++;
        while(I2C2_I2CMCSR->BUSY);
        if(I2C2_I2CMCSR->ERROR)
        {
            if(!I2C2_I2CMCSR->ARBLST)
            {
                I2C2_I2CMCSW_R=4;
            }
            return 0;

        }
    }
    return 1;
}

int32_t I2C2_ReadNoStop(uint8_t* data, int32_t number, uint8_t address)
{
    int32_t count=0;

    if(number==1)
    {
        return I2C2_ReadByteNoStop(data,address);
    }

    I2C2_I2CMSA->R_S=1;
    I2C2_I2CMSA->SA=address;

    while(count<number)
    {

        if(count==0)
        {
            while(I2C2_I2CMCSR->BUSY);
            I2C2_I2CMCSW_R=0xB;//START ,RUN
        }
        else if(count==(number-1))
        {
            I2C2_I2CMCSW_R=0x1;
        }
        else
        {
            I2C2_I2CMCSW_R=0x9; //RUN
        }


        while(I2C2_I2CMCSR->BUSY);
        if(I2C2_I2CMCSR->ERROR)
        {
            if(!I2C2_I2CMCSR->ARBLST)
            {
                I2C2_I2CMCSW_R=4;
            }
            return 0;

        }

        *data=I2C2_I2CMDR->DATA;
        data++;
        count++;



    }
    return 1;
}




int32_t I2C2_WriteRead(uint8_t* dataTx, int32_t numberTx,uint8_t* dataRx, int32_t numberRx, uint8_t address)
{
    if(I2C2_WriteNoStop(dataTx,numberTx,address))
       if(I2C2_Read(dataRx,numberRx,address))
           return 1;

    return 0;
}


int32_t I2C2_ReadWrite(uint8_t* dataTx, int32_t numberTx,uint8_t* dataRx, int32_t numberRx, uint8_t address)
{
    if(I2C2_ReadNoStop(dataRx,numberRx,address))
       if(I2C2_Write(dataTx,numberTx,address))
           return 1;

    return 0;
}





//ToDo I2C3


void I2C3_Init(uint32_t frec)
{

    volatile uint32_t delay;
    volatile uint32_t frecInt=0;
    volatile uint32_t frecIntF=0;
    volatile float frecFloat=0;
    volatile uint32_t HSEbit=0;
    volatile uint32_t TPR=0;
    if(frec<=1000000)
    {
        frecFloat=(float)SYSCTL_ClockGet();
        frecFloat/=20; //(2*10)
        frecFloat/=frec;
        frecFloat-=1;
        TPR=(uint32_t)frecFloat;
    }
    else
    {
        frecFloat=(float)SYSCTL_ClockGet();
        frecFloat/=6;//(2*3)
        frecFloat/=frec;
        frecFloat-=1;
        TPR=(uint32_t)frecFloat;
        HSEbit=1;
    }


    SYSCTL_RCGCI2C_RCGCI2C3_BB=1;
    SYSCTL_RCGCGPIO_RCGCGPIOD_BB=1;
    delay =SYSCTL_RCGCGPIO_RCGCGPIOD_BB;

    GPIOD_AHB->GPIOLOCK=GPIOD_AHB_GPIOLOCK_R_LOCK_KEY;
    GPIOD_AHB->GPIOCR|=(PIN0|PIN1);
    GPIOD_AHB->GPIOAFSEL |= (PIN0|PIN1);
    GPIOD_AHB->GPIOAMSEL &=~ (PIN0|PIN1);
    GPIOD_AHB_GPIOPCTL->PMC0=3;
    GPIOD_AHB_GPIOPCTL->PMC1=3;
    GPIOD_AHB->GPIODEN |= (PIN0|PIN1);
    GPIOD_AHB->GPIOODR|=(PIN1);
    GPIOD_AHB->GPIOPUR|=(PIN1);
    GPIOD_AHB->GPIOODR&=~(PIN0);

    I2C3_I2CMCR->MFE=1;
    I2C3_I2CMCLKOCNT->CNTL=10;
    I2C3_I2CMTPR->TPR=TPR;
    I2C3_I2CMTPR->HS=HSEbit;


    I2C3_I2CMIMR_IM_BB=1;
    I2C3_I2CMIMR_CLKIM_BB=1;



    NVIC_EN2->NVIC_I2C3=1;
    NVIC_PRI17->NVIC_I2C3=7;

}

int8_t I2C3_add(int8_t dir)
{
    int8_t ID;
    ID=I2C3c;
    I2C3dire[I2C3c]=dir;
    I2C3c++;
    I2C3c&=(I2C3MAX-1);
    return ID;
}


int32_t I2C3_WriteByte(uint8_t data, uint8_t address)
{
    I2C3_I2CMSA->R_S=0;
    I2C3_I2CMSA->SA=address;

    I2C3_I2CMDR->DATA=data;
    while(I2C3_I2CMCSR->BUSY);
    I2C3_I2CMCSW_R=7;
    while(I2C3_I2CMCSR->BUSY);
    if(I2C3_I2CMCSR->ERROR)
    {
        return 0;
    }
    return 1;
}


int32_t I2C3_WriteByteNoStop(uint8_t data, uint8_t address)
{
    I2C3_I2CMSA->R_S=0;
    I2C3_I2CMSA->SA=address;

    I2C3_I2CMDR->DATA=data;
    while(I2C3_I2CMCSR->BUSY);
    I2C3_I2CMCSW_R=3;
    while(I2C3_I2CMCSR->BUSY);
    if(I2C3_I2CMCSR->ERROR)
    {
        return 0;
    }
    return 1;
}


int32_t I2C3_ReadByte(uint8_t* data, uint8_t address)
{
    I2C3_I2CMSA->R_S=1;
    I2C3_I2CMSA->SA=address;

    while(I2C3_I2CMCSR->BUSY);
    I2C3_I2CMCSW_R=7;
    while(I2C3_I2CMCSR->BUSY);
    if(I2C3_I2CMCSR->ERROR)
    {
        return 0;
    }
    *data=I2C3_I2CMDR->DATA;
    return 1;
}



int32_t I2C3_ReadByteNoStop(uint8_t* data, uint8_t address)
{
    I2C3_I2CMSA->R_S=1;
    I2C3_I2CMSA->SA=address;

    while(I2C3_I2CMCSR->BUSY);
    I2C3_I2CMCSW_R=3;
    while(I2C3_I2CMCSR->BUSY);
    if(I2C3_I2CMCSR->ERROR)
    {
        return 0;
    }
    *data=I2C3_I2CMDR->DATA;
    return 1;
}

int32_t I2C3_Write(uint8_t* data, int32_t number, uint8_t address)
{
    int32_t count=0;

    if(number==1)
    {
        return I2C3_WriteByte(*data,address);
    }

    I2C3_I2CMSA->R_S=0;
    I2C3_I2CMSA->SA=address;

    while(count<number)
    {
        I2C3_I2CMDR->DATA=*data;


        if(count==0)
        {
            while(I2C3_I2CMCSR->BUSY);
            I2C3_I2CMCSW_R=3;//START ,RUN
        }
        else if(count==(number-1))
            I2C3_I2CMCSW_R=5; //STOP, RUN
        else
            I2C3_I2CMCSW_R=1;

       // I2C3_I2CMCSW->RUN=1; //RUN

        data++;
        count++;
        while(I2C3_I2CMCSR->BUSY);
        if(I2C3_I2CMCSR->ERROR)
        {
            if(!I2C3_I2CMCSR->ARBLST)
            {
                I2C3_I2CMCSW_R=4;
            }
            return 0;

        }
    }
    return 1;
}

int32_t I2C3_Read(uint8_t* data, int32_t number, uint8_t address)
{
    int32_t count=0;

    if(number==1)
    {
        return I2C3_ReadByte(data,address);
    }

    I2C3_I2CMSA->R_S=1;
    I2C3_I2CMSA->SA=address;

    while(count<number)
    {

        if(count==0)
        {
            while(I2C3_I2CMCSR->BUSY);
            I2C3_I2CMCSW_R=0xB;//START ,RUN
        }
        else if(count==(number-1))
        {
            I2C3_I2CMCSW_R=0x5;
        }
        else
        {
            I2C3_I2CMCSW_R=0x9; //RUN
        }


        while(I2C3_I2CMCSR->BUSY);
        if(I2C3_I2CMCSR->ERROR)
        {
            if(!I2C3_I2CMCSR->ARBLST)
            {
                I2C3_I2CMCSW_R=4;
            }
            return 0;

        }

        *data=I2C3_I2CMDR->DATA;
        data++;
        count++;



    }
    return 1;
}




int32_t I2C3_WriteNoStop(uint8_t* data, int32_t number, uint8_t address)
{
    int32_t count=0;

    if(number==1)
    {
        return I2C3_WriteByteNoStop(*data,address);
    }

    I2C3_I2CMSA->R_S=0;
    I2C3_I2CMSA->SA=address;

    while(count<number)
    {
        I2C3_I2CMDR->DATA=*data;


        if(count==0)
        {
            while(I2C3_I2CMCSR->BUSY);
            I2C3_I2CMCSW_R=3;//START ,RUN
        }
        else if(count==(number-1))
            I2C3_I2CMCSW_R=0x1; //STOP, RUN
        else
            I2C3_I2CMCSW_R=0x1;
        data++;
        count++;
        while(I2C3_I2CMCSR->BUSY);
        if(I2C3_I2CMCSR->ERROR)
        {
            if(!I2C3_I2CMCSR->ARBLST)
            {
                I2C3_I2CMCSW_R=4;
            }
            return 0;

        }
    }
    return 1;
}

int32_t I2C3_ReadNoStop(uint8_t* data, int32_t number, uint8_t address)
{
    int32_t count=0;

    if(number==1)
    {
        return I2C3_ReadByteNoStop(data,address);
    }

    I2C3_I2CMSA->R_S=1;
    I2C3_I2CMSA->SA=address;

    while(count<number)
    {

        if(count==0)
        {
            while(I2C3_I2CMCSR->BUSY);
            I2C3_I2CMCSW_R=0xB;//START ,RUN
        }
        else if(count==(number-1))
        {
            I2C3_I2CMCSW_R=0x1;
        }
        else
        {
            I2C3_I2CMCSW_R=0x9; //RUN
        }


        while(I2C3_I2CMCSR->BUSY);
        if(I2C3_I2CMCSR->ERROR)
        {
            if(!I2C3_I2CMCSR->ARBLST)
            {
                I2C3_I2CMCSW_R=4;
            }
            return 0;

        }

        *data=I2C3_I2CMDR->DATA;
        data++;
        count++;



    }
    return 1;
}




int32_t I2C3_WriteRead(uint8_t* dataTx, int32_t numberTx,uint8_t* dataRx, int32_t numberRx, uint8_t address)
{
    if(I2C3_WriteNoStop(dataTx,numberTx,address))
       if(I2C3_Read(dataRx,numberRx,address))
           return 1;

    return 0;
}


int32_t I2C3_ReadWrite(uint8_t* dataTx, int32_t numberTx,uint8_t* dataRx, int32_t numberRx, uint8_t address)
{
    if(I2C3_ReadNoStop(dataRx,numberRx,address))
       if(I2C3_Write(dataTx,numberTx,address))
           return 1;

    return 0;
}



