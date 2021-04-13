/**
 *
 * @file CAN_StructRegister.h
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTREGISTER_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTREGISTER_H_

#include <xUtils/Standard/Standard.h>

/**
 *  Global Struct Definitions for CAN Sequences
 */

typedef volatile struct
{
    volatile uint32_t ASEN0: 1;
    volatile uint32_t ASEN1: 1;
    volatile uint32_t ASEN2: 1;
    volatile uint32_t ASEN3: 1;
    const uint32_t reserved: 12;
    volatile const uint32_t BUSY: 1;
    const uint32_t reserved1: 15;
}CANACTSS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t INR0: 1;
    volatile const uint32_t INR1: 1;
    volatile const uint32_t INR2: 1;
    volatile const uint32_t INR3: 1;
    const uint32_t reserved: 12;
    volatile const uint32_t INRDC: 1;
    const uint32_t reserved1: 15;
}CANRIS_TypeDef;


#endif /* XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTREGISTER_H_ */
