/**
 *
 * @file SYSEXC_Enum.h
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_ENUM_H_

typedef enum
{
    SYSEXC_enDENORMAL =0x1u,
    SYSEXC_enDIV0     =0x2u,
    SYSEXC_enINVALID  =0x4u,
    SYSEXC_enUNDERFLOW=0x8u,
    SYSEXC_enOVERFLOW =0x10u,
    SYSEXC_enINEXACT  =0x20u,

}SYSEXC_nINTERRUPT;

typedef enum
{
    SYSEXC_enNOOCCUR    =0u,
    SYSEXC_enOCCUR      =1u,

}SYSEXC_nSTATUS;

typedef enum
{
    SYSEXC_enPRI0=0u,
    SYSEXC_enPRI1=1u,
    SYSEXC_enPRI2=2u,
    SYSEXC_enPRI3=3u,
    SYSEXC_enPRI4=4u,
    SYSEXC_enPRI5=5u,
    SYSEXC_enPRI6=6u,
    SYSEXC_enPRI7=7u,
    SYSEXC_enDEFAULT=0xFFu,
}SYSEXC_nPRIORITY;





#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_ENUM_H_ */
