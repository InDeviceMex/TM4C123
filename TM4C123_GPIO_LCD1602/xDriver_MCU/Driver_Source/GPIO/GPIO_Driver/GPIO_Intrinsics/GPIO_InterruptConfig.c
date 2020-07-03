/**
 *
 * @file GPIO_InterruptConfig.c
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




#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Intrinsics/GPIO_InterruptConfig.h>


void GPIO__vEnInterruptConfig(GPIO_nPORT enPort, GPIO_nPIN enPin,GPIO_nINT_CONFIG enIntConfig)
{
    uint32_t u32Sense=((uint32_t)enIntConfig>>8u)&1u;
    uint32_t u32Event=((uint32_t)enIntConfig)&3u;

    if( (uint32_t)GPIO_enSENSE_EDGE == u32Sense)
    {
        GPIO__vSetIntEdge(enPort,enPin,(GPIO_nEDGE)u32Event);
    }
    else
    {
        GPIO__vSetIntLevel(enPort,enPin,(GPIO_nLEVEL)u32Event);
    }
    GPIO__vEnInterrupt(enPort,enPin);
}



