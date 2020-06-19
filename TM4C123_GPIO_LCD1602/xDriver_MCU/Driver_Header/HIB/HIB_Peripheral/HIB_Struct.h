/*
 * HIB_Struct.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_H_


#include <stdint.h>

/**
 *  @brief Struct Definition for RTCC Register
 */
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

typedef volatile struct
{
    union
    {
        volatile const uint32_t     HIBRTCC;
        HIBRTCC_TypeDef             HIBRTCC_Bit;
    };
    union
    {
        volatile uint32_t           HIBRTCM0;
        HIBRTCM0_TypeDef            HIBRTCM0_Bit;
    };
    const uint32_t                  reserved[1];
    union
    {
        volatile uint32_t           HIBRTCLD;
        HIBRTCLD_TypeDef            HIBRTCLD_Bit;
    };
    union
    {
        volatile uint32_t           HIBCTL;
        HIBCTL_TypeDef              HIBCTL_Bit;
    };
    union
    {
        volatile uint32_t           HIBIM;
        HIBIM_TypeDef               HIBIM_Bit;
    };
    union
    {
        volatile const uint32_t     HIBRIS;
        HIBRIS_TypeDef              HIBRIS_Bit;
    };
    union
    {
        volatile const uint32_t     HIBMIS;
        HIBMIS_TypeDef              HIBMIS_Bit;
    };
    union
    {
        volatile uint32_t           HIBIC;
        HIBIC_TypeDef               HIBIC_Bit;
    };
    union
    {
        volatile uint32_t           HIBRTCT;
        HIBRTCT_TypeDef             HIBRTCT_Bit;
    };
    union
    {
        volatile uint32_t           HIBRTCSS;
        HIBRTCSS_TypeDef            HIBRTCSS_Bit;
    };
    const uint32_t                  reserved1[1];
    union
    {
        volatile uint32_t           HIBDATA[16];
        HIBDATA_TypeDef             HIBDATA_Bit[16];
    };
}HIB_TypeDef;


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



#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_H_ */
