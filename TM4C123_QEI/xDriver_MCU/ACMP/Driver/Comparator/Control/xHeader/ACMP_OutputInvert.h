/**
 *
 * @file ACMP_OutputInvert.h
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
 * @verbatim Apr 2, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 2, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_CONTROL_XHEADER_ACMP_OUTPUTINVERT_H_
#define XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_CONTROL_XHEADER_ACMP_OUTPUTINVERT_H_

#include <ACMP/Peripheral/xHeader/ACMP_Enum.h>

void ACMP__vSetComparatorOutputInvert(ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg, ACMP_nOUTPUT_INVERT enOutputInvertArg);
ACMP_nOUTPUT_INVERT ACMP__enGetComparatorOutputInvert(ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg);

#endif /* XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_CONTROL_XHEADER_ACMP_OUTPUTINVERT_H_ */
