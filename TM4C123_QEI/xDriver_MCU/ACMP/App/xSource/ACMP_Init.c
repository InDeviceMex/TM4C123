/**
 *
 * @file ACMP_Init.c
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
 * @verbatim Apr 5, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 5, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/App/xHeader/ACMP_Init.h>

#include <xDriver_MCU/ACMP/Driver/ACMP_Driver.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

void ACMP__vInit(void)
{
    ACMP__vRegisterIRQVectorHandler( &ACMP0_Comp0__vIRQVectorHandler, ACMP_enMODULE_0, ACMP_enCOMP_0);
    ACMP__vRegisterIRQVectorHandler( &ACMP0_Comp1__vIRQVectorHandler, ACMP_enMODULE_0, ACMP_enCOMP_1);
}



