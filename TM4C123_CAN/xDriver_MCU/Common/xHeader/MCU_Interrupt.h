/**
 *
 * @file MCU_Interrupt.h
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
 * @verbatim 27 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_INTERRUPT_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_INTERRUPT_H_

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(MCU__vEnGlobalInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__vDisGlobalInterrupt_RAM, ".ramcode")

void MCU__vEnGlobalInterrupt_RAM(void);
void MCU__vDisGlobalInterrupt_RAM(void);

#elif defined (__GNUC__ )

void MCU__vEnGlobalInterrupt_RAM(void) __attribute__((section(".ramcode")));
void MCU__vDisGlobalInterrupt_RAM(void) __attribute__((section(".ramcode")));

#endif

void MCU__vEnGlobalInterrupt(void);
void MCU__vDisGlobalInterrupt(void);

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_INTERRUPT_H_ */
