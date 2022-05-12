/**
 *
 * @file Led_Init.h
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
 * @verbatim 17 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XAPPLICATION_EDUMKII_LED_XHEADER_LED_INIT_H_
#define XAPPLICATION_EDUMKII_LED_XHEADER_LED_INIT_H_

#include <xApplication/EDUMKII/Led/xHeader/Led_Enum.h>

void EDUMKII_Led_vInitDigital(EDUMKII_nLED enLedSelect);
void EDUMKII_Led_vInitPWM(EDUMKII_nLED enLedSelect);




#endif /* XAPPLICATION_EDUMKII_LED_XHEADER_LED_INIT_H_ */
