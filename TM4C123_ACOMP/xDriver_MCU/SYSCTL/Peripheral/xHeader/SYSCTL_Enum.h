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
    SYSCTL_enOK=0U,
    SYSCTL_enERROR,
}SYSCTL_nSTATUS;

typedef enum
{
    SYSCTL_enPLL=0U,
    SYSCTL_enOSC,
}SYSCTL_nBYPASS;

typedef enum
{
    SYSCTL_enNOPRESENT=0U,
    SYSCTL_enPRESENT=1U,
}SYSCTL_nPERIPHERAL_PRESENT;

typedef enum
{
    SYSCTL_enNOREADY=0U,
    SYSCTL_enREADY=1U,
}SYSCTL_nPERIPHERAL_READY;

typedef enum
{
    SYSCTL_enRESET_EXT      =0x00001U,
    SYSCTL_enRESET_POR      =0x00002U,
    SYSCTL_enRESET_BOR      =0x00004U,
    SYSCTL_enRESET_WDT0     =0x00008U,
    SYSCTL_enRESET_SW       =0x00010U,
    SYSCTL_enRESET_WDT1     =0x00020U,
    SYSCTL_enRESET_MOSCFAIL =0x00040U,
    SYSCTL_enRESET_ALL      =0x0007FU,
}SYSCTL_nRESET;


typedef enum
{
    SYSCTL_enWDT0 =(uint32_t)(((uint32_t)0u<<8U)|(0U)),
    SYSCTL_enWDT1 =(uint32_t)(((uint32_t)0u<<8U)|(1U)),

    SYSCTL_enTIMER0 =(uint32_t)(((uint32_t)1u<<8U)|(0U)),
    SYSCTL_enTIMER1 =(uint32_t)(((uint32_t)1u<<8U)|(1U)),
    SYSCTL_enTIMER2 =(uint32_t)(((uint32_t)1u<<8U)|(2U)),
    SYSCTL_enTIMER3 =(uint32_t)(((uint32_t)1u<<8U)|(3U)),
    SYSCTL_enTIMER4 =(uint32_t)(((uint32_t)1u<<8U)|(4U)),
    SYSCTL_enTIMER5 =(uint32_t)(((uint32_t)1u<<8U)|(5U)),

    SYSCTL_enGPIOA =(uint32_t)(((uint32_t)2u<<8U)|(0U)),
    SYSCTL_enGPIOB =(uint32_t)(((uint32_t)2u<<8U)|(1U)),
    SYSCTL_enGPIOC =(uint32_t)(((uint32_t)2u<<8U)|(2U)),
    SYSCTL_enGPIOD =(uint32_t)(((uint32_t)2u<<8U)|(3U)),
    SYSCTL_enGPIOE =(uint32_t)(((uint32_t)2u<<8U)|(4U)),
    SYSCTL_enGPIOF =(uint32_t)(((uint32_t)2u<<8U)|(5U)),
    SYSCTL_enGPIOG =(uint32_t)(((uint32_t)2u<<8U)|(6U)),
    SYSCTL_enGPIOH =(uint32_t)(((uint32_t)2u<<8U)|(7U)),
    SYSCTL_enGPIOJ =(uint32_t)(((uint32_t)2u<<8U)|(8U)),
    SYSCTL_enGPIOK =(uint32_t)(((uint32_t)2u<<8U)|(9U)),
    SYSCTL_enGPIOL =(uint32_t)(((uint32_t)2u<<8U)|(10U)),
    SYSCTL_enGPIOM =(uint32_t)(((uint32_t)2u<<8U)|(11U)),
    SYSCTL_enGPION =(uint32_t)(((uint32_t)2u<<8U)|(12U)),
    SYSCTL_enGPIOP =(uint32_t)(((uint32_t)2u<<8U)|(13U)),
    SYSCTL_enGPIOQ =(uint32_t)(((uint32_t)2u<<8U)|(14U)),

    SYSCTL_enUDMA =(uint32_t)(((uint32_t)3u<<8U)|(0U)),

    SYSCTL_enHIB =(uint32_t)(((uint32_t)5u<<8U)|(0U)),

    SYSCTL_enUART0 =(uint32_t)(((uint32_t)6u<<8U)|(0U)),
    SYSCTL_enUART1 =(uint32_t)(((uint32_t)6u<<8U)|(1U)),
    SYSCTL_enUART2 =(uint32_t)(((uint32_t)6u<<8U)|(2U)),
    SYSCTL_enUART3 =(uint32_t)(((uint32_t)6u<<8U)|(3U)),
    SYSCTL_enUART4 =(uint32_t)(((uint32_t)6u<<8U)|(4U)),
    SYSCTL_enUART5 =(uint32_t)(((uint32_t)6u<<8U)|(5U)),
    SYSCTL_enUART6 =(uint32_t)(((uint32_t)6u<<8U)|(6U)),
    SYSCTL_enUART7 =(uint32_t)(((uint32_t)6u<<8U)|(7U)),

    SYSCTL_enSSI0 =(uint32_t)(((uint32_t)7u<<8U)|(0U)),
    SYSCTL_enSSI1 =(uint32_t)(((uint32_t)7u<<8U)|(1U)),
    SYSCTL_enSSI2 =(uint32_t)(((uint32_t)7u<<8U)|(2U)),
    SYSCTL_enSSI3 =(uint32_t)(((uint32_t)7u<<8U)|(3U)),

    SYSCTL_enI2C0 =(uint32_t)(((uint32_t)8u<<8U)|(0U)),
    SYSCTL_enI2C1 =(uint32_t)(((uint32_t)8u<<8U)|(1U)),
    SYSCTL_enI2C2 =(uint32_t)(((uint32_t)8u<<8U)|(2U)),
    SYSCTL_enI2C3 =(uint32_t)(((uint32_t)8u<<8U)|(3U)),
    SYSCTL_enI2C4 =(uint32_t)(((uint32_t)8u<<8U)|(4U)),
    SYSCTL_enI2C5 =(uint32_t)(((uint32_t)8u<<8U)|(5U)),

    SYSCTL_enUSB =(uint32_t)(((uint32_t)10u<<8U)|(0U)),

    SYSCTL_enCAN0 =(uint32_t)(((uint32_t)13u<<8U)|(0U)),
    SYSCTL_enCAN1 =(uint32_t)(((uint32_t)13u<<8U)|(1U)),

    SYSCTL_enADC0 =(uint32_t)(((uint32_t)14u<<8U)|(0U)),
    SYSCTL_enADC1 =(uint32_t)(((uint32_t)14u<<8U)|(1U)),

    SYSCTL_enACMP =(uint32_t)(((uint32_t)15u<<8U)|(0U)),

    SYSCTL_enPWM0 =(uint32_t)(((uint32_t)16u<<8U)|(0U)),
    SYSCTL_enPWM1 =(uint32_t)(((uint32_t)16u<<8U)|(1U)),

    SYSCTL_enQEI0 =(uint32_t)(((uint32_t)17u<<8U)|(0U)),
    SYSCTL_enQEI1 =(uint32_t)(((uint32_t)17u<<8U)|(1U)),

    SYSCTL_enEEPROM =(uint32_t)(((uint32_t)22u<<8U)|(0U)),

    SYSCTL_enWTIMER0 =(uint32_t)(((uint32_t)23u<<8U)|(0U)),
    SYSCTL_enWTIMER1 =(uint32_t)(((uint32_t)23u<<8U)|(1U)),
    SYSCTL_enWTIMER2 =(uint32_t)(((uint32_t)23u<<8U)|(2U)),
    SYSCTL_enWTIMER3 =(uint32_t)(((uint32_t)23u<<8U)|(3U)),
    SYSCTL_enWTIMER4 =(uint32_t)(((uint32_t)23u<<8U)|(4U)),
    SYSCTL_enWTIMER5 =(uint32_t)(((uint32_t)23u<<8U)|(5U)),
}SYSCTL_nPERIPHERAL;

typedef enum
{
    SYSCTL_enGPIOBUSA = 0x0001U,
    SYSCTL_enGPIOBUSB = 0x0002U,
    SYSCTL_enGPIOBUSC = 0x0004U,
    SYSCTL_enGPIOBUSD = 0x0008U,
    SYSCTL_enGPIOBUSE = 0x0010U,
    SYSCTL_enGPIOBUSF = 0x0020U,
    SYSCTL_enGPIOBUSALL = 0x003FU,
}SYSCTL_nGPIOBUS;

typedef enum
{
    SYSCTL_enGPIOBUS_APB = 0x0000U,
    SYSCTL_enGPIOBUS_AHB = 0x0001U,
}SYSCTL_nGPIOBUS_CURRENT;




#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_ENUM_H_ */
