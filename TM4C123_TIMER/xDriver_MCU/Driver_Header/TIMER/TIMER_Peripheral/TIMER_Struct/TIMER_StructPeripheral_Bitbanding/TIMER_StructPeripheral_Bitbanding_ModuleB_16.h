/**
 *
 * @file TIMER_StructPeripheral_Bitbanding_ModuleB_16.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEB_16_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEB_16_H_

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructRegister_Bitbanding/TIMER_StructRegister_Bitbanding_ModuleB_16.h>

typedef volatile struct
{
    const uint32_t                          reserved[2*32];
    union
    {
        volatile uint32_t                   GPTMTnMR[32];
        BITBANDING_TB_GPTMMR_TypeDef        GPTMTnMR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnCTL[32];
        BITBANDING_TB_GPTMCTL_TypeDef       GPTMTnCTL_Bit;
    };
    const uint32_t                          reserved3[2*32];
    union
    {
        volatile uint32_t                   GPTMTnIMR[32];
        BITBANDING_TB_GPTMIMR_TypeDef       GPTMTnIMR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnRIS[32];
        BITBANDING_TB_GPTMRIS_TypeDef       GPTMTnRIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnMIS[32];
        BITBANDING_TB_GPTMMIS_TypeDef       GPTMTnMIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnICR[32];
        BITBANDING_TB_GPTMICR_TypeDef       GPTMTnICR_Bit;
    };
    const uint32_t                          reserved9[1*32];
    union
    {
        volatile uint32_t                   GPTMTnILR[32];
        BITBANDING_TB_GPTMILR_TypeDef       GPTMTnILR_Bit;
    };
    const uint32_t                          reserved11[1*32];
    union
    {
        volatile uint32_t                   GPTMTnMATCHR[32];
        BITBANDING_TB_GPTMMATCHR_TypeDef    GPTMTnMATCHR_Bit;
    };
    const uint32_t                          reserved13[1*32];
    union
    {
        volatile uint32_t                   GPTMTnPR[32];
        BITBANDING_TB_GPTMPR_TypeDef        GPTMTnPR_Bit;
    };
    const uint32_t                          reserved15[1*32];
    union
    {
        volatile uint32_t                   GPTMTnPMR[32];
        BITBANDING_TB_GPTMPMR_TypeDef       GPTMTnPMR_Bit;
    };
    const uint32_t                          reserved17[1*32];
    union
    {
        volatile const uint32_t             GPTMTnR[32];
        BITBANDING_TB_GPTMR_TypeDef         GPTMTnR_Bit;
    };
    const uint32_t                          reserved18[1*32];
    union
    {
        volatile uint32_t                   GPTMTnV[32];
        BITBANDING_TB_GPTMV_TypeDef         GPTMTnV_Bit;
    };
    const uint32_t                          reserved19[2*32];
    union
    {
        volatile const uint32_t             GPTMTnPS[132];
        BITBANDING_TB_GPTMPS_TypeDef        GPTMTnPS_Bit;
    };
    const uint32_t                          reserved21[999*32];
}GPTM_BITBANDING_TB_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEB_16_H_ */
