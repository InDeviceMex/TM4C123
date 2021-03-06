/**
 *
 * @file I2C_StructPeripheral_Bitbanding.h
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
 * @verbatim 6 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/I2C/Peripheral/Struct/xHeader/I2C_StructRegister_Bitbanding.h>
#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

/*Complete*/
typedef volatile struct
{
    union
    {
        volatile uint32_t I2CMSA [32UL];
        BITBANDING_I2CMSA_TypeDef I2CMSA_Bit;
    };
    union
    {
        volatile uint32_t I2CMCS [32UL];
        BITBANDING_I2CMCS_STATUS_TypeDef I2CMCS_STATUS_Bit;
        BITBANDING_I2CMCS_CONTROL_TypeDef I2CMCS_CONTROL_Bit;
    };
    union
    {
        volatile const uint32_t I2CMDR [32UL];
        BITBANDING_I2CMDR_TypeDef I2CMDR_Bit;
    };
    union
    {
        volatile const uint32_t I2CMTPR [32UL];
        BITBANDING_I2CMTPR_TypeDef I2CMTPR_Bit;
    };
    union
    {
        volatile uint32_t I2CMIMR [32UL];
        BITBANDING_I2CMIMR_TypeDef I2CMIMR_Bit;
    };
    union
    {
        volatile const uint32_t I2CMRIS [32UL];
        BITBANDING_I2CMRIS_TypeDef I2CMRIS_Bit;
    };
    union
    {
        volatile const uint32_t I2CMMIS [32UL];
        BITBANDING_I2CMMIS_TypeDef I2CMMIS_Bit;
    };
    union
    {
        volatile uint32_t I2CMICR [32UL];
        BITBANDING_I2CMICR_TypeDef I2CMICR_Bit;
    };
    union
    {
        volatile uint32_t I2CMCR [32UL];
        BITBANDING_I2CMCR_TypeDef I2CMCR_Bit;
    };
    union
    {
        volatile uint32_t I2CMCLKOCNT [32UL];
        BITBANDING_I2CMCLKOCNT_TypeDef I2CMCLKOCNT_Bit;
    };
    const uint32_t reserved [1UL * 32UL];
    union
    {
        volatile uint32_t I2CMBMON [32UL];
        BITBANDING_I2CMBMON_TypeDef I2CMBMON_Bit;
    };
    const uint32_t reserved2 [2UL * 32UL];
    union
    {
        volatile uint32_t I2CMCR2 [32UL];
        BITBANDING_I2CMCR2_TypeDef I2CMCR2_Bit;
    };
    const uint32_t reserved3 [497UL * 32UL];
    union
    {
        volatile uint32_t I2CSOAR [32UL];
        BITBANDING_I2CSOAR_TypeDef I2CSOAR_Bit;
    };
    union
    {
        volatile uint32_t I2CSCSR [32UL];
        BITBANDING_I2CSCSR_STATUS_TypeDef I2CSCSR_STATUS_Bit;
        BITBANDING_I2CSCSR_CONTROL_TypeDef I2CSCSR_CONTROL_Bit;
    };
    union
    {
        volatile uint32_t I2CSDR [32UL];
        BITBANDING_I2CSDR_TypeDef I2CSDR_Bit;
    };
    union
    {
        volatile uint32_t I2CSIMR [32UL];
        BITBANDING_I2CSIMR_TypeDef I2CSIMR_Bit;
    };
    union
    {
        volatile uint32_t I2CSRIS [32UL];
        BITBANDING_I2CSRIS_TypeDef I2CSRIS_Bit;
    };
    union
    {
        volatile uint32_t I2CSMIS [32UL];
        BITBANDING_I2CSMIS_TypeDef I2CSMIS_Bit;
    };
    union
    {
        volatile uint32_t I2CSICR [32UL];
        BITBANDING_I2CSICR_TypeDef I2CSICR_Bit;
    };
    union
    {
        volatile uint32_t I2CSOAR2 [32UL];
        BITBANDING_I2CSOAR2_TypeDef I2CSOAR2_Bit;
    };
    union
    {
        volatile uint32_t I2CSACKCTL [32UL];
        BITBANDING_I2CSACKCTL_TypeDef I2CSACKCTL_Bit;
    };
    const uint32_t reserved4 [487UL * 32UL];
    union
    {
        volatile const uint32_t I2CPP [32UL];
        BITBANDING_I2CPP_TypeDef I2CPP_Bit;
    };
    union
    {
        volatile const uint32_t I2CPC [32UL];
        BITBANDING_I2CPC_TypeDef I2CPC_Bit;
    };
    const uint32_t reserved5 [14UL * 32UL];
} I2C_BITBANDING_TypeDef;

/*Master*/
typedef volatile struct
{
    union
    {
        volatile uint32_t I2CMSA [32UL];
        BITBANDING_I2CMSA_TypeDef I2CMSA_Bit;
    };
    union
    {
        volatile uint32_t I2CMCS [32UL];
        BITBANDING_I2CMCS_STATUS_TypeDef I2CMCS_STATUS_Bit;
        BITBANDING_I2CMCS_CONTROL_TypeDef I2CMCS_CONTROL_Bit;
    };
    union
    {
        volatile const uint32_t I2CMDR [32UL];
        BITBANDING_I2CMDR_TypeDef I2CMDR_Bit;
    };
    union
    {
        volatile const uint32_t I2CMTPR [32UL];
        BITBANDING_I2CMTPR_TypeDef I2CMTPR_Bit;
    };
    union
    {
        volatile uint32_t I2CMIMR [32UL];
        BITBANDING_I2CMIMR_TypeDef I2CMIMR_Bit;
    };
    union
    {
        volatile const uint32_t I2CMRIS [32UL];
        BITBANDING_I2CMRIS_TypeDef I2CMRIS_Bit;
    };
    union
    {
        volatile const uint32_t I2CMMIS [32UL];
        BITBANDING_I2CMMIS_TypeDef I2CMMIS_Bit;
    };
    union
    {
        volatile uint32_t I2CMICR [32UL];
        BITBANDING_I2CMICR_TypeDef I2CMICR_Bit;
    };
    union
    {
        volatile uint32_t I2CMCR [32UL];
        BITBANDING_I2CMCR_TypeDef I2CMCR_Bit;
    };
    union
    {
        volatile uint32_t I2CMCLKOCNT [32UL];
        BITBANDING_I2CMCLKOCNT_TypeDef I2CMCLKOCNT_Bit;
    };
    const uint32_t reserved [1UL * 32UL];
    union
    {
        volatile uint32_t I2CMBMON [32UL];
        BITBANDING_I2CMBMON_TypeDef I2CMBMON_Bit;
    };
    const uint32_t reserved2 [2UL * 32UL];
    union
    {
        volatile uint32_t I2CMCR2 [32UL];
        BITBANDING_I2CMCR2_TypeDef I2CMCR2_Bit;
    };
    const uint32_t reserved3 [497UL * 32UL];
} I2C_MASTER_BITBANDING_TypeDef;

/*Slave*/
typedef volatile struct
{
    union
    {
        volatile uint32_t I2CSOAR [32UL];
        BITBANDING_I2CSOAR_TypeDef I2CSOAR_Bit;
    };
    union
    {
        volatile uint32_t I2CSCSR [32UL];
        BITBANDING_I2CSCSR_STATUS_TypeDef I2CSCSR_STATUS_Bit;
        BITBANDING_I2CSCSR_CONTROL_TypeDef I2CSCSR_CONTROL_Bit;
    };
    union
    {
        volatile uint32_t I2CSDR [32UL];
        BITBANDING_I2CSDR_TypeDef I2CSDR_Bit;
    };
    union
    {
        volatile uint32_t I2CSIMR [32UL];
        BITBANDING_I2CSIMR_TypeDef I2CSIMR_Bit;
    };
    union
    {
        volatile uint32_t I2CSRIS [32UL];
        BITBANDING_I2CSRIS_TypeDef I2CSRIS_Bit;
    };
    union
    {
        volatile uint32_t I2CSMIS [32UL];
        BITBANDING_I2CSMIS_TypeDef I2CSMIS_Bit;
    };
    union
    {
        volatile uint32_t I2CSICR [32UL];
        BITBANDING_I2CSICR_TypeDef I2CSICR_Bit;
    };
    union
    {
        volatile uint32_t I2CSOAR2 [32UL];
        BITBANDING_I2CSOAR2_TypeDef I2CSOAR2_Bit;
    };
    union
    {
        volatile uint32_t I2CSACKCTL [32UL];
        BITBANDING_I2CSACKCTL_TypeDef I2CSACKCTL_Bit;
    };
    const uint32_t reserved4 [487UL * 32UL];
} I2C_SLAVE_BITBANDING_TypeDef;

/*Status Control*/
typedef volatile struct
{
    union
    {
        volatile const uint32_t I2CPP [32UL];
        BITBANDING_I2CPP_TypeDef I2CPP_Bit;
    };
    union
    {
        volatile const uint32_t I2CPC [32UL];
        BITBANDING_I2CPC_TypeDef I2CPC_Bit;
    };
    const uint32_t reserved5 [14UL * 32UL];
} I2C_CONTROL_BITBANDING_TypeDef;

typedef volatile struct
{
        I2C_MASTER_BITBANDING_TypeDef MASTER;
        I2C_SLAVE_BITBANDING_TypeDef SLAVE;
        I2C_CONTROL_BITBANDING_TypeDef STATUS_CONTROL;
} I2CS_UNION_BITBANDING_TypeDef;

typedef volatile struct
{
    union
    {
            I2C_BITBANDING_TypeDef MODULE [(uint32_t) I2C_enMODULE_MAX];
            I2CS_UNION_BITBANDING_TypeDef MODULE_UNION [(uint32_t) I2C_enMODULE_MAX];
    }
} I2CS_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTPERIPHERAL_BITBANDING_H_ */
