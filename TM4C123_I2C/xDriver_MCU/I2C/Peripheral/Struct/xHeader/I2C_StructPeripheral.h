/**
 *
 * @file I2C_StructPeripheral.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/I2C/Peripheral/Struct/xHeader/I2C_StructRegister.h>
#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

/*Complete*/
typedef volatile struct
{
    union
    {
        volatile uint32_t I2CMSA;
        I2CMSA_TypeDef I2CMSA_Bit;
    };
    union
    {
        volatile uint32_t I2CMCS;
        I2CMCS_STATUS_TypeDef I2CMCS_STATUS_Bit;
        I2CMCS_CONTROL_TypeDef I2CMCS_CONTROL_Bit;
    };
    union
    {
        volatile const uint32_t I2CMDR;
        I2CMDR_TypeDef I2CMDR_Bit;
    };
    union
    {
        volatile const uint32_t I2CMTPR;
        I2CMTPR_TypeDef I2CMTPR_Bit;
    };
    union
    {
        volatile uint32_t I2CMIMR;
        I2CMIMR_TypeDef I2CMIMR_Bit;
    };
    union
    {
        volatile const uint32_t I2CMRIS;
        I2CMRIS_TypeDef I2CMRIS_Bit;
    };
    union
    {
        volatile const uint32_t I2CMMIS;
        I2CMMIS_TypeDef I2CMMIS_Bit;
    };
    union
    {
        volatile uint32_t I2CMICR;
        I2CMICR_TypeDef I2CMICR_Bit;
    };
    union
    {
        volatile uint32_t I2CMCR;
        I2CMCR_TypeDef I2CMCR_Bit;
    };
    union
    {
        volatile uint32_t I2CMCLKOCNT;
        I2CMCLKOCNT_TypeDef I2CMCLKOCNT_Bit;
    };
    const uint32_t reserved [1UL];
    union
    {
        volatile uint32_t I2CMBMON;
        I2CMBMON_TypeDef I2CMBMON_Bit;
    };
    const uint32_t reserved2 [2UL];
    union
    {
        volatile uint32_t I2CMCR2;
        I2CMCR2_TypeDef I2CMCR2_Bit;
    };
    const uint32_t reserved3 [497UL];
    union
    {
        volatile uint32_t I2CSOAR;
        I2CSOAR_TypeDef I2CSOAR_Bit;
    };
    union
    {
        volatile uint32_t I2CSCSR;
        I2CSCSR_STATUS_TypeDef I2CSCSR_STATUS_Bit;
        I2CSCSR_CONTROL_TypeDef I2CSCSR_CONTROL_Bit;
    };
    union
    {
        volatile uint32_t I2CSDR;
        I2CSDR_TypeDef I2CSDR_Bit;
    };
    union
    {
        volatile uint32_t I2CSIMR;
        I2CSIMR_TypeDef I2CSIMR_Bit;
    };
    union
    {
        volatile uint32_t I2CSRIS;
        I2CSRIS_TypeDef I2CSRIS_Bit;
    };
    union
    {
        volatile uint32_t I2CSMIS;
        I2CSMIS_TypeDef I2CSMIS_Bit;
    };
    union
    {
        volatile uint32_t I2CSICR;
        I2CSICR_TypeDef I2CSICR_Bit;
    };
    union
    {
        volatile uint32_t I2CSOAR2;
        I2CSOAR2_TypeDef I2CSOAR2_Bit;
    };
    union
    {
        volatile uint32_t I2CSACKCTL;
        I2CSACKCTL_TypeDef I2CSACKCTL_Bit;
    };
    const uint32_t reserved4 [487UL];
    union
    {
        volatile const uint32_t I2CPP;
        I2CPP_TypeDef I2CPP_Bit;
    };
    union
    {
        volatile const uint32_t I2CPC;
        I2CPC_TypeDef I2CPC_Bit;
    };
    const uint32_t reserved5 [14UL];
} I2C_TypeDef;

/*Master*/
typedef volatile struct
{
    union
    {
        volatile uint32_t I2CMSA;
        I2CMSA_TypeDef I2CMSA_Bit;
    };
    union
    {
        volatile uint32_t I2CMCS;
        I2CMCS_STATUS_TypeDef I2CMCS_STATUS_Bit;
        I2CMCS_CONTROL_TypeDef I2CMCS_CONTROL_Bit;
    };
    union
    {
        volatile const uint32_t I2CMDR;
        I2CMDR_TypeDef I2CMDR_Bit;
    };
    union
    {
        volatile const uint32_t I2CMTPR;
        I2CMTPR_TypeDef I2CMTPR_Bit;
    };
    union
    {
        volatile uint32_t I2CMIMR;
        I2CMIMR_TypeDef I2CMIMR_Bit;
    };
    union
    {
        volatile const uint32_t I2CMRIS;
        I2CMRIS_TypeDef I2CMRIS_Bit;
    };
    union
    {
        volatile const uint32_t I2CMMIS;
        I2CMMIS_TypeDef I2CMMIS_Bit;
    };
    union
    {
        volatile uint32_t I2CMICR;
        I2CMICR_TypeDef I2CMICR_Bit;
    };
    union
    {
        volatile uint32_t I2CMCR;
        I2CMCR_TypeDef I2CMCR_Bit;
    };
    union
    {
        volatile uint32_t I2CMCLKOCNT;
        I2CMCLKOCNT_TypeDef I2CMCLKOCNT_Bit;
    };
    const uint32_t reserved [1UL];
    union
    {
        volatile uint32_t I2CMBMON;
        I2CMBMON_TypeDef I2CMBMON_Bit;
    };
    const uint32_t reserved2 [2UL];
    union
    {
        volatile uint32_t I2CMCR2;
        I2CMCR2_TypeDef I2CMCR2_Bit;
    };
    const uint32_t reserved3 [497UL];
} I2C_MASTER_TypeDef;

/*Slave*/
typedef volatile struct
{
    union
    {
        volatile uint32_t I2CSOAR;
        I2CSOAR_TypeDef I2CSOAR_Bit;
    };
    union
    {
        volatile uint32_t I2CSCSR;
        I2CSCSR_STATUS_TypeDef I2CSCSR_STATUS_Bit;
        I2CSCSR_CONTROL_TypeDef I2CSCSR_CONTROL_Bit;
    };
    union
    {
        volatile uint32_t I2CSDR;
        I2CSDR_TypeDef I2CSDR_Bit;
    };
    union
    {
        volatile uint32_t I2CSIMR;
        I2CSIMR_TypeDef I2CSIMR_Bit;
    };
    union
    {
        volatile uint32_t I2CSRIS;
        I2CSRIS_TypeDef I2CSRIS_Bit;
    };
    union
    {
        volatile uint32_t I2CSMIS;
        I2CSMIS_TypeDef I2CSMIS_Bit;
    };
    union
    {
        volatile uint32_t I2CSICR;
        I2CSICR_TypeDef I2CSICR_Bit;
    };
    union
    {
        volatile uint32_t I2CSOAR2;
        I2CSOAR2_TypeDef I2CSOAR2_Bit;
    };
    union
    {
        volatile uint32_t I2CSACKCTL;
        I2CSACKCTL_TypeDef I2CSACKCTL_Bit;
    };
    const uint32_t reserved4 [487UL];
} I2C_SLAVE_TypeDef;

/*Status Control*/
typedef volatile struct
{
    union
    {
        volatile const uint32_t I2CPP;
        I2CPP_TypeDef I2CPP_Bit;
    };
    union
    {
        volatile const uint32_t I2CPC;
        I2CPC_TypeDef I2CPC_Bit;
    };
    const uint32_t reserved5 [14UL];
} I2C_CONTROL_TypeDef;

typedef volatile struct
{
        I2C_MASTER_TypeDef MASTER;
        I2C_SLAVE_TypeDef SLAVE;
        I2C_CONTROL_TypeDef STATUS_CONTROL;
} I2CS_UNION_TypeDef;

typedef volatile struct
{
    union
    {
            I2C_TypeDef MODULE [(uint32_t) I2C_enMODULE_MAX];
            I2CS_UNION_TypeDef MODULE_UNION [(uint32_t) I2C_enMODULE_MAX];
    }
} I2CS_TypeDef;

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTPERIPHERAL_H_ */
