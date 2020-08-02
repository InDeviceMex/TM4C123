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

#include <xDriver_MCU/GPIO/Header/Peripheral/GPIO_Enum.h>

#define LCD1602_PORT_E  (GPIO_enPORTB)
#define LCD1602_PORT_RS (GPIO_enPORTB)
#define LCD1602_PORT_RW (GPIO_enPORTB)
#define LCD1602_PORT_D4 (GPIO_enPORTB)
#define LCD1602_PORT_D5 (GPIO_enPORTB)
#define LCD1602_PORT_D6 (GPIO_enPORTB)
#define LCD1602_PORT_D7 (GPIO_enPORTB)

#define LCD1602_D4 (GPIO_enPIN0)
#define LCD1602_D5 (GPIO_enPIN1)
#define LCD1602_D6 (GPIO_enPIN2)
#define LCD1602_D7 (GPIO_enPIN3)
#define LCD1602_E  (GPIO_enPIN4)
#define LCD1602_RS (GPIO_enPIN5)
#define LCD1602_RW (GPIO_enPIN6)

#define LCD1602_D4_POS (0u)
#define LCD1602_D5_POS (1u)
#define LCD1602_D6_POS (2u)
#define LCD1602_D7_POS (3u)
#define LCD1602_E_POS  (4u)
#define LCD1602_RS_POS (5u)
#define LCD1602_RW_POS (6u)





#endif /* XAPPLICATION_LCD1602_ADAPTIVE_HEADER_LCD1602_DEFINES_H_ */
