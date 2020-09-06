/**
 *
 * @file HIB_StructRegister.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_HIB_STRUCTREGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_HIB_STRUCTREGISTER_H_

#include <xUtils/Standard/Standard.h>

typedef volatile struct
{
    volatile const uint32_t RTCC          :32;
}HIBRTCC_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCM0          :32;
}HIBRTCM0_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCLD          :32;
}HIBRTCLD_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCEN        :1;
    volatile uint32_t HIBREQ       :1;
    const    uint32_t reserved     :1;
    volatile uint32_t RTCWEN       :1;
    volatile uint32_t PINWEN       :1;
    const    uint32_t reserved1    :1;
    volatile uint32_t CLK32EN      :1;
    volatile uint32_t VABORT       :1;
    volatile uint32_t VDD3ON       :1;
    volatile uint32_t BATWKEN      :1;
    volatile uint32_t BATCHK       :1;
    const    uint32_t reserved2    :2;
    volatile uint32_t VBATSEL      :2;
    const    uint32_t reserved3    :1;
    volatile uint32_t OSCBYP       :1;
    volatile uint32_t OSCDRV       :1;
    const    uint32_t  reserved4    :13;
    volatile const uint32_t WRC          :1;
}HIBCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCALT0   :1;
    const    uint32_t reserved  :1;
    volatile uint32_t LOWBAT    :1;
    volatile uint32_t EXTW      :1;
    volatile uint32_t WC        :1;
    const    uint32_t reserved1 :27;
}HIBIM_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RTCALT0   :1;
    const    uint32_t       reserved  :1;
    volatile const uint32_t LOWBAT    :1;
    volatile const uint32_t EXTW      :1;
    volatile const uint32_t WC        :1;
    const    uint32_t       reserved1 :27;
}HIBRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RTCALT0   :1;
    const    uint32_t       reserved  :1;
    volatile const uint32_t LOWBAT    :1;
    volatile const uint32_t EXTW      :1;
    volatile const uint32_t WC        :1;
    const    uint32_t       reserved1 :27;
}HIBMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCALT0   :1;
    const    uint32_t reserved  :1;
    volatile uint32_t LOWBAT    :1;
    volatile uint32_t EXTW      :1;
    volatile uint32_t WC        :1;
    const    uint32_t reserved1 :27;
}HIBIC_TypeDef;

typedef volatile struct
{
    volatile uint32_t TRIM   :16;
}HIBRTCT_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RTCSSC   :15;
    const    uint32_t       reserved :1;
    volatile uint32_t       RTCSSM   :15;
    const    uint32_t       reserved1:1;

}HIBRTCSS_TypeDef;

typedef volatile struct
{
    volatile uint32_t HIBDATA[16];

}HIBDATA_ARRAY_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTD   :32;

}HIBDATA_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_HIB_STRUCTREGISTER_H_ */
