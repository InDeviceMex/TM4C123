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

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_App/GPIO_AnalogFunction.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Intrinsics/GPIO_Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Driver.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_App/GPIO_Config/GPIO_Config.h>

void GPIO__vSetAnalogFunction(GPIO_nANALOG_FUNCTION enFunction)
{
    uint32_t u32Port =(enFunction>>8u)&0xFFu;
    uint32_t u32Pin =(enFunction);
    if(u32Port>(uint32_t)GPIO_enMAX)
    {
        u32Port=(uint32_t)GPIO_enMAX;
    }
    u32Pin&=GPIO_enALL;

    GPIO__vSetReady((GPIO_nPORT)u32Port);
    GPIO__enSetConfig((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
    GPIO__vDisADCTrigger((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    GPIO__vDisAltFunction((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    GPIO__vDisDigital((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    GPIO__vEnAnalog((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
}





