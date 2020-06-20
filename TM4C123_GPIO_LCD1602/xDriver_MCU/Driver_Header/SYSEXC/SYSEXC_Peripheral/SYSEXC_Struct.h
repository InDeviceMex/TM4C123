/**
 *
 * @file SYSEXC_Struct.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_H_


#include <stdint.h>


typedef volatile struct
{
    volatile const uint32_t FPIDCRIS      :1;
    volatile const uint32_t FPDZCRIS      :1;
    volatile const uint32_t FPIOCRIS      :1;
    volatile const uint32_t FPUFCRIS      :1;
    volatile const uint32_t FPOFCRIS      :1;
    volatile const uint32_t FPIXCRIS      :1;
    const          uint32_t reserved      :26;
}SYSEXCRIS_TypeDef;


typedef volatile struct
{
    volatile uint32_t FPIDCIM      :1;
    volatile uint32_t FPDZCIM      :1;
    volatile uint32_t FPIOCIM      :1;
    volatile uint32_t FPUFCIM      :1;
    volatile uint32_t FPOFCIM      :1;
    volatile uint32_t FPIXCIM      :1;
    const    uint32_t reserved     :26;
}SYSEXCIM_TypeDef;


typedef volatile struct
{
    volatile const uint32_t FPIDCMIS      :1;
    volatile const uint32_t FPDZCMIS      :1;
    volatile const uint32_t FPIOCMIS      :1;
    volatile const uint32_t FPUFCMIS      :1;
    volatile const uint32_t FPOFCMIS      :1;
    volatile const uint32_t FPIXCMIS      :1;
    const    uint32_t       reserved     :26;
}SYSEXCMIS_TypeDef;


typedef volatile struct
{
    volatile uint32_t FPIDCCIC      :1;
    volatile uint32_t FPDZCCIC      :1;
    volatile uint32_t FPIOCCIC      :1;
    volatile uint32_t FPUFCCIC      :1;
    volatile uint32_t FPOFCCIC      :1;
    volatile uint32_t FPIXCCIC      :1;
    const    uint32_t reserved      :26;
}SYSEXCIC_TypeDef;


typedef volatile struct
{
    volatile const uint32_t FPIDCRIS      ;
    volatile const uint32_t FPDZCRIS      ;
    volatile const uint32_t FPIOCRIS      ;
    volatile const uint32_t FPUFCRIS      ;
    volatile const uint32_t FPOFCRIS      ;
    volatile const uint32_t FPIXCRIS      ;
    const          uint32_t reserved      [26];
}BITBANDING_SYSEXCRIS_TypeDef;


typedef volatile struct
{
    volatile uint32_t FPIDCIM      ;
    volatile uint32_t FPDZCIM      ;
    volatile uint32_t FPIOCIM      ;
    volatile uint32_t FPUFCIM      ;
    volatile uint32_t FPOFCIM      ;
    volatile uint32_t FPIXCIM      ;
    const    uint32_t reserved     [26];
}BITBANDING_SYSEXCIM_TypeDef;


typedef volatile struct
{
    volatile const uint32_t FPIDCMIS      ;
    volatile const uint32_t FPDZCMIS      ;
    volatile const uint32_t FPIOCMIS      ;
    volatile const uint32_t FPUFCMIS      ;
    volatile const uint32_t FPOFCMIS      ;
    volatile const uint32_t FPIXCMIS      ;
    const    uint32_t       reserved     [26];
}BITBANDING_SYSEXCMIS_TypeDef;


typedef volatile struct
{
    volatile uint32_t FPIDCCIC      ;
    volatile uint32_t FPDZCCIC      ;
    volatile uint32_t FPIOCCIC      ;
    volatile uint32_t FPUFCCIC      ;
    volatile uint32_t FPOFCCIC      ;
    volatile uint32_t FPIXCCIC      ;
    const    uint32_t reserved      [26];
}BITBANDING_SYSEXCIC_TypeDef;


typedef volatile struct
{
    union
    {
        volatile const uint32_t    SYSEXCRIS;
        SYSEXCRIS_TypeDef               SYSEXCRIS_Bit;
    };
    union
    {
        volatile uint32_t          SYSEXCIM;
        SYSEXCIM_TypeDef                SYSEXCIM_Bit;
    };
    union
    {
        volatile const uint32_t    SYSEXCMIS;
        SYSEXCMIS_TypeDef               SYSEXCMIS_Bit;
    };
    union
    {
        volatile uint32_t          SYSEXCIC;
        SYSEXCIC_TypeDef                SYSEXCIC_Bit;
    };
}SYSEXC_TypeDef;



typedef volatile struct
{
    union
    {
        volatile const uint32_t    SYSEXCRIS[32];
        BITBANDING_SYSEXCRIS_TypeDef               SYSEXCRIS_Bit;
    };
    union
    {
        volatile uint32_t          SYSEXCIM[32];
        BITBANDING_SYSEXCIM_TypeDef                SYSEXCIM_Bit;
    };
    union
    {
        volatile const uint32_t    SYSEXCMIS[32];
        BITBANDING_SYSEXCMIS_TypeDef               SYSEXCMIS_Bit;
    };
    union
    {
        volatile uint32_t          SYSEXCIC[32];
        BITBANDING_SYSEXCIC_TypeDef                SYSEXCIC_Bit;
    };
}SYSEXC_BITBANDING_TypeDef;


#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_H_ */
