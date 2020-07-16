/**
 *
 * @file TIMER_ModeGeneric.h
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
 * @verbatim 15 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_MODEGENERIC_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_MODEGENERIC_H_

#include <TIMER/TIMER_Driver/TIMER_Intrinsics/TIMER_Primitives/TIMER_Primitives.h>

uint32_t TIMER__u32GetModeGeneric(TIMER_nMODULE enModule,uint32_t u32Mask, uint32_t u32Bit);
void TIMER__vSetModeGeneric(TIMER_nMODULE enModule, uint32_t u32ModeGeneric, uint32_t u32Mask, uint32_t u32Bit);



#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_MODEGENERIC_H_ */
