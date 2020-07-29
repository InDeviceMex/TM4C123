/**
 *
 * @file TIMER_StructRegister_Bitbanding_Standard.h
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
 * @verbatim 4 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_STANDARD_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_STANDARD_H_

#include <stdint.h>

/*************************************************************
 *********************************  STANDARD REGS BITBANDING **************
 **************************************************************/

typedef volatile struct
{
    volatile uint32_t TAMR              [2];
    volatile uint32_t TACMR             ;
    volatile uint32_t TAAMS             ;
    volatile uint32_t TACDIR            ;
    volatile uint32_t TAMIE             ;
    volatile uint32_t TAWOT             ;
    volatile uint32_t TASNAPS           ;
    volatile uint32_t TAILD             ;
    volatile uint32_t TAPWMIE           ;
    volatile uint32_t TAMRSU            ;
    volatile uint32_t TAPLO             ;
    const    uint32_t reserved          [20];
}BITBANDING_GPTMTAMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBMR              [2];
    volatile uint32_t TBCMR             ;
    volatile uint32_t TBAMS             ;
    volatile uint32_t TBCDIR            ;
    volatile uint32_t TBMIE             ;
    volatile uint32_t TBWOT             ;
    volatile uint32_t TBSNAPS           ;
    volatile uint32_t TBILD             ;
    volatile uint32_t TBPWMIE           ;
    volatile uint32_t TBMRSU            ;
    volatile uint32_t TBPLO             ;
    const    uint32_t reserved          [20];
}BITBANDING_GPTMTBMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TAEN              ;
    volatile uint32_t TASTALL           ;
    volatile uint32_t TAEVENT           [2];
    volatile uint32_t RTCEN             ;
    volatile uint32_t TAOTE             ;
    volatile uint32_t TAPWML            ;
    const    uint32_t reserved          ;
    volatile uint32_t TBEN              ;
    volatile uint32_t TBSTALL           ;
    volatile uint32_t TBEVENT           [2];
    const    uint32_t reserved1         ;
    volatile uint32_t TBOTE             ;
    volatile uint32_t TBPWML            ;
    const    uint32_t reserved2         [17];
}BITBANDING_GPTMCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t TATOIM            ;
    volatile uint32_t CAMIM             ;
    volatile uint32_t CAEIM             ;
    volatile uint32_t RTCIM             ;
    volatile uint32_t TAMIM             ;
    const    uint32_t reserved          [3];
    volatile uint32_t TBTOIM            ;
    volatile uint32_t CBMIM             ;
    volatile uint32_t CBEIM             ;
    volatile uint32_t TBMIM             ;
    const    uint32_t reserved1         [4];
    volatile uint32_t WUEIM             ;
    const    uint32_t reserved2         [15];
}BITBANDING_GPTMIMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TATORIS     ;
    volatile const uint32_t CAMRIS      ;
    volatile const uint32_t CAERIS      ;
    volatile const uint32_t RTCRIS      ;
    volatile const uint32_t TAMRIS      ;
    const    uint32_t       reserved    [3];
    volatile const uint32_t TBTORIS     ;
    volatile const uint32_t CBMRIS      ;
    volatile const uint32_t CBERIS      ;
    volatile const uint32_t TBMRIS      ;
    const    uint32_t       reserved1   [4];
    volatile const uint32_t WUERIS      ;
    const    uint32_t       reserved2   [15];
}BITBANDING_GPTMRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TATOMIS     ;
    volatile const uint32_t CAMMIS      ;
    volatile const uint32_t CAEMIS      ;
    volatile const uint32_t RTCMIS      ;
    volatile const uint32_t TAMMIS      ;
    const    uint32_t       reserved    [3];
    volatile const uint32_t TBTOMIS     ;
    volatile const uint32_t CBMMIS      ;
    volatile const uint32_t CBEMIS      ;
    volatile const uint32_t TBMMIS      ;
    const    uint32_t       reserved1   [4];
    volatile const uint32_t WUEMIS      ;
    const    uint32_t       reserved2   [15];
}BITBANDING_GPTMMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t TATOCINT          ;
    volatile uint32_t CAMCINT           ;
    volatile uint32_t CAECINT           ;
    volatile uint32_t RTCCINT           ;
    volatile uint32_t TAMCINT           ;
    const    uint32_t reserved          [3];
    volatile uint32_t TBTOCINT          ;
    volatile uint32_t CBMCINT           ;
    volatile uint32_t CBECINT           ;
    volatile uint32_t TBMCINT           ;
    const    uint32_t reserved1         [4];
    volatile uint32_t WUECINT           ;
    const    uint32_t reserved2         [15];
}BITBANDING_GPTMICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TAILR             [32];
}BITBANDING_GPTMTAILR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBILR             [32];
}BITBANDING_GPTMTBILR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TAMR              [32];
}BITBANDING_GPTMTAMATCHR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBMR              [32];
}BITBANDING_GPTMTBMATCHR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TAPSR             [8];
    volatile uint32_t TAPSRH            [8];
    const    uint32_t reserved          [16];
}BITBANDING_GPTMTAPR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBPSR             [8];
    volatile uint32_t TBPSRH            [8];
    const    uint32_t reserved          [16];
}BITBANDING_GPTMTBPR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TAPSMR            [8];
    volatile uint32_t TAPSMRH           [8];
    const    uint32_t reserved          [16];
}BITBANDING_GPTMTAPMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBPSMR            [8];
    volatile uint32_t TBPSMRH           [8];
    const    uint32_t reserved          [16];
}BITBANDING_GPTMTBPMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TAR         [32];
}BITBANDING_GPTMTAR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TBR         [32];
}BITBANDING_GPTMTBR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TAV               [32];
}BITBANDING_GPTMTAV_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBV               [32];
}BITBANDING_GPTMTBV_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RTCPD       [16];
    const    uint32_t       reserved    [16];
}BITBANDING_GPTMRTCPD_TypeDef;
typedef volatile struct
{
    volatile const uint32_t PSS         [16];
    const    uint32_t       reserved    [16];
}BITBANDING_GPTMTAPS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PSS         [16];
    const    uint32_t       reserved    [16];
}BITBANDING_GPTMTBPS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PSV         [16];
    const    uint32_t       reserved    [16];
}BITBANDING_GPTMTAPV_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PSV         [16];
    const    uint32_t       reserved    [16];
}BITBANDING_GPTMTBPV_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_STANDARD_H_ */
