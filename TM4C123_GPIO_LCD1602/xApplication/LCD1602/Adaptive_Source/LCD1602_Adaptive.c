/*
 * LCD1602_Adaptive.h
 *
 *  Created on: 17 may. 2020
 *      Author: vyldram
 */


#include <xApplication/LCD1602/Adaptive_Header/LCD1602_Adaptive.h>

void LCD1602_vInitGPIO(void)
{
    /*Initial State of PIN as output*/
     GPIO__vEnDigital(LCD1602_PORT_E,LCD1602_E);
     GPIO__vEnDigital(LCD1602_PORT_RS,LCD1602_RS);
     GPIO__vEnDigital(LCD1602_PORT_RW,LCD1602_RW);
     GPIO__vEnDigital(LCD1602_PORT_D4,LCD1602_D4);
     GPIO__vEnDigital(LCD1602_PORT_D5,LCD1602_D5);
     GPIO__vEnDigital(LCD1602_PORT_D6,LCD1602_D6);
     GPIO__vEnDigital(LCD1602_PORT_D7,LCD1602_D7);

     GPIO__vDisAnalog(LCD1602_PORT_E,LCD1602_E);
     GPIO__vDisAnalog(LCD1602_PORT_RS,LCD1602_RS);
     GPIO__vDisAnalog(LCD1602_PORT_RW,LCD1602_RW);
     GPIO__vDisAnalog(LCD1602_PORT_D4,LCD1602_D4);
     GPIO__vDisAnalog(LCD1602_PORT_D5,LCD1602_D5);
     GPIO__vDisAnalog(LCD1602_PORT_D6,LCD1602_D6);
     GPIO__vDisAnalog(LCD1602_PORT_D7,LCD1602_D7);

     GPIO__enSetConfig(LCD1602_PORT_E,LCD1602_E,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
     GPIO__enSetConfig(LCD1602_PORT_RS,LCD1602_RS,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
     GPIO__enSetConfig(LCD1602_PORT_RW,LCD1602_RW,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
     GPIO__enSetConfig(LCD1602_PORT_D4,LCD1602_D4,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
     GPIO__enSetConfig(LCD1602_PORT_D5,LCD1602_D5,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
     GPIO__enSetConfig(LCD1602_PORT_D6,LCD1602_D6,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
     GPIO__enSetConfig(LCD1602_PORT_D7,LCD1602_D7,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

     GPIO_AHB_BLOCK[LCD1602_PORT_E]->GPIODATA_MASK[LCD1602_E]=0;
     GPIO_AHB_BLOCK[LCD1602_PORT_RS]->GPIODATA_MASK[LCD1602_RS]=0;
     GPIO_AHB_BLOCK[LCD1602_PORT_RW]->GPIODATA_MASK[LCD1602_RW]=0;
     GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4]=0;
     GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5]=0;
     GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6]=0;
     GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7]=0;
}


void LCD1602_vDelay(float fDelay)
{
    SysTick__vDelayUs(fDelay);
}
void LCD1602_vSetCommandMode(void)
{
    GPIO_AHB_BLOCK[LCD1602_PORT_RS]->GPIODATA_MASK[LCD1602_RS]=((uint32_t)LCD1602_enCOMMAND)<<LCD1602_RS_POS;
}

void LCD1602_vSetDataMode(void)
{
    GPIO_AHB_BLOCK[LCD1602_PORT_RS]->GPIODATA_MASK[LCD1602_RS]=((uint32_t)LCD1602_enDATA)<<LCD1602_RS_POS;
}

void LCD1602_vSetWriteMode(void)
{
    GPIO_AHB_BLOCK[LCD1602_PORT_RW]->GPIODATA_MASK[LCD1602_RW]=((uint32_t)LCD1602_enWRITE)<<LCD1602_RW_POS;
}

void LCD1602_vSetReadMode(void)
{
    GPIO_AHB_BLOCK[LCD1602_PORT_RW]->GPIODATA_MASK[LCD1602_RW]=((uint32_t)LCD1602_enREAD)<<LCD1602_RW_POS;
}

void LCD1602_vWritePin8Bit(uint8_t u8Data)
{

    if(u8Data&GPIO_enPIN7)
        GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7]=LCD1602_D7;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7]=0;

    if(u8Data&GPIO_enPIN6)
        GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6]=LCD1602_D6;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6]=0;

    if(u8Data&GPIO_enPIN5)
        GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5]=LCD1602_D5;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5]=0;

    if(u8Data&GPIO_enPIN4)
        GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4]=LCD1602_D4;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4]=0;
}


void LCD1602_vWrite(uint8_t u8Data,LCD1602_nRS enMode)
{
    LCD1602_vSetWriteMode();
    GPIO_AHB_BLOCK[LCD1602_PORT_RS]->GPIODATA_MASK[LCD1602_RS]=((uint32_t)enMode)<<LCD1602_RS_POS;

    LCD1602_vPrepareWriteEnable();

    if(u8Data&GPIO_enPIN7)
        GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7]=LCD1602_D7;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7]=0;

    if(u8Data&GPIO_enPIN6)
        GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6]=LCD1602_D6;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6]=0;

    if(u8Data&GPIO_enPIN5)
        GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5]=LCD1602_D5;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5]=0;

    if(u8Data&GPIO_enPIN4)
        GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4]=LCD1602_D4;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4]=0;

    LCD1602_vPulseWriteEnable();

    LCD1602_vPrepareWriteEnable();

    if(u8Data&GPIO_enPIN3)
        GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7]=LCD1602_D7;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7]=0;

    if(u8Data&GPIO_enPIN2)
        GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6]=LCD1602_D6;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6]=0;

    if(u8Data&GPIO_enPIN1)
        GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5]=LCD1602_D5;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5]=0;

    if(u8Data&GPIO_enPIN0)
        GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4]=LCD1602_D4;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4]=0;

    LCD1602_vPulseWriteEnable();

    LCD1602_vDelay(40);
}


void LCD1602_vWrite8Bits(uint8_t u8Data,LCD1602_nRS enMode)
{
    LCD1602_vSetWriteMode();
    GPIO_AHB_BLOCK[LCD1602_PORT_RS]->GPIODATA_MASK[LCD1602_RS]=((uint32_t)enMode)<<LCD1602_RS_POS;

    LCD1602_vPrepareWriteEnable();

    if(u8Data&GPIO_enPIN7)
        GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7]=LCD1602_D7;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7]=0;

    if(u8Data&GPIO_enPIN6)
        GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6]=LCD1602_D6;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6]=0;

    if(u8Data&GPIO_enPIN5)
        GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5]=LCD1602_D5;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5]=0;

    if(u8Data&GPIO_enPIN4)
        GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4]=LCD1602_D4;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4]=0;

    LCD1602_vPulseWriteEnable();

    LCD1602_vPrepareWriteEnable();

    if(u8Data&GPIO_enPIN3)
        GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7]=LCD1602_D7;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7]=0;

    if(u8Data&GPIO_enPIN2)
        GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6]=LCD1602_D6;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6]=0;

    if(u8Data&GPIO_enPIN1)
        GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5]=LCD1602_D5;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5]=0;

    if(u8Data&GPIO_enPIN0)
        GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4]=LCD1602_D4;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4]=0;

    LCD1602_vPulseWriteEnable();

    LCD1602_vDelay(40);
}

uint8_t LCD1602_u8Read(LCD1602_nRS enMode)
{
    uint32_t u32Reg=0;
    uint8_t  u8DatoRead=0;

    GPIO__enSetConfig(LCD1602_PORT_D4,LCD1602_D4,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLDOWN);
    GPIO__enSetConfig(LCD1602_PORT_D5,LCD1602_D5,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLDOWN);
    GPIO__enSetConfig(LCD1602_PORT_D6,LCD1602_D6,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLDOWN);
    GPIO__enSetConfig(LCD1602_PORT_D7,LCD1602_D7,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLDOWN);

    LCD1602_vSetReadMode();
    GPIO_AHB_BLOCK[LCD1602_PORT_RS]->GPIODATA_MASK[LCD1602_RS]=((uint32_t)enMode)<<LCD1602_RS_POS;

    LCD1602_vPrepareReadEnable();

    u32Reg= GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7];
    if(0 != u32Reg)
        u8DatoRead|=GPIO_enPIN7;

    u32Reg= GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6];
    if(0 != u32Reg)
        u8DatoRead|=GPIO_enPIN6;

    u32Reg= GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5];
    if(0 != u32Reg)
        u8DatoRead|=GPIO_enPIN5;

    u32Reg= GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4];
    if(0 != u32Reg)
        u8DatoRead|=GPIO_enPIN4;

    LCD1602_vPulseReadEnable();

    LCD1602_vPrepareReadEnable();

    u32Reg= GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7];
    if(0 != u32Reg)
        u8DatoRead|=GPIO_enPIN3;

    u32Reg= GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6];
    if(0 != u32Reg)
        u8DatoRead|=GPIO_enPIN2;

    u32Reg= GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5];
    if(0 != u32Reg)
        u8DatoRead|=GPIO_enPIN1;

    u32Reg= GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4];
    if(0 != u32Reg)
        u8DatoRead|=GPIO_enPIN0;

    LCD1602_vPulseReadEnable();

    LCD1602_vSetWriteMode();
    GPIO__enSetConfig(LCD1602_PORT_D4,LCD1602_D4,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetConfig(LCD1602_PORT_D5,LCD1602_D5,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetConfig(LCD1602_PORT_D6,LCD1602_D6,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetConfig(LCD1602_PORT_D7,LCD1602_D7,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    LCD1602_vDelay(40);
    return u8DatoRead;
}


void LCD1602_vPrepareWriteEnable(void)
{
    GPIO_AHB_BLOCK[LCD1602_PORT_E]->GPIODATA_MASK[LCD1602_E]=0;
}

/* Pulse of 2 us */
void LCD1602_vPulseWriteEnable(void)
{
    GPIO_AHB_BLOCK[LCD1602_PORT_E]->GPIODATA_MASK[LCD1602_E]=LCD1602_E;
    LCD1602_vDelay(0.6);
    GPIO_AHB_BLOCK[LCD1602_PORT_E]->GPIODATA_MASK[LCD1602_E]=0;//manda a 0 logico E, completando el pulso
    LCD1602_vDelay(0.6);
}




void LCD1602_vPrepareReadEnable(void)
{
    GPIO_AHB_BLOCK[LCD1602_PORT_E]->GPIODATA_MASK[LCD1602_E]=0;
    LCD1602_vDelay(0.1);
    GPIO_AHB_BLOCK[LCD1602_PORT_E]->GPIODATA_MASK[LCD1602_E]=LCD1602_E;
    LCD1602_vDelay(0.3);
}
/* Pulse of 2 us */
void LCD1602_vPulseReadEnable(void)
{
    LCD1602_vDelay(0.3);
    GPIO_AHB_BLOCK[LCD1602_PORT_E]->GPIODATA_MASK[LCD1602_E]=0;//manda a 0 logico E, completando el pulso
    LCD1602_vDelay(0.6);
}



