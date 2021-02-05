/**
 *
 * @file SYSEXC_InterruptRoutine_Vector.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSEXC/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SYSEXC_InterruptRoutine_Vector.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/SYSEXC/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SYSEXC_InterruptRoutine_Source.h>
#include <xDriver_MCU/SYSEXC/Peripheral/SYSEXC_Peripheral.h>

uint32_t SYSEXC_pu32Context[8UL];

void SYSEXC__vIRQVectorHandler(void)
{
    {
    __asm(
        " MRS R0, MSP\n"
    #if defined (__TI_ARM__ )
        " movw R2, SYSEXC_pu32Context\n"
        " movt R2, SYSEXC_pu32Context\n"
    #elif defined (__GNUC__ )
        " ldr R2, = SYSEXC_pu32Context\n"
    #endif
        " ldr R1, [R0, #0X0]\n"
        " str R1, [R2, #0x0]\n"/*SYSEXC_pu32Context[0] R0*/
        " ldr R1, [R0, #0x4]\n"
        " str R1, [R2, #0x4]\n"/*SYSEXC_pu32Context[1] R1*/
        " ldr R1, [R0, #0x8]\n"
        " str R1, [R2, #0x8]\n"/*SYSEXC_pu32Context[2] R2*/
        " ldr R1, [R0, #0xC]\n"
        " str R1, [R2, #0xC]\n"/*SYSEXC_pu32Context[3] R3*/
        " ldr R1, [R0, #0x10]\n"
        " str R1, [R2, #0x10]\n"/*SYSEXC_pu32Context[4] R12*/
        " ldr R1, [R0, #0x14]\n"
        " str R1, [R2, #0x14]\n"/*SYSEXC_pu32Context[5] LR*/
        " ldr R1, [R0, #0x18]\n"
        " str R1, [R2, #0x18]\n"/*SYSEXC_pu32Context[6] PC*/
        " ldr R1, [R0, #0x1C]\n"
        " str R1, [R2, #0x1C]\n");/*SYSEXC_pu32Context[7] PSR*/
    };

    volatile uint32_t u32Reg = 0UL;
    u32Reg = SYSEXC_SYSEXCMIS_R;

    if(0UL != (u32Reg & (uint32_t) SYSEXC_enINT_DENORMAL))
    {
        SYSEXC_SYSEXCIC_R = (uint32_t) SYSEXC_enINT_DENORMAL;
        SYSEXC__vIRQSourceHandler[(uint32_t) SYSEXC_enINTERRUPT_DENORMAL]();
    }
    if(0UL != (u32Reg & (uint32_t) SYSEXC_enINT_DIV0))
    {
        SYSEXC_SYSEXCIC_R = (uint32_t) SYSEXC_enINT_DIV0;
        SYSEXC__vIRQSourceHandler[(uint32_t) SYSEXC_enINTERRUPT_DIV0]();
    }
    if(0UL != (u32Reg & (uint32_t) SYSEXC_enINT_INVALID))
    {
        SYSEXC_SYSEXCIC_R = (uint32_t) SYSEXC_enINT_INVALID;
        SYSEXC__vIRQSourceHandler[(uint32_t) SYSEXC_enINTERRUPT_INVALID]();
    }
    if(0UL != (u32Reg & (uint32_t) SYSEXC_enINT_UNDERFLOW))
    {
        SYSEXC_SYSEXCIC_R = (uint32_t) SYSEXC_enINT_UNDERFLOW;
        SYSEXC__vIRQSourceHandler[(uint32_t) SYSEXC_enINTERRUPT_UNDERFLOW]();
    }
    if(0UL != (u32Reg & (uint32_t) SYSEXC_enINT_OVERFLOW))
    {
        SYSEXC_SYSEXCIC_R = (uint32_t) SYSEXC_enINT_OVERFLOW;
        SYSEXC__vIRQSourceHandler[(uint32_t) SYSEXC_enINTERRUPT_OVERFLOW]();
    }
    if(0UL != (u32Reg & (uint32_t) SYSEXC_enINT_INEXACT))
    {
        SYSEXC_SYSEXCIC_R = (uint32_t) SYSEXC_enINT_INEXACT;
        SYSEXC__vIRQSourceHandler[(uint32_t) SYSEXC_enINTERRUPT_INEXACT]();
    }
}
