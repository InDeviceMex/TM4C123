/**
 *
 * @file WDT_StructRegister_Bitbanding.h
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
 * @verbatim 19 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTREGISTER_BITBANDING_H_

#include <xUtils/Standard/Standard.h>

typedef volatile struct
{
    volatile uint32_t WDTLOAD [32];
}BITBANDING_WDTLOAD_TypeDef;

typedef volatile struct
{
    volatile const uint32_t WDTVALUE   [32];
}BITBANDING_WDTVALUE_TypeDef;

typedef volatile struct
{
    volatile uint32_t       INTEN   ;
    volatile uint32_t       RESEN   ;
    volatile uint32_t       INTTYPE ;
    const    uint32_t       reserved[28];
    volatile const uint32_t WRC     ;
}BITBANDING_WDTCTL_TypeDef;


typedef volatile struct
{
    volatile uint32_t WDTINTCLR [32];
}BITBANDING_WDTICR_TypeDef;



typedef volatile struct
{
    volatile const uint32_t WDTRIS  ;
    const    uint32_t       reserved[31];
}BITBANDING_WDTRIS_TypeDef;



typedef volatile struct
{
    volatile const uint32_t WDTMIS    ;
    const    uint32_t       reserved  [31];
}BITBANDING_WDTMIS_TypeDef;

typedef volatile struct
{
    const    uint32_t     reserved [8];
    volatile uint32_t     STALL    ;
    const    uint32_t     reserved1[23];
}BITBANDING_WDTTEST_TypeDef;

typedef volatile struct
{
    volatile uint32_t WDTLOCK    [32];
}BITBANDING_WDTLOCK_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID4    [8];
    const    uint32_t       reserved[24];
}BITBANDING_WDTPeriphID4_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID5    [8];
    const    uint32_t       reserved[24];
}BITBANDING_WDTPeriphID5_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID6    [8];
    const    uint32_t       reserved[24];
}BITBANDING_WDTPeriphID6_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID7    [8];
    const    uint32_t       reserved[24];
}BITBANDING_WDTPeriphID7_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID0    [8];
    const    uint32_t       reserved[24];
}BITBANDING_WDTPeriphID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID1    [8];
    const    uint32_t       reserved[24];
}BITBANDING_WDTPeriphID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID2    [8];
    const    uint32_t       reserved[24];
}BITBANDING_WDTPeriphID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID3    [8];
    const    uint32_t       reserved[24];
}BITBANDING_WDTPeriphID3_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID0    [8];
    const    uint32_t       reserved[24];
}BITBANDING_WDTPCellID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID1    [8];
    const    uint32_t       reserved[24];
}BITBANDING_WDTPCellID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID2    [8];
    const    uint32_t       reserved[24];
}BITBANDING_WDTPCellID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID3    [8];
    const    uint32_t       reserved[24];
}BITBANDING_WDTPCellID3_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTREGISTER_BITBANDING_H_ */
