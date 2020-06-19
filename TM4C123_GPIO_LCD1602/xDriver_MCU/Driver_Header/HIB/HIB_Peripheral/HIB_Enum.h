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
    HIB_enREADY = 0u,
    HIB_enBUSY =1u,
}HIB_nREADY;

typedef enum
{
    HIB_enOK = 0u,
    HIB_enERROR =1u,
}HIB_nSTATUS;

typedef enum
{
    HIB_enRTCALT =0x1u,
    HIB_enLOWBAT  =0x4u,
    HIB_enEXTW=0x8u,
    HIB_enWC =0x10u,
    HIB_enALL =0x1Fu,

}HIB_nINTERRUPT;



#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_ENUM_H_ */
