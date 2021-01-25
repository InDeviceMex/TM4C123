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

#include <stdlib.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/App/Config/xHeader/GPIO_ConfigStruct.h>

void GPIO__vCreateConfigStructPointer(GPIO_nCONFIG enConfig,
                                      GPIO_CONFIG_Typedef *psConfig)
{
    if(psConfig != 0)
    {
        psConfig->enResistorMode = (GPIO_nRESMODE) (((uint32_t) enConfig >> 0U)
                & 3U);
        psConfig->enOutputMode = (GPIO_nOUTMODE) (((uint32_t) enConfig >> 4U)
                & 1U);
        psConfig->enDirection = (GPIO_nDIR) (((uint32_t) enConfig >> 8U) & 1U);
        psConfig->enDrive = (GPIO_nDRIVE) (((uint32_t) enConfig >> 16U)
                & 0x0103U);
    }
}

GPIO_CONFIG_Typedef* GPIO__psCreateConfigStruct(GPIO_nCONFIG enConfig)
{
    GPIO_CONFIG_Typedef *psConfig = 0;
#if defined ( __TI_ARM__ )
    psConfig = (GPIO_CONFIG_Typedef*) memalign(
            (size_t) 4,
            (size_t) (sizeof(GPIO_CONFIG_Typedef)));
#elif defined ( __GNUC__ )
    psConfig = (GPIO_CONFIG_Typedef*) malloc((size_t)sizeof(GPIO_CONFIG_Typedef));
    #endif

    if(psConfig != 0)
    {
        psConfig->enResistorMode = (GPIO_nRESMODE) (((uint32_t) enConfig >> 0U)
                & 3U);
        psConfig->enOutputMode = (GPIO_nOUTMODE) (((uint32_t) enConfig >> 4U)
                & 1U);
        psConfig->enDirection = (GPIO_nDIR) (((uint32_t) enConfig >> 8U) & 1U);
        psConfig->enDrive = (GPIO_nDRIVE) (((uint32_t) enConfig >> 16U)
                & 0x0103U);
    }
    return psConfig;
}

void GPIO__vDeleteConfigStruct(GPIO_CONFIG_Typedef *psConfig)
{
    free(psConfig);
    psConfig = (GPIO_CONFIG_Typedef*) 0UL;
}

