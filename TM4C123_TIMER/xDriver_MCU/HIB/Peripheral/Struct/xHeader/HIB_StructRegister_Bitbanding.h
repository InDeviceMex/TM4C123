/**
 *
 * @file HIB_StructRegister_Bitbanding.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_HIB_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_HIB_STRUCTREGISTER_BITBANDING_H_

#include <xDriver_MCU/HIB/Peripheral/Struct/xHeader/HIB_StructRegister_Bitbanding.h>
#include <xUtils/Standard/Standard.h>

typedef volatile struct
{
    volatile const uint32_t RTCC          [32];
}BITBANDING_HIBRTCC_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCM0          [32];
}BITBANDING_HIBRTCM0_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCLD          [32];
}BITBANDING_HIBRTCLD_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCEN        ;
    volatile uint32_t HIBREQ       ;
    const    uint32_t reserved     ;
    volatile uint32_t RTCWEN       ;
    volatile uint32_t PINWEN       ;
    const    uint32_t reserved1    ;
    volatile uint32_t CLK32EN      ;
    volatile uint32_t VABORT       ;
    volatile uint32_t VDD3ON       ;
    volatile uint32_t BATWKEN      ;
    volatile uint32_t BATCHK       ;
    const    uint32_t reserved2    [2];
    volatile uint32_t VBATSEL      [2];
    const    uint32_t reserved3    ;
    volatile uint32_t OSCBYP       ;
    volatile uint32_t OSCDRV       ;
    const    uint32_t  reserved4    [13];
    volatile const uint32_t WRC          ;
}BITBANDING_HIBCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCALT0   ;
    const    uint32_t reserved  ;
    volatile uint32_t LOWBAT    ;
    volatile uint32_t EXTW      ;
    volatile uint32_t WC        ;
    const    uint32_t reserved1 [27];
}BITBANDING_HIBIM_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RTCALT0   ;
    const    uint32_t       reserved  ;
    volatile const uint32_t LOWBAT    ;
    volatile const uint32_t EXTW      ;
    volatile const uint32_t WC        ;
    const    uint32_t       reserved1 [27];
}BITBANDING_HIBRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RTCALT0   ;
    const    uint32_t       reserved  ;
    volatile const uint32_t LOWBAT    ;
    volatile const uint32_t EXTW      ;
    volatile const uint32_t WC        ;
    const    uint32_t       reserved1 [27];
}BITBANDING_HIBMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCALT0   ;
    const    uint32_t reserved  ;
    volatile uint32_t LOWBAT    ;
    volatile uint32_t EXTW      ;
    volatile uint32_t WC        ;
    const    uint32_t reserved1 [27];
}BITBANDING_HIBIC_TypeDef;

typedef volatile struct
{
    volatile uint32_t TRIM   [16];
}BITBANDING_HIBRTCT_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RTCSSC   [15];
    const    uint32_t       reserved ;
    volatile uint32_t       RTCSSM   [15];
    const    uint32_t       reserved1;

}BITBANDING_HIBRTCSS_TypeDef;

typedef volatile struct
{
    volatile uint32_t HIBDATA[16][32];

}BITBANDING_HIBDATA_ARRAY_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTD   [32];

}BITBANDING_HIBDATA_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_HIB_STRUCTREGISTER_BITBANDING_H_ */
