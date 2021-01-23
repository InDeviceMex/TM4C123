/**
 *
 * @file UART_RegisterPeripheral_Module5.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_UART_REGISTERPERIPHERAL_MODULE5_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_UART_REGISTERPERIPHERAL_MODULE5_H_

#include <xDriver_MCU/UART/Peripheral/Register/xHeader/UART_RegisterAddress.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterDefines/UART_RegisterDefines.h>
#include <xDriver_MCU/UART/Peripheral/Struct/xHeader/UART_StructPeripheral.h>

/******************************************************************************************
************************************ UART5 *********************************************
******************************************************************************************/

#define UART5              (((UART_TypeDef*)(UART5_BASE)))

/******************************************************************************************
************************************ 1 UARTDR *********************************************
******************************************************************************************/
#define UART5_UARTDR            (((UARTDR_TypeDef*)(UART5_BASE + UART_UARTDR_OFFSET )))
#define UART5_UARTDR_R          (*((volatile uint32_t*)(UART5_BASE +UART_UARTDR_OFFSET)))

/******************************************************************************************
************************************ 2 UARTRSR *********************************************
************************************ 2 UARTECR *********************************************
******************************************************************************************/
#define UART5_UARTRSR            (((UARTRSR_TypeDef*)(UART5_BASE + UART_UARTRSR_OFFSET )))
#define UART5_UARTRSR_R          (*((volatile const uint32_t*)(UART5_BASE +UART_UARTRSR_OFFSET)))
#define UART5_UARTECR            (((UARTECR_TypeDef*)(UART5_BASE + UART_UARTECR_OFFSET )))
#define UART5_UARTECR_R          (*((volatile uint32_t*)(UART5_BASE +UART_UARTECR_OFFSET)))

/******************************************************************************************
************************************ 3 UARTFR *********************************************
******************************************************************************************/
#define UART5_UARTFR            (((UARTFR_TypeDef*)(UART5_BASE + UART_UARTFR_OFFSET )))
#define UART5_UARTFR_R          (*((volatile const uint32_t*)(UART5_BASE +UART_UARTFR_OFFSET)))

/******************************************************************************************
************************************ 4 UARTILPR *********************************************
******************************************************************************************/
#define UART5_UARTILPR            (((UARTILPR_TypeDef*)(UART5_BASE + UART_UARTILPR_OFFSET )))
#define UART5_UARTILPR_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTILPR_OFFSET)))

/******************************************************************************************
************************************ 5 UARTIBRD *********************************************
******************************************************************************************/
#define UART5_UARTIBRD            (((UARTIBRD_TypeDef*)(UART5_BASE + UART_UARTIBRD_OFFSET )))
#define UART5_UARTIBRD_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTIBRD_OFFSET)))

/******************************************************************************************
************************************ 6 UARTFBRD *********************************************
******************************************************************************************/
#define UART5_UARTFBRD            (((UARTFBRD_TypeDef*)(UART5_BASE + UART_UARTFBRD_OFFSET )))
#define UART5_UARTFBRD_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTFBRD_OFFSET)))

/******************************************************************************************
************************************ 7 UARTLCRH *********************************************
******************************************************************************************/
#define UART5_UARTLCRH            (((UARTLCRH_TypeDef*)(UART5_BASE + UART_UARTLCRH_OFFSET )))
#define UART5_UARTLCRH_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTLCRH_OFFSET)))

/******************************************************************************************
************************************ 8 UARTDMACTL *********************************************
******************************************************************************************/
#define UART5_UARTDMACTL            (((UARTDMACTL_TypeDef*)(UART5_BASE + UART_UARTDMACTL_OFFSET )))
#define UART5_UARTDMACTL_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTDMACTL_OFFSET)))

/******************************************************************************************
************************************ 9 UARTIFLS *********************************************
******************************************************************************************/
#define UART5_UARTIFLS            (((UARTIFLS_TypeDef*)(UART5_BASE + UART_UARTIFLS_OFFSET )))
#define UART5_UARTIFLS_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTIFLS_OFFSET)))

/******************************************************************************************
************************************ 10 UARTIM *********************************************
******************************************************************************************/
#define UART5_UARTIM            (((UARTIM_TypeDef*)(UART5_BASE + UART_UARTIM_OFFSET )))
#define UART5_UARTIM_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTIM_OFFSET)))

/******************************************************************************************
************************************ 11 UARTRIS *********************************************
******************************************************************************************/
#define UART5_UARTRIS            (((UARTRIS_TypeDef*)(UART5_BASE + UART_UARTRIS_OFFSET )))
#define UART5_UARTRIS_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTRIS_OFFSET)))

/******************************************************************************************
************************************ 12 UARTMIS *********************************************
******************************************************************************************/
#define UART5_UARTMIS            (((UARTMIS_TypeDef*)(UART5_BASE + UART_UARTMIS_OFFSET )))
#define UART5_UARTMIS_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTMIS_OFFSET)))

/******************************************************************************************
************************************ 13 UARTICR *********************************************
******************************************************************************************/
#define UART5_UARTICR            (((UARTICR_TypeDef*)(UART5_BASE + UART_UARTICR_OFFSET )))
#define UART5_UARTICR_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTICR_OFFSET)))

/******************************************************************************************
************************************ 14 UARTDMACTL *********************************************
******************************************************************************************/
#define UART5_UARTDMACTL            (((UARTDMACTL_TypeDef*)(UART5_BASE + UART_UARTDMACTL_OFFSET )))
#define UART5_UARTDMACTL_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTDMACTL_OFFSET)))

/******************************************************************************************
************************************ 15 UART9BITADDR *********************************************
******************************************************************************************/
#define UART5_UART9BITADDR            (((UART9BITADDR8_TypeDef*)(UART5_BASE + UART_UART9BITADDR_OFFSET )))
#define UART5_UART9BITADDR_R          (*((volatile uint32_t *)(UART5_BASE +UART_UART9BITADDR_OFFSET)))

/******************************************************************************************
************************************ 16 UART9BITAMASK *********************************************
******************************************************************************************/
#define UART5_UART9BITAMASK            (((UART9BITAMASK8_TypeDef*)(UART5_BASE + UART_UART9BITAMASK_OFFSET )))
#define UART5_UART9BITAMASK_R          (*((volatile uint32_t *)(UART5_BASE +UART_UART9BITAMASK_OFFSET)))

/******************************************************************************************
************************************ 17 UARTPP *********************************************
******************************************************************************************/
#define UART5_UARTPP            (((UARTPP_TypeDef*)(UART5_BASE + UART_UARTPP_OFFSET )))
#define UART5_UARTPP_R          (*((volatile const uint32_t *)(UART5_BASE +UART_UARTPP_OFFSET)))

/******************************************************************************************
************************************ 18 UARTCC *********************************************
******************************************************************************************/
#define UART5_UARTCC            (((UARTCC_TypeDef*)(UART5_BASE + UART_UARTCC_OFFSET )))
#define UART5_UARTCC_R          (*((volatile uint32_t *)(UART5_BASE +UART_UARTCC_OFFSET)))


/******************************************************************************************
 ************************************ 19 UARTPeriphID4 *********************************************
 ******************************************************************************************/
/* UART5 PID4*/
#define UART5_UARTPeriphID4                  (((UARTPeriphID4_TypeDef*)     (UART5_BASE+UART_UARTPeriphID4_OFFSET)))
#define UART5_UARTPeriphID4_R                (*((volatile const uint32_t *)  (UART5_BASE+UART_UARTPeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 20 UARTPeriphID5 *********************************************
 ******************************************************************************************/
/* UART5 PID5*/
#define UART5_UARTPeriphID5                  (((UARTPeriphID5_TypeDef*)     (UART5_BASE+UART_UARTPeriphID5_OFFSET)))
#define UART5_UARTPeriphID5_R                (*((volatile const uint32_t *)  (UART5_BASE+UART_UARTPeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 21 UARTPeriphID6 *********************************************
 ******************************************************************************************/
/* UART5 PID6*/
#define UART5_UARTPeriphID6                  (((UARTPeriphID6_TypeDef*)     (UART5_BASE+UART_UARTPeriphID6_OFFSET)))
#define UART5_UARTPeriphID6_R                (*((volatile const uint32_t *)  (UART5_BASE+UART_UARTPeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 22 UARTPeriphID7 *********************************************
 ******************************************************************************************/
/* UART5 PID7*/
#define UART5_UARTPeriphID7                  (((UARTPeriphID7_TypeDef*)     (UART5_BASE+UART_UARTPeriphID7_OFFSET)))
#define UART5_UARTPeriphID7_R                (*((volatile const uint32_t *)  (UART5_BASE+UART_UARTPeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 23 UARTPeriphID0 *********************************************
 ******************************************************************************************/
/* UART5 PID0*/
#define UART5_UARTPeriphID0                  (((UARTPeriphID0_TypeDef*)     (UART5_BASE+UART_UARTPeriphID0_OFFSET)))
#define UART5_UARTPeriphID0_R                (*((volatile const uint32_t *)  (UART5_BASE+UART_UARTPeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 24 UARTPeriphID1 *********************************************
 ******************************************************************************************/
/* UART5 PID1*/
#define UART5_UARTPeriphID1                  (((UARTPeriphID1_TypeDef*)     (UART5_BASE+UART_UARTPeriphID1_OFFSET)))
#define UART5_UARTPeriphID1_R                (*((volatile const uint32_t *)  (UART5_BASE+UART_UARTPeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 25 UARTPeriphID2 *********************************************
 ******************************************************************************************/
/* UART5 PID2*/
#define UART5_UARTPeriphID2                  (((UARTPeriphID2_TypeDef*)     (UART5_BASE+UART_UARTPeriphID2_OFFSET)))
#define UART5_UARTPeriphID2_R                (*((volatile const uint32_t *)  (UART5_BASE+UART_UARTPeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 26 UARTPeriphID3 *********************************************
 ******************************************************************************************/
/* UART5 PID3*/
#define UART5_UARTPeriphID3                  (((UARTPeriphID3_TypeDef*)     (UART5_BASE+UART_UARTPeriphID3_OFFSET)))
#define UART5_UARTPeriphID3_R                (*((volatile const uint32_t *)  (UART5_BASE+UART_UARTPeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 27 UARTCellID0 *********************************************
 ******************************************************************************************/
/* UART5 CID0*/
#define UART5_UARTCellID0                  (((UARTCellID0_TypeDef*)     (UART5_BASE+UART_UARTCellID0_OFFSET)))
#define UART5_UARTCellID0_R                (*((volatile const uint32_t *)  (UART5_BASE+UART_UARTCellID0_OFFSET)))

/******************************************************************************************
 ************************************ 28 UARTCellID1 *********************************************
 ******************************************************************************************/
/* UART5 CID1*/
#define UART5_UARTCellID1                  (((UARTCellID1_TypeDef*)     (UART5_BASE+UART_UARTCellID1_OFFSET)))
#define UART5_UARTCellID1_R                (*((volatile const uint32_t *)  (UART5_BASE+UART_UARTCellID1_OFFSET)))

/******************************************************************************************
 ************************************ 29 UARTCellID2 *********************************************
 ******************************************************************************************/
/* UART5 CID2*/
#define UART5_UARTCellID2                  (((UARTCellID2_TypeDef*)     (UART5_BASE+UART_UARTCellID2_OFFSET)))
#define UART5_UARTCellID2_R                (*((volatile const uint32_t *)  (UART5_BASE+UART_UARTCellID2_OFFSET)))

/******************************************************************************************
 ************************************ 30 UARTCellID3 *********************************************
 ******************************************************************************************/
/* UART5 CID3*/
#define UART5_UARTCellID3                  (((UARTCellID3_TypeDef*)     (UART5_BASE+UART_UARTCellID3_OFFSET)))
#define UART5_UARTCellID3_R                (*((volatile const uint32_t *)  (UART5_BASE+UART_UARTCellID3_OFFSET)))






#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_UART_REGISTERPERIPHERAL_MODULE5_H_ */
