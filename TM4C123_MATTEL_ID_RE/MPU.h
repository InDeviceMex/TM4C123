/*
 * MPU.h
 *
 *  Created on: Jan 19, 2018
 *      Author: Lalo_Alvarez
 */

#ifndef MPU_H_
#define MPU_H_

#include <stdint.h>

#define MPU_BASE            (0xE000E000)
#define MPU_OFFSET          (0x00000D90)



typedef volatile struct
{
    volatile const uint32_t SEPARATE    :1;
    const          uint32_t reserved    :7;
    volatile const uint32_t DREGION     :8;
    volatile const uint32_t IREGION     :8;
    const          uint32_t reserved1   :8;
}MPUTYPE_TypeDef;

typedef volatile struct
{
    volatile uint32_t ENABLE    :1;
    volatile uint32_t HFNMIENA  :1;
    volatile uint32_t PRIVDEFEN :1;
    const    uint32_t reserved  :29;
}MPUCTRL_TypeDef;


typedef volatile struct
{
    volatile uint32_t NUMBER    :3;
    const    uint32_t reserved  :29;
}MPUNUMBER_TypeDef;


typedef volatile struct
{
    volatile uint32_t REGION    :3;
    const    uint32_t reserved  :1;
    volatile uint32_t VALID     :1;
    volatile uint32_t ADDR      :27;
}MPUBASE_TypeDef;

typedef volatile struct
{
    volatile uint32_t REGION    :3;
    const    uint32_t reserved  :1;
    volatile uint32_t VALID     :1;
    volatile uint32_t ADDR      :27;
}MPUBASE1_TypeDef;

typedef volatile struct
{
    volatile uint32_t REGION    :3;
    const    uint32_t reserved  :1;
    volatile uint32_t VALID     :1;
    volatile uint32_t ADDR      :27;
}MPUBASE2_TypeDef;

typedef volatile struct
{
    volatile uint32_t REGION    :3;
    const    uint32_t reserved  :1;
    volatile uint32_t VALID     :1;
    volatile uint32_t ADDR      :27;
}MPUBASE3_TypeDef;


typedef volatile struct
{
    volatile uint32_t ENABLE    :1;
    volatile uint32_t SIZE      :5;
    const    uint32_t reserved  :2;
    volatile uint32_t SRD       :8;
    volatile uint32_t B         :1;
    volatile uint32_t C         :1;
    volatile uint32_t S         :1;
    volatile uint32_t TEX       :3;
    const    uint32_t reserved1 :2;
    volatile uint32_t AP        :3;
    const    uint32_t reserved2 :1;
    volatile uint32_t XN        :1;
    const    uint32_t reserved3 :3;
}MPUATTR_TypeDef;


typedef volatile struct
{
    volatile uint32_t ENABLE    :1;
    volatile uint32_t SIZE      :5;
    const    uint32_t reserved  :2;
    volatile uint32_t SRD       :8;
    volatile uint32_t B         :1;
    volatile uint32_t C         :1;
    volatile uint32_t S         :1;
    volatile uint32_t TEX       :3;
    const    uint32_t reserved1 :2;
    volatile uint32_t AP        :3;
    const    uint32_t reserved2 :1;
    volatile uint32_t XN        :1;
    const    uint32_t reserved3 :3;
}MPUATTR1_TypeDef;


typedef volatile struct
{
    volatile uint32_t ENABLE    :1;
    volatile uint32_t SIZE      :5;
    const    uint32_t reserved  :2;
    volatile uint32_t SRD       :8;
    volatile uint32_t B         :1;
    volatile uint32_t C         :1;
    volatile uint32_t S         :1;
    volatile uint32_t TEX       :3;
    const    uint32_t reserved1 :2;
    volatile uint32_t AP        :3;
    const    uint32_t reserved2 :1;
    volatile uint32_t XN        :1;
    const    uint32_t reserved3 :3;
}MPUATTR2_TypeDef;


typedef volatile struct
{
    volatile uint32_t ENABLE    :1;
    volatile uint32_t SIZE      :5;
    const    uint32_t reserved  :2;
    volatile uint32_t SRD       :8;
    volatile uint32_t B         :1;
    volatile uint32_t C         :1;
    volatile uint32_t S         :1;
    volatile uint32_t TEX       :3;
    const    uint32_t reserved1 :2;
    volatile uint32_t AP        :3;
    const    uint32_t reserved2 :1;
    volatile uint32_t XN        :1;
    const    uint32_t reserved3 :3;
}MPUATTR3_TypeDef;



typedef volatile struct
{
    union
    {
        volatile uint32_t      MPUTYPE;
        MPUTYPE_TypeDef             MPUTYPE_Bit;
    };
    union
    {
        volatile uint32_t      MPUCTRL;
        MPUCTRL_TypeDef             MPUCTRL_Bit;
    };
    union
    {
        volatile uint32_t      MPUNUMBER;
        MPUNUMBER_TypeDef           MPUNUMBER_Bit;
    };
    union
    {
        volatile uint32_t      MPUBASE;
        MPUBASE_TypeDef             MPUBASE_Bit;
    };
    union
    {
        volatile uint32_t      MPUATTR;
        MPUATTR_TypeDef             MPUATTR_Bit;
    };
    union
    {
        volatile uint32_t       MPUBASE1;
        MPUBASE1_TypeDef             MPUBASE1_Bit;
    };
    union
    {
        volatile uint32_t       MPUATTR1;
        MPUATTR1_TypeDef             MPUATTR1_Bit;
    };
    union
    {
        volatile uint32_t       MPUBASE2;
        MPUBASE2_TypeDef             MPUBASE2_Bit;
    };
    union
    {
        volatile uint32_t       MPUATTR2;
        MPUATTR2_TypeDef             MPUATTR2_Bit;
    };
    union
    {
        volatile uint32_t       MPUBASE3;
        MPUBASE3_TypeDef             MPUBASE3_Bit;
    };
    union
    {
        volatile uint32_t       MPUATTR3;
        MPUATTR3_TypeDef             MPUATTR3_Bit;
    };
}MPU_TypeDef;

#define MPU            (((MPU_TypeDef*)(MPU_BASE+ MPU_OFFSET)))



#define MPU_MPUTYPE_OFFSET     (0x0D90)
#define MPU_MPUCTRL_OFFSET     (0x0D94)
#define MPU_MPUNUMBER_OFFSET   (0x0D98)
#define MPU_MPUBASE_OFFSET     (0x0D9C)
#define MPU_MPUATTR_OFFSET     (0x0DA0)
#define MPU_MPUBASE1_OFFSET    (0x0DA4)
#define MPU_MPUATTR1_OFFSET    (0x0DA8)
#define MPU_MPUBASE2_OFFSET    (0x0DAC)
#define MPU_MPUATTR2_OFFSET    (0x0DB0)
#define MPU_MPUBASE3_OFFSET    (0x0DB4)
#define MPU_MPUATTR3_OFFSET    (0x0DB8)

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 MPUTYPE ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define MPU_MPUTYPE            (((MPUTYPE_TypeDef*)(MPU_BASE+MPU_MPUTYPE_OFFSET )))
#define MPU_MPUTYPE_R          (*((volatile uint32_t *)(MPU_BASE+MPU_MPUTYPE_OFFSET)))


//--------
#define MPU_MPUTYPE_R_SEPARATE_MASK      (0x00000001)
#define MPU_MPUTYPE_R_SEPARATE_BIT       (0)
#define MPU_MPUTYPE_R_SEPARATE_UNIFIED   (0x00000000)
#define MPU_MPUTYPE_R_SEPARATE_SEPARATE  (0x00000001)

#define MPU_MPUTYPE_SEPARATE_MASK        (0x00000001)
#define MPU_MPUTYPE_SEPARATE_UNIFIED     (0x00000000)
#define MPU_MPUTYPE_SEPARATE_SEPARATE    (0x00000001)
//--------

//--------
#define MPU_MPUTYPE_R_DREGION_MASK      (0x0000FF00)
#define MPU_MPUTYPE_R_DREGION_BIT       (8)
#define MPU_MPUTYPE_R_DREGION_D8        (0x00000800)

#define MPU_MPUTYPE_DREGION_MASK        (0x000000FF)
#define MPU_MPUTYPE_DREGION_D8          (0x00000008)
//--------


//--------
#define MPU_MPUTYPE_R_IREGION_MASK      (0x00FF0000)
#define MPU_MPUTYPE_R_IREGION_BIT       (16)
#define MPU_MPUTYPE_R_IREGION_I0        (0x00000000)

#define MPU_MPUTYPE_IREGION_MASK        (0x000000FF)
#define MPU_MPUTYPE_IREGION_I8          (0x00000000)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 MPUCTRL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define MPU_MPUCTRL            (((MPUCTRL_TypeDef*)(MPU_BASE+MPU_MPUCTRL_OFFSET )))
#define MPU_MPUCTRL_R          (*((volatile uint32_t *)(MPU_BASE+MPU_MPUCTRL_OFFSET)))


//--------
#define MPU_MPUCTRL_R_ENABLE_MASK      (0x00000001)
#define MPU_MPUCTRL_R_ENABLE_BIT       (0)
#define MPU_MPUCTRL_R_ENABLE_DIS       (0x00000000)
#define MPU_MPUCTRL_R_ENABLE_EN        (0x00000001)

#define MPU_MPUCTRL_ENABLE_MASK        (0x00000001)
#define MPU_MPUCTRL_ENABLE_DIS         (0x00000000)
#define MPU_MPUCTRL_ENABLE_EN          (0x00000001)
//--------


//--------
#define MPU_MPUCTRL_R_HFNMIENA_MASK      (0x00000002)
#define MPU_MPUCTRL_R_HFNMIENA_BIT       (1)
#define MPU_MPUCTRL_R_HFNMIENA_DIS       (0x00000000)
#define MPU_MPUCTRL_R_HFNMIENA_EN        (0x00000002)

#define MPU_MPUCTRL_HFNMIENA_MASK        (0x00000001)
#define MPU_MPUCTRL_HFNMIENA_DIS         (0x00000000)
#define MPU_MPUCTRL_HFNMIENA_EN          (0x00000001)
//--------

//--------
#define MPU_MPUCTRL_R_PRIVDEFEN_MASK      (0x00000004)
#define MPU_MPUCTRL_R_PRIVDEFEN_BIT       (2)
#define MPU_MPUCTRL_R_PRIVDEFEN_DIS       (0x00000000)
#define MPU_MPUCTRL_R_PRIVDEFEN_EN        (0x00000004)

#define MPU_MPUCTRL_PRIVDEFEN_MASK        (0x00000001)
#define MPU_MPUCTRL_PRIVDEFEN_DIS         (0x00000000)
#define MPU_MPUCTRL_PRIVDEFEN_EN          (0x00000001)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 MPUNUMBER ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define MPU_MPUNUMBER            (((MPUNUMBER_TypeDef*)(MPU_BASE+MPU_MPUNUMBER_OFFSET )))
#define MPU_MPUNUMBER_R          (*((volatile uint32_t *)(MPU_BASE+MPU_MPUNUMBER_OFFSET)))


//--------
#define MPU_MPUNUMBER_R_NUMBER_MASK      (0x00000001)
#define MPU_MPUNUMBER_R_NUMBER_BIT       (0)
#define MPU_MPUNUMBER_R_NUMBER_REG0      (0x00000000)
#define MPU_MPUNUMBER_R_NUMBER_REG1      (0x00000001)
#define MPU_MPUNUMBER_R_NUMBER_REG2      (0x00000002)
#define MPU_MPUNUMBER_R_NUMBER_REG3      (0x00000003)
#define MPU_MPUNUMBER_R_NUMBER_REG4      (0x00000004)
#define MPU_MPUNUMBER_R_NUMBER_REG5      (0x00000005)
#define MPU_MPUNUMBER_R_NUMBER_REG6      (0x00000006)
#define MPU_MPUNUMBER_R_NUMBER_REG7      (0x00000007)

#define MPU_MPUNUMBER_NUMBER_MASK        (0x00000001)
#define MPU_MPUNUMBER_NUMBER_REG0        (0x00000000)
#define MPU_MPUNUMBER_NUMBER_REG1        (0x00000001)
#define MPU_MPUNUMBER_NUMBER_REG2        (0x00000002)
#define MPU_MPUNUMBER_NUMBER_REG3        (0x00000003)
#define MPU_MPUNUMBER_NUMBER_REG4        (0x00000004)
#define MPU_MPUNUMBER_NUMBER_REG5        (0x00000005)
#define MPU_MPUNUMBER_NUMBER_REG6        (0x00000006)
#define MPU_MPUNUMBER_NUMBER_REG7        (0x00000007)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 MPUBASE ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define MPU_MPUBASE            (((MPUBASE_TypeDef*)(MPU_BASE+MPU_MPUBASE_OFFSET )))
#define MPU_MPUBASE_R          (*((volatile uint32_t *)(MPU_BASE+MPU_MPUBASE_OFFSET)))


//--------
#define MPU_MPUBASE_R_REGION_MASK      (0x0000000F)
#define MPU_MPUBASE_R_REGION_BIT       (0)
#define MPU_MPUBASE_R_REGION_REG0      (0x00000000)
#define MPU_MPUBASE_R_REGION_REG1      (0x00000001)
#define MPU_MPUBASE_R_REGION_REG2      (0x00000002)
#define MPU_MPUBASE_R_REGION_REG3      (0x00000003)
#define MPU_MPUBASE_R_REGION_REG4      (0x00000004)
#define MPU_MPUBASE_R_REGION_REG5      (0x00000005)
#define MPU_MPUBASE_R_REGION_REG6      (0x00000006)
#define MPU_MPUBASE_R_REGION_REG7      (0x00000007)

#define MPU_MPUBASE_REGION_MASK        (0x0000000F)
#define MPU_MPUBASE_REGION_REG0        (0x00000000)
#define MPU_MPUBASE_REGION_REG1        (0x00000001)
#define MPU_MPUBASE_REGION_REG2        (0x00000002)
#define MPU_MPUBASE_REGION_REG3        (0x00000003)
#define MPU_MPUBASE_REGION_REG4        (0x00000004)
#define MPU_MPUBASE_REGION_REG5        (0x00000005)
#define MPU_MPUBASE_REGION_REG6        (0x00000006)
#define MPU_MPUBASE_REGION_REG7        (0x00000007)
//--------


//--------
#define MPU_MPUBASE_R_VALID_MASK      (0x00000010)
#define MPU_MPUBASE_R_VALID_BIT       (4)
#define MPU_MPUBASE_R_VALID_DIS       (0x00000000)
#define MPU_MPUBASE_R_VALID_EN        (0x00000010)

#define MPU_MPUBASE_VALID_MASK        (0x00000001)
#define MPU_MPUBASE_VALID_DIS         (0x00000000)
#define MPU_MPUBASE_VALID_EN          (0x00000001)
//--------


//--------
#define MPU_MPUBASE_R_ADDR_MASK      (0xFFFFFFE0)
#define MPU_MPUBASE_R_ADDR_BIT       (5)

#define MPU_MPUBASE_ADDR_MASK        (0x01FFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 MPUATTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define MPU_MPUATTR            (((MPUATTR_TypeDef*)(MPU_BASE+MPU_MPUATTR_OFFSET )))
#define MPU_MPUATTR_R          (*((volatile uint32_t *)(MPU_BASE+MPU_MPUATTR_OFFSET)))



//--------
#define MPU_MPUATTR_R_ENABLE_MASK      (0x00000001)
#define MPU_MPUATTR_R_ENABLE_BIT       (0)
#define MPU_MPUATTR_R_ENABLE_DIS       (0x00000000)
#define MPU_MPUATTR_R_ENABLE_EN        (0x00000001)

#define MPU_MPUATTR_ENABLE_MASK        (0x00000001)
#define MPU_MPUATTR_ENABLE_DIS         (0x00000000)
#define MPU_MPUATTR_ENABLE_EN          (0x00000001)
//--------


//--------
#define MPU_MPUATTR_R_SIZE_MASK      (0x0000003E)
#define MPU_MPUATTR_R_SIZE_BIT       (1)

#define MPU_MPUATTR_SIZE_MASK        (0x0000001F)
//--------

//--------
#define MPU_MPUATTR_R_SRD_MASK      (0x0000FF00)
#define MPU_MPUATTR_R_SRD_BIT       (8)
#define MPU_MPUATTR_R_SRD_DIS       (0x00000000)
#define MPU_MPUATTR_R_SRD_EN        (0x00000100)

#define MPU_MPUATTR_SRD_MASK        (0x000000FF)
#define MPU_MPUATTR_SRD_DIS         (0x00000000)
#define MPU_MPUATTR_SRD_EN          (0x00000001)
//--------


//--------
#define MPU_MPUATTR_R_B_MASK      (0x00010000)
#define MPU_MPUATTR_R_B_BIT       (16)
#define MPU_MPUATTR_R_B_DIS       (0x00000000)
#define MPU_MPUATTR_R_B_EN        (0x00010000)

#define MPU_MPUATTR_B_MASK        (0x00000001)
#define MPU_MPUATTR_B_DIS         (0x00000000)
#define MPU_MPUATTR_B_EN          (0x00000001)
//--------

//--------
#define MPU_MPUATTR_R_C_MASK      (0x00020000)
#define MPU_MPUATTR_R_C_BIT       (17)
#define MPU_MPUATTR_R_C_DIS       (0x00000000)
#define MPU_MPUATTR_R_C_EN        (0x00020000)

#define MPU_MPUATTR_C_MASK        (0x00000001)
#define MPU_MPUATTR_C_DIS         (0x00000000)
#define MPU_MPUATTR_C_EN          (0x00000001)
//--------

//--------
#define MPU_MPUATTR_R_S_MASK      (0x00040000)
#define MPU_MPUATTR_R_S_BIT       (18)
#define MPU_MPUATTR_R_S_DIS       (0x00000000)
#define MPU_MPUATTR_R_S_EN        (0x00040000)

#define MPU_MPUATTR_S_MASK        (0x00000001)
#define MPU_MPUATTR_S_DIS         (0x00000000)
#define MPU_MPUATTR_S_EN          (0x00000001)
//--------

//--------
#define MPU_MPUATTR_R_TEX_MASK      (0x00380000)
#define MPU_MPUATTR_R_TEX_BIT       (19)

#define MPU_MPUATTR_TEX_MASK        (0x00000007)
//--------

//--------
#define MPU_MPUATTR_R_AP_MASK      (0x07000000)
#define MPU_MPUATTR_R_AP_BIT       (24)
#define MPU_MPUATTR_R_AP_NANA      (0x00000000)
#define MPU_MPUATTR_R_AP_RWNA      (0x01000000)
#define MPU_MPUATTR_R_AP_RWRO      (0x02000000)
#define MPU_MPUATTR_R_AP_RWRW      (0x03000000)
#define MPU_MPUATTR_R_AP_RONA      (0x05000000)
#define MPU_MPUATTR_R_AP_RORO      (0x06000000)

#define MPU_MPUATTR_AP_MASK      (0x00000007)
#define MPU_MPUATTR_AP_NANA      (0x00000000)
#define MPU_MPUATTR_AP_RWNA      (0x00000001)
#define MPU_MPUATTR_AP_RWRO      (0x00000002)
#define MPU_MPUATTR_AP_RWRW      (0x00000003)
#define MPU_MPUATTR_AP_RONA      (0x00000005)
#define MPU_MPUATTR_AP_RORO      (0x00000006)
//--------





////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 MPUBASE1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define MPU_MPUBASE1            (((MPUBASE1_TypeDef*)(MPU_BASE+MPU_MPUBASE1_OFFSET )))
#define MPU_MPUBASE1_R          (*((volatile uint32_t *)(MPU_BASE+MPU_MPUBASE1_OFFSET)))


//--------
#define MPU_MPUBASE1_R_REGION_MASK      (0x00000001)
#define MPU_MPUBASE1_R_REGION_BIT       (0)
#define MPU_MPUBASE1_R_REGION_REG0      (0x00000000)
#define MPU_MPUBASE1_R_REGION_REG1      (0x00000001)
#define MPU_MPUBASE1_R_REGION_REG2      (0x00000002)
#define MPU_MPUBASE1_R_REGION_REG3      (0x00000003)
#define MPU_MPUBASE1_R_REGION_REG4      (0x00000004)
#define MPU_MPUBASE1_R_REGION_REG5      (0x00000005)
#define MPU_MPUBASE1_R_REGION_REG6      (0x00000006)
#define MPU_MPUBASE1_R_REGION_REG7      (0x00000007)

#define MPU_MPUBASE1_REGION_MASK        (0x00000001)
#define MPU_MPUBASE1_REGION_REG0        (0x00000000)
#define MPU_MPUBASE1_REGION_REG1        (0x00000001)
#define MPU_MPUBASE1_REGION_REG2        (0x00000002)
#define MPU_MPUBASE1_REGION_REG3        (0x00000003)
#define MPU_MPUBASE1_REGION_REG4        (0x00000004)
#define MPU_MPUBASE1_REGION_REG5        (0x00000005)
#define MPU_MPUBASE1_REGION_REG6        (0x00000006)
#define MPU_MPUBASE1_REGION_REG7        (0x00000007)
//--------


//--------
#define MPU_MPUBASE1_R_VALID_MASK      (0x00000010)
#define MPU_MPUBASE1_R_VALID_BIT       (4)
#define MPU_MPUBASE1_R_VALID_DIS       (0x00000000)
#define MPU_MPUBASE1_R_VALID_EN        (0x00000010)

#define MPU_MPUBASE1_VALID_MASK        (0x00000001)
#define MPU_MPUBASE1_VALID_DIS         (0x00000000)
#define MPU_MPUBASE1_VALID_EN          (0x00000001)
//--------


//--------
#define MPU_MPUBASE1_R_ADDR_MASK      (0xFFFFFFE0)
#define MPU_MPUBASE1_R_ADDR_BIT       (5)

#define MPU_MPUBASE1_ADDR_MASK        (0x01FFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 MPUATTR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define MPU_MPUATTR1            (((MPUATTR1_TypeDef*)(MPU_BASE+MPU_MPUATTR1_OFFSET )))
#define MPU_MPUATTR1_R          (*((volatile uint32_t *)(MPU_BASE+MPU_MPUATTR1_OFFSET)))



//--------
#define MPU_MPUATTR1_R_ENABLE_MASK      (0x00000001)
#define MPU_MPUATTR1_R_ENABLE_BIT       (0)
#define MPU_MPUATTR1_R_ENABLE_DIS       (0x00000000)
#define MPU_MPUATTR1_R_ENABLE_EN        (0x00000001)

#define MPU_MPUATTR1_ENABLE_MASK        (0x00000001)
#define MPU_MPUATTR1_ENABLE_DIS         (0x00000000)
#define MPU_MPUATTR1_ENABLE_EN          (0x00000001)
//--------


//--------
#define MPU_MPUATTR1_R_SIZE_MASK      (0x0000003E)
#define MPU_MPUATTR1_R_SIZE_BIT       (1)

#define MPU_MPUATTR1_SIZE_MASK        (0x0000003E)
//--------

//--------
#define MPU_MPUATTR1_R_SRD_MASK      (0x0000FF00)
#define MPU_MPUATTR1_R_SRD_BIT       (8)
#define MPU_MPUATTR1_R_SRD_DIS       (0x00000000)
#define MPU_MPUATTR1_R_SRD_EN        (0x00000100)

#define MPU_MPUATTR1_SRD_MASK        (0x000000FF)
#define MPU_MPUATTR1_SRD_DIS         (0x00000000)
#define MPU_MPUATTR1_SRD_EN          (0x00000001)
//--------


//--------
#define MPU_MPUATTR1_R_B_MASK      (0x00010000)
#define MPU_MPUATTR1_R_B_BIT       (16)
#define MPU_MPUATTR1_R_B_DIS       (0x00000000)
#define MPU_MPUATTR1_R_B_EN        (0x00010000)

#define MPU_MPUATTR1_B_MASK        (0x00000001)
#define MPU_MPUATTR1_B_DIS         (0x00000000)
#define MPU_MPUATTR1_B_EN          (0x00000001)
//--------

//--------
#define MPU_MPUATTR1_R_C_MASK      (0x00020000)
#define MPU_MPUATTR1_R_C_BIT       (17)
#define MPU_MPUATTR1_R_C_DIS       (0x00000000)
#define MPU_MPUATTR1_R_C_EN        (0x00020000)

#define MPU_MPUATTR1_C_MASK        (0x00000001)
#define MPU_MPUATTR1_C_DIS         (0x00000000)
#define MPU_MPUATTR1_C_EN          (0x00000001)
//--------

//--------
#define MPU_MPUATTR1_R_S_MASK      (0x00040000)
#define MPU_MPUATTR1_R_S_BIT       (18)
#define MPU_MPUATTR1_R_S_DIS       (0x00000000)
#define MPU_MPUATTR1_R_S_EN        (0x00040000)

#define MPU_MPUATTR1_S_MASK        (0x00000001)
#define MPU_MPUATTR1_S_DIS         (0x00000000)
#define MPU_MPUATTR1_S_EN          (0x00000001)
//--------

//--------
#define MPU_MPUATTR1_R_TEX_MASK      (0x00380000)
#define MPU_MPUATTR1_R_TEX_BIT       (19)

#define MPU_MPUATTR1_TEX_MASK        (0x00000007)
//--------

//--------
#define MPU_MPUATTR1_R_AP_MASK      (0x07000000)
#define MPU_MPUATTR1_R_AP_BIT       (24)
#define MPU_MPUATTR1_R_AP_NANA      (0x00000000)
#define MPU_MPUATTR1_R_AP_RWNA      (0x01000000)
#define MPU_MPUATTR1_R_AP_RWRO      (0x02000000)
#define MPU_MPUATTR1_R_AP_RWRW      (0x03000000)
#define MPU_MPUATTR1_R_AP_RONA      (0x05000000)
#define MPU_MPUATTR1_R_AP_RORO      (0x06000000)

#define MPU_MPUATTR1_AP_MASK      (0x00000007)
#define MPU_MPUATTR1_AP_NANA      (0x00000000)
#define MPU_MPUATTR1_AP_RWNA      (0x00000001)
#define MPU_MPUATTR1_AP_RWRO      (0x00000002)
#define MPU_MPUATTR1_AP_RWRW      (0x00000003)
#define MPU_MPUATTR1_AP_RONA      (0x00000005)
#define MPU_MPUATTR1_AP_RORO      (0x00000006)
//--------




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 MPUBASE2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define MPU_MPUBASE2            (((MPUBASE2_TypeDef*)(MPU_BASE+MPU_MPUBASE2_OFFSET )))
#define MPU_MPUBASE2_R          (*((volatile uint32_t *)(MPU_BASE+MPU_MPUBASE2_OFFSET)))


//--------
#define MPU_MPUBASE2_R_REGION_MASK      (0x00000001)
#define MPU_MPUBASE2_R_REGION_BIT       (0)
#define MPU_MPUBASE2_R_REGION_REG0      (0x00000000)
#define MPU_MPUBASE2_R_REGION_REG1      (0x00000001)
#define MPU_MPUBASE2_R_REGION_REG2      (0x00000002)
#define MPU_MPUBASE2_R_REGION_REG3      (0x00000003)
#define MPU_MPUBASE2_R_REGION_REG4      (0x00000004)
#define MPU_MPUBASE2_R_REGION_REG5      (0x00000005)
#define MPU_MPUBASE2_R_REGION_REG6      (0x00000006)
#define MPU_MPUBASE2_R_REGION_REG7      (0x00000007)

#define MPU_MPUBASE2_REGION_MASK        (0x00000001)
#define MPU_MPUBASE2_REGION_REG0        (0x00000000)
#define MPU_MPUBASE2_REGION_REG1        (0x00000001)
#define MPU_MPUBASE2_REGION_REG2        (0x00000002)
#define MPU_MPUBASE2_REGION_REG3        (0x00000003)
#define MPU_MPUBASE2_REGION_REG4        (0x00000004)
#define MPU_MPUBASE2_REGION_REG5        (0x00000005)
#define MPU_MPUBASE2_REGION_REG6        (0x00000006)
#define MPU_MPUBASE2_REGION_REG7        (0x00000007)
//--------


//--------
#define MPU_MPUBASE2_R_VALID_MASK      (0x00000010)
#define MPU_MPUBASE2_R_VALID_BIT       (4)
#define MPU_MPUBASE2_R_VALID_DIS       (0x00000000)
#define MPU_MPUBASE2_R_VALID_EN        (0x00000010)

#define MPU_MPUBASE2_VALID_MASK        (0x00000001)
#define MPU_MPUBASE2_VALID_DIS         (0x00000000)
#define MPU_MPUBASE2_VALID_EN          (0x00000001)
//--------


//--------
#define MPU_MPUBASE2_R_ADDR_MASK      (0xFFFFFFE0)
#define MPU_MPUBASE2_R_ADDR_BIT       (5)

#define MPU_MPUBASE2_ADDR_MASK        (0x01FFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 9 MPUATTR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define MPU_MPUATTR2            (((MPUATTR2_TypeDef*)(MPU_BASE+MPU_MPUATTR2_OFFSET )))
#define MPU_MPUATTR2_R          (*((volatile uint32_t *)(MPU_BASE+MPU_MPUATTR2_OFFSET)))



//--------
#define MPU_MPUATTR2_R_ENABLE_MASK      (0x00000001)
#define MPU_MPUATTR2_R_ENABLE_BIT       (0)
#define MPU_MPUATTR2_R_ENABLE_DIS       (0x00000000)
#define MPU_MPUATTR2_R_ENABLE_EN        (0x00000001)

#define MPU_MPUATTR2_ENABLE_MASK        (0x00000001)
#define MPU_MPUATTR2_ENABLE_DIS         (0x00000000)
#define MPU_MPUATTR2_ENABLE_EN          (0x00000001)
//--------


//--------
#define MPU_MPUATTR2_R_SIZE_MASK      (0x0000003E)
#define MPU_MPUATTR2_R_SIZE_BIT       (1)

#define MPU_MPUATTR2_SIZE_MASK        (0x0000003E)
//--------

//--------
#define MPU_MPUATTR2_R_SRD_MASK      (0x0000FF00)
#define MPU_MPUATTR2_R_SRD_BIT       (8)
#define MPU_MPUATTR2_R_SRD_DIS       (0x00000000)
#define MPU_MPUATTR2_R_SRD_EN        (0x00000100)

#define MPU_MPUATTR2_SRD_MASK        (0x000000FF)
#define MPU_MPUATTR2_SRD_DIS         (0x00000000)
#define MPU_MPUATTR2_SRD_EN          (0x00000001)
//--------


//--------
#define MPU_MPUATTR2_R_B_MASK      (0x00010000)
#define MPU_MPUATTR2_R_B_BIT       (16)
#define MPU_MPUATTR2_R_B_DIS       (0x00000000)
#define MPU_MPUATTR2_R_B_EN        (0x00010000)

#define MPU_MPUATTR2_B_MASK        (0x00000001)
#define MPU_MPUATTR2_B_DIS         (0x00000000)
#define MPU_MPUATTR2_B_EN          (0x00000001)
//--------

//--------
#define MPU_MPUATTR2_R_C_MASK      (0x00020000)
#define MPU_MPUATTR2_R_C_BIT       (17)
#define MPU_MPUATTR2_R_C_DIS       (0x00000000)
#define MPU_MPUATTR2_R_C_EN        (0x00020000)

#define MPU_MPUATTR2_C_MASK        (0x00000001)
#define MPU_MPUATTR2_C_DIS         (0x00000000)
#define MPU_MPUATTR2_C_EN          (0x00000001)
//--------

//--------
#define MPU_MPUATTR2_R_S_MASK      (0x00040000)
#define MPU_MPUATTR2_R_S_BIT       (18)
#define MPU_MPUATTR2_R_S_DIS       (0x00000000)
#define MPU_MPUATTR2_R_S_EN        (0x00040000)

#define MPU_MPUATTR2_S_MASK        (0x00000001)
#define MPU_MPUATTR2_S_DIS         (0x00000000)
#define MPU_MPUATTR2_S_EN          (0x00000001)
//--------

//--------
#define MPU_MPUATTR2_R_TEX_MASK      (0x00380000)
#define MPU_MPUATTR2_R_TEX_BIT       (19)

#define MPU_MPUATTR2_TEX_MASK        (0x00000007)
//--------

//--------
#define MPU_MPUATTR2_R_AP_MASK      (0x07000000)
#define MPU_MPUATTR2_R_AP_BIT       (24)
#define MPU_MPUATTR2_R_AP_NANA      (0x00000000)
#define MPU_MPUATTR2_R_AP_RWNA      (0x01000000)
#define MPU_MPUATTR2_R_AP_RWRO      (0x02000000)
#define MPU_MPUATTR2_R_AP_RWRW      (0x03000000)
#define MPU_MPUATTR2_R_AP_RONA      (0x05000000)
#define MPU_MPUATTR2_R_AP_RORO      (0x06000000)

#define MPU_MPUATTR2_AP_MASK      (0x00000007)
#define MPU_MPUATTR2_AP_NANA      (0x00000000)
#define MPU_MPUATTR2_AP_RWNA      (0x00000001)
#define MPU_MPUATTR2_AP_RWRO      (0x00000002)
#define MPU_MPUATTR2_AP_RWRW      (0x00000003)
#define MPU_MPUATTR2_AP_RONA      (0x00000005)
#define MPU_MPUATTR2_AP_RORO      (0x00000006)
//--------




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 10 MPUBASE3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define MPU_MPUBASE3            (((MPUBASE3_TypeDef*)(MPU_BASE+MPU_MPUBASE3_OFFSET )))
#define MPU_MPUBASE3_R          (*((volatile uint32_t *)(MPU_BASE+MPU_MPUBASE3_OFFSET)))


//--------
#define MPU_MPUBASE3_R_REGION_MASK      (0x00000001)
#define MPU_MPUBASE3_R_REGION_BIT       (0)
#define MPU_MPUBASE3_R_REGION_REG0      (0x00000000)
#define MPU_MPUBASE3_R_REGION_REG1      (0x00000001)
#define MPU_MPUBASE3_R_REGION_REG2      (0x00000002)
#define MPU_MPUBASE3_R_REGION_REG3      (0x00000003)
#define MPU_MPUBASE3_R_REGION_REG4      (0x00000004)
#define MPU_MPUBASE3_R_REGION_REG5      (0x00000005)
#define MPU_MPUBASE3_R_REGION_REG6      (0x00000006)
#define MPU_MPUBASE3_R_REGION_REG7      (0x00000007)

#define MPU_MPUBASE3_REGION_MASK        (0x00000001)
#define MPU_MPUBASE3_REGION_REG0        (0x00000000)
#define MPU_MPUBASE3_REGION_REG1        (0x00000001)
#define MPU_MPUBASE3_REGION_REG2        (0x00000002)
#define MPU_MPUBASE3_REGION_REG3        (0x00000003)
#define MPU_MPUBASE3_REGION_REG4        (0x00000004)
#define MPU_MPUBASE3_REGION_REG5        (0x00000005)
#define MPU_MPUBASE3_REGION_REG6        (0x00000006)
#define MPU_MPUBASE3_REGION_REG7        (0x00000007)
//--------


//--------
#define MPU_MPUBASE3_R_VALID_MASK      (0x00000010)
#define MPU_MPUBASE3_R_VALID_BIT       (4)
#define MPU_MPUBASE3_R_VALID_DIS       (0x00000000)
#define MPU_MPUBASE3_R_VALID_EN        (0x00000010)

#define MPU_MPUBASE3_VALID_MASK        (0x00000001)
#define MPU_MPUBASE3_VALID_DIS         (0x00000000)
#define MPU_MPUBASE3_VALID_EN          (0x00000001)
//--------


//--------
#define MPU_MPUBASE3_R_ADDR_MASK      (0xFFFFFFE0)
#define MPU_MPUBASE3_R_ADDR_BIT       (5)

#define MPU_MPUBASE3_ADDR_MASK        (0x01FFFFFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 11 MPUATTR3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define MPU_MPUATTR3            (((MPUATTR3_TypeDef*)(MPU_BASE+MPU_MPUATTR3_OFFSET )))
#define MPU_MPUATTR3_R          (*((volatile uint32_t *)(MPU_BASE+MPU_MPUATTR3_OFFSET)))



//--------
#define MPU_MPUATTR3_R_ENABLE_MASK      (0x00000001)
#define MPU_MPUATTR3_R_ENABLE_BIT       (0)
#define MPU_MPUATTR3_R_ENABLE_DIS       (0x00000000)
#define MPU_MPUATTR3_R_ENABLE_EN        (0x00000001)

#define MPU_MPUATTR3_ENABLE_MASK        (0x00000001)
#define MPU_MPUATTR3_ENABLE_DIS         (0x00000000)
#define MPU_MPUATTR3_ENABLE_EN          (0x00000001)
//--------


//--------
#define MPU_MPUATTR3_R_SIZE_MASK      (0x0000003E)
#define MPU_MPUATTR3_R_SIZE_BIT       (1)

#define MPU_MPUATTR3_SIZE_MASK        (0x0000003E)
//--------

//--------
#define MPU_MPUATTR3_R_SRD_MASK      (0x0000FF00)
#define MPU_MPUATTR3_R_SRD_BIT       (8)
#define MPU_MPUATTR3_R_SRD_DIS       (0x00000000)
#define MPU_MPUATTR3_R_SRD_EN        (0x00000100)

#define MPU_MPUATTR3_SRD_MASK        (0x000000FF)
#define MPU_MPUATTR3_SRD_DIS         (0x00000000)
#define MPU_MPUATTR3_SRD_EN          (0x00000001)
//--------


//--------
#define MPU_MPUATTR3_R_B_MASK      (0x00010000)
#define MPU_MPUATTR3_R_B_BIT       (16)
#define MPU_MPUATTR3_R_B_DIS       (0x00000000)
#define MPU_MPUATTR3_R_B_EN        (0x00010000)

#define MPU_MPUATTR3_B_MASK        (0x00000001)
#define MPU_MPUATTR3_B_DIS         (0x00000000)
#define MPU_MPUATTR3_B_EN          (0x00000001)
//--------

//--------
#define MPU_MPUATTR3_R_C_MASK      (0x00020000)
#define MPU_MPUATTR3_R_C_BIT       (17)
#define MPU_MPUATTR3_R_C_DIS       (0x00000000)
#define MPU_MPUATTR3_R_C_EN        (0x00020000)

#define MPU_MPUATTR3_C_MASK        (0x00000001)
#define MPU_MPUATTR3_C_DIS         (0x00000000)
#define MPU_MPUATTR3_C_EN          (0x00000001)
//--------

//--------
#define MPU_MPUATTR3_R_S_MASK      (0x00040000)
#define MPU_MPUATTR3_R_S_BIT       (18)
#define MPU_MPUATTR3_R_S_DIS       (0x00000000)
#define MPU_MPUATTR3_R_S_EN        (0x00040000)

#define MPU_MPUATTR3_S_MASK        (0x00000001)
#define MPU_MPUATTR3_S_DIS         (0x00000000)
#define MPU_MPUATTR3_S_EN          (0x00000001)
//--------

//--------
#define MPU_MPUATTR3_R_TEX_MASK      (0x00380000)
#define MPU_MPUATTR3_R_TEX_BIT       (19)

#define MPU_MPUATTR3_TEX_MASK        (0x00000007)
//--------

//--------
#define MPU_MPUATTR3_R_AP_MASK      (0x07000000)
#define MPU_MPUATTR3_R_AP_BIT       (24)
#define MPU_MPUATTR3_R_AP_NANA      (0x00000000)
#define MPU_MPUATTR3_R_AP_RWNA      (0x01000000)
#define MPU_MPUATTR3_R_AP_RWRO      (0x02000000)
#define MPU_MPUATTR3_R_AP_RWRW      (0x03000000)
#define MPU_MPUATTR3_R_AP_RONA      (0x05000000)
#define MPU_MPUATTR3_R_AP_RORO      (0x06000000)

#define MPU_MPUATTR3_AP_MASK      (0x00000007)
#define MPU_MPUATTR3_AP_NANA      (0x00000000)
#define MPU_MPUATTR3_AP_RWNA      (0x00000001)
#define MPU_MPUATTR3_AP_RWRO      (0x00000002)
#define MPU_MPUATTR3_AP_RWRW      (0x00000003)
#define MPU_MPUATTR3_AP_RONA      (0x00000005)
#define MPU_MPUATTR3_AP_RORO      (0x00000006)
//--------


#endif /* MPU_H_ */
