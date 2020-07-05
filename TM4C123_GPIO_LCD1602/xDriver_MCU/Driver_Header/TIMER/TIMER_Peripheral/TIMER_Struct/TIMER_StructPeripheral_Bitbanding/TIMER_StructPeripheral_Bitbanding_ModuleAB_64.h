/**
 *
 * @file TIMER_StructPeripheral_Bitbanding_ModuleAB_64.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEAB_64_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEAB_64_H_

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructRegister_Bitbanding/TIMER_StructRegister_Bitbanding_ModuleAB_32.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructRegister_Bitbanding/TIMER_StructRegister_Bitbanding_ModuleAB_64.h>

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
        BITBANDING_TW_GPWTMIMR_TypeDef      GPTMTnIMR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnRIS[32];
        BITBANDING_TW_GPWTMRIS_TypeDef      GPTMTnRIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnMIS[32];
        BITBANDING_TW_GPWTMMIS_TypeDef      GPTMTnMIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnICR[32];
        BITBANDING_TW_GPWTMICR_TypeDef      GPTMTnICR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnILR_LOW[32];
        BITBANDING_TW_GPWTMILR_LOW_TypeDef  GPTMTnILR_LOW_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnILR_HIGH[32];
        BITBANDING_TW_GPWTMILR_HIGH_TypeDef GPTMTnILR_HIGH_Bit;
    };
    const uint32_t                          reserved4[1*32];
    union
    {
        volatile uint32_t                   GPTMTnMATCHR_LOW[32];
        BITBANDING_TW_GPWTMMATCHR_LOW_TypeDef GPTMTnMATCHR_LOW_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnMATCHR_HIGH[32];
        BITBANDING_TW_GPWTMMATCHR_HIGH_TypeDef GPTMTnMATCHR_HIGH_Bit;
    };
    const uint32_t                          reserved5[4*32];
    union
    {
        volatile const uint32_t             GPTMTnR_LOW[32];
        BITBANDING_TW_GPWTMR_LOW_TypeDef    GPTMTnR_LOW_Bit;
    };
    union
    {
        volatile const uint32_t             GPTMTnR_HIGH[32];
        BITBANDING_TW_GPWTMR_HIGH_TypeDef   GPTMTnR_HIGH_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnV_LOW[32];
        BITBANDING_TW_GPWTMV_LOW_TypeDef    GPTMTnV_LOW_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnV_HIGH[32];
        BITBANDING_TW_GPWTMV_HIGH_TypeDef   GPTMTnV_HIGH_Bit;
    };
    union
    {
        volatile const uint32_t             GPTMRTCPD[32];
        BITBANDING_TW_GPTMRTCPD_TypeDef     GPTMRTCPD_Bit;
    };
    const uint32_t                          reserved9[1001*32];

}GPWTM_BITBANDING_TW_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEAB_64_H_ */
