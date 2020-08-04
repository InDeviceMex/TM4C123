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

#include <stdint.h>


typedef enum
{
    GPIO_enOK=0u,
    GPIO_enERROR=1u,
    GPIO_enSTATUS_UNDEF=0xFFu,
}GPIO_nSTATUS;

typedef enum
{
    GPIO_enINT_NOOCCUR=0u,
    GPIO_enINT_OCCUR=1u,
    GPIO_enINT_STATUS_UNDEF=0xFFu,
}GPIO_nINT_STATUS;

typedef enum
{
    GPIO_enNOREADY=0u,
    GPIO_enREADY=1u,
}GPIO_nREADY;

typedef enum
{
    GPIO_enAPB=0u,
    GPIO_enAHB=1u,
}GPIO_nBUS;
typedef enum
{
    GPIO_enPORTA=0u,
    GPIO_enPORTB=1u,
    GPIO_enPORTC=2u,
    GPIO_enPORTD=3u,
    GPIO_enPORTE=4u,
    GPIO_enPORTF=5u,
    GPIO_enMAX=5u,
}GPIO_nPORT;
typedef enum
{
    GPIO_enPIN0=0x1u,
    GPIO_enPIN1=0x2u,
    GPIO_enPIN2=0x4u,
    GPIO_enPIN3=0x8u,
    GPIO_enPIN4=0x10u,
    GPIO_enPIN5=0x20u,
    GPIO_enPIN6=0x40u,
    GPIO_enPIN7=0x80u,
    GPIO_enALL=0xFFu,
}GPIO_nPIN;

typedef enum
{
    GPIO_enDIR_INPUT=0u,
    GPIO_enDIR_OUTPUT=1u,
    GPIO_enDIR_UNDEF=0xFFu,
}GPIO_nDIR;

typedef enum
{
    GPIO_enSENSE_EDGE=0u,
    GPIO_enSENSE_LEVEL=1u,
    GPIO_enSENSE_UNDEF=0xFFu,
}GPIO_nSENSE;

typedef enum
{
    GPIO_enEDGE_FALLING=0u,
    GPIO_enEDGE_RISING=1u,
    GPIO_enEDGE_BOTH=2u,
    GPIO_enEDGE_UNDEF=0xFFu,
}GPIO_nEDGE;

typedef enum
{
    GPIO_enDRIVE_2mA=0u,
    GPIO_enDRIVE_4mA=1u,
    GPIO_enDRIVE_8mA=2u,
    GPIO_enDRIVE_8mA_SLR=(((uint32_t)1u<<8u)|2u),
    GPIO_enDRIVE_UNDEF=0xFFu,
}GPIO_nDRIVE;

typedef enum
{
    GPIO_enLEVEL_LOW=0u,
    GPIO_enLEVEL_HIGH=1u,
    GPIO_enLEVEL_UNDEF=0xFFu,
}GPIO_nLEVEL;

typedef enum
{
    GPIO_enOUTMODE_PP=0u,
    GPIO_enOUTMODE_OD=1u,
    GPIO_enOUTMODE_UNDEF=0xFFu,
}GPIO_nOUTMODE;
typedef enum
{
    GPIO_enRESMODE_INACTIVE=0u,
    GPIO_enRESMODE_PULLUP=1u,
    GPIO_enRESMODE_PULLDOWN=2u,
    GPIO_enRESMODE_UNDEF=0xFFu,
}GPIO_nRESMODE;


/*PORT PIN VALUE*/
typedef enum
{
    /*GPIOA*/
    GPIO_enGPIOA0   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)0u*4u)<<8u)|(0u)),
    GPIO_enU0Rx     =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)0u*4u)<<8u)|(1u)),
    GPIO_enCAN1Rx   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)0u*4u)<<8u)|(8u)),

    GPIO_enGPIOA1   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)1u*4u)<<8u)|(0u)),
    GPIO_enU0Tx     =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)1u*4u)<<8u)|(1u)),
    GPIO_enCAN1Tx   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)1u*4u)<<8u)|(8u)),

    GPIO_enGPIOA2   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)2u*4u)<<8u)|(0u)),
    GPIO_enSSI0Clk  =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)2u*4u)<<8u)|(2u)),

    GPIO_enGPIOA3   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)3u*4u)<<8u)|(0u)),
    GPIO_enSSI0Fss  =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)3u*4u)<<8u)|(2u)),

    GPIO_enGPIOA4   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)4u*4u)<<8u)|(0u)),
    GPIO_enSSI0Rx   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)4u*4u)<<8u)|(2u)),

    GPIO_enGPIOA5   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)5u*4u)<<8u)|(0u)),
    GPIO_enSSI0Tx   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)5u*4u)<<8u)|(2u)),

    GPIO_enGPIOA6   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)6u*4u)<<8u)|(0u)),
    GPIO_enI2C1SCL  =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)6u*4u)<<8u)|(3u)),
    GPIO_enM1PWM2   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)6u*4u)<<8u)|(5u)),

    GPIO_enGPIOA7   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)7u*4u)<<8u)|(0u)),
    GPIO_enI2C1SDA  =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)7u*4u)<<8u)|(3u)),
    GPIO_enM1PWM3   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)7u*4u)<<8u)|(5u)),

    /*GPIOB*/
    GPIO_enGPIOB0   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)0u*4u)<<8u)|(0u)),
    GPIO_enU1Rx     =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)0u*4u)<<8u)|(1u)),
    GPIO_enT2CCP0   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)0u*4u)<<8u)|(7u)),

    GPIO_enGPIOB1   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)1u*4u)<<8u)|(0u)),
    GPIO_enU1Tx     =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)1u*4u)<<8u)|(1u)),
    GPIO_enT2CCP1   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)1u*4u)<<8u)|(7u)),

    GPIO_enGPIOB2   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)2u*4u)<<8u)|(0u)),
    GPIO_enI2C0SCL  =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)2u*4u)<<8u)|(3u)),
    GPIO_enT3CCP0   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)2u*4u)<<8u)|(7u)),

    GPIO_enGPIOB3   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)3u*4u)<<8u)|(0u)),
    GPIO_enI2C0SDA  =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)3u*4u)<<8u)|(3u)),
    GPIO_enT3CCP1   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)3u*4u)<<8u)|(7u)),

    GPIO_enGPIOB4   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)4u*4u)<<8u)|(0u)),
    GPIO_enSSI2Clk  =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)4u*4u)<<8u)|(2u)),
    GPIO_enM0PWM2   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)4u*4u)<<8u)|(4u)),
    GPIO_enT1CCP0   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)4u*4u)<<8u)|(7u)),
    GPIO_enCAN0Rx   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)4u*4u)<<8u)|(8u)),

    GPIO_enGPIOB5   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)5u*4u)<<8u)|(0u)),
    GPIO_enSSI2Fss  =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)5u*4u)<<8u)|(2u)),
    GPIO_enM0PWM3   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)5u*4u)<<8u)|(4u)),
    GPIO_enT1CCP1   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)5u*4u)<<8u)|(7u)),
    GPIO_enCAN0Tx   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)5u*4u)<<8u)|(8u)),

    GPIO_enGPIOB6   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)6u*4u)<<8u)|(0u)),
    GPIO_enSSI2Rx   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)6u*4u)<<8u)|(2u)),
    GPIO_enM0PWM0   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)6u*4u)<<8u)|(4u)),
    GPIO_enT0CCP0   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)6u*4u)<<8u)|(7u)),

    GPIO_enGPIOB7   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)7u*4u)<<8u)|(0u)),
    GPIO_enSSI2Tx   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)7u*4u)<<8u)|(2u)),
    GPIO_enM0PWM1   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)7u*4u)<<8u)|(4u)),
    GPIO_enT0CCP1   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)7u*4u)<<8u)|(7u)),

    /*GPIOC*/
    GPIO_enGPIOC0    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)0u*4u)<<8u)|(0u)),
    GPIO_enTCK       =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)0u*4u)<<8u)|(1u)),
    GPIO_enT4CCP0    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)0u*4u)<<8u)|(7u)),

    GPIO_enGPIOC1    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)1u*4u)<<8u)|(0u)),
    GPIO_enTMS       =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)1u*4u)<<8u)|(1u)),
    GPIO_enT4CCP1    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)1u*4u)<<8u)|(7u)),

    GPIO_enGPIOC2    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)2u*4u)<<8u)|(0u)),
    GPIO_enTDI       =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)2u*4u)<<8u)|(1u)),
    GPIO_enT5CCP0    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)2u*4u)<<8u)|(7u)),

    GPIO_enGPIOC3    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)3u*4u)<<8u)|(0u)),
    GPIO_enTDO       =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)3u*4u)<<8u)|(1u)),
    GPIO_enT5CCP1    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)3u*4u)<<8u)|(7u)),

    GPIO_enGPIOC4    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)4u*4u)<<8u)|(0u)),
    GPIO_enU4Rx      =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)4u*4u)<<8u)|(1u)),
    GPIO_enU1Rx_C4   =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)4u*4u)<<8u)|(2u)),
    GPIO_enM0PWM6    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)4u*4u)<<8u)|(4u)),
    GPIO_enIDX1      =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)4u*4u)<<8u)|(6u)),
    GPIO_enWT0CCP0   =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)4u*4u)<<8u)|(7u)),
    GPIO_enU1RTS     =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)4u*4u)<<8u)|(8u)),

    GPIO_enGPIOC5    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)5u*4u)<<8u)|(0u)),
    GPIO_enU4Tx      =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)5u*4u)<<8u)|(1u)),
    GPIO_enU1Tx_C4   =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)5u*4u)<<8u)|(2u)),
    GPIO_enM0PWM7    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)5u*4u)<<8u)|(4u)),
    GPIO_enPhA1      =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)5u*4u)<<8u)|(6u)),
    GPIO_enWT0CCP1   =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)5u*4u)<<8u)|(7u)),
    GPIO_enU1CTS     =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)5u*4u)<<8u)|(8u)),

    GPIO_enGPIOC6    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)6u*4u)<<8u)|(0u)),
    GPIO_enU3Rx      =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)6u*4u)<<8u)|(1u)),
    GPIO_enPhB1      =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)6u*4u)<<8u)|(6u)),
    GPIO_enWT1CCP0   =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)6u*4u)<<8u)|(7u)),
    GPIO_enUSB0EPEN  =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)6u*4u)<<8u)|(8u)),

    GPIO_enGPIOC7    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)7u*4u)<<8u)|(0u)),
    GPIO_enU3Tx      =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)7u*4u)<<8u)|(1u)),
    GPIO_enWT1CCP1   =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)7u*4u)<<8u)|(7u)),
    GPIO_enUSB0PFLT  =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)7u*4u)<<8u)|(8u)),

    /*GPIOD*/
    GPIO_enGPIOD0    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)0u*4u)<<8u)|(0u)),
    GPIO_enSSI3Clk   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)0u*4u)<<8u)|(1u)),
    GPIO_enSSI1Clk   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)0u*4u)<<8u)|(2u)),
    GPIO_enI2C3SCL   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)0u*4u)<<8u)|(3u)),
    GPIO_enM0PWM6_D0 =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)0u*4u)<<8u)|(4u)),
    GPIO_enM1PWM0    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)0u*4u)<<8u)|(5u)),
    GPIO_enWT2CCP0   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)0u*4u)<<8u)|(7u)),

    GPIO_enGPIOD1    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)1u*4u)<<8u)|(0u)),
    GPIO_enSSI3Fss   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)1u*4u)<<8u)|(1u)),
    GPIO_enSSI1Fss   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)1u*4u)<<8u)|(2u)),
    GPIO_enI2C3SDA   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)1u*4u)<<8u)|(3u)),
    GPIO_enM0PWM7_D1 =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)1u*4u)<<8u)|(4u)),
    GPIO_enM1PWM1    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)1u*4u)<<8u)|(5u)),
    GPIO_enWT2CCP1   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)1u*4u)<<8u)|(7u)),

    GPIO_enGPIOD2    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)2u*4u)<<8u)|(0u)),
    GPIO_enSSI3Rx    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)2u*4u)<<8u)|(1u)),
    GPIO_enSSI1Rx    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)2u*4u)<<8u)|(2u)),
    GPIO_enM0FAULT0  =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)2u*4u)<<8u)|(4u)),
    GPIO_enWT3CCP0   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)2u*4u)<<8u)|(7u)),
    GPIO_enUSB0EPEN_D2=(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)2u*4u)<<8u)|(8u)),

    GPIO_enGPIOD3    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)3u*4u)<<8u)|(0u)),
    GPIO_enSSI3Tx    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)3u*4u)<<8u)|(1u)),
    GPIO_enSSI1Tx    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)3u*4u)<<8u)|(2u)),
    GPIO_enIDX0      =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)3u*4u)<<8u)|(6u)),
    GPIO_enWT3CCP1   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)3u*4u)<<8u)|(7u)),
    GPIO_enUSB0PFLT_D3=(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)3u*4u)<<8u)|(8u)),

    GPIO_enGPIOD4    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)4u*4u)<<8u)|(0u)),
    GPIO_enU6Rx      =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)4u*4u)<<8u)|(1u)),
    GPIO_enWT4CCP0   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)4u*4u)<<8u)|(7u)),

    GPIO_enGPIOD5    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)5u*4u)<<8u)|(0u)),
    GPIO_enU6Tx      =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)5u*4u)<<8u)|(1u)),
    GPIO_enWT4CCP1   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)5u*4u)<<8u)|(7u)),

    GPIO_enGPIOD6    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)6u*4u)<<8u)|(0u)),
    GPIO_enU2Rx      =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)6u*4u)<<8u)|(1u)),
    GPIO_enM0FAULT0_D6=(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)6u*4u)<<8u)|(4u)),
    GPIO_enPhA0      =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)6u*4u)<<8u)|(6u)),
    GPIO_enWT5CCP0   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)6u*4u)<<8u)|(7u)),

    GPIO_enGPIOD7    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)7u*4u)<<8u)|(0u)),
    GPIO_enU2Tx      =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)7u*4u)<<8u)|(1u)),
    GPIO_enPhB0      =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)7u*4u)<<8u)|(6u)),
    GPIO_enWT5CCP1   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)7u*4u)<<8u)|(7u)),
    GPIO_enNMI       =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)7u*4u)<<8u)|(8u)),

    /*GPIOE*/
    GPIO_enGPIOE0    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)0u*4u)<<8u)|(0u)),
    GPIO_enU7Rx      =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)0u*4u)<<8u)|(1u)),

    GPIO_enGPIOE1    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)1u*4u)<<8u)|(0u)),
    GPIO_enU7Tx      =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)1u*4u)<<8u)|(1u)),

    GPIO_enGPIOE2    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)2u*4u)<<8u)|(0u)),
    GPIO_enGPIOE3    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)3u*4u)<<8u)|(0u)),

    GPIO_enGPIOE4    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)4u*4u)<<8u)|(0u)),
    GPIO_enU5Rx      =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)4u*4u)<<8u)|(1u)),
    GPIO_enI2C2SCL   =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)4u*4u)<<8u)|(3u)),
    GPIO_enM0PWM4    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)4u*4u)<<8u)|(4u)),
    GPIO_enM1PWM2_E4 =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)4u*4u)<<8u)|(5u)),
    GPIO_enCAN0Rx_E4 =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)4u*4u)<<8u)|(8u)),

    GPIO_enGPIOE5    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)5u*4u)<<8u)|(0u)),
    GPIO_enU5Tx      =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)5u*4u)<<8u)|(1u)),
    GPIO_enI2C2SDA   =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)5u*4u)<<8u)|(3u)),
    GPIO_enM0PWM5    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)5u*4u)<<8u)|(4u)),
    GPIO_enM1PWM3_E5 =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)5u*4u)<<8u)|(5u)),
    GPIO_enCAN0Tx_E5 =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)5u*4u)<<8u)|(8u)),

    GPIO_enGPIOE6    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)6u*4u)<<8u)|(0u)),
    GPIO_enGPIOE7    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)7u*4u)<<8u)|(0u)),

    /*GPIOF*/
    GPIO_enGPIOF0    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)0u*4u)<<8u)|(0u)),
    GPIO_enU1RTS_F0  =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)0u*4u)<<8u)|(1u)),
    GPIO_enSSI1Rx_F0 =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)0u*4u)<<8u)|(2u)),
    GPIO_enCAN0Rx_F0 =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)0u*4u)<<8u)|(3u)),
    GPIO_enM1PWM4    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)0u*4u)<<8u)|(5u)),
    GPIO_enPhA0_F0   =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)0u*4u)<<8u)|(6u)),
    GPIO_enT0CCP0_F0 =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)0u*4u)<<8u)|(7u)),
    GPIO_enNMI_F0    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)0u*4u)<<8u)|(8u)),
    GPIO_enC0o       =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)0u*4u)<<8u)|(9u)),

    GPIO_enGPIOF1    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)1u*4u)<<8u)|(0u)),
    GPIO_enU1CTS_F1  =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)1u*4u)<<8u)|(1u)),
    GPIO_enSSI1Tx_F1 =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)1u*4u)<<8u)|(2u)),
    GPIO_enM1PWM5    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)1u*4u)<<8u)|(5u)),
    GPIO_enPhB0_F1   =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)1u*4u)<<8u)|(6u)),
    GPIO_enT0CCP1_F1 =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)1u*4u)<<8u)|(7u)),
    GPIO_enC1o       =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)1u*4u)<<8u)|(9u)),
    GPIO_enTRD1      =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)1u*4u)<<8u)|(14u)),

    GPIO_enGPIOF2    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)2u*4u)<<8u)|(0u)),
    GPIO_enSSI1Clk_F2=(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)2u*4u)<<8u)|(2u)),
    GPIO_enM0FAULT0_F2=(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)2u*4u)<<8u)|(4u)),
    GPIO_enM1PWM6    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)2u*4u)<<8u)|(5u)),
    GPIO_enT1CCP0_F2 =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)2u*4u)<<8u)|(7u)),
    GPIO_enTRD0      =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)2u*4u)<<8u)|(14u)),

    GPIO_enGPIOF3    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)3u*4u)<<8u)|(0u)),
    GPIO_enSSI1Fss_F3=(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)3u*4u)<<8u)|(2u)),
    GPIO_enCAN0Tx_F3 =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)3u*4u)<<8u)|(3u)),
    GPIO_enM1PWM7    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)3u*4u)<<8u)|(5u)),
    GPIO_enT1CCP1_F3 =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)3u*4u)<<8u)|(7u)),
    GPIO_enTRCLK     =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)3u*4u)<<8u)|(14u)),

    GPIO_enGPIOF4    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)4u*4u)<<8u)|(0u)),
    GPIO_enM1FAULT0  =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)4u*4u)<<8u)|(5u)),
    GPIO_enIDX0_F4   =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)4u*4u)<<8u)|(6u)),
    GPIO_enT2CCP0_F4 =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)4u*4u)<<8u)|(7u)),
    GPIO_enUSB0EPEN_F4=(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)4u*4u)<<8u)|(8u)),

    GPIO_enGPIOF5    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)5u*4u)<<8u)|(0u)),
    GPIO_enGPIOF6    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)6u*4u)<<8u)|(0u)),
    GPIO_enGPIOF7    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)7u*4u)<<8u)|(0u)),
}GPIO_nDIGITAL_FUNCTION;

/*PORT PIN*/
typedef enum
{
    GPIO_enUSB0ID=(uint32_t)(((uint32_t)1u<<8u)|(0u)),
    GPIO_enUSB0VBUS=(uint32_t)(((uint32_t)1u<<8u)|(1u)),
    GPIO_enAIN10=(uint32_t)(((uint32_t)1u<<8u)|(4u)),
    GPIO_enAIN11=(uint32_t)(((uint32_t)1u<<8u)|(5u)),

    GPIO_enC1M=(uint32_t)(((uint32_t)2u<<8u)|(4u)),
    GPIO_enC1P=(uint32_t)(((uint32_t)2u<<8u)|(5u)),
    GPIO_enC0P=(uint32_t)(((uint32_t)2u<<8u)|(6u)),
    GPIO_enC0M=(uint32_t)(((uint32_t)2u<<8u)|(7u)),

    GPIO_enAIN7=(uint32_t)(((uint32_t)3u<<8u)|(0u)),
    GPIO_enAIN6=(uint32_t)(((uint32_t)3u<<8u)|(1u)),
    GPIO_enAIN5=(uint32_t)(((uint32_t)3u<<8u)|(2u)),
    GPIO_enAIN4=(uint32_t)(((uint32_t)3u<<8u)|(3u)),
    GPIO_enUSB0DM=(uint32_t)(((uint32_t)3u<<8u)|(4u)),
    GPIO_enUSB0DP=(uint32_t)(((uint32_t)3u<<8u)|(5u)),

    GPIO_enAIN3=(uint32_t)(((uint32_t)4u<<8u)|(0u)),
    GPIO_enAIN2=(uint32_t)(((uint32_t)4u<<8u)|(1u)),
    GPIO_enAIN1=(uint32_t)(((uint32_t)4u<<8u)|(2u)),
    GPIO_enAIN0=(uint32_t)(((uint32_t)4u<<8u)|(3u)),
    GPIO_enAIN9=(uint32_t)(((uint32_t)4u<<8u)|(4u)),
    GPIO_enAIN8=(uint32_t)(((uint32_t)4u<<8u)|(5u)),
}GPIO_nANALOG_FUNCTION;

typedef enum
{
    GPIO_enPRI0=0u,
    GPIO_enPRI1=1u,
    GPIO_enPRI2=2u,
    GPIO_enPRI3=3u,
    GPIO_enPRI4=4u,
    GPIO_enPRI5=5u,
    GPIO_enPRI6=6u,
    GPIO_enPRI7=7u,
    GPIO_enDEFAULT=0xFFu,
}GPIO_nPRIORITY;


typedef enum
{
    GPIO_enCONFIG_INPUT_2MA_PUSHPULL                = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLUP         = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLDOWN       = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_INPUT_2MA_OPENDRAIN               = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP        = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLDOWN      = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_INPUT_4MA_PUSHPULL                = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_INPUT_4MA_PUSHPULL_PULLUP         = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_INPUT_4MA_PUSHPULL_PULLDOWN       = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_INPUT_4MA_OPENDRAIN               = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_INPUT_4MA_OPENDRAIN_PULLUP        = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_INPUT_4MA_OPENDRAIN_PULLDOWN      = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_INPUT_8MA_PUSHPULL                = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_INPUT_8MA_PUSHPULL_PULLUP         = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_INPUT_8MA_PUSHPULL_PULLDOWN       = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_INPUT_8MA_OPENDRAIN               = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_INPUT_8MA_OPENDRAIN_PULLUP        = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_INPUT_8MA_OPENDRAIN_PULLDOWN      = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_INPUT_8MA_SLR_PUSHPULL            = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_INPUT_8MA_SLR_PUSHPULL_PULLUP     = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_INPUT_8MA_SLR_PUSHPULL_PULLDOWN   = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_INPUT_8MA_SLR_OPENDRAIN           = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_INPUT_8MA_SLR_OPENDRAIN_PULLUP    = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_INPUT_8MA_SLR_OPENDRAIN_PULLDOWN  = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL               = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLUP        = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLDOWN      = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_OUTPUT_2MA_OPENDRAIN              = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_OUTPUT_2MA_OPENDRAIN_PULLUP       = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_OUTPUT_2MA_OPENDRAIN_PULLDOWN     = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_OUTPUT_4MA_PUSHPULL               = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_OUTPUT_4MA_PUSHPULL_PULLUP        = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_OUTPUT_4MA_PUSHPULL_PULLDOWN      = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_OUTPUT_4MA_OPENDRAIN              = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_OUTPUT_4MA_OPENDRAIN_PULLUP       = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_OUTPUT_4MA_OPENDRAIN_PULLDOWN     = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_OUTPUT_8MA_PUSHPULL               = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_OUTPUT_8MA_PUSHPULL_PULLUP        = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_OUTPUT_8MA_PUSHPULL_PULLDOWN      = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_OUTPUT_8MA_OPENDRAIN              = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_OUTPUT_8MA_OPENDRAIN_PULLUP       = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_OUTPUT_8MA_OPENDRAIN_PULLDOWN     = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_PUSHPULL           = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_PUSHPULL_PULLUP    = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_PUSHPULL_PULLDOWN  = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_OPENDRAIN          = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_OPENDRAIN_PULLUP   = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_OPENDRAIN_PULLDOWN = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_UNDEF = 0xFFFFFFFFu,
}GPIO_nCONFIG;

typedef enum
{
    GPIO_enINT_CONFIG_EDGE_FALLING= ((uint32_t)GPIO_enSENSE_EDGE<<8)  |((uint32_t)GPIO_enEDGE_FALLING<<0),
    GPIO_enINT_CONFIG_EDGE_RISING=  ((uint32_t)GPIO_enSENSE_EDGE<<8)  |((uint32_t)GPIO_enEDGE_RISING<<0),
    GPIO_enINT_CONFIG_EDGE_BOTH=    ((uint32_t)GPIO_enSENSE_EDGE<<8)  |((uint32_t)GPIO_enEDGE_BOTH<<0),
    GPIO_enINT_CONFIG_LEVEL_LOW=    ((uint32_t)GPIO_enSENSE_LEVEL<<8)  |((uint32_t)GPIO_enLEVEL_LOW<<0),
    GPIO_enINT_CONFIG_LEVEL_HIGH=   ((uint32_t)GPIO_enSENSE_LEVEL<<8)  |((uint32_t)GPIO_enLEVEL_HIGH<<0),
    GPIO_enINT_CONFIG_UNDEF=0xFFFFu,
}GPIO_nINT_CONFIG;


typedef struct
{
    GPIO_nDRIVE enDrive;
    GPIO_nDIR enDirection;
    GPIO_nOUTMODE enOutputMode;
    GPIO_nRESMODE enResistorMode;
}GPIO_CONFIG_Typedef;



#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_ENUM_H_ */
