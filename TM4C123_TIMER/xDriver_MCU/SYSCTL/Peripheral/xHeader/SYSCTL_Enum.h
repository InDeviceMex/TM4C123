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
    SYSCTL_enOK=0u,
    SYSCTL_enERROR,
}SYSCTL_nSTATUS;

typedef enum
{
    SYSCTL_enPLL=0u,
    SYSCTL_enOSC,
}SYSCTL_nBYPASS;

typedef enum
{
    SYSCTL_enNOPRESENT=0u,
    SYSCTL_enPRESENT=1u,
}SYSCTL_nPERIPHERAL_PRESENT;

typedef enum
{
    SYSCTL_enNOREADY=0u,
    SYSCTL_enREADY=1u,
}SYSCTL_nPERIPHERAL_READY;

typedef enum
{
    SYSCTL_enRESET_EXT      =0x00001u,
    SYSCTL_enRESET_POR      =0x00002u,
    SYSCTL_enRESET_BOR      =0x00004u,
    SYSCTL_enRESET_WDT0     =0x00008u,
    SYSCTL_enRESET_SW       =0x00010u,
    SYSCTL_enRESET_WDT1     =0x00020u,
    SYSCTL_enRESET_MOSCFAIL =0x00040u,
    SYSCTL_enRESET_ALL      =0x0007Fu,
}SYSCTL_nRESET;


typedef enum
{
    SYSCTL_enWDT0 =(uint32_t)(((uint32_t)0u<<8u)|(0u)),
    SYSCTL_enWDT1 =(uint32_t)(((uint32_t)0u<<8u)|(1u)),

    SYSCTL_enTIMER0 =(uint32_t)(((uint32_t)1u<<8u)|(0u)),
    SYSCTL_enTIMER1 =(uint32_t)(((uint32_t)1u<<8u)|(1u)),
    SYSCTL_enTIMER2 =(uint32_t)(((uint32_t)1u<<8u)|(2u)),
    SYSCTL_enTIMER3 =(uint32_t)(((uint32_t)1u<<8u)|(3u)),
    SYSCTL_enTIMER4 =(uint32_t)(((uint32_t)1u<<8u)|(4u)),
    SYSCTL_enTIMER5 =(uint32_t)(((uint32_t)1u<<8u)|(5u)),

    SYSCTL_enGPIOA =(uint32_t)(((uint32_t)2u<<8u)|(0u)),
    SYSCTL_enGPIOB =(uint32_t)(((uint32_t)2u<<8u)|(1u)),
    SYSCTL_enGPIOC =(uint32_t)(((uint32_t)2u<<8u)|(2u)),
    SYSCTL_enGPIOD =(uint32_t)(((uint32_t)2u<<8u)|(3u)),
    SYSCTL_enGPIOE =(uint32_t)(((uint32_t)2u<<8u)|(4u)),
    SYSCTL_enGPIOF =(uint32_t)(((uint32_t)2u<<8u)|(5u)),
    SYSCTL_enGPIOG =(uint32_t)(((uint32_t)2u<<8u)|(6u)),
    SYSCTL_enGPIOH =(uint32_t)(((uint32_t)2u<<8u)|(7u)),
    SYSCTL_enGPIOJ =(uint32_t)(((uint32_t)2u<<8u)|(8u)),
    SYSCTL_enGPIOK =(uint32_t)(((uint32_t)2u<<8u)|(9u)),
    SYSCTL_enGPIOL =(uint32_t)(((uint32_t)2u<<8u)|(10u)),
    SYSCTL_enGPIOM =(uint32_t)(((uint32_t)2u<<8u)|(11u)),
    SYSCTL_enGPION =(uint32_t)(((uint32_t)2u<<8u)|(12u)),
    SYSCTL_enGPIOP =(uint32_t)(((uint32_t)2u<<8u)|(13u)),
    SYSCTL_enGPIOQ =(uint32_t)(((uint32_t)2u<<8u)|(14u)),

    SYSCTL_enUDMA =(uint32_t)(((uint32_t)3u<<8u)|(0u)),

    SYSCTL_enHIB =(uint32_t)(((uint32_t)5u<<8u)|(0u)),

    SYSCTL_enUART0 =(uint32_t)(((uint32_t)6u<<8u)|(0u)),
    SYSCTL_enUART1 =(uint32_t)(((uint32_t)6u<<8u)|(1u)),
    SYSCTL_enUART2 =(uint32_t)(((uint32_t)6u<<8u)|(2u)),
    SYSCTL_enUART3 =(uint32_t)(((uint32_t)6u<<8u)|(3u)),
    SYSCTL_enUART4 =(uint32_t)(((uint32_t)6u<<8u)|(4u)),
    SYSCTL_enUART5 =(uint32_t)(((uint32_t)6u<<8u)|(5u)),
    SYSCTL_enUART6 =(uint32_t)(((uint32_t)6u<<8u)|(6u)),
    SYSCTL_enUART7 =(uint32_t)(((uint32_t)6u<<8u)|(7u)),

    SYSCTL_enSSI0 =(uint32_t)(((uint32_t)7u<<8u)|(0u)),
    SYSCTL_enSSI1 =(uint32_t)(((uint32_t)7u<<8u)|(1u)),
    SYSCTL_enSSI2 =(uint32_t)(((uint32_t)7u<<8u)|(2u)),
    SYSCTL_enSSI3 =(uint32_t)(((uint32_t)7u<<8u)|(3u)),

    SYSCTL_enI2C0 =(uint32_t)(((uint32_t)8u<<8u)|(0u)),
    SYSCTL_enI2C1 =(uint32_t)(((uint32_t)8u<<8u)|(1u)),
    SYSCTL_enI2C2 =(uint32_t)(((uint32_t)8u<<8u)|(2u)),
    SYSCTL_enI2C3 =(uint32_t)(((uint32_t)8u<<8u)|(3u)),
    SYSCTL_enI2C4 =(uint32_t)(((uint32_t)8u<<8u)|(4u)),
    SYSCTL_enI2C5 =(uint32_t)(((uint32_t)8u<<8u)|(5u)),

    SYSCTL_enUSB =(uint32_t)(((uint32_t)10u<<8u)|(0u)),

    SYSCTL_enCAN0 =(uint32_t)(((uint32_t)13u<<8u)|(0u)),
    SYSCTL_enCAN1 =(uint32_t)(((uint32_t)13u<<8u)|(1u)),

    SYSCTL_enADC0 =(uint32_t)(((uint32_t)14u<<8u)|(0u)),
    SYSCTL_enADC1 =(uint32_t)(((uint32_t)14u<<8u)|(1u)),

    SYSCTL_enACMP =(uint32_t)(((uint32_t)15u<<8u)|(0u)),

    SYSCTL_enPWM0 =(uint32_t)(((uint32_t)16u<<8u)|(0u)),
    SYSCTL_enPWM1 =(uint32_t)(((uint32_t)16u<<8u)|(1u)),

    SYSCTL_enQEI0 =(uint32_t)(((uint32_t)17u<<8u)|(0u)),
    SYSCTL_enQEI1 =(uint32_t)(((uint32_t)17u<<8u)|(1u)),

    SYSCTL_enEEPROM =(uint32_t)(((uint32_t)22u<<8u)|(0u)),

    SYSCTL_enWTIMER0 =(uint32_t)(((uint32_t)23u<<8u)|(0u)),
    SYSCTL_enWTIMER1 =(uint32_t)(((uint32_t)23u<<8u)|(1u)),
    SYSCTL_enWTIMER2 =(uint32_t)(((uint32_t)23u<<8u)|(2u)),
    SYSCTL_enWTIMER3 =(uint32_t)(((uint32_t)23u<<8u)|(3u)),
    SYSCTL_enWTIMER4 =(uint32_t)(((uint32_t)23u<<8u)|(4u)),
    SYSCTL_enWTIMER5 =(uint32_t)(((uint32_t)23u<<8u)|(5u)),
}SYSCTL_nPERIPHERAL;

typedef enum
{
    SYSCTL_enGPIOBUSA = 0x0001u,
    SYSCTL_enGPIOBUSB = 0x0002u,
    SYSCTL_enGPIOBUSC = 0x0004u,
    SYSCTL_enGPIOBUSD = 0x0008u,
    SYSCTL_enGPIOBUSE = 0x0010u,
    SYSCTL_enGPIOBUSF = 0x0020u,
    SYSCTL_enGPIOBUSALL = 0x003Fu,
}SYSCTL_nGPIOBUS;

typedef enum
{
    SYSCTL_enGPIOBUS_APB = 0x0000u,
    SYSCTL_enGPIOBUS_AHB = 0x0001u,
}SYSCTL_nGPIOBUS_CURRENT;




#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_ENUM_H_ */
