/**
 *
 * @file LCD1602_Enum.h
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
 * @verbatim 17 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XAPPLICATION_LCD1602_ADAPTIVE_HEADER_LCD1602_ENUM_H_
#define XAPPLICATION_LCD1602_ADAPTIVE_HEADER_LCD1602_ENUM_H_

typedef enum
{
    LCD1602_enWRITE=0u,
    LCD1602_enREAD=1u,
}LCD1602_nRW;

typedef enum
{
    LCD1602_enCOMMAND=0u,
    LCD1602_enDATA=1u,
}LCD1602_nRS;

#endif /* XAPPLICATION_LCD1602_ADAPTIVE_HEADER_LCD1602_ENUM_H_ */
