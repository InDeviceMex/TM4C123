/**
 *
 * @file TIMER_StructPeripheral_ModuleW_32.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEW_32_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEW_32_H_

#include <TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructRegister/TIMER_StructRegister_ModuleW_32.h>

typedef volatile struct
{

    const uint32_t                          reserved;
    union
    {
        volatile uint32_t                   GPTMTnMR;
        TW_GPTMMR_TypeDef                   GPTMTnMR_Bit;
    };
    const uint32_t                          reserved1;
    union
    {
        volatile uint32_t                   GPTMTnCTL;
        TW_GPTMCTL_TypeDef                  GPTMTnCTL_Bit;
    };
    const uint32_t                          reserved3[2];
    union
    {
        volatile uint32_t                   GPTMTnIMR;
        TW_GPTMIMR_TypeDef                  GPTMTnIMR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnRIS;
        TW_GPTMRIS_TypeDef                  GPTMTnRIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnMIS;
        TW_GPTMMIS_TypeDef                  GPTMTnMIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnICR;
        TW_GPTMICR_TypeDef                  GPTMTnICR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnILR;
        TW_GPTMILR_TypeDef                  GPTMTnILR_Bit;
    };
    const uint32_t                          reserved8;
    union
    {
        volatile uint32_t                   GPTMTnMATCHR;
        TW_GPTMMATCHR_TypeDef               GPTMTnMATCHR_Bit;
    };
    const uint32_t                          reserved9[5];
    union
    {
        volatile const uint32_t             GPTMTnR;
        TW_GPTMR_TypeDef                    GPTMTnR_Bit;
    };
    const uint32_t                          reserved10;
    union
    {
        volatile uint32_t                   GPTMTnV;
        TW_GPTMV_TypeDef                    GPTMTnV_Bit;
    };
    const uint32_t                          reserved11;
    union
    {
        volatile const uint32_t             GPTMRTCPD;
        TW_GPTMRTCPD_TypeDef                GPTMRTCPD_Bit;
    };
    const uint32_t                          reserved13[1001];

}GPTM_TW_TypeDef;




#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEW_32_H_ */
