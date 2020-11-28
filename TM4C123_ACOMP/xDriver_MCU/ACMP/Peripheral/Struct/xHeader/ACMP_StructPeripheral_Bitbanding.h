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
        volatile uint32_t      ACMIS[32U];
        BITBANDING_ACMIS_TypeDef ACMIS_Bit;
    };
    union
    {
        volatile const uint32_t    ACRIS[32U];
        BITBANDING_ACRIS_TypeDef ACRIS_Bit;
    };
    union
    {
        volatile uint32_t    ACINTEN[32U];
        BITBANDING_ACINTEN_TypeDef ACINTEN_Bit;
    };
    const uint32_t reserved[32U];
    union
    {
        volatile uint32_t    ACREFCTL[32U];
        BITBANDING_ACREFCTL_TypeDef ACREFCTL_Bit;
    };
    const uint32_t reserved1[3U*32U];
    union
    {
        volatile uint32_t    ACSTAT0[32U];
        BITBANDING_ACSTAT_TypeDef ACSTAT0_Bit;
    };
    union
    {
        volatile uint32_t    ACCTL0[32U];
        BITBANDING_ACCTL_TypeDef ACCTL0_Bit;
    };
    const uint32_t reserved1[6U*32U];
    union
    {
        volatile uint32_t    ACSTAT1[32U];
        BITBANDING_ACSTAT_TypeDef ACSTAT1_Bit;
    };
    union
    {
        volatile uint32_t    ACCTL1[32U];
        BITBANDING_ACCTL_TypeDef ACCTL1_Bit;
    };
    const uint32_t reserved2[990U*32U];
    union
    {
        volatile uint32_t ACMPPP[32U];
        BITBANDING_ACMPPP_TypeDef  ACMPPP_Bit;
    };
    const uint32_t reserved3[15U*32U];
}ACMP_BITBANDING_TypeDef;




#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTPERIPHERAL_BITBANDING_H_ */
