/**
 *
 * @file ACMP_StructPeripheral.h
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
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/ACMP/Peripheral/Struct/xHeader/ACMP_StructRegister.h>
#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>


typedef volatile struct
{
    union
    {
        volatile uint32_t      ACMIS;
        ACMIS_TypeDef ACMIS_Bit;
    };
    union
    {
        volatile const uint32_t    ACRIS;
        ACRIS_TypeDef ACRIS_Bit;
    };
    union
    {
        volatile uint32_t    ACINTEN;
        ACINTEN_TypeDef ACINTEN_Bit;
    };
    const uint32_t reserved;
    union
    {
        volatile uint32_t    ACREFCTL;
        ACREFCTL_TypeDef ACREFCTL_Bit;
    };
    const uint32_t reserved1[3];
    union
    {
        volatile uint32_t    ACSTAT0;
        ACSTAT_TypeDef ACSTAT0_Bit;
    };
    union
    {
        volatile uint32_t    ACCTL0;
        ACCTL_TypeDef ACCTL0_Bit;
    };
    const uint32_t reserved2[6];
    union
    {
        volatile uint32_t    ACSTAT1;
        ACSTAT_TypeDef ACSTAT1_Bit;
    };
    union
    {
        volatile uint32_t    ACCTL1;
        ACCTL_TypeDef ACCTL1_Bit;
    };
    const uint32_t reserved3[990];
    union
    {
        volatile uint32_t ACMPPP;
        ACMPPP_TypeDef  ACMPPP_Bit;
    };
    const uint32_t reserved4[15];
}ACMP_TypeDef;





#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTPERIPHERAL_H_ */
