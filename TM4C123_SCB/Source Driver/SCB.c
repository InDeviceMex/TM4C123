/*
 * SCB.c
 *
 *  Created on: 23 jun. 2018
 *      Author: InDev
 */

#include "SCB.h"



void SCB_PENDSV__vSetPending(void)
{
    SCB_INTCTRL->PENDSV=SCB_INTCTRL_PENDSV_SET;
}
void SCB_PENDSV__vClearPending(void)
{
    SCB_INTCTRL->UNPENDSV=SCB_INTCTRL_UNPENDSV_REMOVE;
}
SCB_nPENDSTATE SCB_PENDSV__enGetPending(void)
{
    SCB_nPENDSTATE enReturn= (SCB_nPENDSTATE) SCB_INTCTRL->PENDSV;
    return enReturn;
}


void SCB_SysTick__vSetPending(void)
{
    SCB_INTCTRL->PENDSTSET=SCB_INTCTRL_PENDSTSET_SET;
}
void SCB_SysTick__vClearPending(void)
{
    SCB_INTCTRL->PENDSTCLR=SCB_INTCTRL_PENDSTCLR_REMOVE;
}
SCB_nPENDSTATE SCB_SysTick__enGetPending(void)
{
    SCB_nPENDSTATE enReturn= (SCB_nPENDSTATE) SCB_INTCTRL->PENDSTSET;
    return enReturn;
}


void SCB_NMI__vSetPending(void)
{
    SCB_INTCTRL->NMISET=SCB_INTCTRL_NMISET_SET;
}


SCB_nPENDSTATE SCB_ISR__enGetPendingState(void)
{
    SCB_nPENDSTATE enReturn= (SCB_nPENDSTATE) SCB_INTCTRL->ISRPEND;
    return enReturn;
}
SCB_nVECISR SCB_ISR__enGetVectorPending(void)
{
    SCB_nVECISR enReturn= (SCB_nVECISR) SCB_INTCTRL->VECPEND;
    return enReturn;
}
SCB_nVECISR SCB_ISR__enGetVectorActive(void)
{
    SCB_nVECISR enReturn= (SCB_nVECISR) SCB_INTCTRL->VECACT;
    return enReturn;
}


void SCB__vSetVectorOffset(uint32_t u32Offset)
{
    u32Offset&=~0x3FF;
    SCB_VTABLE_R= u32Offset;
}


void SCB__vReqSysReset(void)
{
    SCB_APINT_R=SCB_APINT_R_VECTKEY_WRITE|SCB_APINT_R_SYSRESREQ_RESET;
}
SCB_nSTATUS SCB__enSetPriorityGroup(SCB_nPRIGROUP enGroup)
{
    SCB_nSTATUS enReturn=SCB_enERROR;
    switch(enGroup)
    {
        case SCB_enPRIGROUP_XXX:
            SCB_APINT_R=SCB_APINT_R_VECTKEY_WRITE|SCB_APINT_R_PRIGROUP_XXX;
            enReturn=SCB_enOK;
            break;
        case SCB_enPRIGROUP_XXY:
            SCB_APINT_R=SCB_APINT_R_VECTKEY_WRITE|SCB_APINT_R_PRIGROUP_XXY;
            enReturn=SCB_enOK;
            break;
        case SCB_enPRIGROUP_XYY:
            SCB_APINT_R=SCB_APINT_R_VECTKEY_WRITE|SCB_APINT_R_PRIGROUP_XYY;
            enReturn=SCB_enOK;
            break;
        case SCB_enPRIGROUP_YYY:
            SCB_APINT_R=SCB_APINT_R_VECTKEY_WRITE|SCB_APINT_R_PRIGROUP_YYY;
            enReturn=SCB_enOK;
            break;
        default:
            break;
    }
    return enReturn;
}
SCB_nPRIGROUP SCB__enGetPriorityGroup(void)
{
    uint32_t u32Reg=0;
    SCB_nPRIGROUP enReturn=SCB_enPRIGROUP_ERROR;
    u32Reg=SCB_APINT_R;
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
            SCB_SYSCTRL->SEVONPEND =SCB_SYSCTRL_SEVONPEND_ONLY;
            enReturn=SCB_enOK;
            break;
        case SCB_enWAKEUP_ALL:
            SCB_SYSCTRL->SEVONPEND =SCB_SYSCTRL_SEVONPEND_ALL;
            enReturn=SCB_enOK;
            break;
        default:
            break;
    }
    return enReturn;
}
SCB_nWAKEUPSOURCE SCB__enGetWakeUpSource(void)
{
    uint32_t u32Reg=0;
    SCB_nWAKEUPSOURCE enReturn=SCB_enWAKEUP_ERROR;
    u32Reg=SCB_SYSCTRL_R;
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
            SCB_SYSCTRL->SLEEPDEEP=SCB_SYSCTRL_SLEEPDEEP_SLEEP;
            enReturn=SCB_enOK;
            break;
        case SCB_enSleepDeep_DeepSleep:
            SCB_SYSCTRL->SLEEPDEEP=SCB_SYSCTRL_SLEEPDEEP_DEEPSLEEP;
            enReturn=SCB_enOK;
            break;
        default:
            break;
    }

    return enReturn;
}
SCB_nSleepDeep SCB__enGetSleepMode(void)
{
    uint32_t u32Reg=0;
    SCB_nSleepDeep enReturn=SCB_enSleepDeep_ERROR;
    u32Reg=SCB_SYSCTRL_R;
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
            SCB_SYSCTRL->SLEEPEXIT=SCB_SYSCTRL_SLEEPEXIT_NOSLEEP;
            enReturn=SCB_enOK;
            break;
        case SCB_enSLEEPEXIT_SLEEP:
            SCB_SYSCTRL->SLEEPEXIT=SCB_SYSCTRL_SLEEPEXIT_SLEEP;
            enReturn=SCB_enOK;
            break;
        default:
            break;
    }

    return enReturn;
}
SCB_nSLEEPEXIT SCB__enGetSleepExit(void)
{
    uint32_t u32Reg=0;
    SCB_nSLEEPEXIT enReturn=SCB_enSLEEPEXIT_ERROR;
    u32Reg=SCB_SYSCTRL_R;
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
            SCB_CFGCTRL->STKALIGN=SCB_CFGCTRL_STKALIGN_4BYTE;
            enReturn=SCB_enOK;
            break;
        case SCB_enALIGN_8BYTE:
            SCB_CFGCTRL->STKALIGN=SCB_CFGCTRL_STKALIGN_8BYTE;
            enReturn=SCB_enOK;
            break;
        default:
            break;
    }

    return enReturn;
}
SCB_nAlignment SCB__enGetStackAligment(void)
{
    uint32_t u32Reg=0;
    SCB_nAlignment enReturn=SCB_enALIGN_ERROR;
    u32Reg=SCB_CFGCTRL_R;
    u32Reg&=SCB_CFGCTRL_R_STKALIGN_MASK;
    u32Reg>>=SCB_CFGCTRL_R_STKALIGN_BIT;
    enReturn=(SCB_nAlignment)u32Reg;
    return enReturn;
}
void SCB__vEnDIV0Trap(void)
{
    SCB_CFGCTRL->DIV0=SCB_CFGCTRL_DIV0_TRAP;
}
void SCB__vDisDIV0Trap(void)
{
    SCB_CFGCTRL->DIV0=SCB_CFGCTRL_DIV0_NOTRAP;
}
void SCB__vEnUnAlignTrap(void)
{
    SCB_CFGCTRL->UNALIGNED=SCB_CFGCTRL_UNALIGNED_TRAP;
}
void SCB__vDisUnAlignTrap(void)
{
    SCB_CFGCTRL->UNALIGNED=SCB_CFGCTRL_UNALIGNED_NOTRAP;
}
void SCB__vEnUnprivilegedSWTRIGGER(void)
{
    SCB_CFGCTRL->MAINPEND=SCB_CFGCTRL_MAINPEND_EN;
}
void SCB__vDisUnprivilegedSWTRIGGER(void)
{
    SCB_CFGCTRL->MAINPEND=SCB_CFGCTRL_MAINPEND_DIS;
}


void SCB_UsageFault__vSetPriority(SCB_nSYSPRI enPriority)
{
    SCB_SYSPRI1->USAGE=(uint32_t)enPriority &SCB_SYSPRI1_USAGE_MASK;
}
SCB_nSYSPRI SCB_UsageFault__enGetPriority(void)
{
    return (SCB_nSYSPRI)(SCB_SYSPRI1->USAGE &SCB_SYSPRI1_USAGE_MASK);
}
void SCB_BusFault__vSetPriority(SCB_nSYSPRI enPriority)
{
    SCB_SYSPRI1->BUS=(uint32_t)enPriority &SCB_SYSPRI1_BUS_MASK;
}
SCB_nSYSPRI SCB_BusFault__enGetPriority(void)
{
    return (SCB_nSYSPRI)(SCB_SYSPRI1->BUS &SCB_SYSPRI1_BUS_MASK);
}
void SCB_MemoryFault__vSetPriority(SCB_nSYSPRI enPriority)
{
    SCB_SYSPRI1->MEM=(uint32_t)enPriority &SCB_SYSPRI1_MEM_MASK;
}
SCB_nSYSPRI SCB_MemoryFault__enGetPriority(void)
{
    return (SCB_nSYSPRI)(SCB_SYSPRI1->MEM &SCB_SYSPRI1_MEM_MASK);
}
void SCB_SVCall__vSetPriority(SCB_nSYSPRI enPriority)
{
    SCB_SYSPRI2->SVC=(uint32_t)enPriority &SCB_SYSPRI2_SVC_MASK;
}
SCB_nSYSPRI SCB_SVCall__enGetPriority(void)
{
    return (SCB_nSYSPRI)(SCB_SYSPRI2->SVC &SCB_SYSPRI2_SVC_MASK);
}
void SCB_SysTick__vSetPriority(SCB_nSYSPRI enPriority)
{
    SCB_SYSPRI3->TICK=(uint32_t)enPriority &SCB_SYSPRI3_TICK_MASK;
}
SCB_nSYSPRI SCB_SysTick__enGetPriority(void)
{
    return (SCB_nSYSPRI)(SCB_SYSPRI3->TICK &SCB_SYSPRI3_TICK_MASK);
}
void SCB_PENDSV__vSetPriority(SCB_nSYSPRI enPriority)
{
    SCB_SYSPRI3->PENDSV=(uint32_t)enPriority &SCB_SYSPRI3_PENDSV_MASK;
}
SCB_nSYSPRI SCB_PENDSV__enGetPriority(void)
{
    return (SCB_nSYSPRI)(SCB_SYSPRI3->PENDSV &SCB_SYSPRI3_PENDSV_MASK);
}
void SCB_DEBUG__vSetPriority(SCB_nSYSPRI enPriority)
{
    SCB_SYSPRI3->DEBUG=(uint32_t)enPriority &SCB_SYSPRI3_DEBUG_MASK;
}
SCB_nSYSPRI SCB_DEBUG__enGetPriority(void)
{
    return (SCB_nSYSPRI)(SCB_SYSPRI3->DEBUG &SCB_SYSPRI3_DEBUG_MASK);
}



void SCB_UsageFault__vEnable(void)
{
    SCB_SYSHNDCTRL->USAGE=SCB_SYSHNDCTRL_USAGE_EN;
}
void SCB_UsageFault__vDisable(void)
{
    SCB_SYSHNDCTRL->USAGE=SCB_SYSHNDCTRL_USAGE_DIS;
}
void SCB_BusFault__vEnable(void)
{
    SCB_SYSHNDCTRL->BUS=SCB_SYSHNDCTRL_BUS_EN;
}
void SCB_BusFault__vDisable(void)
{
    SCB_SYSHNDCTRL->BUS=SCB_SYSHNDCTRL_BUS_DIS;
}
void SCB_MemoryFault__vEnable(void)
{
    SCB_SYSHNDCTRL->MEM=SCB_SYSHNDCTRL_MEM_EN;
}
void SCB_MemoryFault__vDisable(void)
{
    SCB_SYSHNDCTRL->MEM=SCB_SYSHNDCTRL_MEM_DIS;
}


void SCB_SVCall__vSetPending(void)
{
    SCB_SYSHNDCTRL->SVC=SCB_SYSHNDCTRL_SVC_PEND;
}
void SCB_SVCall__vClearPending(void)
{
    SCB_SYSHNDCTRL->SVC=SCB_SYSHNDCTRL_SVC_NOPEND;
}
SCB_nPENDSTATE SCB_SVCall__enGetPending(void)
{
    SCB_nPENDSTATE enReturn= (SCB_nPENDSTATE) SCB_SYSHNDCTRL->SVC;
    return enReturn;
}
void SCB_BusFault__vSetPending(void)
{
    SCB_SYSHNDCTRL->BUSP=SCB_SYSHNDCTRL_BUSP_PEND;
}
void SCB_BusFault__vClearPending(void)
{
    SCB_SYSHNDCTRL->BUSP=SCB_SYSHNDCTRL_BUSP_NOPEND;
}
SCB_nPENDSTATE SCB_BusFault__enGetPending(void)
{
    SCB_nPENDSTATE enReturn= (SCB_nPENDSTATE) SCB_SYSHNDCTRL->BUSP;
    return enReturn;
}
void SCB_MemoryFault__vSetPending(void)
{
    SCB_SYSHNDCTRL->MEMP=SCB_SYSHNDCTRL_MEMP_PEND;
}
void SCB_MemoryFault__vClearPending(void)
{
    SCB_SYSHNDCTRL->MEMP=SCB_SYSHNDCTRL_MEMP_NOPEND;
}
SCB_nPENDSTATE SCB_MemoryFault__enGetPending(void)
{
    SCB_nPENDSTATE enReturn= (SCB_nPENDSTATE) SCB_SYSHNDCTRL->MEMP;
    return enReturn;
}
void SCB_UsageFault__vSetPending(void)
{
    SCB_SYSHNDCTRL->USAGEP=SCB_SYSHNDCTRL_USAGEP_PEND;
}
void SCB_UsageFault__vClearPending(void)
{
    SCB_SYSHNDCTRL->USAGEP=SCB_SYSHNDCTRL_USAGEP_NOPEND;
}
SCB_nPENDSTATE SCB_UsageFault__enGetPending(void)
{
    SCB_nPENDSTATE enReturn= (SCB_nPENDSTATE) SCB_SYSHNDCTRL->USAGEP;
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
void UsageFaultISR(void)
{

    uint16_t u16UsageFault=0;
    u16UsageFault =SCB_UFAULTSTAT_R;
    switch(u16UsageFault)
    {
        case SCB_enUFAULTSTAT_UNDEF:
            while(1);
        case SCB_enUFAULTSTAT_INVSTAT:
            while(1);
        case SCB_enUFAULTSTAT_INVPC:
            while(1);
        case SCB_enUFAULTSTAT_NOCP:
            //while(1);
            //example 7 INVPC
            //SCB_FAULTSTAT->NOCP=1;
            //__asm(" mov R14, #0xFFE0 \n");
            //__asm(" movt R14, #0xFFFF \n");
            //break;
            //example 8 INVSTATE
//            SCB_FAULTSTAT->NOCP=1;
//            __asm(" pop {R0} \n");
//            __asm(" pop {R0} \n");
//            __asm(" pop {R0} \n");
//            __asm(" pop {R1} \n");
//            __asm(" pop {R2} \n");
//            __asm(" pop {R3} \n");
//            __asm(" pop {R12} \n");
//            __asm(" pop {R4} \n");
//            __asm(" pop {R5} \n");
//            __asm(" pop {R6} \n");
//            __asm(" bic R7,R6,#0x01000000 \n");
//            __asm(" push {R7} \n");
//            __asm(" push {R5} \n");
//            __asm(" push {R4} \n");
//            __asm(" push {R12} \n");
//            __asm(" push {R3} \n");
//            __asm(" push {R2} \n");
//            __asm(" push {R1} \n");
//            __asm(" push {R0} \n");
//            __asm(" push {R0} \n");
//            __asm(" push {R0} \n");
//            break;
            //example 9 UNDEF
            SCB_FAULTSTAT->NOCP=1;
            __asm(" pop {R0} \n");
            __asm(" pop {R0} \n");
            __asm(" pop {R0} \n");
            __asm(" pop {R1} \n");
            __asm(" pop {R2} \n");
            __asm(" pop {R3} \n");
            __asm(" pop {R12} \n");
            __asm(" pop {R4} \n");
            __asm(" pop {R5} \n");
            __asm(" mov R5,#0x0A00 \n");
            __asm(" push {R5} \n");
            __asm(" push {R4} \n");
            __asm(" push {R12} \n");
            __asm(" push {R3} \n");
            __asm(" push {R2} \n");
            __asm(" push {R1} \n");
            __asm(" push {R0} \n");
            __asm(" push {R0} \n");
            __asm(" push {R0} \n");
            break;
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






