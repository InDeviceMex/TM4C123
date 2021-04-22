/**
 *
 * @file HIB_StructPeripheral.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_HIB_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_HIB_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/HIB/Peripheral/Struct/xHeader/HIB_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile const uint32_t RTCC;
        HIBRTCC_TypeDef RTCC_Bit;
    };
    union
    {
        volatile uint32_t RTCM0;
        HIBRTCM0_TypeDef RTCM0_Bit;
    };
    const uint32_t reserved;
    union
    {
        volatile uint32_t RTCLD;
        HIBRTCLD_TypeDef RTCLD_Bit;
    };
    union
    {
        volatile uint32_t CTL;
        HIBCTL_TypeDef CTL_Bit;
    };
    union
    {
        volatile uint32_t IM;
        HIBIM_TypeDef IM_Bit;
    };
    union
    {
        volatile const uint32_t RIS;
        HIBRIS_TypeDef RIS_Bit;
    };
    union
    {
        volatile const uint32_t MIS;
        HIBMIS_TypeDef MIS_Bit;
    };
    union
    {
        volatile uint32_t IC;
        HIBIC_TypeDef IC_Bit;
    };
    union
    {
        volatile uint32_t RTCT;
        HIBRTCT_TypeDef RTCT_Bit;
    };
    union
    {
        volatile uint32_t RTCSS;
        HIBRTCSS_TypeDef RTCSS_Bit;
    };
    const uint32_t reserved1;
    union
    {
        volatile uint32_t DATA [16UL];
        HIBDATA_TypeDef DATA_Bit [16UL];
    };
}HIB_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_HIB_STRUCTPERIPHERAL_H_ */
