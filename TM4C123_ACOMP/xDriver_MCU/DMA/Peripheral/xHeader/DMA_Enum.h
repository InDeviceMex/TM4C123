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

#include <xUtils/Standard/Standard.h>

typedef enum
{
    DMA_enOK    =0U,
    DMA_enERROR =1U,
}DMA_nSTATUS;

typedef enum
{
    DMA_enNOREADY   =0U,
    DMA_enREADY     =1U,
}DMA_nREADY;

typedef enum
{
    DMA_enMODULE_0      =0U,
    DMA_enMODULE_MAX    =0U,
}DMA_nMODULE;

typedef enum
{
    DMA_enVECTOR_SW      =0U,
    DMA_enVECTOR_ERROR      =1U,
    DMA_enVECTOR_MAX    =1U,
}DMA_nVECTOR;

typedef enum
{
    DMA_enENABLE_DIS    =0U,
    DMA_enENABLE_EN     =1U,
    DMA_enENABLE_UNDEF  =0xFFFFFFFFU,
}DMA_nENABLE;

typedef enum
{
    DMA_enPRI0=0U,
    DMA_enPRI1=1U,
    DMA_enPRI2=2U,
    DMA_enPRI3=3U,
    DMA_enPRI4=4U,
    DMA_enPRI5=5U,
    DMA_enPRI6=6U,
    DMA_enPRI7=7U,
    DMA_enDEFAULT=0xFFFFFFFFU,
}DMA_nPRIORITY;

typedef enum
{
    DMA_enSTATE_IDLE        =0U,
    DMA_enSTATE_RD_CTL_DATA =1U,
    DMA_enSTATE_RD_SRC_PT   =2U,
    DMA_enSTATE_RD_DST_PT   =3U,
    DMA_enSTATE_RD_SRC_DATA =4U,
    DMA_enSTATE_WD_DST_DATA =5U,
    DMA_enSTATE_WAIT_TO_CLR =6U,
    DMA_enSTATE_WD_CTL_DATA =7U,
    DMA_enSTATE_WD_STALLED  =8U,
    DMA_enSTATE_WD_DONE     =9U,
    DMA_enSTATE_UNDEF       =0xFFFFFFFFU,
}DMA_nSTATE;

typedef enum
{
    DMA_enCH_WAITING_NO     =0U,
    DMA_enCH_WAITING_YES    =1U,
    DMA_enCH_WAITING_UNDEF  =0xFFFFFFFFU,
}DMA_nCH_WAITING;

typedef enum
{
    DMA_enCH_SWREQ_NO       =0U,
    DMA_enCH_SWREQ_TRIGGER  =1U,
    DMA_enCH_SWREQ_UNDEF    =0xFFFFFFFFU,
}DMA_nCH_SWREQ;

typedef enum
{
    DMA_enCH_REQTYPE_BOTH       =0U,
    DMA_enCH_REQTYPE_BURST      =1U,
    DMA_enCH_REQTYPE_UNDEF      =0xFFFFFFFFU,
}DMA_nCH_REQTYPE;

typedef enum
{
    DMA_enCH_PERIPHERAL_ENA     =0U,
    DMA_enCH_PERIPHERAL_DIS     =1U,
    DMA_enCH_PERIPHERAL_UNDEF   =0xFFFFFFFFU,
}DMA_nCH_PERIPHERAL;

typedef enum
{
    DMA_enCH_ENA_DIS    =0U,
    DMA_enCH_ENA_ENA    =1U,
    DMA_enCH_ENA_UNDEF  =0xFFFFFFFFU,
}DMA_nCH_ENA;

typedef enum
{
    DMA_enCH_CTL_PRIMARY    =0U,
    DMA_enCH_CTL_ALTERTATE  =1U,
    DMA_enCH_CTL_UNDEF      =0xFFFFFFFFU,
}DMA_nCH_CTL;

typedef enum
{
    DMA_enCH_PRIO_DEFAULT   =0U,
    DMA_enCH_PRIO_HIGH      =1U,
    DMA_enCH_PRIO_UNDEF     =0xFFFFFFFFU,
}DMA_nCH_PRIO;

typedef enum
{
    DMA_enERROR_NOPENDING    =0U,
    DMA_enERROR_PENDING  =1U,
    DMA_enERROR_UNDEF  =0xFFFFFFFFU,
}DMA_nERROR;

typedef enum
{
    DMA_enCH_INT_NOOCCUR        =0U,
    DMA_enCH_INT_OCCUR          =1U,
    DMA_enCH_INT_CLEAR          =1U,
    DMA_enCH_INT_STATUS_UNDEF   =0xFFFFFFFFU,
}DMA_nCH_INT_STATUS;

typedef enum
{
    DMA_enCH_ENCODER_0      = ((uint32_t)0U),
    DMA_enCH_ENCODER_1      = ((uint32_t)1U),
    DMA_enCH_ENCODER_2      = ((uint32_t)2U),
    DMA_enCH_ENCODER_3      = ((uint32_t)3U),
    DMA_enCH_ENCODER_4      = ((uint32_t)4U),
    DMA_enCH_ENCODER_MAX    = ((uint32_t)4U),
    DMA_enCH_ENCODER_UNDEF = 0xFFFFFFFFU,
}DMA_nCH_ENCODER;

typedef enum
{
    DMA_enCH_DST_INC_BYTE       =0U,
    DMA_enCH_DST_INC_HALF_WORD  =1U,
    DMA_enCH_DST_INC_WORD       =2U,
    DMA_enCH_DST_INC_NO         =3U,
    DMA_enCH_DST_INC_UNDEF      =0xFFFFFFFFU,
}DMA_nCH_DST_INC;

typedef enum
{
    DMA_enCH_DST_SIZE_BYTE      =0U,
    DMA_enCH_DST_SIZE_HALF_WORD =1U,
    DMA_enCH_DST_SIZE_WORD      =2U,
    DMA_enCH_DST_SIZE_UNDEF     =0xFFFFFFFFU,
}DMA_nCH_DST_SIZE;

typedef enum
{
    DMA_enCH_SRC_INC_BYTE       =0U,
    DMA_enCH_SRC_INC_HALF_WORD  =1U,
    DMA_enCH_SRC_INC_WORD       =2U,
    DMA_enCH_SRC_INC_NO         =3U,
    DMA_enCH_SRC_INC_UNDEF      =0xFFFFFFFFU,
}DMA_nCH_SRC_INC;

typedef enum
{
    DMA_enCH_SRC_SIZE_BYTE      =0U,
    DMA_enCH_SRC_SIZE_HALF_WORD =1U,
    DMA_enCH_SRC_SIZE_WORD      =2U,
    DMA_enCH_SRC_SIZE_UNDEF     =0xFFFFFFFFU,
}DMA_nCH_SRC_SIZE;

typedef enum
{
    DMA_enCH_BURST_SIZE_1       =0U,
    DMA_enCH_BURST_SIZE_2       =1U,
    DMA_enCH_BURST_SIZE_4       =2U,
    DMA_enCH_BURST_SIZE_8       =3U,
    DMA_enCH_BURST_SIZE_16      =4U,
    DMA_enCH_BURST_SIZE_32      =5U,
    DMA_enCH_BURST_SIZE_64      =6U,
    DMA_enCH_BURST_SIZE_128     =7U,
    DMA_enCH_BURST_SIZE_256     =8U,
    DMA_enCH_BURST_SIZE_512     =9U,
    DMA_enCH_BURST_SIZE_1024    =10U,
    DMA_enCH_BURST_SIZE_UNDEF   =0xFFFFFFFFU,
}DMA_nCH_BURST_SIZE;

typedef enum
{
    DMA_enCH_BURST_OFF      =0U,
    DMA_enCH_BURST_ON       =1U,
    DMA_enCH_BURST_UNDEF   =0xFFFFFFFFU,
}DMA_nCH_BURST;

typedef enum
{
    DMA_enCH_MODE_STOP      =0U,
    DMA_enCH_MODE_BASIC     =1U,
    DMA_enCH_MODE_AUTO_REQ  =2U,
    DMA_enCH_MODE_PING_PONG =3U,
    DMA_enCH_MODE_MEM_SG    =4U,
    DMA_enCH_MODE_ALT_MEM_SG=5U,
    DMA_enCH_MODE_PER_SG    =6U,
    DMA_enCH_MODE_ALT_PER_SG=7U,
    DMA_enCH_MODE_UNDEF     =0xFFFFFFFFU,
}DMA_nCH_MODE;

typedef enum
{
    DMA_enCH_INTERRUPT_SOURCE_SOFTWARE  =0U,
    DMA_enCH_INTERRUPT_SOURCE_PERIPHERAL       =1U,
    DMA_enCH_INTERRUPT_SOURCE_MAX       =1U,
    DMA_enCH_INTERRUPT_SOURCE_UNDEF   =0xFFFFFFFFU,
}DMA_nCH_INTERRUPT_SOURCE;

typedef enum
{
    DMA_enCH_MODULE_0   = ((uint32_t)0U),
    DMA_enCH_MODULE_1   = ((uint32_t)1U),
    DMA_enCH_MODULE_2   = ((uint32_t)2U),
    DMA_enCH_MODULE_3   = ((uint32_t)3U),
    DMA_enCH_MODULE_4   = ((uint32_t)4U),
    DMA_enCH_MODULE_5   = ((uint32_t)5U),
    DMA_enCH_MODULE_6   = ((uint32_t)6U),
    DMA_enCH_MODULE_7   = ((uint32_t)7U),
    DMA_enCH_MODULE_8   = ((uint32_t)8U),
    DMA_enCH_MODULE_9   = ((uint32_t)9U),
    DMA_enCH_MODULE_10  = ((uint32_t)10U),
    DMA_enCH_MODULE_11  = ((uint32_t)11U),
    DMA_enCH_MODULE_12  = ((uint32_t)12U),
    DMA_enCH_MODULE_13  = ((uint32_t)13U),
    DMA_enCH_MODULE_14  = ((uint32_t)14U),
    DMA_enCH_MODULE_15  = ((uint32_t)15U),
    DMA_enCH_MODULE_16  = ((uint32_t)16U),
    DMA_enCH_MODULE_17  = ((uint32_t)17U),
    DMA_enCH_MODULE_18  = ((uint32_t)18U),
    DMA_enCH_MODULE_19  = ((uint32_t)19U),
    DMA_enCH_MODULE_20  = ((uint32_t)20U),
    DMA_enCH_MODULE_21  = ((uint32_t)21U),
    DMA_enCH_MODULE_22  = ((uint32_t)22U),
    DMA_enCH_MODULE_23  = ((uint32_t)23U),
    DMA_enCH_MODULE_24  = ((uint32_t)24U),
    DMA_enCH_MODULE_25  = ((uint32_t)25U),
    DMA_enCH_MODULE_26  = ((uint32_t)26U),
    DMA_enCH_MODULE_27  = ((uint32_t)27U),
    DMA_enCH_MODULE_28  = ((uint32_t)27U),
    DMA_enCH_MODULE_29  = ((uint32_t)29U),
    DMA_enCH_MODULE_30  = ((uint32_t)30U),
    DMA_enCH_MODULE_31  = ((uint32_t)31U),
    DMA_enCH_MODULE_MAX = ((uint32_t)31U),
    DMA_enCH_MODULE_UNDEF = 0xFFFFFFFFU,
}DMA_nCH_MODULE;

typedef enum
{
    DMA_enCHSRC_CH0_USB0EP1_RX  = ((uint32_t)DMA_enCH_ENCODER_0<<8U)| (uint32_t)DMA_enCH_MODULE_0,
    DMA_enCHSRC_CH0_UART2_RX    = ((uint32_t)DMA_enCH_ENCODER_1<<8U)| (uint32_t)DMA_enCH_MODULE_0,
    DMA_enCHSRC_CH0_GPTM4A      = ((uint32_t)DMA_enCH_ENCODER_3<<8U)| (uint32_t)DMA_enCH_MODULE_0,
    DMA_enCHSRC_CH0_SOFTWARE    =((uint32_t)DMA_enCH_ENCODER_4<<8U)| (uint32_t)DMA_enCH_MODULE_0,

    DMA_enCHSRC_CH1_USB0EP1_TX  = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_1,
    DMA_enCHSRC_CH1_UART2_TX    = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_1,
    DMA_enCHSRC_CH1_GPTM4B      = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_1,
    DMA_enCHSRC_CH1_SOFTWARE    = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_1,

    DMA_enCHSRC_CH2_USB0EP2_RX  = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_2,
    DMA_enCHSRC_CH2_GPTM3A      = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_2,
    DMA_enCHSRC_CH2_SOFTWARE    = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_2,

    DMA_enCHSRC_CH3_USB0EP2_TX  = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_3,
    DMA_enCHSRC_CH3_GPTM3B      = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_3,
    DMA_enCHSRC_CH3_SOFTWARE    = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_3,

    DMA_enCHSRC_CH4_USB0EP3_RX  = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_4,
    DMA_enCHSRC_CH4_GPTM2A      = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_4,
    DMA_enCHSRC_CH4_GPIOA       = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_4,
    DMA_enCHSRC_CH4_SOFTWARE    = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_4,

    DMA_enCHSRC_CH5_USB0EP3_TX  = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_5,
    DMA_enCHSRC_CH5_GPTM2B      = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_5,
    DMA_enCHSRC_CH5_GPIOB       = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_5,
    DMA_enCHSRC_CH5_SOFTWARE    = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_5,

    DMA_enCHSRC_CH6_GPTM2A      = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_6,
    DMA_enCHSRC_CH6_UART5_RX    = ((uint32_t)DMA_enCH_ENCODER_2<<8U)|(uint32_t)DMA_enCH_MODULE_6,
    DMA_enCHSRC_CH6_GPIOC       = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_6,
    DMA_enCHSRC_CH6_SOFTWARE    = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_6,

    DMA_enCHSRC_CH7_GPTM2B      = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_7,
    DMA_enCHSRC_CH7_UART5_TX    = ((uint32_t)DMA_enCH_ENCODER_2<<8U)|(uint32_t)DMA_enCH_MODULE_7,
    DMA_enCHSRC_CH7_GPIOD       = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_7,
    DMA_enCHSRC_CH7_SOFTWARE    = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_7,

    DMA_enCHSRC_CH8_UART0_RX    = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_8,
    DMA_enCHSRC_CH8_UART1_RX    = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_8,
    DMA_enCHSRC_CH8_GPTM5A      = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_8,
    DMA_enCHSRC_CH8_SOFTWARE    = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_8,

    DMA_enCHSRC_CH9_UART0_TX    = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_9,
    DMA_enCHSRC_CH9_UART1_TX    = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_9,
    DMA_enCHSRC_CH9_GPTM5B      = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_9,
    DMA_enCHSRC_CH9_SOFTWARE    = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_9,

    DMA_enCHSRC_CH10_SSI0_RX    = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_10,
    DMA_enCHSRC_CH10_SSI1_RX    = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_10,
    DMA_enCHSRC_CH10_UART6_RX   = ((uint32_t)DMA_enCH_ENCODER_2<<8U)|(uint32_t)DMA_enCH_MODULE_10,
    DMA_enCHSRC_CH10_GPWTM0A    = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_10,
    DMA_enCHSRC_CH10_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_10,

    DMA_enCHSRC_CH11_SSI0_TX    = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_11,
    DMA_enCHSRC_CH11_SSI1_TX    = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_11,
    DMA_enCHSRC_CH11_UART6_TX   = ((uint32_t)DMA_enCH_ENCODER_2<<8U)|(uint32_t)DMA_enCH_MODULE_11,
    DMA_enCHSRC_CH11_GPWTM0B    = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_11,
    DMA_enCHSRC_CH11_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_11,

    DMA_enCHSRC_CH12_UART2_RX   = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_12,
    DMA_enCHSRC_CH12_SSI2_RX    = ((uint32_t)DMA_enCH_ENCODER_2<<8U)|(uint32_t)DMA_enCH_MODULE_12,
    DMA_enCHSRC_CH12_GPWTM1A    = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_12,
    DMA_enCHSRC_CH12_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_12,

    DMA_enCHSRC_CH13_UART2_TX   = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_13,
    DMA_enCHSRC_CH13_SSI2_TX    = ((uint32_t)DMA_enCH_ENCODER_2<<8U)|(uint32_t)DMA_enCH_MODULE_13,
    DMA_enCHSRC_CH13_GPWTM1B    = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_13,
    DMA_enCHSRC_CH13_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_13,

    DMA_enCHSRC_CH14_ADC0_SS0   = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_14,
    DMA_enCHSRC_CH14_GPTM2A     = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_14,
    DMA_enCHSRC_CH14_SSI3_RX    = ((uint32_t)DMA_enCH_ENCODER_2<<8U)|(uint32_t)DMA_enCH_MODULE_14,
    DMA_enCHSRC_CH14_GPIOE      = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_14,
    DMA_enCHSRC_CH14_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_14,

    DMA_enCHSRC_CH15_ADC0_SS1   = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_15,
    DMA_enCHSRC_CH15_GPTM2B     = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_15,
    DMA_enCHSRC_CH15_SSI3_TX    = ((uint32_t)DMA_enCH_ENCODER_2<<8U)|(uint32_t)DMA_enCH_MODULE_15,
    DMA_enCHSRC_CH15_GPIOF      = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_15,
    DMA_enCHSRC_CH15_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_15,

    DMA_enCHSRC_CH16_ADC0_SS2   = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_16,
    DMA_enCHSRC_CH16_UART3_RX   = ((uint32_t)DMA_enCH_ENCODER_2<<8U)|(uint32_t)DMA_enCH_MODULE_16,
    DMA_enCHSRC_CH16_GPWTM2A    = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_16,
    DMA_enCHSRC_CH16_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_16,

    DMA_enCHSRC_CH17_ADC0_SS3   = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_17,
    DMA_enCHSRC_CH17_UART3_TX   = ((uint32_t)DMA_enCH_ENCODER_2<<8U)|(uint32_t)DMA_enCH_MODULE_17,
    DMA_enCHSRC_CH17_GPWTM2B    = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_17,
    DMA_enCHSRC_CH17_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_17,

    DMA_enCHSRC_CH18_GPTM0A     = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_18,
    DMA_enCHSRC_CH18_GPTM1A     = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_18,
    DMA_enCHSRC_CH18_UART4_RX   = ((uint32_t)DMA_enCH_ENCODER_2<<8U)|(uint32_t)DMA_enCH_MODULE_18,
    DMA_enCHSRC_CH18_GPIOB      = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_18,
    DMA_enCHSRC_CH18_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_18,

    DMA_enCHSRC_CH19_GPTM0B     = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_19,
    DMA_enCHSRC_CH19_GPTM1B     = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_19,
    DMA_enCHSRC_CH19_UART4_TX   = ((uint32_t)DMA_enCH_ENCODER_2<<8U)|(uint32_t)DMA_enCH_MODULE_19,
    DMA_enCHSRC_CH19_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_19,

    DMA_enCHSRC_CH20_GPTM1A     = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_20,
    DMA_enCHSRC_CH20_UART7_RX   = ((uint32_t)DMA_enCH_ENCODER_2<<8U)|(uint32_t)DMA_enCH_MODULE_20,
    DMA_enCHSRC_CH20_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_20,

    DMA_enCHSRC_CH21_GPTM1B     = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_21,
    DMA_enCHSRC_CH21_UART7_TX   = ((uint32_t)DMA_enCH_ENCODER_2<<8U)|(uint32_t)DMA_enCH_MODULE_21,
    DMA_enCHSRC_CH21_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_21,

    DMA_enCHSRC_CH22_UART1_RX   = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_22,
    DMA_enCHSRC_CH22_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_22,

    DMA_enCHSRC_CH23_UART1_TX   = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_23,
    DMA_enCHSRC_CH23_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_23,

    DMA_enCHSRC_CH24_SSI1_RX    = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_24,
    DMA_enCHSRC_CH24_ADC1_SS0   = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_24,
    DMA_enCHSRC_CH24_GPWTM3A    = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_24,
    DMA_enCHSRC_CH24_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_24,

    DMA_enCHSRC_CH25_SSI1_TX    = ((uint32_t)DMA_enCH_ENCODER_0<<8U)|(uint32_t)DMA_enCH_MODULE_25,
    DMA_enCHSRC_CH25_ADC1_SS1   = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_25,
    DMA_enCHSRC_CH25_GPWTM3B    = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_25,
    DMA_enCHSRC_CH25_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_25,

    DMA_enCHSRC_CH26_ADC1_SS2   = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_26,
    DMA_enCHSRC_CH26_GPWTM4A    = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_26,
    DMA_enCHSRC_CH26_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_26,

    DMA_enCHSRC_CH27_ADC1_SS3   = ((uint32_t)DMA_enCH_ENCODER_1<<8U)|(uint32_t)DMA_enCH_MODULE_27,
    DMA_enCHSRC_CH27_GPWTM4B    = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_27,
    DMA_enCHSRC_CH27_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_27,

    DMA_enCHSRC_CH28_GPWTM5A    = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_28,
    DMA_enCHSRC_CH28_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_28,

    DMA_enCHSRC_CH29_GPWTM5A    = ((uint32_t)DMA_enCH_ENCODER_3<<8U)|(uint32_t)DMA_enCH_MODULE_29,
    DMA_enCHSRC_CH29_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_29,

    DMA_enCHSRC_CH30_SOFTWARE   = ((uint32_t)DMA_enCH_ENCODER_4<<8U)|(uint32_t)DMA_enCH_MODULE_30,
    DMA_enCHSRC_UNDEF =  0xFFFFFFFF,
}DMA_nCHSRC;

#if 0
/*
 * This Struct is already defined in DMA_StructRegisterChannel.h
 *  DMACHCTL_TypeDef
 *  */
typedef struct
{
    uint32_t transferMode   :3;
    uint32_t useBurst           :1;
    uint32_t transferSize      :10;
    uint32_t burstSize          :4;
    uint32_t reserved           :6;
    uint32_t sourceSize        :2;
    uint32_t sourceInc          :2;
    uint32_t destSize            :2;
    uint32_t destInc              :2;
}DMA_CONTROL_Typedef;
#endif

typedef struct
{
    DMA_nCH_MODE             enTransferMode;
    DMA_nCH_BURST            enUseBurst;
    uint32_t                            u32TransferSize;
    DMA_nCH_BURST_SIZE   enBurstSize;
    DMA_nCH_SRC_SIZE        enSourceSize;
    DMA_nCH_SRC_INC         enSourceInc;
    DMA_nCH_DST_SIZE       enDestSize;
    DMA_nCH_DST_INC        enDestInc;
}DMA_CONTROL_Typedef;

typedef struct
{
    DMA_nCH_REQTYPE enReqType;
    DMA_nCH_PERIPHERAL enPeripheralEnable;
    DMA_nCH_CTL enControlStructure;
    DMA_nCH_PRIO enChannelPriority;
    DMA_nCH_ENCODER enEncoder;
}DMA_CONFIG_Typedef;


#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_ENUM_H_ */
