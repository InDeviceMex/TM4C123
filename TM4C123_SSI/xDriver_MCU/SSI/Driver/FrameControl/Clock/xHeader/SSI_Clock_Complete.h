/**
 *
 * @file SSI_Clock_Complete.h
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_CLOCK_XHEADER_SSI_CLOCK_COMPLETE_H_
#define XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_CLOCK_XHEADER_SSI_CLOCK_COMPLETE_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>
#include <xUtils/Standard/Standard.h>

void SSI__vSetClock(SSI_nMODULE enModule, uint32_t u32ClockArg);
uint32_t SSI__u32GetClock(SSI_nMODULE enModule);

#endif /* XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_CLOCK_XHEADER_SSI_CLOCK_COMPLETE_H_ */
