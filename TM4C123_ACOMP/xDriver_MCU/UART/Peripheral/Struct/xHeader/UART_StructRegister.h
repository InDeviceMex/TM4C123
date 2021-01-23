/**
 *
 * @file UART_StructRegister.h
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
 * @verbatim 22 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTREGISTER_H_
#define XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTREGISTER_H_

#include <xUtils/Standard/Standard.h>

typedef volatile struct
{
        volatile uint32_t DATA :8;
        volatile const uint32_t FE :1;
        volatile const uint32_t PE :1;
        volatile const uint32_t BE :1;
        volatile const uint32_t OE :1;
        const uint32_t reserved :20;
} UARTDR_TypeDef;

typedef volatile struct
{
        volatile const uint32_t FE :1;
        volatile const uint32_t PE :1;
        volatile const uint32_t BE :1;
        volatile const uint32_t OE :1;
        const uint32_t reserved :28;
} UARTRSR_TypeDef;

typedef volatile struct
{
        volatile uint32_t DATA :8;
        const uint32_t reserved :24;
} UARTECR_TypeDef;

typedef volatile struct
{
        volatile const uint32_t CTS :1;
        const uint32_t reserved :2;
        volatile const uint32_t BUSY :1;
        volatile const uint32_t RXFE :1;
        volatile const uint32_t TXFF :1;
        volatile const uint32_t RXFF :1;
        volatile const uint32_t TXFE :1;
        const uint32_t reserved2 :24;
} UARTFR_TypeDef;

typedef volatile struct
{
        volatile uint32_t ILPDVSR :8;
        const uint32_t reserved :24;
} UARTILPR_TypeDef;

typedef volatile struct
{
        volatile uint32_t UARTIBRD :16;
        const uint32_t reserved :16;
} UARTIBRD_TypeDef;

typedef volatile struct
{
        volatile uint32_t DIVFRAC :6;
        const uint32_t reserved :26;
} UARTFBRD_TypeDef;

typedef volatile struct
{
        volatile uint32_t BRK :1;
        volatile uint32_t PEN :1;
        volatile uint32_t EPS :1;
        volatile uint32_t STP2 :1;
        volatile uint32_t FEN :1;
        volatile uint32_t WLEN :2;
        volatile uint32_t SPS :1;
        const uint32_t reserved :24;
} UARTLCRH_TypeDef;

typedef volatile struct
{
        volatile uint32_t UARTEN :1;
        volatile uint32_t SIREN :1;
        volatile uint32_t SIRLP :1;
        volatile uint32_t SMART :1;
        volatile uint32_t EOT :1;
        volatile uint32_t HSE :1;
        const uint32_t reserved :1;
        volatile uint32_t LBE :1;
        volatile uint32_t TXE :1;
        volatile uint32_t RXE :1;
        const uint32_t reserved2 :1;
        volatile uint32_t RTS :1;
        const uint32_t reserved3 :2;
        volatile uint32_t RTSEN :1;
        volatile uint32_t CTSEN :1;
        const uint32_t reserved4 :16;
} UARTCTL_TypeDef;

typedef volatile struct
{
        volatile uint32_t TXIFLSEL :4;
        volatile uint32_t RXIFLSEL :4;
        const uint32_t reserved :24;
} UARTIFLS_TypeDef;

typedef volatile struct
{
        const uint32_t reserved :1;
        volatile uint32_t CTSIM :1;
        const uint32_t reserved2 :2;
        volatile uint32_t RXIM :1;
        volatile uint32_t TXIM :1;
        volatile uint32_t RTIM :1;
        volatile uint32_t FEIM :1;
        volatile uint32_t PEIM :1;
        volatile uint32_t BEIM :1;
        volatile uint32_t OEIM :1;
        const uint32_t reserved3 :1;
        volatile uint32_t BIT9IM :1;
        const uint32_t reserved4 :19;
} UARTIM_TypeDef;

typedef volatile struct
{
        const uint32_t reserved :1;
        volatile uint32_t CTSRIS :1;
        const uint32_t reserved2 :2;
        volatile uint32_t RXRIS :1;
        volatile uint32_t TXRIS :1;
        volatile uint32_t RTRIS :1;
        volatile uint32_t FERIS :1;
        volatile uint32_t PERIS :1;
        volatile uint32_t BERIS :1;
        volatile uint32_t OERIS :1;
        const uint32_t reserved3 :1;
        volatile uint32_t BIT9RIS :1;
        const uint32_t reserved4 :19;
} UARTRIS_TypeDef;

typedef volatile struct
{
        const uint32_t reserved :1;
        volatile uint32_t CTSMIS :1;
        const uint32_t reserved2 :2;
        volatile uint32_t RXMIS :1;
        volatile uint32_t TXMIS :1;
        volatile uint32_t RTMIS :1;
        volatile uint32_t FEMIS :1;
        volatile uint32_t PEMIS :1;
        volatile uint32_t BEMIS :1;
        volatile uint32_t OEMIS :1;
        const uint32_t reserved3 :1;
        volatile uint32_t BIT9MIS :1;
        const uint32_t reserved4 :19;
} UARTMIS_TypeDef;

typedef volatile struct
{
        const uint32_t reserved :1;
        volatile uint32_t CTSIC :1;
        const uint32_t reserved2 :2;
        volatile uint32_t RXIC :1;
        volatile uint32_t TXIC :1;
        volatile uint32_t RTIC :1;
        volatile uint32_t FEIC :1;
        volatile uint32_t PEIC :1;
        volatile uint32_t BEIC :1;
        volatile uint32_t OEIC :1;
        const uint32_t reserved3 :1;
        volatile uint32_t BIT9IC :1;
        const uint32_t reserved4 :19;
} UARTICR_TypeDef;

typedef volatile struct
{
        volatile uint32_t RXDMAE :1;
        volatile uint32_t TXDMAE :1;
        volatile uint32_t DMAERR :1;
        const uint32_t reserved :29;
} UARTDMACTL_TypeDef;

typedef volatile struct
{
        volatile uint32_t ADDR :8;
        const uint32_t reserved :7;
        volatile uint32_t BIT9EN :1;
        const uint32_t reserved1 :16;
} UART9BITADDR_TypeDef;

typedef volatile struct
{
        volatile uint32_t MASK :8;
        const uint32_t reserved :24;
} UART9BITAMASK_TypeDef;

typedef volatile struct
{
        volatile const uint32_t SC :1;
        volatile const uint32_t NB :1;
        const uint32_t reserved : 30;
} UARTPP_TypeDef;

typedef volatile struct
{
        volatile uint32_t CS :4;
        uint32_t reserved : 28;
} UARTCC_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID0      :8;
    const    uint32_t       reserved  :24;
}UARTPeriphID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID1      :8;
    const    uint32_t       reserved  :24;
}UARTPeriphID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID2      :8;
    const    uint32_t       reserved  :24;
}UARTPeriphID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID3      :8;
    const    uint32_t       reserved  :24;
}UARTPeriphID3_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID4      :8;
    const    uint32_t       reserved  :24;
}UARTPeriphID4_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID5      :8;
    const    uint32_t       reserved  :24;
}UARTPeriphID5_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID6      :8;
    const    uint32_t       reserved  :24;
}UARTPeriphID6_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID7      :8;
    const    uint32_t       reserved  :24;
}UARTPeriphID7_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID0      :8;
    const    uint32_t       reserved  :24;
}UARTCellID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID1      :8;
    const    uint32_t       reserved  :24;
}UARTCellID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID2      :8;
    const    uint32_t       reserved  :24;
}UARTCellID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID3      :8;
    const    uint32_t       reserved  :24;
}UARTCellID3_TypeDef;

#endif /* XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTREGISTER_H_ */
