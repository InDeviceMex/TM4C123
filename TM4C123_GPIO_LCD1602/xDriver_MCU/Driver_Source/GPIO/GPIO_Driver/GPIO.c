/*
 * GPIO.c
 *
 *  Created on: 05/04/2020
 *      Author: vyldram
 */

#include <xDriver_MCU/Driver_Header/GPIO/GPIO.h>




SCB_nVECISR SCB_VECTOR_GPIO[6]={SCB_enVECISR_GPIOA,SCB_enVECISR_GPIOB,SCB_enVECISR_GPIOC,SCB_enVECISR_GPIOD,
                           SCB_enVECISR_GPIOE,SCB_enVECISR_GPIOF};

NVIC_nSTIR NVIC_VECTOR_GPIO[6]={NVIC_enSTIR_GPIOA,NVIC_enSTIR_GPIOB,NVIC_enSTIR_GPIOC,NVIC_enSTIR_GPIOD,
                           NVIC_enSTIR_GPIOE,NVIC_enSTIR_GPIOF};


void GPIO__vInit(void)
{
    GPIO__vRegisterMODULEISR(&GPIOA__vISR,GPIO_enPORTA);
    GPIO__vRegisterMODULEISR(&GPIOB__vISR,GPIO_enPORTB);
    GPIO__vRegisterMODULEISR(&GPIOC__vISR,GPIO_enPORTC);
    GPIO__vRegisterMODULEISR(&GPIOD__vISR,GPIO_enPORTD);
    GPIO__vRegisterMODULEISR(&GPIOE__vISR,GPIO_enPORTE);
    GPIO__vRegisterMODULEISR(&GPIOF__vISR,GPIO_enPORTF);
}







void GPIO__vRegisterISR(void (*Isr) (void),GPIO_nPORT enPort,GPIO_nPIN enPin)
{
    uint32_t u32Count=0;
    uint32_t u32Pin =(uint32_t) enPin;
    uint32_t u32Isr=0;
    if((uint32_t)Isr !=0u)
    {
        if(enPort>GPIO_enMAX)
        {
            enPort=GPIO_enMAX;
        }

        enPin&=GPIO_enALL;
        while((u32Pin&0x1u) ==0u)
        {
            u32Count++;
            u32Pin>>=1;
        }
        u32Isr=((uint32_t)Isr|(uint32_t)1u);
        GPIO[(uint32_t)enPort][u32Count]=(void (*) (void))u32Isr;
    }
}

void GPIO__vRegisterMODULEISR(void (*Isr) (void),GPIO_nPORT enPort)
{
    SCB_nVECISR enVector=SCB_enVECISR_GPIOA;
    uint32_t u32Isr=0;
    if(0u != (uint32_t)Isr)
    {
        if(enPort>GPIO_enMAX)
        {
            enPort=GPIO_enMAX;
        }
        enVector=SCB_VECTOR_GPIO[enPort];
        u32Isr=((uint32_t)Isr|(uint32_t)1u);
        GPIO_ISR[enPort]=(void (*) (void))u32Isr;
        SCB__vRegisterISR(GPIO_ISR[enPort],enVector);
    }
}




void GPIO__vEnInterruptMODULE(GPIO_nPORT enPort,GPIO_nPRIORITY enPriority)
{
    NVIC_nSTIR enVector=NVIC_enSTIR_GPIOA;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }

    enVector=NVIC_VECTOR_GPIO[enPort];

    enPriority&=0x7u;
    NVIC__enSetEnableIRQ((NVIC_nSTIR)enVector,(NVIC_nPRIORITY)enPriority);
}

void GPIO__vDisInterruptMODULE(GPIO_nPORT enPort)
{
    NVIC_nSTIR enVector=NVIC_enSTIR_GPIOA;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }

    enVector=NVIC_VECTOR_GPIO[enPort];
    NVIC__enClearEnableIRQ((NVIC_nSTIR)enVector);
}











inline void GPIO__vSetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    GPIO__vSetReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
    gpio->GPIODATA_MASK[enPin]=u32Data;
}


inline uint32_t GPIO__u32GetData(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nREADY enReady= GPIO_enNOREADY;
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32Reg=0xFFFFFFFF;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    enReady = GPIO__enIsReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    if(GPIO_enREADY == enReady)
    {
        gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
        u32Reg=gpio->GPIODATA_MASK[enPin];
    }
    return u32Reg;
}

inline void GPIO_AHB__vSetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    GPIO__vSetReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    if(GPIO_enAHB==enBus)
    {
        GPIO_AHB->AHB[(uint32_t)enPort].GPIODATA_MASK[enPin]=u32Data;
    }
}
inline uint32_t GPIO_AHB__u32GetData(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nREADY enReady= GPIO_enNOREADY;
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32Reg=0xFFFFFFFF;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    enReady = GPIO__enIsReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    if(GPIO_enREADY == enReady)
    {
        if(GPIO_enAHB ==enBus)
        {
            u32Reg=GPIO_AHB->AHB[(uint32_t)enPort].GPIODATA_MASK[enPin];
        }
    }
    return u32Reg;
}

inline void GPIO_AHB__vSetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data)
{
        GPIO_AHB->AHB[(uint32_t)enPort].GPIODATA_MASK[enPin]=u32Data;
}
inline uint32_t GPIO_AHB__u32GetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    uint32_t u32Reg=0;
    u32Reg=GPIO_AHB->AHB[(uint32_t)enPort].GPIODATA_MASK[enPin];
    return u32Reg;
}


inline void GPIO_APB__vSetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    GPIO__vSetReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    if(GPIO_enAPB==enBus)
    {
        gpio=GPIO_APB_BLOCK[(uint32_t)enPort];
        gpio->GPIODATA_MASK[enPin]=u32Data;
    }
}

inline uint32_t GPIO_APB__u32GetData(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nREADY enReady= GPIO_enNOREADY;
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32Reg=0xFFFFFFFF;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    enReady = GPIO__enIsReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    if(GPIO_enREADY == enReady)
    {
        if(GPIO_enAPB ==enBus)
        {
            gpio= GPIO_APB_BLOCK[enPort];
            u32Reg=gpio->GPIODATA_MASK[enPin];
        }
    }
    return u32Reg;
}

inline void GPIO_APB__vSetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data)
{
    GPIO_APB_BLOCK[(uint32_t)enPort]->GPIODATA_MASK[enPin]=u32Data;
}
inline uint32_t GPIO_APB__u32GetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    uint32_t u32Reg=0;
    u32Reg=GPIO_APB_BLOCK[(uint32_t)enPort]->GPIODATA_MASK[enPin];
    return u32Reg;
}















void GPIO__vEnInterrupt(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32Reg=0;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    GPIO__vSetReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
    u32Reg=gpio->GPIOIM;
    u32Reg|=enPin;
    gpio->GPIOIM=u32Reg;

}

void GPIO__vDisInterrupt(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32Reg=0;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    GPIO__vSetReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
    u32Reg=gpio->GPIOIM;
    u32Reg&=~(uint32_t)enPin;
    gpio->GPIOIM=u32Reg;
}


void GPIO__vClearInterrupt(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    GPIO__vSetReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
    gpio->GPIOICR=enPin;

}

GPIO_nINT_STATUS GPIO__enStatusInterrupt(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    GPIO_nINT_STATUS enStatus= GPIO_enINT_STATUS_UNDEF;
    GPIO_nREADY enReady= GPIO_enNOREADY;
    uint32_t u32Reg=0;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    enReady = GPIO__enIsReady(enPort);
    enBus=GPIO__enGetBus(enPort);

    if((GPIO_enREADY == enReady) )
    {
        gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
        u32Reg=gpio->GPIORIS;
        u32Reg&=enPin;
        if(u32Reg!=0u)
        {
            enStatus= GPIO_enINT_OCCUR;
        }
        else
        {
            enStatus= GPIO_enINT_NOOCCUR;
        }
    }
    return enStatus;
}






void GPIO__vEnInterruptConfig(GPIO_nPORT enPort, GPIO_nPIN enPin,GPIO_nINT_CONFIG enIntConfig)
{
    uint32_t u32Sense=((uint32_t)enIntConfig>>8u)&1u;
    uint32_t u32Event=((uint32_t)enIntConfig)&3u;

    if( (uint32_t)GPIO_enSENSE_EDGE == u32Sense)
    {
        GPIO__vSetIntEdge(enPort,enPin,(GPIO_nEDGE)u32Event);
    }
    else
    {
        GPIO__vSetIntLevel(enPort,enPin,(GPIO_nLEVEL)u32Event);
    }
    GPIO__vEnInterrupt(enPort,enPin);
}


























void GPIO__vSetDigitalFunction(GPIO_nDIGITAL_FUNCTION enFunction)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32Port =(enFunction>>16u)&0xFFu;
    uint32_t u32Bit =(enFunction>>8u)&0x1Fu;
    uint32_t u32Pin =(u32Bit>>2u)&0xFFu;
    uint32_t u32Value =(enFunction)&0xFu;
    uint32_t u32Reg=0;
    GPIO_TypeDef* gpio=0;
    u32Value<<=u32Bit;
    u32Pin=((uint32_t)1u<<u32Pin);
    if(u32Port>(uint32_t)GPIO_enMAX)
    {
        u32Port=(uint32_t)GPIO_enMAX;
    }
    u32Pin&=GPIO_enALL;

    GPIO__vSetReady((GPIO_nPORT)u32Port);
    enBus=GPIO__enGetBus((GPIO_nPORT)u32Port);
    gpio=GPIO_BLOCK[enBus][(uint32_t)u32Port];
    GPIO__vEnDigital((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    GPIO__vDisAnalog((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    if(0u!=u32Value)
    {
        GPIO__vEnAltFunction((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    }
    else
    {
        GPIO__vDisAltFunction((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    }
    u32Reg=gpio->GPIOPCTL;
    u32Reg&=~((uint32_t)0xFu<<u32Bit);
    u32Reg|=u32Value;
    gpio->GPIOPCTL=u32Reg;
}

void GPIO__vCreateConfigStructPointer(GPIO_nCONFIG enConfig,GPIO_CONFIG_Typedef* psConfig)
{
    if(psConfig!=0)
    {
        psConfig->enResistorMode=(GPIO_nRESMODE)(((uint32_t)enConfig>>0u)&3u);
        psConfig->enOutputMode=(GPIO_nOUTMODE)(((uint32_t)enConfig>>4u)&1u);
        psConfig->enDirection=(GPIO_nDIR)(((uint32_t)enConfig>>8u)&1u);
        psConfig->enDrive=(GPIO_nDRIVE)(((uint32_t)enConfig>>16u)&0x0103u);
    }
}

GPIO_CONFIG_Typedef* GPIO__psCreateConfigStruct(GPIO_nCONFIG enConfig)
{
    GPIO_CONFIG_Typedef* psConfig=0;
    #if defined ( __TI_ARM__ )
    psConfig = (GPIO_CONFIG_Typedef*) memalign((size_t)4,(size_t)(sizeof(GPIO_CONFIG_Typedef)));
    #elif defined ( __GNUC__ )
    psConfig = (GPIO_CONFIG_Typedef*) malloc((size_t)sizeof(GPIO_CONFIG_Typedef));
    #endif

    if(psConfig!=0)
    {
        psConfig->enResistorMode=(GPIO_nRESMODE)(((uint32_t)enConfig>>0u)&3u);
        psConfig->enOutputMode=(GPIO_nOUTMODE)(((uint32_t)enConfig>>4u)&1u);
        psConfig->enDirection=(GPIO_nDIR)(((uint32_t)enConfig>>8u)&1u);
        psConfig->enDrive=(GPIO_nDRIVE)(((uint32_t)enConfig>>16u)&0x0103u);
    }
    return psConfig;
}

void GPIO__vDeleteConfigStruct(GPIO_CONFIG_Typedef* psConfig)
{
    free(psConfig);
}

GPIO_nSTATUS GPIO__enSetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin,GPIO_nCONFIG enConfig)
{

    GPIO_nSTATUS enReturn=GPIO_enERROR;
    GPIO_CONFIG_Typedef* psConfig=GPIO__psCreateConfigStruct(enConfig);

    if(psConfig!=0)
    {
        GPIO__vSetResistorMode(enPort,enPin,psConfig->enResistorMode);
        GPIO__vSetOutputMode(enPort,enPin,psConfig->enOutputMode);
        GPIO__vSetDirection(enPort,enPin,psConfig->enDirection);
        GPIO__vSetDrive(enPort,enPin,psConfig->enDrive);
        GPIO__vDeleteConfigStruct(psConfig);
        enReturn = GPIO_enOK;
    }
    return enReturn;

}

GPIO_nSTATUS GPIO__enSetConfigStruct(GPIO_nPORT enPort, GPIO_nPIN enPin,const GPIO_CONFIG_Typedef* psConfig)
{

    GPIO_nSTATUS enReturn=GPIO_enERROR;
    if(psConfig!=0)
    {
        GPIO__vSetResistorMode(enPort,enPin,psConfig->enResistorMode);
        GPIO__vSetOutputMode(enPort,enPin,psConfig->enOutputMode);
        GPIO__vSetDirection(enPort,enPin,psConfig->enDirection);
        GPIO__vSetDrive(enPort,enPin,psConfig->enDrive);
        enReturn = GPIO_enOK;
    }
    return enReturn;

}

GPIO_nCONFIG GPIO__enGetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nCONFIG enConfig=GPIO_enCONFIG_UNDEF;

    GPIO_nRESMODE   enResistorMode= GPIO_enRESMODE_UNDEF;
    GPIO_nOUTMODE   enOutputMode= GPIO_enOUTMODE_UNDEF;
    GPIO_nDIR       enDirection = GPIO_enDIR_UNDEF;
    GPIO_nDRIVE     enDrive = GPIO_enDRIVE_UNDEF;

    uint32_t u32Reg=0;

    enResistorMode=GPIO__enGetResistorMode(enPort, enPin);
    enOutputMode=GPIO__enGetOutputMode(enPort, enPin);
    enDirection=GPIO__enGetDirection(enPort, enPin);
    enDrive=GPIO__enGetDrive(enPort, enPin);

    u32Reg = ((uint32_t)enResistorMode <<0);
    u32Reg|= ((uint32_t)enOutputMode   <<4);
    u32Reg|= ((uint32_t)enDirection  <<8);
    u32Reg|= ((uint32_t)enDrive   <<16);

    enConfig = (GPIO_nCONFIG)u32Reg;
    return enConfig;
}


void GPIO__vGetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin,GPIO_CONFIG_Typedef* psConfig)
{
    psConfig->enResistorMode=GPIO__enGetResistorMode(enPort, enPin);
    psConfig->enOutputMode=GPIO__enGetOutputMode(enPort, enPin);
    psConfig->enDirection=GPIO__enGetDirection(enPort, enPin);
    psConfig->enDrive=GPIO__enGetDrive(enPort, enPin);
}


GPIO_CONFIG_Typedef* GPIO__psGetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_CONFIG_Typedef* psConfig=0;
    #if defined ( __TI_ARM__ )
    psConfig = (GPIO_CONFIG_Typedef*) memalign((size_t)4,(size_t)(sizeof(GPIO_CONFIG_Typedef)));
    #elif defined ( __GNUC__ )
    psConfig = (GPIO_CONFIG_Typedef*) malloc((size_t)sizeof(GPIO_CONFIG_Typedef));
    #endif

    psConfig->enResistorMode=GPIO__enGetResistorMode(enPort, enPin);
    psConfig->enOutputMode=GPIO__enGetOutputMode(enPort, enPin);
    psConfig->enDirection=GPIO__enGetDirection(enPort, enPin);
    psConfig->enDrive=GPIO__enGetDrive(enPort, enPin);

    return psConfig;
}

GPIO_nSTATUS GPIO__enSetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction,GPIO_nCONFIG enConfig)
{

    GPIO_nSTATUS enReturn=GPIO_enERROR;

    uint32_t u32Port =(enFunction>>16u)&0xFFu;
    uint32_t u32Bit =(enFunction>>8u)&0x1Fu;
    uint32_t u32Pin =(u32Bit>>2u)&0xFFu;
    u32Pin=((uint32_t)1u<<u32Pin);
    GPIO_nPORT enPort=(GPIO_nPORT)u32Port;
    GPIO_nPIN enPin =(GPIO_nPIN)u32Pin;
    GPIO_CONFIG_Typedef* psConfig=GPIO__psCreateConfigStruct(enConfig);

    if(psConfig!=0)
    {
        GPIO__vSetDigitalFunction(enFunction);
        GPIO__vSetResistorMode(enPort,enPin,psConfig->enResistorMode);
        GPIO__vSetOutputMode(enPort,enPin,psConfig->enOutputMode);
        GPIO__vSetDirection(enPort,enPin,psConfig->enDirection);
        GPIO__vSetDrive(enPort,enPin,psConfig->enDrive);
        GPIO__vDeleteConfigStruct(psConfig);
        enReturn = GPIO_enOK;
    }
    return enReturn;

}

GPIO_nSTATUS GPIO__enSetDigitalConfigStruct(GPIO_nDIGITAL_FUNCTION enFunction,const GPIO_CONFIG_Typedef* psConfig)
{

    GPIO_nSTATUS enReturn=GPIO_enERROR;

    uint32_t u32Port =(enFunction>>16u)&0xFFu;
    uint32_t u32Bit =(enFunction>>8u)&0x1Fu;
    uint32_t u32Pin =(u32Bit>>2u)&0xFFu;
    u32Pin=((uint32_t)1u<<u32Pin);
    GPIO_nPORT enPort=(GPIO_nPORT)u32Port;
    GPIO_nPIN enPin =(GPIO_nPIN)u32Pin;
    if(psConfig!=0)
    {
        GPIO__vSetDigitalFunction(enFunction);
        GPIO__vSetResistorMode(enPort,enPin,psConfig->enResistorMode);
        GPIO__vSetOutputMode(enPort,enPin,psConfig->enOutputMode);
        GPIO__vSetDirection(enPort,enPin,psConfig->enDirection);
        GPIO__vSetDrive(enPort,enPin,psConfig->enDrive);
        enReturn = GPIO_enOK;
    }
    return enReturn;

}
GPIO_nCONFIG GPIO__enGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction)
{
    GPIO_nCONFIG enConfig=GPIO_enCONFIG_UNDEF;

    uint32_t u32Port =(enFunction>>16u)&0xFFu;
    uint32_t u32Bit =(enFunction>>8u)&0x1Fu;
    uint32_t u32Pin =(u32Bit>>2u)&0xFFu;
    u32Pin=((uint32_t)1u<<u32Pin);
    GPIO_nPORT enPort=(GPIO_nPORT)u32Port;
    GPIO_nPIN enPin =(GPIO_nPIN)u32Pin;

    GPIO_nRESMODE   enResistorMode= GPIO_enRESMODE_UNDEF;
    GPIO_nOUTMODE   enOutputMode= GPIO_enOUTMODE_UNDEF;
    GPIO_nDIR       enDirection = GPIO_enDIR_UNDEF;
    GPIO_nDRIVE     enDrive = GPIO_enDRIVE_UNDEF;

    uint32_t u32Reg=0;

    enResistorMode=GPIO__enGetResistorMode(enPort, enPin);
    enOutputMode=GPIO__enGetOutputMode(enPort, enPin);
    enDirection=GPIO__enGetDirection(enPort, enPin);
    enDrive=GPIO__enGetDrive(enPort, enPin);

    u32Reg = ((uint32_t)enResistorMode <<0);
    u32Reg|= ((uint32_t)enOutputMode   <<4);
    u32Reg|= ((uint32_t)enDirection  <<8);
    u32Reg|= ((uint32_t)enDrive   <<16);

    enConfig = (GPIO_nCONFIG)u32Reg;
    return enConfig;
}


void GPIO__vGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction, GPIO_CONFIG_Typedef* psConfig)
{

    uint32_t u32Port =(enFunction>>16u)&0xFFu;
    uint32_t u32Bit =(enFunction>>8u)&0x1Fu;
    uint32_t u32Pin =(u32Bit>>2u)&0xFFu;
    u32Pin=((uint32_t)1u<<u32Pin);
    GPIO_nPORT enPort=(GPIO_nPORT)u32Port;
    GPIO_nPIN enPin =(GPIO_nPIN)u32Pin;

    psConfig->enResistorMode=GPIO__enGetResistorMode(enPort, enPin);
    psConfig->enOutputMode=GPIO__enGetOutputMode(enPort, enPin);
    psConfig->enDirection=GPIO__enGetDirection(enPort, enPin);
    psConfig->enDrive=GPIO__enGetDrive(enPort, enPin);
}


GPIO_CONFIG_Typedef* GPIO__psGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction)
{
    GPIO_CONFIG_Typedef* psConfig=0;

    uint32_t u32Port =(enFunction>>16u)&0xFFu;
    uint32_t u32Bit =(enFunction>>8u)&0x1Fu;
    uint32_t u32Pin =(u32Bit>>2u)&0xFFu;
    u32Pin=((uint32_t)1u<<u32Pin);
    GPIO_nPORT enPort=(GPIO_nPORT)u32Port;
    GPIO_nPIN enPin =(GPIO_nPIN)u32Pin;

    #if defined ( __TI_ARM__ )
    psConfig = (GPIO_CONFIG_Typedef*) memalign((size_t)4,(size_t)(sizeof(GPIO_CONFIG_Typedef)));
    #elif defined ( __GNUC__ )
    psConfig = (GPIO_CONFIG_Typedef*) malloc((size_t)sizeof(GPIO_CONFIG_Typedef));
    #endif

    psConfig->enResistorMode=GPIO__enGetResistorMode(enPort, enPin);
    psConfig->enOutputMode=GPIO__enGetOutputMode(enPort, enPin);
    psConfig->enDirection=GPIO__enGetDirection(enPort, enPin);
    psConfig->enDrive=GPIO__enGetDrive(enPort, enPin);

    return psConfig;
}

void GPIO__vSetAnalogFunction(GPIO_nANALOG_FUNCTION enFunction)
{
    uint32_t u32Port =(enFunction>>8u)&0xFFu;
    uint32_t u32Pin =(enFunction);
    if(u32Port>(uint32_t)GPIO_enMAX)
    {
        u32Port=(uint32_t)GPIO_enMAX;
    }
    u32Pin&=GPIO_enALL;

    GPIO__vSetReady((GPIO_nPORT)u32Port);
    GPIO__enSetConfig((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
    GPIO__vDisADCTrigger((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    GPIO__vDisAltFunction((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    GPIO__vDisDigital((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    GPIO__vEnAnalog((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
}



