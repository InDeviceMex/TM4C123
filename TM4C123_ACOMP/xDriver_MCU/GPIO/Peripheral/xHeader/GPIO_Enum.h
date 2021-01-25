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
    GPIO_enSTATUS_OK = 0U,
    GPIO_enSTATUS_ERROR = 1U,
    GPIO_enSTATUS_UNDEF = 0xFFFFFFFFU,
} GPIO_nSTATUS;

typedef enum
{
    GPIO_enINT_NOOCCUR = 0U,
    GPIO_enINT_OCCUR = 1U,
    GPIO_enINT_STATUS_UNDEF = 0xFFFFFFFFU,
} GPIO_nINT_STATUS;

typedef enum
{
    GPIO_enNOREADY = 0U, GPIO_enREADY = 1U,
} GPIO_nREADY;

typedef enum
{
    GPIO_enBUS_APB = 0U, GPIO_enBUS_AHB = 1U, GPIO_enBUS_MAX = 1U,
} GPIO_nBUS;
typedef enum
{
    GPIO_enPORT_A = 0U,
    GPIO_enPORT_B = 1U,
    GPIO_enPORT_C = 2U,
    GPIO_enPORT_D = 3U,
    GPIO_enPORT_E = 4U,
    GPIO_enPORT_F = 5U,
    GPIO_enPORT_MAX = 5U,
} GPIO_nPORT;
typedef enum
{
    GPIO_enPIN_0 = 0x1U,
    GPIO_enPIN_1 = 0x2U,
    GPIO_enPIN_2 = 0x4U,
    GPIO_enPIN_3 = 0x8U,
    GPIO_enPIN_4 = 0x10U,
    GPIO_enPIN_5 = 0x20U,
    GPIO_enPIN_6 = 0x40U,
    GPIO_enPIN_7 = 0x80U,
    GPIO_enPIN_ALL = 0xFFU,
    GPIO_enPIN_UNDEF = 0xFFFFFFFFU,
} GPIO_nPIN;

typedef enum
{
    GPIO_enPIN_NUMBER0 = 0x0U,
    GPIO_enPIN_NUMBER1 = 0x1U,
    GPIO_enPIN_NUMBER2 = 0x2U,
    GPIO_enPIN_NUMBER3 = 0x3U,
    GPIO_enPIN_NUMBER4 = 0x4U,
    GPIO_enPIN_NUMBER5 = 0x5U,
    GPIO_enPIN_NUMBER6 = 0x6U,
    GPIO_enPIN_NUMBER7 = 0x7U,
    GPIO_enPIN_NUMBER_MAX = 0x7U,
} GPIO_nPIN_NUMBER;

typedef enum
{
    GPIO_enDIR_INPUT = 0U,
    GPIO_enDIR_OUTPUT = 1U,
    GPIO_enDIR_UNDEF = 0xFFFFFFFFU,
} GPIO_nDIR;

typedef enum
{
    GPIO_enSENSE_EDGE = 0U,
    GPIO_enSENSE_LEVEL = 1U,
    GPIO_enSENSE_UNDEF = 0xFFFFFFFFU,
} GPIO_nSENSE;

typedef enum
{
    GPIO_enEDGE_FALLING = 0U,
    GPIO_enEDGE_RISING = 1U,
    GPIO_enEDGE_BOTH = 2U,
    GPIO_enEDGE_UNDEF = 0xFFFFFFFFU,
} GPIO_nEDGE;

typedef enum
{
    GPIO_enDRIVE_2mA = 0U,
    GPIO_enDRIVE_4mA = 1U,
    GPIO_enDRIVE_8mA = 2U,
    GPIO_enDRIVE_8mA_SLR = (((uint32_t) 1u << 8U) | 2U),
    GPIO_enDRIVE_UNDEF = 0xFFFFFFFFU,
} GPIO_nDRIVE;

typedef enum
{
    GPIO_enLEVEL_LOW = 0U,
    GPIO_enLEVEL_HIGH = 1U,
    GPIO_enLEVEL_UNDEF = 0xFFFFFFFFU,
} GPIO_nLEVEL;

typedef enum
{
    GPIO_enOUTMODE_PP = 0U,
    GPIO_enOUTMODE_OD = 1U,
    GPIO_enOUTMODE_UNDEF = 0xFFFFFFFFU,
} GPIO_nOUTMODE;
typedef enum
{
    GPIO_enRESMODE_INACTIVE = 0U,
    GPIO_enRESMODE_PULLUP = 1U,
    GPIO_enRESMODE_PULLDOWN = 2U,
    GPIO_enRESMODE_UNDEF = 0xFFFFFFFFU,
} GPIO_nRESMODE;

/*PORT PIN VALUE*/
typedef enum
{
    /*GPIOA*/
    GPIO_enGPIOA0 = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (0U)),
    GPIO_enU0Rx = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (1U)),
    GPIO_enCAN1Rx = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (8U)),

    GPIO_enGPIOA1 = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (0U)),
    GPIO_enU0Tx = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (1U)),
    GPIO_enCAN1Tx = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (8U)),

    GPIO_enGPIOA2 = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (0U)),
    GPIO_enSSI0Clk = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (2U)),

    GPIO_enGPIOA3 = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (0U)),
    GPIO_enSSI0Fss = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (2U)),

    GPIO_enGPIOA4 = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (0U)),
    GPIO_enSSI0Rx = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (2U)),

    GPIO_enGPIOA5 = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (0U)),
    GPIO_enSSI0Tx = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (2U)),

    GPIO_enGPIOA6 = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (0U)),
    GPIO_enI2C1SCL = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (3U)),
    GPIO_enM1PWM2 = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (5U)),

    GPIO_enGPIOA7 = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 7u * 4U) << 8U) | (0U)),
    GPIO_enI2C1SDA = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 7u * 4U) << 8U) | (3U)),
    GPIO_enM1PWM3 = (uint32_t) (((uint32_t) 0u << 16U)
            | (((uint32_t) 7u * 4U) << 8U) | (5U)),

    /*GPIOB*/
    GPIO_enGPIOB0 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (0U)),
    GPIO_enU1Rx = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (1U)),
    GPIO_enT2CCP0 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (7U)),

    GPIO_enGPIOB1 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (0U)),
    GPIO_enU1Tx = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (1U)),
    GPIO_enT2CCP1 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (7U)),

    GPIO_enGPIOB2 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (0U)),
    GPIO_enI2C0SCL = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (3U)),
    GPIO_enT3CCP0 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (7U)),

    GPIO_enGPIOB3 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (0U)),
    GPIO_enI2C0SDA = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (3U)),
    GPIO_enT3CCP1 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (7U)),

    GPIO_enGPIOB4 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (0U)),
    GPIO_enSSI2Clk = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (2U)),
    GPIO_enM0PWM2 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (4U)),
    GPIO_enT1CCP0 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (7U)),
    GPIO_enCAN0Rx = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (8U)),

    GPIO_enGPIOB5 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (0U)),
    GPIO_enSSI2Fss = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (2U)),
    GPIO_enM0PWM3 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (4U)),
    GPIO_enT1CCP1 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (7U)),
    GPIO_enCAN0Tx = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (8U)),

    GPIO_enGPIOB6 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (0U)),
    GPIO_enSSI2Rx = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (2U)),
    GPIO_enM0PWM0 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (4U)),
    GPIO_enT0CCP0 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (7U)),

    GPIO_enGPIOB7 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 7u * 4U) << 8U) | (0U)),
    GPIO_enSSI2Tx = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 7u * 4U) << 8U) | (2U)),
    GPIO_enM0PWM1 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 7u * 4U) << 8U) | (4U)),
    GPIO_enT0CCP1 = (uint32_t) (((uint32_t) 1u << 16U)
            | (((uint32_t) 7u * 4U) << 8U) | (7U)),

    /*GPIOC*/
    GPIO_enGPIOC0 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (0U)),
    GPIO_enTCK = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (1U)),
    GPIO_enT4CCP0 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (7U)),

    GPIO_enGPIOC1 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (0U)),
    GPIO_enTMS = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (1U)),
    GPIO_enT4CCP1 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (7U)),

    GPIO_enGPIOC2 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (0U)),
    GPIO_enTDI = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (1U)),
    GPIO_enT5CCP0 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (7U)),

    GPIO_enGPIOC3 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (0U)),
    GPIO_enTDO = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (1U)),
    GPIO_enT5CCP1 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (7U)),

    GPIO_enGPIOC4 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (0U)),
    GPIO_enU4Rx = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (1U)),
    GPIO_enU1Rx_C4 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (2U)),
    GPIO_enM0PWM6 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (4U)),
    GPIO_enIDX1 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (6U)),
    GPIO_enWT0CCP0 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (7U)),
    GPIO_enU1RTS = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (8U)),

    GPIO_enGPIOC5 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (0U)),
    GPIO_enU4Tx = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (1U)),
    GPIO_enU1Tx_C4 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (2U)),
    GPIO_enM0PWM7 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (4U)),
    GPIO_enPhA1 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (6U)),
    GPIO_enWT0CCP1 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (7U)),
    GPIO_enU1CTS = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (8U)),

    GPIO_enGPIOC6 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (0U)),
    GPIO_enU3Rx = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (1U)),
    GPIO_enPhB1 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (6U)),
    GPIO_enWT1CCP0 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (7U)),
    GPIO_enUSB0EPEN = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (8U)),

    GPIO_enGPIOC7 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 7u * 4U) << 8U) | (0U)),
    GPIO_enU3Tx = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 7u * 4U) << 8U) | (1U)),
    GPIO_enWT1CCP1 = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 7u * 4U) << 8U) | (7U)),
    GPIO_enUSB0PFLT = (uint32_t) (((uint32_t) 2u << 16U)
            | (((uint32_t) 7u * 4U) << 8U) | (8U)),

    /*GPIOD*/
    GPIO_enGPIOD0 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (0U)),
    GPIO_enSSI3Clk = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (1U)),
    GPIO_enSSI1Clk = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (2U)),
    GPIO_enI2C3SCL = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (3U)),
    GPIO_enM0PWM6_D0 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (4U)),
    GPIO_enM1PWM0 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (5U)),
    GPIO_enWT2CCP0 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (7U)),

    GPIO_enGPIOD1 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (0U)),
    GPIO_enSSI3Fss = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (1U)),
    GPIO_enSSI1Fss = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (2U)),
    GPIO_enI2C3SDA = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (3U)),
    GPIO_enM0PWM7_D1 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (4U)),
    GPIO_enM1PWM1 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (5U)),
    GPIO_enWT2CCP1 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (7U)),

    GPIO_enGPIOD2 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (0U)),
    GPIO_enSSI3Rx = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (1U)),
    GPIO_enSSI1Rx = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (2U)),
    GPIO_enM0FAULT0 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (4U)),
    GPIO_enWT3CCP0 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (7U)),
    GPIO_enUSB0EPEN_D2 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (8U)),

    GPIO_enGPIOD3 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (0U)),
    GPIO_enSSI3Tx = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (1U)),
    GPIO_enSSI1Tx = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (2U)),
    GPIO_enIDX0 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (6U)),
    GPIO_enWT3CCP1 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (7U)),
    GPIO_enUSB0PFLT_D3 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (8U)),

    GPIO_enGPIOD4 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (0U)),
    GPIO_enU6Rx = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (1U)),
    GPIO_enWT4CCP0 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (7U)),

    GPIO_enGPIOD5 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (0U)),
    GPIO_enU6Tx = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (1U)),
    GPIO_enWT4CCP1 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (7U)),

    GPIO_enGPIOD6 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (0U)),
    GPIO_enU2Rx = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (1U)),
    GPIO_enM0FAULT0_D6 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (4U)),
    GPIO_enPhA0 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (6U)),
    GPIO_enWT5CCP0 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (7U)),

    GPIO_enGPIOD7 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 7u * 4U) << 8U) | (0U)),
    GPIO_enU2Tx = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 7u * 4U) << 8U) | (1U)),
    GPIO_enPhB0 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 7u * 4U) << 8U) | (6U)),
    GPIO_enWT5CCP1 = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 7u * 4U) << 8U) | (7U)),
    GPIO_enNMI = (uint32_t) (((uint32_t) 3u << 16U)
            | (((uint32_t) 7u * 4U) << 8U) | (8U)),

    /*GPIOE*/
    GPIO_enGPIOE0 = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (0U)),
    GPIO_enU7Rx = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (1U)),

    GPIO_enGPIOE1 = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (0U)),
    GPIO_enU7Tx = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (1U)),

    GPIO_enGPIOE2 = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (0U)),
    GPIO_enGPIOE3 = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (0U)),

    GPIO_enGPIOE4 = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (0U)),
    GPIO_enU5Rx = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (1U)),
    GPIO_enI2C2SCL = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (3U)),
    GPIO_enM0PWM4 = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (4U)),
    GPIO_enM1PWM2_E4 = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (5U)),
    GPIO_enCAN0Rx_E4 = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (8U)),

    GPIO_enGPIOE5 = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (0U)),
    GPIO_enU5Tx = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (1U)),
    GPIO_enI2C2SDA = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (3U)),
    GPIO_enM0PWM5 = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (4U)),
    GPIO_enM1PWM3_E5 = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (5U)),
    GPIO_enCAN0Tx_E5 = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (8U)),

    GPIO_enGPIOE6 = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (0U)),
    GPIO_enGPIOE7 = (uint32_t) (((uint32_t) 4u << 16U)
            | (((uint32_t) 7u * 4U) << 8U) | (0U)),

    /*GPIOF*/
    GPIO_enGPIOF0 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (0U)),
    GPIO_enU1RTS_F0 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (1U)),
    GPIO_enSSI1Rx_F0 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (2U)),
    GPIO_enCAN0Rx_F0 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (3U)),
    GPIO_enM1PWM4 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (5U)),
    GPIO_enPhA0_F0 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (6U)),
    GPIO_enT0CCP0_F0 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (7U)),
    GPIO_enNMI_F0 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (8U)),
    GPIO_enC0o = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 0u * 4U) << 8U) | (9U)),

    GPIO_enGPIOF1 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (0U)),
    GPIO_enU1CTS_F1 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (1U)),
    GPIO_enSSI1Tx_F1 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (2U)),
    GPIO_enM1PWM5 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (5U)),
    GPIO_enPhB0_F1 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (6U)),
    GPIO_enT0CCP1_F1 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (7U)),
    GPIO_enC1o = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (9U)),
    GPIO_enTRD1 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 1u * 4U) << 8U) | (14U)),

    GPIO_enGPIOF2 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (0U)),
    GPIO_enSSI1Clk_F2 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (2U)),
    GPIO_enM0FAULT0_F2 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (4U)),
    GPIO_enM1PWM6 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (5U)),
    GPIO_enT1CCP0_F2 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (7U)),
    GPIO_enTRD0 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 2u * 4U) << 8U) | (14U)),

    GPIO_enGPIOF3 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (0U)),
    GPIO_enSSI1Fss_F3 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (2U)),
    GPIO_enCAN0Tx_F3 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (3U)),
    GPIO_enM1PWM7 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (5U)),
    GPIO_enT1CCP1_F3 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (7U)),
    GPIO_enTRCLK = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 3u * 4U) << 8U) | (14U)),

    GPIO_enGPIOF4 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (0U)),
    GPIO_enM1FAULT0 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (5U)),
    GPIO_enIDX0_F4 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (6U)),
    GPIO_enT2CCP0_F4 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (7U)),
    GPIO_enUSB0EPEN_F4 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 4u * 4U) << 8U) | (8U)),

    GPIO_enGPIOF5 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 5u * 4U) << 8U) | (0U)),
    GPIO_enGPIOF6 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 6u * 4U) << 8U) | (0U)),
    GPIO_enGPIOF7 = (uint32_t) (((uint32_t) 5u << 16U)
            | (((uint32_t) 7u * 4U) << 8U) | (0U)),
} GPIO_nDIGITAL_FUNCTION;

/*PORT PIN*/
typedef enum
{
    GPIO_enUSB0ID = (uint32_t) (((uint32_t) 1u << 8U) | (0U)),
    GPIO_enUSB0VBUS = (uint32_t) (((uint32_t) 1u << 8U) | (1U)),
    GPIO_enAIN10 = (uint32_t) (((uint32_t) 1u << 8U) | (4U)),
    GPIO_enAIN11 = (uint32_t) (((uint32_t) 1u << 8U) | (5U)),

    GPIO_enC1M = (uint32_t) (((uint32_t) 2u << 8U) | (4U)),
    GPIO_enC1P = (uint32_t) (((uint32_t) 2u << 8U) | (5U)),
    GPIO_enC0P = (uint32_t) (((uint32_t) 2u << 8U) | (6U)),
    GPIO_enC0M = (uint32_t) (((uint32_t) 2u << 8U) | (7U)),

    GPIO_enAIN7 = (uint32_t) (((uint32_t) 3u << 8U) | (0U)),
    GPIO_enAIN6 = (uint32_t) (((uint32_t) 3u << 8U) | (1U)),
    GPIO_enAIN5 = (uint32_t) (((uint32_t) 3u << 8U) | (2U)),
    GPIO_enAIN4 = (uint32_t) (((uint32_t) 3u << 8U) | (3U)),
    GPIO_enUSB0DM = (uint32_t) (((uint32_t) 3u << 8U) | (4U)),
    GPIO_enUSB0DP = (uint32_t) (((uint32_t) 3u << 8U) | (5U)),

    GPIO_enAIN3 = (uint32_t) (((uint32_t) 4u << 8U) | (0U)),
    GPIO_enAIN2 = (uint32_t) (((uint32_t) 4u << 8U) | (1U)),
    GPIO_enAIN1 = (uint32_t) (((uint32_t) 4u << 8U) | (2U)),
    GPIO_enAIN0 = (uint32_t) (((uint32_t) 4u << 8U) | (3U)),
    GPIO_enAIN9 = (uint32_t) (((uint32_t) 4u << 8U) | (4U)),
    GPIO_enAIN8 = (uint32_t) (((uint32_t) 4u << 8U) | (5U)),
} GPIO_nANALOG_FUNCTION;

typedef enum
{
    GPIO_enPRI0 = 0U,
    GPIO_enPRI1 = 1U,
    GPIO_enPRI2 = 2U,
    GPIO_enPRI3 = 3U,
    GPIO_enPRI4 = 4U,
    GPIO_enPRI5 = 5U,
    GPIO_enPRI6 = 6U,
    GPIO_enPRI7 = 7U,
    GPIO_enDEFAULT = 0xFFFFFFFFU,
} GPIO_nPRIORITY;

typedef enum
{
    GPIO_enCONFIG_INPUT_2MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_2mA << 16)
            | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0),
    GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_2mA << 16)
            | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0),
    GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_2mA
            << 16) | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0),
    GPIO_enCONFIG_INPUT_2MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_2mA << 16)
            | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0),
    GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_2mA
            << 16) | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0),
    GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_2mA
            << 16) | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0),
    GPIO_enCONFIG_INPUT_4MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_4mA << 16)
            | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0),
    GPIO_enCONFIG_INPUT_4MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_4mA << 16)
            | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0),
    GPIO_enCONFIG_INPUT_4MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_4mA
            << 16) | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0),
    GPIO_enCONFIG_INPUT_4MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_4mA << 16)
            | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0),
    GPIO_enCONFIG_INPUT_4MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_4mA
            << 16) | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0),
    GPIO_enCONFIG_INPUT_4MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_4mA
            << 16) | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0),
    GPIO_enCONFIG_INPUT_8MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_8mA << 16)
            | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0),
    GPIO_enCONFIG_INPUT_8MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA << 16)
            | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0),
    GPIO_enCONFIG_INPUT_8MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA
            << 16) | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0),
    GPIO_enCONFIG_INPUT_8MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_8mA << 16)
            | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0),
    GPIO_enCONFIG_INPUT_8MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA
            << 16) | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0),
    GPIO_enCONFIG_INPUT_8MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA
            << 16) | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0),
    GPIO_enCONFIG_INPUT_8MA_SLR_PUSHPULL = ((uint32_t) GPIO_enDRIVE_8mA_SLR
            << 16) | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0),
    GPIO_enCONFIG_INPUT_8MA_SLR_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA_SLR
            << 16) | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0),
    GPIO_enCONFIG_INPUT_8MA_SLR_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA_SLR
            << 16) | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0),
    GPIO_enCONFIG_INPUT_8MA_SLR_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_8mA_SLR
            << 16) | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0),
    GPIO_enCONFIG_INPUT_8MA_SLR_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA_SLR
            << 16) | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0),
    GPIO_enCONFIG_INPUT_8MA_SLR_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA_SLR
            << 16) | ((uint32_t) GPIO_enDIR_INPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0),
    GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_2mA << 16)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0),
    GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_2mA
            << 16) | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0),
    GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_2mA
            << 16) | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0),
    GPIO_enCONFIG_OUTPUT_2MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_2mA << 16)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0),
    GPIO_enCONFIG_OUTPUT_2MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_2mA
            << 16) | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0),
    GPIO_enCONFIG_OUTPUT_2MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_2mA
            << 16) | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0),
    GPIO_enCONFIG_OUTPUT_4MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_4mA << 16)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0),
    GPIO_enCONFIG_OUTPUT_4MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_4mA
            << 16) | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0),
    GPIO_enCONFIG_OUTPUT_4MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_4mA
            << 16) | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0),
    GPIO_enCONFIG_OUTPUT_4MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_4mA << 16)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0),
    GPIO_enCONFIG_OUTPUT_4MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_4mA
            << 16) | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0),
    GPIO_enCONFIG_OUTPUT_4MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_4mA
            << 16) | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0),
    GPIO_enCONFIG_OUTPUT_8MA_PUSHPULL = ((uint32_t) GPIO_enDRIVE_8mA << 16)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0),
    GPIO_enCONFIG_OUTPUT_8MA_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA
            << 16) | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0),
    GPIO_enCONFIG_OUTPUT_8MA_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA
            << 16) | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0),
    GPIO_enCONFIG_OUTPUT_8MA_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_8mA << 16)
            | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0),
    GPIO_enCONFIG_OUTPUT_8MA_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA
            << 16) | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0),
    GPIO_enCONFIG_OUTPUT_8MA_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA
            << 16) | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_PUSHPULL = ((uint32_t) GPIO_enDRIVE_8mA_SLR
            << 16) | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_PUSHPULL_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA_SLR
            << 16) | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_PUSHPULL_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA_SLR
            << 16) | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_PP << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_OPENDRAIN = ((uint32_t) GPIO_enDRIVE_8mA_SLR
            << 16) | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_INACTIVE << 0),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_OPENDRAIN_PULLUP = ((uint32_t) GPIO_enDRIVE_8mA_SLR
            << 16) | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLUP << 0),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_OPENDRAIN_PULLDOWN = ((uint32_t) GPIO_enDRIVE_8mA_SLR
            << 16) | ((uint32_t) GPIO_enDIR_OUTPUT << 8)
            | ((uint32_t) GPIO_enOUTMODE_OD << 4)
            | ((uint32_t) GPIO_enRESMODE_PULLDOWN << 0),
    GPIO_enCONFIG_UNDEF = 0xFFFFFFFFU,
} GPIO_nCONFIG;

typedef enum
{
    GPIO_enINT_CONFIG_EDGE_FALLING = ((uint32_t) GPIO_enSENSE_EDGE << 8)
            | ((uint32_t) GPIO_enEDGE_FALLING << 0),
    GPIO_enINT_CONFIG_EDGE_RISING = ((uint32_t) GPIO_enSENSE_EDGE << 8)
            | ((uint32_t) GPIO_enEDGE_RISING << 0),
    GPIO_enINT_CONFIG_EDGE_BOTH = ((uint32_t) GPIO_enSENSE_EDGE << 8)
            | ((uint32_t) GPIO_enEDGE_BOTH << 0),
    GPIO_enINT_CONFIG_LEVEL_LOW = ((uint32_t) GPIO_enSENSE_LEVEL << 8)
            | ((uint32_t) GPIO_enLEVEL_LOW << 0),
    GPIO_enINT_CONFIG_LEVEL_HIGH = ((uint32_t) GPIO_enSENSE_LEVEL << 8)
            | ((uint32_t) GPIO_enLEVEL_HIGH << 0),
    GPIO_enINT_CONFIG_UNDEF = 0xFFFFU,
} GPIO_nINT_CONFIG;

typedef struct
{
        GPIO_nDRIVE enDrive;
        GPIO_nDIR enDirection;
        GPIO_nOUTMODE enOutputMode;
        GPIO_nRESMODE enResistorMode;
} GPIO_CONFIG_Typedef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_ENUM_H_ */
