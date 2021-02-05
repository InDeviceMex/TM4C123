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

#pragma  CODE_SECTION(MCU__vEnGlobalInterrupt, ".ramcode")
#pragma  CODE_SECTION(MCU__vDisGlobalInterrupt, ".ramcode")

void MCU__vEnGlobalInterrupt(void);
void MCU__vDisGlobalInterrupt(void);

#elif defined (__GNUC__ )

void MCU__vEnGlobalInterrupt(void) __attribute__((section(".ramcode")));
void MCU__vDisGlobalInterrupt(void) __attribute__((section(".ramcode")));

#endif



#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_INTERRUPT_H_ */
