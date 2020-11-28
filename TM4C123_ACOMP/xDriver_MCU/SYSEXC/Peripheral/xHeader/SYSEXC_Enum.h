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
    SYSEXC_enSTATUS_OK =0u,
    SYSEXC_enSTATUS_ERROR=1u,
    SYSEXC_enSTATUS_UNDEF=0xFFFFFFFFu,
}SYSEXC_nSTATUS;

typedef enum
{
    SYSEXC_enINTERRUPT_DENORMAL =0x0u,
    SYSEXC_enINTERRUPT_DIV0     =0x1u,
    SYSEXC_enINTERRUPT_INVALID  =0x2u,
    SYSEXC_enINTERRUPT_UNDERFLOW=0x3u,
    SYSEXC_enINTERRUPT_OVERFLOW =0x4u,
    SYSEXC_enINTERRUPT_INEXACT  =0x5u,
    SYSEXC_enINTERRUPT_MAX      =0x5u,
}SYSEXC_nINTERRUPT;

typedef enum
{
    SYSEXC_enINT_DENORMAL =0x1u,
    SYSEXC_enINT_DIV0     =0x2u,
    SYSEXC_enINT_INVALID  =0x4u,
    SYSEXC_enINT_UNDERFLOW=0x8u,
    SYSEXC_enINT_OVERFLOW =0x10u,
    SYSEXC_enINT_INEXACT  =0x20u,
    SYSEXC_enINT_ALL         =0x3Fu,
    SYSEXC_enINT_UNDEF       =0xFFFFFu,
}SYSEXC_nINT;

typedef enum
{
    SYSEXC_enINT_NOOCCUR=0u,
    SYSEXC_enINT_OCCUR=1u,
    SYSEXC_enINT_STATUS_UNDEF=0xFFFFFFFFu,
}SYSEXC_nINT_STATUS;

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
    SYSEXC_enDEFAULT=0xFFFFFFFFu,
}SYSEXC_nPRIORITY;





#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_ENUM_H_ */
