/**
 *
 * @file SSI_StructPeripheral_Bitbanding.h
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
 * @verbatim 16 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/SSI/Peripheral/Struct/xHeader/SSI_StructRegister_Bitbanding.h>
#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t SSICR0 [32UL];
        BITBANDING_SSICR0_TypeDef SSICR0_Bit;
    };
    union
    {
        volatile uint32_t SSICR1 [32UL];
        BITBANDING_SSICR1_TypeDef SSICR1_Bit;
    };
    union
    {
        volatile const uint32_t SSIDR [32UL];
        BITBANDING_SSIDR_TypeDef SSIDR_Bit;
    };
    union
    {
        volatile const uint32_t SSISR [32UL];
        BITBANDING_SSISR_TypeDef SSISR_Bit;
    };
    union
    {
        volatile uint32_t SSICPSR [32UL];
        BITBANDING_SSICPSR_TypeDef SSICPSR_Bit;
    };
    union
    {
        volatile uint32_t SSIIM [32UL];
        BITBANDING_SSIIM_TypeDef SSIIM_Bit;
    };
    union
    {
        volatile const uint32_t SSIRIS [32UL];
        BITBANDING_SSIRIS_TypeDef SSIRIS_Bit;
    };
    union
    {
        volatile const uint32_t SSIMIS [32UL];
        BITBANDING_SSIMIS_TypeDef SSIMIS_Bit;
    };
    union
    {
        volatile uint32_t SSIICR [32UL];
        BITBANDING_SSIICR_TypeDef SSIICR_Bit;
    };
    union
    {
        volatile uint32_t SSIDMACTL [32UL];
        BITBANDING_SSIDMACTL_TypeDef SSIDMACTL_Bit;
    };
    const uint32_t reserved [1000UL * 32UL];
    union
    {
        volatile uint32_t SSICC [32UL];
        BITBANDING_SSICC_TypeDef SSICC_Bit;
    };
    const uint32_t reserved5 [1UL * 32UL];
    union
    {
        volatile const uint32_t SSIPeriphID4 [32UL];
        BITBANDING_SSIPeriphID4_TypeDef SSIPeriphID4_Bit;
    };
    union
    {
        volatile const uint32_t SSIPeriphID5 [32UL];
        BITBANDING_SSIPeriphID5_TypeDef SSIPeriphID5_Bit;
    };
    union
    {
        volatile const uint32_t SSIPeriphID6 [32UL];
        BITBANDING_SSIPeriphID6_TypeDef SSIPeriphID6_Bit;
    };
    union
    {
        volatile const uint32_t SSIPeriphID7 [32UL];
        BITBANDING_SSIPeriphID7_TypeDef SSIPeriphID7_Bit;
    };
    union
    {
        volatile const uint32_t SSIPeriphID0 [32UL];
        BITBANDING_SSIPeriphID0_TypeDef SSIPeriphID0_Bit;
    };
    union
    {
        volatile const uint32_t SSIPeriphID1 [32UL];
        BITBANDING_SSIPeriphID1_TypeDef SSIPeriphID1_Bit;
    };
    union
    {
        volatile const uint32_t SSIPeriphID2 [32UL];
        BITBANDING_SSIPeriphID2_TypeDef SSIPeriphID2_Bit;
    };
    union
    {
        volatile const uint32_t SSIPeriphID3 [32UL];
        BITBANDING_SSIPeriphID3_TypeDef SSIPeriphID3_Bit;
    };
    union
    {
        volatile const uint32_t SSICellID0 [32UL];
        BITBANDING_SSICellID0_TypeDef SSICellID0_Bit;
    };
    union
    {
        volatile const uint32_t SSICellID1 [32UL];
        BITBANDING_SSICellID1_TypeDef SSICellID1_Bit;
    };
    union
    {
        volatile const uint32_t SSICellID2 [32UL];
        BITBANDING_SSICellID2_TypeDef SSICellID2_Bit;
    };
    union
    {
        volatile const uint32_t SSICellID3 [32UL];
        BITBANDING_SSICellID3_TypeDef SSICellID3_Bit;
    };
} SSI_BITBANDING_TypeDef;

typedef volatile struct
{
    SSI_BITBANDING_TypeDef MODULE [(uint32_t) SSI_enMODULE_MAX];
} SSIS_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTPERIPHERAL_BITBANDING_H_ */
