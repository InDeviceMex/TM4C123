/**
 *
 * @file GPIO_Config.c
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
#include <xDriver_MCU/GPIO/App/Config/GPIO_Config.h>

#include <stdlib.h>
#include <xDriver_MCU/GPIO/App/Config/xHeader/GPIO_ConfigStruct.h>
#include <xDriver_MCU/GPIO/Driver/GPIO_Driver.h>

GPIO_nSTATUS GPIO__enSetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nCONFIG enConfigParam)
{
    GPIO_nSTATUS enReturn = GPIO_enSTATUS_ERROR;
    GPIO_CONFIG_Typedef *psConfig = GPIO__psCreateConfigStruct(enConfigParam);

    if(0UL != (uint32_t) psConfig)
    {
        GPIO__vSetResistorMode( enPort, enPin, psConfig->enResistorMode);
        GPIO__vSetOutputMode( enPort, enPin, psConfig->enOutputMode);
        GPIO__vSetDirection( enPort, enPin, psConfig->enDirection);
        GPIO__vSetDrive( enPort, enPin, psConfig->enDrive);
        GPIO__vDeleteConfigStruct( psConfig);
        enReturn = GPIO_enSTATUS_OK;
    }
    return enReturn;
}

GPIO_nSTATUS GPIO__enSetConfigStruct(GPIO_nPORT enPort, GPIO_nPIN enPin, const GPIO_CONFIG_Typedef *psConfig)
{
    GPIO_nSTATUS enReturn = GPIO_enSTATUS_ERROR;
    if(0UL != (uint32_t) psConfig)
    {
        GPIO__vSetResistorMode( enPort, enPin, psConfig->enResistorMode);
        GPIO__vSetOutputMode( enPort, enPin, psConfig->enOutputMode);
        GPIO__vSetDirection( enPort, enPin, psConfig->enDirection);
        GPIO__vSetDrive( enPort, enPin, psConfig->enDrive);
        enReturn = GPIO_enSTATUS_OK;
    }
    return enReturn;
}

GPIO_nCONFIG GPIO__enGetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nCONFIG enConfig = GPIO_enCONFIG_UNDEF;

    uint32_t u32ResistorModeVar = 0xFFFFFFFFUL;
    uint32_t u32OutputModeVar = 0xFFFFFFFFUL;
    uint32_t u32DirectionVar = 0xFFFFFFFFUL;
    uint32_t u32DriveVar = 0xFFFFFFFFUL;

    uint32_t u32Reg = 0UL;

    u32ResistorModeVar = (uint32_t) GPIO__enGetResistorMode( enPort, enPin);
    u32ResistorModeVar <<= 0UL;
    u32OutputModeVar = (uint32_t) GPIO__enGetOutputMode( enPort, enPin);
    u32OutputModeVar <<= 4UL;
    u32DirectionVar = (uint32_t) GPIO__enGetDirection( enPort, enPin);
    u32DirectionVar <<= 8UL;
    u32DriveVar = (uint32_t) GPIO__enGetDrive( enPort, enPin);
    u32DriveVar <<= 16UL;

    u32Reg = u32ResistorModeVar;
    u32Reg |= u32OutputModeVar;
    u32Reg |= u32DirectionVar;
    u32Reg |= u32DriveVar;

    enConfig = (GPIO_nCONFIG) u32Reg;
    return enConfig;
}

void GPIO__vGetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_CONFIG_Typedef *psConfig)
{
    if(0UL != (uint32_t) psConfig)
    {
        psConfig->enResistorMode = GPIO__enGetResistorMode( enPort, enPin);
        psConfig->enOutputMode = GPIO__enGetOutputMode( enPort, enPin);
        psConfig->enDirection = GPIO__enGetDirection( enPort, enPin);
        psConfig->enDrive = GPIO__enGetDrive( enPort, enPin);
    }
}

GPIO_CONFIG_Typedef* GPIO__psGetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_CONFIG_Typedef *psConfig = 0UL;
#if defined ( __TI_ARM__ )
    psConfig = (GPIO_CONFIG_Typedef*) memalign( (size_t) 4, (size_t) (sizeof(GPIO_CONFIG_Typedef)));
#elif defined ( __GNUC__ )
    psConfig = (GPIO_CONFIG_Typedef*) malloc((size_t) sizeof(GPIO_CONFIG_Typedef));
    #endif

    if(0UL != (uint32_t) psConfig)
    {
        psConfig->enResistorMode = GPIO__enGetResistorMode(enPort, enPin);
        psConfig->enOutputMode = GPIO__enGetOutputMode(enPort, enPin);
        psConfig->enDirection = GPIO__enGetDirection(enPort, enPin);
        psConfig->enDrive = GPIO__enGetDrive(enPort, enPin);
    }
    return psConfig;
}
