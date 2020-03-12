/*
 * NVIC.c
 *
 *  Created on: 22 jul. 2018
 *      Author: InDev
 */


#include "NVIC.h"

inline NVIC_nSTATUS NVIC__enSetPriorityIRQ(NVIC_nSTIR enIRQ,NVIC_nPRIORITY enPriority)
{
    NVIC_nSTATUS enStatus= NVIC_enERROR;
    uint32_t u32IsrIndex=0;
    uint32_t u32IsrBit=0;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        if((uint8_t)enPriority <=NVIC_PRI_MAX)
        {
            u32IsrIndex=enIRQ/4;
            u32IsrBit=enIRQ%4;

            switch(u32IsrBit)
            {
                case 0:
                    NVIC_IPRw->IPR[u32IsrIndex].IP0=(uint8_t)enPriority & NVIC_PRI_MASK;
                    enStatus= NVIC_enOK;
                    break;
                case 1:
                    NVIC_IPRw->IPR[u32IsrIndex].IP1=(uint8_t)enPriority & NVIC_PRI_MASK;
                    enStatus= NVIC_enOK;
                    break;
                case 2:
                    NVIC_IPRw->IPR[u32IsrIndex].IP2=(uint8_t)enPriority & NVIC_PRI_MASK;
                    enStatus= NVIC_enOK;
                    break;
                case 3:
                    NVIC_IPRw->IPR[u32IsrIndex].IP3=(uint8_t)enPriority & NVIC_PRI_MASK;
                    enStatus= NVIC_enOK;
                    break;
                default:
                    break;
            }

        }
    }
    return enStatus;

}

inline NVIC_nPRIORITY  NVIC__enGetPriorityIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nPRIORITY enPriority= NVIC_enDEFAULT;
    uint32_t u32IsrIndex=0;
    uint32_t u32IsrBit=0;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        u32IsrIndex=enIRQ/4;
        u32IsrBit=enIRQ%4;
        switch(u32IsrBit)
        {
            case 0:
                enPriority= (NVIC_nPRIORITY)(NVIC_IPRw->IPR[u32IsrIndex].IP0 & NVIC_PRI_MASK );
                break;
            case 1:
                enPriority= (NVIC_nPRIORITY)(NVIC_IPRw->IPR[u32IsrIndex].IP1 & NVIC_PRI_MASK );
                break;
            case 2:
                enPriority= (NVIC_nPRIORITY)(NVIC_IPRw->IPR[u32IsrIndex].IP2 & NVIC_PRI_MASK );
                break;
            case 3:
                enPriority= (NVIC_nPRIORITY)(NVIC_IPRw->IPR[u32IsrIndex].IP3 & NVIC_PRI_MASK );
                break;
            default:
                break;
        }

    }
    return enPriority;

}

inline NVIC_nSTATUS NVIC__enEnableIRQ(NVIC_nSTIR enIRQ, NVIC_nPRIORITY enPriority)
{
    NVIC_nSTATUS enStatus= NVIC_enERROR;
    uint32_t u32IsrIndex=0;
    uint32_t u32IsrBit=0;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        u32IsrBit=enIRQ%32;
        u32IsrIndex=enIRQ/32;
        enStatus = NVIC__enSetPriorityIRQ(enIRQ,enPriority);
        if(enStatus == NVIC_enOK)
        {
            NVICw->ISER[u32IsrIndex]|=(1<<u32IsrBit);
        }
    }
    return enStatus;

}

inline NVIC_nSTATUS NVIC__enDisableIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nSTATUS enStatus= NVIC_enERROR;
    uint32_t u32IsrIndex=0;
    uint32_t u32IsrBit=0;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        u32IsrBit=enIRQ%32;
        u32IsrIndex=enIRQ/32;
        NVICw->ICER[u32IsrIndex]|=(1<<u32IsrBit);
        enStatus = NVIC_enOK;
    }
    return enStatus;
}


inline NVIC_nPENDING NVIC__enGetPendingIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nPENDING enStatus= NVIC_enNOPENDING;
    uint32_t u32IsrIndex=0;
    uint32_t u32IsrBit=0;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        u32IsrBit=enIRQ%32;
        u32IsrIndex=enIRQ/32;
        if((NVICw->ISPR[u32IsrIndex]&(1<<u32IsrBit)) == (1<<u32IsrBit))
        {
            enStatus= NVIC_enPENDING;
        }
    }

    return enStatus;
}


inline NVIC_nSTATUS NVIC__enSetPendingIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nSTATUS enStatus= NVIC_enERROR;
    uint32_t u32IsrIndex=0;
    uint32_t u32IsrBit=0;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        u32IsrBit=enIRQ%32;
        u32IsrIndex=enIRQ/32;
        NVICw->ISPR[u32IsrIndex]|=(1<<u32IsrBit);
        enStatus= NVIC_enOK;
    }
    return enStatus;
}



inline NVIC_nSTATUS NVIC__enClearPendingIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nSTATUS enStatus= NVIC_enERROR;
    uint32_t u32IsrIndex=0;
    uint32_t u32IsrBit=0;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        u32IsrBit=enIRQ%32;
        u32IsrIndex=enIRQ/32;
        NVICw->ICPR[u32IsrIndex]|=(1<<u32IsrBit);
        enStatus= NVIC_enOK;
    }
    return enStatus;
}



inline NVIC_nACTIVE NVIC__enGetActiveIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nACTIVE enStatus= NVIC_enNOACTIVE;
    uint32_t u32IsrIndex=0;
    uint32_t u32IsrBit=0;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        u32IsrBit=enIRQ%32;
        u32IsrIndex=enIRQ/32;
        if((NVICw->IABR[u32IsrIndex]&(1<<u32IsrBit)) == (1<<u32IsrBit))
        {
            enStatus= NVIC_enACTIVE;
        }
    }

    return enStatus;
}


NVIC_nSTATUS    NVIC__enTriggerIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nSTATUS enStatus= NVIC_enERROR;

    if((uint8_t)enIRQ <=NVIC_IRQ_MAX)
    {
        NVIC->STIR|=(uint32_t)enIRQ;
        enStatus= NVIC_enOK;
    }
    return enStatus;
}

