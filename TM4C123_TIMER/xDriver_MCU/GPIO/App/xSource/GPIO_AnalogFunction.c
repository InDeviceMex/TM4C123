/**
 *
 * @file GPIO_AnalogFunction.c
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

#include <stdint.h>
#include <xDriver_MCU/GPIO/App/Config/GPIO_Config.h>
#include <xDriver_MCU/GPIO/App/xHeader/GPIO_AnalogFunction.h>
#include <xDriver_MCU/GPIO/Driver/GPIO_Driver.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>

void GPIO__vSetAnalogFunction(GPIO_nANALOG_FUNCTION enFunction)
{
    uint32_t u32Port =(enFunction>>8u)&0xFFu;
    uint32_t u32Pin =(enFunction);
    if(u32Port>(uint32_t)GPIO_enPORT_MAX)
    {
        u32Port=(uint32_t)GPIO_enPORT_MAX;
    }
    u32Pin&=GPIO_enPIN_ALL;

    GPIO__vSetReady((GPIO_nPORT)u32Port);
    GPIO__enSetConfig((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
    GPIO__vDisADCTrigger((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    GPIO__vDisAltFunction((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    GPIO__vDisDigital((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    GPIO__vEnAnalog((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
}





