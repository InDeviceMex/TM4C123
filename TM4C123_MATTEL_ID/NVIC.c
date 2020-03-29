/*
 * NVIC.c
 *
 *  Created on: 23 jun. 2018
 *      Author: InDev
 */


#include "NVIC.h"


int32_t NVIC_EN(uint32_t interruptEn, uint32_t priority)
{
    uint32_t isrIndex=0;
    uint32_t isrBit=0;

    isrBit=interruptEn%32;
    isrIndex=interruptEn/32;
    if(isrIndex>4)
        return 0;

    if(NVIC_Priority(interruptEn,priority))
        NVIC1->EN[isrIndex]|=(1<<isrBit);
    else
        return 0;
    return 1;
}

int32_t NVIC_DIS(uint32_t interruptDis)
{
    uint32_t isrIndex=0;
    uint32_t isrBit=0;

    isrBit=interruptDis%32;
    isrIndex=interruptDis/32;
    if(isrIndex>4)
        return 0;
    NVIC1->DIS[isrIndex]|=(1<<isrBit);
    return 1;
}


int32_t NVIC_PEND(uint32_t interruptPend)
{
    uint32_t isrIndex=0;
    uint32_t isrBit=0;

    isrBit=interruptPend%32;
    isrIndex=interruptPend/32;
    if(isrIndex>4)
        return 0;
    NVIC1->PEND[isrIndex]|=(1<<isrBit);
    return 1;
}


int32_t NVIC_UNPEND(uint32_t interruptUnpend)
{
    uint32_t isrIndex=0;
    uint32_t isrBit=0;

    isrBit=interruptUnpend%32;
    isrIndex=interruptUnpend/32;
    if(isrIndex>4)
        return 0;
    NVIC1->UNPEND[isrIndex]|=(1<<isrBit);

    return 1;
}

int32_t NVIC_ACTIVE(uint32_t interruptActive)
{
    uint32_t isrIndex=0;
    uint32_t isrBit=0;

    isrBit=interruptActive%32;
    isrIndex=interruptActive/32;
    if(isrIndex>4)
        return 0;
    NVIC1->ACTIVE[isrIndex]|=(1<<isrBit);

    return 1;
}

int32_t NVIC_SWTRIGGER(uint32_t interruptA)
{
    if(interruptA>0x8A)
        return 0;
    NVIC->SWTRIG|=interruptA;

    return 1;
}


int32_t NVIC_Priority(uint32_t interruptA,uint32_t priority)
{
    uint32_t isrIndex=0;
    uint32_t isrBit=0;

    isrBit=interruptA%4;
    isrIndex=interruptA/4;
    if(isrIndex>34)
        return 0;

    switch(isrBit)
    {
        case 0:
            NVIC__PRI->PRI[isrIndex].INT0=priority;
            break;
        case 1:
            NVIC__PRI->PRI[isrIndex].INT1=priority;
            break;
        case 2:
            NVIC__PRI->PRI[isrIndex].INT2=priority;
            break;
        case 3:
            NVIC__PRI->PRI[isrIndex].INT3=priority;
            break;
        default:
            return 0;
    }
    return 1;
}
