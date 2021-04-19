/**
 *
 * @file ACMP_RegisterPeripheral.c
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
 * @verbatim Mar 31, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 31, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Peripheral/Register/RegisterPeripheral/ACMP_RegisterPeripheral.h>

ACMP_TypeDef* ACMP_BLOCK[(uint32_t) ACMP_enMODULE_MAX] = {ACMP0};
uint32_t ACMP_BLOCK_ADDRESS[(uint32_t) ACMP_enMODULE_MAX] = {ACMP0_BASE};






