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

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_XHEADER_I2C_ENUM_H_ */
