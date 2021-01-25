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
    SYSEXC_enSTATUS_OK =0U,
    SYSEXC_enSTATUS_ERROR=1U,
    SYSEXC_enSTATUS_UNDEF=0xFFFFFFFFU,
}SYSEXC_nSTATUS;

typedef enum
{
    SYSEXC_enINTERRUPT_DENORMAL =0x0U,
    SYSEXC_enINTERRUPT_DIV0     =0x1U,
    SYSEXC_enINTERRUPT_INVALID  =0x2U,
    SYSEXC_enINTERRUPT_UNDERFLOW=0x3U,
    SYSEXC_enINTERRUPT_OVERFLOW =0x4U,
    SYSEXC_enINTERRUPT_INEXACT  =0x5U,
    SYSEXC_enINTERRUPT_MAX      =0x5U,
}SYSEXC_nINTERRUPT;

typedef enum
{
    SYSEXC_enINT_DENORMAL =0x1U,
    SYSEXC_enINT_DIV0     =0x2U,
    SYSEXC_enINT_INVALID  =0x4U,
    SYSEXC_enINT_UNDERFLOW=0x8U,
    SYSEXC_enINT_OVERFLOW =0x10U,
    SYSEXC_enINT_INEXACT  =0x20U,
    SYSEXC_enINT_ALL         =0x3FU,
    SYSEXC_enINT_UNDEF       =0xFFFFFU,
}SYSEXC_nINT;

typedef enum
{
    SYSEXC_enINT_NOOCCUR=0U,
    SYSEXC_enINT_OCCUR=1U,
    SYSEXC_enINT_STATUS_UNDEF=0xFFFFFFFFU,
}SYSEXC_nINT_STATUS;

typedef enum
{
    SYSEXC_enPRI0=0U,
    SYSEXC_enPRI1=1U,
    SYSEXC_enPRI2=2U,
    SYSEXC_enPRI3=3U,
    SYSEXC_enPRI4=4U,
    SYSEXC_enPRI5=5U,
    SYSEXC_enPRI6=6U,
    SYSEXC_enPRI7=7U,
    SYSEXC_enDEFAULT=0xFFFFFFFFU,
}SYSEXC_nPRIORITY;





#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_ENUM_H_ */
