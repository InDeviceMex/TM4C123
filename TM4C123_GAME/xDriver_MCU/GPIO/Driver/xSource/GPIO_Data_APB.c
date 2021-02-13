/**
 *
 * @file GPIO_Data_APB.c
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
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_Data_APB.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

inline void GPIO_APB__vSetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data)
{
    GPIO_nBUS enBus = GPIO_enBUS_APB;
    uint32_t u32OffsetRegister = 0UL;
    uint32_t u32Pin = 0UL;

    enBus = GPIO__enGetBus(enPort);
    if(GPIO_enBUS_APB == enBus)
    {
        u32Pin = (uint32_t) enPin;
        u32Pin &= (uint32_t) GPIO_enPIN_ALL;
        u32OffsetRegister = u32Pin;
        u32OffsetRegister *= 4UL;
        u32OffsetRegister += GPIO_GPIODATA_MASK_OFFSET;

        GPIO__vWriteRegisterBus(enPort, enBus, u32OffsetRegister, u32Data, 0xFFFFFFFFUL, 0UL);
    }
}

inline GPIO_nSTATUS GPIO_APB__enGetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t* u32Feature)
{
    GPIO_nSTATUS enStatus = GPIO_enSTATUS_UNDEF;
    GPIO_nBUS enBus = GPIO_enBUS_APB;
    uint32_t u32OffsetRegister = 0UL;
    uint32_t u32Pin = 0UL;

    enBus = GPIO__enGetBus(enPort);
    if(GPIO_enBUS_APB == enBus)
    {
        u32Pin = (uint32_t) enPin;
        u32Pin &= (uint32_t) GPIO_enPIN_ALL;
        u32OffsetRegister = u32Pin;
        u32OffsetRegister *= 4UL;
        u32OffsetRegister += GPIO_GPIODATA_MASK_OFFSET;

        enStatus = GPIO__enReadRegisterBus(enPort, enBus, u32OffsetRegister, u32Feature, 0xFFFFFFFFUL, 0UL);
    }
    return enStatus;
}

inline void GPIO_APB__vSetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data)
{
    GPIO_APB_BLOCK[(uint32_t) enPort]->GPIODATA_MASK[enPin] = u32Data;
}

inline uint32_t GPIO_APB__u32GetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    uint32_t u32Reg = 0;
    u32Reg = GPIO_APB_BLOCK[(uint32_t) enPort]->GPIODATA_MASK[enPin];
    return u32Reg;
}
