/*
 * SPI.h
 *
 *  Created on: 13 mar. 2018
 *      Author: InDev
 */

#ifndef SSI_H_
#define SSI_H_


#include "SYSCTL.h"
#include "GPIO.h"
#include "NVIC.h"
#include <stdint.h>


#define SSI_BASE            (0x40008000)
#define SSI_OFFSET          (0x00008000)

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// SSI ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

typedef volatile struct
{
    volatile uint32_t DSS      : 4;
    volatile uint32_t FRF      : 2;
    volatile uint32_t SPO      : 1;
    volatile uint32_t SPH      : 1;
    volatile uint32_t SCR      : 8;
    const    uint32_t reserved : 16;
}SSICR0_TypeDef;

typedef volatile struct
{
    volatile uint32_t LBM      : 1;
    volatile uint32_t SSE      : 1;
    volatile uint32_t MS       : 1;
    const    uint32_t reserved : 1;
    volatile uint32_t EOT      : 1;
    const    uint32_t reserved1: 27;
}SSICR1_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA     : 16;
    const    uint32_t reserved : 16;
}SSIDR_TypeDef;


typedef volatile struct
{
    volatile const uint32_t TFE        : 1;
    volatile const uint32_t TNF        : 1;
    volatile const uint32_t RNE        : 1;
    volatile const uint32_t RFF        : 1;
    volatile const uint32_t BSY        : 1;
    const    uint32_t       reserved   : 27;
}SSISR_TypeDef;

typedef volatile struct
{
    volatile uint32_t CPSDVSR  : 8;
    const    uint32_t reserved : 24;
}SSICPSR_TypeDef;


typedef volatile struct
{
    volatile uint32_t RORIM    : 1;
    volatile uint32_t RTIM     : 1;
    volatile uint32_t RXIM     : 1;
    volatile uint32_t TXIM     : 1;
    const    uint32_t reserved : 28;
}SSIIM_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RORRIS    : 1;
    volatile const uint32_t RTRIS     : 1;
    volatile const uint32_t RXRIS     : 1;
    volatile const uint32_t TXRIS     : 1;
    const    uint32_t       reserved  : 28;
}SSIRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RORMIS    : 1;
    volatile const uint32_t RTMIS     : 1;
    volatile const uint32_t RXMIS     : 1;
    volatile const uint32_t TXMIS     : 1;
    const    uint32_t       reserved  : 28;
}SSIMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t RORIC    : 1;
    volatile uint32_t RTIC     : 1;
    const    uint32_t reserved : 30;
}SSIICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t RXDMAE     : 1;
    volatile uint32_t TXDMAE     : 1;
    const    uint32_t reserved   : 30;
}SSIDMACTL_TypeDef;


typedef volatile struct
{
    volatile uint32_t CS       : 4;
    const    uint32_t reserved : 28;
}SSICC_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID4    : 8;
    const    uint32_t       reserved: 24;
}SSIPeriphID4_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID5    : 8;
    const    uint32_t       reserved: 24;
}SSIPeriphID5_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID6    : 8;
    const    uint32_t       reserved: 24;
}SSIPeriphID6_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID7    : 8;
    const    uint32_t       reserved: 24;
}SSIPeriphID7_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID0    : 8;
    const    uint32_t       reserved: 24;
}SSIPeriphID0_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID1    : 8;
    const    uint32_t       reserved: 24;
}SSIPeriphID1_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID2    : 8;
    const    uint32_t       reserved: 24;
}SSIPeriphID2_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID3    : 8;
    const    uint32_t       reserved: 24;
}SSIPeriphID3_TypeDef;


typedef volatile struct
{
    volatile uint32_t CID0     : 8;
    const    uint32_t reserved : 24;
}SSIPCellID0_TypeDef;

typedef volatile struct
{
    volatile uint32_t CID1     : 8;
    const    uint32_t reserved : 24;
}SSIPCellID1_TypeDef;

typedef volatile struct
{
    volatile uint32_t CID2     : 8;
    const    uint32_t reserved : 24;
}SSIPCellID2_TypeDef;

typedef volatile struct
{
    volatile uint32_t CID3     : 8;
    const    uint32_t reserved : 24;
}SSIPCellID3_TypeDef;

typedef volatile struct
{
    union
    {
        volatile uint32_t          SSICR0;
        volatile SSICR0_TypeDef         SSICR0_Bit;
    };
    union
    {
        volatile uint32_t          SSICR1;
        volatile SSICR1_TypeDef         SSICR1_Bit;
    };
    union
    {
        volatile uint32_t          SSIDR;
        volatile SSIDR_TypeDef          SSIDR_Bit;
    };
    union
    {
        volatile const uint32_t    SSISR;
        volatile SSISR_TypeDef          SSISR_Bit;
    };
    union
    {
        volatile uint32_t          SSICPSR;
        volatile SSICPSR_TypeDef        SSICPSR_Bit;
    };
    union
    {
        volatile uint32_t          SSIIM;
        volatile SSIIM_TypeDef          SSIIM_Bit;
    };
    union
    {
        volatile const uint32_t    SSIRIS;
        volatile SSIRIS_TypeDef         SSIRIS_Bit;
    };
    union
    {
        volatile const uint32_t    SSIMIS;
        volatile SSIMIS_TypeDef         SSIMIS_Bit;
    };
    union
    {
        volatile uint32_t          SSIICR;
        volatile SSIICR_TypeDef         SSIICR_Bit;
    };
    union
    {
        volatile uint32_t          SSIDMACTL;
        volatile SSIDMACTL_TypeDef      SSIDMACTL_Bit;
    };

    const uint32_t                 reserved[1000];
    union
    {
        volatile uint32_t          SSICC;
        volatile SSICC_TypeDef          SSICC_Bit;
    };
    const uint32_t                 reserved1;
    union
    {
        volatile const uint32_t    SSIPeriphID4;
        volatile SSIPeriphID4_TypeDef   SSIPeriphID4_Bit;
    };
    union
    {
        volatile const uint32_t    SSIPeriphID5;
        volatile SSIPeriphID5_TypeDef   SSIPeriphID5_Bit;
    };
    union
    {
        volatile const uint32_t    SSIPeriphID6;
        volatile SSIPeriphID6_TypeDef   SSIPeriphID6_Bit;
    };
    union
    {
        volatile const uint32_t    SSIPeriphID7;
        volatile SSIPeriphID7_TypeDef   SSIPeriphID7_Bit;
    };
    union
    {
        volatile const uint32_t    SSIPeriphID0;
        volatile SSIPeriphID0_TypeDef   SSIPeriphID0_Bit;
    };
    union
    {
        volatile const uint32_t    SSIPeriphID1;
        volatile SSIPeriphID1_TypeDef   SSIPeriphID1_Bit;
    };
    union
    {
        volatile const uint32_t    SSIPeriphID2;
        volatile SSIPeriphID2_TypeDef   SSIPeriphID2_Bit;
    };
    union
    {
        volatile const uint32_t    SSIPeriphID3;
        volatile SSIPeriphID3_TypeDef   SSIPeriphID3_Bit;
    };
    union
    {
        volatile const uint32_t    SSIPCellID0;
        volatile SSIPCellID0_TypeDef    SSIPCellID0_Bit;
    };
    union
    {
        volatile const uint32_t    SSIPCellID1;
        volatile SSIPCellID1_TypeDef    SSIPCellID1_Bit;
    };
    union
    {
        volatile const uint32_t    SSIPCellID2;
        volatile SSIPCellID2_TypeDef    SSIPCellID2_Bit;
    };
    union
    {
        volatile const uint32_t    SSIPCellID3;
        volatile SSIPCellID3_TypeDef    SSIPCellID3_Bit;
    };
}SSI_TypeDef;

typedef volatile struct
{
volatile SSI_TypeDef S[7];
}SSIS_TypeDef;




#define SSI0_BASE         (0x40008000)
#define SSI0_OFFSET       (0x00008000)
#define SSI1_BASE         (0x40009000)
#define SSI1_OFFSET       (0x00009000)
#define SSI2_BASE         (0x4000A000)
#define SSI2_OFFSET       (0x0000A000)
#define SSI3_BASE         (0x4000B000)
#define SSI3_OFFSET       (0x0000B000)


#define SSI               (((SSIS_TypeDef*)(SSI_BASE)))
#define SSI0              (((SSI_TypeDef*)(SSI0_BASE)))
#define SSI1              (((SSI_TypeDef*)(SSI1_BASE)))
#define SSI2              (((SSI_TypeDef*)(SSI2_BASE)))
#define SSI3              (((SSI_TypeDef*)(SSI3_BASE)))


#define SSI_SSICR0_OFFSET       (0x0000)
#define SSI_SSICR1_OFFSET       (0x0004)
#define SSI_SSIDR_OFFSET        (0x0008)
#define SSI_SSISR_OFFSET        (0x000C)
#define SSI_SSICPSR_OFFSET      (0x0010)
#define SSI_SSIIM_OFFSET        (0x0014)
#define SSI_SSIRIS_OFFSET       (0x0018)
#define SSI_SSIMIS_OFFSET       (0x001C)
#define SSI_SSIICR_OFFSET       (0x0020)
#define SSI_SSIDMACTL_OFFSET    (0x0024)
#define SSI_SSICC_OFFSET        (0x0FC8)
#define SSI_SSIPeriphID4_OFFSET (0x0FD0)
#define SSI_SSIPeriphID5_OFFSET (0x0FD4)
#define SSI_SSIPeriphID6_OFFSET (0x0FD8)
#define SSI_SSIPeriphID7_OFFSET (0x0FDC)
#define SSI_SSIPeriphID0_OFFSET (0x0FE0)
#define SSI_SSIPeriphID1_OFFSET (0x0FE4)
#define SSI_SSIPeriphID2_OFFSET (0x0FE8)
#define SSI_SSIPeriphID3_OFFSET (0x0FEC)
#define SSI_SSIPCellID0_OFFSET  (0x0FF0)
#define SSI_SSIPCellID1_OFFSET  (0x0FF4)
#define SSI_SSIPCellID2_OFFSET  (0x0FF8)
#define SSI_SSIPCellID3_OFFSET  (0x0FFC)


// todo SSI0

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0 SSI0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.1 SSICR0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSICR0            (((SSICR0_TypeDef*)(SSI0_BASE + SSI_SSICR0_OFFSET )))
#define SSI0_SSICR0_R          (*((volatile uint32_t *)(SSI0_BASE +SSI_SSICR0_OFFSET)))


//--------
#define SSI0_SSICR0_R_DSS_MASK       (0x0000000F)
#define SSI0_SSICR0_R_DSS_BIT        (0)
#define SSI0_SSICR0_R_DSS_4BTIS      (0x00000003)
#define SSI0_SSICR0_R_DSS_5BTIS      (0x00000004)
#define SSI0_SSICR0_R_DSS_6BTIS      (0x00000005)
#define SSI0_SSICR0_R_DSS_7BTIS      (0x00000006)
#define SSI0_SSICR0_R_DSS_8BTIS      (0x00000007)
#define SSI0_SSICR0_R_DSS_9BTIS      (0x00000008)
#define SSI0_SSICR0_R_DSS_10BTIS     (0x00000009)
#define SSI0_SSICR0_R_DSS_11BTIS     (0x0000000A)
#define SSI0_SSICR0_R_DSS_12BTIS     (0x0000000B)
#define SSI0_SSICR0_R_DSS_13BTIS     (0x0000000C)
#define SSI0_SSICR0_R_DSS_14BTIS     (0x0000000D)
#define SSI0_SSICR0_R_DSS_15BTIS     (0x0000000E)
#define SSI0_SSICR0_R_DSS_16BTIS     (0x0000000F)

#define SSI0_SSICR0_DSS_MASK         (0x00000001)
#define SSI0_SSICR0_DSS_4BTIS        (0x00000003)
#define SSI0_SSICR0_DSS_5BTIS        (0x00000004)
#define SSI0_SSICR0_DSS_6BTIS        (0x00000005)
#define SSI0_SSICR0_DSS_7BTIS        (0x00000006)
#define SSI0_SSICR0_DSS_8BTIS        (0x00000007)
#define SSI0_SSICR0_DSS_9BTIS        (0x00000008)
#define SSI0_SSICR0_DSS_10BTIS       (0x00000009)
#define SSI0_SSICR0_DSS_11BTIS       (0x0000000A)
#define SSI0_SSICR0_DSS_12BTIS       (0x0000000B)
#define SSI0_SSICR0_DSS_13BTIS       (0x0000000C)
#define SSI0_SSICR0_DSS_14BTIS       (0x0000000D)
#define SSI0_SSICR0_DSS_15BTIS       (0x0000000E)
#define SSI0_SSICR0_DSS_16BTIS       (0x0000000F)
//--------

//--------
#define SSI0_SSICR0_R_FRF_MASK       (0x00000030)
#define SSI0_SSICR0_R_FRF_BIT        (4)
#define SSI0_SSICR0_R_FRF_FREESCALE  (0x00000000)
#define SSI0_SSICR0_R_FRF_TEXAS      (0x00000010)
#define SSI0_SSICR0_R_FRF_MICROWIRE  (0x00000020)

#define SSI0_SSICR0_FRF_MASK         (0x00000003)
#define SSI0_SSICR0_FRF_FREESCALE    (0x00000000)
#define SSI0_SSICR0_FRF_TEXAS        (0x00000001)
#define SSI0_SSICR0_FRF_MICROWIRE    (0x00000002)
//--------

//--------
#define SSI0_SSICR0_R_SPO_MASK       (0x00000040)
#define SSI0_SSICR0_R_SPO_BIT        (6)
#define SSI0_SSICR0_R_SPO_LOW        (0x00000000)
#define SSI0_SSICR0_R_SPO_HIGH       (0x00000040)

#define SSI0_SSICR0_SPO_MASK         (0x00000001)
#define SSI0_SSICR0_SPO_LOW          (0x00000000)
#define SSI0_SSICR0_SPO_HIGH         (0x00000001)
//--------

//--------
#define SSI0_SSICR0_R_SPH_MASK       (0x00000080)
#define SSI0_SSICR0_R_SPH_BIT        (7)
#define SSI0_SSICR0_R_SPH_FIRST      (0x00000000)
#define SSI0_SSICR0_R_SPH_SECOND     (0x00000080)

#define SSI0_SSICR0_SPH_MASK         (0x00000001)
#define SSI0_SSICR0_SPH_FIRST        (0x00000000)
#define SSI0_SSICR0_SPH_SECOND       (0x00000001)
//--------

//--------
#define SSI0_SSICR0_R_SCR_MASK       (0x0000FF00)
#define SSI0_SSICR0_R_SCR_BIT        (8)

#define SSI0_SSICR0_SCR_MASK         (0x000000FF)
//--------

#define SSI0_SSICR0_SPO_BB     (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSICR0_OFFSET)*32)+(6*4))))
#define SSI0_SSICR0_SPH_BB     (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSICR0_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.2 SSICR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSICR1            (((SSICR1_TypeDef*)(SSI0_BASE + SSI_SSICR1_OFFSET )))
#define SSI0_SSICR1_R          (*((volatile uint32_t *)(SSI0_BASE +SSI_SSICR1_OFFSET)))

//--------
#define SSI0_SSICR1_R_LBM_MASK       (0x00000001)
#define SSI0_SSICR1_R_LBM_BIT        (0)
#define SSI0_SSICR1_R_LBM_NORMAL     (0x00000000)
#define SSI0_SSICR1_R_LBM_LOOPBACK   (0x00000001)

#define SSI0_SSICR1_LBM_MASK         (0x00000001)
#define SSI0_SSICR1_LBM_NORMAL       (0x00000000)
#define SSI0_SSICR1_LBM_LOOPBACK     (0x00000001)
//--------

//--------
#define SSI0_SSICR1_R_SSE_MASK       (0x00000002)
#define SSI0_SSICR1_R_SSE_BIT        (1)
#define SSI0_SSICR1_R_SSE_DIS        (0x00000000)
#define SSI0_SSICR1_R_SSE_EN         (0x00000002)

#define SSI0_SSICR1_SSE_MASK         (0x00000001)
#define SSI0_SSICR1_SSE_DIS          (0x00000000)
#define SSI0_SSICR1_SSE_EN           (0x00000001)
//--------

//--------
#define SSI0_SSICR1_R_MS_MASK       (0x00000004)
#define SSI0_SSICR1_R_MS_BIT        (2)
#define SSI0_SSICR1_R_MS_MASTER     (0x00000000)
#define SSI0_SSICR1_R_MS_SLAVE      (0x00000004)

#define SSI0_SSICR1_MS_MASK         (0x00000001)
#define SSI0_SSICR1_MS_MASTER       (0x00000000)
#define SSI0_SSICR1_MS_SLAVE        (0x00000001)
//--------

//--------
#define SSI0_SSICR1_R_EOT_MASK       (0x00000010)
#define SSI0_SSICR1_R_EOT_BIT        (4)
#define SSI0_SSICR1_R_EOT_FIFO       (0x00000000)
#define SSI0_SSICR1_R_EOT_END        (0x00000010)

#define SSI0_SSICR1_EOT_MASK         (0x00000001)
#define SSI0_SSICR1_EOT_FIFO         (0x00000000)
#define SSI0_SSICR1_EOT_END          (0x00000001)
//--------

#define SSI0_SSICR1_LBM_BB     (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSICR1_OFFSET)*32)+(0*4))))
#define SSI0_SSICR1_SSE_BB     (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSICR1_OFFSET)*32)+(1*4))))
#define SSI0_SSICR1_MS_BB      (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSICR1_OFFSET)*32)+(2*4))))
#define SSI0_SSICR1_EOT_BB     (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSICR1_OFFSET)*32)+(4*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.3 SSIDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSIDR            (((SSIDR_TypeDef*)(SSI0_BASE + SSI_SSIDR_OFFSET )))
#define SSI0_SSIDR_R          (*((volatile uint32_t *)(SSI0_BASE +SSI_SSIDR_OFFSET)))

//--------
#define SSI0_SSIDR_R_DATA_MASK       (0x0000FFFF)
#define SSI0_SSIDR_R_DATA_BIT        (0)

#define SSI0_SSIDR_DATA_MASK         (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.4 SSISR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSISR            (((SSISR_TypeDef*)(SSI0_BASE + SSI_SSISR_OFFSET )))
#define SSI0_SSISR_R          (*((volatile uint32_t *)(SSI0_BASE +SSI_SSISR_OFFSET)))

//--------
#define SSI0_SSISR_R_TFE_MASK       (0x00000001)
#define SSI0_SSISR_R_TFE_BIT        (0)
#define SSI0_SSISR_R_TFE_NOEMPTY    (0x00000000)
#define SSI0_SSISR_R_TFE_EMPTY      (0x00000001)

#define SSI0_SSISR_TFE_MASK         (0x00000001)
#define SSI0_SSISR_TFE_NOEMPTY      (0x00000000)
#define SSI0_SSISR_TFE_EMPTY        (0x00000001)
//--------

//--------
#define SSI0_SSISR_R_TNF_MASK       (0x00000002)
#define SSI0_SSISR_R_TNF_BIT        (1)
#define SSI0_SSISR_R_TNF_FULL       (0x00000000)
#define SSI0_SSISR_R_TNF_NOFULL     (0x00000002)

#define SSI0_SSISR_TNF_MASK         (0x00000001)
#define SSI0_SSISR_TNF_FULL         (0x00000000)
#define SSI0_SSISR_TNF_NOFULL       (0x00000001)
//--------

//--------
#define SSI0_SSISR_R_RNE_MASK       (0x00000004)
#define SSI0_SSISR_R_RNE_BIT        (2)
#define SSI0_SSISR_R_RNE_EMPTY      (0x00000000)
#define SSI0_SSISR_R_RNE_NOEMPTY    (0x00000004)

#define SSI0_SSISR_RNE_MASK         (0x00000001)
#define SSI0_SSISR_RNE_EMPTY        (0x00000000)
#define SSI0_SSISR_RNE_NOEMPTY      (0x00000001)
//--------

//--------
#define SSI0_SSISR_R_RFF_MASK       (0x00000008)
#define SSI0_SSISR_R_RFF_BIT        (3)
#define SSI0_SSISR_R_RFF_NOFULL     (0x00000000)
#define SSI0_SSISR_R_RFF_FULL       (0x00000008)

#define SSI0_SSISR_RFF_MASK         (0x00000001)
#define SSI0_SSISR_RFF_NOFULL       (0x00000000)
#define SSI0_SSISR_RFF_FULL         (0x00000001)
//--------

//--------
#define SSI0_SSISR_R_BSY_MASK       (0x00000010)
#define SSI0_SSISR_R_BSY_BIT        (4)
#define SSI0_SSISR_R_BSY_IDLE       (0x00000000)
#define SSI0_SSISR_R_BSY_BUSY       (0x00000010)

#define SSI0_SSISR_BSY_MASK         (0x00000001)
#define SSI0_SSISR_BSY_IDLE         (0x00000000)
#define SSI0_SSISR_BSY_BUSY         (0x00000001)
//--------

#define SSI0_SSISR_TFE_BB     (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSISR_OFFSET)*32)+(0*4))))
#define SSI0_SSISR_TNF_BB     (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSISR_OFFSET)*32)+(1*4))))
#define SSI0_SSISR_RNE_BB     (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSISR_OFFSET)*32)+(2*4))))
#define SSI0_SSISR_RFF_BB     (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSISR_OFFSET)*32)+(3*4))))
#define SSI0_SSISR_BSY_BB     (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSISR_OFFSET)*32)+(4*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.5 SSICPSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSICPSR            (((SSICPSR_TypeDef*)(SSI0_BASE + SSI_SSICPSR_OFFSET )))
#define SSI0_SSICPSR_R          (*((volatile uint32_t *)(SSI0_BASE +SSI_SSICPSR_OFFSET)))

//--------
#define SSI0_SSICPSR_R_DATA_MASK       (0x000000FF)
#define SSI0_SSICPSR_R_DATA_BIT        (0)

#define SSI0_SSICPSR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.6 SSIIM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSIIM            (((SSIIM_TypeDef*)(SSI0_BASE + SSI_SSIIM_OFFSET )))
#define SSI0_SSIIM_R          (*((volatile uint32_t *)(SSI0_BASE +SSI_SSIIM_OFFSET)))

//--------
#define SSI0_SSIIM_R_RORIM_MASK       (0x00000001)
#define SSI0_SSIIM_R_RORIM_BIT        (0)
#define SSI0_SSIIM_R_RORIM_DIS        (0x00000000)
#define SSI0_SSIIM_R_RORIM_EN         (0x00000001)

#define SSI0_SSIIM_RORIM_MASK         (0x00000001)
#define SSI0_SSIIM_RORIM_DIS          (0x00000000)
#define SSI0_SSIIM_RORIM_EN           (0x00000001)
//--------

//--------
#define SSI0_SSIIM_R_RTIM_MASK       (0x00000002)
#define SSI0_SSIIM_R_RTIM_BIT        (1)
#define SSI0_SSIIM_R_RTIM_DIS        (0x00000000)
#define SSI0_SSIIM_R_RTIM_EN         (0x00000002)

#define SSI0_SSIIM_RTIM_MASK         (0x00000001)
#define SSI0_SSIIM_RTIM_DIS          (0x00000000)
#define SSI0_SSIIM_RTIM_EN           (0x00000001)
//--------

//--------
#define SSI0_SSIIM_R_RXIM_MASK       (0x00000004)
#define SSI0_SSIIM_R_RXIM_BIT        (2)
#define SSI0_SSIIM_R_RXIM_DIS        (0x00000000)
#define SSI0_SSIIM_R_RXIM_EN         (0x00000004)

#define SSI0_SSIIM_RXIM_MASK         (0x00000001)
#define SSI0_SSIIM_RXIM_DIS          (0x00000000)
#define SSI0_SSIIM_RXIM_EN           (0x00000001)
//--------

//--------
#define SSI0_SSIIM_R_TXIM_MASK       (0x00000008)
#define SSI0_SSIIM_R_TXIM_BIT        (3)
#define SSI0_SSIIM_R_TXIM_DIS        (0x00000000)
#define SSI0_SSIIM_R_TXIM_EN         (0x00000008)

#define SSI0_SSIIM_TXIM_MASK         (0x00000001)
#define SSI0_SSIIM_TXIM_DIS          (0x00000000)
#define SSI0_SSIIM_TXIM_EN           (0x00000001)
//--------

#define SSI0_SSIIM_RORIM_BB    (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSIIM_OFFSET)*32)+(0*4))))
#define SSI0_SSIIM_RTIM_BB     (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSIIM_OFFSET)*32)+(1*4))))
#define SSI0_SSIIM_RXIM_BB     (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSIIM_OFFSET)*32)+(2*4))))
#define SSI0_SSIIM_TXIM_BB     (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSIIM_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.7 SSIRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSIRIS            (((SSIRIS_TypeDef*)(SSI0_BASE + SSI_SSIRIS_OFFSET )))
#define SSI0_SSIRIS_R          (*((volatile const uint32_t *)(SSI0_BASE +SSI_SSIRIS_OFFSET)))

//--------
#define SSI0_SSIRIS_R_RORRIS_MASK       (0x00000001)
#define SSI0_SSIRIS_R_RORRIS_BIT        (0)
#define SSI0_SSIRIS_R_RORRIS_NOACTIVE   (0x00000000)
#define SSI0_SSIRIS_R_RORRIS_ACTIVE     (0x00000001)

#define SSI0_SSIRIS_RORRIS_MASK         (0x00000001)
#define SSI0_SSIRIS_RORRIS_NOACTIVE     (0x00000000)
#define SSI0_SSIRIS_RORRIS_ACTIVE       (0x00000001)
//--------

//--------
#define SSI0_SSIRIS_R_RTRIS_MASK       (0x00000002)
#define SSI0_SSIRIS_R_RTRIS_BIT        (1)
#define SSI0_SSIRIS_R_RTRIS_NOACTIVE   (0x00000000)
#define SSI0_SSIRIS_R_RTRIS_ACTIVE     (0x00000002)

#define SSI0_SSIRIS_RTRIS_MASK         (0x00000001)
#define SSI0_SSIRIS_RTRIS_NOACTIVE     (0x00000000)
#define SSI0_SSIRIS_RTRIS_ACTIVE       (0x00000001)
//--------

//--------
#define SSI0_SSIRIS_R_RXRIS_MASK       (0x00000004)
#define SSI0_SSIRIS_R_RXRIS_BIT        (2)
#define SSI0_SSIRIS_R_RXRIS_NOACTIVE   (0x00000000)
#define SSI0_SSIRIS_R_RXRIS_ACTIVE     (0x00000004)

#define SSI0_SSIRIS_RXRIS_MASK         (0x00000001)
#define SSI0_SSIRIS_RXRIS_NOACTIVE     (0x00000000)
#define SSI0_SSIRIS_RXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define SSI0_SSIRIS_R_TXRIS_MASK       (0x00000008)
#define SSI0_SSIRIS_R_TXRIS_BIT        (3)
#define SSI0_SSIRIS_R_TXRIS_NOACTIVE   (0x00000000)
#define SSI0_SSIRIS_R_TXRIS_ACTIVE     (0x00000008)

#define SSI0_SSIRIS_TXRIS_MASK         (0x00000001)
#define SSI0_SSIRIS_TXRIS_NOACTIVE     (0x00000000)
#define SSI0_SSIRIS_TXRIS_ACTIVE       (0x00000001)
//--------

#define SSI0_SSIRIS_RORRIS_BB    (*((volatile const uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSIRIS_OFFSET)*32)+(0*4))))
#define SSI0_SSIRIS_RTRIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSIRIS_OFFSET)*32)+(1*4))))
#define SSI0_SSIRIS_RXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSIRIS_OFFSET)*32)+(2*4))))
#define SSI0_SSIRIS_TXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSIRIS_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.8 SSIMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSIMIS            (((SSIMIS_TypeDef*)(SSI0_BASE + SSI_SSIMIS_OFFSET )))
#define SSI0_SSIMIS_R          (*((volatile const uint32_t *)(SSI0_BASE +SSI_SSIMIS_OFFSET)))


//--------
#define SSI0_SSIMIS_R_RORMIS_MASK       (0x00000001)
#define SSI0_SSIMIS_R_RORMIS_BIT        (0)
#define SSI0_SSIMIS_R_RORMIS_NOOCCUR    (0x00000000)
#define SSI0_SSIMIS_R_RORMIS_OCCUR      (0x00000001)

#define SSI0_SSIMIS_RORMIS_MASK         (0x00000001)
#define SSI0_SSIMIS_RORMIS_NOOCCUR      (0x00000000)
#define SSI0_SSIMIS_RORMIS_OCCUR        (0x00000001)
//--------

//--------
#define SSI0_SSIMIS_R_RTMIS_MASK       (0x00000002)
#define SSI0_SSIMIS_R_RTMIS_BIT        (1)
#define SSI0_SSIMIS_R_RTMIS_NOOCCUR    (0x00000000)
#define SSI0_SSIMIS_R_RTMIS_OCCUR      (0x00000002)

#define SSI0_SSIMIS_RTMIS_MASK         (0x00000001)
#define SSI0_SSIMIS_RTMIS_NOOCCUR      (0x00000000)
#define SSI0_SSIMIS_RTMIS_OCCUR        (0x00000001)
//--------

//--------
#define SSI0_SSIMIS_R_RXMIS_MASK       (0x00000004)
#define SSI0_SSIMIS_R_RXMIS_BIT        (2)
#define SSI0_SSIMIS_R_RXMIS_NOOCCUR    (0x00000000)
#define SSI0_SSIMIS_R_RXMIS_OCCUR      (0x00000004)

#define SSI0_SSIMIS_RXMIS_MASK         (0x00000001)
#define SSI0_SSIMIS_RXMIS_NOOCCUR      (0x00000000)
#define SSI0_SSIMIS_RXMIS_OCCUR        (0x00000001)
//--------

//--------
#define SSI0_SSIMIS_R_TXMIS_MASK       (0x00000008)
#define SSI0_SSIMIS_R_TXMIS_BIT        (3)
#define SSI0_SSIMIS_R_TXMIS_NOOCCUR    (0x00000000)
#define SSI0_SSIMIS_R_TXMIS_OCCUR      (0x00000008)

#define SSI0_SSIMIS_TXMIS_MASK         (0x00000001)
#define SSI0_SSIMIS_TXMIS_NOOCCUR      (0x00000000)
#define SSI0_SSIMIS_TXMIS_OCCUR        (0x00000001)
//--------

#define SSI0_SSIMIS_RORMIS_BB    (*((volatile const uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSIMIS_OFFSET)*32)+(0*4))))
#define SSI0_SSIMIS_RTMIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSIMIS_OFFSET)*32)+(1*4))))
#define SSI0_SSIMIS_RXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSIMIS_OFFSET)*32)+(2*4))))
#define SSI0_SSIMIS_TXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSIMIS_OFFSET)*32)+(3*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.9 SSIICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSIICR            (((SSIICR_TypeDef*)(SSI0_BASE + SSI_SSIICR_OFFSET )))
#define SSI0_SSIICR_R          (*((volatile uint32_t *)(SSI0_BASE +SSI_SSIICR_OFFSET)))


//--------
#define SSI0_SSIICR_R_RORIC_MASK       (0x00000001)
#define SSI0_SSIICR_R_RORIC_BIT        (0)
#define SSI0_SSIICR_R_RORIC_CLEAR      (0x00000001)

#define SSI0_SSIICR_RORIC_MASK         (0x00000001)
#define SSI0_SSIICR_RORIC_CLEAR        (0x00000001)
//--------

//--------
#define SSI0_SSIICR_R_RTIC_MASK       (0x00000002)
#define SSI0_SSIICR_R_RTIC_BIT        (1)
#define SSI0_SSIICR_R_RTIC_CLEAR      (0x00000002)

#define SSI0_SSIICR_RTIC_MASK         (0x00000001)
#define SSI0_SSIICR_RTIC_CLEAR        (0x00000001)
//--------

#define SSI0_SSIICR_RORIC_BB    (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSIICR_OFFSET)*32)+(0*4))))
#define SSI0_SSIICR_RTIC_BB     (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSIICR_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.10 SSIDMACTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSIDMACTL            (((SSIDMACTL_TypeDef*)(SSI0_BASE + SSI_SSIDMACTL_OFFSET )))
#define SSI0_SSIDMACTL_R          (*((volatile uint32_t *)(SSI0_BASE +SSI_SSIDMACTL_OFFSET)))

//--------
#define SSI0_SSIDMACTL_R_RXDMAE_MASK       (0x00000001)
#define SSI0_SSIDMACTL_R_RXDMAE_BIT        (0)
#define SSI0_SSIDMACTL_R_RXDMAE_DIS        (0x00000000)
#define SSI0_SSIDMACTL_R_RXDMAE_EN         (0x00000001)

#define SSI0_SSIDMACTL_RXDMAE_MASK         (0x00000001)
#define SSI0_SSIDMACTL_RXDMAE_DIS          (0x00000000)
#define SSI0_SSIDMACTL_RXDMAE_EN           (0x00000001)
//--------


//--------
#define SSI0_SSIDMACTL_R_TXDMAE_MASK       (0x00000002)
#define SSI0_SSIDMACTL_R_TXDMAE_BIT        (1)
#define SSI0_SSIDMACTL_R_TXDMAE_DIS        (0x00000000)
#define SSI0_SSIDMACTL_R_TXDMAE_EN         (0x00000002)

#define SSI0_SSIDMACTL_TXDMAE_MASK         (0x00000001)
#define SSI0_SSIDMACTL_TXDMAE_DIS          (0x00000000)
#define SSI0_SSIDMACTL_TXDMAE_EN           (0x00000001)
//--------

#define SSI0_SSIDMACTL_RXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSIDMACTL_OFFSET)*32)+(0*4))))
#define SSI0_SSIDMACTL_TXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((SSI0_OFFSET+SSI_SSIDMACTL_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.11 SSICC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSICC            (((SSICC_TypeDef*)(SSI0_BASE + SSI_SSICC_OFFSET )))
#define SSI0_SSICC_R          (*((volatile uint32_t *)(SSI0_BASE +SSI_SSICC_OFFSET)))

//--------
#define SSI0_SSICC_R_CS_MASK       (0x0000000F)
#define SSI0_SSICC_R_CS_BIT        (0)
#define SSI0_SSICC_R_CS_SYSCLK     (0x00000000)
#define SSI0_SSICC_R_CS_PIOSC      (0x00000005)

#define SSI0_SSICC_CS_MASK         (0x0000000F)
#define SSI0_SSICC_CS_SYSCLK       (0x00000000)
#define SSI0_SSICC_CS_PIOSC        (0x00000005)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.12 SSIPeriphID4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSIPeriphID4            (((SSIPeriphID4_TypeDef*)(SSI0_BASE + SSI_SSIPeriphID4_OFFSET )))
#define SSI0_SSIPeriphID4_R          (*((volatile const uint32_t *)(SSI0_BASE +SSI_SSIPeriphID4_OFFSET)))

//--------
#define SSI0_SSIPeriphID4_R_PID4_MASK       (0x000000FF)
#define SSI0_SSIPeriphID4_R_PID4_BIT        (0)
#define SSI0_SSIPeriphID4_R_PID4_DEFAULT    (0x00000000)

#define SSI0_SSIPeriphID4_PID4_MASK         (0x000000FF)
#define SSI0_SSIPeriphID4_PID4_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.13 SSIPeriphID5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSIPeriphID5            (((SSIPeriphID5_TypeDef*)(SSI0_BASE + SSI_SSIPeriphID5_OFFSET )))
#define SSI0_SSIPeriphID5_R          (*((volatile const uint32_t *)(SSI0_BASE +SSI_SSIPeriphID5_OFFSET)))

//--------
#define SSI0_SSIPeriphID5_R_PID5_MASK       (0x000000FF)
#define SSI0_SSIPeriphID5_R_PID5_BIT        (0)
#define SSI0_SSIPeriphID5_R_PID5_DEFAULT    (0x00000000)

#define SSI0_SSIPeriphID5_PID5_MASK         (0x000000FF)
#define SSI0_SSIPeriphID5_PID5_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.14 SSIPeriphID6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSIPeriphID6            (((SSIPeriphID6_TypeDef*)(SSI0_BASE + SSI_SSIPeriphID6_OFFSET )))
#define SSI0_SSIPeriphID6_R          (*((volatile const uint32_t *)(SSI0_BASE +SSI_SSIPeriphID6_OFFSET)))



//--------
#define SSI0_SSIPeriphID6_R_PID6_MASK       (0x000000FF)
#define SSI0_SSIPeriphID6_R_PID6_BIT        (0)
#define SSI0_SSIPeriphID6_R_PID6_DEFAULT    (0x00000000)

#define SSI0_SSIPeriphID6_PID6_MASK         (0x000000FF)
#define SSI0_SSIPeriphID6_PID6_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.15 SSIPeriphID7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSIPeriphID7            (((SSIPeriphID7_TypeDef*)(SSI0_BASE + SSI_SSIPeriphID7_OFFSET )))
#define SSI0_SSIPeriphID7_R          (*((volatile const uint32_t *)(SSI0_BASE +SSI_SSIPeriphID7_OFFSET)))



//--------
#define SSI0_SSIPeriphID7_R_PID7_MASK       (0x000000FF)
#define SSI0_SSIPeriphID7_R_PID7_BIT        (0)
#define SSI0_SSIPeriphID7_R_PID7_DEFAULT    (0x00000000)

#define SSI0_SSIPeriphID7_PID7_MASK         (0x000000FF)
#define SSI0_SSIPeriphID7_PID7_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.16 SSIPeriphID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSIPeriphID0            (((SSIPeriphID0_TypeDef*)(SSI0_BASE + SSI_SSIPeriphID0_OFFSET )))
#define SSI0_SSIPeriphID0_R          (*((volatile const uint32_t *)(SSI0_BASE +SSI_SSIPeriphID0_OFFSET)))



//--------
#define SSI0_SSIPeriphID0_R_PID0_MASK       (0x000000FF)
#define SSI0_SSIPeriphID0_R_PID0_BIT        (0)
#define SSI0_SSIPeriphID0_R_PID0_DEFAULT    (0x00000022)

#define SSI0_SSIPeriphID0_PID0_MASK         (0x000000FF)
#define SSI0_SSIPeriphID0_PID0_DEFAULT      (0x00000022)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.17 SSIPeriphID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSIPeriphID1            (((SSIPeriphID1_TypeDef*)(SSI0_BASE + SSI_SSIPeriphID1_OFFSET )))
#define SSI0_SSIPeriphID1_R          (*((volatile const uint32_t *)(SSI0_BASE +SSI_SSIPeriphID1_OFFSET)))



//--------
#define SSI0_SSIPeriphID1_R_PID1_MASK       (0x000000FF)
#define SSI0_SSIPeriphID1_R_PID1_BIT        (0)
#define SSI0_SSIPeriphID1_R_PID1_DEFAULT    (0x00000000)

#define SSI0_SSIPeriphID1_PID1_MASK         (0x000000FF)
#define SSI0_SSIPeriphID1_PID1_DEFAULT      (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.18 SSIPeriphID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSIPeriphID2            (((SSIPeriphID2_TypeDef*)(SSI0_BASE + SSI_SSIPeriphID2_OFFSET )))
#define SSI0_SSIPeriphID2_R          (*((volatile const uint32_t *)(SSI0_BASE +SSI_SSIPeriphID2_OFFSET)))

//--------
#define SSI0_SSIPeriphID2_R_PID2_MASK       (0x000000FF)
#define SSI0_SSIPeriphID2_R_PID2_BIT        (0)
#define SSI0_SSIPeriphID2_R_PID2_DEFAULT    (0x00000018)

#define SSI0_SSIPeriphID2_PID2_MASK         (0x000000FF)
#define SSI0_SSIPeriphID2_PID2_DEFAULT      (0x00000018)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.19 SSIPeriphID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSIPeriphID3            (((SSIPeriphID3_TypeDef*)(SSI0_BASE + SSI_SSIPeriphID3_OFFSET )))
#define SSI0_SSIPeriphID3_R          (*((volatile const uint32_t *)(SSI0_BASE +SSI_SSIPeriphID3_OFFSET)))

//--------
#define SSI0_SSIPeriphID3_R_PID3_MASK       (0x000000FF)
#define SSI0_SSIPeriphID3_R_PID3_BIT        (0)
#define SSI0_SSIPeriphID3_R_PID3_DEFAULT    (0x00000001)

#define SSI0_SSIPeriphID3_PID3_MASK         (0x000000FF)
#define SSI0_SSIPeriphID3_PID3_DEFAULT      (0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.20 SSIPCellID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSIPCellID0            (((SSIPCellID0_TypeDef*)(SSI0_BASE + SSI_SSIPCellID0_OFFSET )))
#define SSI0_SSIPCellID0_R          (*((volatile const uint32_t *)(SSI0_BASE +SSI_SSIPCellID0_OFFSET)))

//--------
#define SSI0_SSIPCellID0_R_CID0_MASK       (0x000000FF)
#define SSI0_SSIPCellID0_R_CID0_BIT        (0)
#define SSI0_SSIPCellID0_R_CID0_DEFAULT    (0x0000000D)

#define SSI0_SSIPCellID0_CID0_MASK         (0x000000FF)
#define SSI0_SSIPCellID0_CID0_DEFAULT      (0x0000000D)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.21 SSIPCellID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSIPCellID1            (((SSIPCellID1_TypeDef*)(SSI0_BASE + SSI_SSIPCellID1_OFFSET )))
#define SSI0_SSIPCellID1_R          (*((volatile const uint32_t *)(SSI0_BASE +SSI_SSIPCellID1_OFFSET)))

//--------
#define SSI0_SSIPCellID1_R_CID1_MASK       (0x000000FF)
#define SSI0_SSIPCellID1_R_CID1_BIT        (0)
#define SSI0_SSIPCellID1_R_CID1_DEFAULT    (0x000000F0)

#define SSI0_SSIPCellID1_CID1_MASK         (0x000000FF)
#define SSI0_SSIPCellID1_CID1_DEFAULT      (0x000000F0)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.22 SSIPCellID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSIPCellID2            (((SSIPCellID2_TypeDef*)(SSI0_BASE + SSI_SSIPCellID2_OFFSET )))
#define SSI0_SSIPCellID2_R          (*((volatile const uint32_t *)(SSI0_BASE +SSI_SSIPCellID2_OFFSET)))

//--------
#define SSI0_SSIPCellID2_R_CID2_MASK       (0x000000FF)
#define SSI0_SSIPCellID2_R_CID2_BIT        (0)
#define SSI0_SSIPCellID2_R_CID2_DEFAULT    (0x00000005)

#define SSI0_SSIPCellID2_CID2_MASK         (0x000000FF)
#define SSI0_SSIPCellID2_CID2_DEFAULT      (0x00000005)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0.23 SSIPCellID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI0_SSIPCellID3            (((SSIPCellID3_TypeDef*)(SSI0_BASE + SSI_SSIPCellID3_OFFSET )))
#define SSI0_SSIPCellID3_R          (*((volatile const uint32_t *)(SSI0_BASE +SSI_SSIPCellID3_OFFSET)))

//--------
#define SSI0_SSIPCellID3_R_CID3_MASK       (0x000000FF)
#define SSI0_SSIPCellID3_R_CID3_BIT        (0)
#define SSI0_SSIPCellID3_R_CID3_DEFAULT    (0x000000B1)

#define SSI0_SSIPCellID3_CID3_MASK         (0x000000FF)
#define SSI0_SSIPCellID3_CID3_DEFAULT      (0x000000B1)
//--------



// todo SSI1

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 SSI1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.1 SSICR0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSICR0            (((SSICR0_TypeDef*)(SSI1_BASE + SSI_SSICR0_OFFSET )))
#define SSI1_SSICR0_R          (*((volatile uint32_t *)(SSI1_BASE +SSI_SSICR0_OFFSET)))


//--------
#define SSI1_SSICR0_R_DSS_MASK       (0x0000000F)
#define SSI1_SSICR0_R_DSS_BIT        (0)
#define SSI1_SSICR0_R_DSS_4BTIS      (0x00000003)
#define SSI1_SSICR0_R_DSS_5BTIS      (0x00000004)
#define SSI1_SSICR0_R_DSS_6BTIS      (0x00000005)
#define SSI1_SSICR0_R_DSS_7BTIS      (0x00000006)
#define SSI1_SSICR0_R_DSS_8BTIS      (0x00000007)
#define SSI1_SSICR0_R_DSS_9BTIS      (0x00000008)
#define SSI1_SSICR0_R_DSS_10BTIS     (0x00000009)
#define SSI1_SSICR0_R_DSS_11BTIS     (0x0000000A)
#define SSI1_SSICR0_R_DSS_12BTIS     (0x0000000B)
#define SSI1_SSICR0_R_DSS_13BTIS     (0x0000000C)
#define SSI1_SSICR0_R_DSS_14BTIS     (0x0000000D)
#define SSI1_SSICR0_R_DSS_15BTIS     (0x0000000E)
#define SSI1_SSICR0_R_DSS_16BTIS     (0x0000000F)

#define SSI1_SSICR0_DSS_MASK         (0x00000001)
#define SSI1_SSICR0_DSS_4BTIS        (0x00000003)
#define SSI1_SSICR0_DSS_5BTIS        (0x00000004)
#define SSI1_SSICR0_DSS_6BTIS        (0x00000005)
#define SSI1_SSICR0_DSS_7BTIS        (0x00000006)
#define SSI1_SSICR0_DSS_8BTIS        (0x00000007)
#define SSI1_SSICR0_DSS_9BTIS        (0x00000008)
#define SSI1_SSICR0_DSS_10BTIS       (0x00000009)
#define SSI1_SSICR0_DSS_11BTIS       (0x0000000A)
#define SSI1_SSICR0_DSS_12BTIS       (0x0000000B)
#define SSI1_SSICR0_DSS_13BTIS       (0x0000000C)
#define SSI1_SSICR0_DSS_14BTIS       (0x0000000D)
#define SSI1_SSICR0_DSS_15BTIS       (0x0000000E)
#define SSI1_SSICR0_DSS_16BTIS       (0x0000000F)
//--------

//--------
#define SSI1_SSICR0_R_FRF_MASK       (0x00000030)
#define SSI1_SSICR0_R_FRF_BIT        (4)
#define SSI1_SSICR0_R_FRF_FREESCALE  (0x00000000)
#define SSI1_SSICR0_R_FRF_TEXAS      (0x00000010)
#define SSI1_SSICR0_R_FRF_MICROWIRE  (0x00000020)

#define SSI1_SSICR0_FRF_MASK         (0x00000003)
#define SSI1_SSICR0_FRF_FREESCALE    (0x00000000)
#define SSI1_SSICR0_FRF_TEXAS        (0x00000001)
#define SSI1_SSICR0_FRF_MICROWIRE    (0x00000002)
//--------

//--------
#define SSI1_SSICR0_R_SPO_MASK       (0x00000040)
#define SSI1_SSICR0_R_SPO_BIT        (6)
#define SSI1_SSICR0_R_SPO_LOW        (0x00000000)
#define SSI1_SSICR0_R_SPO_HIGH       (0x00000040)

#define SSI1_SSICR0_SPO_MASK         (0x00000001)
#define SSI1_SSICR0_SPO_LOW          (0x00000000)
#define SSI1_SSICR0_SPO_HIGH         (0x00000001)
//--------

//--------
#define SSI1_SSICR0_R_SPH_MASK       (0x00000080)
#define SSI1_SSICR0_R_SPH_BIT        (7)
#define SSI1_SSICR0_R_SPH_FIRST      (0x00000000)
#define SSI1_SSICR0_R_SPH_SECOND     (0x00000080)

#define SSI1_SSICR0_SPH_MASK         (0x00000001)
#define SSI1_SSICR0_SPH_FIRST        (0x00000000)
#define SSI1_SSICR0_SPH_SECOND       (0x00000001)
//--------

//--------
#define SSI1_SSICR0_R_SCR_MASK       (0x0000FF00)
#define SSI1_SSICR0_R_SCR_BIT        (8)

#define SSI1_SSICR0_SCR_MASK         (0x000000FF)
//--------

#define SSI1_SSICR0_SPO_BB     (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSICR0_OFFSET)*32)+(6*4))))
#define SSI1_SSICR0_SPH_BB     (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSICR0_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.2 SSICR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSICR1            (((SSICR1_TypeDef*)(SSI1_BASE + SSI_SSICR1_OFFSET )))
#define SSI1_SSICR1_R          (*((volatile uint32_t *)(SSI1_BASE +SSI_SSICR1_OFFSET)))

//--------
#define SSI1_SSICR1_R_LBM_MASK       (0x00000001)
#define SSI1_SSICR1_R_LBM_BIT        (0)
#define SSI1_SSICR1_R_LBM_NORMAL     (0x00000000)
#define SSI1_SSICR1_R_LBM_LOOPBACK   (0x00000001)

#define SSI1_SSICR1_LBM_MASK         (0x00000001)
#define SSI1_SSICR1_LBM_NORMAL       (0x00000000)
#define SSI1_SSICR1_LBM_LOOPBACK     (0x00000001)
//--------

//--------
#define SSI1_SSICR1_R_SSE_MASK       (0x00000002)
#define SSI1_SSICR1_R_SSE_BIT        (1)
#define SSI1_SSICR1_R_SSE_DIS        (0x00000000)
#define SSI1_SSICR1_R_SSE_EN         (0x00000002)

#define SSI1_SSICR1_SSE_MASK         (0x00000001)
#define SSI1_SSICR1_SSE_DIS          (0x00000000)
#define SSI1_SSICR1_SSE_EN           (0x00000001)
//--------

//--------
#define SSI1_SSICR1_R_MS_MASK       (0x00000004)
#define SSI1_SSICR1_R_MS_BIT        (2)
#define SSI1_SSICR1_R_MS_MASTER     (0x00000000)
#define SSI1_SSICR1_R_MS_SLAVE      (0x00000004)

#define SSI1_SSICR1_MS_MASK         (0x00000001)
#define SSI1_SSICR1_MS_MASTER       (0x00000000)
#define SSI1_SSICR1_MS_SLAVE        (0x00000001)
//--------

//--------
#define SSI1_SSICR1_R_EOT_MASK       (0x00000010)
#define SSI1_SSICR1_R_EOT_BIT        (4)
#define SSI1_SSICR1_R_EOT_FIFO       (0x00000000)
#define SSI1_SSICR1_R_EOT_END        (0x00000010)

#define SSI1_SSICR1_EOT_MASK         (0x00000001)
#define SSI1_SSICR1_EOT_FIFO         (0x00000000)
#define SSI1_SSICR1_EOT_END          (0x00000001)
//--------

#define SSI1_SSICR1_LBM_BB     (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSICR1_OFFSET)*32)+(0*4))))
#define SSI1_SSICR1_SSE_BB     (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSICR1_OFFSET)*32)+(1*4))))
#define SSI1_SSICR1_MS_BB      (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSICR1_OFFSET)*32)+(2*4))))
#define SSI1_SSICR1_EOT_BB     (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSICR1_OFFSET)*32)+(4*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.3 SSIDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSIDR            (((SSIDR_TypeDef*)(SSI1_BASE + SSI_SSIDR_OFFSET )))
#define SSI1_SSIDR_R          (*((volatile uint32_t *)(SSI1_BASE +SSI_SSIDR_OFFSET)))

//--------
#define SSI1_SSIDR_R_DATA_MASK       (0x0000FFFF)
#define SSI1_SSIDR_R_DATA_BIT        (0)

#define SSI1_SSIDR_DATA_MASK         (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.4 SSISR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSISR            (((SSISR_TypeDef*)(SSI1_BASE + SSI_SSISR_OFFSET )))
#define SSI1_SSISR_R          (*((volatile uint32_t *)(SSI1_BASE +SSI_SSISR_OFFSET)))

//--------
#define SSI1_SSISR_R_TFE_MASK       (0x00000001)
#define SSI1_SSISR_R_TFE_BIT        (0)
#define SSI1_SSISR_R_TFE_NOEMPTY    (0x00000000)
#define SSI1_SSISR_R_TFE_EMPTY      (0x00000001)

#define SSI1_SSISR_TFE_MASK         (0x00000001)
#define SSI1_SSISR_TFE_NOEMPTY      (0x00000000)
#define SSI1_SSISR_TFE_EMPTY        (0x00000001)
//--------

//--------
#define SSI1_SSISR_R_TNF_MASK       (0x00000002)
#define SSI1_SSISR_R_TNF_BIT        (1)
#define SSI1_SSISR_R_TNF_FULL       (0x00000000)
#define SSI1_SSISR_R_TNF_NOFULL     (0x00000002)

#define SSI1_SSISR_TNF_MASK         (0x00000001)
#define SSI1_SSISR_TNF_FULL         (0x00000000)
#define SSI1_SSISR_TNF_NOFULL       (0x00000001)
//--------

//--------
#define SSI1_SSISR_R_RNE_MASK       (0x00000004)
#define SSI1_SSISR_R_RNE_BIT        (2)
#define SSI1_SSISR_R_RNE_EMPTY      (0x00000000)
#define SSI1_SSISR_R_RNE_NOEMPTY    (0x00000004)

#define SSI1_SSISR_RNE_MASK         (0x00000001)
#define SSI1_SSISR_RNE_EMPTY        (0x00000000)
#define SSI1_SSISR_RNE_NOEMPTY      (0x00000001)
//--------

//--------
#define SSI1_SSISR_R_RFF_MASK       (0x00000008)
#define SSI1_SSISR_R_RFF_BIT        (3)
#define SSI1_SSISR_R_RFF_NOFULL     (0x00000000)
#define SSI1_SSISR_R_RFF_FULL       (0x00000008)

#define SSI1_SSISR_RFF_MASK         (0x00000001)
#define SSI1_SSISR_RFF_NOFULL       (0x00000000)
#define SSI1_SSISR_RFF_FULL         (0x00000001)
//--------

//--------
#define SSI1_SSISR_R_BSY_MASK       (0x00000010)
#define SSI1_SSISR_R_BSY_BIT        (4)
#define SSI1_SSISR_R_BSY_IDLE       (0x00000000)
#define SSI1_SSISR_R_BSY_BUSY       (0x00000010)

#define SSI1_SSISR_BSY_MASK         (0x00000001)
#define SSI1_SSISR_BSY_IDLE         (0x00000000)
#define SSI1_SSISR_BSY_BUSY         (0x00000001)
//--------

#define SSI1_SSISR_TFE_BB     (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSISR_OFFSET)*32)+(0*4))))
#define SSI1_SSISR_TNF_BB     (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSISR_OFFSET)*32)+(1*4))))
#define SSI1_SSISR_RNE_BB     (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSISR_OFFSET)*32)+(2*4))))
#define SSI1_SSISR_RFF_BB     (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSISR_OFFSET)*32)+(3*4))))
#define SSI1_SSISR_BSY_BB     (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSISR_OFFSET)*32)+(4*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.5 SSICPSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSICPSR            (((SSICPSR_TypeDef*)(SSI1_BASE + SSI_SSICPSR_OFFSET )))
#define SSI1_SSICPSR_R          (*((volatile uint32_t *)(SSI1_BASE +SSI_SSICPSR_OFFSET)))

//--------
#define SSI1_SSICPSR_R_DATA_MASK       (0x000000FF)
#define SSI1_SSICPSR_R_DATA_BIT        (0)

#define SSI1_SSICPSR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.6 SSIIM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSIIM            (((SSIIM_TypeDef*)(SSI1_BASE + SSI_SSIIM_OFFSET )))
#define SSI1_SSIIM_R          (*((volatile uint32_t *)(SSI1_BASE +SSI_SSIIM_OFFSET)))

//--------
#define SSI1_SSIIM_R_RORIM_MASK       (0x00000001)
#define SSI1_SSIIM_R_RORIM_BIT        (0)
#define SSI1_SSIIM_R_RORIM_DIS        (0x00000000)
#define SSI1_SSIIM_R_RORIM_EN         (0x00000001)

#define SSI1_SSIIM_RORIM_MASK         (0x00000001)
#define SSI1_SSIIM_RORIM_DIS          (0x00000000)
#define SSI1_SSIIM_RORIM_EN           (0x00000001)
//--------

//--------
#define SSI1_SSIIM_R_RTIM_MASK       (0x00000002)
#define SSI1_SSIIM_R_RTIM_BIT        (1)
#define SSI1_SSIIM_R_RTIM_DIS        (0x00000000)
#define SSI1_SSIIM_R_RTIM_EN         (0x00000002)

#define SSI1_SSIIM_RTIM_MASK         (0x00000001)
#define SSI1_SSIIM_RTIM_DIS          (0x00000000)
#define SSI1_SSIIM_RTIM_EN           (0x00000001)
//--------

//--------
#define SSI1_SSIIM_R_RXIM_MASK       (0x00000004)
#define SSI1_SSIIM_R_RXIM_BIT        (2)
#define SSI1_SSIIM_R_RXIM_DIS        (0x00000000)
#define SSI1_SSIIM_R_RXIM_EN         (0x00000004)

#define SSI1_SSIIM_RXIM_MASK         (0x00000001)
#define SSI1_SSIIM_RXIM_DIS          (0x00000000)
#define SSI1_SSIIM_RXIM_EN           (0x00000001)
//--------

//--------
#define SSI1_SSIIM_R_TXIM_MASK       (0x00000008)
#define SSI1_SSIIM_R_TXIM_BIT        (3)
#define SSI1_SSIIM_R_TXIM_DIS        (0x00000000)
#define SSI1_SSIIM_R_TXIM_EN         (0x00000008)

#define SSI1_SSIIM_TXIM_MASK         (0x00000001)
#define SSI1_SSIIM_TXIM_DIS          (0x00000000)
#define SSI1_SSIIM_TXIM_EN           (0x00000001)
//--------

#define SSI1_SSIIM_RORIM_BB    (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSIIM_OFFSET)*32)+(0*4))))
#define SSI1_SSIIM_RTIM_BB     (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSIIM_OFFSET)*32)+(1*4))))
#define SSI1_SSIIM_RXIM_BB     (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSIIM_OFFSET)*32)+(2*4))))
#define SSI1_SSIIM_TXIM_BB     (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSIIM_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.7 SSIRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSIRIS            (((SSIRIS_TypeDef*)(SSI1_BASE + SSI_SSIRIS_OFFSET )))
#define SSI1_SSIRIS_R          (*((volatile const uint32_t *)(SSI1_BASE +SSI_SSIRIS_OFFSET)))

//--------
#define SSI1_SSIRIS_R_RORRIS_MASK       (0x00000001)
#define SSI1_SSIRIS_R_RORRIS_BIT        (0)
#define SSI1_SSIRIS_R_RORRIS_NOACTIVE   (0x00000000)
#define SSI1_SSIRIS_R_RORRIS_ACTIVE     (0x00000001)

#define SSI1_SSIRIS_RORRIS_MASK         (0x00000001)
#define SSI1_SSIRIS_RORRIS_NOACTIVE     (0x00000000)
#define SSI1_SSIRIS_RORRIS_ACTIVE       (0x00000001)
//--------

//--------
#define SSI1_SSIRIS_R_RTRIS_MASK       (0x00000002)
#define SSI1_SSIRIS_R_RTRIS_BIT        (1)
#define SSI1_SSIRIS_R_RTRIS_NOACTIVE   (0x00000000)
#define SSI1_SSIRIS_R_RTRIS_ACTIVE     (0x00000002)

#define SSI1_SSIRIS_RTRIS_MASK         (0x00000001)
#define SSI1_SSIRIS_RTRIS_NOACTIVE     (0x00000000)
#define SSI1_SSIRIS_RTRIS_ACTIVE       (0x00000001)
//--------

//--------
#define SSI1_SSIRIS_R_RXRIS_MASK       (0x00000004)
#define SSI1_SSIRIS_R_RXRIS_BIT        (2)
#define SSI1_SSIRIS_R_RXRIS_NOACTIVE   (0x00000000)
#define SSI1_SSIRIS_R_RXRIS_ACTIVE     (0x00000004)

#define SSI1_SSIRIS_RXRIS_MASK         (0x00000001)
#define SSI1_SSIRIS_RXRIS_NOACTIVE     (0x00000000)
#define SSI1_SSIRIS_RXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define SSI1_SSIRIS_R_TXRIS_MASK       (0x00000008)
#define SSI1_SSIRIS_R_TXRIS_BIT        (3)
#define SSI1_SSIRIS_R_TXRIS_NOACTIVE   (0x00000000)
#define SSI1_SSIRIS_R_TXRIS_ACTIVE     (0x00000008)

#define SSI1_SSIRIS_TXRIS_MASK         (0x00000001)
#define SSI1_SSIRIS_TXRIS_NOACTIVE     (0x00000000)
#define SSI1_SSIRIS_TXRIS_ACTIVE       (0x00000001)
//--------

#define SSI1_SSIRIS_RORRIS_BB    (*((volatile const uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSIRIS_OFFSET)*32)+(0*4))))
#define SSI1_SSIRIS_RTRIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSIRIS_OFFSET)*32)+(1*4))))
#define SSI1_SSIRIS_RXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSIRIS_OFFSET)*32)+(2*4))))
#define SSI1_SSIRIS_TXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSIRIS_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.8 SSIMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSIMIS            (((SSIMIS_TypeDef*)(SSI1_BASE + SSI_SSIMIS_OFFSET )))
#define SSI1_SSIMIS_R          (*((volatile const uint32_t *)(SSI1_BASE +SSI_SSIMIS_OFFSET)))


//--------
#define SSI1_SSIMIS_R_RORMIS_MASK       (0x00000001)
#define SSI1_SSIMIS_R_RORMIS_BIT        (0)
#define SSI1_SSIMIS_R_RORMIS_NOOCCUR    (0x00000000)
#define SSI1_SSIMIS_R_RORMIS_OCCUR      (0x00000001)

#define SSI1_SSIMIS_RORMIS_MASK         (0x00000001)
#define SSI1_SSIMIS_RORMIS_NOOCCUR      (0x00000000)
#define SSI1_SSIMIS_RORMIS_OCCUR        (0x00000001)
//--------

//--------
#define SSI1_SSIMIS_R_RTMIS_MASK       (0x00000002)
#define SSI1_SSIMIS_R_RTMIS_BIT        (1)
#define SSI1_SSIMIS_R_RTMIS_NOOCCUR    (0x00000000)
#define SSI1_SSIMIS_R_RTMIS_OCCUR      (0x00000002)

#define SSI1_SSIMIS_RTMIS_MASK         (0x00000001)
#define SSI1_SSIMIS_RTMIS_NOOCCUR      (0x00000000)
#define SSI1_SSIMIS_RTMIS_OCCUR        (0x00000001)
//--------

//--------
#define SSI1_SSIMIS_R_RXMIS_MASK       (0x00000004)
#define SSI1_SSIMIS_R_RXMIS_BIT        (2)
#define SSI1_SSIMIS_R_RXMIS_NOOCCUR    (0x00000000)
#define SSI1_SSIMIS_R_RXMIS_OCCUR      (0x00000004)

#define SSI1_SSIMIS_RXMIS_MASK         (0x00000001)
#define SSI1_SSIMIS_RXMIS_NOOCCUR      (0x00000000)
#define SSI1_SSIMIS_RXMIS_OCCUR        (0x00000001)
//--------

//--------
#define SSI1_SSIMIS_R_TXMIS_MASK       (0x00000008)
#define SSI1_SSIMIS_R_TXMIS_BIT        (3)
#define SSI1_SSIMIS_R_TXMIS_NOOCCUR    (0x00000000)
#define SSI1_SSIMIS_R_TXMIS_OCCUR      (0x00000008)

#define SSI1_SSIMIS_TXMIS_MASK         (0x00000001)
#define SSI1_SSIMIS_TXMIS_NOOCCUR      (0x00000000)
#define SSI1_SSIMIS_TXMIS_OCCUR        (0x00000001)
//--------

#define SSI1_SSIMIS_RORMIS_BB    (*((volatile const uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSIMIS_OFFSET)*32)+(0*4))))
#define SSI1_SSIMIS_RTMIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSIMIS_OFFSET)*32)+(1*4))))
#define SSI1_SSIMIS_RXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSIMIS_OFFSET)*32)+(2*4))))
#define SSI1_SSIMIS_TXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSIMIS_OFFSET)*32)+(3*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.9 SSIICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSIICR            (((SSIICR_TypeDef*)(SSI1_BASE + SSI_SSIICR_OFFSET )))
#define SSI1_SSIICR_R          (*((volatile uint32_t *)(SSI1_BASE +SSI_SSIICR_OFFSET)))


//--------
#define SSI1_SSIICR_R_RORIC_MASK       (0x00000001)
#define SSI1_SSIICR_R_RORIC_BIT        (0)
#define SSI1_SSIICR_R_RORIC_CLEAR      (0x00000001)

#define SSI1_SSIICR_RORIC_MASK         (0x00000001)
#define SSI1_SSIICR_RORIC_CLEAR        (0x00000001)
//--------

//--------
#define SSI1_SSIICR_R_RTIC_MASK       (0x00000002)
#define SSI1_SSIICR_R_RTIC_BIT        (1)
#define SSI1_SSIICR_R_RTIC_CLEAR      (0x00000002)

#define SSI1_SSIICR_RTIC_MASK         (0x00000001)
#define SSI1_SSIICR_RTIC_CLEAR        (0x00000001)
//--------

#define SSI1_SSIICR_RORIC_BB    (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSIICR_OFFSET)*32)+(0*4))))
#define SSI1_SSIICR_RTIC_BB     (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSIICR_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.10 SSIDMACTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSIDMACTL            (((SSIDMACTL_TypeDef*)(SSI1_BASE + SSI_SSIDMACTL_OFFSET )))
#define SSI1_SSIDMACTL_R          (*((volatile uint32_t *)(SSI1_BASE +SSI_SSIDMACTL_OFFSET)))

//--------
#define SSI1_SSIDMACTL_R_RXDMAE_MASK       (0x00000001)
#define SSI1_SSIDMACTL_R_RXDMAE_BIT        (0)
#define SSI1_SSIDMACTL_R_RXDMAE_DIS        (0x00000000)
#define SSI1_SSIDMACTL_R_RXDMAE_EN         (0x00000001)

#define SSI1_SSIDMACTL_RXDMAE_MASK         (0x00000001)
#define SSI1_SSIDMACTL_RXDMAE_DIS          (0x00000000)
#define SSI1_SSIDMACTL_RXDMAE_EN           (0x00000001)
//--------


//--------
#define SSI1_SSIDMACTL_R_TXDMAE_MASK       (0x00000002)
#define SSI1_SSIDMACTL_R_TXDMAE_BIT        (1)
#define SSI1_SSIDMACTL_R_TXDMAE_DIS        (0x00000000)
#define SSI1_SSIDMACTL_R_TXDMAE_EN         (0x00000002)

#define SSI1_SSIDMACTL_TXDMAE_MASK         (0x00000001)
#define SSI1_SSIDMACTL_TXDMAE_DIS          (0x00000000)
#define SSI1_SSIDMACTL_TXDMAE_EN           (0x00000001)
//--------

#define SSI1_SSIDMACTL_RXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSIDMACTL_OFFSET)*32)+(0*4))))
#define SSI1_SSIDMACTL_TXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((SSI1_OFFSET+SSI_SSIDMACTL_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.11 SSICC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSICC            (((SSICC_TypeDef*)(SSI1_BASE + SSI_SSICC_OFFSET )))
#define SSI1_SSICC_R          (*((volatile uint32_t *)(SSI1_BASE +SSI_SSICC_OFFSET)))

//--------
#define SSI1_SSICC_R_CS_MASK       (0x0000000F)
#define SSI1_SSICC_R_CS_BIT        (0)
#define SSI1_SSICC_R_CS_SYSCLK     (0x00000000)
#define SSI1_SSICC_R_CS_PIOSC      (0x00000005)

#define SSI1_SSICC_CS_MASK         (0x0000000F)
#define SSI1_SSICC_CS_SYSCLK       (0x00000000)
#define SSI1_SSICC_CS_PIOSC        (0x00000005)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.12 SSIPeriphID4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSIPeriphID4            (((SSIPeriphID4_TypeDef*)(SSI1_BASE + SSI_SSIPeriphID4_OFFSET )))
#define SSI1_SSIPeriphID4_R          (*((volatile const uint32_t *)(SSI1_BASE +SSI_SSIPeriphID4_OFFSET)))

//--------
#define SSI1_SSIPeriphID4_R_PID4_MASK       (0x000000FF)
#define SSI1_SSIPeriphID4_R_PID4_BIT        (0)
#define SSI1_SSIPeriphID4_R_PID4_DEFAULT    (0x00000000)

#define SSI1_SSIPeriphID4_PID4_MASK         (0x000000FF)
#define SSI1_SSIPeriphID4_PID4_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.13 SSIPeriphID5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSIPeriphID5            (((SSIPeriphID5_TypeDef*)(SSI1_BASE + SSI_SSIPeriphID5_OFFSET )))
#define SSI1_SSIPeriphID5_R          (*((volatile const uint32_t *)(SSI1_BASE +SSI_SSIPeriphID5_OFFSET)))

//--------
#define SSI1_SSIPeriphID5_R_PID5_MASK       (0x000000FF)
#define SSI1_SSIPeriphID5_R_PID5_BIT        (0)
#define SSI1_SSIPeriphID5_R_PID5_DEFAULT    (0x00000000)

#define SSI1_SSIPeriphID5_PID5_MASK         (0x000000FF)
#define SSI1_SSIPeriphID5_PID5_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.14 SSIPeriphID6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSIPeriphID6            (((SSIPeriphID6_TypeDef*)(SSI1_BASE + SSI_SSIPeriphID6_OFFSET )))
#define SSI1_SSIPeriphID6_R          (*((volatile const uint32_t *)(SSI1_BASE +SSI_SSIPeriphID6_OFFSET)))



//--------
#define SSI1_SSIPeriphID6_R_PID6_MASK       (0x000000FF)
#define SSI1_SSIPeriphID6_R_PID6_BIT        (0)
#define SSI1_SSIPeriphID6_R_PID6_DEFAULT    (0x00000000)

#define SSI1_SSIPeriphID6_PID6_MASK         (0x000000FF)
#define SSI1_SSIPeriphID6_PID6_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.15 SSIPeriphID7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSIPeriphID7            (((SSIPeriphID7_TypeDef*)(SSI1_BASE + SSI_SSIPeriphID7_OFFSET )))
#define SSI1_SSIPeriphID7_R          (*((volatile const uint32_t *)(SSI1_BASE +SSI_SSIPeriphID7_OFFSET)))



//--------
#define SSI1_SSIPeriphID7_R_PID7_MASK       (0x000000FF)
#define SSI1_SSIPeriphID7_R_PID7_BIT        (0)
#define SSI1_SSIPeriphID7_R_PID7_DEFAULT    (0x00000000)

#define SSI1_SSIPeriphID7_PID7_MASK         (0x000000FF)
#define SSI1_SSIPeriphID7_PID7_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.16 SSIPeriphID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSIPeriphID0            (((SSIPeriphID0_TypeDef*)(SSI1_BASE + SSI_SSIPeriphID0_OFFSET )))
#define SSI1_SSIPeriphID0_R          (*((volatile const uint32_t *)(SSI1_BASE +SSI_SSIPeriphID0_OFFSET)))



//--------
#define SSI1_SSIPeriphID0_R_PID0_MASK       (0x000000FF)
#define SSI1_SSIPeriphID0_R_PID0_BIT        (0)
#define SSI1_SSIPeriphID0_R_PID0_DEFAULT    (0x00000022)

#define SSI1_SSIPeriphID0_PID0_MASK         (0x000000FF)
#define SSI1_SSIPeriphID0_PID0_DEFAULT      (0x00000022)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.17 SSIPeriphID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSIPeriphID1            (((SSIPeriphID1_TypeDef*)(SSI1_BASE + SSI_SSIPeriphID1_OFFSET )))
#define SSI1_SSIPeriphID1_R          (*((volatile const uint32_t *)(SSI1_BASE +SSI_SSIPeriphID1_OFFSET)))



//--------
#define SSI1_SSIPeriphID1_R_PID1_MASK       (0x000000FF)
#define SSI1_SSIPeriphID1_R_PID1_BIT        (0)
#define SSI1_SSIPeriphID1_R_PID1_DEFAULT    (0x00000000)

#define SSI1_SSIPeriphID1_PID1_MASK         (0x000000FF)
#define SSI1_SSIPeriphID1_PID1_DEFAULT      (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.18 SSIPeriphID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSIPeriphID2            (((SSIPeriphID2_TypeDef*)(SSI1_BASE + SSI_SSIPeriphID2_OFFSET )))
#define SSI1_SSIPeriphID2_R          (*((volatile const uint32_t *)(SSI1_BASE +SSI_SSIPeriphID2_OFFSET)))

//--------
#define SSI1_SSIPeriphID2_R_PID2_MASK       (0x000000FF)
#define SSI1_SSIPeriphID2_R_PID2_BIT        (0)
#define SSI1_SSIPeriphID2_R_PID2_DEFAULT    (0x00000018)

#define SSI1_SSIPeriphID2_PID2_MASK         (0x000000FF)
#define SSI1_SSIPeriphID2_PID2_DEFAULT      (0x00000018)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.19 SSIPeriphID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSIPeriphID3            (((SSIPeriphID3_TypeDef*)(SSI1_BASE + SSI_SSIPeriphID3_OFFSET )))
#define SSI1_SSIPeriphID3_R          (*((volatile const uint32_t *)(SSI1_BASE +SSI_SSIPeriphID3_OFFSET)))

//--------
#define SSI1_SSIPeriphID3_R_PID3_MASK       (0x000000FF)
#define SSI1_SSIPeriphID3_R_PID3_BIT        (0)
#define SSI1_SSIPeriphID3_R_PID3_DEFAULT    (0x00000001)

#define SSI1_SSIPeriphID3_PID3_MASK         (0x000000FF)
#define SSI1_SSIPeriphID3_PID3_DEFAULT      (0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.20 SSIPCellID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSIPCellID0            (((SSIPCellID0_TypeDef*)(SSI1_BASE + SSI_SSIPCellID0_OFFSET )))
#define SSI1_SSIPCellID0_R          (*((volatile const uint32_t *)(SSI1_BASE +SSI_SSIPCellID0_OFFSET)))

//--------
#define SSI1_SSIPCellID0_R_CID0_MASK       (0x000000FF)
#define SSI1_SSIPCellID0_R_CID0_BIT        (0)
#define SSI1_SSIPCellID0_R_CID0_DEFAULT    (0x0000000D)

#define SSI1_SSIPCellID0_CID0_MASK         (0x000000FF)
#define SSI1_SSIPCellID0_CID0_DEFAULT      (0x0000000D)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.21 SSIPCellID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSIPCellID1            (((SSIPCellID1_TypeDef*)(SSI1_BASE + SSI_SSIPCellID1_OFFSET )))
#define SSI1_SSIPCellID1_R          (*((volatile const uint32_t *)(SSI1_BASE +SSI_SSIPCellID1_OFFSET)))

//--------
#define SSI1_SSIPCellID1_R_CID1_MASK       (0x000000FF)
#define SSI1_SSIPCellID1_R_CID1_BIT        (0)
#define SSI1_SSIPCellID1_R_CID1_DEFAULT    (0x000000F0)

#define SSI1_SSIPCellID1_CID1_MASK         (0x000000FF)
#define SSI1_SSIPCellID1_CID1_DEFAULT      (0x000000F0)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.22 SSIPCellID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSIPCellID2            (((SSIPCellID2_TypeDef*)(SSI1_BASE + SSI_SSIPCellID2_OFFSET )))
#define SSI1_SSIPCellID2_R          (*((volatile const uint32_t *)(SSI1_BASE +SSI_SSIPCellID2_OFFSET)))

//--------
#define SSI1_SSIPCellID2_R_CID2_MASK       (0x000000FF)
#define SSI1_SSIPCellID2_R_CID2_BIT        (0)
#define SSI1_SSIPCellID2_R_CID2_DEFAULT    (0x00000005)

#define SSI1_SSIPCellID2_CID2_MASK         (0x000000FF)
#define SSI1_SSIPCellID2_CID2_DEFAULT      (0x00000005)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1.23 SSIPCellID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI1_SSIPCellID3            (((SSIPCellID3_TypeDef*)(SSI1_BASE + SSI_SSIPCellID3_OFFSET )))
#define SSI1_SSIPCellID3_R          (*((volatile const uint32_t *)(SSI1_BASE +SSI_SSIPCellID3_OFFSET)))

//--------
#define SSI1_SSIPCellID3_R_CID3_MASK       (0x000000FF)
#define SSI1_SSIPCellID3_R_CID3_BIT        (0)
#define SSI1_SSIPCellID3_R_CID3_DEFAULT    (0x000000B1)

#define SSI1_SSIPCellID3_CID3_MASK         (0x000000FF)
#define SSI1_SSIPCellID3_CID3_DEFAULT      (0x000000B1)
//--------


// todo SSI2

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 SSI2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.1 SSICR0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSICR0            (((SSICR0_TypeDef*)(SSI2_BASE + SSI_SSICR0_OFFSET )))
#define SSI2_SSICR0_R          (*((volatile uint32_t *)(SSI2_BASE +SSI_SSICR0_OFFSET)))


//--------
#define SSI2_SSICR0_R_DSS_MASK       (0x0000000F)
#define SSI2_SSICR0_R_DSS_BIT        (0)
#define SSI2_SSICR0_R_DSS_4BTIS      (0x00000003)
#define SSI2_SSICR0_R_DSS_5BTIS      (0x00000004)
#define SSI2_SSICR0_R_DSS_6BTIS      (0x00000005)
#define SSI2_SSICR0_R_DSS_7BTIS      (0x00000006)
#define SSI2_SSICR0_R_DSS_8BTIS      (0x00000007)
#define SSI2_SSICR0_R_DSS_9BTIS      (0x00000008)
#define SSI2_SSICR0_R_DSS_10BTIS     (0x00000009)
#define SSI2_SSICR0_R_DSS_11BTIS     (0x0000000A)
#define SSI2_SSICR0_R_DSS_12BTIS     (0x0000000B)
#define SSI2_SSICR0_R_DSS_13BTIS     (0x0000000C)
#define SSI2_SSICR0_R_DSS_14BTIS     (0x0000000D)
#define SSI2_SSICR0_R_DSS_15BTIS     (0x0000000E)
#define SSI2_SSICR0_R_DSS_16BTIS     (0x0000000F)

#define SSI2_SSICR0_DSS_MASK         (0x00000001)
#define SSI2_SSICR0_DSS_4BTIS        (0x00000003)
#define SSI2_SSICR0_DSS_5BTIS        (0x00000004)
#define SSI2_SSICR0_DSS_6BTIS        (0x00000005)
#define SSI2_SSICR0_DSS_7BTIS        (0x00000006)
#define SSI2_SSICR0_DSS_8BTIS        (0x00000007)
#define SSI2_SSICR0_DSS_9BTIS        (0x00000008)
#define SSI2_SSICR0_DSS_10BTIS       (0x00000009)
#define SSI2_SSICR0_DSS_11BTIS       (0x0000000A)
#define SSI2_SSICR0_DSS_12BTIS       (0x0000000B)
#define SSI2_SSICR0_DSS_13BTIS       (0x0000000C)
#define SSI2_SSICR0_DSS_14BTIS       (0x0000000D)
#define SSI2_SSICR0_DSS_15BTIS       (0x0000000E)
#define SSI2_SSICR0_DSS_16BTIS       (0x0000000F)
//--------

//--------
#define SSI2_SSICR0_R_FRF_MASK       (0x00000030)
#define SSI2_SSICR0_R_FRF_BIT        (4)
#define SSI2_SSICR0_R_FRF_FREESCALE  (0x00000000)
#define SSI2_SSICR0_R_FRF_TEXAS      (0x00000010)
#define SSI2_SSICR0_R_FRF_MICROWIRE  (0x00000020)

#define SSI2_SSICR0_FRF_MASK         (0x00000003)
#define SSI2_SSICR0_FRF_FREESCALE    (0x00000000)
#define SSI2_SSICR0_FRF_TEXAS        (0x00000001)
#define SSI2_SSICR0_FRF_MICROWIRE    (0x00000002)
//--------

//--------
#define SSI2_SSICR0_R_SPO_MASK       (0x00000040)
#define SSI2_SSICR0_R_SPO_BIT        (6)
#define SSI2_SSICR0_R_SPO_LOW        (0x00000000)
#define SSI2_SSICR0_R_SPO_HIGH       (0x00000040)

#define SSI2_SSICR0_SPO_MASK         (0x00000001)
#define SSI2_SSICR0_SPO_LOW          (0x00000000)
#define SSI2_SSICR0_SPO_HIGH         (0x00000001)
//--------

//--------
#define SSI2_SSICR0_R_SPH_MASK       (0x00000080)
#define SSI2_SSICR0_R_SPH_BIT        (7)
#define SSI2_SSICR0_R_SPH_FIRST      (0x00000000)
#define SSI2_SSICR0_R_SPH_SECOND     (0x00000080)

#define SSI2_SSICR0_SPH_MASK         (0x00000001)
#define SSI2_SSICR0_SPH_FIRST        (0x00000000)
#define SSI2_SSICR0_SPH_SECOND       (0x00000001)
//--------

//--------
#define SSI2_SSICR0_R_SCR_MASK       (0x0000FF00)
#define SSI2_SSICR0_R_SCR_BIT        (8)

#define SSI2_SSICR0_SCR_MASK         (0x000000FF)
//--------

#define SSI2_SSICR0_SPO_BB     (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSICR0_OFFSET)*32)+(6*4))))
#define SSI2_SSICR0_SPH_BB     (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSICR0_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.2 SSICR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSICR1            (((SSICR1_TypeDef*)(SSI2_BASE + SSI_SSICR1_OFFSET )))
#define SSI2_SSICR1_R          (*((volatile uint32_t *)(SSI2_BASE +SSI_SSICR1_OFFSET)))

//--------
#define SSI2_SSICR1_R_LBM_MASK       (0x00000001)
#define SSI2_SSICR1_R_LBM_BIT        (0)
#define SSI2_SSICR1_R_LBM_NORMAL     (0x00000000)
#define SSI2_SSICR1_R_LBM_LOOPBACK   (0x00000001)

#define SSI2_SSICR1_LBM_MASK         (0x00000001)
#define SSI2_SSICR1_LBM_NORMAL       (0x00000000)
#define SSI2_SSICR1_LBM_LOOPBACK     (0x00000001)
//--------

//--------
#define SSI2_SSICR1_R_SSE_MASK       (0x00000002)
#define SSI2_SSICR1_R_SSE_BIT        (1)
#define SSI2_SSICR1_R_SSE_DIS        (0x00000000)
#define SSI2_SSICR1_R_SSE_EN         (0x00000002)

#define SSI2_SSICR1_SSE_MASK         (0x00000001)
#define SSI2_SSICR1_SSE_DIS          (0x00000000)
#define SSI2_SSICR1_SSE_EN           (0x00000001)
//--------

//--------
#define SSI2_SSICR1_R_MS_MASK       (0x00000004)
#define SSI2_SSICR1_R_MS_BIT        (2)
#define SSI2_SSICR1_R_MS_MASTER     (0x00000000)
#define SSI2_SSICR1_R_MS_SLAVE      (0x00000004)

#define SSI2_SSICR1_MS_MASK         (0x00000001)
#define SSI2_SSICR1_MS_MASTER       (0x00000000)
#define SSI2_SSICR1_MS_SLAVE        (0x00000001)
//--------

//--------
#define SSI2_SSICR1_R_EOT_MASK       (0x00000010)
#define SSI2_SSICR1_R_EOT_BIT        (4)
#define SSI2_SSICR1_R_EOT_FIFO       (0x00000000)
#define SSI2_SSICR1_R_EOT_END        (0x00000010)

#define SSI2_SSICR1_EOT_MASK         (0x00000001)
#define SSI2_SSICR1_EOT_FIFO         (0x00000000)
#define SSI2_SSICR1_EOT_END          (0x00000001)
//--------

#define SSI2_SSICR1_LBM_BB     (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSICR1_OFFSET)*32)+(0*4))))
#define SSI2_SSICR1_SSE_BB     (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSICR1_OFFSET)*32)+(1*4))))
#define SSI2_SSICR1_MS_BB      (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSICR1_OFFSET)*32)+(2*4))))
#define SSI2_SSICR1_EOT_BB     (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSICR1_OFFSET)*32)+(4*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.3 SSIDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSIDR            (((SSIDR_TypeDef*)(SSI2_BASE + SSI_SSIDR_OFFSET )))
#define SSI2_SSIDR_R          (*((volatile uint32_t *)(SSI2_BASE +SSI_SSIDR_OFFSET)))

//--------
#define SSI2_SSIDR_R_DATA_MASK       (0x0000FFFF)
#define SSI2_SSIDR_R_DATA_BIT        (0)

#define SSI2_SSIDR_DATA_MASK         (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.4 SSISR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSISR            (((SSISR_TypeDef*)(SSI2_BASE + SSI_SSISR_OFFSET )))
#define SSI2_SSISR_R          (*((volatile uint32_t *)(SSI2_BASE +SSI_SSISR_OFFSET)))

//--------
#define SSI2_SSISR_R_TFE_MASK       (0x00000001)
#define SSI2_SSISR_R_TFE_BIT        (0)
#define SSI2_SSISR_R_TFE_NOEMPTY    (0x00000000)
#define SSI2_SSISR_R_TFE_EMPTY      (0x00000001)

#define SSI2_SSISR_TFE_MASK         (0x00000001)
#define SSI2_SSISR_TFE_NOEMPTY      (0x00000000)
#define SSI2_SSISR_TFE_EMPTY        (0x00000001)
//--------

//--------
#define SSI2_SSISR_R_TNF_MASK       (0x00000002)
#define SSI2_SSISR_R_TNF_BIT        (1)
#define SSI2_SSISR_R_TNF_FULL       (0x00000000)
#define SSI2_SSISR_R_TNF_NOFULL     (0x00000002)

#define SSI2_SSISR_TNF_MASK         (0x00000001)
#define SSI2_SSISR_TNF_FULL         (0x00000000)
#define SSI2_SSISR_TNF_NOFULL       (0x00000001)
//--------

//--------
#define SSI2_SSISR_R_RNE_MASK       (0x00000004)
#define SSI2_SSISR_R_RNE_BIT        (2)
#define SSI2_SSISR_R_RNE_EMPTY      (0x00000000)
#define SSI2_SSISR_R_RNE_NOEMPTY    (0x00000004)

#define SSI2_SSISR_RNE_MASK         (0x00000001)
#define SSI2_SSISR_RNE_EMPTY        (0x00000000)
#define SSI2_SSISR_RNE_NOEMPTY      (0x00000001)
//--------

//--------
#define SSI2_SSISR_R_RFF_MASK       (0x00000008)
#define SSI2_SSISR_R_RFF_BIT        (3)
#define SSI2_SSISR_R_RFF_NOFULL     (0x00000000)
#define SSI2_SSISR_R_RFF_FULL       (0x00000008)

#define SSI2_SSISR_RFF_MASK         (0x00000001)
#define SSI2_SSISR_RFF_NOFULL       (0x00000000)
#define SSI2_SSISR_RFF_FULL         (0x00000001)
//--------

//--------
#define SSI2_SSISR_R_BSY_MASK       (0x00000010)
#define SSI2_SSISR_R_BSY_BIT        (4)
#define SSI2_SSISR_R_BSY_IDLE       (0x00000000)
#define SSI2_SSISR_R_BSY_BUSY       (0x00000010)

#define SSI2_SSISR_BSY_MASK         (0x00000001)
#define SSI2_SSISR_BSY_IDLE         (0x00000000)
#define SSI2_SSISR_BSY_BUSY         (0x00000001)
//--------

#define SSI2_SSISR_TFE_BB     (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSISR_OFFSET)*32)+(0*4))))
#define SSI2_SSISR_TNF_BB     (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSISR_OFFSET)*32)+(1*4))))
#define SSI2_SSISR_RNE_BB     (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSISR_OFFSET)*32)+(2*4))))
#define SSI2_SSISR_RFF_BB     (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSISR_OFFSET)*32)+(3*4))))
#define SSI2_SSISR_BSY_BB     (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSISR_OFFSET)*32)+(4*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.5 SSICPSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSICPSR            (((SSICPSR_TypeDef*)(SSI2_BASE + SSI_SSICPSR_OFFSET )))
#define SSI2_SSICPSR_R          (*((volatile uint32_t *)(SSI2_BASE +SSI_SSICPSR_OFFSET)))

//--------
#define SSI2_SSICPSR_R_DATA_MASK       (0x000000FF)
#define SSI2_SSICPSR_R_DATA_BIT        (0)

#define SSI2_SSICPSR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.6 SSIIM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSIIM            (((SSIIM_TypeDef*)(SSI2_BASE + SSI_SSIIM_OFFSET )))
#define SSI2_SSIIM_R          (*((volatile uint32_t *)(SSI2_BASE +SSI_SSIIM_OFFSET)))

//--------
#define SSI2_SSIIM_R_RORIM_MASK       (0x00000001)
#define SSI2_SSIIM_R_RORIM_BIT        (0)
#define SSI2_SSIIM_R_RORIM_DIS        (0x00000000)
#define SSI2_SSIIM_R_RORIM_EN         (0x00000001)

#define SSI2_SSIIM_RORIM_MASK         (0x00000001)
#define SSI2_SSIIM_RORIM_DIS          (0x00000000)
#define SSI2_SSIIM_RORIM_EN           (0x00000001)
//--------

//--------
#define SSI2_SSIIM_R_RTIM_MASK       (0x00000002)
#define SSI2_SSIIM_R_RTIM_BIT        (1)
#define SSI2_SSIIM_R_RTIM_DIS        (0x00000000)
#define SSI2_SSIIM_R_RTIM_EN         (0x00000002)

#define SSI2_SSIIM_RTIM_MASK         (0x00000001)
#define SSI2_SSIIM_RTIM_DIS          (0x00000000)
#define SSI2_SSIIM_RTIM_EN           (0x00000001)
//--------

//--------
#define SSI2_SSIIM_R_RXIM_MASK       (0x00000004)
#define SSI2_SSIIM_R_RXIM_BIT        (2)
#define SSI2_SSIIM_R_RXIM_DIS        (0x00000000)
#define SSI2_SSIIM_R_RXIM_EN         (0x00000004)

#define SSI2_SSIIM_RXIM_MASK         (0x00000001)
#define SSI2_SSIIM_RXIM_DIS          (0x00000000)
#define SSI2_SSIIM_RXIM_EN           (0x00000001)
//--------

//--------
#define SSI2_SSIIM_R_TXIM_MASK       (0x00000008)
#define SSI2_SSIIM_R_TXIM_BIT        (3)
#define SSI2_SSIIM_R_TXIM_DIS        (0x00000000)
#define SSI2_SSIIM_R_TXIM_EN         (0x00000008)

#define SSI2_SSIIM_TXIM_MASK         (0x00000001)
#define SSI2_SSIIM_TXIM_DIS          (0x00000000)
#define SSI2_SSIIM_TXIM_EN           (0x00000001)
//--------

#define SSI2_SSIIM_RORIM_BB    (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSIIM_OFFSET)*32)+(0*4))))
#define SSI2_SSIIM_RTIM_BB     (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSIIM_OFFSET)*32)+(1*4))))
#define SSI2_SSIIM_RXIM_BB     (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSIIM_OFFSET)*32)+(2*4))))
#define SSI2_SSIIM_TXIM_BB     (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSIIM_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.7 SSIRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSIRIS            (((SSIRIS_TypeDef*)(SSI2_BASE + SSI_SSIRIS_OFFSET )))
#define SSI2_SSIRIS_R          (*((volatile const uint32_t *)(SSI2_BASE +SSI_SSIRIS_OFFSET)))

//--------
#define SSI2_SSIRIS_R_RORRIS_MASK       (0x00000001)
#define SSI2_SSIRIS_R_RORRIS_BIT        (0)
#define SSI2_SSIRIS_R_RORRIS_NOACTIVE   (0x00000000)
#define SSI2_SSIRIS_R_RORRIS_ACTIVE     (0x00000001)

#define SSI2_SSIRIS_RORRIS_MASK         (0x00000001)
#define SSI2_SSIRIS_RORRIS_NOACTIVE     (0x00000000)
#define SSI2_SSIRIS_RORRIS_ACTIVE       (0x00000001)
//--------

//--------
#define SSI2_SSIRIS_R_RTRIS_MASK       (0x00000002)
#define SSI2_SSIRIS_R_RTRIS_BIT        (1)
#define SSI2_SSIRIS_R_RTRIS_NOACTIVE   (0x00000000)
#define SSI2_SSIRIS_R_RTRIS_ACTIVE     (0x00000002)

#define SSI2_SSIRIS_RTRIS_MASK         (0x00000001)
#define SSI2_SSIRIS_RTRIS_NOACTIVE     (0x00000000)
#define SSI2_SSIRIS_RTRIS_ACTIVE       (0x00000001)
//--------

//--------
#define SSI2_SSIRIS_R_RXRIS_MASK       (0x00000004)
#define SSI2_SSIRIS_R_RXRIS_BIT        (2)
#define SSI2_SSIRIS_R_RXRIS_NOACTIVE   (0x00000000)
#define SSI2_SSIRIS_R_RXRIS_ACTIVE     (0x00000004)

#define SSI2_SSIRIS_RXRIS_MASK         (0x00000001)
#define SSI2_SSIRIS_RXRIS_NOACTIVE     (0x00000000)
#define SSI2_SSIRIS_RXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define SSI2_SSIRIS_R_TXRIS_MASK       (0x00000008)
#define SSI2_SSIRIS_R_TXRIS_BIT        (3)
#define SSI2_SSIRIS_R_TXRIS_NOACTIVE   (0x00000000)
#define SSI2_SSIRIS_R_TXRIS_ACTIVE     (0x00000008)

#define SSI2_SSIRIS_TXRIS_MASK         (0x00000001)
#define SSI2_SSIRIS_TXRIS_NOACTIVE     (0x00000000)
#define SSI2_SSIRIS_TXRIS_ACTIVE       (0x00000001)
//--------

#define SSI2_SSIRIS_RORRIS_BB    (*((volatile const uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSIRIS_OFFSET)*32)+(0*4))))
#define SSI2_SSIRIS_RTRIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSIRIS_OFFSET)*32)+(1*4))))
#define SSI2_SSIRIS_RXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSIRIS_OFFSET)*32)+(2*4))))
#define SSI2_SSIRIS_TXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSIRIS_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.8 SSIMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSIMIS            (((SSIMIS_TypeDef*)(SSI2_BASE + SSI_SSIMIS_OFFSET )))
#define SSI2_SSIMIS_R          (*((volatile const uint32_t *)(SSI2_BASE +SSI_SSIMIS_OFFSET)))


//--------
#define SSI2_SSIMIS_R_RORMIS_MASK       (0x00000001)
#define SSI2_SSIMIS_R_RORMIS_BIT        (0)
#define SSI2_SSIMIS_R_RORMIS_NOOCCUR    (0x00000000)
#define SSI2_SSIMIS_R_RORMIS_OCCUR      (0x00000001)

#define SSI2_SSIMIS_RORMIS_MASK         (0x00000001)
#define SSI2_SSIMIS_RORMIS_NOOCCUR      (0x00000000)
#define SSI2_SSIMIS_RORMIS_OCCUR        (0x00000001)
//--------

//--------
#define SSI2_SSIMIS_R_RTMIS_MASK       (0x00000002)
#define SSI2_SSIMIS_R_RTMIS_BIT        (1)
#define SSI2_SSIMIS_R_RTMIS_NOOCCUR    (0x00000000)
#define SSI2_SSIMIS_R_RTMIS_OCCUR      (0x00000002)

#define SSI2_SSIMIS_RTMIS_MASK         (0x00000001)
#define SSI2_SSIMIS_RTMIS_NOOCCUR      (0x00000000)
#define SSI2_SSIMIS_RTMIS_OCCUR        (0x00000001)
//--------

//--------
#define SSI2_SSIMIS_R_RXMIS_MASK       (0x00000004)
#define SSI2_SSIMIS_R_RXMIS_BIT        (2)
#define SSI2_SSIMIS_R_RXMIS_NOOCCUR    (0x00000000)
#define SSI2_SSIMIS_R_RXMIS_OCCUR      (0x00000004)

#define SSI2_SSIMIS_RXMIS_MASK         (0x00000001)
#define SSI2_SSIMIS_RXMIS_NOOCCUR      (0x00000000)
#define SSI2_SSIMIS_RXMIS_OCCUR        (0x00000001)
//--------

//--------
#define SSI2_SSIMIS_R_TXMIS_MASK       (0x00000008)
#define SSI2_SSIMIS_R_TXMIS_BIT        (3)
#define SSI2_SSIMIS_R_TXMIS_NOOCCUR    (0x00000000)
#define SSI2_SSIMIS_R_TXMIS_OCCUR      (0x00000008)

#define SSI2_SSIMIS_TXMIS_MASK         (0x00000001)
#define SSI2_SSIMIS_TXMIS_NOOCCUR      (0x00000000)
#define SSI2_SSIMIS_TXMIS_OCCUR        (0x00000001)
//--------

#define SSI2_SSIMIS_RORMIS_BB    (*((volatile const uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSIMIS_OFFSET)*32)+(0*4))))
#define SSI2_SSIMIS_RTMIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSIMIS_OFFSET)*32)+(1*4))))
#define SSI2_SSIMIS_RXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSIMIS_OFFSET)*32)+(2*4))))
#define SSI2_SSIMIS_TXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSIMIS_OFFSET)*32)+(3*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.9 SSIICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSIICR            (((SSIICR_TypeDef*)(SSI2_BASE + SSI_SSIICR_OFFSET )))
#define SSI2_SSIICR_R          (*((volatile uint32_t *)(SSI2_BASE +SSI_SSIICR_OFFSET)))


//--------
#define SSI2_SSIICR_R_RORIC_MASK       (0x00000001)
#define SSI2_SSIICR_R_RORIC_BIT        (0)
#define SSI2_SSIICR_R_RORIC_CLEAR      (0x00000001)

#define SSI2_SSIICR_RORIC_MASK         (0x00000001)
#define SSI2_SSIICR_RORIC_CLEAR        (0x00000001)
//--------

//--------
#define SSI2_SSIICR_R_RTIC_MASK       (0x00000002)
#define SSI2_SSIICR_R_RTIC_BIT        (1)
#define SSI2_SSIICR_R_RTIC_CLEAR      (0x00000002)

#define SSI2_SSIICR_RTIC_MASK         (0x00000001)
#define SSI2_SSIICR_RTIC_CLEAR        (0x00000001)
//--------

#define SSI2_SSIICR_RORIC_BB    (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSIICR_OFFSET)*32)+(0*4))))
#define SSI2_SSIICR_RTIC_BB     (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSIICR_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.10 SSIDMACTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSIDMACTL            (((SSIDMACTL_TypeDef*)(SSI2_BASE + SSI_SSIDMACTL_OFFSET )))
#define SSI2_SSIDMACTL_R          (*((volatile uint32_t *)(SSI2_BASE +SSI_SSIDMACTL_OFFSET)))

//--------
#define SSI2_SSIDMACTL_R_RXDMAE_MASK       (0x00000001)
#define SSI2_SSIDMACTL_R_RXDMAE_BIT        (0)
#define SSI2_SSIDMACTL_R_RXDMAE_DIS        (0x00000000)
#define SSI2_SSIDMACTL_R_RXDMAE_EN         (0x00000001)

#define SSI2_SSIDMACTL_RXDMAE_MASK         (0x00000001)
#define SSI2_SSIDMACTL_RXDMAE_DIS          (0x00000000)
#define SSI2_SSIDMACTL_RXDMAE_EN           (0x00000001)
//--------


//--------
#define SSI2_SSIDMACTL_R_TXDMAE_MASK       (0x00000002)
#define SSI2_SSIDMACTL_R_TXDMAE_BIT        (1)
#define SSI2_SSIDMACTL_R_TXDMAE_DIS        (0x00000000)
#define SSI2_SSIDMACTL_R_TXDMAE_EN         (0x00000002)

#define SSI2_SSIDMACTL_TXDMAE_MASK         (0x00000001)
#define SSI2_SSIDMACTL_TXDMAE_DIS          (0x00000000)
#define SSI2_SSIDMACTL_TXDMAE_EN           (0x00000001)
//--------

#define SSI2_SSIDMACTL_RXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSIDMACTL_OFFSET)*32)+(0*4))))
#define SSI2_SSIDMACTL_TXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((SSI2_OFFSET+SSI_SSIDMACTL_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.11 SSICC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSICC            (((SSICC_TypeDef*)(SSI2_BASE + SSI_SSICC_OFFSET )))
#define SSI2_SSICC_R          (*((volatile uint32_t *)(SSI2_BASE +SSI_SSICC_OFFSET)))

//--------
#define SSI2_SSICC_R_CS_MASK       (0x0000000F)
#define SSI2_SSICC_R_CS_BIT        (0)
#define SSI2_SSICC_R_CS_SYSCLK     (0x00000000)
#define SSI2_SSICC_R_CS_PIOSC      (0x00000005)

#define SSI2_SSICC_CS_MASK         (0x0000000F)
#define SSI2_SSICC_CS_SYSCLK       (0x00000000)
#define SSI2_SSICC_CS_PIOSC        (0x00000005)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.12 SSIPeriphID4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSIPeriphID4            (((SSIPeriphID4_TypeDef*)(SSI2_BASE + SSI_SSIPeriphID4_OFFSET )))
#define SSI2_SSIPeriphID4_R          (*((volatile const uint32_t *)(SSI2_BASE +SSI_SSIPeriphID4_OFFSET)))

//--------
#define SSI2_SSIPeriphID4_R_PID4_MASK       (0x000000FF)
#define SSI2_SSIPeriphID4_R_PID4_BIT        (0)
#define SSI2_SSIPeriphID4_R_PID4_DEFAULT    (0x00000000)

#define SSI2_SSIPeriphID4_PID4_MASK         (0x000000FF)
#define SSI2_SSIPeriphID4_PID4_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.13 SSIPeriphID5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSIPeriphID5            (((SSIPeriphID5_TypeDef*)(SSI2_BASE + SSI_SSIPeriphID5_OFFSET )))
#define SSI2_SSIPeriphID5_R          (*((volatile const uint32_t *)(SSI2_BASE +SSI_SSIPeriphID5_OFFSET)))

//--------
#define SSI2_SSIPeriphID5_R_PID5_MASK       (0x000000FF)
#define SSI2_SSIPeriphID5_R_PID5_BIT        (0)
#define SSI2_SSIPeriphID5_R_PID5_DEFAULT    (0x00000000)

#define SSI2_SSIPeriphID5_PID5_MASK         (0x000000FF)
#define SSI2_SSIPeriphID5_PID5_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.14 SSIPeriphID6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSIPeriphID6            (((SSIPeriphID6_TypeDef*)(SSI2_BASE + SSI_SSIPeriphID6_OFFSET )))
#define SSI2_SSIPeriphID6_R          (*((volatile const uint32_t *)(SSI2_BASE +SSI_SSIPeriphID6_OFFSET)))



//--------
#define SSI2_SSIPeriphID6_R_PID6_MASK       (0x000000FF)
#define SSI2_SSIPeriphID6_R_PID6_BIT        (0)
#define SSI2_SSIPeriphID6_R_PID6_DEFAULT    (0x00000000)

#define SSI2_SSIPeriphID6_PID6_MASK         (0x000000FF)
#define SSI2_SSIPeriphID6_PID6_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.15 SSIPeriphID7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSIPeriphID7            (((SSIPeriphID7_TypeDef*)(SSI2_BASE + SSI_SSIPeriphID7_OFFSET )))
#define SSI2_SSIPeriphID7_R          (*((volatile const uint32_t *)(SSI2_BASE +SSI_SSIPeriphID7_OFFSET)))



//--------
#define SSI2_SSIPeriphID7_R_PID7_MASK       (0x000000FF)
#define SSI2_SSIPeriphID7_R_PID7_BIT        (0)
#define SSI2_SSIPeriphID7_R_PID7_DEFAULT    (0x00000000)

#define SSI2_SSIPeriphID7_PID7_MASK         (0x000000FF)
#define SSI2_SSIPeriphID7_PID7_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.16 SSIPeriphID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSIPeriphID0            (((SSIPeriphID0_TypeDef*)(SSI2_BASE + SSI_SSIPeriphID0_OFFSET )))
#define SSI2_SSIPeriphID0_R          (*((volatile const uint32_t *)(SSI2_BASE +SSI_SSIPeriphID0_OFFSET)))



//--------
#define SSI2_SSIPeriphID0_R_PID0_MASK       (0x000000FF)
#define SSI2_SSIPeriphID0_R_PID0_BIT        (0)
#define SSI2_SSIPeriphID0_R_PID0_DEFAULT    (0x00000022)

#define SSI2_SSIPeriphID0_PID0_MASK         (0x000000FF)
#define SSI2_SSIPeriphID0_PID0_DEFAULT      (0x00000022)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.17 SSIPeriphID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSIPeriphID1            (((SSIPeriphID1_TypeDef*)(SSI2_BASE + SSI_SSIPeriphID1_OFFSET )))
#define SSI2_SSIPeriphID1_R          (*((volatile const uint32_t *)(SSI2_BASE +SSI_SSIPeriphID1_OFFSET)))



//--------
#define SSI2_SSIPeriphID1_R_PID1_MASK       (0x000000FF)
#define SSI2_SSIPeriphID1_R_PID1_BIT        (0)
#define SSI2_SSIPeriphID1_R_PID1_DEFAULT    (0x00000000)

#define SSI2_SSIPeriphID1_PID1_MASK         (0x000000FF)
#define SSI2_SSIPeriphID1_PID1_DEFAULT      (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.18 SSIPeriphID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSIPeriphID2            (((SSIPeriphID2_TypeDef*)(SSI2_BASE + SSI_SSIPeriphID2_OFFSET )))
#define SSI2_SSIPeriphID2_R          (*((volatile const uint32_t *)(SSI2_BASE +SSI_SSIPeriphID2_OFFSET)))

//--------
#define SSI2_SSIPeriphID2_R_PID2_MASK       (0x000000FF)
#define SSI2_SSIPeriphID2_R_PID2_BIT        (0)
#define SSI2_SSIPeriphID2_R_PID2_DEFAULT    (0x00000018)

#define SSI2_SSIPeriphID2_PID2_MASK         (0x000000FF)
#define SSI2_SSIPeriphID2_PID2_DEFAULT      (0x00000018)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.19 SSIPeriphID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSIPeriphID3            (((SSIPeriphID3_TypeDef*)(SSI2_BASE + SSI_SSIPeriphID3_OFFSET )))
#define SSI2_SSIPeriphID3_R          (*((volatile const uint32_t *)(SSI2_BASE +SSI_SSIPeriphID3_OFFSET)))

//--------
#define SSI2_SSIPeriphID3_R_PID3_MASK       (0x000000FF)
#define SSI2_SSIPeriphID3_R_PID3_BIT        (0)
#define SSI2_SSIPeriphID3_R_PID3_DEFAULT    (0x00000001)

#define SSI2_SSIPeriphID3_PID3_MASK         (0x000000FF)
#define SSI2_SSIPeriphID3_PID3_DEFAULT      (0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.20 SSIPCellID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSIPCellID0            (((SSIPCellID0_TypeDef*)(SSI2_BASE + SSI_SSIPCellID0_OFFSET )))
#define SSI2_SSIPCellID0_R          (*((volatile const uint32_t *)(SSI2_BASE +SSI_SSIPCellID0_OFFSET)))

//--------
#define SSI2_SSIPCellID0_R_CID0_MASK       (0x000000FF)
#define SSI2_SSIPCellID0_R_CID0_BIT        (0)
#define SSI2_SSIPCellID0_R_CID0_DEFAULT    (0x0000000D)

#define SSI2_SSIPCellID0_CID0_MASK         (0x000000FF)
#define SSI2_SSIPCellID0_CID0_DEFAULT      (0x0000000D)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.21 SSIPCellID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSIPCellID1            (((SSIPCellID1_TypeDef*)(SSI2_BASE + SSI_SSIPCellID1_OFFSET )))
#define SSI2_SSIPCellID1_R          (*((volatile const uint32_t *)(SSI2_BASE +SSI_SSIPCellID1_OFFSET)))

//--------
#define SSI2_SSIPCellID1_R_CID1_MASK       (0x000000FF)
#define SSI2_SSIPCellID1_R_CID1_BIT        (0)
#define SSI2_SSIPCellID1_R_CID1_DEFAULT    (0x000000F0)

#define SSI2_SSIPCellID1_CID1_MASK         (0x000000FF)
#define SSI2_SSIPCellID1_CID1_DEFAULT      (0x000000F0)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.22 SSIPCellID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSIPCellID2            (((SSIPCellID2_TypeDef*)(SSI2_BASE + SSI_SSIPCellID2_OFFSET )))
#define SSI2_SSIPCellID2_R          (*((volatile const uint32_t *)(SSI2_BASE +SSI_SSIPCellID2_OFFSET)))

//--------
#define SSI2_SSIPCellID2_R_CID2_MASK       (0x000000FF)
#define SSI2_SSIPCellID2_R_CID2_BIT        (0)
#define SSI2_SSIPCellID2_R_CID2_DEFAULT    (0x00000005)

#define SSI2_SSIPCellID2_CID2_MASK         (0x000000FF)
#define SSI2_SSIPCellID2_CID2_DEFAULT      (0x00000005)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2.23 SSIPCellID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI2_SSIPCellID3            (((SSIPCellID3_TypeDef*)(SSI2_BASE + SSI_SSIPCellID3_OFFSET )))
#define SSI2_SSIPCellID3_R          (*((volatile const uint32_t *)(SSI2_BASE +SSI_SSIPCellID3_OFFSET)))

//--------
#define SSI2_SSIPCellID3_R_CID3_MASK       (0x000000FF)
#define SSI2_SSIPCellID3_R_CID3_BIT        (0)
#define SSI2_SSIPCellID3_R_CID3_DEFAULT    (0x000000B1)

#define SSI2_SSIPCellID3_CID3_MASK         (0x000000FF)
#define SSI2_SSIPCellID3_CID3_DEFAULT      (0x000000B1)
//--------



// todo SSI3

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 SSI3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.1 SSICR0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSICR0            (((SSICR0_TypeDef*)(SSI3_BASE + SSI_SSICR0_OFFSET )))
#define SSI3_SSICR0_R          (*((volatile uint32_t *)(SSI3_BASE +SSI_SSICR0_OFFSET)))


//--------
#define SSI3_SSICR0_R_DSS_MASK       (0x0000000F)
#define SSI3_SSICR0_R_DSS_BIT        (0)
#define SSI3_SSICR0_R_DSS_4BTIS      (0x00000003)
#define SSI3_SSICR0_R_DSS_5BTIS      (0x00000004)
#define SSI3_SSICR0_R_DSS_6BTIS      (0x00000005)
#define SSI3_SSICR0_R_DSS_7BTIS      (0x00000006)
#define SSI3_SSICR0_R_DSS_8BTIS      (0x00000007)
#define SSI3_SSICR0_R_DSS_9BTIS      (0x00000008)
#define SSI3_SSICR0_R_DSS_10BTIS     (0x00000009)
#define SSI3_SSICR0_R_DSS_11BTIS     (0x0000000A)
#define SSI3_SSICR0_R_DSS_12BTIS     (0x0000000B)
#define SSI3_SSICR0_R_DSS_13BTIS     (0x0000000C)
#define SSI3_SSICR0_R_DSS_14BTIS     (0x0000000D)
#define SSI3_SSICR0_R_DSS_15BTIS     (0x0000000E)
#define SSI3_SSICR0_R_DSS_16BTIS     (0x0000000F)

#define SSI3_SSICR0_DSS_MASK         (0x00000001)
#define SSI3_SSICR0_DSS_4BTIS        (0x00000003)
#define SSI3_SSICR0_DSS_5BTIS        (0x00000004)
#define SSI3_SSICR0_DSS_6BTIS        (0x00000005)
#define SSI3_SSICR0_DSS_7BTIS        (0x00000006)
#define SSI3_SSICR0_DSS_8BTIS        (0x00000007)
#define SSI3_SSICR0_DSS_9BTIS        (0x00000008)
#define SSI3_SSICR0_DSS_10BTIS       (0x00000009)
#define SSI3_SSICR0_DSS_11BTIS       (0x0000000A)
#define SSI3_SSICR0_DSS_12BTIS       (0x0000000B)
#define SSI3_SSICR0_DSS_13BTIS       (0x0000000C)
#define SSI3_SSICR0_DSS_14BTIS       (0x0000000D)
#define SSI3_SSICR0_DSS_15BTIS       (0x0000000E)
#define SSI3_SSICR0_DSS_16BTIS       (0x0000000F)
//--------

//--------
#define SSI3_SSICR0_R_FRF_MASK       (0x00000030)
#define SSI3_SSICR0_R_FRF_BIT        (4)
#define SSI3_SSICR0_R_FRF_FREESCALE  (0x00000000)
#define SSI3_SSICR0_R_FRF_TEXAS      (0x00000010)
#define SSI3_SSICR0_R_FRF_MICROWIRE  (0x00000020)

#define SSI3_SSICR0_FRF_MASK         (0x00000003)
#define SSI3_SSICR0_FRF_FREESCALE    (0x00000000)
#define SSI3_SSICR0_FRF_TEXAS        (0x00000001)
#define SSI3_SSICR0_FRF_MICROWIRE    (0x00000002)
//--------

//--------
#define SSI3_SSICR0_R_SPO_MASK       (0x00000040)
#define SSI3_SSICR0_R_SPO_BIT        (6)
#define SSI3_SSICR0_R_SPO_LOW        (0x00000000)
#define SSI3_SSICR0_R_SPO_HIGH       (0x00000040)

#define SSI3_SSICR0_SPO_MASK         (0x00000001)
#define SSI3_SSICR0_SPO_LOW          (0x00000000)
#define SSI3_SSICR0_SPO_HIGH         (0x00000001)
//--------

//--------
#define SSI3_SSICR0_R_SPH_MASK       (0x00000080)
#define SSI3_SSICR0_R_SPH_BIT        (7)
#define SSI3_SSICR0_R_SPH_FIRST      (0x00000000)
#define SSI3_SSICR0_R_SPH_SECOND     (0x00000080)

#define SSI3_SSICR0_SPH_MASK         (0x00000001)
#define SSI3_SSICR0_SPH_FIRST        (0x00000000)
#define SSI3_SSICR0_SPH_SECOND       (0x00000001)
//--------

//--------
#define SSI3_SSICR0_R_SCR_MASK       (0x0000FF00)
#define SSI3_SSICR0_R_SCR_BIT        (8)

#define SSI3_SSICR0_SCR_MASK         (0x000000FF)
//--------

#define SSI3_SSICR0_SPO_BB     (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSICR0_OFFSET)*32)+(6*4))))
#define SSI3_SSICR0_SPH_BB     (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSICR0_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.2 SSICR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSICR1            (((SSICR1_TypeDef*)(SSI3_BASE + SSI_SSICR1_OFFSET )))
#define SSI3_SSICR1_R          (*((volatile uint32_t *)(SSI3_BASE +SSI_SSICR1_OFFSET)))

//--------
#define SSI3_SSICR1_R_LBM_MASK       (0x00000001)
#define SSI3_SSICR1_R_LBM_BIT        (0)
#define SSI3_SSICR1_R_LBM_NORMAL     (0x00000000)
#define SSI3_SSICR1_R_LBM_LOOPBACK   (0x00000001)

#define SSI3_SSICR1_LBM_MASK         (0x00000001)
#define SSI3_SSICR1_LBM_NORMAL       (0x00000000)
#define SSI3_SSICR1_LBM_LOOPBACK     (0x00000001)
//--------

//--------
#define SSI3_SSICR1_R_SSE_MASK       (0x00000002)
#define SSI3_SSICR1_R_SSE_BIT        (1)
#define SSI3_SSICR1_R_SSE_DIS        (0x00000000)
#define SSI3_SSICR1_R_SSE_EN         (0x00000002)

#define SSI3_SSICR1_SSE_MASK         (0x00000001)
#define SSI3_SSICR1_SSE_DIS          (0x00000000)
#define SSI3_SSICR1_SSE_EN           (0x00000001)
//--------

//--------
#define SSI3_SSICR1_R_MS_MASK       (0x00000004)
#define SSI3_SSICR1_R_MS_BIT        (2)
#define SSI3_SSICR1_R_MS_MASTER     (0x00000000)
#define SSI3_SSICR1_R_MS_SLAVE      (0x00000004)

#define SSI3_SSICR1_MS_MASK         (0x00000001)
#define SSI3_SSICR1_MS_MASTER       (0x00000000)
#define SSI3_SSICR1_MS_SLAVE        (0x00000001)
//--------

//--------
#define SSI3_SSICR1_R_EOT_MASK       (0x00000010)
#define SSI3_SSICR1_R_EOT_BIT        (4)
#define SSI3_SSICR1_R_EOT_FIFO       (0x00000000)
#define SSI3_SSICR1_R_EOT_END        (0x00000010)

#define SSI3_SSICR1_EOT_MASK         (0x00000001)
#define SSI3_SSICR1_EOT_FIFO         (0x00000000)
#define SSI3_SSICR1_EOT_END          (0x00000001)
//--------

#define SSI3_SSICR1_LBM_BB     (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSICR1_OFFSET)*32)+(0*4))))
#define SSI3_SSICR1_SSE_BB     (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSICR1_OFFSET)*32)+(1*4))))
#define SSI3_SSICR1_MS_BB      (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSICR1_OFFSET)*32)+(2*4))))
#define SSI3_SSICR1_EOT_BB     (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSICR1_OFFSET)*32)+(4*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.3 SSIDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSIDR            (((SSIDR_TypeDef*)(SSI3_BASE + SSI_SSIDR_OFFSET )))
#define SSI3_SSIDR_R          (*((volatile uint32_t *)(SSI3_BASE +SSI_SSIDR_OFFSET)))

//--------
#define SSI3_SSIDR_R_DATA_MASK       (0x0000FFFF)
#define SSI3_SSIDR_R_DATA_BIT        (0)

#define SSI3_SSIDR_DATA_MASK         (0x0000FFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.4 SSISR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSISR            (((SSISR_TypeDef*)(SSI3_BASE + SSI_SSISR_OFFSET )))
#define SSI3_SSISR_R          (*((volatile uint32_t *)(SSI3_BASE +SSI_SSISR_OFFSET)))

//--------
#define SSI3_SSISR_R_TFE_MASK       (0x00000001)
#define SSI3_SSISR_R_TFE_BIT        (0)
#define SSI3_SSISR_R_TFE_NOEMPTY    (0x00000000)
#define SSI3_SSISR_R_TFE_EMPTY      (0x00000001)

#define SSI3_SSISR_TFE_MASK         (0x00000001)
#define SSI3_SSISR_TFE_NOEMPTY      (0x00000000)
#define SSI3_SSISR_TFE_EMPTY        (0x00000001)
//--------

//--------
#define SSI3_SSISR_R_TNF_MASK       (0x00000002)
#define SSI3_SSISR_R_TNF_BIT        (1)
#define SSI3_SSISR_R_TNF_FULL       (0x00000000)
#define SSI3_SSISR_R_TNF_NOFULL     (0x00000002)

#define SSI3_SSISR_TNF_MASK         (0x00000001)
#define SSI3_SSISR_TNF_FULL         (0x00000000)
#define SSI3_SSISR_TNF_NOFULL       (0x00000001)
//--------

//--------
#define SSI3_SSISR_R_RNE_MASK       (0x00000004)
#define SSI3_SSISR_R_RNE_BIT        (2)
#define SSI3_SSISR_R_RNE_EMPTY      (0x00000000)
#define SSI3_SSISR_R_RNE_NOEMPTY    (0x00000004)

#define SSI3_SSISR_RNE_MASK         (0x00000001)
#define SSI3_SSISR_RNE_EMPTY        (0x00000000)
#define SSI3_SSISR_RNE_NOEMPTY      (0x00000001)
//--------

//--------
#define SSI3_SSISR_R_RFF_MASK       (0x00000008)
#define SSI3_SSISR_R_RFF_BIT        (3)
#define SSI3_SSISR_R_RFF_NOFULL     (0x00000000)
#define SSI3_SSISR_R_RFF_FULL       (0x00000008)

#define SSI3_SSISR_RFF_MASK         (0x00000001)
#define SSI3_SSISR_RFF_NOFULL       (0x00000000)
#define SSI3_SSISR_RFF_FULL         (0x00000001)
//--------

//--------
#define SSI3_SSISR_R_BSY_MASK       (0x00000010)
#define SSI3_SSISR_R_BSY_BIT        (4)
#define SSI3_SSISR_R_BSY_IDLE       (0x00000000)
#define SSI3_SSISR_R_BSY_BUSY       (0x00000010)

#define SSI3_SSISR_BSY_MASK         (0x00000001)
#define SSI3_SSISR_BSY_IDLE         (0x00000000)
#define SSI3_SSISR_BSY_BUSY         (0x00000001)
//--------

#define SSI3_SSISR_TFE_BB     (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSISR_OFFSET)*32)+(0*4))))
#define SSI3_SSISR_TNF_BB     (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSISR_OFFSET)*32)+(1*4))))
#define SSI3_SSISR_RNE_BB     (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSISR_OFFSET)*32)+(2*4))))
#define SSI3_SSISR_RFF_BB     (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSISR_OFFSET)*32)+(3*4))))
#define SSI3_SSISR_BSY_BB     (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSISR_OFFSET)*32)+(4*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.5 SSICPSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSICPSR            (((SSICPSR_TypeDef*)(SSI3_BASE + SSI_SSICPSR_OFFSET )))
#define SSI3_SSICPSR_R          (*((volatile uint32_t *)(SSI3_BASE +SSI_SSICPSR_OFFSET)))

//--------
#define SSI3_SSICPSR_R_DATA_MASK       (0x000000FF)
#define SSI3_SSICPSR_R_DATA_BIT        (0)

#define SSI3_SSICPSR_DATA_MASK         (0x000000FF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.6 SSIIM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSIIM            (((SSIIM_TypeDef*)(SSI3_BASE + SSI_SSIIM_OFFSET )))
#define SSI3_SSIIM_R          (*((volatile uint32_t *)(SSI3_BASE +SSI_SSIIM_OFFSET)))

//--------
#define SSI3_SSIIM_R_RORIM_MASK       (0x00000001)
#define SSI3_SSIIM_R_RORIM_BIT        (0)
#define SSI3_SSIIM_R_RORIM_DIS        (0x00000000)
#define SSI3_SSIIM_R_RORIM_EN         (0x00000001)

#define SSI3_SSIIM_RORIM_MASK         (0x00000001)
#define SSI3_SSIIM_RORIM_DIS          (0x00000000)
#define SSI3_SSIIM_RORIM_EN           (0x00000001)
//--------

//--------
#define SSI3_SSIIM_R_RTIM_MASK       (0x00000002)
#define SSI3_SSIIM_R_RTIM_BIT        (1)
#define SSI3_SSIIM_R_RTIM_DIS        (0x00000000)
#define SSI3_SSIIM_R_RTIM_EN         (0x00000002)

#define SSI3_SSIIM_RTIM_MASK         (0x00000001)
#define SSI3_SSIIM_RTIM_DIS          (0x00000000)
#define SSI3_SSIIM_RTIM_EN           (0x00000001)
//--------

//--------
#define SSI3_SSIIM_R_RXIM_MASK       (0x00000004)
#define SSI3_SSIIM_R_RXIM_BIT        (2)
#define SSI3_SSIIM_R_RXIM_DIS        (0x00000000)
#define SSI3_SSIIM_R_RXIM_EN         (0x00000004)

#define SSI3_SSIIM_RXIM_MASK         (0x00000001)
#define SSI3_SSIIM_RXIM_DIS          (0x00000000)
#define SSI3_SSIIM_RXIM_EN           (0x00000001)
//--------

//--------
#define SSI3_SSIIM_R_TXIM_MASK       (0x00000008)
#define SSI3_SSIIM_R_TXIM_BIT        (3)
#define SSI3_SSIIM_R_TXIM_DIS        (0x00000000)
#define SSI3_SSIIM_R_TXIM_EN         (0x00000008)

#define SSI3_SSIIM_TXIM_MASK         (0x00000001)
#define SSI3_SSIIM_TXIM_DIS          (0x00000000)
#define SSI3_SSIIM_TXIM_EN           (0x00000001)
//--------

#define SSI3_SSIIM_RORIM_BB    (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSIIM_OFFSET)*32)+(0*4))))
#define SSI3_SSIIM_RTIM_BB     (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSIIM_OFFSET)*32)+(1*4))))
#define SSI3_SSIIM_RXIM_BB     (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSIIM_OFFSET)*32)+(2*4))))
#define SSI3_SSIIM_TXIM_BB     (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSIIM_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.7 SSIRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSIRIS            (((SSIRIS_TypeDef*)(SSI3_BASE + SSI_SSIRIS_OFFSET )))
#define SSI3_SSIRIS_R          (*((volatile const uint32_t *)(SSI3_BASE +SSI_SSIRIS_OFFSET)))

//--------
#define SSI3_SSIRIS_R_RORRIS_MASK       (0x00000001)
#define SSI3_SSIRIS_R_RORRIS_BIT        (0)
#define SSI3_SSIRIS_R_RORRIS_NOACTIVE   (0x00000000)
#define SSI3_SSIRIS_R_RORRIS_ACTIVE     (0x00000001)

#define SSI3_SSIRIS_RORRIS_MASK         (0x00000001)
#define SSI3_SSIRIS_RORRIS_NOACTIVE     (0x00000000)
#define SSI3_SSIRIS_RORRIS_ACTIVE       (0x00000001)
//--------

//--------
#define SSI3_SSIRIS_R_RTRIS_MASK       (0x00000002)
#define SSI3_SSIRIS_R_RTRIS_BIT        (1)
#define SSI3_SSIRIS_R_RTRIS_NOACTIVE   (0x00000000)
#define SSI3_SSIRIS_R_RTRIS_ACTIVE     (0x00000002)

#define SSI3_SSIRIS_RTRIS_MASK         (0x00000001)
#define SSI3_SSIRIS_RTRIS_NOACTIVE     (0x00000000)
#define SSI3_SSIRIS_RTRIS_ACTIVE       (0x00000001)
//--------

//--------
#define SSI3_SSIRIS_R_RXRIS_MASK       (0x00000004)
#define SSI3_SSIRIS_R_RXRIS_BIT        (2)
#define SSI3_SSIRIS_R_RXRIS_NOACTIVE   (0x00000000)
#define SSI3_SSIRIS_R_RXRIS_ACTIVE     (0x00000004)

#define SSI3_SSIRIS_RXRIS_MASK         (0x00000001)
#define SSI3_SSIRIS_RXRIS_NOACTIVE     (0x00000000)
#define SSI3_SSIRIS_RXRIS_ACTIVE       (0x00000001)
//--------

//--------
#define SSI3_SSIRIS_R_TXRIS_MASK       (0x00000008)
#define SSI3_SSIRIS_R_TXRIS_BIT        (3)
#define SSI3_SSIRIS_R_TXRIS_NOACTIVE   (0x00000000)
#define SSI3_SSIRIS_R_TXRIS_ACTIVE     (0x00000008)

#define SSI3_SSIRIS_TXRIS_MASK         (0x00000001)
#define SSI3_SSIRIS_TXRIS_NOACTIVE     (0x00000000)
#define SSI3_SSIRIS_TXRIS_ACTIVE       (0x00000001)
//--------

#define SSI3_SSIRIS_RORRIS_BB    (*((volatile const uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSIRIS_OFFSET)*32)+(0*4))))
#define SSI3_SSIRIS_RTRIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSIRIS_OFFSET)*32)+(1*4))))
#define SSI3_SSIRIS_RXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSIRIS_OFFSET)*32)+(2*4))))
#define SSI3_SSIRIS_TXRIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSIRIS_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.8 SSIMIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSIMIS            (((SSIMIS_TypeDef*)(SSI3_BASE + SSI_SSIMIS_OFFSET )))
#define SSI3_SSIMIS_R          (*((volatile const uint32_t *)(SSI3_BASE +SSI_SSIMIS_OFFSET)))


//--------
#define SSI3_SSIMIS_R_RORMIS_MASK       (0x00000001)
#define SSI3_SSIMIS_R_RORMIS_BIT        (0)
#define SSI3_SSIMIS_R_RORMIS_NOOCCUR    (0x00000000)
#define SSI3_SSIMIS_R_RORMIS_OCCUR      (0x00000001)

#define SSI3_SSIMIS_RORMIS_MASK         (0x00000001)
#define SSI3_SSIMIS_RORMIS_NOOCCUR      (0x00000000)
#define SSI3_SSIMIS_RORMIS_OCCUR        (0x00000001)
//--------

//--------
#define SSI3_SSIMIS_R_RTMIS_MASK       (0x00000002)
#define SSI3_SSIMIS_R_RTMIS_BIT        (1)
#define SSI3_SSIMIS_R_RTMIS_NOOCCUR    (0x00000000)
#define SSI3_SSIMIS_R_RTMIS_OCCUR      (0x00000002)

#define SSI3_SSIMIS_RTMIS_MASK         (0x00000001)
#define SSI3_SSIMIS_RTMIS_NOOCCUR      (0x00000000)
#define SSI3_SSIMIS_RTMIS_OCCUR        (0x00000001)
//--------

//--------
#define SSI3_SSIMIS_R_RXMIS_MASK       (0x00000004)
#define SSI3_SSIMIS_R_RXMIS_BIT        (2)
#define SSI3_SSIMIS_R_RXMIS_NOOCCUR    (0x00000000)
#define SSI3_SSIMIS_R_RXMIS_OCCUR      (0x00000004)

#define SSI3_SSIMIS_RXMIS_MASK         (0x00000001)
#define SSI3_SSIMIS_RXMIS_NOOCCUR      (0x00000000)
#define SSI3_SSIMIS_RXMIS_OCCUR        (0x00000001)
//--------

//--------
#define SSI3_SSIMIS_R_TXMIS_MASK       (0x00000008)
#define SSI3_SSIMIS_R_TXMIS_BIT        (3)
#define SSI3_SSIMIS_R_TXMIS_NOOCCUR    (0x00000000)
#define SSI3_SSIMIS_R_TXMIS_OCCUR      (0x00000008)

#define SSI3_SSIMIS_TXMIS_MASK         (0x00000001)
#define SSI3_SSIMIS_TXMIS_NOOCCUR      (0x00000000)
#define SSI3_SSIMIS_TXMIS_OCCUR        (0x00000001)
//--------

#define SSI3_SSIMIS_RORMIS_BB    (*((volatile const uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSIMIS_OFFSET)*32)+(0*4))))
#define SSI3_SSIMIS_RTMIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSIMIS_OFFSET)*32)+(1*4))))
#define SSI3_SSIMIS_RXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSIMIS_OFFSET)*32)+(2*4))))
#define SSI3_SSIMIS_TXMIS_BB     (*((volatile const uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSIMIS_OFFSET)*32)+(3*4))))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.9 SSIICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSIICR            (((SSIICR_TypeDef*)(SSI3_BASE + SSI_SSIICR_OFFSET )))
#define SSI3_SSIICR_R          (*((volatile uint32_t *)(SSI3_BASE +SSI_SSIICR_OFFSET)))


//--------
#define SSI3_SSIICR_R_RORIC_MASK       (0x00000001)
#define SSI3_SSIICR_R_RORIC_BIT        (0)
#define SSI3_SSIICR_R_RORIC_CLEAR      (0x00000001)

#define SSI3_SSIICR_RORIC_MASK         (0x00000001)
#define SSI3_SSIICR_RORIC_CLEAR        (0x00000001)
//--------

//--------
#define SSI3_SSIICR_R_RTIC_MASK       (0x00000002)
#define SSI3_SSIICR_R_RTIC_BIT        (1)
#define SSI3_SSIICR_R_RTIC_CLEAR      (0x00000002)

#define SSI3_SSIICR_RTIC_MASK         (0x00000001)
#define SSI3_SSIICR_RTIC_CLEAR        (0x00000001)
//--------

#define SSI3_SSIICR_RORIC_BB    (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSIICR_OFFSET)*32)+(0*4))))
#define SSI3_SSIICR_RTIC_BB     (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSIICR_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.10 SSIDMACTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSIDMACTL            (((SSIDMACTL_TypeDef*)(SSI3_BASE + SSI_SSIDMACTL_OFFSET )))
#define SSI3_SSIDMACTL_R          (*((volatile uint32_t *)(SSI3_BASE +SSI_SSIDMACTL_OFFSET)))

//--------
#define SSI3_SSIDMACTL_R_RXDMAE_MASK       (0x00000001)
#define SSI3_SSIDMACTL_R_RXDMAE_BIT        (0)
#define SSI3_SSIDMACTL_R_RXDMAE_DIS        (0x00000000)
#define SSI3_SSIDMACTL_R_RXDMAE_EN         (0x00000001)

#define SSI3_SSIDMACTL_RXDMAE_MASK         (0x00000001)
#define SSI3_SSIDMACTL_RXDMAE_DIS          (0x00000000)
#define SSI3_SSIDMACTL_RXDMAE_EN           (0x00000001)
//--------


//--------
#define SSI3_SSIDMACTL_R_TXDMAE_MASK       (0x00000002)
#define SSI3_SSIDMACTL_R_TXDMAE_BIT        (1)
#define SSI3_SSIDMACTL_R_TXDMAE_DIS        (0x00000000)
#define SSI3_SSIDMACTL_R_TXDMAE_EN         (0x00000002)

#define SSI3_SSIDMACTL_TXDMAE_MASK         (0x00000001)
#define SSI3_SSIDMACTL_TXDMAE_DIS          (0x00000000)
#define SSI3_SSIDMACTL_TXDMAE_EN           (0x00000001)
//--------

#define SSI3_SSIDMACTL_RXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSIDMACTL_OFFSET)*32)+(0*4))))
#define SSI3_SSIDMACTL_TXDMAE_BB     (*((volatile uint32_t *)(0x42000000+((SSI3_OFFSET+SSI_SSIDMACTL_OFFSET)*32)+(1*4))))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.11 SSICC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSICC            (((SSICC_TypeDef*)(SSI3_BASE + SSI_SSICC_OFFSET )))
#define SSI3_SSICC_R          (*((volatile uint32_t *)(SSI3_BASE +SSI_SSICC_OFFSET)))

//--------
#define SSI3_SSICC_R_CS_MASK       (0x0000000F)
#define SSI3_SSICC_R_CS_BIT        (0)
#define SSI3_SSICC_R_CS_SYSCLK     (0x00000000)
#define SSI3_SSICC_R_CS_PIOSC      (0x00000005)

#define SSI3_SSICC_CS_MASK         (0x0000000F)
#define SSI3_SSICC_CS_SYSCLK       (0x00000000)
#define SSI3_SSICC_CS_PIOSC        (0x00000005)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.12 SSIPeriphID4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSIPeriphID4            (((SSIPeriphID4_TypeDef*)(SSI3_BASE + SSI_SSIPeriphID4_OFFSET )))
#define SSI3_SSIPeriphID4_R          (*((volatile const uint32_t *)(SSI3_BASE +SSI_SSIPeriphID4_OFFSET)))

//--------
#define SSI3_SSIPeriphID4_R_PID4_MASK       (0x000000FF)
#define SSI3_SSIPeriphID4_R_PID4_BIT        (0)
#define SSI3_SSIPeriphID4_R_PID4_DEFAULT    (0x00000000)

#define SSI3_SSIPeriphID4_PID4_MASK         (0x000000FF)
#define SSI3_SSIPeriphID4_PID4_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.13 SSIPeriphID5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSIPeriphID5            (((SSIPeriphID5_TypeDef*)(SSI3_BASE + SSI_SSIPeriphID5_OFFSET )))
#define SSI3_SSIPeriphID5_R          (*((volatile const uint32_t *)(SSI3_BASE +SSI_SSIPeriphID5_OFFSET)))

//--------
#define SSI3_SSIPeriphID5_R_PID5_MASK       (0x000000FF)
#define SSI3_SSIPeriphID5_R_PID5_BIT        (0)
#define SSI3_SSIPeriphID5_R_PID5_DEFAULT    (0x00000000)

#define SSI3_SSIPeriphID5_PID5_MASK         (0x000000FF)
#define SSI3_SSIPeriphID5_PID5_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.14 SSIPeriphID6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSIPeriphID6            (((SSIPeriphID6_TypeDef*)(SSI3_BASE + SSI_SSIPeriphID6_OFFSET )))
#define SSI3_SSIPeriphID6_R          (*((volatile const uint32_t *)(SSI3_BASE +SSI_SSIPeriphID6_OFFSET)))



//--------
#define SSI3_SSIPeriphID6_R_PID6_MASK       (0x000000FF)
#define SSI3_SSIPeriphID6_R_PID6_BIT        (0)
#define SSI3_SSIPeriphID6_R_PID6_DEFAULT    (0x00000000)

#define SSI3_SSIPeriphID6_PID6_MASK         (0x000000FF)
#define SSI3_SSIPeriphID6_PID6_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.15 SSIPeriphID7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSIPeriphID7            (((SSIPeriphID7_TypeDef*)(SSI3_BASE + SSI_SSIPeriphID7_OFFSET )))
#define SSI3_SSIPeriphID7_R          (*((volatile const uint32_t *)(SSI3_BASE +SSI_SSIPeriphID7_OFFSET)))



//--------
#define SSI3_SSIPeriphID7_R_PID7_MASK       (0x000000FF)
#define SSI3_SSIPeriphID7_R_PID7_BIT        (0)
#define SSI3_SSIPeriphID7_R_PID7_DEFAULT    (0x00000000)

#define SSI3_SSIPeriphID7_PID7_MASK         (0x000000FF)
#define SSI3_SSIPeriphID7_PID7_DEFAULT      (0x00000000)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.16 SSIPeriphID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSIPeriphID0            (((SSIPeriphID0_TypeDef*)(SSI3_BASE + SSI_SSIPeriphID0_OFFSET )))
#define SSI3_SSIPeriphID0_R          (*((volatile const uint32_t *)(SSI3_BASE +SSI_SSIPeriphID0_OFFSET)))



//--------
#define SSI3_SSIPeriphID0_R_PID0_MASK       (0x000000FF)
#define SSI3_SSIPeriphID0_R_PID0_BIT        (0)
#define SSI3_SSIPeriphID0_R_PID0_DEFAULT    (0x00000022)

#define SSI3_SSIPeriphID0_PID0_MASK         (0x000000FF)
#define SSI3_SSIPeriphID0_PID0_DEFAULT      (0x00000022)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.17 SSIPeriphID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSIPeriphID1            (((SSIPeriphID1_TypeDef*)(SSI3_BASE + SSI_SSIPeriphID1_OFFSET )))
#define SSI3_SSIPeriphID1_R          (*((volatile const uint32_t *)(SSI3_BASE +SSI_SSIPeriphID1_OFFSET)))



//--------
#define SSI3_SSIPeriphID1_R_PID1_MASK       (0x000000FF)
#define SSI3_SSIPeriphID1_R_PID1_BIT        (0)
#define SSI3_SSIPeriphID1_R_PID1_DEFAULT    (0x00000000)

#define SSI3_SSIPeriphID1_PID1_MASK         (0x000000FF)
#define SSI3_SSIPeriphID1_PID1_DEFAULT      (0x00000000)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.18 SSIPeriphID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSIPeriphID2            (((SSIPeriphID2_TypeDef*)(SSI3_BASE + SSI_SSIPeriphID2_OFFSET )))
#define SSI3_SSIPeriphID2_R          (*((volatile const uint32_t *)(SSI3_BASE +SSI_SSIPeriphID2_OFFSET)))

//--------
#define SSI3_SSIPeriphID2_R_PID2_MASK       (0x000000FF)
#define SSI3_SSIPeriphID2_R_PID2_BIT        (0)
#define SSI3_SSIPeriphID2_R_PID2_DEFAULT    (0x00000018)

#define SSI3_SSIPeriphID2_PID2_MASK         (0x000000FF)
#define SSI3_SSIPeriphID2_PID2_DEFAULT      (0x00000018)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.19 SSIPeriphID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSIPeriphID3            (((SSIPeriphID3_TypeDef*)(SSI3_BASE + SSI_SSIPeriphID3_OFFSET )))
#define SSI3_SSIPeriphID3_R          (*((volatile const uint32_t *)(SSI3_BASE +SSI_SSIPeriphID3_OFFSET)))

//--------
#define SSI3_SSIPeriphID3_R_PID3_MASK       (0x000000FF)
#define SSI3_SSIPeriphID3_R_PID3_BIT        (0)
#define SSI3_SSIPeriphID3_R_PID3_DEFAULT    (0x00000001)

#define SSI3_SSIPeriphID3_PID3_MASK         (0x000000FF)
#define SSI3_SSIPeriphID3_PID3_DEFAULT      (0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.20 SSIPCellID0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSIPCellID0            (((SSIPCellID0_TypeDef*)(SSI3_BASE + SSI_SSIPCellID0_OFFSET )))
#define SSI3_SSIPCellID0_R          (*((volatile const uint32_t *)(SSI3_BASE +SSI_SSIPCellID0_OFFSET)))

//--------
#define SSI3_SSIPCellID0_R_CID0_MASK       (0x000000FF)
#define SSI3_SSIPCellID0_R_CID0_BIT        (0)
#define SSI3_SSIPCellID0_R_CID0_DEFAULT    (0x0000000D)

#define SSI3_SSIPCellID0_CID0_MASK         (0x000000FF)
#define SSI3_SSIPCellID0_CID0_DEFAULT      (0x0000000D)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.21 SSIPCellID1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSIPCellID1            (((SSIPCellID1_TypeDef*)(SSI3_BASE + SSI_SSIPCellID1_OFFSET )))
#define SSI3_SSIPCellID1_R          (*((volatile const uint32_t *)(SSI3_BASE +SSI_SSIPCellID1_OFFSET)))

//--------
#define SSI3_SSIPCellID1_R_CID1_MASK       (0x000000FF)
#define SSI3_SSIPCellID1_R_CID1_BIT        (0)
#define SSI3_SSIPCellID1_R_CID1_DEFAULT    (0x000000F0)

#define SSI3_SSIPCellID1_CID1_MASK         (0x000000FF)
#define SSI3_SSIPCellID1_CID1_DEFAULT      (0x000000F0)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.22 SSIPCellID2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSIPCellID2            (((SSIPCellID2_TypeDef*)(SSI3_BASE + SSI_SSIPCellID2_OFFSET )))
#define SSI3_SSIPCellID2_R          (*((volatile const uint32_t *)(SSI3_BASE +SSI_SSIPCellID2_OFFSET)))

//--------
#define SSI3_SSIPCellID2_R_CID2_MASK       (0x000000FF)
#define SSI3_SSIPCellID2_R_CID2_BIT        (0)
#define SSI3_SSIPCellID2_R_CID2_DEFAULT    (0x00000005)

#define SSI3_SSIPCellID2_CID2_MASK         (0x000000FF)
#define SSI3_SSIPCellID2_CID2_DEFAULT      (0x00000005)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3.23 SSIPCellID3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SSI3_SSIPCellID3            (((SSIPCellID3_TypeDef*)(SSI3_BASE + SSI_SSIPCellID3_OFFSET )))
#define SSI3_SSIPCellID3_R          (*((volatile const uint32_t *)(SSI3_BASE +SSI_SSIPCellID3_OFFSET)))

//--------
#define SSI3_SSIPCellID3_R_CID3_MASK       (0x000000FF)
#define SSI3_SSIPCellID3_R_CID3_BIT        (0)
#define SSI3_SSIPCellID3_R_CID3_DEFAULT    (0x000000B1)

#define SSI3_SSIPCellID3_CID3_MASK         (0x000000FF)
#define SSI3_SSIPCellID3_CID3_DEFAULT      (0x000000B1)
//--------

// ToDO Funcions

int32_t SSI0_Init(uint32_t frec);
int32_t SSI0_Read( void);
int32_t SSI0_Send( int16_t data);
int32_t SSI0_ReadFifo(int16_t* data);

int32_t SSI1_Init(uint32_t frec);
int32_t SSI1_Read( void);
int32_t SSI1_Send( int16_t data);
int32_t SSI1_ReadFifo(int16_t* data);

int32_t SSI2_Init(uint32_t frec);
int32_t SSI2_Read( void);
int32_t SSI2_Send( int16_t data);
int32_t SSI2_ReadFifo(int16_t* data);

int32_t SSI3_Init(uint32_t frec);
int32_t SSI3_Read( void);
int32_t SSI3_Send( int16_t data);
int32_t SSI3_ReadFifo(int16_t* data);

void SSI0Handler (void);
void SSI1Handler (void);
void SSI2Handler (void);
void SSI3Handler (void);


extern int16_t SSI0Fifo[256];
extern int8_t SSI0FifoCount;
extern int8_t SSI0FifoRead;
extern int32_t SSI0FifoLost;
extern int32_t SSI0Transmit;


extern int16_t SSI1Fifo[256];
extern int8_t SSI1FifoCount;
extern int8_t SSI1FifoRead;
extern int32_t SSI1FifoLost;
extern int32_t SSI1Transmit;


extern int16_t SSI2Fifo[256];
extern int8_t SSI2FifoCount;
extern int8_t SSI2FifoRead;
extern int32_t SSI2FifoLost;
extern int32_t SSI2Transmit;


extern int16_t SSI3Fifo[256];
extern int8_t SSI3FifoCount;
extern int8_t SSI3FifoRead;
extern int32_t SSI3FifoLost;
extern int32_t SSI3Transmit;

#endif /* SSI_H_ */
