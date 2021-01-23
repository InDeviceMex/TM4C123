/**
 *
 * @file TIMER_StructPeripheral.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Control_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Control_64.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_ModuleA_16.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_ModuleA_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_ModuleB_16.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_ModuleB_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_ModuleW_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_ModuleW_64.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Standard.h>

typedef volatile struct
{
    GPTM_TypeDef                            MODULE[(uint32_t) TIMER_enMODULE_NUM_MAX +1u];
}GPTMS_TypeDef;

typedef volatile struct
{
    union
    {
        GPTM_CTL_TypeDef                    CTL[(uint32_t) TIMER_enMODULE_NUM_MAX +1u];
        GPTM_TA_TypeDef                     TA[(uint32_t) TIMER_enMODULE_NUM_MAX +1u];
        GPTM_TB_TypeDef                     TB[(uint32_t) TIMER_enMODULE_NUM_MAX +1u];
        GPTM_TW_TypeDef                     TMODULE[(uint32_t) TIMER_enMODULE_NUM_MAX +1u];
    };
}GPTM_UNION_TypeDef;




typedef volatile struct
{
    GPTM_TypeDef                            T01[2];
    GPTM_TypeDef                            reserved[20];
    GPTM_TypeDef                            T25[4];
}GPWTMS_TypeDef;

typedef volatile struct
{
    union
    {
        GPWTM_CTL_TypeDef                   CTL01[2];
        GPWTM_TA_TypeDef                    TA01[2];
        GPWTM_TB_TypeDef                    TB01[2];
        GPWTM_TW_TypeDef                    TW01[2];
    };
     GPWTM_CTL_TypeDef                      reserved[20];
     union
     {
         GPWTM_CTL_TypeDef                  CTL25[4];
         GPWTM_TA_TypeDef                   TA25[4];
         GPWTM_TB_TypeDef                   TB25[4];
         GPWTM_TW_TypeDef                   TW25[4];
     };
}GPWTM_UNION_TypeDef;


#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_H_ */
