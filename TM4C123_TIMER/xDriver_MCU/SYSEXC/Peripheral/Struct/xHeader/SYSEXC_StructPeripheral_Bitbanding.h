/**
 *
 * @file SYSEXC_StructPeripheral_Bitbanding.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/SYSEXC/Peripheral/Struct/xHeader/SYSEXC_StructRegister_Bitbanding.h>

typedef volatile struct
{
    union
    {
        volatile const uint32_t    SYSEXCRIS[32];
        BITBANDING_SYSEXCRIS_TypeDef               SYSEXCRIS_Bit;
    };
    union
    {
        volatile uint32_t          SYSEXCIM[32];
        BITBANDING_SYSEXCIM_TypeDef                SYSEXCIM_Bit;
    };
    union
    {
        volatile const uint32_t    SYSEXCMIS[32];
        BITBANDING_SYSEXCMIS_TypeDef               SYSEXCMIS_Bit;
    };
    union
    {
        volatile uint32_t          SYSEXCIC[32];
        BITBANDING_SYSEXCIC_TypeDef                SYSEXCIC_Bit;
    };
}SYSEXC_BITBANDING_TypeDef;





#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_STRUCT_SYSEXC_STRUCTPERIPHERAL_BITBANDING_H_ */
