/**
 *
 * @file TIMER_StructPeripheral_Bitbanding.h
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
 * Date Author Version Description
 * 4 jul. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_Control_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_Control_64.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_ModuleA_16.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_ModuleA_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_ModuleB_16.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_ModuleB_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_ModuleW_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_ModuleW_64.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_Standard.h>

typedef volatile struct
{
    GPTM_BITBANDING_TypeDef MODULE [(uint32_t) TIMER_enMODULE_NUM_MAX];
}GPTMS_BITBANDING_TypeDef;

typedef volatile struct
{
    union
    {
        GPTM_BITBANDING_CTL_TypeDef CTL [(uint32_t) TIMER_enMODULE_NUM_MAX];
        GPTM_BITBANDING_TA_TypeDef TA [(uint32_t) TIMER_enMODULE_NUM_MAX];
        GPTM_BITBANDING_TB_TypeDef TB [(uint32_t) TIMER_enMODULE_NUM_MAX];
        GPTM_BITBANDING_TW_TypeDef TMODULE [(uint32_t) TIMER_enMODULE_NUM_MAX];
    };
}GPTM_BITBANDING_UNION_TypeDef;

typedef volatile struct
{
    GPTM_BITBANDING_TypeDef T01 [2UL];
    GPTM_BITBANDING_TypeDef reserved [20UL];
    GPTM_BITBANDING_TypeDef T25 [4UL];
}GPWTMS_BITBANDING_TypeDef;

typedef volatile struct
{
    union
    {
        GPWTM_BITBANDING_CTL_TypeDef CTL01 [2UL];
        GPWTM_BITBANDING_TA_TypeDef TA01 [2UL];
        GPWTM_BITBANDING_TB_TypeDef TB01 [2UL];
        GPWTM_BITBANDING_TW_TypeDef TW01 [2UL];
    };
     GPWTM_BITBANDING_CTL_TypeDef reserved [20UL];
     union
     {
         GPWTM_BITBANDING_CTL_TypeDef CTL25 [4UL];
         GPWTM_BITBANDING_TA_TypeDef TA25 [4UL];
         GPWTM_BITBANDING_TB_TypeDef TB25 [4UL];
         GPWTM_BITBANDING_TW_TypeDef TW25 [4UL];
     };
}GPWTM_BITBANDING_UNION_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_H_ */
