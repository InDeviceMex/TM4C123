/**
 *
 * @file GPIO_Init.c
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
 * @verbatim 3 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */


#include <xDriver_MCU/Driver_Header/GPIO/GPIO_App/GPIO_Init.h>

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Driver.h>


void GPIO__vInit(void)
{
    GPIO__vRegisterAllMODULEDefault();
}
