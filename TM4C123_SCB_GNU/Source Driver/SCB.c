/*
 * SCB.c
 *
 *  Created on: 23 jun. 2018
 *      Author: InDev
 */

#include "SCB.h"



void SCB_PENDSV__vSetPending(void)
{
    SCB_INTCTRL_R|=SCB_INTCTRL_R_PENDSV_SET;
}
void SCB_PENDSV__vClearPending(void)
{
    SCB_INTCTRL_R|=SCB_INTCTRL_R_UNPENDSV_REMOVE;
}
SCB_nPENDSTATE SCB_PENDSV__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_INTCTRL_R;
    u32Reg&=SCB_INTCTRL_R_PENDSV_MASK;
    u32Reg>>=SCB_INTCTRL_R_PENDSV_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}


void SCB_SysTick__vSetPending(void)
{
    SCB_INTCTRL_R|=SCB_INTCTRL_R_PENDSTSET_SET;
}
void SCB_SysTick__vClearPending(void)
{
    SCB_INTCTRL_R|=SCB_INTCTRL_R_PENDSTCLR_REMOVE;
}
SCB_nPENDSTATE SCB_SysTick__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_INTCTRL_R;
    u32Reg&=SCB_INTCTRL_R_PENDSTSET_MASK;
    u32Reg>>=SCB_INTCTRL_R_PENDSTSET_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}


void SCB_NMI__vSetPending(void)
{
    SCB_INTCTRL_R|=SCB_INTCTRL_R_NMISET_SET;
}


SCB_nPENDSTATE SCB_ISR__enGetPendingState(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_INTCTRL_R;
    u32Reg&=SCB_INTCTRL_R_ISRPEND_MASK;
    u32Reg>>=SCB_INTCTRL_R_ISRPEND_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}
SCB_nVECISR SCB_ISR__enGetVectorPending(void)
{
    SCB_nVECISR enReturn=SCB_enVECISR_THREAD;
    uint32_t u32Reg= SCB_INTCTRL_R;
    u32Reg&=SCB_INTCTRL_R_VECPEND_MASK;
    u32Reg>>=SCB_INTCTRL_R_VECPEND_BIT;
    enReturn=(SCB_nVECISR) u32Reg;
    return enReturn;
}
SCB_nVECISR SCB_ISR__enGetVectorActive(void)
{
    SCB_nVECISR enReturn=SCB_enVECISR_THREAD;
    uint32_t u32Reg= SCB_INTCTRL_R;
    u32Reg&=SCB_INTCTRL_R_VECACT_MASK;
    u32Reg>>=SCB_INTCTRL_R_VECACT_BIT;
    enReturn=(SCB_nVECISR) u32Reg;
    return enReturn;
}


void SCB__vSetVectorOffset(uint32_t u32Offset)
{
    u32Offset&=~0x3FF;
    SCB_VTABLE_R= u32Offset;
}


void SCB__vReqSysReset(void)
{
    uint32_t u32Reg=SCB_APINT_R;
    if((u32Reg &SCB_APINT_R_VECTKEY_MASK)==SCB_APINT_R_VECTKEY_READ)
    {
        u32Reg&=~SCB_APINT_R_VECTKEY_MASK;
        u32Reg|=SCB_APINT_R_VECTKEY_WRITE|SCB_APINT_R_SYSRESREQ_RESET;
        SCB_APINT_R=u32Reg;
        while(1)
        {
            __asm(" NOP");
        }

    }

}
SCB_nSTATUS SCB__enSetPriorityGroup(SCB_nPRIGROUP enGroup)
{
    SCB_nSTATUS enReturn=SCB_enERROR;
    uint32_t u32Reg=SCB_APINT_R;
    u32Reg&=~(SCB_APINT_R_VECTKEY_MASK|SCB_APINT_R_PRIGROUP_MASK);
    switch(enGroup)
    {
        case SCB_enPRIGROUP_XXX:
            u32Reg|=SCB_APINT_R_VECTKEY_WRITE|SCB_APINT_R_PRIGROUP_XXX;
            enReturn=SCB_enOK;
            break;
        case SCB_enPRIGROUP_XXY:
            u32Reg|=SCB_APINT_R_VECTKEY_WRITE|SCB_APINT_R_PRIGROUP_XXY;
            enReturn=SCB_enOK;
            break;
        case SCB_enPRIGROUP_XYY:
            u32Reg|=SCB_APINT_R_VECTKEY_WRITE|SCB_APINT_R_PRIGROUP_XYY;
            enReturn=SCB_enOK;
            break;
        case SCB_enPRIGROUP_YYY:
            u32Reg|=SCB_APINT_R_VECTKEY_WRITE|SCB_APINT_R_PRIGROUP_YYY;
            enReturn=SCB_enOK;
            break;
        default:
            return enReturn;
    }

    __asm(" DSB");
    SCB_APINT_R=u32Reg;
    __asm(" DSB");
    return enReturn;
}
SCB_nPRIGROUP SCB__enGetPriorityGroup(void)
{
    SCB_nPRIGROUP enReturn=SCB_enPRIGROUP_ERROR;
    uint32_t u32Reg=SCB_APINT_R;
    u32Reg&=SCB_APINT_R_PRIGROUP_MASK;
    u32Reg>>=SCB_APINT_R_PRIGROUP_BIT;
    enReturn=(SCB_nPRIGROUP)u32Reg;
    return enReturn;
}


SCB_nSTATUS SCB__enSetWakeUpSource(SCB_nWAKEUPSOURCE enSource)
{
    SCB_nSTATUS enReturn=SCB_enERROR;
    switch(enSource)
    {
        case SCB_enWAKEUP_ONLY:
            SCB_SYSCTRL_R &=~SCB_SYSCTRL_R_SEVONPEND_MASK;
            enReturn=SCB_enOK;
            break;
        case SCB_enWAKEUP_ALL:
            SCB_SYSCTRL_R |=SCB_SYSCTRL_R_SEVONPEND_MASK;
            enReturn=SCB_enOK;
            break;
        default:
            break;
    }
    return enReturn;
}
SCB_nWAKEUPSOURCE SCB__enGetWakeUpSource(void)
{
    SCB_nWAKEUPSOURCE enReturn=SCB_enWAKEUP_ERROR;
    uint32_t u32Reg=SCB_SYSCTRL_R;
    u32Reg&=SCB_SYSCTRL_R_SEVONPEND_MASK;
    u32Reg>>=SCB_SYSCTRL_R_SEVONPEND_BIT;
    enReturn=(SCB_nWAKEUPSOURCE)u32Reg;
    return enReturn;
}
SCB_nSTATUS SCB__enSetSleepMode(SCB_nSleepDeep enSleepMode)
{
    SCB_nSTATUS enReturn=SCB_enERROR;
    switch(enSleepMode)
    {
        case SCB_enSleepDeep_Sleep:
            SCB_SYSCTRL_R&=~SCB_SYSCTRL_R_SLEEPDEEP_MASK;
            enReturn=SCB_enOK;
            break;
        case SCB_enSleepDeep_DeepSleep:
            SCB_SYSCTRL_R|=SCB_SYSCTRL_R_SLEEPDEEP_MASK;
            enReturn=SCB_enOK;
            break;
        default:
            break;
    }

    return enReturn;
}
SCB_nSleepDeep SCB__enGetSleepMode(void)
{
    SCB_nSleepDeep enReturn=SCB_enSleepDeep_ERROR;
    uint32_t u32Reg=SCB_SYSCTRL_R;
    u32Reg&=SCB_SYSCTRL_R_SLEEPDEEP_MASK;
    u32Reg>>=SCB_SYSCTRL_R_SLEEPDEEP_BIT;
    enReturn=(SCB_nSleepDeep)u32Reg;
    return enReturn;
}
SCB_nSTATUS SCB__enSetSleepExit(SCB_nSLEEPEXIT enSleepMode)
{
    SCB_nSTATUS enReturn=SCB_enERROR;
    switch(enSleepMode)
    {
        case SCB_enSLEEPEXIT_NOSLEEP:
            SCB_SYSCTRL_R&=~SCB_SYSCTRL_R_SLEEPEXIT_MASK;
            enReturn=SCB_enOK;
            break;
        case SCB_enSLEEPEXIT_SLEEP:
            SCB_SYSCTRL_R|=SCB_SYSCTRL_R_SLEEPEXIT_MASK;
            enReturn=SCB_enOK;
            break;
        default:
            break;
    }

    return enReturn;
}
SCB_nSLEEPEXIT SCB__enGetSleepExit(void)
{
    SCB_nSLEEPEXIT enReturn=SCB_enSLEEPEXIT_ERROR;
    uint32_t u32Reg=SCB_SYSCTRL_R;
    u32Reg&=SCB_SYSCTRL_R_SLEEPEXIT_MASK;
    u32Reg>>=SCB_SYSCTRL_R_SLEEPEXIT_BIT;
    enReturn=(SCB_nSLEEPEXIT)u32Reg;
    return enReturn;
}


SCB_nSTATUS SCB__enSetStackAligment(SCB_nAlignment enAlign)
{
    SCB_nSTATUS enReturn=SCB_enERROR;
    switch(enAlign)
    {
        case SCB_enALIGN_4BYTE:
            SCB_CFGCTRL_R&=~SCB_CFGCTRL_R_STKALIGN_MASK;
            enReturn=SCB_enOK;
            break;
        case SCB_enALIGN_8BYTE:
            SCB_CFGCTRL_R|=SCB_CFGCTRL_R_STKALIGN_MASK;
            enReturn=SCB_enOK;
            break;
        default:
            break;
    }

    return enReturn;
}
SCB_nAlignment SCB__enGetStackAligment(void)
{
    SCB_nAlignment enReturn=SCB_enALIGN_ERROR;
    uint32_t u32Reg=SCB_CFGCTRL_R;
    u32Reg&=SCB_CFGCTRL_R_STKALIGN_MASK;
    u32Reg>>=SCB_CFGCTRL_R_STKALIGN_BIT;
    enReturn=(SCB_nAlignment)u32Reg;
    return enReturn;
}
void SCB__vEnDIV0Trap(void)
{
    SCB_CFGCTRL_R|=SCB_CFGCTRL_R_DIV0_MASK;
}
void SCB__vDisDIV0Trap(void)
{
    SCB_CFGCTRL_R&=~SCB_CFGCTRL_R_DIV0_MASK;
}
void SCB__vEnUnAlignTrap(void)
{
    SCB_CFGCTRL_R|=SCB_CFGCTRL_R_UNALIGNED_MASK;
}
void SCB__vDisUnAlignTrap(void)
{
    SCB_CFGCTRL_R&=~SCB_CFGCTRL_R_UNALIGNED_MASK;
}
void SCB__vEnUnprivilegedSWTRIGGER(void)
{
    SCB_CFGCTRL_R|=SCB_CFGCTRL_R_MAINPEND_MASK;
}
void SCB__vDisUnprivilegedSWTRIGGER(void)
{
    SCB_CFGCTRL_R&=~SCB_CFGCTRL_R_MAINPEND_MASK;
}


void SCB_UsageFault__vSetPriority(SCB_nSYSPRI enPriority)
{
    uint32_t u32Reg=SCB_SYSPRI1_R;
    u32Reg&=~SCB_SYSPRI1_R_USAGE_MASK;
    u32Reg|=((uint32_t)enPriority &SCB_SYSPRI1_USAGE_MASK)<<SCB_SYSPRI1_R_USAGE_BIT;
    __asm(" DSB");
    SCB_SYSPRI1_R=u32Reg;
    __asm(" DSB");
}
SCB_nSYSPRI SCB_UsageFault__enGetPriority(void)
{
    SCB_nSYSPRI enReturn= SCB_enSYSPRI0;
    uint32_t u32Reg=SCB_SYSPRI1_R;
    u32Reg&=SCB_SYSPRI1_R_USAGE_MASK;
    u32Reg>>=SCB_SYSPRI1_R_USAGE_BIT;
    enReturn=(SCB_nSYSPRI)(u32Reg);
    return enReturn;
}
void SCB_BusFault__vSetPriority(SCB_nSYSPRI enPriority)
{
    uint32_t u32Reg=SCB_SYSPRI1_R;
    u32Reg&=~SCB_SYSPRI1_R_BUS_MASK;
    u32Reg|=((uint32_t)enPriority &SCB_SYSPRI1_BUS_MASK)<<SCB_SYSPRI1_R_BUS_BIT;
    __asm(" DSB");
    SCB_SYSPRI1_R=u32Reg;
    __asm(" DSB");
}
SCB_nSYSPRI SCB_BusFault__enGetPriority(void)
{
    SCB_nSYSPRI enReturn= SCB_enSYSPRI0;
    uint32_t u32Reg=SCB_SYSPRI1_R;
    u32Reg&=SCB_SYSPRI1_R_BUS_MASK;
    u32Reg>>=SCB_SYSPRI1_R_BUS_BIT;
    enReturn=(SCB_nSYSPRI)(u32Reg);
    return enReturn;
}
void SCB_MemoryFault__vSetPriority(SCB_nSYSPRI enPriority)
{
    uint32_t u32Reg=SCB_SYSPRI1_R;
    u32Reg&=~SCB_SYSPRI1_R_MEM_MASK;
    u32Reg|=((uint32_t)enPriority &SCB_SYSPRI1_MEM_MASK)<<SCB_SYSPRI1_R_MEM_BIT;
    __asm(" DSB");
    SCB_SYSPRI1_R=u32Reg;
    __asm(" DSB");
}
SCB_nSYSPRI SCB_MemoryFault__enGetPriority(void)
{
    SCB_nSYSPRI enReturn= SCB_enSYSPRI0;
    uint32_t u32Reg=SCB_SYSPRI1_R;
    u32Reg&=SCB_SYSPRI1_R_MEM_MASK;
    u32Reg>>=SCB_SYSPRI1_R_MEM_BIT;
    enReturn=(SCB_nSYSPRI)(u32Reg);
    return enReturn;
}
void SCB_SVCall__vSetPriority(SCB_nSYSPRI enPriority)
{
    uint32_t u32Reg=SCB_SYSPRI2_R;
    u32Reg&=~SCB_SYSPRI2_R_SVC_MASK;
    u32Reg|=((uint32_t)enPriority &SCB_SYSPRI2_SVC_MASK)<<SCB_SYSPRI2_R_SVC_BIT;
    __asm(" DSB");
    SCB_SYSPRI2_R=u32Reg;
    __asm(" DSB");
}
SCB_nSYSPRI SCB_SVCall__enGetPriority(void)
{
    SCB_nSYSPRI enReturn= SCB_enSYSPRI0;
    uint32_t u32Reg=SCB_SYSPRI2_R;
    u32Reg&=SCB_SYSPRI2_R_SVC_MASK;
    u32Reg>>=SCB_SYSPRI2_R_SVC_BIT;
    enReturn=(SCB_nSYSPRI)(u32Reg);
    return enReturn;
}
void SCB_SysTick__vSetPriority(SCB_nSYSPRI enPriority)
{
    uint32_t u32Reg=SCB_SYSPRI3_R;
    u32Reg&=~SCB_SYSPRI3_R_TICK_MASK;
    u32Reg|=((uint32_t)enPriority &SCB_SYSPRI3_TICK_MASK)<<SCB_SYSPRI3_R_TICK_BIT;
    __asm(" DSB");
    SCB_SYSPRI3_R=u32Reg;
    __asm(" DSB");
}
SCB_nSYSPRI SCB_SysTick__enGetPriority(void)
{
    SCB_nSYSPRI enReturn= SCB_enSYSPRI0;
    uint32_t u32Reg=SCB_SYSPRI3_R;
    u32Reg&=SCB_SYSPRI3_R_TICK_MASK;
    u32Reg>>=SCB_SYSPRI3_R_TICK_BIT;
    enReturn=(SCB_nSYSPRI)(u32Reg);
    return enReturn;

}
void SCB_PENDSV__vSetPriority(SCB_nSYSPRI enPriority)
{
    uint32_t u32Reg=SCB_SYSPRI3_R;
    u32Reg&=~SCB_SYSPRI3_R_PENDSV_MASK;
    u32Reg|=((uint32_t)enPriority &SCB_SYSPRI3_PENDSV_MASK)<<SCB_SYSPRI3_R_PENDSV_BIT;
    __asm(" DSB");
    SCB_SYSPRI3_R=u32Reg;
    __asm(" DSB");
}
SCB_nSYSPRI SCB_PENDSV__enGetPriority(void)
{
    SCB_nSYSPRI enReturn= SCB_enSYSPRI0;
    uint32_t u32Reg=SCB_SYSPRI3_R;
    u32Reg&=SCB_SYSPRI3_R_PENDSV_MASK;
    u32Reg>>=SCB_SYSPRI3_R_PENDSV_BIT;
    enReturn=(SCB_nSYSPRI)(u32Reg);
    return enReturn;
}
void SCB_DEBUG__vSetPriority(SCB_nSYSPRI enPriority)
{
    uint32_t u32Reg=SCB_SYSPRI3_R;
    u32Reg&=~SCB_SYSPRI3_R_DEBUG_MASK;
    u32Reg|=((uint32_t)enPriority &SCB_SYSPRI3_DEBUG_MASK)<<SCB_SYSPRI3_R_DEBUG_BIT;
    __asm(" DSB");
    SCB_SYSPRI3_R=u32Reg;
    __asm(" DSB");
}
SCB_nSYSPRI SCB_DEBUG__enGetPriority(void)
{
    SCB_nSYSPRI enReturn= SCB_enSYSPRI0;
    uint32_t u32Reg=SCB_SYSPRI3_R;
    u32Reg&=SCB_SYSPRI3_R_DEBUG_MASK;
    u32Reg>>=SCB_SYSPRI3_R_DEBUG_BIT;
    enReturn=(SCB_nSYSPRI)(u32Reg);
    return enReturn;
}



void SCB_UsageFault__vEnable(void)
{
    SCB_SYSHNDCTRL_R|=SCB_SYSHNDCTRL_R_USAGE_MASK;
}
void SCB_UsageFault__vDisable(void)
{
    SCB_SYSHNDCTRL_R&=~SCB_SYSHNDCTRL_R_USAGE_MASK;
}
void SCB_BusFault__vEnable(void)
{
    SCB_SYSHNDCTRL_R|=SCB_SYSHNDCTRL_R_BUS_MASK;
}
void SCB_BusFault__vDisable(void)
{
    SCB_SYSHNDCTRL_R&=~SCB_SYSHNDCTRL_R_BUS_MASK;
}
void SCB_MemoryFault__vEnable(void)
{
    SCB_SYSHNDCTRL_R|=SCB_SYSHNDCTRL_R_MEM_MASK;
}
void SCB_MemoryFault__vDisable(void)
{
    SCB_SYSHNDCTRL_R&=~SCB_SYSHNDCTRL_R_MEM_MASK;
}


void SCB_SVCall__vSetPending(void)
{
    SCB_SYSHNDCTRL_R|=SCB_SYSHNDCTRL_R_SVC_MASK;
}
void SCB_SVCall__vClearPending(void)
{
    SCB_SYSHNDCTRL_R&=~SCB_SYSHNDCTRL_R_SVC_MASK;
}
SCB_nPENDSTATE SCB_SVCall__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_SYSHNDCTRL_R;
    u32Reg&=SCB_SYSHNDCTRL_R_SVC_MASK;
    u32Reg>>=SCB_SYSHNDCTRL_R_SVC_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}
void SCB_BusFault__vSetPending(void)
{
    SCB_SYSHNDCTRL_R|=SCB_SYSHNDCTRL_R_BUSP_MASK;
}
void SCB_BusFault__vClearPending(void)
{
    SCB_SYSHNDCTRL_R&=~SCB_SYSHNDCTRL_R_BUSP_MASK;
}
SCB_nPENDSTATE SCB_BusFault__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_SYSHNDCTRL_R;
    u32Reg&=SCB_SYSHNDCTRL_R_BUSP_MASK;
    u32Reg>>=SCB_SYSHNDCTRL_R_BUSP_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}
void SCB_MemoryFault__vSetPending(void)
{
    SCB_SYSHNDCTRL_R|=SCB_SYSHNDCTRL_R_MEMP_MASK;
}
void SCB_MemoryFault__vClearPending(void)
{
    SCB_SYSHNDCTRL_R&=~SCB_SYSHNDCTRL_R_MEMP_MASK;
}
SCB_nPENDSTATE SCB_MemoryFault__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_SYSHNDCTRL_R;
    u32Reg&=SCB_SYSHNDCTRL_R_MEMP_MASK;
    u32Reg>>=SCB_SYSHNDCTRL_R_MEMP_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}
void SCB_UsageFault__vSetPending(void)
{
    SCB_SYSHNDCTRL_R|=SCB_SYSHNDCTRL_R_USAGEP_MASK;
}
void SCB_UsageFault__vClearPending(void)
{
    SCB_SYSHNDCTRL_R&=~SCB_SYSHNDCTRL_R_USAGEP_MASK;
}
SCB_nPENDSTATE SCB_UsageFault__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_SYSHNDCTRL_R;
    u32Reg&=SCB_SYSHNDCTRL_R_USAGEP_MASK;
    u32Reg>>=SCB_SYSHNDCTRL_R_USAGEP_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}

uint32_t SCB_MemoryFault_u32GetAddress(void)
{
    return SCB_MMADDR_R;
}

uint32_t SCB_BusFault_u32GetAddress(void)
{
    return SCB_FAULTADDR_R;
}
void SCB__vEnableExceptions(void)
{
    SCB_UsageFault__vEnable();
    SCB_BusFault__vEnable();
    SCB_MemoryFault__vEnable();
}

void SCB__vEnableTraps(void)
{
    SCB__vEnDIV0Trap();
    SCB__vEnUnAlignTrap();
    SCB__vEnUnprivilegedSWTRIGGER();
}

/*
 * ISR
 */
typedef enum
{
    ISR_enR0=0,
    ISR_enR1,
    ISR_enR2,
    ISR_enR3,
    ISR_enR12,
    ISR_enLR,
    ISR_enPC,
    ISR_enPSR,
}ISR_nContext;


void GetContext(uint32_t pu32Context[])
{
    //example 8 INVSTATE
    //pu32Context[ISR_enPSR]&=~0x01000000;
    //example 9 UNDEF
    //pu32Context[ISR_enPC]=0x0A00;
}

void NMIISR(void)
{
    //use for GPIO activation
    while(1);
}

void PendSVISR(void)
{
    //context switch, lower priority
    while(1);
}

uint16_t SCB_u16UsageFault=0;
void UsageFaultISR(void)
{
    __asm(" MRS R0, MSP");
    __asm(" B GetContext");
    SCB_u16UsageFault =SCB_UFAULTSTAT_R;
    switch(SCB_u16UsageFault)
    {
        case SCB_enUFAULTSTAT_UNDEF:
            while(1);
        case SCB_enUFAULTSTAT_INVSTAT:
            while(1);
        case SCB_enUFAULTSTAT_INVPC:
            while(1);
        case SCB_enUFAULTSTAT_NOCP:
            while(1);

//            example 7 INVPC
//            SCB_FAULTSTAT->NOCP=1;
//            __asm(" mov R14, #0xFFE0 \n");
//            __asm(" movt R14, #0xFFFF \n");
//            break;


//            example 8 INVSTATE
//            SCB_FAULTSTAT->NOCP=1;
//            break;


//            example 9 UNDEF
//            SCB_FAULTSTAT->NOCP=1;
//            break;
        case SCB_enUFAULTSTAT_UNALIGN:
            while(1);
        case SCB_enUFAULTSTAT_DIV0:
            while(1);
        default:
            while(1);
    }
}
void BusFaultISR(void)
{
    while(1);
}
void MemoryFaultISR(void)
{
    while(1);
}
void HardFaultISR(void)
{
    while(1);
}
void SVCallISR(void)
{
    while(1);
}






