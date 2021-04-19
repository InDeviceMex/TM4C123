/**
 *
 * @file CAN_RegisterAddress.h
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
 * @verbatim Apr 13, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 13, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_XHEADER_CAN_REGISTERADDRESS_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_XHEADER_CAN_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define CAN_INTERFACE_REGISTER_NUM    ((uint32_t) 24UL)
#define CAN_MESSAGE_REGISTER_NUM    ((uint32_t) 4UL)

#define CAN_BASE    ((uint32_t) 0x40040000UL)
#define CAN0_BASE    ((uint32_t) 0x40040000UL)
#define CAN1_BASE    ((uint32_t) 0x40041000UL)

#define CAN_OFFSET    ((uint32_t) 0x00040000UL)
#define CAN0_OFFSET    ((uint32_t) 0x00040000UL)
#define CAN1_OFFSET    ((uint32_t) 0x00041000UL)

#define CAN_BITBANDING_BASE    ((uint32_t) 0x42000000UL)

#define CAN_CANCTL_OFFSET    ((uint32_t) 0x0000UL)
#define CAN_CANSTS_OFFSET    ((uint32_t) 0x0004UL)
#define CAN_CANERR_OFFSET    ((uint32_t) 0x0008UL)
#define CAN_CANBIT_OFFSET    ((uint32_t) 0x000CUL)
#define CAN_CANINT_OFFSET    ((uint32_t) 0x0010UL)
#define CAN_CANTST_OFFSET    ((uint32_t) 0x0014UL)
#define CAN_CANBRPE_OFFSET    ((uint32_t) 0x0018UL)

#define CAN_CANIFnCRQ_OFFSET    ((uint32_t) 0x0000UL)
#define CAN_CANIFnCMSK_OFFSET    ((uint32_t) 0x0004UL)
#define CAN_CANIFnMSK1_OFFSET    ((uint32_t) 0x0008UL)
#define CAN_CANIFnMSK2_OFFSET    ((uint32_t) 0x000CUL)
#define CAN_CANIFnARB1_OFFSET    ((uint32_t) 0x0010UL)
#define CAN_CANIFnARB2_OFFSET    ((uint32_t) 0x0014UL)
#define CAN_CANIFnMCTL_OFFSET    ((uint32_t) 0x0018UL)
#define CAN_CANIFnDA1_OFFSET    ((uint32_t) 0x001CUL)
#define CAN_CANIFnDA2_OFFSET    ((uint32_t) 0x0020UL)
#define CAN_CANIFnDB1_OFFSET    ((uint32_t) 0x0024UL)
#define CAN_CANIFnDB2_OFFSET    ((uint32_t) 0x0028UL)

#define CAN_INTERFACE_REGISTER_INITIAL    ((uint32_t) 0x0020UL)
#define CAN_INTERFACE_REGISTER_OFFSET    ((uint32_t) 0x0060UL)


#define CAN_CANIF1CRQ_OFFSET    ((uint32_t) 0x0020UL)
#define CAN_CANIF1CMSK_OFFSET    ((uint32_t) 0x0024UL)
#define CAN_CANIF1MSK1_OFFSET    ((uint32_t) 0x0028UL)
#define CAN_CANIF1MSK2_OFFSET    ((uint32_t) 0x002CUL)
#define CAN_CANIF1ARB1_OFFSET    ((uint32_t) 0x0030UL)
#define CAN_CANIF1ARB2_OFFSET    ((uint32_t) 0x0034UL)
#define CAN_CANIF1MCTL_OFFSET    ((uint32_t) 0x0038UL)
#define CAN_CANIF1DA1_OFFSET    ((uint32_t) 0x003CUL)
#define CAN_CANIF1DA2_OFFSET    ((uint32_t) 0x0040UL)
#define CAN_CANIF1DB1_OFFSET    ((uint32_t) 0x0044UL)
#define CAN_CANIF1DB2_OFFSET    ((uint32_t) 0x0048UL)

#define CAN_CANIF2CRQ_OFFSET    ((uint32_t) 0x0080UL)
#define CAN_CANIF2CMSK_OFFSET    ((uint32_t) 0x0084UL)
#define CAN_CANIF2MSK1_OFFSET    ((uint32_t) 0x0088UL)
#define CAN_CANIF2MSK2_OFFSET    ((uint32_t) 0x008CUL)
#define CAN_CANIF2ARB1_OFFSET    ((uint32_t) 0x0090UL)
#define CAN_CANIF2ARB2_OFFSET    ((uint32_t) 0x0094UL)
#define CAN_CANIF2MCTL_OFFSET    ((uint32_t) 0x0098UL)
#define CAN_CANIF2DA1_OFFSET    ((uint32_t) 0x009CUL)
#define CAN_CANIF2DA2_OFFSET    ((uint32_t) 0x00A0UL)
#define CAN_CANIF2DB1_OFFSET    ((uint32_t) 0x00A4UL)
#define CAN_CANIF2DB2_OFFSET    ((uint32_t) 0x00A8UL)

#define CAN_MESSAGE_REGISTER_INITIAL    ((uint32_t) 0x0100UL)
#define CAN_MESSAGE_REGISTER_OFFSET    ((uint32_t) 0x0020UL)

#define CAN_CANTXRQ_OFFSET    ((uint32_t) 0x0100UL)
#define CAN_CANTXRQ1_OFFSET    ((uint32_t) 0x0100UL)
#define CAN_CANTXRQ_LOW_OFFSET    ((uint32_t) 0x0100UL)
#define CAN_CANTXRQ2_OFFSET    ((uint32_t) 0x0104UL)
#define CAN_CANTXRQ_HIGH_OFFSET    ((uint32_t) 0x0104UL)

#define CAN_CANNWDA_OFFSET    ((uint32_t) 0x0120UL)
#define CAN_CANNWDA1_OFFSET    ((uint32_t) 0x0120UL)
#define CAN_CANNWDA_LOW_OFFSET    ((uint32_t) 0x0120UL)
#define CAN_CANNWDA2_OFFSET    ((uint32_t) 0x0124UL)
#define CAN_CANNWDA_HIGH_OFFSET    ((uint32_t) 0x0124UL)

#define CAN_CANMSGINT_OFFSET    ((uint32_t) 0x0140UL)
#define CAN_CANMSG1INT_OFFSET    ((uint32_t) 0x0140UL)
#define CAN_CANMSGINT_LOW_OFFSET    ((uint32_t) 0x0140UL)
#define CAN_CANMSG2INT_OFFSET    ((uint32_t) 0x0144UL)
#define CAN_CANMSGINT_HIGH_OFFSET    ((uint32_t) 0x0144UL)

#define CAN_CANMSGVAL_OFFSET    ((uint32_t) 0x0160UL)
#define CAN_CANMSG1VAL_OFFSET    ((uint32_t) 0x0160UL)
#define CAN_CANMSGVAL_LOW_OFFSET    ((uint32_t) 0x0160UL)
#define CAN_CANMSG2VAL_OFFSET    ((uint32_t) 0x0164UL)
#define CAN_CANMSGVAL_HIGH_OFFSET    ((uint32_t) 0x0164UL)


#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_XHEADER_CAN_REGISTERADDRESS_H_ */
