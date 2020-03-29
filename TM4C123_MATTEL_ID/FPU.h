/*
 * FPU.h
 *
 *  Created on: Jan 19, 2018
 *      Author: Lalo_Alvarez
 */

#ifndef FPU_H_
#define FPU_H_



#include <stdint.h>

#define FPU_BASE            (0xE000E000)
#define FPU_OFFSET          (0x00000D88)



typedef volatile struct
{
    const    uint32_t reserved     :20;
    volatile uint32_t CP10         :2;
    volatile uint32_t CP11         :2;
    const    uint32_t reserved1    :8;
}CPAC_TypeDef;



typedef volatile struct
{
    volatile uint32_t LSPACT        :1;
    volatile uint32_t USER          :1;
    const    uint32_t reserved      :1;
    volatile uint32_t THREAD        :1;
    volatile uint32_t HFRDY         :1;
    volatile uint32_t MMRDY         :1;
    volatile uint32_t BFRDY         :1;
    const    uint32_t reserved1     :1;
    volatile uint32_t MONRDY        :1;
    const    uint32_t reserved2     :21;
    volatile uint32_t LSPEN         :1;
    volatile uint32_t ASPEN         :1;
}FPCC_TypeDef;



typedef volatile struct
{
    const    uint32_t reserved   :3;
    volatile uint32_t ADDRESS    :29;
}FPCA_TypeDef;


typedef volatile struct
{
    const    uint32_t reserved :22;
    volatile uint32_t RMODE    :2;
    volatile uint32_t FZ       :1;
    volatile uint32_t DN       :1;
    volatile uint32_t AHP      :1;
    const    uint32_t reserved1:5;
}FPDSC_TypeDef;


typedef volatile struct
{
    union
    {
        volatile uint32_t      CPAC;
        CPAC_TypeDef                CPAC_Bit;
    };
    const    uint32_t reserved[106]     ;
    union
    {
        volatile uint32_t      FPCC;
        FPCC_TypeDef                FPCC_Bit;
    };
    union
    {
        volatile uint32_t      FPCA;
        FPCA_TypeDef                FPCA_Bit;
    };
    union
    {
        volatile uint32_t      FPDSC;
        FPDSC_TypeDef               FPDSC_Bit;
    };
}FPU_TypeDef;

#define FPU            (((FPU_TypeDef*)(FPU_BASE+ FPU_OFFSET)))

#define FPU_CPAC_OFFSET     (0x0D88)
#define FPU_FPCC_OFFSET     (0x0F34)
#define FPU_FPCA_OFFSET     (0x0F38)
#define FPU_FPDSC_OFFSET    (0x0F3C)

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 CPAC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FPU_CPAC            (((CPAC_TypeDef*)(FPU_BASE+FPU_CPAC_OFFSET )))
#define FPU_CPAC_R          (*((volatile int32_t *)(FPU_BASE+FPU_CPAC_OFFSET)))




//--------
#define FPU_CPAC_R_CP10_MASK      (0x00300000)
#define FPU_CPAC_R_CP10_BIT       (20)
#define FPU_CPAC_R_CP10_DENIED    (0x00000000)
#define FPU_CPAC_R_CP10_PRIVILEGE (0x00100000)
#define FPU_CPAC_R_CP10_FULL      (0x00300000)

#define FPU_CPAC_CP10_MASK        (0x00000003)
#define FPU_CPAC_CP10_DENIED      (0x00000000)
#define FPU_CPAC_CP10_PRIVILEGE   (0x00000001)
#define FPU_CPAC_CP10_FULL        (0x00000003)
//--------

//--------
#define FPU_CPAC_R_CP11_MASK      (0x00C00000)
#define FPU_CPAC_R_CP11_BIT       (22)
#define FPU_CPAC_R_CP11_DENIED    (0x00000000)
#define FPU_CPAC_R_CP11_PRIVILEGE (0x00400000)
#define FPU_CPAC_R_CP11_FULL      (0x00C00000)

#define FPU_CPAC_CP11_MASK        (0x00000003)
#define FPU_CPAC_CP11_DENIED      (0x00000000)
#define FPU_CPAC_CP11_PRIVILEGE   (0x00000001)
#define FPU_CPAC_CP11_FULL        (0x00000003)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 FPCC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FPU_FPCC            (((FPCC_TypeDef*)(FPU_BASE+FPU_FPCC_OFFSET )))
#define FPU_FPCC_R          (*((volatile int32_t *)(FPU_BASE+FPU_FPCC_OFFSET)))




//--------
#define FPU_FPCC_R_LSPACT_MASK      (0x00000001)
#define FPU_FPCC_R_LSPACT_BIT       (0)
#define FPU_FPCC_R_LSPACT_NOSET     (0x00000000)
#define FPU_FPCC_R_LSPACT_SET       (0x00000001)

#define FPU_FPCC_LSPACT_MASK        (0x00000001)
#define FPU_FPCC_LSPACT_NOSET       (0x00000000)
#define FPU_FPCC_LSPACT_SET         (0x00000001)
//--------


//--------
#define FPU_FPCC_R_USER_MASK      (0x00000002)
#define FPU_FPCC_R_USER_BIT       (1)
#define FPU_FPCC_R_USER_NOSET     (0x00000000)
#define FPU_FPCC_R_USER_SET       (0x00000002)

#define FPU_FPCC_USER_MASK        (0x00000001)
#define FPU_FPCC_USER_NOSET       (0x00000000)
#define FPU_FPCC_USER_SET         (0x00000001)
//--------

//--------
#define FPU_FPCC_R_THREAD_MASK      (0x00000008)
#define FPU_FPCC_R_THREAD_BIT       (3)
#define FPU_FPCC_R_THREAD_NOSET     (0x00000000)
#define FPU_FPCC_R_THREAD_SET       (0x00000008)

#define FPU_FPCC_THREAD_MASK        (0x00000001)
#define FPU_FPCC_THREAD_NOSET       (0x00000000)
#define FPU_FPCC_THREAD_SET         (0x00000001)
//--------


//--------
#define FPU_FPCC_R_HFRDY_MASK      (0x00000010)
#define FPU_FPCC_R_HFRDY_BIT       (4)
#define FPU_FPCC_R_HFRDY_NOSET     (0x00000000)
#define FPU_FPCC_R_HFRDY_SET       (0x00000010)

#define FPU_FPCC_HFRDY_MASK        (0x00000001)
#define FPU_FPCC_HFRDY_NOSET       (0x00000000)
#define FPU_FPCC_HFRDY_SET         (0x00000001)
//--------


//--------
#define FPU_FPCC_R_MMRDY_MASK      (0x00000020)
#define FPU_FPCC_R_MMRDY_BIT       (5)
#define FPU_FPCC_R_MMRDY_NOSET     (0x00000000)
#define FPU_FPCC_R_MMRDY_SET       (0x00000020)

#define FPU_FPCC_MMRDY_MASK        (0x00000001)
#define FPU_FPCC_MMRDY_NOSET       (0x00000000)
#define FPU_FPCC_MMRDY_SET         (0x00000001)
//--------


//--------
#define FPU_FPCC_R_BFRDY_MASK      (0x00000040)
#define FPU_FPCC_R_BFRDY_BIT       (6)
#define FPU_FPCC_R_BFRDY_NOSET     (0x00000000)
#define FPU_FPCC_R_BFRDY_SET       (0x00000040)

#define FPU_FPCC_BFRDY_MASK        (0x00000001)
#define FPU_FPCC_BFRDY_NOSET       (0x00000000)
#define FPU_FPCC_BFRDY_SET         (0x00000001)
//--------

//--------
#define FPU_FPCC_R_MONRDY_MASK      (0x00000100)
#define FPU_FPCC_R_MONRDY_BIT       (8)
#define FPU_FPCC_R_MONRDY_NOSET     (0x00000000)
#define FPU_FPCC_R_MONRDY_SET       (0x00000100)

#define FPU_FPCC_MONRDY_MASK        (0x00000001)
#define FPU_FPCC_MONRDY_NOSET       (0x00000000)
#define FPU_FPCC_MONRDY_SET         (0x00000001)
//--------

//--------
#define FPU_FPCC_R_LSPEN_MASK      (0x40000000)
#define FPU_FPCC_R_LSPEN_BIT       (30)
#define FPU_FPCC_R_LSPEN_NOSET     (0x00000000)
#define FPU_FPCC_R_LSPEN_SET       (0x40000000)

#define FPU_FPCC_LSPEN_MASK        (0x00000001)
#define FPU_FPCC_LSPEN_NOSET       (0x00000000)
#define FPU_FPCC_LSPEN_SET         (0x00000001)
//--------


//--------
#define FPU_FPCC_R_ASPEN_MASK      (0x80000000)
#define FPU_FPCC_R_ASPEN_BIT       (31)
#define FPU_FPCC_R_ASPEN_NOSET     (0x00000000)
#define FPU_FPCC_R_ASPEN_SET       (0x80000000)

#define FPU_FPCC_ASPEN_MASK        (0x00000001)
#define FPU_FPCC_ASPEN_NOSET       (0x00000000)
#define FPU_FPCC_ASPEN_SET         (0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 FPCA ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define FPU_FPCA            (((FPCA_TypeDef*)(FPU_BASE+FPU_FPCA_OFFSET )))
#define FPU_FPCA_R          (*((volatile int32_t *)(FPU_BASE+FPU_FPCA_OFFSET)))


//--------
#define FPU_FPCA_R_ADDRESS_MASK      (0xFFFFFFF8)
#define FPU_FPCA_R_ADDRESS_BIT       (3)

#define FPU_FPCA_ADDRESS_MASK        (0x1FFFFFFF)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 FPDSC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define FPU_FPDSC            (((FPDSC_TypeDef*)(FPU_BASE+FPU_FPDSC_OFFSET )))
#define FPU_FPDSC_R          (*((volatile int32_t *)(FPU_BASE+FPU_FPDSC_OFFSET)))



//--------
#define FPU_FPDSC_R_RMODE_MASK      (0x00C00000)
#define FPU_FPDSC_R_RMODE_BIT       (22)
#define FPU_FPDSC_R_RMODE_RN        (0x00000000)
#define FPU_FPDSC_R_RMODE_RP        (0x00400000)
#define FPU_FPDSC_R_RMODE_RM        (0x00800000)
#define FPU_FPDSC_R_RMODE_RZ        (0x00C00000)

#define FPU_FPDSC_RMODE_MASK        (0x00000003)
#define FPU_FPDSC_RMODE_RN          (0x00000000)
#define FPU_FPDSC_RMODE_RP          (0x00000001)
#define FPU_FPDSC_RMODE_RM          (0x00000002)
#define FPU_FPDSC_RMODE_RZ          (0x00000003)
//--------

//--------
#define FPU_FPDSC_R_FZ_MASK      (0x01000000)
#define FPU_FPDSC_R_FZ_BIT       (24)
#define FPU_FPDSC_R_FZ_0         (0x00000000)
#define FPU_FPDSC_R_FZ_1         (0x01000000)

#define FPU_FPDSC_FZ_MASK        (0x00000001)
#define FPU_FPDSC_FZ_0           (0x00000000)
#define FPU_FPDSC_FZ_1           (0x00000001)
//--------


//--------
#define FPU_FPDSC_R_DN_MASK      (0x02000000)
#define FPU_FPDSC_R_DN_BIT       (25)
#define FPU_FPDSC_R_DN_0         (0x00000000)
#define FPU_FPDSC_R_DN_1         (0x02000000)

#define FPU_FPDSC_DN_MASK        (0x00000001)
#define FPU_FPDSC_DN_0           (0x00000000)
#define FPU_FPDSC_DN_1           (0x00000001)
//--------


//--------
#define FPU_FPDSC_R_AHP_MASK      (0x04000000)
#define FPU_FPDSC_R_AHP_BIT       (26)
#define FPU_FPDSC_R_AHP_0         (0x00000000)
#define FPU_FPDSC_R_AHP_1         (0x04000000)

#define FPU_FPDSC_AHP_MASK        (0x00000001)
#define FPU_FPDSC_AHP_0           (0x00000000)
#define FPU_FPDSC_AHP_1           (0x00000001)
//--------


int32_t FPU_Init(void);

#endif /* FPU_H_ */
