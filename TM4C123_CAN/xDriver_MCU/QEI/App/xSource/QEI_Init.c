/**
 *
 * @file QEI_Init.c
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/QEI/App/xHeader/QEI_Init.h>

#include <xDriver_MCU/QEI/Driver/QEI_Driver.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vInit(void)
{
    QEI__vRegisterIRQVectorHandler( &QEI0__vIRQVectorHandler, QEI_enMODULE_0);
    QEI__vRegisterIRQVectorHandler( &QEI1__vIRQVectorHandler, QEI_enMODULE_1);
}



