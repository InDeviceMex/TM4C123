/**
 *
 * @file GPIO_ReadRegister.c
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
 * @verbatim 30 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/xHeader/GPIO_ReadRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/xHeader/GPIO_Ready.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/xHeader/GPIO_Bus.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nSTATUS GPIO__enReadRegisterBus(GPIO_nPORT enPort, GPIO_nBUS enBus, uint32_t u32OffsetRegister, uint32_t* pu32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32PortBase = 0UL;
    GPIO_nSTATUS enStatus = GPIO_enSTATUS_UNDEF;
    GPIO_nREADY enReady = GPIO_enNOREADY;
    enPort = (GPIO_nPORT) MCU__u32CheckPatams( (uint32_t) enPort, (uint32_t) GPIO_enPORT_MAX);
    enBus = (GPIO_nBUS) MCU__u32CheckPatams( (uint32_t) enBus, (uint32_t) GPIO_enBUS_MAX);
    enReady = GPIO__enIsReady( enPort);
    if((GPIO_enREADY == enReady) && (0UL != (uint32_t) pu32FeatureValue))
    {
        enStatus = GPIO_enSTATUS_OK;
        u32PortBase = GPIO_BLOCK_BASE[(uint32_t) enBus][ (uint32_t) enPort];
        *pu32FeatureValue = MCU__u32ReadRegister( u32PortBase, u32OffsetRegister, u32MaskFeature, u32BitFeature);
    }
    return enStatus;
}

GPIO_nSTATUS GPIO__enReadRegister(GPIO_nPORT enPort, uint32_t u32OffsetRegister, uint32_t* pu32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    GPIO_nBUS enBus = GPIO_enBUS_APB;
    uint32_t u32PortBase = 0UL;
    GPIO_nSTATUS enStatus = GPIO_enSTATUS_UNDEF;
    GPIO_nREADY enReady = GPIO_enNOREADY;
    enPort = (GPIO_nPORT) MCU__u32CheckPatams( (uint32_t) enPort, (uint32_t) GPIO_enPORT_MAX);
    enBus = GPIO__enGetBus( enPort);
    enReady = GPIO__enIsReady( enPort);
    if((GPIO_enREADY == enReady) && (0UL != (uint32_t) pu32FeatureValue))
    {
        enStatus = GPIO_enSTATUS_OK;
        u32PortBase = GPIO_BLOCK_BASE[(uint32_t) enBus][ (uint32_t) enPort];
        *pu32FeatureValue = MCU__u32ReadRegister( u32PortBase, u32OffsetRegister, u32MaskFeature, u32BitFeature);
    }
    return enStatus;
}
