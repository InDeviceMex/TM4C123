/**
 *
 * @file UART_RegisterPeripheral_Module2.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_UART_REGISTERPERIPHERAL_MODULE2_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_UART_REGISTERPERIPHERAL_MODULE2_H_

#include <xDriver_MCU/UART/Peripheral/Register/xHeader/UART_RegisterAddress.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterDefines/UART_RegisterDefines.h>
#include <xDriver_MCU/UART/Peripheral/Struct/xHeader/UART_StructPeripheral.h>

/******************************************************************************************
************************************ UART2 *********************************************
******************************************************************************************/

#define UART2    (((UART_TypeDef*) (UART2_BASE)))

/******************************************************************************************
************************************ 1 UARTDR *********************************************
******************************************************************************************/
#define UART2_UARTDR    (((UARTDR_TypeDef*) (UART2_BASE + UART_UARTDR_OFFSET )))
#define UART2_UARTDR_R    (*((volatile uint32_t*) (UART2_BASE +UART_UARTDR_OFFSET)))

/******************************************************************************************
************************************ 2 UARTRSR *********************************************
************************************ 2 UARTECR *********************************************
******************************************************************************************/
#define UART2_UARTRSR    (((UARTRSR_TypeDef*) (UART2_BASE + UART_UARTRSR_OFFSET )))
#define UART2_UARTRSR_R    (*((volatile const uint32_t*) (UART2_BASE +UART_UARTRSR_OFFSET)))
#define UART2_UARTECR    (((UARTECR_TypeDef*) (UART2_BASE + UART_UARTECR_OFFSET )))
#define UART2_UARTECR_R    (*((volatile uint32_t*) (UART2_BASE +UART_UARTECR_OFFSET)))

/******************************************************************************************
************************************ 3 UARTFR *********************************************
******************************************************************************************/
#define UART2_UARTFR    (((UARTFR_TypeDef*) (UART2_BASE + UART_UARTFR_OFFSET )))
#define UART2_UARTFR_R    (*((volatile const uint32_t*) (UART2_BASE +UART_UARTFR_OFFSET)))

/******************************************************************************************
************************************ 4 UARTILPR *********************************************
******************************************************************************************/
#define UART2_UARTILPR    (((UARTILPR_TypeDef*) (UART2_BASE + UART_UARTILPR_OFFSET )))
#define UART2_UARTILPR_R    (*((volatile uint32_t *) (UART2_BASE +UART_UARTILPR_OFFSET)))

/******************************************************************************************
************************************ 5 UARTIBRD *********************************************
******************************************************************************************/
#define UART2_UARTIBRD    (((UARTIBRD_TypeDef*) (UART2_BASE + UART_UARTIBRD_OFFSET )))
#define UART2_UARTIBRD_R    (*((volatile uint32_t *) (UART2_BASE +UART_UARTIBRD_OFFSET)))

/******************************************************************************************
************************************ 6 UARTFBRD *********************************************
******************************************************************************************/
#define UART2_UARTFBRD    (((UARTFBRD_TypeDef*) (UART2_BASE + UART_UARTFBRD_OFFSET )))
#define UART2_UARTFBRD_R    (*((volatile uint32_t *) (UART2_BASE +UART_UARTFBRD_OFFSET)))

/******************************************************************************************
************************************ 7 UARTLCRH *********************************************
******************************************************************************************/
#define UART2_UARTLCRH    (((UARTLCRH_TypeDef*) (UART2_BASE + UART_UARTLCRH_OFFSET )))
#define UART2_UARTLCRH_R    (*((volatile uint32_t *) (UART2_BASE +UART_UARTLCRH_OFFSET)))

/******************************************************************************************
************************************ 8 UARTDMACTL *********************************************
******************************************************************************************/
#define UART2_UARTDMACTL    (((UARTDMACTL_TypeDef*) (UART2_BASE + UART_UARTDMACTL_OFFSET )))
#define UART2_UARTDMACTL_R    (*((volatile uint32_t *) (UART2_BASE +UART_UARTDMACTL_OFFSET)))

/******************************************************************************************
************************************ 9 UARTIFLS *********************************************
******************************************************************************************/
#define UART2_UARTIFLS    (((UARTIFLS_TypeDef*) (UART2_BASE + UART_UARTIFLS_OFFSET )))
#define UART2_UARTIFLS_R    (*((volatile uint32_t *) (UART2_BASE +UART_UARTIFLS_OFFSET)))

/******************************************************************************************
************************************ 10 UARTIM *********************************************
******************************************************************************************/
#define UART2_UARTIM    (((UARTIM_TypeDef*) (UART2_BASE + UART_UARTIM_OFFSET )))
#define UART2_UARTIM_R    (*((volatile uint32_t *) (UART2_BASE +UART_UARTIM_OFFSET)))

/******************************************************************************************
************************************ 11 UARTRIS *********************************************
******************************************************************************************/
#define UART2_UARTRIS    (((UARTRIS_TypeDef*) (UART2_BASE + UART_UARTRIS_OFFSET )))
#define UART2_UARTRIS_R    (*((volatile const uint32_t *) (UART2_BASE +UART_UARTRIS_OFFSET)))

/******************************************************************************************
************************************ 12 UARTMIS *********************************************
******************************************************************************************/
#define UART2_UARTMIS    (((UARTMIS_TypeDef*) (UART2_BASE + UART_UARTMIS_OFFSET )))
#define UART2_UARTMIS_R    (*((volatile const uint32_t *) (UART2_BASE +UART_UARTMIS_OFFSET)))

/******************************************************************************************
************************************ 13 UARTICR *********************************************
******************************************************************************************/
#define UART2_UARTICR    (((UARTICR_TypeDef*) (UART2_BASE + UART_UARTICR_OFFSET )))
#define UART2_UARTICR_R    (*((volatile uint32_t *) (UART2_BASE +UART_UARTICR_OFFSET)))

/******************************************************************************************
************************************ 14 UARTDMACTL *********************************************
******************************************************************************************/
#define UART2_UARTDMACTL    (((UARTDMACTL_TypeDef*) (UART2_BASE + UART_UARTDMACTL_OFFSET )))
#define UART2_UARTDMACTL_R    (*((volatile uint32_t *) (UART2_BASE +UART_UARTDMACTL_OFFSET)))

/******************************************************************************************
************************************ 15 UART9BITADDR *********************************************
******************************************************************************************/
#define UART2_UART9BITADDR    (((UART9BITADDR8_TypeDef*) (UART2_BASE + UART_UART9BITADDR_OFFSET )))
#define UART2_UART9BITADDR_R    (*((volatile uint32_t *) (UART2_BASE +UART_UART9BITADDR_OFFSET)))

/******************************************************************************************
************************************ 16 UART9BITAMASK *********************************************
******************************************************************************************/
#define UART2_UART9BITAMASK    (((UART9BITAMASK8_TypeDef*) (UART2_BASE + UART_UART9BITAMASK_OFFSET )))
#define UART2_UART9BITAMASK_R    (*((volatile uint32_t *) (UART2_BASE +UART_UART9BITAMASK_OFFSET)))

/******************************************************************************************
************************************ 17 UARTPP *********************************************
******************************************************************************************/
#define UART2_UARTPP    (((UARTPP_TypeDef*) (UART2_BASE + UART_UARTPP_OFFSET )))
#define UART2_UARTPP_R    (*((volatile const uint32_t *) (UART2_BASE +UART_UARTPP_OFFSET)))

/******************************************************************************************
************************************ 18 UARTCC *********************************************
******************************************************************************************/
#define UART2_UARTCC    (((UARTCC_TypeDef*) (UART2_BASE + UART_UARTCC_OFFSET )))
#define UART2_UARTCC_R    (*((volatile uint32_t *) (UART2_BASE +UART_UARTCC_OFFSET)))


/******************************************************************************************
 ************************************ 19 UARTPeriphID4 *********************************************
 ******************************************************************************************/
/* UART2 PID4*/
#define UART2_UARTPeriphID4    (((UARTPeriphID4_TypeDef*)     (UART2_BASE+UART_UARTPeriphID4_OFFSET)))
#define UART2_UARTPeriphID4_R    (*((volatile const uint32_t *)  (UART2_BASE+UART_UARTPeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 20 UARTPeriphID5 *********************************************
 ******************************************************************************************/
/* UART2 PID5*/
#define UART2_UARTPeriphID5    (((UARTPeriphID5_TypeDef*)     (UART2_BASE+UART_UARTPeriphID5_OFFSET)))
#define UART2_UARTPeriphID5_R    (*((volatile const uint32_t *)  (UART2_BASE+UART_UARTPeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 21 UARTPeriphID6 *********************************************
 ******************************************************************************************/
/* UART2 PID6*/
#define UART2_UARTPeriphID6    (((UARTPeriphID6_TypeDef*)     (UART2_BASE+UART_UARTPeriphID6_OFFSET)))
#define UART2_UARTPeriphID6_R    (*((volatile const uint32_t *)  (UART2_BASE+UART_UARTPeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 22 UARTPeriphID7 *********************************************
 ******************************************************************************************/
/* UART2 PID7*/
#define UART2_UARTPeriphID7    (((UARTPeriphID7_TypeDef*)     (UART2_BASE+UART_UARTPeriphID7_OFFSET)))
#define UART2_UARTPeriphID7_R    (*((volatile const uint32_t *)  (UART2_BASE+UART_UARTPeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 23 UARTPeriphID0 *********************************************
 ******************************************************************************************/
/* UART2 PID0*/
#define UART2_UARTPeriphID0    (((UARTPeriphID0_TypeDef*)     (UART2_BASE+UART_UARTPeriphID0_OFFSET)))
#define UART2_UARTPeriphID0_R    (*((volatile const uint32_t *)  (UART2_BASE+UART_UARTPeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 24 UARTPeriphID1 *********************************************
 ******************************************************************************************/
/* UART2 PID1*/
#define UART2_UARTPeriphID1    (((UARTPeriphID1_TypeDef*)     (UART2_BASE+UART_UARTPeriphID1_OFFSET)))
#define UART2_UARTPeriphID1_R    (*((volatile const uint32_t *)  (UART2_BASE+UART_UARTPeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 25 UARTPeriphID2 *********************************************
 ******************************************************************************************/
/* UART2 PID2*/
#define UART2_UARTPeriphID2    (((UARTPeriphID2_TypeDef*)     (UART2_BASE+UART_UARTPeriphID2_OFFSET)))
#define UART2_UARTPeriphID2_R    (*((volatile const uint32_t *)  (UART2_BASE+UART_UARTPeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 26 UARTPeriphID3 *********************************************
 ******************************************************************************************/
/* UART2 PID3*/
#define UART2_UARTPeriphID3    (((UARTPeriphID3_TypeDef*)     (UART2_BASE+UART_UARTPeriphID3_OFFSET)))
#define UART2_UARTPeriphID3_R    (*((volatile const uint32_t *)  (UART2_BASE+UART_UARTPeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 27 UARTCellID0 *********************************************
 ******************************************************************************************/
/* UART2 CID0*/
#define UART2_UARTCellID0    (((UARTCellID0_TypeDef*)     (UART2_BASE+UART_UARTCellID0_OFFSET)))
#define UART2_UARTCellID0_R    (*((volatile const uint32_t *)  (UART2_BASE+UART_UARTCellID0_OFFSET)))

/******************************************************************************************
 ************************************ 28 UARTCellID1 *********************************************
 ******************************************************************************************/
/* UART2 CID1*/
#define UART2_UARTCellID1    (((UARTCellID1_TypeDef*)     (UART2_BASE+UART_UARTCellID1_OFFSET)))
#define UART2_UARTCellID1_R    (*((volatile const uint32_t *)  (UART2_BASE+UART_UARTCellID1_OFFSET)))

/******************************************************************************************
 ************************************ 29 UARTCellID2 *********************************************
 ******************************************************************************************/
/* UART2 CID2*/
#define UART2_UARTCellID2    (((UARTCellID2_TypeDef*)     (UART2_BASE+UART_UARTCellID2_OFFSET)))
#define UART2_UARTCellID2_R    (*((volatile const uint32_t *)  (UART2_BASE+UART_UARTCellID2_OFFSET)))

/******************************************************************************************
 ************************************ 30 UARTCellID3 *********************************************
 ******************************************************************************************/
/* UART2 CID3*/
#define UART2_UARTCellID3    (((UARTCellID3_TypeDef*)     (UART2_BASE+UART_UARTCellID3_OFFSET)))
#define UART2_UARTCellID3_R    (*((volatile const uint32_t *)  (UART2_BASE+UART_UARTCellID3_OFFSET)))






#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_UART_REGISTERPERIPHERAL_MODULE2_H_ */
