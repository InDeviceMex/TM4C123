/**
 *
 * @file ACMP_StructPeripheral_Bitbanding.h
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
 * @verbatim 28 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/ACMP/Peripheral/Struct/xHeader/ACMP_StructRegister_Bitbanding.h>
#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t ACMIS [32UL];
        BITBANDING_ACMIS_TypeDef ACMIS_Bit;
    };
    union
    {
        volatile const uint32_t ACRIS [32UL];
        BITBANDING_ACRIS_TypeDef ACRIS_Bit;
    };
    union
    {
        volatile uint32_t ACINTEN [32UL];
        BITBANDING_ACINTEN_TypeDef ACINTEN_Bit;
    };
    const uint32_t reserved [32UL];
    union
    {
        volatile uint32_t ACREFCTL [32UL];
        BITBANDING_ACREFCTL_TypeDef ACREFCTL_Bit;
    };
    const uint32_t reserved1 [3UL * 32UL];
    union
    {
        volatile uint32_t ACSTAT0 [32UL];
        BITBANDING_ACSTAT_TypeDef ACSTAT0_Bit;
    };
    union
    {
        volatile uint32_t ACCTL0 [32UL];
        BITBANDING_ACCTL_TypeDef ACCTL0_Bit;
    };
    const uint32_t reserved2 [6UL * 32UL];
    union
    {
        volatile uint32_t ACSTAT1 [32UL];
        BITBANDING_ACSTAT_TypeDef ACSTAT1_Bit;
    };
    union
    {
        volatile uint32_t ACCTL1 [32UL];
        BITBANDING_ACCTL_TypeDef ACCTL1_Bit;
    };
    const uint32_t reserved3 [990UL * 32UL];
    union
    {
        volatile uint32_t ACMPPP [32UL];
        BITBANDING_ACMPPP_TypeDef  ACMPPP_Bit;
    };
    const uint32_t reserved4 [15UL * 32UL];
}ACMP_BITBANDING_TypeDef;

typedef volatile struct
{
        ACMP_BITBANDING_TypeDef MODULE [(uint32_t) ACMP_enMODULE_MAX];
}ACMPS_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTPERIPHERAL_BITBANDING_H_ */
