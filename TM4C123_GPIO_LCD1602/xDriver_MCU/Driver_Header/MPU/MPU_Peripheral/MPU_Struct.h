/**
 *
 * @file MPU_Struct.h
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_MPU_MPU_PERIPHERAL_MPU_STRUCT_H_
#define XDRIVER_MCU_DRIVER_HEADER_MPU_MPU_PERIPHERAL_MPU_STRUCT_H_

#include <stdint.h>

typedef volatile struct
{
    const uint32_t SEPARATE     :1;
    const uint32_t reserved     :7;
    const uint32_t DREGION      :8;
    const uint32_t IREGION      :8;
    const uint32_t reserved1    :8;
}MPU_TYPER_TypeDef;

typedef volatile struct
{
    volatile uint32_t ENABLE        :1;
    volatile uint32_t HFNMIENA      :1;
    volatile uint32_t PRIVDEFENA    :1;
    const    uint32_t reserved      :29;
}MPU_CTRL_TypeDef;


typedef volatile struct
{
    volatile uint32_t REGION        :3;
    const    uint32_t reserved      :29;
}MPU_RNR_TypeDef;


typedef volatile struct
{
    volatile uint32_t REGION        :4;
    volatile uint32_t VALID         :1;
    volatile uint32_t ADDR          :27;
}MPU_RBAR_TypeDef;


typedef volatile struct
{
    volatile uint32_t ENABLE        :1;
    volatile uint32_t SIZE          :5;
    const    uint32_t reserved      :2;
    volatile uint32_t SRD0          :1;
    volatile uint32_t SRD1          :1;
    volatile uint32_t SRD2          :1;
    volatile uint32_t SRD3          :1;
    volatile uint32_t SRD4          :1;
    volatile uint32_t SRD5          :1;
    volatile uint32_t SRD6          :1;
    volatile uint32_t SRD7          :1;
    volatile uint32_t B             :1;
    volatile uint32_t C             :1;
    volatile uint32_t S             :1;
    volatile uint32_t TEX           :3;
    const    uint32_t reserved1     :2;
    volatile uint32_t AP            :3;
    const    uint32_t reserved2     :1;
    volatile uint32_t XN            :1;
    const    uint32_t reserved3     :3;
}MPU_RASR_TypeDef;


typedef volatile struct
{
    volatile uint32_t ENABLE        :1;
    volatile uint32_t SIZE          :5;
    const    uint32_t reserved      :2;
    volatile uint32_t SRD           :8;
    volatile uint32_t B             :1;
    volatile uint32_t C             :1;
    volatile uint32_t S             :1;
    volatile uint32_t TEX           :3;
    const    uint32_t reserved1     :2;
    volatile uint32_t AP            :3;
    const    uint32_t reserved2     :1;
    volatile uint32_t XN            :1;
    const    uint32_t reserved3     :3;
}MPU_RASRb_TypeDef;



typedef volatile struct
{
    union
    {
        volatile uint32_t       TYPER;
        MPU_TYPER_TypeDef       TYPE_Bit;
    };
    union
    {
        volatile uint32_t       CTRL;
        MPU_CTRL_TypeDef        CTRL_Bit;
    };
    union
    {
        volatile uint32_t       RNR;
        MPU_RNR_TypeDef         RNR_Bit;
    };
    union
    {
        volatile uint32_t       RBAR;
        MPU_RBAR_TypeDef        RBAR_Bit;
    };
    union
    {
        volatile uint32_t       RASR;
        MPU_RASR_TypeDef        RASR_Bit;
    };
    union
    {
        volatile uint32_t       RBAR1;
        MPU_RBAR_TypeDef        RBAR1_Bit;
    };
    union
    {
        volatile uint32_t       RASR1;
        MPU_RASR_TypeDef        RASR1_Bit;
    };
    union
    {
        volatile uint32_t       RBAR2;
        MPU_RBAR_TypeDef        RBAR2_Bit;
    };
    union
    {
        volatile uint32_t       RASR2;
        MPU_RASR_TypeDef        RASR2_Bit;
    };
    union
    {
        volatile uint32_t       RBAR3;
        MPU_RBAR_TypeDef        RBAR3_Bit;
    };
    union
    {
        volatile uint32_t       RASR3;
        MPU_RASR_TypeDef        RASR3_Bit;
    };
}MPU_TypeDef;



#endif /* XDRIVER_MCU_DRIVER_HEADER_MPU_MPU_PERIPHERAL_MPU_STRUCT_H_ */
