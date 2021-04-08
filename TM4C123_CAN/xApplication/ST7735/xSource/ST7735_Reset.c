/**
 *
 * @file ST7735_Reset.c
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
 * @verbatim 18 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/ST7735/xHeader/ST7735_Reset.h>
#include <xDriver_MCU/GPIO/GPIO.h>

void ST7735__vInitReset(void)
{
    GPIO__enSetDigitalConfig(GPIO_enGPIOF0, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
}

void ST7735__vSetReset(void)
{
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_0, 0UL);
}

void ST7735__vClearReset(void)
{
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_0, GPIO_enPIN_0);
}
