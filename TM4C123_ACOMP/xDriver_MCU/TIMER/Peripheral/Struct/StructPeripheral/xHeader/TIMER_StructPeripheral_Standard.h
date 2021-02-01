/**
 *
 * @file TIMER_StructPeripheral_Standard.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_STANDARD_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_STANDARD_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister/xHeader/TIMER_StructRegister_Control.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister/xHeader/TIMER_StructRegister_Standard.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t GPTMCFG;
        GPTMCFG_TypeDef GPTMCFG_Bit;
    };
    union
    {
        volatile uint32_t GPTMTAMR;
        GPTMTAMR_TypeDef GPTMTAMR_Bit;
    };
    union
    {
        volatile uint32_t GPTMTBMR;
        GPTMTBMR_TypeDef GPTMTBMR_Bit;
    };
    union
    {
        volatile uint32_t GPTMCTL;
        GPTMCTL_TypeDef GPTMCTL_Bit;
    };
    union
    {
        volatile uint32_t GPTMSYNC;
        GPTMSYNC_TypeDef GPTMSYNC_Bit;
    };
    const uint32_t reserved;

    union
    {
        volatile uint32_t GPTMIMR;
        GPTMIMR_TypeDef GPTMIMR_Bit;
    };
    union
    {
        volatile const uint32_t GPTMRIS;
        GPTMRIS_TypeDef GPTMRIS_Bit;
    };
    union
    {
        volatile const uint32_t GPTMMIS;
        GPTMMIS_TypeDef GPTMMIS_Bit;
    };
    union
    {
        volatile uint32_t GPTMICR;
        GPTMICR_TypeDef GPTMICR_Bit;
    };
    union
    {
        volatile uint32_t GPTMTAILR;
        GPTMTAILR_TypeDef GPTMTAILR_Bit;
    };
    union
    {
        volatile uint32_t GPTMTBILR;
        GPTMTBILR_TypeDef GPTMTBILR_Bit;
    };
    union
    {
        volatile uint32_t GPTMTAMATCHR;
        GPTMTAMATCHR_TypeDef GPTMTAMATCHR_Bit;
    };

    union
    {
        volatile uint32_t GPTMTBMATCHR;
        GPTMTBMATCHR_TypeDef GPTMTBMATCHR_Bit;
    };
    union
    {
        volatile uint32_t GPTMTAPR;
        GPTMTAPR_TypeDef GPTMTAPR_Bit;
    };

    union
    {
        volatile uint32_t GPTMTBPR;
        GPTMTBPR_TypeDef GPTMTBPR_Bit;
    };
    union
    {
        volatile uint32_t GPTMTAPMR;
        GPTMTAPMR_TypeDef GPTMTAPMR_Bit;
    };
    union
    {
        volatile uint32_t GPTMTBPMR;
        GPTMTBPMR_TypeDef GPTMTBPMR_Bit;
    };
    union
    {
        volatile const uint32_t GPTMTAR;
        GPTMTAR_TypeDef GPTMTAR_Bit;
    };
    union
    {
        volatile const uint32_t GPTMTBR;
        GPTMTBR_TypeDef GPTMTBR_Bit;
    };
    union
    {
        volatile uint32_t GPTMTAV;
        GPTMTAV_TypeDef GPTMTAV_Bit;
    };
    union
    {
        volatile uint32_t GPTMTBV;
        GPTMTBV_TypeDef GPTMTBV_Bit;
    };
    union
    {
        volatile const uint32_t GPTMRTCPD;
        GPTMRTCPD_TypeDef GPTMRTCPD_Bit;
    };
    union
    {
        volatile const uint32_t GPTMTAPS;
        GPTMTAPS_TypeDef GPTMTAPS_Bit;
    };
    union
    {
        volatile const uint32_t GPTMTBPS;
        GPTMTBPS_TypeDef GPTMTBPS_Bit;
    };
    union
    {
        volatile const uint32_t GPTMTAPV;
        GPTMTAPV_TypeDef GPTMTAPV_Bit;
    };
    union
    {
        volatile const uint32_t GPTMTBPV;
        GPTMTBPV_TypeDef GPTMTBPV_Bit;
    };

    const uint32_t reserved1 [981UL];


    union
    {
        volatile const uint32_t GPTMPP;
        GPTMPP_TypeDef GPTMPP_Bit;
    };

    const uint32_t reserved2 [15UL];
}GPTM_TypeDef;



#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_STANDARD_H_ */
