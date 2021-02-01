/**
 *
 * @file TIMER_StructPeripheral_Bitbanding_ModuleB_32.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEB_32_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEB_32_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister_Bitbanding/xHeader/TIMER_StructRegister_Bitbanding_ModuleB_16.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister_Bitbanding/xHeader/TIMER_StructRegister_Bitbanding_ModuleB_32.h>

typedef volatile struct
{
    const uint32_t reserved [2UL * 32UL];
    union
    {
        volatile uint32_t GPTMTnMR [32UL];
        BITBANDING_TB_GPTMMR_TypeDef GPTMTnMR_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnCTL [32UL];
        BITBANDING_TB_GPTMCTL_TypeDef GPTMTnCTL_Bit;
    };
    const uint32_t reserved3 [2UL * 32UL];
    union
    {
        volatile uint32_t GPTMTnIMR [32UL];
        BITBANDING_TB_GPTMIMR_TypeDef GPTMTnIMR_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnRIS [32UL];
        BITBANDING_TB_GPTMRIS_TypeDef GPTMTnRIS_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnMIS [32UL];
        BITBANDING_TB_GPTMMIS_TypeDef GPTMTnMIS_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnICR [32UL];
        BITBANDING_TB_GPTMICR_TypeDef GPTMTnICR_Bit;
    };
    const uint32_t reserved9 [1UL * 32UL];
    union
    {
        volatile uint32_t GPTMTnILR [32UL];
        BITBANDING_TB_GPWTMILR_TypeDef GPTMTnILR_Bit;
    };
    const uint32_t reserved11 [1UL * 32UL];
    union
    {
        volatile uint32_t GPTMTnMATCHR [32UL];
        BITBANDING_TB_GPWTMMATCHR_TypeDef GPTMTnMSTCHR_Bit;
    };
    const uint32_t reserved13 [1UL * 32UL];
    union
    {
        volatile uint32_t GPTMTnPR [32UL];
        BITBANDING_TB_GPWTMPR_TypeDef GPTMTnPR_Bit;
    };
    const uint32_t reserved15 [1UL * 32UL];
    union
    {
        volatile uint32_t GPTMTnPMR [32UL];
        BITBANDING_TB_GPWTMPMR_TypeDef GPTMTnPMR_Bit;
    };
    const uint32_t reserved17 [1UL * 32UL];
    union
    {
        volatile const uint32_t GPTMTnR [32UL];
        BITBANDING_TB_GPTMR_TypeDef GPTMTnR_Bit;
    };
    const uint32_t reserved18 [1UL * 32UL];
    union
    {
        volatile uint32_t GPTMTnV [32UL];
        BITBANDING_TB_GPTMV_TypeDef GPTMTnV_Bit;
    };
    const uint32_t reserved19 [2UL * 32UL];
    union
    {
        volatile const uint32_t GPTMTnPS [32UL];
        BITBANDING_TB_GPTMPS_TypeDef GPTMTnPS_Bit;
    };
    const uint32_t reserved21 [1UL * 32UL];
    union
    {
        volatile const uint32_t GPTMTnPV [32UL];
        BITBANDING_TB_GPWTMPV_TypeDef GPTMTnPV_Bit;
    };
    const uint32_t reserved23 [997UL * 32UL];
}GPWTM_BITBANDING_TB_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEB_32_H_ */
