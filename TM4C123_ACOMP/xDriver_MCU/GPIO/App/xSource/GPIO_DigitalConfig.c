/**
 *
 * @file GPIO_DigitalConfig.c
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

#include <xUtils/Standard/Standard.h>
#include <stdlib.h>
#include <xDriver_MCU/GPIO/App/Config/xHeader/GPIO_ConfigStruct.h>
#include <xDriver_MCU/GPIO/App/xHeader/GPIO_DigitalConfig.h>
#include <xDriver_MCU/GPIO/App/xHeader/GPIO_DigitalFunction.h>
#include <xDriver_MCU/GPIO/Driver/GPIO_Driver.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>

GPIO_nSTATUS GPIO__enSetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction,
                                      GPIO_nCONFIG enConfigParam)
{

    GPIO_nSTATUS enReturn = GPIO_enSTATUS_ERROR;

    uint32_t u32Port = (enFunction >> 16U) & 0xFFU;
    uint32_t u32Bit = (enFunction >> 8U) & 0x1FU;
    uint32_t u32Pin = (u32Bit >> 2U) & 0xFFU;
    u32Pin = ((uint32_t) 1u << u32Pin);
    GPIO_nPORT enPort = (GPIO_nPORT) u32Port;
    GPIO_nPIN enPin = (GPIO_nPIN) u32Pin;
    GPIO_CONFIG_Typedef *psConfig = GPIO__psCreateConfigStruct(enConfigParam);

    if(psConfig != 0)
    {
        GPIO__vSetDigitalFunction(enFunction);
        GPIO__vSetResistorMode(enPort, enPin, psConfig->enResistorMode);
        GPIO__vSetOutputMode(enPort, enPin, psConfig->enOutputMode);
        GPIO__vSetDirection(enPort, enPin, psConfig->enDirection);
        GPIO__vSetDrive(enPort, enPin, psConfig->enDrive);
        GPIO__vDeleteConfigStruct(psConfig);
        enReturn = GPIO_enSTATUS_OK;
    }
    return enReturn;

}

GPIO_nSTATUS GPIO__enSetDigitalConfigStruct(GPIO_nDIGITAL_FUNCTION enFunction,
                                            const GPIO_CONFIG_Typedef *psConfig)
{

    GPIO_nSTATUS enReturn = GPIO_enSTATUS_ERROR;

    uint32_t u32Port = (enFunction >> 16U) & 0xFFU;
    uint32_t u32Bit = (enFunction >> 8U) & 0x1FU;
    uint32_t u32Pin = (u32Bit >> 2U) & 0xFFU;
    u32Pin = ((uint32_t) 1u << u32Pin);
    GPIO_nPORT enPort = (GPIO_nPORT) u32Port;
    GPIO_nPIN enPin = (GPIO_nPIN) u32Pin;
    if(psConfig != 0)
    {
        GPIO__vSetDigitalFunction(enFunction);
        GPIO__vSetResistorMode(enPort, enPin, psConfig->enResistorMode);
        GPIO__vSetOutputMode(enPort, enPin, psConfig->enOutputMode);
        GPIO__vSetDirection(enPort, enPin, psConfig->enDirection);
        GPIO__vSetDrive(enPort, enPin, psConfig->enDrive);
        enReturn = GPIO_enSTATUS_OK;
    }
    return enReturn;

}
GPIO_nCONFIG GPIO__enGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction)
{
    GPIO_nCONFIG enConfig = GPIO_enCONFIG_UNDEF;

    uint32_t u32Port = (enFunction >> 16U) & 0xFFU;
    uint32_t u32Bit = (enFunction >> 8U) & 0x1FU;
    uint32_t u32Pin = (u32Bit >> 2U) & 0xFFU;
    u32Pin = ((uint32_t) 1u << u32Pin);
    GPIO_nPORT enPort = (GPIO_nPORT) u32Port;
    GPIO_nPIN enPin = (GPIO_nPIN) u32Pin;

    GPIO_nRESMODE enResistorModeVar = GPIO_enRESMODE_UNDEF;
    GPIO_nOUTMODE enOutputModeVar = GPIO_enOUTMODE_UNDEF;
    GPIO_nDIR enDirectionVar = GPIO_enDIR_UNDEF;
    GPIO_nDRIVE enDriveVar = GPIO_enDRIVE_UNDEF;

    uint32_t u32Reg = 0;

    enResistorModeVar = GPIO__enGetResistorMode(enPort, enPin);
    enOutputModeVar = GPIO__enGetOutputMode(enPort, enPin);
    enDirectionVar = GPIO__enGetDirection(enPort, enPin);
    enDriveVar = GPIO__enGetDrive(enPort, enPin);

    u32Reg = ((uint32_t) enResistorModeVar << 0);
    u32Reg |= ((uint32_t) enOutputModeVar << 4);
    u32Reg |= ((uint32_t) enDirectionVar << 8);
    u32Reg |= ((uint32_t) enDriveVar << 16);

    enConfig = (GPIO_nCONFIG) u32Reg;
    return enConfig;
}

void GPIO__vGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction,
                             GPIO_CONFIG_Typedef *psConfig)
{

    uint32_t u32Port = (enFunction >> 16U) & 0xFFU;
    uint32_t u32Bit = (enFunction >> 8U) & 0x1FU;
    uint32_t u32Pin = (u32Bit >> 2U) & 0xFFU;
    u32Pin = ((uint32_t) 1u << u32Pin);
    GPIO_nPORT enPort = (GPIO_nPORT) u32Port;
    GPIO_nPIN enPin = (GPIO_nPIN) u32Pin;

    psConfig->enResistorMode = GPIO__enGetResistorMode(enPort, enPin);
    psConfig->enOutputMode = GPIO__enGetOutputMode(enPort, enPin);
    psConfig->enDirection = GPIO__enGetDirection(enPort, enPin);
    psConfig->enDrive = GPIO__enGetDrive(enPort, enPin);
}

GPIO_CONFIG_Typedef* GPIO__psGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction)
{
    GPIO_CONFIG_Typedef *psConfig = 0;

    uint32_t u32Port = (enFunction >> 16U) & 0xFFU;
    uint32_t u32Bit = (enFunction >> 8U) & 0x1FU;
    uint32_t u32Pin = (u32Bit >> 2U) & 0xFFU;
    u32Pin = ((uint32_t) 1u << u32Pin);
    GPIO_nPORT enPort = (GPIO_nPORT) u32Port;
    GPIO_nPIN enPin = (GPIO_nPIN) u32Pin;

#if defined ( __TI_ARM__ )
    psConfig = (GPIO_CONFIG_Typedef*) memalign(
            (size_t) 4,
            (size_t) (sizeof(GPIO_CONFIG_Typedef) ));
#elif defined ( __GNUC__ )
    psConfig = (GPIO_CONFIG_Typedef*) malloc((size_t)sizeof(GPIO_CONFIG_Typedef));
    #endif

    psConfig->enResistorMode = GPIO__enGetResistorMode(enPort, enPin);
    psConfig->enOutputMode = GPIO__enGetOutputMode(enPort, enPin);
    psConfig->enDirection = GPIO__enGetDirection(enPort, enPin);
    psConfig->enDrive = GPIO__enGetDrive(enPort, enPin);

    return psConfig;
}

