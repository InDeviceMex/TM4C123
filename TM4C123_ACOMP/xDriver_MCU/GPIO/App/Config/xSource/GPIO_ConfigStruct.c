/**
 *
 * @file GPIO_ConfigStruct.c
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
#include <xDriver_MCU/GPIO/App/Config/xHeader/GPIO_ConfigStruct.h>

#include <xUtils/Standard/Standard.h>
#include <stdlib.h>

void GPIO__vCreateConfigStructPointer(GPIO_nCONFIG enConfig, GPIO_CONFIG_Typedef *psConfig)
{
    uint32_t u32Reg = 0UL;
    if(0UL != (uint32_t) psConfig)
    {
        u32Reg = (uint32_t) enConfig;
        u32Reg >>= 0UL;
        u32Reg &= 0x3UL;
        psConfig->enResistorMode = (GPIO_nRESMODE) u32Reg;

        u32Reg = (uint32_t) enConfig;
        u32Reg >>= 4UL;
        u32Reg &= 0x1UL;
        psConfig->enOutputMode = (GPIO_nOUTMODE) u32Reg;

        u32Reg = (uint32_t) enConfig;
        u32Reg >>= 8UL;
        u32Reg &= 0x1UL;
        psConfig->enDirection = (GPIO_nDIR) u32Reg;

        u32Reg = (uint32_t) enConfig;
        u32Reg >>= 16UL;
        u32Reg &= 0x0103U;
        psConfig->enDrive = (GPIO_nDRIVE) u32Reg;
    }
}

GPIO_CONFIG_Typedef* GPIO__psCreateConfigStruct(GPIO_nCONFIG enConfig)
{
    uint32_t u32Reg = 0UL;
    GPIO_CONFIG_Typedef *psConfig = 0UL;
#if defined (__TI_ARM__ )
    psConfig = (GPIO_CONFIG_Typedef*) memalign( (size_t) 4, (size_t) (sizeof(GPIO_CONFIG_Typedef)));
#elif defined (__GNUC__ )
    psConfig = (GPIO_CONFIG_Typedef*) malloc((size_t) sizeof(GPIO_CONFIG_Typedef));
    #endif

    if(0UL != (uint32_t) psConfig)
    {
        u32Reg = (uint32_t) enConfig;
        u32Reg >>= 0UL;
        u32Reg &= 0x3UL;
        psConfig->enResistorMode = (GPIO_nRESMODE) u32Reg;

        u32Reg = (uint32_t) enConfig;
        u32Reg >>= 4UL;
        u32Reg &= 0x1UL;
        psConfig->enOutputMode = (GPIO_nOUTMODE) u32Reg;

        u32Reg = (uint32_t) enConfig;
        u32Reg >>= 8UL;
        u32Reg &= 0x1UL;
        psConfig->enDirection = (GPIO_nDIR) u32Reg;

        u32Reg = (uint32_t) enConfig;
        u32Reg >>= 16UL;
        u32Reg &= 0x0103U;
        psConfig->enDrive = (GPIO_nDRIVE) u32Reg;
    }
    return psConfig;
}

void GPIO__vDeleteConfigStruct(GPIO_CONFIG_Typedef *psConfig)
{
    free(psConfig);
    psConfig = (GPIO_CONFIG_Typedef*) 0UL;
}

