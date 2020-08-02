/**
 *
 * @file SYSEXC_Init.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */


#include <xDriver_MCU/SYSEXC/Header/Driver/SYSEXC_Init.h>


#include <stdint.h>
#include <xDriver_MCU/Core/NVIC/Header/NVIC.h>
#include <xDriver_MCU/Core/SCB/Header/SCB.h>
#include <xDriver_MCU/SYSEXC/Header/Peripheral/SYSEXC_Peripheral.h>
#include <xDriver_MCU/SYSEXC/Header/Driver/SYSEXC_InterruptRoutine.h>

void SYSEXC__vInit(SYSEXC_nINTERRUPT enInt,SYSEXC_nPRIORITY enPri)
{
    uint32_t u32Reg= (uint32_t)enInt & (uint32_t)0x3F;

    SCB__vRegisterISR(&SYSEXC__vISR,SCB_enVECISR_SYSEXC);
    SYSEXC_SYSEXCIM_R&=~(SYSEXC_SYSEXCIM_R_FPIDCIM_MASK|
            SYSEXC_SYSEXCIM_R_FPDZCIM_MASK|
            SYSEXC_SYSEXCIM_R_FPIOCIM_MASK|
            SYSEXC_SYSEXCIM_R_FPUFCIM_MASK|
            SYSEXC_SYSEXCIM_R_FPOFCIM_MASK|
            SYSEXC_SYSEXCIM_R_FPIXCIM_MASK);

    SYSEXC_SYSEXCIM_R|=(u32Reg);
    NVIC__enSetEnableIRQ(NVIC_enSTIR_SYSEXC,(NVIC_nPRIORITY)enPri);
}
