/**
 *
 * @file TIMER_StructPeripheral_Bitbanding_ModuleA_32.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEA_32_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEA_32_H_

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructRegister_Bitbanding/TIMER_StructRegister_Bitbanding_ModuleA_16.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructRegister_Bitbanding/TIMER_StructRegister_Bitbanding_ModuleA_32.h>

typedef volatile struct
{

    const uint32_t                          reserved[1*32];
    union
    {
        volatile uint32_t                   GPTMTnMR[32];
        BITBANDING_TA_GPTMMR_TypeDef        GPTMTnMR_Bit;
    };
    const uint32_t                          reserved1[1*32];
    union
    {
        volatile uint32_t                   GPTMTnCTL[32];
        BITBANDING_TA_GPTMCTL_TypeDef       GPTMTnCTL_Bit;
    };
    const uint32_t                          reserved3[2*32];
    union
    {
        volatile uint32_t                   GPTMAIMR[32];
        BITBANDING_TA_GPTMIMR_TypeDef       GPTMAIMR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnRIS[32];
        BITBANDING_TA_GPTMRIS_TypeDef       GPTMTnRIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnMIS[32];
        BITBANDING_TA_GPTMMIS_TypeDef       GPTMTnMIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnICR[32];
        BITBANDING_TA_GPTMICR_TypeDef       GPTMTnICR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnILR[32];
        BITBANDING_TA_GPWTMILR_TypeDef      GPTMTnILR_Bit;
    };
    const uint32_t                          reserved9[1*32];
    union
    {
        volatile uint32_t                   GPTMTnMATCHR[32];
        BITBANDING_TA_GPWTMMATCHR_TypeDef   GPTMTnMATCHR_Bit;
    };
    const uint32_t                          reserved11[1*32];
    union
    {
        volatile uint32_t                   GPTMTnPR[32];
        BITBANDING_TA_GPWTMPR_TypeDef       GPTMTnPR_Bit;
    };
    const uint32_t                          reserved13[1*32];
    union
    {
        volatile uint32_t                   GPTMTnPMR[32];
        BITBANDING_TA_GPWTMPMR_TypeDef      GPTMTnPMR_Bit;
    };
    const uint32_t                          reserved15[1*32];
    union
    {
        volatile const uint32_t             GPTMTnR[32];
        BITBANDING_TA_GPTMR_TypeDef         GPTMTnR_Bit;
    };
    const uint32_t                          reserved16[1*32];
    union
    {
        volatile uint32_t                   GPTMTnV[32];
        BITBANDING_TA_GPTMV_TypeDef         GPTMTnV_Bit;
    };
    const uint32_t                          reserved17[2*32];
    union
    {
        volatile const uint32_t             GPTMTnPS[32];
        BITBANDING_TA_GPTMPS_TypeDef        GPTMTnPS_Bit;
    };
    const uint32_t                          reserved18[32];
    union
    {
        volatile uint32_t                   GPTMTnPV[32];
        BITBANDING_TA_GPWTMPV_TypeDef       GPTMTnPV_Bit;
    };
    const uint32_t                          reserved20[998*32];

}GPWTM_BITBANDING_TA_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEA_32_H_ */
