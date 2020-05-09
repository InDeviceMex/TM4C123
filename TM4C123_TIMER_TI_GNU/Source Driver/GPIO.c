/*
 * GPIO.c
 *
 *  Created on: 05/04/2020
 *      Author: vyldram
 */

#include "GPIO.h"
void GPIO_vDUMMY(void);
void GPIOA_vISR(void);
void GPIOB_vISR(void);
void GPIOC_vISR(void);
void GPIOD_vISR(void);
void GPIOE_vISR(void);
void GPIOF_vISR(void);

void (*GPIO_ISR[6]) (void)={GPIOA_vISR,GPIOB_vISR,GPIOC_vISR,GPIOD_vISR,GPIOE_vISR,GPIOF_vISR};
void (*GPIO[6][8]) (void)={{GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY},
                           {GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY},
                           {GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY},
                           {GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY},
                           {GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY},
                           {GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY,GPIO_vDUMMY},};

GPIO_TypeDef* GPIO_APB_BLOCK[6]={GPIOA_APB,GPIOB_APB,GPIOC_APB,GPIOD_APB,GPIOE_APB,GPIOF_APB};
GPIO_AUX_TypeDef* GPIO_APB_BLOCK_AUX[6]={GPIOA_APB_AUX,GPIOB_APB_AUX,GPIOC_APB_AUX,GPIOD_APB_AUX,GPIOE_APB_AUX,GPIOF_APB_AUX};

GPIO_TypeDef* GPIO_BLOCK[2][6]={{GPIOA_APB,GPIOB_APB,GPIOC_APB,GPIOD_APB,GPIOE_APB,GPIOF_APB},
                                {GPIOA_AHB,GPIOB_AHB,GPIOC_AHB,GPIOD_AHB,GPIOE_AHB,GPIOF_AHB}};

GPIO_AUX_TypeDef* GPIO_BLOCK_AUX[2][6]={{GPIOA_APB_AUX,GPIOB_APB_AUX,GPIOC_APB_AUX,GPIOD_APB_AUX,GPIOE_APB_AUX,GPIOF_APB_AUX},
                                {GPIOA_AHB_AUX,GPIOB_AHB_AUX,GPIOC_AHB_AUX,GPIOD_AHB_AUX,GPIOE_AHB_AUX,GPIOF_AHB_AUX}};


SCB_nVECISR SCB_VECTOR_GPIO[6]={SCB_enVECISR_GPIOA,SCB_enVECISR_GPIOB,SCB_enVECISR_GPIOC,SCB_enVECISR_GPIOD,
                           SCB_enVECISR_GPIOE,SCB_enVECISR_GPIOF};

NVIC_nSTIR NVIC_VECTOR_GPIO[6]={NVIC_enSTIR_GPIOA,NVIC_enSTIR_GPIOB,NVIC_enSTIR_GPIOC,NVIC_enSTIR_GPIOD,
                           NVIC_enSTIR_GPIOE,NVIC_enSTIR_GPIOF};

void GPIO_vDUMMY(void)
{
    while(1);
}

void GPIO__vInit(void)
{
    GPIO__vRegisterMODULEISR(GPIOA_vISR,GPIO_enPORTA);
    GPIO__vRegisterMODULEISR(GPIOB_vISR,GPIO_enPORTB);
    GPIO__vRegisterMODULEISR(GPIOC_vISR,GPIO_enPORTC);
    GPIO__vRegisterMODULEISR(GPIOD_vISR,GPIO_enPORTD);
    GPIO__vRegisterMODULEISR(GPIOE_vISR,GPIO_enPORTE);
    GPIO__vRegisterMODULEISR(GPIOF_vISR,GPIO_enPORTF);
}


void GPIO__vRegisterISR(void (*Isr) (void),GPIO_nPORT enPort,GPIO_nPIN enPin)
{
    uint32_t u32Count=0;
    uint32_t u32Pin =(uint32_t) enPin;
    if((uint32_t)Isr !=0)
    {
        if(enPort>GPIO_enMAX)
        {
            enPort=GPIO_enMAX;
        }

        enPin&=GPIO_enALL;
        while((u32Pin&0x1) ==0)
        {
            u32Count++;
            u32Pin>>=1;
        }
        GPIO[enPort][u32Count]= (void (*) (void))((uint32_t)Isr|1);
    }
}

void GPIO__vRegisterMODULEISR(void (*Isr) (void),GPIO_nPORT enPort)
{
    SCB_nVECISR enVector=SCB_enVECISR_GPIOA;
    if(0 != (uint32_t)Isr)
    {
        if(enPort>GPIO_enMAX)
        {
            enPort=GPIO_enMAX;
        }
        enVector=SCB_VECTOR_GPIO[enPort];

        GPIO_ISR[enPort]=(void (*) (void))((uint32_t)Isr|1);
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

    enPriority&=0x7;
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




void GPIO__vSetReady(GPIO_nPORT enPort)
{
    SYSCTL_nPERIPHERAL_READY enReady=SYSCTL_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enGPIOA;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPeripheral|=enPort;
    enReady=SYSCTL__enIsPeripheralReady(enPeripheral);
    if(SYSCTL_enNOREADY == enReady)
    {
        SYSCTL__vResetPeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
        SYSCTL__vDisRunModePeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
        SYSCTL__vEnRunModePeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
    }
}
void GPIO__vClearReady(GPIO_nPORT enPort)
{
    SYSCTL_nPERIPHERAL_READY enReady=SYSCTL_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enGPIOA;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPeripheral|=enPort;
    enReady=SYSCTL__enIsPeripheralReady(enPeripheral);
    if(SYSCTL_enREADY == enReady)
    {
        SYSCTL__vResetPeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
        SYSCTL__vDisRunModePeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
    }
}
GPIO_nREADY GPIO__enIsReady(GPIO_nPORT enPort)
{
    GPIO_nREADY enReady=GPIO_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enGPIOA;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPeripheral|=enPort;
    enReady=(GPIO_nREADY)SYSCTL__enIsPeripheralReady(enPeripheral);
    return enReady;
}
GPIO_nBUS GPIO__enGetBus(GPIO_nPORT enPort)
{
    GPIO_nBUS enReturn= GPIO_enAPB;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    SYSCTL_nGPIOBUS enGPIO =(SYSCTL_nGPIOBUS)(1<<enPort);
    enReturn = (GPIO_nBUS)SYSCTL__vGetGPIOBus(enGPIO);
    return enReturn;
}

void GPIO__vSetDirection(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nDIR enDir)
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
    u32Reg=gpio->GPIODIR;
    if(GPIO_enOUTPUT == enDir)
    {
        u32Reg|=enPin;
    }
    else
    {
        u32Reg&=~enPin;
    }
    gpio->GPIODIR=u32Reg;
}


GPIO_nDIR GPIO__vGetDirection(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nDIR enDir=GPIO_enUNDEF;
    GPIO_nREADY enReady= GPIO_enNOREADY;
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32Reg=0;
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
        u32Reg=gpio->GPIODIR;

        u32Reg&=enPin;
        if((uint32_t)GPIO_enINPUT == u32Reg )
        {
            enDir= GPIO_enINPUT;
        }
        else
        {
            enDir= GPIO_enOUTPUT;
        }
    }
    return enDir;
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

void GPIO__vSetIntSense(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nSENSE enSense)
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
    u32Reg=gpio->GPIOIS;
    if(GPIO_enSENSE_LEVEL == enSense)
    {
        u32Reg|=enPin;
    }
    else
    {
        u32Reg&=~enPin;
    }
    gpio->GPIOIS=u32Reg;

}


GPIO_nSENSE GPIO__enGetIntSense(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nSENSE enSense=GPIO_enSENSE_UNDEF;
    GPIO_nREADY enReady= GPIO_enNOREADY;
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32Reg=0;
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
        u32Reg=gpio->GPIOIS;
        u32Reg&=enPin;
        if((uint32_t)GPIO_enSENSE_EDGE == u32Reg )
        {
            enSense= GPIO_enSENSE_EDGE;
        }
        else
        {
            enSense= GPIO_enSENSE_LEVEL;
        }
    }
    return enSense;
}

void GPIO__vSetIntEdge(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nEDGE enEdge)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32RegIEV=0;
    uint32_t u32RegIBE=0;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    GPIO__vSetReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    GPIO__vSetIntSense(enPort,enPin, GPIO_enSENSE_EDGE);

    gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
    u32RegIEV=gpio->GPIOIEV;
    if(GPIO_enEDGE_RISING == enEdge)
    {
        u32RegIEV|=enPin;
    }
    else
    {
        u32RegIEV&=~enPin;
    }
    u32RegIBE=gpio->GPIOIBE;
    gpio->GPIOIEV=u32RegIEV;
    if(GPIO_enEDGE_BOTH == enEdge)
    {
        u32RegIBE|=enPin;
    }
    else
    {
        u32RegIBE&=~enPin;
    }
    gpio->GPIOIBE=u32RegIBE;

}


GPIO_nEDGE GPIO__enGetIntEdge(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nEDGE enEdge=GPIO_enEDGE_UNDEF;
    GPIO_nREADY enReady= GPIO_enNOREADY;
    GPIO_nBUS enBus=GPIO_enAPB;
    GPIO_nSENSE enSense=GPIO_enSENSE_UNDEF;
    uint32_t u32RegIEV=0;
    uint32_t u32RegIBE=0;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    enReady = GPIO__enIsReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    enSense= GPIO__enGetIntSense(enPort,enPin);
    if((GPIO_enREADY == enReady) && (GPIO_enSENSE_EDGE ==enSense))
    {
        gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
        u32RegIEV=gpio->GPIOIEV;
        u32RegIBE=gpio->GPIOIBE;

        u32RegIEV&=enPin;
        u32RegIBE&=enPin;
        if(0 == u32RegIBE )
        {
            if((uint32_t)GPIO_enEDGE_FALLING == u32RegIEV )
            {
                enEdge= GPIO_enEDGE_FALLING;
            }
            else
            {
                enEdge= GPIO_enEDGE_RISING;
            }
        }
        else
        {
            enEdge= GPIO_enEDGE_BOTH;
        }
    }
    return enEdge;
}

void GPIO__vSetIntLevel(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nLEVEL enLevel)
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
    GPIO__vSetIntSense(enPort,enPin, GPIO_enSENSE_LEVEL);
    gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
    u32Reg=gpio->GPIOIEV;
    if(GPIO_enLEVEL_HIGH == enLevel)
    {
        u32Reg|=enPin;
    }
    else
    {
        u32Reg&=~enPin;
    }
    gpio->GPIOIEV=u32Reg;
}


GPIO_nLEVEL GPIO__enGetIntLevel(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nLEVEL enLevel=GPIO_enLEVEL_UNDEF;
    GPIO_nREADY enReady= GPIO_enNOREADY;
    GPIO_nBUS enBus=GPIO_enAPB;
    GPIO_nSENSE enSense=GPIO_enSENSE_UNDEF;
    uint32_t u32Reg=0;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    enReady = GPIO__enIsReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    enSense= GPIO__enGetIntSense(enPort,enPin);
    if((GPIO_enREADY == enReady) && (GPIO_enSENSE_LEVEL ==enSense))
    {
        gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
        u32Reg=gpio->GPIOIEV;
        u32Reg&=enPin;
        if((uint32_t)GPIO_enLEVEL_LOW == u32Reg )
        {
            enLevel= GPIO_enLEVEL_LOW;
        }
        else
        {
            enLevel= GPIO_enLEVEL_HIGH;
        }
    }
    return enLevel;
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
    u32Reg&=~enPin;
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


GPIO_nSTATUS GPIO__enStatusInterrupt(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    GPIO_nSTATUS enStatus= GPIO_enSTATUS_UNDEF;
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
        if(u32Reg!=0)
        {
            enStatus= GPIO_enOCCUR;
        }
        else
        {
            enStatus= GPIO_enNOOCCUR;
        }
    }
    return enStatus;
}

void GPIO__vSetDrive(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nDRIVE enDrive)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32Reg=0;
    uint32_t u32RegSLR=0;
    GPIO_AUX_TypeDef* gpio=0;
    uint32_t u32Drive =enDrive&0x3;
    uint32_t u32SlewRate =(enDrive>>8)&0x1;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    GPIO__vSetReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    GPIO__vSetIntSense(enPort,enPin, GPIO_enSENSE_LEVEL);
    gpio=GPIO_BLOCK_AUX[enBus][(uint32_t)enPort];
    u32Reg=gpio->GPIODRR[u32Drive];
    u32RegSLR=gpio->GPIOSLR;
    u32Reg|=enPin;
    gpio->GPIODRR[u32Drive]=u32Reg;
    if(u32SlewRate == 1)
    {
        u32RegSLR|=enPin;
    }
    else
    {
        u32RegSLR&=~enPin;
    }
    gpio->GPIOSLR=u32RegSLR;

}


GPIO_nDRIVE GPIO__enGetDrive(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nDRIVE enDrive=GPIO_enDRIVE_UNDEF;
    GPIO_nREADY enReady= GPIO_enNOREADY;
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32Reg=0;
    GPIO_AUX_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    enReady = GPIO__enIsReady(enPort);
    enBus=GPIO__enGetBus(enPort);

    if((GPIO_enREADY == enReady))
    {
        gpio=GPIO_BLOCK_AUX[enBus][(uint32_t)enPort];
        for(enDrive=GPIO_enDRIVE_2mA;enDrive<=GPIO_enDRIVE_8mA;enDrive++)
        {
            u32Reg=gpio->GPIODRR[enDrive];
            u32Reg&=enPin;
            if(0!=u32Reg)
            {
                break;
            }

        }
        if(GPIO_enDRIVE_8mA == enDrive)
        {
            u32Reg=gpio->GPIOSLR;
            u32Reg&=enPin;
            if(0!=u32Reg)
            {
                enDrive=GPIO_enDRIVE_8mA_SLR;
            }
        }
    }
    return enDrive;
}


void GPIO__vUnlock(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32RegCR=0;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    GPIO__vSetReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
    u32RegCR=gpio->GPIOCR;
    u32RegCR&=enPin;
    if(enPin != u32RegCR)
    {
        gpio->GPIOLOCK=GPIO_GPIOLOCK_R_LOCK_KEY;
        u32RegCR|=enPin;
        gpio->GPIOCR=u32RegCR;
    }
}

void GPIO__vLock(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32RegCR=0;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    GPIO__vSetReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
    u32RegCR=gpio->GPIOCR;
    u32RegCR&=enPin;
    if(0 != u32RegCR)
    {
        gpio->GPIOLOCK=GPIO_GPIOLOCK_R_LOCK_KEY;
        u32RegCR&=~enPin;
        gpio->GPIOCR=u32RegCR;
    }

}


void GPIO__vEnDigital(GPIO_nPORT enPort, GPIO_nPIN enPin)
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
    GPIO__vUnlock(enPort,enPin);
    u32Reg=gpio->GPIODEN;
    u32Reg|=enPin;
    gpio->GPIODEN=u32Reg;

}


void GPIO__vDisDigital(GPIO_nPORT enPort, GPIO_nPIN enPin)
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
    GPIO__vUnlock(enPort,enPin);
    gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
    u32Reg=gpio->GPIODEN;
    u32Reg&=~enPin;
    GPIO_BLOCK[enBus][(uint32_t)enPort]->GPIODEN=u32Reg;
}


void GPIO__vEnAltFunction(GPIO_nPORT enPort, GPIO_nPIN enPin)
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
    GPIO__vUnlock(enPort,enPin);
    gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
    u32Reg=gpio->GPIOAFSEL;
    u32Reg|=enPin;
    gpio->GPIOAFSEL=u32Reg;
}


void GPIO__vDisAltFunction(GPIO_nPORT enPort, GPIO_nPIN enPin)
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
    GPIO__vUnlock(enPort,enPin);
    gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
    u32Reg=gpio->GPIOAFSEL;
    u32Reg&=~enPin;
    gpio->GPIOAFSEL=u32Reg;
}


void GPIO__vEnAnalog(GPIO_nPORT enPort, GPIO_nPIN enPin)
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
    u32Reg=gpio->GPIOAMSEL;
    u32Reg|=enPin;
    gpio->GPIOAMSEL=u32Reg;
}


void GPIO__vDisAnalog(GPIO_nPORT enPort, GPIO_nPIN enPin)
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
    u32Reg=gpio->GPIOAMSEL;
    u32Reg&=~enPin;
    gpio->GPIOAMSEL=u32Reg;
}


void GPIO__vSetOutputMode(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nOUTMODE enMode)
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
    GPIO__vEnDigital(enPort,enPin);
    gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
    u32Reg=gpio->GPIOODR;
    if(GPIO_enOUTMODE_OD == enMode)
    {
        u32Reg|=enPin;
    }
    else
    {
        u32Reg&=~enPin;
    }
    gpio->GPIOODR=u32Reg;
}





void GPIO__vSetResistorMode(GPIO_nPORT enPort, GPIO_nPIN enPin,GPIO_nRESMODE enMode)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32RegPUR=0;
    uint32_t u32RegPDR=0;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    GPIO__vSetReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    GPIO__vUnlock(enPort,enPin);
    gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
    u32RegPUR=gpio->GPIOPUR;
    u32RegPDR=gpio->GPIOPDR;
    switch(enMode)
    {
    case GPIO_enRESMODE_INACTIVE:
        u32RegPUR&=~enPin;
        u32RegPDR&=~enPin;
        break;
    case GPIO_enRESMODE_PULLUP:
        u32RegPUR|=enPin;
        u32RegPDR&=~enPin;
        break;
    case GPIO_enRESMODE_PULLDOWN:
        u32RegPUR&=~enPin;
        u32RegPDR|=enPin;
        break;
    default:
        break;
    }
    gpio->GPIOPUR=u32RegPUR;
    gpio->GPIOPDR=u32RegPDR;
}

void GPIO__vSetDigitalFunction(GPIO_nDIGITAL_FUNCTION enFunction)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32Port =(enFunction>>16)&0xFF;
    uint32_t u32Bit =(enFunction>>8)&0x1F;
    uint32_t u32Pin =(u32Bit>>2)&0xFF;
    uint32_t u32Value =(enFunction)&0xF;
    uint32_t u32Reg=0;
    GPIO_TypeDef* gpio=0;
    u32Value<<=u32Bit;
    u32Pin=(1<<u32Pin);
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
    if(0!=u32Value)
    {
        GPIO__vEnAltFunction((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    }
    else
    {
        GPIO__vDisAltFunction((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    }
    u32Reg=gpio->GPIOPCTL;
    u32Reg&=~(0xF<<u32Bit);
    u32Reg|=u32Value;
    gpio->GPIOPCTL=u32Reg;
}

void GPIO__vSetAnalogFunction(GPIO_nANALOG_FUNCTION enFunction)
{
    uint32_t u32Port =(enFunction>>8)&0xFF;
    uint32_t u32Pin =(enFunction);
    if(u32Port>(uint32_t)GPIO_enMAX)
    {
        u32Port=(uint32_t)GPIO_enMAX;
    }
    u32Pin&=GPIO_enALL;

    GPIO__vSetReady((GPIO_nPORT)u32Port);
    GPIO__vDisAltFunction((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    GPIO__vDisDigital((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    GPIO__vEnAnalog((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
}


void GPIO__vEnADCTrigger(GPIO_nPORT enPort, GPIO_nPIN enPin)
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
    u32Reg=gpio->GPIOADCCTL;
    u32Reg|=enPin;
    gpio->GPIOADCCTL=u32Reg;

}


void GPIO__vDisADCTrigger(GPIO_nPORT enPort, GPIO_nPIN enPin)
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
    u32Reg=gpio->GPIOADCCTL;
    u32Reg&=~enPin;
    gpio->GPIOADCCTL=u32Reg;
}

void GPIO__vEnDMATrigger(GPIO_nPORT enPort, GPIO_nPIN enPin)
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
    u32Reg=gpio->GPIODMACTL;
    u32Reg|=enPin;
    gpio->GPIODMACTL=u32Reg;

}

void GPIO__vDisDMATrigger(GPIO_nPORT enPort, GPIO_nPIN enPin)
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
    u32Reg=gpio->GPIODMACTL;
    u32Reg&=~enPin;
    gpio->GPIODMACTL=u32Reg;
}


void GPIOA_vISR(void)
{
    volatile uint32_t u32Reg=0;
    uint32_t u32RegBUS=SYSCTL_GPIOHBCTL_R&(1<<0);
    if(GPIO_enAPB ==u32RegBUS)
    {
        u32Reg=GPIOA_APB_GPIOMIS_R;
        if(u32Reg & GPIO_enPIN0)
        {
            GPIOA_APB_GPIOICR_R=GPIO_enPIN0;
            GPIO[0][0]();
        }
        if(u32Reg & GPIO_enPIN1)
        {
            GPIOA_APB_GPIOICR_R=GPIO_enPIN1;
            GPIO[0][1]();
        }
        if(u32Reg & GPIO_enPIN2)
        {
            GPIOA_APB_GPIOICR_R=GPIO_enPIN2;
            GPIO[0][2]();
        }
        if(u32Reg & GPIO_enPIN3)
        {
            GPIOA_APB_GPIOICR_R=GPIO_enPIN3;
            GPIO[0][3]();
        }
        if(u32Reg & GPIO_enPIN4)
        {
            GPIOA_APB_GPIOICR_R=GPIO_enPIN4;
            GPIO[0][4]();
        }
        if(u32Reg & GPIO_enPIN5)
        {
            GPIOA_APB_GPIOICR_R=GPIO_enPIN5;
            GPIO[0][5]();
        }
        if(u32Reg & GPIO_enPIN6)
        {
            GPIOA_APB_GPIOICR_R=GPIO_enPIN6;
            GPIO[0][6]();
        }
        if(u32Reg & GPIO_enPIN7)
        {
            GPIOA_APB_GPIOICR_R=GPIO_enPIN7;
            GPIO[0][7]();
        }
    }
    else
    {
        u32Reg=GPIOA_AHB_GPIOMIS_R;
        if(u32Reg & GPIO_enPIN0)
        {
            GPIOA_AHB_GPIOICR_R=GPIO_enPIN0;
            GPIO[0][0]();
        }
        if(u32Reg & GPIO_enPIN1)
        {
            GPIOA_AHB_GPIOICR_R=GPIO_enPIN1;
            GPIO[0][1]();
        }
        if(u32Reg & GPIO_enPIN2)
        {
            GPIOA_AHB_GPIOICR_R=GPIO_enPIN2;
            GPIO[0][2]();
        }
        if(u32Reg & GPIO_enPIN3)
        {
            GPIOA_AHB_GPIOICR_R=GPIO_enPIN3;
            GPIO[0][3]();
        }
        if(u32Reg & GPIO_enPIN4)
        {
            GPIOA_AHB_GPIOICR_R=GPIO_enPIN4;
            GPIO[0][4]();
        }
        if(u32Reg & GPIO_enPIN5)
        {
            GPIOA_AHB_GPIOICR_R=GPIO_enPIN5;
            GPIO[0][5]();
        }
        if(u32Reg & GPIO_enPIN6)
        {
            GPIOA_AHB_GPIOICR_R=GPIO_enPIN6;
            GPIO[0][6]();
        }
        if(u32Reg & GPIO_enPIN7)
        {
            GPIOA_AHB_GPIOICR_R=GPIO_enPIN7;
            GPIO[0][7]();
        }
    }
}

void GPIOB_vISR(void)
{
    volatile uint32_t u32Reg=0;
    uint32_t u32RegBUS=SYSCTL_GPIOHBCTL_R&(1<<1);
    if(GPIO_enAPB ==u32RegBUS)
    {
        u32Reg=GPIOB_APB_GPIOMIS_R;
        if(u32Reg & GPIO_enPIN0)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN0;
            GPIO[1][0]();
        }
        if(u32Reg & GPIO_enPIN1)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN1;
            GPIO[1][1]();
        }
        if(u32Reg & GPIO_enPIN2)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN2;
            GPIO[1][2]();
        }
        if(u32Reg & GPIO_enPIN3)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN3;
            GPIO[1][3]();
        }
        if(u32Reg & GPIO_enPIN4)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN4;
            GPIO[1][4]();
        }
        if(u32Reg & GPIO_enPIN5)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN5;
            GPIO[1][5]();
        }
        if(u32Reg & GPIO_enPIN6)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN6;
            GPIO[1][6]();
        }
        if(u32Reg & GPIO_enPIN7)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN7;
            GPIO[1][7]();
        }
    }
    else
    {
        u32Reg=GPIOB_AHB_GPIOMIS_R;
        if(u32Reg & GPIO_enPIN0)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN0;
            GPIO[1][0]();
        }
        if(u32Reg & GPIO_enPIN1)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN1;
            GPIO[1][1]();
        }
        if(u32Reg & GPIO_enPIN2)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN2;
            GPIO[1][2]();
        }
        if(u32Reg & GPIO_enPIN3)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN3;
            GPIO[1][3]();
        }
        if(u32Reg & GPIO_enPIN4)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN4;
            GPIO[1][4]();
        }
        if(u32Reg & GPIO_enPIN5)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN5;
            GPIO[1][5]();
        }
        if(u32Reg & GPIO_enPIN6)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN6;
            GPIO[1][6]();
        }
        if(u32Reg & GPIO_enPIN7)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN7;
            GPIO[1][7]();
        }
    }
}
void GPIOC_vISR(void)
{
    volatile uint32_t u32Reg=0;
     uint32_t u32RegBUS=SYSCTL_GPIOHBCTL_R&(1<<2);
     if(GPIO_enAPB ==u32RegBUS)
     {
         u32Reg=GPIOC_APB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN0)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN0;
             GPIO[2][0]();
         }
         if(u32Reg & GPIO_enPIN1)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN1;
             GPIO[2][1]();
         }
         if(u32Reg & GPIO_enPIN2)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN2;
             GPIO[2][2]();
         }
         if(u32Reg & GPIO_enPIN3)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN3;
             GPIO[2][3]();
         }
         if(u32Reg & GPIO_enPIN4)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN4;
             GPIO[2][4]();
         }
         if(u32Reg & GPIO_enPIN5)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN5;
             GPIO[2][5]();
         }
         if(u32Reg & GPIO_enPIN6)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN6;
             GPIO[2][6]();
         }
         if(u32Reg & GPIO_enPIN7)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN7;
             GPIO[2][7]();
         }
     }
     else
     {
         u32Reg=GPIOC_AHB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN0)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN0;
             GPIO[2][0]();
         }
         if(u32Reg & GPIO_enPIN1)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN1;
             GPIO[2][1]();
         }
         if(u32Reg & GPIO_enPIN2)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN2;
             GPIO[2][2]();
         }
         if(u32Reg & GPIO_enPIN3)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN3;
             GPIO[2][3]();
         }
         if(u32Reg & GPIO_enPIN4)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN4;
             GPIO[2][4]();
         }
         if(u32Reg & GPIO_enPIN5)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN5;
             GPIO[2][5]();
         }
         if(u32Reg & GPIO_enPIN6)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN6;
             GPIO[2][6]();
         }
         if(u32Reg & GPIO_enPIN7)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN7;
             GPIO[2][7]();
         }
     }
}

void GPIOD_vISR(void)
{
    volatile uint32_t u32Reg=0;
     uint32_t u32RegBUS=SYSCTL_GPIOHBCTL_R&(1<<2);
     if(GPIO_enAPB ==u32RegBUS)
     {
         u32Reg=GPIOD_APB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN0)
         {
             GPIOD_APB_GPIOICR_R=GPIO_enPIN0;
             GPIO[3][0]();
         }
         if(u32Reg & GPIO_enPIN1)
         {
             GPIOD_APB_GPIOICR_R=GPIO_enPIN1;
             GPIO[3][1]();
         }
         if(u32Reg & GPIO_enPIN2)
         {
             GPIOD_APB_GPIOICR_R=GPIO_enPIN2;
             GPIO[3][2]();
         }
         if(u32Reg & GPIO_enPIN3)
         {
             GPIOD_APB_GPIOICR_R=GPIO_enPIN3;
             GPIO[3][3]();
         }
         if(u32Reg & GPIO_enPIN4)
         {
             GPIOD_APB_GPIOICR_R=GPIO_enPIN4;
             GPIO[3][4]();
         }
         if(u32Reg & GPIO_enPIN5)
         {
             GPIOD_APB_GPIOICR_R=GPIO_enPIN5;
             GPIO[3][5]();
         }
         if(u32Reg & GPIO_enPIN6)
         {
             GPIOD_APB_GPIOICR_R=GPIO_enPIN6;
             GPIO[3][6]();
         }
         if(u32Reg & GPIO_enPIN7)
         {
             GPIOD_APB_GPIOICR_R=GPIO_enPIN7;
             GPIO[3][7]();
         }
     }
     else
     {
         u32Reg=GPIOD_AHB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN0)
         {
             GPIOD_AHB_GPIOICR_R=GPIO_enPIN0;
             GPIO[3][0]();
         }
         if(u32Reg & GPIO_enPIN1)
         {
             GPIOD_AHB_GPIOICR_R=GPIO_enPIN1;
             GPIO[3][1]();
         }
         if(u32Reg & GPIO_enPIN2)
         {
             GPIOD_AHB_GPIOICR_R=GPIO_enPIN2;
             GPIO[3][2]();
         }
         if(u32Reg & GPIO_enPIN3)
         {
             GPIOD_AHB_GPIOICR_R=GPIO_enPIN3;
             GPIO[3][3]();
         }
         if(u32Reg & GPIO_enPIN4)
         {
             GPIOD_AHB_GPIOICR_R=GPIO_enPIN4;
             GPIO[3][4]();
         }
         if(u32Reg & GPIO_enPIN5)
         {
             GPIOD_AHB_GPIOICR_R=GPIO_enPIN5;
             GPIO[3][5]();
         }
         if(u32Reg & GPIO_enPIN6)
         {
             GPIOD_AHB_GPIOICR_R=GPIO_enPIN6;
             GPIO[3][6]();
         }
         if(u32Reg & GPIO_enPIN7)
         {
             GPIOD_AHB_GPIOICR_R=GPIO_enPIN7;
             GPIO[3][7]();
         }
     }
}
void GPIOE_vISR(void)
{
    volatile uint32_t u32Reg=0;
     uint32_t u32RegBUS=SYSCTL_GPIOHBCTL_R&(1<<2);
     if(GPIO_enAPB ==u32RegBUS)
     {
         u32Reg=GPIOE_APB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN0)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN0;
             GPIO[4][0]();
         }
         if(u32Reg & GPIO_enPIN1)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN1;
             GPIO[4][1]();
         }
         if(u32Reg & GPIO_enPIN2)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN2;
             GPIO[4][2]();
         }
         if(u32Reg & GPIO_enPIN3)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN3;
             GPIO[4][3]();
         }
         if(u32Reg & GPIO_enPIN4)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN4;
             GPIO[4][4]();
         }
         if(u32Reg & GPIO_enPIN5)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN5;
             GPIO[4][5]();
         }
         if(u32Reg & GPIO_enPIN6)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN6;
             GPIO[4][6]();
         }
         if(u32Reg & GPIO_enPIN7)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN7;
             GPIO[4][7]();
         }
     }
     else
     {
         u32Reg=GPIOE_AHB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN0)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN0;
             GPIO[4][0]();
         }
         if(u32Reg & GPIO_enPIN1)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN1;
             GPIO[4][1]();
         }
         if(u32Reg & GPIO_enPIN2)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN2;
             GPIO[4][2]();
         }
         if(u32Reg & GPIO_enPIN3)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN3;
             GPIO[4][3]();
         }
         if(u32Reg & GPIO_enPIN4)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN4;
             GPIO[4][4]();
         }
         if(u32Reg & GPIO_enPIN5)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN5;
             GPIO[4][5]();
         }
         if(u32Reg & GPIO_enPIN6)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN6;
             GPIO[4][6]();
         }
         if(u32Reg & GPIO_enPIN7)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN7;
             GPIO[4][7]();
         }
     }
}
void GPIOF_vISR(void)
{
    volatile uint32_t u32Reg=0;
     uint32_t u32RegBUS=SYSCTL_GPIOHBCTL_R&(1<<2);
     if(GPIO_enAPB ==u32RegBUS)
     {
         u32Reg=GPIOF_APB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN0)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN0;
             GPIO[5][0]();
         }
         if(u32Reg & GPIO_enPIN1)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN1;
             GPIO[5][1]();
         }
         if(u32Reg & GPIO_enPIN2)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN2;
             GPIO[5][2]();
         }
         if(u32Reg & GPIO_enPIN3)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN3;
             GPIO[5][3]();
         }
         if(u32Reg & GPIO_enPIN4)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN4;
             GPIO[5][4]();
         }
         if(u32Reg & GPIO_enPIN5)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN5;
             GPIO[5][5]();
         }
         if(u32Reg & GPIO_enPIN6)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN6;
             GPIO[5][6]();
         }
         if(u32Reg & GPIO_enPIN7)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN7;
             GPIO[5][7]();
         }
     }
     else
     {
         u32Reg=GPIOF_AHB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN0)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN0;
             GPIO[5][0]();
         }
         if(u32Reg & GPIO_enPIN1)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN1;
             GPIO[5][1]();
         }
         if(u32Reg & GPIO_enPIN2)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN2;
             GPIO[5][2]();
         }
         if(u32Reg & GPIO_enPIN3)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN3;
             GPIO[5][3]();
         }
         if(u32Reg & GPIO_enPIN4)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN4;
             GPIO[5][4]();
         }
         if(u32Reg & GPIO_enPIN5)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN5;
             GPIO[5][5]();
         }
         if(u32Reg & GPIO_enPIN6)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN6;
             GPIO[5][6]();
         }
         if(u32Reg & GPIO_enPIN7)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN7;
             GPIO[5][7]();
         }
     }
}
