/**
 *
 * @file SSI_Enum.h
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
 * @verbatim 16 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_XHEADER_SSI_ENUM_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_XHEADER_SSI_ENUM_H_

typedef enum
{
    SSI_enSTATUS_OK = 0UL,
    SSI_enSTATUS_ERROR = 1UL,
    SSI_enSTATUS_UNDEF = 0xFFFFFFFFUL,
}SSI_nSTATUS;

typedef enum
{
    SSI_enNOREADY = 0UL,
    SSI_enREADY = 1UL,
}SSI_nREADY;

typedef enum
{
    SSI_enMODULE_0 = 0UL,
    SSI_enMODULE_1 = 1UL,
    SSI_enMODULE_2 = 2UL,
    SSI_enMODULE_3 = 3UL,
    SSI_enMODULE_MAX = 4UL,
}SSI_nMODULE;

typedef enum
{
    SSI_enPRI0 = 0UL,
    SSI_enPRI1 = 1UL,
    SSI_enPRI2 = 2UL,
    SSI_enPRI3 = 3UL,
    SSI_enPRI4 = 4UL,
    SSI_enPRI5 = 5UL,
    SSI_enPRI6 = 6UL,
    SSI_enPRI7 = 7UL,
    SSI_enDEFAULT = 0xFFFFFFFFUL,
}SSI_nPRIORITY;

typedef enum
{
    SSI_enINTERRUPT_RECEIVE_OVERRUN = 0UL,
    SSI_enINTERRUPT_RECEIVE_TIMEOUT = 1UL,
    SSI_enINTERRUPT_RECEIVE = 2UL,
    SSI_enINTERRUPT_TRANSMIT = 3UL,
    SSI_enINTERRUPT_MAX = 4UL,
}SSI_nINTERRUPT;

typedef enum
{
    SSI_enINT_SOURCE_RECEIVE_OVERRUN = 0x1UL,
    SSI_enINT_SOURCE_RECEIVE_TIMEOUT = 0x2UL,
    SSI_enINT_SOURCE_RECEIVE = 0x4UL,
    SSI_enINT_SOURCE_TRANSMIT = 0x8UL,
    SSI_enINT_SOURCE_ALL = 0xFUL,
}SSI_nINT_SOURCE;

typedef enum
{
    SSI_enINT_NOOCCUR = 0UL,
    SSI_enINT_OCCUR = 1UL,
    SSI_enINT_STATUS_UNDEF = 0xFFFFFFFFUL,
} SSI_nINT_STATUS;

typedef enum
{
    SSI_enLENGTH_4BITS = 3UL,
    SSI_enLENGTH_5BITS = 4UL,
    SSI_enLENGTH_6BITS = 5UL,
    SSI_enLENGTH_7BITS = 6UL,
    SSI_enLENGTH_8BITS = 7UL,
    SSI_enLENGTH_9BITS = 8UL,
    SSI_enLENGTH_10BITS = 9UL,
    SSI_enLENGTH_11BITS = 10UL,
    SSI_enLENGTH_12BITS = 11UL,
    SSI_enLENGTH_13BITS = 12UL,
    SSI_enLENGTH_14BITS = 13UL,
    SSI_enLENGTH_15BITS = 14UL,
    SSI_enLENGTH_16BITS = 15UL,
    SSI_enLENGTH_UNDEF = 0xFFFFFFFFUL,
}SSI_nLENGTH;

typedef enum
{
    SSI_enFORMAT_FREESCALE = 0UL,
    SSI_enFORMAT_TEXAS_INSTRUMENTS = 1UL,
    SSI_enFORMAT_MICROWIRE = 2UL,
    SSI_enFORMAT_UNDEF = 0xFFFFFFFFUL,
}SSI_nFORMAT;

typedef enum
{
    SSI_enCLOCK_POLARITY_LOW = 0UL,
    SSI_enCLOCK_POLARITY_HIGH = 1UL,
    SSI_enCLOCK_POLARITY_UNDEF = 0xFFFFFFFFUL,
}SSI_nCLOCK_POLARITY;

typedef enum
{
    SSI_enCLOCK_PHASE_FIRST = 0UL,
    SSI_enCLOCK_PHASE_SECOND = 1UL,
    SSI_enCLOCK_PHASE_UNDEF = 0xFFFFFFFFUL,
}SSI_nCLOCK_PHASE;

typedef enum
{
    SSI_enLOOPBACK_DIS = 0UL,
    SSI_enLOOPBACK_EN = 1UL,
    SSI_enLOOPBACK_UNDEF = 0xFFFFFFFFUL,
}SSI_nLOOPBACK;

typedef enum
{
    SSI_enENABLE_STOP = 0UL,
    SSI_enENABLE_START = 1UL,
    SSI_enENABLE_UNDEF = 0xFFFFFFFFUL,
}SSI_nENABLE;

typedef enum
{
    SSI_enMODE_MASTER = 0UL,
    SSI_enMODE_SLAVE = 1UL,
    SSI_enMODE_UNDEF = 0xFFFFFFFFUL,
}SSI_nMODE;

typedef enum
{
    SSI_enEOT_FIFO = 0UL,
    SSI_enEOT_ALL = 1UL,
    SSI_enEOT_UNDEF = 0xFFFFFFFFUL,
}SSI_nEOT;

typedef enum
{
    SSI_enDMA_DIS = 0UL,
    SSI_enDMA_EN = 1UL,
    SSI_enDMA_UNDEF = 0xFFFFFFFFUL,
}SSI_nDMA;

typedef enum
{
    SSI_enCLOCK_SYSCLK = 0UL,
    SSI_enCLOCK_PIOSC = 5UL,
    SSI_enCLOCK_UNDEF = 0xFFFFFFFFUL,
}SSI_nCLOCK;

typedef enum
{
    SSI_enBUSY_IDLE = 0UL,
    SSI_enBUSY_BUSY = 1UL,
    SSI_enBUSY_UNDEF = 0xFFFFFFFFUL,
}SSI_nBUSY;

typedef enum
{
    SSI_enFIFO_NO_EMPTY = 0UL,
    SSI_enFIFO_EMPTY = 1UL,
    SSI_enFIFO_EMPTY_UNDEF = 0xFFFFFFFFUL,
}SSI_nFIFO_EMPTY;

typedef enum
{
    SSI_enFIFO_NO_FULL = 0UL,
    SSI_enFIFO_FULL = 1UL,
    SSI_enFIFO_FULL_UNDEF = 0xFFFFFFFFUL,
}SSI_nFIFO_FULL;

typedef enum
{
    SSI_enLINE_SELECT_PRIMARY = 0UL,
    SSI_enLINE_SELECT_ALT = 1UL,
    SSI_enLINE_SELECT_UNDEF = 0xFFFFFFFFUL,
}SSI_nLINE_SELECT;

typedef enum
{
    SSI_enLINE_DIS = 0UL,
    SSI_enLINE_EN = 1UL,
    SSI_enLINE_UNDEF = 0xFFFFFFFFUL,
}SSI_nLINE;

typedef struct
{
    SSI_nEOT enEndOfTransmission;
    SSI_nLOOPBACK enLoopback;
    SSI_nLINE enRxLine;
    SSI_nLINE enTxLine;
    SSI_nLINE enClkLine;
    SSI_nLINE enFssLine;
}SSI_CONTROL_TypeDef;

typedef struct
{
    SSI_nLINE_SELECT enRx;
    SSI_nLINE_SELECT enTx;
    SSI_nLINE_SELECT enClk;
    SSI_nLINE_SELECT enFss;
}SSI_LINE_TypeDef;

typedef struct
{
    SSI_nFORMAT enFormat;
    SSI_nCLOCK_PHASE enClockPhase;
    SSI_nCLOCK_POLARITY enClockPolarity;
    SSI_nLENGTH enLengthData;
}SSI_FRAME_CONTROL_TypeDef;

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_XHEADER_SSI_ENUM_H_ */
