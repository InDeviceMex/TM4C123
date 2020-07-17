/**
 *
 * @file HIB_StructPeripheral_Bitbanding.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_HIB_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_HIB_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/Driver_Header/HIB/HIB_Peripheral/HIB_Struct/HIB_StructRegister_Bitbanding.h>

typedef volatile struct
{
    union
    {
        volatile const uint32_t             HIBRTCC[32];
        BITBANDING_HIBRTCC_TypeDef          HIBRTCC_Bit;
    };
    union
    {
        volatile uint32_t                   HIBRTCM0[32];
        BITBANDING_HIBRTCM0_TypeDef         HIBRTCM0_Bit;
    };
    const uint32_t                          reserved[1*32];
    union
    {
        volatile uint32_t                   HIBRTCLD[32];
        BITBANDING_HIBRTCLD_TypeDef         HIBRTCLD_Bit;
    };
    union
    {
        volatile uint32_t                   HIBCTL[32];
        BITBANDING_HIBCTL_TypeDef           HIBCTL_Bit;
    };
    union
    {
        volatile uint32_t                   HIBIM[32];
        BITBANDING_HIBIM_TypeDef            HIBIM_Bit;
    };
    union
    {
        volatile const uint32_t             HIBRIS[32];
        BITBANDING_HIBRIS_TypeDef           HIBRIS_Bit;
    };
    union
    {
        volatile const uint32_t             HIBMIS[32];
        BITBANDING_HIBMIS_TypeDef           HIBMIS_Bit;
    };
    union
    {
        volatile uint32_t                   HIBIC[32];
        BITBANDING_HIBIC_TypeDef            HIBIC_Bit;
    };
    union
    {
        volatile uint32_t                   HIBRTCT[32];
        BITBANDING_HIBRTCT_TypeDef          HIBRTCT_Bit;
    };
    union
    {
        volatile uint32_t                   HIBRTCSS[32];
        BITBANDING_HIBRTCSS_TypeDef         HIBRTCSS_Bit;
    };
    const uint32_t                          reserved1[1*32];
    union
    {
        volatile uint32_t                   HIBDATA[16][32];
        BITBANDING_HIBDATA_TypeDef          HIBDATA_Bit[16];
    };
}HIB_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_HIB_STRUCTPERIPHERAL_BITBANDING_H_ */
