/**
 *
 * @file GPIO_InterruptRoutine_Pines.c
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
 * @verbatim 30 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/GPIO/Header/Driver/Intrinsics/Interrupt/InterruptRoutine/GPIO_InterruptRoutine_Pines.h>

static void GPIO_vDUMMY(void);

void (*GPIO[6][8]) (void)={{&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY},
                           {&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY},
                           {&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY},
                           {&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY},
                           {&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY},
                           {&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY,&GPIO_vDUMMY},};

static void GPIO_vDUMMY(void)
{
    while(1u)
    {

    }
}



