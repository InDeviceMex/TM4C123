/**
 *
 * @file CAN_StructPeripheral.h
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

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/CAN/Peripheral/Struct/xHeader/CAN_StructRegister.h>
#include <xDriver_MCU/CAN/Peripheral/xHeader/CAN_Enum.h>

typedef volatile struct
{
    union
    {
      volatile uint32_t CANIFnCRQ;
      CANIFnCRQ_TypeDef CANIFnCRQ_Bit;
    };
    union
    {
      volatile uint32_t CANIFnCMSK;
      CANIFnCMSK_TypeDef CANIF1CMSK_Bit;
    };
    union
    {
      volatile const uint32_t CANIFnMSK1;
      CANIFnMSK1_TypeDef CANIFnMSK1_Bit;
    };
    union
    {
      volatile const uint32_t CANIFnMSK2;
      CANIFnMSK2_TypeDef CANIFnMSK2_Bit;
    };
    union
    {
      volatile uint32_t CANIFnARB1;
      CANIFnARB1_TypeDef CANIFnARB1_Bit;
    };
    union
    {
      volatile uint32_t CANIFnARB2;
      CANIFnARB2_TypeDef CANIFnARB2_Bit;
    };
    union
    {
      volatile uint32_t CANIFnMCTL;
      CANIFnMCTL_TypeDef CANIFnMCTL_Bit;
    };
    union
    {
      volatile uint32_t CANIFnDA1;
      CANIFnDA1_TypeDef CANIFnDA1_Bit;
    };
    union
    {
      volatile uint32_t CANIFnDA2;
      CANIFnDA2_TypeDef CANIFnDA2_Bit;
    };
    union
    {
      volatile uint32_t CANIFnDB1;
      CANIFnDB1_TypeDef CANIFnDB1_Bit;
    };
    union
    {
      volatile uint32_t CANIFnDB2;
      CANIFnDB2_TypeDef CANIFnDB2_Bit;
    };
    const uint32_t reserved [13UL];
}CANINTERFACE_TypeDef;

typedef volatile struct
{

    union
    {
      volatile uint32_t CANTXRQ1;
      volatile uint32_t CANTXRQ_LOW;
      CANTXRQn_TypeDef CANTXRQ1_Bit;
      CANTXRQn_TypeDef CANTXRQ_LOW_Bit;
    };
    union
    {
      volatile uint32_t CANTXRQ2;
      volatile uint32_t CANTXRQ_HIGH;
      CANTXRQn_TypeDef CANTXRQ2_Bit;
      CANTXRQn_TypeDef CANTXRQ_HIGH_Bit;
    };
    const uint32_t reserved [6UL];
    union
    {
      volatile const uint32_t CANNWDA1;
      volatile const uint32_t CANNWDA_LOW;
      CANNWDAn_TypeDef CANNWDA1_Bit;
      CANNWDAn_TypeDef CANNWDA_LOW_Bit;
    };
    union
    {
      volatile const uint32_t CANNWDA2;
      volatile const uint32_t CANNWDA_HIGH;
      CANNWDAn_TypeDef CANNWDA2_Bit;
      CANNWDAn_TypeDef CANNWDA_HIGH_Bit;
    };
    const uint32_t reserved1 [6UL];
    union
    {
      volatile uint32_t CANMSG1INT;
      volatile uint32_t CANMSGINT_LOW;
      CANMSGnINT_TypeDef CANMSG1INT_Bit;
      CANMSGnINT_TypeDef CANMSGINT_LOW_Bit;
    };
    union
    {
      volatile uint32_t CANMSG2INT;
      volatile uint32_t CANMSGINT_HIGH;
      CANMSGnINT_TypeDef CANMSG2INT_Bit;
      CANMSGnINT_TypeDef CANMSGINT_HIGH_Bit;
    };
    const uint32_t reserved2 [6UL];
    union
    {
      volatile uint32_t CANMSG1VAL;
      volatile uint32_t CANMSGVAL_LOW;
      CANMSGnVAL_TypeDef CANMSG1VAL_Bit;
      CANMSGnVAL_TypeDef CANMSGVAL_LOW_Bit;
    };
    union
    {
      volatile uint32_t CANMSG2VAL;
      volatile uint32_t CANMSGVAL_HIGH;
      CANMSGnVAL_TypeDef CANMSG2VAL_Bit;
      CANMSGnVAL_TypeDef CANMSGVAL_HIGH_Bit;
    };
}CANMESSAGE_TypeDef;

typedef volatile struct
{
    union
    {
      volatile uint32_t CANCTL;
      CANCTL_TypeDef CANCTL_Bit;
    };
    union
    {
      volatile uint32_t CANSTS;
      CANSTS_TypeDef CANSTS_Bit;
    };
    union
    {
      volatile const uint32_t CANERR;
      CANERR_TypeDef CANERR_Bit;
    };
    union
    {
      volatile uint32_t CANBIT;
      CANBIT_TypeDef CANBIT_Bit;
    };
    union
    {
      volatile const uint32_t CANINT;
      CANINT_TypeDef CANINT_Bit;
    };
    union
    {
      volatile uint32_t CANTST;
      CANTST_TypeDef CANTST_Bit;
    };
    union
    {
      volatile uint32_t CANBRPE;
      CANBRPE_TypeDef CANBRPE_Bit;
    };
    const uint32_t reserved [1UL];

    CANINTERFACE_TypeDef CANINTERFACE[2UL];

    const uint32_t reserved1 [7UL];

    CANMESSAGE_TypeDef CANMESSAGE;

    const uint32_t reserved2 [934UL];
}CAN_TypeDef;


typedef volatile struct
{
    CAN_TypeDef MODULE [(uint32_t) CAN_enMODULE_MAX];
}CANS_TypeDef;

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTPERIPHERAL_H_ */
