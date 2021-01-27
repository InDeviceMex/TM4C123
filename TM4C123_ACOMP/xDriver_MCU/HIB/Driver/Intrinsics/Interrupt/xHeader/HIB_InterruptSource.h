/**
 *
 * @file HIB_InterruptSource.h
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

#ifndef XDRIVER_MCU_HIB_DRIVER_INTRINSICS_INTERRUPT_XHEADER_HIB_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_HIB_DRIVER_INTRINSICS_INTERRUPT_XHEADER_HIB_INTERRUPTSOURCE_H_

#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Enum.h>

HIB_nSTATUS HIB__enEnInterruptSource(HIB_nINT enInterruptParam);
HIB_nSTATUS HIB__enDisInterruptSource(HIB_nINT enInterruptParam);
HIB_nSTATUS HIB__enClearInterruptSource(HIB_nINT enInterruptParam);
HIB_nINT_STATUS HIB__enStatusInterruptSource(HIB_nINT enInterruptParam);

#endif /* XDRIVER_MCU_HIB_DRIVER_INTRINSICS_INTERRUPT_XHEADER_HIB_INTERRUPTSOURCE_H_ */
