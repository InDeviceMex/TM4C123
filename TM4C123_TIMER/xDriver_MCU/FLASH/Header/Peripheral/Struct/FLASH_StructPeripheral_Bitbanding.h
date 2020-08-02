/**
 *
 * @file FLASH_StructPeripheral_Bitbanding.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/FLASH/Header/Peripheral/Struct/FLASH_StructRegister_Bitbanding.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t           FMA[32];
        BITBANDING_FMA_TypeDef      FMA_Bit;
    };
    union
    {
        volatile uint32_t           FMD[32];
        BITBANDING_FMD_TypeDef      FMD_Bit;
    };
    union
    {
        volatile uint32_t           FMC[32];
        BITBANDING_FMC_TypeDef      FMC_Bit;
    };
    union
    {
        volatile const uint32_t     FCRIS[32];
        BITBANDING_FCRIS_TypeDef    FCRIS_Bit;
    };
    union
    {
        volatile uint32_t           FCIM[32];
        BITBANDING_FCIM_TypeDef     FCIM_Bit;
    };
    union
    {
        volatile uint32_t           FCMISC[32];
        BITBANDING_FCMISC_TypeDef   FCMISC_Bit;
    };
    const uint32_t                  reserved[2*32];
    union
    {
        volatile uint32_t           FMC2[32];
        BITBANDING_FMC2_TypeDef     FMC2_Bit;
    };
    union
    {
        volatile uint32_t           FWBVAL[32];
        BITBANDING_FWBVAL_TypeDef   FWBVAL_Bit;
    };
    const uint32_t                  reserved1[51*32];
    union
    {
        volatile uint32_t           FWBn[32][32];
        BITBANDING_FWB_TypeDef      FWBn_Bit[32];
    };


    const uint32_t                  reserved2[912*32];
    union
    {
        volatile const uint32_t     FSIZE[32];
        BITBANDING_FSIZE_TypeDef    FSIZE_Bit;
    };
    union
    {
        volatile const uint32_t     SSIZE[32];
        BITBANDING_SSIZE_TypeDef    SSIZE_Bit;
    };
    const uint32_t                  reserved3[2*32];
    union
    {
        volatile const uint32_t     ROMSWMAP[32];
        BITBANDING_ROMSWMAP_TypeDef ROMSWMAP_Bit;
    };
}FLASH_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTPERIPHERAL_BITBANDING_H_ */
