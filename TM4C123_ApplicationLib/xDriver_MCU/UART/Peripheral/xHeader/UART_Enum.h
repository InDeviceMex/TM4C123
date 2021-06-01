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
    UART_enSTATUS_OK = 0UL,
    UART_enSTATUS_ERROR = 1UL,
    UART_enSTATUS_UNDEF = 0xFFFFFFFFUL,
}UART_nSTATUS;

typedef enum
{
    UART_enNOREADY = 0UL,
    UART_enREADY = 1UL,
}UART_nREADY;

typedef enum
{
    UART_enMODULE_0 = 0UL,
    UART_enMODULE_1 = 1UL,
    UART_enMODULE_2 = 2UL,
    UART_enMODULE_3 = 3UL,
    UART_enMODULE_4 = 4UL,
    UART_enMODULE_5 = 5UL,
    UART_enMODULE_6 = 6UL,
    UART_enMODULE_7 = 7UL,
    UART_enMODULE_MAX = 8UL,
}UART_nMODULE;

typedef enum
{
    UART_enPRI0 = 0UL,
    UART_enPRI1 = 1UL,
    UART_enPRI2 = 2UL,
    UART_enPRI3 = 3UL,
    UART_enPRI4 = 4UL,
    UART_enPRI5 = 5UL,
    UART_enPRI6 = 6UL,
    UART_enPRI7 = 7UL,
    UART_enDEFAULT = 0xFFFFFFFFUL,
}UART_nPRIORITY;

typedef enum
{
    UART_enINTERRUPT_CLEAR_TO_SEND = 0UL,
    UART_enINTERRUPT_RECEIVE = 1UL,
    UART_enINTERRUPT_TRANSMIT = 2UL,
    UART_enINTERRUPT_RECEIVE_TIMEOUT = 3UL,
    UART_enINTERRUPT_FRAME_ERROR = 4UL,
    UART_enINTERRUPT_PARITY_ERROR = 5UL,
    UART_enINTERRUPT_BREAK_ERROR = 6UL,
    UART_enINTERRUPT_OVERRUN_ERROR = 7UL,
    UART_enINTERRUPT_BIT9_MODE = 8UL,
    UART_enINTERRUPT_MAX = 9UL,
}UART_nINTERRUPT;

typedef enum
{
    UART_enINT_SOURCE_CLEAR_TO_SEND = 0x2UL,
    UART_enINT_SOURCE_RECEIVE = 0x10UL,
    UART_enINT_SOURCE_TRANSMIT = 0x20UL,
    UART_enINT_SOURCE_RECEIVE_TIMEOUT = 0x40UL,
    UART_enINT_SOURCE_FRAME_ERROR = 0x80UL,
    UART_enINT_SOURCE_PARITY_ERROR = 0x100UL,
    UART_enINT_SOURCE_BREAK_ERROR = 0x200UL,
    UART_enINT_SOURCE_OVERRUN_ERROR = 0x400UL,
    UART_enINT_SOURCE_BIT9_MODE = 0x1000UL,
    UART_enINT_SOURCE_ALL = 0x17F2UL,
}UART_nINT_SOURCE;

typedef enum
{
    UART_enINT_NOOCCUR = 0UL,
    UART_enINT_OCCUR = 1UL,
    UART_enINT_STATUS_UNDEF = 0xFFFFFFFFUL,
} UART_nINT_STATUS;

typedef enum
{
    UART_enERROR_NOOCCUR = 0UL,
    UART_enERROR_OCCUR = 1UL,
    UART_enERROR_UNDEF = 0xFFFFFFFFUL,
}UART_nERROR;

typedef enum
{
    UART_enBUSY_IDLE = 0UL,
    UART_enBUSY_BUSY = 1UL,
    UART_enBUSY_UNDEF = 0xFFFFFFFFUL,
}UART_nBUSY;

typedef enum
{
    UART_enCTS_NOASSERT = 0UL,
    UART_enCTS_ASSERT = 1UL,
    UART_enCTS_UNDEF = 0xFFFFFFFFUL,
}UART_nCTS;

typedef enum
{
    UART_enFIFO_DIS = 0UL,
    UART_enFIFO_ENA = 1UL,
    UART_enFIFO_UNDEF = 0xFFFFFFFFUL,
}UART_nFIFO;

typedef enum
{
    UART_enFIFO_NO_EMPTY = 0UL,
    UART_enFIFO_EMPTY = 1UL,
    UART_enFIFO_EMPTY_UNDEF = 0xFFFFFFFFUL,
}UART_nFIFO_EMPTY;

typedef enum
{
    UART_enFIFO_NO_FULL = 0UL,
    UART_enFIFO_FULL = 1UL,
    UART_enFIFO_FULL_UNDEF = 0xFFFFFFFFUL,
}UART_nFIFO_FULL;

typedef enum
{
    UART_enBREAK_DIS = 0UL,
    UART_enBREAK_ACTIVE = 1UL,
    UART_enBREAK_UNDEF = 0xFFFFFFFFUL,
}UART_nBREAK;

typedef enum
{
    UART_enPARITY_DIS = 0UL,
    UART_enPARITY_ENA = 1UL,
    UART_enPARITY_UNDEF = 0xFFFFFFFFUL,
}UART_nPARITY;

typedef enum
{
    UART_enPARITY_STICK_DIS = 0UL,
    UART_enPARITY_STICK_ENA = 1UL,
    UART_enPARITY_STICK_UNDEF = 0xFFFFFFFFUL,
}UART_nPARITY_STICK;

typedef enum
{
    UART_enPARITY_TYPE_ODD = 0UL,
    UART_enPARITY_TYPE_ADDRESS = 0UL,
    UART_enPARITY_TYPE_EVEN = 1UL,
    UART_enPARITY_TYPE_DATA = 1UL,
    UART_enPARITY_TYPE_UNDEF = 0xFFFFFFFFUL,
}UART_nPARITY_TYPE;

typedef enum
{
    UART_enSTOP_ONE = 0UL,
    UART_enSTOP_TWO = 1UL,
    UART_enSTOP_UNDEF = 0xFFFFFFFFUL,
}UART_nSTOP;

typedef enum
{
    UART_enLENGTH_5BITS = 0UL,
    UART_enLENGTH_6BITS = 1UL,
    UART_enLENGTH_7BITS = 2UL,
    UART_enLENGTH_8BITS = 3UL,
    UART_enLENGTH_UNDEF = 0xFFFFFFFFUL,
}UART_nLENGTH;

typedef struct
{
        UART_nPARITY enParity;
        UART_nPARITY_TYPE enParityType;
        UART_nPARITY_STICK enParityStick;
}UART_PARITY_TypeDef;

typedef enum
{
    UART_enFIFO_LEVEL_2_16 = 0UL,
    UART_enFIFO_LEVEL_4_16 = 1UL,
    UART_enFIFO_LEVEL_8_16 = 2UL,
    UART_enFIFO_LEVEL_12_16 = 3UL,
    UART_enFIFO_LEVEL_14_16 = 4UL,
    UART_enFIFO_LEVEL_UNDEF = 0xFFFFFFFFUL,
}UART_nFIFO_LEVEL;

typedef enum
{
    UART_enDMA_DIS = 0UL,
    UART_enDMA_ENA = 1UL,
    UART_enDMA_UNDEF = 0xFFFFFFFFUL,
}UART_nDMA;

typedef enum
{
    UART_en9BIT_DIS = 0UL,
    UART_en9BIT_ENA = 1UL,
    UART_en9BIT_UNDEF = 0xFFFFFFFFUL,
}UART_n9BIT;

typedef enum
{
    UART_enHIGH_SPEED_DIS = 0UL,
    UART_enHIGH_SPEED_ENA = 1UL,
    UART_enHIGH_SPEED_UNDEF = 0xFFFFFFFFUL,
}UART_nHIGH_SPEED;

typedef enum
{
    UART_enMODE_NORMAL = 0UL,
    UART_enMODE_NORMAL_MP = 1UL,
    UART_enMODE_MODEM = 2UL,
    UART_enMODE_MODEM_MP = 3UL,
    UART_enMODE_SIR = 4UL,
    UART_enMODE_SIR_LP = 5UL,
    UART_enMODE_SIR_MP = 6UL,
    UART_enMODE_SIR_LP_MP = 7UL,
    UART_enMODE_SMART_CARD = 8UL,
    UART_enMODE_UNDEF = 0xFFFFFFFFUL,
}UART_nMODE;

typedef enum
{
    UART_enCLOCK_SYSCLK = 0UL,
    UART_enCLOCK_PIOSC = 5UL,
    UART_enCLOCK_UNDEF = 0xFFFFFFFFUL,
}UART_nCLOCK;

typedef enum
{
    UART_enENABLE_STOP = 0UL,
    UART_enENABLE_START = 1UL,
    UART_enENABLE_UNDEF = 0xFFFFFFFFUL,
}UART_nENABLE;

typedef enum
{
    UART_enLINE_DIS = 0UL,
    UART_enLINE_ENA = 1UL,
    UART_enLINE_UNDEF = 0xFFFFFFFFUL,
}UART_nLINE;

typedef enum
{
    UART_enLOOPBACK_DIS = 0UL,
    UART_enLOOPBACK_ENA = 1UL,
    UART_enLOOPBACK_UNDEF = 0xFFFFFFFFUL,
}UART_nLOOPBACK;

typedef enum
{
    UART_enEOT_FIFO = 0UL,
    UART_enEOT_ALL = 1UL,
    UART_enEOT_UNDEF = 0xFFFFFFFFUL,
}UART_nEOT;

typedef enum
{
    UART_enRTS_MODE_SOFT = 0UL,
    UART_enRTS_MODE_HARD = 1UL,
    UART_enRTS_MODE_UNDEF = 0xFFFFFFFFUL,
}UART_nRTS_MODE;

typedef enum
{
    UART_enCTS_MODE_SOFT = 0UL,
    UART_enCTS_MODE_HARD = 1UL,
    UART_enCTS_MODE_UNDEF = 0xFFFFFFFFUL,
}UART_nCTS_MODE;

typedef enum
{
    UART_enRTS_LEVEL_LOW = 0UL,
    UART_enRTS_LEVEL_HIGH = 1UL,
    UART_enRTS_LEVEL_UNDEF = 0xFFFFFFFFUL,
}UART_nRTS_LEVEL;

typedef enum
{
    UART_enSMART_DIS = 0UL,
    UART_enSMART_ENA = 1UL,
    UART_enSMART_UNDEF = 0xFFFFFFFFUL,
}UART_nSMART;

typedef enum
{
    UART_enSIR_DIS = 0UL,
    UART_enSIR_ENA = 1UL,
    UART_enSIR_UNDEF = 0xFFFFFFFFUL,
}UART_nSIR;

typedef enum
{
    UART_enSIR_LP_DIS = 0UL,
    UART_enSIR_LP_ENA = 1UL,
    UART_enSIR_LP_UNDEF = 0xFFFFFFFFUL,
}UART_nSIR_LP;

typedef enum
{
    UART_enLINE_SELECT_PRIMARY = 0UL,
    UART_enLINE_SELECT_ALT = 1UL,
    UART_enLINE_SELECT_UNDEF = 0xFFFFFFFFUL,
}UART_nLINE_SELECT;

typedef struct
{
        UART_nEOT enEndOfTransmission;
        UART_nLOOPBACK enLoopback;
        UART_nLINE enRxLine;
        UART_nLINE enTxLine;
        UART_nRTS_MODE enRTSMode;
        UART_nCTS_MODE enCTSMode;
}UART_CONTROL_TypeDef;

typedef struct
{
        UART_nLINE_SELECT enRx;
        UART_nLINE_SELECT enTx;
        UART_nLINE_SELECT enCTS;
        UART_nLINE_SELECT enRTS;
}UART_LINE_TypeDef;

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
