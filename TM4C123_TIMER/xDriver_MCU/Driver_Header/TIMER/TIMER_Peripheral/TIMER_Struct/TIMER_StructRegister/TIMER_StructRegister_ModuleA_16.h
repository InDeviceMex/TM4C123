/**
 *
 * @file TIMER_StructRegister_ModuleA_16.h
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
 * @verbatim 4 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_MODULEA_16_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_MODULEA_16_H_

#include <stdint.h>

/*************************************************************
 ***************************  TIMERA 16 REGS **************
 **************************************************************/

typedef volatile struct
{
    volatile uint32_t TnMR              : 2;
    volatile uint32_t TnCMR             : 1;
    volatile uint32_t TnAMS             : 1;
    volatile uint32_t TnCDIR            : 1;
    volatile uint32_t TnMIE             : 1;
    volatile uint32_t TnWOT             : 1;
    volatile uint32_t TnSNAPS           : 1;
    volatile uint32_t TnILD             : 1;
    volatile uint32_t TnPWMIE           : 1;
    volatile uint32_t TnMRSU            : 1;
    volatile uint32_t TnPLO             : 1;
    const    uint32_t reserved          : 20;
}TA_GPTMMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnEN               : 1;
    volatile uint32_t TnSTALL            : 1;
    volatile uint32_t TnEVENT            : 2;
    const    uint32_t reserved           : 1;
    volatile uint32_t TnOTE              : 1;
    volatile uint32_t TnPWML             : 1;
    const    uint32_t reserved1          : 25;
}TA_GPTMCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnTOIM             : 1;
    volatile uint32_t CnMIM              : 1;
    volatile uint32_t CnEIM              : 1;
    const    uint32_t reserved           : 1;
    volatile uint32_t TnMIM              : 1;
    const    uint32_t reserved1          : 27;
}TA_GPTMIMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnTORIS      : 1;
    volatile const uint32_t CnMRIS       : 1;
    volatile const uint32_t CnERIS       : 1;
    const          uint32_t reserved     : 1;
    volatile const uint32_t TnMRIS       : 1;
    const          uint32_t reserved1    : 27;
}TA_GPTMRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnTOMIS      : 1;
    volatile const uint32_t CnMMIS       : 1;
    volatile const uint32_t CnEMIS       : 1;
    const          uint32_t reserved     : 1;
    volatile const uint32_t TnMMIS       : 1;
    const          uint32_t reserved1    : 27;
}TA_GPTMMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnTOCINT           : 1;
    volatile uint32_t CnMCINT            : 1;
    volatile uint32_t CnECINT            : 1;
    const    uint32_t reserved           : 1;
    volatile uint32_t TnMCINT            : 1;
    const    uint32_t reserved1          : 27;
}TA_GPTMICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnILR             : 16;
    const    uint32_t reserved          : 16;
}TA_GPTMILR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnMR              : 16;
    const    uint32_t reserved          : 16;
}TA_GPTMMATCHR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnPSR              : 8;
    const    uint32_t reserved          : 24;
}TA_GPTMPR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnPSMR             : 8;
    const    uint32_t reserved          : 24;
}TA_GPTMPMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnR         : 32;
}TA_GPTMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnV               : 32;
}TA_GPTMV_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PSS         : 16;
    const    uint32_t reserved          : 16;
}TA_GPTMPS_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_MODULEA_16_H_ */
