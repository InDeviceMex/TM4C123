/**
 *
 * @file SSI_StructRegister.h
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
 * @verbatim 16 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date       Author     Version     Description
 * 16 feb. 2021     vyldram    1.0     initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTREGISTER_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTREGISTER_H_

#include <xUtils/Standard/Standard.h>

typedef volatile struct
{
    volatile uint32_t DSS :4;
    volatile uint32_t FRF :2;
    volatile uint32_t SPO :1;
    volatile uint32_t SPH :1;
    volatile uint32_t SCR :8;
    const uint32_t reserved :16;
} SSICR0_TypeDef;

typedef volatile struct
{
    volatile uint32_t LBM :1;
    volatile uint32_t SSE :1;
    volatile uint32_t MS :1;
    const uint32_t reserved :1;
    volatile uint32_t EOT :1;
    const uint32_t reserved2 :27;
} SSICR1_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA :16;
    const uint32_t reserved :16;
} SSIDR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TFE :1;
    volatile const uint32_t TNF :1;
    volatile const uint32_t RNE :1;
    volatile const uint32_t RFF :1;
    volatile const uint32_t BSY :1;
    const uint32_t reserved :27;
} SSISR_TypeDef;

typedef volatile struct
{
    volatile uint32_t CPSDVSR :8;
    const uint32_t reserved :24;
} SSICPSR_TypeDef;

typedef volatile struct
{
    volatile uint32_t RORIM :1;
    volatile uint32_t RTIM :1;
    volatile uint32_t RXIM :1;
    volatile uint32_t TXIM :1;
    const uint32_t reserved :28;
} SSIIM_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RORRIS :1;
    volatile const uint32_t RTRIS :1;
    volatile const uint32_t RXRIS :1;
    volatile const uint32_t TXRIS :1;
    const uint32_t reserved :28;
} SSIRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RORMIS :1;
    volatile const uint32_t RTMIS :1;
    volatile const uint32_t RXMIS :1;
    volatile const uint32_t TXMIS :1;
    const uint32_t reserved :28;
} SSIMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t RORIC :1;
    volatile uint32_t RTIC :1;
    const uint32_t reserved4 :30;
} SSIICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t RXDMAE :1;
    volatile uint32_t TXDMAE :1;
    const uint32_t reserved :30;
} SSIDMACTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t CS :4;
    uint32_t reserved : 28;
} SSICC_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID0 :8;
    const uint32_t reserved :24;
}SSIPeriphID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID1 :8;
    const uint32_t reserved :24;
}SSIPeriphID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID2 :8;
    const uint32_t reserved :24;
}SSIPeriphID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID3 :8;
    const uint32_t reserved :24;
}SSIPeriphID3_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID4 :8;
    const uint32_t reserved :24;
}SSIPeriphID4_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID5 :8;
    const uint32_t reserved :24;
}SSIPeriphID5_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID6 :8;
    const uint32_t reserved :24;
}SSIPeriphID6_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID7 :8;
    const uint32_t reserved :24;
}SSIPeriphID7_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID0 :8;
    const uint32_t reserved :24;
}SSICellID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID1 :8;
    const uint32_t reserved :24;
}SSICellID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID2 :8;
    const uint32_t reserved :24;
}SSICellID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID3 :8;
    const uint32_t reserved :24;
}SSICellID3_TypeDef;

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTREGISTER_H_ */
