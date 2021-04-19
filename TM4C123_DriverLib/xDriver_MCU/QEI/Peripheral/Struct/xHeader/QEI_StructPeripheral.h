/**
 *
 * @file QEI_StructPeripheral.h
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
 * @verbatim Apr 5, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 5, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/QEI/Peripheral/Struct/xHeader/QEI_StructRegister.h>
#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Enum.h>


typedef volatile struct
{
    union
    {
        volatile uint32_t QEICTL;
        QEICTL_TypeDef QEICTL_Bit;
    };
    union
    {
        volatile const uint32_t QEISTAT;
        QEISTAT_TypeDef QEISTAT_Bit;
    };
    union
    {
        volatile uint32_t QEIPOS;
        QEIPOS_TypeDef QEIPOS_Bit;
    };
    union
    {
        volatile uint32_t QEIMAXPOS;
        QEIMAXPOS_TypeDef QEIMAXPOS_Bit;
    };
    union
    {
        volatile uint32_t QEILOAD;
        QEILOAD_TypeDef QEILOAD_Bit;
    };
    union
    {
        volatile const uint32_t QEITIME;
        QEITIME_TypeDef QEITIME_Bit;
    };
    union
    {
        volatile const uint32_t QEICOUNT;
        QEICOUNT_TypeDef QEICOUNT_Bit;
    };
    union
    {
        volatile const uint32_t QEISPEED;
        QEISPEED_TypeDef QEISPEED_Bit;
    };
    union
    {
        volatile uint32_t QEIINTEN;
        QEIINTEN_TypeDef QEIINTEN_Bit;
    };
    union
    {
        volatile const uint32_t QEIRIS;
        QEIRIS_TypeDef QEIRIS_Bit;
    };
    union
    {
        volatile const uint32_t QEIISC;
        QEIISC_TypeDef QEIISC_Bit;
    };
    const uint32_t reserved [1013UL];
}QEI_TypeDef;

typedef volatile struct
{
    QEI_TypeDef MODULE [(uint32_t) QEI_enMODULE_MAX];
}QEIS_TypeDef;

#endif /* XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTPERIPHERAL_H_ */
