/**
 *
 * @file TIMER_StructPeripheral_Bitbanding_ModuleW_64.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEW_64_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEW_64_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister_Bitbanding/xHeader/TIMER_StructRegister_Bitbanding_ModuleW_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister_Bitbanding/xHeader/TIMER_StructRegister_Bitbanding_ModuleW_64.h>

typedef volatile struct
{
    const uint32_t reserved [1UL * 32UL];
    union
    {
        volatile uint32_t GPTMTnMR [32UL];
        BITBANDING_TW_GPTMMR_TypeDef GPTMTnMR_Bit;
    };
    const uint32_t reserved1 [1UL * 32UL];
    union
    {
        volatile uint32_t GPTMTnCTL [32UL];
        BITBANDING_TW_GPTMCTL_TypeDef GPTMTnCTL_Bit;
    };
    const uint32_t reserved3 [2UL * 32UL];
    union
    {
        volatile uint32_t GPTMTnIMR [32UL];
        BITBANDING_TW_GPWTMIMR_TypeDef GPTMTnIMR_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnRIS [32UL];
        BITBANDING_TW_GPWTMRIS_TypeDef GPTMTnRIS_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnMIS [32UL];
        BITBANDING_TW_GPWTMMIS_TypeDef GPTMTnMIS_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnICR [32UL];
        BITBANDING_TW_GPWTMICR_TypeDef GPTMTnICR_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnILR_LOMODULE [32UL];
        BITBANDING_TW_GPWTMILR_LOW_TypeDef GPTMTnILR_LOW_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnILR_HIGH [32UL];
        BITBANDING_TW_GPWTMILR_HIGH_TypeDef GPTMTnILR_HIGH_Bit;
    };
    const uint32_t reserved4 [1UL * 32UL];
    union
    {
        volatile uint32_t GPTMTnMATCHR_LOMODULE [32UL];
        BITBANDING_TW_GPWTMMATCHR_LOW_TypeDef GPTMTnMATCHR_LOW_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnMATCHR_HIGH [32UL];
        BITBANDING_TW_GPWTMMATCHR_HIGH_TypeDef GPTMTnMATCHR_HIGH_Bit;
    };
    const uint32_t reserved5 [4UL * 32UL];
    union
    {
        volatile const uint32_t GPTMTnR_LOMODULE [32UL];
        BITBANDING_TW_GPWTMR_LOW_TypeDef GPTMTnR_LOW_Bit;
    };
    union
    {
        volatile const uint32_t GPTMTnR_HIGH [32UL];
        BITBANDING_TW_GPWTMR_HIGH_TypeDef GPTMTnR_HIGH_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnV_LOMODULE [32UL];
        BITBANDING_TW_GPWTMV_LOW_TypeDef GPTMTnV_LOW_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnV_HIGH [32UL];
        BITBANDING_TW_GPWTMV_HIGH_TypeDef GPTMTnV_HIGH_Bit;
    };
    union
    {
        volatile const uint32_t GPTMRTCPD [32UL];
        BITBANDING_TW_GPTMRTCPD_TypeDef GPTMRTCPD_Bit;
    };
    const uint32_t reserved9 [1001UL * 32UL];
}GPWTM_BITBANDING_TW_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEW_64_H_ */
