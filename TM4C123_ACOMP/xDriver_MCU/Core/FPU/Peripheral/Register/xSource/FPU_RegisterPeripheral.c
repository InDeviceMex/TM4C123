/**
 *
 * @file FPU_RegisterPeripheral.c
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
 * @verbatim 6 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/FPU/Peripheral/Register/xHeader/FPU_RegisterPeripheral.h>

inline void FPU_vBlocking(void)
{
  {__asm(" DSB");__asm(" ISB");}
}
