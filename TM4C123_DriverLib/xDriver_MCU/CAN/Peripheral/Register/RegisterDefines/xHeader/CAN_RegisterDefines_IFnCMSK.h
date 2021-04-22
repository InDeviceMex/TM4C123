/**
 *
 * @file CAN_RegisterDefines_IFnCMSK.h
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
 * @verbatim Apr 15, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 15, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_IFNCMSK_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_IFNCMSK_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 10-11 IFnCMSK *********************************************
******************************************************************************************/
/*--------*/
#define CAN_IFnCMSK_R_DATAB_MASK    ((uint32_t) 0x00000001UL)
#define CAN_IFnCMSK_R_DATAB_BIT    ((uint32_t) 0UL)
#define CAN_IFnCMSK_R_DATAB_UNCHANGED    ((uint32_t) 0x00000000UL)
#define CAN_IFnCMSK_R_DATAB_TRANSFER    ((uint32_t) 0x00000001UL)

#define CAN_IFnCMSK_DATAB_MASK    ((uint32_t) 0x00000001UL)
#define CAN_IFnCMSK_DATAB_UNCHANGED    ((uint32_t) 0x00000000UL)
#define CAN_IFnCMSK_DATAB_TRANSFER    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_IFnCMSK_R_DATAA_MASK    ((uint32_t) 0x00000002UL)
#define CAN_IFnCMSK_R_DATAA_BIT    ((uint32_t) 1UL)
#define CAN_IFnCMSK_R_DATAA_UNCHANGED    ((uint32_t) 0x00000000UL)
#define CAN_IFnCMSK_R_DATAA_TRANSFER    ((uint32_t) 0x00000002UL)

#define CAN_IFnCMSK_DATAA_MASK    ((uint32_t) 0x00000001UL)
#define CAN_IFnCMSK_DATAA_UNCHANGED    ((uint32_t) 0x00000000UL)
#define CAN_IFnCMSK_DATAA_TRANSFER    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_IFnCMSK_R_NEWDAT_TXRQST_MASK    ((uint32_t) 0x00000004UL)
#define CAN_IFnCMSK_R_NEWDAT_TXRQST_BIT    ((uint32_t) 2UL)
#define CAN_IFnCMSK_R_NEWDAT_TXRQST_NODATA    ((uint32_t) 0x00000000UL)
#define CAN_IFnCMSK_R_NEWDAT_TXRQST_NOREQ    ((uint32_t) 0x00000000UL)
#define CAN_IFnCMSK_R_NEWDAT_TXRQST_DATA    ((uint32_t) 0x00000004UL)
#define CAN_IFnCMSK_R_NEWDAT_TXRQST_REQ    ((uint32_t) 0x00000004UL)

#define CAN_IFnCMSK_NEWDAT_TXRQST_MASK    ((uint32_t) 0x00000001UL)
#define CAN_IFnCMSK_NEWDAT_TXRQST_NODATA    ((uint32_t) 0x00000000UL)
#define CAN_IFnCMSK_NEWDAT_TXRQST_NOREQ    ((uint32_t) 0x00000000UL)
#define CAN_IFnCMSK_NEWDAT_TXRQST_DATA    ((uint32_t) 0x00000001UL)
#define CAN_IFnCMSK_NEWDAT_TXRQST_REQ    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_IFnCMSK_R_CLRINTPND_MASK    ((uint32_t) 0x00000008UL)
#define CAN_IFnCMSK_R_CLRINTPND_BIT    ((uint32_t) 3UL)
#define CAN_IFnCMSK_R_CLRINTPND_NODATA    ((uint32_t) 0x00000000UL)
#define CAN_IFnCMSK_R_CLRINTPND_UNCHANGED    ((uint32_t) 0x00000000UL)
#define CAN_IFnCMSK_R_CLRINTPND_DATA    ((uint32_t) 0x00000008UL)
#define CAN_IFnCMSK_R_CLRINTPND_CLEARED    ((uint32_t) 0x00000008UL)

#define CAN_IFnCMSK_CLRINTPND_MASK    ((uint32_t) 0x00000001UL)
#define CAN_IFnCMSK_CLRINTPND_NODATA    ((uint32_t) 0x00000000UL)
#define CAN_IFnCMSK_CLRINTPND_UNCHANGED    ((uint32_t) 0x00000000UL)
#define CAN_IFnCMSK_CLRINTPND_DATA    ((uint32_t) 0x00000001UL)
#define CAN_IFnCMSK_CLRINTPND_CLEARED    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_IFNCMSK_H_ */
