                                    /**
 *
 * @file SCB_VectorOffset.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_VECTOROFFSET_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_VECTOROFFSET_H_

#include <xDriver_MCU/Core/SCB/Peripheral/xHeader/SCB_Enum.h>
#include <xUtils/Standard/Standard.h>

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(SCB__vSetVectorOffset, ".ramcode")

void SCB__vSetVectorOffset(uint32_t u32Offset);

#elif defined (__GNUC__ )

void SCB__vSetVectorOffset(uint32_t u32Offset) __attribute__((section(".ramcode")));

#endif


extern void (*SCB__pfnVectors[SCB_VECTOR_TABLE_SIZE]) (void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_VECTOROFFSET_H_ */
