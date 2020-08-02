/**
 *
 * @file DMA_Enum.h
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
 * @verbatim 28 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_ENUM_H_

#include <stdint.h>

typedef enum
{
    DMA_enOK    =0u,
    DMA_enERROR =1u,
}DMA_nSTATUS;

typedef enum
{
    DMA_enNOREADY   =0u,
    DMA_enREADY     =1u,
}DMA_nREADY;

typedef enum
{
    DMA_enMODULE_0      =0u,
    DMA_enMODULE_MAX    =0u,
}DMA_nMODULE;

typedef enum
{
    DMA_enENABLE_DIS    =0u,
    DMA_enENABLE_EN     =1u,
    DMA_enENABLE_UNDEF  =0xFFu,
}DMA_nENABLE;

typedef enum
{
    DMA_enSTATE_IDLE        =0u,
    DMA_enSTATE_RD_CTL_DATA =1u,
    DMA_enSTATE_RD_SRC_PT   =2u,
    DMA_enSTATE_RD_DST_PT   =3u,
    DMA_enSTATE_RD_SRC_DATA =4u,
    DMA_enSTATE_WD_DST_DATA =5u,
    DMA_enSTATE_WAIT_TO_CLR =6u,
    DMA_enSTATE_WD_CTL_DATA =7u,
    DMA_enSTATE_WD_STALLED  =8u,
    DMA_enSTATE_WD_DONE     =9u,
    DMA_enSTATE_UNDEF       =0xFFu,
}DMA_nSTATE;





typedef enum
{
    DMA_enCH_ENA_DIS    =0u,
    DMA_enCH_ENA_ENA    =1u,
    DMA_enCH_ENA_UNDEF  =0xFFu,
}DMA_nCH_ENA;

typedef enum
{
    DMA_enCH_WAITING_NO     =0u,
    DMA_enCH_WAITING_YES    =1u,
    DMA_enCH_WAITING_UNDEF  =0xFFu,
}DMA_nCH_WAITING;

typedef enum
{
    DMA_enCH_SWREQ_NO       =0u,
    DMA_enCH_SWREQ_TRIGGER  =1u,
    DMA_enCH_SWREQ_UNDEF    =0xFFu,
}DMA_nCH_SWREQ;

typedef enum
{
    DMA_enCH_REQTYPE_BOTH       =0u,
    DMA_enCH_REQTYPE_BURST      =1u,
    DMA_enCH_REQTYPE_UNDEF      =0xFFu,
}DMA_nCH_REQTYPE;

typedef enum
{
    DMA_enCH_PERIPHERAL_DIS     =0u,
    DMA_enCH_PERIPHERAL_ENA     =1u,
    DMA_enCH_PERIPHERAL_UNDEF   =0xFFu,
}DMA_nCH_PERIPHERAL;

typedef enum
{
    DMA_enCH_CTL_PRIMARY    =0u,
    DMA_enCH_CTL_ALTERTATE  =1u,
    DMA_enCH_CTL_UNDEF      =0xFFu,
}DMA_nCH_CTL;

typedef enum
{
    DMA_enCH_PRIO_DEFAULT   =0u,
    DMA_enCH_PRIO_HIGH      =1u,
    DMA_enCH_PRIO_UNDEF     =0xFFu,
}DMA_nCH_PRIO;

typedef enum
{
    DMA_enCH_INT_NOOCCUR        =0u,
    DMA_enCH_INT_OCCUR          =1u,
    DMA_enCH_INT_STATUS_UNDEF   =0xFFu,
}DMA_nCH_INT_STATUS;

typedef enum
{
    DMA_enCH_DST_INC_BYTE       =0u,
    DMA_enCH_DST_INC_HALF_WORD  =1u,
    DMA_enCH_DST_INC_WORD       =2u,
    DMA_enCH_DST_INC_NO         =3u,
    DMA_enCH_DST_INC_UNDEF      =0xFFu,
}DMA_nCH_DST_INC;

typedef enum
{
    DMA_enCH_DST_SIZE_BYTE      =0u,
    DMA_enCH_DST_SIZE_HALF_WORD =1u,
    DMA_enCH_DST_SIZE_WORD      =2u,
    DMA_enCH_DST_SIZE_UNDEF     =0xFFu,
}DMA_nCH_DST_SIZE;

typedef enum
{
    DMA_enCH_SRC_INC_BYTE       =0u,
    DMA_enCH_SRC_INC_HALF_WORD  =1u,
    DMA_enCH_SRC_INC_WORD       =2u,
    DMA_enCH_SRC_INC_NO         =3u,
    DMA_enCH_SRC_INC_UNDEF      =0xFFu,
}DMA_nCH_SRC_INC;

typedef enum
{
    DMA_enCH_SRC_SIZE_BYTE      =0u,
    DMA_enCH_SRC_SIZE_HALF_WORD =1u,
    DMA_enCH_SRC_SIZE_WORD      =2u,
    DMA_enCH_SRC_SIZE_UNDEF     =0xFFu,
}DMA_nCH_SRC_SIZE;

typedef enum
{
    DMA_enCH_BURST_SIZE_1       =0u,
    DMA_enCH_BURST_SIZE_2       =1u,
    DMA_enCH_BURST_SIZE_4       =2u,
    DMA_enCH_BURST_SIZE_8       =3u,
    DMA_enCH_BURST_SIZE_16      =4u,
    DMA_enCH_BURST_SIZE_32      =5u,
    DMA_enCH_BURST_SIZE_64      =6u,
    DMA_enCH_BURST_SIZE_128     =7u,
    DMA_enCH_BURST_SIZE_256     =8u,
    DMA_enCH_BURST_SIZE_512     =9u,
    DMA_enCH_BURST_SIZE_1024    =10u,
    DMA_enCH_BURST_SIZE_UNDEF   =0xFFu,
}DMA_nCH_BURST_SIZE;

typedef enum
{
    DMA_enCH_MODE_STOP      =0u,
    DMA_enCH_MODE_BASIC     =1u,
    DMA_enCH_MODE_AUTO_REQ  =2u,
    DMA_enCH_MODE_PING_PONG =3u,
    DMA_enCH_MODE_MEM_SG    =4u,
    DMA_enCH_MODE_ALT_MEM_SG=5u,
    DMA_enCH_MODE_PER_SG    =6u,
    DMA_enCH_MODE_ALT_PER_SG=7u,
    DMA_enCH_MODE_UNDEF     =0xFFu,
}DMA_nCH_MODE;

typedef enum
{
    DMA_enCH_MODULE_0   = ((uint32_t)0u),
    DMA_enCH_MODULE_1   = ((uint32_t)1u),
    DMA_enCH_MODULE_2   = ((uint32_t)2u),
    DMA_enCH_MODULE_3   = ((uint32_t)3u),
    DMA_enCH_MODULE_4   = ((uint32_t)4u),
    DMA_enCH_MODULE_5   = ((uint32_t)5u),
    DMA_enCH_MODULE_6   = ((uint32_t)6u),
    DMA_enCH_MODULE_7   = ((uint32_t)7u),
    DMA_enCH_MODULE_8   = ((uint32_t)8u),
    DMA_enCH_MODULE_9   = ((uint32_t)9u),
    DMA_enCH_MODULE_10  = ((uint32_t)10u),
    DMA_enCH_MODULE_11  = ((uint32_t)11u),
    DMA_enCH_MODULE_12  = ((uint32_t)12u),
    DMA_enCH_MODULE_13  = ((uint32_t)13u),
    DMA_enCH_MODULE_14  = ((uint32_t)14u),
    DMA_enCH_MODULE_15  = ((uint32_t)15u),
    DMA_enCH_MODULE_16  = ((uint32_t)16u),
    DMA_enCH_MODULE_17  = ((uint32_t)17u),
    DMA_enCH_MODULE_18  = ((uint32_t)18u),
    DMA_enCH_MODULE_19  = ((uint32_t)19u),
    DMA_enCH_MODULE_20  = ((uint32_t)20u),
    DMA_enCH_MODULE_21  = ((uint32_t)21u),
    DMA_enCH_MODULE_22  = ((uint32_t)22u),
    DMA_enCH_MODULE_23  = ((uint32_t)23u),
    DMA_enCH_MODULE_24  = ((uint32_t)24u),
    DMA_enCH_MODULE_25  = ((uint32_t)25u),
    DMA_enCH_MODULE_26  = ((uint32_t)26u),
    DMA_enCH_MODULE_27  = ((uint32_t)27u),
    DMA_enCH_MODULE_28  = ((uint32_t)27u),
    DMA_enCH_MODULE_29  = ((uint32_t)29u),
    DMA_enCH_MODULE_30  = ((uint32_t)30u),
    DMA_enCH_MODULE_31  = ((uint32_t)31u),
    DMA_enCH_MODULE_MAX = ((uint32_t)31u),
}DMA_nCH_MODULE;

typedef enum
{
    DMA_enCH_ENCODER_0      = ((uint32_t)0u<<8u),
    DMA_enCH_ENCODER_1      = ((uint32_t)1u<<8u),
    DMA_enCH_ENCODER_2      = ((uint32_t)2u<<8u),
    DMA_enCH_ENCODER_3      = ((uint32_t)3u<<8u),
    DMA_enCH_ENCODER_4      = ((uint32_t)4u<<8u),
    DMA_enCH_ENCODER_MAX    = ((uint32_t)4u<<8u),
}DMA_nCH_ENCODER;

typedef enum
{
    DMA_enCHSRC_CH0_0_USB0EP1_RX  = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_0,
    DMA_enCHSRC_CH0_1_UART2_RX    = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_0,
    DMA_enCHSRC_CH0_2_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_0,
    DMA_enCHSRC_CH0_3_GPTM4A      = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_0,
    DMA_enCHSRC_CH0_4_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_0,

    DMA_enCHSRC_CH1_0_USB0EP1_TX  = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_1,
    DMA_enCHSRC_CH1_1_UART2_TX    = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_1,
    DMA_enCHSRC_CH1_2_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_1,
    DMA_enCHSRC_CH1_3_GPTM4B      = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_1,
    DMA_enCHSRC_CH1_4_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_1,

    DMA_enCHSRC_CH2_0_USB0EP2_RX  = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_2,
    DMA_enCHSRC_CH2_1_GPTM3A      = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_2,
    DMA_enCHSRC_CH2_2_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_2,
    DMA_enCHSRC_CH2_3_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_2,
    DMA_enCHSRC_CH2_4_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_2,

    DMA_enCHSRC_CH3_0_USB0EP2_TX  = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_3,
    DMA_enCHSRC_CH3_1_GPTM3B      = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_3,
    DMA_enCHSRC_CH3_2_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_3,
    DMA_enCHSRC_CH3_3_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_3,
    DMA_enCHSRC_CH3_4_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_3,

    DMA_enCHSRC_CH4_0_USB0EP3_RX  = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_4,
    DMA_enCHSRC_CH4_1_GPTM2A      = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_4,
    DMA_enCHSRC_CH4_2_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_4,
    DMA_enCHSRC_CH4_3_GPIOA       = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_4,
    DMA_enCHSRC_CH4_4_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_4,

    DMA_enCHSRC_CH5_0_USB0EP3_TX  = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_5,
    DMA_enCHSRC_CH5_1_GPTM2B      = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_5,
    DMA_enCHSRC_CH5_2_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_5,
    DMA_enCHSRC_CH5_3_GPIOB       = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_5,
    DMA_enCHSRC_CH5_4_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_5,

    DMA_enCHSRC_CH6_0_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_6,
    DMA_enCHSRC_CH6_1_GPTM2A      = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_6,
    DMA_enCHSRC_CH6_2_UART5_RX    = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_6,
    DMA_enCHSRC_CH6_3_GPIOC       = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_6,
    DMA_enCHSRC_CH6_4_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_6,

    DMA_enCHSRC_CH7_0_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_7,
    DMA_enCHSRC_CH7_1_GPTM2B      = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_7,
    DMA_enCHSRC_CH7_2_UART5_TX    = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_7,
    DMA_enCHSRC_CH7_3_GPIOD       = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_7,
    DMA_enCHSRC_CH7_4_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_7,

    DMA_enCHSRC_CH8_0_UART0_RX    = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_8,
    DMA_enCHSRC_CH8_1_UART1_RX    = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_8,
    DMA_enCHSRC_CH8_2_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_8,
    DMA_enCHSRC_CH8_3_GPTM5A      = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_8,
    DMA_enCHSRC_CH8_4_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_8,

    DMA_enCHSRC_CH9_0_UART0_TX    = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_9,
    DMA_enCHSRC_CH9_1_UART1_TX    = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_9,
    DMA_enCHSRC_CH9_2_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_9,
    DMA_enCHSRC_CH9_3_GPTM5B      = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_9,
    DMA_enCHSRC_CH9_4_SOFTWARE    = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_9,

    DMA_enCHSRC_CH10_0_SSI0_RX    = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_10,
    DMA_enCHSRC_CH10_1_SSI1_RX    = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_10,
    DMA_enCHSRC_CH10_2_UART6_RX   = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_10,
    DMA_enCHSRC_CH10_3_GPWTM0A    = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_10,
    DMA_enCHSRC_CH10_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_10,

    DMA_enCHSRC_CH11_0_SSI0_TX    = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_11,
    DMA_enCHSRC_CH11_1_SSI1_TX    = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_11,
    DMA_enCHSRC_CH11_2_UART6_TX   = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_11,
    DMA_enCHSRC_CH11_3_GPWTM0B    = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_11,
    DMA_enCHSRC_CH11_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_11,

    DMA_enCHSRC_CH12_0_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_12,
    DMA_enCHSRC_CH12_1_UART2_RX   = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_12,
    DMA_enCHSRC_CH12_2_SSI2_RX    = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_12,
    DMA_enCHSRC_CH12_3_GPWTM1A    = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_12,
    DMA_enCHSRC_CH12_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_12,

    DMA_enCHSRC_CH13_0_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_13,
    DMA_enCHSRC_CH13_1_UART2_TX   = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_13,
    DMA_enCHSRC_CH13_2_SSI2_TX    = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_13,
    DMA_enCHSRC_CH13_3_GPWTM1B    = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_13,
    DMA_enCHSRC_CH13_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_13,

    DMA_enCHSRC_CH14_0_ADC0_SS0   = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_14,
    DMA_enCHSRC_CH14_1_GPTM2A     = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_14,
    DMA_enCHSRC_CH14_2_SSI3_RX    = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_14,
    DMA_enCHSRC_CH14_3_GPIOE      = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_14,
    DMA_enCHSRC_CH14_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_14,

    DMA_enCHSRC_CH15_0_ADC0_SS1   = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_15,
    DMA_enCHSRC_CH15_1_GPTM2B     = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_15,
    DMA_enCHSRC_CH15_2_SSI3_TX    = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_15,
    DMA_enCHSRC_CH15_3_GPIOF      = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_15,
    DMA_enCHSRC_CH15_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_15,

    DMA_enCHSRC_CH16_0_ADC0_SS2   = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_16,
    DMA_enCHSRC_CH16_1_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_16,
    DMA_enCHSRC_CH16_2_UART3_RX   = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_16,
    DMA_enCHSRC_CH16_3_GPWTM2A    = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_16,
    DMA_enCHSRC_CH16_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_16,

    DMA_enCHSRC_CH17_0_ADC0_SS3   = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_17,
    DMA_enCHSRC_CH17_1_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_17,
    DMA_enCHSRC_CH17_2_UART3_TX   = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_17,
    DMA_enCHSRC_CH17_3_GPWTM2B    = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_17,
    DMA_enCHSRC_CH17_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_17,

    DMA_enCHSRC_CH18_0_GPTM0A     = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_18,
    DMA_enCHSRC_CH18_1_GPTM1A     = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_18,
    DMA_enCHSRC_CH18_2_UART4_RX   = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_18,
    DMA_enCHSRC_CH18_3_GPIOB      = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_18,
    DMA_enCHSRC_CH18_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_18,

    DMA_enCHSRC_CH19_0_GPTM0B     = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_19,
    DMA_enCHSRC_CH19_1_GPTM1B     = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_19,
    DMA_enCHSRC_CH19_2_UART4_TX   = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_19,
    DMA_enCHSRC_CH19_3_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_19,
    DMA_enCHSRC_CH19_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_19,

    DMA_enCHSRC_CH20_0_GPTM1A     = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_20,
    DMA_enCHSRC_CH20_1_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_20,
    DMA_enCHSRC_CH20_2_UART7_RX   = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_20,
    DMA_enCHSRC_CH20_3_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_20,
    DMA_enCHSRC_CH20_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_20,

    DMA_enCHSRC_CH21_0_GPTM1B     = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_21,
    DMA_enCHSRC_CH21_1_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_21,
    DMA_enCHSRC_CH21_2_UART7_TX   = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_21,
    DMA_enCHSRC_CH21_3_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_21,
    DMA_enCHSRC_CH21_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_21,

    DMA_enCHSRC_CH22_0_UART1_RX   = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_22,
    DMA_enCHSRC_CH22_1_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_22,
    DMA_enCHSRC_CH22_2_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_22,
    DMA_enCHSRC_CH22_3_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_22,
    DMA_enCHSRC_CH22_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_22,

    DMA_enCHSRC_CH23_0_UART1_TX   = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_23,
    DMA_enCHSRC_CH23_1_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_23,
    DMA_enCHSRC_CH23_2_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_23,
    DMA_enCHSRC_CH23_3_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_23,
    DMA_enCHSRC_CH23_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_23,

    DMA_enCHSRC_CH24_0_SSI1_RX    = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_24,
    DMA_enCHSRC_CH24_1_ADC1_SS0   = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_24,
    DMA_enCHSRC_CH24_2_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_24,
    DMA_enCHSRC_CH24_3_GPWTM3A    = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_24,
    DMA_enCHSRC_CH24_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_24,

    DMA_enCHSRC_CH25_0_SSI1_TX    = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_25,
    DMA_enCHSRC_CH25_1_ADC1_SS1   = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_25,
    DMA_enCHSRC_CH25_2_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_25,
    DMA_enCHSRC_CH25_3_GPWTM3B    = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_25,
    DMA_enCHSRC_CH25_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_25,

    DMA_enCHSRC_CH26_0_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_26,
    DMA_enCHSRC_CH26_1_ADC1_SS2   = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_26,
    DMA_enCHSRC_CH26_2_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_26,
    DMA_enCHSRC_CH26_3_GPWTM4A    = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_26,
    DMA_enCHSRC_CH26_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_26,

    DMA_enCHSRC_CH27_0_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_27,
    DMA_enCHSRC_CH27_1_ADC1_SS3   = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_27,
    DMA_enCHSRC_CH27_2_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_27,
    DMA_enCHSRC_CH27_3_GPWTM4B    = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_27,
    DMA_enCHSRC_CH27_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_27,

    DMA_enCHSRC_CH28_0_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_28,
    DMA_enCHSRC_CH28_1_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_28,
    DMA_enCHSRC_CH28_2_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_28,
    DMA_enCHSRC_CH28_3_GPWTM5A    = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_28,
    DMA_enCHSRC_CH28_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_28,

    DMA_enCHSRC_CH29_0_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_29,
    DMA_enCHSRC_CH29_1_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_29,
    DMA_enCHSRC_CH29_2_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_29,
    DMA_enCHSRC_CH29_3_GPWTM5A    = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_29,
    DMA_enCHSRC_CH29_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_29,

    DMA_enCHSRC_CH30_0_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_30,
    DMA_enCHSRC_CH30_1_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_30,
    DMA_enCHSRC_CH30_2_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_30,
    DMA_enCHSRC_CH30_3_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_30,
    DMA_enCHSRC_CH30_4_SOFTWARE   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_30,

    DMA_enCHSRC_CH31_0_RESERVED   = (uint32_t)DMA_enCH_ENCODER_0| (uint32_t)DMA_enCH_MODULE_31,
    DMA_enCHSRC_CH31_1_RESERVED   = (uint32_t)DMA_enCH_ENCODER_1| (uint32_t)DMA_enCH_MODULE_31,
    DMA_enCHSRC_CH31_2_RESERVED   = (uint32_t)DMA_enCH_ENCODER_2| (uint32_t)DMA_enCH_MODULE_31,
    DMA_enCHSRC_CH31_3_RESERVED   = (uint32_t)DMA_enCH_ENCODER_3| (uint32_t)DMA_enCH_MODULE_31,
    DMA_enCHSRC_CH31_4_RESERVED   = (uint32_t)DMA_enCH_ENCODER_4| (uint32_t)DMA_enCH_MODULE_31,
}DMA_nCHSRC;





#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_ENUM_H_ */
