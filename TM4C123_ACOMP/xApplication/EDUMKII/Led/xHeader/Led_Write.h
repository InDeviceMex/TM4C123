/**
 *
 * @file Led_Write.h
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
#ifndef XAPPLICATION_EDUMKII_LED_XHEADER_LED_WRITE_H_
#define XAPPLICATION_EDUMKII_LED_XHEADER_LED_WRITE_H_

#include <xApplication/EDUMKII/Led/xHeader/Led_Enum.h>

void EDUMKII_Led_vWriteDigital(EDUMKII_nLED enLedSelect, uint32_t u32Value);
void EDUMKII_Led_vWritePWM(EDUMKII_nLED enLedSelect, uint32_t u32Value);
void EDUMKII_Led_vWriteRGB(uint32_t u32ValueRed,uint32_t u32ValueGreen,uint32_t u32ValueBlue);





#endif /* XAPPLICATION_EDUMKII_LED_XHEADER_LED_WRITE_H_ */
