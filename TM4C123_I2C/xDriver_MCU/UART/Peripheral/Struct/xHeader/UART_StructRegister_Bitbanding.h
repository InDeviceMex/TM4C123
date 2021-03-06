/**
 *
 * @file UART_StructRegister_Bitbanding.h
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
 * Date Author Version Description
 * 22 ene. 2021 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTREGISTER_BITBANDING_H_

#include <xUtils/Standard/Standard.h>

typedef volatile struct
{
        volatile uint32_t DATA [8UL];
        volatile const uint32_t FE;
        volatile const uint32_t PE;
        volatile const uint32_t BE;
        volatile const uint32_t OE;
        const uint32_t reserved [20UL];
}BITBANDING_UARTDR_TypeDef;

typedef volatile struct
{
        volatile const uint32_t FE;
        volatile const uint32_t PE;
        volatile const uint32_t BE;
        volatile const uint32_t OE;
        const uint32_t reserved [28UL];
}BITBANDING_UARTRSR_TypeDef;

typedef volatile struct
{
        volatile uint32_t DATA [8UL];
        const uint32_t reserved [24UL];
}BITBANDING_UARTECR_TypeDef;

typedef volatile struct
{
        volatile const uint32_t CTS;
        const uint32_t reserved [2UL];
        volatile const uint32_t BUSY;
        volatile const uint32_t RXFE;
        volatile const uint32_t TXFF;
        volatile const uint32_t RXFF;
        volatile const uint32_t TXFE;
        const uint32_t reserved2 [24UL];
}BITBANDING_UARTFR_TypeDef;

typedef volatile struct
{
        volatile uint32_t ILPDVSR [8UL];
        const uint32_t reserved [24UL];
}BITBANDING_UARTILPR_TypeDef;

typedef volatile struct
{
        volatile uint32_t UARTIBRD [16UL];
        const uint32_t reserved [16UL];
}BITBANDING_UARTIBRD_TypeDef;

typedef volatile struct
{
        volatile uint32_t DIVFRAC [6UL];
        const uint32_t reserved [26UL];
}BITBANDING_UARTFBRD_TypeDef;

typedef volatile struct
{
        volatile uint32_t BRK;
        volatile uint32_t PEN;
        volatile uint32_t EPS;
        volatile uint32_t STP2;
        volatile uint32_t FEN;
        volatile uint32_t WLEN [2UL];
        volatile uint32_t SPS;
        const uint32_t reserved [24UL];
}BITBANDING_UARTLCRH_TypeDef;

typedef volatile struct
{
        volatile uint32_t UARTEN;
        volatile uint32_t SIREN;
        volatile uint32_t SIRLP;
        volatile uint32_t SMART;
        volatile uint32_t EOT;
        volatile uint32_t HSE;
        const uint32_t reserved;
        volatile uint32_t LBE;
        volatile uint32_t TXE;
        volatile uint32_t RXE;
        const uint32_t reserved2;
        volatile uint32_t RTS;
        const uint32_t reserved3 [2UL];
        volatile uint32_t RTSEN;
        volatile uint32_t CTSEN;
        const uint32_t reserved4 [16UL];
}BITBANDING_UARTCTL_TypeDef;

typedef volatile struct
{
        volatile uint32_t TXIFLSEL [4UL];
        volatile uint32_t RXIFLSEL [4UL];
        const uint32_t reserved [24UL];
}BITBANDING_UARTIFLS_TypeDef;

typedef volatile struct
{
        const uint32_t reserved;
        volatile uint32_t CTSIM;
        const uint32_t reserved2 [2UL];
        volatile uint32_t RXIM;
        volatile uint32_t TXIM;
        volatile uint32_t RTIM;
        volatile uint32_t FEIM;
        volatile uint32_t PEIM;
        volatile uint32_t BEIM;
        volatile uint32_t OEIM;
        const uint32_t reserved3;
        volatile uint32_t BIT9IM;
        const uint32_t reserved4 [19UL];
}BITBANDING_UARTIM_TypeDef;

typedef volatile struct
{
        const uint32_t reserved;
        volatile uint32_t CTSRIS;
        const uint32_t reserved2 [2UL];
        volatile uint32_t RXRIS;
        volatile uint32_t TXRIS;
        volatile uint32_t RTRIS;
        volatile uint32_t FERIS;
        volatile uint32_t PERIS;
        volatile uint32_t BERIS;
        volatile uint32_t OERIS;
        const uint32_t reserved3;
        volatile uint32_t BIT9RIS;
        const uint32_t reserved4 [19UL];
}BITBANDING_UARTRIS_TypeDef;

typedef volatile struct
{
        const uint32_t reserved;
        volatile uint32_t CTSMIS;
        const uint32_t reserved2 [2UL];
        volatile uint32_t RXMIS;
        volatile uint32_t TXMIS;
        volatile uint32_t RTMIS;
        volatile uint32_t FEMIS;
        volatile uint32_t PEMIS;
        volatile uint32_t BEMIS;
        volatile uint32_t OEMIS;
        const uint32_t reserved3;
        volatile uint32_t BIT9MIS;
        const uint32_t reserved4 [19UL];
}BITBANDING_UARTMIS_TypeDef;

typedef volatile struct
{
        const uint32_t reserved;
        volatile uint32_t CTSIC;
        const uint32_t reserved2 [2UL];
        volatile uint32_t RXIC;
        volatile uint32_t TXIC;
        volatile uint32_t RTIC;
        volatile uint32_t FEIC;
        volatile uint32_t PEIC;
        volatile uint32_t BEIC;
        volatile uint32_t OEIC;
        const uint32_t reserved3;
        volatile uint32_t BIT9IC;
        const uint32_t reserved4 [19UL];
}BITBANDING_UARTICR_TypeDef;

typedef volatile struct
{
        volatile uint32_t RXDMAE;
        volatile uint32_t TXDMAE;
        volatile uint32_t DMAERR;
        const uint32_t reserved [29UL];
}BITBANDING_UARTDMACTL_TypeDef;

typedef volatile struct
{
        volatile uint32_t ADDR [8UL];
        const uint32_t reserved [7UL];
        volatile uint32_t BIT9EN;
        const uint32_t reserved1 [16UL];
}BITBANDING_UART9BITADDR_TypeDef;

typedef volatile struct
{
        volatile uint32_t MASK [8UL];
        const uint32_t reserved [24UL];
}BITBANDING_UART9BITAMASK_TypeDef;

typedef volatile struct
{
        volatile const uint32_t SC;
        volatile const uint32_t NB;
        const uint32_t reserved [ 30];
}BITBANDING_UARTPP_TypeDef;

typedef volatile struct
{
        volatile uint32_t CS [4UL];
        const uint32_t reserved [ 28];
}BITBANDING_UARTCC_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID0 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTPeriphID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID1 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTPeriphID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID2 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTPeriphID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID3 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTPeriphID3_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID4 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTPeriphID4_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID5 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTPeriphID5_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID6 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTPeriphID6_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID7 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTPeriphID7_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID0 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTCellID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID1 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTCellID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID2 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTCellID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID3 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_UARTCellID3_TypeDef;

#endif /* XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTREGISTER_BITBANDING_H_ */
