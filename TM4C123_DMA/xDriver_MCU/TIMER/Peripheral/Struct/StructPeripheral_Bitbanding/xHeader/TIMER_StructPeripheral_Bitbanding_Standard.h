/**
 *
 * @file TIMER_StructPeripheral_Bitbanding_Standard.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_STANDARD_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_STANDARD_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister_Bitbanding/xHeader/TIMER_StructRegister_Bitbanding_Control.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister_Bitbanding/xHeader/TIMER_StructRegister_Bitbanding_Standard.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t                   GPTMCFG[32];
        BITBANDING_GPTMCFG_TypeDef          GPTMCFG_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTAMR[32];
        BITBANDING_GPTMTAMR_TypeDef         GPTMTAMR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTBMR[32];
        BITBANDING_GPTMTBMR_TypeDef         GPTMTBMR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMCTL[32];
        BITBANDING_GPTMCTL_TypeDef          GPTMCTL_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMSYNC[32];
        BITBANDING_GPTMSYNC_TypeDef         GPTMSYNC_Bit;
    };
    const    uint32_t                       reserved[32];

    union
    {
        volatile uint32_t                   GPTMIMR[32];
        BITBANDING_GPTMIMR_TypeDef          GPTMIMR_Bit;
    };
    union
    {
        volatile const uint32_t             GPTMRIS[32];
        BITBANDING_GPTMRIS_TypeDef          GPTMRIS_Bit;
    };
    union
    {
        volatile const uint32_t             GPTMMIS[32];
        BITBANDING_GPTMMIS_TypeDef          GPTMMIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMICR[32];
        BITBANDING_GPTMICR_TypeDef          GPTMICR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTAILR[32];
        BITBANDING_GPTMTAILR_TypeDef        GPTMTAILR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTBILR[32];
        BITBANDING_GPTMTBILR_TypeDef        GPTMTBILR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTAMATCHR[32];
        BITBANDING_GPTMTAMATCHR_TypeDef     GPTMTAMATCHR_Bit;
    };

    union
    {
        volatile uint32_t                   GPTMTBMATCHR[32];
        BITBANDING_GPTMTBMATCHR_TypeDef     GPTMTBMATCHR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTAPR[32];
        BITBANDING_GPTMTAPR_TypeDef         GPTMTAPR_Bit;
    };

    union
    {
        volatile uint32_t                   GPTMTBPR[32];
        BITBANDING_GPTMTBPR_TypeDef         GPTMTBPR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTAPMR[32];
        BITBANDING_GPTMTAPMR_TypeDef        GPTMTAPMR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTBPMR[32];
        BITBANDING_GPTMTBPMR_TypeDef        GPTMTBPMR_Bit;
    };
    union
    {
        volatile const uint32_t             GPTMTAR[32];
        BITBANDING_GPTMTAR_TypeDef          GPTMTAR_Bit;
    };
    union
    {
        volatile const uint32_t             GPTMTBR[32];
        BITBANDING_GPTMTBR_TypeDef          GPTMTBR_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTAV[32];
        BITBANDING_GPTMTAV_TypeDef          GPTMTAV_Bit;
    };
    union
    {
        volatile uint32_t                   GPTMTBV[32];
        BITBANDING_GPTMTBV_TypeDef          GPTMTBV_Bit;
    };
    union
    {
        volatile const uint32_t             GPTMRTCPD[32];
        BITBANDING_GPTMRTCPD_TypeDef        GPTMRTCPD_Bit;
    };
    union
    {
        volatile const uint32_t             GPTMTAPS[32];
        BITBANDING_GPTMTAPS_TypeDef         GPTMTAPS_Bit;
    };
    union
    {
        volatile const uint32_t             GPTMTBPS[32];
        BITBANDING_GPTMTBPS_TypeDef         GPTMTBPS_Bit;
    };
    union
    {
        volatile const uint32_t             GPTMTAPV[32];
        BITBANDING_GPTMTAPV_TypeDef         GPTMTAPV_Bit;
    };
    union
    {
        volatile const uint32_t             GPTMTBPV[32];
        BITBANDING_GPTMTBPV_TypeDef         GPTMTBPV_Bit;
    };

    const    uint32_t                       reserved1[981*32];


    union
    {
        volatile const uint32_t             GPTMPP[32];
        BITBANDING_GPTMPP_TypeDef           GPTMPP_Bit;
    };

    const uint32_t                          reserved2[15*32];
}GPTM_BITBANDING_TypeDef;




#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_STANDARD_H_ */
