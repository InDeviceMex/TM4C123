/*
 * UART.h
 *
 *  Created on: 21 feb. 2018
 *      Author: InDev
 */

#ifndef UART_H_
#define UART_H_

#include "SYSCTL.h"
#include "GPIO.h"
#include "NVIC.h"
#include "UDMA.h"
#include "UDMA_CH.h"
#include "CONV.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>

#define UART_BASE            (0x4000C000)
#define UART_OFFSET          (0x0000C000)

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// UART ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

typedef volatile struct
{
    volatile uint32_t       DATA      : 8;
    volatile const uint32_t FE        : 1;
    volatile const uint32_t PE        : 1;
    volatile const uint32_t BE        : 1;
    volatile const uint32_t OE        : 1;
    const    uint32_t       reserved  : 20;
}UARTDR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t FE        : 1;
    volatile const uint32_t PE        : 1;
    volatile const uint32_t BE        : 1;
    volatile const uint32_t OE        : 1;
    const    uint32_t       reserved  : 28;
}UARTRSR_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA     : 8;
    const    uint32_t reserved : 24;
}UARTECR_TypeDef;

typedef volatile struct
{
    union
    {
        volatile UARTRSR_TypeDef UARTRSR;
        volatile UARTECR_TypeDef UARTECR;
    };
}UARTRSR_ECR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CTS        : 1;
    const    uint32_t       reserved   : 2;
    volatile const uint32_t BUSY       : 1;
    volatile const uint32_t RXFE       : 1;
    volatile const uint32_t TXFF       : 1;
    volatile const uint32_t RXFF       : 1;
    volatile const uint32_t TXFE       : 1;
    const    uint32_t       reserved1  : 24;
}UARTFR_TypeDef;

typedef volatile struct
{
    volatile uint32_t ILPDVSR  : 8;
    const    uint32_t reserved : 24;
}UARTILPR_TypeDef;

typedef volatile struct
{
    volatile uint32_t DIVINT   : 16;
    const    uint32_t reserved : 16;
}UARTIBRD_TypeDef;

typedef volatile struct
{
    volatile uint32_t DIVFRAC : 6;
    const    uint32_t reserved: 26;
}UARTFBRD_TypeDef;

typedef volatile struct
{
    volatile uint32_t BRK      : 1;
    volatile uint32_t PEN      : 1;
    volatile uint32_t EPS      : 1;
    volatile uint32_t STP2     : 1;
    volatile uint32_t FEN      : 1;
    volatile uint32_t WLEN     : 2;
    volatile uint32_t SPS      : 1;
    const    uint32_t reserved : 24;
}UARTLCRH_TypeDef;


typedef volatile struct
{
    volatile uint32_t UARTEN   : 1;
    volatile uint32_t SIREN    : 1;
    volatile uint32_t SIRLP    : 1;
    volatile uint32_t SMART    : 1;
    volatile uint32_t EOT      : 1;
    volatile uint32_t HSE      : 1;
    const    uint32_t reserved : 1;
    volatile uint32_t LBE      : 1;
    volatile uint32_t TXE      : 1;
    volatile uint32_t RXE      : 1;
    const    uint32_t reserved1: 1;
    volatile uint32_t RTS      : 1;
    const    uint32_t reserved2: 2;
    volatile uint32_t RTSEN    : 1;
    volatile uint32_t CTSEN    : 1;
    const    uint32_t reserved3: 16;
}UARTCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t TXIFLSEL : 3;
    volatile uint32_t RXIFLSEL : 3;
    const    uint32_t reserved : 26;
}UARTIFLS_TypeDef;


typedef volatile struct
{
    const    uint32_t reserved : 1;
    volatile uint32_t CTSIM    : 1;
    const    uint32_t reserved1: 2;
    volatile uint32_t RXIM     : 1;
    volatile uint32_t TXIM     : 1;
    volatile uint32_t RTIM     : 1;
    volatile uint32_t FEIM     : 1;
    volatile uint32_t PEIM     : 1;
    volatile uint32_t BEIM     : 1;
    volatile uint32_t OEIM     : 1;
    const    uint32_t reserved2: 1;
    volatile uint32_t B9ITIM   : 1;
    const    uint32_t reserved3: 19;
}UARTIM_TypeDef;

typedef volatile struct
{
    const    uint32_t       reserved  : 1;
    volatile const uint32_t CTSRIS    : 1;
    const    uint32_t       reserved1 : 2;
    volatile const uint32_t RXRIS     : 1;
    volatile const uint32_t TXRIS     : 1;
    volatile const uint32_t RTRIS     : 1;
    volatile const uint32_t FERIS     : 1;
    volatile const uint32_t PERIS     : 1;
    volatile const uint32_t BERIS     : 1;
    volatile const uint32_t OERIS     : 1;
    const    uint32_t       reserved2 : 1;
    volatile const uint32_t B9ITRIS   : 1;
    const    uint32_t       reserved3 : 19;
}UARTRIS_TypeDef;

typedef volatile struct
{
    const    uint32_t       reserved  : 1;
    volatile const uint32_t CTSMIS    : 1;
    const    uint32_t       reserved1 : 2;
    volatile const uint32_t RXMIS     : 1;
    volatile const uint32_t TXMIS     : 1;
    volatile const uint32_t RTMIS     : 1;
    volatile const uint32_t FEMIS     : 1;
    volatile const uint32_t PEMIS     : 1;
    volatile const uint32_t BEMIS     : 1;
    volatile const uint32_t OEMIS     : 1;
    const    uint32_t       reserved2 : 1;
    volatile const uint32_t B9ITMIS   : 1;
    const    uint32_t       reserved3 : 19;
}UARTMIS_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved  : 1;
    volatile uint32_t CTSICR    : 1;
    const    uint32_t reserved1 : 2;
    volatile uint32_t RXICR     : 1;
    volatile uint32_t TXICR     : 1;
    volatile uint32_t RTICR     : 1;
    volatile uint32_t FEICR     : 1;
    volatile uint32_t PEICR     : 1;
    volatile uint32_t BEICR     : 1;
    volatile uint32_t OEICR     : 1;
    const    uint32_t reserved2 : 1;
    volatile uint32_t B9ITICR   : 1;
    const    uint32_t reserved3 : 19;
}UARTICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t RXDMAE     : 1;
    volatile uint32_t TXDMAE     : 1;
    volatile uint32_t DMAERR     : 1;
    const    uint32_t reserved   : 29;
}UARTDMACTL_TypeDef;


typedef volatile struct
{
    volatile uint32_t ADDR     : 8;
    const    uint32_t reserved : 24;
}UART9BITADDR_TypeDef;

typedef volatile struct
{
    volatile uint32_t MASK      : 8;
    const    uint32_t reserved  : 24;
}UART9BITAMASK_TypeDef;

typedef volatile struct
{
    volatile const uint32_t SC      : 1;
    volatile const uint32_t NB      : 1;
    const    uint32_t       reserved: 30;
}UARTPP_TypeDef;

typedef volatile struct
{
    volatile uint32_t CS       : 4;
    const    uint32_t reserved : 28;
}UARTCC_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID4    : 8;
    const    uint32_t       reserved: 24;
}UARTPeriphID4_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID5    : 8;
    const    uint32_t       reserved: 24;
}UARTPeriphID5_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID6    : 8;
    const    uint32_t       reserved: 24;
}UARTPeriphID6_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID7    : 8;
    const    uint32_t       reserved: 24;
}UARTPeriphID7_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID0    : 8;
    const    uint32_t       reserved: 24;
}UARTPeriphID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID1    : 8;
    const    uint32_t       reserved: 24;
}UARTPeriphID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID2    : 8;
    const    uint32_t       reserved: 24;
}UARTPeriphID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID3    : 8;
    const    uint32_t       reserved: 24;
}UARTPeriphID3_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID0    : 8;
    const    uint32_t       reserved: 24;
}UARTPCellID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID1    : 8;
    const    uint32_t       reserved: 24;
}UARTPCellID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID2    : 8;
    const    uint32_t       reserved: 24;
}UARTPCellID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID3    : 8;
    const    uint32_t       reserved: 24;
}UARTPCellID3_TypeDef;


typedef volatile struct
{
    union
    {
        volatile uint32_t          UARTDR;
        UARTDR_TypeDef                  UARTDR_Bit;
    };
    union
    {
        volatile const uint32_t    UARTRSR;
        volatile uint32_t          UARTECR;
        UARTRSR_TypeDef                 UARTRSR_Bit;
        UARTECR_TypeDef                 UARTECR_Bit;
    };
    const uint32_t                 reserved[4];
    union
    {
        volatile const uint32_t    UARTFR;
        UARTFR_TypeDef                  UARTFR_Bit;
    };
    const uint32_t                 reserved1;
    union
    {
        volatile uint32_t          UARTILPR;
        UARTILPR_TypeDef                UARTILPR_Bit;
    };
    union
    {
        volatile uint32_t          UARTIBRD;
        UARTIBRD_TypeDef                UARTIBRD_Bit;
    };
    union
    {
        volatile uint32_t          UARTFBRD;
        UARTFBRD_TypeDef                UARTFBRD_Bit;
    };
    union
    {
        volatile uint32_t          UARTLCRH;
        UARTLCRH_TypeDef                UARTLCRH_Bit;
    };
    union
    {
        volatile uint32_t          UARTCTL;
        UARTCTL_TypeDef                 UARTCTL_Bit;
    };
    union
    {
        volatile uint32_t          UARTIFLS;
        UARTIFLS_TypeDef                UARTIFLS_Bit;
    };
    union
    {
        volatile uint32_t          UARTIM;
        UARTIM_TypeDef                  UARTIM_Bit;
    };
    union
    {
        volatile const uint32_t    UARTRIS;
        UARTRIS_TypeDef                 UARTRIS_Bit;
    };
    union
    {
        volatile const uint32_t    UARTMIS;
        UARTMIS_TypeDef                 UARTMIS_Bit;
    };
    union
    {
        volatile uint32_t          UARTICR;
        UARTICR_TypeDef                 UARTICR_Bit;
    };
    union
    {
        volatile uint32_t          UARTDMACTL;
        UARTDMACTL_TypeDef              UARTDMACTL_Bit;
    };
    const uint32_t                 reserved2[22];
    union
    {
        volatile uint32_t          UART9BITADDR;
        UART9BITADDR_TypeDef            UART9BITADDR_Bit;
    };
    union
    {
        volatile uint32_t          UART9BITAMASK;
        UART9BITAMASK_TypeDef           UART9BITAMASK_Bit;
    };
    const uint32_t                 reserved3[965];
    union
    {
        volatile const uint32_t    UARTPP ;
        UARTPP_TypeDef                  UARTPP_Bit;
    };
    const    uint32_t              reserved4[1];
    union
    {
        volatile uint32_t          UARTCC;
        UARTCC_TypeDef                  UARTCC_Bit;
    };
    const uint32_t                 reserved5[1];
    union
    {
        volatile uint32_t          UARTPeriphID4;
        UARTPeriphID4_TypeDef           UARTPeriphID4_Bit;
    };
    union
    {
        volatile uint32_t          UARTPeriphID5;
        UARTPeriphID5_TypeDef           UARTPeriphID5_Bit;
    };
    union
    {
        volatile uint32_t          UARTPeriphID6;
        UARTPeriphID6_TypeDef           UARTPeriphID6_Bit;
    };
    union
    {
        volatile uint32_t          UARTPeriphID7;
        UARTPeriphID7_TypeDef           UARTPeriphID7_Bit;
    };
    union
    {
        volatile uint32_t          UARTPeriphID0;
        UARTPeriphID0_TypeDef           UARTPeriphID0_Bit;
    };
    union
    {
        volatile uint32_t          UARTPeriphID1;
        UARTPeriphID1_TypeDef           UARTPeriphID1_Bit;
    };
    union
    {
        volatile uint32_t          UARTPeriphID2;
        UARTPeriphID2_TypeDef           UARTPeriphID2_Bit;
    };
    union
    {
        volatile uint32_t          UARTPeriphID3;
        UARTPeriphID3_TypeDef           UARTPeriphID3_Bit;
    };
    union
    {
        volatile uint32_t          UARTPCellID0;
        UARTPCellID0_TypeDef            UARTPCellID0_Bit;
    };
    union
    {
        volatile uint32_t          UARTPCellID1;
        UARTPCellID1_TypeDef            UARTPCellID1_Bit;
    };
    union
    {
        volatile uint32_t          UARTPCellID2;
        UARTPCellID2_TypeDef            UARTPCellID2_Bit;
    };
    union
    {
        volatile uint32_t          UARTPCellID3;
        UARTPCellID3_TypeDef            UARTPCellID3_Bit;
    };
}UART_TypeDef;

typedef volatile struct
{
     UART_TypeDef U[7];
}UARTS_TypeDef;


#define UART0_BASE         (0x4000C000)
#define UART0_OFFSET       (0x0000C000)
#define UART1_BASE         (0x4000D000)
#define UART1_OFFSET       (0x0000D000)
#define UART2_BASE         (0x4000E000)
#define UART2_OFFSET       (0x0000E000)
#define UART3_BASE         (0x4000F000)
#define UART3_OFFSET       (0x0000F000)
#define UART4_BASE         (0x40010000)
#define UART4_OFFSET       (0x00010000)
#define UART5_BASE         (0x40011000)
#define UART5_OFFSET       (0x00011000)
#define UART6_BASE         (0x40012000)
#define UART6_OFFSET       (0x00012000)
#define UART7_BASE         (0x40013000)
#define UART7_OFFSET       (0x00013000)


#define UART               (((UARTS_TypeDef*)(UART_BASE)))
#define UART0              (((UART_TypeDef*)(UART0_BASE)))
#define UART1              (((UART_TypeDef*)(UART1_BASE)))
#define UART2              (((UART_TypeDef*)(UART2_BASE)))
#define UART3              (((UART_TypeDef*)(UART3_BASE)))
#define UART4              (((UART_TypeDef*)(UART4_BASE)))
#define UART5              (((UART_TypeDef*)(UART5_BASE)))
#define UART6              (((UART_TypeDef*)(UART6_BASE)))
#define UART7              (((UART_TypeDef*)(UART7_BASE)))



#define UART_UARTDR_OFFSET        (0x0000)
#define UART_UARTRSR_OFFSET       (0x0004)
#define UART_UARTECR_OFFSET       (0x0004)
#define UART_UARTFR_OFFSET        (0x0018)
#define UART_UARTILPR_OFFSET      (0x0020)
#define UART_UARTIBRD_OFFSET      (0x0024)
#define UART_UARTFBRD_OFFSET      (0x0028)
#define UART_UARTLCRH_OFFSET      (0x002C)
#define UART_UARTCTL_OFFSET       (0x0030)
#define UART_UARTIFLS_OFFSET      (0x0034)
#define UART_UARTIM_OFFSET        (0x0038)
#define UART_UARTRIS_OFFSET       (0x003C)
#define UART_UARTMIS_OFFSET       (0x0040)
#define UART_UARTICR_OFFSET       (0x0044)
#define UART_UARTDMACTL_OFFSET    (0x0048)
#define UART_UART9BITADDR_OFFSET  (0x00A4)
#define UART_UART9BITAMASK_OFFSET (0x00A8)
#define UART_UARTPP_OFFSET        (0x0FC0)
#define UART_UARTCC_OFFSET        (0x0FC0)
#define UART_UARTPeriphID4_OFFSET (0x0FD0)
#define UART_UARTPeriphID5_OFFSET (0x0FD4)
#define UART_UARTPeriphID6_OFFSET (0x0FD8)
#define UART_UARTPeriphID7_OFFSET (0x0FDC)
#define UART_UARTPeriphID0_OFFSET (0x0FE0)
#define UART_UARTPeriphID1_OFFSET (0x0FE4)
#define UART_UARTPeriphID2_OFFSET (0x0FE8)
#define UART_UARTPeriphID3_OFFSET (0x0FEC)
#define UART_UARTPCellID0_OFFSET  (0x0FF0)
#define UART_UARTPCellID1_OFFSET  (0x0FF4)
#define UART_UARTPCellID2_OFFSET  (0x0FF8)
#define UART_UARTPCellID3_OFFSET  (0x0FFC)


//todo UART0

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0 UART0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.1 UARTDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTDR            (((UARTDR_TypeDef*)(UART0_BASE + UART_UARTDR_OFFSET )))
#define UART0_UARTDR_R          (*((volatile uint32_t *)(UART0_BASE +UART_UARTDR_OFFSET)))

//--------
#define UART0_UARTDR_R_DATA_MASK       (0x000000FF)
#define UART0_UARTDR_R_DATA_BIT        (0)

#define UART0_UARTDR_DATA_MASK         (0x000000FF)
//--------

//--------
#define UART0_UARTDR_R_FE_MASK       (0x00000100)
#define UART0_UARTDR_R_FE_BIT        (8)
#define UART0_UARTDR_R_FE_NOERROR    (0x00000000)
#define UART0_UARTDR_R_FE_ERROR      (0x00000100)

#define UART0_UARTDR_FE_MASK         (0x00000001)
#define UART0_UARTDR_FE_NOERROR      (0x00000000)
#define UART0_UARTDR_FE_ERROR        (0x00000001)
//--------

//--------
#define UART0_UARTDR_R_PE_MASK       (0x00000200)
#define UART0_UARTDR_R_PE_BIT        (9)
#define UART0_UARTDR_R_PE_NOERROR    (0x00000000)
#define UART0_UARTDR_R_PE_ERROR      (0x00000200)

#define UART0_UARTDR_PE_MASK         (0x00000001)
#define UART0_UARTDR_PE_NOERROR      (0x00000000)
#define UART0_UARTDR_PE_ERROR        (0x00000001)
//--------

//--------
#define UART0_UARTDR_R_BE_MASK       (0x00000400)
#define UART0_UARTDR_R_BE_BIT        (10)
#define UART0_UARTDR_R_BE_NOERROR    (0x00000000)
#define UART0_UARTDR_R_BE_ERROR      (0x00000400)

#define UART0_UARTDR_BE_MASK         (0x00000001)
#define UART0_UARTDR_BE_NOERROR      (0x00000000)
#define UART0_UARTDR_BE_ERROR        (0x00000001)
//--------

//--------
#define UART0_UARTDR_R_OE_MASK       (0x00000800)
#define UART0_UARTDR_R_OE_BIT        (11)
#define UART0_UARTDR_R_OE_NOERROR    (0x00000000)
#define UART0_UARTDR_R_OE_ERROR      (0x00000800)

#define UART0_UARTDR_OE_MASK         (0x00000001)
#define UART0_UARTDR_OE_NOERROR      (0x00000000)
#define UART0_UARTDR_OE_ERROR        (0x00000001)
//--------

#define UART0_UARTDR_FE_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTDR_OFFSET)*32)+(8*4))))
#define UART0_UARTDR_PE_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTDR_OFFSET)*32)+(9*4))))
#define UART0_UARTDR_BE_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTDR_OFFSET)*32)+(10*4))))
#define UART0_UARTDR_OE_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTDR_OFFSET)*32)+(11*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.2 UARTRSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTRSR            (((UARTRSR_TypeDef*)(UART0_BASE + UART_UARTRSR_OFFSET )))
#define UART0_UARTRSR_R          (*((volatile const uint32_t *)(UART0_BASE +UART_UARTRSR_OFFSET)))


//--------
#define UART0_UARTRSR_R_FE_MASK       (0x00000001)
#define UART0_UARTRSR_R_FE_BIT        (0)
#define UART0_UARTRSR_R_FE_NOERROR    (0x00000000)
#define UART0_UARTRSR_R_FE_ERROR      (0x00000001)

#define UART0_UARTRSR_FE_MASK         (0x00000001)
#define UART0_UARTRSR_FE_NOERROR      (0x00000000)
#define UART0_UARTRSR_FE_ERROR        (0x00000001)
//--------

//--------
#define UART0_UARTRSR_R_PE_MASK       (0x00000002)
#define UART0_UARTRSR_R_PE_BIT        (1)
#define UART0_UARTRSR_R_PE_NOERROR    (0x00000000)
#define UART0_UARTRSR_R_PE_ERROR      (0x00000002)

#define UART0_UARTRSR_PE_MASK         (0x00000001)
#define UART0_UARTRSR_PE_NOERROR      (0x00000000)
#define UART0_UARTRSR_PE_ERROR        (0x00000001)
//--------

//--------
#define UART0_UARTRSR_R_BE_MASK       (0x00000004)
#define UART0_UARTRSR_R_BE_BIT        (2)
#define UART0_UARTRSR_R_BE_NOERROR    (0x00000000)
#define UART0_UARTRSR_R_BE_ERROR      (0x00000004)

#define UART0_UARTRSR_BE_MASK         (0x00000001)
#define UART0_UARTRSR_BE_NOERROR      (0x00000000)
#define UART0_UARTRSR_BE_ERROR        (0x00000001)
//--------

//--------
#define UART0_UARTRSR_R_OE_MASK       (0x00000008)
#define UART0_UARTRSR_R_OE_BIT        (3)
#define UART0_UARTRSR_R_OE_NOERROR    (0x00000000)
#define UART0_UARTRSR_R_OE_ERROR      (0x00000008)

#define UART0_UARTRSR_OE_MASK         (0x00000001)
#define UART0_UARTRSR_OE_NOERROR      (0x00000000)
#define UART0_UARTRSR_OE_ERROR        (0x00000001)
//--------

#define UART0_UARTRSR_FE_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTRSR_OFFSET)*32)+(0*4))))
#define UART0_UARTRSR_PE_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTRSR_OFFSET)*32)+(1*4))))
#define UART0_UARTRSR_BE_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTRSR_OFFSET)*32)+(2*4))))
#define UART0_UARTRSR_OE_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTRSR_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.2 UARTECR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTECR            (((UARTECR_TypeDef*)(UART0_BASE + UART_UARTECR_OFFSET )))
#define UART0_UARTECR_R          (*((volatile uint32_t *)(UART0_BASE +UART_UARTECR_OFFSET)))

//--------
#define UART0_UARTECR_R_DATA_MASK       (0x000000FF)
#define UART0_UARTECR_R_DATA_BIT        (0)

#define UART0_UARTECR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.3 UARTFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTFR            (((UARTFR_TypeDef*)(UART0_BASE + UART_UARTFR_OFFSET )))
#define UART0_UARTFR_R          (*((volatile const uint32_t *)(UART0_BASE +UART_UARTFR_OFFSET)))

//--------
#define UART0_UARTFR_R_CTS_MASK       (0x00000001)
#define UART0_UARTFR_R_CTS_BIT        (0)
#define UART0_UARTFR_R_CTS_NOASSERT   (0x00000000)
#define UART0_UARTFR_R_CTS_ASSERT     (0x00000001)

#define UART0_UARTFR_CTS_MASK         (0x00000001)
#define UART0_UARTFR_CTS_NOASSERT     (0x00000000)
#define UART0_UARTFR_CTS_ASSERT       (0x00000001)
//--------

//--------
#define UART0_UARTFR_R_BUSY_MASK       (0x00000008)
#define UART0_UARTFR_R_BUSY_BIT        (3)
#define UART0_UARTFR_R_BUSY_NOBUSY     (0x00000000)
#define UART0_UARTFR_R_BUSY_BUSY       (0x00000008)

#define UART0_UARTFR_BUSY_MASK         (0x00000001)
#define UART0_UARTFR_BUSY_NOBUSY       (0x00000000)
#define UART0_UARTFR_BUSY_BUSY         (0x00000001)
//--------

//--------
#define UART0_UARTFR_R_RXFE_MASK       (0x00000010)
#define UART0_UARTFR_R_RXFE_BIT        (4)
#define UART0_UARTFR_R_RXFE_NOEMPTY    (0x00000000)
#define UART0_UARTFR_R_RXFE_EMPTY      (0x00000010)

#define UART0_UARTFR_RXFE_MASK         (0x00000001)
#define UART0_UARTFR_RXFE_NOEMPTY      (0x00000000)
#define UART0_UARTFR_RXFE_EMPTY        (0x00000001)
//--------

//--------
#define UART0_UARTFR_R_TXFF_MASK       (0x00000020)
#define UART0_UARTFR_R_TXFF_BIT        (5)
#define UART0_UARTFR_R_TXFF_NOFULL     (0x00000000)
#define UART0_UARTFR_R_TXFF_FULL       (0x00000020)

#define UART0_UARTFR_TXFF_MASK         (0x00000001)
#define UART0_UARTFR_TXFF_NOFULL       (0x00000000)
#define UART0_UARTFR_TXFF_FULL         (0x00000001)
//--------

//--------
#define UART0_UARTFR_R_RXFF_MASK       (0x00000040)
#define UART0_UARTFR_R_RXFF_BIT        (6)
#define UART0_UARTFR_R_RXFF_NOFULL     (0x00000000)
#define UART0_UARTFR_R_RXFF_FULL       (0x00000040)

#define UART0_UARTFR_RXFF_MASK         (0x00000001)
#define UART0_UARTFR_RXFF_NOFULL       (0x00000000)
#define UART0_UARTFR_RXFF_FULL         (0x00000001)
//--------

//--------
#define UART0_UARTFR_R_TXFE_MASK       (0x00000080)
#define UART0_UARTFR_R_TXFE_BIT        (7)
#define UART0_UARTFR_R_TXFE_NOEMPTY    (0x00000000)
#define UART0_UARTFR_R_TXFE_EMPTY      (0x00000080)

#define UART0_UARTFR_TXFE_MASK         (0x00000001)
#define UART0_UARTFR_TXFE_NOEMPTY      (0x00000000)
#define UART0_UARTFR_TXFE_EMPTY        (0x00000001)
//--------

#define UART0_UARTFR_CTS_BB      (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTFR_OFFSET)*32)+(0*4))))
#define UART0_UARTFR_BUSY_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTFR_OFFSET)*32)+(3*4))))
#define UART0_UARTFR_RXFE_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTFR_OFFSET)*32)+(4*4))))
#define UART0_UARTFR_TXFF_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTFR_OFFSET)*32)+(5*4))))
#define UART0_UARTFR_RXFF_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTFR_OFFSET)*32)+(6*4))))
#define UART0_UARTFR_TXFE_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTFR_OFFSET)*32)+(7*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.4 UARTILPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
#define UART0_UARTILPR            (((UARTILPR_TypeDef*)(UART0_BASE + UART_UARTILPR_OFFSET )))
#define UART0_UARTILPR_R          (*((volatile uint32_t *)(UART0_BASE +UART_UARTILPR_OFFSET)))

//--------
#define UART0_UARTILPR_R_ILPDVSR_MASK       (0x000000FF)
#define UART0_UARTILPR_R_ILPDVSR_BIT        (0)

#define UART0_UARTILPR_ILPDVSR_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.5 UARTIBRD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTIBRD            (((UARTIBRD_TypeDef*)(UART0_BASE + UART_UARTIBRD_OFFSET )))
#define UART0_UARTIBRD_R          (*((volatile uint32_t *)(UART0_BASE +UART_UARTIBRD_OFFSET)))

//--------
#define UART0_UARTIBRD_R_DIVINT_MASK       (0x0000FFFF)
#define UART0_UARTIBRD_R_DIVINT_BIT        (0)

#define UART0_UARTIBRD_DIVINT_MASK         (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.6 UARTFBRD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTFBRD            (((UARTFBRD_TypeDef*)(UART0_BASE + UART_UARTFBRD_OFFSET )))
#define UART0_UARTFBRD_R          (*((volatile uint32_t *)(UART0_BASE +UART_UARTFBRD_OFFSET)))

//--------
#define UART0_UARTFBRD_R_DIVFRAC_MASK       (0x0000003F)
#define UART0_UARTFBRD_R_DIVFRAC_BIT        (0)

#define UART0_UARTFBRD_DIVFRAC_MASK         (0x0000003F)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.7 UARTLCRH ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTLCRH            (((UARTLCRH_TypeDef*)(UART0_BASE + UART_UARTLCRH_OFFSET )))
#define UART0_UARTLCRH_R          (*((volatile uint32_t *)(UART0_BASE +UART_UARTLCRH_OFFSET)))

//--------
#define UART0_UARTLCRH_R_BRK_MASK       (0x00000001)
#define UART0_UARTLCRH_R_BRK_BIT        (0)
#define UART0_UARTLCRH_R_BRK_NORMAL     (0x00000000)
#define UART0_UARTLCRH_R_BRK_LOW        (0x00000001)

#define UART0_UARTLCRH_BRK_MASK         (0x00000001)
#define UART0_UARTLCRH_BRK_NORMAL       (0x00000000)
#define UART0_UARTLCRH_BRK_LOW          (0x00000001)
//--------

//--------
#define UART0_UARTLCRH_R_PEN_MASK       (0x00000002)
#define UART0_UARTLCRH_R_PEN_BIT        (1)
#define UART0_UARTLCRH_R_PEN_DIS        (0x00000000)
#define UART0_UARTLCRH_R_PEN_EN         (0x00000002)

#define UART0_UARTLCRH_PEN_MASK         (0x00000001)
#define UART0_UARTLCRH_PEN_DIS          (0x00000000)
#define UART0_UARTLCRH_PEN_EN           (0x00000001)
//--------

//--------
#define UART0_UARTLCRH_R_EPS_MASK       (0x00000004)
#define UART0_UARTLCRH_R_EPS_BIT        (2)
#define UART0_UARTLCRH_R_EPS_ODD        (0x00000000)
#define UART0_UARTLCRH_R_EPS_EVEN       (0x00000004)

#define UART0_UARTLCRH_EPS_MASK         (0x00000001)
#define UART0_UARTLCRH_EPS_ODD          (0x00000000)
#define UART0_UARTLCRH_EPS_EVEN         (0x00000001)
//--------

//--------
#define UART0_UARTLCRH_R_STP2_MASK       (0x00000008)
#define UART0_UARTLCRH_R_STP2_BIT        (3)
#define UART0_UARTLCRH_R_STP2_ONE        (0x00000000)
#define UART0_UARTLCRH_R_STP2_TWO        (0x00000008)

#define UART0_UARTLCRH_STP2_MASK         (0x00000001)
#define UART0_UARTLCRH_STP2_ONE          (0x00000000)
#define UART0_UARTLCRH_STP2_TWO          (0x00000001)
//--------

//--------
#define UART0_UARTLCRH_R_FEN_MASK       (0x00000010)
#define UART0_UARTLCRH_R_FEN_BIT        (4)
#define UART0_UARTLCRH_R_FEN_DIS        (0x00000000)
#define UART0_UARTLCRH_R_FEN_EN         (0x00000010)

#define UART0_UARTLCRH_FEN_MASK         (0x00000001)
#define UART0_UARTLCRH_FEN_DIS          (0x00000000)
#define UART0_UARTLCRH_FEN_EN           (0x00000001)
//--------

//--------
#define UART0_UARTLCRH_R_WLEN_MASK       (0x00000060)
#define UART0_UARTLCRH_R_WLEN_BIT        (5)
#define UART0_UARTLCRH_R_WLEN_5          (0x00000000)
#define UART0_UARTLCRH_R_WLEN_6          (0x00000020)
#define UART0_UARTLCRH_R_WLEN_7          (0x00000040)
#define UART0_UARTLCRH_R_WLEN_8          (0x00000060)

#define UART0_UARTLCRH_WLEN_MASK         (0x00000003)
#define UART0_UARTLCRH_WLEN_5            (0x00000000)
#define UART0_UARTLCRH_WLEN_6            (0x00000001)
#define UART0_UARTLCRH_WLEN_7            (0x00000002)
#define UART0_UARTLCRH_WLEN_8            (0x00000003)
//--------

//--------
#define UART0_UARTLCRH_R_SPS_MASK       (0x00000080)
#define UART0_UARTLCRH_R_SPS_BIT        (7)
#define UART0_UARTLCRH_R_SPS_LOW        (0x00000000)
#define UART0_UARTLCRH_R_SPS_HIGH       (0x00000080)

#define UART0_UARTLCRH_SPS_MASK         (0x00000001)
#define UART0_UARTLCRH_SPS_LOW          (0x00000000)
#define UART0_UARTLCRH_SPS_HIGH         (0x00000001)
//--------

#define UART0_UARTLCRH_BRK_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTLCRH_OFFSET)*32)+(0*4))))
#define UART0_UARTLCRH_PEN_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTLCRH_OFFSET)*32)+(1*4))))
#define UART0_UARTLCRH_EPS_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTLCRH_OFFSET)*32)+(2*4))))
#define UART0_UARTLCRH_STP2_BB    (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTLCRH_OFFSET)*32)+(3*4))))
#define UART0_UARTLCRH_FEN_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTLCRH_OFFSET)*32)+(4*4))))
#define UART0_UARTLCRH_SPS_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTLCRH_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.8 UARTCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTCTL            (((UARTCTL_TypeDef*)(UART0_BASE + UART_UARTCTL_OFFSET )))
#define UART0_UARTCTL_R          (*((volatile uint32_t *)(UART0_BASE +UART_UARTCTL_OFFSET)))

//--------
#define UART0_UARTCTL_R_UARTEN_MASK       (0x00000001)
#define UART0_UARTCTL_R_UARTEN_BIT        (0)
#define UART0_UARTCTL_R_UARTEN_DIS        (0x00000000)
#define UART0_UARTCTL_R_UARTEN_EN         (0x00000001)

#define UART0_UARTCTL_UARTEN_MASK         (0x00000001)
#define UART0_UARTCTL_UARTEN_DIS          (0x00000000)
#define UART0_UARTCTL_UARTEN_EN           (0x00000001)
//--------

//--------
#define UART0_UARTCTL_R_SIREN_MASK       (0x00000002)
#define UART0_UARTCTL_R_SIREN_BIT        (1)
#define UART0_UARTCTL_R_SIREN_DIS        (0x00000000)
#define UART0_UARTCTL_R_SIREN_EN         (0x00000002)

#define UART0_UARTCTL_SIREN_MASK         (0x00000001)
#define UART0_UARTCTL_SIREN_DIS          (0x00000000)
#define UART0_UARTCTL_SIREN_EN           (0x00000001)
//--------

//--------
#define UART0_UARTCTL_R_SIRLP_MASK       (0x00000004)
#define UART0_UARTCTL_R_SIRLP_BIT        (2)
#define UART0_UARTCTL_R_SIRLP_DIS        (0x00000000)
#define UART0_UARTCTL_R_SIRLP_EN         (0x00000004)

#define UART0_UARTCTL_SIRLP_MASK         (0x00000001)
#define UART0_UARTCTL_SIRLP_DIS          (0x00000000)
#define UART0_UARTCTL_SIRLP_EN           (0x00000001)
//--------

//--------
#define UART0_UARTCTL_R_SMART_MASK       (0x00000008)
#define UART0_UARTCTL_R_SMART_BIT        (3)
#define UART0_UARTCTL_R_SMART_DIS        (0x00000000)
#define UART0_UARTCTL_R_SMART_EN         (0x00000008)

#define UART0_UARTCTL_SMART_MASK         (0x00000001)
#define UART0_UARTCTL_SMART_DIS          (0x00000000)
#define UART0_UARTCTL_SMART_EN           (0x00000001)
//--------

//--------
#define UART0_UARTCTL_R_EOT_MASK       (0x00000010)
#define UART0_UARTCTL_R_EOT_BIT        (4)
#define UART0_UARTCTL_R_EOT_FIFO       (0x00000000)
#define UART0_UARTCTL_R_EOT_ALL        (0x00000010)

#define UART0_UARTCTL_EOT_MASK         (0x00000001)
#define UART0_UARTCTL_EOT_FIFO         (0x00000000)
#define UART0_UARTCTL_EOT_ALL          (0x00000001)
//--------

//--------
#define UART0_UARTCTL_R_HSE_MASK       (0x00000020)
#define UART0_UARTCTL_R_HSE_BIT        (5)
#define UART0_UARTCTL_R_HSE_DIS        (0x00000000)
#define UART0_UARTCTL_R_HSE_EN         (0x00000020)

#define UART0_UARTCTL_HSE_MASK         (0x00000001)
#define UART0_UARTCTL_HSE_DIS          (0x00000000)
#define UART0_UARTCTL_HSE_EN           (0x00000001)
//--------

//--------
#define UART0_UARTCTL_R_LBE_MASK       (0x00000080)
#define UART0_UARTCTL_R_LBE_BIT        (7)
#define UART0_UARTCTL_R_LBE_DIS        (0x00000000)
#define UART0_UARTCTL_R_LBE_EN         (0x00000080)

#define UART0_UARTCTL_LBE_MASK         (0x00000001)
#define UART0_UARTCTL_LBE_DIS          (0x00000000)
#define UART0_UARTCTL_LBE_EN           (0x00000001)
//--------

//--------
#define UART0_UARTCTL_R_TXE_MASK       (0x00000100)
#define UART0_UARTCTL_R_TXE_BIT        (8)
#define UART0_UARTCTL_R_TXE_DIS        (0x00000000)
#define UART0_UARTCTL_R_TXE_EN         (0x00000100)

#define UART0_UARTCTL_TXE_MASK         (0x00000001)
#define UART0_UARTCTL_TXE_DIS          (0x00000000)
#define UART0_UARTCTL_TXE_EN           (0x00000001)
//--------

//--------
#define UART0_UARTCTL_R_RXE_MASK       (0x00000200)
#define UART0_UARTCTL_R_RXE_BIT        (9)
#define UART0_UARTCTL_R_RXE_DIS        (0x00000000)
#define UART0_UARTCTL_R_RXE_EN         (0x00000200)

#define UART0_UARTCTL_RXE_MASK         (0x00000001)
#define UART0_UARTCTL_RXE_DIS          (0x00000000)
#define UART0_UARTCTL_RXE_EN           (0x00000001)
//--------

//--------
#define UART0_UARTCTL_R_RTS_MASK       (0x00000800)
#define UART0_UARTCTL_R_RTS_BIT        (11)
#define UART0_UARTCTL_R_RTS_LOW        (0x00000000)
#define UART0_UARTCTL_R_RTS_HIGH       (0x00000800)

#define UART0_UARTCTL_RTS_MASK         (0x00000001)
#define UART0_UARTCTL_RTS_LOW          (0x00000000)
#define UART0_UARTCTL_RTS_HIGH         (0x00000001)
//--------

//--------
#define UART0_UARTCTL_R_RTSEN_MASK       (0x00004000)
#define UART0_UARTCTL_R_RTSEN_BIT        (14)
#define UART0_UARTCTL_R_RTSEN_DIS        (0x00000000)
#define UART0_UARTCTL_R_RTSEN_EN         (0x00004000)

#define UART0_UARTCTL_RTSEN_MASK         (0x00000001)
#define UART0_UARTCTL_RTSEN_DIS          (0x00000000)
#define UART0_UARTCTL_RTSEN_EN           (0x00000001)
//--------

//--------
#define UART0_UARTCTL_R_CTSEN_MASK       (0x00008000)
#define UART0_UARTCTL_R_CTSEN_BIT        (15)
#define UART0_UARTCTL_R_CTSEN_DIS        (0x00000000)
#define UART0_UARTCTL_R_CTSEN_EN         (0x00008000)

#define UART0_UARTCTL_CTSEN_MASK         (0x00000001)
#define UART0_UARTCTL_CTSEN_DIS          (0x00000000)
#define UART0_UARTCTL_CTSEN_EN           (0x00000001)
//--------

#define UART0_UARTCTL_UARTEN_BB    (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTCTL_OFFSET)*32)+(0*4))))
#define UART0_UARTCTL_SIREN_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTCTL_OFFSET)*32)+(1*4))))
#define UART0_UARTCTL_SIRLP_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTCTL_OFFSET)*32)+(2*4))))
#define UART0_UARTCTL_SMART_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTCTL_OFFSET)*32)+(3*4))))
#define UART0_UARTCTL_EOT_BB       (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTCTL_OFFSET)*32)+(4*4))))
#define UART0_UARTCTL_HSE_BB       (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTCTL_OFFSET)*32)+(5*4))))
#define UART0_UARTCTL_LBE_BB       (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTCTL_OFFSET)*32)+(7*4))))
#define UART0_UARTCTL_TXE_BB       (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTCTL_OFFSET)*32)+(8*4))))
#define UART0_UARTCTL_RXE_BB       (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTCTL_OFFSET)*32)+(9*4))))
#define UART0_UARTCTL_RTS_BB       (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTCTL_OFFSET)*32)+(11*4))))
#define UART0_UARTCTL_RTSEN_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTCTL_OFFSET)*32)+(14*4))))
#define UART0_UARTCTL_CTSEN_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTCTL_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.9 UARTIFLS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTIFLS            (((UARTIFLS_TypeDef*)(UART0_BASE + UART_UARTIFLS_OFFSET )))
#define UART0_UARTIFLS_R          (*((volatile uint32_t *)(UART0_BASE +UART_UARTIFLS_OFFSET)))

//--------
#define UART0_UARTIFLS_R_TXIFLSEL_MASK       (0x00000007)
#define UART0_UARTIFLS_R_TXIFLSEL_BIT        (0)
#define UART0_UARTIFLS_R_TXIFLSEL_1_4        (0x00000000)
#define UART0_UARTIFLS_R_TXIFLSEL_1_2        (0x00000002)
#define UART0_UARTIFLS_R_TXIFLSEL_3_4        (0x00000003)
#define UART0_UARTIFLS_R_TXIFLSEL_7_8        (0x00000004)

#define UART0_UARTIFLS_TXIFLSEL_MASK         (0x00000007)
#define UART0_UARTIFLS_TXIFLSEL_1_4          (0x00000000)
#define UART0_UARTIFLS_TXIFLSEL_1_2          (0x00000002)
#define UART0_UARTIFLS_TXIFLSEL_3_4          (0x00000003)
#define UART0_UARTIFLS_TXIFLSEL_7_8          (0x00000004)
//--------

//--------
#define UART0_UARTIFLS_R_RXIFLSEL_MASK       (0x00000038)
#define UART0_UARTIFLS_R_RXIFLSEL_BIT        (0)
#define UART0_UARTIFLS_R_RXIFLSEL_1_4        (0x00000000)
#define UART0_UARTIFLS_R_RXIFLSEL_1_2        (0x00000010)
#define UART0_UARTIFLS_R_RXIFLSEL_3_4        (0x00000018)
#define UART0_UARTIFLS_R_RXIFLSEL_7_8        (0x00000020)

#define UART0_UARTIFLS_RXIFLSEL_MASK         (0x00000007)
#define UART0_UARTIFLS_RXIFLSEL_1_4          (0x00000000)
#define UART0_UARTIFLS_RXIFLSEL_1_2          (0x00000002)
#define UART0_UARTIFLS_RXIFLSEL_3_4          (0x00000003)
#define UART0_UARTIFLS_RXIFLSEL_7_8          (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.10 UARTIM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTIM            (((UARTIM_TypeDef*)(UART0_BASE + UART_UARTIM_OFFSET )))
#define UART0_UARTIM_R          (*((volatile uint32_t *)(UART0_BASE +UART_UARTIM_OFFSET)))

//--------
#define UART0_UARTIM_R_CTSIM_MASK       (0x00000002)
#define UART0_UARTIM_R_CTSIM_BIT        (1)
#define UART0_UARTIM_R_CTSIM_DIS        (0x00000000)
#define UART0_UARTIM_R_CTSIM_EN         (0x00000002)

#define UART0_UARTIM_CTSIM_MASK         (0x00000001)
#define UART0_UARTIM_CTSIM_DIS          (0x00000000)
#define UART0_UARTIM_CTSIM_EN           (0x00000001)
//--------

//--------
#define UART0_UARTIM_R_RXIM_MASK       (0x00000010)
#define UART0_UARTIM_R_RXIM_BIT        (4)
#define UART0_UARTIM_R_RXIM_DIS        (0x00000000)
#define UART0_UARTIM_R_RXIM_EN         (0x00000010)

#define UART0_UARTIM_RXIM_MASK         (0x00000001)
#define UART0_UARTIM_RXIM_DIS          (0x00000000)
#define UART0_UARTIM_RXIM_EN           (0x00000001)
//--------

//--------
#define UART0_UARTIM_R_TXIM_MASK       (0x00000020)
#define UART0_UARTIM_R_TXIM_BIT        (5)
#define UART0_UARTIM_R_TXIM_DIS        (0x00000000)
#define UART0_UARTIM_R_TXIM_EN         (0x00000020)

#define UART0_UARTIM_TXIM_MASK         (0x00000001)
#define UART0_UARTIM_TXIM_DIS          (0x00000000)
#define UART0_UARTIM_TXIM_EN           (0x00000001)
//--------

//--------
#define UART0_UARTIM_R_RTIM_MASK       (0x00000040)
#define UART0_UARTIM_R_RTIM_BIT        (6)
#define UART0_UARTIM_R_RTIM_DIS        (0x00000000)
#define UART0_UARTIM_R_RTIM_EN         (0x00000040)

#define UART0_UARTIM_RTIM_MASK         (0x00000001)
#define UART0_UARTIM_RTIM_DIS          (0x00000000)
#define UART0_UARTIM_RTIM_EN           (0x00000001)
//--------

//--------
#define UART0_UARTIM_R_FEIM_MASK       (0x00000080)
#define UART0_UARTIM_R_FEIM_BIT        (7)
#define UART0_UARTIM_R_FEIM_DIS        (0x00000000)
#define UART0_UARTIM_R_FEIM_EN         (0x00000080)

#define UART0_UARTIM_FEIM_MASK         (0x00000001)
#define UART0_UARTIM_FEIM_DIS          (0x00000000)
#define UART0_UARTIM_FEIM_EN           (0x00000001)
//--------

//--------
#define UART0_UARTIM_R_PEIM_MASK       (0x00000100)
#define UART0_UARTIM_R_PEIM_BIT        (8)
#define UART0_UARTIM_R_PEIM_DIS        (0x00000000)
#define UART0_UARTIM_R_PEIM_EN         (0x00000100)

#define UART0_UARTIM_PEIM_MASK         (0x00000001)
#define UART0_UARTIM_PEIM_DIS          (0x00000000)
#define UART0_UARTIM_PEIM_EN           (0x00000001)
//--------

//--------
#define UART0_UARTIM_R_BEIM_MASK       (0x00000200)
#define UART0_UARTIM_R_BEIM_BIT        (9)
#define UART0_UARTIM_R_BEIM_DIS        (0x00000000)
#define UART0_UARTIM_R_BEIM_EN         (0x00000200)

#define UART0_UARTIM_BEIM_MASK         (0x00000001)
#define UART0_UARTIM_BEIM_DIS          (0x00000000)
#define UART0_UARTIM_BEIM_EN           (0x00000001)
//--------

//--------
#define UART0_UARTIM_R_OEIM_MASK       (0x00000400)
#define UART0_UARTIM_R_OEIM_BIT        (10)
#define UART0_UARTIM_R_OEIM_DIS        (0x00000000)
#define UART0_UARTIM_R_OEIM_EN         (0x00000400)

#define UART0_UARTIM_OEIM_MASK         (0x00000001)
#define UART0_UARTIM_OEIM_DIS          (0x00000000)
#define UART0_UARTIM_OEIM_EN           (0x00000001)
//--------

//--------
#define UART0_UARTIM_R_9BITIM_MASK       (0x00001000)
#define UART0_UARTIM_R_9BITIM_BIT        (12)
#define UART0_UARTIM_R_9BITIM_DIS        (0x00000000)
#define UART0_UARTIM_R_9BITIM_EN         (0x00001000)

#define UART0_UARTIM_9BITIM_MASK         (0x00000001)
#define UART0_UARTIM_9BITIM_DIS          (0x00000000)
#define UART0_UARTIM_9BITIM_EN           (0x00000001)
//--------

#define UART0_UARTIM_CTSIM_BB    (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTIM_OFFSET)*32)+(1*4))))
#define UART0_UARTIM_RXIM_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTIM_OFFSET)*32)+(4*4))))
#define UART0_UARTIM_TXIM_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTIM_OFFSET)*32)+(5*4))))
#define UART0_UARTIM_RTIM_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTIM_OFFSET)*32)+(6*4))))
#define UART0_UARTIM_FEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTIM_OFFSET)*32)+(7*4))))
#define UART0_UARTIM_PEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTIM_OFFSET)*32)+(8*4))))
#define UART0_UARTIM_BEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTIM_OFFSET)*32)+(9*4))))
#define UART0_UARTIM_OEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTIM_OFFSET)*32)+(10*4))))
#define UART0_UARTIM_9BITIM_BB   (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTIM_OFFSET)*32)+(12*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.11 UARTRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTRIS            (((UARTRIS_TypeDef*)(UART0_BASE + UART_UARTRIS_OFFSET )))
#define UART0_UARTRIS_R          (*((volatile uint32_t *)(UART0_BASE +UART_UARTRIS_OFFSET)))



//--------
#define UART0_UARTRIS_R_CTSRIS_MASK       (0x00000002)
#define UART0_UARTRIS_R_CTSRIS_BIT        (1)
#define UART0_UARTRIS_R_CTSRIS_NOACTIVE   (0x00000000)
#define UART0_UARTRIS_R_CTSRIS_ACTIVE     (0x00000002)

#define UART0_UARTRIS_CTSRIS_MASK         (0x00000001)
#define UART0_UARTRIS_CTSRIS_NOACTIVE     (0x00000000)
#define UART0_UARTRIS_CTSRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART0_UARTRIS_R_RXRIS_MASK       (0x00000010)
#define UART0_UARTRIS_R_RXRIS_BIT        (4)
#define UART0_UARTRIS_R_RXRIS_NOACTIVE   (0x00000000)
#define UART0_UARTRIS_R_RXRIS_ACTIVE     (0x00000010)

#define UART0_UARTRIS_RXRIS_MASK         (0x00000001)
#define UART0_UARTRIS_RXRIS_NOACTIVE     (0x00000000)
#define UART0_UARTRIS_RXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART0_UARTRIS_R_TXRIS_MASK       (0x00000020)
#define UART0_UARTRIS_R_TXRIS_BIT        (5)
#define UART0_UARTRIS_R_TXRIS_NOACTIVE   (0x00000000)
#define UART0_UARTRIS_R_TXRIS_ACTIVE     (0x00000020)

#define UART0_UARTRIS_TXRIS_MASK         (0x00000001)
#define UART0_UARTRIS_TXRIS_NOACTIVE     (0x00000000)
#define UART0_UARTRIS_TXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART0_UARTRIS_R_RTRIS_MASK       (0x00000040)
#define UART0_UARTRIS_R_RTRIS_BIT        (6)
#define UART0_UARTRIS_R_RTRIS_NOACTIVE   (0x00000000)
#define UART0_UARTRIS_R_RTRIS_ACTIVE     (0x00000040)

#define UART0_UARTRIS_RTRIS_MASK         (0x00000001)
#define UART0_UARTRIS_RTRIS_NOACTIVE     (0x00000000)
#define UART0_UARTRIS_RTRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART0_UARTRIS_R_FERIS_MASK       (0x00000080)
#define UART0_UARTRIS_R_FERIS_BIT        (7)
#define UART0_UARTRIS_R_FERIS_NOACTIVE   (0x00000000)
#define UART0_UARTRIS_R_FERIS_ACTIVE     (0x00000080)

#define UART0_UARTRIS_FERIS_MASK         (0x00000001)
#define UART0_UARTRIS_FERIS_NOACTIVE     (0x00000000)
#define UART0_UARTRIS_FERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART0_UARTRIS_R_PERIS_MASK       (0x00000100)
#define UART0_UARTRIS_R_PERIS_BIT        (8)
#define UART0_UARTRIS_R_PERIS_NOACTIVE   (0x00000000)
#define UART0_UARTRIS_R_PERIS_ACTIVE     (0x00000100)

#define UART0_UARTRIS_PERIS_MASK         (0x00000001)
#define UART0_UARTRIS_PERIS_NOACTIVE     (0x00000000)
#define UART0_UARTRIS_PERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART0_UARTRIS_R_BERIS_MASK       (0x00000200)
#define UART0_UARTRIS_R_BERIS_BIT        (9)
#define UART0_UARTRIS_R_BERIS_NOACTIVE   (0x00000000)
#define UART0_UARTRIS_R_BERIS_ACTIVE     (0x00000200)

#define UART0_UARTRIS_BERIS_MASK         (0x00000001)
#define UART0_UARTRIS_BERIS_NOACTIVE     (0x00000000)
#define UART0_UARTRIS_BERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART0_UARTRIS_R_OERIS_MASK       (0x00000400)
#define UART0_UARTRIS_R_OERIS_BIT        (10)
#define UART0_UARTRIS_R_OERIS_NOACTIVE   (0x00000000)
#define UART0_UARTRIS_R_OERIS_ACTIVE     (0x00000400)

#define UART0_UARTRIS_OERIS_MASK         (0x00000001)
#define UART0_UARTRIS_OERIS_NOACTIVE     (0x00000000)
#define UART0_UARTRIS_OERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART0_UARTRIS_R_9BITRIS_MASK       (0x00001000)
#define UART0_UARTRIS_R_9BITRIS_BIT        (12)
#define UART0_UARTRIS_R_9BITRIS_NOACTIVE   (0x00000000)
#define UART0_UARTRIS_R_9BITRIS_ACTIVE     (0x00001000)

#define UART0_UARTRIS_9BITRIS_MASK         (0x00000001)
#define UART0_UARTRIS_9BITRIS_NOACTIVE     (0x00000000)
#define UART0_UARTRIS_9BITRIS_ACTIVE       (0x00000001)
//--------

#define UART0_UARTRIS_CTSRIS_BB    (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTRIS_OFFSET)*32)+(1*4))))
#define UART0_UARTRIS_RXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTRIS_OFFSET)*32)+(4*4))))
#define UART0_UARTRIS_TXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTRIS_OFFSET)*32)+(5*4))))
#define UART0_UARTRIS_RTRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTRIS_OFFSET)*32)+(6*4))))
#define UART0_UARTRIS_FERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTRIS_OFFSET)*32)+(7*4))))
#define UART0_UARTRIS_PERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTRIS_OFFSET)*32)+(8*4))))
#define UART0_UARTRIS_BERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTRIS_OFFSET)*32)+(9*4))))
#define UART0_UARTRIS_OERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTRIS_OFFSET)*32)+(10*4))))
#define UART0_UARTRIS_9BITRIS_BB   (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTRIS_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.12 UARTMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTMIS            (((UARTMIS_TypeDef*)(UART0_BASE + UART_UARTMIS_OFFSET )))
#define UART0_UARTMIS_R          (*((volatile const uint32_t *)(UART0_BASE +UART_UARTMIS_OFFSET)))



//--------
#define UART0_UARTMIS_R_CTSMIS_MASK       (0x00000002)
#define UART0_UARTMIS_R_CTSMIS_BIT        (1)
#define UART0_UARTMIS_R_CTSMIS_NOOCCUR    (0x00000000)
#define UART0_UARTMIS_R_CTSMIS_OCCUR      (0x00000002)

#define UART0_UARTMIS_CTSMIS_MASK         (0x00000001)
#define UART0_UARTMIS_CTSMIS_NOOCCUR      (0x00000000)
#define UART0_UARTMIS_CTSMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART0_UARTMIS_R_RXMIS_MASK       (0x00000010)
#define UART0_UARTMIS_R_RXMIS_BIT        (4)
#define UART0_UARTMIS_R_RXMIS_NOOCCUR    (0x00000000)
#define UART0_UARTMIS_R_RXMIS_OCCUR      (0x00000010)

#define UART0_UARTMIS_RXMIS_MASK         (0x00000001)
#define UART0_UARTMIS_RXMIS_NOOCCUR      (0x00000000)
#define UART0_UARTMIS_RXMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART0_UARTMIS_R_TXMIS_MASK       (0x00000020)
#define UART0_UARTMIS_R_TXMIS_BIT        (5)
#define UART0_UARTMIS_R_TXMIS_NOOCCUR    (0x00000000)
#define UART0_UARTMIS_R_TXMIS_OCCUR      (0x00000020)

#define UART0_UARTMIS_TXMIS_MASK         (0x00000001)
#define UART0_UARTMIS_TXMIS_NOOCCUR      (0x00000000)
#define UART0_UARTMIS_TXMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART0_UARTMIS_R_RTMIS_MASK       (0x00000040)
#define UART0_UARTMIS_R_RTMIS_BIT        (6)
#define UART0_UARTMIS_R_RTMIS_NOOCCUR    (0x00000000)
#define UART0_UARTMIS_R_RTMIS_OCCUR      (0x00000040)

#define UART0_UARTMIS_RTMIS_MASK         (0x00000001)
#define UART0_UARTMIS_RTMIS_NOOCCUR      (0x00000000)
#define UART0_UARTMIS_RTMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART0_UARTMIS_R_FEMIS_MASK       (0x00000080)
#define UART0_UARTMIS_R_FEMIS_BIT        (7)
#define UART0_UARTMIS_R_FEMIS_NOOCCUR    (0x00000000)
#define UART0_UARTMIS_R_FEMIS_OCCUR      (0x00000080)

#define UART0_UARTMIS_FEMIS_MASK         (0x00000001)
#define UART0_UARTMIS_FEMIS_NOOCCUR      (0x00000000)
#define UART0_UARTMIS_FEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART0_UARTMIS_R_PEMIS_MASK       (0x00000100)
#define UART0_UARTMIS_R_PEMIS_BIT        (8)
#define UART0_UARTMIS_R_PEMIS_NOOCCUR    (0x00000000)
#define UART0_UARTMIS_R_PEMIS_OCCUR      (0x00000100)

#define UART0_UARTMIS_PEMIS_MASK         (0x00000001)
#define UART0_UARTMIS_PEMIS_NOOCCUR      (0x00000000)
#define UART0_UARTMIS_PEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART0_UARTMIS_R_BEMIS_MASK       (0x00000200)
#define UART0_UARTMIS_R_BEMIS_BIT        (9)
#define UART0_UARTMIS_R_BEMIS_NOOCCUR    (0x00000000)
#define UART0_UARTMIS_R_BEMIS_OCCUR      (0x00000200)

#define UART0_UARTMIS_BEMIS_MASK         (0x00000001)
#define UART0_UARTMIS_BEMIS_NOOCCUR      (0x00000000)
#define UART0_UARTMIS_BEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART0_UARTMIS_R_OEMIS_MASK       (0x00000400)
#define UART0_UARTMIS_R_OEMIS_BIT        (10)
#define UART0_UARTMIS_R_OEMIS_NOOCCUR    (0x00000000)
#define UART0_UARTMIS_R_OEMIS_OCCUR      (0x00000400)

#define UART0_UARTMIS_OEMIS_MASK         (0x00000001)
#define UART0_UARTMIS_OEMIS_NOOCCUR      (0x00000000)
#define UART0_UARTMIS_OEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART0_UARTMIS_R_9BITMIS_MASK       (0x00001000)
#define UART0_UARTMIS_R_9BITMIS_BIT        (12)
#define UART0_UARTMIS_R_9BITMIS_NOOCCUR    (0x00000000)
#define UART0_UARTMIS_R_9BITMIS_OCCUR      (0x00001000)

#define UART0_UARTMIS_9BITMIS_MASK         (0x00000001)
#define UART0_UARTMIS_9BITMIS_NOOCCUR      (0x00000000)
#define UART0_UARTMIS_9BITMIS_OCCUR        (0x00000001)
//--------


#define UART0_UARTMIS_CTSMIS_BB    (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTMIS_OFFSET)*32)+(1*4))))
#define UART0_UARTMIS_RXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTMIS_OFFSET)*32)+(4*4))))
#define UART0_UARTMIS_TXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTMIS_OFFSET)*32)+(5*4))))
#define UART0_UARTMIS_RTMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTMIS_OFFSET)*32)+(6*4))))
#define UART0_UARTMIS_FEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTMIS_OFFSET)*32)+(7*4))))
#define UART0_UARTMIS_PEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTMIS_OFFSET)*32)+(8*4))))
#define UART0_UARTMIS_BEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTMIS_OFFSET)*32)+(9*4))))
#define UART0_UARTMIS_OEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTMIS_OFFSET)*32)+(10*4))))
#define UART0_UARTMIS_9BITMIS_BB   (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTMIS_OFFSET)*32)+(12*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.13 UARTICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTICR            (((UARTICR_TypeDef*)(UART0_BASE + UART_UARTICR_OFFSET )))
#define UART0_UARTICR_R          (*((volatile uint32_t *)(UART0_BASE +UART_UARTICR_OFFSET)))


//--------
#define UART0_UARTICR_R_CTSIC_MASK       (0x00000002)
#define UART0_UARTICR_R_CTSIC_BIT        (1)
#define UART0_UARTICR_R_CTSIC_CLEAR      (0x00000002)

#define UART0_UARTICR_CTSIC_MASK         (0x00000001)
#define UART0_UARTICR_CTSIC_CLEAR        (0x00000001)
//--------

//--------
#define UART0_UARTICR_R_RXIC_MASK       (0x00000010)
#define UART0_UARTICR_R_RXIC_BIT        (4)
#define UART0_UARTICR_R_RXIC_CLEAR      (0x00000010)

#define UART0_UARTICR_RXIC_MASK         (0x00000001)
#define UART0_UARTICR_RXIC_CLEAR        (0x00000001)
//--------

//--------
#define UART0_UARTICR_R_TXIC_MASK       (0x00000020)
#define UART0_UARTICR_R_TXIC_BIT        (5)
#define UART0_UARTICR_R_TXIC_CLEAR      (0x00000020)

#define UART0_UARTICR_TXIC_MASK         (0x00000001)
#define UART0_UARTICR_TXIC_CLEAR        (0x00000001)
//--------

//--------
#define UART0_UARTICR_R_RTIC_MASK       (0x00000040)
#define UART0_UARTICR_R_RTIC_BIT        (6)
#define UART0_UARTICR_R_RTIC_CLEAR      (0x00000040)

#define UART0_UARTICR_RTIC_MASK         (0x00000001)
#define UART0_UARTICR_RTIC_CLEAR        (0x00000001)
//--------

//--------
#define UART0_UARTICR_R_FEIC_MASK       (0x00000080)
#define UART0_UARTICR_R_FEIC_BIT        (7)
#define UART0_UARTICR_R_FEIC_CLEAR      (0x00000080)

#define UART0_UARTICR_FEIC_MASK         (0x00000001)
#define UART0_UARTICR_FEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART0_UARTICR_R_PEIC_MASK       (0x00000100)
#define UART0_UARTICR_R_PEIC_BIT        (8)
#define UART0_UARTICR_R_PEIC_CLEAR      (0x00000100)

#define UART0_UARTICR_PEIC_MASK         (0x00000001)
#define UART0_UARTICR_PEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART0_UARTICR_R_BEIC_MASK       (0x00000200)
#define UART0_UARTICR_R_BEIC_BIT        (9)
#define UART0_UARTICR_R_BEIC_CLEAR      (0x00000200)

#define UART0_UARTICR_BEIC_MASK         (0x00000001)
#define UART0_UARTICR_BEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART0_UARTICR_R_OEIC_MASK       (0x00000400)
#define UART0_UARTICR_R_OEIC_BIT        (10)
#define UART0_UARTICR_R_OEIC_CLEAR      (0x00000400)

#define UART0_UARTICR_OEIC_MASK         (0x00000001)
#define UART0_UARTICR_OEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART0_UARTICR_R_9BITIC_MASK       (0x00001000)
#define UART0_UARTICR_R_9BITIC_BIT        (12)
#define UART0_UARTICR_R_9BITIC_CLEAR      (0x00001000)

#define UART0_UARTICR_9BITIC_MASK         (0x00000001)
#define UART0_UARTICR_9BITIC_CLEAR        (0x00000001)
//--------

#define UART0_UARTICR_CTSICR_BB    (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTICR_OFFSET)*32)+(1*4))))
#define UART0_UARTICR_RXICR_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTICR_OFFSET)*32)+(4*4))))
#define UART0_UARTICR_TXICR_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTICR_OFFSET)*32)+(5*4))))
#define UART0_UARTICR_RTICR_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTICR_OFFSET)*32)+(6*4))))
#define UART0_UARTICR_FEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTICR_OFFSET)*32)+(7*4))))
#define UART0_UARTICR_PEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTICR_OFFSET)*32)+(8*4))))
#define UART0_UARTICR_BEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTICR_OFFSET)*32)+(9*4))))
#define UART0_UARTICR_OEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTICR_OFFSET)*32)+(10*4))))
#define UART0_UARTICR_9BITICR_BB   (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTICR_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.14 UARTDMACTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTDMACTL            (((UARTDMACTL_TypeDef*)(UART0_BASE + UART_UARTDMACTL_OFFSET )))
#define UART0_UARTDMACTL_R          (*((volatile uint32_t *)(UART0_BASE +UART_UARTDMACTL_OFFSET)))

//--------
#define UART0_UARTDMACTL_R_RXDMAE_MASK       (0x00000001)
#define UART0_UARTDMACTL_R_RXDMAE_BIT        (0)
#define UART0_UARTDMACTL_R_RXDMAE_DIS        (0x00000000)
#define UART0_UARTDMACTL_R_RXDMAE_EN         (0x00008000)

#define UART0_UARTDMACTL_RXDMAE_MASK         (0x00000001)
#define UART0_UARTDMACTL_RXDMAE_DIS          (0x00000000)
#define UART0_UARTDMACTL_RXDMAE_EN           (0x00000001)
//--------

//--------
#define UART0_UARTDMACTL_R_TXDMAE_MASK       (0x00000002)
#define UART0_UARTDMACTL_R_TXDMAE_BIT        (1)
#define UART0_UARTDMACTL_R_TXDMAE_DIS        (0x00000000)
#define UART0_UARTDMACTL_R_TXDMAE_EN         (0x00000002)

#define UART0_UARTDMACTL_TXDMAE_MASK         (0x00000001)
#define UART0_UARTDMACTL_TXDMAE_DIS          (0x00000000)
#define UART0_UARTDMACTL_TXDMAE_EN           (0x00000001)
//--------

//--------
#define UART0_UARTDMACTL_R_DMAERR_MASK       (0x00000004)
#define UART0_UARTDMACTL_R_DMAERR_BIT        (2)
#define UART0_UARTDMACTL_R_DMAERR_NOERROR    (0x00000000)
#define UART0_UARTDMACTL_R_DMAERR_ERROR      (0x00000004)

#define UART0_UARTDMACTL_DMAERR_MASK         (0x00000001)
#define UART0_UARTDMACTL_DMAERR_NOERROR      (0x00000000)
#define UART0_UARTDMACTL_DMAERR_ERROR        (0x00000001)
//--------

#define UART0_UARTDMACTL_RXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(0*4))))
#define UART0_UARTDMACTL_TXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(1*4))))
#define UART0_UARTDMACTL_DMAERR_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(2*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.15 UART9BITADDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UART9BITADDR            (((UART9BITADDR_TypeDef*)(UART0_BASE + UART_UART9BITADDR_OFFSET )))
#define UART0_UART9BITADDR_R          (*((volatile uint32_t *)(UART0_BASE +UART_UART9BITADDR_OFFSET)))

//--------
#define UART0_UART9BITADDR_R_ADDR_MASK       (0x000000FF)
#define UART0_UART9BITADDR_R_ADDR_BIT        (0)

#define UART0_UART9BITADDR_ADDR_MASK         (0x000000FF)
//--------

//--------
#define UART0_UART9BITADDR_R_9BITEN_MASK       (0x00008000)
#define UART0_UART9BITADDR_R_9BITEN_BIT        (15)
#define UART0_UART9BITADDR_R_9BITEN_DIS        (0x00000000)
#define UART0_UART9BITADDR_R_9BITEN_EN         (0x00008000)

#define UART0_UART9BITADDR_9BITEN_MASK         (0x00000001)
#define UART0_UART9BITADDR_9BITEN_DIS          (0x00000000)
#define UART0_UART9BITADDR_9BITEN_EN           (0x00000001)
//--------

#define UART0_UART9BITADDR_9BITEN_BB     (*((volatile uint32_t *)(0x42000000+((UART0_OFFSET+UART_UART9BITADDR_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.16 UART9BITAMASK ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UART9BITAMASK            (((UART9BITAMASK_TypeDef*)(UART0_BASE + UART_UART9BITAMASK_OFFSET )))
#define UART0_UART9BITAMASK_R          (*((volatile uint32_t *)(UART0_BASE +UART_UART9BITAMASK_OFFSET)))

//--------
#define UART0_UART9BITAMASK_R_MASK_MASK       (0x000000FF)
#define UART0_UART9BITAMASK_R_MASK_BIT        (0)

#define UART0_UART9BITAMASK_MASK_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.17 UARTPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTPP            (((UARTPP_TypeDef*)(UART0_BASE + UART_UARTPP_OFFSET )))
#define UART0_UARTPP_R          (*((volatile const uint32_t *)(UART0_BASE +UART_UARTPP_OFFSET)))

//--------
#define UART0_UARTPP_R_SC_MASK       (0x00000001)
#define UART0_UARTPP_R_SC_BIT        (0)
#define UART0_UARTPP_R_SC_NOSUPPORT  (0x00000000)
#define UART0_UARTPP_R_SC_SUPPORT    (0x00000001)

#define UART0_UARTPP_SC_MASK         (0x00000001)
#define UART0_UARTPP_SC_NOSUPPORT    (0x00000000)
#define UART0_UARTPP_SC_SUPPORT      (0x00000001)
//--------

//--------
#define UART0_UARTPP_R_NB_MASK       (0x00000002)
#define UART0_UARTPP_R_NB_BIT        (1)
#define UART0_UARTPP_R_NB_NOSUPPORT  (0x00000000)
#define UART0_UARTPP_R_NB_SUPPORT    (0x00000002)

#define UART0_UARTPP_NB_MASK         (0x00000001)
#define UART0_UARTPP_NB_NOSUPPORT    (0x00000000)
#define UART0_UARTPP_NB_SUPPORT      (0x00000001)
//--------

#define UART0_UARTPP_SC_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTPP_OFFSET)*32)+(0*4))))
#define UART0_UARTPP_NB_BB     (*((volatile const uint32_t *)(0x42000000+((UART0_OFFSET+UART_UARTPP_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.18 UARTCC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTCC            (((UARTCC_TypeDef*)(UART0_BASE + UART_UARTCC_OFFSET )))
#define UART0_UARTCC_R          (*((volatile uint32_t *)(UART0_BASE +UART_UARTCC_OFFSET)))


//--------
#define UART0_UARTCC_R_CS_MASK       (0x0000000F)
#define UART0_UARTCC_R_CS_BIT        (0)
#define UART0_UARTCC_R_CS_SYSCLK     (0x00000000)
#define UART0_UARTCC_R_CS_PIOSC      (0x00000005)

#define UART0_UARTCC_CS_MASK         (0x0000000F)
#define UART0_UARTCC_CS_SYSCLK       (0x00000000)
#define UART0_UARTCC_CS_PIOSC        (0x00000005)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.19 UARTPeriphID4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTPeriphID4            (((UARTPeriphID4_TypeDef*)(UART0_BASE + UART_UARTPeriphID4_OFFSET )))
#define UART0_UARTPeriphID4_R          (*((volatile const uint32_t *)(UART0_BASE +UART_UARTPeriphID4_OFFSET)))

//--------
#define UART0_UARTPeriphID4_R_PID4_MASK       (0x000000FF)
#define UART0_UARTPeriphID4_R_PID4_BIT        (0)
#define UART0_UARTPeriphID4_R_PID4_DEFAULT    (0x00000000)

#define UART0_UARTPeriphID4_PID4_MASK         (0x000000FF)
#define UART0_UARTPeriphID4_PID4_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.20 UARTPeriphID5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTPeriphID5            (((UARTPeriphID5_TypeDef*)(UART0_BASE + UART_UARTPeriphID5_OFFSET )))
#define UART0_UARTPeriphID5_R          (*((volatile const uint32_t *)(UART0_BASE +UART_UARTPeriphID5_OFFSET)))

//--------
#define UART0_UARTPeriphID5_R_PID5_MASK       (0x000000FF)
#define UART0_UARTPeriphID5_R_PID5_BIT        (0)
#define UART0_UARTPeriphID5_R_PID5_DEFAULT    (0x00000000)

#define UART0_UARTPeriphID5_PID5_MASK         (0x000000FF)
#define UART0_UARTPeriphID5_PID5_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.21 UARTPeriphID6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTPeriphID6            (((UARTPeriphID6_TypeDef*)(UART0_BASE + UART_UARTPeriphID6_OFFSET )))
#define UART0_UARTPeriphID6_R          (*((volatile const uint32_t *)(UART0_BASE +UART_UARTPeriphID6_OFFSET)))



//--------
#define UART0_UARTPeriphID6_R_PID6_MASK       (0x000000FF)
#define UART0_UARTPeriphID6_R_PID6_BIT        (0)
#define UART0_UARTPeriphID6_R_PID6_DEFAULT    (0x00000000)

#define UART0_UARTPeriphID6_PID6_MASK         (0x000000FF)
#define UART0_UARTPeriphID6_PID6_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.22 UARTPeriphID7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTPeriphID7            (((UARTPeriphID7_TypeDef*)(UART0_BASE + UART_UARTPeriphID7_OFFSET )))
#define UART0_UARTPeriphID7_R          (*((volatile const uint32_t *)(UART0_BASE +UART_UARTPeriphID7_OFFSET)))



//--------
#define UART0_UARTPeriphID7_R_PID7_MASK       (0x000000FF)
#define UART0_UARTPeriphID7_R_PID7_BIT        (0)
#define UART0_UARTPeriphID7_R_PID7_DEFAULT    (0x00000000)

#define UART0_UARTPeriphID7_PID7_MASK         (0x000000FF)
#define UART0_UARTPeriphID7_PID7_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.23 UARTPeriphID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTPeriphID0            (((UARTPeriphID0_TypeDef*)(UART0_BASE + UART_UARTPeriphID0_OFFSET )))
#define UART0_UARTPeriphID0_R          (*((volatile const uint32_t *)(UART0_BASE +UART_UARTPeriphID0_OFFSET)))



//--------
#define UART0_UARTPeriphID0_R_PID0_MASK       (0x000000FF)
#define UART0_UARTPeriphID0_R_PID0_BIT        (0)
#define UART0_UARTPeriphID0_R_PID0_DEFAULT    (0x00000060)

#define UART0_UARTPeriphID0_PID0_MASK         (0x000000FF)
#define UART0_UARTPeriphID0_PID0_DEFAULT      (0x00000060)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.24 UARTPeriphID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTPeriphID1            (((UARTPeriphID1_TypeDef*)(UART0_BASE + UART_UARTPeriphID1_OFFSET )))
#define UART0_UARTPeriphID1_R          (*((volatile const uint32_t *)(UART0_BASE +UART_UARTPeriphID1_OFFSET)))



//--------
#define UART0_UARTPeriphID1_R_PID1_MASK       (0x000000FF)
#define UART0_UARTPeriphID1_R_PID1_BIT        (0)
#define UART0_UARTPeriphID1_R_PID1_DEFAULT    (0x00000000)

#define UART0_UARTPeriphID1_PID1_MASK         (0x000000FF)
#define UART0_UARTPeriphID1_PID1_DEFAULT      (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.25 UARTPeriphID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTPeriphID2            (((UARTPeriphID2_TypeDef*)(UART0_BASE + UART_UARTPeriphID2_OFFSET )))
#define UART0_UARTPeriphID2_R          (*((volatile const uint32_t *)(UART0_BASE +UART_UARTPeriphID2_OFFSET)))

//--------
#define UART0_UARTPeriphID2_R_PID2_MASK       (0x000000FF)
#define UART0_UARTPeriphID2_R_PID2_BIT        (0)
#define UART0_UARTPeriphID2_R_PID2_DEFAULT    (0x00000018)

#define UART0_UARTPeriphID2_PID2_MASK         (0x000000FF)
#define UART0_UARTPeriphID2_PID2_DEFAULT      (0x00000018)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.26 UARTPeriphID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTPeriphID3            (((UARTPeriphID3_TypeDef*)(UART0_BASE + UART_UARTPeriphID3_OFFSET )))
#define UART0_UARTPeriphID3_R          (*((volatile const uint32_t *)(UART0_BASE +UART_UARTPeriphID3_OFFSET)))

//--------
#define UART0_UARTPeriphID3_R_PID3_MASK       (0x000000FF)
#define UART0_UARTPeriphID3_R_PID3_BIT        (0)
#define UART0_UARTPeriphID3_R_PID3_DEFAULT    (0x00000001)

#define UART0_UARTPeriphID3_PID3_MASK         (0x000000FF)
#define UART0_UARTPeriphID3_PID3_DEFAULT      (0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.27 UARTPCellID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTPCellID0            (((UARTPCellID0_TypeDef*)(UART0_BASE + UART_UARTPCellID0_OFFSET )))
#define UART0_UARTPCellID0_R          (*((volatile const uint32_t *)(UART0_BASE +UART_UARTPCellID0_OFFSET)))

//--------
#define UART0_UARTPCellID0_R_CID0_MASK       (0x000000FF)
#define UART0_UARTPCellID0_R_CID0_BIT        (0)
#define UART0_UARTPCellID0_R_CID0_DEFAULT    (0x0000000D)

#define UART0_UARTPCellID0_CID0_MASK         (0x000000FF)
#define UART0_UARTPCellID0_CID0_DEFAULT      (0x0000000D)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.28 UARTPCellID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTPCellID1            (((UARTPCellID1_TypeDef*)(UART0_BASE + UART_UARTPCellID1_OFFSET )))
#define UART0_UARTPCellID1_R          (*((volatile const uint32_t *)(UART0_BASE +UART_UARTPCellID1_OFFSET)))

//--------
#define UART0_UARTPCellID1_R_CID1_MASK       (0x000000FF)
#define UART0_UARTPCellID1_R_CID1_BIT        (0)
#define UART0_UARTPCellID1_R_CID1_DEFAULT    (0x000000F0)

#define UART0_UARTPCellID1_CID1_MASK         (0x000000FF)
#define UART0_UARTPCellID1_CID1_DEFAULT      (0x000000F0)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.29 UARTPCellID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTPCellID2            (((UARTPCellID2_TypeDef*)(UART0_BASE + UART_UARTPCellID2_OFFSET )))
#define UART0_UARTPCellID2_R          (*((volatile const uint32_t *)(UART0_BASE +UART_UARTPCellID2_OFFSET)))

//--------
#define UART0_UARTPCellID2_R_CID2_MASK       (0x000000FF)
#define UART0_UARTPCellID2_R_CID2_BIT        (0)
#define UART0_UARTPCellID2_R_CID2_DEFAULT    (0x00000005)

#define UART0_UARTPCellID2_CID2_MASK         (0x000000FF)
#define UART0_UARTPCellID2_CID2_DEFAULT      (0x00000005)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.30 UARTPCellID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART0_UARTPCellID3            (((UARTPCellID3_TypeDef*)(UART0_BASE + UART_UARTPCellID3_OFFSET )))
#define UART0_UARTPCellID3_R          (*((volatile const uint32_t *)(UART0_BASE +UART_UARTPCellID3_OFFSET)))

//--------
#define UART0_UARTPCellID3_R_CID3_MASK       (0x000000FF)
#define UART0_UARTPCellID3_R_CID3_BIT        (0)
#define UART0_UARTPCellID3_R_CID3_DEFAULT    (0x000000B1)

#define UART0_UARTPCellID3_CID3_MASK         (0x000000FF)
#define UART0_UARTPCellID3_CID3_DEFAULT      (0x000000B1)
//--------


//todo UART1

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 UART1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.1 UARTDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTDR            (((UARTDR_TypeDef*)(UART1_BASE + UART_UARTDR_OFFSET )))
#define UART1_UARTDR_R          (*((volatile uint32_t *)(UART1_BASE +UART_UARTDR_OFFSET)))

//--------
#define UART1_UARTDR_R_DATA_MASK       (0x000000FF)
#define UART1_UARTDR_R_DATA_BIT        (0)

#define UART1_UARTDR_DATA_MASK         (0x000000FF)
//--------

//--------
#define UART1_UARTDR_R_FE_MASK       (0x00000100)
#define UART1_UARTDR_R_FE_BIT        (8)
#define UART1_UARTDR_R_FE_NOERROR    (0x00000000)
#define UART1_UARTDR_R_FE_ERROR      (0x00000100)

#define UART1_UARTDR_FE_MASK         (0x00000001)
#define UART1_UARTDR_FE_NOERROR      (0x00000000)
#define UART1_UARTDR_FE_ERROR        (0x00000001)
//--------

//--------
#define UART1_UARTDR_R_PE_MASK       (0x00000200)
#define UART1_UARTDR_R_PE_BIT        (9)
#define UART1_UARTDR_R_PE_NOERROR    (0x00000000)
#define UART1_UARTDR_R_PE_ERROR      (0x00000200)

#define UART1_UARTDR_PE_MASK         (0x00000001)
#define UART1_UARTDR_PE_NOERROR      (0x00000000)
#define UART1_UARTDR_PE_ERROR        (0x00000001)
//--------

//--------
#define UART1_UARTDR_R_BE_MASK       (0x00000400)
#define UART1_UARTDR_R_BE_BIT        (10)
#define UART1_UARTDR_R_BE_NOERROR    (0x00000000)
#define UART1_UARTDR_R_BE_ERROR      (0x00000400)

#define UART1_UARTDR_BE_MASK         (0x00000001)
#define UART1_UARTDR_BE_NOERROR      (0x00000000)
#define UART1_UARTDR_BE_ERROR        (0x00000001)
//--------

//--------
#define UART1_UARTDR_R_OE_MASK       (0x00000800)
#define UART1_UARTDR_R_OE_BIT        (11)
#define UART1_UARTDR_R_OE_NOERROR    (0x00000000)
#define UART1_UARTDR_R_OE_ERROR      (0x00000800)

#define UART1_UARTDR_OE_MASK         (0x00000001)
#define UART1_UARTDR_OE_NOERROR      (0x00000000)
#define UART1_UARTDR_OE_ERROR        (0x00000001)
//--------

#define UART1_UARTDR_FE_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTDR_OFFSET)*32)+(8*4))))
#define UART1_UARTDR_PE_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTDR_OFFSET)*32)+(9*4))))
#define UART1_UARTDR_BE_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTDR_OFFSET)*32)+(10*4))))
#define UART1_UARTDR_OE_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTDR_OFFSET)*32)+(11*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.2 UARTRSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTRSR            (((UARTRSR_TypeDef*)(UART1_BASE + UART_UARTRSR_OFFSET )))
#define UART1_UARTRSR_R          (*((volatile const uint32_t *)(UART1_BASE +UART_UARTRSR_OFFSET)))


//--------
#define UART1_UARTRSR_R_FE_MASK       (0x00000001)
#define UART1_UARTRSR_R_FE_BIT        (0)
#define UART1_UARTRSR_R_FE_NOERROR    (0x00000000)
#define UART1_UARTRSR_R_FE_ERROR      (0x00000001)

#define UART1_UARTRSR_FE_MASK         (0x00000001)
#define UART1_UARTRSR_FE_NOERROR      (0x00000000)
#define UART1_UARTRSR_FE_ERROR        (0x00000001)
//--------

//--------
#define UART1_UARTRSR_R_PE_MASK       (0x00000002)
#define UART1_UARTRSR_R_PE_BIT        (1)
#define UART1_UARTRSR_R_PE_NOERROR    (0x00000000)
#define UART1_UARTRSR_R_PE_ERROR      (0x00000002)

#define UART1_UARTRSR_PE_MASK         (0x00000001)
#define UART1_UARTRSR_PE_NOERROR      (0x00000000)
#define UART1_UARTRSR_PE_ERROR        (0x00000001)
//--------

//--------
#define UART1_UARTRSR_R_BE_MASK       (0x00000004)
#define UART1_UARTRSR_R_BE_BIT        (2)
#define UART1_UARTRSR_R_BE_NOERROR    (0x00000000)
#define UART1_UARTRSR_R_BE_ERROR      (0x00000004)

#define UART1_UARTRSR_BE_MASK         (0x00000001)
#define UART1_UARTRSR_BE_NOERROR      (0x00000000)
#define UART1_UARTRSR_BE_ERROR        (0x00000001)
//--------

//--------
#define UART1_UARTRSR_R_OE_MASK       (0x00000008)
#define UART1_UARTRSR_R_OE_BIT        (3)
#define UART1_UARTRSR_R_OE_NOERROR    (0x00000000)
#define UART1_UARTRSR_R_OE_ERROR      (0x00000008)

#define UART1_UARTRSR_OE_MASK         (0x00000001)
#define UART1_UARTRSR_OE_NOERROR      (0x00000000)
#define UART1_UARTRSR_OE_ERROR        (0x00000001)
//--------

#define UART1_UARTRSR_FE_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTRSR_OFFSET)*32)+(0*4))))
#define UART1_UARTRSR_PE_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTRSR_OFFSET)*32)+(1*4))))
#define UART1_UARTRSR_BE_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTRSR_OFFSET)*32)+(2*4))))
#define UART1_UARTRSR_OE_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTRSR_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.2 UARTECR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTECR            (((UARTECR_TypeDef*)(UART1_BASE + UART_UARTECR_OFFSET )))
#define UART1_UARTECR_R          (*((volatile uint32_t *)(UART1_BASE +UART_UARTECR_OFFSET)))

//--------
#define UART1_UARTECR_R_DATA_MASK       (0x000000FF)
#define UART1_UARTECR_R_DATA_BIT        (0)

#define UART1_UARTECR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.3 UARTFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTFR            (((UARTFR_TypeDef*)(UART1_BASE + UART_UARTFR_OFFSET )))
#define UART1_UARTFR_R          (*((volatile const uint32_t *)(UART1_BASE +UART_UARTFR_OFFSET)))

//--------
#define UART1_UARTFR_R_CTS_MASK       (0x00000001)
#define UART1_UARTFR_R_CTS_BIT        (0)
#define UART1_UARTFR_R_CTS_NOASSERT   (0x00000000)
#define UART1_UARTFR_R_CTS_ASSERT     (0x00000001)

#define UART1_UARTFR_CTS_MASK         (0x00000001)
#define UART1_UARTFR_CTS_NOASSERT     (0x00000000)
#define UART1_UARTFR_CTS_ASSERT       (0x00000001)
//--------

//--------
#define UART1_UARTFR_R_BUSY_MASK       (0x00000008)
#define UART1_UARTFR_R_BUSY_BIT        (3)
#define UART1_UARTFR_R_BUSY_NOBUSY     (0x00000000)
#define UART1_UARTFR_R_BUSY_BUSY       (0x00000008)

#define UART1_UARTFR_BUSY_MASK         (0x00000001)
#define UART1_UARTFR_BUSY_NOBUSY       (0x00000000)
#define UART1_UARTFR_BUSY_BUSY         (0x00000001)
//--------

//--------
#define UART1_UARTFR_R_RXFE_MASK       (0x00000010)
#define UART1_UARTFR_R_RXFE_BIT        (4)
#define UART1_UARTFR_R_RXFE_NOEMPTY    (0x00000000)
#define UART1_UARTFR_R_RXFE_EMPTY      (0x00000010)

#define UART1_UARTFR_RXFE_MASK         (0x00000001)
#define UART1_UARTFR_RXFE_NOEMPTY      (0x00000000)
#define UART1_UARTFR_RXFE_EMPTY        (0x00000001)
//--------

//--------
#define UART1_UARTFR_R_TXFF_MASK       (0x00000020)
#define UART1_UARTFR_R_TXFF_BIT        (5)
#define UART1_UARTFR_R_TXFF_NOFULL     (0x00000000)
#define UART1_UARTFR_R_TXFF_FULL       (0x00000020)

#define UART1_UARTFR_TXFF_MASK         (0x00000001)
#define UART1_UARTFR_TXFF_NOFULL       (0x00000000)
#define UART1_UARTFR_TXFF_FULL         (0x00000001)
//--------

//--------
#define UART1_UARTFR_R_RXFF_MASK       (0x00000040)
#define UART1_UARTFR_R_RXFF_BIT        (6)
#define UART1_UARTFR_R_RXFF_NOFULL     (0x00000000)
#define UART1_UARTFR_R_RXFF_FULL       (0x00000040)

#define UART1_UARTFR_RXFF_MASK         (0x00000001)
#define UART1_UARTFR_RXFF_NOFULL       (0x00000000)
#define UART1_UARTFR_RXFF_FULL         (0x00000001)
//--------

//--------
#define UART1_UARTFR_R_TXFE_MASK       (0x00000080)
#define UART1_UARTFR_R_TXFE_BIT        (7)
#define UART1_UARTFR_R_TXFE_NOEMPTY    (0x00000000)
#define UART1_UARTFR_R_TXFE_EMPTY      (0x00000080)

#define UART1_UARTFR_TXFE_MASK         (0x00000001)
#define UART1_UARTFR_TXFE_NOEMPTY      (0x00000000)
#define UART1_UARTFR_TXFE_EMPTY        (0x00000001)
//--------

#define UART1_UARTFR_CTS_BB      (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTFR_OFFSET)*32)+(0*4))))
#define UART1_UARTFR_BUSY_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTFR_OFFSET)*32)+(3*4))))
#define UART1_UARTFR_RXFE_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTFR_OFFSET)*32)+(4*4))))
#define UART1_UARTFR_TXFF_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTFR_OFFSET)*32)+(5*4))))
#define UART1_UARTFR_RXFF_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTFR_OFFSET)*32)+(6*4))))
#define UART1_UARTFR_TXFE_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTFR_OFFSET)*32)+(7*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.4 UARTILPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
#define UART1_UARTILPR            (((UARTILPR_TypeDef*)(UART1_BASE + UART_UARTILPR_OFFSET )))
#define UART1_UARTILPR_R          (*((volatile uint32_t *)(UART1_BASE +UART_UARTILPR_OFFSET)))

//--------
#define UART1_UARTILPR_R_ILPDVSR_MASK       (0x000000FF)
#define UART1_UARTILPR_R_ILPDVSR_BIT        (0)

#define UART1_UARTILPR_ILPDVSR_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.5 UARTIBRD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTIBRD            (((UARTIBRD_TypeDef*)(UART1_BASE + UART_UARTIBRD_OFFSET )))
#define UART1_UARTIBRD_R          (*((volatile uint32_t *)(UART1_BASE +UART_UARTIBRD_OFFSET)))

//--------
#define UART1_UARTIBRD_R_DIVINT_MASK       (0x0000FFFF)
#define UART1_UARTIBRD_R_DIVINT_BIT        (0)

#define UART1_UARTIBRD_DIVINT_MASK         (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.6 UARTFBRD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTFBRD            (((UARTFBRD_TypeDef*)(UART1_BASE + UART_UARTFBRD_OFFSET )))
#define UART1_UARTFBRD_R          (*((volatile uint32_t *)(UART1_BASE +UART_UARTFBRD_OFFSET)))

//--------
#define UART1_UARTFBRD_R_DIVFRAC_MASK       (0x0000003F)
#define UART1_UARTFBRD_R_DIVFRAC_BIT        (0)

#define UART1_UARTFBRD_DIVFRAC_MASK         (0x0000003F)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.7 UARTLCRH ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTLCRH            (((UARTLCRH_TypeDef*)(UART1_BASE + UART_UARTLCRH_OFFSET )))
#define UART1_UARTLCRH_R          (*((volatile uint32_t *)(UART1_BASE +UART_UARTLCRH_OFFSET)))

//--------
#define UART1_UARTLCRH_R_BRK_MASK       (0x00000001)
#define UART1_UARTLCRH_R_BRK_BIT        (0)
#define UART1_UARTLCRH_R_BRK_NORMAL     (0x00000000)
#define UART1_UARTLCRH_R_BRK_LOW        (0x00000001)

#define UART1_UARTLCRH_BRK_MASK         (0x00000001)
#define UART1_UARTLCRH_BRK_NORMAL       (0x00000000)
#define UART1_UARTLCRH_BRK_LOW          (0x00000001)
//--------

//--------
#define UART1_UARTLCRH_R_PEN_MASK       (0x00000002)
#define UART1_UARTLCRH_R_PEN_BIT        (1)
#define UART1_UARTLCRH_R_PEN_DIS        (0x00000000)
#define UART1_UARTLCRH_R_PEN_EN         (0x00000002)

#define UART1_UARTLCRH_PEN_MASK         (0x00000001)
#define UART1_UARTLCRH_PEN_DIS          (0x00000000)
#define UART1_UARTLCRH_PEN_EN           (0x00000001)
//--------

//--------
#define UART1_UARTLCRH_R_EPS_MASK       (0x00000004)
#define UART1_UARTLCRH_R_EPS_BIT        (2)
#define UART1_UARTLCRH_R_EPS_ODD        (0x00000000)
#define UART1_UARTLCRH_R_EPS_EVEN       (0x00000004)

#define UART1_UARTLCRH_EPS_MASK         (0x00000001)
#define UART1_UARTLCRH_EPS_ODD          (0x00000000)
#define UART1_UARTLCRH_EPS_EVEN         (0x00000001)
//--------

//--------
#define UART1_UARTLCRH_R_STP2_MASK       (0x00000008)
#define UART1_UARTLCRH_R_STP2_BIT        (3)
#define UART1_UARTLCRH_R_STP2_ONE        (0x00000000)
#define UART1_UARTLCRH_R_STP2_TWO        (0x00000008)

#define UART1_UARTLCRH_STP2_MASK         (0x00000001)
#define UART1_UARTLCRH_STP2_ONE          (0x00000000)
#define UART1_UARTLCRH_STP2_TWO          (0x00000001)
//--------

//--------
#define UART1_UARTLCRH_R_FEN_MASK       (0x00000010)
#define UART1_UARTLCRH_R_FEN_BIT        (4)
#define UART1_UARTLCRH_R_FEN_DIS        (0x00000000)
#define UART1_UARTLCRH_R_FEN_EN         (0x00000010)

#define UART1_UARTLCRH_FEN_MASK         (0x00000001)
#define UART1_UARTLCRH_FEN_DIS          (0x00000000)
#define UART1_UARTLCRH_FEN_EN           (0x00000001)
//--------

//--------
#define UART1_UARTLCRH_R_WLEN_MASK       (0x00000060)
#define UART1_UARTLCRH_R_WLEN_BIT        (5)
#define UART1_UARTLCRH_R_WLEN_5          (0x00000000)
#define UART1_UARTLCRH_R_WLEN_6          (0x00000020)
#define UART1_UARTLCRH_R_WLEN_7          (0x00000040)
#define UART1_UARTLCRH_R_WLEN_8          (0x00000060)

#define UART1_UARTLCRH_WLEN_MASK         (0x00000003)
#define UART1_UARTLCRH_WLEN_5            (0x00000000)
#define UART1_UARTLCRH_WLEN_6            (0x00000001)
#define UART1_UARTLCRH_WLEN_7            (0x00000002)
#define UART1_UARTLCRH_WLEN_8            (0x00000003)
//--------

//--------
#define UART1_UARTLCRH_R_SPS_MASK       (0x00000080)
#define UART1_UARTLCRH_R_SPS_BIT        (7)
#define UART1_UARTLCRH_R_SPS_LOW        (0x00000000)
#define UART1_UARTLCRH_R_SPS_HIGH       (0x00000080)

#define UART1_UARTLCRH_SPS_MASK         (0x00000001)
#define UART1_UARTLCRH_SPS_LOW          (0x00000000)
#define UART1_UARTLCRH_SPS_HIGH         (0x00000001)
//--------

#define UART1_UARTLCRH_BRK_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTLCRH_OFFSET)*32)+(0*4))))
#define UART1_UARTLCRH_PEN_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTLCRH_OFFSET)*32)+(1*4))))
#define UART1_UARTLCRH_EPS_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTLCRH_OFFSET)*32)+(2*4))))
#define UART1_UARTLCRH_STP2_BB    (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTLCRH_OFFSET)*32)+(3*4))))
#define UART1_UARTLCRH_FEN_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTLCRH_OFFSET)*32)+(4*4))))
#define UART1_UARTLCRH_SPS_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTLCRH_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.8 UARTCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTCTL            (((UARTCTL_TypeDef*)(UART1_BASE + UART_UARTCTL_OFFSET )))
#define UART1_UARTCTL_R          (*((volatile uint32_t *)(UART1_BASE +UART_UARTCTL_OFFSET)))

//--------
#define UART1_UARTCTL_R_UARTEN_MASK       (0x00000001)
#define UART1_UARTCTL_R_UARTEN_BIT        (0)
#define UART1_UARTCTL_R_UARTEN_DIS        (0x00000000)
#define UART1_UARTCTL_R_UARTEN_EN         (0x00000001)

#define UART1_UARTCTL_UARTEN_MASK         (0x00000001)
#define UART1_UARTCTL_UARTEN_DIS          (0x00000000)
#define UART1_UARTCTL_UARTEN_EN           (0x00000001)
//--------

//--------
#define UART1_UARTCTL_R_SIREN_MASK       (0x00000002)
#define UART1_UARTCTL_R_SIREN_BIT        (1)
#define UART1_UARTCTL_R_SIREN_DIS        (0x00000000)
#define UART1_UARTCTL_R_SIREN_EN         (0x00000002)

#define UART1_UARTCTL_SIREN_MASK         (0x00000001)
#define UART1_UARTCTL_SIREN_DIS          (0x00000000)
#define UART1_UARTCTL_SIREN_EN           (0x00000001)
//--------

//--------
#define UART1_UARTCTL_R_SIRLP_MASK       (0x00000004)
#define UART1_UARTCTL_R_SIRLP_BIT        (2)
#define UART1_UARTCTL_R_SIRLP_DIS        (0x00000000)
#define UART1_UARTCTL_R_SIRLP_EN         (0x00000004)

#define UART1_UARTCTL_SIRLP_MASK         (0x00000001)
#define UART1_UARTCTL_SIRLP_DIS          (0x00000000)
#define UART1_UARTCTL_SIRLP_EN           (0x00000001)
//--------

//--------
#define UART1_UARTCTL_R_SMART_MASK       (0x00000008)
#define UART1_UARTCTL_R_SMART_BIT        (3)
#define UART1_UARTCTL_R_SMART_DIS        (0x00000000)
#define UART1_UARTCTL_R_SMART_EN         (0x00000008)

#define UART1_UARTCTL_SMART_MASK         (0x00000001)
#define UART1_UARTCTL_SMART_DIS          (0x00000000)
#define UART1_UARTCTL_SMART_EN           (0x00000001)
//--------

//--------
#define UART1_UARTCTL_R_EOT_MASK       (0x00000010)
#define UART1_UARTCTL_R_EOT_BIT        (4)
#define UART1_UARTCTL_R_EOT_FIFO       (0x00000000)
#define UART1_UARTCTL_R_EOT_ALL        (0x00000010)

#define UART1_UARTCTL_EOT_MASK         (0x00000001)
#define UART1_UARTCTL_EOT_FIFO         (0x00000000)
#define UART1_UARTCTL_EOT_ALL          (0x00000001)
//--------

//--------
#define UART1_UARTCTL_R_HSE_MASK       (0x00000020)
#define UART1_UARTCTL_R_HSE_BIT        (5)
#define UART1_UARTCTL_R_HSE_DIS        (0x00000000)
#define UART1_UARTCTL_R_HSE_EN         (0x00000020)

#define UART1_UARTCTL_HSE_MASK         (0x00000001)
#define UART1_UARTCTL_HSE_DIS          (0x00000000)
#define UART1_UARTCTL_HSE_EN           (0x00000001)
//--------

//--------
#define UART1_UARTCTL_R_LBE_MASK       (0x00000080)
#define UART1_UARTCTL_R_LBE_BIT        (7)
#define UART1_UARTCTL_R_LBE_DIS        (0x00000000)
#define UART1_UARTCTL_R_LBE_EN         (0x00000080)

#define UART1_UARTCTL_LBE_MASK         (0x00000001)
#define UART1_UARTCTL_LBE_DIS          (0x00000000)
#define UART1_UARTCTL_LBE_EN           (0x00000001)
//--------

//--------
#define UART1_UARTCTL_R_TXE_MASK       (0x00000100)
#define UART1_UARTCTL_R_TXE_BIT        (8)
#define UART1_UARTCTL_R_TXE_DIS        (0x00000000)
#define UART1_UARTCTL_R_TXE_EN         (0x00000100)

#define UART1_UARTCTL_TXE_MASK         (0x00000001)
#define UART1_UARTCTL_TXE_DIS          (0x00000000)
#define UART1_UARTCTL_TXE_EN           (0x00000001)
//--------

//--------
#define UART1_UARTCTL_R_RXE_MASK       (0x00000200)
#define UART1_UARTCTL_R_RXE_BIT        (9)
#define UART1_UARTCTL_R_RXE_DIS        (0x00000000)
#define UART1_UARTCTL_R_RXE_EN         (0x00000200)

#define UART1_UARTCTL_RXE_MASK         (0x00000001)
#define UART1_UARTCTL_RXE_DIS          (0x00000000)
#define UART1_UARTCTL_RXE_EN           (0x00000001)
//--------

//--------
#define UART1_UARTCTL_R_RTS_MASK       (0x00000800)
#define UART1_UARTCTL_R_RTS_BIT        (11)
#define UART1_UARTCTL_R_RTS_LOW        (0x00000000)
#define UART1_UARTCTL_R_RTS_HIGH       (0x00000800)

#define UART1_UARTCTL_RTS_MASK         (0x00000001)
#define UART1_UARTCTL_RTS_LOW          (0x00000000)
#define UART1_UARTCTL_RTS_HIGH         (0x00000001)
//--------

//--------
#define UART1_UARTCTL_R_RTSEN_MASK       (0x00004000)
#define UART1_UARTCTL_R_RTSEN_BIT        (14)
#define UART1_UARTCTL_R_RTSEN_DIS        (0x00000000)
#define UART1_UARTCTL_R_RTSEN_EN         (0x00004000)

#define UART1_UARTCTL_RTSEN_MASK         (0x00000001)
#define UART1_UARTCTL_RTSEN_DIS          (0x00000000)
#define UART1_UARTCTL_RTSEN_EN           (0x00000001)
//--------

//--------
#define UART1_UARTCTL_R_CTSEN_MASK       (0x00008000)
#define UART1_UARTCTL_R_CTSEN_BIT        (15)
#define UART1_UARTCTL_R_CTSEN_DIS        (0x00000000)
#define UART1_UARTCTL_R_CTSEN_EN         (0x00008000)

#define UART1_UARTCTL_CTSEN_MASK         (0x00000001)
#define UART1_UARTCTL_CTSEN_DIS          (0x00000000)
#define UART1_UARTCTL_CTSEN_EN           (0x00000001)
//--------

#define UART1_UARTCTL_UARTEN_BB    (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTCTL_OFFSET)*32)+(0*4))))
#define UART1_UARTCTL_SIREN_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTCTL_OFFSET)*32)+(1*4))))
#define UART1_UARTCTL_SIRLP_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTCTL_OFFSET)*32)+(2*4))))
#define UART1_UARTCTL_SMART_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTCTL_OFFSET)*32)+(3*4))))
#define UART1_UARTCTL_EOT_BB       (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTCTL_OFFSET)*32)+(4*4))))
#define UART1_UARTCTL_HSE_BB       (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTCTL_OFFSET)*32)+(5*4))))
#define UART1_UARTCTL_LBE_BB       (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTCTL_OFFSET)*32)+(7*4))))
#define UART1_UARTCTL_TXE_BB       (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTCTL_OFFSET)*32)+(8*4))))
#define UART1_UARTCTL_RXE_BB       (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTCTL_OFFSET)*32)+(9*4))))
#define UART1_UARTCTL_RTS_BB       (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTCTL_OFFSET)*32)+(11*4))))
#define UART1_UARTCTL_RTSEN_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTCTL_OFFSET)*32)+(14*4))))
#define UART1_UARTCTL_CTSEN_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTCTL_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.9 UARTIFLS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTIFLS            (((UARTIFLS_TypeDef*)(UART1_BASE + UART_UARTIFLS_OFFSET )))
#define UART1_UARTIFLS_R          (*((volatile uint32_t *)(UART1_BASE +UART_UARTIFLS_OFFSET)))

//--------
#define UART1_UARTIFLS_R_TXIFLSEL_MASK       (0x00000007)
#define UART1_UARTIFLS_R_TXIFLSEL_BIT        (0)
#define UART1_UARTIFLS_R_TXIFLSEL_1_4        (0x00000000)
#define UART1_UARTIFLS_R_TXIFLSEL_1_2        (0x00000002)
#define UART1_UARTIFLS_R_TXIFLSEL_3_4        (0x00000003)
#define UART1_UARTIFLS_R_TXIFLSEL_7_8        (0x00000004)

#define UART1_UARTIFLS_TXIFLSEL_MASK         (0x00000007)
#define UART1_UARTIFLS_TXIFLSEL_1_4          (0x00000000)
#define UART1_UARTIFLS_TXIFLSEL_1_2          (0x00000002)
#define UART1_UARTIFLS_TXIFLSEL_3_4          (0x00000003)
#define UART1_UARTIFLS_TXIFLSEL_7_8          (0x00000004)
//--------

//--------
#define UART1_UARTIFLS_R_RXIFLSEL_MASK       (0x00000038)
#define UART1_UARTIFLS_R_RXIFLSEL_BIT        (0)
#define UART1_UARTIFLS_R_RXIFLSEL_1_4        (0x00000000)
#define UART1_UARTIFLS_R_RXIFLSEL_1_2        (0x00000010)
#define UART1_UARTIFLS_R_RXIFLSEL_3_4        (0x00000018)
#define UART1_UARTIFLS_R_RXIFLSEL_7_8        (0x00000020)

#define UART1_UARTIFLS_RXIFLSEL_MASK         (0x00000007)
#define UART1_UARTIFLS_RXIFLSEL_1_4          (0x00000000)
#define UART1_UARTIFLS_RXIFLSEL_1_2          (0x00000002)
#define UART1_UARTIFLS_RXIFLSEL_3_4          (0x00000003)
#define UART1_UARTIFLS_RXIFLSEL_7_8          (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.10 UARTIM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTIM            (((UARTIM_TypeDef*)(UART1_BASE + UART_UARTIM_OFFSET )))
#define UART1_UARTIM_R          (*((volatile uint32_t *)(UART1_BASE +UART_UARTIM_OFFSET)))

//--------
#define UART1_UARTIM_R_CTSIM_MASK       (0x00000002)
#define UART1_UARTIM_R_CTSIM_BIT        (1)
#define UART1_UARTIM_R_CTSIM_DIS        (0x00000000)
#define UART1_UARTIM_R_CTSIM_EN         (0x00000002)

#define UART1_UARTIM_CTSIM_MASK         (0x00000001)
#define UART1_UARTIM_CTSIM_DIS          (0x00000000)
#define UART1_UARTIM_CTSIM_EN           (0x00000001)
//--------

//--------
#define UART1_UARTIM_R_RXIM_MASK       (0x00000010)
#define UART1_UARTIM_R_RXIM_BIT        (4)
#define UART1_UARTIM_R_RXIM_DIS        (0x00000000)
#define UART1_UARTIM_R_RXIM_EN         (0x00000010)

#define UART1_UARTIM_RXIM_MASK         (0x00000001)
#define UART1_UARTIM_RXIM_DIS          (0x00000000)
#define UART1_UARTIM_RXIM_EN           (0x00000001)
//--------

//--------
#define UART1_UARTIM_R_TXIM_MASK       (0x00000020)
#define UART1_UARTIM_R_TXIM_BIT        (5)
#define UART1_UARTIM_R_TXIM_DIS        (0x00000000)
#define UART1_UARTIM_R_TXIM_EN         (0x00000020)

#define UART1_UARTIM_TXIM_MASK         (0x00000001)
#define UART1_UARTIM_TXIM_DIS          (0x00000000)
#define UART1_UARTIM_TXIM_EN           (0x00000001)
//--------

//--------
#define UART1_UARTIM_R_RTIM_MASK       (0x00000040)
#define UART1_UARTIM_R_RTIM_BIT        (6)
#define UART1_UARTIM_R_RTIM_DIS        (0x00000000)
#define UART1_UARTIM_R_RTIM_EN         (0x00000040)

#define UART1_UARTIM_RTIM_MASK         (0x00000001)
#define UART1_UARTIM_RTIM_DIS          (0x00000000)
#define UART1_UARTIM_RTIM_EN           (0x00000001)
//--------

//--------
#define UART1_UARTIM_R_FEIM_MASK       (0x00000080)
#define UART1_UARTIM_R_FEIM_BIT        (7)
#define UART1_UARTIM_R_FEIM_DIS        (0x00000000)
#define UART1_UARTIM_R_FEIM_EN         (0x00000080)

#define UART1_UARTIM_FEIM_MASK         (0x00000001)
#define UART1_UARTIM_FEIM_DIS          (0x00000000)
#define UART1_UARTIM_FEIM_EN           (0x00000001)
//--------

//--------
#define UART1_UARTIM_R_PEIM_MASK       (0x00000100)
#define UART1_UARTIM_R_PEIM_BIT        (8)
#define UART1_UARTIM_R_PEIM_DIS        (0x00000000)
#define UART1_UARTIM_R_PEIM_EN         (0x00000100)

#define UART1_UARTIM_PEIM_MASK         (0x00000001)
#define UART1_UARTIM_PEIM_DIS          (0x00000000)
#define UART1_UARTIM_PEIM_EN           (0x00000001)
//--------

//--------
#define UART1_UARTIM_R_BEIM_MASK       (0x00000200)
#define UART1_UARTIM_R_BEIM_BIT        (9)
#define UART1_UARTIM_R_BEIM_DIS        (0x00000000)
#define UART1_UARTIM_R_BEIM_EN         (0x00000200)

#define UART1_UARTIM_BEIM_MASK         (0x00000001)
#define UART1_UARTIM_BEIM_DIS          (0x00000000)
#define UART1_UARTIM_BEIM_EN           (0x00000001)
//--------

//--------
#define UART1_UARTIM_R_OEIM_MASK       (0x00000400)
#define UART1_UARTIM_R_OEIM_BIT        (10)
#define UART1_UARTIM_R_OEIM_DIS        (0x00000000)
#define UART1_UARTIM_R_OEIM_EN         (0x00000400)

#define UART1_UARTIM_OEIM_MASK         (0x00000001)
#define UART1_UARTIM_OEIM_DIS          (0x00000000)
#define UART1_UARTIM_OEIM_EN           (0x00000001)
//--------

//--------
#define UART1_UARTIM_R_9BITIM_MASK       (0x00001000)
#define UART1_UARTIM_R_9BITIM_BIT        (12)
#define UART1_UARTIM_R_9BITIM_DIS        (0x00000000)
#define UART1_UARTIM_R_9BITIM_EN         (0x00001000)

#define UART1_UARTIM_9BITIM_MASK         (0x00000001)
#define UART1_UARTIM_9BITIM_DIS          (0x00000000)
#define UART1_UARTIM_9BITIM_EN           (0x00000001)
//--------

#define UART1_UARTIM_CTSIM_BB    (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTIM_OFFSET)*32)+(1*4))))
#define UART1_UARTIM_RXIM_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTIM_OFFSET)*32)+(4*4))))
#define UART1_UARTIM_TXIM_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTIM_OFFSET)*32)+(5*4))))
#define UART1_UARTIM_RTIM_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTIM_OFFSET)*32)+(6*4))))
#define UART1_UARTIM_FEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTIM_OFFSET)*32)+(7*4))))
#define UART1_UARTIM_PEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTIM_OFFSET)*32)+(8*4))))
#define UART1_UARTIM_BEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTIM_OFFSET)*32)+(9*4))))
#define UART1_UARTIM_OEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTIM_OFFSET)*32)+(10*4))))
#define UART1_UARTIM_9BITIM_BB   (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTIM_OFFSET)*32)+(12*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.11 UARTRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTRIS            (((UARTRIS_TypeDef*)(UART1_BASE + UART_UARTRIS_OFFSET )))
#define UART1_UARTRIS_R          (*((volatile uint32_t *)(UART1_BASE +UART_UARTRIS_OFFSET)))



//--------
#define UART1_UARTRIS_R_CTSRIS_MASK       (0x00000002)
#define UART1_UARTRIS_R_CTSRIS_BIT        (1)
#define UART1_UARTRIS_R_CTSRIS_NOACTIVE   (0x00000000)
#define UART1_UARTRIS_R_CTSRIS_ACTIVE     (0x00000002)

#define UART1_UARTRIS_CTSRIS_MASK         (0x00000001)
#define UART1_UARTRIS_CTSRIS_NOACTIVE     (0x00000000)
#define UART1_UARTRIS_CTSRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART1_UARTRIS_R_RXRIS_MASK       (0x00000010)
#define UART1_UARTRIS_R_RXRIS_BIT        (4)
#define UART1_UARTRIS_R_RXRIS_NOACTIVE   (0x00000000)
#define UART1_UARTRIS_R_RXRIS_ACTIVE     (0x00000010)

#define UART1_UARTRIS_RXRIS_MASK         (0x00000001)
#define UART1_UARTRIS_RXRIS_NOACTIVE     (0x00000000)
#define UART1_UARTRIS_RXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART1_UARTRIS_R_TXRIS_MASK       (0x00000020)
#define UART1_UARTRIS_R_TXRIS_BIT        (5)
#define UART1_UARTRIS_R_TXRIS_NOACTIVE   (0x00000000)
#define UART1_UARTRIS_R_TXRIS_ACTIVE     (0x00000020)

#define UART1_UARTRIS_TXRIS_MASK         (0x00000001)
#define UART1_UARTRIS_TXRIS_NOACTIVE     (0x00000000)
#define UART1_UARTRIS_TXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART1_UARTRIS_R_RTRIS_MASK       (0x00000040)
#define UART1_UARTRIS_R_RTRIS_BIT        (6)
#define UART1_UARTRIS_R_RTRIS_NOACTIVE   (0x00000000)
#define UART1_UARTRIS_R_RTRIS_ACTIVE     (0x00000040)

#define UART1_UARTRIS_RTRIS_MASK         (0x00000001)
#define UART1_UARTRIS_RTRIS_NOACTIVE     (0x00000000)
#define UART1_UARTRIS_RTRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART1_UARTRIS_R_FERIS_MASK       (0x00000080)
#define UART1_UARTRIS_R_FERIS_BIT        (7)
#define UART1_UARTRIS_R_FERIS_NOACTIVE   (0x00000000)
#define UART1_UARTRIS_R_FERIS_ACTIVE     (0x00000080)

#define UART1_UARTRIS_FERIS_MASK         (0x00000001)
#define UART1_UARTRIS_FERIS_NOACTIVE     (0x00000000)
#define UART1_UARTRIS_FERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART1_UARTRIS_R_PERIS_MASK       (0x00000100)
#define UART1_UARTRIS_R_PERIS_BIT        (8)
#define UART1_UARTRIS_R_PERIS_NOACTIVE   (0x00000000)
#define UART1_UARTRIS_R_PERIS_ACTIVE     (0x00000100)

#define UART1_UARTRIS_PERIS_MASK         (0x00000001)
#define UART1_UARTRIS_PERIS_NOACTIVE     (0x00000000)
#define UART1_UARTRIS_PERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART1_UARTRIS_R_BERIS_MASK       (0x00000200)
#define UART1_UARTRIS_R_BERIS_BIT        (9)
#define UART1_UARTRIS_R_BERIS_NOACTIVE   (0x00000000)
#define UART1_UARTRIS_R_BERIS_ACTIVE     (0x00000200)

#define UART1_UARTRIS_BERIS_MASK         (0x00000001)
#define UART1_UARTRIS_BERIS_NOACTIVE     (0x00000000)
#define UART1_UARTRIS_BERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART1_UARTRIS_R_OERIS_MASK       (0x00000400)
#define UART1_UARTRIS_R_OERIS_BIT        (10)
#define UART1_UARTRIS_R_OERIS_NOACTIVE   (0x00000000)
#define UART1_UARTRIS_R_OERIS_ACTIVE     (0x00000400)

#define UART1_UARTRIS_OERIS_MASK         (0x00000001)
#define UART1_UARTRIS_OERIS_NOACTIVE     (0x00000000)
#define UART1_UARTRIS_OERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART1_UARTRIS_R_9BITRIS_MASK       (0x00001000)
#define UART1_UARTRIS_R_9BITRIS_BIT        (12)
#define UART1_UARTRIS_R_9BITRIS_NOACTIVE   (0x00000000)
#define UART1_UARTRIS_R_9BITRIS_ACTIVE     (0x00001000)

#define UART1_UARTRIS_9BITRIS_MASK         (0x00000001)
#define UART1_UARTRIS_9BITRIS_NOACTIVE     (0x00000000)
#define UART1_UARTRIS_9BITRIS_ACTIVE       (0x00000001)
//--------

#define UART1_UARTRIS_CTSRIS_BB    (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTRIS_OFFSET)*32)+(1*4))))
#define UART1_UARTRIS_RXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTRIS_OFFSET)*32)+(4*4))))
#define UART1_UARTRIS_TXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTRIS_OFFSET)*32)+(5*4))))
#define UART1_UARTRIS_RTRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTRIS_OFFSET)*32)+(6*4))))
#define UART1_UARTRIS_FERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTRIS_OFFSET)*32)+(7*4))))
#define UART1_UARTRIS_PERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTRIS_OFFSET)*32)+(8*4))))
#define UART1_UARTRIS_BERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTRIS_OFFSET)*32)+(9*4))))
#define UART1_UARTRIS_OERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTRIS_OFFSET)*32)+(10*4))))
#define UART1_UARTRIS_9BITRIS_BB   (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTRIS_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.12 UARTMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTMIS            (((UARTMIS_TypeDef*)(UART1_BASE + UART_UARTMIS_OFFSET )))
#define UART1_UARTMIS_R          (*((volatile const uint32_t *)(UART1_BASE +UART_UARTMIS_OFFSET)))



//--------
#define UART1_UARTMIS_R_CTSMIS_MASK       (0x00000002)
#define UART1_UARTMIS_R_CTSMIS_BIT        (1)
#define UART1_UARTMIS_R_CTSMIS_NOOCCUR    (0x00000000)
#define UART1_UARTMIS_R_CTSMIS_OCCUR      (0x00000002)

#define UART1_UARTMIS_CTSMIS_MASK         (0x00000001)
#define UART1_UARTMIS_CTSMIS_NOOCCUR      (0x00000000)
#define UART1_UARTMIS_CTSMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART1_UARTMIS_R_RXMIS_MASK       (0x00000010)
#define UART1_UARTMIS_R_RXMIS_BIT        (4)
#define UART1_UARTMIS_R_RXMIS_NOOCCUR    (0x00000000)
#define UART1_UARTMIS_R_RXMIS_OCCUR      (0x00000010)

#define UART1_UARTMIS_RXMIS_MASK         (0x00000001)
#define UART1_UARTMIS_RXMIS_NOOCCUR      (0x00000000)
#define UART1_UARTMIS_RXMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART1_UARTMIS_R_TXMIS_MASK       (0x00000020)
#define UART1_UARTMIS_R_TXMIS_BIT        (5)
#define UART1_UARTMIS_R_TXMIS_NOOCCUR    (0x00000000)
#define UART1_UARTMIS_R_TXMIS_OCCUR      (0x00000020)

#define UART1_UARTMIS_TXMIS_MASK         (0x00000001)
#define UART1_UARTMIS_TXMIS_NOOCCUR      (0x00000000)
#define UART1_UARTMIS_TXMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART1_UARTMIS_R_RTMIS_MASK       (0x00000040)
#define UART1_UARTMIS_R_RTMIS_BIT        (6)
#define UART1_UARTMIS_R_RTMIS_NOOCCUR    (0x00000000)
#define UART1_UARTMIS_R_RTMIS_OCCUR      (0x00000040)

#define UART1_UARTMIS_RTMIS_MASK         (0x00000001)
#define UART1_UARTMIS_RTMIS_NOOCCUR      (0x00000000)
#define UART1_UARTMIS_RTMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART1_UARTMIS_R_FEMIS_MASK       (0x00000080)
#define UART1_UARTMIS_R_FEMIS_BIT        (7)
#define UART1_UARTMIS_R_FEMIS_NOOCCUR    (0x00000000)
#define UART1_UARTMIS_R_FEMIS_OCCUR      (0x00000080)

#define UART1_UARTMIS_FEMIS_MASK         (0x00000001)
#define UART1_UARTMIS_FEMIS_NOOCCUR      (0x00000000)
#define UART1_UARTMIS_FEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART1_UARTMIS_R_PEMIS_MASK       (0x00000100)
#define UART1_UARTMIS_R_PEMIS_BIT        (8)
#define UART1_UARTMIS_R_PEMIS_NOOCCUR    (0x00000000)
#define UART1_UARTMIS_R_PEMIS_OCCUR      (0x00000100)

#define UART1_UARTMIS_PEMIS_MASK         (0x00000001)
#define UART1_UARTMIS_PEMIS_NOOCCUR      (0x00000000)
#define UART1_UARTMIS_PEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART1_UARTMIS_R_BEMIS_MASK       (0x00000200)
#define UART1_UARTMIS_R_BEMIS_BIT        (9)
#define UART1_UARTMIS_R_BEMIS_NOOCCUR    (0x00000000)
#define UART1_UARTMIS_R_BEMIS_OCCUR      (0x00000200)

#define UART1_UARTMIS_BEMIS_MASK         (0x00000001)
#define UART1_UARTMIS_BEMIS_NOOCCUR      (0x00000000)
#define UART1_UARTMIS_BEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART1_UARTMIS_R_OEMIS_MASK       (0x00000400)
#define UART1_UARTMIS_R_OEMIS_BIT        (10)
#define UART1_UARTMIS_R_OEMIS_NOOCCUR    (0x00000000)
#define UART1_UARTMIS_R_OEMIS_OCCUR      (0x00000400)

#define UART1_UARTMIS_OEMIS_MASK         (0x00000001)
#define UART1_UARTMIS_OEMIS_NOOCCUR      (0x00000000)
#define UART1_UARTMIS_OEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART1_UARTMIS_R_9BITMIS_MASK       (0x00001000)
#define UART1_UARTMIS_R_9BITMIS_BIT        (12)
#define UART1_UARTMIS_R_9BITMIS_NOOCCUR    (0x00000000)
#define UART1_UARTMIS_R_9BITMIS_OCCUR      (0x00001000)

#define UART1_UARTMIS_9BITMIS_MASK         (0x00000001)
#define UART1_UARTMIS_9BITMIS_NOOCCUR      (0x00000000)
#define UART1_UARTMIS_9BITMIS_OCCUR        (0x00000001)
//--------


#define UART1_UARTMIS_CTSMIS_BB    (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTMIS_OFFSET)*32)+(1*4))))
#define UART1_UARTMIS_RXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTMIS_OFFSET)*32)+(4*4))))
#define UART1_UARTMIS_TXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTMIS_OFFSET)*32)+(5*4))))
#define UART1_UARTMIS_RTMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTMIS_OFFSET)*32)+(6*4))))
#define UART1_UARTMIS_FEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTMIS_OFFSET)*32)+(7*4))))
#define UART1_UARTMIS_PEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTMIS_OFFSET)*32)+(8*4))))
#define UART1_UARTMIS_BEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTMIS_OFFSET)*32)+(9*4))))
#define UART1_UARTMIS_OEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTMIS_OFFSET)*32)+(10*4))))
#define UART1_UARTMIS_9BITMIS_BB   (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTMIS_OFFSET)*32)+(12*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.13 UARTICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTICR            (((UARTICR_TypeDef*)(UART1_BASE + UART_UARTICR_OFFSET )))
#define UART1_UARTICR_R          (*((volatile uint32_t *)(UART1_BASE +UART_UARTICR_OFFSET)))


//--------
#define UART1_UARTICR_R_CTSIC_MASK       (0x00000002)
#define UART1_UARTICR_R_CTSIC_BIT        (1)
#define UART1_UARTICR_R_CTSIC_CLEAR      (0x00000002)

#define UART1_UARTICR_CTSIC_MASK         (0x00000001)
#define UART1_UARTICR_CTSIC_CLEAR        (0x00000001)
//--------

//--------
#define UART1_UARTICR_R_RXIC_MASK       (0x00000010)
#define UART1_UARTICR_R_RXIC_BIT        (4)
#define UART1_UARTICR_R_RXIC_CLEAR      (0x00000010)

#define UART1_UARTICR_RXIC_MASK         (0x00000001)
#define UART1_UARTICR_RXIC_CLEAR        (0x00000001)
//--------

//--------
#define UART1_UARTICR_R_TXIC_MASK       (0x00000020)
#define UART1_UARTICR_R_TXIC_BIT        (5)
#define UART1_UARTICR_R_TXIC_CLEAR      (0x00000020)

#define UART1_UARTICR_TXIC_MASK         (0x00000001)
#define UART1_UARTICR_TXIC_CLEAR        (0x00000001)
//--------

//--------
#define UART1_UARTICR_R_RTIC_MASK       (0x00000040)
#define UART1_UARTICR_R_RTIC_BIT        (6)
#define UART1_UARTICR_R_RTIC_CLEAR      (0x00000040)

#define UART1_UARTICR_RTIC_MASK         (0x00000001)
#define UART1_UARTICR_RTIC_CLEAR        (0x00000001)
//--------

//--------
#define UART1_UARTICR_R_FEIC_MASK       (0x00000080)
#define UART1_UARTICR_R_FEIC_BIT        (7)
#define UART1_UARTICR_R_FEIC_CLEAR      (0x00000080)

#define UART1_UARTICR_FEIC_MASK         (0x00000001)
#define UART1_UARTICR_FEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART1_UARTICR_R_PEIC_MASK       (0x00000100)
#define UART1_UARTICR_R_PEIC_BIT        (8)
#define UART1_UARTICR_R_PEIC_CLEAR      (0x00000100)

#define UART1_UARTICR_PEIC_MASK         (0x00000001)
#define UART1_UARTICR_PEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART1_UARTICR_R_BEIC_MASK       (0x00000200)
#define UART1_UARTICR_R_BEIC_BIT        (9)
#define UART1_UARTICR_R_BEIC_CLEAR      (0x00000200)

#define UART1_UARTICR_BEIC_MASK         (0x00000001)
#define UART1_UARTICR_BEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART1_UARTICR_R_OEIC_MASK       (0x00000400)
#define UART1_UARTICR_R_OEIC_BIT        (10)
#define UART1_UARTICR_R_OEIC_CLEAR      (0x00000400)

#define UART1_UARTICR_OEIC_MASK         (0x00000001)
#define UART1_UARTICR_OEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART1_UARTICR_R_9BITIC_MASK       (0x00001000)
#define UART1_UARTICR_R_9BITIC_BIT        (12)
#define UART1_UARTICR_R_9BITIC_CLEAR      (0x00001000)

#define UART1_UARTICR_9BITIC_MASK         (0x00000001)
#define UART1_UARTICR_9BITIC_CLEAR        (0x00000001)
//--------

#define UART1_UARTICR_CTSICR_BB    (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTICR_OFFSET)*32)+(1*4))))
#define UART1_UARTICR_RXICR_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTICR_OFFSET)*32)+(4*4))))
#define UART1_UARTICR_TXICR_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTICR_OFFSET)*32)+(5*4))))
#define UART1_UARTICR_RTICR_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTICR_OFFSET)*32)+(6*4))))
#define UART1_UARTICR_FEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTICR_OFFSET)*32)+(7*4))))
#define UART1_UARTICR_PEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTICR_OFFSET)*32)+(8*4))))
#define UART1_UARTICR_BEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTICR_OFFSET)*32)+(9*4))))
#define UART1_UARTICR_OEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTICR_OFFSET)*32)+(10*4))))
#define UART1_UARTICR_9BITICR_BB   (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTICR_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.14 UARTDMACTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTDMACTL            (((UARTDMACTL_TypeDef*)(UART1_BASE + UART_UARTDMACTL_OFFSET )))
#define UART1_UARTDMACTL_R          (*((volatile uint32_t *)(UART1_BASE +UART_UARTDMACTL_OFFSET)))

//--------
#define UART1_UARTDMACTL_R_RXDMAE_MASK       (0x00000001)
#define UART1_UARTDMACTL_R_RXDMAE_BIT        (0)
#define UART1_UARTDMACTL_R_RXDMAE_DIS        (0x00000000)
#define UART1_UARTDMACTL_R_RXDMAE_EN         (0x00008000)

#define UART1_UARTDMACTL_RXDMAE_MASK         (0x00000001)
#define UART1_UARTDMACTL_RXDMAE_DIS          (0x00000000)
#define UART1_UARTDMACTL_RXDMAE_EN           (0x00000001)
//--------

//--------
#define UART1_UARTDMACTL_R_TXDMAE_MASK       (0x00000002)
#define UART1_UARTDMACTL_R_TXDMAE_BIT        (1)
#define UART1_UARTDMACTL_R_TXDMAE_DIS        (0x00000000)
#define UART1_UARTDMACTL_R_TXDMAE_EN         (0x00000002)

#define UART1_UARTDMACTL_TXDMAE_MASK         (0x00000001)
#define UART1_UARTDMACTL_TXDMAE_DIS          (0x00000000)
#define UART1_UARTDMACTL_TXDMAE_EN           (0x00000001)
//--------

//--------
#define UART1_UARTDMACTL_R_DMAERR_MASK       (0x00000004)
#define UART1_UARTDMACTL_R_DMAERR_BIT        (2)
#define UART1_UARTDMACTL_R_DMAERR_NOERROR    (0x00000000)
#define UART1_UARTDMACTL_R_DMAERR_ERROR      (0x00000004)

#define UART1_UARTDMACTL_DMAERR_MASK         (0x00000001)
#define UART1_UARTDMACTL_DMAERR_NOERROR      (0x00000000)
#define UART1_UARTDMACTL_DMAERR_ERROR        (0x00000001)
//--------

#define UART1_UARTDMACTL_RXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(0*4))))
#define UART1_UARTDMACTL_TXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(1*4))))
#define UART1_UARTDMACTL_DMAERR_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(2*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.15 UART9BITADDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UART9BITADDR            (((UART9BITADDR_TypeDef*)(UART1_BASE + UART_UART9BITADDR_OFFSET )))
#define UART1_UART9BITADDR_R          (*((volatile uint32_t *)(UART1_BASE +UART_UART9BITADDR_OFFSET)))

//--------
#define UART1_UART9BITADDR_R_ADDR_MASK       (0x000000FF)
#define UART1_UART9BITADDR_R_ADDR_BIT        (0)

#define UART1_UART9BITADDR_ADDR_MASK         (0x000000FF)
//--------

//--------
#define UART1_UART9BITADDR_R_9BITEN_MASK       (0x00008000)
#define UART1_UART9BITADDR_R_9BITEN_BIT        (15)
#define UART1_UART9BITADDR_R_9BITEN_DIS        (0x00000000)
#define UART1_UART9BITADDR_R_9BITEN_EN         (0x00008000)

#define UART1_UART9BITADDR_9BITEN_MASK         (0x00000001)
#define UART1_UART9BITADDR_9BITEN_DIS          (0x00000000)
#define UART1_UART9BITADDR_9BITEN_EN           (0x00000001)
//--------

#define UART1_UART9BITADDR_9BITEN_BB     (*((volatile uint32_t *)(0x42000000+((UART1_OFFSET+UART_UART9BITADDR_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.16 UART9BITAMASK ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UART9BITAMASK            (((UART9BITAMASK_TypeDef*)(UART1_BASE + UART_UART9BITAMASK_OFFSET )))
#define UART1_UART9BITAMASK_R          (*((volatile uint32_t *)(UART1_BASE +UART_UART9BITAMASK_OFFSET)))

//--------
#define UART1_UART9BITAMASK_R_MASK_MASK       (0x000000FF)
#define UART1_UART9BITAMASK_R_MASK_BIT        (0)

#define UART1_UART9BITAMASK_MASK_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.17 UARTPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTPP            (((UARTPP_TypeDef*)(UART1_BASE + UART_UARTPP_OFFSET )))
#define UART1_UARTPP_R          (*((volatile const uint32_t *)(UART1_BASE +UART_UARTPP_OFFSET)))

//--------
#define UART1_UARTPP_R_SC_MASK       (0x00000001)
#define UART1_UARTPP_R_SC_BIT        (0)
#define UART1_UARTPP_R_SC_NOSUPPORT  (0x00000000)
#define UART1_UARTPP_R_SC_SUPPORT    (0x00000001)

#define UART1_UARTPP_SC_MASK         (0x00000001)
#define UART1_UARTPP_SC_NOSUPPORT    (0x00000000)
#define UART1_UARTPP_SC_SUPPORT      (0x00000001)
//--------

//--------
#define UART1_UARTPP_R_NB_MASK       (0x00000002)
#define UART1_UARTPP_R_NB_BIT        (1)
#define UART1_UARTPP_R_NB_NOSUPPORT  (0x00000000)
#define UART1_UARTPP_R_NB_SUPPORT    (0x00000002)

#define UART1_UARTPP_NB_MASK         (0x00000001)
#define UART1_UARTPP_NB_NOSUPPORT    (0x00000000)
#define UART1_UARTPP_NB_SUPPORT      (0x00000001)
//--------

#define UART1_UARTPP_SC_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTPP_OFFSET)*32)+(0*4))))
#define UART1_UARTPP_NB_BB     (*((volatile const uint32_t *)(0x42000000+((UART1_OFFSET+UART_UARTPP_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.18 UARTCC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTCC            (((UARTCC_TypeDef*)(UART1_BASE + UART_UARTCC_OFFSET )))
#define UART1_UARTCC_R          (*((volatile uint32_t *)(UART1_BASE +UART_UARTCC_OFFSET)))


//--------
#define UART1_UARTCC_R_CS_MASK       (0x0000000F)
#define UART1_UARTCC_R_CS_BIT        (0)
#define UART1_UARTCC_R_CS_SYSCLK     (0x00000000)
#define UART1_UARTCC_R_CS_PIOSC      (0x00000005)

#define UART1_UARTCC_CS_MASK         (0x0000000F)
#define UART1_UARTCC_CS_SYSCLK       (0x00000000)
#define UART1_UARTCC_CS_PIOSC        (0x00000005)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.19 UARTPeriphID4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTPeriphID4            (((UARTPeriphID4_TypeDef*)(UART1_BASE + UART_UARTPeriphID4_OFFSET )))
#define UART1_UARTPeriphID4_R          (*((volatile const uint32_t *)(UART1_BASE +UART_UARTPeriphID4_OFFSET)))

//--------
#define UART1_UARTPeriphID4_R_PID4_MASK       (0x000000FF)
#define UART1_UARTPeriphID4_R_PID4_BIT        (0)
#define UART1_UARTPeriphID4_R_PID4_DEFAULT    (0x00000000)

#define UART1_UARTPeriphID4_PID4_MASK         (0x000000FF)
#define UART1_UARTPeriphID4_PID4_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.20 UARTPeriphID5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTPeriphID5            (((UARTPeriphID5_TypeDef*)(UART1_BASE + UART_UARTPeriphID5_OFFSET )))
#define UART1_UARTPeriphID5_R          (*((volatile const uint32_t *)(UART1_BASE +UART_UARTPeriphID5_OFFSET)))

//--------
#define UART1_UARTPeriphID5_R_PID5_MASK       (0x000000FF)
#define UART1_UARTPeriphID5_R_PID5_BIT        (0)
#define UART1_UARTPeriphID5_R_PID5_DEFAULT    (0x00000000)

#define UART1_UARTPeriphID5_PID5_MASK         (0x000000FF)
#define UART1_UARTPeriphID5_PID5_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.21 UARTPeriphID6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTPeriphID6            (((UARTPeriphID6_TypeDef*)(UART1_BASE + UART_UARTPeriphID6_OFFSET )))
#define UART1_UARTPeriphID6_R          (*((volatile const uint32_t *)(UART1_BASE +UART_UARTPeriphID6_OFFSET)))



//--------
#define UART1_UARTPeriphID6_R_PID6_MASK       (0x000000FF)
#define UART1_UARTPeriphID6_R_PID6_BIT        (0)
#define UART1_UARTPeriphID6_R_PID6_DEFAULT    (0x00000000)

#define UART1_UARTPeriphID6_PID6_MASK         (0x000000FF)
#define UART1_UARTPeriphID6_PID6_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.22 UARTPeriphID7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTPeriphID7            (((UARTPeriphID7_TypeDef*)(UART1_BASE + UART_UARTPeriphID7_OFFSET )))
#define UART1_UARTPeriphID7_R          (*((volatile const uint32_t *)(UART1_BASE +UART_UARTPeriphID7_OFFSET)))



//--------
#define UART1_UARTPeriphID7_R_PID7_MASK       (0x000000FF)
#define UART1_UARTPeriphID7_R_PID7_BIT        (0)
#define UART1_UARTPeriphID7_R_PID7_DEFAULT    (0x00000000)

#define UART1_UARTPeriphID7_PID7_MASK         (0x000000FF)
#define UART1_UARTPeriphID7_PID7_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.23 UARTPeriphID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTPeriphID0            (((UARTPeriphID0_TypeDef*)(UART1_BASE + UART_UARTPeriphID0_OFFSET )))
#define UART1_UARTPeriphID0_R          (*((volatile const uint32_t *)(UART1_BASE +UART_UARTPeriphID0_OFFSET)))



//--------
#define UART1_UARTPeriphID0_R_PID0_MASK       (0x000000FF)
#define UART1_UARTPeriphID0_R_PID0_BIT        (0)
#define UART1_UARTPeriphID0_R_PID0_DEFAULT    (0x00000060)

#define UART1_UARTPeriphID0_PID0_MASK         (0x000000FF)
#define UART1_UARTPeriphID0_PID0_DEFAULT      (0x00000060)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.24 UARTPeriphID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTPeriphID1            (((UARTPeriphID1_TypeDef*)(UART1_BASE + UART_UARTPeriphID1_OFFSET )))
#define UART1_UARTPeriphID1_R          (*((volatile const uint32_t *)(UART1_BASE +UART_UARTPeriphID1_OFFSET)))



//--------
#define UART1_UARTPeriphID1_R_PID1_MASK       (0x000000FF)
#define UART1_UARTPeriphID1_R_PID1_BIT        (0)
#define UART1_UARTPeriphID1_R_PID1_DEFAULT    (0x00000000)

#define UART1_UARTPeriphID1_PID1_MASK         (0x000000FF)
#define UART1_UARTPeriphID1_PID1_DEFAULT      (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.25 UARTPeriphID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTPeriphID2            (((UARTPeriphID2_TypeDef*)(UART1_BASE + UART_UARTPeriphID2_OFFSET )))
#define UART1_UARTPeriphID2_R          (*((volatile const uint32_t *)(UART1_BASE +UART_UARTPeriphID2_OFFSET)))

//--------
#define UART1_UARTPeriphID2_R_PID2_MASK       (0x000000FF)
#define UART1_UARTPeriphID2_R_PID2_BIT        (0)
#define UART1_UARTPeriphID2_R_PID2_DEFAULT    (0x00000018)

#define UART1_UARTPeriphID2_PID2_MASK         (0x000000FF)
#define UART1_UARTPeriphID2_PID2_DEFAULT      (0x00000018)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.26 UARTPeriphID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTPeriphID3            (((UARTPeriphID3_TypeDef*)(UART1_BASE + UART_UARTPeriphID3_OFFSET )))
#define UART1_UARTPeriphID3_R          (*((volatile const uint32_t *)(UART1_BASE +UART_UARTPeriphID3_OFFSET)))

//--------
#define UART1_UARTPeriphID3_R_PID3_MASK       (0x000000FF)
#define UART1_UARTPeriphID3_R_PID3_BIT        (0)
#define UART1_UARTPeriphID3_R_PID3_DEFAULT    (0x00000001)

#define UART1_UARTPeriphID3_PID3_MASK         (0x000000FF)
#define UART1_UARTPeriphID3_PID3_DEFAULT      (0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.27 UARTPCellID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTPCellID0            (((UARTPCellID0_TypeDef*)(UART1_BASE + UART_UARTPCellID0_OFFSET )))
#define UART1_UARTPCellID0_R          (*((volatile const uint32_t *)(UART1_BASE +UART_UARTPCellID0_OFFSET)))

//--------
#define UART1_UARTPCellID0_R_CID0_MASK       (0x000000FF)
#define UART1_UARTPCellID0_R_CID0_BIT        (0)
#define UART1_UARTPCellID0_R_CID0_DEFAULT    (0x0000000D)

#define UART1_UARTPCellID0_CID0_MASK         (0x000000FF)
#define UART1_UARTPCellID0_CID0_DEFAULT      (0x0000000D)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.28 UARTPCellID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTPCellID1            (((UARTPCellID1_TypeDef*)(UART1_BASE + UART_UARTPCellID1_OFFSET )))
#define UART1_UARTPCellID1_R          (*((volatile const uint32_t *)(UART1_BASE +UART_UARTPCellID1_OFFSET)))

//--------
#define UART1_UARTPCellID1_R_CID1_MASK       (0x000000FF)
#define UART1_UARTPCellID1_R_CID1_BIT        (0)
#define UART1_UARTPCellID1_R_CID1_DEFAULT    (0x000000F0)

#define UART1_UARTPCellID1_CID1_MASK         (0x000000FF)
#define UART1_UARTPCellID1_CID1_DEFAULT      (0x000000F0)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.29 UARTPCellID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTPCellID2            (((UARTPCellID2_TypeDef*)(UART1_BASE + UART_UARTPCellID2_OFFSET )))
#define UART1_UARTPCellID2_R          (*((volatile const uint32_t *)(UART1_BASE +UART_UARTPCellID2_OFFSET)))

//--------
#define UART1_UARTPCellID2_R_CID2_MASK       (0x000000FF)
#define UART1_UARTPCellID2_R_CID2_BIT        (0)
#define UART1_UARTPCellID2_R_CID2_DEFAULT    (0x00000005)

#define UART1_UARTPCellID2_CID2_MASK         (0x000000FF)
#define UART1_UARTPCellID2_CID2_DEFAULT      (0x00000005)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.30 UARTPCellID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART1_UARTPCellID3            (((UARTPCellID3_TypeDef*)(UART1_BASE + UART_UARTPCellID3_OFFSET )))
#define UART1_UARTPCellID3_R          (*((volatile const uint32_t *)(UART1_BASE +UART_UARTPCellID3_OFFSET)))

//--------
#define UART1_UARTPCellID3_R_CID3_MASK       (0x000000FF)
#define UART1_UARTPCellID3_R_CID3_BIT        (0)
#define UART1_UARTPCellID3_R_CID3_DEFAULT    (0x000000B1)

#define UART1_UARTPCellID3_CID3_MASK         (0x000000FF)
#define UART1_UARTPCellID3_CID3_DEFAULT      (0x000000B1)
//--------


//todo UART2

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 UART2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.1 UARTDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTDR            (((UARTDR_TypeDef*)(UART2_BASE + UART_UARTDR_OFFSET )))
#define UART2_UARTDR_R          (*((volatile uint32_t *)(UART2_BASE +UART_UARTDR_OFFSET)))

//--------
#define UART2_UARTDR_R_DATA_MASK       (0x000000FF)
#define UART2_UARTDR_R_DATA_BIT        (0)

#define UART2_UARTDR_DATA_MASK         (0x000000FF)
//--------

//--------
#define UART2_UARTDR_R_FE_MASK       (0x00000100)
#define UART2_UARTDR_R_FE_BIT        (8)
#define UART2_UARTDR_R_FE_NOERROR    (0x00000000)
#define UART2_UARTDR_R_FE_ERROR      (0x00000100)

#define UART2_UARTDR_FE_MASK         (0x00000001)
#define UART2_UARTDR_FE_NOERROR      (0x00000000)
#define UART2_UARTDR_FE_ERROR        (0x00000001)
//--------

//--------
#define UART2_UARTDR_R_PE_MASK       (0x00000200)
#define UART2_UARTDR_R_PE_BIT        (9)
#define UART2_UARTDR_R_PE_NOERROR    (0x00000000)
#define UART2_UARTDR_R_PE_ERROR      (0x00000200)

#define UART2_UARTDR_PE_MASK         (0x00000001)
#define UART2_UARTDR_PE_NOERROR      (0x00000000)
#define UART2_UARTDR_PE_ERROR        (0x00000001)
//--------

//--------
#define UART2_UARTDR_R_BE_MASK       (0x00000400)
#define UART2_UARTDR_R_BE_BIT        (10)
#define UART2_UARTDR_R_BE_NOERROR    (0x00000000)
#define UART2_UARTDR_R_BE_ERROR      (0x00000400)

#define UART2_UARTDR_BE_MASK         (0x00000001)
#define UART2_UARTDR_BE_NOERROR      (0x00000000)
#define UART2_UARTDR_BE_ERROR        (0x00000001)
//--------

//--------
#define UART2_UARTDR_R_OE_MASK       (0x00000800)
#define UART2_UARTDR_R_OE_BIT        (11)
#define UART2_UARTDR_R_OE_NOERROR    (0x00000000)
#define UART2_UARTDR_R_OE_ERROR      (0x00000800)

#define UART2_UARTDR_OE_MASK         (0x00000001)
#define UART2_UARTDR_OE_NOERROR      (0x00000000)
#define UART2_UARTDR_OE_ERROR        (0x00000001)
//--------

#define UART2_UARTDR_FE_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTDR_OFFSET)*32)+(8*4))))
#define UART2_UARTDR_PE_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTDR_OFFSET)*32)+(9*4))))
#define UART2_UARTDR_BE_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTDR_OFFSET)*32)+(10*4))))
#define UART2_UARTDR_OE_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTDR_OFFSET)*32)+(11*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.2 UARTRSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTRSR            (((UARTRSR_TypeDef*)(UART2_BASE + UART_UARTRSR_OFFSET )))
#define UART2_UARTRSR_R          (*((volatile const uint32_t *)(UART2_BASE +UART_UARTRSR_OFFSET)))


//--------
#define UART2_UARTRSR_R_FE_MASK       (0x00000001)
#define UART2_UARTRSR_R_FE_BIT        (0)
#define UART2_UARTRSR_R_FE_NOERROR    (0x00000000)
#define UART2_UARTRSR_R_FE_ERROR      (0x00000001)

#define UART2_UARTRSR_FE_MASK         (0x00000001)
#define UART2_UARTRSR_FE_NOERROR      (0x00000000)
#define UART2_UARTRSR_FE_ERROR        (0x00000001)
//--------

//--------
#define UART2_UARTRSR_R_PE_MASK       (0x00000002)
#define UART2_UARTRSR_R_PE_BIT        (1)
#define UART2_UARTRSR_R_PE_NOERROR    (0x00000000)
#define UART2_UARTRSR_R_PE_ERROR      (0x00000002)

#define UART2_UARTRSR_PE_MASK         (0x00000001)
#define UART2_UARTRSR_PE_NOERROR      (0x00000000)
#define UART2_UARTRSR_PE_ERROR        (0x00000001)
//--------

//--------
#define UART2_UARTRSR_R_BE_MASK       (0x00000004)
#define UART2_UARTRSR_R_BE_BIT        (2)
#define UART2_UARTRSR_R_BE_NOERROR    (0x00000000)
#define UART2_UARTRSR_R_BE_ERROR      (0x00000004)

#define UART2_UARTRSR_BE_MASK         (0x00000001)
#define UART2_UARTRSR_BE_NOERROR      (0x00000000)
#define UART2_UARTRSR_BE_ERROR        (0x00000001)
//--------

//--------
#define UART2_UARTRSR_R_OE_MASK       (0x00000008)
#define UART2_UARTRSR_R_OE_BIT        (3)
#define UART2_UARTRSR_R_OE_NOERROR    (0x00000000)
#define UART2_UARTRSR_R_OE_ERROR      (0x00000008)

#define UART2_UARTRSR_OE_MASK         (0x00000001)
#define UART2_UARTRSR_OE_NOERROR      (0x00000000)
#define UART2_UARTRSR_OE_ERROR        (0x00000001)
//--------

#define UART2_UARTRSR_FE_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTRSR_OFFSET)*32)+(0*4))))
#define UART2_UARTRSR_PE_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTRSR_OFFSET)*32)+(1*4))))
#define UART2_UARTRSR_BE_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTRSR_OFFSET)*32)+(2*4))))
#define UART2_UARTRSR_OE_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTRSR_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.2 UARTECR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTECR            (((UARTECR_TypeDef*)(UART2_BASE + UART_UARTECR_OFFSET )))
#define UART2_UARTECR_R          (*((volatile uint32_t *)(UART2_BASE +UART_UARTECR_OFFSET)))

//--------
#define UART2_UARTECR_R_DATA_MASK       (0x000000FF)
#define UART2_UARTECR_R_DATA_BIT        (0)

#define UART2_UARTECR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.3 UARTFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTFR            (((UARTFR_TypeDef*)(UART2_BASE + UART_UARTFR_OFFSET )))
#define UART2_UARTFR_R          (*((volatile const uint32_t *)(UART2_BASE +UART_UARTFR_OFFSET)))

//--------
#define UART2_UARTFR_R_CTS_MASK       (0x00000001)
#define UART2_UARTFR_R_CTS_BIT        (0)
#define UART2_UARTFR_R_CTS_NOASSERT   (0x00000000)
#define UART2_UARTFR_R_CTS_ASSERT     (0x00000001)

#define UART2_UARTFR_CTS_MASK         (0x00000001)
#define UART2_UARTFR_CTS_NOASSERT     (0x00000000)
#define UART2_UARTFR_CTS_ASSERT       (0x00000001)
//--------

//--------
#define UART2_UARTFR_R_BUSY_MASK       (0x00000008)
#define UART2_UARTFR_R_BUSY_BIT        (3)
#define UART2_UARTFR_R_BUSY_NOBUSY     (0x00000000)
#define UART2_UARTFR_R_BUSY_BUSY       (0x00000008)

#define UART2_UARTFR_BUSY_MASK         (0x00000001)
#define UART2_UARTFR_BUSY_NOBUSY       (0x00000000)
#define UART2_UARTFR_BUSY_BUSY         (0x00000001)
//--------

//--------
#define UART2_UARTFR_R_RXFE_MASK       (0x00000010)
#define UART2_UARTFR_R_RXFE_BIT        (4)
#define UART2_UARTFR_R_RXFE_NOEMPTY    (0x00000000)
#define UART2_UARTFR_R_RXFE_EMPTY      (0x00000010)

#define UART2_UARTFR_RXFE_MASK         (0x00000001)
#define UART2_UARTFR_RXFE_NOEMPTY      (0x00000000)
#define UART2_UARTFR_RXFE_EMPTY        (0x00000001)
//--------

//--------
#define UART2_UARTFR_R_TXFF_MASK       (0x00000020)
#define UART2_UARTFR_R_TXFF_BIT        (5)
#define UART2_UARTFR_R_TXFF_NOFULL     (0x00000000)
#define UART2_UARTFR_R_TXFF_FULL       (0x00000020)

#define UART2_UARTFR_TXFF_MASK         (0x00000001)
#define UART2_UARTFR_TXFF_NOFULL       (0x00000000)
#define UART2_UARTFR_TXFF_FULL         (0x00000001)
//--------

//--------
#define UART2_UARTFR_R_RXFF_MASK       (0x00000040)
#define UART2_UARTFR_R_RXFF_BIT        (6)
#define UART2_UARTFR_R_RXFF_NOFULL     (0x00000000)
#define UART2_UARTFR_R_RXFF_FULL       (0x00000040)

#define UART2_UARTFR_RXFF_MASK         (0x00000001)
#define UART2_UARTFR_RXFF_NOFULL       (0x00000000)
#define UART2_UARTFR_RXFF_FULL         (0x00000001)
//--------

//--------
#define UART2_UARTFR_R_TXFE_MASK       (0x00000080)
#define UART2_UARTFR_R_TXFE_BIT        (7)
#define UART2_UARTFR_R_TXFE_NOEMPTY    (0x00000000)
#define UART2_UARTFR_R_TXFE_EMPTY      (0x00000080)

#define UART2_UARTFR_TXFE_MASK         (0x00000001)
#define UART2_UARTFR_TXFE_NOEMPTY      (0x00000000)
#define UART2_UARTFR_TXFE_EMPTY        (0x00000001)
//--------

#define UART2_UARTFR_CTS_BB      (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTFR_OFFSET)*32)+(0*4))))
#define UART2_UARTFR_BUSY_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTFR_OFFSET)*32)+(3*4))))
#define UART2_UARTFR_RXFE_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTFR_OFFSET)*32)+(4*4))))
#define UART2_UARTFR_TXFF_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTFR_OFFSET)*32)+(5*4))))
#define UART2_UARTFR_RXFF_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTFR_OFFSET)*32)+(6*4))))
#define UART2_UARTFR_TXFE_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTFR_OFFSET)*32)+(7*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.4 UARTILPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
#define UART2_UARTILPR            (((UARTILPR_TypeDef*)(UART2_BASE + UART_UARTILPR_OFFSET )))
#define UART2_UARTILPR_R          (*((volatile uint32_t *)(UART2_BASE +UART_UARTILPR_OFFSET)))

//--------
#define UART2_UARTILPR_R_ILPDVSR_MASK       (0x000000FF)
#define UART2_UARTILPR_R_ILPDVSR_BIT        (0)

#define UART2_UARTILPR_ILPDVSR_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.5 UARTIBRD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTIBRD            (((UARTIBRD_TypeDef*)(UART2_BASE + UART_UARTIBRD_OFFSET )))
#define UART2_UARTIBRD_R          (*((volatile uint32_t *)(UART2_BASE +UART_UARTIBRD_OFFSET)))

//--------
#define UART2_UARTIBRD_R_DIVINT_MASK       (0x0000FFFF)
#define UART2_UARTIBRD_R_DIVINT_BIT        (0)

#define UART2_UARTIBRD_DIVINT_MASK         (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.6 UARTFBRD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTFBRD            (((UARTFBRD_TypeDef*)(UART2_BASE + UART_UARTFBRD_OFFSET )))
#define UART2_UARTFBRD_R          (*((volatile uint32_t *)(UART2_BASE +UART_UARTFBRD_OFFSET)))

//--------
#define UART2_UARTFBRD_R_DIVFRAC_MASK       (0x0000003F)
#define UART2_UARTFBRD_R_DIVFRAC_BIT        (0)

#define UART2_UARTFBRD_DIVFRAC_MASK         (0x0000003F)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.7 UARTLCRH ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTLCRH            (((UARTLCRH_TypeDef*)(UART2_BASE + UART_UARTLCRH_OFFSET )))
#define UART2_UARTLCRH_R          (*((volatile uint32_t *)(UART2_BASE +UART_UARTLCRH_OFFSET)))

//--------
#define UART2_UARTLCRH_R_BRK_MASK       (0x00000001)
#define UART2_UARTLCRH_R_BRK_BIT        (0)
#define UART2_UARTLCRH_R_BRK_NORMAL     (0x00000000)
#define UART2_UARTLCRH_R_BRK_LOW        (0x00000001)

#define UART2_UARTLCRH_BRK_MASK         (0x00000001)
#define UART2_UARTLCRH_BRK_NORMAL       (0x00000000)
#define UART2_UARTLCRH_BRK_LOW          (0x00000001)
//--------

//--------
#define UART2_UARTLCRH_R_PEN_MASK       (0x00000002)
#define UART2_UARTLCRH_R_PEN_BIT        (1)
#define UART2_UARTLCRH_R_PEN_DIS        (0x00000000)
#define UART2_UARTLCRH_R_PEN_EN         (0x00000002)

#define UART2_UARTLCRH_PEN_MASK         (0x00000001)
#define UART2_UARTLCRH_PEN_DIS          (0x00000000)
#define UART2_UARTLCRH_PEN_EN           (0x00000001)
//--------

//--------
#define UART2_UARTLCRH_R_EPS_MASK       (0x00000004)
#define UART2_UARTLCRH_R_EPS_BIT        (2)
#define UART2_UARTLCRH_R_EPS_ODD        (0x00000000)
#define UART2_UARTLCRH_R_EPS_EVEN       (0x00000004)

#define UART2_UARTLCRH_EPS_MASK         (0x00000001)
#define UART2_UARTLCRH_EPS_ODD          (0x00000000)
#define UART2_UARTLCRH_EPS_EVEN         (0x00000001)
//--------

//--------
#define UART2_UARTLCRH_R_STP2_MASK       (0x00000008)
#define UART2_UARTLCRH_R_STP2_BIT        (3)
#define UART2_UARTLCRH_R_STP2_ONE        (0x00000000)
#define UART2_UARTLCRH_R_STP2_TWO        (0x00000008)

#define UART2_UARTLCRH_STP2_MASK         (0x00000001)
#define UART2_UARTLCRH_STP2_ONE          (0x00000000)
#define UART2_UARTLCRH_STP2_TWO          (0x00000001)
//--------

//--------
#define UART2_UARTLCRH_R_FEN_MASK       (0x00000010)
#define UART2_UARTLCRH_R_FEN_BIT        (4)
#define UART2_UARTLCRH_R_FEN_DIS        (0x00000000)
#define UART2_UARTLCRH_R_FEN_EN         (0x00000010)

#define UART2_UARTLCRH_FEN_MASK         (0x00000001)
#define UART2_UARTLCRH_FEN_DIS          (0x00000000)
#define UART2_UARTLCRH_FEN_EN           (0x00000001)
//--------

//--------
#define UART2_UARTLCRH_R_WLEN_MASK       (0x00000060)
#define UART2_UARTLCRH_R_WLEN_BIT        (5)
#define UART2_UARTLCRH_R_WLEN_5          (0x00000000)
#define UART2_UARTLCRH_R_WLEN_6          (0x00000020)
#define UART2_UARTLCRH_R_WLEN_7          (0x00000040)
#define UART2_UARTLCRH_R_WLEN_8          (0x00000060)

#define UART2_UARTLCRH_WLEN_MASK         (0x00000003)
#define UART2_UARTLCRH_WLEN_5            (0x00000000)
#define UART2_UARTLCRH_WLEN_6            (0x00000001)
#define UART2_UARTLCRH_WLEN_7            (0x00000002)
#define UART2_UARTLCRH_WLEN_8            (0x00000003)
//--------

//--------
#define UART2_UARTLCRH_R_SPS_MASK       (0x00000080)
#define UART2_UARTLCRH_R_SPS_BIT        (7)
#define UART2_UARTLCRH_R_SPS_LOW        (0x00000000)
#define UART2_UARTLCRH_R_SPS_HIGH       (0x00000080)

#define UART2_UARTLCRH_SPS_MASK         (0x00000001)
#define UART2_UARTLCRH_SPS_LOW          (0x00000000)
#define UART2_UARTLCRH_SPS_HIGH         (0x00000001)
//--------

#define UART2_UARTLCRH_BRK_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTLCRH_OFFSET)*32)+(0*4))))
#define UART2_UARTLCRH_PEN_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTLCRH_OFFSET)*32)+(1*4))))
#define UART2_UARTLCRH_EPS_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTLCRH_OFFSET)*32)+(2*4))))
#define UART2_UARTLCRH_STP2_BB    (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTLCRH_OFFSET)*32)+(3*4))))
#define UART2_UARTLCRH_FEN_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTLCRH_OFFSET)*32)+(4*4))))
#define UART2_UARTLCRH_SPS_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTLCRH_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.8 UARTCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTCTL            (((UARTCTL_TypeDef*)(UART2_BASE + UART_UARTCTL_OFFSET )))
#define UART2_UARTCTL_R          (*((volatile uint32_t *)(UART2_BASE +UART_UARTCTL_OFFSET)))

//--------
#define UART2_UARTCTL_R_UARTEN_MASK       (0x00000001)
#define UART2_UARTCTL_R_UARTEN_BIT        (0)
#define UART2_UARTCTL_R_UARTEN_DIS        (0x00000000)
#define UART2_UARTCTL_R_UARTEN_EN         (0x00000001)

#define UART2_UARTCTL_UARTEN_MASK         (0x00000001)
#define UART2_UARTCTL_UARTEN_DIS          (0x00000000)
#define UART2_UARTCTL_UARTEN_EN           (0x00000001)
//--------

//--------
#define UART2_UARTCTL_R_SIREN_MASK       (0x00000002)
#define UART2_UARTCTL_R_SIREN_BIT        (1)
#define UART2_UARTCTL_R_SIREN_DIS        (0x00000000)
#define UART2_UARTCTL_R_SIREN_EN         (0x00000002)

#define UART2_UARTCTL_SIREN_MASK         (0x00000001)
#define UART2_UARTCTL_SIREN_DIS          (0x00000000)
#define UART2_UARTCTL_SIREN_EN           (0x00000001)
//--------

//--------
#define UART2_UARTCTL_R_SIRLP_MASK       (0x00000004)
#define UART2_UARTCTL_R_SIRLP_BIT        (2)
#define UART2_UARTCTL_R_SIRLP_DIS        (0x00000000)
#define UART2_UARTCTL_R_SIRLP_EN         (0x00000004)

#define UART2_UARTCTL_SIRLP_MASK         (0x00000001)
#define UART2_UARTCTL_SIRLP_DIS          (0x00000000)
#define UART2_UARTCTL_SIRLP_EN           (0x00000001)
//--------

//--------
#define UART2_UARTCTL_R_SMART_MASK       (0x00000008)
#define UART2_UARTCTL_R_SMART_BIT        (3)
#define UART2_UARTCTL_R_SMART_DIS        (0x00000000)
#define UART2_UARTCTL_R_SMART_EN         (0x00000008)

#define UART2_UARTCTL_SMART_MASK         (0x00000001)
#define UART2_UARTCTL_SMART_DIS          (0x00000000)
#define UART2_UARTCTL_SMART_EN           (0x00000001)
//--------

//--------
#define UART2_UARTCTL_R_EOT_MASK       (0x00000010)
#define UART2_UARTCTL_R_EOT_BIT        (4)
#define UART2_UARTCTL_R_EOT_FIFO       (0x00000000)
#define UART2_UARTCTL_R_EOT_ALL        (0x00000010)

#define UART2_UARTCTL_EOT_MASK         (0x00000001)
#define UART2_UARTCTL_EOT_FIFO         (0x00000000)
#define UART2_UARTCTL_EOT_ALL          (0x00000001)
//--------

//--------
#define UART2_UARTCTL_R_HSE_MASK       (0x00000020)
#define UART2_UARTCTL_R_HSE_BIT        (5)
#define UART2_UARTCTL_R_HSE_DIS        (0x00000000)
#define UART2_UARTCTL_R_HSE_EN         (0x00000020)

#define UART2_UARTCTL_HSE_MASK         (0x00000001)
#define UART2_UARTCTL_HSE_DIS          (0x00000000)
#define UART2_UARTCTL_HSE_EN           (0x00000001)
//--------

//--------
#define UART2_UARTCTL_R_LBE_MASK       (0x00000080)
#define UART2_UARTCTL_R_LBE_BIT        (7)
#define UART2_UARTCTL_R_LBE_DIS        (0x00000000)
#define UART2_UARTCTL_R_LBE_EN         (0x00000080)

#define UART2_UARTCTL_LBE_MASK         (0x00000001)
#define UART2_UARTCTL_LBE_DIS          (0x00000000)
#define UART2_UARTCTL_LBE_EN           (0x00000001)
//--------

//--------
#define UART2_UARTCTL_R_TXE_MASK       (0x00000100)
#define UART2_UARTCTL_R_TXE_BIT        (8)
#define UART2_UARTCTL_R_TXE_DIS        (0x00000000)
#define UART2_UARTCTL_R_TXE_EN         (0x00000100)

#define UART2_UARTCTL_TXE_MASK         (0x00000001)
#define UART2_UARTCTL_TXE_DIS          (0x00000000)
#define UART2_UARTCTL_TXE_EN           (0x00000001)
//--------

//--------
#define UART2_UARTCTL_R_RXE_MASK       (0x00000200)
#define UART2_UARTCTL_R_RXE_BIT        (9)
#define UART2_UARTCTL_R_RXE_DIS        (0x00000000)
#define UART2_UARTCTL_R_RXE_EN         (0x00000200)

#define UART2_UARTCTL_RXE_MASK         (0x00000001)
#define UART2_UARTCTL_RXE_DIS          (0x00000000)
#define UART2_UARTCTL_RXE_EN           (0x00000001)
//--------

//--------
#define UART2_UARTCTL_R_RTS_MASK       (0x00000800)
#define UART2_UARTCTL_R_RTS_BIT        (11)
#define UART2_UARTCTL_R_RTS_LOW        (0x00000000)
#define UART2_UARTCTL_R_RTS_HIGH       (0x00000800)

#define UART2_UARTCTL_RTS_MASK         (0x00000001)
#define UART2_UARTCTL_RTS_LOW          (0x00000000)
#define UART2_UARTCTL_RTS_HIGH         (0x00000001)
//--------

//--------
#define UART2_UARTCTL_R_RTSEN_MASK       (0x00004000)
#define UART2_UARTCTL_R_RTSEN_BIT        (14)
#define UART2_UARTCTL_R_RTSEN_DIS        (0x00000000)
#define UART2_UARTCTL_R_RTSEN_EN         (0x00004000)

#define UART2_UARTCTL_RTSEN_MASK         (0x00000001)
#define UART2_UARTCTL_RTSEN_DIS          (0x00000000)
#define UART2_UARTCTL_RTSEN_EN           (0x00000001)
//--------

//--------
#define UART2_UARTCTL_R_CTSEN_MASK       (0x00008000)
#define UART2_UARTCTL_R_CTSEN_BIT        (15)
#define UART2_UARTCTL_R_CTSEN_DIS        (0x00000000)
#define UART2_UARTCTL_R_CTSEN_EN         (0x00008000)

#define UART2_UARTCTL_CTSEN_MASK         (0x00000001)
#define UART2_UARTCTL_CTSEN_DIS          (0x00000000)
#define UART2_UARTCTL_CTSEN_EN           (0x00000001)
//--------

#define UART2_UARTCTL_UARTEN_BB    (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTCTL_OFFSET)*32)+(0*4))))
#define UART2_UARTCTL_SIREN_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTCTL_OFFSET)*32)+(1*4))))
#define UART2_UARTCTL_SIRLP_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTCTL_OFFSET)*32)+(2*4))))
#define UART2_UARTCTL_SMART_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTCTL_OFFSET)*32)+(3*4))))
#define UART2_UARTCTL_EOT_BB       (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTCTL_OFFSET)*32)+(4*4))))
#define UART2_UARTCTL_HSE_BB       (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTCTL_OFFSET)*32)+(5*4))))
#define UART2_UARTCTL_LBE_BB       (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTCTL_OFFSET)*32)+(7*4))))
#define UART2_UARTCTL_TXE_BB       (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTCTL_OFFSET)*32)+(8*4))))
#define UART2_UARTCTL_RXE_BB       (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTCTL_OFFSET)*32)+(9*4))))
#define UART2_UARTCTL_RTS_BB       (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTCTL_OFFSET)*32)+(11*4))))
#define UART2_UARTCTL_RTSEN_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTCTL_OFFSET)*32)+(14*4))))
#define UART2_UARTCTL_CTSEN_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTCTL_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.9 UARTIFLS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTIFLS            (((UARTIFLS_TypeDef*)(UART2_BASE + UART_UARTIFLS_OFFSET )))
#define UART2_UARTIFLS_R          (*((volatile uint32_t *)(UART2_BASE +UART_UARTIFLS_OFFSET)))

//--------
#define UART2_UARTIFLS_R_TXIFLSEL_MASK       (0x00000007)
#define UART2_UARTIFLS_R_TXIFLSEL_BIT        (0)
#define UART2_UARTIFLS_R_TXIFLSEL_1_4        (0x00000000)
#define UART2_UARTIFLS_R_TXIFLSEL_1_2        (0x00000002)
#define UART2_UARTIFLS_R_TXIFLSEL_3_4        (0x00000003)
#define UART2_UARTIFLS_R_TXIFLSEL_7_8        (0x00000004)

#define UART2_UARTIFLS_TXIFLSEL_MASK         (0x00000007)
#define UART2_UARTIFLS_TXIFLSEL_1_4          (0x00000000)
#define UART2_UARTIFLS_TXIFLSEL_1_2          (0x00000002)
#define UART2_UARTIFLS_TXIFLSEL_3_4          (0x00000003)
#define UART2_UARTIFLS_TXIFLSEL_7_8          (0x00000004)
//--------

//--------
#define UART2_UARTIFLS_R_RXIFLSEL_MASK       (0x00000038)
#define UART2_UARTIFLS_R_RXIFLSEL_BIT        (0)
#define UART2_UARTIFLS_R_RXIFLSEL_1_4        (0x00000000)
#define UART2_UARTIFLS_R_RXIFLSEL_1_2        (0x00000010)
#define UART2_UARTIFLS_R_RXIFLSEL_3_4        (0x00000018)
#define UART2_UARTIFLS_R_RXIFLSEL_7_8        (0x00000020)

#define UART2_UARTIFLS_RXIFLSEL_MASK         (0x00000007)
#define UART2_UARTIFLS_RXIFLSEL_1_4          (0x00000000)
#define UART2_UARTIFLS_RXIFLSEL_1_2          (0x00000002)
#define UART2_UARTIFLS_RXIFLSEL_3_4          (0x00000003)
#define UART2_UARTIFLS_RXIFLSEL_7_8          (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.10 UARTIM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTIM            (((UARTIM_TypeDef*)(UART2_BASE + UART_UARTIM_OFFSET )))
#define UART2_UARTIM_R          (*((volatile uint32_t *)(UART2_BASE +UART_UARTIM_OFFSET)))

//--------
#define UART2_UARTIM_R_CTSIM_MASK       (0x00000002)
#define UART2_UARTIM_R_CTSIM_BIT        (1)
#define UART2_UARTIM_R_CTSIM_DIS        (0x00000000)
#define UART2_UARTIM_R_CTSIM_EN         (0x00000002)

#define UART2_UARTIM_CTSIM_MASK         (0x00000001)
#define UART2_UARTIM_CTSIM_DIS          (0x00000000)
#define UART2_UARTIM_CTSIM_EN           (0x00000001)
//--------

//--------
#define UART2_UARTIM_R_RXIM_MASK       (0x00000010)
#define UART2_UARTIM_R_RXIM_BIT        (4)
#define UART2_UARTIM_R_RXIM_DIS        (0x00000000)
#define UART2_UARTIM_R_RXIM_EN         (0x00000010)

#define UART2_UARTIM_RXIM_MASK         (0x00000001)
#define UART2_UARTIM_RXIM_DIS          (0x00000000)
#define UART2_UARTIM_RXIM_EN           (0x00000001)
//--------

//--------
#define UART2_UARTIM_R_TXIM_MASK       (0x00000020)
#define UART2_UARTIM_R_TXIM_BIT        (5)
#define UART2_UARTIM_R_TXIM_DIS        (0x00000000)
#define UART2_UARTIM_R_TXIM_EN         (0x00000020)

#define UART2_UARTIM_TXIM_MASK         (0x00000001)
#define UART2_UARTIM_TXIM_DIS          (0x00000000)
#define UART2_UARTIM_TXIM_EN           (0x00000001)
//--------

//--------
#define UART2_UARTIM_R_RTIM_MASK       (0x00000040)
#define UART2_UARTIM_R_RTIM_BIT        (6)
#define UART2_UARTIM_R_RTIM_DIS        (0x00000000)
#define UART2_UARTIM_R_RTIM_EN         (0x00000040)

#define UART2_UARTIM_RTIM_MASK         (0x00000001)
#define UART2_UARTIM_RTIM_DIS          (0x00000000)
#define UART2_UARTIM_RTIM_EN           (0x00000001)
//--------

//--------
#define UART2_UARTIM_R_FEIM_MASK       (0x00000080)
#define UART2_UARTIM_R_FEIM_BIT        (7)
#define UART2_UARTIM_R_FEIM_DIS        (0x00000000)
#define UART2_UARTIM_R_FEIM_EN         (0x00000080)

#define UART2_UARTIM_FEIM_MASK         (0x00000001)
#define UART2_UARTIM_FEIM_DIS          (0x00000000)
#define UART2_UARTIM_FEIM_EN           (0x00000001)
//--------

//--------
#define UART2_UARTIM_R_PEIM_MASK       (0x00000100)
#define UART2_UARTIM_R_PEIM_BIT        (8)
#define UART2_UARTIM_R_PEIM_DIS        (0x00000000)
#define UART2_UARTIM_R_PEIM_EN         (0x00000100)

#define UART2_UARTIM_PEIM_MASK         (0x00000001)
#define UART2_UARTIM_PEIM_DIS          (0x00000000)
#define UART2_UARTIM_PEIM_EN           (0x00000001)
//--------

//--------
#define UART2_UARTIM_R_BEIM_MASK       (0x00000200)
#define UART2_UARTIM_R_BEIM_BIT        (9)
#define UART2_UARTIM_R_BEIM_DIS        (0x00000000)
#define UART2_UARTIM_R_BEIM_EN         (0x00000200)

#define UART2_UARTIM_BEIM_MASK         (0x00000001)
#define UART2_UARTIM_BEIM_DIS          (0x00000000)
#define UART2_UARTIM_BEIM_EN           (0x00000001)
//--------

//--------
#define UART2_UARTIM_R_OEIM_MASK       (0x00000400)
#define UART2_UARTIM_R_OEIM_BIT        (10)
#define UART2_UARTIM_R_OEIM_DIS        (0x00000000)
#define UART2_UARTIM_R_OEIM_EN         (0x00000400)

#define UART2_UARTIM_OEIM_MASK         (0x00000001)
#define UART2_UARTIM_OEIM_DIS          (0x00000000)
#define UART2_UARTIM_OEIM_EN           (0x00000001)
//--------

//--------
#define UART2_UARTIM_R_9BITIM_MASK       (0x00001000)
#define UART2_UARTIM_R_9BITIM_BIT        (12)
#define UART2_UARTIM_R_9BITIM_DIS        (0x00000000)
#define UART2_UARTIM_R_9BITIM_EN         (0x00001000)

#define UART2_UARTIM_9BITIM_MASK         (0x00000001)
#define UART2_UARTIM_9BITIM_DIS          (0x00000000)
#define UART2_UARTIM_9BITIM_EN           (0x00000001)
//--------

#define UART2_UARTIM_CTSIM_BB    (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTIM_OFFSET)*32)+(1*4))))
#define UART2_UARTIM_RXIM_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTIM_OFFSET)*32)+(4*4))))
#define UART2_UARTIM_TXIM_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTIM_OFFSET)*32)+(5*4))))
#define UART2_UARTIM_RTIM_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTIM_OFFSET)*32)+(6*4))))
#define UART2_UARTIM_FEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTIM_OFFSET)*32)+(7*4))))
#define UART2_UARTIM_PEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTIM_OFFSET)*32)+(8*4))))
#define UART2_UARTIM_BEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTIM_OFFSET)*32)+(9*4))))
#define UART2_UARTIM_OEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTIM_OFFSET)*32)+(10*4))))
#define UART2_UARTIM_9BITIM_BB   (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTIM_OFFSET)*32)+(12*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.11 UARTRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTRIS            (((UARTRIS_TypeDef*)(UART2_BASE + UART_UARTRIS_OFFSET )))
#define UART2_UARTRIS_R          (*((volatile uint32_t *)(UART2_BASE +UART_UARTRIS_OFFSET)))



//--------
#define UART2_UARTRIS_R_CTSRIS_MASK       (0x00000002)
#define UART2_UARTRIS_R_CTSRIS_BIT        (1)
#define UART2_UARTRIS_R_CTSRIS_NOACTIVE   (0x00000000)
#define UART2_UARTRIS_R_CTSRIS_ACTIVE     (0x00000002)

#define UART2_UARTRIS_CTSRIS_MASK         (0x00000001)
#define UART2_UARTRIS_CTSRIS_NOACTIVE     (0x00000000)
#define UART2_UARTRIS_CTSRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART2_UARTRIS_R_RXRIS_MASK       (0x00000010)
#define UART2_UARTRIS_R_RXRIS_BIT        (4)
#define UART2_UARTRIS_R_RXRIS_NOACTIVE   (0x00000000)
#define UART2_UARTRIS_R_RXRIS_ACTIVE     (0x00000010)

#define UART2_UARTRIS_RXRIS_MASK         (0x00000001)
#define UART2_UARTRIS_RXRIS_NOACTIVE     (0x00000000)
#define UART2_UARTRIS_RXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART2_UARTRIS_R_TXRIS_MASK       (0x00000020)
#define UART2_UARTRIS_R_TXRIS_BIT        (5)
#define UART2_UARTRIS_R_TXRIS_NOACTIVE   (0x00000000)
#define UART2_UARTRIS_R_TXRIS_ACTIVE     (0x00000020)

#define UART2_UARTRIS_TXRIS_MASK         (0x00000001)
#define UART2_UARTRIS_TXRIS_NOACTIVE     (0x00000000)
#define UART2_UARTRIS_TXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART2_UARTRIS_R_RTRIS_MASK       (0x00000040)
#define UART2_UARTRIS_R_RTRIS_BIT        (6)
#define UART2_UARTRIS_R_RTRIS_NOACTIVE   (0x00000000)
#define UART2_UARTRIS_R_RTRIS_ACTIVE     (0x00000040)

#define UART2_UARTRIS_RTRIS_MASK         (0x00000001)
#define UART2_UARTRIS_RTRIS_NOACTIVE     (0x00000000)
#define UART2_UARTRIS_RTRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART2_UARTRIS_R_FERIS_MASK       (0x00000080)
#define UART2_UARTRIS_R_FERIS_BIT        (7)
#define UART2_UARTRIS_R_FERIS_NOACTIVE   (0x00000000)
#define UART2_UARTRIS_R_FERIS_ACTIVE     (0x00000080)

#define UART2_UARTRIS_FERIS_MASK         (0x00000001)
#define UART2_UARTRIS_FERIS_NOACTIVE     (0x00000000)
#define UART2_UARTRIS_FERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART2_UARTRIS_R_PERIS_MASK       (0x00000100)
#define UART2_UARTRIS_R_PERIS_BIT        (8)
#define UART2_UARTRIS_R_PERIS_NOACTIVE   (0x00000000)
#define UART2_UARTRIS_R_PERIS_ACTIVE     (0x00000100)

#define UART2_UARTRIS_PERIS_MASK         (0x00000001)
#define UART2_UARTRIS_PERIS_NOACTIVE     (0x00000000)
#define UART2_UARTRIS_PERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART2_UARTRIS_R_BERIS_MASK       (0x00000200)
#define UART2_UARTRIS_R_BERIS_BIT        (9)
#define UART2_UARTRIS_R_BERIS_NOACTIVE   (0x00000000)
#define UART2_UARTRIS_R_BERIS_ACTIVE     (0x00000200)

#define UART2_UARTRIS_BERIS_MASK         (0x00000001)
#define UART2_UARTRIS_BERIS_NOACTIVE     (0x00000000)
#define UART2_UARTRIS_BERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART2_UARTRIS_R_OERIS_MASK       (0x00000400)
#define UART2_UARTRIS_R_OERIS_BIT        (10)
#define UART2_UARTRIS_R_OERIS_NOACTIVE   (0x00000000)
#define UART2_UARTRIS_R_OERIS_ACTIVE     (0x00000400)

#define UART2_UARTRIS_OERIS_MASK         (0x00000001)
#define UART2_UARTRIS_OERIS_NOACTIVE     (0x00000000)
#define UART2_UARTRIS_OERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART2_UARTRIS_R_9BITRIS_MASK       (0x00001000)
#define UART2_UARTRIS_R_9BITRIS_BIT        (12)
#define UART2_UARTRIS_R_9BITRIS_NOACTIVE   (0x00000000)
#define UART2_UARTRIS_R_9BITRIS_ACTIVE     (0x00001000)

#define UART2_UARTRIS_9BITRIS_MASK         (0x00000001)
#define UART2_UARTRIS_9BITRIS_NOACTIVE     (0x00000000)
#define UART2_UARTRIS_9BITRIS_ACTIVE       (0x00000001)
//--------

#define UART2_UARTRIS_CTSRIS_BB    (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTRIS_OFFSET)*32)+(1*4))))
#define UART2_UARTRIS_RXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTRIS_OFFSET)*32)+(4*4))))
#define UART2_UARTRIS_TXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTRIS_OFFSET)*32)+(5*4))))
#define UART2_UARTRIS_RTRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTRIS_OFFSET)*32)+(6*4))))
#define UART2_UARTRIS_FERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTRIS_OFFSET)*32)+(7*4))))
#define UART2_UARTRIS_PERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTRIS_OFFSET)*32)+(8*4))))
#define UART2_UARTRIS_BERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTRIS_OFFSET)*32)+(9*4))))
#define UART2_UARTRIS_OERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTRIS_OFFSET)*32)+(10*4))))
#define UART2_UARTRIS_9BITRIS_BB   (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTRIS_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.12 UARTMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTMIS            (((UARTMIS_TypeDef*)(UART2_BASE + UART_UARTMIS_OFFSET )))
#define UART2_UARTMIS_R          (*((volatile const uint32_t *)(UART2_BASE +UART_UARTMIS_OFFSET)))



//--------
#define UART2_UARTMIS_R_CTSMIS_MASK       (0x00000002)
#define UART2_UARTMIS_R_CTSMIS_BIT        (1)
#define UART2_UARTMIS_R_CTSMIS_NOOCCUR    (0x00000000)
#define UART2_UARTMIS_R_CTSMIS_OCCUR      (0x00000002)

#define UART2_UARTMIS_CTSMIS_MASK         (0x00000001)
#define UART2_UARTMIS_CTSMIS_NOOCCUR      (0x00000000)
#define UART2_UARTMIS_CTSMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART2_UARTMIS_R_RXMIS_MASK       (0x00000010)
#define UART2_UARTMIS_R_RXMIS_BIT        (4)
#define UART2_UARTMIS_R_RXMIS_NOOCCUR    (0x00000000)
#define UART2_UARTMIS_R_RXMIS_OCCUR      (0x00000010)

#define UART2_UARTMIS_RXMIS_MASK         (0x00000001)
#define UART2_UARTMIS_RXMIS_NOOCCUR      (0x00000000)
#define UART2_UARTMIS_RXMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART2_UARTMIS_R_TXMIS_MASK       (0x00000020)
#define UART2_UARTMIS_R_TXMIS_BIT        (5)
#define UART2_UARTMIS_R_TXMIS_NOOCCUR    (0x00000000)
#define UART2_UARTMIS_R_TXMIS_OCCUR      (0x00000020)

#define UART2_UARTMIS_TXMIS_MASK         (0x00000001)
#define UART2_UARTMIS_TXMIS_NOOCCUR      (0x00000000)
#define UART2_UARTMIS_TXMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART2_UARTMIS_R_RTMIS_MASK       (0x00000040)
#define UART2_UARTMIS_R_RTMIS_BIT        (6)
#define UART2_UARTMIS_R_RTMIS_NOOCCUR    (0x00000000)
#define UART2_UARTMIS_R_RTMIS_OCCUR      (0x00000040)

#define UART2_UARTMIS_RTMIS_MASK         (0x00000001)
#define UART2_UARTMIS_RTMIS_NOOCCUR      (0x00000000)
#define UART2_UARTMIS_RTMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART2_UARTMIS_R_FEMIS_MASK       (0x00000080)
#define UART2_UARTMIS_R_FEMIS_BIT        (7)
#define UART2_UARTMIS_R_FEMIS_NOOCCUR    (0x00000000)
#define UART2_UARTMIS_R_FEMIS_OCCUR      (0x00000080)

#define UART2_UARTMIS_FEMIS_MASK         (0x00000001)
#define UART2_UARTMIS_FEMIS_NOOCCUR      (0x00000000)
#define UART2_UARTMIS_FEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART2_UARTMIS_R_PEMIS_MASK       (0x00000100)
#define UART2_UARTMIS_R_PEMIS_BIT        (8)
#define UART2_UARTMIS_R_PEMIS_NOOCCUR    (0x00000000)
#define UART2_UARTMIS_R_PEMIS_OCCUR      (0x00000100)

#define UART2_UARTMIS_PEMIS_MASK         (0x00000001)
#define UART2_UARTMIS_PEMIS_NOOCCUR      (0x00000000)
#define UART2_UARTMIS_PEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART2_UARTMIS_R_BEMIS_MASK       (0x00000200)
#define UART2_UARTMIS_R_BEMIS_BIT        (9)
#define UART2_UARTMIS_R_BEMIS_NOOCCUR    (0x00000000)
#define UART2_UARTMIS_R_BEMIS_OCCUR      (0x00000200)

#define UART2_UARTMIS_BEMIS_MASK         (0x00000001)
#define UART2_UARTMIS_BEMIS_NOOCCUR      (0x00000000)
#define UART2_UARTMIS_BEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART2_UARTMIS_R_OEMIS_MASK       (0x00000400)
#define UART2_UARTMIS_R_OEMIS_BIT        (10)
#define UART2_UARTMIS_R_OEMIS_NOOCCUR    (0x00000000)
#define UART2_UARTMIS_R_OEMIS_OCCUR      (0x00000400)

#define UART2_UARTMIS_OEMIS_MASK         (0x00000001)
#define UART2_UARTMIS_OEMIS_NOOCCUR      (0x00000000)
#define UART2_UARTMIS_OEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART2_UARTMIS_R_9BITMIS_MASK       (0x00001000)
#define UART2_UARTMIS_R_9BITMIS_BIT        (12)
#define UART2_UARTMIS_R_9BITMIS_NOOCCUR    (0x00000000)
#define UART2_UARTMIS_R_9BITMIS_OCCUR      (0x00001000)

#define UART2_UARTMIS_9BITMIS_MASK         (0x00000001)
#define UART2_UARTMIS_9BITMIS_NOOCCUR      (0x00000000)
#define UART2_UARTMIS_9BITMIS_OCCUR        (0x00000001)
//--------


#define UART2_UARTMIS_CTSMIS_BB    (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTMIS_OFFSET)*32)+(1*4))))
#define UART2_UARTMIS_RXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTMIS_OFFSET)*32)+(4*4))))
#define UART2_UARTMIS_TXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTMIS_OFFSET)*32)+(5*4))))
#define UART2_UARTMIS_RTMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTMIS_OFFSET)*32)+(6*4))))
#define UART2_UARTMIS_FEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTMIS_OFFSET)*32)+(7*4))))
#define UART2_UARTMIS_PEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTMIS_OFFSET)*32)+(8*4))))
#define UART2_UARTMIS_BEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTMIS_OFFSET)*32)+(9*4))))
#define UART2_UARTMIS_OEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTMIS_OFFSET)*32)+(10*4))))
#define UART2_UARTMIS_9BITMIS_BB   (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTMIS_OFFSET)*32)+(12*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.13 UARTICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTICR            (((UARTICR_TypeDef*)(UART2_BASE + UART_UARTICR_OFFSET )))
#define UART2_UARTICR_R          (*((volatile uint32_t *)(UART2_BASE +UART_UARTICR_OFFSET)))


//--------
#define UART2_UARTICR_R_CTSIC_MASK       (0x00000002)
#define UART2_UARTICR_R_CTSIC_BIT        (1)
#define UART2_UARTICR_R_CTSIC_CLEAR      (0x00000002)

#define UART2_UARTICR_CTSIC_MASK         (0x00000001)
#define UART2_UARTICR_CTSIC_CLEAR        (0x00000001)
//--------

//--------
#define UART2_UARTICR_R_RXIC_MASK       (0x00000010)
#define UART2_UARTICR_R_RXIC_BIT        (4)
#define UART2_UARTICR_R_RXIC_CLEAR      (0x00000010)

#define UART2_UARTICR_RXIC_MASK         (0x00000001)
#define UART2_UARTICR_RXIC_CLEAR        (0x00000001)
//--------

//--------
#define UART2_UARTICR_R_TXIC_MASK       (0x00000020)
#define UART2_UARTICR_R_TXIC_BIT        (5)
#define UART2_UARTICR_R_TXIC_CLEAR      (0x00000020)

#define UART2_UARTICR_TXIC_MASK         (0x00000001)
#define UART2_UARTICR_TXIC_CLEAR        (0x00000001)
//--------

//--------
#define UART2_UARTICR_R_RTIC_MASK       (0x00000040)
#define UART2_UARTICR_R_RTIC_BIT        (6)
#define UART2_UARTICR_R_RTIC_CLEAR      (0x00000040)

#define UART2_UARTICR_RTIC_MASK         (0x00000001)
#define UART2_UARTICR_RTIC_CLEAR        (0x00000001)
//--------

//--------
#define UART2_UARTICR_R_FEIC_MASK       (0x00000080)
#define UART2_UARTICR_R_FEIC_BIT        (7)
#define UART2_UARTICR_R_FEIC_CLEAR      (0x00000080)

#define UART2_UARTICR_FEIC_MASK         (0x00000001)
#define UART2_UARTICR_FEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART2_UARTICR_R_PEIC_MASK       (0x00000100)
#define UART2_UARTICR_R_PEIC_BIT        (8)
#define UART2_UARTICR_R_PEIC_CLEAR      (0x00000100)

#define UART2_UARTICR_PEIC_MASK         (0x00000001)
#define UART2_UARTICR_PEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART2_UARTICR_R_BEIC_MASK       (0x00000200)
#define UART2_UARTICR_R_BEIC_BIT        (9)
#define UART2_UARTICR_R_BEIC_CLEAR      (0x00000200)

#define UART2_UARTICR_BEIC_MASK         (0x00000001)
#define UART2_UARTICR_BEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART2_UARTICR_R_OEIC_MASK       (0x00000400)
#define UART2_UARTICR_R_OEIC_BIT        (10)
#define UART2_UARTICR_R_OEIC_CLEAR      (0x00000400)

#define UART2_UARTICR_OEIC_MASK         (0x00000001)
#define UART2_UARTICR_OEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART2_UARTICR_R_9BITIC_MASK       (0x00001000)
#define UART2_UARTICR_R_9BITIC_BIT        (12)
#define UART2_UARTICR_R_9BITIC_CLEAR      (0x00001000)

#define UART2_UARTICR_9BITIC_MASK         (0x00000001)
#define UART2_UARTICR_9BITIC_CLEAR        (0x00000001)
//--------

#define UART2_UARTICR_CTSICR_BB    (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTICR_OFFSET)*32)+(1*4))))
#define UART2_UARTICR_RXICR_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTICR_OFFSET)*32)+(4*4))))
#define UART2_UARTICR_TXICR_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTICR_OFFSET)*32)+(5*4))))
#define UART2_UARTICR_RTICR_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTICR_OFFSET)*32)+(6*4))))
#define UART2_UARTICR_FEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTICR_OFFSET)*32)+(7*4))))
#define UART2_UARTICR_PEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTICR_OFFSET)*32)+(8*4))))
#define UART2_UARTICR_BEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTICR_OFFSET)*32)+(9*4))))
#define UART2_UARTICR_OEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTICR_OFFSET)*32)+(10*4))))
#define UART2_UARTICR_9BITICR_BB   (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTICR_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.14 UARTDMACTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTDMACTL            (((UARTDMACTL_TypeDef*)(UART2_BASE + UART_UARTDMACTL_OFFSET )))
#define UART2_UARTDMACTL_R          (*((volatile uint32_t *)(UART2_BASE +UART_UARTDMACTL_OFFSET)))

//--------
#define UART2_UARTDMACTL_R_RXDMAE_MASK       (0x00000001)
#define UART2_UARTDMACTL_R_RXDMAE_BIT        (0)
#define UART2_UARTDMACTL_R_RXDMAE_DIS        (0x00000000)
#define UART2_UARTDMACTL_R_RXDMAE_EN         (0x00008000)

#define UART2_UARTDMACTL_RXDMAE_MASK         (0x00000001)
#define UART2_UARTDMACTL_RXDMAE_DIS          (0x00000000)
#define UART2_UARTDMACTL_RXDMAE_EN           (0x00000001)
//--------

//--------
#define UART2_UARTDMACTL_R_TXDMAE_MASK       (0x00000002)
#define UART2_UARTDMACTL_R_TXDMAE_BIT        (1)
#define UART2_UARTDMACTL_R_TXDMAE_DIS        (0x00000000)
#define UART2_UARTDMACTL_R_TXDMAE_EN         (0x00000002)

#define UART2_UARTDMACTL_TXDMAE_MASK         (0x00000001)
#define UART2_UARTDMACTL_TXDMAE_DIS          (0x00000000)
#define UART2_UARTDMACTL_TXDMAE_EN           (0x00000001)
//--------

//--------
#define UART2_UARTDMACTL_R_DMAERR_MASK       (0x00000004)
#define UART2_UARTDMACTL_R_DMAERR_BIT        (2)
#define UART2_UARTDMACTL_R_DMAERR_NOERROR    (0x00000000)
#define UART2_UARTDMACTL_R_DMAERR_ERROR      (0x00000004)

#define UART2_UARTDMACTL_DMAERR_MASK         (0x00000001)
#define UART2_UARTDMACTL_DMAERR_NOERROR      (0x00000000)
#define UART2_UARTDMACTL_DMAERR_ERROR        (0x00000001)
//--------

#define UART2_UARTDMACTL_RXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(0*4))))
#define UART2_UARTDMACTL_TXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(1*4))))
#define UART2_UARTDMACTL_DMAERR_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(2*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.15 UART9BITADDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UART9BITADDR            (((UART9BITADDR_TypeDef*)(UART2_BASE + UART_UART9BITADDR_OFFSET )))
#define UART2_UART9BITADDR_R          (*((volatile uint32_t *)(UART2_BASE +UART_UART9BITADDR_OFFSET)))

//--------
#define UART2_UART9BITADDR_R_ADDR_MASK       (0x000000FF)
#define UART2_UART9BITADDR_R_ADDR_BIT        (0)

#define UART2_UART9BITADDR_ADDR_MASK         (0x000000FF)
//--------

//--------
#define UART2_UART9BITADDR_R_9BITEN_MASK       (0x00008000)
#define UART2_UART9BITADDR_R_9BITEN_BIT        (15)
#define UART2_UART9BITADDR_R_9BITEN_DIS        (0x00000000)
#define UART2_UART9BITADDR_R_9BITEN_EN         (0x00008000)

#define UART2_UART9BITADDR_9BITEN_MASK         (0x00000001)
#define UART2_UART9BITADDR_9BITEN_DIS          (0x00000000)
#define UART2_UART9BITADDR_9BITEN_EN           (0x00000001)
//--------

#define UART2_UART9BITADDR_9BITEN_BB     (*((volatile uint32_t *)(0x42000000+((UART2_OFFSET+UART_UART9BITADDR_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.16 UART9BITAMASK ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UART9BITAMASK            (((UART9BITAMASK_TypeDef*)(UART2_BASE + UART_UART9BITAMASK_OFFSET )))
#define UART2_UART9BITAMASK_R          (*((volatile uint32_t *)(UART2_BASE +UART_UART9BITAMASK_OFFSET)))

//--------
#define UART2_UART9BITAMASK_R_MASK_MASK       (0x000000FF)
#define UART2_UART9BITAMASK_R_MASK_BIT        (0)

#define UART2_UART9BITAMASK_MASK_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.17 UARTPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTPP            (((UARTPP_TypeDef*)(UART2_BASE + UART_UARTPP_OFFSET )))
#define UART2_UARTPP_R          (*((volatile const uint32_t *)(UART2_BASE +UART_UARTPP_OFFSET)))

//--------
#define UART2_UARTPP_R_SC_MASK       (0x00000001)
#define UART2_UARTPP_R_SC_BIT        (0)
#define UART2_UARTPP_R_SC_NOSUPPORT  (0x00000000)
#define UART2_UARTPP_R_SC_SUPPORT    (0x00000001)

#define UART2_UARTPP_SC_MASK         (0x00000001)
#define UART2_UARTPP_SC_NOSUPPORT    (0x00000000)
#define UART2_UARTPP_SC_SUPPORT      (0x00000001)
//--------

//--------
#define UART2_UARTPP_R_NB_MASK       (0x00000002)
#define UART2_UARTPP_R_NB_BIT        (1)
#define UART2_UARTPP_R_NB_NOSUPPORT  (0x00000000)
#define UART2_UARTPP_R_NB_SUPPORT    (0x00000002)

#define UART2_UARTPP_NB_MASK         (0x00000001)
#define UART2_UARTPP_NB_NOSUPPORT    (0x00000000)
#define UART2_UARTPP_NB_SUPPORT      (0x00000001)
//--------

#define UART2_UARTPP_SC_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTPP_OFFSET)*32)+(0*4))))
#define UART2_UARTPP_NB_BB     (*((volatile const uint32_t *)(0x42000000+((UART2_OFFSET+UART_UARTPP_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.18 UARTCC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTCC            (((UARTCC_TypeDef*)(UART2_BASE + UART_UARTCC_OFFSET )))
#define UART2_UARTCC_R          (*((volatile uint32_t *)(UART2_BASE +UART_UARTCC_OFFSET)))


//--------
#define UART2_UARTCC_R_CS_MASK       (0x0000000F)
#define UART2_UARTCC_R_CS_BIT        (0)
#define UART2_UARTCC_R_CS_SYSCLK     (0x00000000)
#define UART2_UARTCC_R_CS_PIOSC      (0x00000005)

#define UART2_UARTCC_CS_MASK         (0x0000000F)
#define UART2_UARTCC_CS_SYSCLK       (0x00000000)
#define UART2_UARTCC_CS_PIOSC        (0x00000005)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.19 UARTPeriphID4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTPeriphID4            (((UARTPeriphID4_TypeDef*)(UART2_BASE + UART_UARTPeriphID4_OFFSET )))
#define UART2_UARTPeriphID4_R          (*((volatile const uint32_t *)(UART2_BASE +UART_UARTPeriphID4_OFFSET)))

//--------
#define UART2_UARTPeriphID4_R_PID4_MASK       (0x000000FF)
#define UART2_UARTPeriphID4_R_PID4_BIT        (0)
#define UART2_UARTPeriphID4_R_PID4_DEFAULT    (0x00000000)

#define UART2_UARTPeriphID4_PID4_MASK         (0x000000FF)
#define UART2_UARTPeriphID4_PID4_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.20 UARTPeriphID5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTPeriphID5            (((UARTPeriphID5_TypeDef*)(UART2_BASE + UART_UARTPeriphID5_OFFSET )))
#define UART2_UARTPeriphID5_R          (*((volatile const uint32_t *)(UART2_BASE +UART_UARTPeriphID5_OFFSET)))

//--------
#define UART2_UARTPeriphID5_R_PID5_MASK       (0x000000FF)
#define UART2_UARTPeriphID5_R_PID5_BIT        (0)
#define UART2_UARTPeriphID5_R_PID5_DEFAULT    (0x00000000)

#define UART2_UARTPeriphID5_PID5_MASK         (0x000000FF)
#define UART2_UARTPeriphID5_PID5_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.21 UARTPeriphID6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTPeriphID6            (((UARTPeriphID6_TypeDef*)(UART2_BASE + UART_UARTPeriphID6_OFFSET )))
#define UART2_UARTPeriphID6_R          (*((volatile const uint32_t *)(UART2_BASE +UART_UARTPeriphID6_OFFSET)))



//--------
#define UART2_UARTPeriphID6_R_PID6_MASK       (0x000000FF)
#define UART2_UARTPeriphID6_R_PID6_BIT        (0)
#define UART2_UARTPeriphID6_R_PID6_DEFAULT    (0x00000000)

#define UART2_UARTPeriphID6_PID6_MASK         (0x000000FF)
#define UART2_UARTPeriphID6_PID6_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.22 UARTPeriphID7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTPeriphID7            (((UARTPeriphID7_TypeDef*)(UART2_BASE + UART_UARTPeriphID7_OFFSET )))
#define UART2_UARTPeriphID7_R          (*((volatile const uint32_t *)(UART2_BASE +UART_UARTPeriphID7_OFFSET)))



//--------
#define UART2_UARTPeriphID7_R_PID7_MASK       (0x000000FF)
#define UART2_UARTPeriphID7_R_PID7_BIT        (0)
#define UART2_UARTPeriphID7_R_PID7_DEFAULT    (0x00000000)

#define UART2_UARTPeriphID7_PID7_MASK         (0x000000FF)
#define UART2_UARTPeriphID7_PID7_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.23 UARTPeriphID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTPeriphID0            (((UARTPeriphID0_TypeDef*)(UART2_BASE + UART_UARTPeriphID0_OFFSET )))
#define UART2_UARTPeriphID0_R          (*((volatile const uint32_t *)(UART2_BASE +UART_UARTPeriphID0_OFFSET)))



//--------
#define UART2_UARTPeriphID0_R_PID0_MASK       (0x000000FF)
#define UART2_UARTPeriphID0_R_PID0_BIT        (0)
#define UART2_UARTPeriphID0_R_PID0_DEFAULT    (0x00000060)

#define UART2_UARTPeriphID0_PID0_MASK         (0x000000FF)
#define UART2_UARTPeriphID0_PID0_DEFAULT      (0x00000060)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.24 UARTPeriphID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTPeriphID1            (((UARTPeriphID1_TypeDef*)(UART2_BASE + UART_UARTPeriphID1_OFFSET )))
#define UART2_UARTPeriphID1_R          (*((volatile const uint32_t *)(UART2_BASE +UART_UARTPeriphID1_OFFSET)))



//--------
#define UART2_UARTPeriphID1_R_PID1_MASK       (0x000000FF)
#define UART2_UARTPeriphID1_R_PID1_BIT        (0)
#define UART2_UARTPeriphID1_R_PID1_DEFAULT    (0x00000000)

#define UART2_UARTPeriphID1_PID1_MASK         (0x000000FF)
#define UART2_UARTPeriphID1_PID1_DEFAULT      (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.25 UARTPeriphID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTPeriphID2            (((UARTPeriphID2_TypeDef*)(UART2_BASE + UART_UARTPeriphID2_OFFSET )))
#define UART2_UARTPeriphID2_R          (*((volatile const uint32_t *)(UART2_BASE +UART_UARTPeriphID2_OFFSET)))

//--------
#define UART2_UARTPeriphID2_R_PID2_MASK       (0x000000FF)
#define UART2_UARTPeriphID2_R_PID2_BIT        (0)
#define UART2_UARTPeriphID2_R_PID2_DEFAULT    (0x00000018)

#define UART2_UARTPeriphID2_PID2_MASK         (0x000000FF)
#define UART2_UARTPeriphID2_PID2_DEFAULT      (0x00000018)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.26 UARTPeriphID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTPeriphID3            (((UARTPeriphID3_TypeDef*)(UART2_BASE + UART_UARTPeriphID3_OFFSET )))
#define UART2_UARTPeriphID3_R          (*((volatile const uint32_t *)(UART2_BASE +UART_UARTPeriphID3_OFFSET)))

//--------
#define UART2_UARTPeriphID3_R_PID3_MASK       (0x000000FF)
#define UART2_UARTPeriphID3_R_PID3_BIT        (0)
#define UART2_UARTPeriphID3_R_PID3_DEFAULT    (0x00000001)

#define UART2_UARTPeriphID3_PID3_MASK         (0x000000FF)
#define UART2_UARTPeriphID3_PID3_DEFAULT      (0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.27 UARTPCellID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTPCellID0            (((UARTPCellID0_TypeDef*)(UART2_BASE + UART_UARTPCellID0_OFFSET )))
#define UART2_UARTPCellID0_R          (*((volatile const uint32_t *)(UART2_BASE +UART_UARTPCellID0_OFFSET)))

//--------
#define UART2_UARTPCellID0_R_CID0_MASK       (0x000000FF)
#define UART2_UARTPCellID0_R_CID0_BIT        (0)
#define UART2_UARTPCellID0_R_CID0_DEFAULT    (0x0000000D)

#define UART2_UARTPCellID0_CID0_MASK         (0x000000FF)
#define UART2_UARTPCellID0_CID0_DEFAULT      (0x0000000D)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.28 UARTPCellID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTPCellID1            (((UARTPCellID1_TypeDef*)(UART2_BASE + UART_UARTPCellID1_OFFSET )))
#define UART2_UARTPCellID1_R          (*((volatile const uint32_t *)(UART2_BASE +UART_UARTPCellID1_OFFSET)))

//--------
#define UART2_UARTPCellID1_R_CID1_MASK       (0x000000FF)
#define UART2_UARTPCellID1_R_CID1_BIT        (0)
#define UART2_UARTPCellID1_R_CID1_DEFAULT    (0x000000F0)

#define UART2_UARTPCellID1_CID1_MASK         (0x000000FF)
#define UART2_UARTPCellID1_CID1_DEFAULT      (0x000000F0)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.29 UARTPCellID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTPCellID2            (((UARTPCellID2_TypeDef*)(UART2_BASE + UART_UARTPCellID2_OFFSET )))
#define UART2_UARTPCellID2_R          (*((volatile const uint32_t *)(UART2_BASE +UART_UARTPCellID2_OFFSET)))

//--------
#define UART2_UARTPCellID2_R_CID2_MASK       (0x000000FF)
#define UART2_UARTPCellID2_R_CID2_BIT        (0)
#define UART2_UARTPCellID2_R_CID2_DEFAULT    (0x00000005)

#define UART2_UARTPCellID2_CID2_MASK         (0x000000FF)
#define UART2_UARTPCellID2_CID2_DEFAULT      (0x00000005)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.30 UARTPCellID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART2_UARTPCellID3            (((UARTPCellID3_TypeDef*)(UART2_BASE + UART_UARTPCellID3_OFFSET )))
#define UART2_UARTPCellID3_R          (*((volatile const uint32_t *)(UART2_BASE +UART_UARTPCellID3_OFFSET)))

//--------
#define UART2_UARTPCellID3_R_CID3_MASK       (0x000000FF)
#define UART2_UARTPCellID3_R_CID3_BIT        (0)
#define UART2_UARTPCellID3_R_CID3_DEFAULT    (0x000000B1)

#define UART2_UARTPCellID3_CID3_MASK         (0x000000FF)
#define UART2_UARTPCellID3_CID3_DEFAULT      (0x000000B1)
//--------


//todo UART3

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 UART3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.1 UARTDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTDR            (((UARTDR_TypeDef*)(UART3_BASE + UART_UARTDR_OFFSET )))
#define UART3_UARTDR_R          (*((volatile uint32_t *)(UART3_BASE +UART_UARTDR_OFFSET)))

//--------
#define UART3_UARTDR_R_DATA_MASK       (0x000000FF)
#define UART3_UARTDR_R_DATA_BIT        (0)

#define UART3_UARTDR_DATA_MASK         (0x000000FF)
//--------

//--------
#define UART3_UARTDR_R_FE_MASK       (0x00000100)
#define UART3_UARTDR_R_FE_BIT        (8)
#define UART3_UARTDR_R_FE_NOERROR    (0x00000000)
#define UART3_UARTDR_R_FE_ERROR      (0x00000100)

#define UART3_UARTDR_FE_MASK         (0x00000001)
#define UART3_UARTDR_FE_NOERROR      (0x00000000)
#define UART3_UARTDR_FE_ERROR        (0x00000001)
//--------

//--------
#define UART3_UARTDR_R_PE_MASK       (0x00000200)
#define UART3_UARTDR_R_PE_BIT        (9)
#define UART3_UARTDR_R_PE_NOERROR    (0x00000000)
#define UART3_UARTDR_R_PE_ERROR      (0x00000200)

#define UART3_UARTDR_PE_MASK         (0x00000001)
#define UART3_UARTDR_PE_NOERROR      (0x00000000)
#define UART3_UARTDR_PE_ERROR        (0x00000001)
//--------

//--------
#define UART3_UARTDR_R_BE_MASK       (0x00000400)
#define UART3_UARTDR_R_BE_BIT        (10)
#define UART3_UARTDR_R_BE_NOERROR    (0x00000000)
#define UART3_UARTDR_R_BE_ERROR      (0x00000400)

#define UART3_UARTDR_BE_MASK         (0x00000001)
#define UART3_UARTDR_BE_NOERROR      (0x00000000)
#define UART3_UARTDR_BE_ERROR        (0x00000001)
//--------

//--------
#define UART3_UARTDR_R_OE_MASK       (0x00000800)
#define UART3_UARTDR_R_OE_BIT        (11)
#define UART3_UARTDR_R_OE_NOERROR    (0x00000000)
#define UART3_UARTDR_R_OE_ERROR      (0x00000800)

#define UART3_UARTDR_OE_MASK         (0x00000001)
#define UART3_UARTDR_OE_NOERROR      (0x00000000)
#define UART3_UARTDR_OE_ERROR        (0x00000001)
//--------

#define UART3_UARTDR_FE_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTDR_OFFSET)*32)+(8*4))))
#define UART3_UARTDR_PE_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTDR_OFFSET)*32)+(9*4))))
#define UART3_UARTDR_BE_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTDR_OFFSET)*32)+(10*4))))
#define UART3_UARTDR_OE_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTDR_OFFSET)*32)+(11*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.2 UARTRSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTRSR            (((UARTRSR_TypeDef*)(UART3_BASE + UART_UARTRSR_OFFSET )))
#define UART3_UARTRSR_R          (*((volatile const uint32_t *)(UART3_BASE +UART_UARTRSR_OFFSET)))


//--------
#define UART3_UARTRSR_R_FE_MASK       (0x00000001)
#define UART3_UARTRSR_R_FE_BIT        (0)
#define UART3_UARTRSR_R_FE_NOERROR    (0x00000000)
#define UART3_UARTRSR_R_FE_ERROR      (0x00000001)

#define UART3_UARTRSR_FE_MASK         (0x00000001)
#define UART3_UARTRSR_FE_NOERROR      (0x00000000)
#define UART3_UARTRSR_FE_ERROR        (0x00000001)
//--------

//--------
#define UART3_UARTRSR_R_PE_MASK       (0x00000002)
#define UART3_UARTRSR_R_PE_BIT        (1)
#define UART3_UARTRSR_R_PE_NOERROR    (0x00000000)
#define UART3_UARTRSR_R_PE_ERROR      (0x00000002)

#define UART3_UARTRSR_PE_MASK         (0x00000001)
#define UART3_UARTRSR_PE_NOERROR      (0x00000000)
#define UART3_UARTRSR_PE_ERROR        (0x00000001)
//--------

//--------
#define UART3_UARTRSR_R_BE_MASK       (0x00000004)
#define UART3_UARTRSR_R_BE_BIT        (2)
#define UART3_UARTRSR_R_BE_NOERROR    (0x00000000)
#define UART3_UARTRSR_R_BE_ERROR      (0x00000004)

#define UART3_UARTRSR_BE_MASK         (0x00000001)
#define UART3_UARTRSR_BE_NOERROR      (0x00000000)
#define UART3_UARTRSR_BE_ERROR        (0x00000001)
//--------

//--------
#define UART3_UARTRSR_R_OE_MASK       (0x00000008)
#define UART3_UARTRSR_R_OE_BIT        (3)
#define UART3_UARTRSR_R_OE_NOERROR    (0x00000000)
#define UART3_UARTRSR_R_OE_ERROR      (0x00000008)

#define UART3_UARTRSR_OE_MASK         (0x00000001)
#define UART3_UARTRSR_OE_NOERROR      (0x00000000)
#define UART3_UARTRSR_OE_ERROR        (0x00000001)
//--------

#define UART3_UARTRSR_FE_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTRSR_OFFSET)*32)+(0*4))))
#define UART3_UARTRSR_PE_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTRSR_OFFSET)*32)+(1*4))))
#define UART3_UARTRSR_BE_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTRSR_OFFSET)*32)+(2*4))))
#define UART3_UARTRSR_OE_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTRSR_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.2 UARTECR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTECR            (((UARTECR_TypeDef*)(UART3_BASE + UART_UARTECR_OFFSET )))
#define UART3_UARTECR_R          (*((volatile uint32_t *)(UART3_BASE +UART_UARTECR_OFFSET)))

//--------
#define UART3_UARTECR_R_DATA_MASK       (0x000000FF)
#define UART3_UARTECR_R_DATA_BIT        (0)

#define UART3_UARTECR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.3 UARTFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTFR            (((UARTFR_TypeDef*)(UART3_BASE + UART_UARTFR_OFFSET )))
#define UART3_UARTFR_R          (*((volatile const uint32_t *)(UART3_BASE +UART_UARTFR_OFFSET)))

//--------
#define UART3_UARTFR_R_CTS_MASK       (0x00000001)
#define UART3_UARTFR_R_CTS_BIT        (0)
#define UART3_UARTFR_R_CTS_NOASSERT   (0x00000000)
#define UART3_UARTFR_R_CTS_ASSERT     (0x00000001)

#define UART3_UARTFR_CTS_MASK         (0x00000001)
#define UART3_UARTFR_CTS_NOASSERT     (0x00000000)
#define UART3_UARTFR_CTS_ASSERT       (0x00000001)
//--------

//--------
#define UART3_UARTFR_R_BUSY_MASK       (0x00000008)
#define UART3_UARTFR_R_BUSY_BIT        (3)
#define UART3_UARTFR_R_BUSY_NOBUSY     (0x00000000)
#define UART3_UARTFR_R_BUSY_BUSY       (0x00000008)

#define UART3_UARTFR_BUSY_MASK         (0x00000001)
#define UART3_UARTFR_BUSY_NOBUSY       (0x00000000)
#define UART3_UARTFR_BUSY_BUSY         (0x00000001)
//--------

//--------
#define UART3_UARTFR_R_RXFE_MASK       (0x00000010)
#define UART3_UARTFR_R_RXFE_BIT        (4)
#define UART3_UARTFR_R_RXFE_NOEMPTY    (0x00000000)
#define UART3_UARTFR_R_RXFE_EMPTY      (0x00000010)

#define UART3_UARTFR_RXFE_MASK         (0x00000001)
#define UART3_UARTFR_RXFE_NOEMPTY      (0x00000000)
#define UART3_UARTFR_RXFE_EMPTY        (0x00000001)
//--------

//--------
#define UART3_UARTFR_R_TXFF_MASK       (0x00000020)
#define UART3_UARTFR_R_TXFF_BIT        (5)
#define UART3_UARTFR_R_TXFF_NOFULL     (0x00000000)
#define UART3_UARTFR_R_TXFF_FULL       (0x00000020)

#define UART3_UARTFR_TXFF_MASK         (0x00000001)
#define UART3_UARTFR_TXFF_NOFULL       (0x00000000)
#define UART3_UARTFR_TXFF_FULL         (0x00000001)
//--------

//--------
#define UART3_UARTFR_R_RXFF_MASK       (0x00000040)
#define UART3_UARTFR_R_RXFF_BIT        (6)
#define UART3_UARTFR_R_RXFF_NOFULL     (0x00000000)
#define UART3_UARTFR_R_RXFF_FULL       (0x00000040)

#define UART3_UARTFR_RXFF_MASK         (0x00000001)
#define UART3_UARTFR_RXFF_NOFULL       (0x00000000)
#define UART3_UARTFR_RXFF_FULL         (0x00000001)
//--------

//--------
#define UART3_UARTFR_R_TXFE_MASK       (0x00000080)
#define UART3_UARTFR_R_TXFE_BIT        (7)
#define UART3_UARTFR_R_TXFE_NOEMPTY    (0x00000000)
#define UART3_UARTFR_R_TXFE_EMPTY      (0x00000080)

#define UART3_UARTFR_TXFE_MASK         (0x00000001)
#define UART3_UARTFR_TXFE_NOEMPTY      (0x00000000)
#define UART3_UARTFR_TXFE_EMPTY        (0x00000001)
//--------

#define UART3_UARTFR_CTS_BB      (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTFR_OFFSET)*32)+(0*4))))
#define UART3_UARTFR_BUSY_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTFR_OFFSET)*32)+(3*4))))
#define UART3_UARTFR_RXFE_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTFR_OFFSET)*32)+(4*4))))
#define UART3_UARTFR_TXFF_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTFR_OFFSET)*32)+(5*4))))
#define UART3_UARTFR_RXFF_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTFR_OFFSET)*32)+(6*4))))
#define UART3_UARTFR_TXFE_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTFR_OFFSET)*32)+(7*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.4 UARTILPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
#define UART3_UARTILPR            (((UARTILPR_TypeDef*)(UART3_BASE + UART_UARTILPR_OFFSET )))
#define UART3_UARTILPR_R          (*((volatile uint32_t *)(UART3_BASE +UART_UARTILPR_OFFSET)))

//--------
#define UART3_UARTILPR_R_ILPDVSR_MASK       (0x000000FF)
#define UART3_UARTILPR_R_ILPDVSR_BIT        (0)

#define UART3_UARTILPR_ILPDVSR_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.5 UARTIBRD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTIBRD            (((UARTIBRD_TypeDef*)(UART3_BASE + UART_UARTIBRD_OFFSET )))
#define UART3_UARTIBRD_R          (*((volatile uint32_t *)(UART3_BASE +UART_UARTIBRD_OFFSET)))

//--------
#define UART3_UARTIBRD_R_DIVINT_MASK       (0x0000FFFF)
#define UART3_UARTIBRD_R_DIVINT_BIT        (0)

#define UART3_UARTIBRD_DIVINT_MASK         (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.6 UARTFBRD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTFBRD            (((UARTFBRD_TypeDef*)(UART3_BASE + UART_UARTFBRD_OFFSET )))
#define UART3_UARTFBRD_R          (*((volatile uint32_t *)(UART3_BASE +UART_UARTFBRD_OFFSET)))

//--------
#define UART3_UARTFBRD_R_DIVFRAC_MASK       (0x0000003F)
#define UART3_UARTFBRD_R_DIVFRAC_BIT        (0)

#define UART3_UARTFBRD_DIVFRAC_MASK         (0x0000003F)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.7 UARTLCRH ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTLCRH            (((UARTLCRH_TypeDef*)(UART3_BASE + UART_UARTLCRH_OFFSET )))
#define UART3_UARTLCRH_R          (*((volatile uint32_t *)(UART3_BASE +UART_UARTLCRH_OFFSET)))

//--------
#define UART3_UARTLCRH_R_BRK_MASK       (0x00000001)
#define UART3_UARTLCRH_R_BRK_BIT        (0)
#define UART3_UARTLCRH_R_BRK_NORMAL     (0x00000000)
#define UART3_UARTLCRH_R_BRK_LOW        (0x00000001)

#define UART3_UARTLCRH_BRK_MASK         (0x00000001)
#define UART3_UARTLCRH_BRK_NORMAL       (0x00000000)
#define UART3_UARTLCRH_BRK_LOW          (0x00000001)
//--------

//--------
#define UART3_UARTLCRH_R_PEN_MASK       (0x00000002)
#define UART3_UARTLCRH_R_PEN_BIT        (1)
#define UART3_UARTLCRH_R_PEN_DIS        (0x00000000)
#define UART3_UARTLCRH_R_PEN_EN         (0x00000002)

#define UART3_UARTLCRH_PEN_MASK         (0x00000001)
#define UART3_UARTLCRH_PEN_DIS          (0x00000000)
#define UART3_UARTLCRH_PEN_EN           (0x00000001)
//--------

//--------
#define UART3_UARTLCRH_R_EPS_MASK       (0x00000004)
#define UART3_UARTLCRH_R_EPS_BIT        (2)
#define UART3_UARTLCRH_R_EPS_ODD        (0x00000000)
#define UART3_UARTLCRH_R_EPS_EVEN       (0x00000004)

#define UART3_UARTLCRH_EPS_MASK         (0x00000001)
#define UART3_UARTLCRH_EPS_ODD          (0x00000000)
#define UART3_UARTLCRH_EPS_EVEN         (0x00000001)
//--------

//--------
#define UART3_UARTLCRH_R_STP2_MASK       (0x00000008)
#define UART3_UARTLCRH_R_STP2_BIT        (3)
#define UART3_UARTLCRH_R_STP2_ONE        (0x00000000)
#define UART3_UARTLCRH_R_STP2_TWO        (0x00000008)

#define UART3_UARTLCRH_STP2_MASK         (0x00000001)
#define UART3_UARTLCRH_STP2_ONE          (0x00000000)
#define UART3_UARTLCRH_STP2_TWO          (0x00000001)
//--------

//--------
#define UART3_UARTLCRH_R_FEN_MASK       (0x00000010)
#define UART3_UARTLCRH_R_FEN_BIT        (4)
#define UART3_UARTLCRH_R_FEN_DIS        (0x00000000)
#define UART3_UARTLCRH_R_FEN_EN         (0x00000010)

#define UART3_UARTLCRH_FEN_MASK         (0x00000001)
#define UART3_UARTLCRH_FEN_DIS          (0x00000000)
#define UART3_UARTLCRH_FEN_EN           (0x00000001)
//--------

//--------
#define UART3_UARTLCRH_R_WLEN_MASK       (0x00000060)
#define UART3_UARTLCRH_R_WLEN_BIT        (5)
#define UART3_UARTLCRH_R_WLEN_5          (0x00000000)
#define UART3_UARTLCRH_R_WLEN_6          (0x00000020)
#define UART3_UARTLCRH_R_WLEN_7          (0x00000040)
#define UART3_UARTLCRH_R_WLEN_8          (0x00000060)

#define UART3_UARTLCRH_WLEN_MASK         (0x00000003)
#define UART3_UARTLCRH_WLEN_5            (0x00000000)
#define UART3_UARTLCRH_WLEN_6            (0x00000001)
#define UART3_UARTLCRH_WLEN_7            (0x00000002)
#define UART3_UARTLCRH_WLEN_8            (0x00000003)
//--------

//--------
#define UART3_UARTLCRH_R_SPS_MASK       (0x00000080)
#define UART3_UARTLCRH_R_SPS_BIT        (7)
#define UART3_UARTLCRH_R_SPS_LOW        (0x00000000)
#define UART3_UARTLCRH_R_SPS_HIGH       (0x00000080)

#define UART3_UARTLCRH_SPS_MASK         (0x00000001)
#define UART3_UARTLCRH_SPS_LOW          (0x00000000)
#define UART3_UARTLCRH_SPS_HIGH         (0x00000001)
//--------

#define UART3_UARTLCRH_BRK_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTLCRH_OFFSET)*32)+(0*4))))
#define UART3_UARTLCRH_PEN_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTLCRH_OFFSET)*32)+(1*4))))
#define UART3_UARTLCRH_EPS_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTLCRH_OFFSET)*32)+(2*4))))
#define UART3_UARTLCRH_STP2_BB    (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTLCRH_OFFSET)*32)+(3*4))))
#define UART3_UARTLCRH_FEN_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTLCRH_OFFSET)*32)+(4*4))))
#define UART3_UARTLCRH_SPS_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTLCRH_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.8 UARTCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTCTL            (((UARTCTL_TypeDef*)(UART3_BASE + UART_UARTCTL_OFFSET )))
#define UART3_UARTCTL_R          (*((volatile uint32_t *)(UART3_BASE +UART_UARTCTL_OFFSET)))

//--------
#define UART3_UARTCTL_R_UARTEN_MASK       (0x00000001)
#define UART3_UARTCTL_R_UARTEN_BIT        (0)
#define UART3_UARTCTL_R_UARTEN_DIS        (0x00000000)
#define UART3_UARTCTL_R_UARTEN_EN         (0x00000001)

#define UART3_UARTCTL_UARTEN_MASK         (0x00000001)
#define UART3_UARTCTL_UARTEN_DIS          (0x00000000)
#define UART3_UARTCTL_UARTEN_EN           (0x00000001)
//--------

//--------
#define UART3_UARTCTL_R_SIREN_MASK       (0x00000002)
#define UART3_UARTCTL_R_SIREN_BIT        (1)
#define UART3_UARTCTL_R_SIREN_DIS        (0x00000000)
#define UART3_UARTCTL_R_SIREN_EN         (0x00000002)

#define UART3_UARTCTL_SIREN_MASK         (0x00000001)
#define UART3_UARTCTL_SIREN_DIS          (0x00000000)
#define UART3_UARTCTL_SIREN_EN           (0x00000001)
//--------

//--------
#define UART3_UARTCTL_R_SIRLP_MASK       (0x00000004)
#define UART3_UARTCTL_R_SIRLP_BIT        (2)
#define UART3_UARTCTL_R_SIRLP_DIS        (0x00000000)
#define UART3_UARTCTL_R_SIRLP_EN         (0x00000004)

#define UART3_UARTCTL_SIRLP_MASK         (0x00000001)
#define UART3_UARTCTL_SIRLP_DIS          (0x00000000)
#define UART3_UARTCTL_SIRLP_EN           (0x00000001)
//--------

//--------
#define UART3_UARTCTL_R_SMART_MASK       (0x00000008)
#define UART3_UARTCTL_R_SMART_BIT        (3)
#define UART3_UARTCTL_R_SMART_DIS        (0x00000000)
#define UART3_UARTCTL_R_SMART_EN         (0x00000008)

#define UART3_UARTCTL_SMART_MASK         (0x00000001)
#define UART3_UARTCTL_SMART_DIS          (0x00000000)
#define UART3_UARTCTL_SMART_EN           (0x00000001)
//--------

//--------
#define UART3_UARTCTL_R_EOT_MASK       (0x00000010)
#define UART3_UARTCTL_R_EOT_BIT        (4)
#define UART3_UARTCTL_R_EOT_FIFO       (0x00000000)
#define UART3_UARTCTL_R_EOT_ALL        (0x00000010)

#define UART3_UARTCTL_EOT_MASK         (0x00000001)
#define UART3_UARTCTL_EOT_FIFO         (0x00000000)
#define UART3_UARTCTL_EOT_ALL          (0x00000001)
//--------

//--------
#define UART3_UARTCTL_R_HSE_MASK       (0x00000020)
#define UART3_UARTCTL_R_HSE_BIT        (5)
#define UART3_UARTCTL_R_HSE_DIS        (0x00000000)
#define UART3_UARTCTL_R_HSE_EN         (0x00000020)

#define UART3_UARTCTL_HSE_MASK         (0x00000001)
#define UART3_UARTCTL_HSE_DIS          (0x00000000)
#define UART3_UARTCTL_HSE_EN           (0x00000001)
//--------

//--------
#define UART3_UARTCTL_R_LBE_MASK       (0x00000080)
#define UART3_UARTCTL_R_LBE_BIT        (7)
#define UART3_UARTCTL_R_LBE_DIS        (0x00000000)
#define UART3_UARTCTL_R_LBE_EN         (0x00000080)

#define UART3_UARTCTL_LBE_MASK         (0x00000001)
#define UART3_UARTCTL_LBE_DIS          (0x00000000)
#define UART3_UARTCTL_LBE_EN           (0x00000001)
//--------

//--------
#define UART3_UARTCTL_R_TXE_MASK       (0x00000100)
#define UART3_UARTCTL_R_TXE_BIT        (8)
#define UART3_UARTCTL_R_TXE_DIS        (0x00000000)
#define UART3_UARTCTL_R_TXE_EN         (0x00000100)

#define UART3_UARTCTL_TXE_MASK         (0x00000001)
#define UART3_UARTCTL_TXE_DIS          (0x00000000)
#define UART3_UARTCTL_TXE_EN           (0x00000001)
//--------

//--------
#define UART3_UARTCTL_R_RXE_MASK       (0x00000200)
#define UART3_UARTCTL_R_RXE_BIT        (9)
#define UART3_UARTCTL_R_RXE_DIS        (0x00000000)
#define UART3_UARTCTL_R_RXE_EN         (0x00000200)

#define UART3_UARTCTL_RXE_MASK         (0x00000001)
#define UART3_UARTCTL_RXE_DIS          (0x00000000)
#define UART3_UARTCTL_RXE_EN           (0x00000001)
//--------

//--------
#define UART3_UARTCTL_R_RTS_MASK       (0x00000800)
#define UART3_UARTCTL_R_RTS_BIT        (11)
#define UART3_UARTCTL_R_RTS_LOW        (0x00000000)
#define UART3_UARTCTL_R_RTS_HIGH       (0x00000800)

#define UART3_UARTCTL_RTS_MASK         (0x00000001)
#define UART3_UARTCTL_RTS_LOW          (0x00000000)
#define UART3_UARTCTL_RTS_HIGH         (0x00000001)
//--------

//--------
#define UART3_UARTCTL_R_RTSEN_MASK       (0x00004000)
#define UART3_UARTCTL_R_RTSEN_BIT        (14)
#define UART3_UARTCTL_R_RTSEN_DIS        (0x00000000)
#define UART3_UARTCTL_R_RTSEN_EN         (0x00004000)

#define UART3_UARTCTL_RTSEN_MASK         (0x00000001)
#define UART3_UARTCTL_RTSEN_DIS          (0x00000000)
#define UART3_UARTCTL_RTSEN_EN           (0x00000001)
//--------

//--------
#define UART3_UARTCTL_R_CTSEN_MASK       (0x00008000)
#define UART3_UARTCTL_R_CTSEN_BIT        (15)
#define UART3_UARTCTL_R_CTSEN_DIS        (0x00000000)
#define UART3_UARTCTL_R_CTSEN_EN         (0x00008000)

#define UART3_UARTCTL_CTSEN_MASK         (0x00000001)
#define UART3_UARTCTL_CTSEN_DIS          (0x00000000)
#define UART3_UARTCTL_CTSEN_EN           (0x00000001)
//--------

#define UART3_UARTCTL_UARTEN_BB    (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTCTL_OFFSET)*32)+(0*4))))
#define UART3_UARTCTL_SIREN_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTCTL_OFFSET)*32)+(1*4))))
#define UART3_UARTCTL_SIRLP_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTCTL_OFFSET)*32)+(2*4))))
#define UART3_UARTCTL_SMART_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTCTL_OFFSET)*32)+(3*4))))
#define UART3_UARTCTL_EOT_BB       (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTCTL_OFFSET)*32)+(4*4))))
#define UART3_UARTCTL_HSE_BB       (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTCTL_OFFSET)*32)+(5*4))))
#define UART3_UARTCTL_LBE_BB       (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTCTL_OFFSET)*32)+(7*4))))
#define UART3_UARTCTL_TXE_BB       (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTCTL_OFFSET)*32)+(8*4))))
#define UART3_UARTCTL_RXE_BB       (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTCTL_OFFSET)*32)+(9*4))))
#define UART3_UARTCTL_RTS_BB       (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTCTL_OFFSET)*32)+(11*4))))
#define UART3_UARTCTL_RTSEN_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTCTL_OFFSET)*32)+(14*4))))
#define UART3_UARTCTL_CTSEN_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTCTL_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.9 UARTIFLS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTIFLS            (((UARTIFLS_TypeDef*)(UART3_BASE + UART_UARTIFLS_OFFSET )))
#define UART3_UARTIFLS_R          (*((volatile uint32_t *)(UART3_BASE +UART_UARTIFLS_OFFSET)))

//--------
#define UART3_UARTIFLS_R_TXIFLSEL_MASK       (0x00000007)
#define UART3_UARTIFLS_R_TXIFLSEL_BIT        (0)
#define UART3_UARTIFLS_R_TXIFLSEL_1_4        (0x00000000)
#define UART3_UARTIFLS_R_TXIFLSEL_1_2        (0x00000002)
#define UART3_UARTIFLS_R_TXIFLSEL_3_4        (0x00000003)
#define UART3_UARTIFLS_R_TXIFLSEL_7_8        (0x00000004)

#define UART3_UARTIFLS_TXIFLSEL_MASK         (0x00000007)
#define UART3_UARTIFLS_TXIFLSEL_1_4          (0x00000000)
#define UART3_UARTIFLS_TXIFLSEL_1_2          (0x00000002)
#define UART3_UARTIFLS_TXIFLSEL_3_4          (0x00000003)
#define UART3_UARTIFLS_TXIFLSEL_7_8          (0x00000004)
//--------

//--------
#define UART3_UARTIFLS_R_RXIFLSEL_MASK       (0x00000038)
#define UART3_UARTIFLS_R_RXIFLSEL_BIT        (0)
#define UART3_UARTIFLS_R_RXIFLSEL_1_4        (0x00000000)
#define UART3_UARTIFLS_R_RXIFLSEL_1_2        (0x00000010)
#define UART3_UARTIFLS_R_RXIFLSEL_3_4        (0x00000018)
#define UART3_UARTIFLS_R_RXIFLSEL_7_8        (0x00000020)

#define UART3_UARTIFLS_RXIFLSEL_MASK         (0x00000007)
#define UART3_UARTIFLS_RXIFLSEL_1_4          (0x00000000)
#define UART3_UARTIFLS_RXIFLSEL_1_2          (0x00000002)
#define UART3_UARTIFLS_RXIFLSEL_3_4          (0x00000003)
#define UART3_UARTIFLS_RXIFLSEL_7_8          (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.10 UARTIM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTIM            (((UARTIM_TypeDef*)(UART3_BASE + UART_UARTIM_OFFSET )))
#define UART3_UARTIM_R          (*((volatile uint32_t *)(UART3_BASE +UART_UARTIM_OFFSET)))

//--------
#define UART3_UARTIM_R_CTSIM_MASK       (0x00000002)
#define UART3_UARTIM_R_CTSIM_BIT        (1)
#define UART3_UARTIM_R_CTSIM_DIS        (0x00000000)
#define UART3_UARTIM_R_CTSIM_EN         (0x00000002)

#define UART3_UARTIM_CTSIM_MASK         (0x00000001)
#define UART3_UARTIM_CTSIM_DIS          (0x00000000)
#define UART3_UARTIM_CTSIM_EN           (0x00000001)
//--------

//--------
#define UART3_UARTIM_R_RXIM_MASK       (0x00000010)
#define UART3_UARTIM_R_RXIM_BIT        (4)
#define UART3_UARTIM_R_RXIM_DIS        (0x00000000)
#define UART3_UARTIM_R_RXIM_EN         (0x00000010)

#define UART3_UARTIM_RXIM_MASK         (0x00000001)
#define UART3_UARTIM_RXIM_DIS          (0x00000000)
#define UART3_UARTIM_RXIM_EN           (0x00000001)
//--------

//--------
#define UART3_UARTIM_R_TXIM_MASK       (0x00000020)
#define UART3_UARTIM_R_TXIM_BIT        (5)
#define UART3_UARTIM_R_TXIM_DIS        (0x00000000)
#define UART3_UARTIM_R_TXIM_EN         (0x00000020)

#define UART3_UARTIM_TXIM_MASK         (0x00000001)
#define UART3_UARTIM_TXIM_DIS          (0x00000000)
#define UART3_UARTIM_TXIM_EN           (0x00000001)
//--------

//--------
#define UART3_UARTIM_R_RTIM_MASK       (0x00000040)
#define UART3_UARTIM_R_RTIM_BIT        (6)
#define UART3_UARTIM_R_RTIM_DIS        (0x00000000)
#define UART3_UARTIM_R_RTIM_EN         (0x00000040)

#define UART3_UARTIM_RTIM_MASK         (0x00000001)
#define UART3_UARTIM_RTIM_DIS          (0x00000000)
#define UART3_UARTIM_RTIM_EN           (0x00000001)
//--------

//--------
#define UART3_UARTIM_R_FEIM_MASK       (0x00000080)
#define UART3_UARTIM_R_FEIM_BIT        (7)
#define UART3_UARTIM_R_FEIM_DIS        (0x00000000)
#define UART3_UARTIM_R_FEIM_EN         (0x00000080)

#define UART3_UARTIM_FEIM_MASK         (0x00000001)
#define UART3_UARTIM_FEIM_DIS          (0x00000000)
#define UART3_UARTIM_FEIM_EN           (0x00000001)
//--------

//--------
#define UART3_UARTIM_R_PEIM_MASK       (0x00000100)
#define UART3_UARTIM_R_PEIM_BIT        (8)
#define UART3_UARTIM_R_PEIM_DIS        (0x00000000)
#define UART3_UARTIM_R_PEIM_EN         (0x00000100)

#define UART3_UARTIM_PEIM_MASK         (0x00000001)
#define UART3_UARTIM_PEIM_DIS          (0x00000000)
#define UART3_UARTIM_PEIM_EN           (0x00000001)
//--------

//--------
#define UART3_UARTIM_R_BEIM_MASK       (0x00000200)
#define UART3_UARTIM_R_BEIM_BIT        (9)
#define UART3_UARTIM_R_BEIM_DIS        (0x00000000)
#define UART3_UARTIM_R_BEIM_EN         (0x00000200)

#define UART3_UARTIM_BEIM_MASK         (0x00000001)
#define UART3_UARTIM_BEIM_DIS          (0x00000000)
#define UART3_UARTIM_BEIM_EN           (0x00000001)
//--------

//--------
#define UART3_UARTIM_R_OEIM_MASK       (0x00000400)
#define UART3_UARTIM_R_OEIM_BIT        (10)
#define UART3_UARTIM_R_OEIM_DIS        (0x00000000)
#define UART3_UARTIM_R_OEIM_EN         (0x00000400)

#define UART3_UARTIM_OEIM_MASK         (0x00000001)
#define UART3_UARTIM_OEIM_DIS          (0x00000000)
#define UART3_UARTIM_OEIM_EN           (0x00000001)
//--------

//--------
#define UART3_UARTIM_R_9BITIM_MASK       (0x00001000)
#define UART3_UARTIM_R_9BITIM_BIT        (12)
#define UART3_UARTIM_R_9BITIM_DIS        (0x00000000)
#define UART3_UARTIM_R_9BITIM_EN         (0x00001000)

#define UART3_UARTIM_9BITIM_MASK         (0x00000001)
#define UART3_UARTIM_9BITIM_DIS          (0x00000000)
#define UART3_UARTIM_9BITIM_EN           (0x00000001)
//--------

#define UART3_UARTIM_CTSIM_BB    (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTIM_OFFSET)*32)+(1*4))))
#define UART3_UARTIM_RXIM_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTIM_OFFSET)*32)+(4*4))))
#define UART3_UARTIM_TXIM_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTIM_OFFSET)*32)+(5*4))))
#define UART3_UARTIM_RTIM_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTIM_OFFSET)*32)+(6*4))))
#define UART3_UARTIM_FEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTIM_OFFSET)*32)+(7*4))))
#define UART3_UARTIM_PEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTIM_OFFSET)*32)+(8*4))))
#define UART3_UARTIM_BEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTIM_OFFSET)*32)+(9*4))))
#define UART3_UARTIM_OEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTIM_OFFSET)*32)+(10*4))))
#define UART3_UARTIM_9BITIM_BB   (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTIM_OFFSET)*32)+(12*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.11 UARTRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTRIS            (((UARTRIS_TypeDef*)(UART3_BASE + UART_UARTRIS_OFFSET )))
#define UART3_UARTRIS_R          (*((volatile uint32_t *)(UART3_BASE +UART_UARTRIS_OFFSET)))



//--------
#define UART3_UARTRIS_R_CTSRIS_MASK       (0x00000002)
#define UART3_UARTRIS_R_CTSRIS_BIT        (1)
#define UART3_UARTRIS_R_CTSRIS_NOACTIVE   (0x00000000)
#define UART3_UARTRIS_R_CTSRIS_ACTIVE     (0x00000002)

#define UART3_UARTRIS_CTSRIS_MASK         (0x00000001)
#define UART3_UARTRIS_CTSRIS_NOACTIVE     (0x00000000)
#define UART3_UARTRIS_CTSRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART3_UARTRIS_R_RXRIS_MASK       (0x00000010)
#define UART3_UARTRIS_R_RXRIS_BIT        (4)
#define UART3_UARTRIS_R_RXRIS_NOACTIVE   (0x00000000)
#define UART3_UARTRIS_R_RXRIS_ACTIVE     (0x00000010)

#define UART3_UARTRIS_RXRIS_MASK         (0x00000001)
#define UART3_UARTRIS_RXRIS_NOACTIVE     (0x00000000)
#define UART3_UARTRIS_RXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART3_UARTRIS_R_TXRIS_MASK       (0x00000020)
#define UART3_UARTRIS_R_TXRIS_BIT        (5)
#define UART3_UARTRIS_R_TXRIS_NOACTIVE   (0x00000000)
#define UART3_UARTRIS_R_TXRIS_ACTIVE     (0x00000020)

#define UART3_UARTRIS_TXRIS_MASK         (0x00000001)
#define UART3_UARTRIS_TXRIS_NOACTIVE     (0x00000000)
#define UART3_UARTRIS_TXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART3_UARTRIS_R_RTRIS_MASK       (0x00000040)
#define UART3_UARTRIS_R_RTRIS_BIT        (6)
#define UART3_UARTRIS_R_RTRIS_NOACTIVE   (0x00000000)
#define UART3_UARTRIS_R_RTRIS_ACTIVE     (0x00000040)

#define UART3_UARTRIS_RTRIS_MASK         (0x00000001)
#define UART3_UARTRIS_RTRIS_NOACTIVE     (0x00000000)
#define UART3_UARTRIS_RTRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART3_UARTRIS_R_FERIS_MASK       (0x00000080)
#define UART3_UARTRIS_R_FERIS_BIT        (7)
#define UART3_UARTRIS_R_FERIS_NOACTIVE   (0x00000000)
#define UART3_UARTRIS_R_FERIS_ACTIVE     (0x00000080)

#define UART3_UARTRIS_FERIS_MASK         (0x00000001)
#define UART3_UARTRIS_FERIS_NOACTIVE     (0x00000000)
#define UART3_UARTRIS_FERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART3_UARTRIS_R_PERIS_MASK       (0x00000100)
#define UART3_UARTRIS_R_PERIS_BIT        (8)
#define UART3_UARTRIS_R_PERIS_NOACTIVE   (0x00000000)
#define UART3_UARTRIS_R_PERIS_ACTIVE     (0x00000100)

#define UART3_UARTRIS_PERIS_MASK         (0x00000001)
#define UART3_UARTRIS_PERIS_NOACTIVE     (0x00000000)
#define UART3_UARTRIS_PERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART3_UARTRIS_R_BERIS_MASK       (0x00000200)
#define UART3_UARTRIS_R_BERIS_BIT        (9)
#define UART3_UARTRIS_R_BERIS_NOACTIVE   (0x00000000)
#define UART3_UARTRIS_R_BERIS_ACTIVE     (0x00000200)

#define UART3_UARTRIS_BERIS_MASK         (0x00000001)
#define UART3_UARTRIS_BERIS_NOACTIVE     (0x00000000)
#define UART3_UARTRIS_BERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART3_UARTRIS_R_OERIS_MASK       (0x00000400)
#define UART3_UARTRIS_R_OERIS_BIT        (10)
#define UART3_UARTRIS_R_OERIS_NOACTIVE   (0x00000000)
#define UART3_UARTRIS_R_OERIS_ACTIVE     (0x00000400)

#define UART3_UARTRIS_OERIS_MASK         (0x00000001)
#define UART3_UARTRIS_OERIS_NOACTIVE     (0x00000000)
#define UART3_UARTRIS_OERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART3_UARTRIS_R_9BITRIS_MASK       (0x00001000)
#define UART3_UARTRIS_R_9BITRIS_BIT        (12)
#define UART3_UARTRIS_R_9BITRIS_NOACTIVE   (0x00000000)
#define UART3_UARTRIS_R_9BITRIS_ACTIVE     (0x00001000)

#define UART3_UARTRIS_9BITRIS_MASK         (0x00000001)
#define UART3_UARTRIS_9BITRIS_NOACTIVE     (0x00000000)
#define UART3_UARTRIS_9BITRIS_ACTIVE       (0x00000001)
//--------

#define UART3_UARTRIS_CTSRIS_BB    (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTRIS_OFFSET)*32)+(1*4))))
#define UART3_UARTRIS_RXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTRIS_OFFSET)*32)+(4*4))))
#define UART3_UARTRIS_TXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTRIS_OFFSET)*32)+(5*4))))
#define UART3_UARTRIS_RTRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTRIS_OFFSET)*32)+(6*4))))
#define UART3_UARTRIS_FERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTRIS_OFFSET)*32)+(7*4))))
#define UART3_UARTRIS_PERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTRIS_OFFSET)*32)+(8*4))))
#define UART3_UARTRIS_BERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTRIS_OFFSET)*32)+(9*4))))
#define UART3_UARTRIS_OERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTRIS_OFFSET)*32)+(10*4))))
#define UART3_UARTRIS_9BITRIS_BB   (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTRIS_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.12 UARTMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTMIS            (((UARTMIS_TypeDef*)(UART3_BASE + UART_UARTMIS_OFFSET )))
#define UART3_UARTMIS_R          (*((volatile const uint32_t *)(UART3_BASE +UART_UARTMIS_OFFSET)))



//--------
#define UART3_UARTMIS_R_CTSMIS_MASK       (0x00000002)
#define UART3_UARTMIS_R_CTSMIS_BIT        (1)
#define UART3_UARTMIS_R_CTSMIS_NOOCCUR    (0x00000000)
#define UART3_UARTMIS_R_CTSMIS_OCCUR      (0x00000002)

#define UART3_UARTMIS_CTSMIS_MASK         (0x00000001)
#define UART3_UARTMIS_CTSMIS_NOOCCUR      (0x00000000)
#define UART3_UARTMIS_CTSMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART3_UARTMIS_R_RXMIS_MASK       (0x00000010)
#define UART3_UARTMIS_R_RXMIS_BIT        (4)
#define UART3_UARTMIS_R_RXMIS_NOOCCUR    (0x00000000)
#define UART3_UARTMIS_R_RXMIS_OCCUR      (0x00000010)

#define UART3_UARTMIS_RXMIS_MASK         (0x00000001)
#define UART3_UARTMIS_RXMIS_NOOCCUR      (0x00000000)
#define UART3_UARTMIS_RXMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART3_UARTMIS_R_TXMIS_MASK       (0x00000020)
#define UART3_UARTMIS_R_TXMIS_BIT        (5)
#define UART3_UARTMIS_R_TXMIS_NOOCCUR    (0x00000000)
#define UART3_UARTMIS_R_TXMIS_OCCUR      (0x00000020)

#define UART3_UARTMIS_TXMIS_MASK         (0x00000001)
#define UART3_UARTMIS_TXMIS_NOOCCUR      (0x00000000)
#define UART3_UARTMIS_TXMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART3_UARTMIS_R_RTMIS_MASK       (0x00000040)
#define UART3_UARTMIS_R_RTMIS_BIT        (6)
#define UART3_UARTMIS_R_RTMIS_NOOCCUR    (0x00000000)
#define UART3_UARTMIS_R_RTMIS_OCCUR      (0x00000040)

#define UART3_UARTMIS_RTMIS_MASK         (0x00000001)
#define UART3_UARTMIS_RTMIS_NOOCCUR      (0x00000000)
#define UART3_UARTMIS_RTMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART3_UARTMIS_R_FEMIS_MASK       (0x00000080)
#define UART3_UARTMIS_R_FEMIS_BIT        (7)
#define UART3_UARTMIS_R_FEMIS_NOOCCUR    (0x00000000)
#define UART3_UARTMIS_R_FEMIS_OCCUR      (0x00000080)

#define UART3_UARTMIS_FEMIS_MASK         (0x00000001)
#define UART3_UARTMIS_FEMIS_NOOCCUR      (0x00000000)
#define UART3_UARTMIS_FEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART3_UARTMIS_R_PEMIS_MASK       (0x00000100)
#define UART3_UARTMIS_R_PEMIS_BIT        (8)
#define UART3_UARTMIS_R_PEMIS_NOOCCUR    (0x00000000)
#define UART3_UARTMIS_R_PEMIS_OCCUR      (0x00000100)

#define UART3_UARTMIS_PEMIS_MASK         (0x00000001)
#define UART3_UARTMIS_PEMIS_NOOCCUR      (0x00000000)
#define UART3_UARTMIS_PEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART3_UARTMIS_R_BEMIS_MASK       (0x00000200)
#define UART3_UARTMIS_R_BEMIS_BIT        (9)
#define UART3_UARTMIS_R_BEMIS_NOOCCUR    (0x00000000)
#define UART3_UARTMIS_R_BEMIS_OCCUR      (0x00000200)

#define UART3_UARTMIS_BEMIS_MASK         (0x00000001)
#define UART3_UARTMIS_BEMIS_NOOCCUR      (0x00000000)
#define UART3_UARTMIS_BEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART3_UARTMIS_R_OEMIS_MASK       (0x00000400)
#define UART3_UARTMIS_R_OEMIS_BIT        (10)
#define UART3_UARTMIS_R_OEMIS_NOOCCUR    (0x00000000)
#define UART3_UARTMIS_R_OEMIS_OCCUR      (0x00000400)

#define UART3_UARTMIS_OEMIS_MASK         (0x00000001)
#define UART3_UARTMIS_OEMIS_NOOCCUR      (0x00000000)
#define UART3_UARTMIS_OEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART3_UARTMIS_R_9BITMIS_MASK       (0x00001000)
#define UART3_UARTMIS_R_9BITMIS_BIT        (12)
#define UART3_UARTMIS_R_9BITMIS_NOOCCUR    (0x00000000)
#define UART3_UARTMIS_R_9BITMIS_OCCUR      (0x00001000)

#define UART3_UARTMIS_9BITMIS_MASK         (0x00000001)
#define UART3_UARTMIS_9BITMIS_NOOCCUR      (0x00000000)
#define UART3_UARTMIS_9BITMIS_OCCUR        (0x00000001)
//--------


#define UART3_UARTMIS_CTSMIS_BB    (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTMIS_OFFSET)*32)+(1*4))))
#define UART3_UARTMIS_RXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTMIS_OFFSET)*32)+(4*4))))
#define UART3_UARTMIS_TXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTMIS_OFFSET)*32)+(5*4))))
#define UART3_UARTMIS_RTMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTMIS_OFFSET)*32)+(6*4))))
#define UART3_UARTMIS_FEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTMIS_OFFSET)*32)+(7*4))))
#define UART3_UARTMIS_PEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTMIS_OFFSET)*32)+(8*4))))
#define UART3_UARTMIS_BEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTMIS_OFFSET)*32)+(9*4))))
#define UART3_UARTMIS_OEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTMIS_OFFSET)*32)+(10*4))))
#define UART3_UARTMIS_9BITMIS_BB   (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTMIS_OFFSET)*32)+(12*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.13 UARTICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTICR            (((UARTICR_TypeDef*)(UART3_BASE + UART_UARTICR_OFFSET )))
#define UART3_UARTICR_R          (*((volatile uint32_t *)(UART3_BASE +UART_UARTICR_OFFSET)))


//--------
#define UART3_UARTICR_R_CTSIC_MASK       (0x00000002)
#define UART3_UARTICR_R_CTSIC_BIT        (1)
#define UART3_UARTICR_R_CTSIC_CLEAR      (0x00000002)

#define UART3_UARTICR_CTSIC_MASK         (0x00000001)
#define UART3_UARTICR_CTSIC_CLEAR        (0x00000001)
//--------

//--------
#define UART3_UARTICR_R_RXIC_MASK       (0x00000010)
#define UART3_UARTICR_R_RXIC_BIT        (4)
#define UART3_UARTICR_R_RXIC_CLEAR      (0x00000010)

#define UART3_UARTICR_RXIC_MASK         (0x00000001)
#define UART3_UARTICR_RXIC_CLEAR        (0x00000001)
//--------

//--------
#define UART3_UARTICR_R_TXIC_MASK       (0x00000020)
#define UART3_UARTICR_R_TXIC_BIT        (5)
#define UART3_UARTICR_R_TXIC_CLEAR      (0x00000020)

#define UART3_UARTICR_TXIC_MASK         (0x00000001)
#define UART3_UARTICR_TXIC_CLEAR        (0x00000001)
//--------

//--------
#define UART3_UARTICR_R_RTIC_MASK       (0x00000040)
#define UART3_UARTICR_R_RTIC_BIT        (6)
#define UART3_UARTICR_R_RTIC_CLEAR      (0x00000040)

#define UART3_UARTICR_RTIC_MASK         (0x00000001)
#define UART3_UARTICR_RTIC_CLEAR        (0x00000001)
//--------

//--------
#define UART3_UARTICR_R_FEIC_MASK       (0x00000080)
#define UART3_UARTICR_R_FEIC_BIT        (7)
#define UART3_UARTICR_R_FEIC_CLEAR      (0x00000080)

#define UART3_UARTICR_FEIC_MASK         (0x00000001)
#define UART3_UARTICR_FEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART3_UARTICR_R_PEIC_MASK       (0x00000100)
#define UART3_UARTICR_R_PEIC_BIT        (8)
#define UART3_UARTICR_R_PEIC_CLEAR      (0x00000100)

#define UART3_UARTICR_PEIC_MASK         (0x00000001)
#define UART3_UARTICR_PEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART3_UARTICR_R_BEIC_MASK       (0x00000200)
#define UART3_UARTICR_R_BEIC_BIT        (9)
#define UART3_UARTICR_R_BEIC_CLEAR      (0x00000200)

#define UART3_UARTICR_BEIC_MASK         (0x00000001)
#define UART3_UARTICR_BEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART3_UARTICR_R_OEIC_MASK       (0x00000400)
#define UART3_UARTICR_R_OEIC_BIT        (10)
#define UART3_UARTICR_R_OEIC_CLEAR      (0x00000400)

#define UART3_UARTICR_OEIC_MASK         (0x00000001)
#define UART3_UARTICR_OEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART3_UARTICR_R_9BITIC_MASK       (0x00001000)
#define UART3_UARTICR_R_9BITIC_BIT        (12)
#define UART3_UARTICR_R_9BITIC_CLEAR      (0x00001000)

#define UART3_UARTICR_9BITIC_MASK         (0x00000001)
#define UART3_UARTICR_9BITIC_CLEAR        (0x00000001)
//--------

#define UART3_UARTICR_CTSICR_BB    (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTICR_OFFSET)*32)+(1*4))))
#define UART3_UARTICR_RXICR_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTICR_OFFSET)*32)+(4*4))))
#define UART3_UARTICR_TXICR_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTICR_OFFSET)*32)+(5*4))))
#define UART3_UARTICR_RTICR_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTICR_OFFSET)*32)+(6*4))))
#define UART3_UARTICR_FEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTICR_OFFSET)*32)+(7*4))))
#define UART3_UARTICR_PEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTICR_OFFSET)*32)+(8*4))))
#define UART3_UARTICR_BEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTICR_OFFSET)*32)+(9*4))))
#define UART3_UARTICR_OEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTICR_OFFSET)*32)+(10*4))))
#define UART3_UARTICR_9BITICR_BB   (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTICR_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.14 UARTDMACTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTDMACTL            (((UARTDMACTL_TypeDef*)(UART3_BASE + UART_UARTDMACTL_OFFSET )))
#define UART3_UARTDMACTL_R          (*((volatile uint32_t *)(UART3_BASE +UART_UARTDMACTL_OFFSET)))

//--------
#define UART3_UARTDMACTL_R_RXDMAE_MASK       (0x00000001)
#define UART3_UARTDMACTL_R_RXDMAE_BIT        (0)
#define UART3_UARTDMACTL_R_RXDMAE_DIS        (0x00000000)
#define UART3_UARTDMACTL_R_RXDMAE_EN         (0x00008000)

#define UART3_UARTDMACTL_RXDMAE_MASK         (0x00000001)
#define UART3_UARTDMACTL_RXDMAE_DIS          (0x00000000)
#define UART3_UARTDMACTL_RXDMAE_EN           (0x00000001)
//--------

//--------
#define UART3_UARTDMACTL_R_TXDMAE_MASK       (0x00000002)
#define UART3_UARTDMACTL_R_TXDMAE_BIT        (1)
#define UART3_UARTDMACTL_R_TXDMAE_DIS        (0x00000000)
#define UART3_UARTDMACTL_R_TXDMAE_EN         (0x00000002)

#define UART3_UARTDMACTL_TXDMAE_MASK         (0x00000001)
#define UART3_UARTDMACTL_TXDMAE_DIS          (0x00000000)
#define UART3_UARTDMACTL_TXDMAE_EN           (0x00000001)
//--------

//--------
#define UART3_UARTDMACTL_R_DMAERR_MASK       (0x00000004)
#define UART3_UARTDMACTL_R_DMAERR_BIT        (2)
#define UART3_UARTDMACTL_R_DMAERR_NOERROR    (0x00000000)
#define UART3_UARTDMACTL_R_DMAERR_ERROR      (0x00000004)

#define UART3_UARTDMACTL_DMAERR_MASK         (0x00000001)
#define UART3_UARTDMACTL_DMAERR_NOERROR      (0x00000000)
#define UART3_UARTDMACTL_DMAERR_ERROR        (0x00000001)
//--------

#define UART3_UARTDMACTL_RXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(0*4))))
#define UART3_UARTDMACTL_TXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(1*4))))
#define UART3_UARTDMACTL_DMAERR_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(2*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.15 UART9BITADDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UART9BITADDR            (((UART9BITADDR_TypeDef*)(UART3_BASE + UART_UART9BITADDR_OFFSET )))
#define UART3_UART9BITADDR_R          (*((volatile uint32_t *)(UART3_BASE +UART_UART9BITADDR_OFFSET)))

//--------
#define UART3_UART9BITADDR_R_ADDR_MASK       (0x000000FF)
#define UART3_UART9BITADDR_R_ADDR_BIT        (0)

#define UART3_UART9BITADDR_ADDR_MASK         (0x000000FF)
//--------

//--------
#define UART3_UART9BITADDR_R_9BITEN_MASK       (0x00008000)
#define UART3_UART9BITADDR_R_9BITEN_BIT        (15)
#define UART3_UART9BITADDR_R_9BITEN_DIS        (0x00000000)
#define UART3_UART9BITADDR_R_9BITEN_EN         (0x00008000)

#define UART3_UART9BITADDR_9BITEN_MASK         (0x00000001)
#define UART3_UART9BITADDR_9BITEN_DIS          (0x00000000)
#define UART3_UART9BITADDR_9BITEN_EN           (0x00000001)
//--------

#define UART3_UART9BITADDR_9BITEN_BB     (*((volatile uint32_t *)(0x42000000+((UART3_OFFSET+UART_UART9BITADDR_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.16 UART9BITAMASK ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UART9BITAMASK            (((UART9BITAMASK_TypeDef*)(UART3_BASE + UART_UART9BITAMASK_OFFSET )))
#define UART3_UART9BITAMASK_R          (*((volatile uint32_t *)(UART3_BASE +UART_UART9BITAMASK_OFFSET)))

//--------
#define UART3_UART9BITAMASK_R_MASK_MASK       (0x000000FF)
#define UART3_UART9BITAMASK_R_MASK_BIT        (0)

#define UART3_UART9BITAMASK_MASK_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.17 UARTPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTPP            (((UARTPP_TypeDef*)(UART3_BASE + UART_UARTPP_OFFSET )))
#define UART3_UARTPP_R          (*((volatile const uint32_t *)(UART3_BASE +UART_UARTPP_OFFSET)))

//--------
#define UART3_UARTPP_R_SC_MASK       (0x00000001)
#define UART3_UARTPP_R_SC_BIT        (0)
#define UART3_UARTPP_R_SC_NOSUPPORT  (0x00000000)
#define UART3_UARTPP_R_SC_SUPPORT    (0x00000001)

#define UART3_UARTPP_SC_MASK         (0x00000001)
#define UART3_UARTPP_SC_NOSUPPORT    (0x00000000)
#define UART3_UARTPP_SC_SUPPORT      (0x00000001)
//--------

//--------
#define UART3_UARTPP_R_NB_MASK       (0x00000002)
#define UART3_UARTPP_R_NB_BIT        (1)
#define UART3_UARTPP_R_NB_NOSUPPORT  (0x00000000)
#define UART3_UARTPP_R_NB_SUPPORT    (0x00000002)

#define UART3_UARTPP_NB_MASK         (0x00000001)
#define UART3_UARTPP_NB_NOSUPPORT    (0x00000000)
#define UART3_UARTPP_NB_SUPPORT      (0x00000001)
//--------

#define UART3_UARTPP_SC_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTPP_OFFSET)*32)+(0*4))))
#define UART3_UARTPP_NB_BB     (*((volatile const uint32_t *)(0x42000000+((UART3_OFFSET+UART_UARTPP_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.18 UARTCC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTCC            (((UARTCC_TypeDef*)(UART3_BASE + UART_UARTCC_OFFSET )))
#define UART3_UARTCC_R          (*((volatile uint32_t *)(UART3_BASE +UART_UARTCC_OFFSET)))


//--------
#define UART3_UARTCC_R_CS_MASK       (0x0000000F)
#define UART3_UARTCC_R_CS_BIT        (0)
#define UART3_UARTCC_R_CS_SYSCLK     (0x00000000)
#define UART3_UARTCC_R_CS_PIOSC      (0x00000005)

#define UART3_UARTCC_CS_MASK         (0x0000000F)
#define UART3_UARTCC_CS_SYSCLK       (0x00000000)
#define UART3_UARTCC_CS_PIOSC        (0x00000005)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.19 UARTPeriphID4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTPeriphID4            (((UARTPeriphID4_TypeDef*)(UART3_BASE + UART_UARTPeriphID4_OFFSET )))
#define UART3_UARTPeriphID4_R          (*((volatile const uint32_t *)(UART3_BASE +UART_UARTPeriphID4_OFFSET)))

//--------
#define UART3_UARTPeriphID4_R_PID4_MASK       (0x000000FF)
#define UART3_UARTPeriphID4_R_PID4_BIT        (0)
#define UART3_UARTPeriphID4_R_PID4_DEFAULT    (0x00000000)

#define UART3_UARTPeriphID4_PID4_MASK         (0x000000FF)
#define UART3_UARTPeriphID4_PID4_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.20 UARTPeriphID5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTPeriphID5            (((UARTPeriphID5_TypeDef*)(UART3_BASE + UART_UARTPeriphID5_OFFSET )))
#define UART3_UARTPeriphID5_R          (*((volatile const uint32_t *)(UART3_BASE +UART_UARTPeriphID5_OFFSET)))

//--------
#define UART3_UARTPeriphID5_R_PID5_MASK       (0x000000FF)
#define UART3_UARTPeriphID5_R_PID5_BIT        (0)
#define UART3_UARTPeriphID5_R_PID5_DEFAULT    (0x00000000)

#define UART3_UARTPeriphID5_PID5_MASK         (0x000000FF)
#define UART3_UARTPeriphID5_PID5_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.21 UARTPeriphID6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTPeriphID6            (((UARTPeriphID6_TypeDef*)(UART3_BASE + UART_UARTPeriphID6_OFFSET )))
#define UART3_UARTPeriphID6_R          (*((volatile const uint32_t *)(UART3_BASE +UART_UARTPeriphID6_OFFSET)))



//--------
#define UART3_UARTPeriphID6_R_PID6_MASK       (0x000000FF)
#define UART3_UARTPeriphID6_R_PID6_BIT        (0)
#define UART3_UARTPeriphID6_R_PID6_DEFAULT    (0x00000000)

#define UART3_UARTPeriphID6_PID6_MASK         (0x000000FF)
#define UART3_UARTPeriphID6_PID6_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.22 UARTPeriphID7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTPeriphID7            (((UARTPeriphID7_TypeDef*)(UART3_BASE + UART_UARTPeriphID7_OFFSET )))
#define UART3_UARTPeriphID7_R          (*((volatile const uint32_t *)(UART3_BASE +UART_UARTPeriphID7_OFFSET)))



//--------
#define UART3_UARTPeriphID7_R_PID7_MASK       (0x000000FF)
#define UART3_UARTPeriphID7_R_PID7_BIT        (0)
#define UART3_UARTPeriphID7_R_PID7_DEFAULT    (0x00000000)

#define UART3_UARTPeriphID7_PID7_MASK         (0x000000FF)
#define UART3_UARTPeriphID7_PID7_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.23 UARTPeriphID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTPeriphID0            (((UARTPeriphID0_TypeDef*)(UART3_BASE + UART_UARTPeriphID0_OFFSET )))
#define UART3_UARTPeriphID0_R          (*((volatile const uint32_t *)(UART3_BASE +UART_UARTPeriphID0_OFFSET)))



//--------
#define UART3_UARTPeriphID0_R_PID0_MASK       (0x000000FF)
#define UART3_UARTPeriphID0_R_PID0_BIT        (0)
#define UART3_UARTPeriphID0_R_PID0_DEFAULT    (0x00000060)

#define UART3_UARTPeriphID0_PID0_MASK         (0x000000FF)
#define UART3_UARTPeriphID0_PID0_DEFAULT      (0x00000060)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.24 UARTPeriphID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTPeriphID1            (((UARTPeriphID1_TypeDef*)(UART3_BASE + UART_UARTPeriphID1_OFFSET )))
#define UART3_UARTPeriphID1_R          (*((volatile const uint32_t *)(UART3_BASE +UART_UARTPeriphID1_OFFSET)))



//--------
#define UART3_UARTPeriphID1_R_PID1_MASK       (0x000000FF)
#define UART3_UARTPeriphID1_R_PID1_BIT        (0)
#define UART3_UARTPeriphID1_R_PID1_DEFAULT    (0x00000000)

#define UART3_UARTPeriphID1_PID1_MASK         (0x000000FF)
#define UART3_UARTPeriphID1_PID1_DEFAULT      (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.25 UARTPeriphID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTPeriphID2            (((UARTPeriphID2_TypeDef*)(UART3_BASE + UART_UARTPeriphID2_OFFSET )))
#define UART3_UARTPeriphID2_R          (*((volatile const uint32_t *)(UART3_BASE +UART_UARTPeriphID2_OFFSET)))

//--------
#define UART3_UARTPeriphID2_R_PID2_MASK       (0x000000FF)
#define UART3_UARTPeriphID2_R_PID2_BIT        (0)
#define UART3_UARTPeriphID2_R_PID2_DEFAULT    (0x00000018)

#define UART3_UARTPeriphID2_PID2_MASK         (0x000000FF)
#define UART3_UARTPeriphID2_PID2_DEFAULT      (0x00000018)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.26 UARTPeriphID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTPeriphID3            (((UARTPeriphID3_TypeDef*)(UART3_BASE + UART_UARTPeriphID3_OFFSET )))
#define UART3_UARTPeriphID3_R          (*((volatile const uint32_t *)(UART3_BASE +UART_UARTPeriphID3_OFFSET)))

//--------
#define UART3_UARTPeriphID3_R_PID3_MASK       (0x000000FF)
#define UART3_UARTPeriphID3_R_PID3_BIT        (0)
#define UART3_UARTPeriphID3_R_PID3_DEFAULT    (0x00000001)

#define UART3_UARTPeriphID3_PID3_MASK         (0x000000FF)
#define UART3_UARTPeriphID3_PID3_DEFAULT      (0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.27 UARTPCellID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTPCellID0            (((UARTPCellID0_TypeDef*)(UART3_BASE + UART_UARTPCellID0_OFFSET )))
#define UART3_UARTPCellID0_R          (*((volatile const uint32_t *)(UART3_BASE +UART_UARTPCellID0_OFFSET)))

//--------
#define UART3_UARTPCellID0_R_CID0_MASK       (0x000000FF)
#define UART3_UARTPCellID0_R_CID0_BIT        (0)
#define UART3_UARTPCellID0_R_CID0_DEFAULT    (0x0000000D)

#define UART3_UARTPCellID0_CID0_MASK         (0x000000FF)
#define UART3_UARTPCellID0_CID0_DEFAULT      (0x0000000D)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.28 UARTPCellID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTPCellID1            (((UARTPCellID1_TypeDef*)(UART3_BASE + UART_UARTPCellID1_OFFSET )))
#define UART3_UARTPCellID1_R          (*((volatile const uint32_t *)(UART3_BASE +UART_UARTPCellID1_OFFSET)))

//--------
#define UART3_UARTPCellID1_R_CID1_MASK       (0x000000FF)
#define UART3_UARTPCellID1_R_CID1_BIT        (0)
#define UART3_UARTPCellID1_R_CID1_DEFAULT    (0x000000F0)

#define UART3_UARTPCellID1_CID1_MASK         (0x000000FF)
#define UART3_UARTPCellID1_CID1_DEFAULT      (0x000000F0)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.29 UARTPCellID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTPCellID2            (((UARTPCellID2_TypeDef*)(UART3_BASE + UART_UARTPCellID2_OFFSET )))
#define UART3_UARTPCellID2_R          (*((volatile const uint32_t *)(UART3_BASE +UART_UARTPCellID2_OFFSET)))

//--------
#define UART3_UARTPCellID2_R_CID2_MASK       (0x000000FF)
#define UART3_UARTPCellID2_R_CID2_BIT        (0)
#define UART3_UARTPCellID2_R_CID2_DEFAULT    (0x00000005)

#define UART3_UARTPCellID2_CID2_MASK         (0x000000FF)
#define UART3_UARTPCellID2_CID2_DEFAULT      (0x00000005)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.30 UARTPCellID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART3_UARTPCellID3            (((UARTPCellID3_TypeDef*)(UART3_BASE + UART_UARTPCellID3_OFFSET )))
#define UART3_UARTPCellID3_R          (*((volatile const uint32_t *)(UART3_BASE +UART_UARTPCellID3_OFFSET)))

//--------
#define UART3_UARTPCellID3_R_CID3_MASK       (0x000000FF)
#define UART3_UARTPCellID3_R_CID3_BIT        (0)
#define UART3_UARTPCellID3_R_CID3_DEFAULT    (0x000000B1)

#define UART3_UARTPCellID3_CID3_MASK         (0x000000FF)
#define UART3_UARTPCellID3_CID3_DEFAULT      (0x000000B1)
//--------


//todo UART4

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 UART4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.1 UARTDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTDR            (((UARTDR_TypeDef*)(UART4_BASE + UART_UARTDR_OFFSET )))
#define UART4_UARTDR_R          (*((volatile uint32_t *)(UART4_BASE +UART_UARTDR_OFFSET)))

//--------
#define UART4_UARTDR_R_DATA_MASK       (0x000000FF)
#define UART4_UARTDR_R_DATA_BIT        (0)

#define UART4_UARTDR_DATA_MASK         (0x000000FF)
//--------

//--------
#define UART4_UARTDR_R_FE_MASK       (0x00000100)
#define UART4_UARTDR_R_FE_BIT        (8)
#define UART4_UARTDR_R_FE_NOERROR    (0x00000000)
#define UART4_UARTDR_R_FE_ERROR      (0x00000100)

#define UART4_UARTDR_FE_MASK         (0x00000001)
#define UART4_UARTDR_FE_NOERROR      (0x00000000)
#define UART4_UARTDR_FE_ERROR        (0x00000001)
//--------

//--------
#define UART4_UARTDR_R_PE_MASK       (0x00000200)
#define UART4_UARTDR_R_PE_BIT        (9)
#define UART4_UARTDR_R_PE_NOERROR    (0x00000000)
#define UART4_UARTDR_R_PE_ERROR      (0x00000200)

#define UART4_UARTDR_PE_MASK         (0x00000001)
#define UART4_UARTDR_PE_NOERROR      (0x00000000)
#define UART4_UARTDR_PE_ERROR        (0x00000001)
//--------

//--------
#define UART4_UARTDR_R_BE_MASK       (0x00000400)
#define UART4_UARTDR_R_BE_BIT        (10)
#define UART4_UARTDR_R_BE_NOERROR    (0x00000000)
#define UART4_UARTDR_R_BE_ERROR      (0x00000400)

#define UART4_UARTDR_BE_MASK         (0x00000001)
#define UART4_UARTDR_BE_NOERROR      (0x00000000)
#define UART4_UARTDR_BE_ERROR        (0x00000001)
//--------

//--------
#define UART4_UARTDR_R_OE_MASK       (0x00000800)
#define UART4_UARTDR_R_OE_BIT        (11)
#define UART4_UARTDR_R_OE_NOERROR    (0x00000000)
#define UART4_UARTDR_R_OE_ERROR      (0x00000800)

#define UART4_UARTDR_OE_MASK         (0x00000001)
#define UART4_UARTDR_OE_NOERROR      (0x00000000)
#define UART4_UARTDR_OE_ERROR        (0x00000001)
//--------

#define UART4_UARTDR_FE_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTDR_OFFSET)*32)+(8*4))))
#define UART4_UARTDR_PE_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTDR_OFFSET)*32)+(9*4))))
#define UART4_UARTDR_BE_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTDR_OFFSET)*32)+(10*4))))
#define UART4_UARTDR_OE_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTDR_OFFSET)*32)+(11*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.2 UARTRSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTRSR            (((UARTRSR_TypeDef*)(UART4_BASE + UART_UARTRSR_OFFSET )))
#define UART4_UARTRSR_R          (*((volatile const uint32_t *)(UART4_BASE +UART_UARTRSR_OFFSET)))


//--------
#define UART4_UARTRSR_R_FE_MASK       (0x00000001)
#define UART4_UARTRSR_R_FE_BIT        (0)
#define UART4_UARTRSR_R_FE_NOERROR    (0x00000000)
#define UART4_UARTRSR_R_FE_ERROR      (0x00000001)

#define UART4_UARTRSR_FE_MASK         (0x00000001)
#define UART4_UARTRSR_FE_NOERROR      (0x00000000)
#define UART4_UARTRSR_FE_ERROR        (0x00000001)
//--------

//--------
#define UART4_UARTRSR_R_PE_MASK       (0x00000002)
#define UART4_UARTRSR_R_PE_BIT        (1)
#define UART4_UARTRSR_R_PE_NOERROR    (0x00000000)
#define UART4_UARTRSR_R_PE_ERROR      (0x00000002)

#define UART4_UARTRSR_PE_MASK         (0x00000001)
#define UART4_UARTRSR_PE_NOERROR      (0x00000000)
#define UART4_UARTRSR_PE_ERROR        (0x00000001)
//--------

//--------
#define UART4_UARTRSR_R_BE_MASK       (0x00000004)
#define UART4_UARTRSR_R_BE_BIT        (2)
#define UART4_UARTRSR_R_BE_NOERROR    (0x00000000)
#define UART4_UARTRSR_R_BE_ERROR      (0x00000004)

#define UART4_UARTRSR_BE_MASK         (0x00000001)
#define UART4_UARTRSR_BE_NOERROR      (0x00000000)
#define UART4_UARTRSR_BE_ERROR        (0x00000001)
//--------

//--------
#define UART4_UARTRSR_R_OE_MASK       (0x00000008)
#define UART4_UARTRSR_R_OE_BIT        (3)
#define UART4_UARTRSR_R_OE_NOERROR    (0x00000000)
#define UART4_UARTRSR_R_OE_ERROR      (0x00000008)

#define UART4_UARTRSR_OE_MASK         (0x00000001)
#define UART4_UARTRSR_OE_NOERROR      (0x00000000)
#define UART4_UARTRSR_OE_ERROR        (0x00000001)
//--------

#define UART4_UARTRSR_FE_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTRSR_OFFSET)*32)+(0*4))))
#define UART4_UARTRSR_PE_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTRSR_OFFSET)*32)+(1*4))))
#define UART4_UARTRSR_BE_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTRSR_OFFSET)*32)+(2*4))))
#define UART4_UARTRSR_OE_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTRSR_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.2 UARTECR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTECR            (((UARTECR_TypeDef*)(UART4_BASE + UART_UARTECR_OFFSET )))
#define UART4_UARTECR_R          (*((volatile uint32_t *)(UART4_BASE +UART_UARTECR_OFFSET)))

//--------
#define UART4_UARTECR_R_DATA_MASK       (0x000000FF)
#define UART4_UARTECR_R_DATA_BIT        (0)

#define UART4_UARTECR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.3 UARTFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTFR            (((UARTFR_TypeDef*)(UART4_BASE + UART_UARTFR_OFFSET )))
#define UART4_UARTFR_R          (*((volatile const uint32_t *)(UART4_BASE +UART_UARTFR_OFFSET)))

//--------
#define UART4_UARTFR_R_CTS_MASK       (0x00000001)
#define UART4_UARTFR_R_CTS_BIT        (0)
#define UART4_UARTFR_R_CTS_NOASSERT   (0x00000000)
#define UART4_UARTFR_R_CTS_ASSERT     (0x00000001)

#define UART4_UARTFR_CTS_MASK         (0x00000001)
#define UART4_UARTFR_CTS_NOASSERT     (0x00000000)
#define UART4_UARTFR_CTS_ASSERT       (0x00000001)
//--------

//--------
#define UART4_UARTFR_R_BUSY_MASK       (0x00000008)
#define UART4_UARTFR_R_BUSY_BIT        (3)
#define UART4_UARTFR_R_BUSY_NOBUSY     (0x00000000)
#define UART4_UARTFR_R_BUSY_BUSY       (0x00000008)

#define UART4_UARTFR_BUSY_MASK         (0x00000001)
#define UART4_UARTFR_BUSY_NOBUSY       (0x00000000)
#define UART4_UARTFR_BUSY_BUSY         (0x00000001)
//--------

//--------
#define UART4_UARTFR_R_RXFE_MASK       (0x00000010)
#define UART4_UARTFR_R_RXFE_BIT        (4)
#define UART4_UARTFR_R_RXFE_NOEMPTY    (0x00000000)
#define UART4_UARTFR_R_RXFE_EMPTY      (0x00000010)

#define UART4_UARTFR_RXFE_MASK         (0x00000001)
#define UART4_UARTFR_RXFE_NOEMPTY      (0x00000000)
#define UART4_UARTFR_RXFE_EMPTY        (0x00000001)
//--------

//--------
#define UART4_UARTFR_R_TXFF_MASK       (0x00000020)
#define UART4_UARTFR_R_TXFF_BIT        (5)
#define UART4_UARTFR_R_TXFF_NOFULL     (0x00000000)
#define UART4_UARTFR_R_TXFF_FULL       (0x00000020)

#define UART4_UARTFR_TXFF_MASK         (0x00000001)
#define UART4_UARTFR_TXFF_NOFULL       (0x00000000)
#define UART4_UARTFR_TXFF_FULL         (0x00000001)
//--------

//--------
#define UART4_UARTFR_R_RXFF_MASK       (0x00000040)
#define UART4_UARTFR_R_RXFF_BIT        (6)
#define UART4_UARTFR_R_RXFF_NOFULL     (0x00000000)
#define UART4_UARTFR_R_RXFF_FULL       (0x00000040)

#define UART4_UARTFR_RXFF_MASK         (0x00000001)
#define UART4_UARTFR_RXFF_NOFULL       (0x00000000)
#define UART4_UARTFR_RXFF_FULL         (0x00000001)
//--------

//--------
#define UART4_UARTFR_R_TXFE_MASK       (0x00000080)
#define UART4_UARTFR_R_TXFE_BIT        (7)
#define UART4_UARTFR_R_TXFE_NOEMPTY    (0x00000000)
#define UART4_UARTFR_R_TXFE_EMPTY      (0x00000080)

#define UART4_UARTFR_TXFE_MASK         (0x00000001)
#define UART4_UARTFR_TXFE_NOEMPTY      (0x00000000)
#define UART4_UARTFR_TXFE_EMPTY        (0x00000001)
//--------

#define UART4_UARTFR_CTS_BB      (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTFR_OFFSET)*32)+(0*4))))
#define UART4_UARTFR_BUSY_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTFR_OFFSET)*32)+(3*4))))
#define UART4_UARTFR_RXFE_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTFR_OFFSET)*32)+(4*4))))
#define UART4_UARTFR_TXFF_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTFR_OFFSET)*32)+(5*4))))
#define UART4_UARTFR_RXFF_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTFR_OFFSET)*32)+(6*4))))
#define UART4_UARTFR_TXFE_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTFR_OFFSET)*32)+(7*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.4 UARTILPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
#define UART4_UARTILPR            (((UARTILPR_TypeDef*)(UART4_BASE + UART_UARTILPR_OFFSET )))
#define UART4_UARTILPR_R          (*((volatile uint32_t *)(UART4_BASE +UART_UARTILPR_OFFSET)))

//--------
#define UART4_UARTILPR_R_ILPDVSR_MASK       (0x000000FF)
#define UART4_UARTILPR_R_ILPDVSR_BIT        (0)

#define UART4_UARTILPR_ILPDVSR_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.5 UARTIBRD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTIBRD            (((UARTIBRD_TypeDef*)(UART4_BASE + UART_UARTIBRD_OFFSET )))
#define UART4_UARTIBRD_R          (*((volatile uint32_t *)(UART4_BASE +UART_UARTIBRD_OFFSET)))

//--------
#define UART4_UARTIBRD_R_DIVINT_MASK       (0x0000FFFF)
#define UART4_UARTIBRD_R_DIVINT_BIT        (0)

#define UART4_UARTIBRD_DIVINT_MASK         (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.6 UARTFBRD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTFBRD            (((UARTFBRD_TypeDef*)(UART4_BASE + UART_UARTFBRD_OFFSET )))
#define UART4_UARTFBRD_R          (*((volatile uint32_t *)(UART4_BASE +UART_UARTFBRD_OFFSET)))

//--------
#define UART4_UARTFBRD_R_DIVFRAC_MASK       (0x0000003F)
#define UART4_UARTFBRD_R_DIVFRAC_BIT        (0)

#define UART4_UARTFBRD_DIVFRAC_MASK         (0x0000003F)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.7 UARTLCRH ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTLCRH            (((UARTLCRH_TypeDef*)(UART4_BASE + UART_UARTLCRH_OFFSET )))
#define UART4_UARTLCRH_R          (*((volatile uint32_t *)(UART4_BASE +UART_UARTLCRH_OFFSET)))

//--------
#define UART4_UARTLCRH_R_BRK_MASK       (0x00000001)
#define UART4_UARTLCRH_R_BRK_BIT        (0)
#define UART4_UARTLCRH_R_BRK_NORMAL     (0x00000000)
#define UART4_UARTLCRH_R_BRK_LOW        (0x00000001)

#define UART4_UARTLCRH_BRK_MASK         (0x00000001)
#define UART4_UARTLCRH_BRK_NORMAL       (0x00000000)
#define UART4_UARTLCRH_BRK_LOW          (0x00000001)
//--------

//--------
#define UART4_UARTLCRH_R_PEN_MASK       (0x00000002)
#define UART4_UARTLCRH_R_PEN_BIT        (1)
#define UART4_UARTLCRH_R_PEN_DIS        (0x00000000)
#define UART4_UARTLCRH_R_PEN_EN         (0x00000002)

#define UART4_UARTLCRH_PEN_MASK         (0x00000001)
#define UART4_UARTLCRH_PEN_DIS          (0x00000000)
#define UART4_UARTLCRH_PEN_EN           (0x00000001)
//--------

//--------
#define UART4_UARTLCRH_R_EPS_MASK       (0x00000004)
#define UART4_UARTLCRH_R_EPS_BIT        (2)
#define UART4_UARTLCRH_R_EPS_ODD        (0x00000000)
#define UART4_UARTLCRH_R_EPS_EVEN       (0x00000004)

#define UART4_UARTLCRH_EPS_MASK         (0x00000001)
#define UART4_UARTLCRH_EPS_ODD          (0x00000000)
#define UART4_UARTLCRH_EPS_EVEN         (0x00000001)
//--------

//--------
#define UART4_UARTLCRH_R_STP2_MASK       (0x00000008)
#define UART4_UARTLCRH_R_STP2_BIT        (3)
#define UART4_UARTLCRH_R_STP2_ONE        (0x00000000)
#define UART4_UARTLCRH_R_STP2_TWO        (0x00000008)

#define UART4_UARTLCRH_STP2_MASK         (0x00000001)
#define UART4_UARTLCRH_STP2_ONE          (0x00000000)
#define UART4_UARTLCRH_STP2_TWO          (0x00000001)
//--------

//--------
#define UART4_UARTLCRH_R_FEN_MASK       (0x00000010)
#define UART4_UARTLCRH_R_FEN_BIT        (4)
#define UART4_UARTLCRH_R_FEN_DIS        (0x00000000)
#define UART4_UARTLCRH_R_FEN_EN         (0x00000010)

#define UART4_UARTLCRH_FEN_MASK         (0x00000001)
#define UART4_UARTLCRH_FEN_DIS          (0x00000000)
#define UART4_UARTLCRH_FEN_EN           (0x00000001)
//--------

//--------
#define UART4_UARTLCRH_R_WLEN_MASK       (0x00000060)
#define UART4_UARTLCRH_R_WLEN_BIT        (5)
#define UART4_UARTLCRH_R_WLEN_5          (0x00000000)
#define UART4_UARTLCRH_R_WLEN_6          (0x00000020)
#define UART4_UARTLCRH_R_WLEN_7          (0x00000040)
#define UART4_UARTLCRH_R_WLEN_8          (0x00000060)

#define UART4_UARTLCRH_WLEN_MASK         (0x00000003)
#define UART4_UARTLCRH_WLEN_5            (0x00000000)
#define UART4_UARTLCRH_WLEN_6            (0x00000001)
#define UART4_UARTLCRH_WLEN_7            (0x00000002)
#define UART4_UARTLCRH_WLEN_8            (0x00000003)
//--------

//--------
#define UART4_UARTLCRH_R_SPS_MASK       (0x00000080)
#define UART4_UARTLCRH_R_SPS_BIT        (7)
#define UART4_UARTLCRH_R_SPS_LOW        (0x00000000)
#define UART4_UARTLCRH_R_SPS_HIGH       (0x00000080)

#define UART4_UARTLCRH_SPS_MASK         (0x00000001)
#define UART4_UARTLCRH_SPS_LOW          (0x00000000)
#define UART4_UARTLCRH_SPS_HIGH         (0x00000001)
//--------

#define UART4_UARTLCRH_BRK_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTLCRH_OFFSET)*32)+(0*4))))
#define UART4_UARTLCRH_PEN_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTLCRH_OFFSET)*32)+(1*4))))
#define UART4_UARTLCRH_EPS_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTLCRH_OFFSET)*32)+(2*4))))
#define UART4_UARTLCRH_STP2_BB    (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTLCRH_OFFSET)*32)+(3*4))))
#define UART4_UARTLCRH_FEN_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTLCRH_OFFSET)*32)+(4*4))))
#define UART4_UARTLCRH_SPS_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTLCRH_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.8 UARTCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTCTL            (((UARTCTL_TypeDef*)(UART4_BASE + UART_UARTCTL_OFFSET )))
#define UART4_UARTCTL_R          (*((volatile uint32_t *)(UART4_BASE +UART_UARTCTL_OFFSET)))

//--------
#define UART4_UARTCTL_R_UARTEN_MASK       (0x00000001)
#define UART4_UARTCTL_R_UARTEN_BIT        (0)
#define UART4_UARTCTL_R_UARTEN_DIS        (0x00000000)
#define UART4_UARTCTL_R_UARTEN_EN         (0x00000001)

#define UART4_UARTCTL_UARTEN_MASK         (0x00000001)
#define UART4_UARTCTL_UARTEN_DIS          (0x00000000)
#define UART4_UARTCTL_UARTEN_EN           (0x00000001)
//--------

//--------
#define UART4_UARTCTL_R_SIREN_MASK       (0x00000002)
#define UART4_UARTCTL_R_SIREN_BIT        (1)
#define UART4_UARTCTL_R_SIREN_DIS        (0x00000000)
#define UART4_UARTCTL_R_SIREN_EN         (0x00000002)

#define UART4_UARTCTL_SIREN_MASK         (0x00000001)
#define UART4_UARTCTL_SIREN_DIS          (0x00000000)
#define UART4_UARTCTL_SIREN_EN           (0x00000001)
//--------

//--------
#define UART4_UARTCTL_R_SIRLP_MASK       (0x00000004)
#define UART4_UARTCTL_R_SIRLP_BIT        (2)
#define UART4_UARTCTL_R_SIRLP_DIS        (0x00000000)
#define UART4_UARTCTL_R_SIRLP_EN         (0x00000004)

#define UART4_UARTCTL_SIRLP_MASK         (0x00000001)
#define UART4_UARTCTL_SIRLP_DIS          (0x00000000)
#define UART4_UARTCTL_SIRLP_EN           (0x00000001)
//--------

//--------
#define UART4_UARTCTL_R_SMART_MASK       (0x00000008)
#define UART4_UARTCTL_R_SMART_BIT        (3)
#define UART4_UARTCTL_R_SMART_DIS        (0x00000000)
#define UART4_UARTCTL_R_SMART_EN         (0x00000008)

#define UART4_UARTCTL_SMART_MASK         (0x00000001)
#define UART4_UARTCTL_SMART_DIS          (0x00000000)
#define UART4_UARTCTL_SMART_EN           (0x00000001)
//--------

//--------
#define UART4_UARTCTL_R_EOT_MASK       (0x00000010)
#define UART4_UARTCTL_R_EOT_BIT        (4)
#define UART4_UARTCTL_R_EOT_FIFO       (0x00000000)
#define UART4_UARTCTL_R_EOT_ALL        (0x00000010)

#define UART4_UARTCTL_EOT_MASK         (0x00000001)
#define UART4_UARTCTL_EOT_FIFO         (0x00000000)
#define UART4_UARTCTL_EOT_ALL          (0x00000001)
//--------

//--------
#define UART4_UARTCTL_R_HSE_MASK       (0x00000020)
#define UART4_UARTCTL_R_HSE_BIT        (5)
#define UART4_UARTCTL_R_HSE_DIS        (0x00000000)
#define UART4_UARTCTL_R_HSE_EN         (0x00000020)

#define UART4_UARTCTL_HSE_MASK         (0x00000001)
#define UART4_UARTCTL_HSE_DIS          (0x00000000)
#define UART4_UARTCTL_HSE_EN           (0x00000001)
//--------

//--------
#define UART4_UARTCTL_R_LBE_MASK       (0x00000080)
#define UART4_UARTCTL_R_LBE_BIT        (7)
#define UART4_UARTCTL_R_LBE_DIS        (0x00000000)
#define UART4_UARTCTL_R_LBE_EN         (0x00000080)

#define UART4_UARTCTL_LBE_MASK         (0x00000001)
#define UART4_UARTCTL_LBE_DIS          (0x00000000)
#define UART4_UARTCTL_LBE_EN           (0x00000001)
//--------

//--------
#define UART4_UARTCTL_R_TXE_MASK       (0x00000100)
#define UART4_UARTCTL_R_TXE_BIT        (8)
#define UART4_UARTCTL_R_TXE_DIS        (0x00000000)
#define UART4_UARTCTL_R_TXE_EN         (0x00000100)

#define UART4_UARTCTL_TXE_MASK         (0x00000001)
#define UART4_UARTCTL_TXE_DIS          (0x00000000)
#define UART4_UARTCTL_TXE_EN           (0x00000001)
//--------

//--------
#define UART4_UARTCTL_R_RXE_MASK       (0x00000200)
#define UART4_UARTCTL_R_RXE_BIT        (9)
#define UART4_UARTCTL_R_RXE_DIS        (0x00000000)
#define UART4_UARTCTL_R_RXE_EN         (0x00000200)

#define UART4_UARTCTL_RXE_MASK         (0x00000001)
#define UART4_UARTCTL_RXE_DIS          (0x00000000)
#define UART4_UARTCTL_RXE_EN           (0x00000001)
//--------

//--------
#define UART4_UARTCTL_R_RTS_MASK       (0x00000800)
#define UART4_UARTCTL_R_RTS_BIT        (11)
#define UART4_UARTCTL_R_RTS_LOW        (0x00000000)
#define UART4_UARTCTL_R_RTS_HIGH       (0x00000800)

#define UART4_UARTCTL_RTS_MASK         (0x00000001)
#define UART4_UARTCTL_RTS_LOW          (0x00000000)
#define UART4_UARTCTL_RTS_HIGH         (0x00000001)
//--------

//--------
#define UART4_UARTCTL_R_RTSEN_MASK       (0x00004000)
#define UART4_UARTCTL_R_RTSEN_BIT        (14)
#define UART4_UARTCTL_R_RTSEN_DIS        (0x00000000)
#define UART4_UARTCTL_R_RTSEN_EN         (0x00004000)

#define UART4_UARTCTL_RTSEN_MASK         (0x00000001)
#define UART4_UARTCTL_RTSEN_DIS          (0x00000000)
#define UART4_UARTCTL_RTSEN_EN           (0x00000001)
//--------

//--------
#define UART4_UARTCTL_R_CTSEN_MASK       (0x00008000)
#define UART4_UARTCTL_R_CTSEN_BIT        (15)
#define UART4_UARTCTL_R_CTSEN_DIS        (0x00000000)
#define UART4_UARTCTL_R_CTSEN_EN         (0x00008000)

#define UART4_UARTCTL_CTSEN_MASK         (0x00000001)
#define UART4_UARTCTL_CTSEN_DIS          (0x00000000)
#define UART4_UARTCTL_CTSEN_EN           (0x00000001)
//--------

#define UART4_UARTCTL_UARTEN_BB    (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32)+(0*4))))
#define UART4_UARTCTL_SIREN_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32)+(1*4))))
#define UART4_UARTCTL_SIRLP_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32)+(2*4))))
#define UART4_UARTCTL_SMART_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32)+(3*4))))
#define UART4_UARTCTL_EOT_BB       (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32)+(4*4))))
#define UART4_UARTCTL_HSE_BB       (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32)+(5*4))))
#define UART4_UARTCTL_LBE_BB       (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32)+(7*4))))
#define UART4_UARTCTL_TXE_BB       (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32)+(8*4))))
#define UART4_UARTCTL_RXE_BB       (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32)+(9*4))))
#define UART4_UARTCTL_RTS_BB       (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32)+(11*4))))
#define UART4_UARTCTL_RTSEN_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32)+(14*4))))
#define UART4_UARTCTL_CTSEN_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTCTL_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.9 UARTIFLS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTIFLS            (((UARTIFLS_TypeDef*)(UART4_BASE + UART_UARTIFLS_OFFSET )))
#define UART4_UARTIFLS_R          (*((volatile uint32_t *)(UART4_BASE +UART_UARTIFLS_OFFSET)))

//--------
#define UART4_UARTIFLS_R_TXIFLSEL_MASK       (0x00000007)
#define UART4_UARTIFLS_R_TXIFLSEL_BIT        (0)
#define UART4_UARTIFLS_R_TXIFLSEL_1_4        (0x00000000)
#define UART4_UARTIFLS_R_TXIFLSEL_1_2        (0x00000002)
#define UART4_UARTIFLS_R_TXIFLSEL_3_4        (0x00000003)
#define UART4_UARTIFLS_R_TXIFLSEL_7_8        (0x00000004)

#define UART4_UARTIFLS_TXIFLSEL_MASK         (0x00000007)
#define UART4_UARTIFLS_TXIFLSEL_1_4          (0x00000000)
#define UART4_UARTIFLS_TXIFLSEL_1_2          (0x00000002)
#define UART4_UARTIFLS_TXIFLSEL_3_4          (0x00000003)
#define UART4_UARTIFLS_TXIFLSEL_7_8          (0x00000004)
//--------

//--------
#define UART4_UARTIFLS_R_RXIFLSEL_MASK       (0x00000038)
#define UART4_UARTIFLS_R_RXIFLSEL_BIT        (0)
#define UART4_UARTIFLS_R_RXIFLSEL_1_4        (0x00000000)
#define UART4_UARTIFLS_R_RXIFLSEL_1_2        (0x00000010)
#define UART4_UARTIFLS_R_RXIFLSEL_3_4        (0x00000018)
#define UART4_UARTIFLS_R_RXIFLSEL_7_8        (0x00000020)

#define UART4_UARTIFLS_RXIFLSEL_MASK         (0x00000007)
#define UART4_UARTIFLS_RXIFLSEL_1_4          (0x00000000)
#define UART4_UARTIFLS_RXIFLSEL_1_2          (0x00000002)
#define UART4_UARTIFLS_RXIFLSEL_3_4          (0x00000003)
#define UART4_UARTIFLS_RXIFLSEL_7_8          (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.10 UARTIM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTIM            (((UARTIM_TypeDef*)(UART4_BASE + UART_UARTIM_OFFSET )))
#define UART4_UARTIM_R          (*((volatile uint32_t *)(UART4_BASE +UART_UARTIM_OFFSET)))

//--------
#define UART4_UARTIM_R_CTSIM_MASK       (0x00000002)
#define UART4_UARTIM_R_CTSIM_BIT        (1)
#define UART4_UARTIM_R_CTSIM_DIS        (0x00000000)
#define UART4_UARTIM_R_CTSIM_EN         (0x00000002)

#define UART4_UARTIM_CTSIM_MASK         (0x00000001)
#define UART4_UARTIM_CTSIM_DIS          (0x00000000)
#define UART4_UARTIM_CTSIM_EN           (0x00000001)
//--------

//--------
#define UART4_UARTIM_R_RXIM_MASK       (0x00000010)
#define UART4_UARTIM_R_RXIM_BIT        (4)
#define UART4_UARTIM_R_RXIM_DIS        (0x00000000)
#define UART4_UARTIM_R_RXIM_EN         (0x00000010)

#define UART4_UARTIM_RXIM_MASK         (0x00000001)
#define UART4_UARTIM_RXIM_DIS          (0x00000000)
#define UART4_UARTIM_RXIM_EN           (0x00000001)
//--------

//--------
#define UART4_UARTIM_R_TXIM_MASK       (0x00000020)
#define UART4_UARTIM_R_TXIM_BIT        (5)
#define UART4_UARTIM_R_TXIM_DIS        (0x00000000)
#define UART4_UARTIM_R_TXIM_EN         (0x00000020)

#define UART4_UARTIM_TXIM_MASK         (0x00000001)
#define UART4_UARTIM_TXIM_DIS          (0x00000000)
#define UART4_UARTIM_TXIM_EN           (0x00000001)
//--------

//--------
#define UART4_UARTIM_R_RTIM_MASK       (0x00000040)
#define UART4_UARTIM_R_RTIM_BIT        (6)
#define UART4_UARTIM_R_RTIM_DIS        (0x00000000)
#define UART4_UARTIM_R_RTIM_EN         (0x00000040)

#define UART4_UARTIM_RTIM_MASK         (0x00000001)
#define UART4_UARTIM_RTIM_DIS          (0x00000000)
#define UART4_UARTIM_RTIM_EN           (0x00000001)
//--------

//--------
#define UART4_UARTIM_R_FEIM_MASK       (0x00000080)
#define UART4_UARTIM_R_FEIM_BIT        (7)
#define UART4_UARTIM_R_FEIM_DIS        (0x00000000)
#define UART4_UARTIM_R_FEIM_EN         (0x00000080)

#define UART4_UARTIM_FEIM_MASK         (0x00000001)
#define UART4_UARTIM_FEIM_DIS          (0x00000000)
#define UART4_UARTIM_FEIM_EN           (0x00000001)
//--------

//--------
#define UART4_UARTIM_R_PEIM_MASK       (0x00000100)
#define UART4_UARTIM_R_PEIM_BIT        (8)
#define UART4_UARTIM_R_PEIM_DIS        (0x00000000)
#define UART4_UARTIM_R_PEIM_EN         (0x00000100)

#define UART4_UARTIM_PEIM_MASK         (0x00000001)
#define UART4_UARTIM_PEIM_DIS          (0x00000000)
#define UART4_UARTIM_PEIM_EN           (0x00000001)
//--------

//--------
#define UART4_UARTIM_R_BEIM_MASK       (0x00000200)
#define UART4_UARTIM_R_BEIM_BIT        (9)
#define UART4_UARTIM_R_BEIM_DIS        (0x00000000)
#define UART4_UARTIM_R_BEIM_EN         (0x00000200)

#define UART4_UARTIM_BEIM_MASK         (0x00000001)
#define UART4_UARTIM_BEIM_DIS          (0x00000000)
#define UART4_UARTIM_BEIM_EN           (0x00000001)
//--------

//--------
#define UART4_UARTIM_R_OEIM_MASK       (0x00000400)
#define UART4_UARTIM_R_OEIM_BIT        (10)
#define UART4_UARTIM_R_OEIM_DIS        (0x00000000)
#define UART4_UARTIM_R_OEIM_EN         (0x00000400)

#define UART4_UARTIM_OEIM_MASK         (0x00000001)
#define UART4_UARTIM_OEIM_DIS          (0x00000000)
#define UART4_UARTIM_OEIM_EN           (0x00000001)
//--------

//--------
#define UART4_UARTIM_R_9BITIM_MASK       (0x00001000)
#define UART4_UARTIM_R_9BITIM_BIT        (12)
#define UART4_UARTIM_R_9BITIM_DIS        (0x00000000)
#define UART4_UARTIM_R_9BITIM_EN         (0x00001000)

#define UART4_UARTIM_9BITIM_MASK         (0x00000001)
#define UART4_UARTIM_9BITIM_DIS          (0x00000000)
#define UART4_UARTIM_9BITIM_EN           (0x00000001)
//--------

#define UART4_UARTIM_CTSIM_BB    (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTIM_OFFSET)*32)+(1*4))))
#define UART4_UARTIM_RXIM_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTIM_OFFSET)*32)+(4*4))))
#define UART4_UARTIM_TXIM_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTIM_OFFSET)*32)+(5*4))))
#define UART4_UARTIM_RTIM_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTIM_OFFSET)*32)+(6*4))))
#define UART4_UARTIM_FEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTIM_OFFSET)*32)+(7*4))))
#define UART4_UARTIM_PEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTIM_OFFSET)*32)+(8*4))))
#define UART4_UARTIM_BEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTIM_OFFSET)*32)+(9*4))))
#define UART4_UARTIM_OEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTIM_OFFSET)*32)+(10*4))))
#define UART4_UARTIM_9BITIM_BB   (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTIM_OFFSET)*32)+(12*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.11 UARTRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTRIS            (((UARTRIS_TypeDef*)(UART4_BASE + UART_UARTRIS_OFFSET )))
#define UART4_UARTRIS_R          (*((volatile uint32_t *)(UART4_BASE +UART_UARTRIS_OFFSET)))



//--------
#define UART4_UARTRIS_R_CTSRIS_MASK       (0x00000002)
#define UART4_UARTRIS_R_CTSRIS_BIT        (1)
#define UART4_UARTRIS_R_CTSRIS_NOACTIVE   (0x00000000)
#define UART4_UARTRIS_R_CTSRIS_ACTIVE     (0x00000002)

#define UART4_UARTRIS_CTSRIS_MASK         (0x00000001)
#define UART4_UARTRIS_CTSRIS_NOACTIVE     (0x00000000)
#define UART4_UARTRIS_CTSRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART4_UARTRIS_R_RXRIS_MASK       (0x00000010)
#define UART4_UARTRIS_R_RXRIS_BIT        (4)
#define UART4_UARTRIS_R_RXRIS_NOACTIVE   (0x00000000)
#define UART4_UARTRIS_R_RXRIS_ACTIVE     (0x00000010)

#define UART4_UARTRIS_RXRIS_MASK         (0x00000001)
#define UART4_UARTRIS_RXRIS_NOACTIVE     (0x00000000)
#define UART4_UARTRIS_RXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART4_UARTRIS_R_TXRIS_MASK       (0x00000020)
#define UART4_UARTRIS_R_TXRIS_BIT        (5)
#define UART4_UARTRIS_R_TXRIS_NOACTIVE   (0x00000000)
#define UART4_UARTRIS_R_TXRIS_ACTIVE     (0x00000020)

#define UART4_UARTRIS_TXRIS_MASK         (0x00000001)
#define UART4_UARTRIS_TXRIS_NOACTIVE     (0x00000000)
#define UART4_UARTRIS_TXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART4_UARTRIS_R_RTRIS_MASK       (0x00000040)
#define UART4_UARTRIS_R_RTRIS_BIT        (6)
#define UART4_UARTRIS_R_RTRIS_NOACTIVE   (0x00000000)
#define UART4_UARTRIS_R_RTRIS_ACTIVE     (0x00000040)

#define UART4_UARTRIS_RTRIS_MASK         (0x00000001)
#define UART4_UARTRIS_RTRIS_NOACTIVE     (0x00000000)
#define UART4_UARTRIS_RTRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART4_UARTRIS_R_FERIS_MASK       (0x00000080)
#define UART4_UARTRIS_R_FERIS_BIT        (7)
#define UART4_UARTRIS_R_FERIS_NOACTIVE   (0x00000000)
#define UART4_UARTRIS_R_FERIS_ACTIVE     (0x00000080)

#define UART4_UARTRIS_FERIS_MASK         (0x00000001)
#define UART4_UARTRIS_FERIS_NOACTIVE     (0x00000000)
#define UART4_UARTRIS_FERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART4_UARTRIS_R_PERIS_MASK       (0x00000100)
#define UART4_UARTRIS_R_PERIS_BIT        (8)
#define UART4_UARTRIS_R_PERIS_NOACTIVE   (0x00000000)
#define UART4_UARTRIS_R_PERIS_ACTIVE     (0x00000100)

#define UART4_UARTRIS_PERIS_MASK         (0x00000001)
#define UART4_UARTRIS_PERIS_NOACTIVE     (0x00000000)
#define UART4_UARTRIS_PERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART4_UARTRIS_R_BERIS_MASK       (0x00000200)
#define UART4_UARTRIS_R_BERIS_BIT        (9)
#define UART4_UARTRIS_R_BERIS_NOACTIVE   (0x00000000)
#define UART4_UARTRIS_R_BERIS_ACTIVE     (0x00000200)

#define UART4_UARTRIS_BERIS_MASK         (0x00000001)
#define UART4_UARTRIS_BERIS_NOACTIVE     (0x00000000)
#define UART4_UARTRIS_BERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART4_UARTRIS_R_OERIS_MASK       (0x00000400)
#define UART4_UARTRIS_R_OERIS_BIT        (10)
#define UART4_UARTRIS_R_OERIS_NOACTIVE   (0x00000000)
#define UART4_UARTRIS_R_OERIS_ACTIVE     (0x00000400)

#define UART4_UARTRIS_OERIS_MASK         (0x00000001)
#define UART4_UARTRIS_OERIS_NOACTIVE     (0x00000000)
#define UART4_UARTRIS_OERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART4_UARTRIS_R_9BITRIS_MASK       (0x00001000)
#define UART4_UARTRIS_R_9BITRIS_BIT        (12)
#define UART4_UARTRIS_R_9BITRIS_NOACTIVE   (0x00000000)
#define UART4_UARTRIS_R_9BITRIS_ACTIVE     (0x00001000)

#define UART4_UARTRIS_9BITRIS_MASK         (0x00000001)
#define UART4_UARTRIS_9BITRIS_NOACTIVE     (0x00000000)
#define UART4_UARTRIS_9BITRIS_ACTIVE       (0x00000001)
//--------

#define UART4_UARTRIS_CTSRIS_BB    (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32)+(1*4))))
#define UART4_UARTRIS_RXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32)+(4*4))))
#define UART4_UARTRIS_TXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32)+(5*4))))
#define UART4_UARTRIS_RTRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32)+(6*4))))
#define UART4_UARTRIS_FERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32)+(7*4))))
#define UART4_UARTRIS_PERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32)+(8*4))))
#define UART4_UARTRIS_BERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32)+(9*4))))
#define UART4_UARTRIS_OERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32)+(10*4))))
#define UART4_UARTRIS_9BITRIS_BB   (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTRIS_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.12 UARTMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTMIS            (((UARTMIS_TypeDef*)(UART4_BASE + UART_UARTMIS_OFFSET )))
#define UART4_UARTMIS_R          (*((volatile const uint32_t *)(UART4_BASE +UART_UARTMIS_OFFSET)))



//--------
#define UART4_UARTMIS_R_CTSMIS_MASK       (0x00000002)
#define UART4_UARTMIS_R_CTSMIS_BIT        (1)
#define UART4_UARTMIS_R_CTSMIS_NOOCCUR    (0x00000000)
#define UART4_UARTMIS_R_CTSMIS_OCCUR      (0x00000002)

#define UART4_UARTMIS_CTSMIS_MASK         (0x00000001)
#define UART4_UARTMIS_CTSMIS_NOOCCUR      (0x00000000)
#define UART4_UARTMIS_CTSMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART4_UARTMIS_R_RXMIS_MASK       (0x00000010)
#define UART4_UARTMIS_R_RXMIS_BIT        (4)
#define UART4_UARTMIS_R_RXMIS_NOOCCUR    (0x00000000)
#define UART4_UARTMIS_R_RXMIS_OCCUR      (0x00000010)

#define UART4_UARTMIS_RXMIS_MASK         (0x00000001)
#define UART4_UARTMIS_RXMIS_NOOCCUR      (0x00000000)
#define UART4_UARTMIS_RXMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART4_UARTMIS_R_TXMIS_MASK       (0x00000020)
#define UART4_UARTMIS_R_TXMIS_BIT        (5)
#define UART4_UARTMIS_R_TXMIS_NOOCCUR    (0x00000000)
#define UART4_UARTMIS_R_TXMIS_OCCUR      (0x00000020)

#define UART4_UARTMIS_TXMIS_MASK         (0x00000001)
#define UART4_UARTMIS_TXMIS_NOOCCUR      (0x00000000)
#define UART4_UARTMIS_TXMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART4_UARTMIS_R_RTMIS_MASK       (0x00000040)
#define UART4_UARTMIS_R_RTMIS_BIT        (6)
#define UART4_UARTMIS_R_RTMIS_NOOCCUR    (0x00000000)
#define UART4_UARTMIS_R_RTMIS_OCCUR      (0x00000040)

#define UART4_UARTMIS_RTMIS_MASK         (0x00000001)
#define UART4_UARTMIS_RTMIS_NOOCCUR      (0x00000000)
#define UART4_UARTMIS_RTMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART4_UARTMIS_R_FEMIS_MASK       (0x00000080)
#define UART4_UARTMIS_R_FEMIS_BIT        (7)
#define UART4_UARTMIS_R_FEMIS_NOOCCUR    (0x00000000)
#define UART4_UARTMIS_R_FEMIS_OCCUR      (0x00000080)

#define UART4_UARTMIS_FEMIS_MASK         (0x00000001)
#define UART4_UARTMIS_FEMIS_NOOCCUR      (0x00000000)
#define UART4_UARTMIS_FEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART4_UARTMIS_R_PEMIS_MASK       (0x00000100)
#define UART4_UARTMIS_R_PEMIS_BIT        (8)
#define UART4_UARTMIS_R_PEMIS_NOOCCUR    (0x00000000)
#define UART4_UARTMIS_R_PEMIS_OCCUR      (0x00000100)

#define UART4_UARTMIS_PEMIS_MASK         (0x00000001)
#define UART4_UARTMIS_PEMIS_NOOCCUR      (0x00000000)
#define UART4_UARTMIS_PEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART4_UARTMIS_R_BEMIS_MASK       (0x00000200)
#define UART4_UARTMIS_R_BEMIS_BIT        (9)
#define UART4_UARTMIS_R_BEMIS_NOOCCUR    (0x00000000)
#define UART4_UARTMIS_R_BEMIS_OCCUR      (0x00000200)

#define UART4_UARTMIS_BEMIS_MASK         (0x00000001)
#define UART4_UARTMIS_BEMIS_NOOCCUR      (0x00000000)
#define UART4_UARTMIS_BEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART4_UARTMIS_R_OEMIS_MASK       (0x00000400)
#define UART4_UARTMIS_R_OEMIS_BIT        (10)
#define UART4_UARTMIS_R_OEMIS_NOOCCUR    (0x00000000)
#define UART4_UARTMIS_R_OEMIS_OCCUR      (0x00000400)

#define UART4_UARTMIS_OEMIS_MASK         (0x00000001)
#define UART4_UARTMIS_OEMIS_NOOCCUR      (0x00000000)
#define UART4_UARTMIS_OEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART4_UARTMIS_R_9BITMIS_MASK       (0x00001000)
#define UART4_UARTMIS_R_9BITMIS_BIT        (12)
#define UART4_UARTMIS_R_9BITMIS_NOOCCUR    (0x00000000)
#define UART4_UARTMIS_R_9BITMIS_OCCUR      (0x00001000)

#define UART4_UARTMIS_9BITMIS_MASK         (0x00000001)
#define UART4_UARTMIS_9BITMIS_NOOCCUR      (0x00000000)
#define UART4_UARTMIS_9BITMIS_OCCUR        (0x00000001)
//--------


#define UART4_UARTMIS_CTSMIS_BB    (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32)+(1*4))))
#define UART4_UARTMIS_RXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32)+(4*4))))
#define UART4_UARTMIS_TXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32)+(5*4))))
#define UART4_UARTMIS_RTMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32)+(6*4))))
#define UART4_UARTMIS_FEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32)+(7*4))))
#define UART4_UARTMIS_PEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32)+(8*4))))
#define UART4_UARTMIS_BEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32)+(9*4))))
#define UART4_UARTMIS_OEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32)+(10*4))))
#define UART4_UARTMIS_9BITMIS_BB   (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTMIS_OFFSET)*32)+(12*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.13 UARTICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTICR            (((UARTICR_TypeDef*)(UART4_BASE + UART_UARTICR_OFFSET )))
#define UART4_UARTICR_R          (*((volatile uint32_t *)(UART4_BASE +UART_UARTICR_OFFSET)))


//--------
#define UART4_UARTICR_R_CTSIC_MASK       (0x00000002)
#define UART4_UARTICR_R_CTSIC_BIT        (1)
#define UART4_UARTICR_R_CTSIC_CLEAR      (0x00000002)

#define UART4_UARTICR_CTSIC_MASK         (0x00000001)
#define UART4_UARTICR_CTSIC_CLEAR        (0x00000001)
//--------

//--------
#define UART4_UARTICR_R_RXIC_MASK       (0x00000010)
#define UART4_UARTICR_R_RXIC_BIT        (4)
#define UART4_UARTICR_R_RXIC_CLEAR      (0x00000010)

#define UART4_UARTICR_RXIC_MASK         (0x00000001)
#define UART4_UARTICR_RXIC_CLEAR        (0x00000001)
//--------

//--------
#define UART4_UARTICR_R_TXIC_MASK       (0x00000020)
#define UART4_UARTICR_R_TXIC_BIT        (5)
#define UART4_UARTICR_R_TXIC_CLEAR      (0x00000020)

#define UART4_UARTICR_TXIC_MASK         (0x00000001)
#define UART4_UARTICR_TXIC_CLEAR        (0x00000001)
//--------

//--------
#define UART4_UARTICR_R_RTIC_MASK       (0x00000040)
#define UART4_UARTICR_R_RTIC_BIT        (6)
#define UART4_UARTICR_R_RTIC_CLEAR      (0x00000040)

#define UART4_UARTICR_RTIC_MASK         (0x00000001)
#define UART4_UARTICR_RTIC_CLEAR        (0x00000001)
//--------

//--------
#define UART4_UARTICR_R_FEIC_MASK       (0x00000080)
#define UART4_UARTICR_R_FEIC_BIT        (7)
#define UART4_UARTICR_R_FEIC_CLEAR      (0x00000080)

#define UART4_UARTICR_FEIC_MASK         (0x00000001)
#define UART4_UARTICR_FEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART4_UARTICR_R_PEIC_MASK       (0x00000100)
#define UART4_UARTICR_R_PEIC_BIT        (8)
#define UART4_UARTICR_R_PEIC_CLEAR      (0x00000100)

#define UART4_UARTICR_PEIC_MASK         (0x00000001)
#define UART4_UARTICR_PEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART4_UARTICR_R_BEIC_MASK       (0x00000200)
#define UART4_UARTICR_R_BEIC_BIT        (9)
#define UART4_UARTICR_R_BEIC_CLEAR      (0x00000200)

#define UART4_UARTICR_BEIC_MASK         (0x00000001)
#define UART4_UARTICR_BEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART4_UARTICR_R_OEIC_MASK       (0x00000400)
#define UART4_UARTICR_R_OEIC_BIT        (10)
#define UART4_UARTICR_R_OEIC_CLEAR      (0x00000400)

#define UART4_UARTICR_OEIC_MASK         (0x00000001)
#define UART4_UARTICR_OEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART4_UARTICR_R_9BITIC_MASK       (0x00001000)
#define UART4_UARTICR_R_9BITIC_BIT        (12)
#define UART4_UARTICR_R_9BITIC_CLEAR      (0x00001000)

#define UART4_UARTICR_9BITIC_MASK         (0x00000001)
#define UART4_UARTICR_9BITIC_CLEAR        (0x00000001)
//--------

#define UART4_UARTICR_CTSICR_BB    (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTICR_OFFSET)*32)+(1*4))))
#define UART4_UARTICR_RXICR_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTICR_OFFSET)*32)+(4*4))))
#define UART4_UARTICR_TXICR_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTICR_OFFSET)*32)+(5*4))))
#define UART4_UARTICR_RTICR_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTICR_OFFSET)*32)+(6*4))))
#define UART4_UARTICR_FEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTICR_OFFSET)*32)+(7*4))))
#define UART4_UARTICR_PEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTICR_OFFSET)*32)+(8*4))))
#define UART4_UARTICR_BEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTICR_OFFSET)*32)+(9*4))))
#define UART4_UARTICR_OEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTICR_OFFSET)*32)+(10*4))))
#define UART4_UARTICR_9BITICR_BB   (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTICR_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.14 UARTDMACTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTDMACTL            (((UARTDMACTL_TypeDef*)(UART4_BASE + UART_UARTDMACTL_OFFSET )))
#define UART4_UARTDMACTL_R          (*((volatile uint32_t *)(UART4_BASE +UART_UARTDMACTL_OFFSET)))

//--------
#define UART4_UARTDMACTL_R_RXDMAE_MASK       (0x00000001)
#define UART4_UARTDMACTL_R_RXDMAE_BIT        (0)
#define UART4_UARTDMACTL_R_RXDMAE_DIS        (0x00000000)
#define UART4_UARTDMACTL_R_RXDMAE_EN         (0x00008000)

#define UART4_UARTDMACTL_RXDMAE_MASK         (0x00000001)
#define UART4_UARTDMACTL_RXDMAE_DIS          (0x00000000)
#define UART4_UARTDMACTL_RXDMAE_EN           (0x00000001)
//--------

//--------
#define UART4_UARTDMACTL_R_TXDMAE_MASK       (0x00000002)
#define UART4_UARTDMACTL_R_TXDMAE_BIT        (1)
#define UART4_UARTDMACTL_R_TXDMAE_DIS        (0x00000000)
#define UART4_UARTDMACTL_R_TXDMAE_EN         (0x00000002)

#define UART4_UARTDMACTL_TXDMAE_MASK         (0x00000001)
#define UART4_UARTDMACTL_TXDMAE_DIS          (0x00000000)
#define UART4_UARTDMACTL_TXDMAE_EN           (0x00000001)
//--------

//--------
#define UART4_UARTDMACTL_R_DMAERR_MASK       (0x00000004)
#define UART4_UARTDMACTL_R_DMAERR_BIT        (2)
#define UART4_UARTDMACTL_R_DMAERR_NOERROR    (0x00000000)
#define UART4_UARTDMACTL_R_DMAERR_ERROR      (0x00000004)

#define UART4_UARTDMACTL_DMAERR_MASK         (0x00000001)
#define UART4_UARTDMACTL_DMAERR_NOERROR      (0x00000000)
#define UART4_UARTDMACTL_DMAERR_ERROR        (0x00000001)
//--------

#define UART4_UARTDMACTL_RXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(0*4))))
#define UART4_UARTDMACTL_TXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(1*4))))
#define UART4_UARTDMACTL_DMAERR_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(2*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.15 UART9BITADDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UART9BITADDR            (((UART9BITADDR_TypeDef*)(UART4_BASE + UART_UART9BITADDR_OFFSET )))
#define UART4_UART9BITADDR_R          (*((volatile uint32_t *)(UART4_BASE +UART_UART9BITADDR_OFFSET)))

//--------
#define UART4_UART9BITADDR_R_ADDR_MASK       (0x000000FF)
#define UART4_UART9BITADDR_R_ADDR_BIT        (0)

#define UART4_UART9BITADDR_ADDR_MASK         (0x000000FF)
//--------

//--------
#define UART4_UART9BITADDR_R_9BITEN_MASK       (0x00008000)
#define UART4_UART9BITADDR_R_9BITEN_BIT        (15)
#define UART4_UART9BITADDR_R_9BITEN_DIS        (0x00000000)
#define UART4_UART9BITADDR_R_9BITEN_EN         (0x00008000)

#define UART4_UART9BITADDR_9BITEN_MASK         (0x00000001)
#define UART4_UART9BITADDR_9BITEN_DIS          (0x00000000)
#define UART4_UART9BITADDR_9BITEN_EN           (0x00000001)
//--------

#define UART4_UART9BITADDR_9BITEN_BB     (*((volatile uint32_t *)(0x42000000+((UART4_OFFSET+UART_UART9BITADDR_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.16 UART9BITAMASK ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UART9BITAMASK            (((UART9BITAMASK_TypeDef*)(UART4_BASE + UART_UART9BITAMASK_OFFSET )))
#define UART4_UART9BITAMASK_R          (*((volatile uint32_t *)(UART4_BASE +UART_UART9BITAMASK_OFFSET)))

//--------
#define UART4_UART9BITAMASK_R_MASK_MASK       (0x000000FF)
#define UART4_UART9BITAMASK_R_MASK_BIT        (0)

#define UART4_UART9BITAMASK_MASK_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.17 UARTPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTPP            (((UARTPP_TypeDef*)(UART4_BASE + UART_UARTPP_OFFSET )))
#define UART4_UARTPP_R          (*((volatile const uint32_t *)(UART4_BASE +UART_UARTPP_OFFSET)))

//--------
#define UART4_UARTPP_R_SC_MASK       (0x00000001)
#define UART4_UARTPP_R_SC_BIT        (0)
#define UART4_UARTPP_R_SC_NOSUPPORT  (0x00000000)
#define UART4_UARTPP_R_SC_SUPPORT    (0x00000001)

#define UART4_UARTPP_SC_MASK         (0x00000001)
#define UART4_UARTPP_SC_NOSUPPORT    (0x00000000)
#define UART4_UARTPP_SC_SUPPORT      (0x00000001)
//--------

//--------
#define UART4_UARTPP_R_NB_MASK       (0x00000002)
#define UART4_UARTPP_R_NB_BIT        (1)
#define UART4_UARTPP_R_NB_NOSUPPORT  (0x00000000)
#define UART4_UARTPP_R_NB_SUPPORT    (0x00000002)

#define UART4_UARTPP_NB_MASK         (0x00000001)
#define UART4_UARTPP_NB_NOSUPPORT    (0x00000000)
#define UART4_UARTPP_NB_SUPPORT      (0x00000001)
//--------

#define UART4_UARTPP_SC_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTPP_OFFSET)*32)+(0*4))))
#define UART4_UARTPP_NB_BB     (*((volatile const uint32_t *)(0x42000000+((UART4_OFFSET+UART_UARTPP_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.18 UARTCC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTCC            (((UARTCC_TypeDef*)(UART4_BASE + UART_UARTCC_OFFSET )))
#define UART4_UARTCC_R          (*((volatile uint32_t *)(UART4_BASE +UART_UARTCC_OFFSET)))


//--------
#define UART4_UARTCC_R_CS_MASK       (0x0000000F)
#define UART4_UARTCC_R_CS_BIT        (0)
#define UART4_UARTCC_R_CS_SYSCLK     (0x00000000)
#define UART4_UARTCC_R_CS_PIOSC      (0x00000005)

#define UART4_UARTCC_CS_MASK         (0x0000000F)
#define UART4_UARTCC_CS_SYSCLK       (0x00000000)
#define UART4_UARTCC_CS_PIOSC        (0x00000005)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.19 UARTPeriphID4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTPeriphID4            (((UARTPeriphID4_TypeDef*)(UART4_BASE + UART_UARTPeriphID4_OFFSET )))
#define UART4_UARTPeriphID4_R          (*((volatile const uint32_t *)(UART4_BASE +UART_UARTPeriphID4_OFFSET)))

//--------
#define UART4_UARTPeriphID4_R_PID4_MASK       (0x000000FF)
#define UART4_UARTPeriphID4_R_PID4_BIT        (0)
#define UART4_UARTPeriphID4_R_PID4_DEFAULT    (0x00000000)

#define UART4_UARTPeriphID4_PID4_MASK         (0x000000FF)
#define UART4_UARTPeriphID4_PID4_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.20 UARTPeriphID5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTPeriphID5            (((UARTPeriphID5_TypeDef*)(UART4_BASE + UART_UARTPeriphID5_OFFSET )))
#define UART4_UARTPeriphID5_R          (*((volatile const uint32_t *)(UART4_BASE +UART_UARTPeriphID5_OFFSET)))

//--------
#define UART4_UARTPeriphID5_R_PID5_MASK       (0x000000FF)
#define UART4_UARTPeriphID5_R_PID5_BIT        (0)
#define UART4_UARTPeriphID5_R_PID5_DEFAULT    (0x00000000)

#define UART4_UARTPeriphID5_PID5_MASK         (0x000000FF)
#define UART4_UARTPeriphID5_PID5_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.21 UARTPeriphID6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTPeriphID6            (((UARTPeriphID6_TypeDef*)(UART4_BASE + UART_UARTPeriphID6_OFFSET )))
#define UART4_UARTPeriphID6_R          (*((volatile const uint32_t *)(UART4_BASE +UART_UARTPeriphID6_OFFSET)))



//--------
#define UART4_UARTPeriphID6_R_PID6_MASK       (0x000000FF)
#define UART4_UARTPeriphID6_R_PID6_BIT        (0)
#define UART4_UARTPeriphID6_R_PID6_DEFAULT    (0x00000000)

#define UART4_UARTPeriphID6_PID6_MASK         (0x000000FF)
#define UART4_UARTPeriphID6_PID6_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.22 UARTPeriphID7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTPeriphID7            (((UARTPeriphID7_TypeDef*)(UART4_BASE + UART_UARTPeriphID7_OFFSET )))
#define UART4_UARTPeriphID7_R          (*((volatile const uint32_t *)(UART4_BASE +UART_UARTPeriphID7_OFFSET)))



//--------
#define UART4_UARTPeriphID7_R_PID7_MASK       (0x000000FF)
#define UART4_UARTPeriphID7_R_PID7_BIT        (0)
#define UART4_UARTPeriphID7_R_PID7_DEFAULT    (0x00000000)

#define UART4_UARTPeriphID7_PID7_MASK         (0x000000FF)
#define UART4_UARTPeriphID7_PID7_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.23 UARTPeriphID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTPeriphID0            (((UARTPeriphID0_TypeDef*)(UART4_BASE + UART_UARTPeriphID0_OFFSET )))
#define UART4_UARTPeriphID0_R          (*((volatile const uint32_t *)(UART4_BASE +UART_UARTPeriphID0_OFFSET)))



//--------
#define UART4_UARTPeriphID0_R_PID0_MASK       (0x000000FF)
#define UART4_UARTPeriphID0_R_PID0_BIT        (0)
#define UART4_UARTPeriphID0_R_PID0_DEFAULT    (0x00000060)

#define UART4_UARTPeriphID0_PID0_MASK         (0x000000FF)
#define UART4_UARTPeriphID0_PID0_DEFAULT      (0x00000060)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.24 UARTPeriphID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTPeriphID1            (((UARTPeriphID1_TypeDef*)(UART4_BASE + UART_UARTPeriphID1_OFFSET )))
#define UART4_UARTPeriphID1_R          (*((volatile const uint32_t *)(UART4_BASE +UART_UARTPeriphID1_OFFSET)))



//--------
#define UART4_UARTPeriphID1_R_PID1_MASK       (0x000000FF)
#define UART4_UARTPeriphID1_R_PID1_BIT        (0)
#define UART4_UARTPeriphID1_R_PID1_DEFAULT    (0x00000000)

#define UART4_UARTPeriphID1_PID1_MASK         (0x000000FF)
#define UART4_UARTPeriphID1_PID1_DEFAULT      (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.25 UARTPeriphID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTPeriphID2            (((UARTPeriphID2_TypeDef*)(UART4_BASE + UART_UARTPeriphID2_OFFSET )))
#define UART4_UARTPeriphID2_R          (*((volatile const uint32_t *)(UART4_BASE +UART_UARTPeriphID2_OFFSET)))

//--------
#define UART4_UARTPeriphID2_R_PID2_MASK       (0x000000FF)
#define UART4_UARTPeriphID2_R_PID2_BIT        (0)
#define UART4_UARTPeriphID2_R_PID2_DEFAULT    (0x00000018)

#define UART4_UARTPeriphID2_PID2_MASK         (0x000000FF)
#define UART4_UARTPeriphID2_PID2_DEFAULT      (0x00000018)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.26 UARTPeriphID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTPeriphID3            (((UARTPeriphID3_TypeDef*)(UART4_BASE + UART_UARTPeriphID3_OFFSET )))
#define UART4_UARTPeriphID3_R          (*((volatile const uint32_t *)(UART4_BASE +UART_UARTPeriphID3_OFFSET)))

//--------
#define UART4_UARTPeriphID3_R_PID3_MASK       (0x000000FF)
#define UART4_UARTPeriphID3_R_PID3_BIT        (0)
#define UART4_UARTPeriphID3_R_PID3_DEFAULT    (0x00000001)

#define UART4_UARTPeriphID3_PID3_MASK         (0x000000FF)
#define UART4_UARTPeriphID3_PID3_DEFAULT      (0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.27 UARTPCellID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTPCellID0            (((UARTPCellID0_TypeDef*)(UART4_BASE + UART_UARTPCellID0_OFFSET )))
#define UART4_UARTPCellID0_R          (*((volatile const uint32_t *)(UART4_BASE +UART_UARTPCellID0_OFFSET)))

//--------
#define UART4_UARTPCellID0_R_CID0_MASK       (0x000000FF)
#define UART4_UARTPCellID0_R_CID0_BIT        (0)
#define UART4_UARTPCellID0_R_CID0_DEFAULT    (0x0000000D)

#define UART4_UARTPCellID0_CID0_MASK         (0x000000FF)
#define UART4_UARTPCellID0_CID0_DEFAULT      (0x0000000D)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.28 UARTPCellID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTPCellID1            (((UARTPCellID1_TypeDef*)(UART4_BASE + UART_UARTPCellID1_OFFSET )))
#define UART4_UARTPCellID1_R          (*((volatile const uint32_t *)(UART4_BASE +UART_UARTPCellID1_OFFSET)))

//--------
#define UART4_UARTPCellID1_R_CID1_MASK       (0x000000FF)
#define UART4_UARTPCellID1_R_CID1_BIT        (0)
#define UART4_UARTPCellID1_R_CID1_DEFAULT    (0x000000F0)

#define UART4_UARTPCellID1_CID1_MASK         (0x000000FF)
#define UART4_UARTPCellID1_CID1_DEFAULT      (0x000000F0)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.29 UARTPCellID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTPCellID2            (((UARTPCellID2_TypeDef*)(UART4_BASE + UART_UARTPCellID2_OFFSET )))
#define UART4_UARTPCellID2_R          (*((volatile const uint32_t *)(UART4_BASE +UART_UARTPCellID2_OFFSET)))

//--------
#define UART4_UARTPCellID2_R_CID2_MASK       (0x000000FF)
#define UART4_UARTPCellID2_R_CID2_BIT        (0)
#define UART4_UARTPCellID2_R_CID2_DEFAULT    (0x00000005)

#define UART4_UARTPCellID2_CID2_MASK         (0x000000FF)
#define UART4_UARTPCellID2_CID2_DEFAULT      (0x00000005)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4.30 UARTPCellID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART4_UARTPCellID3            (((UARTPCellID3_TypeDef*)(UART4_BASE + UART_UARTPCellID3_OFFSET )))
#define UART4_UARTPCellID3_R          (*((volatile const uint32_t *)(UART4_BASE +UART_UARTPCellID3_OFFSET)))

//--------
#define UART4_UARTPCellID3_R_CID3_MASK       (0x000000FF)
#define UART4_UARTPCellID3_R_CID3_BIT        (0)
#define UART4_UARTPCellID3_R_CID3_DEFAULT    (0x000000B1)

#define UART4_UARTPCellID3_CID3_MASK         (0x000000FF)
#define UART4_UARTPCellID3_CID3_DEFAULT      (0x000000B1)
//--------



//todo UART5

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 UART5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.1 UARTDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTDR            (((UARTDR_TypeDef*)(UART5_BASE + UART_UARTDR_OFFSET )))
#define UART5_UARTDR_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTDR_OFFSET)))

//--------
#define UART5_UARTDR_R_DATA_MASK       (0x000000FF)
#define UART5_UARTDR_R_DATA_BIT        (0)

#define UART5_UARTDR_DATA_MASK         (0x000000FF)
//--------

//--------
#define UART5_UARTDR_R_FE_MASK       (0x00000100)
#define UART5_UARTDR_R_FE_BIT        (8)
#define UART5_UARTDR_R_FE_NOERROR    (0x00000000)
#define UART5_UARTDR_R_FE_ERROR      (0x00000100)

#define UART5_UARTDR_FE_MASK         (0x00000001)
#define UART5_UARTDR_FE_NOERROR      (0x00000000)
#define UART5_UARTDR_FE_ERROR        (0x00000001)
//--------

//--------
#define UART5_UARTDR_R_PE_MASK       (0x00000200)
#define UART5_UARTDR_R_PE_BIT        (9)
#define UART5_UARTDR_R_PE_NOERROR    (0x00000000)
#define UART5_UARTDR_R_PE_ERROR      (0x00000200)

#define UART5_UARTDR_PE_MASK         (0x00000001)
#define UART5_UARTDR_PE_NOERROR      (0x00000000)
#define UART5_UARTDR_PE_ERROR        (0x00000001)
//--------

//--------
#define UART5_UARTDR_R_BE_MASK       (0x00000400)
#define UART5_UARTDR_R_BE_BIT        (10)
#define UART5_UARTDR_R_BE_NOERROR    (0x00000000)
#define UART5_UARTDR_R_BE_ERROR      (0x00000400)

#define UART5_UARTDR_BE_MASK         (0x00000001)
#define UART5_UARTDR_BE_NOERROR      (0x00000000)
#define UART5_UARTDR_BE_ERROR        (0x00000001)
//--------

//--------
#define UART5_UARTDR_R_OE_MASK       (0x00000800)
#define UART5_UARTDR_R_OE_BIT        (11)
#define UART5_UARTDR_R_OE_NOERROR    (0x00000000)
#define UART5_UARTDR_R_OE_ERROR      (0x00000800)

#define UART5_UARTDR_OE_MASK         (0x00000001)
#define UART5_UARTDR_OE_NOERROR      (0x00000000)
#define UART5_UARTDR_OE_ERROR        (0x00000001)
//--------

#define UART5_UARTDR_FE_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTDR_OFFSET)*32)+(8*4))))
#define UART5_UARTDR_PE_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTDR_OFFSET)*32)+(9*4))))
#define UART5_UARTDR_BE_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTDR_OFFSET)*32)+(10*4))))
#define UART5_UARTDR_OE_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTDR_OFFSET)*32)+(11*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.2 UARTRSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTRSR            (((UARTRSR_TypeDef*)(UART5_BASE + UART_UARTRSR_OFFSET )))
#define UART5_UARTRSR_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTRSR_OFFSET)))


//--------
#define UART5_UARTRSR_R_FE_MASK       (0x00000001)
#define UART5_UARTRSR_R_FE_BIT        (0)
#define UART5_UARTRSR_R_FE_NOERROR    (0x00000000)
#define UART5_UARTRSR_R_FE_ERROR      (0x00000001)

#define UART5_UARTRSR_FE_MASK         (0x00000001)
#define UART5_UARTRSR_FE_NOERROR      (0x00000000)
#define UART5_UARTRSR_FE_ERROR        (0x00000001)
//--------

//--------
#define UART5_UARTRSR_R_PE_MASK       (0x00000002)
#define UART5_UARTRSR_R_PE_BIT        (1)
#define UART5_UARTRSR_R_PE_NOERROR    (0x00000000)
#define UART5_UARTRSR_R_PE_ERROR      (0x00000002)

#define UART5_UARTRSR_PE_MASK         (0x00000001)
#define UART5_UARTRSR_PE_NOERROR      (0x00000000)
#define UART5_UARTRSR_PE_ERROR        (0x00000001)
//--------

//--------
#define UART5_UARTRSR_R_BE_MASK       (0x00000004)
#define UART5_UARTRSR_R_BE_BIT        (2)
#define UART5_UARTRSR_R_BE_NOERROR    (0x00000000)
#define UART5_UARTRSR_R_BE_ERROR      (0x00000004)

#define UART5_UARTRSR_BE_MASK         (0x00000001)
#define UART5_UARTRSR_BE_NOERROR      (0x00000000)
#define UART5_UARTRSR_BE_ERROR        (0x00000001)
//--------

//--------
#define UART5_UARTRSR_R_OE_MASK       (0x00000008)
#define UART5_UARTRSR_R_OE_BIT        (3)
#define UART5_UARTRSR_R_OE_NOERROR    (0x00000000)
#define UART5_UARTRSR_R_OE_ERROR      (0x00000008)

#define UART5_UARTRSR_OE_MASK         (0x00000001)
#define UART5_UARTRSR_OE_NOERROR      (0x00000000)
#define UART5_UARTRSR_OE_ERROR        (0x00000001)
//--------

#define UART5_UARTRSR_FE_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTRSR_OFFSET)*32)+(0*4))))
#define UART5_UARTRSR_PE_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTRSR_OFFSET)*32)+(1*4))))
#define UART5_UARTRSR_BE_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTRSR_OFFSET)*32)+(2*4))))
#define UART5_UARTRSR_OE_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTRSR_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.2 UARTECR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTECR            (((UARTECR_TypeDef*)(UART5_BASE + UART_UARTECR_OFFSET )))
#define UART5_UARTECR_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTECR_OFFSET)))

//--------
#define UART5_UARTECR_R_DATA_MASK       (0x000000FF)
#define UART5_UARTECR_R_DATA_BIT        (0)

#define UART5_UARTECR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.3 UARTFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTFR            (((UARTFR_TypeDef*)(UART5_BASE + UART_UARTFR_OFFSET )))
#define UART5_UARTFR_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTFR_OFFSET)))

//--------
#define UART5_UARTFR_R_CTS_MASK       (0x00000001)
#define UART5_UARTFR_R_CTS_BIT        (0)
#define UART5_UARTFR_R_CTS_NOASSERT   (0x00000000)
#define UART5_UARTFR_R_CTS_ASSERT     (0x00000001)

#define UART5_UARTFR_CTS_MASK         (0x00000001)
#define UART5_UARTFR_CTS_NOASSERT     (0x00000000)
#define UART5_UARTFR_CTS_ASSERT       (0x00000001)
//--------

//--------
#define UART5_UARTFR_R_BUSY_MASK       (0x00000008)
#define UART5_UARTFR_R_BUSY_BIT        (3)
#define UART5_UARTFR_R_BUSY_NOBUSY     (0x00000000)
#define UART5_UARTFR_R_BUSY_BUSY       (0x00000008)

#define UART5_UARTFR_BUSY_MASK         (0x00000001)
#define UART5_UARTFR_BUSY_NOBUSY       (0x00000000)
#define UART5_UARTFR_BUSY_BUSY         (0x00000001)
//--------

//--------
#define UART5_UARTFR_R_RXFE_MASK       (0x00000010)
#define UART5_UARTFR_R_RXFE_BIT        (4)
#define UART5_UARTFR_R_RXFE_NOEMPTY    (0x00000000)
#define UART5_UARTFR_R_RXFE_EMPTY      (0x00000010)

#define UART5_UARTFR_RXFE_MASK         (0x00000001)
#define UART5_UARTFR_RXFE_NOEMPTY      (0x00000000)
#define UART5_UARTFR_RXFE_EMPTY        (0x00000001)
//--------

//--------
#define UART5_UARTFR_R_TXFF_MASK       (0x00000020)
#define UART5_UARTFR_R_TXFF_BIT        (5)
#define UART5_UARTFR_R_TXFF_NOFULL     (0x00000000)
#define UART5_UARTFR_R_TXFF_FULL       (0x00000020)

#define UART5_UARTFR_TXFF_MASK         (0x00000001)
#define UART5_UARTFR_TXFF_NOFULL       (0x00000000)
#define UART5_UARTFR_TXFF_FULL         (0x00000001)
//--------

//--------
#define UART5_UARTFR_R_RXFF_MASK       (0x00000040)
#define UART5_UARTFR_R_RXFF_BIT        (6)
#define UART5_UARTFR_R_RXFF_NOFULL     (0x00000000)
#define UART5_UARTFR_R_RXFF_FULL       (0x00000040)

#define UART5_UARTFR_RXFF_MASK         (0x00000001)
#define UART5_UARTFR_RXFF_NOFULL       (0x00000000)
#define UART5_UARTFR_RXFF_FULL         (0x00000001)
//--------

//--------
#define UART5_UARTFR_R_TXFE_MASK       (0x00000080)
#define UART5_UARTFR_R_TXFE_BIT        (7)
#define UART5_UARTFR_R_TXFE_NOEMPTY    (0x00000000)
#define UART5_UARTFR_R_TXFE_EMPTY      (0x00000080)

#define UART5_UARTFR_TXFE_MASK         (0x00000001)
#define UART5_UARTFR_TXFE_NOEMPTY      (0x00000000)
#define UART5_UARTFR_TXFE_EMPTY        (0x00000001)
//--------

#define UART5_UARTFR_CTS_BB      (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTFR_OFFSET)*32)+(0*4))))
#define UART5_UARTFR_BUSY_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTFR_OFFSET)*32)+(3*4))))
#define UART5_UARTFR_RXFE_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTFR_OFFSET)*32)+(4*4))))
#define UART5_UARTFR_TXFF_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTFR_OFFSET)*32)+(5*4))))
#define UART5_UARTFR_RXFF_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTFR_OFFSET)*32)+(6*4))))
#define UART5_UARTFR_TXFE_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTFR_OFFSET)*32)+(7*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.4 UARTILPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
#define UART5_UARTILPR            (((UARTILPR_TypeDef*)(UART5_BASE + UART_UARTILPR_OFFSET )))
#define UART5_UARTILPR_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTILPR_OFFSET)))

//--------
#define UART5_UARTILPR_R_ILPDVSR_MASK       (0x000000FF)
#define UART5_UARTILPR_R_ILPDVSR_BIT        (0)

#define UART5_UARTILPR_ILPDVSR_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.5 UARTIBRD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTIBRD            (((UARTIBRD_TypeDef*)(UART5_BASE + UART_UARTIBRD_OFFSET )))
#define UART5_UARTIBRD_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTIBRD_OFFSET)))

//--------
#define UART5_UARTIBRD_R_DIVINT_MASK       (0x0000FFFF)
#define UART5_UARTIBRD_R_DIVINT_BIT        (0)

#define UART5_UARTIBRD_DIVINT_MASK         (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.6 UARTFBRD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTFBRD            (((UARTFBRD_TypeDef*)(UART5_BASE + UART_UARTFBRD_OFFSET )))
#define UART5_UARTFBRD_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTFBRD_OFFSET)))

//--------
#define UART5_UARTFBRD_R_DIVFRAC_MASK       (0x0000003F)
#define UART5_UARTFBRD_R_DIVFRAC_BIT        (0)

#define UART5_UARTFBRD_DIVFRAC_MASK         (0x0000003F)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.7 UARTLCRH ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTLCRH            (((UARTLCRH_TypeDef*)(UART5_BASE + UART_UARTLCRH_OFFSET )))
#define UART5_UARTLCRH_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTLCRH_OFFSET)))

//--------
#define UART5_UARTLCRH_R_BRK_MASK       (0x00000001)
#define UART5_UARTLCRH_R_BRK_BIT        (0)
#define UART5_UARTLCRH_R_BRK_NORMAL     (0x00000000)
#define UART5_UARTLCRH_R_BRK_LOW        (0x00000001)

#define UART5_UARTLCRH_BRK_MASK         (0x00000001)
#define UART5_UARTLCRH_BRK_NORMAL       (0x00000000)
#define UART5_UARTLCRH_BRK_LOW          (0x00000001)
//--------

//--------
#define UART5_UARTLCRH_R_PEN_MASK       (0x00000002)
#define UART5_UARTLCRH_R_PEN_BIT        (1)
#define UART5_UARTLCRH_R_PEN_DIS        (0x00000000)
#define UART5_UARTLCRH_R_PEN_EN         (0x00000002)

#define UART5_UARTLCRH_PEN_MASK         (0x00000001)
#define UART5_UARTLCRH_PEN_DIS          (0x00000000)
#define UART5_UARTLCRH_PEN_EN           (0x00000001)
//--------

//--------
#define UART5_UARTLCRH_R_EPS_MASK       (0x00000004)
#define UART5_UARTLCRH_R_EPS_BIT        (2)
#define UART5_UARTLCRH_R_EPS_ODD        (0x00000000)
#define UART5_UARTLCRH_R_EPS_EVEN       (0x00000004)

#define UART5_UARTLCRH_EPS_MASK         (0x00000001)
#define UART5_UARTLCRH_EPS_ODD          (0x00000000)
#define UART5_UARTLCRH_EPS_EVEN         (0x00000001)
//--------

//--------
#define UART5_UARTLCRH_R_STP2_MASK       (0x00000008)
#define UART5_UARTLCRH_R_STP2_BIT        (3)
#define UART5_UARTLCRH_R_STP2_ONE        (0x00000000)
#define UART5_UARTLCRH_R_STP2_TWO        (0x00000008)

#define UART5_UARTLCRH_STP2_MASK         (0x00000001)
#define UART5_UARTLCRH_STP2_ONE          (0x00000000)
#define UART5_UARTLCRH_STP2_TWO          (0x00000001)
//--------

//--------
#define UART5_UARTLCRH_R_FEN_MASK       (0x00000010)
#define UART5_UARTLCRH_R_FEN_BIT        (4)
#define UART5_UARTLCRH_R_FEN_DIS        (0x00000000)
#define UART5_UARTLCRH_R_FEN_EN         (0x00000010)

#define UART5_UARTLCRH_FEN_MASK         (0x00000001)
#define UART5_UARTLCRH_FEN_DIS          (0x00000000)
#define UART5_UARTLCRH_FEN_EN           (0x00000001)
//--------

//--------
#define UART5_UARTLCRH_R_WLEN_MASK       (0x00000060)
#define UART5_UARTLCRH_R_WLEN_BIT        (5)
#define UART5_UARTLCRH_R_WLEN_5          (0x00000000)
#define UART5_UARTLCRH_R_WLEN_6          (0x00000020)
#define UART5_UARTLCRH_R_WLEN_7          (0x00000040)
#define UART5_UARTLCRH_R_WLEN_8          (0x00000060)

#define UART5_UARTLCRH_WLEN_MASK         (0x00000003)
#define UART5_UARTLCRH_WLEN_5            (0x00000000)
#define UART5_UARTLCRH_WLEN_6            (0x00000001)
#define UART5_UARTLCRH_WLEN_7            (0x00000002)
#define UART5_UARTLCRH_WLEN_8            (0x00000003)
//--------

//--------
#define UART5_UARTLCRH_R_SPS_MASK       (0x00000080)
#define UART5_UARTLCRH_R_SPS_BIT        (7)
#define UART5_UARTLCRH_R_SPS_LOW        (0x00000000)
#define UART5_UARTLCRH_R_SPS_HIGH       (0x00000080)

#define UART5_UARTLCRH_SPS_MASK         (0x00000001)
#define UART5_UARTLCRH_SPS_LOW          (0x00000000)
#define UART5_UARTLCRH_SPS_HIGH         (0x00000001)
//--------

#define UART5_UARTLCRH_BRK_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTLCRH_OFFSET)*32)+(0*4))))
#define UART5_UARTLCRH_PEN_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTLCRH_OFFSET)*32)+(1*4))))
#define UART5_UARTLCRH_EPS_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTLCRH_OFFSET)*32)+(2*4))))
#define UART5_UARTLCRH_STP2_BB    (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTLCRH_OFFSET)*32)+(3*4))))
#define UART5_UARTLCRH_FEN_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTLCRH_OFFSET)*32)+(4*4))))
#define UART5_UARTLCRH_SPS_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTLCRH_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.8 UARTCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTCTL            (((UARTCTL_TypeDef*)(UART5_BASE + UART_UARTCTL_OFFSET )))
#define UART5_UARTCTL_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTCTL_OFFSET)))

//--------
#define UART5_UARTCTL_R_UARTEN_MASK       (0x00000001)
#define UART5_UARTCTL_R_UARTEN_BIT        (0)
#define UART5_UARTCTL_R_UARTEN_DIS        (0x00000000)
#define UART5_UARTCTL_R_UARTEN_EN         (0x00000001)

#define UART5_UARTCTL_UARTEN_MASK         (0x00000001)
#define UART5_UARTCTL_UARTEN_DIS          (0x00000000)
#define UART5_UARTCTL_UARTEN_EN           (0x00000001)
//--------

//--------
#define UART5_UARTCTL_R_SIREN_MASK       (0x00000002)
#define UART5_UARTCTL_R_SIREN_BIT        (1)
#define UART5_UARTCTL_R_SIREN_DIS        (0x00000000)
#define UART5_UARTCTL_R_SIREN_EN         (0x00000002)

#define UART5_UARTCTL_SIREN_MASK         (0x00000001)
#define UART5_UARTCTL_SIREN_DIS          (0x00000000)
#define UART5_UARTCTL_SIREN_EN           (0x00000001)
//--------

//--------
#define UART5_UARTCTL_R_SIRLP_MASK       (0x00000004)
#define UART5_UARTCTL_R_SIRLP_BIT        (2)
#define UART5_UARTCTL_R_SIRLP_DIS        (0x00000000)
#define UART5_UARTCTL_R_SIRLP_EN         (0x00000004)

#define UART5_UARTCTL_SIRLP_MASK         (0x00000001)
#define UART5_UARTCTL_SIRLP_DIS          (0x00000000)
#define UART5_UARTCTL_SIRLP_EN           (0x00000001)
//--------

//--------
#define UART5_UARTCTL_R_SMART_MASK       (0x00000008)
#define UART5_UARTCTL_R_SMART_BIT        (3)
#define UART5_UARTCTL_R_SMART_DIS        (0x00000000)
#define UART5_UARTCTL_R_SMART_EN         (0x00000008)

#define UART5_UARTCTL_SMART_MASK         (0x00000001)
#define UART5_UARTCTL_SMART_DIS          (0x00000000)
#define UART5_UARTCTL_SMART_EN           (0x00000001)
//--------

//--------
#define UART5_UARTCTL_R_EOT_MASK       (0x00000010)
#define UART5_UARTCTL_R_EOT_BIT        (4)
#define UART5_UARTCTL_R_EOT_FIFO       (0x00000000)
#define UART5_UARTCTL_R_EOT_ALL        (0x00000010)

#define UART5_UARTCTL_EOT_MASK         (0x00000001)
#define UART5_UARTCTL_EOT_FIFO         (0x00000000)
#define UART5_UARTCTL_EOT_ALL          (0x00000001)
//--------

//--------
#define UART5_UARTCTL_R_HSE_MASK       (0x00000020)
#define UART5_UARTCTL_R_HSE_BIT        (5)
#define UART5_UARTCTL_R_HSE_DIS        (0x00000000)
#define UART5_UARTCTL_R_HSE_EN         (0x00000020)

#define UART5_UARTCTL_HSE_MASK         (0x00000001)
#define UART5_UARTCTL_HSE_DIS          (0x00000000)
#define UART5_UARTCTL_HSE_EN           (0x00000001)
//--------

//--------
#define UART5_UARTCTL_R_LBE_MASK       (0x00000080)
#define UART5_UARTCTL_R_LBE_BIT        (7)
#define UART5_UARTCTL_R_LBE_DIS        (0x00000000)
#define UART5_UARTCTL_R_LBE_EN         (0x00000080)

#define UART5_UARTCTL_LBE_MASK         (0x00000001)
#define UART5_UARTCTL_LBE_DIS          (0x00000000)
#define UART5_UARTCTL_LBE_EN           (0x00000001)
//--------

//--------
#define UART5_UARTCTL_R_TXE_MASK       (0x00000100)
#define UART5_UARTCTL_R_TXE_BIT        (8)
#define UART5_UARTCTL_R_TXE_DIS        (0x00000000)
#define UART5_UARTCTL_R_TXE_EN         (0x00000100)

#define UART5_UARTCTL_TXE_MASK         (0x00000001)
#define UART5_UARTCTL_TXE_DIS          (0x00000000)
#define UART5_UARTCTL_TXE_EN           (0x00000001)
//--------

//--------
#define UART5_UARTCTL_R_RXE_MASK       (0x00000200)
#define UART5_UARTCTL_R_RXE_BIT        (9)
#define UART5_UARTCTL_R_RXE_DIS        (0x00000000)
#define UART5_UARTCTL_R_RXE_EN         (0x00000200)

#define UART5_UARTCTL_RXE_MASK         (0x00000001)
#define UART5_UARTCTL_RXE_DIS          (0x00000000)
#define UART5_UARTCTL_RXE_EN           (0x00000001)
//--------

//--------
#define UART5_UARTCTL_R_RTS_MASK       (0x00000800)
#define UART5_UARTCTL_R_RTS_BIT        (11)
#define UART5_UARTCTL_R_RTS_LOW        (0x00000000)
#define UART5_UARTCTL_R_RTS_HIGH       (0x00000800)

#define UART5_UARTCTL_RTS_MASK         (0x00000001)
#define UART5_UARTCTL_RTS_LOW          (0x00000000)
#define UART5_UARTCTL_RTS_HIGH         (0x00000001)
//--------

//--------
#define UART5_UARTCTL_R_RTSEN_MASK       (0x00004000)
#define UART5_UARTCTL_R_RTSEN_BIT        (14)
#define UART5_UARTCTL_R_RTSEN_DIS        (0x00000000)
#define UART5_UARTCTL_R_RTSEN_EN         (0x00004000)

#define UART5_UARTCTL_RTSEN_MASK         (0x00000001)
#define UART5_UARTCTL_RTSEN_DIS          (0x00000000)
#define UART5_UARTCTL_RTSEN_EN           (0x00000001)
//--------

//--------
#define UART5_UARTCTL_R_CTSEN_MASK       (0x00008000)
#define UART5_UARTCTL_R_CTSEN_BIT        (15)
#define UART5_UARTCTL_R_CTSEN_DIS        (0x00000000)
#define UART5_UARTCTL_R_CTSEN_EN         (0x00008000)

#define UART5_UARTCTL_CTSEN_MASK         (0x00000001)
#define UART5_UARTCTL_CTSEN_DIS          (0x00000000)
#define UART5_UARTCTL_CTSEN_EN           (0x00000001)
//--------

#define UART5_UARTCTL_UARTEN_BB    (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTCTL_OFFSET)*32)+(0*4))))
#define UART5_UARTCTL_SIREN_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTCTL_OFFSET)*32)+(1*4))))
#define UART5_UARTCTL_SIRLP_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTCTL_OFFSET)*32)+(2*4))))
#define UART5_UARTCTL_SMART_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTCTL_OFFSET)*32)+(3*4))))
#define UART5_UARTCTL_EOT_BB       (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTCTL_OFFSET)*32)+(4*4))))
#define UART5_UARTCTL_HSE_BB       (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTCTL_OFFSET)*32)+(5*4))))
#define UART5_UARTCTL_LBE_BB       (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTCTL_OFFSET)*32)+(7*4))))
#define UART5_UARTCTL_TXE_BB       (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTCTL_OFFSET)*32)+(8*4))))
#define UART5_UARTCTL_RXE_BB       (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTCTL_OFFSET)*32)+(9*4))))
#define UART5_UARTCTL_RTS_BB       (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTCTL_OFFSET)*32)+(11*4))))
#define UART5_UARTCTL_RTSEN_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTCTL_OFFSET)*32)+(14*4))))
#define UART5_UARTCTL_CTSEN_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTCTL_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.9 UARTIFLS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTIFLS            (((UARTIFLS_TypeDef*)(UART5_BASE + UART_UARTIFLS_OFFSET )))
#define UART5_UARTIFLS_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTIFLS_OFFSET)))

//--------
#define UART5_UARTIFLS_R_TXIFLSEL_MASK       (0x00000007)
#define UART5_UARTIFLS_R_TXIFLSEL_BIT        (0)
#define UART5_UARTIFLS_R_TXIFLSEL_1_4        (0x00000000)
#define UART5_UARTIFLS_R_TXIFLSEL_1_2        (0x00000002)
#define UART5_UARTIFLS_R_TXIFLSEL_3_4        (0x00000003)
#define UART5_UARTIFLS_R_TXIFLSEL_7_8        (0x00000004)

#define UART5_UARTIFLS_TXIFLSEL_MASK         (0x00000007)
#define UART5_UARTIFLS_TXIFLSEL_1_4          (0x00000000)
#define UART5_UARTIFLS_TXIFLSEL_1_2          (0x00000002)
#define UART5_UARTIFLS_TXIFLSEL_3_4          (0x00000003)
#define UART5_UARTIFLS_TXIFLSEL_7_8          (0x00000004)
//--------

//--------
#define UART5_UARTIFLS_R_RXIFLSEL_MASK       (0x00000038)
#define UART5_UARTIFLS_R_RXIFLSEL_BIT        (0)
#define UART5_UARTIFLS_R_RXIFLSEL_1_4        (0x00000000)
#define UART5_UARTIFLS_R_RXIFLSEL_1_2        (0x00000010)
#define UART5_UARTIFLS_R_RXIFLSEL_3_4        (0x00000018)
#define UART5_UARTIFLS_R_RXIFLSEL_7_8        (0x00000020)

#define UART5_UARTIFLS_RXIFLSEL_MASK         (0x00000007)
#define UART5_UARTIFLS_RXIFLSEL_1_4          (0x00000000)
#define UART5_UARTIFLS_RXIFLSEL_1_2          (0x00000002)
#define UART5_UARTIFLS_RXIFLSEL_3_4          (0x00000003)
#define UART5_UARTIFLS_RXIFLSEL_7_8          (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.10 UARTIM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTIM            (((UARTIM_TypeDef*)(UART5_BASE + UART_UARTIM_OFFSET )))
#define UART5_UARTIM_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTIM_OFFSET)))

//--------
#define UART5_UARTIM_R_CTSIM_MASK       (0x00000002)
#define UART5_UARTIM_R_CTSIM_BIT        (1)
#define UART5_UARTIM_R_CTSIM_DIS        (0x00000000)
#define UART5_UARTIM_R_CTSIM_EN         (0x00000002)

#define UART5_UARTIM_CTSIM_MASK         (0x00000001)
#define UART5_UARTIM_CTSIM_DIS          (0x00000000)
#define UART5_UARTIM_CTSIM_EN           (0x00000001)
//--------

//--------
#define UART5_UARTIM_R_RXIM_MASK       (0x00000010)
#define UART5_UARTIM_R_RXIM_BIT        (4)
#define UART5_UARTIM_R_RXIM_DIS        (0x00000000)
#define UART5_UARTIM_R_RXIM_EN         (0x00000010)

#define UART5_UARTIM_RXIM_MASK         (0x00000001)
#define UART5_UARTIM_RXIM_DIS          (0x00000000)
#define UART5_UARTIM_RXIM_EN           (0x00000001)
//--------

//--------
#define UART5_UARTIM_R_TXIM_MASK       (0x00000020)
#define UART5_UARTIM_R_TXIM_BIT        (5)
#define UART5_UARTIM_R_TXIM_DIS        (0x00000000)
#define UART5_UARTIM_R_TXIM_EN         (0x00000020)

#define UART5_UARTIM_TXIM_MASK         (0x00000001)
#define UART5_UARTIM_TXIM_DIS          (0x00000000)
#define UART5_UARTIM_TXIM_EN           (0x00000001)
//--------

//--------
#define UART5_UARTIM_R_RTIM_MASK       (0x00000040)
#define UART5_UARTIM_R_RTIM_BIT        (6)
#define UART5_UARTIM_R_RTIM_DIS        (0x00000000)
#define UART5_UARTIM_R_RTIM_EN         (0x00000040)

#define UART5_UARTIM_RTIM_MASK         (0x00000001)
#define UART5_UARTIM_RTIM_DIS          (0x00000000)
#define UART5_UARTIM_RTIM_EN           (0x00000001)
//--------

//--------
#define UART5_UARTIM_R_FEIM_MASK       (0x00000080)
#define UART5_UARTIM_R_FEIM_BIT        (7)
#define UART5_UARTIM_R_FEIM_DIS        (0x00000000)
#define UART5_UARTIM_R_FEIM_EN         (0x00000080)

#define UART5_UARTIM_FEIM_MASK         (0x00000001)
#define UART5_UARTIM_FEIM_DIS          (0x00000000)
#define UART5_UARTIM_FEIM_EN           (0x00000001)
//--------

//--------
#define UART5_UARTIM_R_PEIM_MASK       (0x00000100)
#define UART5_UARTIM_R_PEIM_BIT        (8)
#define UART5_UARTIM_R_PEIM_DIS        (0x00000000)
#define UART5_UARTIM_R_PEIM_EN         (0x00000100)

#define UART5_UARTIM_PEIM_MASK         (0x00000001)
#define UART5_UARTIM_PEIM_DIS          (0x00000000)
#define UART5_UARTIM_PEIM_EN           (0x00000001)
//--------

//--------
#define UART5_UARTIM_R_BEIM_MASK       (0x00000200)
#define UART5_UARTIM_R_BEIM_BIT        (9)
#define UART5_UARTIM_R_BEIM_DIS        (0x00000000)
#define UART5_UARTIM_R_BEIM_EN         (0x00000200)

#define UART5_UARTIM_BEIM_MASK         (0x00000001)
#define UART5_UARTIM_BEIM_DIS          (0x00000000)
#define UART5_UARTIM_BEIM_EN           (0x00000001)
//--------

//--------
#define UART5_UARTIM_R_OEIM_MASK       (0x00000400)
#define UART5_UARTIM_R_OEIM_BIT        (10)
#define UART5_UARTIM_R_OEIM_DIS        (0x00000000)
#define UART5_UARTIM_R_OEIM_EN         (0x00000400)

#define UART5_UARTIM_OEIM_MASK         (0x00000001)
#define UART5_UARTIM_OEIM_DIS          (0x00000000)
#define UART5_UARTIM_OEIM_EN           (0x00000001)
//--------

//--------
#define UART5_UARTIM_R_9BITIM_MASK       (0x00001000)
#define UART5_UARTIM_R_9BITIM_BIT        (12)
#define UART5_UARTIM_R_9BITIM_DIS        (0x00000000)
#define UART5_UARTIM_R_9BITIM_EN         (0x00001000)

#define UART5_UARTIM_9BITIM_MASK         (0x00000001)
#define UART5_UARTIM_9BITIM_DIS          (0x00000000)
#define UART5_UARTIM_9BITIM_EN           (0x00000001)
//--------

#define UART5_UARTIM_CTSIM_BB    (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTIM_OFFSET)*32)+(1*4))))
#define UART5_UARTIM_RXIM_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTIM_OFFSET)*32)+(4*4))))
#define UART5_UARTIM_TXIM_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTIM_OFFSET)*32)+(5*4))))
#define UART5_UARTIM_RTIM_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTIM_OFFSET)*32)+(6*4))))
#define UART5_UARTIM_FEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTIM_OFFSET)*32)+(7*4))))
#define UART5_UARTIM_PEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTIM_OFFSET)*32)+(8*4))))
#define UART5_UARTIM_BEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTIM_OFFSET)*32)+(9*4))))
#define UART5_UARTIM_OEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTIM_OFFSET)*32)+(10*4))))
#define UART5_UARTIM_9BITIM_BB   (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTIM_OFFSET)*32)+(12*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.11 UARTRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTRIS            (((UARTRIS_TypeDef*)(UART5_BASE + UART_UARTRIS_OFFSET )))
#define UART5_UARTRIS_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTRIS_OFFSET)))



//--------
#define UART5_UARTRIS_R_CTSRIS_MASK       (0x00000002)
#define UART5_UARTRIS_R_CTSRIS_BIT        (1)
#define UART5_UARTRIS_R_CTSRIS_NOACTIVE   (0x00000000)
#define UART5_UARTRIS_R_CTSRIS_ACTIVE     (0x00000002)

#define UART5_UARTRIS_CTSRIS_MASK         (0x00000001)
#define UART5_UARTRIS_CTSRIS_NOACTIVE     (0x00000000)
#define UART5_UARTRIS_CTSRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART5_UARTRIS_R_RXRIS_MASK       (0x00000010)
#define UART5_UARTRIS_R_RXRIS_BIT        (4)
#define UART5_UARTRIS_R_RXRIS_NOACTIVE   (0x00000000)
#define UART5_UARTRIS_R_RXRIS_ACTIVE     (0x00000010)

#define UART5_UARTRIS_RXRIS_MASK         (0x00000001)
#define UART5_UARTRIS_RXRIS_NOACTIVE     (0x00000000)
#define UART5_UARTRIS_RXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART5_UARTRIS_R_TXRIS_MASK       (0x00000020)
#define UART5_UARTRIS_R_TXRIS_BIT        (5)
#define UART5_UARTRIS_R_TXRIS_NOACTIVE   (0x00000000)
#define UART5_UARTRIS_R_TXRIS_ACTIVE     (0x00000020)

#define UART5_UARTRIS_TXRIS_MASK         (0x00000001)
#define UART5_UARTRIS_TXRIS_NOACTIVE     (0x00000000)
#define UART5_UARTRIS_TXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART5_UARTRIS_R_RTRIS_MASK       (0x00000040)
#define UART5_UARTRIS_R_RTRIS_BIT        (6)
#define UART5_UARTRIS_R_RTRIS_NOACTIVE   (0x00000000)
#define UART5_UARTRIS_R_RTRIS_ACTIVE     (0x00000040)

#define UART5_UARTRIS_RTRIS_MASK         (0x00000001)
#define UART5_UARTRIS_RTRIS_NOACTIVE     (0x00000000)
#define UART5_UARTRIS_RTRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART5_UARTRIS_R_FERIS_MASK       (0x00000080)
#define UART5_UARTRIS_R_FERIS_BIT        (7)
#define UART5_UARTRIS_R_FERIS_NOACTIVE   (0x00000000)
#define UART5_UARTRIS_R_FERIS_ACTIVE     (0x00000080)

#define UART5_UARTRIS_FERIS_MASK         (0x00000001)
#define UART5_UARTRIS_FERIS_NOACTIVE     (0x00000000)
#define UART5_UARTRIS_FERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART5_UARTRIS_R_PERIS_MASK       (0x00000100)
#define UART5_UARTRIS_R_PERIS_BIT        (8)
#define UART5_UARTRIS_R_PERIS_NOACTIVE   (0x00000000)
#define UART5_UARTRIS_R_PERIS_ACTIVE     (0x00000100)

#define UART5_UARTRIS_PERIS_MASK         (0x00000001)
#define UART5_UARTRIS_PERIS_NOACTIVE     (0x00000000)
#define UART5_UARTRIS_PERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART5_UARTRIS_R_BERIS_MASK       (0x00000200)
#define UART5_UARTRIS_R_BERIS_BIT        (9)
#define UART5_UARTRIS_R_BERIS_NOACTIVE   (0x00000000)
#define UART5_UARTRIS_R_BERIS_ACTIVE     (0x00000200)

#define UART5_UARTRIS_BERIS_MASK         (0x00000001)
#define UART5_UARTRIS_BERIS_NOACTIVE     (0x00000000)
#define UART5_UARTRIS_BERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART5_UARTRIS_R_OERIS_MASK       (0x00000400)
#define UART5_UARTRIS_R_OERIS_BIT        (10)
#define UART5_UARTRIS_R_OERIS_NOACTIVE   (0x00000000)
#define UART5_UARTRIS_R_OERIS_ACTIVE     (0x00000400)

#define UART5_UARTRIS_OERIS_MASK         (0x00000001)
#define UART5_UARTRIS_OERIS_NOACTIVE     (0x00000000)
#define UART5_UARTRIS_OERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART5_UARTRIS_R_9BITRIS_MASK       (0x00001000)
#define UART5_UARTRIS_R_9BITRIS_BIT        (12)
#define UART5_UARTRIS_R_9BITRIS_NOACTIVE   (0x00000000)
#define UART5_UARTRIS_R_9BITRIS_ACTIVE     (0x00001000)

#define UART5_UARTRIS_9BITRIS_MASK         (0x00000001)
#define UART5_UARTRIS_9BITRIS_NOACTIVE     (0x00000000)
#define UART5_UARTRIS_9BITRIS_ACTIVE       (0x00000001)
//--------

#define UART5_UARTRIS_CTSRIS_BB    (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTRIS_OFFSET)*32)+(1*4))))
#define UART5_UARTRIS_RXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTRIS_OFFSET)*32)+(4*4))))
#define UART5_UARTRIS_TXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTRIS_OFFSET)*32)+(5*4))))
#define UART5_UARTRIS_RTRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTRIS_OFFSET)*32)+(6*4))))
#define UART5_UARTRIS_FERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTRIS_OFFSET)*32)+(7*4))))
#define UART5_UARTRIS_PERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTRIS_OFFSET)*32)+(8*4))))
#define UART5_UARTRIS_BERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTRIS_OFFSET)*32)+(9*4))))
#define UART5_UARTRIS_OERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTRIS_OFFSET)*32)+(10*4))))
#define UART5_UARTRIS_9BITRIS_BB   (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTRIS_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.12 UARTMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTMIS            (((UARTMIS_TypeDef*)(UART5_BASE + UART_UARTMIS_OFFSET )))
#define UART5_UARTMIS_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTMIS_OFFSET)))



//--------
#define UART5_UARTMIS_R_CTSMIS_MASK       (0x00000002)
#define UART5_UARTMIS_R_CTSMIS_BIT        (1)
#define UART5_UARTMIS_R_CTSMIS_NOOCCUR    (0x00000000)
#define UART5_UARTMIS_R_CTSMIS_OCCUR      (0x00000002)

#define UART5_UARTMIS_CTSMIS_MASK         (0x00000001)
#define UART5_UARTMIS_CTSMIS_NOOCCUR      (0x00000000)
#define UART5_UARTMIS_CTSMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART5_UARTMIS_R_RXMIS_MASK       (0x00000010)
#define UART5_UARTMIS_R_RXMIS_BIT        (4)
#define UART5_UARTMIS_R_RXMIS_NOOCCUR    (0x00000000)
#define UART5_UARTMIS_R_RXMIS_OCCUR      (0x00000010)

#define UART5_UARTMIS_RXMIS_MASK         (0x00000001)
#define UART5_UARTMIS_RXMIS_NOOCCUR      (0x00000000)
#define UART5_UARTMIS_RXMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART5_UARTMIS_R_TXMIS_MASK       (0x00000020)
#define UART5_UARTMIS_R_TXMIS_BIT        (5)
#define UART5_UARTMIS_R_TXMIS_NOOCCUR    (0x00000000)
#define UART5_UARTMIS_R_TXMIS_OCCUR      (0x00000020)

#define UART5_UARTMIS_TXMIS_MASK         (0x00000001)
#define UART5_UARTMIS_TXMIS_NOOCCUR      (0x00000000)
#define UART5_UARTMIS_TXMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART5_UARTMIS_R_RTMIS_MASK       (0x00000040)
#define UART5_UARTMIS_R_RTMIS_BIT        (6)
#define UART5_UARTMIS_R_RTMIS_NOOCCUR    (0x00000000)
#define UART5_UARTMIS_R_RTMIS_OCCUR      (0x00000040)

#define UART5_UARTMIS_RTMIS_MASK         (0x00000001)
#define UART5_UARTMIS_RTMIS_NOOCCUR      (0x00000000)
#define UART5_UARTMIS_RTMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART5_UARTMIS_R_FEMIS_MASK       (0x00000080)
#define UART5_UARTMIS_R_FEMIS_BIT        (7)
#define UART5_UARTMIS_R_FEMIS_NOOCCUR    (0x00000000)
#define UART5_UARTMIS_R_FEMIS_OCCUR      (0x00000080)

#define UART5_UARTMIS_FEMIS_MASK         (0x00000001)
#define UART5_UARTMIS_FEMIS_NOOCCUR      (0x00000000)
#define UART5_UARTMIS_FEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART5_UARTMIS_R_PEMIS_MASK       (0x00000100)
#define UART5_UARTMIS_R_PEMIS_BIT        (8)
#define UART5_UARTMIS_R_PEMIS_NOOCCUR    (0x00000000)
#define UART5_UARTMIS_R_PEMIS_OCCUR      (0x00000100)

#define UART5_UARTMIS_PEMIS_MASK         (0x00000001)
#define UART5_UARTMIS_PEMIS_NOOCCUR      (0x00000000)
#define UART5_UARTMIS_PEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART5_UARTMIS_R_BEMIS_MASK       (0x00000200)
#define UART5_UARTMIS_R_BEMIS_BIT        (9)
#define UART5_UARTMIS_R_BEMIS_NOOCCUR    (0x00000000)
#define UART5_UARTMIS_R_BEMIS_OCCUR      (0x00000200)

#define UART5_UARTMIS_BEMIS_MASK         (0x00000001)
#define UART5_UARTMIS_BEMIS_NOOCCUR      (0x00000000)
#define UART5_UARTMIS_BEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART5_UARTMIS_R_OEMIS_MASK       (0x00000400)
#define UART5_UARTMIS_R_OEMIS_BIT        (10)
#define UART5_UARTMIS_R_OEMIS_NOOCCUR    (0x00000000)
#define UART5_UARTMIS_R_OEMIS_OCCUR      (0x00000400)

#define UART5_UARTMIS_OEMIS_MASK         (0x00000001)
#define UART5_UARTMIS_OEMIS_NOOCCUR      (0x00000000)
#define UART5_UARTMIS_OEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART5_UARTMIS_R_9BITMIS_MASK       (0x00001000)
#define UART5_UARTMIS_R_9BITMIS_BIT        (12)
#define UART5_UARTMIS_R_9BITMIS_NOOCCUR    (0x00000000)
#define UART5_UARTMIS_R_9BITMIS_OCCUR      (0x00001000)

#define UART5_UARTMIS_9BITMIS_MASK         (0x00000001)
#define UART5_UARTMIS_9BITMIS_NOOCCUR      (0x00000000)
#define UART5_UARTMIS_9BITMIS_OCCUR        (0x00000001)
//--------


#define UART5_UARTMIS_CTSMIS_BB    (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTMIS_OFFSET)*32)+(1*4))))
#define UART5_UARTMIS_RXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTMIS_OFFSET)*32)+(4*4))))
#define UART5_UARTMIS_TXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTMIS_OFFSET)*32)+(5*4))))
#define UART5_UARTMIS_RTMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTMIS_OFFSET)*32)+(6*4))))
#define UART5_UARTMIS_FEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTMIS_OFFSET)*32)+(7*4))))
#define UART5_UARTMIS_PEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTMIS_OFFSET)*32)+(8*4))))
#define UART5_UARTMIS_BEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTMIS_OFFSET)*32)+(9*4))))
#define UART5_UARTMIS_OEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTMIS_OFFSET)*32)+(10*4))))
#define UART5_UARTMIS_9BITMIS_BB   (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTMIS_OFFSET)*32)+(12*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.13 UARTICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTICR            (((UARTICR_TypeDef*)(UART5_BASE + UART_UARTICR_OFFSET )))
#define UART5_UARTICR_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTICR_OFFSET)))


//--------
#define UART5_UARTICR_R_CTSIC_MASK       (0x00000002)
#define UART5_UARTICR_R_CTSIC_BIT        (1)
#define UART5_UARTICR_R_CTSIC_CLEAR      (0x00000002)

#define UART5_UARTICR_CTSIC_MASK         (0x00000001)
#define UART5_UARTICR_CTSIC_CLEAR        (0x00000001)
//--------

//--------
#define UART5_UARTICR_R_RXIC_MASK       (0x00000010)
#define UART5_UARTICR_R_RXIC_BIT        (4)
#define UART5_UARTICR_R_RXIC_CLEAR      (0x00000010)

#define UART5_UARTICR_RXIC_MASK         (0x00000001)
#define UART5_UARTICR_RXIC_CLEAR        (0x00000001)
//--------

//--------
#define UART5_UARTICR_R_TXIC_MASK       (0x00000020)
#define UART5_UARTICR_R_TXIC_BIT        (5)
#define UART5_UARTICR_R_TXIC_CLEAR      (0x00000020)

#define UART5_UARTICR_TXIC_MASK         (0x00000001)
#define UART5_UARTICR_TXIC_CLEAR        (0x00000001)
//--------

//--------
#define UART5_UARTICR_R_RTIC_MASK       (0x00000040)
#define UART5_UARTICR_R_RTIC_BIT        (6)
#define UART5_UARTICR_R_RTIC_CLEAR      (0x00000040)

#define UART5_UARTICR_RTIC_MASK         (0x00000001)
#define UART5_UARTICR_RTIC_CLEAR        (0x00000001)
//--------

//--------
#define UART5_UARTICR_R_FEIC_MASK       (0x00000080)
#define UART5_UARTICR_R_FEIC_BIT        (7)
#define UART5_UARTICR_R_FEIC_CLEAR      (0x00000080)

#define UART5_UARTICR_FEIC_MASK         (0x00000001)
#define UART5_UARTICR_FEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART5_UARTICR_R_PEIC_MASK       (0x00000100)
#define UART5_UARTICR_R_PEIC_BIT        (8)
#define UART5_UARTICR_R_PEIC_CLEAR      (0x00000100)

#define UART5_UARTICR_PEIC_MASK         (0x00000001)
#define UART5_UARTICR_PEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART5_UARTICR_R_BEIC_MASK       (0x00000200)
#define UART5_UARTICR_R_BEIC_BIT        (9)
#define UART5_UARTICR_R_BEIC_CLEAR      (0x00000200)

#define UART5_UARTICR_BEIC_MASK         (0x00000001)
#define UART5_UARTICR_BEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART5_UARTICR_R_OEIC_MASK       (0x00000400)
#define UART5_UARTICR_R_OEIC_BIT        (10)
#define UART5_UARTICR_R_OEIC_CLEAR      (0x00000400)

#define UART5_UARTICR_OEIC_MASK         (0x00000001)
#define UART5_UARTICR_OEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART5_UARTICR_R_9BITIC_MASK       (0x00001000)
#define UART5_UARTICR_R_9BITIC_BIT        (12)
#define UART5_UARTICR_R_9BITIC_CLEAR      (0x00001000)

#define UART5_UARTICR_9BITIC_MASK         (0x00000001)
#define UART5_UARTICR_9BITIC_CLEAR        (0x00000001)
//--------

#define UART5_UARTICR_CTSICR_BB    (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTICR_OFFSET)*32)+(1*4))))
#define UART5_UARTICR_RXICR_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTICR_OFFSET)*32)+(4*4))))
#define UART5_UARTICR_TXICR_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTICR_OFFSET)*32)+(5*4))))
#define UART5_UARTICR_RTICR_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTICR_OFFSET)*32)+(6*4))))
#define UART5_UARTICR_FEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTICR_OFFSET)*32)+(7*4))))
#define UART5_UARTICR_PEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTICR_OFFSET)*32)+(8*4))))
#define UART5_UARTICR_BEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTICR_OFFSET)*32)+(9*4))))
#define UART5_UARTICR_OEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTICR_OFFSET)*32)+(10*4))))
#define UART5_UARTICR_9BITICR_BB   (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTICR_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.14 UARTDMACTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTDMACTL            (((UARTDMACTL_TypeDef*)(UART5_BASE + UART_UARTDMACTL_OFFSET )))
#define UART5_UARTDMACTL_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTDMACTL_OFFSET)))

//--------
#define UART5_UARTDMACTL_R_RXDMAE_MASK       (0x00000001)
#define UART5_UARTDMACTL_R_RXDMAE_BIT        (0)
#define UART5_UARTDMACTL_R_RXDMAE_DIS        (0x00000000)
#define UART5_UARTDMACTL_R_RXDMAE_EN         (0x00008000)

#define UART5_UARTDMACTL_RXDMAE_MASK         (0x00000001)
#define UART5_UARTDMACTL_RXDMAE_DIS          (0x00000000)
#define UART5_UARTDMACTL_RXDMAE_EN           (0x00000001)
//--------

//--------
#define UART5_UARTDMACTL_R_TXDMAE_MASK       (0x00000002)
#define UART5_UARTDMACTL_R_TXDMAE_BIT        (1)
#define UART5_UARTDMACTL_R_TXDMAE_DIS        (0x00000000)
#define UART5_UARTDMACTL_R_TXDMAE_EN         (0x00000002)

#define UART5_UARTDMACTL_TXDMAE_MASK         (0x00000001)
#define UART5_UARTDMACTL_TXDMAE_DIS          (0x00000000)
#define UART5_UARTDMACTL_TXDMAE_EN           (0x00000001)
//--------

//--------
#define UART5_UARTDMACTL_R_DMAERR_MASK       (0x00000004)
#define UART5_UARTDMACTL_R_DMAERR_BIT        (2)
#define UART5_UARTDMACTL_R_DMAERR_NOERROR    (0x00000000)
#define UART5_UARTDMACTL_R_DMAERR_ERROR      (0x00000004)

#define UART5_UARTDMACTL_DMAERR_MASK         (0x00000001)
#define UART5_UARTDMACTL_DMAERR_NOERROR      (0x00000000)
#define UART5_UARTDMACTL_DMAERR_ERROR        (0x00000001)
//--------

#define UART5_UARTDMACTL_RXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(0*4))))
#define UART5_UARTDMACTL_TXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(1*4))))
#define UART5_UARTDMACTL_DMAERR_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(2*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.15 UART9BITADDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UART9BITADDR            (((UART9BITADDR_TypeDef*)(UART5_BASE + UART_UART9BITADDR_OFFSET )))
#define UART5_UART9BITADDR_R          (*((volatile uint32_t *)(UART5_BASE +UART_UART9BITADDR_OFFSET)))

//--------
#define UART5_UART9BITADDR_R_ADDR_MASK       (0x000000FF)
#define UART5_UART9BITADDR_R_ADDR_BIT        (0)

#define UART5_UART9BITADDR_ADDR_MASK         (0x000000FF)
//--------

//--------
#define UART5_UART9BITADDR_R_9BITEN_MASK       (0x00008000)
#define UART5_UART9BITADDR_R_9BITEN_BIT        (15)
#define UART5_UART9BITADDR_R_9BITEN_DIS        (0x00000000)
#define UART5_UART9BITADDR_R_9BITEN_EN         (0x00008000)

#define UART5_UART9BITADDR_9BITEN_MASK         (0x00000001)
#define UART5_UART9BITADDR_9BITEN_DIS          (0x00000000)
#define UART5_UART9BITADDR_9BITEN_EN           (0x00000001)
//--------

#define UART5_UART9BITADDR_9BITEN_BB     (*((volatile uint32_t *)(0x42000000+((UART5_OFFSET+UART_UART9BITADDR_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.16 UART9BITAMASK ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UART9BITAMASK            (((UART9BITAMASK_TypeDef*)(UART5_BASE + UART_UART9BITAMASK_OFFSET )))
#define UART5_UART9BITAMASK_R          (*((volatile uint32_t *)(UART5_BASE +UART_UART9BITAMASK_OFFSET)))

//--------
#define UART5_UART9BITAMASK_R_MASK_MASK       (0x000000FF)
#define UART5_UART9BITAMASK_R_MASK_BIT        (0)

#define UART5_UART9BITAMASK_MASK_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.17 UARTPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTPP            (((UARTPP_TypeDef*)(UART5_BASE + UART_UARTPP_OFFSET )))
#define UART5_UARTPP_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTPP_OFFSET)))

//--------
#define UART5_UARTPP_R_SC_MASK       (0x00000001)
#define UART5_UARTPP_R_SC_BIT        (0)
#define UART5_UARTPP_R_SC_NOSUPPORT  (0x00000000)
#define UART5_UARTPP_R_SC_SUPPORT    (0x00000001)

#define UART5_UARTPP_SC_MASK         (0x00000001)
#define UART5_UARTPP_SC_NOSUPPORT    (0x00000000)
#define UART5_UARTPP_SC_SUPPORT      (0x00000001)
//--------

//--------
#define UART5_UARTPP_R_NB_MASK       (0x00000002)
#define UART5_UARTPP_R_NB_BIT        (1)
#define UART5_UARTPP_R_NB_NOSUPPORT  (0x00000000)
#define UART5_UARTPP_R_NB_SUPPORT    (0x00000002)

#define UART5_UARTPP_NB_MASK         (0x00000001)
#define UART5_UARTPP_NB_NOSUPPORT    (0x00000000)
#define UART5_UARTPP_NB_SUPPORT      (0x00000001)
//--------

#define UART5_UARTPP_SC_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTPP_OFFSET)*32)+(0*4))))
#define UART5_UARTPP_NB_BB     (*((volatile const uint32_t *)(0x42000000+((UART5_OFFSET+UART_UARTPP_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.18 UARTCC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTCC            (((UARTCC_TypeDef*)(UART5_BASE + UART_UARTCC_OFFSET )))
#define UART5_UARTCC_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTCC_OFFSET)))


//--------
#define UART5_UARTCC_R_CS_MASK       (0x0000000F)
#define UART5_UARTCC_R_CS_BIT        (0)
#define UART5_UARTCC_R_CS_SYSCLK     (0x00000000)
#define UART5_UARTCC_R_CS_PIOSC      (0x00000005)

#define UART5_UARTCC_CS_MASK         (0x0000000F)
#define UART5_UARTCC_CS_SYSCLK       (0x00000000)
#define UART5_UARTCC_CS_PIOSC        (0x00000005)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.19 UARTPeriphID4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTPeriphID4            (((UARTPeriphID4_TypeDef*)(UART5_BASE + UART_UARTPeriphID4_OFFSET )))
#define UART5_UARTPeriphID4_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTPeriphID4_OFFSET)))

//--------
#define UART5_UARTPeriphID4_R_PID4_MASK       (0x000000FF)
#define UART5_UARTPeriphID4_R_PID4_BIT        (0)
#define UART5_UARTPeriphID4_R_PID4_DEFAULT    (0x00000000)

#define UART5_UARTPeriphID4_PID4_MASK         (0x000000FF)
#define UART5_UARTPeriphID4_PID4_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.20 UARTPeriphID5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTPeriphID5            (((UARTPeriphID5_TypeDef*)(UART5_BASE + UART_UARTPeriphID5_OFFSET )))
#define UART5_UARTPeriphID5_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTPeriphID5_OFFSET)))

//--------
#define UART5_UARTPeriphID5_R_PID5_MASK       (0x000000FF)
#define UART5_UARTPeriphID5_R_PID5_BIT        (0)
#define UART5_UARTPeriphID5_R_PID5_DEFAULT    (0x00000000)

#define UART5_UARTPeriphID5_PID5_MASK         (0x000000FF)
#define UART5_UARTPeriphID5_PID5_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.21 UARTPeriphID6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTPeriphID6            (((UARTPeriphID6_TypeDef*)(UART5_BASE + UART_UARTPeriphID6_OFFSET )))
#define UART5_UARTPeriphID6_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTPeriphID6_OFFSET)))



//--------
#define UART5_UARTPeriphID6_R_PID6_MASK       (0x000000FF)
#define UART5_UARTPeriphID6_R_PID6_BIT        (0)
#define UART5_UARTPeriphID6_R_PID6_DEFAULT    (0x00000000)

#define UART5_UARTPeriphID6_PID6_MASK         (0x000000FF)
#define UART5_UARTPeriphID6_PID6_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.22 UARTPeriphID7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTPeriphID7            (((UARTPeriphID7_TypeDef*)(UART5_BASE + UART_UARTPeriphID7_OFFSET )))
#define UART5_UARTPeriphID7_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTPeriphID7_OFFSET)))



//--------
#define UART5_UARTPeriphID7_R_PID7_MASK       (0x000000FF)
#define UART5_UARTPeriphID7_R_PID7_BIT        (0)
#define UART5_UARTPeriphID7_R_PID7_DEFAULT    (0x00000000)

#define UART5_UARTPeriphID7_PID7_MASK         (0x000000FF)
#define UART5_UARTPeriphID7_PID7_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.23 UARTPeriphID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTPeriphID0            (((UARTPeriphID0_TypeDef*)(UART5_BASE + UART_UARTPeriphID0_OFFSET )))
#define UART5_UARTPeriphID0_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTPeriphID0_OFFSET)))



//--------
#define UART5_UARTPeriphID0_R_PID0_MASK       (0x000000FF)
#define UART5_UARTPeriphID0_R_PID0_BIT        (0)
#define UART5_UARTPeriphID0_R_PID0_DEFAULT    (0x00000060)

#define UART5_UARTPeriphID0_PID0_MASK         (0x000000FF)
#define UART5_UARTPeriphID0_PID0_DEFAULT      (0x00000060)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.24 UARTPeriphID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTPeriphID1            (((UARTPeriphID1_TypeDef*)(UART5_BASE + UART_UARTPeriphID1_OFFSET )))
#define UART5_UARTPeriphID1_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTPeriphID1_OFFSET)))



//--------
#define UART5_UARTPeriphID1_R_PID1_MASK       (0x000000FF)
#define UART5_UARTPeriphID1_R_PID1_BIT        (0)
#define UART5_UARTPeriphID1_R_PID1_DEFAULT    (0x00000000)

#define UART5_UARTPeriphID1_PID1_MASK         (0x000000FF)
#define UART5_UARTPeriphID1_PID1_DEFAULT      (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.25 UARTPeriphID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTPeriphID2            (((UARTPeriphID2_TypeDef*)(UART5_BASE + UART_UARTPeriphID2_OFFSET )))
#define UART5_UARTPeriphID2_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTPeriphID2_OFFSET)))

//--------
#define UART5_UARTPeriphID2_R_PID2_MASK       (0x000000FF)
#define UART5_UARTPeriphID2_R_PID2_BIT        (0)
#define UART5_UARTPeriphID2_R_PID2_DEFAULT    (0x00000018)

#define UART5_UARTPeriphID2_PID2_MASK         (0x000000FF)
#define UART5_UARTPeriphID2_PID2_DEFAULT      (0x00000018)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.26 UARTPeriphID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTPeriphID3            (((UARTPeriphID3_TypeDef*)(UART5_BASE + UART_UARTPeriphID3_OFFSET )))
#define UART5_UARTPeriphID3_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTPeriphID3_OFFSET)))

//--------
#define UART5_UARTPeriphID3_R_PID3_MASK       (0x000000FF)
#define UART5_UARTPeriphID3_R_PID3_BIT        (0)
#define UART5_UARTPeriphID3_R_PID3_DEFAULT    (0x00000001)

#define UART5_UARTPeriphID3_PID3_MASK         (0x000000FF)
#define UART5_UARTPeriphID3_PID3_DEFAULT      (0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.27 UARTPCellID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTPCellID0            (((UARTPCellID0_TypeDef*)(UART5_BASE + UART_UARTPCellID0_OFFSET )))
#define UART5_UARTPCellID0_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTPCellID0_OFFSET)))

//--------
#define UART5_UARTPCellID0_R_CID0_MASK       (0x000000FF)
#define UART5_UARTPCellID0_R_CID0_BIT        (0)
#define UART5_UARTPCellID0_R_CID0_DEFAULT    (0x0000000D)

#define UART5_UARTPCellID0_CID0_MASK         (0x000000FF)
#define UART5_UARTPCellID0_CID0_DEFAULT      (0x0000000D)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.28 UARTPCellID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTPCellID1            (((UARTPCellID1_TypeDef*)(UART5_BASE + UART_UARTPCellID1_OFFSET )))
#define UART5_UARTPCellID1_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTPCellID1_OFFSET)))

//--------
#define UART5_UARTPCellID1_R_CID1_MASK       (0x000000FF)
#define UART5_UARTPCellID1_R_CID1_BIT        (0)
#define UART5_UARTPCellID1_R_CID1_DEFAULT    (0x000000F0)

#define UART5_UARTPCellID1_CID1_MASK         (0x000000FF)
#define UART5_UARTPCellID1_CID1_DEFAULT      (0x000000F0)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.29 UARTPCellID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTPCellID2            (((UARTPCellID2_TypeDef*)(UART5_BASE + UART_UARTPCellID2_OFFSET )))
#define UART5_UARTPCellID2_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTPCellID2_OFFSET)))

//--------
#define UART5_UARTPCellID2_R_CID2_MASK       (0x000000FF)
#define UART5_UARTPCellID2_R_CID2_BIT        (0)
#define UART5_UARTPCellID2_R_CID2_DEFAULT    (0x00000005)

#define UART5_UARTPCellID2_CID2_MASK         (0x000000FF)
#define UART5_UARTPCellID2_CID2_DEFAULT      (0x00000005)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5.30 UARTPCellID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART5_UARTPCellID3            (((UARTPCellID3_TypeDef*)(UART5_BASE + UART_UARTPCellID3_OFFSET )))
#define UART5_UARTPCellID3_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTPCellID3_OFFSET)))

//--------
#define UART5_UARTPCellID3_R_CID3_MASK       (0x000000FF)
#define UART5_UARTPCellID3_R_CID3_BIT        (0)
#define UART5_UARTPCellID3_R_CID3_DEFAULT    (0x000000B1)

#define UART5_UARTPCellID3_CID3_MASK         (0x000000FF)
#define UART5_UARTPCellID3_CID3_DEFAULT      (0x000000B1)
//--------


//todo UART6

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 UART6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.1 UARTDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTDR            (((UARTDR_TypeDef*)(UART6_BASE + UART_UARTDR_OFFSET )))
#define UART6_UARTDR_R          (*((volatile uint32_t *)(UART6_BASE +UART_UARTDR_OFFSET)))

//--------
#define UART6_UARTDR_R_DATA_MASK       (0x000000FF)
#define UART6_UARTDR_R_DATA_BIT        (0)

#define UART6_UARTDR_DATA_MASK         (0x000000FF)
//--------

//--------
#define UART6_UARTDR_R_FE_MASK       (0x00000100)
#define UART6_UARTDR_R_FE_BIT        (8)
#define UART6_UARTDR_R_FE_NOERROR    (0x00000000)
#define UART6_UARTDR_R_FE_ERROR      (0x00000100)

#define UART6_UARTDR_FE_MASK         (0x00000001)
#define UART6_UARTDR_FE_NOERROR      (0x00000000)
#define UART6_UARTDR_FE_ERROR        (0x00000001)
//--------

//--------
#define UART6_UARTDR_R_PE_MASK       (0x00000200)
#define UART6_UARTDR_R_PE_BIT        (9)
#define UART6_UARTDR_R_PE_NOERROR    (0x00000000)
#define UART6_UARTDR_R_PE_ERROR      (0x00000200)

#define UART6_UARTDR_PE_MASK         (0x00000001)
#define UART6_UARTDR_PE_NOERROR      (0x00000000)
#define UART6_UARTDR_PE_ERROR        (0x00000001)
//--------

//--------
#define UART6_UARTDR_R_BE_MASK       (0x00000400)
#define UART6_UARTDR_R_BE_BIT        (10)
#define UART6_UARTDR_R_BE_NOERROR    (0x00000000)
#define UART6_UARTDR_R_BE_ERROR      (0x00000400)

#define UART6_UARTDR_BE_MASK         (0x00000001)
#define UART6_UARTDR_BE_NOERROR      (0x00000000)
#define UART6_UARTDR_BE_ERROR        (0x00000001)
//--------

//--------
#define UART6_UARTDR_R_OE_MASK       (0x00000800)
#define UART6_UARTDR_R_OE_BIT        (11)
#define UART6_UARTDR_R_OE_NOERROR    (0x00000000)
#define UART6_UARTDR_R_OE_ERROR      (0x00000800)

#define UART6_UARTDR_OE_MASK         (0x00000001)
#define UART6_UARTDR_OE_NOERROR      (0x00000000)
#define UART6_UARTDR_OE_ERROR        (0x00000001)
//--------

#define UART6_UARTDR_FE_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTDR_OFFSET)*32)+(8*4))))
#define UART6_UARTDR_PE_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTDR_OFFSET)*32)+(9*4))))
#define UART6_UARTDR_BE_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTDR_OFFSET)*32)+(10*4))))
#define UART6_UARTDR_OE_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTDR_OFFSET)*32)+(11*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.2 UARTRSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTRSR            (((UARTRSR_TypeDef*)(UART6_BASE + UART_UARTRSR_OFFSET )))
#define UART6_UARTRSR_R          (*((volatile const uint32_t *)(UART6_BASE +UART_UARTRSR_OFFSET)))


//--------
#define UART6_UARTRSR_R_FE_MASK       (0x00000001)
#define UART6_UARTRSR_R_FE_BIT        (0)
#define UART6_UARTRSR_R_FE_NOERROR    (0x00000000)
#define UART6_UARTRSR_R_FE_ERROR      (0x00000001)

#define UART6_UARTRSR_FE_MASK         (0x00000001)
#define UART6_UARTRSR_FE_NOERROR      (0x00000000)
#define UART6_UARTRSR_FE_ERROR        (0x00000001)
//--------

//--------
#define UART6_UARTRSR_R_PE_MASK       (0x00000002)
#define UART6_UARTRSR_R_PE_BIT        (1)
#define UART6_UARTRSR_R_PE_NOERROR    (0x00000000)
#define UART6_UARTRSR_R_PE_ERROR      (0x00000002)

#define UART6_UARTRSR_PE_MASK         (0x00000001)
#define UART6_UARTRSR_PE_NOERROR      (0x00000000)
#define UART6_UARTRSR_PE_ERROR        (0x00000001)
//--------

//--------
#define UART6_UARTRSR_R_BE_MASK       (0x00000004)
#define UART6_UARTRSR_R_BE_BIT        (2)
#define UART6_UARTRSR_R_BE_NOERROR    (0x00000000)
#define UART6_UARTRSR_R_BE_ERROR      (0x00000004)

#define UART6_UARTRSR_BE_MASK         (0x00000001)
#define UART6_UARTRSR_BE_NOERROR      (0x00000000)
#define UART6_UARTRSR_BE_ERROR        (0x00000001)
//--------

//--------
#define UART6_UARTRSR_R_OE_MASK       (0x00000008)
#define UART6_UARTRSR_R_OE_BIT        (3)
#define UART6_UARTRSR_R_OE_NOERROR    (0x00000000)
#define UART6_UARTRSR_R_OE_ERROR      (0x00000008)

#define UART6_UARTRSR_OE_MASK         (0x00000001)
#define UART6_UARTRSR_OE_NOERROR      (0x00000000)
#define UART6_UARTRSR_OE_ERROR        (0x00000001)
//--------

#define UART6_UARTRSR_FE_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTRSR_OFFSET)*32)+(0*4))))
#define UART6_UARTRSR_PE_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTRSR_OFFSET)*32)+(1*4))))
#define UART6_UARTRSR_BE_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTRSR_OFFSET)*32)+(2*4))))
#define UART6_UARTRSR_OE_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTRSR_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.2 UARTECR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTECR            (((UARTECR_TypeDef*)(UART6_BASE + UART_UARTECR_OFFSET )))
#define UART6_UARTECR_R          (*((volatile uint32_t *)(UART6_BASE +UART_UARTECR_OFFSET)))

//--------
#define UART6_UARTECR_R_DATA_MASK       (0x000000FF)
#define UART6_UARTECR_R_DATA_BIT        (0)

#define UART6_UARTECR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.3 UARTFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTFR            (((UARTFR_TypeDef*)(UART6_BASE + UART_UARTFR_OFFSET )))
#define UART6_UARTFR_R          (*((volatile const uint32_t *)(UART6_BASE +UART_UARTFR_OFFSET)))

//--------
#define UART6_UARTFR_R_CTS_MASK       (0x00000001)
#define UART6_UARTFR_R_CTS_BIT        (0)
#define UART6_UARTFR_R_CTS_NOASSERT   (0x00000000)
#define UART6_UARTFR_R_CTS_ASSERT     (0x00000001)

#define UART6_UARTFR_CTS_MASK         (0x00000001)
#define UART6_UARTFR_CTS_NOASSERT     (0x00000000)
#define UART6_UARTFR_CTS_ASSERT       (0x00000001)
//--------

//--------
#define UART6_UARTFR_R_BUSY_MASK       (0x00000008)
#define UART6_UARTFR_R_BUSY_BIT        (3)
#define UART6_UARTFR_R_BUSY_NOBUSY     (0x00000000)
#define UART6_UARTFR_R_BUSY_BUSY       (0x00000008)

#define UART6_UARTFR_BUSY_MASK         (0x00000001)
#define UART6_UARTFR_BUSY_NOBUSY       (0x00000000)
#define UART6_UARTFR_BUSY_BUSY         (0x00000001)
//--------

//--------
#define UART6_UARTFR_R_RXFE_MASK       (0x00000010)
#define UART6_UARTFR_R_RXFE_BIT        (4)
#define UART6_UARTFR_R_RXFE_NOEMPTY    (0x00000000)
#define UART6_UARTFR_R_RXFE_EMPTY      (0x00000010)

#define UART6_UARTFR_RXFE_MASK         (0x00000001)
#define UART6_UARTFR_RXFE_NOEMPTY      (0x00000000)
#define UART6_UARTFR_RXFE_EMPTY        (0x00000001)
//--------

//--------
#define UART6_UARTFR_R_TXFF_MASK       (0x00000020)
#define UART6_UARTFR_R_TXFF_BIT        (5)
#define UART6_UARTFR_R_TXFF_NOFULL     (0x00000000)
#define UART6_UARTFR_R_TXFF_FULL       (0x00000020)

#define UART6_UARTFR_TXFF_MASK         (0x00000001)
#define UART6_UARTFR_TXFF_NOFULL       (0x00000000)
#define UART6_UARTFR_TXFF_FULL         (0x00000001)
//--------

//--------
#define UART6_UARTFR_R_RXFF_MASK       (0x00000040)
#define UART6_UARTFR_R_RXFF_BIT        (6)
#define UART6_UARTFR_R_RXFF_NOFULL     (0x00000000)
#define UART6_UARTFR_R_RXFF_FULL       (0x00000040)

#define UART6_UARTFR_RXFF_MASK         (0x00000001)
#define UART6_UARTFR_RXFF_NOFULL       (0x00000000)
#define UART6_UARTFR_RXFF_FULL         (0x00000001)
//--------

//--------
#define UART6_UARTFR_R_TXFE_MASK       (0x00000080)
#define UART6_UARTFR_R_TXFE_BIT        (7)
#define UART6_UARTFR_R_TXFE_NOEMPTY    (0x00000000)
#define UART6_UARTFR_R_TXFE_EMPTY      (0x00000080)

#define UART6_UARTFR_TXFE_MASK         (0x00000001)
#define UART6_UARTFR_TXFE_NOEMPTY      (0x00000000)
#define UART6_UARTFR_TXFE_EMPTY        (0x00000001)
//--------

#define UART6_UARTFR_CTS_BB      (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTFR_OFFSET)*32)+(0*4))))
#define UART6_UARTFR_BUSY_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTFR_OFFSET)*32)+(3*4))))
#define UART6_UARTFR_RXFE_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTFR_OFFSET)*32)+(4*4))))
#define UART6_UARTFR_TXFF_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTFR_OFFSET)*32)+(5*4))))
#define UART6_UARTFR_RXFF_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTFR_OFFSET)*32)+(6*4))))
#define UART6_UARTFR_TXFE_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTFR_OFFSET)*32)+(7*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.4 UARTILPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
#define UART6_UARTILPR            (((UARTILPR_TypeDef*)(UART6_BASE + UART_UARTILPR_OFFSET )))
#define UART6_UARTILPR_R          (*((volatile uint32_t *)(UART6_BASE +UART_UARTILPR_OFFSET)))

//--------
#define UART6_UARTILPR_R_ILPDVSR_MASK       (0x000000FF)
#define UART6_UARTILPR_R_ILPDVSR_BIT        (0)

#define UART6_UARTILPR_ILPDVSR_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.5 UARTIBRD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTIBRD            (((UARTIBRD_TypeDef*)(UART6_BASE + UART_UARTIBRD_OFFSET )))
#define UART6_UARTIBRD_R          (*((volatile uint32_t *)(UART6_BASE +UART_UARTIBRD_OFFSET)))

//--------
#define UART6_UARTIBRD_R_DIVINT_MASK       (0x0000FFFF)
#define UART6_UARTIBRD_R_DIVINT_BIT        (0)

#define UART6_UARTIBRD_DIVINT_MASK         (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.6 UARTFBRD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTFBRD            (((UARTFBRD_TypeDef*)(UART6_BASE + UART_UARTFBRD_OFFSET )))
#define UART6_UARTFBRD_R          (*((volatile uint32_t *)(UART6_BASE +UART_UARTFBRD_OFFSET)))

//--------
#define UART6_UARTFBRD_R_DIVFRAC_MASK       (0x0000003F)
#define UART6_UARTFBRD_R_DIVFRAC_BIT        (0)

#define UART6_UARTFBRD_DIVFRAC_MASK         (0x0000003F)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.7 UARTLCRH ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTLCRH            (((UARTLCRH_TypeDef*)(UART6_BASE + UART_UARTLCRH_OFFSET )))
#define UART6_UARTLCRH_R          (*((volatile uint32_t *)(UART6_BASE +UART_UARTLCRH_OFFSET)))

//--------
#define UART6_UARTLCRH_R_BRK_MASK       (0x00000001)
#define UART6_UARTLCRH_R_BRK_BIT        (0)
#define UART6_UARTLCRH_R_BRK_NORMAL     (0x00000000)
#define UART6_UARTLCRH_R_BRK_LOW        (0x00000001)

#define UART6_UARTLCRH_BRK_MASK         (0x00000001)
#define UART6_UARTLCRH_BRK_NORMAL       (0x00000000)
#define UART6_UARTLCRH_BRK_LOW          (0x00000001)
//--------

//--------
#define UART6_UARTLCRH_R_PEN_MASK       (0x00000002)
#define UART6_UARTLCRH_R_PEN_BIT        (1)
#define UART6_UARTLCRH_R_PEN_DIS        (0x00000000)
#define UART6_UARTLCRH_R_PEN_EN         (0x00000002)

#define UART6_UARTLCRH_PEN_MASK         (0x00000001)
#define UART6_UARTLCRH_PEN_DIS          (0x00000000)
#define UART6_UARTLCRH_PEN_EN           (0x00000001)
//--------

//--------
#define UART6_UARTLCRH_R_EPS_MASK       (0x00000004)
#define UART6_UARTLCRH_R_EPS_BIT        (2)
#define UART6_UARTLCRH_R_EPS_ODD        (0x00000000)
#define UART6_UARTLCRH_R_EPS_EVEN       (0x00000004)

#define UART6_UARTLCRH_EPS_MASK         (0x00000001)
#define UART6_UARTLCRH_EPS_ODD          (0x00000000)
#define UART6_UARTLCRH_EPS_EVEN         (0x00000001)
//--------

//--------
#define UART6_UARTLCRH_R_STP2_MASK       (0x00000008)
#define UART6_UARTLCRH_R_STP2_BIT        (3)
#define UART6_UARTLCRH_R_STP2_ONE        (0x00000000)
#define UART6_UARTLCRH_R_STP2_TWO        (0x00000008)

#define UART6_UARTLCRH_STP2_MASK         (0x00000001)
#define UART6_UARTLCRH_STP2_ONE          (0x00000000)
#define UART6_UARTLCRH_STP2_TWO          (0x00000001)
//--------

//--------
#define UART6_UARTLCRH_R_FEN_MASK       (0x00000010)
#define UART6_UARTLCRH_R_FEN_BIT        (4)
#define UART6_UARTLCRH_R_FEN_DIS        (0x00000000)
#define UART6_UARTLCRH_R_FEN_EN         (0x00000010)

#define UART6_UARTLCRH_FEN_MASK         (0x00000001)
#define UART6_UARTLCRH_FEN_DIS          (0x00000000)
#define UART6_UARTLCRH_FEN_EN           (0x00000001)
//--------

//--------
#define UART6_UARTLCRH_R_WLEN_MASK       (0x00000060)
#define UART6_UARTLCRH_R_WLEN_BIT        (5)
#define UART6_UARTLCRH_R_WLEN_5          (0x00000000)
#define UART6_UARTLCRH_R_WLEN_6          (0x00000020)
#define UART6_UARTLCRH_R_WLEN_7          (0x00000040)
#define UART6_UARTLCRH_R_WLEN_8          (0x00000060)

#define UART6_UARTLCRH_WLEN_MASK         (0x00000003)
#define UART6_UARTLCRH_WLEN_5            (0x00000000)
#define UART6_UARTLCRH_WLEN_6            (0x00000001)
#define UART6_UARTLCRH_WLEN_7            (0x00000002)
#define UART6_UARTLCRH_WLEN_8            (0x00000003)
//--------

//--------
#define UART6_UARTLCRH_R_SPS_MASK       (0x00000080)
#define UART6_UARTLCRH_R_SPS_BIT        (7)
#define UART6_UARTLCRH_R_SPS_LOW        (0x00000000)
#define UART6_UARTLCRH_R_SPS_HIGH       (0x00000080)

#define UART6_UARTLCRH_SPS_MASK         (0x00000001)
#define UART6_UARTLCRH_SPS_LOW          (0x00000000)
#define UART6_UARTLCRH_SPS_HIGH         (0x00000001)
//--------

#define UART6_UARTLCRH_BRK_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTLCRH_OFFSET)*32)+(0*4))))
#define UART6_UARTLCRH_PEN_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTLCRH_OFFSET)*32)+(1*4))))
#define UART6_UARTLCRH_EPS_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTLCRH_OFFSET)*32)+(2*4))))
#define UART6_UARTLCRH_STP2_BB    (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTLCRH_OFFSET)*32)+(3*4))))
#define UART6_UARTLCRH_FEN_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTLCRH_OFFSET)*32)+(4*4))))
#define UART6_UARTLCRH_SPS_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTLCRH_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.8 UARTCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTCTL            (((UARTCTL_TypeDef*)(UART6_BASE + UART_UARTCTL_OFFSET )))
#define UART6_UARTCTL_R          (*((volatile uint32_t *)(UART6_BASE +UART_UARTCTL_OFFSET)))

//--------
#define UART6_UARTCTL_R_UARTEN_MASK       (0x00000001)
#define UART6_UARTCTL_R_UARTEN_BIT        (0)
#define UART6_UARTCTL_R_UARTEN_DIS        (0x00000000)
#define UART6_UARTCTL_R_UARTEN_EN         (0x00000001)

#define UART6_UARTCTL_UARTEN_MASK         (0x00000001)
#define UART6_UARTCTL_UARTEN_DIS          (0x00000000)
#define UART6_UARTCTL_UARTEN_EN           (0x00000001)
//--------

//--------
#define UART6_UARTCTL_R_SIREN_MASK       (0x00000002)
#define UART6_UARTCTL_R_SIREN_BIT        (1)
#define UART6_UARTCTL_R_SIREN_DIS        (0x00000000)
#define UART6_UARTCTL_R_SIREN_EN         (0x00000002)

#define UART6_UARTCTL_SIREN_MASK         (0x00000001)
#define UART6_UARTCTL_SIREN_DIS          (0x00000000)
#define UART6_UARTCTL_SIREN_EN           (0x00000001)
//--------

//--------
#define UART6_UARTCTL_R_SIRLP_MASK       (0x00000004)
#define UART6_UARTCTL_R_SIRLP_BIT        (2)
#define UART6_UARTCTL_R_SIRLP_DIS        (0x00000000)
#define UART6_UARTCTL_R_SIRLP_EN         (0x00000004)

#define UART6_UARTCTL_SIRLP_MASK         (0x00000001)
#define UART6_UARTCTL_SIRLP_DIS          (0x00000000)
#define UART6_UARTCTL_SIRLP_EN           (0x00000001)
//--------

//--------
#define UART6_UARTCTL_R_SMART_MASK       (0x00000008)
#define UART6_UARTCTL_R_SMART_BIT        (3)
#define UART6_UARTCTL_R_SMART_DIS        (0x00000000)
#define UART6_UARTCTL_R_SMART_EN         (0x00000008)

#define UART6_UARTCTL_SMART_MASK         (0x00000001)
#define UART6_UARTCTL_SMART_DIS          (0x00000000)
#define UART6_UARTCTL_SMART_EN           (0x00000001)
//--------

//--------
#define UART6_UARTCTL_R_EOT_MASK       (0x00000010)
#define UART6_UARTCTL_R_EOT_BIT        (4)
#define UART6_UARTCTL_R_EOT_FIFO       (0x00000000)
#define UART6_UARTCTL_R_EOT_ALL        (0x00000010)

#define UART6_UARTCTL_EOT_MASK         (0x00000001)
#define UART6_UARTCTL_EOT_FIFO         (0x00000000)
#define UART6_UARTCTL_EOT_ALL          (0x00000001)
//--------

//--------
#define UART6_UARTCTL_R_HSE_MASK       (0x00000020)
#define UART6_UARTCTL_R_HSE_BIT        (5)
#define UART6_UARTCTL_R_HSE_DIS        (0x00000000)
#define UART6_UARTCTL_R_HSE_EN         (0x00000020)

#define UART6_UARTCTL_HSE_MASK         (0x00000001)
#define UART6_UARTCTL_HSE_DIS          (0x00000000)
#define UART6_UARTCTL_HSE_EN           (0x00000001)
//--------

//--------
#define UART6_UARTCTL_R_LBE_MASK       (0x00000080)
#define UART6_UARTCTL_R_LBE_BIT        (7)
#define UART6_UARTCTL_R_LBE_DIS        (0x00000000)
#define UART6_UARTCTL_R_LBE_EN         (0x00000080)

#define UART6_UARTCTL_LBE_MASK         (0x00000001)
#define UART6_UARTCTL_LBE_DIS          (0x00000000)
#define UART6_UARTCTL_LBE_EN           (0x00000001)
//--------

//--------
#define UART6_UARTCTL_R_TXE_MASK       (0x00000100)
#define UART6_UARTCTL_R_TXE_BIT        (8)
#define UART6_UARTCTL_R_TXE_DIS        (0x00000000)
#define UART6_UARTCTL_R_TXE_EN         (0x00000100)

#define UART6_UARTCTL_TXE_MASK         (0x00000001)
#define UART6_UARTCTL_TXE_DIS          (0x00000000)
#define UART6_UARTCTL_TXE_EN           (0x00000001)
//--------

//--------
#define UART6_UARTCTL_R_RXE_MASK       (0x00000200)
#define UART6_UARTCTL_R_RXE_BIT        (9)
#define UART6_UARTCTL_R_RXE_DIS        (0x00000000)
#define UART6_UARTCTL_R_RXE_EN         (0x00000200)

#define UART6_UARTCTL_RXE_MASK         (0x00000001)
#define UART6_UARTCTL_RXE_DIS          (0x00000000)
#define UART6_UARTCTL_RXE_EN           (0x00000001)
//--------

//--------
#define UART6_UARTCTL_R_RTS_MASK       (0x00000800)
#define UART6_UARTCTL_R_RTS_BIT        (11)
#define UART6_UARTCTL_R_RTS_LOW        (0x00000000)
#define UART6_UARTCTL_R_RTS_HIGH       (0x00000800)

#define UART6_UARTCTL_RTS_MASK         (0x00000001)
#define UART6_UARTCTL_RTS_LOW          (0x00000000)
#define UART6_UARTCTL_RTS_HIGH         (0x00000001)
//--------

//--------
#define UART6_UARTCTL_R_RTSEN_MASK       (0x00004000)
#define UART6_UARTCTL_R_RTSEN_BIT        (14)
#define UART6_UARTCTL_R_RTSEN_DIS        (0x00000000)
#define UART6_UARTCTL_R_RTSEN_EN         (0x00004000)

#define UART6_UARTCTL_RTSEN_MASK         (0x00000001)
#define UART6_UARTCTL_RTSEN_DIS          (0x00000000)
#define UART6_UARTCTL_RTSEN_EN           (0x00000001)
//--------

//--------
#define UART6_UARTCTL_R_CTSEN_MASK       (0x00008000)
#define UART6_UARTCTL_R_CTSEN_BIT        (15)
#define UART6_UARTCTL_R_CTSEN_DIS        (0x00000000)
#define UART6_UARTCTL_R_CTSEN_EN         (0x00008000)

#define UART6_UARTCTL_CTSEN_MASK         (0x00000001)
#define UART6_UARTCTL_CTSEN_DIS          (0x00000000)
#define UART6_UARTCTL_CTSEN_EN           (0x00000001)
//--------

#define UART6_UARTCTL_UARTEN_BB    (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTCTL_OFFSET)*32)+(0*4))))
#define UART6_UARTCTL_SIREN_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTCTL_OFFSET)*32)+(1*4))))
#define UART6_UARTCTL_SIRLP_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTCTL_OFFSET)*32)+(2*4))))
#define UART6_UARTCTL_SMART_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTCTL_OFFSET)*32)+(3*4))))
#define UART6_UARTCTL_EOT_BB       (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTCTL_OFFSET)*32)+(4*4))))
#define UART6_UARTCTL_HSE_BB       (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTCTL_OFFSET)*32)+(5*4))))
#define UART6_UARTCTL_LBE_BB       (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTCTL_OFFSET)*32)+(7*4))))
#define UART6_UARTCTL_TXE_BB       (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTCTL_OFFSET)*32)+(8*4))))
#define UART6_UARTCTL_RXE_BB       (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTCTL_OFFSET)*32)+(9*4))))
#define UART6_UARTCTL_RTS_BB       (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTCTL_OFFSET)*32)+(11*4))))
#define UART6_UARTCTL_RTSEN_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTCTL_OFFSET)*32)+(14*4))))
#define UART6_UARTCTL_CTSEN_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTCTL_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.9 UARTIFLS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTIFLS            (((UARTIFLS_TypeDef*)(UART6_BASE + UART_UARTIFLS_OFFSET )))
#define UART6_UARTIFLS_R          (*((volatile uint32_t *)(UART6_BASE +UART_UARTIFLS_OFFSET)))

//--------
#define UART6_UARTIFLS_R_TXIFLSEL_MASK       (0x00000007)
#define UART6_UARTIFLS_R_TXIFLSEL_BIT        (0)
#define UART6_UARTIFLS_R_TXIFLSEL_1_4        (0x00000000)
#define UART6_UARTIFLS_R_TXIFLSEL_1_2        (0x00000002)
#define UART6_UARTIFLS_R_TXIFLSEL_3_4        (0x00000003)
#define UART6_UARTIFLS_R_TXIFLSEL_7_8        (0x00000004)

#define UART6_UARTIFLS_TXIFLSEL_MASK         (0x00000007)
#define UART6_UARTIFLS_TXIFLSEL_1_4          (0x00000000)
#define UART6_UARTIFLS_TXIFLSEL_1_2          (0x00000002)
#define UART6_UARTIFLS_TXIFLSEL_3_4          (0x00000003)
#define UART6_UARTIFLS_TXIFLSEL_7_8          (0x00000004)
//--------

//--------
#define UART6_UARTIFLS_R_RXIFLSEL_MASK       (0x00000038)
#define UART6_UARTIFLS_R_RXIFLSEL_BIT        (0)
#define UART6_UARTIFLS_R_RXIFLSEL_1_4        (0x00000000)
#define UART6_UARTIFLS_R_RXIFLSEL_1_2        (0x00000010)
#define UART6_UARTIFLS_R_RXIFLSEL_3_4        (0x00000018)
#define UART6_UARTIFLS_R_RXIFLSEL_7_8        (0x00000020)

#define UART6_UARTIFLS_RXIFLSEL_MASK         (0x00000007)
#define UART6_UARTIFLS_RXIFLSEL_1_4          (0x00000000)
#define UART6_UARTIFLS_RXIFLSEL_1_2          (0x00000002)
#define UART6_UARTIFLS_RXIFLSEL_3_4          (0x00000003)
#define UART6_UARTIFLS_RXIFLSEL_7_8          (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.10 UARTIM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTIM            (((UARTIM_TypeDef*)(UART6_BASE + UART_UARTIM_OFFSET )))
#define UART6_UARTIM_R          (*((volatile uint32_t *)(UART6_BASE +UART_UARTIM_OFFSET)))

//--------
#define UART6_UARTIM_R_CTSIM_MASK       (0x00000002)
#define UART6_UARTIM_R_CTSIM_BIT        (1)
#define UART6_UARTIM_R_CTSIM_DIS        (0x00000000)
#define UART6_UARTIM_R_CTSIM_EN         (0x00000002)

#define UART6_UARTIM_CTSIM_MASK         (0x00000001)
#define UART6_UARTIM_CTSIM_DIS          (0x00000000)
#define UART6_UARTIM_CTSIM_EN           (0x00000001)
//--------

//--------
#define UART6_UARTIM_R_RXIM_MASK       (0x00000010)
#define UART6_UARTIM_R_RXIM_BIT        (4)
#define UART6_UARTIM_R_RXIM_DIS        (0x00000000)
#define UART6_UARTIM_R_RXIM_EN         (0x00000010)

#define UART6_UARTIM_RXIM_MASK         (0x00000001)
#define UART6_UARTIM_RXIM_DIS          (0x00000000)
#define UART6_UARTIM_RXIM_EN           (0x00000001)
//--------

//--------
#define UART6_UARTIM_R_TXIM_MASK       (0x00000020)
#define UART6_UARTIM_R_TXIM_BIT        (5)
#define UART6_UARTIM_R_TXIM_DIS        (0x00000000)
#define UART6_UARTIM_R_TXIM_EN         (0x00000020)

#define UART6_UARTIM_TXIM_MASK         (0x00000001)
#define UART6_UARTIM_TXIM_DIS          (0x00000000)
#define UART6_UARTIM_TXIM_EN           (0x00000001)
//--------

//--------
#define UART6_UARTIM_R_RTIM_MASK       (0x00000040)
#define UART6_UARTIM_R_RTIM_BIT        (6)
#define UART6_UARTIM_R_RTIM_DIS        (0x00000000)
#define UART6_UARTIM_R_RTIM_EN         (0x00000040)

#define UART6_UARTIM_RTIM_MASK         (0x00000001)
#define UART6_UARTIM_RTIM_DIS          (0x00000000)
#define UART6_UARTIM_RTIM_EN           (0x00000001)
//--------

//--------
#define UART6_UARTIM_R_FEIM_MASK       (0x00000080)
#define UART6_UARTIM_R_FEIM_BIT        (7)
#define UART6_UARTIM_R_FEIM_DIS        (0x00000000)
#define UART6_UARTIM_R_FEIM_EN         (0x00000080)

#define UART6_UARTIM_FEIM_MASK         (0x00000001)
#define UART6_UARTIM_FEIM_DIS          (0x00000000)
#define UART6_UARTIM_FEIM_EN           (0x00000001)
//--------

//--------
#define UART6_UARTIM_R_PEIM_MASK       (0x00000100)
#define UART6_UARTIM_R_PEIM_BIT        (8)
#define UART6_UARTIM_R_PEIM_DIS        (0x00000000)
#define UART6_UARTIM_R_PEIM_EN         (0x00000100)

#define UART6_UARTIM_PEIM_MASK         (0x00000001)
#define UART6_UARTIM_PEIM_DIS          (0x00000000)
#define UART6_UARTIM_PEIM_EN           (0x00000001)
//--------

//--------
#define UART6_UARTIM_R_BEIM_MASK       (0x00000200)
#define UART6_UARTIM_R_BEIM_BIT        (9)
#define UART6_UARTIM_R_BEIM_DIS        (0x00000000)
#define UART6_UARTIM_R_BEIM_EN         (0x00000200)

#define UART6_UARTIM_BEIM_MASK         (0x00000001)
#define UART6_UARTIM_BEIM_DIS          (0x00000000)
#define UART6_UARTIM_BEIM_EN           (0x00000001)
//--------

//--------
#define UART6_UARTIM_R_OEIM_MASK       (0x00000400)
#define UART6_UARTIM_R_OEIM_BIT        (10)
#define UART6_UARTIM_R_OEIM_DIS        (0x00000000)
#define UART6_UARTIM_R_OEIM_EN         (0x00000400)

#define UART6_UARTIM_OEIM_MASK         (0x00000001)
#define UART6_UARTIM_OEIM_DIS          (0x00000000)
#define UART6_UARTIM_OEIM_EN           (0x00000001)
//--------

//--------
#define UART6_UARTIM_R_9BITIM_MASK       (0x00001000)
#define UART6_UARTIM_R_9BITIM_BIT        (12)
#define UART6_UARTIM_R_9BITIM_DIS        (0x00000000)
#define UART6_UARTIM_R_9BITIM_EN         (0x00001000)

#define UART6_UARTIM_9BITIM_MASK         (0x00000001)
#define UART6_UARTIM_9BITIM_DIS          (0x00000000)
#define UART6_UARTIM_9BITIM_EN           (0x00000001)
//--------

#define UART6_UARTIM_CTSIM_BB    (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTIM_OFFSET)*32)+(1*4))))
#define UART6_UARTIM_RXIM_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTIM_OFFSET)*32)+(4*4))))
#define UART6_UARTIM_TXIM_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTIM_OFFSET)*32)+(5*4))))
#define UART6_UARTIM_RTIM_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTIM_OFFSET)*32)+(6*4))))
#define UART6_UARTIM_FEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTIM_OFFSET)*32)+(7*4))))
#define UART6_UARTIM_PEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTIM_OFFSET)*32)+(8*4))))
#define UART6_UARTIM_BEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTIM_OFFSET)*32)+(9*4))))
#define UART6_UARTIM_OEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTIM_OFFSET)*32)+(10*4))))
#define UART6_UARTIM_9BITIM_BB   (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTIM_OFFSET)*32)+(12*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.11 UARTRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTRIS            (((UARTRIS_TypeDef*)(UART6_BASE + UART_UARTRIS_OFFSET )))
#define UART6_UARTRIS_R          (*((volatile uint32_t *)(UART6_BASE +UART_UARTRIS_OFFSET)))



//--------
#define UART6_UARTRIS_R_CTSRIS_MASK       (0x00000002)
#define UART6_UARTRIS_R_CTSRIS_BIT        (1)
#define UART6_UARTRIS_R_CTSRIS_NOACTIVE   (0x00000000)
#define UART6_UARTRIS_R_CTSRIS_ACTIVE     (0x00000002)

#define UART6_UARTRIS_CTSRIS_MASK         (0x00000001)
#define UART6_UARTRIS_CTSRIS_NOACTIVE     (0x00000000)
#define UART6_UARTRIS_CTSRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART6_UARTRIS_R_RXRIS_MASK       (0x00000010)
#define UART6_UARTRIS_R_RXRIS_BIT        (4)
#define UART6_UARTRIS_R_RXRIS_NOACTIVE   (0x00000000)
#define UART6_UARTRIS_R_RXRIS_ACTIVE     (0x00000010)

#define UART6_UARTRIS_RXRIS_MASK         (0x00000001)
#define UART6_UARTRIS_RXRIS_NOACTIVE     (0x00000000)
#define UART6_UARTRIS_RXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART6_UARTRIS_R_TXRIS_MASK       (0x00000020)
#define UART6_UARTRIS_R_TXRIS_BIT        (5)
#define UART6_UARTRIS_R_TXRIS_NOACTIVE   (0x00000000)
#define UART6_UARTRIS_R_TXRIS_ACTIVE     (0x00000020)

#define UART6_UARTRIS_TXRIS_MASK         (0x00000001)
#define UART6_UARTRIS_TXRIS_NOACTIVE     (0x00000000)
#define UART6_UARTRIS_TXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART6_UARTRIS_R_RTRIS_MASK       (0x00000040)
#define UART6_UARTRIS_R_RTRIS_BIT        (6)
#define UART6_UARTRIS_R_RTRIS_NOACTIVE   (0x00000000)
#define UART6_UARTRIS_R_RTRIS_ACTIVE     (0x00000040)

#define UART6_UARTRIS_RTRIS_MASK         (0x00000001)
#define UART6_UARTRIS_RTRIS_NOACTIVE     (0x00000000)
#define UART6_UARTRIS_RTRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART6_UARTRIS_R_FERIS_MASK       (0x00000080)
#define UART6_UARTRIS_R_FERIS_BIT        (7)
#define UART6_UARTRIS_R_FERIS_NOACTIVE   (0x00000000)
#define UART6_UARTRIS_R_FERIS_ACTIVE     (0x00000080)

#define UART6_UARTRIS_FERIS_MASK         (0x00000001)
#define UART6_UARTRIS_FERIS_NOACTIVE     (0x00000000)
#define UART6_UARTRIS_FERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART6_UARTRIS_R_PERIS_MASK       (0x00000100)
#define UART6_UARTRIS_R_PERIS_BIT        (8)
#define UART6_UARTRIS_R_PERIS_NOACTIVE   (0x00000000)
#define UART6_UARTRIS_R_PERIS_ACTIVE     (0x00000100)

#define UART6_UARTRIS_PERIS_MASK         (0x00000001)
#define UART6_UARTRIS_PERIS_NOACTIVE     (0x00000000)
#define UART6_UARTRIS_PERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART6_UARTRIS_R_BERIS_MASK       (0x00000200)
#define UART6_UARTRIS_R_BERIS_BIT        (9)
#define UART6_UARTRIS_R_BERIS_NOACTIVE   (0x00000000)
#define UART6_UARTRIS_R_BERIS_ACTIVE     (0x00000200)

#define UART6_UARTRIS_BERIS_MASK         (0x00000001)
#define UART6_UARTRIS_BERIS_NOACTIVE     (0x00000000)
#define UART6_UARTRIS_BERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART6_UARTRIS_R_OERIS_MASK       (0x00000400)
#define UART6_UARTRIS_R_OERIS_BIT        (10)
#define UART6_UARTRIS_R_OERIS_NOACTIVE   (0x00000000)
#define UART6_UARTRIS_R_OERIS_ACTIVE     (0x00000400)

#define UART6_UARTRIS_OERIS_MASK         (0x00000001)
#define UART6_UARTRIS_OERIS_NOACTIVE     (0x00000000)
#define UART6_UARTRIS_OERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART6_UARTRIS_R_9BITRIS_MASK       (0x00001000)
#define UART6_UARTRIS_R_9BITRIS_BIT        (12)
#define UART6_UARTRIS_R_9BITRIS_NOACTIVE   (0x00000000)
#define UART6_UARTRIS_R_9BITRIS_ACTIVE     (0x00001000)

#define UART6_UARTRIS_9BITRIS_MASK         (0x00000001)
#define UART6_UARTRIS_9BITRIS_NOACTIVE     (0x00000000)
#define UART6_UARTRIS_9BITRIS_ACTIVE       (0x00000001)
//--------

#define UART6_UARTRIS_CTSRIS_BB    (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTRIS_OFFSET)*32)+(1*4))))
#define UART6_UARTRIS_RXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTRIS_OFFSET)*32)+(4*4))))
#define UART6_UARTRIS_TXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTRIS_OFFSET)*32)+(5*4))))
#define UART6_UARTRIS_RTRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTRIS_OFFSET)*32)+(6*4))))
#define UART6_UARTRIS_FERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTRIS_OFFSET)*32)+(7*4))))
#define UART6_UARTRIS_PERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTRIS_OFFSET)*32)+(8*4))))
#define UART6_UARTRIS_BERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTRIS_OFFSET)*32)+(9*4))))
#define UART6_UARTRIS_OERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTRIS_OFFSET)*32)+(10*4))))
#define UART6_UARTRIS_9BITRIS_BB   (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTRIS_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.12 UARTMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTMIS            (((UARTMIS_TypeDef*)(UART6_BASE + UART_UARTMIS_OFFSET )))
#define UART6_UARTMIS_R          (*((volatile const uint32_t *)(UART6_BASE +UART_UARTMIS_OFFSET)))



//--------
#define UART6_UARTMIS_R_CTSMIS_MASK       (0x00000002)
#define UART6_UARTMIS_R_CTSMIS_BIT        (1)
#define UART6_UARTMIS_R_CTSMIS_NOOCCUR    (0x00000000)
#define UART6_UARTMIS_R_CTSMIS_OCCUR      (0x00000002)

#define UART6_UARTMIS_CTSMIS_MASK         (0x00000001)
#define UART6_UARTMIS_CTSMIS_NOOCCUR      (0x00000000)
#define UART6_UARTMIS_CTSMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART6_UARTMIS_R_RXMIS_MASK       (0x00000010)
#define UART6_UARTMIS_R_RXMIS_BIT        (4)
#define UART6_UARTMIS_R_RXMIS_NOOCCUR    (0x00000000)
#define UART6_UARTMIS_R_RXMIS_OCCUR      (0x00000010)

#define UART6_UARTMIS_RXMIS_MASK         (0x00000001)
#define UART6_UARTMIS_RXMIS_NOOCCUR      (0x00000000)
#define UART6_UARTMIS_RXMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART6_UARTMIS_R_TXMIS_MASK       (0x00000020)
#define UART6_UARTMIS_R_TXMIS_BIT        (5)
#define UART6_UARTMIS_R_TXMIS_NOOCCUR    (0x00000000)
#define UART6_UARTMIS_R_TXMIS_OCCUR      (0x00000020)

#define UART6_UARTMIS_TXMIS_MASK         (0x00000001)
#define UART6_UARTMIS_TXMIS_NOOCCUR      (0x00000000)
#define UART6_UARTMIS_TXMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART6_UARTMIS_R_RTMIS_MASK       (0x00000040)
#define UART6_UARTMIS_R_RTMIS_BIT        (6)
#define UART6_UARTMIS_R_RTMIS_NOOCCUR    (0x00000000)
#define UART6_UARTMIS_R_RTMIS_OCCUR      (0x00000040)

#define UART6_UARTMIS_RTMIS_MASK         (0x00000001)
#define UART6_UARTMIS_RTMIS_NOOCCUR      (0x00000000)
#define UART6_UARTMIS_RTMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART6_UARTMIS_R_FEMIS_MASK       (0x00000080)
#define UART6_UARTMIS_R_FEMIS_BIT        (7)
#define UART6_UARTMIS_R_FEMIS_NOOCCUR    (0x00000000)
#define UART6_UARTMIS_R_FEMIS_OCCUR      (0x00000080)

#define UART6_UARTMIS_FEMIS_MASK         (0x00000001)
#define UART6_UARTMIS_FEMIS_NOOCCUR      (0x00000000)
#define UART6_UARTMIS_FEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART6_UARTMIS_R_PEMIS_MASK       (0x00000100)
#define UART6_UARTMIS_R_PEMIS_BIT        (8)
#define UART6_UARTMIS_R_PEMIS_NOOCCUR    (0x00000000)
#define UART6_UARTMIS_R_PEMIS_OCCUR      (0x00000100)

#define UART6_UARTMIS_PEMIS_MASK         (0x00000001)
#define UART6_UARTMIS_PEMIS_NOOCCUR      (0x00000000)
#define UART6_UARTMIS_PEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART6_UARTMIS_R_BEMIS_MASK       (0x00000200)
#define UART6_UARTMIS_R_BEMIS_BIT        (9)
#define UART6_UARTMIS_R_BEMIS_NOOCCUR    (0x00000000)
#define UART6_UARTMIS_R_BEMIS_OCCUR      (0x00000200)

#define UART6_UARTMIS_BEMIS_MASK         (0x00000001)
#define UART6_UARTMIS_BEMIS_NOOCCUR      (0x00000000)
#define UART6_UARTMIS_BEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART6_UARTMIS_R_OEMIS_MASK       (0x00000400)
#define UART6_UARTMIS_R_OEMIS_BIT        (10)
#define UART6_UARTMIS_R_OEMIS_NOOCCUR    (0x00000000)
#define UART6_UARTMIS_R_OEMIS_OCCUR      (0x00000400)

#define UART6_UARTMIS_OEMIS_MASK         (0x00000001)
#define UART6_UARTMIS_OEMIS_NOOCCUR      (0x00000000)
#define UART6_UARTMIS_OEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART6_UARTMIS_R_9BITMIS_MASK       (0x00001000)
#define UART6_UARTMIS_R_9BITMIS_BIT        (12)
#define UART6_UARTMIS_R_9BITMIS_NOOCCUR    (0x00000000)
#define UART6_UARTMIS_R_9BITMIS_OCCUR      (0x00001000)

#define UART6_UARTMIS_9BITMIS_MASK         (0x00000001)
#define UART6_UARTMIS_9BITMIS_NOOCCUR      (0x00000000)
#define UART6_UARTMIS_9BITMIS_OCCUR        (0x00000001)
//--------


#define UART6_UARTMIS_CTSMIS_BB    (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTMIS_OFFSET)*32)+(1*4))))
#define UART6_UARTMIS_RXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTMIS_OFFSET)*32)+(4*4))))
#define UART6_UARTMIS_TXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTMIS_OFFSET)*32)+(5*4))))
#define UART6_UARTMIS_RTMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTMIS_OFFSET)*32)+(6*4))))
#define UART6_UARTMIS_FEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTMIS_OFFSET)*32)+(7*4))))
#define UART6_UARTMIS_PEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTMIS_OFFSET)*32)+(8*4))))
#define UART6_UARTMIS_BEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTMIS_OFFSET)*32)+(9*4))))
#define UART6_UARTMIS_OEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTMIS_OFFSET)*32)+(10*4))))
#define UART6_UARTMIS_9BITMIS_BB   (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTMIS_OFFSET)*32)+(12*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.13 UARTICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTICR            (((UARTICR_TypeDef*)(UART6_BASE + UART_UARTICR_OFFSET )))
#define UART6_UARTICR_R          (*((volatile uint32_t *)(UART6_BASE +UART_UARTICR_OFFSET)))


//--------
#define UART6_UARTICR_R_CTSIC_MASK       (0x00000002)
#define UART6_UARTICR_R_CTSIC_BIT        (1)
#define UART6_UARTICR_R_CTSIC_CLEAR      (0x00000002)

#define UART6_UARTICR_CTSIC_MASK         (0x00000001)
#define UART6_UARTICR_CTSIC_CLEAR        (0x00000001)
//--------

//--------
#define UART6_UARTICR_R_RXIC_MASK       (0x00000010)
#define UART6_UARTICR_R_RXIC_BIT        (4)
#define UART6_UARTICR_R_RXIC_CLEAR      (0x00000010)

#define UART6_UARTICR_RXIC_MASK         (0x00000001)
#define UART6_UARTICR_RXIC_CLEAR        (0x00000001)
//--------

//--------
#define UART6_UARTICR_R_TXIC_MASK       (0x00000020)
#define UART6_UARTICR_R_TXIC_BIT        (5)
#define UART6_UARTICR_R_TXIC_CLEAR      (0x00000020)

#define UART6_UARTICR_TXIC_MASK         (0x00000001)
#define UART6_UARTICR_TXIC_CLEAR        (0x00000001)
//--------

//--------
#define UART6_UARTICR_R_RTIC_MASK       (0x00000040)
#define UART6_UARTICR_R_RTIC_BIT        (6)
#define UART6_UARTICR_R_RTIC_CLEAR      (0x00000040)

#define UART6_UARTICR_RTIC_MASK         (0x00000001)
#define UART6_UARTICR_RTIC_CLEAR        (0x00000001)
//--------

//--------
#define UART6_UARTICR_R_FEIC_MASK       (0x00000080)
#define UART6_UARTICR_R_FEIC_BIT        (7)
#define UART6_UARTICR_R_FEIC_CLEAR      (0x00000080)

#define UART6_UARTICR_FEIC_MASK         (0x00000001)
#define UART6_UARTICR_FEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART6_UARTICR_R_PEIC_MASK       (0x00000100)
#define UART6_UARTICR_R_PEIC_BIT        (8)
#define UART6_UARTICR_R_PEIC_CLEAR      (0x00000100)

#define UART6_UARTICR_PEIC_MASK         (0x00000001)
#define UART6_UARTICR_PEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART6_UARTICR_R_BEIC_MASK       (0x00000200)
#define UART6_UARTICR_R_BEIC_BIT        (9)
#define UART6_UARTICR_R_BEIC_CLEAR      (0x00000200)

#define UART6_UARTICR_BEIC_MASK         (0x00000001)
#define UART6_UARTICR_BEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART6_UARTICR_R_OEIC_MASK       (0x00000400)
#define UART6_UARTICR_R_OEIC_BIT        (10)
#define UART6_UARTICR_R_OEIC_CLEAR      (0x00000400)

#define UART6_UARTICR_OEIC_MASK         (0x00000001)
#define UART6_UARTICR_OEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART6_UARTICR_R_9BITIC_MASK       (0x00001000)
#define UART6_UARTICR_R_9BITIC_BIT        (12)
#define UART6_UARTICR_R_9BITIC_CLEAR      (0x00001000)

#define UART6_UARTICR_9BITIC_MASK         (0x00000001)
#define UART6_UARTICR_9BITIC_CLEAR        (0x00000001)
//--------

#define UART6_UARTICR_CTSICR_BB    (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTICR_OFFSET)*32)+(1*4))))
#define UART6_UARTICR_RXICR_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTICR_OFFSET)*32)+(4*4))))
#define UART6_UARTICR_TXICR_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTICR_OFFSET)*32)+(5*4))))
#define UART6_UARTICR_RTICR_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTICR_OFFSET)*32)+(6*4))))
#define UART6_UARTICR_FEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTICR_OFFSET)*32)+(7*4))))
#define UART6_UARTICR_PEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTICR_OFFSET)*32)+(8*4))))
#define UART6_UARTICR_BEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTICR_OFFSET)*32)+(9*4))))
#define UART6_UARTICR_OEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTICR_OFFSET)*32)+(10*4))))
#define UART6_UARTICR_9BITICR_BB   (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTICR_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.14 UARTDMACTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTDMACTL            (((UARTDMACTL_TypeDef*)(UART6_BASE + UART_UARTDMACTL_OFFSET )))
#define UART6_UARTDMACTL_R          (*((volatile uint32_t *)(UART6_BASE +UART_UARTDMACTL_OFFSET)))

//--------
#define UART6_UARTDMACTL_R_RXDMAE_MASK       (0x00000001)
#define UART6_UARTDMACTL_R_RXDMAE_BIT        (0)
#define UART6_UARTDMACTL_R_RXDMAE_DIS        (0x00000000)
#define UART6_UARTDMACTL_R_RXDMAE_EN         (0x00008000)

#define UART6_UARTDMACTL_RXDMAE_MASK         (0x00000001)
#define UART6_UARTDMACTL_RXDMAE_DIS          (0x00000000)
#define UART6_UARTDMACTL_RXDMAE_EN           (0x00000001)
//--------

//--------
#define UART6_UARTDMACTL_R_TXDMAE_MASK       (0x00000002)
#define UART6_UARTDMACTL_R_TXDMAE_BIT        (1)
#define UART6_UARTDMACTL_R_TXDMAE_DIS        (0x00000000)
#define UART6_UARTDMACTL_R_TXDMAE_EN         (0x00000002)

#define UART6_UARTDMACTL_TXDMAE_MASK         (0x00000001)
#define UART6_UARTDMACTL_TXDMAE_DIS          (0x00000000)
#define UART6_UARTDMACTL_TXDMAE_EN           (0x00000001)
//--------

//--------
#define UART6_UARTDMACTL_R_DMAERR_MASK       (0x00000004)
#define UART6_UARTDMACTL_R_DMAERR_BIT        (2)
#define UART6_UARTDMACTL_R_DMAERR_NOERROR    (0x00000000)
#define UART6_UARTDMACTL_R_DMAERR_ERROR      (0x00000004)

#define UART6_UARTDMACTL_DMAERR_MASK         (0x00000001)
#define UART6_UARTDMACTL_DMAERR_NOERROR      (0x00000000)
#define UART6_UARTDMACTL_DMAERR_ERROR        (0x00000001)
//--------

#define UART6_UARTDMACTL_RXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(0*4))))
#define UART6_UARTDMACTL_TXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(1*4))))
#define UART6_UARTDMACTL_DMAERR_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(2*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.15 UART9BITADDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UART9BITADDR            (((UART9BITADDR_TypeDef*)(UART6_BASE + UART_UART9BITADDR_OFFSET )))
#define UART6_UART9BITADDR_R          (*((volatile uint32_t *)(UART6_BASE +UART_UART9BITADDR_OFFSET)))

//--------
#define UART6_UART9BITADDR_R_ADDR_MASK       (0x000000FF)
#define UART6_UART9BITADDR_R_ADDR_BIT        (0)

#define UART6_UART9BITADDR_ADDR_MASK         (0x000000FF)
//--------

//--------
#define UART6_UART9BITADDR_R_9BITEN_MASK       (0x00008000)
#define UART6_UART9BITADDR_R_9BITEN_BIT        (15)
#define UART6_UART9BITADDR_R_9BITEN_DIS        (0x00000000)
#define UART6_UART9BITADDR_R_9BITEN_EN         (0x00008000)

#define UART6_UART9BITADDR_9BITEN_MASK         (0x00000001)
#define UART6_UART9BITADDR_9BITEN_DIS          (0x00000000)
#define UART6_UART9BITADDR_9BITEN_EN           (0x00000001)
//--------

#define UART6_UART9BITADDR_9BITEN_BB     (*((volatile uint32_t *)(0x42000000+((UART6_OFFSET+UART_UART9BITADDR_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.16 UART9BITAMASK ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UART9BITAMASK            (((UART9BITAMASK_TypeDef*)(UART6_BASE + UART_UART9BITAMASK_OFFSET )))
#define UART6_UART9BITAMASK_R          (*((volatile uint32_t *)(UART6_BASE +UART_UART9BITAMASK_OFFSET)))

//--------
#define UART6_UART9BITAMASK_R_MASK_MASK       (0x000000FF)
#define UART6_UART9BITAMASK_R_MASK_BIT        (0)

#define UART6_UART9BITAMASK_MASK_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.17 UARTPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTPP            (((UARTPP_TypeDef*)(UART6_BASE + UART_UARTPP_OFFSET )))
#define UART6_UARTPP_R          (*((volatile const uint32_t *)(UART6_BASE +UART_UARTPP_OFFSET)))

//--------
#define UART6_UARTPP_R_SC_MASK       (0x00000001)
#define UART6_UARTPP_R_SC_BIT        (0)
#define UART6_UARTPP_R_SC_NOSUPPORT  (0x00000000)
#define UART6_UARTPP_R_SC_SUPPORT    (0x00000001)

#define UART6_UARTPP_SC_MASK         (0x00000001)
#define UART6_UARTPP_SC_NOSUPPORT    (0x00000000)
#define UART6_UARTPP_SC_SUPPORT      (0x00000001)
//--------

//--------
#define UART6_UARTPP_R_NB_MASK       (0x00000002)
#define UART6_UARTPP_R_NB_BIT        (1)
#define UART6_UARTPP_R_NB_NOSUPPORT  (0x00000000)
#define UART6_UARTPP_R_NB_SUPPORT    (0x00000002)

#define UART6_UARTPP_NB_MASK         (0x00000001)
#define UART6_UARTPP_NB_NOSUPPORT    (0x00000000)
#define UART6_UARTPP_NB_SUPPORT      (0x00000001)
//--------

#define UART6_UARTPP_SC_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTPP_OFFSET)*32)+(0*4))))
#define UART6_UARTPP_NB_BB     (*((volatile const uint32_t *)(0x42000000+((UART6_OFFSET+UART_UARTPP_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.18 UARTCC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTCC            (((UARTCC_TypeDef*)(UART6_BASE + UART_UARTCC_OFFSET )))
#define UART6_UARTCC_R          (*((volatile uint32_t *)(UART6_BASE +UART_UARTCC_OFFSET)))


//--------
#define UART6_UARTCC_R_CS_MASK       (0x0000000F)
#define UART6_UARTCC_R_CS_BIT        (0)
#define UART6_UARTCC_R_CS_SYSCLK     (0x00000000)
#define UART6_UARTCC_R_CS_PIOSC      (0x00000005)

#define UART6_UARTCC_CS_MASK         (0x0000000F)
#define UART6_UARTCC_CS_SYSCLK       (0x00000000)
#define UART6_UARTCC_CS_PIOSC        (0x00000005)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.19 UARTPeriphID4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTPeriphID4            (((UARTPeriphID4_TypeDef*)(UART6_BASE + UART_UARTPeriphID4_OFFSET )))
#define UART6_UARTPeriphID4_R          (*((volatile const uint32_t *)(UART6_BASE +UART_UARTPeriphID4_OFFSET)))

//--------
#define UART6_UARTPeriphID4_R_PID4_MASK       (0x000000FF)
#define UART6_UARTPeriphID4_R_PID4_BIT        (0)
#define UART6_UARTPeriphID4_R_PID4_DEFAULT    (0x00000000)

#define UART6_UARTPeriphID4_PID4_MASK         (0x000000FF)
#define UART6_UARTPeriphID4_PID4_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.20 UARTPeriphID5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTPeriphID5            (((UARTPeriphID5_TypeDef*)(UART6_BASE + UART_UARTPeriphID5_OFFSET )))
#define UART6_UARTPeriphID5_R          (*((volatile const uint32_t *)(UART6_BASE +UART_UARTPeriphID5_OFFSET)))

//--------
#define UART6_UARTPeriphID5_R_PID5_MASK       (0x000000FF)
#define UART6_UARTPeriphID5_R_PID5_BIT        (0)
#define UART6_UARTPeriphID5_R_PID5_DEFAULT    (0x00000000)

#define UART6_UARTPeriphID5_PID5_MASK         (0x000000FF)
#define UART6_UARTPeriphID5_PID5_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.21 UARTPeriphID6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTPeriphID6            (((UARTPeriphID6_TypeDef*)(UART6_BASE + UART_UARTPeriphID6_OFFSET )))
#define UART6_UARTPeriphID6_R          (*((volatile const uint32_t *)(UART6_BASE +UART_UARTPeriphID6_OFFSET)))



//--------
#define UART6_UARTPeriphID6_R_PID6_MASK       (0x000000FF)
#define UART6_UARTPeriphID6_R_PID6_BIT        (0)
#define UART6_UARTPeriphID6_R_PID6_DEFAULT    (0x00000000)

#define UART6_UARTPeriphID6_PID6_MASK         (0x000000FF)
#define UART6_UARTPeriphID6_PID6_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.22 UARTPeriphID7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTPeriphID7            (((UARTPeriphID7_TypeDef*)(UART6_BASE + UART_UARTPeriphID7_OFFSET )))
#define UART6_UARTPeriphID7_R          (*((volatile const uint32_t *)(UART6_BASE +UART_UARTPeriphID7_OFFSET)))



//--------
#define UART6_UARTPeriphID7_R_PID7_MASK       (0x000000FF)
#define UART6_UARTPeriphID7_R_PID7_BIT        (0)
#define UART6_UARTPeriphID7_R_PID7_DEFAULT    (0x00000000)

#define UART6_UARTPeriphID7_PID7_MASK         (0x000000FF)
#define UART6_UARTPeriphID7_PID7_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.23 UARTPeriphID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTPeriphID0            (((UARTPeriphID0_TypeDef*)(UART6_BASE + UART_UARTPeriphID0_OFFSET )))
#define UART6_UARTPeriphID0_R          (*((volatile const uint32_t *)(UART6_BASE +UART_UARTPeriphID0_OFFSET)))



//--------
#define UART6_UARTPeriphID0_R_PID0_MASK       (0x000000FF)
#define UART6_UARTPeriphID0_R_PID0_BIT        (0)
#define UART6_UARTPeriphID0_R_PID0_DEFAULT    (0x00000060)

#define UART6_UARTPeriphID0_PID0_MASK         (0x000000FF)
#define UART6_UARTPeriphID0_PID0_DEFAULT      (0x00000060)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.24 UARTPeriphID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTPeriphID1            (((UARTPeriphID1_TypeDef*)(UART6_BASE + UART_UARTPeriphID1_OFFSET )))
#define UART6_UARTPeriphID1_R          (*((volatile const uint32_t *)(UART6_BASE +UART_UARTPeriphID1_OFFSET)))



//--------
#define UART6_UARTPeriphID1_R_PID1_MASK       (0x000000FF)
#define UART6_UARTPeriphID1_R_PID1_BIT        (0)
#define UART6_UARTPeriphID1_R_PID1_DEFAULT    (0x00000000)

#define UART6_UARTPeriphID1_PID1_MASK         (0x000000FF)
#define UART6_UARTPeriphID1_PID1_DEFAULT      (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.25 UARTPeriphID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTPeriphID2            (((UARTPeriphID2_TypeDef*)(UART6_BASE + UART_UARTPeriphID2_OFFSET )))
#define UART6_UARTPeriphID2_R          (*((volatile const uint32_t *)(UART6_BASE +UART_UARTPeriphID2_OFFSET)))

//--------
#define UART6_UARTPeriphID2_R_PID2_MASK       (0x000000FF)
#define UART6_UARTPeriphID2_R_PID2_BIT        (0)
#define UART6_UARTPeriphID2_R_PID2_DEFAULT    (0x00000018)

#define UART6_UARTPeriphID2_PID2_MASK         (0x000000FF)
#define UART6_UARTPeriphID2_PID2_DEFAULT      (0x00000018)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.26 UARTPeriphID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTPeriphID3            (((UARTPeriphID3_TypeDef*)(UART6_BASE + UART_UARTPeriphID3_OFFSET )))
#define UART6_UARTPeriphID3_R          (*((volatile const uint32_t *)(UART6_BASE +UART_UARTPeriphID3_OFFSET)))

//--------
#define UART6_UARTPeriphID3_R_PID3_MASK       (0x000000FF)
#define UART6_UARTPeriphID3_R_PID3_BIT        (0)
#define UART6_UARTPeriphID3_R_PID3_DEFAULT    (0x00000001)

#define UART6_UARTPeriphID3_PID3_MASK         (0x000000FF)
#define UART6_UARTPeriphID3_PID3_DEFAULT      (0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.27 UARTPCellID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTPCellID0            (((UARTPCellID0_TypeDef*)(UART6_BASE + UART_UARTPCellID0_OFFSET )))
#define UART6_UARTPCellID0_R          (*((volatile const uint32_t *)(UART6_BASE +UART_UARTPCellID0_OFFSET)))

//--------
#define UART6_UARTPCellID0_R_CID0_MASK       (0x000000FF)
#define UART6_UARTPCellID0_R_CID0_BIT        (0)
#define UART6_UARTPCellID0_R_CID0_DEFAULT    (0x0000000D)

#define UART6_UARTPCellID0_CID0_MASK         (0x000000FF)
#define UART6_UARTPCellID0_CID0_DEFAULT      (0x0000000D)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.28 UARTPCellID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTPCellID1            (((UARTPCellID1_TypeDef*)(UART6_BASE + UART_UARTPCellID1_OFFSET )))
#define UART6_UARTPCellID1_R          (*((volatile const uint32_t *)(UART6_BASE +UART_UARTPCellID1_OFFSET)))

//--------
#define UART6_UARTPCellID1_R_CID1_MASK       (0x000000FF)
#define UART6_UARTPCellID1_R_CID1_BIT        (0)
#define UART6_UARTPCellID1_R_CID1_DEFAULT    (0x000000F0)

#define UART6_UARTPCellID1_CID1_MASK         (0x000000FF)
#define UART6_UARTPCellID1_CID1_DEFAULT      (0x000000F0)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.29 UARTPCellID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTPCellID2            (((UARTPCellID2_TypeDef*)(UART6_BASE + UART_UARTPCellID2_OFFSET )))
#define UART6_UARTPCellID2_R          (*((volatile const uint32_t *)(UART6_BASE +UART_UARTPCellID2_OFFSET)))

//--------
#define UART6_UARTPCellID2_R_CID2_MASK       (0x000000FF)
#define UART6_UARTPCellID2_R_CID2_BIT        (0)
#define UART6_UARTPCellID2_R_CID2_DEFAULT    (0x00000005)

#define UART6_UARTPCellID2_CID2_MASK         (0x000000FF)
#define UART6_UARTPCellID2_CID2_DEFAULT      (0x00000005)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6.30 UARTPCellID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART6_UARTPCellID3            (((UARTPCellID3_TypeDef*)(UART6_BASE + UART_UARTPCellID3_OFFSET )))
#define UART6_UARTPCellID3_R          (*((volatile const uint32_t *)(UART6_BASE +UART_UARTPCellID3_OFFSET)))

//--------
#define UART6_UARTPCellID3_R_CID3_MASK       (0x000000FF)
#define UART6_UARTPCellID3_R_CID3_BIT        (0)
#define UART6_UARTPCellID3_R_CID3_DEFAULT    (0x000000B1)

#define UART6_UARTPCellID3_CID3_MASK         (0x000000FF)
#define UART6_UARTPCellID3_CID3_DEFAULT      (0x000000B1)
//--------

//todo UART7

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 UART7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.1 UARTDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTDR            (((UARTDR_TypeDef*)(UART7_BASE + UART_UARTDR_OFFSET )))
#define UART7_UARTDR_R          (*((volatile uint32_t *)(UART7_BASE +UART_UARTDR_OFFSET)))

//--------
#define UART7_UARTDR_R_DATA_MASK       (0x000000FF)
#define UART7_UARTDR_R_DATA_BIT        (0)

#define UART7_UARTDR_DATA_MASK         (0x000000FF)
//--------

//--------
#define UART7_UARTDR_R_FE_MASK       (0x00000100)
#define UART7_UARTDR_R_FE_BIT        (8)
#define UART7_UARTDR_R_FE_NOERROR    (0x00000000)
#define UART7_UARTDR_R_FE_ERROR      (0x00000100)

#define UART7_UARTDR_FE_MASK         (0x00000001)
#define UART7_UARTDR_FE_NOERROR      (0x00000000)
#define UART7_UARTDR_FE_ERROR        (0x00000001)
//--------

//--------
#define UART7_UARTDR_R_PE_MASK       (0x00000200)
#define UART7_UARTDR_R_PE_BIT        (9)
#define UART7_UARTDR_R_PE_NOERROR    (0x00000000)
#define UART7_UARTDR_R_PE_ERROR      (0x00000200)

#define UART7_UARTDR_PE_MASK         (0x00000001)
#define UART7_UARTDR_PE_NOERROR      (0x00000000)
#define UART7_UARTDR_PE_ERROR        (0x00000001)
//--------

//--------
#define UART7_UARTDR_R_BE_MASK       (0x00000400)
#define UART7_UARTDR_R_BE_BIT        (10)
#define UART7_UARTDR_R_BE_NOERROR    (0x00000000)
#define UART7_UARTDR_R_BE_ERROR      (0x00000400)

#define UART7_UARTDR_BE_MASK         (0x00000001)
#define UART7_UARTDR_BE_NOERROR      (0x00000000)
#define UART7_UARTDR_BE_ERROR        (0x00000001)
//--------

//--------
#define UART7_UARTDR_R_OE_MASK       (0x00000800)
#define UART7_UARTDR_R_OE_BIT        (11)
#define UART7_UARTDR_R_OE_NOERROR    (0x00000000)
#define UART7_UARTDR_R_OE_ERROR      (0x00000800)

#define UART7_UARTDR_OE_MASK         (0x00000001)
#define UART7_UARTDR_OE_NOERROR      (0x00000000)
#define UART7_UARTDR_OE_ERROR        (0x00000001)
//--------

#define UART7_UARTDR_FE_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTDR_OFFSET)*32)+(8*4))))
#define UART7_UARTDR_PE_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTDR_OFFSET)*32)+(9*4))))
#define UART7_UARTDR_BE_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTDR_OFFSET)*32)+(10*4))))
#define UART7_UARTDR_OE_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTDR_OFFSET)*32)+(11*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.2 UARTRSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTRSR            (((UARTRSR_TypeDef*)(UART7_BASE + UART_UARTRSR_OFFSET )))
#define UART7_UARTRSR_R          (*((volatile const uint32_t *)(UART7_BASE +UART_UARTRSR_OFFSET)))


//--------
#define UART7_UARTRSR_R_FE_MASK       (0x00000001)
#define UART7_UARTRSR_R_FE_BIT        (0)
#define UART7_UARTRSR_R_FE_NOERROR    (0x00000000)
#define UART7_UARTRSR_R_FE_ERROR      (0x00000001)

#define UART7_UARTRSR_FE_MASK         (0x00000001)
#define UART7_UARTRSR_FE_NOERROR      (0x00000000)
#define UART7_UARTRSR_FE_ERROR        (0x00000001)
//--------

//--------
#define UART7_UARTRSR_R_PE_MASK       (0x00000002)
#define UART7_UARTRSR_R_PE_BIT        (1)
#define UART7_UARTRSR_R_PE_NOERROR    (0x00000000)
#define UART7_UARTRSR_R_PE_ERROR      (0x00000002)

#define UART7_UARTRSR_PE_MASK         (0x00000001)
#define UART7_UARTRSR_PE_NOERROR      (0x00000000)
#define UART7_UARTRSR_PE_ERROR        (0x00000001)
//--------

//--------
#define UART7_UARTRSR_R_BE_MASK       (0x00000004)
#define UART7_UARTRSR_R_BE_BIT        (2)
#define UART7_UARTRSR_R_BE_NOERROR    (0x00000000)
#define UART7_UARTRSR_R_BE_ERROR      (0x00000004)

#define UART7_UARTRSR_BE_MASK         (0x00000001)
#define UART7_UARTRSR_BE_NOERROR      (0x00000000)
#define UART7_UARTRSR_BE_ERROR        (0x00000001)
//--------

//--------
#define UART7_UARTRSR_R_OE_MASK       (0x00000008)
#define UART7_UARTRSR_R_OE_BIT        (3)
#define UART7_UARTRSR_R_OE_NOERROR    (0x00000000)
#define UART7_UARTRSR_R_OE_ERROR      (0x00000008)

#define UART7_UARTRSR_OE_MASK         (0x00000001)
#define UART7_UARTRSR_OE_NOERROR      (0x00000000)
#define UART7_UARTRSR_OE_ERROR        (0x00000001)
//--------

#define UART7_UARTRSR_FE_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTRSR_OFFSET)*32)+(0*4))))
#define UART7_UARTRSR_PE_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTRSR_OFFSET)*32)+(1*4))))
#define UART7_UARTRSR_BE_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTRSR_OFFSET)*32)+(2*4))))
#define UART7_UARTRSR_OE_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTRSR_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.2 UARTECR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTECR            (((UARTECR_TypeDef*)(UART7_BASE + UART_UARTECR_OFFSET )))
#define UART7_UARTECR_R          (*((volatile uint32_t *)(UART7_BASE +UART_UARTECR_OFFSET)))

//--------
#define UART7_UARTECR_R_DATA_MASK       (0x000000FF)
#define UART7_UARTECR_R_DATA_BIT        (0)

#define UART7_UARTECR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.3 UARTFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTFR            (((UARTFR_TypeDef*)(UART7_BASE + UART_UARTFR_OFFSET )))
#define UART7_UARTFR_R          (*((volatile const uint32_t *)(UART7_BASE +UART_UARTFR_OFFSET)))

//--------
#define UART7_UARTFR_R_CTS_MASK       (0x00000001)
#define UART7_UARTFR_R_CTS_BIT        (0)
#define UART7_UARTFR_R_CTS_NOASSERT   (0x00000000)
#define UART7_UARTFR_R_CTS_ASSERT     (0x00000001)

#define UART7_UARTFR_CTS_MASK         (0x00000001)
#define UART7_UARTFR_CTS_NOASSERT     (0x00000000)
#define UART7_UARTFR_CTS_ASSERT       (0x00000001)
//--------

//--------
#define UART7_UARTFR_R_BUSY_MASK       (0x00000008)
#define UART7_UARTFR_R_BUSY_BIT        (3)
#define UART7_UARTFR_R_BUSY_NOBUSY     (0x00000000)
#define UART7_UARTFR_R_BUSY_BUSY       (0x00000008)

#define UART7_UARTFR_BUSY_MASK         (0x00000001)
#define UART7_UARTFR_BUSY_NOBUSY       (0x00000000)
#define UART7_UARTFR_BUSY_BUSY         (0x00000001)
//--------

//--------
#define UART7_UARTFR_R_RXFE_MASK       (0x00000010)
#define UART7_UARTFR_R_RXFE_BIT        (4)
#define UART7_UARTFR_R_RXFE_NOEMPTY    (0x00000000)
#define UART7_UARTFR_R_RXFE_EMPTY      (0x00000010)

#define UART7_UARTFR_RXFE_MASK         (0x00000001)
#define UART7_UARTFR_RXFE_NOEMPTY      (0x00000000)
#define UART7_UARTFR_RXFE_EMPTY        (0x00000001)
//--------

//--------
#define UART7_UARTFR_R_TXFF_MASK       (0x00000020)
#define UART7_UARTFR_R_TXFF_BIT        (5)
#define UART7_UARTFR_R_TXFF_NOFULL     (0x00000000)
#define UART7_UARTFR_R_TXFF_FULL       (0x00000020)

#define UART7_UARTFR_TXFF_MASK         (0x00000001)
#define UART7_UARTFR_TXFF_NOFULL       (0x00000000)
#define UART7_UARTFR_TXFF_FULL         (0x00000001)
//--------

//--------
#define UART7_UARTFR_R_RXFF_MASK       (0x00000040)
#define UART7_UARTFR_R_RXFF_BIT        (6)
#define UART7_UARTFR_R_RXFF_NOFULL     (0x00000000)
#define UART7_UARTFR_R_RXFF_FULL       (0x00000040)

#define UART7_UARTFR_RXFF_MASK         (0x00000001)
#define UART7_UARTFR_RXFF_NOFULL       (0x00000000)
#define UART7_UARTFR_RXFF_FULL         (0x00000001)
//--------

//--------
#define UART7_UARTFR_R_TXFE_MASK       (0x00000080)
#define UART7_UARTFR_R_TXFE_BIT        (7)
#define UART7_UARTFR_R_TXFE_NOEMPTY    (0x00000000)
#define UART7_UARTFR_R_TXFE_EMPTY      (0x00000080)

#define UART7_UARTFR_TXFE_MASK         (0x00000001)
#define UART7_UARTFR_TXFE_NOEMPTY      (0x00000000)
#define UART7_UARTFR_TXFE_EMPTY        (0x00000001)
//--------

#define UART7_UARTFR_CTS_BB      (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTFR_OFFSET)*32)+(0*4))))
#define UART7_UARTFR_BUSY_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTFR_OFFSET)*32)+(3*4))))
#define UART7_UARTFR_RXFE_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTFR_OFFSET)*32)+(4*4))))
#define UART7_UARTFR_TXFF_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTFR_OFFSET)*32)+(5*4))))
#define UART7_UARTFR_RXFF_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTFR_OFFSET)*32)+(6*4))))
#define UART7_UARTFR_TXFE_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTFR_OFFSET)*32)+(7*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.4 UARTILPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
#define UART7_UARTILPR            (((UARTILPR_TypeDef*)(UART7_BASE + UART_UARTILPR_OFFSET )))
#define UART7_UARTILPR_R          (*((volatile uint32_t *)(UART7_BASE +UART_UARTILPR_OFFSET)))

//--------
#define UART7_UARTILPR_R_ILPDVSR_MASK       (0x000000FF)
#define UART7_UARTILPR_R_ILPDVSR_BIT        (0)

#define UART7_UARTILPR_ILPDVSR_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.5 UARTIBRD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTIBRD            (((UARTIBRD_TypeDef*)(UART7_BASE + UART_UARTIBRD_OFFSET )))
#define UART7_UARTIBRD_R          (*((volatile uint32_t *)(UART7_BASE +UART_UARTIBRD_OFFSET)))

//--------
#define UART7_UARTIBRD_R_DIVINT_MASK       (0x0000FFFF)
#define UART7_UARTIBRD_R_DIVINT_BIT        (0)

#define UART7_UARTIBRD_DIVINT_MASK         (0x0000FFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.6 UARTFBRD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTFBRD            (((UARTFBRD_TypeDef*)(UART7_BASE + UART_UARTFBRD_OFFSET )))
#define UART7_UARTFBRD_R          (*((volatile uint32_t *)(UART7_BASE +UART_UARTFBRD_OFFSET)))

//--------
#define UART7_UARTFBRD_R_DIVFRAC_MASK       (0x0000003F)
#define UART7_UARTFBRD_R_DIVFRAC_BIT        (0)

#define UART7_UARTFBRD_DIVFRAC_MASK         (0x0000003F)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.7 UARTLCRH ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTLCRH            (((UARTLCRH_TypeDef*)(UART7_BASE + UART_UARTLCRH_OFFSET )))
#define UART7_UARTLCRH_R          (*((volatile uint32_t *)(UART7_BASE +UART_UARTLCRH_OFFSET)))

//--------
#define UART7_UARTLCRH_R_BRK_MASK       (0x00000001)
#define UART7_UARTLCRH_R_BRK_BIT        (0)
#define UART7_UARTLCRH_R_BRK_NORMAL     (0x00000000)
#define UART7_UARTLCRH_R_BRK_LOW        (0x00000001)

#define UART7_UARTLCRH_BRK_MASK         (0x00000001)
#define UART7_UARTLCRH_BRK_NORMAL       (0x00000000)
#define UART7_UARTLCRH_BRK_LOW          (0x00000001)
//--------

//--------
#define UART7_UARTLCRH_R_PEN_MASK       (0x00000002)
#define UART7_UARTLCRH_R_PEN_BIT        (1)
#define UART7_UARTLCRH_R_PEN_DIS        (0x00000000)
#define UART7_UARTLCRH_R_PEN_EN         (0x00000002)

#define UART7_UARTLCRH_PEN_MASK         (0x00000001)
#define UART7_UARTLCRH_PEN_DIS          (0x00000000)
#define UART7_UARTLCRH_PEN_EN           (0x00000001)
//--------

//--------
#define UART7_UARTLCRH_R_EPS_MASK       (0x00000004)
#define UART7_UARTLCRH_R_EPS_BIT        (2)
#define UART7_UARTLCRH_R_EPS_ODD        (0x00000000)
#define UART7_UARTLCRH_R_EPS_EVEN       (0x00000004)

#define UART7_UARTLCRH_EPS_MASK         (0x00000001)
#define UART7_UARTLCRH_EPS_ODD          (0x00000000)
#define UART7_UARTLCRH_EPS_EVEN         (0x00000001)
//--------

//--------
#define UART7_UARTLCRH_R_STP2_MASK       (0x00000008)
#define UART7_UARTLCRH_R_STP2_BIT        (3)
#define UART7_UARTLCRH_R_STP2_ONE        (0x00000000)
#define UART7_UARTLCRH_R_STP2_TWO        (0x00000008)

#define UART7_UARTLCRH_STP2_MASK         (0x00000001)
#define UART7_UARTLCRH_STP2_ONE          (0x00000000)
#define UART7_UARTLCRH_STP2_TWO          (0x00000001)
//--------

//--------
#define UART7_UARTLCRH_R_FEN_MASK       (0x00000010)
#define UART7_UARTLCRH_R_FEN_BIT        (4)
#define UART7_UARTLCRH_R_FEN_DIS        (0x00000000)
#define UART7_UARTLCRH_R_FEN_EN         (0x00000010)

#define UART7_UARTLCRH_FEN_MASK         (0x00000001)
#define UART7_UARTLCRH_FEN_DIS          (0x00000000)
#define UART7_UARTLCRH_FEN_EN           (0x00000001)
//--------

//--------
#define UART7_UARTLCRH_R_WLEN_MASK       (0x00000060)
#define UART7_UARTLCRH_R_WLEN_BIT        (5)
#define UART7_UARTLCRH_R_WLEN_5          (0x00000000)
#define UART7_UARTLCRH_R_WLEN_6          (0x00000020)
#define UART7_UARTLCRH_R_WLEN_7          (0x00000040)
#define UART7_UARTLCRH_R_WLEN_8          (0x00000060)

#define UART7_UARTLCRH_WLEN_MASK         (0x00000003)
#define UART7_UARTLCRH_WLEN_5            (0x00000000)
#define UART7_UARTLCRH_WLEN_6            (0x00000001)
#define UART7_UARTLCRH_WLEN_7            (0x00000002)
#define UART7_UARTLCRH_WLEN_8            (0x00000003)
//--------

//--------
#define UART7_UARTLCRH_R_SPS_MASK       (0x00000080)
#define UART7_UARTLCRH_R_SPS_BIT        (7)
#define UART7_UARTLCRH_R_SPS_LOW        (0x00000000)
#define UART7_UARTLCRH_R_SPS_HIGH       (0x00000080)

#define UART7_UARTLCRH_SPS_MASK         (0x00000001)
#define UART7_UARTLCRH_SPS_LOW          (0x00000000)
#define UART7_UARTLCRH_SPS_HIGH         (0x00000001)
//--------

#define UART7_UARTLCRH_BRK_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTLCRH_OFFSET)*32)+(0*4))))
#define UART7_UARTLCRH_PEN_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTLCRH_OFFSET)*32)+(1*4))))
#define UART7_UARTLCRH_EPS_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTLCRH_OFFSET)*32)+(2*4))))
#define UART7_UARTLCRH_STP2_BB    (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTLCRH_OFFSET)*32)+(3*4))))
#define UART7_UARTLCRH_FEN_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTLCRH_OFFSET)*32)+(4*4))))
#define UART7_UARTLCRH_SPS_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTLCRH_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.8 UARTCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTCTL            (((UARTCTL_TypeDef*)(UART7_BASE + UART_UARTCTL_OFFSET )))
#define UART7_UARTCTL_R          (*((volatile uint32_t *)(UART7_BASE +UART_UARTCTL_OFFSET)))

//--------
#define UART7_UARTCTL_R_UARTEN_MASK       (0x00000001)
#define UART7_UARTCTL_R_UARTEN_BIT        (0)
#define UART7_UARTCTL_R_UARTEN_DIS        (0x00000000)
#define UART7_UARTCTL_R_UARTEN_EN         (0x00000001)

#define UART7_UARTCTL_UARTEN_MASK         (0x00000001)
#define UART7_UARTCTL_UARTEN_DIS          (0x00000000)
#define UART7_UARTCTL_UARTEN_EN           (0x00000001)
//--------

//--------
#define UART7_UARTCTL_R_SIREN_MASK       (0x00000002)
#define UART7_UARTCTL_R_SIREN_BIT        (1)
#define UART7_UARTCTL_R_SIREN_DIS        (0x00000000)
#define UART7_UARTCTL_R_SIREN_EN         (0x00000002)

#define UART7_UARTCTL_SIREN_MASK         (0x00000001)
#define UART7_UARTCTL_SIREN_DIS          (0x00000000)
#define UART7_UARTCTL_SIREN_EN           (0x00000001)
//--------

//--------
#define UART7_UARTCTL_R_SIRLP_MASK       (0x00000004)
#define UART7_UARTCTL_R_SIRLP_BIT        (2)
#define UART7_UARTCTL_R_SIRLP_DIS        (0x00000000)
#define UART7_UARTCTL_R_SIRLP_EN         (0x00000004)

#define UART7_UARTCTL_SIRLP_MASK         (0x00000001)
#define UART7_UARTCTL_SIRLP_DIS          (0x00000000)
#define UART7_UARTCTL_SIRLP_EN           (0x00000001)
//--------

//--------
#define UART7_UARTCTL_R_SMART_MASK       (0x00000008)
#define UART7_UARTCTL_R_SMART_BIT        (3)
#define UART7_UARTCTL_R_SMART_DIS        (0x00000000)
#define UART7_UARTCTL_R_SMART_EN         (0x00000008)

#define UART7_UARTCTL_SMART_MASK         (0x00000001)
#define UART7_UARTCTL_SMART_DIS          (0x00000000)
#define UART7_UARTCTL_SMART_EN           (0x00000001)
//--------

//--------
#define UART7_UARTCTL_R_EOT_MASK       (0x00000010)
#define UART7_UARTCTL_R_EOT_BIT        (4)
#define UART7_UARTCTL_R_EOT_FIFO       (0x00000000)
#define UART7_UARTCTL_R_EOT_ALL        (0x00000010)

#define UART7_UARTCTL_EOT_MASK         (0x00000001)
#define UART7_UARTCTL_EOT_FIFO         (0x00000000)
#define UART7_UARTCTL_EOT_ALL          (0x00000001)
//--------

//--------
#define UART7_UARTCTL_R_HSE_MASK       (0x00000020)
#define UART7_UARTCTL_R_HSE_BIT        (5)
#define UART7_UARTCTL_R_HSE_DIS        (0x00000000)
#define UART7_UARTCTL_R_HSE_EN         (0x00000020)

#define UART7_UARTCTL_HSE_MASK         (0x00000001)
#define UART7_UARTCTL_HSE_DIS          (0x00000000)
#define UART7_UARTCTL_HSE_EN           (0x00000001)
//--------

//--------
#define UART7_UARTCTL_R_LBE_MASK       (0x00000080)
#define UART7_UARTCTL_R_LBE_BIT        (7)
#define UART7_UARTCTL_R_LBE_DIS        (0x00000000)
#define UART7_UARTCTL_R_LBE_EN         (0x00000080)

#define UART7_UARTCTL_LBE_MASK         (0x00000001)
#define UART7_UARTCTL_LBE_DIS          (0x00000000)
#define UART7_UARTCTL_LBE_EN           (0x00000001)
//--------

//--------
#define UART7_UARTCTL_R_TXE_MASK       (0x00000100)
#define UART7_UARTCTL_R_TXE_BIT        (8)
#define UART7_UARTCTL_R_TXE_DIS        (0x00000000)
#define UART7_UARTCTL_R_TXE_EN         (0x00000100)

#define UART7_UARTCTL_TXE_MASK         (0x00000001)
#define UART7_UARTCTL_TXE_DIS          (0x00000000)
#define UART7_UARTCTL_TXE_EN           (0x00000001)
//--------

//--------
#define UART7_UARTCTL_R_RXE_MASK       (0x00000200)
#define UART7_UARTCTL_R_RXE_BIT        (9)
#define UART7_UARTCTL_R_RXE_DIS        (0x00000000)
#define UART7_UARTCTL_R_RXE_EN         (0x00000200)

#define UART7_UARTCTL_RXE_MASK         (0x00000001)
#define UART7_UARTCTL_RXE_DIS          (0x00000000)
#define UART7_UARTCTL_RXE_EN           (0x00000001)
//--------

//--------
#define UART7_UARTCTL_R_RTS_MASK       (0x00000800)
#define UART7_UARTCTL_R_RTS_BIT        (11)
#define UART7_UARTCTL_R_RTS_LOW        (0x00000000)
#define UART7_UARTCTL_R_RTS_HIGH       (0x00000800)

#define UART7_UARTCTL_RTS_MASK         (0x00000001)
#define UART7_UARTCTL_RTS_LOW          (0x00000000)
#define UART7_UARTCTL_RTS_HIGH         (0x00000001)
//--------

//--------
#define UART7_UARTCTL_R_RTSEN_MASK       (0x00004000)
#define UART7_UARTCTL_R_RTSEN_BIT        (14)
#define UART7_UARTCTL_R_RTSEN_DIS        (0x00000000)
#define UART7_UARTCTL_R_RTSEN_EN         (0x00004000)

#define UART7_UARTCTL_RTSEN_MASK         (0x00000001)
#define UART7_UARTCTL_RTSEN_DIS          (0x00000000)
#define UART7_UARTCTL_RTSEN_EN           (0x00000001)
//--------

//--------
#define UART7_UARTCTL_R_CTSEN_MASK       (0x00008000)
#define UART7_UARTCTL_R_CTSEN_BIT        (15)
#define UART7_UARTCTL_R_CTSEN_DIS        (0x00000000)
#define UART7_UARTCTL_R_CTSEN_EN         (0x00008000)

#define UART7_UARTCTL_CTSEN_MASK         (0x00000001)
#define UART7_UARTCTL_CTSEN_DIS          (0x00000000)
#define UART7_UARTCTL_CTSEN_EN           (0x00000001)
//--------

#define UART7_UARTCTL_UARTEN_BB    (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTCTL_OFFSET)*32)+(0*4))))
#define UART7_UARTCTL_SIREN_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTCTL_OFFSET)*32)+(1*4))))
#define UART7_UARTCTL_SIRLP_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTCTL_OFFSET)*32)+(2*4))))
#define UART7_UARTCTL_SMART_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTCTL_OFFSET)*32)+(3*4))))
#define UART7_UARTCTL_EOT_BB       (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTCTL_OFFSET)*32)+(4*4))))
#define UART7_UARTCTL_HSE_BB       (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTCTL_OFFSET)*32)+(5*4))))
#define UART7_UARTCTL_LBE_BB       (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTCTL_OFFSET)*32)+(7*4))))
#define UART7_UARTCTL_TXE_BB       (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTCTL_OFFSET)*32)+(8*4))))
#define UART7_UARTCTL_RXE_BB       (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTCTL_OFFSET)*32)+(9*4))))
#define UART7_UARTCTL_RTS_BB       (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTCTL_OFFSET)*32)+(11*4))))
#define UART7_UARTCTL_RTSEN_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTCTL_OFFSET)*32)+(14*4))))
#define UART7_UARTCTL_CTSEN_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTCTL_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.9 UARTIFLS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTIFLS            (((UARTIFLS_TypeDef*)(UART7_BASE + UART_UARTIFLS_OFFSET )))
#define UART7_UARTIFLS_R          (*((volatile uint32_t *)(UART7_BASE +UART_UARTIFLS_OFFSET)))

//--------
#define UART7_UARTIFLS_R_TXIFLSEL_MASK       (0x00000007)
#define UART7_UARTIFLS_R_TXIFLSEL_BIT        (0)
#define UART7_UARTIFLS_R_TXIFLSEL_1_4        (0x00000000)
#define UART7_UARTIFLS_R_TXIFLSEL_1_2        (0x00000002)
#define UART7_UARTIFLS_R_TXIFLSEL_3_4        (0x00000003)
#define UART7_UARTIFLS_R_TXIFLSEL_7_8        (0x00000004)

#define UART7_UARTIFLS_TXIFLSEL_MASK         (0x00000007)
#define UART7_UARTIFLS_TXIFLSEL_1_4          (0x00000000)
#define UART7_UARTIFLS_TXIFLSEL_1_2          (0x00000002)
#define UART7_UARTIFLS_TXIFLSEL_3_4          (0x00000003)
#define UART7_UARTIFLS_TXIFLSEL_7_8          (0x00000004)
//--------

//--------
#define UART7_UARTIFLS_R_RXIFLSEL_MASK       (0x00000038)
#define UART7_UARTIFLS_R_RXIFLSEL_BIT        (0)
#define UART7_UARTIFLS_R_RXIFLSEL_1_4        (0x00000000)
#define UART7_UARTIFLS_R_RXIFLSEL_1_2        (0x00000010)
#define UART7_UARTIFLS_R_RXIFLSEL_3_4        (0x00000018)
#define UART7_UARTIFLS_R_RXIFLSEL_7_8        (0x00000020)

#define UART7_UARTIFLS_RXIFLSEL_MASK         (0x00000007)
#define UART7_UARTIFLS_RXIFLSEL_1_4          (0x00000000)
#define UART7_UARTIFLS_RXIFLSEL_1_2          (0x00000002)
#define UART7_UARTIFLS_RXIFLSEL_3_4          (0x00000003)
#define UART7_UARTIFLS_RXIFLSEL_7_8          (0x00000004)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.10 UARTIM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTIM            (((UARTIM_TypeDef*)(UART7_BASE + UART_UARTIM_OFFSET )))
#define UART7_UARTIM_R          (*((volatile uint32_t *)(UART7_BASE +UART_UARTIM_OFFSET)))

//--------
#define UART7_UARTIM_R_CTSIM_MASK       (0x00000002)
#define UART7_UARTIM_R_CTSIM_BIT        (1)
#define UART7_UARTIM_R_CTSIM_DIS        (0x00000000)
#define UART7_UARTIM_R_CTSIM_EN         (0x00000002)

#define UART7_UARTIM_CTSIM_MASK         (0x00000001)
#define UART7_UARTIM_CTSIM_DIS          (0x00000000)
#define UART7_UARTIM_CTSIM_EN           (0x00000001)
//--------

//--------
#define UART7_UARTIM_R_RXIM_MASK       (0x00000010)
#define UART7_UARTIM_R_RXIM_BIT        (4)
#define UART7_UARTIM_R_RXIM_DIS        (0x00000000)
#define UART7_UARTIM_R_RXIM_EN         (0x00000010)

#define UART7_UARTIM_RXIM_MASK         (0x00000001)
#define UART7_UARTIM_RXIM_DIS          (0x00000000)
#define UART7_UARTIM_RXIM_EN           (0x00000001)
//--------

//--------
#define UART7_UARTIM_R_TXIM_MASK       (0x00000020)
#define UART7_UARTIM_R_TXIM_BIT        (5)
#define UART7_UARTIM_R_TXIM_DIS        (0x00000000)
#define UART7_UARTIM_R_TXIM_EN         (0x00000020)

#define UART7_UARTIM_TXIM_MASK         (0x00000001)
#define UART7_UARTIM_TXIM_DIS          (0x00000000)
#define UART7_UARTIM_TXIM_EN           (0x00000001)
//--------

//--------
#define UART7_UARTIM_R_RTIM_MASK       (0x00000040)
#define UART7_UARTIM_R_RTIM_BIT        (6)
#define UART7_UARTIM_R_RTIM_DIS        (0x00000000)
#define UART7_UARTIM_R_RTIM_EN         (0x00000040)

#define UART7_UARTIM_RTIM_MASK         (0x00000001)
#define UART7_UARTIM_RTIM_DIS          (0x00000000)
#define UART7_UARTIM_RTIM_EN           (0x00000001)
//--------

//--------
#define UART7_UARTIM_R_FEIM_MASK       (0x00000080)
#define UART7_UARTIM_R_FEIM_BIT        (7)
#define UART7_UARTIM_R_FEIM_DIS        (0x00000000)
#define UART7_UARTIM_R_FEIM_EN         (0x00000080)

#define UART7_UARTIM_FEIM_MASK         (0x00000001)
#define UART7_UARTIM_FEIM_DIS          (0x00000000)
#define UART7_UARTIM_FEIM_EN           (0x00000001)
//--------

//--------
#define UART7_UARTIM_R_PEIM_MASK       (0x00000100)
#define UART7_UARTIM_R_PEIM_BIT        (8)
#define UART7_UARTIM_R_PEIM_DIS        (0x00000000)
#define UART7_UARTIM_R_PEIM_EN         (0x00000100)

#define UART7_UARTIM_PEIM_MASK         (0x00000001)
#define UART7_UARTIM_PEIM_DIS          (0x00000000)
#define UART7_UARTIM_PEIM_EN           (0x00000001)
//--------

//--------
#define UART7_UARTIM_R_BEIM_MASK       (0x00000200)
#define UART7_UARTIM_R_BEIM_BIT        (9)
#define UART7_UARTIM_R_BEIM_DIS        (0x00000000)
#define UART7_UARTIM_R_BEIM_EN         (0x00000200)

#define UART7_UARTIM_BEIM_MASK         (0x00000001)
#define UART7_UARTIM_BEIM_DIS          (0x00000000)
#define UART7_UARTIM_BEIM_EN           (0x00000001)
//--------

//--------
#define UART7_UARTIM_R_OEIM_MASK       (0x00000400)
#define UART7_UARTIM_R_OEIM_BIT        (10)
#define UART7_UARTIM_R_OEIM_DIS        (0x00000000)
#define UART7_UARTIM_R_OEIM_EN         (0x00000400)

#define UART7_UARTIM_OEIM_MASK         (0x00000001)
#define UART7_UARTIM_OEIM_DIS          (0x00000000)
#define UART7_UARTIM_OEIM_EN           (0x00000001)
//--------

//--------
#define UART7_UARTIM_R_9BITIM_MASK       (0x00001000)
#define UART7_UARTIM_R_9BITIM_BIT        (12)
#define UART7_UARTIM_R_9BITIM_DIS        (0x00000000)
#define UART7_UARTIM_R_9BITIM_EN         (0x00001000)

#define UART7_UARTIM_9BITIM_MASK         (0x00000001)
#define UART7_UARTIM_9BITIM_DIS          (0x00000000)
#define UART7_UARTIM_9BITIM_EN           (0x00000001)
//--------

#define UART7_UARTIM_CTSIM_BB    (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTIM_OFFSET)*32)+(1*4))))
#define UART7_UARTIM_RXIM_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTIM_OFFSET)*32)+(4*4))))
#define UART7_UARTIM_TXIM_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTIM_OFFSET)*32)+(5*4))))
#define UART7_UARTIM_RTIM_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTIM_OFFSET)*32)+(6*4))))
#define UART7_UARTIM_FEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTIM_OFFSET)*32)+(7*4))))
#define UART7_UARTIM_PEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTIM_OFFSET)*32)+(8*4))))
#define UART7_UARTIM_BEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTIM_OFFSET)*32)+(9*4))))
#define UART7_UARTIM_OEIM_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTIM_OFFSET)*32)+(10*4))))
#define UART7_UARTIM_9BITIM_BB   (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTIM_OFFSET)*32)+(12*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.11 UARTRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTRIS            (((UARTRIS_TypeDef*)(UART7_BASE + UART_UARTRIS_OFFSET )))
#define UART7_UARTRIS_R          (*((volatile uint32_t *)(UART7_BASE +UART_UARTRIS_OFFSET)))



//--------
#define UART7_UARTRIS_R_CTSRIS_MASK       (0x00000002)
#define UART7_UARTRIS_R_CTSRIS_BIT        (1)
#define UART7_UARTRIS_R_CTSRIS_NOACTIVE   (0x00000000)
#define UART7_UARTRIS_R_CTSRIS_ACTIVE     (0x00000002)

#define UART7_UARTRIS_CTSRIS_MASK         (0x00000001)
#define UART7_UARTRIS_CTSRIS_NOACTIVE     (0x00000000)
#define UART7_UARTRIS_CTSRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART7_UARTRIS_R_RXRIS_MASK       (0x00000010)
#define UART7_UARTRIS_R_RXRIS_BIT        (4)
#define UART7_UARTRIS_R_RXRIS_NOACTIVE   (0x00000000)
#define UART7_UARTRIS_R_RXRIS_ACTIVE     (0x00000010)

#define UART7_UARTRIS_RXRIS_MASK         (0x00000001)
#define UART7_UARTRIS_RXRIS_NOACTIVE     (0x00000000)
#define UART7_UARTRIS_RXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART7_UARTRIS_R_TXRIS_MASK       (0x00000020)
#define UART7_UARTRIS_R_TXRIS_BIT        (5)
#define UART7_UARTRIS_R_TXRIS_NOACTIVE   (0x00000000)
#define UART7_UARTRIS_R_TXRIS_ACTIVE     (0x00000020)

#define UART7_UARTRIS_TXRIS_MASK         (0x00000001)
#define UART7_UARTRIS_TXRIS_NOACTIVE     (0x00000000)
#define UART7_UARTRIS_TXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART7_UARTRIS_R_RTRIS_MASK       (0x00000040)
#define UART7_UARTRIS_R_RTRIS_BIT        (6)
#define UART7_UARTRIS_R_RTRIS_NOACTIVE   (0x00000000)
#define UART7_UARTRIS_R_RTRIS_ACTIVE     (0x00000040)

#define UART7_UARTRIS_RTRIS_MASK         (0x00000001)
#define UART7_UARTRIS_RTRIS_NOACTIVE     (0x00000000)
#define UART7_UARTRIS_RTRIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART7_UARTRIS_R_FERIS_MASK       (0x00000080)
#define UART7_UARTRIS_R_FERIS_BIT        (7)
#define UART7_UARTRIS_R_FERIS_NOACTIVE   (0x00000000)
#define UART7_UARTRIS_R_FERIS_ACTIVE     (0x00000080)

#define UART7_UARTRIS_FERIS_MASK         (0x00000001)
#define UART7_UARTRIS_FERIS_NOACTIVE     (0x00000000)
#define UART7_UARTRIS_FERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART7_UARTRIS_R_PERIS_MASK       (0x00000100)
#define UART7_UARTRIS_R_PERIS_BIT        (8)
#define UART7_UARTRIS_R_PERIS_NOACTIVE   (0x00000000)
#define UART7_UARTRIS_R_PERIS_ACTIVE     (0x00000100)

#define UART7_UARTRIS_PERIS_MASK         (0x00000001)
#define UART7_UARTRIS_PERIS_NOACTIVE     (0x00000000)
#define UART7_UARTRIS_PERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART7_UARTRIS_R_BERIS_MASK       (0x00000200)
#define UART7_UARTRIS_R_BERIS_BIT        (9)
#define UART7_UARTRIS_R_BERIS_NOACTIVE   (0x00000000)
#define UART7_UARTRIS_R_BERIS_ACTIVE     (0x00000200)

#define UART7_UARTRIS_BERIS_MASK         (0x00000001)
#define UART7_UARTRIS_BERIS_NOACTIVE     (0x00000000)
#define UART7_UARTRIS_BERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART7_UARTRIS_R_OERIS_MASK       (0x00000400)
#define UART7_UARTRIS_R_OERIS_BIT        (10)
#define UART7_UARTRIS_R_OERIS_NOACTIVE   (0x00000000)
#define UART7_UARTRIS_R_OERIS_ACTIVE     (0x00000400)

#define UART7_UARTRIS_OERIS_MASK         (0x00000001)
#define UART7_UARTRIS_OERIS_NOACTIVE     (0x00000000)
#define UART7_UARTRIS_OERIS_ACTIVE       (0x00000001)
//--------

//--------
#define UART7_UARTRIS_R_9BITRIS_MASK       (0x00001000)
#define UART7_UARTRIS_R_9BITRIS_BIT        (12)
#define UART7_UARTRIS_R_9BITRIS_NOACTIVE   (0x00000000)
#define UART7_UARTRIS_R_9BITRIS_ACTIVE     (0x00001000)

#define UART7_UARTRIS_9BITRIS_MASK         (0x00000001)
#define UART7_UARTRIS_9BITRIS_NOACTIVE     (0x00000000)
#define UART7_UARTRIS_9BITRIS_ACTIVE       (0x00000001)
//--------

#define UART7_UARTRIS_CTSRIS_BB    (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTRIS_OFFSET)*32)+(1*4))))
#define UART7_UARTRIS_RXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTRIS_OFFSET)*32)+(4*4))))
#define UART7_UARTRIS_TXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTRIS_OFFSET)*32)+(5*4))))
#define UART7_UARTRIS_RTRIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTRIS_OFFSET)*32)+(6*4))))
#define UART7_UARTRIS_FERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTRIS_OFFSET)*32)+(7*4))))
#define UART7_UARTRIS_PERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTRIS_OFFSET)*32)+(8*4))))
#define UART7_UARTRIS_BERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTRIS_OFFSET)*32)+(9*4))))
#define UART7_UARTRIS_OERIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTRIS_OFFSET)*32)+(10*4))))
#define UART7_UARTRIS_9BITRIS_BB   (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTRIS_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.12 UARTMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTMIS            (((UARTMIS_TypeDef*)(UART7_BASE + UART_UARTMIS_OFFSET )))
#define UART7_UARTMIS_R          (*((volatile const uint32_t *)(UART7_BASE +UART_UARTMIS_OFFSET)))



//--------
#define UART7_UARTMIS_R_CTSMIS_MASK       (0x00000002)
#define UART7_UARTMIS_R_CTSMIS_BIT        (1)
#define UART7_UARTMIS_R_CTSMIS_NOOCCUR    (0x00000000)
#define UART7_UARTMIS_R_CTSMIS_OCCUR      (0x00000002)

#define UART7_UARTMIS_CTSMIS_MASK         (0x00000001)
#define UART7_UARTMIS_CTSMIS_NOOCCUR      (0x00000000)
#define UART7_UARTMIS_CTSMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART7_UARTMIS_R_RXMIS_MASK       (0x00000010)
#define UART7_UARTMIS_R_RXMIS_BIT        (4)
#define UART7_UARTMIS_R_RXMIS_NOOCCUR    (0x00000000)
#define UART7_UARTMIS_R_RXMIS_OCCUR      (0x00000010)

#define UART7_UARTMIS_RXMIS_MASK         (0x00000001)
#define UART7_UARTMIS_RXMIS_NOOCCUR      (0x00000000)
#define UART7_UARTMIS_RXMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART7_UARTMIS_R_TXMIS_MASK       (0x00000020)
#define UART7_UARTMIS_R_TXMIS_BIT        (5)
#define UART7_UARTMIS_R_TXMIS_NOOCCUR    (0x00000000)
#define UART7_UARTMIS_R_TXMIS_OCCUR      (0x00000020)

#define UART7_UARTMIS_TXMIS_MASK         (0x00000001)
#define UART7_UARTMIS_TXMIS_NOOCCUR      (0x00000000)
#define UART7_UARTMIS_TXMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART7_UARTMIS_R_RTMIS_MASK       (0x00000040)
#define UART7_UARTMIS_R_RTMIS_BIT        (6)
#define UART7_UARTMIS_R_RTMIS_NOOCCUR    (0x00000000)
#define UART7_UARTMIS_R_RTMIS_OCCUR      (0x00000040)

#define UART7_UARTMIS_RTMIS_MASK         (0x00000001)
#define UART7_UARTMIS_RTMIS_NOOCCUR      (0x00000000)
#define UART7_UARTMIS_RTMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART7_UARTMIS_R_FEMIS_MASK       (0x00000080)
#define UART7_UARTMIS_R_FEMIS_BIT        (7)
#define UART7_UARTMIS_R_FEMIS_NOOCCUR    (0x00000000)
#define UART7_UARTMIS_R_FEMIS_OCCUR      (0x00000080)

#define UART7_UARTMIS_FEMIS_MASK         (0x00000001)
#define UART7_UARTMIS_FEMIS_NOOCCUR      (0x00000000)
#define UART7_UARTMIS_FEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART7_UARTMIS_R_PEMIS_MASK       (0x00000100)
#define UART7_UARTMIS_R_PEMIS_BIT        (8)
#define UART7_UARTMIS_R_PEMIS_NOOCCUR    (0x00000000)
#define UART7_UARTMIS_R_PEMIS_OCCUR      (0x00000100)

#define UART7_UARTMIS_PEMIS_MASK         (0x00000001)
#define UART7_UARTMIS_PEMIS_NOOCCUR      (0x00000000)
#define UART7_UARTMIS_PEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART7_UARTMIS_R_BEMIS_MASK       (0x00000200)
#define UART7_UARTMIS_R_BEMIS_BIT        (9)
#define UART7_UARTMIS_R_BEMIS_NOOCCUR    (0x00000000)
#define UART7_UARTMIS_R_BEMIS_OCCUR      (0x00000200)

#define UART7_UARTMIS_BEMIS_MASK         (0x00000001)
#define UART7_UARTMIS_BEMIS_NOOCCUR      (0x00000000)
#define UART7_UARTMIS_BEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART7_UARTMIS_R_OEMIS_MASK       (0x00000400)
#define UART7_UARTMIS_R_OEMIS_BIT        (10)
#define UART7_UARTMIS_R_OEMIS_NOOCCUR    (0x00000000)
#define UART7_UARTMIS_R_OEMIS_OCCUR      (0x00000400)

#define UART7_UARTMIS_OEMIS_MASK         (0x00000001)
#define UART7_UARTMIS_OEMIS_NOOCCUR      (0x00000000)
#define UART7_UARTMIS_OEMIS_OCCUR        (0x00000001)
//--------

//--------
#define UART7_UARTMIS_R_9BITMIS_MASK       (0x00001000)
#define UART7_UARTMIS_R_9BITMIS_BIT        (12)
#define UART7_UARTMIS_R_9BITMIS_NOOCCUR    (0x00000000)
#define UART7_UARTMIS_R_9BITMIS_OCCUR      (0x00001000)

#define UART7_UARTMIS_9BITMIS_MASK         (0x00000001)
#define UART7_UARTMIS_9BITMIS_NOOCCUR      (0x00000000)
#define UART7_UARTMIS_9BITMIS_OCCUR        (0x00000001)
//--------


#define UART7_UARTMIS_CTSMIS_BB    (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTMIS_OFFSET)*32)+(1*4))))
#define UART7_UARTMIS_RXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTMIS_OFFSET)*32)+(4*4))))
#define UART7_UARTMIS_TXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTMIS_OFFSET)*32)+(5*4))))
#define UART7_UARTMIS_RTMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTMIS_OFFSET)*32)+(6*4))))
#define UART7_UARTMIS_FEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTMIS_OFFSET)*32)+(7*4))))
#define UART7_UARTMIS_PEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTMIS_OFFSET)*32)+(8*4))))
#define UART7_UARTMIS_BEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTMIS_OFFSET)*32)+(9*4))))
#define UART7_UARTMIS_OEMIS_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTMIS_OFFSET)*32)+(10*4))))
#define UART7_UARTMIS_9BITMIS_BB   (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTMIS_OFFSET)*32)+(12*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.13 UARTICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTICR            (((UARTICR_TypeDef*)(UART7_BASE + UART_UARTICR_OFFSET )))
#define UART7_UARTICR_R          (*((volatile uint32_t *)(UART7_BASE +UART_UARTICR_OFFSET)))


//--------
#define UART7_UARTICR_R_CTSIC_MASK       (0x00000002)
#define UART7_UARTICR_R_CTSIC_BIT        (1)
#define UART7_UARTICR_R_CTSIC_CLEAR      (0x00000002)

#define UART7_UARTICR_CTSIC_MASK         (0x00000001)
#define UART7_UARTICR_CTSIC_CLEAR        (0x00000001)
//--------

//--------
#define UART7_UARTICR_R_RXIC_MASK       (0x00000010)
#define UART7_UARTICR_R_RXIC_BIT        (4)
#define UART7_UARTICR_R_RXIC_CLEAR      (0x00000010)

#define UART7_UARTICR_RXIC_MASK         (0x00000001)
#define UART7_UARTICR_RXIC_CLEAR        (0x00000001)
//--------

//--------
#define UART7_UARTICR_R_TXIC_MASK       (0x00000020)
#define UART7_UARTICR_R_TXIC_BIT        (5)
#define UART7_UARTICR_R_TXIC_CLEAR      (0x00000020)

#define UART7_UARTICR_TXIC_MASK         (0x00000001)
#define UART7_UARTICR_TXIC_CLEAR        (0x00000001)
//--------

//--------
#define UART7_UARTICR_R_RTIC_MASK       (0x00000040)
#define UART7_UARTICR_R_RTIC_BIT        (6)
#define UART7_UARTICR_R_RTIC_CLEAR      (0x00000040)

#define UART7_UARTICR_RTIC_MASK         (0x00000001)
#define UART7_UARTICR_RTIC_CLEAR        (0x00000001)
//--------

//--------
#define UART7_UARTICR_R_FEIC_MASK       (0x00000080)
#define UART7_UARTICR_R_FEIC_BIT        (7)
#define UART7_UARTICR_R_FEIC_CLEAR      (0x00000080)

#define UART7_UARTICR_FEIC_MASK         (0x00000001)
#define UART7_UARTICR_FEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART7_UARTICR_R_PEIC_MASK       (0x00000100)
#define UART7_UARTICR_R_PEIC_BIT        (8)
#define UART7_UARTICR_R_PEIC_CLEAR      (0x00000100)

#define UART7_UARTICR_PEIC_MASK         (0x00000001)
#define UART7_UARTICR_PEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART7_UARTICR_R_BEIC_MASK       (0x00000200)
#define UART7_UARTICR_R_BEIC_BIT        (9)
#define UART7_UARTICR_R_BEIC_CLEAR      (0x00000200)

#define UART7_UARTICR_BEIC_MASK         (0x00000001)
#define UART7_UARTICR_BEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART7_UARTICR_R_OEIC_MASK       (0x00000400)
#define UART7_UARTICR_R_OEIC_BIT        (10)
#define UART7_UARTICR_R_OEIC_CLEAR      (0x00000400)

#define UART7_UARTICR_OEIC_MASK         (0x00000001)
#define UART7_UARTICR_OEIC_CLEAR        (0x00000001)
//--------

//--------
#define UART7_UARTICR_R_9BITIC_MASK       (0x00001000)
#define UART7_UARTICR_R_9BITIC_BIT        (12)
#define UART7_UARTICR_R_9BITIC_CLEAR      (0x00001000)

#define UART7_UARTICR_9BITIC_MASK         (0x00000001)
#define UART7_UARTICR_9BITIC_CLEAR        (0x00000001)
//--------

#define UART7_UARTICR_CTSICR_BB    (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTICR_OFFSET)*32)+(1*4))))
#define UART7_UARTICR_RXICR_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTICR_OFFSET)*32)+(4*4))))
#define UART7_UARTICR_TXICR_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTICR_OFFSET)*32)+(5*4))))
#define UART7_UARTICR_RTICR_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTICR_OFFSET)*32)+(6*4))))
#define UART7_UARTICR_FEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTICR_OFFSET)*32)+(7*4))))
#define UART7_UARTICR_PEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTICR_OFFSET)*32)+(8*4))))
#define UART7_UARTICR_BEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTICR_OFFSET)*32)+(9*4))))
#define UART7_UARTICR_OEICR_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTICR_OFFSET)*32)+(10*4))))
#define UART7_UARTICR_9BITICR_BB   (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTICR_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.14 UARTDMACTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTDMACTL            (((UARTDMACTL_TypeDef*)(UART7_BASE + UART_UARTDMACTL_OFFSET )))
#define UART7_UARTDMACTL_R          (*((volatile uint32_t *)(UART7_BASE +UART_UARTDMACTL_OFFSET)))

//--------
#define UART7_UARTDMACTL_R_RXDMAE_MASK       (0x00000001)
#define UART7_UARTDMACTL_R_RXDMAE_BIT        (0)
#define UART7_UARTDMACTL_R_RXDMAE_DIS        (0x00000000)
#define UART7_UARTDMACTL_R_RXDMAE_EN         (0x00008000)

#define UART7_UARTDMACTL_RXDMAE_MASK         (0x00000001)
#define UART7_UARTDMACTL_RXDMAE_DIS          (0x00000000)
#define UART7_UARTDMACTL_RXDMAE_EN           (0x00000001)
//--------

//--------
#define UART7_UARTDMACTL_R_TXDMAE_MASK       (0x00000002)
#define UART7_UARTDMACTL_R_TXDMAE_BIT        (1)
#define UART7_UARTDMACTL_R_TXDMAE_DIS        (0x00000000)
#define UART7_UARTDMACTL_R_TXDMAE_EN         (0x00000002)

#define UART7_UARTDMACTL_TXDMAE_MASK         (0x00000001)
#define UART7_UARTDMACTL_TXDMAE_DIS          (0x00000000)
#define UART7_UARTDMACTL_TXDMAE_EN           (0x00000001)
//--------

//--------
#define UART7_UARTDMACTL_R_DMAERR_MASK       (0x00000004)
#define UART7_UARTDMACTL_R_DMAERR_BIT        (2)
#define UART7_UARTDMACTL_R_DMAERR_NOERROR    (0x00000000)
#define UART7_UARTDMACTL_R_DMAERR_ERROR      (0x00000004)

#define UART7_UARTDMACTL_DMAERR_MASK         (0x00000001)
#define UART7_UARTDMACTL_DMAERR_NOERROR      (0x00000000)
#define UART7_UARTDMACTL_DMAERR_ERROR        (0x00000001)
//--------

#define UART7_UARTDMACTL_RXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(0*4))))
#define UART7_UARTDMACTL_TXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(1*4))))
#define UART7_UARTDMACTL_DMAERR_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTDMACTL_OFFSET)*32)+(2*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.15 UART9BITADDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UART9BITADDR            (((UART9BITADDR_TypeDef*)(UART7_BASE + UART_UART9BITADDR_OFFSET )))
#define UART7_UART9BITADDR_R          (*((volatile uint32_t *)(UART7_BASE +UART_UART9BITADDR_OFFSET)))

//--------
#define UART7_UART9BITADDR_R_ADDR_MASK       (0x000000FF)
#define UART7_UART9BITADDR_R_ADDR_BIT        (0)

#define UART7_UART9BITADDR_ADDR_MASK         (0x000000FF)
//--------

//--------
#define UART7_UART9BITADDR_R_9BITEN_MASK       (0x00008000)
#define UART7_UART9BITADDR_R_9BITEN_BIT        (15)
#define UART7_UART9BITADDR_R_9BITEN_DIS        (0x00000000)
#define UART7_UART9BITADDR_R_9BITEN_EN         (0x00008000)

#define UART7_UART9BITADDR_9BITEN_MASK         (0x00000001)
#define UART7_UART9BITADDR_9BITEN_DIS          (0x00000000)
#define UART7_UART9BITADDR_9BITEN_EN           (0x00000001)
//--------

#define UART7_UART9BITADDR_9BITEN_BB     (*((volatile uint32_t *)(0x42000000+((UART7_OFFSET+UART_UART9BITADDR_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.16 UART9BITAMASK ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UART9BITAMASK            (((UART9BITAMASK_TypeDef*)(UART7_BASE + UART_UART9BITAMASK_OFFSET )))
#define UART7_UART9BITAMASK_R          (*((volatile uint32_t *)(UART7_BASE +UART_UART9BITAMASK_OFFSET)))

//--------
#define UART7_UART9BITAMASK_R_MASK_MASK       (0x000000FF)
#define UART7_UART9BITAMASK_R_MASK_BIT        (0)

#define UART7_UART9BITAMASK_MASK_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.17 UARTPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTPP            (((UARTPP_TypeDef*)(UART7_BASE + UART_UARTPP_OFFSET )))
#define UART7_UARTPP_R          (*((volatile const uint32_t *)(UART7_BASE +UART_UARTPP_OFFSET)))

//--------
#define UART7_UARTPP_R_SC_MASK       (0x00000001)
#define UART7_UARTPP_R_SC_BIT        (0)
#define UART7_UARTPP_R_SC_NOSUPPORT  (0x00000000)
#define UART7_UARTPP_R_SC_SUPPORT    (0x00000001)

#define UART7_UARTPP_SC_MASK         (0x00000001)
#define UART7_UARTPP_SC_NOSUPPORT    (0x00000000)
#define UART7_UARTPP_SC_SUPPORT      (0x00000001)
//--------

//--------
#define UART7_UARTPP_R_NB_MASK       (0x00000002)
#define UART7_UARTPP_R_NB_BIT        (1)
#define UART7_UARTPP_R_NB_NOSUPPORT  (0x00000000)
#define UART7_UARTPP_R_NB_SUPPORT    (0x00000002)

#define UART7_UARTPP_NB_MASK         (0x00000001)
#define UART7_UARTPP_NB_NOSUPPORT    (0x00000000)
#define UART7_UARTPP_NB_SUPPORT      (0x00000001)
//--------

#define UART7_UARTPP_SC_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTPP_OFFSET)*32)+(0*4))))
#define UART7_UARTPP_NB_BB     (*((volatile const uint32_t *)(0x42000000+((UART7_OFFSET+UART_UARTPP_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.18 UARTCC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTCC            (((UARTCC_TypeDef*)(UART7_BASE + UART_UARTCC_OFFSET )))
#define UART7_UARTCC_R          (*((volatile uint32_t *)(UART7_BASE +UART_UARTCC_OFFSET)))


//--------
#define UART7_UARTCC_R_CS_MASK       (0x0000000F)
#define UART7_UARTCC_R_CS_BIT        (0)
#define UART7_UARTCC_R_CS_SYSCLK     (0x00000000)
#define UART7_UARTCC_R_CS_PIOSC      (0x00000005)

#define UART7_UARTCC_CS_MASK         (0x0000000F)
#define UART7_UARTCC_CS_SYSCLK       (0x00000000)
#define UART7_UARTCC_CS_PIOSC        (0x00000005)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.19 UARTPeriphID4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTPeriphID4            (((UARTPeriphID4_TypeDef*)(UART7_BASE + UART_UARTPeriphID4_OFFSET )))
#define UART7_UARTPeriphID4_R          (*((volatile const uint32_t *)(UART7_BASE +UART_UARTPeriphID4_OFFSET)))

//--------
#define UART7_UARTPeriphID4_R_PID4_MASK       (0x000000FF)
#define UART7_UARTPeriphID4_R_PID4_BIT        (0)
#define UART7_UARTPeriphID4_R_PID4_DEFAULT    (0x00000000)

#define UART7_UARTPeriphID4_PID4_MASK         (0x000000FF)
#define UART7_UARTPeriphID4_PID4_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.20 UARTPeriphID5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTPeriphID5            (((UARTPeriphID5_TypeDef*)(UART7_BASE + UART_UARTPeriphID5_OFFSET )))
#define UART7_UARTPeriphID5_R          (*((volatile const uint32_t *)(UART7_BASE +UART_UARTPeriphID5_OFFSET)))

//--------
#define UART7_UARTPeriphID5_R_PID5_MASK       (0x000000FF)
#define UART7_UARTPeriphID5_R_PID5_BIT        (0)
#define UART7_UARTPeriphID5_R_PID5_DEFAULT    (0x00000000)

#define UART7_UARTPeriphID5_PID5_MASK         (0x000000FF)
#define UART7_UARTPeriphID5_PID5_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.21 UARTPeriphID6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTPeriphID6            (((UARTPeriphID6_TypeDef*)(UART7_BASE + UART_UARTPeriphID6_OFFSET )))
#define UART7_UARTPeriphID6_R          (*((volatile const uint32_t *)(UART7_BASE +UART_UARTPeriphID6_OFFSET)))



//--------
#define UART7_UARTPeriphID6_R_PID6_MASK       (0x000000FF)
#define UART7_UARTPeriphID6_R_PID6_BIT        (0)
#define UART7_UARTPeriphID6_R_PID6_DEFAULT    (0x00000000)

#define UART7_UARTPeriphID6_PID6_MASK         (0x000000FF)
#define UART7_UARTPeriphID6_PID6_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.22 UARTPeriphID7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTPeriphID7            (((UARTPeriphID7_TypeDef*)(UART7_BASE + UART_UARTPeriphID7_OFFSET )))
#define UART7_UARTPeriphID7_R          (*((volatile const uint32_t *)(UART7_BASE +UART_UARTPeriphID7_OFFSET)))



//--------
#define UART7_UARTPeriphID7_R_PID7_MASK       (0x000000FF)
#define UART7_UARTPeriphID7_R_PID7_BIT        (0)
#define UART7_UARTPeriphID7_R_PID7_DEFAULT    (0x00000000)

#define UART7_UARTPeriphID7_PID7_MASK         (0x000000FF)
#define UART7_UARTPeriphID7_PID7_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.23 UARTPeriphID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTPeriphID0            (((UARTPeriphID0_TypeDef*)(UART7_BASE + UART_UARTPeriphID0_OFFSET )))
#define UART7_UARTPeriphID0_R          (*((volatile const uint32_t *)(UART7_BASE +UART_UARTPeriphID0_OFFSET)))



//--------
#define UART7_UARTPeriphID0_R_PID0_MASK       (0x000000FF)
#define UART7_UARTPeriphID0_R_PID0_BIT        (0)
#define UART7_UARTPeriphID0_R_PID0_DEFAULT    (0x00000060)

#define UART7_UARTPeriphID0_PID0_MASK         (0x000000FF)
#define UART7_UARTPeriphID0_PID0_DEFAULT      (0x00000060)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.24 UARTPeriphID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTPeriphID1            (((UARTPeriphID1_TypeDef*)(UART7_BASE + UART_UARTPeriphID1_OFFSET )))
#define UART7_UARTPeriphID1_R          (*((volatile const uint32_t *)(UART7_BASE +UART_UARTPeriphID1_OFFSET)))



//--------
#define UART7_UARTPeriphID1_R_PID1_MASK       (0x000000FF)
#define UART7_UARTPeriphID1_R_PID1_BIT        (0)
#define UART7_UARTPeriphID1_R_PID1_DEFAULT    (0x00000000)

#define UART7_UARTPeriphID1_PID1_MASK         (0x000000FF)
#define UART7_UARTPeriphID1_PID1_DEFAULT      (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.25 UARTPeriphID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTPeriphID2            (((UARTPeriphID2_TypeDef*)(UART7_BASE + UART_UARTPeriphID2_OFFSET )))
#define UART7_UARTPeriphID2_R          (*((volatile const uint32_t *)(UART7_BASE +UART_UARTPeriphID2_OFFSET)))

//--------
#define UART7_UARTPeriphID2_R_PID2_MASK       (0x000000FF)
#define UART7_UARTPeriphID2_R_PID2_BIT        (0)
#define UART7_UARTPeriphID2_R_PID2_DEFAULT    (0x00000018)

#define UART7_UARTPeriphID2_PID2_MASK         (0x000000FF)
#define UART7_UARTPeriphID2_PID2_DEFAULT      (0x00000018)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.26 UARTPeriphID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTPeriphID3            (((UARTPeriphID3_TypeDef*)(UART7_BASE + UART_UARTPeriphID3_OFFSET )))
#define UART7_UARTPeriphID3_R          (*((volatile const uint32_t *)(UART7_BASE +UART_UARTPeriphID3_OFFSET)))

//--------
#define UART7_UARTPeriphID3_R_PID3_MASK       (0x000000FF)
#define UART7_UARTPeriphID3_R_PID3_BIT        (0)
#define UART7_UARTPeriphID3_R_PID3_DEFAULT    (0x00000001)

#define UART7_UARTPeriphID3_PID3_MASK         (0x000000FF)
#define UART7_UARTPeriphID3_PID3_DEFAULT      (0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.27 UARTPCellID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTPCellID0            (((UARTPCellID0_TypeDef*)(UART7_BASE + UART_UARTPCellID0_OFFSET )))
#define UART7_UARTPCellID0_R          (*((volatile const uint32_t *)(UART7_BASE +UART_UARTPCellID0_OFFSET)))

//--------
#define UART7_UARTPCellID0_R_CID0_MASK       (0x000000FF)
#define UART7_UARTPCellID0_R_CID0_BIT        (0)
#define UART7_UARTPCellID0_R_CID0_DEFAULT    (0x0000000D)

#define UART7_UARTPCellID0_CID0_MASK         (0x000000FF)
#define UART7_UARTPCellID0_CID0_DEFAULT      (0x0000000D)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.28 UARTPCellID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTPCellID1            (((UARTPCellID1_TypeDef*)(UART7_BASE + UART_UARTPCellID1_OFFSET )))
#define UART7_UARTPCellID1_R          (*((volatile const uint32_t *)(UART7_BASE +UART_UARTPCellID1_OFFSET)))

//--------
#define UART7_UARTPCellID1_R_CID1_MASK       (0x000000FF)
#define UART7_UARTPCellID1_R_CID1_BIT        (0)
#define UART7_UARTPCellID1_R_CID1_DEFAULT    (0x000000F0)

#define UART7_UARTPCellID1_CID1_MASK         (0x000000FF)
#define UART7_UARTPCellID1_CID1_DEFAULT      (0x000000F0)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.29 UARTPCellID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTPCellID2            (((UARTPCellID2_TypeDef*)(UART7_BASE + UART_UARTPCellID2_OFFSET )))
#define UART7_UARTPCellID2_R          (*((volatile const uint32_t *)(UART7_BASE +UART_UARTPCellID2_OFFSET)))

//--------
#define UART7_UARTPCellID2_R_CID2_MASK       (0x000000FF)
#define UART7_UARTPCellID2_R_CID2_BIT        (0)
#define UART7_UARTPCellID2_R_CID2_DEFAULT    (0x00000005)

#define UART7_UARTPCellID2_CID2_MASK         (0x000000FF)
#define UART7_UARTPCellID2_CID2_DEFAULT      (0x00000005)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7.30 UARTPCellID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define UART7_UARTPCellID3            (((UARTPCellID3_TypeDef*)(UART7_BASE + UART_UARTPCellID3_OFFSET )))
#define UART7_UARTPCellID3_R          (*((volatile const uint32_t *)(UART7_BASE +UART_UARTPCellID3_OFFSET)))

//--------
#define UART7_UARTPCellID3_R_CID3_MASK       (0x000000FF)
#define UART7_UARTPCellID3_R_CID3_BIT        (0)
#define UART7_UARTPCellID3_R_CID3_DEFAULT    (0x000000B1)

#define UART7_UARTPCellID3_CID3_MASK         (0x000000FF)
#define UART7_UARTPCellID3_CID3_DEFAULT      (0x000000B1)
//--------


//Todo UART Funcions


void UART0_Init(uint32_t baudRate);
void UART1_Init(uint32_t baudRate);
void UART2_Init(uint32_t baudRate);
void UART3_Init(uint32_t baudRate);
void UART4_Init(uint32_t baudRate);
void UART5_Init(uint32_t baudRate);
void UART6_Init(uint32_t baudRate);
void UART7_Init(uint32_t baudRate);

int32_t UART0_SendChar( int8_t data);
int32_t UART0_ReadChar( int8_t* dato);
int32_t UART0_SendString( int8_t* data);
void UART0_Pos(int8_t column, int8_t row);
//uint8_t UART0_Print(int8_t* string,uint8_t* column, uint8_t* row);
uint64_t UART0_Printf(int8_t* string,...);

int32_t UART1_SendChar( int8_t data);
int32_t UART1_ReadChar( void);
int32_t UART1_SendString( int8_t* data);
void UART1_Pos(int8_t column, int8_t row);
//uint8_t UART0_Print(int8_t* string,uint8_t* column, uint8_t* row);
uint64_t UART1_Printf(int8_t* string,...);


int32_t UART2_SendChar( int8_t data);
int32_t UART2_ReadChar( void);
int32_t UART2_SendString( int8_t* data);
void UART2_Pos(int8_t column, int8_t row);
//uint8_t UART0_Print(int8_t* string,uint8_t* column, uint8_t* row);
uint64_t UART2_Printf(int8_t* string,...);



int32_t UART3_SendChar( int8_t data);
int32_t UART3_ReadChar( void);
int32_t UART3_SendString( int8_t* data);
void UART3_Pos(int8_t column, int8_t row);
//uint8_t UART0_Print(int8_t* string,uint8_t* column, uint8_t* row);
uint64_t UART3_Printf(int8_t* string,...);


int32_t UART4_SendChar( int8_t data);
int32_t UART4_ReadChar( void);
int32_t UART4_SendString( int8_t* data);
void UART4_Pos(int8_t column, int8_t row);
//uint8_t UART0_Print(int8_t* string,uint8_t* column, uint8_t* row);
uint64_t UART4_Printf(int8_t* string,...);


int32_t UART5_SendChar( int8_t data);
int32_t UART5_ReadChar( void);
int32_t UART5_SendString( int8_t* data);
void UART5_Pos(int8_t column, int8_t row);
//uint8_t UART0_Print(int8_t* string,uint8_t* column, uint8_t* row);
uint64_t UART5_Printf(int8_t* string,...);

int32_t UART6_SendChar( int8_t data);
int32_t UART6_ReadChar( void);
int32_t UART6_SendString( int8_t* data);
void UART6_Pos(int8_t column, int8_t row);
//uint8_t UART0_Print(int8_t* string,uint8_t* column, uint8_t* row);
uint64_t UART6_Printf(int8_t* string,...);

int32_t UART7_SendChar( int8_t data);
int32_t UART7_ReadChar( void);
int32_t UART7_SendString( int8_t* data);
void UART7_Pos(int8_t column, int8_t row);
//uint8_t UART0_Print(int8_t* string,uint8_t* column, uint8_t* row);
uint64_t UART7_Printf(int8_t* string,...);



void UART0Handler(void);
void UART1Handler(void);
void UART2Handler(void);
void UART3Handler(void);
void UART4Handler(void);
void UART5Handler(void);
void UART6Handler(void);
void UART7Handler(void);


extern uint8_t UART0Fifo[256];
extern uint8_t UART0FifoCount;
extern uint8_t UART0FifoRead;
extern uint8_t UART0TxEmpty;
extern uint8_t UART0StringData;

extern uint8_t UART1Fifo[256];
extern uint8_t UART1FifoCount;
extern uint8_t UART1FifoRead;
extern uint8_t UART1TxEmpty;

extern uint8_t UART2Fifo[256];
extern uint8_t UART2FifoCount;
extern uint8_t UART2FifoRead;
extern uint8_t UART2TxEmpty;

extern uint8_t UART3Fifo[256];
extern uint8_t UART3FifoCount;
extern uint8_t UART3FifoRead;
extern uint8_t UART3TxEmpty;

extern uint8_t UART4Fifo[256];
extern uint8_t UART4FifoCount;
extern uint8_t UART4FifoRead;
extern uint8_t UART4TxEmpty;

extern uint8_t UART5Fifo[256];
extern uint8_t UART5FifoCount;
extern uint8_t UART5FifoRead;
extern uint8_t UART5TxEmpty;

extern uint8_t UART6Fifo[256];
extern uint8_t UART6FifoCount;
extern uint8_t UART6FifoRead;
extern uint8_t UART6TxEmpty;

extern uint8_t UART7Fifo[256];
extern uint8_t UART7FifoCount;
extern uint8_t UART7FifoRead;
extern uint8_t UART7TxEmpty;

#endif /* UART_H_ */
