/*
 * SCB.c
 *
 *  Created on: 23 jun. 2018
 *      Author: InDev
 */

#include <xDriver_MCU/Driver_Header/SCB.h>

void NMI_vISR(void);
void PendSV_vISR(void);
void UsageFault_vISR(void);
void BusFault_vISR(void);
void MemoryFault_vISR(void);
void HardFault_vISR(void);
void SVCall_vISR(void);

#define SCB_vBarrier() {__asm(" DSB");}











inline void SCB__vInit(void)
{
    SCB__vSetVectorOffset(0x20000000u);
    SCB__vRegisterISR(&NMI_vISR,SCB_enVECISR_NMI);
    SCB__vRegisterISR(&PendSV_vISR,SCB_enVECISR_PENDSV);
    SCB__vRegisterISR(&UsageFault_vISR,SCB_enVECISR_USAGEFAULT);
    SCB__vRegisterISR(&BusFault_vISR,SCB_enVECISR_BUSFAULT);
    SCB__vRegisterISR(&MemoryFault_vISR,SCB_enVECISR_MEMMANAGE);
    SCB__vRegisterISR(&HardFault_vISR,SCB_enVECISR_HARDFAULT);
    SCB__vRegisterISR(&SVCall_vISR,SCB_enVECISR_SVCALL);
    SCB__vEnableTraps();
    SCB__vEnableExceptions();
    SCB__enSetPriorityGroup(SCB_enPRIGROUP_XXX);
    SCB__enSetStackAligment(SCB_enALIGN_4BYTE);
}

void SCB__vRegisterISR(void (*Isr) (void),SCB_nVECISR enVector)
{
    uint32_t u32BaseVector = SCB_VTOR_R;

    if((uint32_t)Isr !=0u)
    {
        if(u32BaseVector<=0x00010000u)
        {
            __asm(" cpsid i");
            FLASH__enWriteWorld((uint32_t)Isr|1u,u32BaseVector+((uint32_t)enVector*4u));
            __asm(" cpsie i");
        }
        else if((u32BaseVector>=0x20000000u) && (u32BaseVector<=0x20000400u) )
        {
            *((uint32_t*)u32BaseVector+(uint32_t)enVector)=(uint32_t)Isr|1u;
        }
        else{}
    }
}

/*
void SCB__vUnRegisterISR(SCB_nVECISR enVector)
{
    uint32_t u32BaseVector = SCB_VTOR_R;

    if(u32BaseVector<=0x00010000u)
    {
        __asm(" cpsid i");
        FLASH__enWrite((uint32_t)IntDefaultHandler|1,u32BaseVector+((uint32_t)enVector*4u));
        __asm(" cpsie i");
    }
    else if((u32BaseVector>=0x20000000u) && (u32BaseVector<=0x20000400u) )
    {
        *((uint32_t*)u32BaseVector+(uint32_t)enVector)=(uint32_t)IntDefaultHandler|1;
    }
}
*/




void PendSV_vISR(void)
{
    /*context switch, lower priority*/
    while(1u){}
}

uint32_t SCB_pu32Context[8];
void UsageFault_vISR(void)
{
    uint16_t SCB_u16UsageFault=0;
    __asm(
    " MRS R0, MSP\n"
#if defined ( __TI_ARM__ )
    " movw R2, SCB_pu32Context\n"
    " movt R2, SCB_pu32Context\n"
#elif defined ( __GNUC__ )
    " ldr R2, =SCB_pu32Context\n"
#endif
    " ldr R1, [R0, #0X0]\n"
    " str R1, [R2, #0x0]\n"/*SCB_pu32Context[0] R0*/
    " ldr R1, [R0, #0x4]\n"
    " str R1, [R2, #0x4]\n"/*SCB_pu32Context[1] R1*/
    " ldr R1, [R0, #0x8]\n"
    " str R1, [R2, #0x8]\n"/*SCB_pu32Context[2] R2*/
    " ldr R1, [R0, #0xC]\n"
    " str R1, [R2, #0xC]\n"/*SCB_pu32Context[3] R3*/
    " ldr R1, [R0, #0x10]\n"
    " str R1, [R2, #0x10]\n"/*SCB_pu32Context[4] R12*/
    " ldr R1, [R0, #0x14]\n"
    " str R1, [R2, #0x14]\n"/*SCB_pu32Context[5] LR*/
    " ldr R1, [R0, #0x18]\n"
    " str R1, [R2, #0x18]\n"/*SCB_pu32Context[6] PC*/
    " ldr R1, [R0, #0x1C]\n"
    " str R1, [R2, #0x1C]\n");/*SCB_pu32Context[7] PSR*/
    SCB_u16UsageFault =SCB_UCFSR_R;
    switch(SCB_u16UsageFault)
    {
        case (uint16_t)SCB_enUCFSR_UNDEFINSTR:
        case (uint16_t)SCB_enUCFSR_INVSTATE:
        case (uint16_t)SCB_enUCFSR_INVPC:
        case (uint16_t)SCB_enUCFSR_NOCP:
        case (uint16_t)SCB_enUCFSR_UNALIGNED:
        case (uint16_t)SCB_enUCFSR_DIVBYZERO:
        default:
            break;
    }
    while(1u){}
}
void BusFault_vISR(void)
{

    uint8_t SCB_u8BusFault=0;
    /*uint32_t SCB_u32MemoryBus=0;*/
    __asm(
    " MRS R0, MSP\n"
#if defined ( __TI_ARM__ )
    " movw R2, SCB_pu32Context\n"
    " movt R2, SCB_pu32Context\n"
#elif defined ( __GNUC__ )
    " ldr R2, =SCB_pu32Context\n"
#endif
    " ldr R1, [R0, #0X0]\n"
    " str R1, [R2, #0x0]\n"/*SCB_pu32Context[0] R0*/
    " ldr R1, [R0, #0x4]\n"
    " str R1, [R2, #0x4]\n"/*SCB_pu32Context[1] R1*/
    " ldr R1, [R0, #0x8]\n"
    " str R1, [R2, #0x8]\n"/*SCB_pu32Context[2] R2*/
    " ldr R1, [R0, #0xC]\n"
    " str R1, [R2, #0xC]\n"/*SCB_pu32Context[3] R3*/
    " ldr R1, [R0, #0x10]\n"
    " str R1, [R2, #0x10]\n"/*SCB_pu32Context[4] R12*/
    " ldr R1, [R0, #0x14]\n"
    " str R1, [R2, #0x14]\n"/*SCB_pu32Context[5] LR*/
    " ldr R1, [R0, #0x18]\n"
    " str R1, [R2, #0x18]\n"/*SCB_pu32Context[6] PC*/
    " ldr R1, [R0, #0x1C]\n"
    " str R1, [R2, #0x1C]\n");/*SCB_pu32Context[7] PSR*/
    SCB_u8BusFault =SCB_BCFSR_R;
    if((SCB_u8BusFault & (uint8_t)SCB_enBCFSR_BFARVALID) == (uint8_t)SCB_enBCFSR_BFARVALID)
    {
        /*SCB_u32MemoryBus=SCB_BFAR_R;*/
        SCB_u8BusFault&=~(uint32_t)SCB_enBCFSR_BFARVALID;
    }

    switch(SCB_u8BusFault)
    {
        case SCB_enBCFSR_LSPERR:
        case SCB_enBCFSR_STKERR:
        case SCB_enBCFSR_UNSTKERR:
        case SCB_enBCFSR_IMPRECISERR:
        case SCB_enBCFSR_PRECISERR:
        case SCB_enBCFSR_IBUSERR:
        default:
            break;
    }
    while(1u){}
}
void MemoryFault_vISR(void)
{
    uint8_t SCB_u8MemFault=0;
    /*uint32_t SCB_u32MemoryMem=0;*/
    __asm(
    " MRS R0, MSP\n"
#if defined ( __TI_ARM__ )
    " movw R2, SCB_pu32Context\n"
    " movt R2, SCB_pu32Context\n"
#elif defined ( __GNUC__ )
    " ldr R2, =SCB_pu32Context\n"
#endif
    " ldr R1, [R0, #0X0]\n"
    " str R1, [R2, #0x0]\n"/*SCB_pu32Context[0] R0*/
    " ldr R1, [R0, #0x4]\n"
    " str R1, [R2, #0x4]\n"/*SCB_pu32Context[1] R1*/
    " ldr R1, [R0, #0x8]\n"
    " str R1, [R2, #0x8]\n"/*SCB_pu32Context[2] R2*/
    " ldr R1, [R0, #0xC]\n"
    " str R1, [R2, #0xC]\n"/*SCB_pu32Context[3] R3*/
    " ldr R1, [R0, #0x10]\n"
    " str R1, [R2, #0x10]\n"/*SCB_pu32Context[4] R12*/
    " ldr R1, [R0, #0x14]\n"
    " str R1, [R2, #0x14]\n"/*SCB_pu32Context[5] LR*/
    " ldr R1, [R0, #0x18]\n"
    " str R1, [R2, #0x18]\n"/*SCB_pu32Context[6] PC*/
    " ldr R1, [R0, #0x1C]\n"
    " str R1, [R2, #0x1C]\n");/*SCB_pu32Context[7] PSR*/
    SCB_u8MemFault =SCB_MCFSR_R;
    if((SCB_u8MemFault & (uint8_t)SCB_enMCFSR_MMARVALID) == (uint8_t)SCB_enMCFSR_MMARVALID)
    {
        /*SCB_u32MemoryMem=SCB_MMFAR_R;*/
        SCB_u8MemFault&=~(uint32_t)SCB_enMCFSR_MMARVALID;
    }

    switch(SCB_u8MemFault)
    {
        case SCB_enMCFSR_MLSPERR:
        case SCB_enMCFSR_MSTKERR:
        case SCB_enMCFSR_MUNSTKERR:
        case SCB_enMCFSR_DACCVIOL:
        case SCB_enMCFSR_IACCVIOL:
        default:
            break;

    }
    while(1u){}
}
void HardFault_vISR(void)
{
    __asm(
    " MRS R0, MSP\n"
#if defined ( __TI_ARM__ )
    " movw R2, SCB_pu32Context\n"
    " movt R2, SCB_pu32Context\n"
#elif defined ( __GNUC__ )
    " ldr R2, =SCB_pu32Context\n"
#endif
    " ldr R1, [R0, #0X0]\n"
    " str R1, [R2, #0x0]\n"/*SCB_pu32Context[0] R0*/
    " ldr R1, [R0, #0x4]\n"
    " str R1, [R2, #0x4]\n"/*SCB_pu32Context[1] R1*/
    " ldr R1, [R0, #0x8]\n"
    " str R1, [R2, #0x8]\n"/*SCB_pu32Context[2] R2*/
    " ldr R1, [R0, #0xC]\n"
    " str R1, [R2, #0xC]\n"/*SCB_pu32Context[3] R3*/
    " ldr R1, [R0, #0x10]\n"
    " str R1, [R2, #0x10]\n"/*SCB_pu32Context[4] R12*/
    " ldr R1, [R0, #0x14]\n"
    " str R1, [R2, #0x14]\n"/*SCB_pu32Context[5] LR*/
    " ldr R1, [R0, #0x18]\n"
    " str R1, [R2, #0x18]\n"/*SCB_pu32Context[6] PC*/
    " ldr R1, [R0, #0x1C]\n"
    " str R1, [R2, #0x1C]\n");/*SCB_pu32Context[7] PSR*/
    while(1u){}
}

void SVCall_vISR(void)
{
    while(1u){}
}






