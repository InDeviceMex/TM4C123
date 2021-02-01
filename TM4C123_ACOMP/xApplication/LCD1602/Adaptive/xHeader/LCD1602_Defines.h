/**
 *
 * @file LCD1602_Defines.h
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
#ifndef XAPPLICATION_LCD1602_ADAPTIVE_HEADER_LCD1602_DEFINES_H_
#define XAPPLICATION_LCD1602_ADAPTIVE_HEADER_LCD1602_DEFINES_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

#define LCD1602_PORT_D4 (GPIO_enPORT_B)
#define LCD1602_PORT_D5 (GPIO_enPORT_E)
#define LCD1602_PORT_D6 (GPIO_enPORT_B)
#define LCD1602_PORT_D7 (GPIO_enPORT_C)
#define LCD1602_PORT_E    (GPIO_enPORT_B)
#define LCD1602_PORT_RS (GPIO_enPORT_B)
#define LCD1602_PORT_RW (GPIO_enPORT_B)

#define LCD1602_D4 (GPIO_enPIN_0)
#define LCD1602_D5 (GPIO_enPIN_4)
#define LCD1602_D6 (GPIO_enPIN_2)
#define LCD1602_D7 (GPIO_enPIN_4)
#define LCD1602_E    (GPIO_enPIN_4)
#define LCD1602_RS (GPIO_enPIN_5)
#define LCD1602_RW (GPIO_enPIN_6)

#define LCD1602_D4_POS (0U)
#define LCD1602_D5_POS (4U)
#define LCD1602_D6_POS (2U)
#define LCD1602_D7_POS (4U)
#define LCD1602_E_POS    (4U)
#define LCD1602_RS_POS (5U)
#define LCD1602_RW_POS (6U)





#endif /* XAPPLICATION_LCD1602_ADAPTIVE_HEADER_LCD1602_DEFINES_H_ */
