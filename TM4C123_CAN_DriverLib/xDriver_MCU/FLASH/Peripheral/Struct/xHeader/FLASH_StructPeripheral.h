/**
 *
 * @file FLASH_StructPeripheral.h
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
 * Date Author Version Description
 * 21 jun. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/FLASH/Peripheral/Struct/xHeader/FLASH_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t FMA;
        FMA_TypeDef FMA_Bit;
    };
    union
    {
        volatile uint32_t FMD;
        FMD_TypeDef FMD_Bit;
    };
    union
    {
        volatile uint32_t FMC;
        FMC_TypeDef FMC_Bit;
    };
    union
    {
        volatile const uint32_t FCRIS;
        FCRIS_TypeDef FCRIS_Bit;
    };
    union
    {
        volatile uint32_t FCIM;
        FCIM_TypeDef FCIM_Bit;
    };
    union
    {
        volatile uint32_t FCMISC;
        FCMISC_TypeDef FCMISC_Bit;
    };
    const uint32_t reserved [2UL];
    union
    {
        volatile uint32_t FMC2;
        FMC2_TypeDef FMC2_Bit;
    };
    union
    {
        volatile uint32_t FWBVAL;
        FWBVAL_TypeDef FWBVAL_Bit;
    };
    const uint32_t reserved1 [51UL];
    union
    {
        volatile uint32_t FWBn [32UL];
        FWB_TypeDef FWBn_Bit [32UL];
    };


    const uint32_t reserved2 [912UL];
    union
    {
        volatile const uint32_t FSIZE;
        FSIZE_TypeDef FSIZE_Bit;
    };
    union
    {
        volatile const uint32_t ZE;
        SSIZE_TypeDef ZE_Bit;
    };
    const uint32_t reserved3 [2UL];
    union
    {
        volatile const uint32_t ROMSWMAP;
        ROMSWMAP_TypeDef ROMSWMAP_Bit;
    };
}FLASH_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTPERIPHERAL_H_ */
