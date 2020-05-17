/*
 * MPU.h
 *
 *  Created on: 25 jul. 2018
 *      Author: InDev
 */

#ifndef MPU_H_
#define MPU_H_

#include <stdint.h>

#define MPU_BASE            ((uint32_t)0xE000E000)
#define MPU_OFFSET          ((uint32_t)0x00000D90)

#define MPU_REGION_NUMBER (8u)

typedef volatile struct
{
    const uint32_t SEPARATE    	:1;
    const uint32_t reserved    	:7;
    const uint32_t DREGION     	:8;
    const uint32_t IREGION     	:8;
    const uint32_t reserved1   	:8;
}MPU_TYPER_TypeDef;

typedef volatile struct
{
    volatile uint32_t ENABLE    	:1;
    volatile uint32_t HFNMIENA  	:1;
    volatile uint32_t PRIVDEFENA 	:1;
    const    uint32_t reserved  	:29;
}MPU_CTRL_TypeDef;


typedef volatile struct
{
    volatile uint32_t REGION    	:3;
    const    uint32_t reserved  	:29;
}MPU_RNR_TypeDef;


typedef volatile struct
{
    volatile uint32_t REGION    	:4;
    volatile uint32_t VALID     	:1;
    volatile uint32_t ADDR      	:27;
}MPU_RBAR_TypeDef;


typedef volatile struct
{
    volatile uint32_t ENABLE    	:1;
    volatile uint32_t SIZE      	:5;
    const    uint32_t reserved  	:2;
    volatile uint32_t SRD0       	:1;
    volatile uint32_t SRD1       	:1;
    volatile uint32_t SRD2       	:1;
    volatile uint32_t SRD3       	:1;
    volatile uint32_t SRD4       	:1;
    volatile uint32_t SRD5       	:1;
    volatile uint32_t SRD6       	:1;
    volatile uint32_t SRD7       	:1;
    volatile uint32_t B         	:1;
    volatile uint32_t C         	:1;
    volatile uint32_t S         	:1;
    volatile uint32_t TEX       	:3;
    const    uint32_t reserved1 	:2;
    volatile uint32_t AP        	:3;
    const    uint32_t reserved2 	:1;
    volatile uint32_t XN        	:1;
    const    uint32_t reserved3 	:3;
}MPU_RASR_TypeDef;


typedef volatile struct
{
    volatile uint32_t ENABLE        :1;
    volatile uint32_t SIZE          :5;
    const    uint32_t reserved      :2;
    volatile uint32_t SRD           :8;
    volatile uint32_t B             :1;
    volatile uint32_t C             :1;
    volatile uint32_t S             :1;
    volatile uint32_t TEX           :3;
    const    uint32_t reserved1     :2;
    volatile uint32_t AP            :3;
    const    uint32_t reserved2     :1;
    volatile uint32_t XN            :1;
    const    uint32_t reserved3     :3;
}MPU_RASRb_TypeDef;



typedef volatile struct
{
    union
    {
        volatile uint32_t		TYPER;
        MPU_TYPER_TypeDef 	    TYPE_Bit;
    };
    union
    {
        volatile uint32_t		CTRL;
        MPU_CTRL_TypeDef        CTRL_Bit;
    };
    union
    {
        volatile uint32_t		RNR;
        MPU_RNR_TypeDef         RNR_Bit;
    };
    union
    {
        volatile uint32_t     	RBAR;
        MPU_RBAR_TypeDef        RBAR_Bit;
    };
    union
    {
        volatile uint32_t      	RASR;
        MPU_RASR_TypeDef        RASR_Bit;
    };
    union
    {
        volatile uint32_t      	RBAR1;
        MPU_RBAR_TypeDef        RBAR1_Bit;
    };
    union
    {
        volatile uint32_t     	RASR1;
        MPU_RASR_TypeDef        RASR1_Bit;
    };
    union
    {
        volatile uint32_t    	RBAR2;
        MPU_RBAR_TypeDef        RBAR2_Bit;
    };
    union
    {
        volatile uint32_t     	RASR2;
        MPU_RASR_TypeDef        RASR2_Bit;
    };
    union
    {
        volatile uint32_t      	RBAR3;
        MPU_RBAR_TypeDef        RBAR3_Bit;
    };
    union
    {
        volatile uint32_t       RASR3;
        MPU_RASR_TypeDef        RASR3_Bit;
    };
}MPU_TypeDef;

#define MPU            		 (((MPU_TypeDef*)(MPU_BASE+ MPU_OFFSET)))
#define MPU_R(offset)  	     (*((volatile uint32_t *)(MPU_BASE+offset)))


#define MPU_TYPER_OFFSET     ((uint32_t)0x0D90)
#define MPU_CTRL_OFFSET     ((uint32_t)0x0D94)
#define MPU_RNR_OFFSET      ((uint32_t)0x0D98)
#define MPU_RBAR_OFFSET     ((uint32_t)0x0D9C)
#define MPU_RASR_OFFSET     ((uint32_t)0x0DA0)
#define MPU_RBAR1_OFFSET    ((uint32_t)0x0DA4)
#define MPU_RASR1_OFFSET    ((uint32_t)0x0DA8)
#define MPU_RBAR2_OFFSET    ((uint32_t)0x0DAC)
#define MPU_RASR2_OFFSET    ((uint32_t)0x0DB0)
#define MPU_RBAR3_OFFSET    ((uint32_t)0x0DB4)
#define MPU_RASR3_OFFSET    ((uint32_t)0x0DB8)

/**********************************************************************************************
************************************** 1 TYPER ***********************************************
**********************************************************************************************/
#define MPU_TYPER            		(((MPU_TYPER_TypeDef*)(MPU_BASE+MPU_TYPER_OFFSET )))
#define MPU_TYPER_R          		(*((volatile uint32_t *)(MPU_BASE+MPU_TYPER_OFFSET)))


/*--------*/
#define MPU_TYPER_R_SEPARATE_MASK      	((uint32_t)0x00000001)
#define MPU_TYPER_R_SEPARATE_BIT       	(0)
#define MPU_TYPER_R_SEPARATE_UNIFIED   	((uint32_t)0x00000000)
#define MPU_TYPER_R_SEPARATE_SEPARATE  	((uint32_t)0x00000001)

#define MPU_TYPER_SEPARATE_MASK        	((uint32_t)0x00000001)
#define MPU_TYPER_SEPARATE_UNIFIED     	((uint32_t)0x00000000)
#define MPU_TYPER_SEPARATE_SEPARATE    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_TYPER_R_DREGION_MASK      	((uint32_t)0x0000FF00)
#define MPU_TYPER_R_DREGION_BIT       	(8)
#define MPU_TYPER_R_DREGION_D8        	((uint32_t)0x00000800)
#define MPU_TYPER_R_DREGION_D16        	((uint32_t)0x00000F00)

#define MPU_TYPER_DREGION_MASK        	((uint32_t)0x000000FF)
#define MPU_TYPER_DREGION_D8          	((uint32_t)0x00000008)
#define MPU_TYPER_DREGION_D16          	((uint32_t)0x0000000F)
/*--------*/


/*--------*/
#define MPU_TYPER_R_IREGION_MASK      ((uint32_t)0x00FF0000)
#define MPU_TYPER_R_IREGION_BIT       (16)
#define MPU_TYPER_R_IREGION_I0        ((uint32_t)0x00000000)

#define MPU_TYPER_IREGION_MASK        ((uint32_t)0x000000FF)
#define MPU_TYPER_IREGION_I0          ((uint32_t)0x00000000)
/*--------*/

/**********************************************************************************************
************************************** 2 CTRL ***********************************************
**********************************************************************************************/
#define MPU_CTRL            			(((MPU_CTRL_TypeDef*)(MPU_BASE+MPU_CTRL_OFFSET )))
#define MPU_CTRL_R          			(*((volatile uint32_t *)(MPU_BASE+MPU_CTRL_OFFSET)))


/*--------*/
#define MPU_CTRL_R_ENABLE_MASK      	((uint32_t)0x00000001)
#define MPU_CTRL_R_ENABLE_BIT       	(0)
#define MPU_CTRL_R_ENABLE_DIS       	((uint32_t)0x00000000)
#define MPU_CTRL_R_ENABLE_EN        	((uint32_t)0x00000001)

#define MPU_CTRL_ENABLE_MASK        	((uint32_t)0x00000001)
#define MPU_CTRL_ENABLE_DIS         	((uint32_t)0x00000000)
#define MPU_CTRL_ENABLE_EN          	((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define MPU_CTRL_R_HFNMIENA_MASK      	((uint32_t)0x00000002)
#define MPU_CTRL_R_HFNMIENA_BIT       	(1)
#define MPU_CTRL_R_HFNMIENA_DIS       	((uint32_t)0x00000000)
#define MPU_CTRL_R_HFNMIENA_EN        	((uint32_t)0x00000002)

#define MPU_CTRL_HFNMIENA_MASK        	((uint32_t)0x00000001)
#define MPU_CTRL_HFNMIENA_DIS         	((uint32_t)0x00000000)
#define MPU_CTRL_HFNMIENA_EN          	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_CTRL_R_PRIVDEFENA_MASK      ((uint32_t)0x00000004)
#define MPU_CTRL_R_PRIVDEFENA_BIT       (2)
#define MPU_CTRL_R_PRIVDEFENA_DIS       ((uint32_t)0x00000000)
#define MPU_CTRL_R_PRIVDEFENA_EN        ((uint32_t)0x00000004)

#define MPU_CTRL_PRIVDEFENA_MASK        ((uint32_t)0x00000001)
#define MPU_CTRL_PRIVDEFENA_DIS         ((uint32_t)0x00000000)
#define MPU_CTRL_PRIVDEFENA_EN          ((uint32_t)0x00000001)
/*--------*/

/**********************************************************************************************
**************************************3 RNR ***********************************************
**********************************************************************************************/
#define MPU_RNR            (((MPU_RNR_TypeDef*)(MPU_BASE+MPU_RNR_OFFSET )))
#define MPU_RNR_R          (*((volatile uint32_t *)(MPU_BASE+MPU_RNR_OFFSET)))


/*--------*/
#define MPU_RNR_R_REGION_MASK      ((uint32_t)0x0000000F)
#define MPU_RNR_R_REGION_BIT       (0)
#define MPU_RNR_R_REGION_REG0      ((uint32_t)0x00000000)
#define MPU_RNR_R_REGION_REG1      ((uint32_t)0x00000001)
#define MPU_RNR_R_REGION_REG2      ((uint32_t)0x00000002)
#define MPU_RNR_R_REGION_REG3      ((uint32_t)0x00000003)
#define MPU_RNR_R_REGION_REG4      ((uint32_t)0x00000004)
#define MPU_RNR_R_REGION_REG5      ((uint32_t)0x00000005)
#define MPU_RNR_R_REGION_REG6      ((uint32_t)0x00000006)
#define MPU_RNR_R_REGION_REG7      ((uint32_t)0x00000007)
#define MPU_RNR_R_REGION_REG8      ((uint32_t)0x00000008)
#define MPU_RNR_R_REGION_REG9      ((uint32_t)0x00000009)
#define MPU_RNR_R_REGION_REG10     ((uint32_t)0x0000000A)
#define MPU_RNR_R_REGION_REG11     ((uint32_t)0x0000000B)
#define MPU_RNR_R_REGION_REG12     ((uint32_t)0x0000000C)
#define MPU_RNR_R_REGION_REG13     ((uint32_t)0x0000000D)
#define MPU_RNR_R_REGION_REG14     ((uint32_t)0x0000000E)
#define MPU_RNR_R_REGION_REG15     ((uint32_t)0x0000000F)

#define MPU_RNR_REGION_MASK        ((uint32_t)0x0000000F)
#define MPU_RNR_REGION_REG0        ((uint32_t)0x00000000)
#define MPU_RNR_REGION_REG1        ((uint32_t)0x00000001)
#define MPU_RNR_REGION_REG2        ((uint32_t)0x00000002)
#define MPU_RNR_REGION_REG3        ((uint32_t)0x00000003)
#define MPU_RNR_REGION_REG4        ((uint32_t)0x00000004)
#define MPU_RNR_REGION_REG5        ((uint32_t)0x00000005)
#define MPU_RNR_REGION_REG6        ((uint32_t)0x00000006)
#define MPU_RNR_REGION_REG7        ((uint32_t)0x00000007)
#define MPU_RNR_REGION_REG8        ((uint32_t)0x00000008)
#define MPU_RNR_REGION_REG9        ((uint32_t)0x00000009)
#define MPU_RNR_REGION_REG10       ((uint32_t)0x0000000A)
#define MPU_RNR_REGION_REG11       ((uint32_t)0x0000000B)
#define MPU_RNR_REGION_REG12       ((uint32_t)0x0000000C)
#define MPU_RNR_REGION_REG13       ((uint32_t)0x0000000D)
#define MPU_RNR_REGION_REG14       ((uint32_t)0x0000000E)
#define MPU_RNR_REGION_REG15       ((uint32_t)0x0000000F)
/*--------*/

/**********************************************************************************************
**************************************4 RBAR ***********************************************
**********************************************************************************************/
#define MPU_RBAR            (((MPU_RBAR_TypeDef*)(MPU_BASE+MPU_RBAR_OFFSET )))
#define MPU_RBAR_R          (*((volatile uint32_t *)(MPU_BASE+MPU_RBAR_OFFSET)))


/*--------*/
#define MPU_RBAR_R_REGION_MASK      ((uint32_t)0x0000000F)
#define MPU_RBAR_R_REGION_BIT       (0)
#define MPU_RBAR_R_REGION_REG0      ((uint32_t)0x00000000)
#define MPU_RBAR_R_REGION_REG1      ((uint32_t)0x00000001)
#define MPU_RBAR_R_REGION_REG2      ((uint32_t)0x00000002)
#define MPU_RBAR_R_REGION_REG3      ((uint32_t)0x00000003)
#define MPU_RBAR_R_REGION_REG4      ((uint32_t)0x00000004)
#define MPU_RBAR_R_REGION_REG5      ((uint32_t)0x00000005)
#define MPU_RBAR_R_REGION_REG6      ((uint32_t)0x00000006)
#define MPU_RBAR_R_REGION_REG7      ((uint32_t)0x00000007)
#define MPU_RBAR_R_REGION_REG8      ((uint32_t)0x00000008)
#define MPU_RBAR_R_REGION_REG9      ((uint32_t)0x00000009)
#define MPU_RBAR_R_REGION_REG10     ((uint32_t)0x0000000A)
#define MPU_RBAR_R_REGION_REG11     ((uint32_t)0x0000000B)
#define MPU_RBAR_R_REGION_REG12     ((uint32_t)0x0000000C)
#define MPU_RBAR_R_REGION_REG13     ((uint32_t)0x0000000D)
#define MPU_RBAR_R_REGION_REG14     ((uint32_t)0x0000000E)
#define MPU_RBAR_R_REGION_REG15     ((uint32_t)0x0000000F)

#define MPU_RBAR_REGION_MASK        ((uint32_t)0x0000000F)
#define MPU_RBAR_REGION_REG0        ((uint32_t)0x00000000)
#define MPU_RBAR_REGION_REG1        ((uint32_t)0x00000001)
#define MPU_RBAR_REGION_REG2        ((uint32_t)0x00000002)
#define MPU_RBAR_REGION_REG3        ((uint32_t)0x00000003)
#define MPU_RBAR_REGION_REG4        ((uint32_t)0x00000004)
#define MPU_RBAR_REGION_REG5        ((uint32_t)0x00000005)
#define MPU_RBAR_REGION_REG6        ((uint32_t)0x00000006)
#define MPU_RBAR_REGION_REG7        ((uint32_t)0x00000007)
#define MPU_RBAR_REGION_REG8        ((uint32_t)0x00000008)
#define MPU_RBAR_REGION_REG9        ((uint32_t)0x00000009)
#define MPU_RBAR_REGION_REG10       ((uint32_t)0x0000000A)
#define MPU_RBAR_REGION_REG11       ((uint32_t)0x0000000B)
#define MPU_RBAR_REGION_REG12       ((uint32_t)0x0000000C)
#define MPU_RBAR_REGION_REG13       ((uint32_t)0x0000000D)
#define MPU_RBAR_REGION_REG14       ((uint32_t)0x0000000E)
#define MPU_RBAR_REGION_REG15       ((uint32_t)0x0000000F)
/*--------*/


/*--------*/
#define MPU_RBAR_R_VALID_MASK      ((uint32_t)0x00000010)
#define MPU_RBAR_R_VALID_BIT       (4)
#define MPU_RBAR_R_VALID_DIS       ((uint32_t)0x00000000)
#define MPU_RBAR_R_VALID_EN        ((uint32_t)0x00000010)

#define MPU_RBAR_VALID_MASK        ((uint32_t)0x00000001)
#define MPU_RBAR_VALID_DIS         ((uint32_t)0x00000000)
#define MPU_RBAR_VALID_EN          ((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define MPU_RBAR_R_ADDR_MASK      ((uint32_t)0xFFFFFFE0)
#define MPU_RBAR_R_ADDR_BIT       (5)

#define MPU_RBAR_ADDR_MASK        ((uint32_t)0x01FFFFFF)
/*--------*/

/**********************************************************************************************
**************************************5 RASR ***********************************************
**********************************************************************************************/
#define MPU_RASR            (((MPU_RASR_TypeDef*)(MPU_BASE+MPU_RASR_OFFSET )))
#define MPU_RASR_R          (*((volatile uint32_t *)(MPU_BASE+MPU_RASR_OFFSET)))



/*--------*/
#define MPU_RASR_R_ENABLE_MASK      ((uint32_t)0x00000001)
#define MPU_RASR_R_ENABLE_BIT       (0)
#define MPU_RASR_R_ENABLE_DIS       ((uint32_t)0x00000000)
#define MPU_RASR_R_ENABLE_EN        ((uint32_t)0x00000001)

#define MPU_RASR_ENABLE_MASK        ((uint32_t)0x00000001)
#define MPU_RASR_ENABLE_DIS         ((uint32_t)0x00000000)
#define MPU_RASR_ENABLE_EN          ((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define MPU_RASR_R_SIZE_MASK      ((uint32_t)0x0000003E)
#define MPU_RASR_R_SIZE_BIT       (1)
#define MPU_RASR_R_SIZE_32B       ((uint32_t)0x00000008)
#define MPU_RASR_R_SIZE_1KB       ((uint32_t)0x00000012)
#define MPU_RASR_R_SIZE_1MB       ((uint32_t)0x00000026)
#define MPU_RASR_R_SIZE_1GB       ((uint32_t)0x0000003A)
#define MPU_RASR_R_SIZE_4GB       ((uint32_t)0x0000003E)

#define MPU_RASR_SIZE_MASK        ((uint32_t)0x0000001F)
#define MPU_RASR_SIZE_32B         ((uint32_t)0x00000004)
#define MPU_RASR_SIZE_1KB         ((uint32_t)0x00000009)
#define MPU_RASR_SIZE_1MB         ((uint32_t)0x00000013)
#define MPU_RASR_SIZE_1GB         ((uint32_t)0x0000001D)
#define MPU_RASR_SIZE_4GB         ((uint32_t)0x0000001F)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD0_MASK      ((uint32_t)0x00000100)
#define MPU_RASR_R_SRD0_BIT       (8)
#define MPU_RASR_R_SRD0_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR_R_SRD0_DIS       ((uint32_t)0x00000100)

#define MPU_RASR_SRD0_MASK        ((uint32_t)0x00000001)
#define MPU_RASR_SRD0_EN          ((uint32_t)0x00000000)
#define MPU_RASR_SRD0_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD1_MASK      ((uint32_t)0x00000200)
#define MPU_RASR_R_SRD1_BIT       (9)
#define MPU_RASR_R_SRD1_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR_R_SRD1_DIS       ((uint32_t)0x00000200)

#define MPU_RASR_SRD1_MASK        ((uint32_t)0x00000001)
#define MPU_RASR_SRD1_EN          ((uint32_t)0x00000000)
#define MPU_RASR_SRD1_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD2_MASK      ((uint32_t)0x00000400)
#define MPU_RASR_R_SRD2_BIT       (10)
#define MPU_RASR_R_SRD2_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR_R_SRD2_DIS       ((uint32_t)0x00000400)

#define MPU_RASR_SRD2_MASK        ((uint32_t)0x00000001)
#define MPU_RASR_SRD2_EN          ((uint32_t)0x00000000)
#define MPU_RASR_SRD2_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD3_MASK      ((uint32_t)0x00000800)
#define MPU_RASR_R_SRD3_BIT       (11)
#define MPU_RASR_R_SRD3_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR_R_SRD3_DIS       ((uint32_t)0x00000800)

#define MPU_RASR_SRD3_MASK        ((uint32_t)0x00000001)
#define MPU_RASR_SRD3_EN          ((uint32_t)0x00000000)
#define MPU_RASR_SRD3_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD4_MASK      ((uint32_t)0x00001000)
#define MPU_RASR_R_SRD4_BIT       (12)
#define MPU_RASR_R_SRD4_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR_R_SRD4_DIS       ((uint32_t)0x00001000)

#define MPU_RASR_SRD4_MASK        ((uint32_t)0x00000001)
#define MPU_RASR_SRD4_EN          ((uint32_t)0x00000000)
#define MPU_RASR_SRD4_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD5_MASK      ((uint32_t)0x00002000)
#define MPU_RASR_R_SRD5_BIT       (13)
#define MPU_RASR_R_SRD5_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR_R_SRD5_DIS       ((uint32_t)0x00002000)

#define MPU_RASR_SRD5_MASK        ((uint32_t)0x00000001)
#define MPU_RASR_SRD5_EN          ((uint32_t)0x00000000)
#define MPU_RASR_SRD5_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD6_MASK      ((uint32_t)0x00004000)
#define MPU_RASR_R_SRD6_BIT       (14)
#define MPU_RASR_R_SRD6_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR_R_SRD6_DIS       ((uint32_t)0x00004000)

#define MPU_RASR_SRD6_MASK        ((uint32_t)0x00000001)
#define MPU_RASR_SRD6_EN          ((uint32_t)0x00000000)
#define MPU_RASR_SRD6_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD7_MASK      ((uint32_t)0x00008000)
#define MPU_RASR_R_SRD7_BIT       (15)
#define MPU_RASR_R_SRD7_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR_R_SRD7_DIS       ((uint32_t)0x00008000)

#define MPU_RASR_SRD7_MASK        ((uint32_t)0x00000001)
#define MPU_RASR_SRD7_EN          ((uint32_t)0x00000000)
#define MPU_RASR_SRD7_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR_R_B_MASK      ((uint32_t)0x00010000)
#define MPU_RASR_R_B_BIT       (16)
#define MPU_RASR_R_B_DIS       ((uint32_t)0x00000000)
#define MPU_RASR_R_B_EN        ((uint32_t)0x00010000)

#define MPU_RASR_B_MASK        ((uint32_t)0x00000001)
#define MPU_RASR_B_DIS         ((uint32_t)0x00000000)
#define MPU_RASR_B_EN          ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR_R_C_MASK      ((uint32_t)0x00020000)
#define MPU_RASR_R_C_BIT       (17)
#define MPU_RASR_R_C_DIS       ((uint32_t)0x00000000)
#define MPU_RASR_R_C_EN        ((uint32_t)0x00020000)

#define MPU_RASR_C_MASK        ((uint32_t)0x00000001)
#define MPU_RASR_C_DIS         ((uint32_t)0x00000000)
#define MPU_RASR_C_EN          ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR_R_S_MASK      ((uint32_t)0x00040000)
#define MPU_RASR_R_S_BIT       (18)
#define MPU_RASR_R_S_DIS       ((uint32_t)0x00000000)
#define MPU_RASR_R_S_EN        ((uint32_t)0x00040000)

#define MPU_RASR_S_MASK        ((uint32_t)0x00000001)
#define MPU_RASR_S_DIS         ((uint32_t)0x00000000)
#define MPU_RASR_S_EN          ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR_R_TEX_MASK      ((uint32_t)0x00380000)
#define MPU_RASR_R_TEX_BIT       (19)
#define MPU_RASR_R_TEX_NC        ((uint32_t)0x00000000)
#define MPU_RASR_R_TEX_WB_WRA    ((uint32_t)0x00080000)
#define MPU_RASR_R_TEX_WT_NWA    ((uint32_t)0x00100000)
#define MPU_RASR_R_TEX_WB_NWA    ((uint32_t)0x00180000)

#define MPU_RASR_TEX_MASK        ((uint32_t)0x00000007)
#define MPU_RASR_TEX_NC          ((uint32_t)0x00000000)
#define MPU_RASR_TEX_WB_WRA      ((uint32_t)0x00000001)
#define MPU_RASR_TEX_WT_NWA      ((uint32_t)0x00000002)
#define MPU_RASR_TEX_WB_NWA      ((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define MPU_RASR_R_AP_MASK      ((uint32_t)0x07000000)
#define MPU_RASR_R_AP_BIT       (24)
#define MPU_RASR_R_AP_NANA      ((uint32_t)0x00000000)
#define MPU_RASR_R_AP_RWNA      ((uint32_t)0x01000000)
#define MPU_RASR_R_AP_RWRO      ((uint32_t)0x02000000)
#define MPU_RASR_R_AP_RWRW      ((uint32_t)0x03000000)
#define MPU_RASR_R_AP_RONA      ((uint32_t)0x05000000)
#define MPU_RASR_R_AP_RORO      ((uint32_t)0x06000000)

#define MPU_RASR_AP_MASK      ((uint32_t)0x00000007)
#define MPU_RASR_AP_NANA      ((uint32_t)0x00000000)
#define MPU_RASR_AP_RWNA      ((uint32_t)0x00000001)
#define MPU_RASR_AP_RWRO      ((uint32_t)0x00000002)
#define MPU_RASR_AP_RWRW      ((uint32_t)0x00000003)
#define MPU_RASR_AP_RONA      ((uint32_t)0x00000005)
#define MPU_RASR_AP_RORO      ((uint32_t)0x00000006)
/*--------*/


/*--------*/
#define MPU_RASR_R_XN_MASK      ((uint32_t)0x10000000)
#define MPU_RASR_R_XN_BIT       (28)
#define MPU_RASR_R_XN_DIS       ((uint32_t)0x00000000)
#define MPU_RASR_R_XN_EN        ((uint32_t)0x10000000)

#define MPU_RASR_XN_MASK       ((uint32_t)0x00000001)
#define MPU_RASR_XN_DIS        ((uint32_t)0x00000000)
#define MPU_RASR_XN_EN         ((uint32_t)0x00000001)
/*--------*/

/**********************************************************************************************
**************************************6 RBAR1 ***********************************************
**********************************************************************************************/
#define MPU_RBAR1            (((MPU_RBAR_TypeDef*)(MPU_BASE+MPU_RBAR1_OFFSET )))
#define MPU_RBAR1_R          (*((volatile uint32_t *)(MPU_BASE+MPU_RBAR1_OFFSET)))


/*--------*/
#define MPU_RBAR1_R_REGION_MASK      ((uint32_t)0x0000000F)
#define MPU_RBAR1_R_REGION_BIT       (0)
#define MPU_RBAR1_R_REGION_REG0      ((uint32_t)0x00000000)
#define MPU_RBAR1_R_REGION_REG1      ((uint32_t)0x00000001)
#define MPU_RBAR1_R_REGION_REG2      ((uint32_t)0x00000002)
#define MPU_RBAR1_R_REGION_REG3      ((uint32_t)0x00000003)
#define MPU_RBAR1_R_REGION_REG4      ((uint32_t)0x00000004)
#define MPU_RBAR1_R_REGION_REG5      ((uint32_t)0x00000005)
#define MPU_RBAR1_R_REGION_REG6      ((uint32_t)0x00000006)
#define MPU_RBAR1_R_REGION_REG7      ((uint32_t)0x00000007)
#define MPU_RBAR1_R_REGION_REG8      ((uint32_t)0x00000008)
#define MPU_RBAR1_R_REGION_REG9      ((uint32_t)0x00000009)
#define MPU_RBAR1_R_REGION_REG10     ((uint32_t)0x0000000A)
#define MPU_RBAR1_R_REGION_REG11     ((uint32_t)0x0000000B)
#define MPU_RBAR1_R_REGION_REG12     ((uint32_t)0x0000000C)
#define MPU_RBAR1_R_REGION_REG13     ((uint32_t)0x0000000D)
#define MPU_RBAR1_R_REGION_REG14     ((uint32_t)0x0000000E)
#define MPU_RBAR1_R_REGION_REG15     ((uint32_t)0x0000000F)

#define MPU_RBAR1_REGION_MASK        ((uint32_t)0x0000000F)
#define MPU_RBAR1_REGION_REG0        ((uint32_t)0x00000000)
#define MPU_RBAR1_REGION_REG1        ((uint32_t)0x00000001)
#define MPU_RBAR1_REGION_REG2        ((uint32_t)0x00000002)
#define MPU_RBAR1_REGION_REG3        ((uint32_t)0x00000003)
#define MPU_RBAR1_REGION_REG4        ((uint32_t)0x00000004)
#define MPU_RBAR1_REGION_REG5        ((uint32_t)0x00000005)
#define MPU_RBAR1_REGION_REG6        ((uint32_t)0x00000006)
#define MPU_RBAR1_REGION_REG7        ((uint32_t)0x00000007)
#define MPU_RBAR1_REGION_REG8        ((uint32_t)0x00000008)
#define MPU_RBAR1_REGION_REG9        ((uint32_t)0x00000009)
#define MPU_RBAR1_REGION_REG10       ((uint32_t)0x0000000A)
#define MPU_RBAR1_REGION_REG11       ((uint32_t)0x0000000B)
#define MPU_RBAR1_REGION_REG12       ((uint32_t)0x0000000C)
#define MPU_RBAR1_REGION_REG13       ((uint32_t)0x0000000D)
#define MPU_RBAR1_REGION_REG14       ((uint32_t)0x0000000E)
#define MPU_RBAR1_REGION_REG15       ((uint32_t)0x0000000F)
/*--------*/


/*--------*/
#define MPU_RBAR1_R_VALID_MASK      ((uint32_t)0x00000010)
#define MPU_RBAR1_R_VALID_BIT       (4)
#define MPU_RBAR1_R_VALID_DIS       ((uint32_t)0x00000000)
#define MPU_RBAR1_R_VALID_EN        ((uint32_t)0x00000010)

#define MPU_RBAR1_VALID_MASK        ((uint32_t)0x00000001)
#define MPU_RBAR1_VALID_DIS         ((uint32_t)0x00000000)
#define MPU_RBAR1_VALID_EN          ((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define MPU_RBAR1_R_ADDR_MASK      ((uint32_t)0xFFFFFFE0)
#define MPU_RBAR1_R_ADDR_BIT       (5)

#define MPU_RBAR1_ADDR_MASK        ((uint32_t)0x01FFFFFF)
/*--------*/


/**********************************************************************************************
**************************************7 RASR1 ***********************************************
**********************************************************************************************/

#define MPU_RASR1            (((MPU_RASR_TypeDef*)(MPU_BASE+MPU_RASR1_OFFSET )))
#define MPU_RASR1_R          (*((volatile uint32_t *)(MPU_BASE+MPU_RASR1_OFFSET)))



/*--------*/
#define MPU_RASR1_R_ENABLE_MASK      ((uint32_t)0x00000001)
#define MPU_RASR1_R_ENABLE_BIT       (0)
#define MPU_RASR1_R_ENABLE_DIS       ((uint32_t)0x00000000)
#define MPU_RASR1_R_ENABLE_EN        ((uint32_t)0x00000001)

#define MPU_RASR1_ENABLE_MASK        ((uint32_t)0x00000001)
#define MPU_RASR1_ENABLE_DIS         ((uint32_t)0x00000000)
#define MPU_RASR1_ENABLE_EN          ((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define MPU_RASR1_R_SIZE_MASK      ((uint32_t)0x0000003E)
#define MPU_RASR1_R_SIZE_BIT       (1)
#define MPU_RASR1_R_SIZE_32B       ((uint32_t)0x00000008)
#define MPU_RASR1_R_SIZE_1KB       ((uint32_t)0x00000012)
#define MPU_RASR1_R_SIZE_1MB       ((uint32_t)0x00000026)
#define MPU_RASR1_R_SIZE_1GB       ((uint32_t)0x0000003A)
#define MPU_RASR1_R_SIZE_4GB       ((uint32_t)0x0000003E)

#define MPU_RASR1_SIZE_MASK        ((uint32_t)0x0000001F)
#define MPU_RASR1_SIZE_32B         ((uint32_t)0x00000004)
#define MPU_RASR1_SIZE_1KB         ((uint32_t)0x00000009)
#define MPU_RASR1_SIZE_1MB         ((uint32_t)0x00000013)
#define MPU_RASR1_SIZE_1GB         ((uint32_t)0x0000001D)
#define MPU_RASR1_SIZE_4GB         ((uint32_t)0x0000001F)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD0_MASK      ((uint32_t)0x00000100)
#define MPU_RASR1_R_SRD0_BIT       (8)
#define MPU_RASR1_R_SRD0_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR1_R_SRD0_DIS       ((uint32_t)0x00000100)

#define MPU_RASR1_SRD0_MASK        ((uint32_t)0x00000001)
#define MPU_RASR1_SRD0_EN          ((uint32_t)0x00000000)
#define MPU_RASR1_SRD0_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD1_MASK      ((uint32_t)0x00000200)
#define MPU_RASR1_R_SRD1_BIT       (9)
#define MPU_RASR1_R_SRD1_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR1_R_SRD1_DIS       ((uint32_t)0x00000200)

#define MPU_RASR1_SRD1_MASK        ((uint32_t)0x00000001)
#define MPU_RASR1_SRD1_EN          ((uint32_t)0x00000000)
#define MPU_RASR1_SRD1_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD2_MASK      ((uint32_t)0x00000400)
#define MPU_RASR1_R_SRD2_BIT       (10)
#define MPU_RASR1_R_SRD2_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR1_R_SRD2_DIS       ((uint32_t)0x00000400)

#define MPU_RASR1_SRD2_MASK        ((uint32_t)0x00000001)
#define MPU_RASR1_SRD2_EN          ((uint32_t)0x00000000)
#define MPU_RASR1_SRD2_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD3_MASK      ((uint32_t)0x00000800)
#define MPU_RASR1_R_SRD3_BIT       (11)
#define MPU_RASR1_R_SRD3_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR1_R_SRD3_DIS       ((uint32_t)0x00000800)

#define MPU_RASR1_SRD3_MASK        ((uint32_t)0x00000001)
#define MPU_RASR1_SRD3_EN          ((uint32_t)0x00000000)
#define MPU_RASR1_SRD3_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD4_MASK      ((uint32_t)0x00001000)
#define MPU_RASR1_R_SRD4_BIT       (12)
#define MPU_RASR1_R_SRD4_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR1_R_SRD4_DIS       ((uint32_t)0x00001000)

#define MPU_RASR1_SRD4_MASK        ((uint32_t)0x00000001)
#define MPU_RASR1_SRD4_EN          ((uint32_t)0x00000000)
#define MPU_RASR1_SRD4_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD5_MASK      ((uint32_t)0x00002000)
#define MPU_RASR1_R_SRD5_BIT       (13)
#define MPU_RASR1_R_SRD5_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR1_R_SRD5_DIS       ((uint32_t)0x00002000)

#define MPU_RASR1_SRD5_MASK        ((uint32_t)0x00000001)
#define MPU_RASR1_SRD5_EN          ((uint32_t)0x00000000)
#define MPU_RASR1_SRD5_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD6_MASK      ((uint32_t)0x00004000)
#define MPU_RASR1_R_SRD6_BIT       (14)
#define MPU_RASR1_R_SRD6_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR1_R_SRD6_DIS       ((uint32_t)0x00004000)

#define MPU_RASR1_SRD6_MASK        ((uint32_t)0x00000001)
#define MPU_RASR1_SRD6_EN          ((uint32_t)0x00000000)
#define MPU_RASR1_SRD6_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD7_MASK      ((uint32_t)0x00008000)
#define MPU_RASR1_R_SRD7_BIT       (15)
#define MPU_RASR1_R_SRD7_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR1_R_SRD7_DIS       ((uint32_t)0x00008000)

#define MPU_RASR1_SRD7_MASK        ((uint32_t)0x00000001)
#define MPU_RASR1_SRD7_EN          ((uint32_t)0x00000000)
#define MPU_RASR1_SRD7_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR1_R_B_MASK      ((uint32_t)0x00010000)
#define MPU_RASR1_R_B_BIT       (16)
#define MPU_RASR1_R_B_DIS       ((uint32_t)0x00000000)
#define MPU_RASR1_R_B_EN        ((uint32_t)0x00010000)

#define MPU_RASR1_B_MASK        ((uint32_t)0x00000001)
#define MPU_RASR1_B_DIS         ((uint32_t)0x00000000)
#define MPU_RASR1_B_EN          ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR1_R_C_MASK      ((uint32_t)0x00020000)
#define MPU_RASR1_R_C_BIT       (17)
#define MPU_RASR1_R_C_DIS       ((uint32_t)0x00000000)
#define MPU_RASR1_R_C_EN        ((uint32_t)0x00020000)

#define MPU_RASR1_C_MASK        ((uint32_t)0x00000001)
#define MPU_RASR1_C_DIS         ((uint32_t)0x00000000)
#define MPU_RASR1_C_EN          ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR1_R_S_MASK      ((uint32_t)0x00040000)
#define MPU_RASR1_R_S_BIT       (18)
#define MPU_RASR1_R_S_DIS       ((uint32_t)0x00000000)
#define MPU_RASR1_R_S_EN        ((uint32_t)0x00040000)

#define MPU_RASR1_S_MASK        ((uint32_t)0x00000001)
#define MPU_RASR1_S_DIS         ((uint32_t)0x00000000)
#define MPU_RASR1_S_EN          ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR1_R_TEX_MASK      ((uint32_t)0x00380000)
#define MPU_RASR1_R_TEX_BIT       (19)
#define MPU_RASR1_R_TEX_NC        ((uint32_t)0x00000000)
#define MPU_RASR1_R_TEX_WB_WRA    ((uint32_t)0x00080000)
#define MPU_RASR1_R_TEX_WT_NWA    ((uint32_t)0x00100000)
#define MPU_RASR1_R_TEX_WB_NWA    ((uint32_t)0x00180000)

#define MPU_RASR1_TEX_MASK        ((uint32_t)0x00000007)
#define MPU_RASR1_TEX_NC          ((uint32_t)0x00000000)
#define MPU_RASR1_TEX_WB_WRA      ((uint32_t)0x00000001)
#define MPU_RASR1_TEX_WT_NWA      ((uint32_t)0x00000002)
#define MPU_RASR1_TEX_WB_NWA      ((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define MPU_RASR1_R_AP_MASK      ((uint32_t)0x07000000)
#define MPU_RASR1_R_AP_BIT       (24)
#define MPU_RASR1_R_AP_NANA      ((uint32_t)0x00000000)
#define MPU_RASR1_R_AP_RWNA      ((uint32_t)0x01000000)
#define MPU_RASR1_R_AP_RWRO      ((uint32_t)0x02000000)
#define MPU_RASR1_R_AP_RWRW      ((uint32_t)0x03000000)
#define MPU_RASR1_R_AP_RONA      ((uint32_t)0x05000000)
#define MPU_RASR1_R_AP_RORO      ((uint32_t)0x06000000)

#define MPU_RASR1_AP_MASK      ((uint32_t)0x00000007)
#define MPU_RASR1_AP_NANA      ((uint32_t)0x00000000)
#define MPU_RASR1_AP_RWNA      ((uint32_t)0x00000001)
#define MPU_RASR1_AP_RWRO      ((uint32_t)0x00000002)
#define MPU_RASR1_AP_RWRW      ((uint32_t)0x00000003)
#define MPU_RASR1_AP_RONA      ((uint32_t)0x00000005)
#define MPU_RASR1_AP_RORO      ((uint32_t)0x00000006)
/*--------*/


/*--------*/
#define MPU_RASR1_R_XN_MASK      ((uint32_t)0x10000000)
#define MPU_RASR1_R_XN_BIT       (28)
#define MPU_RASR1_R_XN_DIS       ((uint32_t)0x00000000)
#define MPU_RASR1_R_XN_EN        ((uint32_t)0x10000000)

#define MPU_RASR1_XN_MASK       ((uint32_t)0x00000001)
#define MPU_RASR1_XN_DIS        ((uint32_t)0x00000000)
#define MPU_RASR1_XN_EN         ((uint32_t)0x00000001)
/*--------*/

/**********************************************************************************************
**************************************8 RBAR2 ***********************************************
**********************************************************************************************/
#define MPU_RBAR2            (((MPU_RBAR_TypeDef*)(MPU_BASE+MPU_RBAR2_OFFSET )))
#define MPU_RBAR2_R          (*((volatile uint32_t *)(MPU_BASE+MPU_RBAR2_OFFSET)))


/*--------*/
#define MPU_RBAR2_R_REGION_MASK      ((uint32_t)0x0000000F)
#define MPU_RBAR2_R_REGION_BIT       (0)
#define MPU_RBAR2_R_REGION_REG0      ((uint32_t)0x00000000)
#define MPU_RBAR2_R_REGION_REG1      ((uint32_t)0x00000001)
#define MPU_RBAR2_R_REGION_REG2      ((uint32_t)0x00000002)
#define MPU_RBAR2_R_REGION_REG3      ((uint32_t)0x00000003)
#define MPU_RBAR2_R_REGION_REG4      ((uint32_t)0x00000004)
#define MPU_RBAR2_R_REGION_REG5      ((uint32_t)0x00000005)
#define MPU_RBAR2_R_REGION_REG6      ((uint32_t)0x00000006)
#define MPU_RBAR2_R_REGION_REG7      ((uint32_t)0x00000007)
#define MPU_RBAR2_R_REGION_REG8      ((uint32_t)0x00000008)
#define MPU_RBAR2_R_REGION_REG9      ((uint32_t)0x00000009)
#define MPU_RBAR2_R_REGION_REG10     ((uint32_t)0x0000000A)
#define MPU_RBAR2_R_REGION_REG11     ((uint32_t)0x0000000B)
#define MPU_RBAR2_R_REGION_REG12     ((uint32_t)0x0000000C)
#define MPU_RBAR2_R_REGION_REG13     ((uint32_t)0x0000000D)
#define MPU_RBAR2_R_REGION_REG14     ((uint32_t)0x0000000E)
#define MPU_RBAR2_R_REGION_REG15     ((uint32_t)0x0000000F)

#define MPU_RBAR2_REGION_MASK        ((uint32_t)0x0000000F)
#define MPU_RBAR2_REGION_REG0        ((uint32_t)0x00000000)
#define MPU_RBAR2_REGION_REG1        ((uint32_t)0x00000001)
#define MPU_RBAR2_REGION_REG2        ((uint32_t)0x00000002)
#define MPU_RBAR2_REGION_REG3        ((uint32_t)0x00000003)
#define MPU_RBAR2_REGION_REG4        ((uint32_t)0x00000004)
#define MPU_RBAR2_REGION_REG5        ((uint32_t)0x00000005)
#define MPU_RBAR2_REGION_REG6        ((uint32_t)0x00000006)
#define MPU_RBAR2_REGION_REG7        ((uint32_t)0x00000007)
#define MPU_RBAR2_REGION_REG8        ((uint32_t)0x00000008)
#define MPU_RBAR2_REGION_REG9        ((uint32_t)0x00000009)
#define MPU_RBAR2_REGION_REG10       ((uint32_t)0x0000000A)
#define MPU_RBAR2_REGION_REG11       ((uint32_t)0x0000000B)
#define MPU_RBAR2_REGION_REG12       ((uint32_t)0x0000000C)
#define MPU_RBAR2_REGION_REG13       ((uint32_t)0x0000000D)
#define MPU_RBAR2_REGION_REG14       ((uint32_t)0x0000000E)
#define MPU_RBAR2_REGION_REG15       ((uint32_t)0x0000000F)
/*--------*/


/*--------*/
#define MPU_RBAR2_R_VALID_MASK      ((uint32_t)0x00000010)
#define MPU_RBAR2_R_VALID_BIT       (4)
#define MPU_RBAR2_R_VALID_DIS       ((uint32_t)0x00000000)
#define MPU_RBAR2_R_VALID_EN        ((uint32_t)0x00000010)

#define MPU_RBAR2_VALID_MASK        ((uint32_t)0x00000001)
#define MPU_RBAR2_VALID_DIS         ((uint32_t)0x00000000)
#define MPU_RBAR2_VALID_EN          ((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define MPU_RBAR2_R_ADDR_MASK      ((uint32_t)0xFFFFFFE0)
#define MPU_RBAR2_R_ADDR_BIT       (5)

#define MPU_RBAR2_ADDR_MASK        ((uint32_t)0x01FFFFFF)
/*--------*/

/**********************************************************************************************
**************************************9 RASR2 ***********************************************
**********************************************************************************************/
#define MPU_RASR2            (((MPU_RASR_TypeDef*)(MPU_BASE+MPU_RASR2_OFFSET )))
#define MPU_RASR2_R          (*((volatile uint32_t *)(MPU_BASE+MPU_RASR2_OFFSET)))



/*--------*/
#define MPU_RASR2_R_ENABLE_MASK      ((uint32_t)0x00000001)
#define MPU_RASR2_R_ENABLE_BIT       (0)
#define MPU_RASR2_R_ENABLE_DIS       ((uint32_t)0x00000000)
#define MPU_RASR2_R_ENABLE_EN        ((uint32_t)0x00000001)

#define MPU_RASR2_ENABLE_MASK        ((uint32_t)0x00000001)
#define MPU_RASR2_ENABLE_DIS         ((uint32_t)0x00000000)
#define MPU_RASR2_ENABLE_EN          ((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define MPU_RASR2_R_SIZE_MASK      ((uint32_t)0x0000003E)
#define MPU_RASR2_R_SIZE_BIT       (1)
#define MPU_RASR2_R_SIZE_32B       ((uint32_t)0x00000008)
#define MPU_RASR2_R_SIZE_1KB       ((uint32_t)0x00000012)
#define MPU_RASR2_R_SIZE_1MB       ((uint32_t)0x00000026)
#define MPU_RASR2_R_SIZE_1GB       ((uint32_t)0x0000003A)
#define MPU_RASR2_R_SIZE_4GB       ((uint32_t)0x0000003E)

#define MPU_RASR2_SIZE_MASK        ((uint32_t)0x0000001F)
#define MPU_RASR2_SIZE_32B         ((uint32_t)0x00000004)
#define MPU_RASR2_SIZE_1KB         ((uint32_t)0x00000009)
#define MPU_RASR2_SIZE_1MB         ((uint32_t)0x00000013)
#define MPU_RASR2_SIZE_1GB         ((uint32_t)0x0000001D)
#define MPU_RASR2_SIZE_4GB         ((uint32_t)0x0000001F)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD0_MASK      ((uint32_t)0x00000100)
#define MPU_RASR2_R_SRD0_BIT       (8)
#define MPU_RASR2_R_SRD0_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR2_R_SRD0_DIS       ((uint32_t)0x00000100)

#define MPU_RASR2_SRD0_MASK        ((uint32_t)0x00000001)
#define MPU_RASR2_SRD0_EN          ((uint32_t)0x00000000)
#define MPU_RASR2_SRD0_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD1_MASK      ((uint32_t)0x00000200)
#define MPU_RASR2_R_SRD1_BIT       (9)
#define MPU_RASR2_R_SRD1_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR2_R_SRD1_DIS       ((uint32_t)0x00000200)

#define MPU_RASR2_SRD1_MASK        ((uint32_t)0x00000001)
#define MPU_RASR2_SRD1_EN          ((uint32_t)0x00000000)
#define MPU_RASR2_SRD1_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD2_MASK      ((uint32_t)0x00000400)
#define MPU_RASR2_R_SRD2_BIT       (10)
#define MPU_RASR2_R_SRD2_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR2_R_SRD2_DIS       ((uint32_t)0x00000400)

#define MPU_RASR2_SRD2_MASK        ((uint32_t)0x00000001)
#define MPU_RASR2_SRD2_EN          ((uint32_t)0x00000000)
#define MPU_RASR2_SRD2_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD3_MASK      ((uint32_t)0x00000800)
#define MPU_RASR2_R_SRD3_BIT       (11)
#define MPU_RASR2_R_SRD3_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR2_R_SRD3_DIS       ((uint32_t)0x00000800)

#define MPU_RASR2_SRD3_MASK        ((uint32_t)0x00000001)
#define MPU_RASR2_SRD3_EN          ((uint32_t)0x00000000)
#define MPU_RASR2_SRD3_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD4_MASK      ((uint32_t)0x00001000)
#define MPU_RASR2_R_SRD4_BIT       (12)
#define MPU_RASR2_R_SRD4_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR2_R_SRD4_DIS       ((uint32_t)0x00001000)

#define MPU_RASR2_SRD4_MASK        ((uint32_t)0x00000001)
#define MPU_RASR2_SRD4_EN          ((uint32_t)0x00000000)
#define MPU_RASR2_SRD4_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD5_MASK      ((uint32_t)0x00002000)
#define MPU_RASR2_R_SRD5_BIT       (13)
#define MPU_RASR2_R_SRD5_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR2_R_SRD5_DIS       ((uint32_t)0x00002000)

#define MPU_RASR2_SRD5_MASK        ((uint32_t)0x00000001)
#define MPU_RASR2_SRD5_EN          ((uint32_t)0x00000000)
#define MPU_RASR2_SRD5_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD6_MASK      ((uint32_t)0x00004000)
#define MPU_RASR2_R_SRD6_BIT       (14)
#define MPU_RASR2_R_SRD6_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR2_R_SRD6_DIS       ((uint32_t)0x00004000)

#define MPU_RASR2_SRD6_MASK        ((uint32_t)0x00000001)
#define MPU_RASR2_SRD6_EN          ((uint32_t)0x00000000)
#define MPU_RASR2_SRD6_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD7_MASK      ((uint32_t)0x00008000)
#define MPU_RASR2_R_SRD7_BIT       (15)
#define MPU_RASR2_R_SRD7_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR2_R_SRD7_DIS       ((uint32_t)0x00008000)

#define MPU_RASR2_SRD7_MASK        ((uint32_t)0x00000001)
#define MPU_RASR2_SRD7_EN          ((uint32_t)0x00000000)
#define MPU_RASR2_SRD7_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR2_R_B_MASK      ((uint32_t)0x00010000)
#define MPU_RASR2_R_B_BIT       (16)
#define MPU_RASR2_R_B_DIS       ((uint32_t)0x00000000)
#define MPU_RASR2_R_B_EN        ((uint32_t)0x00010000)

#define MPU_RASR2_B_MASK        ((uint32_t)0x00000001)
#define MPU_RASR2_B_DIS         ((uint32_t)0x00000000)
#define MPU_RASR2_B_EN          ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR2_R_C_MASK      ((uint32_t)0x00020000)
#define MPU_RASR2_R_C_BIT       (17)
#define MPU_RASR2_R_C_DIS       ((uint32_t)0x00000000)
#define MPU_RASR2_R_C_EN        ((uint32_t)0x00020000)

#define MPU_RASR2_C_MASK        ((uint32_t)0x00000001)
#define MPU_RASR2_C_DIS         ((uint32_t)0x00000000)
#define MPU_RASR2_C_EN          ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR2_R_S_MASK      ((uint32_t)0x00040000)
#define MPU_RASR2_R_S_BIT       (18)
#define MPU_RASR2_R_S_DIS       ((uint32_t)0x00000000)
#define MPU_RASR2_R_S_EN        ((uint32_t)0x00040000)

#define MPU_RASR2_S_MASK        ((uint32_t)0x00000001)
#define MPU_RASR2_S_DIS         ((uint32_t)0x00000000)
#define MPU_RASR2_S_EN          ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR2_R_TEX_MASK      ((uint32_t)0x00380000)
#define MPU_RASR2_R_TEX_BIT       (19)
#define MPU_RASR2_R_TEX_NC        ((uint32_t)0x00000000)
#define MPU_RASR2_R_TEX_WB_WRA    ((uint32_t)0x00080000)
#define MPU_RASR2_R_TEX_WT_NWA    ((uint32_t)0x00100000)
#define MPU_RASR2_R_TEX_WB_NWA    ((uint32_t)0x00180000)

#define MPU_RASR2_TEX_MASK        ((uint32_t)0x00000007)
#define MPU_RASR2_TEX_NC          ((uint32_t)0x00000000)
#define MPU_RASR2_TEX_WB_WRA      ((uint32_t)0x00000001)
#define MPU_RASR2_TEX_WT_NWA      ((uint32_t)0x00000002)
#define MPU_RASR2_TEX_WB_NWA      ((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define MPU_RASR2_R_AP_MASK      ((uint32_t)0x07000000)
#define MPU_RASR2_R_AP_BIT       (24)
#define MPU_RASR2_R_AP_NANA      ((uint32_t)0x00000000)
#define MPU_RASR2_R_AP_RWNA      ((uint32_t)0x01000000)
#define MPU_RASR2_R_AP_RWRO      ((uint32_t)0x02000000)
#define MPU_RASR2_R_AP_RWRW      ((uint32_t)0x03000000)
#define MPU_RASR2_R_AP_RONA      ((uint32_t)0x05000000)
#define MPU_RASR2_R_AP_RORO      ((uint32_t)0x06000000)

#define MPU_RASR2_AP_MASK      ((uint32_t)0x00000007)
#define MPU_RASR2_AP_NANA      ((uint32_t)0x00000000)
#define MPU_RASR2_AP_RWNA      ((uint32_t)0x00000001)
#define MPU_RASR2_AP_RWRO      ((uint32_t)0x00000002)
#define MPU_RASR2_AP_RWRW      ((uint32_t)0x00000003)
#define MPU_RASR2_AP_RONA      ((uint32_t)0x00000005)
#define MPU_RASR2_AP_RORO      ((uint32_t)0x00000006)
/*--------*/


/*--------*/
#define MPU_RASR2_R_XN_MASK      ((uint32_t)0x10000000)
#define MPU_RASR2_R_XN_BIT       (28)
#define MPU_RASR2_R_XN_DIS       ((uint32_t)0x00000000)
#define MPU_RASR2_R_XN_EN        ((uint32_t)0x10000000)

#define MPU_RASR2_XN_MASK       ((uint32_t)0x00000001)
#define MPU_RASR2_XN_DIS        ((uint32_t)0x00000000)
#define MPU_RASR2_XN_EN         ((uint32_t)0x00000001)
/*--------*/

/**********************************************************************************************
**************************************10 RBAR3 ***********************************************
**********************************************************************************************/
#define MPU_RBAR3            (((MPU_RBAR_TypeDef*)(MPU_BASE+MPU_RBAR3_OFFSET )))
#define MPU_RBAR3_R          (*((volatile uint32_t *)(MPU_BASE+MPU_RBAR3_OFFSET)))


/*--------*/
#define MPU_RBAR3_R_REGION_MASK      ((uint32_t)0x0000000F)
#define MPU_RBAR3_R_REGION_BIT       (0)
#define MPU_RBAR3_R_REGION_REG0      ((uint32_t)0x00000000)
#define MPU_RBAR3_R_REGION_REG1      ((uint32_t)0x00000001)
#define MPU_RBAR3_R_REGION_REG2      ((uint32_t)0x00000002)
#define MPU_RBAR3_R_REGION_REG3      ((uint32_t)0x00000003)
#define MPU_RBAR3_R_REGION_REG4      ((uint32_t)0x00000004)
#define MPU_RBAR3_R_REGION_REG5      ((uint32_t)0x00000005)
#define MPU_RBAR3_R_REGION_REG6      ((uint32_t)0x00000006)
#define MPU_RBAR3_R_REGION_REG7      ((uint32_t)0x00000007)
#define MPU_RBAR3_R_REGION_REG8      ((uint32_t)0x00000008)
#define MPU_RBAR3_R_REGION_REG9      ((uint32_t)0x00000009)
#define MPU_RBAR3_R_REGION_REG10     ((uint32_t)0x0000000A)
#define MPU_RBAR3_R_REGION_REG11     ((uint32_t)0x0000000B)
#define MPU_RBAR3_R_REGION_REG12     ((uint32_t)0x0000000C)
#define MPU_RBAR3_R_REGION_REG13     ((uint32_t)0x0000000D)
#define MPU_RBAR3_R_REGION_REG14     ((uint32_t)0x0000000E)
#define MPU_RBAR3_R_REGION_REG15     ((uint32_t)0x0000000F)

#define MPU_RBAR3_REGION_MASK        ((uint32_t)0x0000000F)
#define MPU_RBAR3_REGION_REG0        ((uint32_t)0x00000000)
#define MPU_RBAR3_REGION_REG1        ((uint32_t)0x00000001)
#define MPU_RBAR3_REGION_REG2        ((uint32_t)0x00000002)
#define MPU_RBAR3_REGION_REG3        ((uint32_t)0x00000003)
#define MPU_RBAR3_REGION_REG4        ((uint32_t)0x00000004)
#define MPU_RBAR3_REGION_REG5        ((uint32_t)0x00000005)
#define MPU_RBAR3_REGION_REG6        ((uint32_t)0x00000006)
#define MPU_RBAR3_REGION_REG7        ((uint32_t)0x00000007)
#define MPU_RBAR3_REGION_REG8        ((uint32_t)0x00000008)
#define MPU_RBAR3_REGION_REG9        ((uint32_t)0x00000009)
#define MPU_RBAR3_REGION_REG10       ((uint32_t)0x0000000A)
#define MPU_RBAR3_REGION_REG11       ((uint32_t)0x0000000B)
#define MPU_RBAR3_REGION_REG12       ((uint32_t)0x0000000C)
#define MPU_RBAR3_REGION_REG13       ((uint32_t)0x0000000D)
#define MPU_RBAR3_REGION_REG14       ((uint32_t)0x0000000E)
#define MPU_RBAR3_REGION_REG15       ((uint32_t)0x0000000F)
/*--------*/


/*--------*/
#define MPU_RBAR3_R_VALID_MASK      ((uint32_t)0x00000010)
#define MPU_RBAR3_R_VALID_BIT       (4)
#define MPU_RBAR3_R_VALID_DIS       ((uint32_t)0x00000000)
#define MPU_RBAR3_R_VALID_EN        ((uint32_t)0x00000010)

#define MPU_RBAR3_VALID_MASK        ((uint32_t)0x00000001)
#define MPU_RBAR3_VALID_DIS         ((uint32_t)0x00000000)
#define MPU_RBAR3_VALID_EN          ((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define MPU_RBAR3_R_ADDR_MASK      ((uint32_t)0xFFFFFFE0)
#define MPU_RBAR3_R_ADDR_BIT       (5)

#define MPU_RBAR3_ADDR_MASK        ((uint32_t)0x01FFFFFF)
/*--------*/

/**********************************************************************************************
**************************************11 RASR3 ***********************************************
**********************************************************************************************/
#define MPU_RASR3            (((MPU_RASR_TypeDef*)(MPU_BASE+MPU_RASR3_OFFSET )))
#define MPU_RASR3_R          (*((volatile uint32_t *)(MPU_BASE+MPU_RASR3_OFFSET)))



/*--------*/
#define MPU_RASR3_R_ENABLE_MASK      ((uint32_t)0x00000001)
#define MPU_RASR3_R_ENABLE_BIT       (0)
#define MPU_RASR3_R_ENABLE_DIS       ((uint32_t)0x00000000)
#define MPU_RASR3_R_ENABLE_EN        ((uint32_t)0x00000001)

#define MPU_RASR3_ENABLE_MASK        ((uint32_t)0x00000001)
#define MPU_RASR3_ENABLE_DIS         ((uint32_t)0x00000000)
#define MPU_RASR3_ENABLE_EN          ((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define MPU_RASR3_R_SIZE_MASK      ((uint32_t)0x0000003E)
#define MPU_RASR3_R_SIZE_BIT       (1)
#define MPU_RASR3_R_SIZE_32B       ((uint32_t)0x00000008)
#define MPU_RASR3_R_SIZE_1KB       ((uint32_t)0x00000012)
#define MPU_RASR3_R_SIZE_1MB       ((uint32_t)0x00000026)
#define MPU_RASR3_R_SIZE_1GB       ((uint32_t)0x0000003A)
#define MPU_RASR3_R_SIZE_4GB       ((uint32_t)0x0000003E)

#define MPU_RASR3_SIZE_MASK        ((uint32_t)0x0000001F)
#define MPU_RASR3_SIZE_32B         ((uint32_t)0x00000004)
#define MPU_RASR3_SIZE_1KB         ((uint32_t)0x00000009)
#define MPU_RASR3_SIZE_1MB         ((uint32_t)0x00000013)
#define MPU_RASR3_SIZE_1GB         ((uint32_t)0x0000001D)
#define MPU_RASR3_SIZE_4GB         ((uint32_t)0x0000001F)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD0_MASK      ((uint32_t)0x00000100)
#define MPU_RASR3_R_SRD0_BIT       (8)
#define MPU_RASR3_R_SRD0_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR3_R_SRD0_DIS       ((uint32_t)0x00000100)

#define MPU_RASR3_SRD0_MASK        ((uint32_t)0x00000001)
#define MPU_RASR3_SRD0_EN          ((uint32_t)0x00000000)
#define MPU_RASR3_SRD0_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD1_MASK      ((uint32_t)0x00000200)
#define MPU_RASR3_R_SRD1_BIT       (9)
#define MPU_RASR3_R_SRD1_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR3_R_SRD1_DIS       ((uint32_t)0x00000200)

#define MPU_RASR3_SRD1_MASK        ((uint32_t)0x00000001)
#define MPU_RASR3_SRD1_EN          ((uint32_t)0x00000000)
#define MPU_RASR3_SRD1_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD2_MASK      ((uint32_t)0x00000400)
#define MPU_RASR3_R_SRD2_BIT       (10)
#define MPU_RASR3_R_SRD2_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR3_R_SRD2_DIS       ((uint32_t)0x00000400)

#define MPU_RASR3_SRD2_MASK        ((uint32_t)0x00000001)
#define MPU_RASR3_SRD2_EN          ((uint32_t)0x00000000)
#define MPU_RASR3_SRD2_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD3_MASK      ((uint32_t)0x00000800)
#define MPU_RASR3_R_SRD3_BIT       (11)
#define MPU_RASR3_R_SRD3_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR3_R_SRD3_DIS       ((uint32_t)0x00000800)

#define MPU_RASR3_SRD3_MASK        ((uint32_t)0x00000001)
#define MPU_RASR3_SRD3_EN          ((uint32_t)0x00000000)
#define MPU_RASR3_SRD3_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD4_MASK      ((uint32_t)0x00001000)
#define MPU_RASR3_R_SRD4_BIT       (12)
#define MPU_RASR3_R_SRD4_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR3_R_SRD4_DIS       ((uint32_t)0x00001000)

#define MPU_RASR3_SRD4_MASK        ((uint32_t)0x00000001)
#define MPU_RASR3_SRD4_EN          ((uint32_t)0x00000000)
#define MPU_RASR3_SRD4_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD5_MASK      ((uint32_t)0x00002000)
#define MPU_RASR3_R_SRD5_BIT       (13)
#define MPU_RASR3_R_SRD5_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR3_R_SRD5_DIS       ((uint32_t)0x00002000)

#define MPU_RASR3_SRD5_MASK        ((uint32_t)0x00000001)
#define MPU_RASR3_SRD5_EN          ((uint32_t)0x00000000)
#define MPU_RASR3_SRD5_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD6_MASK      ((uint32_t)0x00004000)
#define MPU_RASR3_R_SRD6_BIT       (14)
#define MPU_RASR3_R_SRD6_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR3_R_SRD6_DIS       ((uint32_t)0x00004000)

#define MPU_RASR3_SRD6_MASK        ((uint32_t)0x00000001)
#define MPU_RASR3_SRD6_EN          ((uint32_t)0x00000000)
#define MPU_RASR3_SRD6_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD7_MASK      ((uint32_t)0x00008000)
#define MPU_RASR3_R_SRD7_BIT       (15)
#define MPU_RASR3_R_SRD7_EN 	      ((uint32_t)0x00000000)
#define MPU_RASR3_R_SRD7_DIS       ((uint32_t)0x00008000)

#define MPU_RASR3_SRD7_MASK        ((uint32_t)0x00000001)
#define MPU_RASR3_SRD7_EN          ((uint32_t)0x00000000)
#define MPU_RASR3_SRD7_DIS         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR3_R_B_MASK      ((uint32_t)0x00010000)
#define MPU_RASR3_R_B_BIT       (16)
#define MPU_RASR3_R_B_DIS       ((uint32_t)0x00000000)
#define MPU_RASR3_R_B_EN        ((uint32_t)0x00010000)

#define MPU_RASR3_B_MASK        ((uint32_t)0x00000001)
#define MPU_RASR3_B_DIS         ((uint32_t)0x00000000)
#define MPU_RASR3_B_EN          ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR3_R_C_MASK      ((uint32_t)0x00020000)
#define MPU_RASR3_R_C_BIT       (17)
#define MPU_RASR3_R_C_DIS       ((uint32_t)0x00000000)
#define MPU_RASR3_R_C_EN        ((uint32_t)0x00020000)

#define MPU_RASR3_C_MASK        ((uint32_t)0x00000001)
#define MPU_RASR3_C_DIS         ((uint32_t)0x00000000)
#define MPU_RASR3_C_EN          ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR3_R_S_MASK      ((uint32_t)0x00040000)
#define MPU_RASR3_R_S_BIT       (18)
#define MPU_RASR3_R_S_DIS       ((uint32_t)0x00000000)
#define MPU_RASR3_R_S_EN        ((uint32_t)0x00040000)

#define MPU_RASR3_S_MASK        ((uint32_t)0x00000001)
#define MPU_RASR3_S_DIS         ((uint32_t)0x00000000)
#define MPU_RASR3_S_EN          ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define MPU_RASR3_R_TEX_MASK      ((uint32_t)0x00380000)
#define MPU_RASR3_R_TEX_BIT       (19)
#define MPU_RASR3_R_TEX_NC        ((uint32_t)0x00000000)
#define MPU_RASR3_R_TEX_WB_WRA    ((uint32_t)0x00080000)
#define MPU_RASR3_R_TEX_WT_NWA    ((uint32_t)0x00100000)
#define MPU_RASR3_R_TEX_WB_NWA    ((uint32_t)0x00180000)

#define MPU_RASR3_TEX_MASK        ((uint32_t)0x00000007)
#define MPU_RASR3_TEX_NC          ((uint32_t)0x00000000)
#define MPU_RASR3_TEX_WB_WRA      ((uint32_t)0x00000001)
#define MPU_RASR3_TEX_WT_NWA      ((uint32_t)0x00000002)
#define MPU_RASR3_TEX_WB_NWA      ((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define MPU_RASR3_R_AP_MASK      ((uint32_t)0x07000000)
#define MPU_RASR3_R_AP_BIT       (24)
#define MPU_RASR3_R_AP_NANA      ((uint32_t)0x00000000)
#define MPU_RASR3_R_AP_RWNA      ((uint32_t)0x01000000)
#define MPU_RASR3_R_AP_RWRO      ((uint32_t)0x02000000)
#define MPU_RASR3_R_AP_RWRW      ((uint32_t)0x03000000)
#define MPU_RASR3_R_AP_RONA      ((uint32_t)0x05000000)
#define MPU_RASR3_R_AP_RORO      ((uint32_t)0x06000000)

#define MPU_RASR3_AP_MASK      ((uint32_t)0x00000007)
#define MPU_RASR3_AP_NANA      ((uint32_t)0x00000000)
#define MPU_RASR3_AP_RWNA      ((uint32_t)0x00000001)
#define MPU_RASR3_AP_RWRO      ((uint32_t)0x00000002)
#define MPU_RASR3_AP_RWRW      ((uint32_t)0x00000003)
#define MPU_RASR3_AP_RONA      ((uint32_t)0x00000005)
#define MPU_RASR3_AP_RORO      ((uint32_t)0x00000006)
/*--------*/


/*--------*/
#define MPU_RASR3_R_XN_MASK      ((uint32_t)0x10000000)
#define MPU_RASR3_R_XN_BIT       (28)
#define MPU_RASR3_R_XN_DIS       ((uint32_t)0x00000000)
#define MPU_RASR3_R_XN_EN        ((uint32_t)0x10000000)

#define MPU_RASR3_XN_MASK       ((uint32_t)0x00000001)
#define MPU_RASR3_XN_DIS        ((uint32_t)0x00000000)
#define MPU_RASR3_XN_EN         ((uint32_t)0x00000001)
/*--------*/

typedef enum
{
    MPU_enOK = 0,
    MPU_enERROR = 1,
}MPU_nSTATUS;



void MPU__vInit(void);
#endif /* MPU_H_ */
