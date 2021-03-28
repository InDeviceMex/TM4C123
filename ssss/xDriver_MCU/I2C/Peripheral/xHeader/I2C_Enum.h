/**
 *
 * @file I2C_Enum.h
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
 * @verbatim 3 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_XHEADER_I2C_ENUM_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_XHEADER_I2C_ENUM_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    I2C_enSTATUS_OK = 0UL,
    I2C_enSTATUS_ERROR = 1UL,
    I2C_enSTATUS_UNDEF = 0xFFFFFFFFUL,
}I2C_nSTATUS;

typedef enum
{
    I2C_enNOREADY = 0UL,
    I2C_enREADY = 1UL,
}I2C_nREADY;

typedef enum
{
    I2C_enMODULE_0 = 0UL,
    I2C_enMODULE_1 = 1UL,
    I2C_enMODULE_2 = 2UL,
    I2C_enMODULE_3 = 3UL,
    I2C_enMODULE_MAX = 4UL,
}I2C_nMODULE;

typedef enum
{
    I2C_enPRI0 = 0UL,
    I2C_enPRI1 = 1UL,
    I2C_enPRI2 = 2UL,
    I2C_enPRI3 = 3UL,
    I2C_enPRI4 = 4UL,
    I2C_enPRI5 = 5UL,
    I2C_enPRI6 = 6UL,
    I2C_enPRI7 = 7UL,
    I2C_enDEFAULT = 0xFFFFFFFFUL,
}I2C_nPRIORITY;

typedef enum
{
    I2C_enMASTER_INTERRUPT_MASTER = 0UL,
    I2C_enMASTER_INTERRUPT_CLOCK_TIMEOUT = 1UL,
    I2C_enMASTER_INTERRUPT_MAX = 2UL,
}I2C_nMASTER_INTERRUPT;

typedef enum
{
    I2C_enMASTER_INT_SOURCE_MASTER = 0x1UL,
    I2C_enMASTER_INT_SOURCE_CLOCK_TIMEOUT = 0x2UL,
    I2C_enMASTER_INT_SOURCE_ALL = 0x3UL,
}I2C_nMASTER_INT_SOURCE;

typedef enum
{
    I2C_enSLAVE_INTERRUPT_DATA = 0UL,
    I2C_enSLAVE_INTERRUPT_START = 1UL,
    I2C_enSLAVE_INTERRUPT_STOP = 2UL,
    I2C_enSLAVE_INTERRUPT_MAX = 3UL,
}I2C_nSLAVE_INTERRUPT;

typedef enum
{
    I2C_enSLAVE_INT_SOURCE_DATA = 0x1UL,
    I2C_enSLAVE_INT_SOURCE_START = 0x2UL,
    I2C_enSLAVE_INT_SOURCE_STOP = 0x4UL,
    I2C_enSLAVE_INT_SOURCE_ALL = 0x7UL,
}I2C_nSLAVE_INT_SOURCE;

typedef enum
{
    I2C_enINT_NOOCCUR = 0UL,
    I2C_enINT_OCCUR = 1UL,
    I2C_enINT_STATUS_UNDEF = 0xFFFFFFFFUL,
} I2C_nINT_STATUS;

typedef enum
{
    I2C_enMODE_MASTER = 0UL,
    I2C_enMODE_SLAVE = 1UL,
    I2C_enMODE_MAX = 2UL,
    I2C_enMODE_UNDEF = 0xFFFFFFFFUL,
} I2C_nMODE;

typedef enum
{
    I2C_enALT_ADDRESS_DIS = 0UL,
    I2C_enALT_ADDRESS_ENA = 1UL,
    I2C_enALT_ADDRESS_UNDEF = 0xFFFFFFFFUL,
} I2C_nALT_ADDRESS;

typedef enum
{
    I2C_enSLAVE_ENABLE_DIS = 0UL,
    I2C_enSLAVE_ENABLE_ENA = 1UL,
    I2C_enSLAVE_ENABLE_UNDEF = 0xFFFFFFFFUL,
} I2C_nSLAVE_ENABLE;

typedef enum
{
    I2C_enSLAVE_ACK_ENABLE_DIS = 0UL,
    I2C_enSLAVE_ACK_ENABLE_ENA = 1UL,
    I2C_enSLAVE_ACK_ENABLE_UNDEF = 0xFFFFFFFFUL,
} I2C_nSLAVE_ACK_ENABLE;

typedef enum
{
    I2C_enSLAVE_ACK_VALUE_ACK = 0UL,
    I2C_enSLAVE_ACK_VALUE_NACK = 1UL,
    I2C_enSLAVE_ACK_VALUE_UNDEF = 0xFFFFFFFFUL,
} I2C_nSLAVE_ACK_VALUE;

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_XHEADER_I2C_ENUM_H_ */
