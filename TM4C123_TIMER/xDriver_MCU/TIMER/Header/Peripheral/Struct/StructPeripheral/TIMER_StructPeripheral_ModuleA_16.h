/**
 *
 * @file TIMER_StructPeripheral_ModuleA_16.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEA_16_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEA_16_H_

#include <xDriver_MCU/TIMER/Header/Peripheral/Struct/StructRegister/TIMER_StructRegister_ModuleA_16.h>


typedef volatile struct
{

    const uint32_t                          reserved;
    union
    {
        volatile uint32_t                   GPTMTnMR;
        TA_GPTMMR_TypeDef                   GPTMTnMR_Bit;
    };
    const uint32_t                          reserved1;
    union
    {
        volatile uint32_t                   GPTMTnCTL;
        TA_GPTMCTL_TypeDef                  GPTMTnCTL_Bit;
    };
    const uint32_t                          reserved3[2];
    union
    {
        volatile uint32_t                   GPTMTnIMR;
        TA_GPTMIMR_TypeDef                  GPTMTnIMR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnRIS;
        TA_GPTMRIS_TypeDef                  GPTMTnRIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnMIS;
        TA_GPTMMIS_TypeDef                  GPTMTnMIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnICR;
        TA_GPTMICR_TypeDef                  GPTMTnICR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnILR;
        TA_GPTMILR_TypeDef                  GPTMTnILR_Bit;
    };
    const uint32_t                          reserved9;
    union
    {
        volatile uint32_t                   GPTMTnMATCHR;
        TA_GPTMMATCHR_TypeDef               GPTMTnMATCHR_Bit;
    };
    const uint32_t                          reserved11;
    union
    {
        volatile uint32_t                   GPTMTnPR;
        TA_GPTMPR_TypeDef                   GPTMTnPR_Bit;
    };
    const uint32_t                          reserved13;
    union
    {
        volatile uint32_t                   GPTMTnPMR;
        TA_GPTMPMR_TypeDef                  GPTMTnPMR_Bit;
    };
    const uint32_t                          reserved15;
    union
    {
        volatile const uint32_t             GPTMTnR;
        TA_GPTMR_TypeDef                    GPTMTnR_Bit;
    };
    const uint32_t                          reserved16;
    union
    {
        volatile uint32_t                   GPTMTnV;
        TA_GPTMV_TypeDef                    GPTMTnV_Bit;
    };
    const uint32_t                          reserved17[2];
    union
    {
        volatile const uint32_t             GPTMTnPS;
        TA_GPTMPS_TypeDef                   GPTMTnPS_Bit;
    };
    const uint32_t                          reserved19[1000];

}GPTM_TA_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEA_16_H_ */
