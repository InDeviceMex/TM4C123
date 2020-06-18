/*
 * LCD1602_Adaptive.h
 *
 *  Created on: 17 may. 2020
 *      Author: vyldram
 */

#ifndef XAPPLICATION_LCD1602_ADAPTIVE_HEADER_LCD1602_ADAPTIVE_H_
#define XAPPLICATION_LCD1602_ADAPTIVE_HEADER_LCD1602_ADAPTIVE_H_

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/GPIO.h>
#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK.h>

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

#define LCD1602_D4_POS (0)
#define LCD1602_D5_POS (1)
#define LCD1602_D6_POS (2)
#define LCD1602_D7_POS (3)
#define LCD1602_E_POS  (4)
#define LCD1602_RS_POS (5)
#define LCD1602_RW_POS (6)

typedef enum
{
    LCD1602_enWRITE=0,
    LCD1602_enREAD=1,
}LCD1602_nRW;

typedef enum
{
    LCD1602_enCOMMAND=0,
    LCD1602_enDATA=1,
}LCD1602_nRS;


void    LCD1602__vDelay(float fDelay);
void    LCD1602__vInitGPIO(void);

void    LCD1602__vWritePin8Bit(uint8_t u8Data);

void    LCD1602__vWrite(uint8_t u8Data,LCD1602_nRS enMode);
uint8_t LCD1602__u8Read(LCD1602_nRS enMode);



#endif /* XAPPLICATION_LCD1602_ADAPTIVE_HEADER_LCD1602_ADAPTIVE_H_ */
