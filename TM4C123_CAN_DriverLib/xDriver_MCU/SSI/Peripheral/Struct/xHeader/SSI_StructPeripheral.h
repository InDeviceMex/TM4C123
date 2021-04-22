/**
 *
 * @file SSI_StructPeripheral.h
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
 * Date       Author     Version     Description
 * 16 feb. 2021     vyldram    1.0     initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/SSI/Peripheral/Struct/xHeader/SSI_StructRegister.h>
#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t SSICR0;
        SSICR0_TypeDef SSICR0_Bit;
    };
    union
    {
        volatile uint32_t SSICR1;
        SSICR1_TypeDef SSICR1_Bit;
    };
    union
    {
        volatile const uint32_t SSIDR;
        SSIDR_TypeDef SSIDR_Bit;
    };
    union
    {
        volatile const uint32_t SSISR;
        SSISR_TypeDef SSISR_Bit;
    };
    union
    {
        volatile uint32_t SSICPSR;
        SSICPSR_TypeDef SSICPSR_Bit;
    };
    union
    {
        volatile uint32_t SSIIM;
        SSIIM_TypeDef SSIIM_Bit;
    };
    union
    {
        volatile const uint32_t SSIRIS;
        SSIRIS_TypeDef SSIRIS_Bit;
    };
    union
    {
        volatile const uint32_t SSIMIS;
        SSIMIS_TypeDef SSIMIS_Bit;
    };
    union
    {
        volatile uint32_t SSIICR;
        SSIICR_TypeDef SSIICR_Bit;
    };
    union
    {
        volatile uint32_t SSIDMACTL;
        SSIDMACTL_TypeDef SSIDMACTL_Bit;
    };
    const uint32_t reserved [1000UL];
    union
    {
        volatile uint32_t SSICC;
        SSICC_TypeDef SSICC_Bit;
    };
    const uint32_t reserved5 [1UL];
    union
    {
        volatile const uint32_t SSIPeriphID4;
        SSIPeriphID4_TypeDef SSIPeriphID4_Bit;
    };
    union
    {
        volatile const uint32_t SSIPeriphID5;
        SSIPeriphID5_TypeDef SSIPeriphID5_Bit;
    };
    union
    {
        volatile const uint32_t SSIPeriphID6;
        SSIPeriphID6_TypeDef SSIPeriphID6_Bit;
    };
    union
    {
        volatile const uint32_t SSIPeriphID7;
        SSIPeriphID7_TypeDef SSIPeriphID7_Bit;
    };
    union
    {
        volatile const uint32_t SSIPeriphID0;
        SSIPeriphID0_TypeDef SSIPeriphID0_Bit;
    };
    union
    {
        volatile const uint32_t SSIPeriphID1;
        SSIPeriphID1_TypeDef SSIPeriphID1_Bit;
    };
    union
    {
        volatile const uint32_t SSIPeriphID2;
        SSIPeriphID2_TypeDef SSIPeriphID2_Bit;
    };
    union
    {
        volatile const uint32_t SSIPeriphID3;
        SSIPeriphID3_TypeDef SSIPeriphID3_Bit;
    };
    union
    {
        volatile const uint32_t SSICellID0;
        SSICellID0_TypeDef SSICellID0_Bit;
    };
    union
    {
        volatile const uint32_t SSICellID1;
        SSICellID1_TypeDef SSICellID1_Bit;
    };
    union
    {
        volatile const uint32_t SSICellID2;
        SSICellID2_TypeDef SSICellID2_Bit;
    };
    union
    {
        volatile const uint32_t SSICellID3;
        SSICellID3_TypeDef SSICellID3_Bit;
    };
} SSI_TypeDef;

typedef volatile struct
{
    SSI_TypeDef MODULE [(uint32_t) SSI_enMODULE_MAX];
} SSIS_TypeDef;

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTPERIPHERAL_H_ */
