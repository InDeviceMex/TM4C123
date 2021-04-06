/**
 *
 * @file QEI_StructPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/QEI/Peripheral/Struct/xHeader/QEI_StructRegister_Bitbanding.h>
#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Enum.h>


typedef volatile struct
{
    union
    {
        volatile uint32_t QEICTL [32UL];
        BITBANDING_QEICTL_TypeDef QEICTL_Bit;
    };
    union
    {
        volatile const uint32_t QEISTAT [32UL];
        BITBANDING_QEISTAT_TypeDef QEISTAT_Bit;
    };
    union
    {
        volatile uint32_t QEIPOS [32UL];
        BITBANDING_QEIPOS_TypeDef QEIPOS_Bit;
    };
    union
    {
        volatile uint32_t QEIMAXPOS [32UL];
        BITBANDING_QEIMAXPOS_TypeDef QEIMAXPOS_Bit;
    };
    union
    {
        volatile uint32_t QEILOAD [32UL];
        BITBANDING_QEILOAD_TypeDef QEILOAD_Bit;
    };
    union
    {
        volatile const uint32_t QEITIME [32UL];
        BITBANDING_QEITIME_TypeDef QEITIME_Bit;
    };
    union
    {
        volatile const uint32_t QEICOUNT [32UL];
        BITBANDING_QEICOUNT_TypeDef QEICOUNT_Bit;
    };
    union
    {
        volatile const uint32_t QEISPEED [32UL];
        BITBANDING_QEISPEED_TypeDef QEISPEED_Bit;
    };
    union
    {
        volatile uint32_t QEIINTEN [32UL];
        BITBANDING_QEIINTEN_TypeDef QEIINTEN_Bit;
    };
    union
    {
        volatile const uint32_t QEIRIS [32UL];
        BITBANDING_QEIRIS_TypeDef QEIRIS_Bit;
    };
    union
    {
        volatile const uint32_t QEIISC [32UL];
        BITBANDING_QEIISC_TypeDef QEIISC_Bit;
    };
    const uint32_t reserved [1013UL * 32UL];
}QEI_BITBANDING_TypeDef;

typedef volatile struct
{
    QEI_BITBANDING_TypeDef MODULE [(uint32_t) QEI_enMODULE_MAX];
}QEIS_BITBANDING_TypeDef;


#endif /* XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTPERIPHERAL_BITBANDING_H_ */
