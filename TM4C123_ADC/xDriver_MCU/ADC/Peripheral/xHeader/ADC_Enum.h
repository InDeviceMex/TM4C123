/**
 *
 * @file ADC_Enum.h
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
 * @verbatim 26 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_XHEADER_ADC_ENUM_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_XHEADER_ADC_ENUM_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    ADC_enOK = 0u,
    ADC_enERROR = 1u,
}ADC_nSTATUS;

typedef enum
{
    ADC_enNOREADY = 0u,
    ADC_enREADY = 1u,
}ADC_nREADY;

typedef enum
{
    ADC_enMODULE_0 = 0u,
    ADC_enMODULE_1 = 1u,
    ADC_enMODULE_MAX = 1u,
}ADC_nMODULE;

typedef enum
{
    ADC_enSTATE_IDLE = 0u,
    ADC_enSTATE_BUSY = 1u,
    ADC_enSTATE_UNDEF = 0xFFFFFFFFu,
}ADC_nSTATE;

typedef enum
{
    ADC_enPRI0=0u,
    ADC_enPRI1=1u,
    ADC_enPRI2=2u,
    ADC_enPRI3=3u,
    ADC_enPRI4=4u,
    ADC_enPRI5=5u,
    ADC_enPRI6=6u,
    ADC_enPRI7=7u,
    ADC_enDEFAULT=0xFFFFFFFFu,
}ADC_nPRIORITY;

typedef enum
{
    ADC_enSEQ_0 = 0u,
    ADC_enSEQ_1 = 1u,
    ADC_enSEQ_2 = 2u,
    ADC_enSEQ_3 = 3u,
    ADC_enSEQ_MAX = 3u,
    ADC_enSEQ_UNDEF = 0xFFFFFFFFu,
}ADC_nSEQ;

typedef enum
{
    ADC_enCOMP_0 = 0u,
    ADC_enCOMP_1 = 1u,
    ADC_enCOMP_2 = 2u,
    ADC_enCOMP_3 = 3u,
    ADC_enCOMP_4 = 4u,
    ADC_enCOMP_5 = 5u,
    ADC_enCOMP_6 = 6u,
    ADC_enCOMP_7 = 7u,
    ADC_enCOMP_MAX = 3u,
    ADC_enCOMP_UNDEF = 0xFFFFFFFFu,
}ADC_nCOMP;

typedef enum
{
    ADC_enINT_NOOCCUR        =0u,
    ADC_enINT_OCCUR          =1u,
    ADC_enINT_CLEAR          =1u,
    ADC_enINT_STATUS_UNDEF   =0xFFFFFFFFu,
}ADC_nINT_STATUS;

typedef enum
{
    ADC_enINT_SEQ0 = 0x01u,
    ADC_enINT_SEQ1 = 0x02u,
    ADC_enINT_SEQ2 = 0x04u,
    ADC_enINT_SEQ3 = 0x08u,

    ADC_enINT_COMP0 = 0x00010000u,
    ADC_enINT_COMP1 = 0x00020000u,
    ADC_enINT_COMP2 = 0x0004000u,
    ADC_enINT_COMP4 = 0x0008000u,
}ADC_nINT;

typedef enum
{
    ADC_enPHASE_0 = 0u,
    ADC_enPHASE_22_5 = 1u,
    ADC_enPHASE_45 = 2u,
    ADC_enPHASE_67_5= 3u,
    ADC_enPHASE_90= 4u,
    ADC_enPHASE_112_5 = 5u,
    ADC_enPHASE_135= 6u,
    ADC_enPHASE_157_5= 7u,
    ADC_enPHASE_180= 8u,
    ADC_enPHASE_202_5 = 9u,
    ADC_enPHASE_225 = 10u,
    ADC_enPHASE_247_5= 11u,
    ADC_enPHASE_270= 12u,
    ADC_enPHASE_292_5 = 13u,
    ADC_enPHASE_315= 14u,
    ADC_enPHASE_337_5= 15u,
    ADC_enPHASE_UNDEF = 0xFFFFFFFFu,
}ADC_nPHASE;

typedef enum
{
    ADC_enSYNC_DISABLE        =0u,
    ADC_enSYNC_ENABLE          =1u,
    ADC_enSYNC_UNDEF   =0xFFFFFFFFu,
}ADC_nSYNC;

typedef enum
{
    ADC_enGLOBAL_SYNC_NOEFFECT        =0u,
    ADC_enGLOBAL_SYNC_START       =1u,
    ADC_enGLOBAL_SYNC_UNDEF   =0xFFFFFFFFu,
}ADC_nGLOBAL_SYNC;

typedef enum
{
    ADC_enAVERAGE_DIS = 0u,
    ADC_enAVERAGE_2 = 1u,
    ADC_enAVERAGE_4 = 2u,
    ADC_enAVERAGE_8= 3u,
    ADC_enAVERAGE_16= 4u,
    ADC_enAVERAGE_32 = 5u,
    ADC_enAVERAGE_64= 6u,
    ADC_enAVERAGE_UNDEF = 0xFFFFFFFFu,
}ADC_nAVERAGE;

typedef enum
{
    ADC_enDITHER_DIS = 0u,
    ADC_enDITHER_EN = 1u,
    ADC_enDITHER_UNDEF = 0xFFFFFFFFu,
}ADC_nDITHER;

typedef enum
{
    ADC_enSEQ_ENABLE_DIS = 0u,
    ADC_enSEQ_ENABLE_ENA = 1u,
    ADC_enSEQ_ENABLE_UNDEF = 0xFFFFFFFFu,
}ADC_nSEQ_ENABLE;

typedef enum
{
    ADC_enSEQ_INT_DIS = 0u,
    ADC_enSEQ_INT_ENA = 1u,
    ADC_enSEQ_INT_UNDEF = 0xFFFFFFFFu,
}ADC_nSEQ_INT;

typedef enum
{
    ADC_enSEQ_OV_NOOCCUR = 0u,
    ADC_enSEQ_OV_OCCUR = 1u,
    ADC_enSEQ_OV_UNDEF = 0xFFFFFFFFu,
}ADC_nSEQ_OV;

typedef enum
{
    ADC_enSEQ_TRIGGER_SOFTWARE= 0u,
    ADC_enSEQ_TRIGGER_ANALOG_COMP0 = 1u,
    ADC_enSEQ_TRIGGER_ANALOG_COMP1 = 2u,
    ADC_enSEQ_TRIGGER_GPIO = 4u,
    ADC_enSEQ_TRIGGER_TIMER = 5u,
    ADC_enSEQ_TRIGGER_PWM0 = 6u,
    ADC_enSEQ_TRIGGER_PWM1 = 7u,
    ADC_enSEQ_TRIGGER_PWM2 = 8u,
    ADC_enSEQ_TRIGGER_PWM3 = 9u,
    ADC_enSEQ_TRIGGER_CONTINUE = 15u,
    ADC_enSEQ_TRIGGER_UNDEF = 0xFFFFFFFFu,
}ADC_nSEQ_TRIGGER;

typedef enum
{
    ADC_enSEQ_UV_NOOCCUR = 0u,
    ADC_enSEQ_UV_OCCUR = 1u,
    ADC_enSEQ_UV_UNDEF = 0xFFFFFFFFu,
}ADC_nSEQ_UV;

typedef enum
{
    ADC_enSEQ_PWM_MODULE0= 0u,
    ADC_enSEQ_PWM_MODULE1 = 1u,
    ADC_enSEQ_PWM_UNDEF = 0xFFFFFFFFu,
}ADC_nSEQ_PWM;

typedef enum
{
    ADC_enSEQ_PRIO_HIGH = 0u,
    ADC_enSEQ_PRIO_MEDIUM = 1u,
    ADC_enSEQ_PRIO_LOW = 2u,
    ADC_enSEQ_PRIO_VERY_LOW = 3u,
    ADC_enSEQ_PRIO_UNDEF = 0xFFFFFFFFu,
}ADC_nSEQ_PRIO;

typedef enum
{
    ADC_enSEQ_SAMPLE_NOEFFECT = 0u,
    ADC_enSEQ_SAMPLE_START = 1u,
    ADC_enSEQ_SAMPLE_UNDEF = 0xFFFFFFFFu,
}ADC_nSEQ_SAMPLE;

typedef enum
{
    ADC_enSEQ_INPUT_0 = 0u,
    ADC_enSEQ_INPUT_1 = 1u,
    ADC_enSEQ_INPUT_2 = 2u,
    ADC_enSEQ_INPUT_3 = 3u,
    ADC_enSEQ_INPUT_4 = 4u,
    ADC_enSEQ_INPUT_5 = 5u,
    ADC_enSEQ_INPUT_6 = 6u,
    ADC_enSEQ_INPUT_7 = 7u,
    ADC_enSEQ_INPUT_8 = 8u,
    ADC_enSEQ_INPUT_9 = 9u,
    ADC_enSEQ_INPUT_10 = 10u,
    ADC_enSEQ_INPUT_11 = 11u,
    ADC_enSEQ_INPUT_UNDEF = 0xFFFFFFFFu,
}ADC_nSEQ_INPUT;

typedef enum
{
    ADC_enSEQ_INPUT_GPIO_PE3 = 0u,
    ADC_enSEQ_INPUT_GPIO_PE2 = 1u,
    ADC_enSEQ_INPUT_GPIO_PE1 = 2u,
    ADC_enSEQ_INPUT_GPIO_PE0 = 3u,
    ADC_enSEQ_INPUT_GPIO_PD3 = 4u,
    ADC_enSEQ_INPUT_GPIO_PD2 = 5u,
    ADC_enSEQ_INPUT_GPIO_PD1 = 6u,
    ADC_enSEQ_INPUT_GPIO_PD0 = 7u,
    ADC_enSEQ_INPUT_GPIO_PE5 = 8u,
    ADC_enSEQ_INPUT_GPIO_PE4 = 9u,
    ADC_enSEQ_INPUT_GPIO_PB4 = 10u,
    ADC_enSEQ_INPUT_GPIO_PB5 = 11u,
    ADC_enSEQ_INPUT_GPIO_UNDEF = 0xFFFFFFFFu,
}ADC_nSEQ_INPUT_GPIO;

typedef enum
{
    ADC_enSEQ_INPUT_DIFF_DIS = 0u,
    ADC_enSEQ_INPUT_DIFF_EN = 1u,
    ADC_enSEQ_INPUT_DIFF_UNDEF = 0xFFFFFFFFu,
}ADC_nSEQ_INPUT_DIFF;

typedef enum
{
    ADC_enSEQ_INPUT_ENDED_DIS = 0u,
    ADC_enSEQ_INPUT_ENDED_EN = 1u,
    ADC_enSEQ_INPUT_ENDED_UNDEF = 0xFFFFFFFFu,
}ADC_nSEQ_INPUT_ENDED;

typedef enum
{
    ADC_enSEQ_INPUT_INT_DIS = 0u,
    ADC_enSEQ_INPUT_INT_EN = 1u,
    ADC_enSEQ_INPUT_INT_UNDEF = 0xFFFFFFFFu,
}ADC_nSEQ_INPUT_INT;

typedef enum
{
    ADC_enSEQ_FIFO_FULL = 0u,
    ADC_enSEQ_FIFO_EMPTY = 1u,
    ADC_enSEQ_FIFO_INT_UNDEF = 0xFFFFFFFFu,
}ADC_nSEQ_FIFO;


#endif /* XDRIVER_MCU_ADC_PERIPHERAL_XHEADER_ADC_ENUM_H_ */
