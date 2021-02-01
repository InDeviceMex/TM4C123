/**
 *
 * @file ADC_InterruptRoutine_Source.h
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
 * @verbatim 19 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_ADC_INTERRUPTROUTINE_SOURCE_H_
#define XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_ADC_INTERRUPTROUTINE_SOURCE_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

extern void (*ADC_SAMPLE__vIRQSourceHandler[(uint32_t) ADC_enMODULE_MAX +1U][(uint32_t) ADC_enSEQ_MAX + 1U]) (void);
extern void (*ADC_COMP__vIRQSourceHandler[(uint32_t) ADC_enMODULE_MAX + 1U][(uint32_t) ADC_enSEQ_MAX +1U][(uint32_t) ADC_en_COMPARATOR_MAX +1U]) (void);

#endif /* XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_ADC_INTERRUPTROUTINE_SOURCE_H_ */
