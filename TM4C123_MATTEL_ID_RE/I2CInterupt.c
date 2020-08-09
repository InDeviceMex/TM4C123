/*
 * I2CInterupt.c
 *
 *  Created on: 23 jun. 2018
 *      Author: InDev
 */

#include "I2C.h"



//todo I2C0 Interupt
void I2C0Handler(void)
{

    if(I2C0_I2CMMIS->MIS)
    {
        I2C0_I2CMICR->IC=1;
        if((!(I2C0_I2CMCSR->ERROR)) && (!(I2C0_I2CMCSR->ARBLST)))
        {

        }
    }
    if(I2C0_I2CMMIS->CLKMIS)
    {
        I2C0_I2CMICR->CLKIC=1;
    }
}


//todo I2C1 Interupt
void I2C1Handler(void)
{

    if(I2C1_I2CMMIS->MIS)
    {
        I2C1_I2CMICR->IC=1;
        if((!(I2C1_I2CMCSR->ERROR)) && (!(I2C1_I2CMCSR->ARBLST)))
        {

        }
    }
    if(I2C1_I2CMMIS->CLKMIS)
    {
        I2C1_I2CMICR->CLKIC=1;
    }
}



//todo I2C2 Interupt
void I2C2Handler(void)
{

    if(I2C2_I2CMMIS->MIS)
    {
        I2C2_I2CMICR->IC=1;
        if((!(I2C2_I2CMCSR->ERROR)) && (!(I2C2_I2CMCSR->ARBLST)))
        {

        }
    }
    if(I2C2_I2CMMIS->CLKMIS)
    {
        I2C2_I2CMICR->CLKIC=1;
    }
}


//todo I2C3 Interupt
void I2C3Handler(void)
{

    if(I2C3_I2CMMIS->MIS)
    {
        I2C3_I2CMICR->IC=1;
        if((!(I2C3_I2CMCSR->ERROR)) && (!(I2C3_I2CMCSR->ARBLST)))
        {

        }
    }
    if(I2C3_I2CMMIS->CLKMIS)
    {
        I2C3_I2CMICR->CLKIC=1;
    }
}




