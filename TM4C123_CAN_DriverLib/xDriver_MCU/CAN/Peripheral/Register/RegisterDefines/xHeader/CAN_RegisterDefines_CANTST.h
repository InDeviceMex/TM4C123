/**
 *
 * @file CAN_RegisterDefines_CANTST.h
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
 * @verbatim Apr 14, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 14, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_CANTST_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_CANTST_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 6 CANTST *********************************************
******************************************************************************************/
/*--------*/
#define CAN_CANTST_R_BASIC_MASK    ((uint32_t) 0x00000004UL)
#define CAN_CANTST_R_BASIC_BIT    ((uint32_t) 2UL)
#define CAN_CANTST_R_BASIC_DIS    ((uint32_t) 0x00000000UL)
#define CAN_CANTST_R_BASIC_ENA    ((uint32_t) 0x00000004UL)

#define CAN_CANTST_BASIC_MASK    ((uint32_t) 0x00000001UL)
#define CAN_CANTST_BASIC_DIS    ((uint32_t) 0x00000000UL)
#define CAN_CANTST_BASIC_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_CANTST_R_SILENT_MASK    ((uint32_t) 0x00000008UL)
#define CAN_CANTST_R_SILENT_BIT    ((uint32_t) 3UL)
#define CAN_CANTST_R_SILENT_DIS    ((uint32_t) 0x00000000UL)
#define CAN_CANTST_R_SILENT_ENA    ((uint32_t) 0x00000008UL)

#define CAN_CANTST_SILENT_MASK    ((uint32_t) 0x00000001UL)
#define CAN_CANTST_SILENT_DIS    ((uint32_t) 0x00000000UL)
#define CAN_CANTST_SILENT_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_CANTST_R_LBACK_MASK    ((uint32_t) 0x00000010UL)
#define CAN_CANTST_R_LBACK_BIT    ((uint32_t) 4UL)
#define CAN_CANTST_R_LBACK_DIS    ((uint32_t) 0x00000000UL)
#define CAN_CANTST_R_LBACK_ENA    ((uint32_t) 0x00000010UL)

#define CAN_CANTST_LBACK_MASK    ((uint32_t) 0x00000001UL)
#define CAN_CANTST_LBACK_DIS    ((uint32_t) 0x00000000UL)
#define CAN_CANTST_LBACK_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_CANTST_R_TX_MASK    ((uint32_t) 0x00000060UL)
#define CAN_CANTST_R_TX_BIT    ((uint32_t) 5UL)
#define CAN_CANTST_R_TX_MODULE    ((uint32_t) 0x00000000UL)
#define CAN_CANTST_R_TX_SAMPLE    ((uint32_t) 0x00000020UL)
#define CAN_CANTST_R_TX_LOW    ((uint32_t) 0x00000040UL)
#define CAN_CANTST_R_TX_HIGH    ((uint32_t) 0x00000060UL)

#define CAN_CANTST_TX_MASK    ((uint32_t) 0x00000003UL)
#define CAN_CANTST_TX_MODULE    ((uint32_t) 0x00000000UL)
#define CAN_CANTST_TX_SAMPLE    ((uint32_t) 0x00000001UL)
#define CAN_CANTST_TX_LOW    ((uint32_t) 0x00000002UL)
#define CAN_CANTST_TX_HIGH    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define CAN_CANTST_R_RX_MASK    ((uint32_t) 0x00000080UL)
#define CAN_CANTST_R_RX_BIT    ((uint32_t) 7UL)
#define CAN_CANTST_R_RX_LOW    ((uint32_t) 0x00000000UL)
#define CAN_CANTST_R_RX_HIGH    ((uint32_t) 0x00000080UL)

#define CAN_CANTST_RX_MASK    ((uint32_t) 0x00000001UL)
#define CAN_CANTST_RX_LOW    ((uint32_t) 0x00000000UL)
#define CAN_CANTST_RX_HIGH    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_CANTST_H_ */
