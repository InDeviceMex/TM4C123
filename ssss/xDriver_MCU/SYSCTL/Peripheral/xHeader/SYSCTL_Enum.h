/**
 *
 * @file SYSCTL_Enum.h
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
 * @verbatim 20 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_ENUM_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    SYSCTL_enOK = 0UL,
    SYSCTL_enERROR = 1UL,
}SYSCTL_nSTATUS;

typedef enum
{
    SYSCTL_enPLL = 0UL,
    SYSCTL_enOSC = 1UL,
}SYSCTL_nBYPASS;

typedef enum
{
    SYSCTL_enNOPRESENT = 0UL,
    SYSCTL_enPRESENT = 1UL,
}SYSCTL_nPERIPHERAL_PRESENT;

typedef enum
{
    SYSCTL_enNOREADY = 0UL,
    SYSCTL_enREADY = 1UL,
}SYSCTL_nPERIPHERAL_READY;

typedef enum
{
    SYSCTL_enRESET_EXT = 0x00001UL,
    SYSCTL_enRESET_POR = 0x00002UL,
    SYSCTL_enRESET_BOR = 0x00004UL,
    SYSCTL_enRESET_WDT0 = 0x00008UL,
    SYSCTL_enRESET_SW = 0x00010UL,
    SYSCTL_enRESET_WDT1 = 0x00020UL,
    SYSCTL_enRESET_MOSCFAIL = 0x00040UL,
    SYSCTL_enRESET_ALL = 0x0007FUL,
}SYSCTL_nRESET;

typedef enum
{
    SYSCTL_enWDT0 = (uint32_t) (((uint32_t) 0UL << 8UL) | (0UL)),
    SYSCTL_enWDT1 = (uint32_t) (((uint32_t) 0UL << 8UL) | (1UL)),

    SYSCTL_enTIMER0 = (uint32_t) (((uint32_t) 1UL << 8UL) | (0UL)),
    SYSCTL_enTIMER1 = (uint32_t) (((uint32_t) 1UL << 8UL) | (1UL)),
    SYSCTL_enTIMER2 = (uint32_t) (((uint32_t) 1UL << 8UL) | (2UL)),
    SYSCTL_enTIMER3 = (uint32_t) (((uint32_t) 1UL << 8UL) | (3UL)),
    SYSCTL_enTIMER4 = (uint32_t) (((uint32_t) 1UL << 8UL) | (4UL)),
    SYSCTL_enTIMER5 = (uint32_t) (((uint32_t) 1UL << 8UL) | (5UL)),

    SYSCTL_enGPIOA = (uint32_t) (((uint32_t) 2UL << 8UL) | (0UL)),
    SYSCTL_enGPIOB = (uint32_t) (((uint32_t) 2UL << 8UL) | (1UL)),
    SYSCTL_enGPIOC = (uint32_t) (((uint32_t) 2UL << 8UL) | (2UL)),
    SYSCTL_enGPIOD = (uint32_t) (((uint32_t) 2UL << 8UL) | (3UL)),
    SYSCTL_enGPIOE = (uint32_t) (((uint32_t) 2UL << 8UL) | (4UL)),
    SYSCTL_enGPIOF = (uint32_t) (((uint32_t) 2UL << 8UL) | (5UL)),
    SYSCTL_enGPIOG = (uint32_t) (((uint32_t) 2UL << 8UL) | (6UL)),
    SYSCTL_enGPIOH = (uint32_t) (((uint32_t) 2UL << 8UL) | (7UL)),
    SYSCTL_enGPIOJ = (uint32_t) (((uint32_t) 2UL << 8UL) | (8UL)),
    SYSCTL_enGPIOK = (uint32_t) (((uint32_t) 2UL << 8UL) | (9UL)),
    SYSCTL_enGPIOL = (uint32_t) (((uint32_t) 2UL << 8UL) | (10UL)),
    SYSCTL_enGPIOM = (uint32_t) (((uint32_t) 2UL << 8UL) | (11UL)),
    SYSCTL_enGPION = (uint32_t) (((uint32_t) 2UL << 8UL) | (12UL)),
    SYSCTL_enGPIOP = (uint32_t) (((uint32_t) 2UL << 8UL) | (13UL)),
    SYSCTL_enGPIOQ = (uint32_t) (((uint32_t) 2UL << 8UL) | (14UL)),

    SYSCTL_enUDMA = (uint32_t) (((uint32_t) 3UL << 8UL) | (0UL)),

    SYSCTL_enHIB = (uint32_t) (((uint32_t) 5UL << 8UL) | (0UL)),

    SYSCTL_enUART0 = (uint32_t) (((uint32_t) 6UL << 8UL) | (0UL)),
    SYSCTL_enUART1 = (uint32_t) (((uint32_t) 6UL << 8UL) | (1UL)),
    SYSCTL_enUART2 = (uint32_t) (((uint32_t) 6UL << 8UL) | (2UL)),
    SYSCTL_enUART3 = (uint32_t) (((uint32_t) 6UL << 8UL) | (3UL)),
    SYSCTL_enUART4 = (uint32_t) (((uint32_t) 6UL << 8UL) | (4UL)),
    SYSCTL_enUART5 = (uint32_t) (((uint32_t) 6UL << 8UL) | (5UL)),
    SYSCTL_enUART6 = (uint32_t) (((uint32_t) 6UL << 8UL) | (6UL)),
    SYSCTL_enUART7 = (uint32_t) (((uint32_t) 6UL << 8UL) | (7UL)),

    SYSCTL_enSSI0 = (uint32_t) (((uint32_t) 7UL << 8UL) | (0UL)),
    SYSCTL_enSSI1 = (uint32_t) (((uint32_t) 7UL << 8UL) | (1UL)),
    SYSCTL_enSSI2 = (uint32_t) (((uint32_t) 7UL << 8UL) | (2UL)),
    SYSCTL_enSSI3 = (uint32_t) (((uint32_t) 7UL << 8UL) | (3UL)),

    SYSCTL_enI2C0 = (uint32_t) (((uint32_t) 8UL << 8UL) | (0UL)),
    SYSCTL_enI2C1 = (uint32_t) (((uint32_t) 8UL << 8UL) | (1UL)),
    SYSCTL_enI2C2 = (uint32_t) (((uint32_t) 8UL << 8UL) | (2UL)),
    SYSCTL_enI2C3 = (uint32_t) (((uint32_t) 8UL << 8UL) | (3UL)),
    SYSCTL_enI2C4 = (uint32_t) (((uint32_t) 8UL << 8UL) | (4UL)),
    SYSCTL_enI2C5 = (uint32_t) (((uint32_t) 8UL << 8UL) | (5UL)),

    SYSCTL_enUSB = (uint32_t) (((uint32_t) 10UL << 8UL) | (0UL)),

    SYSCTL_enCAN0 = (uint32_t) (((uint32_t) 13UL << 8UL) | (0UL)),
    SYSCTL_enCAN1 = (uint32_t) (((uint32_t) 13UL << 8UL) | (1UL)),

    SYSCTL_enADC0 = (uint32_t) (((uint32_t) 14UL << 8UL) | (0UL)),
    SYSCTL_enADC1 = (uint32_t) (((uint32_t) 14UL << 8UL) | (1UL)),

    SYSCTL_enACMP = (uint32_t) (((uint32_t) 15UL << 8UL) | (0UL)),

    SYSCTL_enPWM0 = (uint32_t) (((uint32_t) 16UL << 8UL) | (0UL)),
    SYSCTL_enPWM1 = (uint32_t) (((uint32_t) 16UL << 8UL) | (1UL)),

    SYSCTL_enQEI0 = (uint32_t) (((uint32_t) 17UL << 8UL) | (0UL)),
    SYSCTL_enQEI1 = (uint32_t) (((uint32_t) 17UL << 8UL) | (1UL)),

    SYSCTL_enEEPROM = (uint32_t) (((uint32_t) 22UL << 8UL) | (0UL)),

    SYSCTL_enWTIMER0 = (uint32_t) (((uint32_t) 23UL << 8UL) | (0UL)),
    SYSCTL_enWTIMER1 = (uint32_t) (((uint32_t) 23UL << 8UL) | (1UL)),
    SYSCTL_enWTIMER2 = (uint32_t) (((uint32_t) 23UL << 8UL) | (2UL)),
    SYSCTL_enWTIMER3 = (uint32_t) (((uint32_t) 23UL << 8UL) | (3UL)),
    SYSCTL_enWTIMER4 = (uint32_t) (((uint32_t) 23UL << 8UL) | (4UL)),
    SYSCTL_enWTIMER5 = (uint32_t) (((uint32_t) 23UL << 8UL) | (5UL)),
}SYSCTL_nPERIPHERAL;

typedef enum
{
    SYSCTL_enGPIOBUSA = 0x0001UL,
    SYSCTL_enGPIOBUSB = 0x0002UL,
    SYSCTL_enGPIOBUSC = 0x0004UL,
    SYSCTL_enGPIOBUSD = 0x0008UL,
    SYSCTL_enGPIOBUSE = 0x0010UL,
    SYSCTL_enGPIOBUSF = 0x0020UL,
    SYSCTL_enGPIOBUSALL = 0x003FUL,
}SYSCTL_nGPIOBUS;

typedef enum
{
    SYSCTL_enGPIOBUS_APB = 0x0000UL,
    SYSCTL_enGPIOBUS_AHB = 0x0001UL,
}SYSCTL_nGPIOBUS_CURRENT;




#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_ENUM_H_ */
