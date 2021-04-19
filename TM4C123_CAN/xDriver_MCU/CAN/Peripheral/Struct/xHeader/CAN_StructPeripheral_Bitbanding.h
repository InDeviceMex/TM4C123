/**
 *
 * @file CAN_StructPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/CAN/Peripheral/Struct/xHeader/CAN_StructRegister_Bitbanding.h>
#include <xDriver_MCU/CAN/Peripheral/xHeader/CAN_Enum.h>

typedef volatile struct
{
    union
    {
      volatile uint32_t CANIFnCRQ [32UL];
      BITBANDING_CANIFnCRQ_TypeDef CANIFnCRQ_Bit;
    };
    union
    {
      volatile uint32_t CANIFnCMSK [32UL];
      BITBANDING_CANIFnCMSK_TypeDef CANIF1CMSK_Bit;
    };
    union
    {
      volatile const uint32_t CANIFnMSK1 [32UL];
      BITBANDING_CANIFnMSK1_TypeDef CANIFnMSK1_Bit;
    };
    union
    {
      volatile const uint32_t CANIFnMSK2 [32UL];
      BITBANDING_CANIFnMSK2_TypeDef CANIFnMSK2_Bit;
    };
    union
    {
      volatile uint32_t CANIFnARB1 [32UL];
      BITBANDING_CANIFnARB1_TypeDef CANIFnARB1_Bit;
    };
    union
    {
      volatile uint32_t CANIFnARB2 [32UL];
      BITBANDING_CANIFnARB2_TypeDef CANIFnARB2_Bit;
    };
    union
    {
      volatile uint32_t CANIFnMCTL [32UL];
      BITBANDING_CANIFnMCTL_TypeDef CANIFnMCTL_Bit;
    };
    union
    {
      volatile uint32_t CANIFnDA1 [32UL];
      BITBANDING_CANIFnDA1_TypeDef CANIFnDA1_Bit;
    };
    union
    {
      volatile uint32_t CANIFnDA2 [32UL];
      BITBANDING_CANIFnDA2_TypeDef CANIFnDA2_Bit;
    };
    union
    {
      volatile uint32_t CANIFnDB1 [32UL];
      BITBANDING_CANIFnDB1_TypeDef CANIFnDB1_Bit;
    };
    union
    {
      volatile uint32_t CANIFnDB2 [32UL];
      BITBANDING_CANIFnDB2_TypeDef CANIFnDB2_Bit;
    };
    const uint32_t reserved [13UL * 32UL];
}BITBANDING_CANINTERFACE_TypeDef;

typedef volatile struct
{

    union
    {
      volatile uint32_t CANTXRQ1 [32UL];
      volatile uint32_t CANTXRQ_LOW [32UL];
      BITBANDING_CANTXRQn_TypeDef CANTXRQ1_Bit;
      BITBANDING_CANTXRQn_TypeDef CANTXRQ_LOW_Bit;
    };
    union
    {
      volatile uint32_t CANTXRQ2 [32UL];
      volatile uint32_t CANTXRQ_HIGH [32UL];
      BITBANDING_CANTXRQn_TypeDef CANTXRQ2_Bit;
      BITBANDING_CANTXRQn_TypeDef CANTXRQ_HIGH_Bit;
    };
    const uint32_t reserved [6UL * 32UL];
    union
    {
      volatile const uint32_t CANNWDA1 [32UL];
      volatile const uint32_t CANNWDA_LOW [32UL];
      BITBANDING_CANNWDAn_TypeDef CANNWDA1_Bit;
      BITBANDING_CANNWDAn_TypeDef CANNWDA_LOW_Bit;
    };
    union
    {
      volatile const uint32_t CANNWDA2 [32UL];
      volatile const uint32_t CANNWDA_HIGH [32UL];
      BITBANDING_CANNWDAn_TypeDef CANNWDA2_Bit;
      BITBANDING_CANNWDAn_TypeDef CANNWDA_HIGH_Bit;
    };
    const uint32_t reserved1 [6UL * 32UL];
    union
    {
      volatile uint32_t CANMSG1INT [32UL];
      volatile uint32_t CANMSGINT_LOW [32UL];
      BITBANDING_CANMSGnINT_TypeDef CANMSG1INT_Bit;
      BITBANDING_CANMSGnINT_TypeDef CANMSGINT_LOW_Bit;
    };
    union
    {
      volatile uint32_t CANMSG2INT [32UL];
      volatile uint32_t CANMSGINT_HIGH [32UL];
      BITBANDING_CANMSGnINT_TypeDef CANMSG2INT_Bit;
      BITBANDING_CANMSGnINT_TypeDef CANMSGINT_HIGH_Bit;
    };
    const uint32_t reserved2 [6UL * 32UL];
    union
    {
      volatile uint32_t CANMSG1VAL [32UL];
      volatile uint32_t CANMSGVAL_LOW [32UL];
      BITBANDING_CANMSGnVAL_TypeDef CANMSG1VAL_Bit;
      BITBANDING_CANMSGnVAL_TypeDef CANMSGVAL_LOW_Bit;
    };
    union
    {
      volatile uint32_t CANMSG2VAL [32UL];
      volatile uint32_t CANMSGVAL_HIGH [32UL];
      BITBANDING_CANMSGnVAL_TypeDef CANMSG2VAL_Bit;
      BITBANDING_CANMSGnVAL_TypeDef CANMSGVAL_HIGH_Bit;
    };
}BITBANDING_CANMESSAGE_TypeDef;

typedef volatile struct
{
    union
    {
      volatile uint32_t CANCTL [32UL];
      BITBANDING_CANCTL_TypeDef CANCTL_Bit;
    };
    union
    {
      volatile uint32_t CANSTS [32UL];
      BITBANDING_CANSTS_TypeDef CANSTS_Bit;
    };
    union
    {
      volatile const uint32_t CANERR [32UL];
      BITBANDING_CANERR_TypeDef CANERR_Bit;
    };
    union
    {
      volatile uint32_t CANBIT [32UL];
      BITBANDING_CANBIT_TypeDef CANBIT_Bit;
    };
    union
    {
      volatile const uint32_t CANINT [32UL];
      BITBANDING_CANINT_TypeDef CANINT_Bit;
    };
    union
    {
      volatile uint32_t CANTST [32UL];
      BITBANDING_CANTST_TypeDef CANTST_Bit;
    };
    union
    {
      volatile uint32_t CANBRPE [32UL];
      BITBANDING_CANBRPE_TypeDef CANBRPE_Bit;
    };
    const uint32_t reserved [1UL * 32UL];

    BITBANDING_CANINTERFACE_TypeDef CANINTERFACE[2UL];

    const uint32_t reserved1 [7UL * 32UL];

    BITBANDING_CANMESSAGE_TypeDef CANMESSAGE [32UL];

    const uint32_t reserved1 [934UL * 32UL];
}CAN_BITBANDING_TypeDef;


typedef volatile struct
{
    CAN_BITBANDING_TypeDef MODULE [(uint32_t) CAN_enMODULE_MAX];
}CANS_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTPERIPHERAL_BITBANDING_H_ */
