/**
 *
 * @file TIMER_StructPeripheral_ModuleW_64.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEW_64_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEW_64_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister/xHeader/TIMER_StructRegister_ModuleW_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister/xHeader/TIMER_StructRegister_ModuleW_64.h>

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
        TW_GPWTMIMR_TypeDef                 GPTMTnIMR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnRIS;
        TW_GPWTMRIS_TypeDef                 GPTMTnRIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnMIS;
        TW_GPWTMMIS_TypeDef                 GPTMTnMIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnICR;
        TW_GPWTMICR_TypeDef                 GPTMTnICR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnILR_LOW;
        TW_GPWTMILR_LOW_TypeDef             GPTMTnILR_LOW_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnILR_HIGH;
        TW_GPWTMILR_HIGH_TypeDef            GPTMTnILR_HIGH_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnMATCHR_LOW;
        TW_GPWTMMATCHR_LOW_TypeDef          GPTMTnMATCHR_LOW_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnMATCHR_HIGH;
        TW_GPWTMMATCHR_HIGH_TypeDef         GPTMTnMATCHR_HIGH_Bit;
    };
    const uint32_t                          reserved5[4];
    union
    {
        volatile const uint32_t             GPTMTnR_LOW;
        TW_GPWTMR_LOW_TypeDef               GPTMTnR_LOW_Bit;
    };
    union
    {
        volatile const uint32_t             GPTMTnR_HIGH;
        TW_GPWTMR_HIGH_TypeDef              GPTMTnR_HIGH_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnV_LOW;
        TW_GPWTMV_LOW_TypeDef               GPTMTnV_LOW_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTnV_HIGH;
        TW_GPWTMV_HIGH_TypeDef              GPTMTnV_HIGH_Bit;
    };
    union
    {
        volatile const uint32_t             GPTMRTCPD;
        TW_GPTMRTCPD_TypeDef                GPTMRTCPD_Bit;
    };
    const uint32_t                          reserved9[1001];

}GPWTM_TW_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEW_64_H_ */
