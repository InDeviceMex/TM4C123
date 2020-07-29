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

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral/TIMER_StructPeripheral_ModuleW_32.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral/TIMER_StructPeripheral_ModuleW_64.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral/TIMER_StructPeripheral_Standard.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral/TIMER_StructPeripheral_Control_32.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral/TIMER_StructPeripheral_Control_64.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral/TIMER_StructPeripheral_ModuleA_16.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral/TIMER_StructPeripheral_ModuleA_32.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral/TIMER_StructPeripheral_ModuleB_16.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral/TIMER_StructPeripheral_ModuleB_32.h>

typedef volatile struct
{
    GPTM_TypeDef                            T[6];
}GPTMS_TypeDef;

typedef volatile struct
{
    union
    {
        GPTM_CTL_TypeDef                    CTL[6];
        GPTM_TA_TypeDef                     TA[6];
        GPTM_TB_TypeDef                     TB[6];
        GPTM_TW_TypeDef                     TW[6];
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
