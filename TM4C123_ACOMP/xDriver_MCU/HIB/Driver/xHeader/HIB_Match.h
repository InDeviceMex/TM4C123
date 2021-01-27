/**
 *
 * @file HIB_Match.h
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

#ifndef XDRIVER_MCU_HIB_DRIVER_XHEADER_HIB_MATCH_H_
#define XDRIVER_MCU_HIB_DRIVER_XHEADER_HIB_MATCH_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Enum.h>

HIB_nSTATUS HIB__enSetMatch(uint32_t u32Match, uint32_t u32SubMatch);
HIB_nSTATUS HIB__enGetMatch(uint32_t* pu32Match, uint32_t *pu32SubMatch);

#endif /* XDRIVER_MCU_HIB_DRIVER_XHEADER_HIB_MATCH_H_ */
