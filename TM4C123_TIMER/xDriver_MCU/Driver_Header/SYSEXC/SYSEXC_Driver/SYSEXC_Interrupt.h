/**
 *
 * @file SYSEXC_Interrupt.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_DRIVER_SYSEXC_INTERRUPT_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_DRIVER_SYSEXC_INTERRUPT_H_


#include <xDriver_MCU/Driver_Header/SYSEXC/SYSEXC_Peripheral/SYSEXC_Enum.h>

/* ToDo make a better handle of interupt as GPIO*/
void SYSEXC__vEnInterrupt(SYSEXC_nINTERRUPT enInt);
void SYSEXC__vDisInterrupt(SYSEXC_nINTERRUPT enInt);
void SYSEXC__vClearInterrupt(SYSEXC_nINTERRUPT enInt);
SYSEXC_nSTATUS SYSEXC__enStatusInterrupt(SYSEXC_nINTERRUPT enInt);



#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_DRIVER_SYSEXC_INTERRUPT_H_ */
