/*
 * I2C.h
 *
 *  Created on: 26 mar. 2018
 *      Author: InDev
 */

#ifndef I2C_H_
#define I2C_H_



#include "SYSCTL.h"
#include "GPIO.h"
#include "NVIC.h"
#include <stdint.h>



#define I2C_BASE            (0x40020000)
#define I2C_OFFSET          (0x00020000)

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// I2C ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

typedef volatile struct
{
    volatile uint32_t R_S      : 1;
    volatile uint32_t SA       : 7;
    const    uint32_t reserved : 24;
}I2CMSA_TypeDef;

typedef volatile struct
{
    volatile const uint32_t BUSY     : 1;
    volatile const uint32_t ERROR    : 1;
    volatile const uint32_t ADRACK   : 1;
    volatile const uint32_t DATACK   : 1;
    volatile const uint32_t ARBLST   : 1;
    volatile const uint32_t IDLE     : 1;
    volatile const uint32_t BUSBSY   : 1;
    volatile const uint32_t CLKTO    : 1;
    const     uint32_t      reserved : 24;
}I2CMCSR_TypeDef;

typedef volatile struct
{
    volatile uint32_t RUN      : 1;
    volatile uint32_t START    : 1;
    volatile uint32_t STOP     : 1;
    volatile uint32_t ACK      : 1;
    volatile uint32_t HS       : 1;
    const    uint32_t reserved : 27;
}I2CMCSW_TypeDef;


typedef volatile struct
{
    volatile uint32_t DATA     : 8;
    const    uint32_t reserved : 24;
}I2CMDR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TPR      : 7;
    volatile uint32_t HS       : 1;
    const    uint32_t reserved : 24;
}I2CMTPR_TypeDef;



typedef volatile struct
{
    volatile uint32_t IM       : 1;
    volatile uint32_t CLKIM    : 1;
    const    uint32_t reserved : 30;
}I2CMIMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RIS        : 1;
    volatile const uint32_t CLKRIS     : 1;
    const     uint32_t      reserved   : 30;
}I2CMRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t MIS        : 1;
    volatile const uint32_t CLKMIS     : 1;
    const    uint32_t       reserved   : 30;
}I2CMMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t IC       : 1;
    volatile uint32_t CLKIC    : 1;
    const    uint32_t reserved : 30;
}I2CMICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t LPBK     : 1;
    const    uint32_t reserved : 3;
    volatile uint32_t MFE      : 1;
    volatile uint32_t SFE      : 1;
    volatile uint32_t GFE      : 1;
    const    uint32_t reserved1: 25;
}I2CMCR_TypeDef;


typedef volatile struct
{
    volatile uint32_t CNTL     : 8;
    const    uint32_t reserved : 24;
}I2CMCLKOCNT_TypeDef;

typedef volatile struct
{
    volatile const uint32_t SCL        : 1;
    volatile const uint32_t SDA        : 1;
    const    uint32_t       reserved   : 30;
}I2CMBMON_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved : 4;
    volatile uint32_t GFPW     : 3;
    const    uint32_t reserved1: 25;
}I2CMCR2_TypeDef;




typedef volatile struct
{
    volatile uint32_t OAR      : 7;
    const    uint32_t reserved1: 25;
}I2CSOAR_TypeDef;



typedef volatile struct
{
    volatile const uint32_t RREQ     : 1;
    volatile const uint32_t TREQ     : 1;
    volatile const uint32_t FBR      : 1;
    volatile const uint32_t OAR2SEL  : 1;
    const    uint32_t       reserved : 28;
}I2CSCSR_TypeDef;

typedef volatile struct
{
    volatile uint32_t DA       : 1;
    const    uint32_t reserved : 31;
}I2CSCSRW_TypeDef;


typedef volatile struct
{
    volatile uint32_t DATA     : 8;
    const    uint32_t reserved : 24;
}I2CSDR_TypeDef;


typedef volatile struct
{
    volatile uint32_t DATAIM   : 1;
    volatile uint32_t STARTIM  : 1;
    volatile uint32_t STOPIM   : 1;
    const    uint32_t reserved : 29;
}I2CSIMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t DATARIS  : 1;
    volatile const uint32_t STARTRIS : 1;
    volatile const uint32_t STOPRIS  : 1;
    const    uint32_t       reserved : 29;
}I2CSRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t DATAMIS  : 1;
    volatile const uint32_t STARTMIS : 1;
    volatile const uint32_t STOPMIS  : 1;
    const    uint32_t       reserved : 29;
}I2CSMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATAIC  : 1;
    volatile uint32_t STARTIC : 1;
    volatile uint32_t STOPIC  : 1;
    const    uint32_t reserved: 29;
}I2CSICR_TypeDef;


typedef volatile struct
{
    volatile uint32_t OAR2     : 7;
    volatile uint32_t OAR2EN   : 1;
    const    uint32_t reserved : 24;
}I2CSOAR2_TypeDef;


typedef volatile struct
{
    volatile uint32_t ACKOEN   : 1;
    volatile uint32_t ACKOVAL  : 1;
    const    uint32_t reserved : 30;
}I2CSACKCTL_TypeDef;


typedef volatile struct
{
    volatile const uint32_t HS         : 1;
    const    uint32_t       reserved   : 31;
}I2CPP_TypeDef;


typedef volatile struct
{
    volatile uint32_t HS         : 1;
    const    uint32_t reserved   : 31;
}I2CPC_TypeDef;




typedef volatile struct
{
    union
    {
        volatile uint32_t        I2CMSA;
        I2CMSA_TypeDef                I2CMSA_Bit;
    };
    union
    {
        volatile uint32_t        I2CMCS;
        I2CMCSR_TypeDef               I2CMCSR_Bit;
        I2CMCSW_TypeDef               I2CMCSW_Bit;
    };
    union
    {
        volatile uint32_t        I2CMDR;
        I2CMDR_TypeDef                I2CMDR_Bit;
    };
    union
    {
        volatile uint32_t        I2CMTPR;
        I2CMTPR_TypeDef               I2CMTPR_Bit;
    };
    union
    {
        volatile uint32_t        I2CMIMR;
        I2CMIMR_TypeDef               I2CMIMR_Bit;
    };
    union
    {
        volatile const uint32_t  I2CMRIS;
        I2CMRIS_TypeDef               I2CMRIS_Bit;
    };
    union
    {
        volatile const uint32_t  I2CMMIS;
        I2CMMIS_TypeDef               I2CMMIS_Bit;
    };
    union
    {
        volatile uint32_t        I2CMICR;
        I2CMICR_TypeDef               I2CMICR_Bit;
    };
    union
    {
        volatile uint32_t        I2CMCR;
        I2CMCR_TypeDef                I2CMCR_Bit;
    };
    union
    {
        volatile uint32_t        I2CMCLKOCNT;
        I2CMCLKOCNT_TypeDef           I2CMCLKOCNT_Bit;
    };
    union
    {
        volatile const uint32_t  I2CMBMON;
        I2CMBMON_TypeDef              I2CMBMON_Bit;
    };
    const uint32_t               reserved[2];
    union
    {
        volatile uint32_t        I2CMCR2;
        I2CMCR2_TypeDef               I2CMCR2_Bit;
    };

    const uint32_t               reserved1[497];
    union
    {
        volatile uint32_t        I2CSOAR;
        I2CSOAR_TypeDef               I2CSOAR_Bit;
    };
    union
    {
        volatile uint32_t        I2CSCSR;
        I2CSCSR_TypeDef               I2CSCSR_Bit;
        I2CSCSRW_TypeDef              I2CSCSRW_Bit;
    };
    union
    {
        volatile uint32_t        I2CSDR;
        I2CSDR_TypeDef                I2CSDR_Bit;
    };
    union
    {
        volatile uint32_t        I2CSIMR;
        I2CSIMR_TypeDef               I2CSIMR_Bit;
    };
    union
    {
        volatile const uint32_t  I2CSRIS;
        I2CSRIS_TypeDef               I2CSRIS_Bit;
    };
    union
    {
        volatile const uint32_t  I2CSMIS;
        I2CSMIS_TypeDef               I2CSMIS_Bit;
    };
    union
    {
        volatile uint32_t        I2CSICR;
        I2CSICR_TypeDef               I2CSICR_Bit;
    };
    union
    {
        volatile uint32_t        I2CSOAR2;
        I2CSOAR2_TypeDef              I2CSOAR2_Bit;
    };
    union
    {
        volatile uint32_t        I2CSACKCTL;
        I2CSACKCTL_TypeDef            I2CSACKCTL_Bit;
    };
    const uint32_t               reserved2[487];

    union
    {
        volatile const uint32_t  I2CPP;
        I2CPP_TypeDef                 I2CPP_Bit;
    };
    union
    {
        volatile uint32_t        I2CPC;
        I2CPC_TypeDef                 I2CPC_Bit;
    };
    const uint32_t               reserved3[14];
}I2C_TypeDef;

typedef volatile struct
{
     I2C_TypeDef IC[7];
}I2CS_TypeDef;




#define I2C0_BASE         (0x40020000)
#define I2C0_OFFSET       (0x00020000)
#define I2C1_BASE         (0x40021000)
#define I2C1_OFFSET       (0x00021000)
#define I2C2_BASE         (0x40022000)
#define I2C2_OFFSET       (0x00022000)
#define I2C3_BASE         (0x40023000)
#define I2C3_OFFSET       (0x00023000)


#define I2C               (((I2CS_TypeDef*)(I2C_BASE)))
#define I2C0              (((I2C_TypeDef*)(I2C0_BASE)))
#define I2C1              (((I2C_TypeDef*)(I2C1_BASE)))
#define I2C2              (((I2C_TypeDef*)(I2C2_BASE)))
#define I2C3              (((I2C_TypeDef*)(I2C3_BASE)))


#define I2C_I2CMSA_OFFSET      (0x0000)
#define I2C_I2CMCSR_OFFSET     (0x0004)
#define I2C_I2CMCSW_OFFSET     (0x0004)
#define I2C_I2CMDR_OFFSET      (0x0008)
#define I2C_I2CMTPR_OFFSET     (0x000C)
#define I2C_I2CMIMR_OFFSET     (0x0010)
#define I2C_I2CMRIS_OFFSET     (0x0014)
#define I2C_I2CMMIS_OFFSET     (0x0018)
#define I2C_I2CMICR_OFFSET     (0x001C)
#define I2C_I2CMCR_OFFSET      (0x0020)
#define I2C_I2CMCLKOCNT_OFFSET (0x0024)
#define I2C_I2CMBMON_OFFSET    (0x002C)
#define I2C_I2CMCR2_OFFSET     (0x0038)
#define I2C_I2CSOAR_OFFSET     (0x0800)
#define I2C_I2CSCSR_OFFSET     (0x0804)
#define I2C_I2CSCSRW_OFFSET    (0x0804)
#define I2C_I2CSDR_OFFSET      (0x0808)
#define I2C_I2CSIMR_OFFSET     (0x080C)
#define I2C_I2CSRIS_OFFSET     (0x0810)
#define I2C_I2CSMIS_OFFSET     (0x0814)
#define I2C_I2CSICR_OFFSET     (0x0818)
#define I2C_I2CSOAR2_OFFSET    (0x081C)
#define I2C_I2CSACKCTL_OFFSET  (0x0820)
#define I2C_I2CPP_OFFSET       (0x0FC0)
#define I2C_I2CPC_OFFSET       (0x0FC4)

// Todo I2C0

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0 I2C0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.1 I2CMSA ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CMSA            (((I2CMSA_TypeDef*)(I2C0_BASE + I2C_I2CMSA_OFFSET )))
#define I2C0_I2CMSA_R          (*((volatile uint32_t *)(I2C0_BASE +I2C_I2CMSA_OFFSET)))

//--------
#define I2C0_I2CMSA_R_RS_MASK       (0x00000001)
#define I2C0_I2CMSA_R_RS_BIT        (0)
#define I2C0_I2CMSA_R_RS_TRANSMIT   (0x00000000)
#define I2C0_I2CMSA_R_RS_RECEIVE    (0x00000001)

#define I2C0_I2CMSA_RS_MASK         (0x00000001)
#define I2C0_I2CMSA_RS_TRANSMIST    (0x00000000)
#define I2C0_I2CMSA_RS_RECEIVE      (0x00000001)
//--------

//--------
#define I2C0_I2CMSA_R_SA_MASK       (0x000000FE)
#define I2C0_I2CMSA_R_SA_BIT        (1)

#define I2C0_I2CMSA_SA_MASK         (0x000000FE)
//--------

#define I2C0_I2CMSA_RS_BB     (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMSA_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.2 I2CMCSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CMCSR            (((I2CMCSR_TypeDef*)(I2C0_BASE + I2C_I2CMCSR_OFFSET )))
#define I2C0_I2CMCSR_R          (*((volatile const uint32_t *)(I2C0_BASE +I2C_I2CMCSR_OFFSET)))

//--------
#define I2C0_I2CMCSR_R_BUSY_MASK       (0x00000001)
#define I2C0_I2CMCSR_R_BUSY_BIT        (0)
#define I2C0_I2CMCSR_R_BUSY_IDLE       (0x00000000)
#define I2C0_I2CMCSR_R_BUSY_BUSY       (0x00000001)

#define I2C0_I2CMCSR_BUSY_MASK         (0x00000001)
#define I2C0_I2CMCSR_BUSY_IDLE         (0x00000000)
#define I2C0_I2CMCSR_BUSY_BUSY         (0x00000001)
//--------

//--------
#define I2C0_I2CMCSR_R_ERROR_MASK       (0x00000002)
#define I2C0_I2CMCSR_R_ERROR_BIT        (1)
#define I2C0_I2CMCSR_R_ERROR_NOERROR    (0x00000000)
#define I2C0_I2CMCSR_R_ERROR_ERROR      (0x00000002)

#define I2C0_I2CMCSR_ERROR_MASK         (0x00000001)
#define I2C0_I2CMCSR_ERROR_NOERROR      (0x00000000)
#define I2C0_I2CMCSR_ERROR_ERROR        (0x00000001)
//--------

//--------
#define I2C0_I2CMCSR_R_ADRACK_MASK       (0x00000004)
#define I2C0_I2CMCSR_R_ADRACK_BIT        (2)
#define I2C0_I2CMCSR_R_ADRACK_NOACK      (0x00000000)
#define I2C0_I2CMCSR_R_ADRACK_ACK        (0x00000004)

#define I2C0_I2CMCSR_ADRACK_MASK         (0x00000001)
#define I2C0_I2CMCSR_ADRACK_NOACK        (0x00000000)
#define I2C0_I2CMCSR_ADRACK_ACK          (0x00000001)
//--------

//--------
#define I2C0_I2CMCSR_R_DATACK_MASK       (0x00000008)
#define I2C0_I2CMCSR_R_DATACK_BIT        (3)
#define I2C0_I2CMCSR_R_DATACK_NOACK      (0x00000000)
#define I2C0_I2CMCSR_R_DATACK_ACK        (0x00000008)

#define I2C0_I2CMCSR_DATACK_MASK         (0x00000001)
#define I2C0_I2CMCSR_DATACK_NOACK        (0x00000000)
#define I2C0_I2CMCSR_DATACK_ACK          (0x00000001)
//--------

//--------
#define I2C0_I2CMCSR_R_DATACK_MASK       (0x00000008)
#define I2C0_I2CMCSR_R_DATACK_BIT        (3)
#define I2C0_I2CMCSR_R_DATACK_NOACK      (0x00000000)
#define I2C0_I2CMCSR_R_DATACK_ACK        (0x00000008)

#define I2C0_I2CMCSR_DATACK_MASK         (0x00000001)
#define I2C0_I2CMCSR_DATACK_NOACK        (0x00000000)
#define I2C0_I2CMCSR_DATACK_ACK          (0x00000001)
//--------

//--------
#define I2C0_I2CMCSR_R_ARBLST_MASK       (0x00000010)
#define I2C0_I2CMCSR_R_ARBLST_BIT        (4)
#define I2C0_I2CMCSR_R_ARBLST_WON        (0x00000000)
#define I2C0_I2CMCSR_R_ARBLST_LOST       (0x00000010)

#define I2C0_I2CMCSR_ARBLST_MASK         (0x00000001)
#define I2C0_I2CMCSR_ARBLST_WON          (0x00000000)
#define I2C0_I2CMCSR_ARBLST_LOST         (0x00000001)
//--------

//--------
#define I2C0_I2CMCSR_R_IDLE_MASK       (0x00000020)
#define I2C0_I2CMCSR_R_IDLE_BIT        (5)
#define I2C0_I2CMCSR_R_IDLE_NOIDLE     (0x00000000)
#define I2C0_I2CMCSR_R_IDLE_IDLE       (0x00000020)

#define I2C0_I2CMCSR_IDLE_MASK         (0x00000001)
#define I2C0_I2CMCSR_IDLE_NOIDLE       (0x00000000)
#define I2C0_I2CMCSR_IDLE_IDLE         (0x00000001)
//--------

//--------
#define I2C0_I2CMCSR_R_BUSBSY_MASK       (0x00000040)
#define I2C0_I2CMCSR_R_BUSBSY_BIT        (6)
#define I2C0_I2CMCSR_R_BUSBSY_IDLE       (0x00000000)
#define I2C0_I2CMCSR_R_BUSBSY_BUSY       (0x00000040)

#define I2C0_I2CMCSR_BUSBSY_MASK         (0x00000001)
#define I2C0_I2CMCSR_BUSBSY_IDLE         (0x00000000)
#define I2C0_I2CMCSR_BUSBSY_BUSY         (0x00000001)
//--------

//--------
#define I2C0_I2CMCSR_R_CLKTO_MASK       (0x00000080)
#define I2C0_I2CMCSR_R_CLKTO_BIT        (7)
#define I2C0_I2CMCSR_R_CLKTO_NOERROR    (0x00000000)
#define I2C0_I2CMCSR_R_CLKTO_ERROR      (0x00000080)

#define I2C0_I2CMCSR_CLKTO_MASK         (0x00000001)
#define I2C0_I2CMCSR_CLKTO_NOERROR      (0x00000000)
#define I2C0_I2CMCSR_CLKTO_ERROR        (0x00000001)
//--------

#define I2C0_I2CMCSR_BUSY_BB        (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(0*4))))
#define I2C0_I2CMCSR_ERROR_BB       (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(1*4))))
#define I2C0_I2CMCSR_ADRACK_BB      (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(2*4))))
#define I2C0_I2CMCSR_DATACK_BB      (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(3*4))))
#define I2C0_I2CMCSR_ARBLST_BB      (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(4*4))))
#define I2C0_I2CMCSR_IDLE_BB        (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(5*4))))
#define I2C0_I2CMCSR_BUSBSY_BB      (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(6*4))))
#define I2C0_I2CMCSR_CLKTO_BB       (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(7*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.2 I2CMCSW ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CMCSW            (((I2CMCSW_TypeDef*)(I2C0_BASE + I2C_I2CMCSW_OFFSET )))
#define I2C0_I2CMCSW_R          (*((volatile uint32_t *)(I2C0_BASE +I2C_I2CMCSW_OFFSET)))

//--------
#define I2C0_I2CMCSW_R_RUN_MASK       (0x00000001)
#define I2C0_I2CMCSW_R_RUN_BIT        (0)
#define I2C0_I2CMCSW_R_RUN_DIS        (0x00000000)
#define I2C0_I2CMCSW_R_RUN_EN         (0x00000001)

#define I2C0_I2CMCSW_RUN_MASK         (0x00000001)
#define I2C0_I2CMCSW_RUN_DIS          (0x00000000)
#define I2C0_I2CMCSW_RUN_EN           (0x00000001)
//--------

//--------
#define I2C0_I2CMCSW_R_START_MASK       (0x00000002)
#define I2C0_I2CMCSW_R_START_BIT        (1)
#define I2C0_I2CMCSW_R_START_DIS        (0x00000000)
#define I2C0_I2CMCSW_R_START_EN         (0x00000002)

#define I2C0_I2CMCSW_START_MASK         (0x00000001)
#define I2C0_I2CMCSW_START_DIS          (0x00000000)
#define I2C0_I2CMCSW_START_EN           (0x00000001)
//--------

//--------
#define I2C0_I2CMCSW_R_STOP_MASK       (0x00000004)
#define I2C0_I2CMCSW_R_STOP_BIT        (2)
#define I2C0_I2CMCSW_R_STOP_DIS        (0x00000000)
#define I2C0_I2CMCSW_R_STOP_EN         (0x00000004)

#define I2C0_I2CMCSW_STOP_MASK         (0x00000001)
#define I2C0_I2CMCSW_STOP_DIS          (0x00000000)
#define I2C0_I2CMCSW_STOP_EN           (0x00000001)
//--------

//--------
#define I2C0_I2CMCSW_R_ACK_MASK       (0x00000008)
#define I2C0_I2CMCSW_R_ACK_BIT        (3)
#define I2C0_I2CMCSW_R_ACK_DIS        (0x00000000)
#define I2C0_I2CMCSW_R_ACK_EN         (0x00000008)

#define I2C0_I2CMCSW_ACK_MASK         (0x00000001)
#define I2C0_I2CMCSW_ACK_DIS          (0x00000000)
#define I2C0_I2CMCSW_ACK_EN           (0x00000001)
//--------

//--------
#define I2C0_I2CMCSW_R_HS_MASK       (0x00000010)
#define I2C0_I2CMCSW_R_HS_BIT        (4)
#define I2C0_I2CMCSW_R_HS_DIS        (0x00000000)
#define I2C0_I2CMCSW_R_HS_EN         (0x00000010)

#define I2C0_I2CMCSW_HS_MASK         (0x00000001)
#define I2C0_I2CMCSW_HS_DIS          (0x00000000)
#define I2C0_I2CMCSW_HS_EN           (0x00000001)
//--------

#define I2C0_I2CMCSW_RUN_BB      (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(0*4))))
#define I2C0_I2CMCSW_START_BB    (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(1*4))))
#define I2C0_I2CMCSW_STOP_BB     (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(2*4))))
#define I2C0_I2CMCSW_ACK_BB      (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(3*4))))
#define I2C0_I2CMCSW_HS_BB       (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(4*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.3 I2CMDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CMDR            (((I2CMDR_TypeDef*)(I2C0_BASE + I2C_I2CMDR_OFFSET )))
#define I2C0_I2CMDR_R          (*((volatile uint32_t *)(I2C0_BASE +I2C_I2CMDR_OFFSET)))

//--------
#define I2C0_I2CMDR_R_DATA_MASK       (0x000000FF)
#define I2C0_I2CMDR_R_DATA_BIT        (0)

#define I2C0_I2CMDR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.4 I2CMTPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CMTPR            (((I2CMTPR_TypeDef*)(I2C0_BASE + I2C_I2CMTPR_OFFSET )))
#define I2C0_I2CMTPR_R          (*((volatile uint32_t *)(I2C0_BASE +I2C_I2CMTPR_OFFSET)))

//--------
#define I2C0_I2CMTPR_R_TPR_MASK       (0x0000007F)
#define I2C0_I2CMTPR_R_TPR_BIT        (0)

#define I2C0_I2CMTPR_TPR_MASK         (0x0000007F)
//--------

//--------
#define I2C0_I2CMTPR_R_HS_MASK       (0x00000080)
#define I2C0_I2CMTPR_R_HS_BIT        (7)
#define I2C0_I2CMTPR_R_HS_DIS        (0x00000000)
#define I2C0_I2CMTPR_R_HS_EN         (0x00000080)

#define I2C0_I2CMTPR_HS_MASK         (0x00000001)
#define I2C0_I2CMTPR_HS_DIS          (0x00000000)
#define I2C0_I2CMTPR_HS_EN           (0x00000001)
//--------

#define I2C0_I2CMTPR_HS_BB     (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMTPR_OFFSET)*32)+(7*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.5 I2CMIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CMIMR            (((I2CMIMR_TypeDef*)(I2C0_BASE + I2C_I2CMIMR_OFFSET )))
#define I2C0_I2CMIMR_R          (*((volatile uint32_t *)(I2C0_BASE +I2C_I2CMIMR_OFFSET)))

//--------
#define I2C0_I2CIMR_R_IM_MASK       (0x00000001)
#define I2C0_I2CIMR_R_IM_BIT        (0)
#define I2C0_I2CIMR_R_IM_DIS        (0x00000000)
#define I2C0_I2CIMR_R_IM_EN         (0x00000001)

#define I2C0_I2CIMR_IM_MASK       (0x00000001)
#define I2C0_I2CIMR_IM_DIS        (0x00000000)
#define I2C0_I2CIMR_IM_EN         (0x00000001)
//--------

//--------
#define I2C0_I2CIMR_R_CLKIM_MASK       (0x00000002)
#define I2C0_I2CIMR_R_CLKIM_BIT        (1)
#define I2C0_I2CIMR_R_CLKIM_DIS        (0x00000000)
#define I2C0_I2CIMR_R_CLKIM_EN         (0x00000002)

#define I2C0_I2CIMR_CLKIM_MASK       (0x00000001)
#define I2C0_I2CIMR_CLKIM_DIS        (0x00000000)
#define I2C0_I2CIMR_CLKIM_EN         (0x00000001)
//--------

#define I2C0_I2CMIMR_IM_BB     (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMIMR_OFFSET)*32)+(0*4))))
#define I2C0_I2CMIMR_CLKIM_BB  (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMIMR_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.6 I2CMRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CMRIS            (((I2CMRIS_TypeDef*)(I2C0_BASE + I2C_I2CMRIS_OFFSET )))
#define I2C0_I2CMRIS_R          (*((volatile const uint32_t *)(I2C0_BASE +I2C_I2CMRIS_OFFSET)))

//--------
#define I2C0_I2CMRIS_R_RIS_MASK       (0x00000001)
#define I2C0_I2CMRIS_R_RIS_BIT        (0)
#define I2C0_I2CMRIS_R_RIS_NOACTIVE   (0x00000000)
#define I2C0_I2CMRIS_R_RIS_ACTIVE     (0x00000001)

#define I2C0_I2CMRIS_RIS_MASK       (0x00000001)
#define I2C0_I2CMRIS_RIS_NOACTIVE   (0x00000000)
#define I2C0_I2CMRIS_RIS_ACTIVE     (0x00000001)
//--------

//--------
#define I2C0_I2CMRIS_R_CLKRIS_MASK       (0x00000002)
#define I2C0_I2CMRIS_R_CLKRIS_BIT        (1)
#define I2C0_I2CMRIS_R_CLKRIS_NOACTIVE   (0x00000000)
#define I2C0_I2CMRIS_R_CLKRIS_ACTIVE     (0x00000002)

#define I2C0_I2CMRIS_CLKRIS_MASK       (0x00000001)
#define I2C0_I2CMRIS_CLKRIS_NOACTIVE   (0x00000000)
#define I2C0_I2CMRIS_CLKRIS_ACTIVE     (0x00000001)
//--------

#define I2C0_I2CMRIS_RIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMRIS_OFFSET)*32)+(0*4))))
#define I2C0_I2CMRIS_CLKRIS_BB  (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMRIS_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.7 I2CMMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CMMIS            (((I2CMMIS_TypeDef*)(I2C0_BASE + I2C_I2CMMIS_OFFSET )))
#define I2C0_I2CMMIS_R          (*((volatile const uint32_t *)(I2C0_BASE +I2C_I2CMMIS_OFFSET)))

//--------
#define I2C0_I2CMMIS_R_MIS_MASK       (0x00000001)
#define I2C0_I2CMMIS_R_MIS_BIT        (0)
#define I2C0_I2CMMIS_R_MIS_NOOCCUR    (0x00000000)
#define I2C0_I2CMMIS_R_MIS_OCCUR      (0x00000001)

#define I2C0_I2CMMIS_MIS_MASK       (0x00000001)
#define I2C0_I2CMMIS_MIS_NOOCCUR    (0x00000000)
#define I2C0_I2CMMIS_MIS_OCCUR      (0x00000001)
//--------

//--------
#define I2C0_I2CMMIS_R_CLKMIS_MASK       (0x00000002)
#define I2C0_I2CMMIS_R_CLKMIS_BIT        (1)
#define I2C0_I2CMMIS_R_CLKMIS_NOOCCUR    (0x00000000)
#define I2C0_I2CMMIS_R_CLKMIS_OCCUR      (0x00000002)

#define I2C0_I2CMMIS_CLKMIS_MASK       (0x00000001)
#define I2C0_I2CMMIS_CLKMIS_NOOCCUR    (0x00000000)
#define I2C0_I2CMMIS_CLKMIS_OCCUR      (0x00000001)
//--------

#define I2C0_I2CMMIS_MIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMMIS_OFFSET)*32)+(0*4))))
#define I2C0_I2CMMIS_CLKMIS_BB  (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMMIS_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.8 I2CMICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CMICR            (((I2CMICR_TypeDef*)(I2C0_BASE + I2C_I2CMICR_OFFSET )))
#define I2C0_I2CMICR_R          (*((volatile uint32_t *)(I2C0_BASE +I2C_I2CMICR_OFFSET)))

//--------
#define I2C0_I2CMICR_R_IC_MASK       (0x00000001)
#define I2C0_I2CMICR_R_IC_BIT        (0)
#define I2C0_I2CMICR_R_IC_CLEAR      (0x00000001)

#define I2C0_I2CMICR_IC_MASK       (0x00000001)
#define I2C0_I2CMICR_IC_CLEAR      (0x00000001)
//--------

//--------
#define I2C0_I2CMICR_R_CLKIC_MASK       (0x00000002)
#define I2C0_I2CMICR_R_CLKIC_BIT        (1)
#define I2C0_I2CMICR_R_CLKIC_CLEAR      (0x00000002)

#define I2C0_I2CMICR_CLKIC_MASK       (0x00000001)
#define I2C0_I2CMICR_CLKIC_CLEAR      (0x00000001)
//--------

#define I2C0_I2CMICR_IC_BB        (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMICR_OFFSET)*32)+(0*4))))
#define I2C0_I2CMICR_CLKIC_BB     (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMICR_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.9 I2CMCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CMCR            (((I2CMCR_TypeDef*)(I2C0_BASE + I2C_I2CMCR_OFFSET )))
#define I2C0_I2CMCR_R          (*((volatile uint32_t *)(I2C0_BASE +I2C_I2CMCR_OFFSET)))

//--------
#define I2C0_I2CMCR_R_LPBK_MASK       (0x00000001)
#define I2C0_I2CMCR_R_LPBK_BIT        (0)
#define I2C0_I2CMCR_R_LPBK_NORMAL     (0x00000000)
#define I2C0_I2CMCR_R_LPBK_LOOPBACK   (0x00000001)

#define I2C0_I2CMCR_LPBK_MASK       (0x00000001)
#define I2C0_I2CMCR_LPBK_NORMAL     (0x00000000)
#define I2C0_I2CMCR_LPBK_LOOPBACK   (0x00000001)
//--------

//--------
#define I2C0_I2CMCR_R_MFE_MASK       (0x00000010)
#define I2C0_I2CMCR_R_MFE_BIT        (4)
#define I2C0_I2CMCR_R_MFE_DIS        (0x00000000)
#define I2C0_I2CMCR_R_MFE_EN         (0x00000010)

#define I2C0_I2CMCR_MFE_MASK       (0x00000001)
#define I2C0_I2CMCR_MFE_DIS        (0x00000000)
#define I2C0_I2CMCR_MFE_EN         (0x00000001)
//--------

//--------
#define I2C0_I2CMCR_R_SFE_MASK       (0x00000020)
#define I2C0_I2CMCR_R_SFE_BIT        (5)
#define I2C0_I2CMCR_R_SFE_DIS        (0x00000000)
#define I2C0_I2CMCR_R_SFE_EN         (0x00000020)

#define I2C0_I2CMCR_SFE_MASK       (0x00000001)
#define I2C0_I2CMCR_SFE_DIS        (0x00000000)
#define I2C0_I2CMCR_SFE_EN         (0x00000001)
//--------

//--------
#define I2C0_I2CMCR_R_GFE_MASK       (0x00000040)
#define I2C0_I2CMCR_R_GFE_BIT        (6)
#define I2C0_I2CMCR_R_GFE_DIS        (0x00000000)
#define I2C0_I2CMCR_R_GFE_EN         (0x00000040)

#define I2C0_I2CMCR_GFE_MASK       (0x00000001)
#define I2C0_I2CMCR_GFE_DIS        (0x00000000)
#define I2C0_I2CMCR_GFE_EN         (0x00000001)
//--------)

#define I2C0_I2CMCR_LPBK_BB        (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMCR_OFFSET)*32)+(0*4))))
#define I2C0_I2CMCR_MFE_BB         (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMCR_OFFSET)*32)+(4*4))))
#define I2C0_I2CMCR_SFE_BB         (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMCR_OFFSET)*32)+(5*4))))
#define I2C0_I2CMCR_GFE_BB         (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMCR_OFFSET)*32)+(6*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.10 I2CMCLKOCNT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CMCLKOCNT            (((I2CMCLKOCNT_TypeDef*)(I2C0_BASE + I2C_I2CMCLKOCNT_OFFSET )))
#define I2C0_I2CMCLKOCNT_R          (*((volatile uint32_t *)(I2C0_BASE +I2C_I2CMCLKOCNT_OFFSET)))

//--------
#define I2C0_I2CMCLKOCNT_R_CNTL_MASK       (0x000000FF)
#define I2C0_I2CMCLKOCNT_R_CNTL_BIT        (0)

#define I2C0_I2CMCLKOCNT_CNTL_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.11 I2CMBMON ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CMBMON            (((I2CMBMON_TypeDef*)(I2C0_BASE + I2C_I2CMBMON_OFFSET )))
#define I2C0_I2CMBMON_R          (*((volatile const uint32_t *)(I2C0_BASE +I2C_I2CMBMON_OFFSET)))

//--------
#define I2C0_I2CMBMON_R_SCL_MASK       (0x00000001)
#define I2C0_I2CMBMON_R_SCL_BIT        (0)
#define I2C0_I2CMBMON_R_SCL_LOW        (0x00000000)
#define I2C0_I2CMBMON_R_SCL_HIGH       (0x00000001)

#define I2C0_I2CMBMON_SCL_MASK       (0x00000001)
#define I2C0_I2CMBMON_SCL_LOW        (0x00000000)
#define I2C0_I2CMBMON_SCL_HIGH       (0x00000001)
//--------

//--------
#define I2C0_I2CMBMON_R_SDA_MASK       (0x00000002)
#define I2C0_I2CMBMON_R_SDA_BIT        (1)
#define I2C0_I2CMBMON_R_SDA_LOW        (0x00000000)
#define I2C0_I2CMBMON_R_SDA_HIGH       (0x00000002)

#define I2C0_I2CMBMON_SDA_MASK       (0x00000001)
#define I2C0_I2CMBMON_SDA_LOW        (0x00000000)
#define I2C0_I2CMBMON_SDA_HIGH       (0x00000001)
//--------

#define I2C0_I2CMBMON_SCL_BB        (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMBMON_OFFSET)*32)+(0*4))))
#define I2C0_I2CMBMON_SDA_BB         (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CMBMON_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.12 I2CMCR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CMCR2            (((I2CMCR2_TypeDef*)(I2C0_BASE + I2C_I2CMCR2_OFFSET )))
#define I2C0_I2CMCR2_R          (*((volatile uint32_t *)(I2C0_BASE +I2C_I2CMCR2_OFFSET)))


//--------
#define I2C0_I2CMCR2_R_GFPW_MASK       (0x000000E0)
#define I2C0_I2CMCR2_R_GFPW_BIT        (0)
#define I2C0_I2CMCR2_R_GFPW_BYPASS     (0x00000000)
#define I2C0_I2CMCR2_R_GFPW_1CLOCK     (0x00000020)
#define I2C0_I2CMCR2_R_GFPW_2CLOCK     (0x00000040)
#define I2C0_I2CMCR2_R_GFPW_3CLOCK     (0x00000060)
#define I2C0_I2CMCR2_R_GFPW_4CLOCK     (0x00000080)
#define I2C0_I2CMCR2_R_GFPW_8CLOCK     (0x00000090)
#define I2C0_I2CMCR2_R_GFPW_16CLOCK    (0x000000C0)
#define I2C0_I2CMCR2_R_GFPW_31CLOCK    (0x000000E0)

#define I2C0_I2CMCR2_GFPW_MASK         (0x00000007)
#define I2C0_I2CMCR2_GFPW_BYPASS       (0x00000000)
#define I2C0_I2CMCR2_GFPW_1CLOCK       (0x00000001)
#define I2C0_I2CMCR2_GFPW_2CLOCK       (0x00000002)
#define I2C0_I2CMCR2_GFPW_3CLOCK       (0x00000003)
#define I2C0_I2CMCR2_GFPW_4CLOCK       (0x00000004)
#define I2C0_I2CMCR2_GFPW_8CLOCK       (0x00000005)
#define I2C0_I2CMCR2_GFPW_16CLOCK      (0x00000006)
#define I2C0_I2CMCR2_GFPW_31CLOCK      (0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.13 I2CSOAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CSOAR            (((I2CSOAR_TypeDef*)(I2C0_BASE + I2C_I2CSOAR_OFFSET )))
#define I2C0_I2CSOAR_R          (*((volatile uint32_t *)(I2C0_BASE +I2C_I2CSOAR_OFFSET)))

//--------
#define I2C0_I2CSOAR_R_OAR_MASK       (0x0000007F)
#define I2C0_I2CSOAR_R_OAR_BIT        (0)

#define I2C0_I2CSOAR_OAR_MASK         (0x0000007F)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.14 I2CSCSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CSCSR            (((I2CSCSR_TypeDef*)(I2C0_BASE + I2C_I2CSCSR_OFFSET )))
#define I2C0_I2CSCSR_R          (*((volatile const uint32_t *)(I2C0_BASE +I2C_I2CSCSR_OFFSET)))

//--------
#define I2C0_I2CSCSR_R_RREQ_MASK       (0x00000001)
#define I2C0_I2CSCSR_R_RREQ_BIT        (0)
#define I2C0_I2CSCSR_R_RREQ_NOREQ      (0x00000000)
#define I2C0_I2CSCSR_R_RREQ_REQ        (0x00000001)

#define I2C0_I2CSCSR_RREQ_MASK       (0x00000001)
#define I2C0_I2CSCSR_RREQ_NOREQ      (0x00000000)
#define I2C0_I2CSCSR_RREQ_REQ        (0x00000001)
//--------

//--------
#define I2C0_I2CSCSR_R_TREQ_MASK       (0x00000002)
#define I2C0_I2CSCSR_R_TREQ_BIT        (1)
#define I2C0_I2CSCSR_R_TREQ_NOREQ      (0x00000000)
#define I2C0_I2CSCSR_R_TREQ_REQ        (0x00000002)

#define I2C0_I2CSCSR_TREQ_MASK       (0x00000001)
#define I2C0_I2CSCSR_TREQ_NOREQ      (0x00000000)
#define I2C0_I2CSCSR_TREQ_REQ        (0x00000001)
//--------

//--------
#define I2C0_I2CSCSR_R_FBR_MASK       (0x00000004)
#define I2C0_I2CSCSR_R_FBR_BIT        (2)
#define I2C0_I2CSCSR_R_FBR_NORECEIVE  (0x00000000)
#define I2C0_I2CSCSR_R_FBR_RECEVE     (0x00000004)

#define I2C0_I2CSCSR_FBR_MASK       (0x00000001)
#define I2C0_I2CSCSR_FBR_NORECEIVE  (0x00000000)
#define I2C0_I2CSCSR_FBR_RECEIVE    (0x00000001)
//--------

//--------
#define I2C0_I2CSCSR_R_OAR2SEL_MASK       (0x00000008)
#define I2C0_I2CSCSR_R_OAR2SEL_BIT        (3)
#define I2C0_I2CSCSR_R_OAR2SEL_DIS        (0x00000000)
#define I2C0_I2CSCSR_R_OAR2SEL_RECEVE     (0x00000008)

#define I2C0_I2CSCSR_OAR2SEL_MASK       (0x00000001)
#define I2C0_I2CSCSR_OAR2SEL_DIS        (0x00000000)
#define I2C0_I2CSCSR_OAR2SEL_EN         (0x00000001)
//--------

#define I2C0_I2CSCSR_RREQ_BB         (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSCSR_OFFSET)*32)+(0*4))))
#define I2C0_I2CSCSR_TREQ_BB         (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSCSR_OFFSET)*32)+(1*4))))
#define I2C0_I2CSCSR_FBR_BB          (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSCSR_OFFSET)*32)+(2*4))))
#define I2C0_I2CSCSR_OAR2SEL_BB      (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSCSR_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.14 I2CSCSRW ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CSCSRW            (((I2CSCSRW_TypeDef*)(I2C0_BASE + I2C_I2CSCSRW_OFFSET )))
#define I2C0_I2CSCSRW_R          (*((volatile uint32_t *)(I2C0_BASE +I2C_I2CSCSRW_OFFSET)))

//--------
#define I2C0_I2CSCSRW_R_DA_MASK       (0x00000001)
#define I2C0_I2CSCSRW_R_DA_BIT        (0)
#define I2C0_I2CSCSRW_R_DA_DIS        (0x00000000)
#define I2C0_I2CSCSRW_R_DA_EN         (0x00000001)

#define I2C0_I2CSCSRW_DA_MASK       (0x00000001)
#define I2C0_I2CSCSRW_DA_DIS        (0x00000000)
#define I2C0_I2CSCSRW_DA_EN         (0x00000001)
//--------

#define I2C0_I2CSCSRW_DA_BB         (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSCSRW_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.15 I2CSDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CSDR            (((I2CSDR_TypeDef*)(I2C0_BASE + I2C_I2CSDR_OFFSET )))
#define I2C0_I2CSDR_R          (*((volatile uint32_t *)(I2C0_BASE +I2C_I2CSDR_OFFSET)))

//--------
#define I2C0_I2CSDR_R_DATA_MASK       (0x000000FF)
#define I2C0_I2CSDR_R_DATA_BIT        (0)

#define I2C0_I2CSDR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.16 I2CSIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CSIMR            (((I2CSIMR_TypeDef*)(I2C0_BASE + I2C_I2CSIMR_OFFSET )))
#define I2C0_I2CSIMR_R          (*((volatile uint32_t *)(I2C0_BASE +I2C_I2CSIMR_OFFSET)))

//--------
#define I2C0_I2CSIMR_R_DATAIM_MASK       (0x00000001)
#define I2C0_I2CSIMR_R_DATAIM_BIT        (0)
#define I2C0_I2CSIMR_R_DATAIM_DIS        (0x00000000)
#define I2C0_I2CSIMR_R_DATAIM_EN         (0x00000001)

#define I2C0_I2CSIMR_DATAIM_MASK       (0x00000001)
#define I2C0_I2CSIMR_DATAIM_DIS        (0x00000000)
#define I2C0_I2CSIMR_DATAIM_EN         (0x00000001)
//--------

//--------
#define I2C0_I2CSIMR_R_STARTIM_MASK       (0x00000002)
#define I2C0_I2CSIMR_R_STARTIM_BIT        (1)
#define I2C0_I2CSIMR_R_STARTIM_DIS        (0x00000000)
#define I2C0_I2CSIMR_R_STARTIM_EN         (0x00000002)

#define I2C0_I2CSIMR_STARTIM_MASK       (0x00000001)
#define I2C0_I2CSIMR_STARTIM_DIS        (0x00000000)
#define I2C0_I2CSIMR_STARTIM_EN         (0x00000001)
//--------

//--------
#define I2C0_I2CSIMR_R_STOPIM_MASK       (0x00000004)
#define I2C0_I2CSIMR_R_STOPIM_BIT        (2)
#define I2C0_I2CSIMR_R_STOPIM_DIS        (0x00000000)
#define I2C0_I2CSIMR_R_STOPIM_EN         (0x00000004)

#define I2C0_I2CSIMR_STOPIM_MASK       (0x00000001)
#define I2C0_I2CSIMR_STOPIM_DIS        (0x00000000)
#define I2C0_I2CSIMR_STOPIM_EN         (0x00000001)
//--------

#define I2C0_I2CSIMR_DATAIM_BB     (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSIMR_OFFSET)*32)+(0*4))))
#define I2C0_I2CSIMR_STARTIM_BB    (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSIMR_OFFSET)*32)+(1*4))))
#define I2C0_I2CSIMR_STOPIM_BB     (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSIMR_OFFSET)*32)+(2*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.17 I2CSRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CSRIS            (((I2CSRIS_TypeDef*)(I2C0_BASE + I2C_I2CSRIS_OFFSET )))
#define I2C0_I2CSRIS_R          (*((volatile const uint32_t *)(I2C0_BASE +I2C_I2CSRIS_OFFSET)))
#define I2C0_I2CSIMR_R          (*((volatile uint32_t *)(I2C0_BASE +I2C_I2CSIMR_OFFSET)))

//--------
#define I2C0_I2CSRIS_R_DATARIS_MASK       (0x00000001)
#define I2C0_I2CSRIS_R_DATARIS_BIT        (0)
#define I2C0_I2CSRIS_R_DATARIS_NOACTIVE   (0x00000000)
#define I2C0_I2CSRIS_R_DATARIS_ACTIVE     (0x00000001)

#define I2C0_I2CSRIS_DATARIS_MASK       (0x00000001)
#define I2C0_I2CSRIS_DATARIS_NOACTIVE   (0x00000000)
#define I2C0_I2CSRIS_DATARIS_ACTIVE     (0x00000001)
//--------

//--------
#define I2C0_I2CSRIS_R_STARTRIS_MASK       (0x00000002)
#define I2C0_I2CSRIS_R_STARTRIS_BIT        (1)
#define I2C0_I2CSRIS_R_STARTRIS_NOACTIVE   (0x00000000)
#define I2C0_I2CSRIS_R_STARTRIS_ACTIVE     (0x00000002)

#define I2C0_I2CSRIS_STARTRIS_MASK       (0x00000001)
#define I2C0_I2CSRIS_STARTRIS_NOACTIVE   (0x00000000)
#define I2C0_I2CSRIS_STARTRIS_ACTIVE     (0x00000001)
//--------

//--------
#define I2C0_I2CSRIS_R_STOPRIS_MASK       (0x00000004)
#define I2C0_I2CSRIS_R_STOPRIS_BIT        (2)
#define I2C0_I2CSRIS_R_STOPRIS_NOACTIVE   (0x00000000)
#define I2C0_I2CSRIS_R_STOPRIS_ACTIVE     (0x00000004)

#define I2C0_I2CSRIS_STOPRIS_MASK       (0x00000001)
#define I2C0_I2CSRIS_STOPRIS_NOACTIVE   (0x00000000)
#define I2C0_I2CSRIS_STOPRIS_ACTIVE     (0x00000001)
//--------
#define I2C0_I2CSRIS_DATARIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSRIS_OFFSET)*32)+(0*4))))
#define I2C0_I2CSRIS_STARTRIS_BB    (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSRIS_OFFSET)*32)+(1*4))))
#define I2C0_I2CSRIS_STOPRIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSRIS_OFFSET)*32)+(2*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.18 I2CSMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CSMIS            (((I2CSMIS_TypeDef*)(I2C0_BASE + I2C_I2CSMIS_OFFSET )))
#define I2C0_I2CSMIS_R          (*((volatile const uint32_t *)(I2C0_BASE +I2C_I2CSMIS_OFFSET)))

//--------
#define I2C0_I2CSMIS_R_DATAMIS_MASK       (0x00000001)
#define I2C0_I2CSMIS_R_DATAMIS_BIT        (0)
#define I2C0_I2CSMIS_R_DATAMIS_NOOCCUR    (0x00000000)
#define I2C0_I2CSMIS_R_DATAMIS_OCCUR      (0x00000001)

#define I2C0_I2CSMIS_DATAMIS_MASK       (0x00000001)
#define I2C0_I2CSMIS_DATAMIS_NOOCCUR    (0x00000000)
#define I2C0_I2CSMIS_DATAMIS_OCCUR      (0x00000001)
//--------

//--------
#define I2C0_I2CSMIS_R_STARTMIS_MASK       (0x00000002)
#define I2C0_I2CSMIS_R_STARTMIS_BIT        (1)
#define I2C0_I2CSMIS_R_STARTMIS_NOOCCUR    (0x00000000)
#define I2C0_I2CSMIS_R_STARTMIS_OCCUR      (0x00000002)

#define I2C0_I2CSMIS_STARTMIS_MASK       (0x00000001)
#define I2C0_I2CSMIS_STARTMIS_NOOCCUR    (0x00000000)
#define I2C0_I2CSMIS_STARTMIS_OCCUR      (0x00000001)
//--------

//--------
#define I2C0_I2CSMIS_R_STOPMIS_MASK       (0x00000004)
#define I2C0_I2CSMIS_R_STOPMIS_BIT        (2)
#define I2C0_I2CSMIS_R_STOPMIS_NOOCCUR    (0x00000000)
#define I2C0_I2CSMIS_R_STOPMIS_OCCUR      (0x00000004)

#define I2C0_I2CSMIS_STOPMIS_MASK       (0x00000001)
#define I2C0_I2CSMIS_STOPMIS_NOOCCUR    (0x00000000)
#define I2C0_I2CSMIS_STOPMIS_OCCUR      (0x00000001)
//--------

#define I2C0_I2CSMIS_DATAMIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSMIS_OFFSET)*32)+(0*4))))
#define I2C0_I2CSMIS_STARTMIS_BB    (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSMIS_OFFSET)*32)+(1*4))))
#define I2C0_I2CSMIS_STOPMIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSMIS_OFFSET)*32)+(2*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.19 I2CSICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CSICR            (((I2CSICR_TypeDef*)(I2C0_BASE + I2C_I2CSICR_OFFSET )))
#define I2C0_I2CSICR_R          (*((volatile uint32_t *)(I2C0_BASE +I2C_I2CSICR_OFFSET)))

//--------
#define I2C0_I2CSICR_R_DATAIC_MASK       (0x00000001)
#define I2C0_I2CSICR_R_DATAIC_BIT        (0)
#define I2C0_I2CSICR_R_DATAIC_CLEAR      (0x00000001)

#define I2C0_I2CSICR_DATAIC_MASK       (0x00000001)
#define I2C0_I2CSICR_DATAIC_CLEAR      (0x00000001)
//--------

//--------
#define I2C0_I2CSICR_R_STARTIC_MASK       (0x00000002)
#define I2C0_I2CSICR_R_STARTIC_BIT        (1)
#define I2C0_I2CSICR_R_STARTIC_CLEAR      (0x00000002)

#define I2C0_I2CSICR_STARTIC_MASK       (0x00000001)
#define I2C0_I2CSICR_STARTIC_CLEAR      (0x00000001)
//--------

//--------
#define I2C0_I2CSICR_R_STOPIC_MASK       (0x00000004)
#define I2C0_I2CSICR_R_STOPIC_BIT        (2)
#define I2C0_I2CSICR_R_STOPIC_CLEAR      (0x00000004)

#define I2C0_I2CSICR_STOPIC_MASK       (0x00000001)
#define I2C0_I2CSICR_STOPIC_CLEAR      (0x00000001)
//--------

#define I2C0_I2CSICR_DATAICR_BB     (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSICR_OFFSET)*32)+(0*4))))
#define I2C0_I2CSICR_STARTICR_BB    (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSICR_OFFSET)*32)+(1*4))))
#define I2C0_I2CSICR_STOPICR_BB     (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSICR_OFFSET)*32)+(2*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.20 I2CSOAR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CSOAR2            (((I2CSOAR2_TypeDef*)(I2C0_BASE + I2C_I2CSOAR2_OFFSET )))
#define I2C0_I2CSOAR2_R          (*((volatile uint32_t *)(I2C0_BASE +I2C_I2CSOAR2_OFFSET)))

//--------
#define I2C0_I2CSOAR2_R_OAR2_MASK       (0x0000007F)
#define I2C0_I2CSOAR2_R_OAR2_BIT        (0)

#define I2C0_I2CSOAR2_OAR2_MASK         (0x0000007F)
//--------

//--------
#define I2C0_I2CSOAR2_R_OAR2EN_MASK       (0x00000080)
#define I2C0_I2CSOAR2_R_OAR2EN_BIT        (7)
#define I2C0_I2CSOAR2_R_OAR2EN_DIS        (0x00000000)
#define I2C0_I2CSOAR2_R_OAR2EN_EN         (0x00000080)

#define I2C0_I2CSOAR2_OAR2EN_MASK       (0x00000001)
#define I2C0_I2CSOAR2_OAR2EN_DIS        (0x00000000)
#define I2C0_I2CSOAR2_OAR2EN_EN         (0x00000001)
//--------

#define I2C0_I2CSOAR2_OAR2EN_BB     (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSOAR2_OFFSET)*32)+(7*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.21 I2CSACKCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CSACKCTL            (((I2CSACKCTL_TypeDef*)(I2C0_BASE + I2C_I2CSACKCTL_OFFSET )))
#define I2C0_I2CSACKCTL_R          (*((volatile uint32_t *)(I2C0_BASE +I2C_I2CSACKCTL_OFFSET)))

//--------
#define I2C0_I2CSACKCTL_R_ACKOEN_MASK       (0x00000001)
#define I2C0_I2CSACKCTL_R_ACKOEN_BIT        (0)
#define I2C0_I2CSACKCTL_R_ACKOEN_DIS        (0x00000000)
#define I2C0_I2CSACKCTL_R_ACKOEN_EN         (0x00000001)

#define I2C0_I2CSACKCTL_ACKOEN_MASK       (0x00000001)
#define I2C0_I2CSACKCTL_ACKOEN_DIS        (0x00000000)
#define I2C0_I2CSACKCTL_ACKOEN_EN         (0x00000001)
//--------

//--------
#define I2C0_I2CSACKCTL_R_ACKOVAL_MASK       (0x00000001)
#define I2C0_I2CSACKCTL_R_ACKOVAL_BIT        (0)
#define I2C0_I2CSACKCTL_R_ACKOVAL_VALID      (0x00000000)
#define I2C0_I2CSACKCTL_R_ACKOVAL_INVALID    (0x00000001)

#define I2C0_I2CSACKCTL_ACKOVAL_MASK       (0x00000001)
#define I2C0_I2CSACKCTL_ACKOVAL_VALID      (0x00000000)
#define I2C0_I2CSACKCTL_ACKOVAL_INVALID    (0x00000001)
//--------

#define I2C0_I2CSACKCTL_ACKOEN_BB     (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSACKCTL_OFFSET)*32)+(0*4))))
#define I2C0_I2CSACKCTL_ACKOVAL_BB    (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CSACKCTL_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.22 I2CPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CPP            (((I2CPP_TypeDef*)(I2C0_BASE + I2C_I2CPP_OFFSET )))
#define I2C0_I2CPP_R          (*((volatile const uint32_t *)(I2C0_BASE +I2C_I2CPP_OFFSET)))

//--------
#define I2C0_I2CPP_R_HS_MASK       (0x00000001)
#define I2C0_I2CPP_R_HS_BIT        (0)
#define I2C0_I2CPP_R_HS_STD        (0x00000000)
#define I2C0_I2CPP_R_HS_HS         (0x00000001)

#define I2C0_I2CPP_HS_MASK       (0x00000001)
#define I2C0_I2CPP_HS_STD        (0x00000000)
#define I2C0_I2CPP_HS_HS         (0x00000001)
//--------

#define I2C0_I2CPP_HS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CPP_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.23 I2CPC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C0_I2CPC            (((I2CPC_TypeDef*)(I2C0_BASE + I2C_I2CPC_OFFSET )))
#define I2C0_I2CPC_R          (*((volatile uint32_t *)(I2C0_BASE +I2C_I2CPC_OFFSET)))

//--------
#define I2C0_I2CPC_R_HS_MASK       (0x00000001)
#define I2C0_I2CPC_R_HS_BIT        (0)
#define I2C0_I2CPC_R_HS_STD        (0x00000000)
#define I2C0_I2CPC_R_HS_HS         (0x00000001)

#define I2C0_I2CPC_HS_MASK       (0x00000001)
#define I2C0_I2CPC_HS_STD        (0x00000000)
#define I2C0_I2CPC_HS_HS         (0x00000001)
//--------

#define I2C0_I2CPC_HS_BB     (*((volatile uint32_t *)(0x42000000+((I2C0_OFFSET+I2C_I2CPC_OFFSET)*32)+(0*4))))








// Todo I2C1

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 I2C1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.1 I2CMSA ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CMSA            (((I2CMSA_TypeDef*)(I2C1_BASE + I2C_I2CMSA_OFFSET )))
#define I2C1_I2CMSA_R          (*((volatile uint32_t *)(I2C1_BASE +I2C_I2CMSA_OFFSET)))

//--------
#define I2C1_I2CMSA_R_RS_MASK       (0x00000001)
#define I2C1_I2CMSA_R_RS_BIT        (0)
#define I2C1_I2CMSA_R_RS_TRANSMIT   (0x00000000)
#define I2C1_I2CMSA_R_RS_RECEIVE    (0x00000001)

#define I2C1_I2CMSA_RS_MASK         (0x00000001)
#define I2C1_I2CMSA_RS_TRANSMIST    (0x00000000)
#define I2C1_I2CMSA_RS_RECEIVE      (0x00000001)
//--------

//--------
#define I2C1_I2CMSA_R_SA_MASK       (0x000000FE)
#define I2C1_I2CMSA_R_SA_BIT        (1)

#define I2C1_I2CMSA_SA_MASK         (0x000000FE)
//--------

#define I2C1_I2CMSA_RS_BB     (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMSA_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.2 I2CMCSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CMCSR            (((I2CMCSR_TypeDef*)(I2C1_BASE + I2C_I2CMCSR_OFFSET )))
#define I2C1_I2CMCSR_R          (*((volatile const uint32_t *)(I2C1_BASE +I2C_I2CMCSR_OFFSET)))

//--------
#define I2C1_I2CMCSR_R_BUSY_MASK       (0x00000001)
#define I2C1_I2CMCSR_R_BUSY_BIT        (0)
#define I2C1_I2CMCSR_R_BUSY_IDLE       (0x00000000)
#define I2C1_I2CMCSR_R_BUSY_BUSY       (0x00000001)

#define I2C1_I2CMCSR_BUSY_MASK         (0x00000001)
#define I2C1_I2CMCSR_BUSY_IDLE         (0x00000000)
#define I2C1_I2CMCSR_BUSY_BUSY         (0x00000001)
//--------

//--------
#define I2C1_I2CMCSR_R_ERROR_MASK       (0x00000002)
#define I2C1_I2CMCSR_R_ERROR_BIT        (1)
#define I2C1_I2CMCSR_R_ERROR_NOERROR    (0x00000000)
#define I2C1_I2CMCSR_R_ERROR_ERROR      (0x00000002)

#define I2C1_I2CMCSR_ERROR_MASK         (0x00000001)
#define I2C1_I2CMCSR_ERROR_NOERROR      (0x00000000)
#define I2C1_I2CMCSR_ERROR_ERROR        (0x00000001)
//--------

//--------
#define I2C1_I2CMCSR_R_ADRACK_MASK       (0x00000004)
#define I2C1_I2CMCSR_R_ADRACK_BIT        (2)
#define I2C1_I2CMCSR_R_ADRACK_NOACK      (0x00000000)
#define I2C1_I2CMCSR_R_ADRACK_ACK        (0x00000004)

#define I2C1_I2CMCSR_ADRACK_MASK         (0x00000001)
#define I2C1_I2CMCSR_ADRACK_NOACK        (0x00000000)
#define I2C1_I2CMCSR_ADRACK_ACK          (0x00000001)
//--------

//--------
#define I2C1_I2CMCSR_R_DATACK_MASK       (0x00000008)
#define I2C1_I2CMCSR_R_DATACK_BIT        (3)
#define I2C1_I2CMCSR_R_DATACK_NOACK      (0x00000000)
#define I2C1_I2CMCSR_R_DATACK_ACK        (0x00000008)

#define I2C1_I2CMCSR_DATACK_MASK         (0x00000001)
#define I2C1_I2CMCSR_DATACK_NOACK        (0x00000000)
#define I2C1_I2CMCSR_DATACK_ACK          (0x00000001)
//--------

//--------
#define I2C1_I2CMCSR_R_DATACK_MASK       (0x00000008)
#define I2C1_I2CMCSR_R_DATACK_BIT        (3)
#define I2C1_I2CMCSR_R_DATACK_NOACK      (0x00000000)
#define I2C1_I2CMCSR_R_DATACK_ACK        (0x00000008)

#define I2C1_I2CMCSR_DATACK_MASK         (0x00000001)
#define I2C1_I2CMCSR_DATACK_NOACK        (0x00000000)
#define I2C1_I2CMCSR_DATACK_ACK          (0x00000001)
//--------

//--------
#define I2C1_I2CMCSR_R_ARBLST_MASK       (0x00000010)
#define I2C1_I2CMCSR_R_ARBLST_BIT        (4)
#define I2C1_I2CMCSR_R_ARBLST_WON        (0x00000000)
#define I2C1_I2CMCSR_R_ARBLST_LOST       (0x00000010)

#define I2C1_I2CMCSR_ARBLST_MASK         (0x00000001)
#define I2C1_I2CMCSR_ARBLST_WON          (0x00000000)
#define I2C1_I2CMCSR_ARBLST_LOST         (0x00000001)
//--------

//--------
#define I2C1_I2CMCSR_R_IDLE_MASK       (0x00000020)
#define I2C1_I2CMCSR_R_IDLE_BIT        (5)
#define I2C1_I2CMCSR_R_IDLE_NOIDLE     (0x00000000)
#define I2C1_I2CMCSR_R_IDLE_IDLE       (0x00000020)

#define I2C1_I2CMCSR_IDLE_MASK         (0x00000001)
#define I2C1_I2CMCSR_IDLE_NOIDLE       (0x00000000)
#define I2C1_I2CMCSR_IDLE_IDLE         (0x00000001)
//--------

//--------
#define I2C1_I2CMCSR_R_BUSBSY_MASK       (0x00000040)
#define I2C1_I2CMCSR_R_BUSBSY_BIT        (6)
#define I2C1_I2CMCSR_R_BUSBSY_IDLE       (0x00000000)
#define I2C1_I2CMCSR_R_BUSBSY_BUSY       (0x00000040)

#define I2C1_I2CMCSR_BUSBSY_MASK         (0x00000001)
#define I2C1_I2CMCSR_BUSBSY_IDLE         (0x00000000)
#define I2C1_I2CMCSR_BUSBSY_BUSY         (0x00000001)
//--------

//--------
#define I2C1_I2CMCSR_R_CLKTO_MASK       (0x00000080)
#define I2C1_I2CMCSR_R_CLKTO_BIT        (7)
#define I2C1_I2CMCSR_R_CLKTO_NOERROR    (0x00000000)
#define I2C1_I2CMCSR_R_CLKTO_ERROR      (0x00000080)

#define I2C1_I2CMCSR_CLKTO_MASK         (0x00000001)
#define I2C1_I2CMCSR_CLKTO_NOERROR      (0x00000000)
#define I2C1_I2CMCSR_CLKTO_ERROR        (0x00000001)
//--------

#define I2C1_I2CMCSR_BUSY_BB        (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(0*4))))
#define I2C1_I2CMCSR_ERROR_BB       (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(1*4))))
#define I2C1_I2CMCSR_ADRACK_BB      (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(2*4))))
#define I2C1_I2CMCSR_DATACK_BB      (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(3*4))))
#define I2C1_I2CMCSR_ARBLST_BB      (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(4*4))))
#define I2C1_I2CMCSR_IDLE_BB        (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(5*4))))
#define I2C1_I2CMCSR_BUSBSY_BB      (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(6*4))))
#define I2C1_I2CMCSR_CLKTO_BB       (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(7*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.2 I2CMCSW ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CMCSW            (((I2CMCSW_TypeDef*)(I2C1_BASE + I2C_I2CMCSW_OFFSET )))
#define I2C1_I2CMCSW_R          (*((volatile uint32_t *)(I2C1_BASE +I2C_I2CMCSW_OFFSET)))

//--------
#define I2C1_I2CMCSW_R_RUN_MASK       (0x00000001)
#define I2C1_I2CMCSW_R_RUN_BIT        (0)
#define I2C1_I2CMCSW_R_RUN_DIS        (0x00000000)
#define I2C1_I2CMCSW_R_RUN_EN         (0x00000001)

#define I2C1_I2CMCSW_RUN_MASK         (0x00000001)
#define I2C1_I2CMCSW_RUN_DIS          (0x00000000)
#define I2C1_I2CMCSW_RUN_EN           (0x00000001)
//--------

//--------
#define I2C1_I2CMCSW_R_START_MASK       (0x00000002)
#define I2C1_I2CMCSW_R_START_BIT        (1)
#define I2C1_I2CMCSW_R_START_DIS        (0x00000000)
#define I2C1_I2CMCSW_R_START_EN         (0x00000002)

#define I2C1_I2CMCSW_START_MASK         (0x00000001)
#define I2C1_I2CMCSW_START_DIS          (0x00000000)
#define I2C1_I2CMCSW_START_EN           (0x00000001)
//--------

//--------
#define I2C1_I2CMCSW_R_STOP_MASK       (0x00000004)
#define I2C1_I2CMCSW_R_STOP_BIT        (2)
#define I2C1_I2CMCSW_R_STOP_DIS        (0x00000000)
#define I2C1_I2CMCSW_R_STOP_EN         (0x00000004)

#define I2C1_I2CMCSW_STOP_MASK         (0x00000001)
#define I2C1_I2CMCSW_STOP_DIS          (0x00000000)
#define I2C1_I2CMCSW_STOP_EN           (0x00000001)
//--------

//--------
#define I2C1_I2CMCSW_R_ACK_MASK       (0x00000008)
#define I2C1_I2CMCSW_R_ACK_BIT        (3)
#define I2C1_I2CMCSW_R_ACK_DIS        (0x00000000)
#define I2C1_I2CMCSW_R_ACK_EN         (0x00000008)

#define I2C1_I2CMCSW_ACK_MASK         (0x00000001)
#define I2C1_I2CMCSW_ACK_DIS          (0x00000000)
#define I2C1_I2CMCSW_ACK_EN           (0x00000001)
//--------

//--------
#define I2C1_I2CMCSW_R_HS_MASK       (0x00000010)
#define I2C1_I2CMCSW_R_HS_BIT        (4)
#define I2C1_I2CMCSW_R_HS_DIS        (0x00000000)
#define I2C1_I2CMCSW_R_HS_EN         (0x00000010)

#define I2C1_I2CMCSW_HS_MASK         (0x00000001)
#define I2C1_I2CMCSW_HS_DIS          (0x00000000)
#define I2C1_I2CMCSW_HS_EN           (0x00000001)
//--------

#define I2C1_I2CMCSW_RUN_BB      (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(0*4))))
#define I2C1_I2CMCSW_START_BB    (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(1*4))))
#define I2C1_I2CMCSW_STOP_BB     (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(2*4))))
#define I2C1_I2CMCSW_ACK_BB      (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(3*4))))
#define I2C1_I2CMCSW_HS_BB       (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(4*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.3 I2CMDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CMDR            (((I2CMDR_TypeDef*)(I2C1_BASE + I2C_I2CMDR_OFFSET )))
#define I2C1_I2CMDR_R          (*((volatile uint32_t *)(I2C1_BASE +I2C_I2CMDR_OFFSET)))

//--------
#define I2C1_I2CMDR_R_DATA_MASK       (0x000000FF)
#define I2C1_I2CMDR_R_DATA_BIT        (0)

#define I2C1_I2CMDR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.4 I2CMTPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CMTPR            (((I2CMTPR_TypeDef*)(I2C1_BASE + I2C_I2CMTPR_OFFSET )))
#define I2C1_I2CMTPR_R          (*((volatile uint32_t *)(I2C1_BASE +I2C_I2CMTPR_OFFSET)))

//--------
#define I2C1_I2CMTPR_R_TPR_MASK       (0x0000007F)
#define I2C1_I2CMTPR_R_TPR_BIT        (0)

#define I2C1_I2CMTPR_TPR_MASK         (0x0000007F)
//--------

//--------
#define I2C1_I2CMTPR_R_HS_MASK       (0x00000080)
#define I2C1_I2CMTPR_R_HS_BIT        (7)
#define I2C1_I2CMTPR_R_HS_DIS        (0x00000000)
#define I2C1_I2CMTPR_R_HS_EN         (0x00000080)

#define I2C1_I2CMTPR_HS_MASK         (0x00000001)
#define I2C1_I2CMTPR_HS_DIS          (0x00000000)
#define I2C1_I2CMTPR_HS_EN           (0x00000001)
//--------

#define I2C1_I2CMTPR_HS_BB     (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMTPR_OFFSET)*32)+(7*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.5 I2CMIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CMIMR            (((I2CMIMR_TypeDef*)(I2C1_BASE + I2C_I2CMIMR_OFFSET )))
#define I2C1_I2CMIMR_R          (*((volatile uint32_t *)(I2C1_BASE +I2C_I2CMIMR_OFFSET)))

//--------
#define I2C1_I2CIMR_R_IM_MASK       (0x00000001)
#define I2C1_I2CIMR_R_IM_BIT        (0)
#define I2C1_I2CIMR_R_IM_DIS        (0x00000000)
#define I2C1_I2CIMR_R_IM_EN         (0x00000001)

#define I2C1_I2CIMR_IM_MASK       (0x00000001)
#define I2C1_I2CIMR_IM_DIS        (0x00000000)
#define I2C1_I2CIMR_IM_EN         (0x00000001)
//--------

//--------
#define I2C1_I2CIMR_R_CLKIM_MASK       (0x00000002)
#define I2C1_I2CIMR_R_CLKIM_BIT        (1)
#define I2C1_I2CIMR_R_CLKIM_DIS        (0x00000000)
#define I2C1_I2CIMR_R_CLKIM_EN         (0x00000002)

#define I2C1_I2CIMR_CLKIM_MASK       (0x00000001)
#define I2C1_I2CIMR_CLKIM_DIS        (0x00000000)
#define I2C1_I2CIMR_CLKIM_EN         (0x00000001)
//--------

#define I2C1_I2CMIMR_IM_BB     (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMIMR_OFFSET)*32)+(0*4))))
#define I2C1_I2CMIMR_CLKIM_BB  (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMIMR_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.6 I2CMRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CMRIS            (((I2CMRIS_TypeDef*)(I2C1_BASE + I2C_I2CMRIS_OFFSET )))
#define I2C1_I2CMRIS_R          (*((volatile const uint32_t *)(I2C1_BASE +I2C_I2CMRIS_OFFSET)))

//--------
#define I2C1_I2CMRIS_R_RIS_MASK       (0x00000001)
#define I2C1_I2CMRIS_R_RIS_BIT        (0)
#define I2C1_I2CMRIS_R_RIS_NOACTIVE   (0x00000000)
#define I2C1_I2CMRIS_R_RIS_ACTIVE     (0x00000001)

#define I2C1_I2CMRIS_RIS_MASK       (0x00000001)
#define I2C1_I2CMRIS_RIS_NOACTIVE   (0x00000000)
#define I2C1_I2CMRIS_RIS_ACTIVE     (0x00000001)
//--------

//--------
#define I2C1_I2CMRIS_R_CLKRIS_MASK       (0x00000002)
#define I2C1_I2CMRIS_R_CLKRIS_BIT        (1)
#define I2C1_I2CMRIS_R_CLKRIS_NOACTIVE   (0x00000000)
#define I2C1_I2CMRIS_R_CLKRIS_ACTIVE     (0x00000002)

#define I2C1_I2CMRIS_CLKRIS_MASK       (0x00000001)
#define I2C1_I2CMRIS_CLKRIS_NOACTIVE   (0x00000000)
#define I2C1_I2CMRIS_CLKRIS_ACTIVE     (0x00000001)
//--------

#define I2C1_I2CMRIS_RIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMRIS_OFFSET)*32)+(0*4))))
#define I2C1_I2CMRIS_CLKRIS_BB  (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMRIS_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.7 I2CMMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CMMIS            (((I2CMMIS_TypeDef*)(I2C1_BASE + I2C_I2CMMIS_OFFSET )))
#define I2C1_I2CMMIS_R          (*((volatile const uint32_t *)(I2C1_BASE +I2C_I2CMMIS_OFFSET)))

//--------
#define I2C1_I2CMMIS_R_MIS_MASK       (0x00000001)
#define I2C1_I2CMMIS_R_MIS_BIT        (0)
#define I2C1_I2CMMIS_R_MIS_NOOCCUR    (0x00000000)
#define I2C1_I2CMMIS_R_MIS_OCCUR      (0x00000001)

#define I2C1_I2CMMIS_MIS_MASK       (0x00000001)
#define I2C1_I2CMMIS_MIS_NOOCCUR    (0x00000000)
#define I2C1_I2CMMIS_MIS_OCCUR      (0x00000001)
//--------

//--------
#define I2C1_I2CMMIS_R_CLKMIS_MASK       (0x00000002)
#define I2C1_I2CMMIS_R_CLKMIS_BIT        (1)
#define I2C1_I2CMMIS_R_CLKMIS_NOOCCUR    (0x00000000)
#define I2C1_I2CMMIS_R_CLKMIS_OCCUR      (0x00000002)

#define I2C1_I2CMMIS_CLKMIS_MASK       (0x00000001)
#define I2C1_I2CMMIS_CLKMIS_NOOCCUR    (0x00000000)
#define I2C1_I2CMMIS_CLKMIS_OCCUR      (0x00000001)
//--------

#define I2C1_I2CMMIS_MIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMMIS_OFFSET)*32)+(0*4))))
#define I2C1_I2CMMIS_CLKMIS_BB  (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMMIS_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.8 I2CMICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CMICR            (((I2CMICR_TypeDef*)(I2C1_BASE + I2C_I2CMICR_OFFSET )))
#define I2C1_I2CMICR_R          (*((volatile uint32_t *)(I2C1_BASE +I2C_I2CMICR_OFFSET)))

//--------
#define I2C1_I2CMICR_R_IC_MASK       (0x00000001)
#define I2C1_I2CMICR_R_IC_BIT        (0)
#define I2C1_I2CMICR_R_IC_CLEAR      (0x00000001)

#define I2C1_I2CMICR_IC_MASK       (0x00000001)
#define I2C1_I2CMICR_IC_CLEAR      (0x00000001)
//--------

//--------
#define I2C1_I2CMICR_R_CLKIC_MASK       (0x00000002)
#define I2C1_I2CMICR_R_CLKIC_BIT        (1)
#define I2C1_I2CMICR_R_CLKIC_CLEAR      (0x00000002)

#define I2C1_I2CMICR_CLKIC_MASK       (0x00000001)
#define I2C1_I2CMICR_CLKIC_CLEAR      (0x00000001)
//--------

#define I2C1_I2CMICR_IC_BB        (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMICR_OFFSET)*32)+(0*4))))
#define I2C1_I2CMICR_CLKIC_BB     (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMICR_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.9 I2CMCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CMCR            (((I2CMCR_TypeDef*)(I2C1_BASE + I2C_I2CMCR_OFFSET )))
#define I2C1_I2CMCR_R          (*((volatile uint32_t *)(I2C1_BASE +I2C_I2CMCR_OFFSET)))

//--------
#define I2C1_I2CMCR_R_LPBK_MASK       (0x00000001)
#define I2C1_I2CMCR_R_LPBK_BIT        (0)
#define I2C1_I2CMCR_R_LPBK_NORMAL     (0x00000000)
#define I2C1_I2CMCR_R_LPBK_LOOPBACK   (0x00000001)

#define I2C1_I2CMCR_LPBK_MASK       (0x00000001)
#define I2C1_I2CMCR_LPBK_NORMAL     (0x00000000)
#define I2C1_I2CMCR_LPBK_LOOPBACK   (0x00000001)
//--------

//--------
#define I2C1_I2CMCR_R_MFE_MASK       (0x00000010)
#define I2C1_I2CMCR_R_MFE_BIT        (4)
#define I2C1_I2CMCR_R_MFE_DIS        (0x00000000)
#define I2C1_I2CMCR_R_MFE_EN         (0x00000010)

#define I2C1_I2CMCR_MFE_MASK       (0x00000001)
#define I2C1_I2CMCR_MFE_DIS        (0x00000000)
#define I2C1_I2CMCR_MFE_EN         (0x00000001)
//--------

//--------
#define I2C1_I2CMCR_R_SFE_MASK       (0x00000020)
#define I2C1_I2CMCR_R_SFE_BIT        (5)
#define I2C1_I2CMCR_R_SFE_DIS        (0x00000000)
#define I2C1_I2CMCR_R_SFE_EN         (0x00000020)

#define I2C1_I2CMCR_SFE_MASK       (0x00000001)
#define I2C1_I2CMCR_SFE_DIS        (0x00000000)
#define I2C1_I2CMCR_SFE_EN         (0x00000001)
//--------

//--------
#define I2C1_I2CMCR_R_GFE_MASK       (0x00000040)
#define I2C1_I2CMCR_R_GFE_BIT        (6)
#define I2C1_I2CMCR_R_GFE_DIS        (0x00000000)
#define I2C1_I2CMCR_R_GFE_EN         (0x00000040)

#define I2C1_I2CMCR_GFE_MASK       (0x00000001)
#define I2C1_I2CMCR_GFE_DIS        (0x00000000)
#define I2C1_I2CMCR_GFE_EN         (0x00000001)
//--------)

#define I2C1_I2CMCR_LPBK_BB        (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMCR_OFFSET)*32)+(0*4))))
#define I2C1_I2CMCR_MFE_BB         (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMCR_OFFSET)*32)+(4*4))))
#define I2C1_I2CMCR_SFE_BB         (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMCR_OFFSET)*32)+(5*4))))
#define I2C1_I2CMCR_GFE_BB         (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMCR_OFFSET)*32)+(6*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.10 I2CMCLKOCNT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CMCLKOCNT            (((I2CMCLKOCNT_TypeDef*)(I2C1_BASE + I2C_I2CMCLKOCNT_OFFSET )))
#define I2C1_I2CMCLKOCNT_R          (*((volatile uint32_t *)(I2C1_BASE +I2C_I2CMCLKOCNT_OFFSET)))

//--------
#define I2C1_I2CMCLKOCNT_R_CNTL_MASK       (0x000000FF)
#define I2C1_I2CMCLKOCNT_R_CNTL_BIT        (0)

#define I2C1_I2CMCLKOCNT_CNTL_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.11 I2CMBMON ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CMBMON            (((I2CMBMON_TypeDef*)(I2C1_BASE + I2C_I2CMBMON_OFFSET )))
#define I2C1_I2CMBMON_R          (*((volatile const uint32_t *)(I2C1_BASE +I2C_I2CMBMON_OFFSET)))

//--------
#define I2C1_I2CMBMON_R_SCL_MASK       (0x00000001)
#define I2C1_I2CMBMON_R_SCL_BIT        (0)
#define I2C1_I2CMBMON_R_SCL_LOW        (0x00000000)
#define I2C1_I2CMBMON_R_SCL_HIGH       (0x00000001)

#define I2C1_I2CMBMON_SCL_MASK       (0x00000001)
#define I2C1_I2CMBMON_SCL_LOW        (0x00000000)
#define I2C1_I2CMBMON_SCL_HIGH       (0x00000001)
//--------

//--------
#define I2C1_I2CMBMON_R_SDA_MASK       (0x00000002)
#define I2C1_I2CMBMON_R_SDA_BIT        (1)
#define I2C1_I2CMBMON_R_SDA_LOW        (0x00000000)
#define I2C1_I2CMBMON_R_SDA_HIGH       (0x00000002)

#define I2C1_I2CMBMON_SDA_MASK       (0x00000001)
#define I2C1_I2CMBMON_SDA_LOW        (0x00000000)
#define I2C1_I2CMBMON_SDA_HIGH       (0x00000001)
//--------

#define I2C1_I2CMBMON_SCL_BB        (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMBMON_OFFSET)*32)+(0*4))))
#define I2C1_I2CMBMON_SDA_BB         (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CMBMON_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.12 I2CMCR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CMCR2            (((I2CMCR2_TypeDef*)(I2C1_BASE + I2C_I2CMCR2_OFFSET )))
#define I2C1_I2CMCR2_R          (*((volatile uint32_t *)(I2C1_BASE +I2C_I2CMCR2_OFFSET)))


//--------
#define I2C1_I2CMCR2_R_GFPW_MASK       (0x000000E0)
#define I2C1_I2CMCR2_R_GFPW_BIT        (0)
#define I2C1_I2CMCR2_R_GFPW_BYPASS     (0x00000000)
#define I2C1_I2CMCR2_R_GFPW_1CLOCK     (0x00000020)
#define I2C1_I2CMCR2_R_GFPW_2CLOCK     (0x00000040)
#define I2C1_I2CMCR2_R_GFPW_3CLOCK     (0x00000060)
#define I2C1_I2CMCR2_R_GFPW_4CLOCK     (0x00000080)
#define I2C1_I2CMCR2_R_GFPW_8CLOCK     (0x00000090)
#define I2C1_I2CMCR2_R_GFPW_16CLOCK    (0x000000C0)
#define I2C1_I2CMCR2_R_GFPW_31CLOCK    (0x000000E0)

#define I2C1_I2CMCR2_GFPW_MASK         (0x00000007)
#define I2C1_I2CMCR2_GFPW_BYPASS       (0x00000000)
#define I2C1_I2CMCR2_GFPW_1CLOCK       (0x00000001)
#define I2C1_I2CMCR2_GFPW_2CLOCK       (0x00000002)
#define I2C1_I2CMCR2_GFPW_3CLOCK       (0x00000003)
#define I2C1_I2CMCR2_GFPW_4CLOCK       (0x00000004)
#define I2C1_I2CMCR2_GFPW_8CLOCK       (0x00000005)
#define I2C1_I2CMCR2_GFPW_16CLOCK      (0x00000006)
#define I2C1_I2CMCR2_GFPW_31CLOCK      (0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.13 I2CSOAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CSOAR            (((I2CSOAR_TypeDef*)(I2C1_BASE + I2C_I2CSOAR_OFFSET )))
#define I2C1_I2CSOAR_R          (*((volatile uint32_t *)(I2C1_BASE +I2C_I2CSOAR_OFFSET)))

//--------
#define I2C1_I2CSOAR_R_OAR_MASK       (0x0000007F)
#define I2C1_I2CSOAR_R_OAR_BIT        (0)

#define I2C1_I2CSOAR_OAR_MASK         (0x0000007F)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.14 I2CSCSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CSCSR            (((I2CSCSR_TypeDef*)(I2C1_BASE + I2C_I2CSCSR_OFFSET )))
#define I2C1_I2CSCSR_R          (*((volatile const uint32_t *)(I2C1_BASE +I2C_I2CSCSR_OFFSET)))

//--------
#define I2C1_I2CSCSR_R_RREQ_MASK       (0x00000001)
#define I2C1_I2CSCSR_R_RREQ_BIT        (0)
#define I2C1_I2CSCSR_R_RREQ_NOREQ      (0x00000000)
#define I2C1_I2CSCSR_R_RREQ_REQ        (0x00000001)

#define I2C1_I2CSCSR_RREQ_MASK       (0x00000001)
#define I2C1_I2CSCSR_RREQ_NOREQ      (0x00000000)
#define I2C1_I2CSCSR_RREQ_REQ        (0x00000001)
//--------

//--------
#define I2C1_I2CSCSR_R_TREQ_MASK       (0x00000002)
#define I2C1_I2CSCSR_R_TREQ_BIT        (1)
#define I2C1_I2CSCSR_R_TREQ_NOREQ      (0x00000000)
#define I2C1_I2CSCSR_R_TREQ_REQ        (0x00000002)

#define I2C1_I2CSCSR_TREQ_MASK       (0x00000001)
#define I2C1_I2CSCSR_TREQ_NOREQ      (0x00000000)
#define I2C1_I2CSCSR_TREQ_REQ        (0x00000001)
//--------

//--------
#define I2C1_I2CSCSR_R_FBR_MASK       (0x00000004)
#define I2C1_I2CSCSR_R_FBR_BIT        (2)
#define I2C1_I2CSCSR_R_FBR_NORECEIVE  (0x00000000)
#define I2C1_I2CSCSR_R_FBR_RECEVE     (0x00000004)

#define I2C1_I2CSCSR_FBR_MASK       (0x00000001)
#define I2C1_I2CSCSR_FBR_NORECEIVE  (0x00000000)
#define I2C1_I2CSCSR_FBR_RECEIVE    (0x00000001)
//--------

//--------
#define I2C1_I2CSCSR_R_OAR2SEL_MASK       (0x00000008)
#define I2C1_I2CSCSR_R_OAR2SEL_BIT        (3)
#define I2C1_I2CSCSR_R_OAR2SEL_DIS        (0x00000000)
#define I2C1_I2CSCSR_R_OAR2SEL_RECEVE     (0x00000008)

#define I2C1_I2CSCSR_OAR2SEL_MASK       (0x00000001)
#define I2C1_I2CSCSR_OAR2SEL_DIS        (0x00000000)
#define I2C1_I2CSCSR_OAR2SEL_EN         (0x00000001)
//--------

#define I2C1_I2CSCSR_RREQ_BB         (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSCSR_OFFSET)*32)+(0*4))))
#define I2C1_I2CSCSR_TREQ_BB         (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSCSR_OFFSET)*32)+(1*4))))
#define I2C1_I2CSCSR_FBR_BB          (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSCSR_OFFSET)*32)+(2*4))))
#define I2C1_I2CSCSR_OAR2SEL_BB      (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSCSR_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.14 I2CSCSRW ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CSCSRW            (((I2CSCSRW_TypeDef*)(I2C1_BASE + I2C_I2CSCSRW_OFFSET )))
#define I2C1_I2CSCSRW_R          (*((volatile uint32_t *)(I2C1_BASE +I2C_I2CSCSRW_OFFSET)))

//--------
#define I2C1_I2CSCSRW_R_DA_MASK       (0x00000001)
#define I2C1_I2CSCSRW_R_DA_BIT        (0)
#define I2C1_I2CSCSRW_R_DA_DIS        (0x00000000)
#define I2C1_I2CSCSRW_R_DA_EN         (0x00000001)

#define I2C1_I2CSCSRW_DA_MASK       (0x00000001)
#define I2C1_I2CSCSRW_DA_DIS        (0x00000000)
#define I2C1_I2CSCSRW_DA_EN         (0x00000001)
//--------

#define I2C1_I2CSCSRW_DA_BB         (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSCSRW_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.15 I2CSDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CSDR            (((I2CSDR_TypeDef*)(I2C1_BASE + I2C_I2CSDR_OFFSET )))
#define I2C1_I2CSDR_R          (*((volatile uint32_t *)(I2C1_BASE +I2C_I2CSDR_OFFSET)))

//--------
#define I2C1_I2CSDR_R_DATA_MASK       (0x000000FF)
#define I2C1_I2CSDR_R_DATA_BIT        (0)

#define I2C1_I2CSDR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.16 I2CSIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CSIMR            (((I2CSIMR_TypeDef*)(I2C1_BASE + I2C_I2CSIMR_OFFSET )))
#define I2C1_I2CSIMR_R          (*((volatile uint32_t *)(I2C1_BASE +I2C_I2CSIMR_OFFSET)))

//--------
#define I2C1_I2CSIMR_R_DATAIM_MASK       (0x00000001)
#define I2C1_I2CSIMR_R_DATAIM_BIT        (0)
#define I2C1_I2CSIMR_R_DATAIM_DIS        (0x00000000)
#define I2C1_I2CSIMR_R_DATAIM_EN         (0x00000001)

#define I2C1_I2CSIMR_DATAIM_MASK       (0x00000001)
#define I2C1_I2CSIMR_DATAIM_DIS        (0x00000000)
#define I2C1_I2CSIMR_DATAIM_EN         (0x00000001)
//--------

//--------
#define I2C1_I2CSIMR_R_STARTIM_MASK       (0x00000002)
#define I2C1_I2CSIMR_R_STARTIM_BIT        (1)
#define I2C1_I2CSIMR_R_STARTIM_DIS        (0x00000000)
#define I2C1_I2CSIMR_R_STARTIM_EN         (0x00000002)

#define I2C1_I2CSIMR_STARTIM_MASK       (0x00000001)
#define I2C1_I2CSIMR_STARTIM_DIS        (0x00000000)
#define I2C1_I2CSIMR_STARTIM_EN         (0x00000001)
//--------

//--------
#define I2C1_I2CSIMR_R_STOPIM_MASK       (0x00000004)
#define I2C1_I2CSIMR_R_STOPIM_BIT        (2)
#define I2C1_I2CSIMR_R_STOPIM_DIS        (0x00000000)
#define I2C1_I2CSIMR_R_STOPIM_EN         (0x00000004)

#define I2C1_I2CSIMR_STOPIM_MASK       (0x00000001)
#define I2C1_I2CSIMR_STOPIM_DIS        (0x00000000)
#define I2C1_I2CSIMR_STOPIM_EN         (0x00000001)
//--------

#define I2C1_I2CSIMR_DATAIM_BB     (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSIMR_OFFSET)*32)+(0*4))))
#define I2C1_I2CSIMR_STARTIM_BB    (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSIMR_OFFSET)*32)+(1*4))))
#define I2C1_I2CSIMR_STOPIM_BB     (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSIMR_OFFSET)*32)+(2*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.17 I2CSRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CSRIS            (((I2CSRIS_TypeDef*)(I2C1_BASE + I2C_I2CSRIS_OFFSET )))
#define I2C1_I2CSRIS_R          (*((volatile const uint32_t *)(I2C1_BASE +I2C_I2CSRIS_OFFSET)))
#define I2C1_I2CSIMR_R          (*((volatile uint32_t *)(I2C1_BASE +I2C_I2CSIMR_OFFSET)))

//--------
#define I2C1_I2CSRIS_R_DATARIS_MASK       (0x00000001)
#define I2C1_I2CSRIS_R_DATARIS_BIT        (0)
#define I2C1_I2CSRIS_R_DATARIS_NOACTIVE   (0x00000000)
#define I2C1_I2CSRIS_R_DATARIS_ACTIVE     (0x00000001)

#define I2C1_I2CSRIS_DATARIS_MASK       (0x00000001)
#define I2C1_I2CSRIS_DATARIS_NOACTIVE   (0x00000000)
#define I2C1_I2CSRIS_DATARIS_ACTIVE     (0x00000001)
//--------

//--------
#define I2C1_I2CSRIS_R_STARTRIS_MASK       (0x00000002)
#define I2C1_I2CSRIS_R_STARTRIS_BIT        (1)
#define I2C1_I2CSRIS_R_STARTRIS_NOACTIVE   (0x00000000)
#define I2C1_I2CSRIS_R_STARTRIS_ACTIVE     (0x00000002)

#define I2C1_I2CSRIS_STARTRIS_MASK       (0x00000001)
#define I2C1_I2CSRIS_STARTRIS_NOACTIVE   (0x00000000)
#define I2C1_I2CSRIS_STARTRIS_ACTIVE     (0x00000001)
//--------

//--------
#define I2C1_I2CSRIS_R_STOPRIS_MASK       (0x00000004)
#define I2C1_I2CSRIS_R_STOPRIS_BIT        (2)
#define I2C1_I2CSRIS_R_STOPRIS_NOACTIVE   (0x00000000)
#define I2C1_I2CSRIS_R_STOPRIS_ACTIVE     (0x00000004)

#define I2C1_I2CSRIS_STOPRIS_MASK       (0x00000001)
#define I2C1_I2CSRIS_STOPRIS_NOACTIVE   (0x00000000)
#define I2C1_I2CSRIS_STOPRIS_ACTIVE     (0x00000001)
//--------
#define I2C1_I2CSRIS_DATARIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSRIS_OFFSET)*32)+(0*4))))
#define I2C1_I2CSRIS_STARTRIS_BB    (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSRIS_OFFSET)*32)+(1*4))))
#define I2C1_I2CSRIS_STOPRIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSRIS_OFFSET)*32)+(2*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.18 I2CSMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CSMIS            (((I2CSMIS_TypeDef*)(I2C1_BASE + I2C_I2CSMIS_OFFSET )))
#define I2C1_I2CSMIS_R          (*((volatile const uint32_t *)(I2C1_BASE +I2C_I2CSMIS_OFFSET)))

//--------
#define I2C1_I2CSMIS_R_DATAMIS_MASK       (0x00000001)
#define I2C1_I2CSMIS_R_DATAMIS_BIT        (0)
#define I2C1_I2CSMIS_R_DATAMIS_NOOCCUR    (0x00000000)
#define I2C1_I2CSMIS_R_DATAMIS_OCCUR      (0x00000001)

#define I2C1_I2CSMIS_DATAMIS_MASK       (0x00000001)
#define I2C1_I2CSMIS_DATAMIS_NOOCCUR    (0x00000000)
#define I2C1_I2CSMIS_DATAMIS_OCCUR      (0x00000001)
//--------

//--------
#define I2C1_I2CSMIS_R_STARTMIS_MASK       (0x00000002)
#define I2C1_I2CSMIS_R_STARTMIS_BIT        (1)
#define I2C1_I2CSMIS_R_STARTMIS_NOOCCUR    (0x00000000)
#define I2C1_I2CSMIS_R_STARTMIS_OCCUR      (0x00000002)

#define I2C1_I2CSMIS_STARTMIS_MASK       (0x00000001)
#define I2C1_I2CSMIS_STARTMIS_NOOCCUR    (0x00000000)
#define I2C1_I2CSMIS_STARTMIS_OCCUR      (0x00000001)
//--------

//--------
#define I2C1_I2CSMIS_R_STOPMIS_MASK       (0x00000004)
#define I2C1_I2CSMIS_R_STOPMIS_BIT        (2)
#define I2C1_I2CSMIS_R_STOPMIS_NOOCCUR    (0x00000000)
#define I2C1_I2CSMIS_R_STOPMIS_OCCUR      (0x00000004)

#define I2C1_I2CSMIS_STOPMIS_MASK       (0x00000001)
#define I2C1_I2CSMIS_STOPMIS_NOOCCUR    (0x00000000)
#define I2C1_I2CSMIS_STOPMIS_OCCUR      (0x00000001)
//--------

#define I2C1_I2CSMIS_DATAMIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSMIS_OFFSET)*32)+(0*4))))
#define I2C1_I2CSMIS_STARTMIS_BB    (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSMIS_OFFSET)*32)+(1*4))))
#define I2C1_I2CSMIS_STOPMIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSMIS_OFFSET)*32)+(2*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.19 I2CSICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CSICR            (((I2CSICR_TypeDef*)(I2C1_BASE + I2C_I2CSICR_OFFSET )))
#define I2C1_I2CSICR_R          (*((volatile uint32_t *)(I2C1_BASE +I2C_I2CSICR_OFFSET)))

//--------
#define I2C1_I2CSICR_R_DATAIC_MASK       (0x00000001)
#define I2C1_I2CSICR_R_DATAIC_BIT        (0)
#define I2C1_I2CSICR_R_DATAIC_CLEAR      (0x00000001)

#define I2C1_I2CSICR_DATAIC_MASK       (0x00000001)
#define I2C1_I2CSICR_DATAIC_CLEAR      (0x00000001)
//--------

//--------
#define I2C1_I2CSICR_R_STARTIC_MASK       (0x00000002)
#define I2C1_I2CSICR_R_STARTIC_BIT        (1)
#define I2C1_I2CSICR_R_STARTIC_CLEAR      (0x00000002)

#define I2C1_I2CSICR_STARTIC_MASK       (0x00000001)
#define I2C1_I2CSICR_STARTIC_CLEAR      (0x00000001)
//--------

//--------
#define I2C1_I2CSICR_R_STOPIC_MASK       (0x00000004)
#define I2C1_I2CSICR_R_STOPIC_BIT        (2)
#define I2C1_I2CSICR_R_STOPIC_CLEAR      (0x00000004)

#define I2C1_I2CSICR_STOPIC_MASK       (0x00000001)
#define I2C1_I2CSICR_STOPIC_CLEAR      (0x00000001)
//--------

#define I2C1_I2CSICR_DATAICR_BB     (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSICR_OFFSET)*32)+(0*4))))
#define I2C1_I2CSICR_STARTICR_BB    (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSICR_OFFSET)*32)+(1*4))))
#define I2C1_I2CSICR_STOPICR_BB     (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSICR_OFFSET)*32)+(2*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.20 I2CSOAR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CSOAR2            (((I2CSOAR2_TypeDef*)(I2C1_BASE + I2C_I2CSOAR2_OFFSET )))
#define I2C1_I2CSOAR2_R          (*((volatile uint32_t *)(I2C1_BASE +I2C_I2CSOAR2_OFFSET)))

//--------
#define I2C1_I2CSOAR2_R_OAR2_MASK       (0x0000007F)
#define I2C1_I2CSOAR2_R_OAR2_BIT        (0)

#define I2C1_I2CSOAR2_OAR2_MASK         (0x0000007F)
//--------

//--------
#define I2C1_I2CSOAR2_R_OAR2EN_MASK       (0x00000080)
#define I2C1_I2CSOAR2_R_OAR2EN_BIT        (7)
#define I2C1_I2CSOAR2_R_OAR2EN_DIS        (0x00000000)
#define I2C1_I2CSOAR2_R_OAR2EN_EN         (0x00000080)

#define I2C1_I2CSOAR2_OAR2EN_MASK       (0x00000001)
#define I2C1_I2CSOAR2_OAR2EN_DIS        (0x00000000)
#define I2C1_I2CSOAR2_OAR2EN_EN         (0x00000001)
//--------

#define I2C1_I2CSOAR2_OAR2EN_BB     (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSOAR2_OFFSET)*32)+(7*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.21 I2CSACKCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CSACKCTL            (((I2CSACKCTL_TypeDef*)(I2C1_BASE + I2C_I2CSACKCTL_OFFSET )))
#define I2C1_I2CSACKCTL_R          (*((volatile uint32_t *)(I2C1_BASE +I2C_I2CSACKCTL_OFFSET)))

//--------
#define I2C1_I2CSACKCTL_R_ACKOEN_MASK       (0x00000001)
#define I2C1_I2CSACKCTL_R_ACKOEN_BIT        (0)
#define I2C1_I2CSACKCTL_R_ACKOEN_DIS        (0x00000000)
#define I2C1_I2CSACKCTL_R_ACKOEN_EN         (0x00000001)

#define I2C1_I2CSACKCTL_ACKOEN_MASK       (0x00000001)
#define I2C1_I2CSACKCTL_ACKOEN_DIS        (0x00000000)
#define I2C1_I2CSACKCTL_ACKOEN_EN         (0x00000001)
//--------

//--------
#define I2C1_I2CSACKCTL_R_ACKOVAL_MASK       (0x00000001)
#define I2C1_I2CSACKCTL_R_ACKOVAL_BIT        (0)
#define I2C1_I2CSACKCTL_R_ACKOVAL_VALID      (0x00000000)
#define I2C1_I2CSACKCTL_R_ACKOVAL_INVALID    (0x00000001)

#define I2C1_I2CSACKCTL_ACKOVAL_MASK       (0x00000001)
#define I2C1_I2CSACKCTL_ACKOVAL_VALID      (0x00000000)
#define I2C1_I2CSACKCTL_ACKOVAL_INVALID    (0x00000001)
//--------

#define I2C1_I2CSACKCTL_ACKOEN_BB     (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSACKCTL_OFFSET)*32)+(0*4))))
#define I2C1_I2CSACKCTL_ACKOVAL_BB    (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CSACKCTL_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.22 I2CPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CPP            (((I2CPP_TypeDef*)(I2C1_BASE + I2C_I2CPP_OFFSET )))
#define I2C1_I2CPP_R          (*((volatile const uint32_t *)(I2C1_BASE +I2C_I2CPP_OFFSET)))

//--------
#define I2C1_I2CPP_R_HS_MASK       (0x00000001)
#define I2C1_I2CPP_R_HS_BIT        (0)
#define I2C1_I2CPP_R_HS_STD        (0x00000000)
#define I2C1_I2CPP_R_HS_HS         (0x00000001)

#define I2C1_I2CPP_HS_MASK       (0x00000001)
#define I2C1_I2CPP_HS_STD        (0x00000000)
#define I2C1_I2CPP_HS_HS         (0x00000001)
//--------

#define I2C1_I2CPP_HS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CPP_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.23 I2CPC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C1_I2CPC            (((I2CPC_TypeDef*)(I2C1_BASE + I2C_I2CPC_OFFSET )))
#define I2C1_I2CPC_R          (*((volatile uint32_t *)(I2C1_BASE +I2C_I2CPC_OFFSET)))

//--------
#define I2C1_I2CPC_R_HS_MASK       (0x00000001)
#define I2C1_I2CPC_R_HS_BIT        (0)
#define I2C1_I2CPC_R_HS_STD        (0x00000000)
#define I2C1_I2CPC_R_HS_HS         (0x00000001)

#define I2C1_I2CPC_HS_MASK       (0x00000001)
#define I2C1_I2CPC_HS_STD        (0x00000000)
#define I2C1_I2CPC_HS_HS         (0x00000001)
//--------

#define I2C1_I2CPC_HS_BB     (*((volatile uint32_t *)(0x42000000+((I2C1_OFFSET+I2C_I2CPC_OFFSET)*32)+(0*4))))






// Todo I2C2

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 I2C2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.1 I2CMSA ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CMSA            (((I2CMSA_TypeDef*)(I2C2_BASE + I2C_I2CMSA_OFFSET )))
#define I2C2_I2CMSA_R          (*((volatile uint32_t *)(I2C2_BASE +I2C_I2CMSA_OFFSET)))

//--------
#define I2C2_I2CMSA_R_RS_MASK       (0x00000001)
#define I2C2_I2CMSA_R_RS_BIT        (0)
#define I2C2_I2CMSA_R_RS_TRANSMIT   (0x00000000)
#define I2C2_I2CMSA_R_RS_RECEIVE    (0x00000001)

#define I2C2_I2CMSA_RS_MASK         (0x00000001)
#define I2C2_I2CMSA_RS_TRANSMIST    (0x00000000)
#define I2C2_I2CMSA_RS_RECEIVE      (0x00000001)
//--------

//--------
#define I2C2_I2CMSA_R_SA_MASK       (0x000000FE)
#define I2C2_I2CMSA_R_SA_BIT        (1)

#define I2C2_I2CMSA_SA_MASK         (0x000000FE)
//--------

#define I2C2_I2CMSA_RS_BB     (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMSA_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.2 I2CMCSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CMCSR            (((I2CMCSR_TypeDef*)(I2C2_BASE + I2C_I2CMCSR_OFFSET )))
#define I2C2_I2CMCSR_R          (*((volatile const uint32_t *)(I2C2_BASE +I2C_I2CMCSR_OFFSET)))

//--------
#define I2C2_I2CMCSR_R_BUSY_MASK       (0x00000001)
#define I2C2_I2CMCSR_R_BUSY_BIT        (0)
#define I2C2_I2CMCSR_R_BUSY_IDLE       (0x00000000)
#define I2C2_I2CMCSR_R_BUSY_BUSY       (0x00000001)

#define I2C2_I2CMCSR_BUSY_MASK         (0x00000001)
#define I2C2_I2CMCSR_BUSY_IDLE         (0x00000000)
#define I2C2_I2CMCSR_BUSY_BUSY         (0x00000001)
//--------

//--------
#define I2C2_I2CMCSR_R_ERROR_MASK       (0x00000002)
#define I2C2_I2CMCSR_R_ERROR_BIT        (1)
#define I2C2_I2CMCSR_R_ERROR_NOERROR    (0x00000000)
#define I2C2_I2CMCSR_R_ERROR_ERROR      (0x00000002)

#define I2C2_I2CMCSR_ERROR_MASK         (0x00000001)
#define I2C2_I2CMCSR_ERROR_NOERROR      (0x00000000)
#define I2C2_I2CMCSR_ERROR_ERROR        (0x00000001)
//--------

//--------
#define I2C2_I2CMCSR_R_ADRACK_MASK       (0x00000004)
#define I2C2_I2CMCSR_R_ADRACK_BIT        (2)
#define I2C2_I2CMCSR_R_ADRACK_NOACK      (0x00000000)
#define I2C2_I2CMCSR_R_ADRACK_ACK        (0x00000004)

#define I2C2_I2CMCSR_ADRACK_MASK         (0x00000001)
#define I2C2_I2CMCSR_ADRACK_NOACK        (0x00000000)
#define I2C2_I2CMCSR_ADRACK_ACK          (0x00000001)
//--------

//--------
#define I2C2_I2CMCSR_R_DATACK_MASK       (0x00000008)
#define I2C2_I2CMCSR_R_DATACK_BIT        (3)
#define I2C2_I2CMCSR_R_DATACK_NOACK      (0x00000000)
#define I2C2_I2CMCSR_R_DATACK_ACK        (0x00000008)

#define I2C2_I2CMCSR_DATACK_MASK         (0x00000001)
#define I2C2_I2CMCSR_DATACK_NOACK        (0x00000000)
#define I2C2_I2CMCSR_DATACK_ACK          (0x00000001)
//--------

//--------
#define I2C2_I2CMCSR_R_DATACK_MASK       (0x00000008)
#define I2C2_I2CMCSR_R_DATACK_BIT        (3)
#define I2C2_I2CMCSR_R_DATACK_NOACK      (0x00000000)
#define I2C2_I2CMCSR_R_DATACK_ACK        (0x00000008)

#define I2C2_I2CMCSR_DATACK_MASK         (0x00000001)
#define I2C2_I2CMCSR_DATACK_NOACK        (0x00000000)
#define I2C2_I2CMCSR_DATACK_ACK          (0x00000001)
//--------

//--------
#define I2C2_I2CMCSR_R_ARBLST_MASK       (0x00000010)
#define I2C2_I2CMCSR_R_ARBLST_BIT        (4)
#define I2C2_I2CMCSR_R_ARBLST_WON        (0x00000000)
#define I2C2_I2CMCSR_R_ARBLST_LOST       (0x00000010)

#define I2C2_I2CMCSR_ARBLST_MASK         (0x00000001)
#define I2C2_I2CMCSR_ARBLST_WON          (0x00000000)
#define I2C2_I2CMCSR_ARBLST_LOST         (0x00000001)
//--------

//--------
#define I2C2_I2CMCSR_R_IDLE_MASK       (0x00000020)
#define I2C2_I2CMCSR_R_IDLE_BIT        (5)
#define I2C2_I2CMCSR_R_IDLE_NOIDLE     (0x00000000)
#define I2C2_I2CMCSR_R_IDLE_IDLE       (0x00000020)

#define I2C2_I2CMCSR_IDLE_MASK         (0x00000001)
#define I2C2_I2CMCSR_IDLE_NOIDLE       (0x00000000)
#define I2C2_I2CMCSR_IDLE_IDLE         (0x00000001)
//--------

//--------
#define I2C2_I2CMCSR_R_BUSBSY_MASK       (0x00000040)
#define I2C2_I2CMCSR_R_BUSBSY_BIT        (6)
#define I2C2_I2CMCSR_R_BUSBSY_IDLE       (0x00000000)
#define I2C2_I2CMCSR_R_BUSBSY_BUSY       (0x00000040)

#define I2C2_I2CMCSR_BUSBSY_MASK         (0x00000001)
#define I2C2_I2CMCSR_BUSBSY_IDLE         (0x00000000)
#define I2C2_I2CMCSR_BUSBSY_BUSY         (0x00000001)
//--------

//--------
#define I2C2_I2CMCSR_R_CLKTO_MASK       (0x00000080)
#define I2C2_I2CMCSR_R_CLKTO_BIT        (7)
#define I2C2_I2CMCSR_R_CLKTO_NOERROR    (0x00000000)
#define I2C2_I2CMCSR_R_CLKTO_ERROR      (0x00000080)

#define I2C2_I2CMCSR_CLKTO_MASK         (0x00000001)
#define I2C2_I2CMCSR_CLKTO_NOERROR      (0x00000000)
#define I2C2_I2CMCSR_CLKTO_ERROR        (0x00000001)
//--------

#define I2C2_I2CMCSR_BUSY_BB        (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(0*4))))
#define I2C2_I2CMCSR_ERROR_BB       (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(1*4))))
#define I2C2_I2CMCSR_ADRACK_BB      (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(2*4))))
#define I2C2_I2CMCSR_DATACK_BB      (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(3*4))))
#define I2C2_I2CMCSR_ARBLST_BB      (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(4*4))))
#define I2C2_I2CMCSR_IDLE_BB        (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(5*4))))
#define I2C2_I2CMCSR_BUSBSY_BB      (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(6*4))))
#define I2C2_I2CMCSR_CLKTO_BB       (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(7*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.2 I2CMCSW ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CMCSW            (((I2CMCSW_TypeDef*)(I2C2_BASE + I2C_I2CMCSW_OFFSET )))
#define I2C2_I2CMCSW_R          (*((volatile uint32_t *)(I2C2_BASE +I2C_I2CMCSW_OFFSET)))

//--------
#define I2C2_I2CMCSW_R_RUN_MASK       (0x00000001)
#define I2C2_I2CMCSW_R_RUN_BIT        (0)
#define I2C2_I2CMCSW_R_RUN_DIS        (0x00000000)
#define I2C2_I2CMCSW_R_RUN_EN         (0x00000001)

#define I2C2_I2CMCSW_RUN_MASK         (0x00000001)
#define I2C2_I2CMCSW_RUN_DIS          (0x00000000)
#define I2C2_I2CMCSW_RUN_EN           (0x00000001)
//--------

//--------
#define I2C2_I2CMCSW_R_START_MASK       (0x00000002)
#define I2C2_I2CMCSW_R_START_BIT        (1)
#define I2C2_I2CMCSW_R_START_DIS        (0x00000000)
#define I2C2_I2CMCSW_R_START_EN         (0x00000002)

#define I2C2_I2CMCSW_START_MASK         (0x00000001)
#define I2C2_I2CMCSW_START_DIS          (0x00000000)
#define I2C2_I2CMCSW_START_EN           (0x00000001)
//--------

//--------
#define I2C2_I2CMCSW_R_STOP_MASK       (0x00000004)
#define I2C2_I2CMCSW_R_STOP_BIT        (2)
#define I2C2_I2CMCSW_R_STOP_DIS        (0x00000000)
#define I2C2_I2CMCSW_R_STOP_EN         (0x00000004)

#define I2C2_I2CMCSW_STOP_MASK         (0x00000001)
#define I2C2_I2CMCSW_STOP_DIS          (0x00000000)
#define I2C2_I2CMCSW_STOP_EN           (0x00000001)
//--------

//--------
#define I2C2_I2CMCSW_R_ACK_MASK       (0x00000008)
#define I2C2_I2CMCSW_R_ACK_BIT        (3)
#define I2C2_I2CMCSW_R_ACK_DIS        (0x00000000)
#define I2C2_I2CMCSW_R_ACK_EN         (0x00000008)

#define I2C2_I2CMCSW_ACK_MASK         (0x00000001)
#define I2C2_I2CMCSW_ACK_DIS          (0x00000000)
#define I2C2_I2CMCSW_ACK_EN           (0x00000001)
//--------

//--------
#define I2C2_I2CMCSW_R_HS_MASK       (0x00000010)
#define I2C2_I2CMCSW_R_HS_BIT        (4)
#define I2C2_I2CMCSW_R_HS_DIS        (0x00000000)
#define I2C2_I2CMCSW_R_HS_EN         (0x00000010)

#define I2C2_I2CMCSW_HS_MASK         (0x00000001)
#define I2C2_I2CMCSW_HS_DIS          (0x00000000)
#define I2C2_I2CMCSW_HS_EN           (0x00000001)
//--------

#define I2C2_I2CMCSW_RUN_BB      (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(0*4))))
#define I2C2_I2CMCSW_START_BB    (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(1*4))))
#define I2C2_I2CMCSW_STOP_BB     (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(2*4))))
#define I2C2_I2CMCSW_ACK_BB      (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(3*4))))
#define I2C2_I2CMCSW_HS_BB       (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(4*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.3 I2CMDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CMDR            (((I2CMDR_TypeDef*)(I2C2_BASE + I2C_I2CMDR_OFFSET )))
#define I2C2_I2CMDR_R          (*((volatile uint32_t *)(I2C2_BASE +I2C_I2CMDR_OFFSET)))

//--------
#define I2C2_I2CMDR_R_DATA_MASK       (0x000000FF)
#define I2C2_I2CMDR_R_DATA_BIT        (0)

#define I2C2_I2CMDR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.4 I2CMTPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CMTPR            (((I2CMTPR_TypeDef*)(I2C2_BASE + I2C_I2CMTPR_OFFSET )))
#define I2C2_I2CMTPR_R          (*((volatile uint32_t *)(I2C2_BASE +I2C_I2CMTPR_OFFSET)))

//--------
#define I2C2_I2CMTPR_R_TPR_MASK       (0x0000007F)
#define I2C2_I2CMTPR_R_TPR_BIT        (0)

#define I2C2_I2CMTPR_TPR_MASK         (0x0000007F)
//--------

//--------
#define I2C2_I2CMTPR_R_HS_MASK       (0x00000080)
#define I2C2_I2CMTPR_R_HS_BIT        (7)
#define I2C2_I2CMTPR_R_HS_DIS        (0x00000000)
#define I2C2_I2CMTPR_R_HS_EN         (0x00000080)

#define I2C2_I2CMTPR_HS_MASK         (0x00000001)
#define I2C2_I2CMTPR_HS_DIS          (0x00000000)
#define I2C2_I2CMTPR_HS_EN           (0x00000001)
//--------

#define I2C2_I2CMTPR_HS_BB     (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMTPR_OFFSET)*32)+(7*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.5 I2CMIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CMIMR            (((I2CMIMR_TypeDef*)(I2C2_BASE + I2C_I2CMIMR_OFFSET )))
#define I2C2_I2CMIMR_R          (*((volatile uint32_t *)(I2C2_BASE +I2C_I2CMIMR_OFFSET)))

//--------
#define I2C2_I2CIMR_R_IM_MASK       (0x00000001)
#define I2C2_I2CIMR_R_IM_BIT        (0)
#define I2C2_I2CIMR_R_IM_DIS        (0x00000000)
#define I2C2_I2CIMR_R_IM_EN         (0x00000001)

#define I2C2_I2CIMR_IM_MASK       (0x00000001)
#define I2C2_I2CIMR_IM_DIS        (0x00000000)
#define I2C2_I2CIMR_IM_EN         (0x00000001)
//--------

//--------
#define I2C2_I2CIMR_R_CLKIM_MASK       (0x00000002)
#define I2C2_I2CIMR_R_CLKIM_BIT        (1)
#define I2C2_I2CIMR_R_CLKIM_DIS        (0x00000000)
#define I2C2_I2CIMR_R_CLKIM_EN         (0x00000002)

#define I2C2_I2CIMR_CLKIM_MASK       (0x00000001)
#define I2C2_I2CIMR_CLKIM_DIS        (0x00000000)
#define I2C2_I2CIMR_CLKIM_EN         (0x00000001)
//--------

#define I2C2_I2CMIMR_IM_BB     (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMIMR_OFFSET)*32)+(0*4))))
#define I2C2_I2CMIMR_CLKIM_BB  (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMIMR_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.6 I2CMRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CMRIS            (((I2CMRIS_TypeDef*)(I2C2_BASE + I2C_I2CMRIS_OFFSET )))
#define I2C2_I2CMRIS_R          (*((volatile const uint32_t *)(I2C2_BASE +I2C_I2CMRIS_OFFSET)))

//--------
#define I2C2_I2CMRIS_R_RIS_MASK       (0x00000001)
#define I2C2_I2CMRIS_R_RIS_BIT        (0)
#define I2C2_I2CMRIS_R_RIS_NOACTIVE   (0x00000000)
#define I2C2_I2CMRIS_R_RIS_ACTIVE     (0x00000001)

#define I2C2_I2CMRIS_RIS_MASK       (0x00000001)
#define I2C2_I2CMRIS_RIS_NOACTIVE   (0x00000000)
#define I2C2_I2CMRIS_RIS_ACTIVE     (0x00000001)
//--------

//--------
#define I2C2_I2CMRIS_R_CLKRIS_MASK       (0x00000002)
#define I2C2_I2CMRIS_R_CLKRIS_BIT        (1)
#define I2C2_I2CMRIS_R_CLKRIS_NOACTIVE   (0x00000000)
#define I2C2_I2CMRIS_R_CLKRIS_ACTIVE     (0x00000002)

#define I2C2_I2CMRIS_CLKRIS_MASK       (0x00000001)
#define I2C2_I2CMRIS_CLKRIS_NOACTIVE   (0x00000000)
#define I2C2_I2CMRIS_CLKRIS_ACTIVE     (0x00000001)
//--------

#define I2C2_I2CMRIS_RIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMRIS_OFFSET)*32)+(0*4))))
#define I2C2_I2CMRIS_CLKRIS_BB  (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMRIS_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.7 I2CMMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CMMIS            (((I2CMMIS_TypeDef*)(I2C2_BASE + I2C_I2CMMIS_OFFSET )))
#define I2C2_I2CMMIS_R          (*((volatile const uint32_t *)(I2C2_BASE +I2C_I2CMMIS_OFFSET)))

//--------
#define I2C2_I2CMMIS_R_MIS_MASK       (0x00000001)
#define I2C2_I2CMMIS_R_MIS_BIT        (0)
#define I2C2_I2CMMIS_R_MIS_NOOCCUR    (0x00000000)
#define I2C2_I2CMMIS_R_MIS_OCCUR      (0x00000001)

#define I2C2_I2CMMIS_MIS_MASK       (0x00000001)
#define I2C2_I2CMMIS_MIS_NOOCCUR    (0x00000000)
#define I2C2_I2CMMIS_MIS_OCCUR      (0x00000001)
//--------

//--------
#define I2C2_I2CMMIS_R_CLKMIS_MASK       (0x00000002)
#define I2C2_I2CMMIS_R_CLKMIS_BIT        (1)
#define I2C2_I2CMMIS_R_CLKMIS_NOOCCUR    (0x00000000)
#define I2C2_I2CMMIS_R_CLKMIS_OCCUR      (0x00000002)

#define I2C2_I2CMMIS_CLKMIS_MASK       (0x00000001)
#define I2C2_I2CMMIS_CLKMIS_NOOCCUR    (0x00000000)
#define I2C2_I2CMMIS_CLKMIS_OCCUR      (0x00000001)
//--------

#define I2C2_I2CMMIS_MIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMMIS_OFFSET)*32)+(0*4))))
#define I2C2_I2CMMIS_CLKMIS_BB  (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMMIS_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.8 I2CMICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CMICR            (((I2CMICR_TypeDef*)(I2C2_BASE + I2C_I2CMICR_OFFSET )))
#define I2C2_I2CMICR_R          (*((volatile uint32_t *)(I2C2_BASE +I2C_I2CMICR_OFFSET)))

//--------
#define I2C2_I2CMICR_R_IC_MASK       (0x00000001)
#define I2C2_I2CMICR_R_IC_BIT        (0)
#define I2C2_I2CMICR_R_IC_CLEAR      (0x00000001)

#define I2C2_I2CMICR_IC_MASK       (0x00000001)
#define I2C2_I2CMICR_IC_CLEAR      (0x00000001)
//--------

//--------
#define I2C2_I2CMICR_R_CLKIC_MASK       (0x00000002)
#define I2C2_I2CMICR_R_CLKIC_BIT        (1)
#define I2C2_I2CMICR_R_CLKIC_CLEAR      (0x00000002)

#define I2C2_I2CMICR_CLKIC_MASK       (0x00000001)
#define I2C2_I2CMICR_CLKIC_CLEAR      (0x00000001)
//--------

#define I2C2_I2CMICR_IC_BB        (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMICR_OFFSET)*32)+(0*4))))
#define I2C2_I2CMICR_CLKIC_BB     (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMICR_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.9 I2CMCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CMCR            (((I2CMCR_TypeDef*)(I2C2_BASE + I2C_I2CMCR_OFFSET )))
#define I2C2_I2CMCR_R          (*((volatile uint32_t *)(I2C2_BASE +I2C_I2CMCR_OFFSET)))

//--------
#define I2C2_I2CMCR_R_LPBK_MASK       (0x00000001)
#define I2C2_I2CMCR_R_LPBK_BIT        (0)
#define I2C2_I2CMCR_R_LPBK_NORMAL     (0x00000000)
#define I2C2_I2CMCR_R_LPBK_LOOPBACK   (0x00000001)

#define I2C2_I2CMCR_LPBK_MASK       (0x00000001)
#define I2C2_I2CMCR_LPBK_NORMAL     (0x00000000)
#define I2C2_I2CMCR_LPBK_LOOPBACK   (0x00000001)
//--------

//--------
#define I2C2_I2CMCR_R_MFE_MASK       (0x00000010)
#define I2C2_I2CMCR_R_MFE_BIT        (4)
#define I2C2_I2CMCR_R_MFE_DIS        (0x00000000)
#define I2C2_I2CMCR_R_MFE_EN         (0x00000010)

#define I2C2_I2CMCR_MFE_MASK       (0x00000001)
#define I2C2_I2CMCR_MFE_DIS        (0x00000000)
#define I2C2_I2CMCR_MFE_EN         (0x00000001)
//--------

//--------
#define I2C2_I2CMCR_R_SFE_MASK       (0x00000020)
#define I2C2_I2CMCR_R_SFE_BIT        (5)
#define I2C2_I2CMCR_R_SFE_DIS        (0x00000000)
#define I2C2_I2CMCR_R_SFE_EN         (0x00000020)

#define I2C2_I2CMCR_SFE_MASK       (0x00000001)
#define I2C2_I2CMCR_SFE_DIS        (0x00000000)
#define I2C2_I2CMCR_SFE_EN         (0x00000001)
//--------

//--------
#define I2C2_I2CMCR_R_GFE_MASK       (0x00000040)
#define I2C2_I2CMCR_R_GFE_BIT        (6)
#define I2C2_I2CMCR_R_GFE_DIS        (0x00000000)
#define I2C2_I2CMCR_R_GFE_EN         (0x00000040)

#define I2C2_I2CMCR_GFE_MASK       (0x00000001)
#define I2C2_I2CMCR_GFE_DIS        (0x00000000)
#define I2C2_I2CMCR_GFE_EN         (0x00000001)
//--------)

#define I2C2_I2CMCR_LPBK_BB        (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMCR_OFFSET)*32)+(0*4))))
#define I2C2_I2CMCR_MFE_BB         (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMCR_OFFSET)*32)+(4*4))))
#define I2C2_I2CMCR_SFE_BB         (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMCR_OFFSET)*32)+(5*4))))
#define I2C2_I2CMCR_GFE_BB         (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMCR_OFFSET)*32)+(6*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.10 I2CMCLKOCNT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CMCLKOCNT            (((I2CMCLKOCNT_TypeDef*)(I2C2_BASE + I2C_I2CMCLKOCNT_OFFSET )))
#define I2C2_I2CMCLKOCNT_R          (*((volatile uint32_t *)(I2C2_BASE +I2C_I2CMCLKOCNT_OFFSET)))

//--------
#define I2C2_I2CMCLKOCNT_R_CNTL_MASK       (0x000000FF)
#define I2C2_I2CMCLKOCNT_R_CNTL_BIT        (0)

#define I2C2_I2CMCLKOCNT_CNTL_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.11 I2CMBMON ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CMBMON            (((I2CMBMON_TypeDef*)(I2C2_BASE + I2C_I2CMBMON_OFFSET )))
#define I2C2_I2CMBMON_R          (*((volatile const uint32_t *)(I2C2_BASE +I2C_I2CMBMON_OFFSET)))

//--------
#define I2C2_I2CMBMON_R_SCL_MASK       (0x00000001)
#define I2C2_I2CMBMON_R_SCL_BIT        (0)
#define I2C2_I2CMBMON_R_SCL_LOW        (0x00000000)
#define I2C2_I2CMBMON_R_SCL_HIGH       (0x00000001)

#define I2C2_I2CMBMON_SCL_MASK       (0x00000001)
#define I2C2_I2CMBMON_SCL_LOW        (0x00000000)
#define I2C2_I2CMBMON_SCL_HIGH       (0x00000001)
//--------

//--------
#define I2C2_I2CMBMON_R_SDA_MASK       (0x00000002)
#define I2C2_I2CMBMON_R_SDA_BIT        (1)
#define I2C2_I2CMBMON_R_SDA_LOW        (0x00000000)
#define I2C2_I2CMBMON_R_SDA_HIGH       (0x00000002)

#define I2C2_I2CMBMON_SDA_MASK       (0x00000001)
#define I2C2_I2CMBMON_SDA_LOW        (0x00000000)
#define I2C2_I2CMBMON_SDA_HIGH       (0x00000001)
//--------

#define I2C2_I2CMBMON_SCL_BB        (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMBMON_OFFSET)*32)+(0*4))))
#define I2C2_I2CMBMON_SDA_BB         (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CMBMON_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.12 I2CMCR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CMCR2            (((I2CMCR2_TypeDef*)(I2C2_BASE + I2C_I2CMCR2_OFFSET )))
#define I2C2_I2CMCR2_R          (*((volatile uint32_t *)(I2C2_BASE +I2C_I2CMCR2_OFFSET)))


//--------
#define I2C2_I2CMCR2_R_GFPW_MASK       (0x000000E0)
#define I2C2_I2CMCR2_R_GFPW_BIT        (0)
#define I2C2_I2CMCR2_R_GFPW_BYPASS     (0x00000000)
#define I2C2_I2CMCR2_R_GFPW_1CLOCK     (0x00000020)
#define I2C2_I2CMCR2_R_GFPW_2CLOCK     (0x00000040)
#define I2C2_I2CMCR2_R_GFPW_3CLOCK     (0x00000060)
#define I2C2_I2CMCR2_R_GFPW_4CLOCK     (0x00000080)
#define I2C2_I2CMCR2_R_GFPW_8CLOCK     (0x00000090)
#define I2C2_I2CMCR2_R_GFPW_16CLOCK    (0x000000C0)
#define I2C2_I2CMCR2_R_GFPW_31CLOCK    (0x000000E0)

#define I2C2_I2CMCR2_GFPW_MASK         (0x00000007)
#define I2C2_I2CMCR2_GFPW_BYPASS       (0x00000000)
#define I2C2_I2CMCR2_GFPW_1CLOCK       (0x00000001)
#define I2C2_I2CMCR2_GFPW_2CLOCK       (0x00000002)
#define I2C2_I2CMCR2_GFPW_3CLOCK       (0x00000003)
#define I2C2_I2CMCR2_GFPW_4CLOCK       (0x00000004)
#define I2C2_I2CMCR2_GFPW_8CLOCK       (0x00000005)
#define I2C2_I2CMCR2_GFPW_16CLOCK      (0x00000006)
#define I2C2_I2CMCR2_GFPW_31CLOCK      (0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.13 I2CSOAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CSOAR            (((I2CSOAR_TypeDef*)(I2C2_BASE + I2C_I2CSOAR_OFFSET )))
#define I2C2_I2CSOAR_R          (*((volatile uint32_t *)(I2C2_BASE +I2C_I2CSOAR_OFFSET)))

//--------
#define I2C2_I2CSOAR_R_OAR_MASK       (0x0000007F)
#define I2C2_I2CSOAR_R_OAR_BIT        (0)

#define I2C2_I2CSOAR_OAR_MASK         (0x0000007F)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.14 I2CSCSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CSCSR            (((I2CSCSR_TypeDef*)(I2C2_BASE + I2C_I2CSCSR_OFFSET )))
#define I2C2_I2CSCSR_R          (*((volatile const uint32_t *)(I2C2_BASE +I2C_I2CSCSR_OFFSET)))

//--------
#define I2C2_I2CSCSR_R_RREQ_MASK       (0x00000001)
#define I2C2_I2CSCSR_R_RREQ_BIT        (0)
#define I2C2_I2CSCSR_R_RREQ_NOREQ      (0x00000000)
#define I2C2_I2CSCSR_R_RREQ_REQ        (0x00000001)

#define I2C2_I2CSCSR_RREQ_MASK       (0x00000001)
#define I2C2_I2CSCSR_RREQ_NOREQ      (0x00000000)
#define I2C2_I2CSCSR_RREQ_REQ        (0x00000001)
//--------

//--------
#define I2C2_I2CSCSR_R_TREQ_MASK       (0x00000002)
#define I2C2_I2CSCSR_R_TREQ_BIT        (1)
#define I2C2_I2CSCSR_R_TREQ_NOREQ      (0x00000000)
#define I2C2_I2CSCSR_R_TREQ_REQ        (0x00000002)

#define I2C2_I2CSCSR_TREQ_MASK       (0x00000001)
#define I2C2_I2CSCSR_TREQ_NOREQ      (0x00000000)
#define I2C2_I2CSCSR_TREQ_REQ        (0x00000001)
//--------

//--------
#define I2C2_I2CSCSR_R_FBR_MASK       (0x00000004)
#define I2C2_I2CSCSR_R_FBR_BIT        (2)
#define I2C2_I2CSCSR_R_FBR_NORECEIVE  (0x00000000)
#define I2C2_I2CSCSR_R_FBR_RECEVE     (0x00000004)

#define I2C2_I2CSCSR_FBR_MASK       (0x00000001)
#define I2C2_I2CSCSR_FBR_NORECEIVE  (0x00000000)
#define I2C2_I2CSCSR_FBR_RECEIVE    (0x00000001)
//--------

//--------
#define I2C2_I2CSCSR_R_OAR2SEL_MASK       (0x00000008)
#define I2C2_I2CSCSR_R_OAR2SEL_BIT        (3)
#define I2C2_I2CSCSR_R_OAR2SEL_DIS        (0x00000000)
#define I2C2_I2CSCSR_R_OAR2SEL_RECEVE     (0x00000008)

#define I2C2_I2CSCSR_OAR2SEL_MASK       (0x00000001)
#define I2C2_I2CSCSR_OAR2SEL_DIS        (0x00000000)
#define I2C2_I2CSCSR_OAR2SEL_EN         (0x00000001)
//--------

#define I2C2_I2CSCSR_RREQ_BB         (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSCSR_OFFSET)*32)+(0*4))))
#define I2C2_I2CSCSR_TREQ_BB         (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSCSR_OFFSET)*32)+(1*4))))
#define I2C2_I2CSCSR_FBR_BB          (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSCSR_OFFSET)*32)+(2*4))))
#define I2C2_I2CSCSR_OAR2SEL_BB      (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSCSR_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.14 I2CSCSRW ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CSCSRW            (((I2CSCSRW_TypeDef*)(I2C2_BASE + I2C_I2CSCSRW_OFFSET )))
#define I2C2_I2CSCSRW_R          (*((volatile uint32_t *)(I2C2_BASE +I2C_I2CSCSRW_OFFSET)))

//--------
#define I2C2_I2CSCSRW_R_DA_MASK       (0x00000001)
#define I2C2_I2CSCSRW_R_DA_BIT        (0)
#define I2C2_I2CSCSRW_R_DA_DIS        (0x00000000)
#define I2C2_I2CSCSRW_R_DA_EN         (0x00000001)

#define I2C2_I2CSCSRW_DA_MASK       (0x00000001)
#define I2C2_I2CSCSRW_DA_DIS        (0x00000000)
#define I2C2_I2CSCSRW_DA_EN         (0x00000001)
//--------

#define I2C2_I2CSCSRW_DA_BB         (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSCSRW_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.15 I2CSDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CSDR            (((I2CSDR_TypeDef*)(I2C2_BASE + I2C_I2CSDR_OFFSET )))
#define I2C2_I2CSDR_R          (*((volatile uint32_t *)(I2C2_BASE +I2C_I2CSDR_OFFSET)))

//--------
#define I2C2_I2CSDR_R_DATA_MASK       (0x000000FF)
#define I2C2_I2CSDR_R_DATA_BIT        (0)

#define I2C2_I2CSDR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.16 I2CSIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CSIMR            (((I2CSIMR_TypeDef*)(I2C2_BASE + I2C_I2CSIMR_OFFSET )))
#define I2C2_I2CSIMR_R          (*((volatile uint32_t *)(I2C2_BASE +I2C_I2CSIMR_OFFSET)))

//--------
#define I2C2_I2CSIMR_R_DATAIM_MASK       (0x00000001)
#define I2C2_I2CSIMR_R_DATAIM_BIT        (0)
#define I2C2_I2CSIMR_R_DATAIM_DIS        (0x00000000)
#define I2C2_I2CSIMR_R_DATAIM_EN         (0x00000001)

#define I2C2_I2CSIMR_DATAIM_MASK       (0x00000001)
#define I2C2_I2CSIMR_DATAIM_DIS        (0x00000000)
#define I2C2_I2CSIMR_DATAIM_EN         (0x00000001)
//--------

//--------
#define I2C2_I2CSIMR_R_STARTIM_MASK       (0x00000002)
#define I2C2_I2CSIMR_R_STARTIM_BIT        (1)
#define I2C2_I2CSIMR_R_STARTIM_DIS        (0x00000000)
#define I2C2_I2CSIMR_R_STARTIM_EN         (0x00000002)

#define I2C2_I2CSIMR_STARTIM_MASK       (0x00000001)
#define I2C2_I2CSIMR_STARTIM_DIS        (0x00000000)
#define I2C2_I2CSIMR_STARTIM_EN         (0x00000001)
//--------

//--------
#define I2C2_I2CSIMR_R_STOPIM_MASK       (0x00000004)
#define I2C2_I2CSIMR_R_STOPIM_BIT        (2)
#define I2C2_I2CSIMR_R_STOPIM_DIS        (0x00000000)
#define I2C2_I2CSIMR_R_STOPIM_EN         (0x00000004)

#define I2C2_I2CSIMR_STOPIM_MASK       (0x00000001)
#define I2C2_I2CSIMR_STOPIM_DIS        (0x00000000)
#define I2C2_I2CSIMR_STOPIM_EN         (0x00000001)
//--------

#define I2C2_I2CSIMR_DATAIM_BB     (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSIMR_OFFSET)*32)+(0*4))))
#define I2C2_I2CSIMR_STARTIM_BB    (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSIMR_OFFSET)*32)+(1*4))))
#define I2C2_I2CSIMR_STOPIM_BB     (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSIMR_OFFSET)*32)+(2*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.17 I2CSRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CSRIS            (((I2CSRIS_TypeDef*)(I2C2_BASE + I2C_I2CSRIS_OFFSET )))
#define I2C2_I2CSRIS_R          (*((volatile const uint32_t *)(I2C2_BASE +I2C_I2CSRIS_OFFSET)))
#define I2C2_I2CSIMR_R          (*((volatile uint32_t *)(I2C2_BASE +I2C_I2CSIMR_OFFSET)))

//--------
#define I2C2_I2CSRIS_R_DATARIS_MASK       (0x00000001)
#define I2C2_I2CSRIS_R_DATARIS_BIT        (0)
#define I2C2_I2CSRIS_R_DATARIS_NOACTIVE   (0x00000000)
#define I2C2_I2CSRIS_R_DATARIS_ACTIVE     (0x00000001)

#define I2C2_I2CSRIS_DATARIS_MASK       (0x00000001)
#define I2C2_I2CSRIS_DATARIS_NOACTIVE   (0x00000000)
#define I2C2_I2CSRIS_DATARIS_ACTIVE     (0x00000001)
//--------

//--------
#define I2C2_I2CSRIS_R_STARTRIS_MASK       (0x00000002)
#define I2C2_I2CSRIS_R_STARTRIS_BIT        (1)
#define I2C2_I2CSRIS_R_STARTRIS_NOACTIVE   (0x00000000)
#define I2C2_I2CSRIS_R_STARTRIS_ACTIVE     (0x00000002)

#define I2C2_I2CSRIS_STARTRIS_MASK       (0x00000001)
#define I2C2_I2CSRIS_STARTRIS_NOACTIVE   (0x00000000)
#define I2C2_I2CSRIS_STARTRIS_ACTIVE     (0x00000001)
//--------

//--------
#define I2C2_I2CSRIS_R_STOPRIS_MASK       (0x00000004)
#define I2C2_I2CSRIS_R_STOPRIS_BIT        (2)
#define I2C2_I2CSRIS_R_STOPRIS_NOACTIVE   (0x00000000)
#define I2C2_I2CSRIS_R_STOPRIS_ACTIVE     (0x00000004)

#define I2C2_I2CSRIS_STOPRIS_MASK       (0x00000001)
#define I2C2_I2CSRIS_STOPRIS_NOACTIVE   (0x00000000)
#define I2C2_I2CSRIS_STOPRIS_ACTIVE     (0x00000001)
//--------
#define I2C2_I2CSRIS_DATARIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSRIS_OFFSET)*32)+(0*4))))
#define I2C2_I2CSRIS_STARTRIS_BB    (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSRIS_OFFSET)*32)+(1*4))))
#define I2C2_I2CSRIS_STOPRIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSRIS_OFFSET)*32)+(2*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.18 I2CSMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CSMIS            (((I2CSMIS_TypeDef*)(I2C2_BASE + I2C_I2CSMIS_OFFSET )))
#define I2C2_I2CSMIS_R          (*((volatile const uint32_t *)(I2C2_BASE +I2C_I2CSMIS_OFFSET)))

//--------
#define I2C2_I2CSMIS_R_DATAMIS_MASK       (0x00000001)
#define I2C2_I2CSMIS_R_DATAMIS_BIT        (0)
#define I2C2_I2CSMIS_R_DATAMIS_NOOCCUR    (0x00000000)
#define I2C2_I2CSMIS_R_DATAMIS_OCCUR      (0x00000001)

#define I2C2_I2CSMIS_DATAMIS_MASK       (0x00000001)
#define I2C2_I2CSMIS_DATAMIS_NOOCCUR    (0x00000000)
#define I2C2_I2CSMIS_DATAMIS_OCCUR      (0x00000001)
//--------

//--------
#define I2C2_I2CSMIS_R_STARTMIS_MASK       (0x00000002)
#define I2C2_I2CSMIS_R_STARTMIS_BIT        (1)
#define I2C2_I2CSMIS_R_STARTMIS_NOOCCUR    (0x00000000)
#define I2C2_I2CSMIS_R_STARTMIS_OCCUR      (0x00000002)

#define I2C2_I2CSMIS_STARTMIS_MASK       (0x00000001)
#define I2C2_I2CSMIS_STARTMIS_NOOCCUR    (0x00000000)
#define I2C2_I2CSMIS_STARTMIS_OCCUR      (0x00000001)
//--------

//--------
#define I2C2_I2CSMIS_R_STOPMIS_MASK       (0x00000004)
#define I2C2_I2CSMIS_R_STOPMIS_BIT        (2)
#define I2C2_I2CSMIS_R_STOPMIS_NOOCCUR    (0x00000000)
#define I2C2_I2CSMIS_R_STOPMIS_OCCUR      (0x00000004)

#define I2C2_I2CSMIS_STOPMIS_MASK       (0x00000001)
#define I2C2_I2CSMIS_STOPMIS_NOOCCUR    (0x00000000)
#define I2C2_I2CSMIS_STOPMIS_OCCUR      (0x00000001)
//--------

#define I2C2_I2CSMIS_DATAMIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSMIS_OFFSET)*32)+(0*4))))
#define I2C2_I2CSMIS_STARTMIS_BB    (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSMIS_OFFSET)*32)+(1*4))))
#define I2C2_I2CSMIS_STOPMIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSMIS_OFFSET)*32)+(2*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.19 I2CSICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CSICR            (((I2CSICR_TypeDef*)(I2C2_BASE + I2C_I2CSICR_OFFSET )))
#define I2C2_I2CSICR_R          (*((volatile uint32_t *)(I2C2_BASE +I2C_I2CSICR_OFFSET)))

//--------
#define I2C2_I2CSICR_R_DATAIC_MASK       (0x00000001)
#define I2C2_I2CSICR_R_DATAIC_BIT        (0)
#define I2C2_I2CSICR_R_DATAIC_CLEAR      (0x00000001)

#define I2C2_I2CSICR_DATAIC_MASK       (0x00000001)
#define I2C2_I2CSICR_DATAIC_CLEAR      (0x00000001)
//--------

//--------
#define I2C2_I2CSICR_R_STARTIC_MASK       (0x00000002)
#define I2C2_I2CSICR_R_STARTIC_BIT        (1)
#define I2C2_I2CSICR_R_STARTIC_CLEAR      (0x00000002)

#define I2C2_I2CSICR_STARTIC_MASK       (0x00000001)
#define I2C2_I2CSICR_STARTIC_CLEAR      (0x00000001)
//--------

//--------
#define I2C2_I2CSICR_R_STOPIC_MASK       (0x00000004)
#define I2C2_I2CSICR_R_STOPIC_BIT        (2)
#define I2C2_I2CSICR_R_STOPIC_CLEAR      (0x00000004)

#define I2C2_I2CSICR_STOPIC_MASK       (0x00000001)
#define I2C2_I2CSICR_STOPIC_CLEAR      (0x00000001)
//--------

#define I2C2_I2CSICR_DATAICR_BB     (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSICR_OFFSET)*32)+(0*4))))
#define I2C2_I2CSICR_STARTICR_BB    (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSICR_OFFSET)*32)+(1*4))))
#define I2C2_I2CSICR_STOPICR_BB     (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSICR_OFFSET)*32)+(2*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.20 I2CSOAR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CSOAR2            (((I2CSOAR2_TypeDef*)(I2C2_BASE + I2C_I2CSOAR2_OFFSET )))
#define I2C2_I2CSOAR2_R          (*((volatile uint32_t *)(I2C2_BASE +I2C_I2CSOAR2_OFFSET)))

//--------
#define I2C2_I2CSOAR2_R_OAR2_MASK       (0x0000007F)
#define I2C2_I2CSOAR2_R_OAR2_BIT        (0)

#define I2C2_I2CSOAR2_OAR2_MASK         (0x0000007F)
//--------

//--------
#define I2C2_I2CSOAR2_R_OAR2EN_MASK       (0x00000080)
#define I2C2_I2CSOAR2_R_OAR2EN_BIT        (7)
#define I2C2_I2CSOAR2_R_OAR2EN_DIS        (0x00000000)
#define I2C2_I2CSOAR2_R_OAR2EN_EN         (0x00000080)

#define I2C2_I2CSOAR2_OAR2EN_MASK       (0x00000001)
#define I2C2_I2CSOAR2_OAR2EN_DIS        (0x00000000)
#define I2C2_I2CSOAR2_OAR2EN_EN         (0x00000001)
//--------

#define I2C2_I2CSOAR2_OAR2EN_BB     (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSOAR2_OFFSET)*32)+(7*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.21 I2CSACKCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CSACKCTL            (((I2CSACKCTL_TypeDef*)(I2C2_BASE + I2C_I2CSACKCTL_OFFSET )))
#define I2C2_I2CSACKCTL_R          (*((volatile uint32_t *)(I2C2_BASE +I2C_I2CSACKCTL_OFFSET)))

//--------
#define I2C2_I2CSACKCTL_R_ACKOEN_MASK       (0x00000001)
#define I2C2_I2CSACKCTL_R_ACKOEN_BIT        (0)
#define I2C2_I2CSACKCTL_R_ACKOEN_DIS        (0x00000000)
#define I2C2_I2CSACKCTL_R_ACKOEN_EN         (0x00000001)

#define I2C2_I2CSACKCTL_ACKOEN_MASK       (0x00000001)
#define I2C2_I2CSACKCTL_ACKOEN_DIS        (0x00000000)
#define I2C2_I2CSACKCTL_ACKOEN_EN         (0x00000001)
//--------

//--------
#define I2C2_I2CSACKCTL_R_ACKOVAL_MASK       (0x00000001)
#define I2C2_I2CSACKCTL_R_ACKOVAL_BIT        (0)
#define I2C2_I2CSACKCTL_R_ACKOVAL_VALID      (0x00000000)
#define I2C2_I2CSACKCTL_R_ACKOVAL_INVALID    (0x00000001)

#define I2C2_I2CSACKCTL_ACKOVAL_MASK       (0x00000001)
#define I2C2_I2CSACKCTL_ACKOVAL_VALID      (0x00000000)
#define I2C2_I2CSACKCTL_ACKOVAL_INVALID    (0x00000001)
//--------

#define I2C2_I2CSACKCTL_ACKOEN_BB     (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSACKCTL_OFFSET)*32)+(0*4))))
#define I2C2_I2CSACKCTL_ACKOVAL_BB    (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CSACKCTL_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.22 I2CPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CPP            (((I2CPP_TypeDef*)(I2C2_BASE + I2C_I2CPP_OFFSET )))
#define I2C2_I2CPP_R          (*((volatile const uint32_t *)(I2C2_BASE +I2C_I2CPP_OFFSET)))

//--------
#define I2C2_I2CPP_R_HS_MASK       (0x00000001)
#define I2C2_I2CPP_R_HS_BIT        (0)
#define I2C2_I2CPP_R_HS_STD        (0x00000000)
#define I2C2_I2CPP_R_HS_HS         (0x00000001)

#define I2C2_I2CPP_HS_MASK       (0x00000001)
#define I2C2_I2CPP_HS_STD        (0x00000000)
#define I2C2_I2CPP_HS_HS         (0x00000001)
//--------

#define I2C2_I2CPP_HS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CPP_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.23 I2CPC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C2_I2CPC            (((I2CPC_TypeDef*)(I2C2_BASE + I2C_I2CPC_OFFSET )))
#define I2C2_I2CPC_R          (*((volatile uint32_t *)(I2C2_BASE +I2C_I2CPC_OFFSET)))

//--------
#define I2C2_I2CPC_R_HS_MASK       (0x00000001)
#define I2C2_I2CPC_R_HS_BIT        (0)
#define I2C2_I2CPC_R_HS_STD        (0x00000000)
#define I2C2_I2CPC_R_HS_HS         (0x00000001)

#define I2C2_I2CPC_HS_MASK       (0x00000001)
#define I2C2_I2CPC_HS_STD        (0x00000000)
#define I2C2_I2CPC_HS_HS         (0x00000001)
//--------

#define I2C2_I2CPC_HS_BB     (*((volatile uint32_t *)(0x42000000+((I2C2_OFFSET+I2C_I2CPC_OFFSET)*32)+(0*4))))





// Todo I2C3

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 I2C3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.1 I2CMSA ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CMSA            (((I2CMSA_TypeDef*)(I2C3_BASE + I2C_I2CMSA_OFFSET )))
#define I2C3_I2CMSA_R          (*((volatile uint32_t *)(I2C3_BASE +I2C_I2CMSA_OFFSET)))

//--------
#define I2C3_I2CMSA_R_RS_MASK       (0x00000001)
#define I2C3_I2CMSA_R_RS_BIT        (0)
#define I2C3_I2CMSA_R_RS_TRANSMIT   (0x00000000)
#define I2C3_I2CMSA_R_RS_RECEIVE    (0x00000001)

#define I2C3_I2CMSA_RS_MASK         (0x00000001)
#define I2C3_I2CMSA_RS_TRANSMIST    (0x00000000)
#define I2C3_I2CMSA_RS_RECEIVE      (0x00000001)
//--------

//--------
#define I2C3_I2CMSA_R_SA_MASK       (0x000000FE)
#define I2C3_I2CMSA_R_SA_BIT        (1)

#define I2C3_I2CMSA_SA_MASK         (0x000000FE)
//--------

#define I2C3_I2CMSA_RS_BB     (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMSA_OFFSET)*32)+(0*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.2 I2CMCSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CMCSR            (((I2CMCSR_TypeDef*)(I2C3_BASE + I2C_I2CMCSR_OFFSET )))
#define I2C3_I2CMCSR_R          (*((volatile const uint32_t *)(I2C3_BASE +I2C_I2CMCSR_OFFSET)))

//--------
#define I2C3_I2CMCSR_R_BUSY_MASK       (0x00000001)
#define I2C3_I2CMCSR_R_BUSY_BIT        (0)
#define I2C3_I2CMCSR_R_BUSY_IDLE       (0x00000000)
#define I2C3_I2CMCSR_R_BUSY_BUSY       (0x00000001)

#define I2C3_I2CMCSR_BUSY_MASK         (0x00000001)
#define I2C3_I2CMCSR_BUSY_IDLE         (0x00000000)
#define I2C3_I2CMCSR_BUSY_BUSY         (0x00000001)
//--------

//--------
#define I2C3_I2CMCSR_R_ERROR_MASK       (0x00000002)
#define I2C3_I2CMCSR_R_ERROR_BIT        (1)
#define I2C3_I2CMCSR_R_ERROR_NOERROR    (0x00000000)
#define I2C3_I2CMCSR_R_ERROR_ERROR      (0x00000002)

#define I2C3_I2CMCSR_ERROR_MASK         (0x00000001)
#define I2C3_I2CMCSR_ERROR_NOERROR      (0x00000000)
#define I2C3_I2CMCSR_ERROR_ERROR        (0x00000001)
//--------

//--------
#define I2C3_I2CMCSR_R_ADRACK_MASK       (0x00000004)
#define I2C3_I2CMCSR_R_ADRACK_BIT        (2)
#define I2C3_I2CMCSR_R_ADRACK_NOACK      (0x00000000)
#define I2C3_I2CMCSR_R_ADRACK_ACK        (0x00000004)

#define I2C3_I2CMCSR_ADRACK_MASK         (0x00000001)
#define I2C3_I2CMCSR_ADRACK_NOACK        (0x00000000)
#define I2C3_I2CMCSR_ADRACK_ACK          (0x00000001)
//--------

//--------
#define I2C3_I2CMCSR_R_DATACK_MASK       (0x00000008)
#define I2C3_I2CMCSR_R_DATACK_BIT        (3)
#define I2C3_I2CMCSR_R_DATACK_NOACK      (0x00000000)
#define I2C3_I2CMCSR_R_DATACK_ACK        (0x00000008)

#define I2C3_I2CMCSR_DATACK_MASK         (0x00000001)
#define I2C3_I2CMCSR_DATACK_NOACK        (0x00000000)
#define I2C3_I2CMCSR_DATACK_ACK          (0x00000001)
//--------

//--------
#define I2C3_I2CMCSR_R_DATACK_MASK       (0x00000008)
#define I2C3_I2CMCSR_R_DATACK_BIT        (3)
#define I2C3_I2CMCSR_R_DATACK_NOACK      (0x00000000)
#define I2C3_I2CMCSR_R_DATACK_ACK        (0x00000008)

#define I2C3_I2CMCSR_DATACK_MASK         (0x00000001)
#define I2C3_I2CMCSR_DATACK_NOACK        (0x00000000)
#define I2C3_I2CMCSR_DATACK_ACK          (0x00000001)
//--------

//--------
#define I2C3_I2CMCSR_R_ARBLST_MASK       (0x00000010)
#define I2C3_I2CMCSR_R_ARBLST_BIT        (4)
#define I2C3_I2CMCSR_R_ARBLST_WON        (0x00000000)
#define I2C3_I2CMCSR_R_ARBLST_LOST       (0x00000010)

#define I2C3_I2CMCSR_ARBLST_MASK         (0x00000001)
#define I2C3_I2CMCSR_ARBLST_WON          (0x00000000)
#define I2C3_I2CMCSR_ARBLST_LOST         (0x00000001)
//--------

//--------
#define I2C3_I2CMCSR_R_IDLE_MASK       (0x00000020)
#define I2C3_I2CMCSR_R_IDLE_BIT        (5)
#define I2C3_I2CMCSR_R_IDLE_NOIDLE     (0x00000000)
#define I2C3_I2CMCSR_R_IDLE_IDLE       (0x00000020)

#define I2C3_I2CMCSR_IDLE_MASK         (0x00000001)
#define I2C3_I2CMCSR_IDLE_NOIDLE       (0x00000000)
#define I2C3_I2CMCSR_IDLE_IDLE         (0x00000001)
//--------

//--------
#define I2C3_I2CMCSR_R_BUSBSY_MASK       (0x00000040)
#define I2C3_I2CMCSR_R_BUSBSY_BIT        (6)
#define I2C3_I2CMCSR_R_BUSBSY_IDLE       (0x00000000)
#define I2C3_I2CMCSR_R_BUSBSY_BUSY       (0x00000040)

#define I2C3_I2CMCSR_BUSBSY_MASK         (0x00000001)
#define I2C3_I2CMCSR_BUSBSY_IDLE         (0x00000000)
#define I2C3_I2CMCSR_BUSBSY_BUSY         (0x00000001)
//--------

//--------
#define I2C3_I2CMCSR_R_CLKTO_MASK       (0x00000080)
#define I2C3_I2CMCSR_R_CLKTO_BIT        (7)
#define I2C3_I2CMCSR_R_CLKTO_NOERROR    (0x00000000)
#define I2C3_I2CMCSR_R_CLKTO_ERROR      (0x00000080)

#define I2C3_I2CMCSR_CLKTO_MASK         (0x00000001)
#define I2C3_I2CMCSR_CLKTO_NOERROR      (0x00000000)
#define I2C3_I2CMCSR_CLKTO_ERROR        (0x00000001)
//--------

#define I2C3_I2CMCSR_BUSY_BB        (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(0*4))))
#define I2C3_I2CMCSR_ERROR_BB       (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(1*4))))
#define I2C3_I2CMCSR_ADRACK_BB      (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(2*4))))
#define I2C3_I2CMCSR_DATACK_BB      (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(3*4))))
#define I2C3_I2CMCSR_ARBLST_BB      (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(4*4))))
#define I2C3_I2CMCSR_IDLE_BB        (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(5*4))))
#define I2C3_I2CMCSR_BUSBSY_BB      (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(6*4))))
#define I2C3_I2CMCSR_CLKTO_BB       (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMCSR_OFFSET)*32)+(7*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.2 I2CMCSW ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CMCSW            (((I2CMCSW_TypeDef*)(I2C3_BASE + I2C_I2CMCSW_OFFSET )))
#define I2C3_I2CMCSW_R          (*((volatile uint32_t *)(I2C3_BASE +I2C_I2CMCSW_OFFSET)))

//--------
#define I2C3_I2CMCSW_R_RUN_MASK       (0x00000001)
#define I2C3_I2CMCSW_R_RUN_BIT        (0)
#define I2C3_I2CMCSW_R_RUN_DIS        (0x00000000)
#define I2C3_I2CMCSW_R_RUN_EN         (0x00000001)

#define I2C3_I2CMCSW_RUN_MASK         (0x00000001)
#define I2C3_I2CMCSW_RUN_DIS          (0x00000000)
#define I2C3_I2CMCSW_RUN_EN           (0x00000001)
//--------

//--------
#define I2C3_I2CMCSW_R_START_MASK       (0x00000002)
#define I2C3_I2CMCSW_R_START_BIT        (1)
#define I2C3_I2CMCSW_R_START_DIS        (0x00000000)
#define I2C3_I2CMCSW_R_START_EN         (0x00000002)

#define I2C3_I2CMCSW_START_MASK         (0x00000001)
#define I2C3_I2CMCSW_START_DIS          (0x00000000)
#define I2C3_I2CMCSW_START_EN           (0x00000001)
//--------

//--------
#define I2C3_I2CMCSW_R_STOP_MASK       (0x00000004)
#define I2C3_I2CMCSW_R_STOP_BIT        (2)
#define I2C3_I2CMCSW_R_STOP_DIS        (0x00000000)
#define I2C3_I2CMCSW_R_STOP_EN         (0x00000004)

#define I2C3_I2CMCSW_STOP_MASK         (0x00000001)
#define I2C3_I2CMCSW_STOP_DIS          (0x00000000)
#define I2C3_I2CMCSW_STOP_EN           (0x00000001)
//--------

//--------
#define I2C3_I2CMCSW_R_ACK_MASK       (0x00000008)
#define I2C3_I2CMCSW_R_ACK_BIT        (3)
#define I2C3_I2CMCSW_R_ACK_DIS        (0x00000000)
#define I2C3_I2CMCSW_R_ACK_EN         (0x00000008)

#define I2C3_I2CMCSW_ACK_MASK         (0x00000001)
#define I2C3_I2CMCSW_ACK_DIS          (0x00000000)
#define I2C3_I2CMCSW_ACK_EN           (0x00000001)
//--------

//--------
#define I2C3_I2CMCSW_R_HS_MASK       (0x00000010)
#define I2C3_I2CMCSW_R_HS_BIT        (4)
#define I2C3_I2CMCSW_R_HS_DIS        (0x00000000)
#define I2C3_I2CMCSW_R_HS_EN         (0x00000010)

#define I2C3_I2CMCSW_HS_MASK         (0x00000001)
#define I2C3_I2CMCSW_HS_DIS          (0x00000000)
#define I2C3_I2CMCSW_HS_EN           (0x00000001)
//--------

#define I2C3_I2CMCSW_RUN_BB      (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(0*4))))
#define I2C3_I2CMCSW_START_BB    (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(1*4))))
#define I2C3_I2CMCSW_STOP_BB     (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(2*4))))
#define I2C3_I2CMCSW_ACK_BB      (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(3*4))))
#define I2C3_I2CMCSW_HS_BB       (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMCSW_OFFSET)*32)+(4*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.3 I2CMDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CMDR            (((I2CMDR_TypeDef*)(I2C3_BASE + I2C_I2CMDR_OFFSET )))
#define I2C3_I2CMDR_R          (*((volatile uint32_t *)(I2C3_BASE +I2C_I2CMDR_OFFSET)))

//--------
#define I2C3_I2CMDR_R_DATA_MASK       (0x000000FF)
#define I2C3_I2CMDR_R_DATA_BIT        (0)

#define I2C3_I2CMDR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.4 I2CMTPR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CMTPR            (((I2CMTPR_TypeDef*)(I2C3_BASE + I2C_I2CMTPR_OFFSET )))
#define I2C3_I2CMTPR_R          (*((volatile uint32_t *)(I2C3_BASE +I2C_I2CMTPR_OFFSET)))

//--------
#define I2C3_I2CMTPR_R_TPR_MASK       (0x0000007F)
#define I2C3_I2CMTPR_R_TPR_BIT        (0)

#define I2C3_I2CMTPR_TPR_MASK         (0x0000007F)
//--------

//--------
#define I2C3_I2CMTPR_R_HS_MASK       (0x00000080)
#define I2C3_I2CMTPR_R_HS_BIT        (7)
#define I2C3_I2CMTPR_R_HS_DIS        (0x00000000)
#define I2C3_I2CMTPR_R_HS_EN         (0x00000080)

#define I2C3_I2CMTPR_HS_MASK         (0x00000001)
#define I2C3_I2CMTPR_HS_DIS          (0x00000000)
#define I2C3_I2CMTPR_HS_EN           (0x00000001)
//--------

#define I2C3_I2CMTPR_HS_BB     (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMTPR_OFFSET)*32)+(7*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.5 I2CMIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CMIMR            (((I2CMIMR_TypeDef*)(I2C3_BASE + I2C_I2CMIMR_OFFSET )))
#define I2C3_I2CMIMR_R          (*((volatile uint32_t *)(I2C3_BASE +I2C_I2CMIMR_OFFSET)))

//--------
#define I2C3_I2CIMR_R_IM_MASK       (0x00000001)
#define I2C3_I2CIMR_R_IM_BIT        (0)
#define I2C3_I2CIMR_R_IM_DIS        (0x00000000)
#define I2C3_I2CIMR_R_IM_EN         (0x00000001)

#define I2C3_I2CIMR_IM_MASK       (0x00000001)
#define I2C3_I2CIMR_IM_DIS        (0x00000000)
#define I2C3_I2CIMR_IM_EN         (0x00000001)
//--------

//--------
#define I2C3_I2CIMR_R_CLKIM_MASK       (0x00000002)
#define I2C3_I2CIMR_R_CLKIM_BIT        (1)
#define I2C3_I2CIMR_R_CLKIM_DIS        (0x00000000)
#define I2C3_I2CIMR_R_CLKIM_EN         (0x00000002)

#define I2C3_I2CIMR_CLKIM_MASK       (0x00000001)
#define I2C3_I2CIMR_CLKIM_DIS        (0x00000000)
#define I2C3_I2CIMR_CLKIM_EN         (0x00000001)
//--------

#define I2C3_I2CMIMR_IM_BB     (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMIMR_OFFSET)*32)+(0*4))))
#define I2C3_I2CMIMR_CLKIM_BB  (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMIMR_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.6 I2CMRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CMRIS            (((I2CMRIS_TypeDef*)(I2C3_BASE + I2C_I2CMRIS_OFFSET )))
#define I2C3_I2CMRIS_R          (*((volatile const uint32_t *)(I2C3_BASE +I2C_I2CMRIS_OFFSET)))

//--------
#define I2C3_I2CMRIS_R_RIS_MASK       (0x00000001)
#define I2C3_I2CMRIS_R_RIS_BIT        (0)
#define I2C3_I2CMRIS_R_RIS_NOACTIVE   (0x00000000)
#define I2C3_I2CMRIS_R_RIS_ACTIVE     (0x00000001)

#define I2C3_I2CMRIS_RIS_MASK       (0x00000001)
#define I2C3_I2CMRIS_RIS_NOACTIVE   (0x00000000)
#define I2C3_I2CMRIS_RIS_ACTIVE     (0x00000001)
//--------

//--------
#define I2C3_I2CMRIS_R_CLKRIS_MASK       (0x00000002)
#define I2C3_I2CMRIS_R_CLKRIS_BIT        (1)
#define I2C3_I2CMRIS_R_CLKRIS_NOACTIVE   (0x00000000)
#define I2C3_I2CMRIS_R_CLKRIS_ACTIVE     (0x00000002)

#define I2C3_I2CMRIS_CLKRIS_MASK       (0x00000001)
#define I2C3_I2CMRIS_CLKRIS_NOACTIVE   (0x00000000)
#define I2C3_I2CMRIS_CLKRIS_ACTIVE     (0x00000001)
//--------

#define I2C3_I2CMRIS_RIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMRIS_OFFSET)*32)+(0*4))))
#define I2C3_I2CMRIS_CLKRIS_BB  (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMRIS_OFFSET)*32)+(1*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.7 I2CMMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CMMIS            (((I2CMMIS_TypeDef*)(I2C3_BASE + I2C_I2CMMIS_OFFSET )))
#define I2C3_I2CMMIS_R          (*((volatile const uint32_t *)(I2C3_BASE +I2C_I2CMMIS_OFFSET)))

//--------
#define I2C3_I2CMMIS_R_MIS_MASK       (0x00000001)
#define I2C3_I2CMMIS_R_MIS_BIT        (0)
#define I2C3_I2CMMIS_R_MIS_NOOCCUR    (0x00000000)
#define I2C3_I2CMMIS_R_MIS_OCCUR      (0x00000001)

#define I2C3_I2CMMIS_MIS_MASK       (0x00000001)
#define I2C3_I2CMMIS_MIS_NOOCCUR    (0x00000000)
#define I2C3_I2CMMIS_MIS_OCCUR      (0x00000001)
//--------

//--------
#define I2C3_I2CMMIS_R_CLKMIS_MASK       (0x00000002)
#define I2C3_I2CMMIS_R_CLKMIS_BIT        (1)
#define I2C3_I2CMMIS_R_CLKMIS_NOOCCUR    (0x00000000)
#define I2C3_I2CMMIS_R_CLKMIS_OCCUR      (0x00000002)

#define I2C3_I2CMMIS_CLKMIS_MASK       (0x00000001)
#define I2C3_I2CMMIS_CLKMIS_NOOCCUR    (0x00000000)
#define I2C3_I2CMMIS_CLKMIS_OCCUR      (0x00000001)
//--------

#define I2C3_I2CMMIS_MIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMMIS_OFFSET)*32)+(0*4))))
#define I2C3_I2CMMIS_CLKMIS_BB  (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMMIS_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.8 I2CMICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CMICR            (((I2CMICR_TypeDef*)(I2C3_BASE + I2C_I2CMICR_OFFSET )))
#define I2C3_I2CMICR_R          (*((volatile uint32_t *)(I2C3_BASE +I2C_I2CMICR_OFFSET)))

//--------
#define I2C3_I2CMICR_R_IC_MASK       (0x00000001)
#define I2C3_I2CMICR_R_IC_BIT        (0)
#define I2C3_I2CMICR_R_IC_CLEAR      (0x00000001)

#define I2C3_I2CMICR_IC_MASK       (0x00000001)
#define I2C3_I2CMICR_IC_CLEAR      (0x00000001)
//--------

//--------
#define I2C3_I2CMICR_R_CLKIC_MASK       (0x00000002)
#define I2C3_I2CMICR_R_CLKIC_BIT        (1)
#define I2C3_I2CMICR_R_CLKIC_CLEAR      (0x00000002)

#define I2C3_I2CMICR_CLKIC_MASK       (0x00000001)
#define I2C3_I2CMICR_CLKIC_CLEAR      (0x00000001)
//--------

#define I2C3_I2CMICR_IC_BB        (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMICR_OFFSET)*32)+(0*4))))
#define I2C3_I2CMICR_CLKIC_BB     (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMICR_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.9 I2CMCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CMCR            (((I2CMCR_TypeDef*)(I2C3_BASE + I2C_I2CMCR_OFFSET )))
#define I2C3_I2CMCR_R          (*((volatile uint32_t *)(I2C3_BASE +I2C_I2CMCR_OFFSET)))

//--------
#define I2C3_I2CMCR_R_LPBK_MASK       (0x00000001)
#define I2C3_I2CMCR_R_LPBK_BIT        (0)
#define I2C3_I2CMCR_R_LPBK_NORMAL     (0x00000000)
#define I2C3_I2CMCR_R_LPBK_LOOPBACK   (0x00000001)

#define I2C3_I2CMCR_LPBK_MASK       (0x00000001)
#define I2C3_I2CMCR_LPBK_NORMAL     (0x00000000)
#define I2C3_I2CMCR_LPBK_LOOPBACK   (0x00000001)
//--------

//--------
#define I2C3_I2CMCR_R_MFE_MASK       (0x00000010)
#define I2C3_I2CMCR_R_MFE_BIT        (4)
#define I2C3_I2CMCR_R_MFE_DIS        (0x00000000)
#define I2C3_I2CMCR_R_MFE_EN         (0x00000010)

#define I2C3_I2CMCR_MFE_MASK       (0x00000001)
#define I2C3_I2CMCR_MFE_DIS        (0x00000000)
#define I2C3_I2CMCR_MFE_EN         (0x00000001)
//--------

//--------
#define I2C3_I2CMCR_R_SFE_MASK       (0x00000020)
#define I2C3_I2CMCR_R_SFE_BIT        (5)
#define I2C3_I2CMCR_R_SFE_DIS        (0x00000000)
#define I2C3_I2CMCR_R_SFE_EN         (0x00000020)

#define I2C3_I2CMCR_SFE_MASK       (0x00000001)
#define I2C3_I2CMCR_SFE_DIS        (0x00000000)
#define I2C3_I2CMCR_SFE_EN         (0x00000001)
//--------

//--------
#define I2C3_I2CMCR_R_GFE_MASK       (0x00000040)
#define I2C3_I2CMCR_R_GFE_BIT        (6)
#define I2C3_I2CMCR_R_GFE_DIS        (0x00000000)
#define I2C3_I2CMCR_R_GFE_EN         (0x00000040)

#define I2C3_I2CMCR_GFE_MASK       (0x00000001)
#define I2C3_I2CMCR_GFE_DIS        (0x00000000)
#define I2C3_I2CMCR_GFE_EN         (0x00000001)
//--------)

#define I2C3_I2CMCR_LPBK_BB        (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMCR_OFFSET)*32)+(0*4))))
#define I2C3_I2CMCR_MFE_BB         (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMCR_OFFSET)*32)+(4*4))))
#define I2C3_I2CMCR_SFE_BB         (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMCR_OFFSET)*32)+(5*4))))
#define I2C3_I2CMCR_GFE_BB         (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMCR_OFFSET)*32)+(6*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.10 I2CMCLKOCNT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CMCLKOCNT            (((I2CMCLKOCNT_TypeDef*)(I2C3_BASE + I2C_I2CMCLKOCNT_OFFSET )))
#define I2C3_I2CMCLKOCNT_R          (*((volatile uint32_t *)(I2C3_BASE +I2C_I2CMCLKOCNT_OFFSET)))

//--------
#define I2C3_I2CMCLKOCNT_R_CNTL_MASK       (0x000000FF)
#define I2C3_I2CMCLKOCNT_R_CNTL_BIT        (0)

#define I2C3_I2CMCLKOCNT_CNTL_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.11 I2CMBMON ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CMBMON            (((I2CMBMON_TypeDef*)(I2C3_BASE + I2C_I2CMBMON_OFFSET )))
#define I2C3_I2CMBMON_R          (*((volatile const uint32_t *)(I2C3_BASE +I2C_I2CMBMON_OFFSET)))

//--------
#define I2C3_I2CMBMON_R_SCL_MASK       (0x00000001)
#define I2C3_I2CMBMON_R_SCL_BIT        (0)
#define I2C3_I2CMBMON_R_SCL_LOW        (0x00000000)
#define I2C3_I2CMBMON_R_SCL_HIGH       (0x00000001)

#define I2C3_I2CMBMON_SCL_MASK       (0x00000001)
#define I2C3_I2CMBMON_SCL_LOW        (0x00000000)
#define I2C3_I2CMBMON_SCL_HIGH       (0x00000001)
//--------

//--------
#define I2C3_I2CMBMON_R_SDA_MASK       (0x00000002)
#define I2C3_I2CMBMON_R_SDA_BIT        (1)
#define I2C3_I2CMBMON_R_SDA_LOW        (0x00000000)
#define I2C3_I2CMBMON_R_SDA_HIGH       (0x00000002)

#define I2C3_I2CMBMON_SDA_MASK       (0x00000001)
#define I2C3_I2CMBMON_SDA_LOW        (0x00000000)
#define I2C3_I2CMBMON_SDA_HIGH       (0x00000001)
//--------

#define I2C3_I2CMBMON_SCL_BB        (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMBMON_OFFSET)*32)+(0*4))))
#define I2C3_I2CMBMON_SDA_BB         (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CMBMON_OFFSET)*32)+(1*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.12 I2CMCR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CMCR2            (((I2CMCR2_TypeDef*)(I2C3_BASE + I2C_I2CMCR2_OFFSET )))
#define I2C3_I2CMCR2_R          (*((volatile uint32_t *)(I2C3_BASE +I2C_I2CMCR2_OFFSET)))


//--------
#define I2C3_I2CMCR2_R_GFPW_MASK       (0x000000E0)
#define I2C3_I2CMCR2_R_GFPW_BIT        (0)
#define I2C3_I2CMCR2_R_GFPW_BYPASS     (0x00000000)
#define I2C3_I2CMCR2_R_GFPW_1CLOCK     (0x00000020)
#define I2C3_I2CMCR2_R_GFPW_2CLOCK     (0x00000040)
#define I2C3_I2CMCR2_R_GFPW_3CLOCK     (0x00000060)
#define I2C3_I2CMCR2_R_GFPW_4CLOCK     (0x00000080)
#define I2C3_I2CMCR2_R_GFPW_8CLOCK     (0x00000090)
#define I2C3_I2CMCR2_R_GFPW_16CLOCK    (0x000000C0)
#define I2C3_I2CMCR2_R_GFPW_31CLOCK    (0x000000E0)

#define I2C3_I2CMCR2_GFPW_MASK         (0x00000007)
#define I2C3_I2CMCR2_GFPW_BYPASS       (0x00000000)
#define I2C3_I2CMCR2_GFPW_1CLOCK       (0x00000001)
#define I2C3_I2CMCR2_GFPW_2CLOCK       (0x00000002)
#define I2C3_I2CMCR2_GFPW_3CLOCK       (0x00000003)
#define I2C3_I2CMCR2_GFPW_4CLOCK       (0x00000004)
#define I2C3_I2CMCR2_GFPW_8CLOCK       (0x00000005)
#define I2C3_I2CMCR2_GFPW_16CLOCK      (0x00000006)
#define I2C3_I2CMCR2_GFPW_31CLOCK      (0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.13 I2CSOAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CSOAR            (((I2CSOAR_TypeDef*)(I2C3_BASE + I2C_I2CSOAR_OFFSET )))
#define I2C3_I2CSOAR_R          (*((volatile uint32_t *)(I2C3_BASE +I2C_I2CSOAR_OFFSET)))

//--------
#define I2C3_I2CSOAR_R_OAR_MASK       (0x0000007F)
#define I2C3_I2CSOAR_R_OAR_BIT        (0)

#define I2C3_I2CSOAR_OAR_MASK         (0x0000007F)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.14 I2CSCSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CSCSR            (((I2CSCSR_TypeDef*)(I2C3_BASE + I2C_I2CSCSR_OFFSET )))
#define I2C3_I2CSCSR_R          (*((volatile const uint32_t *)(I2C3_BASE +I2C_I2CSCSR_OFFSET)))

//--------
#define I2C3_I2CSCSR_R_RREQ_MASK       (0x00000001)
#define I2C3_I2CSCSR_R_RREQ_BIT        (0)
#define I2C3_I2CSCSR_R_RREQ_NOREQ      (0x00000000)
#define I2C3_I2CSCSR_R_RREQ_REQ        (0x00000001)

#define I2C3_I2CSCSR_RREQ_MASK       (0x00000001)
#define I2C3_I2CSCSR_RREQ_NOREQ      (0x00000000)
#define I2C3_I2CSCSR_RREQ_REQ        (0x00000001)
//--------

//--------
#define I2C3_I2CSCSR_R_TREQ_MASK       (0x00000002)
#define I2C3_I2CSCSR_R_TREQ_BIT        (1)
#define I2C3_I2CSCSR_R_TREQ_NOREQ      (0x00000000)
#define I2C3_I2CSCSR_R_TREQ_REQ        (0x00000002)

#define I2C3_I2CSCSR_TREQ_MASK       (0x00000001)
#define I2C3_I2CSCSR_TREQ_NOREQ      (0x00000000)
#define I2C3_I2CSCSR_TREQ_REQ        (0x00000001)
//--------

//--------
#define I2C3_I2CSCSR_R_FBR_MASK       (0x00000004)
#define I2C3_I2CSCSR_R_FBR_BIT        (2)
#define I2C3_I2CSCSR_R_FBR_NORECEIVE  (0x00000000)
#define I2C3_I2CSCSR_R_FBR_RECEVE     (0x00000004)

#define I2C3_I2CSCSR_FBR_MASK       (0x00000001)
#define I2C3_I2CSCSR_FBR_NORECEIVE  (0x00000000)
#define I2C3_I2CSCSR_FBR_RECEIVE    (0x00000001)
//--------

//--------
#define I2C3_I2CSCSR_R_OAR2SEL_MASK       (0x00000008)
#define I2C3_I2CSCSR_R_OAR2SEL_BIT        (3)
#define I2C3_I2CSCSR_R_OAR2SEL_DIS        (0x00000000)
#define I2C3_I2CSCSR_R_OAR2SEL_RECEVE     (0x00000008)

#define I2C3_I2CSCSR_OAR2SEL_MASK       (0x00000001)
#define I2C3_I2CSCSR_OAR2SEL_DIS        (0x00000000)
#define I2C3_I2CSCSR_OAR2SEL_EN         (0x00000001)
//--------

#define I2C3_I2CSCSR_RREQ_BB         (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSCSR_OFFSET)*32)+(0*4))))
#define I2C3_I2CSCSR_TREQ_BB         (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSCSR_OFFSET)*32)+(1*4))))
#define I2C3_I2CSCSR_FBR_BB          (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSCSR_OFFSET)*32)+(2*4))))
#define I2C3_I2CSCSR_OAR2SEL_BB      (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSCSR_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.14 I2CSCSRW ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CSCSRW            (((I2CSCSRW_TypeDef*)(I2C3_BASE + I2C_I2CSCSRW_OFFSET )))
#define I2C3_I2CSCSRW_R          (*((volatile uint32_t *)(I2C3_BASE +I2C_I2CSCSRW_OFFSET)))

//--------
#define I2C3_I2CSCSRW_R_DA_MASK       (0x00000001)
#define I2C3_I2CSCSRW_R_DA_BIT        (0)
#define I2C3_I2CSCSRW_R_DA_DIS        (0x00000000)
#define I2C3_I2CSCSRW_R_DA_EN         (0x00000001)

#define I2C3_I2CSCSRW_DA_MASK       (0x00000001)
#define I2C3_I2CSCSRW_DA_DIS        (0x00000000)
#define I2C3_I2CSCSRW_DA_EN         (0x00000001)
//--------

#define I2C3_I2CSCSRW_DA_BB         (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSCSRW_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.15 I2CSDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CSDR            (((I2CSDR_TypeDef*)(I2C3_BASE + I2C_I2CSDR_OFFSET )))
#define I2C3_I2CSDR_R          (*((volatile uint32_t *)(I2C3_BASE +I2C_I2CSDR_OFFSET)))

//--------
#define I2C3_I2CSDR_R_DATA_MASK       (0x000000FF)
#define I2C3_I2CSDR_R_DATA_BIT        (0)

#define I2C3_I2CSDR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.16 I2CSIMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CSIMR            (((I2CSIMR_TypeDef*)(I2C3_BASE + I2C_I2CSIMR_OFFSET )))
#define I2C3_I2CSIMR_R          (*((volatile uint32_t *)(I2C3_BASE +I2C_I2CSIMR_OFFSET)))

//--------
#define I2C3_I2CSIMR_R_DATAIM_MASK       (0x00000001)
#define I2C3_I2CSIMR_R_DATAIM_BIT        (0)
#define I2C3_I2CSIMR_R_DATAIM_DIS        (0x00000000)
#define I2C3_I2CSIMR_R_DATAIM_EN         (0x00000001)

#define I2C3_I2CSIMR_DATAIM_MASK       (0x00000001)
#define I2C3_I2CSIMR_DATAIM_DIS        (0x00000000)
#define I2C3_I2CSIMR_DATAIM_EN         (0x00000001)
//--------

//--------
#define I2C3_I2CSIMR_R_STARTIM_MASK       (0x00000002)
#define I2C3_I2CSIMR_R_STARTIM_BIT        (1)
#define I2C3_I2CSIMR_R_STARTIM_DIS        (0x00000000)
#define I2C3_I2CSIMR_R_STARTIM_EN         (0x00000002)

#define I2C3_I2CSIMR_STARTIM_MASK       (0x00000001)
#define I2C3_I2CSIMR_STARTIM_DIS        (0x00000000)
#define I2C3_I2CSIMR_STARTIM_EN         (0x00000001)
//--------

//--------
#define I2C3_I2CSIMR_R_STOPIM_MASK       (0x00000004)
#define I2C3_I2CSIMR_R_STOPIM_BIT        (2)
#define I2C3_I2CSIMR_R_STOPIM_DIS        (0x00000000)
#define I2C3_I2CSIMR_R_STOPIM_EN         (0x00000004)

#define I2C3_I2CSIMR_STOPIM_MASK       (0x00000001)
#define I2C3_I2CSIMR_STOPIM_DIS        (0x00000000)
#define I2C3_I2CSIMR_STOPIM_EN         (0x00000001)
//--------

#define I2C3_I2CSIMR_DATAIM_BB     (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSIMR_OFFSET)*32)+(0*4))))
#define I2C3_I2CSIMR_STARTIM_BB    (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSIMR_OFFSET)*32)+(1*4))))
#define I2C3_I2CSIMR_STOPIM_BB     (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSIMR_OFFSET)*32)+(2*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.17 I2CSRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CSRIS            (((I2CSRIS_TypeDef*)(I2C3_BASE + I2C_I2CSRIS_OFFSET )))
#define I2C3_I2CSRIS_R          (*((volatile const uint32_t *)(I2C3_BASE +I2C_I2CSRIS_OFFSET)))
#define I2C3_I2CSIMR_R          (*((volatile uint32_t *)(I2C3_BASE +I2C_I2CSIMR_OFFSET)))

//--------
#define I2C3_I2CSRIS_R_DATARIS_MASK       (0x00000001)
#define I2C3_I2CSRIS_R_DATARIS_BIT        (0)
#define I2C3_I2CSRIS_R_DATARIS_NOACTIVE   (0x00000000)
#define I2C3_I2CSRIS_R_DATARIS_ACTIVE     (0x00000001)

#define I2C3_I2CSRIS_DATARIS_MASK       (0x00000001)
#define I2C3_I2CSRIS_DATARIS_NOACTIVE   (0x00000000)
#define I2C3_I2CSRIS_DATARIS_ACTIVE     (0x00000001)
//--------

//--------
#define I2C3_I2CSRIS_R_STARTRIS_MASK       (0x00000002)
#define I2C3_I2CSRIS_R_STARTRIS_BIT        (1)
#define I2C3_I2CSRIS_R_STARTRIS_NOACTIVE   (0x00000000)
#define I2C3_I2CSRIS_R_STARTRIS_ACTIVE     (0x00000002)

#define I2C3_I2CSRIS_STARTRIS_MASK       (0x00000001)
#define I2C3_I2CSRIS_STARTRIS_NOACTIVE   (0x00000000)
#define I2C3_I2CSRIS_STARTRIS_ACTIVE     (0x00000001)
//--------

//--------
#define I2C3_I2CSRIS_R_STOPRIS_MASK       (0x00000004)
#define I2C3_I2CSRIS_R_STOPRIS_BIT        (2)
#define I2C3_I2CSRIS_R_STOPRIS_NOACTIVE   (0x00000000)
#define I2C3_I2CSRIS_R_STOPRIS_ACTIVE     (0x00000004)

#define I2C3_I2CSRIS_STOPRIS_MASK       (0x00000001)
#define I2C3_I2CSRIS_STOPRIS_NOACTIVE   (0x00000000)
#define I2C3_I2CSRIS_STOPRIS_ACTIVE     (0x00000001)
//--------
#define I2C3_I2CSRIS_DATARIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSRIS_OFFSET)*32)+(0*4))))
#define I2C3_I2CSRIS_STARTRIS_BB    (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSRIS_OFFSET)*32)+(1*4))))
#define I2C3_I2CSRIS_STOPRIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSRIS_OFFSET)*32)+(2*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.18 I2CSMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CSMIS            (((I2CSMIS_TypeDef*)(I2C3_BASE + I2C_I2CSMIS_OFFSET )))
#define I2C3_I2CSMIS_R          (*((volatile const uint32_t *)(I2C3_BASE +I2C_I2CSMIS_OFFSET)))

//--------
#define I2C3_I2CSMIS_R_DATAMIS_MASK       (0x00000001)
#define I2C3_I2CSMIS_R_DATAMIS_BIT        (0)
#define I2C3_I2CSMIS_R_DATAMIS_NOOCCUR    (0x00000000)
#define I2C3_I2CSMIS_R_DATAMIS_OCCUR      (0x00000001)

#define I2C3_I2CSMIS_DATAMIS_MASK       (0x00000001)
#define I2C3_I2CSMIS_DATAMIS_NOOCCUR    (0x00000000)
#define I2C3_I2CSMIS_DATAMIS_OCCUR      (0x00000001)
//--------

//--------
#define I2C3_I2CSMIS_R_STARTMIS_MASK       (0x00000002)
#define I2C3_I2CSMIS_R_STARTMIS_BIT        (1)
#define I2C3_I2CSMIS_R_STARTMIS_NOOCCUR    (0x00000000)
#define I2C3_I2CSMIS_R_STARTMIS_OCCUR      (0x00000002)

#define I2C3_I2CSMIS_STARTMIS_MASK       (0x00000001)
#define I2C3_I2CSMIS_STARTMIS_NOOCCUR    (0x00000000)
#define I2C3_I2CSMIS_STARTMIS_OCCUR      (0x00000001)
//--------

//--------
#define I2C3_I2CSMIS_R_STOPMIS_MASK       (0x00000004)
#define I2C3_I2CSMIS_R_STOPMIS_BIT        (2)
#define I2C3_I2CSMIS_R_STOPMIS_NOOCCUR    (0x00000000)
#define I2C3_I2CSMIS_R_STOPMIS_OCCUR      (0x00000004)

#define I2C3_I2CSMIS_STOPMIS_MASK       (0x00000001)
#define I2C3_I2CSMIS_STOPMIS_NOOCCUR    (0x00000000)
#define I2C3_I2CSMIS_STOPMIS_OCCUR      (0x00000001)
//--------

#define I2C3_I2CSMIS_DATAMIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSMIS_OFFSET)*32)+(0*4))))
#define I2C3_I2CSMIS_STARTMIS_BB    (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSMIS_OFFSET)*32)+(1*4))))
#define I2C3_I2CSMIS_STOPMIS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSMIS_OFFSET)*32)+(2*4))))




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.19 I2CSICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CSICR            (((I2CSICR_TypeDef*)(I2C3_BASE + I2C_I2CSICR_OFFSET )))
#define I2C3_I2CSICR_R          (*((volatile uint32_t *)(I2C3_BASE +I2C_I2CSICR_OFFSET)))

//--------
#define I2C3_I2CSICR_R_DATAIC_MASK       (0x00000001)
#define I2C3_I2CSICR_R_DATAIC_BIT        (0)
#define I2C3_I2CSICR_R_DATAIC_CLEAR      (0x00000001)

#define I2C3_I2CSICR_DATAIC_MASK       (0x00000001)
#define I2C3_I2CSICR_DATAIC_CLEAR      (0x00000001)
//--------

//--------
#define I2C3_I2CSICR_R_STARTIC_MASK       (0x00000002)
#define I2C3_I2CSICR_R_STARTIC_BIT        (1)
#define I2C3_I2CSICR_R_STARTIC_CLEAR      (0x00000002)

#define I2C3_I2CSICR_STARTIC_MASK       (0x00000001)
#define I2C3_I2CSICR_STARTIC_CLEAR      (0x00000001)
//--------

//--------
#define I2C3_I2CSICR_R_STOPIC_MASK       (0x00000004)
#define I2C3_I2CSICR_R_STOPIC_BIT        (2)
#define I2C3_I2CSICR_R_STOPIC_CLEAR      (0x00000004)

#define I2C3_I2CSICR_STOPIC_MASK       (0x00000001)
#define I2C3_I2CSICR_STOPIC_CLEAR      (0x00000001)
//--------

#define I2C3_I2CSICR_DATAICR_BB     (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSICR_OFFSET)*32)+(0*4))))
#define I2C3_I2CSICR_STARTICR_BB    (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSICR_OFFSET)*32)+(1*4))))
#define I2C3_I2CSICR_STOPICR_BB     (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSICR_OFFSET)*32)+(2*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.20 I2CSOAR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CSOAR2            (((I2CSOAR2_TypeDef*)(I2C3_BASE + I2C_I2CSOAR2_OFFSET )))
#define I2C3_I2CSOAR2_R          (*((volatile uint32_t *)(I2C3_BASE +I2C_I2CSOAR2_OFFSET)))

//--------
#define I2C3_I2CSOAR2_R_OAR2_MASK       (0x0000007F)
#define I2C3_I2CSOAR2_R_OAR2_BIT        (0)

#define I2C3_I2CSOAR2_OAR2_MASK         (0x0000007F)
//--------

//--------
#define I2C3_I2CSOAR2_R_OAR2EN_MASK       (0x00000080)
#define I2C3_I2CSOAR2_R_OAR2EN_BIT        (7)
#define I2C3_I2CSOAR2_R_OAR2EN_DIS        (0x00000000)
#define I2C3_I2CSOAR2_R_OAR2EN_EN         (0x00000080)

#define I2C3_I2CSOAR2_OAR2EN_MASK       (0x00000001)
#define I2C3_I2CSOAR2_OAR2EN_DIS        (0x00000000)
#define I2C3_I2CSOAR2_OAR2EN_EN         (0x00000001)
//--------

#define I2C3_I2CSOAR2_OAR2EN_BB     (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSOAR2_OFFSET)*32)+(7*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.21 I2CSACKCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CSACKCTL            (((I2CSACKCTL_TypeDef*)(I2C3_BASE + I2C_I2CSACKCTL_OFFSET )))
#define I2C3_I2CSACKCTL_R          (*((volatile uint32_t *)(I2C3_BASE +I2C_I2CSACKCTL_OFFSET)))

//--------
#define I2C3_I2CSACKCTL_R_ACKOEN_MASK       (0x00000001)
#define I2C3_I2CSACKCTL_R_ACKOEN_BIT        (0)
#define I2C3_I2CSACKCTL_R_ACKOEN_DIS        (0x00000000)
#define I2C3_I2CSACKCTL_R_ACKOEN_EN         (0x00000001)

#define I2C3_I2CSACKCTL_ACKOEN_MASK       (0x00000001)
#define I2C3_I2CSACKCTL_ACKOEN_DIS        (0x00000000)
#define I2C3_I2CSACKCTL_ACKOEN_EN         (0x00000001)
//--------

//--------
#define I2C3_I2CSACKCTL_R_ACKOVAL_MASK       (0x00000001)
#define I2C3_I2CSACKCTL_R_ACKOVAL_BIT        (0)
#define I2C3_I2CSACKCTL_R_ACKOVAL_VALID      (0x00000000)
#define I2C3_I2CSACKCTL_R_ACKOVAL_INVALID    (0x00000001)

#define I2C3_I2CSACKCTL_ACKOVAL_MASK       (0x00000001)
#define I2C3_I2CSACKCTL_ACKOVAL_VALID      (0x00000000)
#define I2C3_I2CSACKCTL_ACKOVAL_INVALID    (0x00000001)
//--------

#define I2C3_I2CSACKCTL_ACKOEN_BB     (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSACKCTL_OFFSET)*32)+(0*4))))
#define I2C3_I2CSACKCTL_ACKOVAL_BB    (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CSACKCTL_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.22 I2CPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CPP            (((I2CPP_TypeDef*)(I2C3_BASE + I2C_I2CPP_OFFSET )))
#define I2C3_I2CPP_R          (*((volatile const uint32_t *)(I2C3_BASE +I2C_I2CPP_OFFSET)))

//--------
#define I2C3_I2CPP_R_HS_MASK       (0x00000001)
#define I2C3_I2CPP_R_HS_BIT        (0)
#define I2C3_I2CPP_R_HS_STD        (0x00000000)
#define I2C3_I2CPP_R_HS_HS         (0x00000001)

#define I2C3_I2CPP_HS_MASK       (0x00000001)
#define I2C3_I2CPP_HS_STD        (0x00000000)
#define I2C3_I2CPP_HS_HS         (0x00000001)
//--------

#define I2C3_I2CPP_HS_BB     (*((volatile const uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CPP_OFFSET)*32)+(0*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.23 I2CPC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define I2C3_I2CPC            (((I2CPC_TypeDef*)(I2C3_BASE + I2C_I2CPC_OFFSET )))
#define I2C3_I2CPC_R          (*((volatile uint32_t *)(I2C3_BASE +I2C_I2CPC_OFFSET)))

//--------
#define I2C3_I2CPC_R_HS_MASK       (0x00000001)
#define I2C3_I2CPC_R_HS_BIT        (0)
#define I2C3_I2CPC_R_HS_STD        (0x00000000)
#define I2C3_I2CPC_R_HS_HS         (0x00000001)

#define I2C3_I2CPC_HS_MASK       (0x00000001)
#define I2C3_I2CPC_HS_STD        (0x00000000)
#define I2C3_I2CPC_HS_HS         (0x00000001)
//--------

#define I2C3_I2CPC_HS_BB     (*((volatile uint32_t *)(0x42000000+((I2C3_OFFSET+I2C_I2CPC_OFFSET)*32)+(0*4))))



//todo functions

void I2C0_Init(uint32_t frec);
int8_t I2C0_add(int8_t dir);
int32_t I2C0_WriteByte(uint8_t data, uint8_t address);
int32_t I2C0_WriteByteNoStop(uint8_t data, uint8_t address);
int32_t I2C0_ReadByte(uint8_t* data, uint8_t address);
int32_t I2C0_ReadByteNoStop(uint8_t* data, uint8_t address);
int32_t I2C0_Write(uint8_t* data, int32_t number, uint8_t address);
int32_t I2C0_Read(uint8_t* data, int32_t number, uint8_t address);
int32_t I2C0_WriteNoStop(uint8_t* data, int32_t number, uint8_t address);
int32_t I2C0_ReadNoStop(uint8_t* data, int32_t number, uint8_t address);
int32_t I2C0_WriteRead(uint8_t* dataTx, int32_t numberTx,uint8_t* dataRx, int32_t numberRx, uint8_t address);
int32_t I2C0_ReadWrite(uint8_t* dataTx, int32_t numberTx,uint8_t* dataRx, int32_t numberRx, uint8_t address);


void I2C1_Init(uint32_t frec);
int8_t I2C1_add(int8_t dir);
int32_t I2C1_WriteByte(uint8_t data, uint8_t address);
int32_t I2C1_WriteByteNoStop(uint8_t data, uint8_t address);
int32_t I2C1_ReadByte(uint8_t* data, uint8_t address);
int32_t I2C1_ReadByteNoStop(uint8_t* data, uint8_t address);
int32_t I2C1_Write(uint8_t* data, int32_t number, uint8_t address);
int32_t I2C1_Read(uint8_t* data, int32_t number, uint8_t address);
int32_t I2C1_WriteNoStop(uint8_t* data, int32_t number, uint8_t address);
int32_t I2C1_ReadNoStop(uint8_t* data, int32_t number, uint8_t address);
int32_t I2C1_WriteRead(uint8_t* dataTx, int32_t numberTx,uint8_t* dataRx, int32_t numberRx, uint8_t address);
int32_t I2C1_ReadWrite(uint8_t* dataTx, int32_t numberTx,uint8_t* dataRx, int32_t numberRx, uint8_t address);


void I2C2_Init(uint32_t frec);
int8_t I2C2_add(int8_t dir);
int32_t I2C2_WriteByte(uint8_t data, uint8_t address);
int32_t I2C2_WriteByteNoStop(uint8_t data, uint8_t address);
int32_t I2C2_ReadByte(uint8_t* data, uint8_t address);
int32_t I2C2_ReadByteNoStop(uint8_t* data, uint8_t address);
int32_t I2C2_Write(uint8_t* data, int32_t number, uint8_t address);
int32_t I2C2_Read(uint8_t* data, int32_t number, uint8_t address);
int32_t I2C2_WriteNoStop(uint8_t* data, int32_t number, uint8_t address);
int32_t I2C2_ReadNoStop(uint8_t* data, int32_t number, uint8_t address);
int32_t I2C2_WriteRead(uint8_t* dataTx, int32_t numberTx,uint8_t* dataRx, int32_t numberRx, uint8_t address);
int32_t I2C2_ReadWrite(uint8_t* dataTx, int32_t numberTx,uint8_t* dataRx, int32_t numberRx, uint8_t address);

void I2C3_Init(uint32_t frec);
int8_t I2C3_add(int8_t dir);
int32_t I2C3_WriteByte(uint8_t data, uint8_t address);
int32_t I2C3_WriteByteNoStop(uint8_t data, uint8_t address);
int32_t I2C3_ReadByte(uint8_t* data, uint8_t address);
int32_t I2C3_ReadByteNoStop(uint8_t* data, uint8_t address);
int32_t I2C3_Write(uint8_t* data, int32_t number, uint8_t address);
int32_t I2C3_Read(uint8_t* data, int32_t number, uint8_t address);
int32_t I2C3_WriteNoStop(uint8_t* data, int32_t number, uint8_t address);
int32_t I2C3_ReadNoStop(uint8_t* data, int32_t number, uint8_t address);
int32_t I2C3_WriteRead(uint8_t* dataTx, int32_t numberTx,uint8_t* dataRx, int32_t numberRx, uint8_t address);
int32_t I2C3_ReadWrite(uint8_t* dataTx, int32_t numberTx,uint8_t* dataRx, int32_t numberRx, uint8_t address);


void I2C0Handler(void);
void I2C1Handler(void);
void I2C2Handler(void);
void I2C3Handler(void);

#endif /* I2C_H_ */
