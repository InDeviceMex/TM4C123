/**
 *
 * @file GPIO_Enum.h
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_ENUM_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    GPIO_enSTATUS_OK = 0UL,
    GPIO_enSTATUS_ERROR = 1UL,
    GPIO_enSTATUS_UNDEF = 0xFFFFFFFFUL,
} GPIO_nSTATUS;

typedef enum
{
    GPIO_enINT_NOOCCUR = 0UL,
    GPIO_enINT_OCCUR = 1UL,
    GPIO_enINT_STATUS_UNDEF = 0xFFFFFFFFUL,
} GPIO_nINT_STATUS;

typedef enum
{
    GPIO_enNOREADY = 0UL,
    GPIO_enREADY = 1UL,
} GPIO_nREADY;

typedef enum
{
    GPIO_enBUS_APB = 0UL,
    GPIO_enBUS_AHB = 1UL,
    GPIO_enBUS_MAX = 2UL,
} GPIO_nBUS;
typedef enum
{
    GPIO_enPORT_A = 0UL,
    GPIO_enPORT_B = 1UL,
    GPIO_enPORT_C = 2UL,
    GPIO_enPORT_D = 3UL,
    GPIO_enPORT_E = 4UL,
    GPIO_enPORT_F = 5UL,
    GPIO_enPORT_MAX = 6UL,
} GPIO_nPORT;
typedef enum
{
    GPIO_enPIN_0 = 0x1UL,
    GPIO_enPIN_1 = 0x2UL,
    GPIO_enPIN_2 = 0x4UL,
    GPIO_enPIN_3 = 0x8UL,
    GPIO_enPIN_4 = 0x10UL,
    GPIO_enPIN_5 = 0x20UL,
    GPIO_enPIN_6 = 0x40UL,
    GPIO_enPIN_7 = 0x80UL,
    GPIO_enPIN_ALL = 0xFFUL,
    GPIO_enPIN_UNDEF = 0xFFFFFFFFUL,
} GPIO_nPIN;

typedef enum
{
    GPIO_enPIN_NUMBER0 = 0x0UL,
    GPIO_enPIN_NUMBER1 = 0x1UL,
    GPIO_enPIN_NUMBER2 = 0x2UL,
    GPIO_enPIN_NUMBER3 = 0x3UL,
    GPIO_enPIN_NUMBER4 = 0x4UL,
    GPIO_enPIN_NUMBER5 = 0x5UL,
    GPIO_enPIN_NUMBER6 = 0x6UL,
    GPIO_enPIN_NUMBER7 = 0x7UL,
    GPIO_enPIN_NUMBER_MAX = 0x8UL,
} GPIO_nPIN_NUMBER;

typedef enum
{
    GPIO_enDIR_INPUT = 0UL,
    GPIO_enDIR_OUTPUT = 1UL,
    GPIO_enDIR_UNDEF = 0xFFFFFFFFUL,
} GPIO_nDIR;

typedef enum
{
    GPIO_enSENSE_EDGE = 0UL,
    GPIO_enSENSE_LEVEL = 1UL,
    GPIO_enSENSE_UNDEF = 0xFFFFFFFFUL,
} GPIO_nSENSE;

typedef enum
{
    GPIO_enEDGE_FALLING = 0UL,
    GPIO_enEDGE_RISING = 1UL,
    GPIO_enEDGE_BOTH = 2UL,
    GPIO_enEDGE_UNDEF = 0xFFFFFFFFUL,
} GPIO_nEDGE;

typedef enum
{
    GPIO_enDRIVE_2mA = 0UL,
    GPIO_enDRIVE_4mA = 1UL,
    GPIO_enDRIVE_8mA = 2UL,
    GPIO_enDRIVE_8mA_SLR = (((uint32_t) 1UL << 8UL) | 2UL),
    GPIO_enDRIVE_UNDEF = 0xFFFFFFFFUL,
} GPIO_nDRIVE;

typedef enum
{
    GPIO_enLEVEL_LOW = 0UL,
    GPIO_enLEVEL_HIGH = 1UL,
    GPIO_enLEVEL_UNDEF = 0xFFFFFFFFUL,
} GPIO_nLEVEL;

typedef enum
{
    GPIO_enADC_TRIGGER_DIS = 0UL,
    GPIO_enADC_TRIGGER_EN = 1UL,
    GPIO_enADC_TRIGGER_UNDEF = 0xFFFFFFFFUL,
} GPIO_nADC_TRIGGER;

typedef enum
{
    GPIO_enDMA_TRIGGER_DIS = 0UL,
    GPIO_enDMA_TRIGGER_EN = 1UL,
    GPIO_enDMA_TRIGGER_UNDEF = 0xFFFFFFFFUL,
} GPIO_nDMA_TRIGGER;

typedef enum
{
    GPIO_enANALOG_MODE_DIS = 0UL,
    GPIO_enANALOG_MODE_EN = 1UL,
    GPIO_enANALOG_MODE_UNDEF = 0xFFFFFFFFUL,
} GPIO_nANALOG_MODE;

typedef enum
{
    GPIO_enALT_FUNCTION_GPIO = 0UL,
    GPIO_enALT_FUNCTION_PERIPHERAL = 1UL,
    GPIO_enALT_FUNCTION_UNDEF = 0xFFFFFFFFUL,
} GPIO_nALT_FUNCTION;

typedef enum
{
    GPIO_enDIGITAL_DIS = 0UL,
    GPIO_enDIGITAL_EN = 1UL,
    GPIO_enDIGITAL_UNDEF = 0xFFFFFFFFUL,
} GPIO_nDIGITAL;

typedef enum
{
    GPIO_enLOCK_UNLOCKED = 0UL,
    GPIO_enLOCK_LOCKED = 1UL,
    GPIO_enLOCK_UNDEF = 0xFFFFFFFFUL,
} GPIO_nLOCK;

typedef enum
{
    GPIO_enCOMMIT_DIS = 0UL,
    GPIO_enCOMMIT_EN = 1UL,
    GPIO_enCOMMIT_UNDEF = 0xFFFFFFFFUL,
} GPIO_nCOMMIT;

typedef enum
{
    GPIO_enOUTMODE_PP = 0UL,
    GPIO_enOUTMODE_OD = 1UL,
    GPIO_enOUTMODE_UNDEF = 0xFFFFFFFFUL,
} GPIO_nOUTMODE;
typedef enum
{
    GPIO_enRESMODE_INACTIVE = 0UL,
    GPIO_enRESMODE_PULLUP = 1UL,
    GPIO_enRESMODE_PULLDOWN = 2UL,
    GPIO_enRESMODE_UNDEF = 0xFFFFFFFFUL,
} GPIO_nRESMODE;

/*PORT PIN VALUE*/
typedef enum
{
    /*GPIOA*/
    GPIO_enGPIOA0 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enU0Rx = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (1UL)),
    GPIO_enCAN1Rx = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (8UL)),

    GPIO_enGPIOA1 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enU0Tx = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (1UL)),
    GPIO_enCAN1Tx = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (8UL)),

    GPIO_enGPIOA2 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enSSI0Clk = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (2UL)),

    GPIO_enGPIOA3 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),
    GPIO_enSSI0Fss = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (2UL)),

    GPIO_enGPIOA4 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),
    GPIO_enSSI0Rx = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (2UL)),

    GPIO_enGPIOA5 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),
    GPIO_enSSI0Tx = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (2UL)),

    GPIO_enGPIOA6 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),
    GPIO_enI2C1SCL = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (3UL)),
    GPIO_enM1PWM2 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (5UL)),

    GPIO_enGPIOA7 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),
    GPIO_enI2C1SDA = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (3UL)),
    GPIO_enM1PWM3 = (uint32_t) (((uint32_t) GPIO_enPORT_A << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (5UL)),

    /*GPIOB*/
    GPIO_enGPIOB0 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enU1Rx = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (1UL)),
    GPIO_enT2CCP0 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (7UL)),

    GPIO_enGPIOB1 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enU1Tx = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (1UL)),
    GPIO_enT2CCP1 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (7UL)),

    GPIO_enGPIOB2 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enI2C0SCL = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (3UL)),
    GPIO_enT3CCP0 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (7UL)),

    GPIO_enGPIOB3 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),
    GPIO_enI2C0SDA = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (3UL)),
    GPIO_enT3CCP1 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (7UL)),

    GPIO_enGPIOB4 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),
    GPIO_enSSI2Clk = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (2UL)),
    GPIO_enM0PWM2 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (4UL)),
    GPIO_enT1CCP0 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (7UL)),
    GPIO_enCAN0Rx = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (8UL)),

    GPIO_enGPIOB5 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),
    GPIO_enSSI2Fss = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (2UL)),
    GPIO_enM0PWM3 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (4UL)),
    GPIO_enT1CCP1 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (7UL)),
    GPIO_enCAN0Tx = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (8UL)),

    GPIO_enGPIOB6 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),
    GPIO_enSSI2Rx = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (2UL)),
    GPIO_enM0PWM0 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (4UL)),
    GPIO_enT0CCP0 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (7UL)),

    GPIO_enGPIOB7 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),
    GPIO_enSSI2Tx = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (2UL)),
    GPIO_enM0PWM1 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (4UL)),
    GPIO_enT0CCP1 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (7UL)),

    /*GPIOC*/
    GPIO_enGPIOC0 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enTCK = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (1UL)),
    GPIO_enT4CCP0 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (7UL)),

    GPIO_enGPIOC1 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enTMS = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (1UL)),
    GPIO_enT4CCP1 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (7UL)),

    GPIO_enGPIOC2 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enTDI = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (1UL)),
    GPIO_enT5CCP0 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (7UL)),

    GPIO_enGPIOC3 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),
    GPIO_enTDO = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (1UL)),
    GPIO_enT5CCP1 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (7UL)),

    GPIO_enGPIOC4 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),
    GPIO_enU4Rx = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (1UL)),
    GPIO_enU1Rx_C4 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (2UL)),
    GPIO_enM0PWM6 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (4UL)),
    GPIO_enIDX1 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (6UL)),
    GPIO_enWT0CCP0 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (7UL)),
    GPIO_enU1RTS_C4 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (8UL)),

    GPIO_enGPIOC5 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),
    GPIO_enU4Tx = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (1UL)),
    GPIO_enU1Tx_C4 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (2UL)),
    GPIO_enM0PWM7 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (4UL)),
    GPIO_enPhA1 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (6UL)),
    GPIO_enWT0CCP1 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (7UL)),
    GPIO_enU1CTS_C5 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (8UL)),

    GPIO_enGPIOC6 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),
    GPIO_enU3Rx = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (1UL)),
    GPIO_enPhB1 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (6UL)),
    GPIO_enWT1CCP0 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (7UL)),
    GPIO_enUSB0EPEN = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (8UL)),

    GPIO_enGPIOC7 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),
    GPIO_enU3Tx = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (1UL)),
    GPIO_enWT1CCP1 = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (7UL)),
    GPIO_enUSB0PFLT = (uint32_t) (((uint32_t) GPIO_enPORT_C << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (8UL)),

    /*GPIOD*/
    GPIO_enGPIOD0 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enSSI3Clk = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (1UL)),
    GPIO_enSSI1Clk = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (2UL)),
    GPIO_enI2C3SCL = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (3UL)),
    GPIO_enM0PWM6_D0 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (4UL)),
    GPIO_enM1PWM0 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (5UL)),
    GPIO_enWT2CCP0 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (7UL)),

    GPIO_enGPIOD1 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enSSI3Fss = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (1UL)),
    GPIO_enSSI1Fss = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (2UL)),
    GPIO_enI2C3SDA = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (3UL)),
    GPIO_enM0PWM7_D1 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (4UL)),
    GPIO_enM1PWM1 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (5UL)),
    GPIO_enWT2CCP1 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (7UL)),

    GPIO_enGPIOD2 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enSSI3Rx = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (1UL)),
    GPIO_enSSI1Rx = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (2UL)),
    GPIO_enM0FAULT0 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (4UL)),
    GPIO_enWT3CCP0 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (7UL)),
    GPIO_enUSB0EPEN_D2 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (8UL)),

    GPIO_enGPIOD3 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),
    GPIO_enSSI3Tx = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (1UL)),
    GPIO_enSSI1Tx = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (2UL)),
    GPIO_enIDX0 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (6UL)),
    GPIO_enWT3CCP1 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (7UL)),
    GPIO_enUSB0PFLT_D3 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (8UL)),

    GPIO_enGPIOD4 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),
    GPIO_enU6Rx = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (1UL)),
    GPIO_enWT4CCP0 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (7UL)),

    GPIO_enGPIOD5 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),
    GPIO_enU6Tx = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (1UL)),
    GPIO_enWT4CCP1 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (7UL)),

    GPIO_enGPIOD6 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),
    GPIO_enU2Rx = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (1UL)),
    GPIO_enM0FAULT0_D6 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (4UL)),
    GPIO_enPhA0 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (6UL)),
    GPIO_enWT5CCP0 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (7UL)),

    GPIO_enGPIOD7 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),
    GPIO_enU2Tx = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (1UL)),
    GPIO_enPhB0 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (6UL)),
    GPIO_enWT5CCP1 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (7UL)),
    GPIO_enNMI = (uint32_t) (((uint32_t) GPIO_enPORT_D << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (8UL)),

    /*GPIOE*/
    GPIO_enGPIOE0 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enU7Rx = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (1UL)),

    GPIO_enGPIOE1 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enU7Tx = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (1UL)),

    GPIO_enGPIOE2 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enGPIOE3 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),

    GPIO_enGPIOE4 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),
    GPIO_enU5Rx = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (1UL)),
    GPIO_enI2C2SCL = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (3UL)),
    GPIO_enM0PWM4 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (4UL)),
    GPIO_enM1PWM2_E4 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (5UL)),
    GPIO_enCAN0Rx_E4 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (8UL)),

    GPIO_enGPIOE5 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),
    GPIO_enU5Tx = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (1UL)),
    GPIO_enI2C2SDA = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (3UL)),
    GPIO_enM0PWM5 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (4UL)),
    GPIO_enM1PWM3_E5 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (5UL)),
    GPIO_enCAN0Tx_E5 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (8UL)),

    GPIO_enGPIOE6 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),
    GPIO_enGPIOE7 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),

    /*GPIOF*/
    GPIO_enGPIOF0 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (0UL)),
    GPIO_enU1RTS = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (1UL)),
    GPIO_enSSI1Rx_F0 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (2UL)),
    GPIO_enCAN0Rx_F0 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (3UL)),
    GPIO_enM1PWM4 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (5UL)),
    GPIO_enPhA0_F0 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (6UL)),
    GPIO_enT0CCP0_F0 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (7UL)),
    GPIO_enNMI_F0 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (8UL)),
    GPIO_enC0o = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER0 << 8UL) | (9UL)),

    GPIO_enGPIOF1 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (0UL)),
    GPIO_enU1CTS = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (1UL)),
    GPIO_enSSI1Tx_F1 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (2UL)),
    GPIO_enM1PWM5 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (5UL)),
    GPIO_enPhB0_F1 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (6UL)),
    GPIO_enT0CCP1_F1 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (7UL)),
    GPIO_enC1o = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (9UL)),
    GPIO_enTRD1 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER1 << 8UL) | (14UL)),

    GPIO_enGPIOF2 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (0UL)),
    GPIO_enSSI1Clk_F2 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (2UL)),
    GPIO_enM0FAULT0_F2 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (4UL)),
    GPIO_enM1PWM6 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (5UL)),
    GPIO_enT1CCP0_F2 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (7UL)),
    GPIO_enTRD0 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER2 << 8UL) | (14UL)),

    GPIO_enGPIOF3 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (0UL)),
    GPIO_enSSI1Fss_F3 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (2UL)),
    GPIO_enCAN0Tx_F3 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (3UL)),
    GPIO_enM1PWM7 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (5UL)),
    GPIO_enT1CCP1_F3 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (7UL)),
    GPIO_enTRCLK = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER3 << 8UL) | (14UL)),

    GPIO_enGPIOF4 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (0UL)),
    GPIO_enM1FAULT0 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (5UL)),
    GPIO_enIDX0_F4 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (6UL)),
    GPIO_enT2CCP0_F4 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (7UL)),
    GPIO_enUSB0EPEN_F4 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER4 << 8UL) | (8UL)),

    GPIO_enGPIOF5 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER5 << 8UL) | (0UL)),
    GPIO_enGPIOF6 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER6 << 8UL) | (0UL)),
    GPIO_enGPIOF7 = (uint32_t) (((uint32_t) GPIO_enPORT_F << 16UL) | ((uint32_t) GPIO_enPIN_NUMBER7 << 8UL) | (0UL)),

    GPIO_enGPIO_UNDEF = 0xFFFFFFFFUL,
} GPIO_nDIGITAL_FUNCTION;

/*PORT PIN*/
typedef enum
{
    GPIO_enUSB0ID = (uint32_t) (((uint32_t) GPIO_enPORT_B << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER0)),
    GPIO_enUSB0VBUS = (uint32_t) (((uint32_t) GPIO_enPORT_B << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER1)),
    GPIO_enAIN10 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER4)),
    GPIO_enAIN11 = (uint32_t) (((uint32_t) GPIO_enPORT_B << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER5)),

    GPIO_enC1M = (uint32_t) (((uint32_t) GPIO_enPORT_C << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER4)),
    GPIO_enC1P = (uint32_t) (((uint32_t) GPIO_enPORT_C << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER5)),
    GPIO_enC0P = (uint32_t) (((uint32_t) GPIO_enPORT_C << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER6)),
    GPIO_enC0M = (uint32_t) (((uint32_t) GPIO_enPORT_C << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER7)),

    GPIO_enAIN7 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER0)),
    GPIO_enAIN6 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER1)),
    GPIO_enAIN5 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER2)),
    GPIO_enAIN4 = (uint32_t) (((uint32_t) GPIO_enPORT_D << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER3)),
    GPIO_enUSB0DM = (uint32_t) (((uint32_t) GPIO_enPORT_D << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER4)),
    GPIO_enUSB0DP = (uint32_t) (((uint32_t) GPIO_enPORT_D << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER5)),

    GPIO_enAIN3 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER0)),
    GPIO_enAIN2 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER1)),
    GPIO_enAIN1 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER2)),
    GPIO_enAIN0 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER3)),
    GPIO_enAIN9 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER4)),
    GPIO_enAIN8 = (uint32_t) (((uint32_t) GPIO_enPORT_E << 8UL) | ((uint32_t) GPIO_enPIN_NUMBER5)),
    GPIO_enAIN_UNDEF = 0xFFFFFFFFUL,
} GPIO_nANALOG_FUNCTION;

typedef enum
{
    GPIO_enPRI0 = 0UL,
    GPIO_enPRI1 = 1UL,
    GPIO_enPRI2 = 2UL,
    GPIO_enPRI3 = 3UL,
    GPIO_enPRI4 = 4UL,
    GPIO_enPRI5 = 5UL,
    GPIO_enPRI6 = 6UL,
    GPIO_enPRI7 = 7UL,
    GPIO_enPRI_MIN = 7UL,
    GPIO_enDEFAULT = 0xFFFFFFFFUL,
} GPIO_nPRIORITY;

typedef enum
{
    GPIO_enCONFIG_INPUT_2MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_2mA << 16UL) | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_2MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_4MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_4MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_4MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_4MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_4MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_4MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_8MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_8MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_8MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_8MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_8MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_8MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_8MA_SLR_PUSHPULL = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_8MA_SLR_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_8MA_SLR_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_INPUT_8MA_SLR_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_INPUT_8MA_SLR_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_INPUT_8MA_SLR_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_INPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_2MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_2MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_2MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_2mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_4MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_4MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_4MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_4MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_4MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_4MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_4mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_PUSHPULL = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0UL),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA_SLR << 16UL)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8UL)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4UL)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0UL),
    GPIO_enCONFIG_UNDEF = 0xFFFFFFFFUL,
} GPIO_nCONFIG;

typedef enum
{
    GPIO_enINT_CONFIG_EDGE_FALLING = ((uint32_t) GPIO_enSENSE_EDGE << 8UL) | ((uint32_t) GPIO_enEDGE_FALLING << 0UL),
    GPIO_enINT_CONFIG_EDGE_RISING = ((uint32_t) GPIO_enSENSE_EDGE << 8UL) | ((uint32_t) GPIO_enEDGE_RISING << 0UL),
    GPIO_enINT_CONFIG_EDGE_BOTH = ((uint32_t) GPIO_enSENSE_EDGE << 8UL) | ((uint32_t) GPIO_enEDGE_BOTH << 0UL),
    GPIO_enINT_CONFIG_LEVEL_LOW = ((uint32_t) GPIO_enSENSE_LEVEL << 8UL) | ((uint32_t) GPIO_enLEVEL_LOW << 0UL),
    GPIO_enINT_CONFIG_LEVEL_HIGH = ((uint32_t) GPIO_enSENSE_LEVEL << 8UL) | ((uint32_t) GPIO_enLEVEL_HIGH << 0UL),
    GPIO_enINT_CONFIG_UNDEF = 0xFFFFFFFFUL,
} GPIO_nINT_CONFIG;

typedef struct
{
        GPIO_nDRIVE enDrive;
        GPIO_nDIR enDirection;
        GPIO_nOUTMODE enOutputMode;
        GPIO_nRESMODE enResistorMode;
} GPIO_CONFIG_Typedef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_ENUM_H_ */
