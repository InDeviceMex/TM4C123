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
    I2C_enINTERRUPT_MASTER_MASTER = 0UL,
    I2C_enINTERRUPT_MASTER_CLOCK_TIMEOUT = 1UL,
    I2C_enINTERRUPT_MASTER_MAX = 2UL,
}I2C_nINTERRUPT_MASTER;

typedef enum
{
    I2C_enINT_SOURCE_MASTER_MASTER = 0x1UL,
    I2C_enINT_SOURCE_MASTER_CLOCK_TIMEOUT = 0x2UL,
    I2C_enINT_SOURCE_MASTER_ALL = 0x3UL,
}I2C_nINT_SOURCE_MASTER;

typedef enum
{
    I2C_enINTERRUPT_SLAVE_DATA = 0UL,
    I2C_enINTERRUPT_SLAVE_START = 1UL,
    I2C_enINTERRUPT_SLAVE_STOP = 2UL,
    I2C_enINTERRUPT_SLAVE_MAX = 3UL,
}I2C_nINTERRUPT_SLAVE;

typedef enum
{
    I2C_enINT_SOURCE_SLAVE_DATA = 0x1UL,
    I2C_enINT_SOURCE_SLAVE_START = 0x2UL,
    I2C_enINT_SOURCE_SLAVE_STOP = 0x4UL,
    I2C_enINT_SOURCE_SLAVE_ALL = 0x7UL,
}I2C_nINT_SOURCE_SLAVE;

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

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_XHEADER_I2C_ENUM_H_ */
