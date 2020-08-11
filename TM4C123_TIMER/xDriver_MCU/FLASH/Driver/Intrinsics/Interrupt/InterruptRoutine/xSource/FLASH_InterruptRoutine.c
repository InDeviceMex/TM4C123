/**
 *
 * @file FLASH_InterruptRoutine.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/FLASH/Driver/Intrinsics/Interrupt/InterruptRoutine/FLASH_InterruptRoutine.h>
#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

void (*FLASH__pvIRQVectorHandler) (void)={&FLASH__vIRQVectorHandler};




