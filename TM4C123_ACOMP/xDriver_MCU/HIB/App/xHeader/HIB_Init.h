/**
 *
 * @file HIB_Init.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_INIT_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_INIT_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Enum.h>
HIB_nSTATUS HIB__enInit(uint32_t u32Match, uint32_t u32SubMatch,void (*pfIrqrRTCALTHandler) (void));


#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_INIT_H_ */
