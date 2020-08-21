/**
 *
 * @file HIB_Load.h
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
 * @verbatim 21 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_HIB_DRIVER_XHEADER_HIB_LOAD_H_
#define XDRIVER_MCU_HIB_DRIVER_XHEADER_HIB_LOAD_H_

#include <stdint.h>
#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Enum.h>

HIB_nSTATUS HIB__enGetLoad(uint32_t* pu32Load);
HIB_nSTATUS HIB__enSetLoad(uint32_t u32Load);

#endif /* XDRIVER_MCU_HIB_DRIVER_XHEADER_HIB_LOAD_H_ */
