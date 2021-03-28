/**
 *
 * @file TIMER_StructPeripheral_ModuleB_16.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEB_16_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEB_16_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister/xHeader/TIMER_StructRegister_ModuleB_16.h>

typedef volatile struct
{
    const uint32_t reserved [2UL];
    union
    {
        volatile uint32_t GPTMTnMR;
        TB_GPTMMR_TypeDef GPTMTnMR_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnCTL;
        TB_GPTMCTL_TypeDef GPTMTnCTL_Bit;
    };
    const uint32_t reserved3 [2UL];
    union
    {
        volatile uint32_t GPTMTnIMR;
        TB_GPTMIMR_TypeDef GPTMTnIMR_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnRIS;
        TB_GPTMRIS_TypeDef GPTMTnRIS_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnMIS;
        TB_GPTMMIS_TypeDef GPTMTnMIS_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnICR;
        TB_GPTMICR_TypeDef GPTMTnICR_Bit;
    };
    const uint32_t reserved9;
    union
    {
        volatile uint32_t GPTMTnILR;
        TB_GPTMILR_TypeDef GPTMTnILR_Bit;
    };
    const uint32_t reserved11;
    union
    {
        volatile uint32_t GPTMTnMATCHR;
        TB_GPTMMATCHR_TypeDef GPTMTnMATCHR_Bit;
    };
    const uint32_t reserved13;
    union
    {
        volatile uint32_t GPTMTnPR;
        TB_GPTMPR_TypeDef GPTMTnPR_Bit;
    };
    const uint32_t reserved15;
    union
    {
        volatile uint32_t GPTMTnPMR;
        TB_GPTMPMR_TypeDef GPTMTnPMR_Bit;
    };
    const uint32_t reserved17;
    union
    {
        volatile const uint32_t GPTMTnR;
        TB_GPTMR_TypeDef GPTMTnR_Bit;
    };
    const uint32_t reserved18;
    union
    {
        volatile uint32_t GPTMTnV;
        TB_GPTMV_TypeDef GPTMTnV_Bit;
    };
    const uint32_t reserved19 [2UL];
    union
    {
        volatile const uint32_t GPTMTnPS;
        TB_GPTMPS_TypeDef GPTMTnPS_Bit;
    };
    const uint32_t reserved21 [999UL];
}GPTM_TB_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEB_16_H_ */
