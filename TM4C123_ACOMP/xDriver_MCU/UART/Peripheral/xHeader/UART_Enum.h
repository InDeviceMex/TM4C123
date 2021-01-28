/**
 *
 * @file UART_Enum.h
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
 * @verbatim 22 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_UART_PERIPHERAL_XHEADER_UART_ENUM_H_
#define XDRIVER_MCU_UART_PERIPHERAL_XHEADER_UART_ENUM_H_

typedef enum
{
    UART_enOK = 0U,
    UART_enERROR = 1U,
}UART_nSTATUS;

typedef enum
{
    UART_enNOREADY = 0U,
    UART_enREADY = 1U,
}UART_nREADY;

typedef enum
{
    UART_enMODULE_0 = 0U,
    UART_enMODULE_1 = 1U,
    UART_enMODULE_2 = 2U,
    UART_enMODULE_3 = 3U,
    UART_enMODULE_4 = 4U,
    UART_enMODULE_5 = 5U,
    UART_enMODULE_6 = 6U,
    UART_enMODULE_7 = 7U,
    UART_enMODULE_MAX = 8U,
}UART_nMODULE;

typedef enum
{
    UART_enPRI0=0U,
    UART_enPRI1=1U,
    UART_enPRI2=2U,
    UART_enPRI3=3U,
    UART_enPRI4=4U,
    UART_enPRI5=5U,
    UART_enPRI6=6U,
    UART_enPRI7=7U,
    UART_enDEFAULT=0xFFFFFFFFU,
}UART_nPRIORITY;

typedef enum
{
    UART_enINTERRUPT_CLEAR_TO_SEND=0U,
    UART_enINTERRUPT_RECEIVE=1U,
    UART_enINTERRUPT_TRANSMIT=2U,
    UART_enINTERRUPT_RECEIVE_TIMEOUT=3U,
    UART_enINTERRUPT_FRAME_ERROR=4U,
    UART_enINTERRUPT_PARITY_ERROR=5U,
    UART_enINTERRUPT_BREAK_ERROR=6U,
    UART_enINTERRUPT_OVERRUN_ERROR=7U,
    UART_enINTERRUPT_BIT9_MODE=8U,
    UART_enINTERRUPT_MAX=9U,
}UART_nINTERRUPT;

typedef enum
{
    UART_enINT_CLEAR_TO_SEND=0x2U,
    UART_enINT_RECEIVE=0x10U,
    UART_enINT_TRANSMIT=0x20U,
    UART_enINT_RECEIVE_TIMEOUT=0x40U,
    UART_enINT_FRAME_ERROR=0x80U,
    UART_enINT_PARITY_ERROR=0x100U,
    UART_enINT_BREAK_ERROR=0x200U,
    UART_enINT_OVERRUN_ERROR=0x400U,
    UART_enINT_BIT9_MODE=0x1000U,
    UART_enINT_ALL=0x17F2U,
}UART_nINT;

typedef enum
{
    UART_enINT_NOOCCUR = 0U,
    UART_enINT_OCCUR = 1U,
    UART_enINT_STATUS_UNDEF = 0xFFFFFFFFU,
} UART_nINT_STATUS;

typedef enum
{
    UART_enERROR_NOOCCUR = 0U,
    UART_enERROR_OCCUR = 1U,
    UART_enERROR_UNDEF = 0xFFFFFFFFU,
}UART_nERROR;

typedef enum
{
    UART_enBUSY_IDLE = 0U,
    UART_enBUSY_BUSY = 1U,
    UART_enBUSY_UNDEF = 0xFFFFFFFFU,
}UART_nBUSY;

typedef enum
{
    UART_enCTS_NOASSERT = 0U,
    UART_enCTS_ASSERT = 1U,
    UART_enCTS_UNDEF = 0xFFFFFFFFU,
}UART_nCTS;

typedef enum
{
    UART_enFIFO_DIS = 0U,
    UART_enFIFO_ENA = 1U,
    UART_enFIFO_UNDEF = 0xFFFFFFFFU,
}UART_nFIFO;

typedef enum
{
    UART_enFIFO_EMPTY_NO = 0U,
    UART_enFIFO_EMPTY_YES = 1U,
    UART_enFIFO_EMPTY_UNDEF = 0xFFFFFFFFU,
}UART_nFIFO_EMPTY;

typedef enum
{
    UART_enFIFO_FULL_NO = 0U,
    UART_enFIFO_FULL_YES = 1U,
    UART_enFIFO_FULL_UNDEF = 0xFFFFFFFFU,
}UART_nFIFO_FULL;

typedef enum
{
    UART_enBREAK_DIS = 0U,
    UART_enBREAK_ACTIVE = 1U,
    UART_enBREAK_UNDEF = 0xFFFFFFFFU,
}UART_nBREAK;

typedef enum
{
    UART_enPARITY_DIS = 0U,
    UART_enPARITY_ENA = 1U,
    UART_enPARITY_UNDEF = 0xFFFFFFFFU,
}UART_nPARITY;

typedef enum
{
    UART_enPARITY_STICK_DIS = 0U,
    UART_enPARITY_STICK_ENA = 1U,
    UART_enPARITY_STICK_UNDEF = 0xFFFFFFFFU,
}UART_nPARITY_STICK;

typedef enum
{
    UART_enPARITY_TYPE_ODD = 0U,
    UART_enPARITY_TYPE_EVEN = 1U,
    UART_enPARITY_TYPE_UNDEF = 0xFFFFFFFFU,
}UART_nPARITY_TYPE;

typedef enum
{
    UART_enSTOP_ONE = 0U,
    UART_enSTOP_TWO = 1U,
    UART_enSTOP_UNDEF = 0xFFFFFFFFU,
}UART_nSTOP;

typedef enum
{
    UART_enLENGTH_5BITS = 0U,
    UART_enLENGTH_6BITS = 1U,
    UART_enLENGTH_7BITS = 2U,
    UART_enLENGTH_8BITS = 3U,
    UART_enLENGTH_UNDEF = 0xFFFFFFFFU,
}UART_nLENGTH;

typedef struct
{
        UART_nPARITY enParity;
        UART_nPARITY_TYPE enParityType;
        UART_nPARITY_STICK enParityStick;
}UART_PARITY_TypeDef;

typedef struct
{
        UART_nFIFO enFifo;
        UART_nSTOP enStop;
        UART_nPARITY enParity;
        UART_nPARITY_TYPE enParityType;
        UART_nPARITY_STICK enParityStick;
        UART_nLENGTH enLength;
}UART_LINE_CONTROL_TypeDef;

#endif /* XDRIVER_MCU_UART_PERIPHERAL_XHEADER_UART_ENUM_H_ */
