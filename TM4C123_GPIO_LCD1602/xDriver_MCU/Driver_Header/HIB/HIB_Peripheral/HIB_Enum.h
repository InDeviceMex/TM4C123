/*
 * HIB_Enum.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_ENUM_H_


typedef enum
{
    HIB_enREADY = 0,
    HIB_enBUSY =1,
}HIB_nREADY;

typedef enum
{
    HIB_enOK = 0,
    HIB_enERROR =1,
}HIB_nSTATUS;

typedef enum
{
    HIB_enRTCALT =0x1,
    HIB_enLOWBAT  =0x4,
    HIB_enEXTW=0x8,
    HIB_enWC =0x10,
    HIB_enALL =0x1F,

}HIB_nINTERRUPT;



#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_ENUM_H_ */
