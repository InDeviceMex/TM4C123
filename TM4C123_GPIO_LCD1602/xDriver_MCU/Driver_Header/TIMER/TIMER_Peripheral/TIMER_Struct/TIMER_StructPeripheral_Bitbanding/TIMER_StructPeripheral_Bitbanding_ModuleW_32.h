/**
 *
 * @file TIMER_StructPeripheral_Bitbanding_ModuleAB_32.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEW_32_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEW_32_H_

#include <TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructRegister_Bitbanding/TIMER_StructRegister_Bitbanding_ModuleW_32.h>

typedef volatile struct
{

    const uint32_t                          reserved[1*32];
    union
    {
        volatile uint32_t                   GPTMTnMR[32];
        BITBANDING_TW_GPTMMR_TypeDef        GPTMTnMR_Bit;
    };
    const uint32_t                          reserved1[1*32];
    union
    {
        volatile uint32_t                   GPTMTnCTL[32];
        BITBANDING_TW_GPTMCTL_TypeDef       GPTMTnCTL_Bit;
    };
    const uint32_t                          reserved3[2*32];
    union
    {
        volatile uint32_t                   GPTMTnIMR[32];
        BITBANDING_TW_GPTMIMR_TypeDef       GPTMTnIMR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnRIS[32];
        BITBANDING_TW_GPTMRIS_TypeDef       GPTMTnRIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnMIS[32];
        BITBANDING_TW_GPTMMIS_TypeDef       GPTMTnMIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnICR[32];
        BITBANDING_TW_GPTMICR_TypeDef       GPTMTnICR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnILR[32];
        BITBANDING_TW_GPTMILR_TypeDef       GPTMTnILR_Bit;
    };
    const uint32_t                          reserved8[1*32];
    union
    {
        volatile uint32_t                   GPTMTnMATCHR[32];
        BITBANDING_TW_GPTMMATCHR_TypeDef    GPTMTnMATCHR_Bit;
    };
    const uint32_t                          reserved9[5*32];
    union
    {
        volatile const uint32_t             GPTMTnR[32];
        BITBANDING_TW_GPTMR_TypeDef         GPTMTnR_Bit;
    };
    const uint32_t                          reserved10[1*32];
    union
    {
        volatile uint32_t                   GPTMTnV[32];
        BITBANDING_TW_GPTMV_TypeDef         GPTMTnV_Bit;
    };
    const uint32_t                          reserved11[1*32];
    union
    {
        volatile const uint32_t             GPTMRTCPD[32];
        BITBANDING_TW_GPTMRTCPD_TypeDef     GPTMRTCPD_Bit;
    };
    const uint32_t                          reserved13[1001*32];

}GPTM_BITBANDING_TW_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEW_32_H_ */
