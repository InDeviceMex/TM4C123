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
 * Date Author Version Description
 * 21 jun. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_HIB_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_HIB_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/HIB/Peripheral/Struct/xHeader/HIB_StructRegister_Bitbanding.h>

typedef volatile struct
{
    union
    {
        volatile const uint32_t RTCC [32UL];
        BITBANDING_HIBRTCC_TypeDef RTCC_Bit;
    };
    union
    {
        volatile uint32_t RTCM0 [32UL];
        BITBANDING_HIBRTCM0_TypeDef RTCM0_Bit;
    };
    const uint32_t reserved[32UL];
    union
    {
        volatile uint32_t RTCLD [32UL];
        BITBANDING_HIBRTCLD_TypeDef RTCLD_Bit;
    };
    union
    {
        volatile uint32_t CTL [32UL];
        BITBANDING_HIBCTL_TypeDef CTL_Bit;
    };
    union
    {
        volatile uint32_t IM [32UL];
        BITBANDING_HIBIM_TypeDef IM_Bit;
    };
    union
    {
        volatile const uint32_t RIS [32UL];
        BITBANDING_HIBRIS_TypeDef RIS_Bit;
    };
    union
    {
        volatile const uint32_t MIS [32UL];
        BITBANDING_HIBMIS_TypeDef MIS_Bit;
    };
    union
    {
        volatile uint32_t IC [32UL];
        BITBANDING_HIBIC_TypeDef IC_Bit;
    };
    union
    {
        volatile uint32_t RTCT [32UL];
        BITBANDING_HIBRTCT_TypeDef RTCT_Bit;
    };
    union
    {
        volatile uint32_t RTCSS [32UL];
        BITBANDING_HIBRTCSS_TypeDef RTCSS_Bit;
    };
    const uint32_t reserved1[32UL];
    union
    {
        volatile uint32_t DATA [16UL][32UL];
        BITBANDING_HIBDATA_TypeDef DATA_Bit [16UL];
    };
}HIB_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_HIB_STRUCTPERIPHERAL_BITBANDING_H_ */
