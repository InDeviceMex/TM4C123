/**
 *
 * @file UART_StructPeripheral.h
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

#ifndef XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/UART/Peripheral/Struct/xHeader/UART_StructRegister.h>
#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

typedef volatile struct
{
    union
    {
            volatile uint32_t UARTDR;
            UARTDR_TypeDef UARTDR_Bit;
    };
    union
    {
            volatile const uint32_t UARTRSR;
            volatile uint32_t UARTECR;
            UARTRSR_TypeDef UARTRSR_Bit;
            UARTECR_TypeDef UARTECR_Bit;
    };
    const uint32_t reserved [4UL];
    union
    {
            volatile const uint32_t UARTFR;
            UARTFR_TypeDef UARTFR_Bit;
    };
    const uint32_t reserved1 [1UL];
    union
    {
            volatile uint32_t UARTILPR;
            UARTILPR_TypeDef UARTILPR_Bit;
    };
    union
    {
            volatile uint32_t UARTIBRD;
            UARTIBRD_TypeDef UARTIBRD_Bit;
    };
    union
    {
            volatile uint32_t UARTFBRD;
            UARTFBRD_TypeDef UARTFBRD_Bit;
    };
    union
    {
            volatile uint32_t UARTLCRH;
            UARTLCRH_TypeDef UARTLCRH_Bit;
    };
    union
    {
            volatile uint32_t UARTCTL;
            UARTCTL_TypeDef UARTCTL_Bit;
    };
    union
    {
            volatile uint32_t UARTIFLS;
            UARTIFLS_TypeDef UARTIFLS_Bit;
    };
    union
    {
            volatile uint32_t UARTIM;
            UARTIM_TypeDef UARTIM_Bit;
    };
    union
    {
            volatile const uint32_t UARTRIS;
            UARTRIS_TypeDef UARTRIS_Bit;
    };
    union
    {
            volatile const uint32_t UARTMIS;
            UARTMIS_TypeDef UARTMIS_Bit;
    };
    union
    {
            volatile uint32_t UARTICR;
            UARTICR_TypeDef UARTICR_Bit;
    };
    union
    {
            volatile uint32_t UARTDMACTL;
            UARTDMACTL_TypeDef UARTDMACTL_Bit;
    };
    const uint32_t reserved2 [22UL];
    union
    {
            volatile uint32_t UART9BITADDR;
            UART9BITADDR_TypeDef UART9BITADDR_Bit;
    };
    union
    {
            volatile uint32_t UART9BITAMASK;
            UART9BITAMASK_TypeDef UART9BITAMASK_Bit;
    };
    const uint32_t reserved3 [965UL];
    union
    {
            volatile const uint32_t UARTPP;
            UARTPP_TypeDef UARTPP_Bit;
    };
    const uint32_t reserved4 [1UL];
    union
    {
            volatile uint32_t UARTCC;
            UARTCC_TypeDef UARTCC_Bit;
    };
    const uint32_t reserved5 [1UL];
    union
    {
            volatile const uint32_t UARTPeriphID4;
            UARTPeriphID4_TypeDef UARTPeriphID4_Bit;
    };
    union
    {
            volatile const uint32_t UARTPeriphID5;
            UARTPeriphID5_TypeDef UARTPeriphID5_Bit;
    };
    union
    {
            volatile const uint32_t UARTPeriphID6;
            UARTPeriphID6_TypeDef UARTPeriphID6_Bit;
    };
    union
    {
            volatile const uint32_t UARTPeriphID7;
            UARTPeriphID7_TypeDef UARTPeriphID7_Bit;
    };
    union
    {
            volatile const uint32_t UARTPeriphID0;
            UARTPeriphID0_TypeDef UARTPeriphID0_Bit;
    };
    union
    {
            volatile const uint32_t UARTPeriphID1;
            UARTPeriphID1_TypeDef UARTPeriphID1_Bit;
    };
    union
    {
            volatile const uint32_t UARTPeriphID2;
            UARTPeriphID2_TypeDef UARTPeriphID2_Bit;
    };
    union
    {
            volatile const uint32_t UARTPeriphID3;
            UARTPeriphID3_TypeDef UARTPeriphID3_Bit;
    };
    union
    {
            volatile const uint32_t UARTCellID0;
            UARTCellID0_TypeDef UARTCellID0_Bit;
    };
    union
    {
            volatile const uint32_t UARTCellID1;
            UARTCellID1_TypeDef UARTCellID1_Bit;
    };
    union
    {
            volatile const uint32_t UARTCellID2;
            UARTCellID2_TypeDef UARTCellID2_Bit;
    };
    union
    {
            volatile const uint32_t UARTCellID3;
            UARTCellID3_TypeDef UARTCellID3_Bit;
    };
} UART_TypeDef;

typedef volatile struct
{
    UART_TypeDef MODULE [(uint32_t) UART_enMODULE_MAX];
} UARTS_TypeDef;

#endif /* XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTPERIPHERAL_H_ */
