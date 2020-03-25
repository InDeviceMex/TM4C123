/*
 * SYSCTL.h
 *
 *  Created on: Jan 22, 2018
 *      Author: GOS_TD
 */

#ifndef SYSCTL_H_
#define SYSCTL_H_

#include <stdint.h>

#define SYSCTL_BASE            (0x400FE000)
#define SYSCTL_BASE_BITBANDING (0x42000000)
#define SYSCTL_OFFSET          (0x000FE000)

typedef volatile struct
{
    volatile const  uint32_t MINOR      :8;
    volatile const  uint32_t MAJOR      :8;
    volatile const  uint32_t CLASS      :8;
    const           uint32_t reserved   :4;
    volatile const  uint32_t VER        :3;
    const           uint32_t reserved1  :1;
}DID0_TypeDef;


typedef volatile struct
{
    volatile const uint32_t QUAL      :2;
    volatile const uint32_t ROHS      :1;
    volatile const uint32_t PKG       :2;
    volatile const uint32_t TEMP      :3;
    const          uint32_t reserved  :5;
    volatile const uint32_t PINCOUNT  :3;
    volatile const uint32_t PARTNO    :8;
    volatile const uint32_t FAM       :4;
    volatile const uint32_t VER       :4;
}DID1_TypeDef;

typedef volatile struct
{
    const       uint32_t reserved   :1;
    volatile    uint32_t BOR1       :1;
    volatile    uint32_t BOR0       :1;
    const       uint32_t reserved1  :29;
}PBORCTL_TypeDef;

typedef volatile struct
{
    const           uint32_t reserved   :1;
    volatile const  uint32_t BOR1RIS    :1;
    const           uint32_t reserved1  :1;
    volatile const  uint32_t MOFRIS     :1;
    const           uint32_t reserved2  :2;
    volatile const  uint32_t PLLLRIS    :1;
    volatile const  uint32_t USBPLLLRIS :1;
    volatile const  uint32_t MOSCPUPRIS :1;
    const           uint32_t reserved3  :1;
    volatile const  uint32_t VDDARIS    :1;
    volatile const  uint32_t BOR0RIS    :1;
    const           uint32_t reserved4  :20;
}RIS_TypeDef;



#define SYSCTL_DID0_OFFSET          (0x0000)
#define SYSCTL_DID1_OFFSET          (0x0004)
#define SYSCTL_PBORCTL_OFFSET       (0x0030)
#define SYSCTL_RIS_OFFSET           (0x0050)

/*******************************************************************************************
************************************ 1 DID0 *********************************************
*******************************************************************************************/
#define SYSCTL_DID0         (((DID0_TypeDef*)(SYSCTL_BASE+SYSCTL_DID0_OFFSET )))
#define SYSCTL_DID0_R       (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DID0_OFFSET)))

/*--------*/
#define SYSCTL_DID0_R_MINOR_MASK    ((uint32_t)0x000000FF)
#define SYSCTL_DID0_R_MINOR_BIT     (0)
#define SYSCTL_DID0_R_MINOR_INI     ((uint32_t)0x00000000)
#define SYSCTL_DID0_R_MINOR_1METAL  ((uint32_t)0x00000001)
#define SYSCTL_DID0_R_MINOR_2METAL  ((uint32_t)0x00000002)
#define SYSCTL_DID0_R_MINOR_3METAL  ((uint32_t)0x00000003)
#define SYSCTL_DID0_R_MINOR_4METAL  ((uint32_t)0x00000004)

#define SYSCTL_DID0_MINOR_MASK      ((uint32_t)0x000000FF)
#define SYSCTL_DID0_MINOR_INI       ((uint32_t)0x00000000)
#define SYSCTL_DID0_MINOR_1METAL    ((uint32_t)0x00000001)
#define SYSCTL_DID0_MINOR_2METAL    ((uint32_t)0x00000002)
#define SYSCTL_DID0_MINOR_3METAL    ((uint32_t)0x00000003)
#define SYSCTL_DID0_MINOR_4METAL    ((uint32_t)0x00000004)
/*--------*/

/*--------*/
#define SYSCTL_DID0_R_MAJOR_MASK    ((uint32_t)0x0000FF00)
#define SYSCTL_DID0_R_MAJOR_BIT     ((uint32_t)8)
#define SYSCTL_DID0_R_MAJOR_REVA    ((uint32_t)0x00000000)
#define SYSCTL_DID0_R_MAJOR_REVB    ((uint32_t)0x00000100)
#define SYSCTL_DID0_R_MAJOR_REVC    ((uint32_t)0x00000200)
#define SYSCTL_DID0_R_MAJOR_REVD    ((uint32_t)0x00000300)
#define SYSCTL_DID0_R_MAJOR_REVE    ((uint32_t)0x00000400)
#define SYSCTL_DID0_R_MAJOR_REVF    ((uint32_t)0x00000500)

#define SYSCTL_DID0_MAJOR_MASK      ((uint32_t)0x000000FF)
#define SYSCTL_DID0_MAJOR_REVA      ((uint32_t)0x00000000)
#define SYSCTL_DID0_MAJOR_REVB      ((uint32_t)0x00000001)
#define SYSCTL_DID0_MAJOR_REVC      ((uint32_t)0x00000002)
#define SYSCTL_DID0_MAJOR_REVD      ((uint32_t)0x00000003)
#define SYSCTL_DID0_MAJOR_REVE      ((uint32_t)0x00000004)
#define SYSCTL_DID0_MAJOR_REVF      ((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define SYSCTL_DID0_R_CLASS_MASK    ((uint32_t)0x00FF0000)
#define SYSCTL_DID0_R_CLASS_BIT     (16)
#define SYSCTL_DID0_R_CLASS_TIVAC   ((uint32_t)0x00050000)

#define SYSCTL_DID0_CLASS_MASK      ((uint32_t)0x000000FF)
#define SYSCTL_DID0_CLASS_TIVAC     ((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define SYSCTL_DID0_R_VER_MASK      ((uint32_t)0x70000000)
#define SYSCTL_DID0_R_VER_BIT       (28)
#define SYSCTL_DID0_R_VER_DID0      ((uint32_t)0x10000000)

#define SYSCTL_DID0_VER_MASK        ((uint32_t)0x00000007)
#define SYSCTL_DID0_VER_DID0        ((uint32_t)0x00000001)
/*--------*/

/******************************************************************************************
************************************ 2 DID1 *********************************************
******************************************************************************************/
#define SYSCTL_DID1           (((DID1_TypeDef*)(SYSCTL_BASE+SYSCTL_DID1_OFFSET )))
#define SYSCTL_DID1_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_DID1_OFFSET)))

/*--------*/
#define SYSCTL_DID1_R_QUAL_MASK     ((uint32_t)0x00000003)
#define SYSCTL_DID1_R_QUAL_BIT      (0)
#define SYSCTL_DID1_R_QUAL_ENG      ((uint32_t)0x00000000)
#define SYSCTL_DID1_R_QUAL_PILOT    ((uint32_t)0x00000001)
#define SYSCTL_DID1_R_QUAL_FULLY    ((uint32_t)0x00000002)

#define SYSCTL_DID1_QUAL_MASK       ((uint32_t)0x00000003)
#define SYSCTL_DID1_QUAL_ENG        ((uint32_t)0x00000000)
#define SYSCTL_DID1_QUAL_PILOT      ((uint32_t)0x00000001)
#define SYSCTL_DID1_QUAL_FULLY      ((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_ROHS_MASK     ((uint32_t)0x00000004)
#define SYSCTL_DID1_R_ROHS_BIT      (2)
#define SYSCTL_DID1_R_ROHS_NOROHS   ((uint32_t)0x00000000)
#define SYSCTL_DID1_R_ROHS_ROHS     ((uint32_t)0x00000004)

#define SYSCTL_DID1_ROHS_MASK       ((uint32_t)0x00000001)
#define SYSCTL_DID1_ROHS_NOROHS     ((uint32_t)0x00000000)
#define SYSCTL_DID1_ROHS_ROHS       ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_PKG_MASK      ((uint32_t)0x00000018)
#define SYSCTL_DID1_R_PKG_BIT       (3)
#define SYSCTL_DID1_R_PKG_LQFP      ((uint32_t)0x00000008)
#define SYSCTL_DID1_R_PKG_BGA       ((uint32_t)0x00000010)

#define SYSCTL_DID1_PKG_MASK        ((uint32_t)0x00000003)
#define SYSCTL_DID1_PKG_LQFP        ((uint32_t)0x00000001)
#define SYSCTL_DID1_PKG_BGA         ((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_TEMP_MASK     ((uint32_t)0x000000E0)
#define SYSCTL_DID1_R_TEMP_BIT      (5)
#define SYSCTL_DID1_R_TEMP_IND      ((uint32_t)0x00000020)
#define SYSCTL_DID1_R_TEMP_EXT      ((uint32_t)0x00000040)
#define SYSCTL_DID1_R_TEMP_BOTH     ((uint32_t)0x00000060)

#define SYSCTL_DID1_TEMP_MASK       ((uint32_t)0x00000007)
#define SYSCTL_DID1_TEMP_IND        ((uint32_t)0x00000001)
#define SYSCTL_DID1_TEMP_EXT        ((uint32_t)0x00000002)
#define SYSCTL_DID1_TEMP_BOTH       ((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_PINCOUNT_MASK ((uint32_t)0x0000E000)
#define SYSCTL_DID1_R_PINCOUNT_BIT  (13)
#define SYSCTL_DID1_R_PINCOUNT_100  ((uint32_t)0x00004000)
#define SYSCTL_DID1_R_PINCOUNT_64   ((uint32_t)0x00006000)
#define SYSCTL_DID1_R_PINCOUNT_144  ((uint32_t)0x00008000)
#define SYSCTL_DID1_R_PINCOUNT_157  ((uint32_t)0x0000A000)
#define SYSCTL_DID1_R_PINCOUNT_168  ((uint32_t)0x0000C000)

#define SYSCTL_DID1_PINCOUNT_MASK   ((uint32_t)0x00000007)
#define SYSCTL_DID1_PINCOUNT_100    ((uint32_t)0x00000002)
#define SYSCTL_DID1_PINCOUNT_64     ((uint32_t)0x00000003)
#define SYSCTL_DID1_PINCOUNT_144    ((uint32_t)0x00000004)
#define SYSCTL_DID1_PINCOUNT_157    ((uint32_t)0x00000005)
#define SYSCTL_DID1_PINCOUNT_168    ((uint32_t)0x00000006)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_PARTNO_MASK       ((uint32_t)0x00FF0000)
#define SYSCTL_DID1_R_PARTNO_BIT        (16)
#define SYSCTL_DID1_R_PARTNO_TM4C123    ((uint32_t)0x00A10000)

#define SYSCTL_DID1_PARTNO_MASK         ((uint32_t)0x000000FF)
#define SYSCTL_DID1_PARTNO_TM4C123      ((uint32_t)0x000000A1)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_FAM_MASK      ((uint32_t)0x0F000000)
#define SYSCTL_DID1_R_FAM_BIT       (24)
#define SYSCTL_DID1_R_FAM_TIVAC     ((uint32_t)0x00000000)

#define SYSCTL_DID1_FAM_MASK        ((uint32_t)0x0000000F)
#define SYSCTL_DID1_FAM_TIVAC       ((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_VER_MASK      ((uint32_t)0xF0000000)
#define SYSCTL_DID1_R_VER_BIT       (28)
#define SYSCTL_DID1_R_VER_INI       ((uint32_t)0x00000000)
#define SYSCTL_DID1_R_VER_SECOND    ((uint32_t)0x10000000)

#define SYSCTL_DID1_VER_MASK        ((uint32_t)0x0000000F)
#define SYSCTL_DID1_VER_INI         ((uint32_t)0x00000000)
#define SYSCTL_DID1_VER_SECOND      ((uint32_t)0x00000001)
/*--------*/

/******************************************************************************************
************************************ 3 PBORCTL *********************************************
******************************************************************************************/
#define SYSCTL_PBORCTL            (((PBORCTL_TypeDef*)(SYSCTL_BASE+SYSCTL_PBORCTL_OFFSET )))
#define SYSCTL_PBORCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PBORCTL_OFFSET)))

/*--------*/
#define SYSCTL_PBORCTL_R_BOR1_MASK  ((uint32_t)0x00000002)
#define SYSCTL_PBORCTL_R_BOR1_BIT   (1)
#define SYSCTL_PBORCTL_R_BOR1_INT   ((uint32_t)0x00000000)
#define SYSCTL_PBORCTL_R_BOR1_RESET ((uint32_t)0x00000002)

#define SYSCTL_PBORCTL_BOR1_MASK    ((uint32_t)0x00000001)
#define SYSCTL_PBORCTL_BOR1_INT     ((uint32_t)0x00000000)
#define SYSCTL_PBORCTL_BOR1_RESET   ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCTL_PBORCTL_R_BOR0_MASK  ((uint32_t)0x00000004)
#define SYSCTL_PBORCTL_R_BOR0_BIT   (2)
#define SYSCTL_PBORCTL_R_BOR0_INT   ((uint32_t)0x00000000)
#define SYSCTL_PBORCTL_R_BOR0_RESET ((uint32_t)0x00000004)

#define SYSCTL_PBORCTL_BOR0_MASK    ((uint32_t)0x00000001)
#define SYSCTL_PBORCTL_BOR0_INT     ((uint32_t)0x00000000)
#define SYSCTL_PBORCTL_BOR0_RESET   ((uint32_t)0x00000001)
/*--------*/

#define SYSCTL_PBORCTL_BOR1_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PBORCTL_OFFSET)*32)+(1*4))))
#define SYSCTL_PBORCTL_BOR0_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PBORCTL_OFFSET)*32)+(2*4))))

/******************************************************************************************
************************************ 4 RIS *********************************************
******************************************************************************************/
#define SYSCTL_RIS            (((RIS_TypeDef*)(SYSCTL_BASE+SYSCTL_RIS_OFFSET )))
#define SYSCTL_RIS_R          (*((volatile const uint32_t *)(SYSCTL_BASE+SYSCTL_RIS_OFFSET)))

/*--------*/
#define SYSCTL_RIS_R_BOR1RIS (0x00000002)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_MOFRIS  (0x00000008)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_PLLLRIS (0x00000040)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_USBPLLLRIS (0x00000080)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_MOSCPUPRIS (0x00000100)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_VDDARIS  (0x00000400)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_BOR0RIS  (0x00000800)
/*--------*/


#define SYSCTL_RIS_BOR1RIS_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(1*4))))
#define SYSCTL_RIS_MOFRIS_BITBANDING        (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(3*4))))
#define SYSCTL_RIS_PLLLRIS_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(6*4))))
#define SYSCTL_RIS_USBPLLLRIS_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(7*4))))
#define SYSCTL_RIS_MOSCPUPRIS_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(8*4))))
#define SYSCTL_RIS_VDDARIS_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(10*4))))
#define SYSCTL_RIS_BOR0RIS_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RIS_OFFSET)*32)+(11*4))))


/******************************************************************************************
************************************ 5 IMC *********************************************
******************************************************************************************/


typedef volatile struct
{
volatile uint32_t res      :1;
volatile uint32_t BOR1IM  :1;
volatile uint32_t res1     :1;
volatile uint32_t MOFIM   :1;
volatile uint32_t res2     :2;
volatile uint32_t PLLLIM  :1;
volatile uint32_t USBPLLLIM :1;
volatile uint32_t MOSCPUPIM :1;
volatile uint32_t res3     :1;
volatile uint32_t VDDAIM  :1;
volatile uint32_t BOR0IM  :1;
volatile uint32_t res4     :20;
}IMC_t;


#define SYSCTL_IMC_OFFSET     (0x0054)
#define SYSCTL_IMC            (((IMC_t*)(SYSCTL_BASE+SYSCTL_IMC_OFFSET )))
#define SYSCTL_IMC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_IMC_OFFSET)))

#define SYSCTL_IMC_R_BOR1IM (0x00000002)
#define SYSCTL_IMC_R_MOFIM  (0x00000008)
#define SYSCTL_IMC_R_PLLLIM (0x00000040)
#define SYSCTL_IMC_R_USBPLLLIM (0x00000080)
#define SYSCTL_IMC_R_MOSCPUPIM (0x00000100)
#define SYSCTL_IMC_R_VDDAIM  (0x00000400)
#define SYSCTL_IMC_R_BOR0IM  (0x00000800)


#define SYSCTL_IMC_BOR1IM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(1*4))))
#define SYSCTL_IMC_MOFIM_BITBANDING     (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(3*4))))
#define SYSCTL_IMC_PLLLIM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(6*4))))
#define SYSCTL_IMC_USBPLLLIM_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(7*4))))
#define SYSCTL_IMC_MOSCPUPIM_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(8*4))))
#define SYSCTL_IMC_VDDAIM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(10*4))))
#define SYSCTL_IMC_BOR0IM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_IMC_OFFSET)*32)+(11*4))))



/******************************************************************************************
************************************ 6 MISC *********************************************
******************************************************************************************/


typedef volatile struct
{
volatile uint32_t res      :1;
volatile uint32_t BOR1MIS  :1;
volatile uint32_t res1     :1;
volatile uint32_t MOFMIS   :1;
volatile uint32_t res2     :2;
volatile uint32_t PLLLMIS  :1;
volatile uint32_t USBPLLLMIS :1;
volatile uint32_t MOSCPUPMIS :1;
volatile uint32_t res3     :1;
volatile uint32_t VDDAMIS  :1;
volatile uint32_t BOR0MIS  :1;
volatile uint32_t res4     :20;
}MISC_t;


#define SYSCTL_MISC_OFFSET     (0x0058)
#define SYSCTL_MISC            (((MISC_t*)(SYSCTL_BASE+SYSCTL_MISC_OFFSET )))
#define SYSCTL_MISC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_MISC_OFFSET)))

#define SYSCTL_MISC_R_BOR1MIS (0x00000002)
#define SYSCTL_MISC_R_MOFMIS  (0x00000008)
#define SYSCTL_MISC_R_PLLLMIS (0x00000040)
#define SYSCTL_MISC_R_USBPLLLMIS (0x00000080)
#define SYSCTL_MISC_R_MOSCPUPMIS (0x00000100)
#define SYSCTL_MISC_R_VDDAMIS  (0x00000400)
#define SYSCTL_MISC_R_BOR0MIS  (0x00000800)

#define SYSCTL_MISC_BOR1MIS_BITBANDING      (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(1*4))))
#define SYSCTL_MISC_MOFMIS_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(3*4))))
#define SYSCTL_MISC_PLLLMIS_BITBANDING      (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(6*4))))
#define SYSCTL_MISC_USBPLLLMIS_BITBANDING   (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(7*4))))
#define SYSCTL_MISC_MOSCPUPMIS_BITBANDING   (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(8*4))))
#define SYSCTL_MISC_VDDAMIS_BITBANDING      (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(10*4))))
#define SYSCTL_MISC_BOR0MIS_BITBANDING      (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MISC_OFFSET)*32)+(11*4))))



******************************************************************************************
************************************ 7 RESC *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t EXT      :1;
volatile uint32_t POR      :1;
volatile uint32_t BOR      :1;
volatile uint32_t WDT0     :1;
volatile uint32_t SW       :1;
volatile uint32_t WDT1     :1;
volatile uint32_t res      :10;
volatile uint32_t MOSCFAIL :1;
volatile uint32_t res1     :15;
}RESC_t;


#define SYSCTL_RESC_OFFSET     (0x005C)
#define SYSCTL_RESC            (((RESC_t*)(SYSCTL_BASE+SYSCTL_RESC_OFFSET )))
#define SYSCTL_RESC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RESC_OFFSET)))

#define SYSCTL_RESC_R_EXT   (0x00000001)
#define SYSCTL_RESC_R_POR   (0x00000002)
#define SYSCTL_RESC_R_BOR   (0x00000004)
#define SYSCTL_RESC_R_WDT0  (0x00000008)
#define SYSCTL_RESC_R_SW    (0x00000010)
#define SYSCTL_RESC_R_WDT1  (0x00000020)
#define SYSCTL_RESC_R_MOSCFAIL  (0x00010000)

#define SYSCTL_RESC_EXT_BITBANDING      (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(0*4))))
#define SYSCTL_RESC_POR_BITBANDING      (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(1*4))))
#define SYSCTL_RESC_BOR_BITBANDING      (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(2*4))))
#define SYSCTL_RESC_WDT0_BITBANDING     (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(3*4))))
#define SYSCTL_RESC_SW_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(4*4))))
#define SYSCTL_RESC_WDT1_BITBANDING     (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(5*4))))
#define SYSCTL_RESC_MOSCFAIL_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RESC_OFFSET)*32)+(16*4))))



******************************************************************************************
************************************ 8 RCC *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t MOSCDIS      :1;
volatile uint32_t res          :3;
volatile uint32_t OSCSRC       :2;
volatile uint32_t XTAL         :5;
volatile uint32_t BYPASS       :1;
volatile uint32_t res2         :1;
volatile uint32_t PWRDN        :1;
volatile uint32_t res3         :3;
volatile uint32_t PWMDIV       :3;
volatile uint32_t USEPWMDIV    :1;
volatile uint32_t res4         :1;
volatile uint32_t USESYSDIV    :1;
volatile uint32_t SYSDIV       :4;
volatile uint32_t ACG          :1;
volatile uint32_t res5         :4;
}RCC_t;


#define SYSCTL_RCC_OFFSET     (0x0060)
#define SYSCTL_RCC            (((RCC_t*)(SYSCTL_BASE+SYSCTL_RCC_OFFSET )))
#define SYSCTL_RCC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCC_OFFSET)))

#define SYSCTL_RCC_R_MOSCDIS        (0x00000001)
#define SYSCTL_RCC_R_OSCSRC_MASK    (0x00000030)
#define SYSCTL_RCC_R_XTAL_MASK      (0x000007C0)
#define SYSCTL_RCC_R_BYPASS         (0x00000800)
#define SYSCTL_RCC_R_PWRDN          (0x00002000)
#define SYSCTL_RCC_R_PWMDIV_MASK    (0x000E0000)
#define SYSCTL_RCC_R_USEPWMDIV      (0x00100000)
#define SYSCTL_RCC_R_USESYSDIV      (0x00400000)
#define SYSCTL_RCC_R_SYSDIV_MASK    (0x07800000)
#define SYSCTL_RCC_R_ACG            (0x08000000)

#define SYSCTL_RCC_MOSCDIS_BITBANDING   (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32)+(0*4))))
#define SYSCTL_RCC_BYPASS_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32)+(11*4))))
#define SYSCTL_RCC_PWRDN_BITBANDING     (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32)+(13*4))))
#define SYSCTL_RCC_USEPWMDIV_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32)+(20*4))))
#define SYSCTL_RCC_USESYSDIV_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32)+(22*4))))
#define SYSCTL_RCC_ACG_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC_OFFSET)*32)+(27*4))))




******************************************************************************************
************************************ 9 GPIOHBCTL *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t PORTA        :1;
volatile uint32_t PORTB        :1;
volatile uint32_t PORTC        :1;
volatile uint32_t PORTD        :1;
volatile uint32_t PORTE        :1;
volatile uint32_t PORTF        :1;
volatile uint32_t res          :26;
}GPIOHBCTL_t;


#define SYSCTL_GPIOHBCTL_OFFSET     (0x006C)
#define SYSCTL_GPIOHBCTL            (((GPIOHBCTL_t*)(SYSCTL_BASE+SYSCTL_GPIOHBCTL_OFFSET )))
#define SYSCTL_GPIOHBCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_GPIOHBCTL_OFFSET)))

#define SYSCTL_GPIOHBCTL_R_PORTA   (0x00000001)
#define SYSCTL_GPIOHBCTL_R_PORTB   (0x00000002)
#define SYSCTL_GPIOHBCTL_R_PORTC   (0x00000004)
#define SYSCTL_GPIOHBCTL_R_PORTD   (0x00000008)
#define SYSCTL_GPIOHBCTL_R_PORTE   (0x00000010)
#define SYSCTL_GPIOHBCTL_R_PORTF   (0x00000020)


#define SYSCTL_GPIOHBCTL_PORTA_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32)+(0*4))))
#define SYSCTL_GPIOHBCTL_PORTB_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32)+(1*4))))
#define SYSCTL_GPIOHBCTL_PORTC_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32)+(2*4))))
#define SYSCTL_GPIOHBCTL_PORTD_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32)+(3*4))))
#define SYSCTL_GPIOHBCTL_PORTE_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32)+(4*4))))
#define SYSCTL_GPIOHBCTL_PORTF_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_GPIOHBCTL_OFFSET)*32)+(5*4))))



******************************************************************************************
************************************ 10 RCC2 *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t res          :4;
volatile uint32_t OSCSRC2      :3;
volatile uint32_t res2         :4;
volatile uint32_t BYPASS2      :1;
volatile uint32_t res3         :1;
volatile uint32_t PWRDN2       :1;
volatile uint32_t USBPWRDN     :1;
volatile uint32_t res4         :7;
volatile uint32_t SYSDIV2LSB   :1;
volatile uint32_t SYSDIV2      :6;
volatile uint32_t res5         :1;
volatile uint32_t DIV400       :1;
volatile uint32_t USERCC2       :1;
}RCC2_t;


#define SYSCTL_RCC2_OFFSET     (0x0070)
#define SYSCTL_RCC2            (((RCC2_t*)(SYSCTL_BASE+SYSCTL_RCC2_OFFSET )))
#define SYSCTL_RCC2_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCC2_OFFSET)))

#define SYSCTL_RCC2_R_OSCSRC2       (0x00000070)
#define SYSCTL_RCC2_R_BYPASS2       (0x00000800)
#define SYSCTL_RCC2_R_PWRDN2        (0x00002000)
#define SYSCTL_RCC2_R_USBPWRDN      (0x00004000)
#define SYSCTL_RCC2_R_SYSDIV2LSB    (0x00400000)
#define SYSCTL_RCC2_R_SYSDIV2_MASK    (0x1F800000)
#define SYSCTL_RCC2_R_DIV400        (0x40000000)
#define SYSCTL_RCC2_R_USERCC2       (0x80000000)

#define SYSCTL_RCC2_BYPASS2_BITBANDING   (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32)+(11*4))))
#define SYSCTL_RCC2_PWRDN2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32)+(13*4))))
#define SYSCTL_RCC2_USBPWRDN_BITBANDING     (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32)+(14*4))))
#define SYSCTL_RCC2_SYSDIV2LSB_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32)+(22*4))))
#define SYSCTL_RCC2_DIV400_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32)+(30*4))))
#define SYSCTL_RCC2_USERCC2_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCC2_OFFSET)*32)+(31*4))))


******************************************************************************************
************************************ 11 MOSCCTL *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t CVAL         :1;
volatile uint32_t MOSCIM       :1;
volatile uint32_t NOXTAL       :1;
volatile uint32_t res          :29;
}MOSCCTL_t;


#define SYSCTL_MOSCCTL_OFFSET     (0x007C)
#define SYSCTL_MOSCCTL            (((MOSCCTL_t*)(SYSCTL_BASE+SYSCTL_MOSCCTL_OFFSET )))
#define SYSCTL_MOSCCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_MOSCCTL_OFFSET)))

#define SYSCTL_MOSCCTL_R_CVAL     (0x00000001)
#define SYSCTL_MOSCCTL_R_MOSCIM   (0x00000002)
#define SYSCTL_MOSCCTL_R_NOXTAL   (0x00000004)

#define SYSCTL_MOSCCTL_CVAL_BITBANDING      (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MOSCCTL_OFFSET)*32)+(0*4))))
#define SYSCTL_MOSCCTL_MOSCIM_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MOSCCTL_OFFSET)*32)+(1*4))))
#define SYSCTL_MOSCCTL_NOXTAL_BITBANDING     (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_MOSCCTL_OFFSET)*32)+(2*4))))




******************************************************************************************
************************************12 DSLPCLKCFG *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t res         :1;
volatile uint32_t PIOSCPD     :1;
volatile uint32_t res2        :2;
volatile uint32_t DSOSCSRC    :3;
volatile uint32_t re3         :16;
volatile uint32_t DSDIVORIDE  :6;
volatile uint32_t re4         :3;
}DSLPCLKCFG_t;


#define SYSCTL_DSLPCLKCFG_OFFSET     (0x0144)
#define SYSCTL_DSLPCLKCFG            (((DSLPCLKCFG_t*)(SYSCTL_BASE+SYSCTL_DSLPCLKCFG_OFFSET )))
#define SYSCTL_DSLPCLKCFG_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DSLPCLKCFG_OFFSET)))

#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_MASK    (0x00000002)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_MASK   (0x00000070)
#define SYSCTL_DSLPCLKCFG_R_DSDIVORIDE_MASK (0x1F800000)


******************************************************************************************
************************************13 SYSPROP *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t FPU_PROP    :1;
volatile uint32_t res         :7;
volatile uint32_t FLASHLPM    :1;
volatile uint32_t res1        :1;
volatile uint32_t SRAMLPM     :1;
volatile uint32_t SRAMSM      :1;
volatile uint32_t PIOSCPDE    :1;
volatile uint32_t res2        :19;
}SYSPROP_t;


#define SYSCTL_SYSPROP_OFFSET     (0x014C)
#define SYSCTL_SYSPROP            (((SYSPROP_t*)(SYSCTL_BASE+SYSCTL_SYSPROP_OFFSET )))
#define SYSCTL_SYSPROP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SYSPROP_OFFSET)))

#define SYSCTL_SYSPROP_R_FPU        (0x00000001)
#define SYSCTL_SYSPROP_R_FLASHLPM   (0x00000100)
#define SYSCTL_SYSPROP_R_SRAMLPM    (0x00000400)
#define SYSCTL_SYSPROP_R_SRAMSM     (0x00000800)
#define SYSCTL_SYSPROP_R_PIOSCPDE   (0x00001000)


#define SYSCTL_SYSPROP_FPU_BITBANDING       (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32)+(0*4))))
#define SYSCTL_SYSPROP_FLASHLPM_BITBANDING        (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32)+(8*4))))
#define SYSCTL_SYSPROP_SRAMLPM_BITBANDING      (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32)+(10*4))))
#define SYSCTL_SYSPROP_SRAMSM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32)+(11*4))))
#define SYSCTL_SYSPROP_PIOSCPDE_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SYSPROP_OFFSET)*32)+(12*4))))


******************************************************************************************
************************************14 PIOSCCAL *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t UT          :7;
volatile uint32_t res         :1;
volatile uint32_t UPDATE      :1;
volatile uint32_t CAL         :1;
volatile uint32_t res2        :21;
volatile uint32_t UTEN        :1;
}PIOSCCAL_t;


#define SYSCTL_PIOSCCAL_OFFSET     (0x014C)
#define SYSCTL_PIOSCCAL            (((PIOSCCAL_t*)(SYSCTL_BASE+SYSCTL_PIOSCCAL_OFFSET )))
#define SYSCTL_PIOSCCAL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PIOSCCAL_OFFSET)))

#define SYSCTL_PIOSCCA_R_UT_MASK    (0x0000007F)
#define SYSCTL_PIOSCCA_R_UPDATE     (0x00000100)
#define SYSCTL_PIOSCCA_R_CAL        (0x00000200)
#define SYSCTL_PIOSCCA_R_UTEN       (0x80000000)

******************************************************************************************
************************************15 PIOSCSTAT *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t CT          :7;
volatile uint32_t res         :1;
volatile uint32_t RESULT      :2;
volatile uint32_t res2        :6;
volatile uint32_t DT          :7;
volatile uint32_t res3        :9;
}PIOSCSTAT_t;


#define SYSCTL_PIOSCSTAT_OFFSET     (0x0154)
#define SYSCTL_PIOSCSTAT            (((PIOSCSTAT_t*)(SYSCTL_BASE+SYSCTL_PIOSCSTAT_OFFSET )))
#define SYSCTL_PIOSCSTAT_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PIOSCSTAT_OFFSET)))

#define SYSCTL_PIOSCSTAT_R_CT_MASK    (0x0000007F)
#define SYSCTL_PIOSCSTAT_R_RESULT_MASK   (0x00000300)
#define SYSCTL_PIOSCSTAT_R_DT_MASK       (0x007F0000)

******************************************************************************************
************************************16 PLLFREQ0 *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t MINT          :10;
volatile uint32_t MFRAC         :10;
volatile uint32_t res           :12;
}PLLFREQ0_t;


#define SYSCTL_PLLFREQ0_OFFSET     (0x0160)
#define SYSCTL_PLLFREQ0            (((PLLFREQ0_t*)(SYSCTL_BASE+SYSCTL_PLLFREQ0_OFFSET )))
#define SYSCTL_PLLFREQ0_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PLLFREQ0_OFFSET)))

#define SYSCTL_PLLFREQ0_R_MINT_MASK     (0x000003FF)
#define SYSCTL_PLLFREQ0_R_MFRAC_MASK    (0x000FFC00)

******************************************************************************************
************************************17 PLLFREQ1 *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t N             :5;
volatile uint32_t res           :3;
volatile uint32_t Q             :5;
volatile uint32_t res2          :19;
}PLLFREQ1_t;


#define SYSCTL_PLLFREQ1_OFFSET     (0x0164)
#define SYSCTL_PLLFREQ1            (((PLLFREQ1_t*)(SYSCTL_BASE+SYSCTL_PLLFREQ1_OFFSET )))
#define SYSCTL_PLLFREQ1_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PLLFREQ1_OFFSET)))

#define SYSCTL_PLLFREQ1_R_N_MASK     (0x0000001F)
#define SYSCTL_PLLFREQ1_R_Q_MASK     (0x00001F00)



******************************************************************************************
************************************18 PLLSTAT *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t LOCK          :1;
volatile uint32_t res           :31;
}PLLSTAT_t;


#define SYSCTL_PLLSTAT_OFFSET     (0x0168)
#define SYSCTL_PLLSTAT            (((PLLFREQ1_t*)(SYSCTL_BASE+SYSCTL_PLLSTAT_OFFSET )))
#define SYSCTL_PLLSTAT_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PLLSTAT_OFFSET)))

#define SYSCTL_PLLSTAT_R_LOCK     (0x00000001)

#define SYSCTL_PLLSTAT_LOCK_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PLLSTAT_OFFSET)*32)+(0*4))))

******************************************************************************************
************************************19 SLSRWRCFG *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t SRAMPM        :2;
volatile uint32_t res           :2;
volatile uint32_t FLASHPM       :2;
volatile uint32_t res2          :26;
}SLSRWRCFG_t;


#define SYSCTL_SLSRWRCFG_OFFSET     (0x0188)
#define SYSCTL_SLSRWRCFG            (((SLSRWRCFG_t*)(SYSCTL_BASE+SYSCTL_SLSRWRCFG_OFFSET )))
#define SYSCTL_SLSRWRCFG_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SLSRWRCFG_OFFSET)))

#define SYSCTL_SLSRWRCFG_R_SRAMPM_MASK   (0x00000003)
#define SYSCTL_SLSRWRCFG_R_FLASHPM_MASK  (0x00000030)

******************************************************************************************
************************************20 DSLSRWRCFG *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t SRAMPM        :2;
volatile uint32_t res           :2;
volatile uint32_t FLASHPM       :2;
volatile uint32_t res2          :26;
}DSLSRWRCFG_t;


#define SYSCTL_DSLSRWRCFG_OFFSET     (0x018C)
#define SYSCTL_DSLSRWRCFG            (((DSLSRWRCFG_t*)(SYSCTL_BASE+SYSCTL_DSLSRWRCFG_OFFSET )))
#define SYSCTL_DSLSRWRCFG_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DSLSRWRCFG_OFFSET)))

#define SYSCTL_DSLSRWRCFG_R_SRAMPM_MASK   (0x00000003)
#define SYSCTL_DSLSRWRCFG_R_FLASHPM_MASK  (0x00000030)


******************************************************************************************
************************************21 LDOSPCTL *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t VLDO          :8;
volatile uint32_t res           :23;
volatile uint32_t VADJEN        :1;
}LDOSPCTL_t;


#define SYSCTL_LDOSPCTL_OFFSET     (0x01B4)
#define SYSCTL_LDOSPCTL            (((LDOSPCTL_t*)(SYSCTL_BASE+SYSCTL_LDOSPCTL_OFFSET )))
#define SYSCTL_LDOSPCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_LDOSPCTL_OFFSET)))

#define SYSCTL_LDOSPCTL_R_VLDO_MASK     (0x000000FF)
#define SYSCTL_LDOSPCTL_R_VADJEN        (0x80000000)


******************************************************************************************
************************************22 LDOSPCAL *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t NOPLL         :8;
volatile uint32_t WITHPLL       :8;
volatile uint32_t res           :16;
}LDOSPCAL_t;


#define SYSCTL_LDOSPCAL_OFFSET     (0x01B8)
#define SYSCTL_LDOSPCAL            (((LDOSPCAL_t*)(SYSCTL_BASE+SYSCTL_LDOSPCAL_OFFSET )))
#define SYSCTL_LDOSPCAL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_LDOSPCAL_OFFSET)))

#define SYSCTL_LDOSPCAL_R_NOPLL_MASK     (0x000000FF)
#define SYSCTL_LDOSPCAL_R_WITHPLL_MASK   (0x0000FF00)



******************************************************************************************
************************************23 LDODPCTL *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t VLDO          :8;
volatile uint32_t res           :23;
volatile uint32_t VADJEN        :1;
}LDODPCTL_t;


#define SYSCTL_LDODPCTL_OFFSET     (0x01BC)
#define SYSCTL_LDODPCTL            (((LDODPCTL_t*)(SYSCTL_BASE+SYSCTL_LDODPCTL_OFFSET )))
#define SYSCTL_LDODPCTL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_LDODPCTL_OFFSET)))

#define SYSCTL_LDODPCTL_R_VLDO_MASK     (0x000000FF)
#define SYSCTL_LDODPCTL_R_VADJEN        (0x80000000)


******************************************************************************************
************************************24 LDODPCAL *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t KHZ30         :8;
volatile uint32_t WITHPLL       :8;
volatile uint32_t res           :16;
}LDODPCAL_t;


#define SYSCTL_LDODPCAL_OFFSET     (0x01C0)
#define SYSCTL_LDODPCAL            (((LDODPCAL_t*)(SYSCTL_BASE+SYSCTL_LDODPCAL_OFFSET )))
#define SYSCTL_LDODPCAL_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_LDODPCAL_OFFSET)))

#define SYSCTL_LDODPCAL_R_NOPLL_MASK     (0x000000FF)
#define SYSCTL_LDODPCAL_R_KHZ30_MASK     (0x0000FF00)

******************************************************************************************
************************************25 SDPMST *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t SPDERR   :1;
volatile uint32_t FPDERR   :1;
volatile uint32_t SRDERR   :1;
volatile uint32_t LDMINERR :1;
volatile uint32_t LSMINERR :1;
volatile uint32_t res      :1;
volatile uint32_t LMAXERR  :1;
volatile uint32_t SRDW     :1;
volatile uint32_t res2     :8;
volatile uint32_t PRACT    :1;
volatile uint32_t LOWPWR   :1;
volatile uint32_t FLASHLP  :1;
volatile uint32_t LDOUA    :1;
volatile uint32_t res3     :12;
}SDPMST_t;


#define SYSCTL_SDPMST_OFFSET     (0x01CC)
#define SYSCTL_SDPMST            (((SDPMST_t*)(SYSCTL_BASE+SYSCTL_SDPMSTL_OFFSET )))
#define SYSCTL_SDPMST_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SDPMST_OFFSET)))

#define SYSCTL_SDPMST_R_SPDERR     (0x00000001)
#define SYSCTL_SDPMST_R_FPDERR     (0x00000002)
#define SYSCTL_SDPMST_R_SRDERR     (0x00000004)
#define SYSCTL_SDPMST_R_LDMINERR   (0x00000008)
#define SYSCTL_SDPMST_R_LSMINERR   (0x00000010)
#define SYSCTL_SDPMST_R_LMAXERR    (0x00000040)
#define SYSCTL_SDPMST_R_SRDW       (0x00000080)
#define SYSCTL_SDPMST_R_PRACT      (0x00010000)
#define SYSCTL_SDPMST_R_LOWPWR     (0x00020000)
#define SYSCTL_SDPMST_R_FLASHLP    (0x00040000)
#define SYSCTL_SDPMST_R_LDOUA      (0x00080000)


#define SYSCTL_SDPMST_SPDERR_BITBANDING   (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(0*4))))
#define SYSCTL_SDPMST_FPDERR_BITBANDING   (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(1*4))))
#define SYSCTL_SDPMST_SRDERR_BITBANDING   (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(2*4))))
#define SYSCTL_SDPMST_LDMINERR_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(3*4))))
#define SYSCTL_SDPMST_LSMINERR_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(4*4))))
#define SYSCTL_SDPMST_LMAXERR_BITBANDING  (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(6*4))))
#define SYSCTL_SDPMST_SRDW_BITBANDING     (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(7*4))))
#define SYSCTL_SDPMST_PRACT_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(16*4))))
#define SYSCTL_SDPMST_LOWPWR_BITBANDING   (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(17*4))))
#define SYSCTL_SDPMST_FLASHLP_BITBANDING  (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(18*4))))
#define SYSCTL_SDPMST_LDOUA_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SDPMST_OFFSET)*32)+(19*4))))







******************************************************************************************
************************************26 PPWD *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t WDT0   :1;
volatile uint32_t WDT1   :1;
volatile uint32_t res  :30;
}PPWD_t;


#define SYSCTL_PPWD_OFFSET     (0x0300)
#define SYSCTL_PPWD            (((PPWD_t*)(SYSCTL_BASE+SYSCTL_PPWD_OFFSET )))
#define SYSCTL_PPWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPWD_OFFSET)))

#define SYSCTL_PPWD_R_WDT0     (0x00000001)
#define SYSCTL_PPWD_R_WDT1     (0x00000002)


#define SYSCTL_PPWD_WDT0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPWD_OFFSET)*32)+(0*4))))
#define SYSCTL_PPWD_WDT1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPWD_OFFSET)*32)+(1*4))))


******************************************************************************************
************************************27 PPTIMER *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t TIMER0   :1;
volatile uint32_t TIMER1   :1;
volatile uint32_t TIMER2   :1;
volatile uint32_t TIMER3   :1;
volatile uint32_t TIMER4   :1;
volatile uint32_t TIMER5   :1;
volatile uint32_t res      :26;
}PPTIMER_t;


#define SYSCTL_PPTIMER_OFFSET     (0x0304)
#define SYSCTL_PPTIMER            (((PPTIMER_t*)(SYSCTL_BASE+SYSCTL_PPTIMER_OFFSET )))
#define SYSCTL_PPTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPTIMER_OFFSET)))

#define SYSCTL_PPTIMER_R_TIMER0     (0x00000001)
#define SYSCTL_PPTIMER_R_TIMER1     (0x00000002)
#define SYSCTL_PPTIMER_R_TIMER2     (0x00000004)
#define SYSCTL_PPTIMER_R_TIMER3     (0x00000008)
#define SYSCTL_PPTIMER_R_TIMER4     (0x00000010)
#define SYSCTL_PPTIMER_R_TIMER5     (0x00000020)

#define SYSCTL_PPTIMER_TIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_PPTIMER_TIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_PPTIMER_TIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_PPTIMER_TIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_PPTIMER_TIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_PPTIMER_TIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPTIMER_OFFSET)*32)+(5*4))))


******************************************************************************************
************************************28 PPGPIO *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t GPIOA   :1;
volatile uint32_t GPIOB   :1;
volatile uint32_t GPIOC   :1;
volatile uint32_t GPIOD   :1;
volatile uint32_t GPIOE   :1;
volatile uint32_t GPIOF   :1;
volatile uint32_t GPIOG   :1;
volatile uint32_t GPIOH   :1;
volatile uint32_t GPIOJ   :1;
volatile uint32_t GPIOK   :1;
volatile uint32_t GPIOL   :1;
volatile uint32_t GPIOM   :1;
volatile uint32_t GPION   :1;
volatile uint32_t GPIOP   :1;
volatile uint32_t GPIOQ   :1;
volatile uint32_t res     :17;
}PPGPIO_t;


#define SYSCTL_PPGPIO_OFFSET     (0x0308)
#define SYSCTL_PPGPIO            (((PPGPIO_t*)(SYSCTL_BASE+SYSCTL_PPGPIO_OFFSET )))
#define SYSCTL_PPGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPGPIO_OFFSET)))

#define SYSCTL_PPGPIO_R_GPIOA     (0x00000001)
#define SYSCTL_PPGPIO_R_GPIOB     (0x00000002)
#define SYSCTL_PPGPIO_R_GPIOC     (0x00000004)
#define SYSCTL_PPGPIO_R_GPIOD     (0x00000008)
#define SYSCTL_PPGPIO_R_GPIOE     (0x00000010)
#define SYSCTL_PPGPIO_R_GPIOF     (0x00000020)
#define SYSCTL_PPGPIO_R_GPIOG     (0x00000040)
#define SYSCTL_PPGPIO_R_GPIOH     (0x00000080)
#define SYSCTL_PPGPIO_R_GPIOJ     (0x00000100)
#define SYSCTL_PPGPIO_R_GPIOK     (0x00000200)
#define SYSCTL_PPGPIO_R_GPIOL     (0x00000400)
#define SYSCTL_PPGPIO_R_GPIOM     (0x00000800)
#define SYSCTL_PPGPIO_R_GPION     (0x00001000)
#define SYSCTL_PPGPIO_R_GPIOP     (0x00002000)
#define SYSCTL_PPGPIO_R_GPIOQ     (0x00004000)

#define SYSCTL_PPGPIO_GPIOA_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(0*4))))
#define SYSCTL_PPGPIO_GPIOB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(1*4))))
#define SYSCTL_PPGPIO_GPIOC_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(2*4))))
#define SYSCTL_PPGPIO_GPIOD_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(3*4))))
#define SYSCTL_PPGPIO_GPIOE_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(4*4))))
#define SYSCTL_PPGPIO_GPIOF_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(5*4))))
#define SYSCTL_PPGPIO_GPIOG_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(6*4))))
#define SYSCTL_PPGPIO_GPIOH_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(7*4))))
#define SYSCTL_PPGPIO_GPIOJ_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(8*4))))
#define SYSCTL_PPGPIO_GPIOK_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(9*4))))
#define SYSCTL_PPGPIO_GPIOL_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(10*4))))
#define SYSCTL_PPGPIO_GPIOM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(11*4))))
#define SYSCTL_PPGPIO_GPION_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(12*4))))
#define SYSCTL_PPGPIO_GPIOP_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(13*4))))
#define SYSCTL_PPGPIO_GPIOQ_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPGPIO_OFFSET)*32)+(14*4))))

******************************************************************************************
************************************29 PPDMA *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t UDMA    :1;
volatile uint32_t res     :31;
}PPDMA_t;


#define SYSCTL_PPDMA_OFFSET     (0x030C)
#define SYSCTL_PPDMA            (((PPDMA_t*)(SYSCTL_BASE+SYSCTL_PPDMA_OFFSET )))
#define SYSCTL_PPDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPDMA_OFFSET)))

#define SYSCTL_PPDMA_R_UDMA    (0x00000001)

#define SYSCTL_PPDMA_UDMA_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPDMA_OFFSET)*32)+(0*4))))


******************************************************************************************
************************************30 PPHIB *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t HIB    :1;
volatile uint32_t res     :31;
}PPHIB_t;


#define SYSCTL_PPHIB_OFFSET     (0x0314)
#define SYSCTL_PPHIB            (((PPHIB_t*)(SYSCTL_BASE+SYSCTL_PPHIB_OFFSET )))
#define SYSCTL_PPHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPHIB_OFFSET)))

#define SYSCTL_PPHIB_R_HIB    (0x00000001)
#define SYSCTL_PPHIB_HIB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPHIB_OFFSET)*32)+(0*4))))


******************************************************************************************
************************************31 PPUART *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t UART0    :1;
volatile uint32_t UART1    :1;
volatile uint32_t UART2    :1;
volatile uint32_t UART3    :1;
volatile uint32_t UART4    :1;
volatile uint32_t UART5    :1;
volatile uint32_t UART6    :1;
volatile uint32_t UART7    :1;
volatile uint32_t res     :24;
}PPUART_t;


#define SYSCTL_PPUART_OFFSET     (0x0318)
#define SYSCTL_PPUART            (((PPUART_t*)(SYSCTL_BASE+SYSCTL_PPUART_OFFSET )))
#define SYSCTL_PPUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPUART_OFFSET)))

#define SYSCTL_PPUART_R_UART0    (0x00000001)
#define SYSCTL_PPUART_R_UART1    (0x00000002)
#define SYSCTL_PPUART_R_UART2    (0x00000004)
#define SYSCTL_PPUART_R_UART3    (0x00000008)
#define SYSCTL_PPUART_R_UART4    (0x00000010)
#define SYSCTL_PPUART_R_UART5    (0x00000020)
#define SYSCTL_PPUART_R_UART6    (0x00000040)
#define SYSCTL_PPUART_R_UART7    (0x00000080)

#define SYSCTL_PPUART_UART0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(0*4))))
#define SYSCTL_PPUART_UART1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(1*4))))
#define SYSCTL_PPUART_UART2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(2*4))))
#define SYSCTL_PPUART_UART3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(3*4))))
#define SYSCTL_PPUART_UART4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(4*4))))
#define SYSCTL_PPUART_UART5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(5*4))))
#define SYSCTL_PPUART_UART6_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(6*4))))
#define SYSCTL_PPUART_UART7_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPUART_OFFSET)*32)+(7*4))))


******************************************************************************************
************************************32 PPSSI *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t SSI0    :1;
volatile uint32_t SSI1    :1;
volatile uint32_t SSI2    :1;
volatile uint32_t SSI3    :1;
volatile uint32_t res     :28;
}PPSSI_t;


#define SYSCTL_PPSSI_OFFSET     (0x031C)
#define SYSCTL_PPSSI            (((PPSSI_t*)(SYSCTL_BASE+SYSCTL_PPSSI_OFFSET )))
#define SYSCTL_PPSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPSSI_OFFSET)))

#define SYSCTL_PPSSI_R_SSI0    (0x00000001)
#define SYSCTL_PPSSI_R_SSI1    (0x00000002)
#define SYSCTL_PPSSI_R_SSI2    (0x00000004)
#define SYSCTL_PPSSI_R_SSI3    (0x00000008)


#define SYSCTL_PPSSI_SSI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPSSI_OFFSET)*32)+(0*4))))
#define SYSCTL_PPSSI_SSI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPSSI_OFFSET)*32)+(1*4))))
#define SYSCTL_PPSSI_SSI2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPSSI_OFFSET)*32)+(2*4))))
#define SYSCTL_PPSSI_SSI3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPSSI_OFFSET)*32)+(3*4))))

******************************************************************************************
************************************33 PPI2C *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t I2C0    :1;
volatile uint32_t I2C1    :1;
volatile uint32_t I2C2    :1;
volatile uint32_t I2C3    :1;
volatile uint32_t I2C4    :1;
volatile uint32_t I2C5    :1;
volatile uint32_t res     :26;
}PPI2C_t;


#define SYSCTL_PPI2C_OFFSET     (0x0320)
#define SYSCTL_PPI2C            (((PPI2C_t*)(SYSCTL_BASE+SYSCTL_PPI2C_OFFSET )))
#define SYSCTL_PPI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPI2C_OFFSET)))

#define SYSCTL_PPI2C_R_I2C0    (0x00000001)
#define SYSCTL_PPI2C_R_I2C1    (0x00000002)
#define SYSCTL_PPI2C_R_I2C2    (0x00000004)
#define SYSCTL_PPI2C_R_I2C3    (0x00000008)
#define SYSCTL_PPI2C_R_I2C4    (0x00000010)
#define SYSCTL_PPI2C_R_I2C5    (0x00000020)


#define SYSCTL_PPI2C_I2C0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32)+(0*4))))
#define SYSCTL_PPI2C_I2C1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32)+(1*4))))
#define SYSCTL_PPI2C_I2C2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32)+(2*4))))
#define SYSCTL_PPI2C_I2C3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32)+(3*4))))
#define SYSCTL_PPI2C_I2C4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32)+(4*4))))
#define SYSCTL_PPI2C_I2C5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPI2C_OFFSET)*32)+(5*4))))



******************************************************************************************
************************************34 PPUSB *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t USB    :1;
volatile uint32_t res     :31;
}PPUSB_t;


#define SYSCTL_PPUSB_OFFSET     (0x0328)
#define SYSCTL_PPUSB            (((PPUSB_t*)(SYSCTL_BASE+SYSCTL_PPUSB_OFFSET )))
#define SYSCTL_PPUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPUSB_OFFSET)))

#define SYSCTL_PPUSB_R_USB   (0x00000001)
#define SYSCTL_PPUSB_USB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPUSB_OFFSET)*32)+(0*4))))

******************************************************************************************
************************************35 PPCAN *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t CAN0    :1;
volatile uint32_t CAN1    :1;
volatile uint32_t res     :30;
}PPCAN_t;


#define SYSCTL_PPCAN_OFFSET     (0x0334)
#define SYSCTL_PPCAN            (((PPCAN_t*)(SYSCTL_BASE+SYSCTL_PPCAN_OFFSET )))
#define SYSCTL_PPCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPCAN_OFFSET)))

#define SYSCTL_PPCAN_R_CAN0   (0x00000001)
#define SYSCTL_PPCAN_R_CAN1   (0x00000002)


#define SYSCTL_PPCAN_CAN0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPCAN_OFFSET)*32)+(0*4))))
#define SYSCTL_PPCAN_CAN1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPCAN_OFFSET)*32)+(1*4))))


******************************************************************************************
************************************36 PPADC *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t ADC0    :1;
volatile uint32_t ADC1    :1;
volatile uint32_t res     :30;
}PPADC_t;


#define SYSCTL_PPADC_OFFSET     (0x0338)
#define SYSCTL_PPADC            (((PPADC_t*)(SYSCTL_BASE+SYSCTL_PPADC_OFFSET )))
#define SYSCTL_PPADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPADC_OFFSET)))

#define SYSCTL_PPADC_R_ADC0   (0x00000001)
#define SYSCTL_PPADC_R_ADC1   (0x00000002)

#define SYSCTL_PPADC_ADC0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPADC_OFFSET)*32)+(0*4))))
#define SYSCTL_PPADC_ADC1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPADC_OFFSET)*32)+(1*4))))


******************************************************************************************
************************************37 PPACMP *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t ACMP    :1;
volatile uint32_t res     :30;
}PPACMP_t;


#define SYSCTL_PPACMP_OFFSET     (0x033C)
#define SYSCTL_PPACMP            (((PPACMP_t*)(SYSCTL_BASE+SYSCTL_PPACMP_OFFSET )))
#define SYSCTL_PPACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPACMP_OFFSET)))

#define SYSCTL_PPACMP_R_ACMP   (0x00000001)

#define SYSCTL_PPACMP_ACMP_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPACMP_OFFSET)*32)+(0*4))))

******************************************************************************************
************************************38 PPPWM *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t PWM0    :1;
volatile uint32_t PWM1    :1;
volatile uint32_t res     :30;
}PPPWM_t;


#define SYSCTL_PPPWM_OFFSET     (0x0340)
#define SYSCTL_PPPWM            (((PPPWM_t*)(SYSCTL_BASE+SYSCTL_PPPWM_OFFSET )))
#define SYSCTL_PPPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPPWM_OFFSET)))

#define SYSCTL_PPPWM_R_PWM0   (0x00000001)
#define SYSCTL_PPPWM_R_PWM1   (0x00000002)

#define SYSCTL_PPPWM_PWM0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPPWM_OFFSET)*32)+(0*4))))
#define SYSCTL_PPPWM_PWM1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPPWM_OFFSET)*32)+(1*4))))

******************************************************************************************
************************************39 PPQEI *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t QEI0    :1;
volatile uint32_t QEI1    :1;
volatile uint32_t res     :30;
}PPQEI_t;


#define SYSCTL_PPQEI_OFFSET     (0x0344)
#define SYSCTL_PPQEI            (((PPQEI_t*)(SYSCTL_BASE+SYSCTL_PPQEI_OFFSET )))
#define SYSCTL_PPQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPQEI_OFFSET)))

#define SYSCTL_PPQEI_R_QEI0   (0x00000001)
#define SYSCTL_PPQEI_R_QEI1   (0x00000002)

#define SYSCTL_PPQEI_QEI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPQEI_OFFSET)*32)+(0*4))))
#define SYSCTL_PPQEI_QEI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPQEI_OFFSET)*32)+(1*4))))


******************************************************************************************
************************************40 PPEEPROM *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t EEPROM    :1;
volatile uint32_t res     :30;
}PPEEPROM_t;


#define SYSCTL_PPEEPROM_OFFSET     (0x0358)
#define SYSCTL_PPEEPROM            (((PPEEPROM_t*)(SYSCTL_BASE+SYSCTL_PPEEPROM_OFFSET )))
#define SYSCTL_PPEEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPEEPROM_OFFSET)))

#define SYSCTL_PPEEPROM_R_EERPOM   (0x00000001)
#define SYSCTL_PPEEPROM_EEPROM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPEEPROM_OFFSET)*32)+(0*4))))


******************************************************************************************
************************************41 PPWTIMER *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t WTIMER0   :1;
volatile uint32_t WTIMER1   :1;
volatile uint32_t WTIMER2   :1;
volatile uint32_t WTIMER3   :1;
volatile uint32_t WTIMER4   :1;
volatile uint32_t WTIMER5   :1;
volatile uint32_t res      :26;
}PPWTIMER_t;


#define SYSCTL_PPWTIMER_OFFSET     (0x035C)
#define SYSCTL_PPWTIMER            (((PPWTIMER_t*)(SYSCTL_BASE+SYSCTL_PPWTIMER_OFFSET )))
#define SYSCTL_PPWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PPWTIMER_OFFSET)))

#define SYSCTL_PPWTIMER_R_WTIMER0     (0x00000001)
#define SYSCTL_PPWTIMER_R_WTIMER1     (0x00000002)
#define SYSCTL_PPWTIMER_R_WTIMER2     (0x00000004)
#define SYSCTL_PPWTIMER_R_WTIMER3     (0x00000008)
#define SYSCTL_PPWTIMER_R_WTIMER4     (0x00000010)
#define SYSCTL_PPWTIMER_R_WTIMER5     (0x00000020)

#define SYSCTL_PPWTIMER_WTIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_PPWTIMER_WTIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_PPWTIMER_WTIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_PPWTIMER_WTIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_PPWTIMER_WTIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_PPWTIMER_WTIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PPWTIMER_OFFSET)*32)+(5*4))))







******************************************************************************************
************************************42 SRWD *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t WDT0   :1;
volatile uint32_t WDT1   :1;
volatile uint32_t res  :30;
}SRWD_t;


#define SYSCTL_SRWD_OFFSET     (0x0500)
#define SYSCTL_SRWD            (((SRWD_t*)(SYSCTL_BASE+SYSCTL_SRWD_OFFSET )))
#define SYSCTL_SRWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRWD_OFFSET)))

#define SYSCTL_SRWD_R_WDT0     (0x00000001)
#define SYSCTL_SRWD_R_WDT1     (0x00000002)

#define SYSCTL_SRWD_WDT0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRWD_OFFSET)*32)+(0*4))))
#define SYSCTL_SRWD_WDT1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRWD_OFFSET)*32)+(1*4))))


******************************************************************************************
************************************43 SRTIMER *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t TIMER0   :1;
volatile uint32_t TIMER1   :1;
volatile uint32_t TIMER2   :1;
volatile uint32_t TIMER3   :1;
volatile uint32_t TIMER4   :1;
volatile uint32_t TIMER5   :1;
volatile uint32_t res      :26;
}SRTIMER_t;


#define SYSCTL_SRTIMER_OFFSET     (0x0504)
#define SYSCTL_SRTIMER            (((SRTIMER_t*)(SYSCTL_BASE+SYSCTL_SRTIMER_OFFSET )))
#define SYSCTL_SRTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRTIMER_OFFSET)))

#define SYSCTL_SRTIMER_R_TIMER0     (0x00000001)
#define SYSCTL_SRTIMER_R_TIMER1     (0x00000002)
#define SYSCTL_SRTIMER_R_TIMER2     (0x00000004)
#define SYSCTL_SRTIMER_R_TIMER3     (0x00000008)
#define SYSCTL_SRTIMER_R_TIMER4     (0x00000010)
#define SYSCTL_SRTIMER_R_TIMER5     (0x00000020)

#define SYSCTL_SRTIMER_TIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_SRTIMER_TIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_SRTIMER_TIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_SRTIMER_TIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_SRTIMER_TIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_SRTIMER_TIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRTIMER_OFFSET)*32)+(5*4))))

******************************************************************************************
************************************44 SRGPIO *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t GPIOA   :1;
volatile uint32_t GPIOB   :1;
volatile uint32_t GPIOC   :1;
volatile uint32_t GPIOD   :1;
volatile uint32_t GPIOE   :1;
volatile uint32_t GPIOF   :1;
volatile uint32_t GPIOG   :1;
volatile uint32_t GPIOH   :1;
volatile uint32_t GPIOJ   :1;
volatile uint32_t GPIOK   :1;
volatile uint32_t GPIOL   :1;
volatile uint32_t GPIOM   :1;
volatile uint32_t GPION   :1;
volatile uint32_t GPIOP   :1;
volatile uint32_t GPIOQ   :1;
volatile uint32_t res     :17;
}SRGPIO_t;


#define SYSCTL_SRGPIO_OFFSET     (0x0508)
#define SYSCTL_SRGPIO            (((SRGPIO_t*)(SYSCTL_BASE+SYSCTL_SRGPIO_OFFSET )))
#define SYSCTL_SRGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRGPIO_OFFSET)))

#define SYSCTL_SRGPIO_R_GPIOA     (0x00000001)
#define SYSCTL_SRGPIO_R_GPIOB     (0x00000002)
#define SYSCTL_SRGPIO_R_GPIOC     (0x00000004)
#define SYSCTL_SRGPIO_R_GPIOD     (0x00000008)
#define SYSCTL_SRGPIO_R_GPIOE     (0x00000010)
#define SYSCTL_SRGPIO_R_GPIOF     (0x00000020)
#define SYSCTL_SRGPIO_R_GPIOG     (0x00000040)
#define SYSCTL_SRGPIO_R_GPIOH     (0x00000080)
#define SYSCTL_SRGPIO_R_GPIOJ     (0x00000100)
#define SYSCTL_SRGPIO_R_GPIOK     (0x00000200)
#define SYSCTL_SRGPIO_R_GPIOL     (0x00000400)
#define SYSCTL_SRGPIO_R_GPIOM     (0x00000800)
#define SYSCTL_SRGPIO_R_GPION     (0x00001000)
#define SYSCTL_SRGPIO_R_GPIOP     (0x00002000)
#define SYSCTL_SRGPIO_R_GPIOQ     (0x00004000)

#define SYSCTL_SRGPIO_GPIOA_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(0*4))))
#define SYSCTL_SRGPIO_GPIOB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(1*4))))
#define SYSCTL_SRGPIO_GPIOC_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(2*4))))
#define SYSCTL_SRGPIO_GPIOD_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(3*4))))
#define SYSCTL_SRGPIO_GPIOE_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(4*4))))
#define SYSCTL_SRGPIO_GPIOF_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(5*4))))
#define SYSCTL_SRGPIO_GPIOG_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(6*4))))
#define SYSCTL_SRGPIO_GPIOH_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(7*4))))
#define SYSCTL_SRGPIO_GPIOJ_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(8*4))))
#define SYSCTL_SRGPIO_GPIOK_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(9*4))))
#define SYSCTL_SRGPIO_GPIOL_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(10*4))))
#define SYSCTL_SRGPIO_GPIOM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(11*4))))
#define SYSCTL_SRGPIO_GPION_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(12*4))))
#define SYSCTL_SRGPIO_GPIOP_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(13*4))))
#define SYSCTL_SRGPIO_GPIOQ_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRGPIO_OFFSET)*32)+(14*4))))


******************************************************************************************
************************************45 SRDMA *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t UDMA    :1;
volatile uint32_t res     :31;
}SRDMA_t;


#define SYSCTL_SRDMA_OFFSET     (0x050C)
#define SYSCTL_SRDMA            (((SRDMA_t*)(SYSCTL_BASE+SYSCTL_SRDMA_OFFSET )))
#define SYSCTL_SRDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRDMA_OFFSET)))

#define SYSCTL_SRDMA_R_UDMA    (0x00000001)

#define SYSCTL_SRDMA_UDMA_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRDMA_OFFSET)*32)+(0*4))))


******************************************************************************************
************************************46 SRHIB *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t HIB    :1;
volatile uint32_t res     :31;
}SRHIB_t;


#define SYSCTL_SRHIB_OFFSET     (0x0514)
#define SYSCTL_SRHIB            (((SRHIB_t*)(SYSCTL_BASE+SYSCTL_SRHIB_OFFSET )))
#define SYSCTL_SRHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRHIB_OFFSET)))

#define SYSCTL_SRHIB_R_HIB    (0x00000001)
#define SYSCTL_SRHIB_HIB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRHIB_OFFSET)*32)+(0*4))))


******************************************************************************************
************************************47 SRUART *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t UART0    :1;
volatile uint32_t UART1    :1;
volatile uint32_t UART2    :1;
volatile uint32_t UART3    :1;
volatile uint32_t UART4    :1;
volatile uint32_t UART5    :1;
volatile uint32_t UART6    :1;
volatile uint32_t UART7    :1;
volatile uint32_t res     :24;
}SRUART_t;


#define SYSCTL_SRUART_OFFSET     (0x0518)
#define SYSCTL_SRUART            (((SRUART_t*)(SYSCTL_BASE+SYSCTL_SRUART_OFFSET )))
#define SYSCTL_SRUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRUART_OFFSET)))

#define SYSCTL_SRUART_R_UART0    (0x00000001)
#define SYSCTL_SRUART_R_UART1    (0x00000002)
#define SYSCTL_SRUART_R_UART2    (0x00000004)
#define SYSCTL_SRUART_R_UART3    (0x00000008)
#define SYSCTL_SRUART_R_UART4    (0x00000010)
#define SYSCTL_SRUART_R_UART5    (0x00000020)
#define SYSCTL_SRUART_R_UART6    (0x00000040)
#define SYSCTL_SRUART_R_UART7    (0x00000080)

#define SYSCTL_SRUART_UART0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(0*4))))
#define SYSCTL_SRUART_UART1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(1*4))))
#define SYSCTL_SRUART_UART2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(2*4))))
#define SYSCTL_SRUART_UART3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(3*4))))
#define SYSCTL_SRUART_UART4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(4*4))))
#define SYSCTL_SRUART_UART5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(5*4))))
#define SYSCTL_SRUART_UART6_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(6*4))))
#define SYSCTL_SRUART_UART7_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRUART_OFFSET)*32)+(7*4))))


******************************************************************************************
************************************48 SRSSI *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t SSI0    :1;
volatile uint32_t SSI1    :1;
volatile uint32_t SSI2    :1;
volatile uint32_t SSI3    :1;
volatile uint32_t res     :28;
}SRSSI_t;


#define SYSCTL_SRSSI_OFFSET     (0x051C)
#define SYSCTL_SRSSI            (((SRSSI_t*)(SYSCTL_BASE+SYSCTL_SRSSI_OFFSET )))
#define SYSCTL_SRSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRSSI_OFFSET)))

#define SYSCTL_SRSSI_R_SSI0    (0x00000001)
#define SYSCTL_SRSSI_R_SSI1    (0x00000002)
#define SYSCTL_SRSSI_R_SSI2    (0x00000004)
#define SYSCTL_SRSSI_R_SSI3    (0x00000008)


#define SYSCTL_SRSSI_SSI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRSSI_OFFSET)*32)+(0*4))))
#define SYSCTL_SRSSI_SSI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRSSI_OFFSET)*32)+(1*4))))
#define SYSCTL_SRSSI_SSI2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRSSI_OFFSET)*32)+(2*4))))
#define SYSCTL_SRSSI_SSI3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRSSI_OFFSET)*32)+(3*4))))

******************************************************************************************
************************************49 SRI2C *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t I2C0    :1;
volatile uint32_t I2C1    :1;
volatile uint32_t I2C2    :1;
volatile uint32_t I2C3    :1;
volatile uint32_t I2C4    :1;
volatile uint32_t I2C5    :1;
volatile uint32_t res     :26;
}SRI2C_t;


#define SYSCTL_SRI2C_OFFSET     (0x0520)
#define SYSCTL_SRI2C            (((SRI2C_t*)(SYSCTL_BASE+SYSCTL_SRI2C_OFFSET )))
#define SYSCTL_SRI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRI2C_OFFSET)))

#define SYSCTL_SRI2C_R_I2C0    (0x00000001)
#define SYSCTL_SRI2C_R_I2C1    (0x00000002)
#define SYSCTL_SRI2C_R_I2C2    (0x00000004)
#define SYSCTL_SRI2C_R_I2C3    (0x00000008)
#define SYSCTL_SRI2C_R_I2C4    (0x00000010)
#define SYSCTL_SRI2C_R_I2C5    (0x00000020)



#define SYSCTL_SRI2C_I2C0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32)+(0*4))))
#define SYSCTL_SRI2C_I2C1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32)+(1*4))))
#define SYSCTL_SRI2C_I2C2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32)+(2*4))))
#define SYSCTL_SRI2C_I2C3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32)+(3*4))))
#define SYSCTL_SRI2C_I2C4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32)+(4*4))))
#define SYSCTL_SRI2C_I2C5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRI2C_OFFSET)*32)+(5*4))))



******************************************************************************************
************************************50 SRUSB *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t USB    :1;
volatile uint32_t res     :31;
}SRUSB_t;


#define SYSCTL_SRUSB_OFFSET     (0x0528)
#define SYSCTL_SRUSB            (((SRUSB_t*)(SYSCTL_BASE+SYSCTL_SRUSB_OFFSET )))
#define SYSCTL_SRUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRUSB_OFFSET)))

#define SYSCTL_SRUSB_R_USB   (0x00000001)
#define SYSCTL_SRUSB_USB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRUSB_OFFSET)*32)+(0*4))))

******************************************************************************************
************************************51 SRCAN *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t CAN0    :1;
volatile uint32_t CAN1    :1;
volatile uint32_t res     :30;
}SRCAN_t;


#define SYSCTL_SRCAN_OFFSET     (0x0534)
#define SYSCTL_SRCAN            (((SRCAN_t*)(SYSCTL_BASE+SYSCTL_SRCAN_OFFSET )))
#define SYSCTL_SRCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRCAN_OFFSET)))

#define SYSCTL_SRCAN_R_CAN0   (0x00000001)
#define SYSCTL_SRCAN_R_CAN1   (0x00000002)

#define SYSCTL_SRCAN_CAN0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRCAN_OFFSET)*32)+(0*4))))
#define SYSCTL_SRCAN_CAN1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRCAN_OFFSET)*32)+(1*4))))

******************************************************************************************
************************************52 SRADC *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t ADC0    :1;
volatile uint32_t ADC1    :1;
volatile uint32_t res     :30;
}SRADC_t;


#define SYSCTL_SRADC_OFFSET     (0x0538)
#define SYSCTL_SRADC            (((SRADC_t*)(SYSCTL_BASE+SYSCTL_SRADC_OFFSET )))
#define SYSCTL_SRADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRADC_OFFSET)))

#define SYSCTL_SRADC_R_ADC0   (0x00000001)
#define SYSCTL_SRADC_R_ADC1   (0x00000002)
#define SYSCTL_SRADC_ADC0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRADC_OFFSET)*32)+(0*4))))
#define SYSCTL_SRADC_ADC1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRADC_OFFSET)*32)+(1*4))))


******************************************************************************************
************************************53 SRACMP *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t ACMP    :1;
volatile uint32_t res     :30;
}SRACMP_t;


#define SYSCTL_SRACMP_OFFSET     (0x053C)
#define SYSCTL_SRACMP            (((SRACMP_t*)(SYSCTL_BASE+SYSCTL_SRACMP_OFFSET )))
#define SYSCTL_SRACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRACMP_OFFSET)))

#define SYSCTL_SRACMP_R_ACMP   (0x00000001)
#define SYSCTL_SRACMP_ACMP_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRACMP_OFFSET)*32)+(0*4))))

******************************************************************************************
************************************54 SRPWM *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t PWM0    :1;
volatile uint32_t PWM1    :1;
volatile uint32_t res     :30;
}SRPWM_t;


#define SYSCTL_SRPWM_OFFSET     (0x0540)
#define SYSCTL_SRPWM            (((SRPWM_t*)(SYSCTL_BASE+SYSCTL_SRPWM_OFFSET )))
#define SYSCTL_SRPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRPWM_OFFSET)))

#define SYSCTL_SRPWM_R_PWM0   (0x00000001)
#define SYSCTL_SRPWM_R_PWM1   (0x00000002)

#define SYSCTL_SRPWM_PWM0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRPWM_OFFSET)*32)+(0*4))))
#define SYSCTL_SRPWM_PWM1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRPWM_OFFSET)*32)+(1*4))))

******************************************************************************************
************************************55 SRQEI *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t QEI0    :1;
volatile uint32_t QEI1    :1;
volatile uint32_t res     :30;
}SRQEI_t;


#define SYSCTL_SRQEI_OFFSET     (0x0544)
#define SYSCTL_SRQEI            (((SRQEI_t*)(SYSCTL_BASE+SYSCTL_SRQEI_OFFSET )))
#define SYSCTL_SRQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRQEI_OFFSET)))

#define SYSCTL_SRQEI_R_QEI0   (0x00000001)
#define SYSCTL_SRQEI_R_QEI1   (0x00000002)

#define SYSCTL_SRQEI_QEI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRQEI_OFFSET)*32)+(0*4))))
#define SYSCTL_SRQEI_QEI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRQEI_OFFSET)*32)+(1*4))))



******************************************************************************************
************************************56 SREEPROM *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t EEPROM    :1;
volatile uint32_t res     :30;
}SREEPROM_t;


#define SYSCTL_SREEPROM_OFFSET     (0x0558)
#define SYSCTL_SREEPROM            (((SREEPROM_t*)(SYSCTL_BASE+SYSCTL_SREEPROM_OFFSET )))
#define SYSCTL_SREEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SREEPROM_OFFSET)))

#define SYSCTL_SREEPROM_R_EERPOM   (0x00000001)
#define SYSCTL_SREEPROM_EEPROM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SREEPROM_OFFSET)*32)+(0*4))))


******************************************************************************************
************************************57 SRWTIMER *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t WTIMER0   :1;
volatile uint32_t WTIMER1   :1;
volatile uint32_t WTIMER2   :1;
volatile uint32_t WTIMER3   :1;
volatile uint32_t WTIMER4   :1;
volatile uint32_t WTIMER5   :1;
volatile uint32_t res      :26;
}SRWTIMER_t;


#define SYSCTL_SRWTIMER_OFFSET     (0x055C)
#define SYSCTL_SRWTIMER            (((SRWTIMER_t*)(SYSCTL_BASE+SYSCTL_SRWTIMER_OFFSET )))
#define SYSCTL_SRWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SRWTIMER_OFFSET)))

#define SYSCTL_SRWTIMER_R_WTIMER0     (0x00000001)
#define SYSCTL_SRWTIMER_R_WTIMER1     (0x00000002)
#define SYSCTL_SRWTIMER_R_WTIMER2     (0x00000004)
#define SYSCTL_SRWTIMER_R_WTIMER3     (0x00000008)
#define SYSCTL_SRWTIMER_R_WTIMER4     (0x00000010)
#define SYSCTL_SRWTIMER_R_WTIMER5     (0x00000020)


#define SYSCTL_SRWTIMER_WTIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_SRWTIMER_WTIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_SRWTIMER_WTIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_SRWTIMER_WTIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_SRWTIMER_WTIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_SRWTIMER_WTIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SRWTIMER_OFFSET)*32)+(5*4))))



******************************************************************************************
************************************58 RCGWD *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t WDT0   :1;
volatile uint32_t WDT1   :1;
volatile uint32_t res  :30;
}RCGWD_t;


#define SYSCTL_RCGWD_OFFSET     (0x0600)
#define SYSCTL_RCGWD            (((RCGWD_t*)(SYSCTL_BASE+SYSCTL_RCGWD_OFFSET )))
#define SYSCTL_RCGWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGWD_OFFSET)))

#define SYSCTL_RCGWD_R_WDT0     (0x00000001)
#define SYSCTL_RCGWD_R_WDT1     (0x00000002)

#define SYSCTL_RCGWD_WDT0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGWD_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGWD_WDT1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGWD_OFFSET)*32)+(1*4))))

******************************************************************************************
************************************59 RCGTIMER *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t TIMER0   :1;
volatile uint32_t TIMER1   :1;
volatile uint32_t TIMER2   :1;
volatile uint32_t TIMER3   :1;
volatile uint32_t TIMER4   :1;
volatile uint32_t TIMER5   :1;
volatile uint32_t res      :26;
}RCGTIMER_t;


#define SYSCTL_RCGTIMER_OFFSET     (0x0604)
#define SYSCTL_RCGTIMER            (((RCGTIMER_t*)(SYSCTL_BASE+SYSCTL_RCGTIMER_OFFSET )))
#define SYSCTL_RCGTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGTIMER_OFFSET)))

#define SYSCTL_RCGTIMER_R_TIMER0     (0x00000001)
#define SYSCTL_RCGTIMER_R_TIMER1     (0x00000002)
#define SYSCTL_RCGTIMER_R_TIMER2     (0x00000004)
#define SYSCTL_RCGTIMER_R_TIMER3     (0x00000008)
#define SYSCTL_RCGTIMER_R_TIMER4     (0x00000010)
#define SYSCTL_RCGTIMER_R_TIMER5     (0x00000020)

#define SYSCTL_RCGTIMER_TIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGTIMER_TIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_RCGTIMER_TIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_RCGTIMER_TIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_RCGTIMER_TIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_RCGTIMER_TIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGTIMER_OFFSET)*32)+(5*4))))

******************************************************************************************
************************************60 RCGGPIO *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t GPIOA   :1;
volatile uint32_t GPIOB   :1;
volatile uint32_t GPIOC   :1;
volatile uint32_t GPIOD   :1;
volatile uint32_t GPIOE   :1;
volatile uint32_t GPIOF   :1;
volatile uint32_t GPIOG   :1;
volatile uint32_t GPIOH   :1;
volatile uint32_t GPIOJ   :1;
volatile uint32_t GPIOK   :1;
volatile uint32_t GPIOL   :1;
volatile uint32_t GPIOM   :1;
volatile uint32_t GPION   :1;
volatile uint32_t GPIOP   :1;
volatile uint32_t GPIOQ   :1;
volatile uint32_t res     :17;
}RCGGPIO_t;


#define SYSCTL_RCGGPIO_OFFSET     (0x0608)
#define SYSCTL_RCGGPIO            (((RCGGPIO_t*)(SYSCTL_BASE+SYSCTL_RCGGPIO_OFFSET )))
#define SYSCTL_RCGGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGGPIO_OFFSET)))

#define SYSCTL_RCGGPIO_R_GPIOA     (0x00000001)
#define SYSCTL_RCGGPIO_R_GPIOB     (0x00000002)
#define SYSCTL_RCGGPIO_R_GPIOC     (0x00000004)
#define SYSCTL_RCGGPIO_R_GPIOD     (0x00000008)
#define SYSCTL_RCGGPIO_R_GPIOE     (0x00000010)
#define SYSCTL_RCGGPIO_R_GPIOF     (0x00000020)
#define SYSCTL_RCGGPIO_R_GPIOG     (0x00000040)
#define SYSCTL_RCGGPIO_R_GPIOH     (0x00000080)
#define SYSCTL_RCGGPIO_R_GPIOJ     (0x00000100)
#define SYSCTL_RCGGPIO_R_GPIOK     (0x00000200)
#define SYSCTL_RCGGPIO_R_GPIOL     (0x00000400)
#define SYSCTL_RCGGPIO_R_GPIOM     (0x00000800)
#define SYSCTL_RCGGPIO_R_GPION     (0x00001000)
#define SYSCTL_RCGGPIO_R_GPIOP     (0x00002000)
#define SYSCTL_RCGGPIO_R_GPIOQ     (0x00004000)

#define SYSCTL_RCGGPIO_GPIOA_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGGPIO_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGGPIO_GPIOB_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGGPIO_OFFSET)*32)+(1*4))))
#define SYSCTL_RCGGPIO_GPIOC_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGGPIO_OFFSET)*32)+(2*4))))
#define SYSCTL_RCGGPIO_GPIOD_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGGPIO_OFFSET)*32)+(3*4))))
#define SYSCTL_RCGGPIO_GPIOE_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGGPIO_OFFSET)*32)+(4*4))))
#define SYSCTL_RCGGPIO_GPIOF_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGGPIO_OFFSET)*32)+(5*4))))
#define SYSCTL_RCGGPIO_GPIOG_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGGPIO_OFFSET)*32)+(6*4))))
#define SYSCTL_RCGGPIO_GPIOH_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGGPIO_OFFSET)*32)+(7*4))))
#define SYSCTL_RCGGPIO_GPIOJ_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGGPIO_OFFSET)*32)+(8*4))))
#define SYSCTL_RCGGPIO_GPIOK_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGGPIO_OFFSET)*32)+(9*4))))
#define SYSCTL_RCGGPIO_GPIOL_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGGPIO_OFFSET)*32)+(10*4))))
#define SYSCTL_RCGGPIO_GPIOM_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGGPIO_OFFSET)*32)+(11*4))))
#define SYSCTL_RCGGPIO_GPION_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGGPIO_OFFSET)*32)+(12*4))))
#define SYSCTL_RCGGPIO_GPIOP_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGGPIO_OFFSET)*32)+(13*4))))
#define SYSCTL_RCGGPIO_GPIOQ_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGGPIO_OFFSET)*32)+(14*4))))




******************************************************************************************
************************************61 RCGDMA *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t UDMA    :1;
volatile uint32_t res     :31;
}RCGDMA_t;


#define SYSCTL_RCGDMA_OFFSET     (0x060C)
#define SYSCTL_RCGDMA            (((RCGDMA_t*)(SYSCTL_BASE+SYSCTL_RCGDMA_OFFSET )))
#define SYSCTL_RCGDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGDMA_OFFSET)))

#define SYSCTL_RCGDMA_R_UDMA    (0x00000001)

#define SYSCTL_RCGDMA_UDMA_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGDMA_OFFSET)*32)+(0*4))))


******************************************************************************************
************************************62 RCGHIB *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t HIB    :1;
volatile uint32_t res     :31;
}RCGHIB_t;


#define SYSCTL_RCGHIB_OFFSET     (0x0614)
#define SYSCTL_RCGHIB            (((RCGHIB_t*)(SYSCTL_BASE+SYSCTL_RCGHIB_OFFSET )))
#define SYSCTL_RCGHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGHIB_OFFSET)))

#define SYSCTL_RCGHIB_R_HIB    (0x00000001)
#define SYSCTL_RCGHIB_HIB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGHIB_OFFSET)*32)+(0*4))))


******************************************************************************************
************************************63 RCGUART *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t UART0    :1;
volatile uint32_t UART1    :1;
volatile uint32_t UART2    :1;
volatile uint32_t UART3    :1;
volatile uint32_t UART4    :1;
volatile uint32_t UART5    :1;
volatile uint32_t UART6    :1;
volatile uint32_t UART7    :1;
volatile uint32_t res     :24;
}RCGUART_t;


#define SYSCTL_RCGUART_OFFSET     (0x0618)
#define SYSCTL_RCGUART            (((RCGUART_t*)(SYSCTL_BASE+SYSCTL_RCGUART_OFFSET )))
#define SYSCTL_RCGUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGUART_OFFSET)))

#define SYSCTL_RCGUART_R_UART0    (0x00000001)
#define SYSCTL_RCGUART_R_UART1    (0x00000002)
#define SYSCTL_RCGUART_R_UART2    (0x00000004)
#define SYSCTL_RCGUART_R_UART3    (0x00000008)
#define SYSCTL_RCGUART_R_UART4    (0x00000010)
#define SYSCTL_RCGUART_R_UART5    (0x00000020)
#define SYSCTL_RCGUART_R_UART6    (0x00000040)
#define SYSCTL_RCGUART_R_UART7    (0x00000080)

#define SYSCTL_RCGUART_UART0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGUART_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGUART_UART1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGUART_OFFSET)*32)+(1*4))))
#define SYSCTL_RCGUART_UART2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGUART_OFFSET)*32)+(2*4))))
#define SYSCTL_RCGUART_UART3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGUART_OFFSET)*32)+(3*4))))
#define SYSCTL_RCGUART_UART4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGUART_OFFSET)*32)+(4*4))))
#define SYSCTL_RCGUART_UART5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGUART_OFFSET)*32)+(5*4))))
#define SYSCTL_RCGUART_UART6_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGUART_OFFSET)*32)+(6*4))))
#define SYSCTL_RCGUART_UART7_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGUART_OFFSET)*32)+(7*4))))


******************************************************************************************
************************************64 RCGSSI *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t SSI0    :1;
volatile uint32_t SSI1    :1;
volatile uint32_t SSI2    :1;
volatile uint32_t SSI3    :1;
volatile uint32_t res     :28;
}RCGSSI_t;


#define SYSCTL_RCGSSI_OFFSET     (0x061C)
#define SYSCTL_RCGSSI            (((RCGSSI_t*)(SYSCTL_BASE+SYSCTL_RCGSSI_OFFSET )))
#define SYSCTL_RCGSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGSSI_OFFSET)))

#define SYSCTL_RCGSSI_R_SSI0    (0x00000001)
#define SYSCTL_RCGSSI_R_SSI1    (0x00000002)
#define SYSCTL_RCGSSI_R_SSI2    (0x00000004)
#define SYSCTL_RCGSSI_R_SSI3    (0x00000008)


#define SYSCTL_RCGSSI_SSI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGSSI_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGSSI_SSI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGSSI_OFFSET)*32)+(1*4))))
#define SYSCTL_RCGSSI_SSI2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGSSI_OFFSET)*32)+(2*4))))
#define SYSCTL_RCGSSI_SSI3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGSSI_OFFSET)*32)+(3*4))))


******************************************************************************************
************************************65 RCGI2C *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t I2C0    :1;
volatile uint32_t I2C1    :1;
volatile uint32_t I2C2    :1;
volatile uint32_t I2C3    :1;
volatile uint32_t I2C4    :1;
volatile uint32_t I2C5    :1;
volatile uint32_t res     :26;
}RCGI2C_t;


#define SYSCTL_RCGI2C_OFFSET     (0x0620)
#define SYSCTL_RCGI2C            (((RCGI2C_t*)(SYSCTL_BASE+SYSCTL_RCGI2C_OFFSET )))
#define SYSCTL_RCGI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGI2C_OFFSET)))

#define SYSCTL_RCGI2C_R_I2C0    (0x00000001)
#define SYSCTL_RCGI2C_R_I2C1    (0x00000002)
#define SYSCTL_RCGI2C_R_I2C2    (0x00000004)
#define SYSCTL_RCGI2C_R_I2C3    (0x00000008)
#define SYSCTL_RCGI2C_R_I2C4    (0x00000010)
#define SYSCTL_RCGI2C_R_I2C5    (0x00000020)


#define SYSCTL_RCGI2C_I2C0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGI2C_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGI2C_I2C1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGI2C_OFFSET)*32)+(1*4))))
#define SYSCTL_RCGI2C_I2C2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGI2C_OFFSET)*32)+(2*4))))
#define SYSCTL_RCGI2C_I2C3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGI2C_OFFSET)*32)+(3*4))))
#define SYSCTL_RCGI2C_I2C4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGI2C_OFFSET)*32)+(4*4))))
#define SYSCTL_RCGI2C_I2C5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGI2C_OFFSET)*32)+(5*4))))



******************************************************************************************
************************************66 RCGUSB *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t USB    :1;
volatile uint32_t res     :31;
}RCGUSB_t;


#define SYSCTL_RCGUSB_OFFSET     (0x0628)
#define SYSCTL_RCGUSB            (((RCGUSB_t*)(SYSCTL_BASE+SYSCTL_RCGUSB_OFFSET )))
#define SYSCTL_RCGUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGUSB_OFFSET)))

#define SYSCTL_RCGUSB_R_USB   (0x00000001)
#define SYSCTL_RCGUSB_USB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGUSB_OFFSET)*32)+(0*4))))

******************************************************************************************
************************************67 RCGCAN *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t CAN0    :1;
volatile uint32_t CAN1    :1;
volatile uint32_t res     :30;
}RCGCAN_t;


#define SYSCTL_RCGCAN_OFFSET     (0x0634)
#define SYSCTL_RCGCAN            (((RCGCAN_t*)(SYSCTL_BASE+SYSCTL_RCGCAN_OFFSET )))
#define SYSCTL_RCGCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGCAN_OFFSET)))

#define SYSCTL_RCGCAN_R_CAN0   (0x00000001)
#define SYSCTL_RCGCAN_R_CAN1   (0x00000002)

#define SYSCTL_RCGCAN_CAN0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCAN_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGCAN_CAN1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGCAN_OFFSET)*32)+(1*4))))

******************************************************************************************
************************************68 RCGADC *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t ADC0    :1;
volatile uint32_t ADC1    :1;
volatile uint32_t res     :30;
}RCGADC_t;


#define SYSCTL_RCGADC_OFFSET     (0x0638)
#define SYSCTL_RCGADC            (((RCGADC_t*)(SYSCTL_BASE+SYSCTL_RCGADC_OFFSET )))
#define SYSCTL_RCGADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGADC_OFFSET)))

#define SYSCTL_RCGADC_R_ADC0   (0x00000001)
#define SYSCTL_RCGADC_R_ADC1   (0x00000002)
#define SYSCTL_RCGADC_ADC0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGADC_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGADC_ADC1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGADC_OFFSET)*32)+(1*4))))


******************************************************************************************
************************************69 RCGACMP *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t ACMP    :1;
volatile uint32_t res     :30;
}RCGACMP_t;


#define SYSCTL_RCGACMP_OFFSET     (0x063C)
#define SYSCTL_RCGACMP            (((RCGACMP_t*)(SYSCTL_BASE+SYSCTL_RCGACMP_OFFSET )))
#define SYSCTL_RCGACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGACMP_OFFSET)))

#define SYSCTL_RCGACMP_R_ACMP   (0x00000001)
#define SYSCTL_RCGACMP_ACMP_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGACMP_OFFSET)*32)+(0*4))))

******************************************************************************************
************************************70 RCGPWM *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t PWM0    :1;
volatile uint32_t PWM1    :1;
volatile uint32_t res     :30;
}RCGPWM_t;


#define SYSCTL_RCGPWM_OFFSET     (0x0640)
#define SYSCTL_RCGPWM            (((RCGPWM_t*)(SYSCTL_BASE+SYSCTL_RCGPWM_OFFSET )))
#define SYSCTL_RCGPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGPWM_OFFSET)))

#define SYSCTL_RCGPWM_R_PWM0   (0x00000001)
#define SYSCTL_RCGPWM_R_PWM1   (0x00000002)
#define SYSCTL_RCGPWM_PWM0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGPWM_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGPWM_PWM1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGPWM_OFFSET)*32)+(1*4))))

******************************************************************************************
************************************71 RCGQEI *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t QEI0    :1;
volatile uint32_t QEI1    :1;
volatile uint32_t res     :30;
}RCGQEI_t;


#define SYSCTL_RCGQEI_OFFSET     (0x0644)
#define SYSCTL_RCGQEI            (((RCGQEI_t*)(SYSCTL_BASE+SYSCTL_RCGQEI_OFFSET )))
#define SYSCTL_RCGQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGQEI_OFFSET)))

#define SYSCTL_RCGQEI_R_QEI0   (0x00000001)
#define SYSCTL_RCGQEI_R_QEI1   (0x00000002)


#define SYSCTL_RCGQEI_QEI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGQEI_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGQEI_QEI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGQEI_OFFSET)*32)+(1*4))))


******************************************************************************************
************************************72 RCGEEPROM *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t EEPROM    :1;
volatile uint32_t res     :30;
}RCGEEPROM_t;


#define SYSCTL_RCGEEPROM_OFFSET     (0x0658)
#define SYSCTL_RCGEEPROM            (((RCGEEPROM_t*)(SYSCTL_BASE+SYSCTL_RCGEEPROM_OFFSET )))
#define SYSCTL_RCGEEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGEEPROM_OFFSET)))

#define SYSCTL_RCGEEPROM_R_EERPOM   (0x00000001)
#define SYSCTL_RCGEEPROM_EEPROM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGEEPROM_OFFSET)*32)+(0*4))))


******************************************************************************************
************************************73 RCGWTIMER *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t WTIMER0   :1;
volatile uint32_t WTIMER1   :1;
volatile uint32_t WTIMER2   :1;
volatile uint32_t WTIMER3   :1;
volatile uint32_t WTIMER4   :1;
volatile uint32_t WTIMER5   :1;
volatile uint32_t res      :26;
}RCGWTIMER_t;


#define SYSCTL_RCGWTIMER_OFFSET     (0x065C)
#define SYSCTL_RCGWTIMER            (((RCGWTIMER_t*)(SYSCTL_BASE+SYSCTL_RCGWTIMER_OFFSET )))
#define SYSCTL_RCGWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_RCGWTIMER_OFFSET)))

#define SYSCTL_RCGWTIMER_R_WTIMER0     (0x00000001)
#define SYSCTL_RCGWTIMER_R_WTIMER1     (0x00000002)
#define SYSCTL_RCGWTIMER_R_WTIMER2     (0x00000004)
#define SYSCTL_RCGWTIMER_R_WTIMER3     (0x00000008)
#define SYSCTL_RCGWTIMER_R_WTIMER4     (0x00000010)
#define SYSCTL_RCGWTIMER_R_WTIMER5     (0x00000020)

#define SYSCTL_RCGWTIMER_WTIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGWTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_RCGWTIMER_WTIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGWTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_RCGWTIMER_WTIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGWTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_RCGWTIMER_WTIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGWTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_RCGWTIMER_WTIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGWTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_RCGWTIMER_WTIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_RCGWTIMER_OFFSET)*32)+(5*4))))



******************************************************************************************
************************************74 SCGCWD *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t WDT0   :1;
volatile uint32_t WDT1   :1;
volatile uint32_t res  :30;
}SCGCWD_t;


#define SYSCTL_SCGCWD_OFFSET     (0x0700)
#define SYSCTL_SCGCWD            (((SCGCWD_t*)(SYSCTL_BASE+SYSCTL_SCGCWD_OFFSET )))
#define SYSCTL_SCGCWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCWD_OFFSET)))

#define SYSCTL_SCGCWD_R_WDT0     (0x00000001)
#define SYSCTL_SCGCWD_R_WDT1     (0x00000002)

#define SYSCTL_SCGCWD_WDT0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCWD_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCWD_WDT1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCWD_OFFSET)*32)+(1*4))))


******************************************************************************************
************************************75 SCGCTIMER *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t TIMER0   :1;
volatile uint32_t TIMER1   :1;
volatile uint32_t TIMER2   :1;
volatile uint32_t TIMER3   :1;
volatile uint32_t TIMER4   :1;
volatile uint32_t TIMER5   :1;
volatile uint32_t res      :26;
}SCGCTIMER_t;


#define SYSCTL_SCGCTIMER_OFFSET     (0x0704)
#define SYSCTL_SCGCTIMER            (((SCGCTIMER_t*)(SYSCTL_BASE+SYSCTL_SCGCTIMER_OFFSET )))
#define SYSCTL_SCGCTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCTIMER_OFFSET)))

#define SYSCTL_SCGCTIMER_R_TIMER0     (0x00000001)
#define SYSCTL_SCGCTIMER_R_TIMER1     (0x00000002)
#define SYSCTL_SCGCTIMER_R_TIMER2     (0x00000004)
#define SYSCTL_SCGCTIMER_R_TIMER3     (0x00000008)
#define SYSCTL_SCGCTIMER_R_TIMER4     (0x00000010)
#define SYSCTL_SCGCTIMER_R_TIMER5     (0x00000020)



#define SYSCTL_SCGCTIMER_TIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCTIMER_TIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_SCGCTIMER_TIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_SCGCTIMER_TIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_SCGCTIMER_TIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_SCGCTIMER_TIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCTIMER_OFFSET)*32)+(5*4))))



******************************************************************************************
************************************76 SCGCGPIO *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t GPIOA   :1;
volatile uint32_t GPIOB   :1;
volatile uint32_t GPIOC   :1;
volatile uint32_t GPIOD   :1;
volatile uint32_t GPIOE   :1;
volatile uint32_t GPIOF   :1;
volatile uint32_t GPIOG   :1;
volatile uint32_t GPIOH   :1;
volatile uint32_t GPIOJ   :1;
volatile uint32_t GPIOK   :1;
volatile uint32_t GPIOL   :1;
volatile uint32_t GPIOM   :1;
volatile uint32_t GPION   :1;
volatile uint32_t GPIOP   :1;
volatile uint32_t GPIOQ   :1;
volatile uint32_t res     :17;
}SCGCGPIO_t;


#define SYSCTL_SCGCGPIO_OFFSET     (0x0708)
#define SYSCTL_SCGCGPIO            (((SCGCGPIO_t*)(SYSCTL_BASE+SYSCTL_SCGCGPIO_OFFSET )))
#define SYSCTL_SCGCGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCGPIO_OFFSET)))

#define SYSCTL_SCGCGPIO_R_GPIOA     (0x00000001)
#define SYSCTL_SCGCGPIO_R_GPIOB     (0x00000002)
#define SYSCTL_SCGCGPIO_R_GPIOC     (0x00000004)
#define SYSCTL_SCGCGPIO_R_GPIOD     (0x00000008)
#define SYSCTL_SCGCGPIO_R_GPIOE     (0x00000010)
#define SYSCTL_SCGCGPIO_R_GPIOF     (0x00000020)
#define SYSCTL_SCGCGPIO_R_GPIOG     (0x00000040)
#define SYSCTL_SCGCGPIO_R_GPIOH     (0x00000080)
#define SYSCTL_SCGCGPIO_R_GPIOJ     (0x00000100)
#define SYSCTL_SCGCGPIO_R_GPIOK     (0x00000200)
#define SYSCTL_SCGCGPIO_R_GPIOL     (0x00000400)
#define SYSCTL_SCGCGPIO_R_GPIOM     (0x00000800)
#define SYSCTL_SCGCGPIO_R_GPION     (0x00001000)
#define SYSCTL_SCGCGPIO_R_GPIOP     (0x00002000)
#define SYSCTL_SCGCGPIO_R_GPIOQ     (0x00004000)

#define SYSCTL_SCGCGPIO_GPIOA_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCGPIO_GPIOB_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(1*4))))
#define SYSCTL_SCGCGPIO_GPIOC_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(2*4))))
#define SYSCTL_SCGCGPIO_GPIOD_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(3*4))))
#define SYSCTL_SCGCGPIO_GPIOE_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(4*4))))
#define SYSCTL_SCGCGPIO_GPIOF_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(5*4))))
#define SYSCTL_SCGCGPIO_GPIOG_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(6*4))))
#define SYSCTL_SCGCGPIO_GPIOH_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(7*4))))
#define SYSCTL_SCGCGPIO_GPIOJ_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(8*4))))
#define SYSCTL_SCGCGPIO_GPIOK_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(9*4))))
#define SYSCTL_SCGCGPIO_GPIOL_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(10*4))))
#define SYSCTL_SCGCGPIO_GPIOM_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(11*4))))
#define SYSCTL_SCGCGPIO_GPION_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(12*4))))
#define SYSCTL_SCGCGPIO_GPIOP_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(13*4))))
#define SYSCTL_SCGCGPIO_GPIOQ_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCGPIO_OFFSET)*32)+(14*4))))


******************************************************************************************
************************************77 SCGCDMA *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t UDMA    :1;
volatile uint32_t res     :31;
}SCGCDMA_t;


#define SYSCTL_SCGCDMA_OFFSET     (0x070C)
#define SYSCTL_SCGCDMA            (((SCGCDMA_t*)(SYSCTL_BASE+SYSCTL_SCGCDMA_OFFSET )))
#define SYSCTL_SCGCDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCDMA_OFFSET)))

#define SYSCTL_SCGCDMA_R_UDMA    (0x00000001)

#define SYSCTL_SCGCDMA_UDMA_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCDMA_OFFSET)*32)+(0*4))))


******************************************************************************************
************************************78 SCGCHIB *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t HIB    :1;
volatile uint32_t res     :31;
}SCGCHIB_t;


#define SYSCTL_SCGCHIB_OFFSET     (0x0714)
#define SYSCTL_SCGCHIB            (((SCGCHIB_t*)(SYSCTL_BASE+SYSCTL_SCGCHIB_OFFSET )))
#define SYSCTL_SCGCHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCHIB_OFFSET)))

#define SYSCTL_SCGCHIB_R_HIB    (0x00000001)
#define SYSCTL_SCGCHIB_HIB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCHIB_OFFSET)*32)+(0*4))))


******************************************************************************************
************************************79 SCGCUART *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t UART0    :1;
volatile uint32_t UART1    :1;
volatile uint32_t UART2    :1;
volatile uint32_t UART3    :1;
volatile uint32_t UART4    :1;
volatile uint32_t UART5    :1;
volatile uint32_t UART6    :1;
volatile uint32_t UART7    :1;
volatile uint32_t res     :24;
}SCGCUART_t;


#define SYSCTL_SCGCUART_OFFSET     (0x0718)
#define SYSCTL_SCGCUART            (((SCGCUART_t*)(SYSCTL_BASE+SYSCTL_SCGCUART_OFFSET )))
#define SYSCTL_SCGCUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCUART_OFFSET)))

#define SYSCTL_SCGCUART_R_UART0    (0x00000001)
#define SYSCTL_SCGCUART_R_UART1    (0x00000002)
#define SYSCTL_SCGCUART_R_UART2    (0x00000004)
#define SYSCTL_SCGCUART_R_UART3    (0x00000008)
#define SYSCTL_SCGCUART_R_UART4    (0x00000010)
#define SYSCTL_SCGCUART_R_UART5    (0x00000020)
#define SYSCTL_SCGCUART_R_UART6    (0x00000040)
#define SYSCTL_SCGCUART_R_UART7    (0x00000080)

#define SYSCTL_SCGCUART_UART0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCUART_UART1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(1*4))))
#define SYSCTL_SCGCUART_UART2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(2*4))))
#define SYSCTL_SCGCUART_UART3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(3*4))))
#define SYSCTL_SCGCUART_UART4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(4*4))))
#define SYSCTL_SCGCUART_UART5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(5*4))))
#define SYSCTL_SCGCUART_UART6_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(6*4))))
#define SYSCTL_SCGCUART_UART7_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCUART_OFFSET)*32)+(7*4))))


******************************************************************************************
************************************80 SCGCSSI *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t SSI0    :1;
volatile uint32_t SSI1    :1;
volatile uint32_t SSI2    :1;
volatile uint32_t SSI3    :1;
volatile uint32_t res     :28;
}SCGCSSI_t;


#define SYSCTL_SCGCSSI_OFFSET     (0x071C)
#define SYSCTL_SCGCSSI            (((SCGCSSI_t*)(SYSCTL_BASE+SYSCTL_SCGCSSI_OFFSET )))
#define SYSCTL_SCGCSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCSSI_OFFSET)))

#define SYSCTL_SCGCSSI_R_SSI0    (0x00000001)
#define SYSCTL_SCGCSSI_R_SSI1    (0x00000002)
#define SYSCTL_SCGCSSI_R_SSI2    (0x00000004)
#define SYSCTL_SCGCSSI_R_SSI3    (0x00000008)


#define SYSCTL_SCGCSSI_SSI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCSSI_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCSSI_SSI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCSSI_OFFSET)*32)+(1*4))))
#define SYSCTL_SCGCSSI_SSI2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCSSI_OFFSET)*32)+(2*4))))
#define SYSCTL_SCGCSSI_SSI3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCSSI_OFFSET)*32)+(3*4))))

******************************************************************************************
************************************81 SCGCI2C *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t I2C0    :1;
volatile uint32_t I2C1    :1;
volatile uint32_t I2C2    :1;
volatile uint32_t I2C3    :1;
volatile uint32_t I2C4    :1;
volatile uint32_t I2C5    :1;
volatile uint32_t res     :26;
}SCGCI2C_t;


#define SYSCTL_SCGCI2C_OFFSET     (0x0720)
#define SYSCTL_SCGCI2C            (((SCGCI2C_t*)(SYSCTL_BASE+SYSCTL_SCGCI2C_OFFSET )))
#define SYSCTL_SCGCI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCI2C_OFFSET)))

#define SYSCTL_SCGCI2C_R_I2C0    (0x00000001)
#define SYSCTL_SCGCI2C_R_I2C1    (0x00000002)
#define SYSCTL_SCGCI2C_R_I2C2    (0x00000004)
#define SYSCTL_SCGCI2C_R_I2C3    (0x00000008)
#define SYSCTL_SCGCI2C_R_I2C4    (0x00000010)
#define SYSCTL_SCGCI2C_R_I2C5    (0x00000020)


#define SYSCTL_SCGCI2C_I2C0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCI2C_I2C1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32)+(1*4))))
#define SYSCTL_SCGCI2C_I2C2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32)+(2*4))))
#define SYSCTL_SCGCI2C_I2C3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32)+(3*4))))
#define SYSCTL_SCGCI2C_I2C4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32)+(4*4))))
#define SYSCTL_SCGCI2C_I2C5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCI2C_OFFSET)*32)+(5*4))))



******************************************************************************************
************************************82 SCGCUSB *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t USB    :1;
volatile uint32_t res     :31;
}SCGCUSB_t;


#define SYSCTL_SCGCUSB_OFFSET     (0x0728)
#define SYSCTL_SCGCUSB            (((SCGCUSB_t*)(SYSCTL_BASE+SYSCTL_SCGCUSB_OFFSET )))
#define SYSCTL_SCGCUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCUSB_OFFSET)))

#define SYSCTL_SCGCUSB_R_USB   (0x00000001)
#define SYSCTL_SCGCUSB_USB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCUSB_OFFSET)*32)+(0*4))))

******************************************************************************************
************************************83 SCGCCAN *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t CAN0    :1;
volatile uint32_t CAN1    :1;
volatile uint32_t res     :30;
}SCGCCAN_t;


#define SYSCTL_SCGCCAN_OFFSET     (0x0734)
#define SYSCTL_SCGCCAN            (((SCGCCAN_t*)(SYSCTL_BASE+SYSCTL_SCGCCAN_OFFSET )))
#define SYSCTL_SCGCCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCCAN_OFFSET)))

#define SYSCTL_SCGCCAN_R_CAN0   (0x00000001)
#define SYSCTL_SCGCCAN_R_CAN1   (0x00000002)

#define SYSCTL_SCGCCAN_CAN0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCCAN_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCCAN_CAN1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCCAN_OFFSET)*32)+(1*4))))

******************************************************************************************
************************************84 SCGCADC *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t ADC0    :1;
volatile uint32_t ADC1    :1;
volatile uint32_t res     :30;
}SCGCADC_t;


#define SYSCTL_SCGCADC_OFFSET     (0x0738)
#define SYSCTL_SCGCADC            (((SCGCADC_t*)(SYSCTL_BASE+SYSCTL_SCGCADC_OFFSET )))
#define SYSCTL_SCGCADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCADC_OFFSET)))

#define SYSCTL_SCGCADC_R_ADC0   (0x00000001)
#define SYSCTL_SCGCADC_R_ADC1   (0x00000002)
#define SYSCTL_SCGCADC_ADC0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCADC_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCADC_ADC1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCADC_OFFSET)*32)+(1*4))))


******************************************************************************************
************************************85 SCGCACMP *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t ACMP    :1;
volatile uint32_t res     :30;
}SCGCACMP_t;


#define SYSCTL_SCGCACMP_OFFSET     (0x073C)
#define SYSCTL_SCGCACMP            (((SCGCACMP_t*)(SYSCTL_BASE+SYSCTL_SCGCACMP_OFFSET )))
#define SYSCTL_SCGCACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCACMP_OFFSET)))

#define SYSCTL_SCGCACMP_R_ACMP   (0x00000001)
#define SYSCTL_SCGCACMP_ACMP_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCACMP_OFFSET)*32)+(0*4))))

******************************************************************************************
************************************86 SCGCPWM *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t PWM0    :1;
volatile uint32_t PWM1    :1;
volatile uint32_t res     :30;
}SCGCPWM_t;


#define SYSCTL_SCGCPWM_OFFSET     (0x0740)
#define SYSCTL_SCGCPWM            (((SCGCPWM_t*)(SYSCTL_BASE+SYSCTL_SCGCPWM_OFFSET )))
#define SYSCTL_SCGCPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCPWM_OFFSET)))

#define SYSCTL_SCGCPWM_R_PWM0   (0x00000001)
#define SYSCTL_SCGCPWM_R_PWM1   (0x00000002)
#define SYSCTL_SCGCPWM_PWM0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCPWM_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCPWM_PWM1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCPWM_OFFSET)*32)+(1*4))))

******************************************************************************************
************************************87 SCGCQEI *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t QEI0    :1;
volatile uint32_t QEI1    :1;
volatile uint32_t res     :30;
}SCGCQEI_t;


#define SYSCTL_SCGCQEI_OFFSET     (0x0744)
#define SYSCTL_SCGCQEI            (((SCGCQEI_t*)(SYSCTL_BASE+SYSCTL_SCGCQEI_OFFSET )))
#define SYSCTL_SCGCQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCQEI_OFFSET)))

#define SYSCTL_SCGCQEI_R_QEI0   (0x00000001)
#define SYSCTL_SCGCQEI_R_QEI1   (0x00000002)


#define SYSCTL_SCGCQEI_QEI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCQEI_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCQEI_QEI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCQEI_OFFSET)*32)+(1*4))))


******************************************************************************************
************************************88 SCGCEEPROM *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t EEPROM    :1;
volatile uint32_t res     :30;
}SCGCEEPROM_t;


#define SYSCTL_SCGCEEPROM_OFFSET     (0x0758)
#define SYSCTL_SCGCEEPROM            (((SCGCEEPROM_t*)(SYSCTL_BASE+SYSCTL_SCGCEEPROM_OFFSET )))
#define SYSCTL_SCGCEEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCEEPROM_OFFSET)))

#define SYSCTL_SCGCEEPROM_R_EERPOM   (0x00000001)
#define SYSCTL_SCGCEEPROM_EEPROM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCEEPROM_OFFSET)*32)+(0*4))))


******************************************************************************************
************************************89 SCGCWTIMER *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t WTIMER0   :1;
volatile uint32_t WTIMER1   :1;
volatile uint32_t WTIMER2   :1;
volatile uint32_t WTIMER3   :1;
volatile uint32_t WTIMER4   :1;
volatile uint32_t WTIMER5   :1;
volatile uint32_t res      :26;
}SCGCWTIMER_t;


#define SYSCTL_SCGCWTIMER_OFFSET     (0x075C)
#define SYSCTL_SCGCWTIMER            (((SCGCWTIMER_t*)(SYSCTL_BASE+SYSCTL_SCGCWTIMER_OFFSET )))
#define SYSCTL_SCGCWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_SCGCWTIMER_OFFSET)))

#define SYSCTL_SCGCWTIMER_R_WTIMER0     (0x00000001)
#define SYSCTL_SCGCWTIMER_R_WTIMER1     (0x00000002)
#define SYSCTL_SCGCWTIMER_R_WTIMER2     (0x00000004)
#define SYSCTL_SCGCWTIMER_R_WTIMER3     (0x00000008)
#define SYSCTL_SCGCWTIMER_R_WTIMER4     (0x00000010)
#define SYSCTL_SCGCWTIMER_R_WTIMER5     (0x00000020)




#define SYSCTL_SCGCWTIMER_WTIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_SCGCWTIMER_WTIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_SCGCWTIMER_WTIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_SCGCWTIMER_WTIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_SCGCWTIMER_WTIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_SCGCWTIMER_WTIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_SCGCWTIMER_OFFSET)*32)+(5*4))))







******************************************************************************************
************************************90 DCGCWD *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t WDT0   :1;
volatile uint32_t WDT1   :1;
volatile uint32_t res  :30;
}DCGCWD_t;


#define SYSCTL_DCGCWD_OFFSET     (0X0800)
#define SYSCTL_DCGCWD            (((DCGCWD_t*)(SYSCTL_BASE+SYSCTL_DCGCWD_OFFSET )))
#define SYSCTL_DCGCWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCWD_OFFSET)))

#define SYSCTL_DCGCWD_R_WDT0     (0x00000001)
#define SYSCTL_DCGCWD_R_WDT1     (0x00000002)

#define SYSCTL_DCGCWD_WDT0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCWD_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCWD_WDT1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCWD_OFFSET)*32)+(1*4))))


******************************************************************************************
************************************91 DCGCTIMER *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t TIMER0   :1;
volatile uint32_t TIMER1   :1;
volatile uint32_t TIMER2   :1;
volatile uint32_t TIMER3   :1;
volatile uint32_t TIMER4   :1;
volatile uint32_t TIMER5   :1;
volatile uint32_t res      :26;
}DCGCTIMER_t;


#define SYSCTL_DCGCTIMER_OFFSET     (0X0804)
#define SYSCTL_DCGCTIMER            (((DCGCTIMER_t*)(SYSCTL_BASE+SYSCTL_DCGCTIMER_OFFSET )))
#define SYSCTL_DCGCTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCTIMER_OFFSET)))

#define SYSCTL_DCGCTIMER_R_TIMER0     (0x00000001)
#define SYSCTL_DCGCTIMER_R_TIMER1     (0x00000002)
#define SYSCTL_DCGCTIMER_R_TIMER2     (0x00000004)
#define SYSCTL_DCGCTIMER_R_TIMER3     (0x00000008)
#define SYSCTL_DCGCTIMER_R_TIMER4     (0x00000010)
#define SYSCTL_DCGCTIMER_R_TIMER5     (0x00000020)


#define SYSCTL_DCGCTIMER_TIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCTIMER_TIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_DCGCTIMER_TIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_DCGCTIMER_TIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_DCGCTIMER_TIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_DCGCTIMER_TIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCTIMER_OFFSET)*32)+(5*4))))

******************************************************************************************
************************************92 DCGCGPIO *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t GPIOA   :1;
volatile uint32_t GPIOB   :1;
volatile uint32_t GPIOC   :1;
volatile uint32_t GPIOD   :1;
volatile uint32_t GPIOE   :1;
volatile uint32_t GPIOF   :1;
volatile uint32_t GPIOG   :1;
volatile uint32_t GPIOH   :1;
volatile uint32_t GPIOJ   :1;
volatile uint32_t GPIOK   :1;
volatile uint32_t GPIOL   :1;
volatile uint32_t GPIOM   :1;
volatile uint32_t GPION   :1;
volatile uint32_t GPIOP   :1;
volatile uint32_t GPIOQ   :1;
volatile uint32_t res     :17;
}DCGCGPIO_t;


#define SYSCTL_DCGCGPIO_OFFSET     (0X0808)
#define SYSCTL_DCGCGPIO            (((DCGCGPIO_t*)(SYSCTL_BASE+SYSCTL_DCGCGPIO_OFFSET )))
#define SYSCTL_DCGCGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCGPIO_OFFSET)))

#define SYSCTL_DCGCGPIO_R_GPIOA     (0x00000001)
#define SYSCTL_DCGCGPIO_R_GPIOB     (0x00000002)
#define SYSCTL_DCGCGPIO_R_GPIOC     (0x00000004)
#define SYSCTL_DCGCGPIO_R_GPIOD     (0x00000008)
#define SYSCTL_DCGCGPIO_R_GPIOE     (0x00000010)
#define SYSCTL_DCGCGPIO_R_GPIOF     (0x00000020)
#define SYSCTL_DCGCGPIO_R_GPIOG     (0x00000040)
#define SYSCTL_DCGCGPIO_R_GPIOH     (0x00000080)
#define SYSCTL_DCGCGPIO_R_GPIOJ     (0x00000100)
#define SYSCTL_DCGCGPIO_R_GPIOK     (0x00000200)
#define SYSCTL_DCGCGPIO_R_GPIOL     (0x00000400)
#define SYSCTL_DCGCGPIO_R_GPIOM     (0x00000800)
#define SYSCTL_DCGCGPIO_R_GPION     (0x00001000)
#define SYSCTL_DCGCGPIO_R_GPIOP     (0x00002000)
#define SYSCTL_DCGCGPIO_R_GPIOQ     (0x00004000)

#define SYSCTL_DCGCGPIO_GPIOA_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCGPIO_GPIOB_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(1*4))))
#define SYSCTL_DCGCGPIO_GPIOC_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(2*4))))
#define SYSCTL_DCGCGPIO_GPIOD_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(3*4))))
#define SYSCTL_DCGCGPIO_GPIOE_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(4*4))))
#define SYSCTL_DCGCGPIO_GPIOF_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(5*4))))
#define SYSCTL_DCGCGPIO_GPIOG_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(6*4))))
#define SYSCTL_DCGCGPIO_GPIOH_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(7*4))))
#define SYSCTL_DCGCGPIO_GPIOJ_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(8*4))))
#define SYSCTL_DCGCGPIO_GPIOK_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(9*4))))
#define SYSCTL_DCGCGPIO_GPIOL_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(10*4))))
#define SYSCTL_DCGCGPIO_GPIOM_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(11*4))))
#define SYSCTL_DCGCGPIO_GPION_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(12*4))))
#define SYSCTL_DCGCGPIO_GPIOP_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(13*4))))
#define SYSCTL_DCGCGPIO_GPIOQ_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCGPIO_OFFSET)*32)+(14*4))))


******************************************************************************************
************************************93 DCGCDMA *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t UDMA    :1;
volatile uint32_t res     :31;
}DCGCDMA_t;


#define SYSCTL_DCGCDMA_OFFSET     (0X080C)
#define SYSCTL_DCGCDMA            (((DCGCDMA_t*)(SYSCTL_BASE+SYSCTL_DCGCDMA_OFFSET )))
#define SYSCTL_DCGCDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCDMA_OFFSET)))

#define SYSCTL_DCGCDMA_R_UDMA    (0x00000001)
#define SYSCTL_DCGCDMA_UDMA_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCDMA_OFFSET)*32)+(0*4))))



******************************************************************************************
************************************94 DCGCHIB *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t HIB    :1;
volatile uint32_t res     :31;
}DCGCHIB_t;


#define SYSCTL_DCGCHIB_OFFSET     (0X0814)
#define SYSCTL_DCGCHIB            (((DCGCHIB_t*)(SYSCTL_BASE+SYSCTL_DCGCHIB_OFFSET )))
#define SYSCTL_DCGCHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCHIB_OFFSET)))

#define SYSCTL_DCGCHIB_R_HIB    (0x00000001)
#define SYSCTL_DCGCHIB_HIB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCHIB_OFFSET)*32)+(0*4))))


******************************************************************************************
************************************95 DCGCUART *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t UART0    :1;
volatile uint32_t UART1    :1;
volatile uint32_t UART2    :1;
volatile uint32_t UART3    :1;
volatile uint32_t UART4    :1;
volatile uint32_t UART5    :1;
volatile uint32_t UART6    :1;
volatile uint32_t UART7    :1;
volatile uint32_t res     :24;
}DCGCUART_t;


#define SYSCTL_DCGCUART_OFFSET     (0X0818)
#define SYSCTL_DCGCUART            (((DCGCUART_t*)(SYSCTL_BASE+SYSCTL_DCGCUART_OFFSET )))
#define SYSCTL_DCGCUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCUART_OFFSET)))

#define SYSCTL_DCGCUART_R_UART0    (0x00000001)
#define SYSCTL_DCGCUART_R_UART1    (0x00000002)
#define SYSCTL_DCGCUART_R_UART2    (0x00000004)
#define SYSCTL_DCGCUART_R_UART3    (0x00000008)
#define SYSCTL_DCGCUART_R_UART4    (0x00000010)
#define SYSCTL_DCGCUART_R_UART5    (0x00000020)
#define SYSCTL_DCGCUART_R_UART6    (0x00000040)
#define SYSCTL_DCGCUART_R_UART7    (0x00000080)


#define SYSCTL_DCGCUART_UART0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCUART_UART1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(1*4))))
#define SYSCTL_DCGCUART_UART2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(2*4))))
#define SYSCTL_DCGCUART_UART3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(3*4))))
#define SYSCTL_DCGCUART_UART4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(4*4))))
#define SYSCTL_DCGCUART_UART5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(5*4))))
#define SYSCTL_DCGCUART_UART6_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(6*4))))
#define SYSCTL_DCGCUART_UART7_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCUART_OFFSET)*32)+(7*4))))

******************************************************************************************
************************************96 DCGCSSI *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t SSI0    :1;
volatile uint32_t SSI1    :1;
volatile uint32_t SSI2    :1;
volatile uint32_t SSI3    :1;
volatile uint32_t res     :28;
}DCGCSSI_t;


#define SYSCTL_DCGCSSI_OFFSET     (0X081C)
#define SYSCTL_DCGCSSI            (((DCGCSSI_t*)(SYSCTL_BASE+SYSCTL_DCGCSSI_OFFSET )))
#define SYSCTL_DCGCSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCSSI_OFFSET)))

#define SYSCTL_DCGCSSI_R_SSI0    (0x00000001)
#define SYSCTL_DCGCSSI_R_SSI1    (0x00000002)
#define SYSCTL_DCGCSSI_R_SSI2    (0x00000004)
#define SYSCTL_DCGCSSI_R_SSI3    (0x00000008)


#define SYSCTL_DCGCSSI_SSI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCSSI_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCSSI_SSI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCSSI_OFFSET)*32)+(1*4))))
#define SYSCTL_DCGCSSI_SSI2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCSSI_OFFSET)*32)+(2*4))))
#define SYSCTL_DCGCSSI_SSI3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCSSI_OFFSET)*32)+(3*4))))

******************************************************************************************
************************************97 DCGCI2C *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t I2C0    :1;
volatile uint32_t I2C1    :1;
volatile uint32_t I2C2    :1;
volatile uint32_t I2C3    :1;
volatile uint32_t I2C4    :1;
volatile uint32_t I2C5    :1;
volatile uint32_t res     :26;
}DCGCI2C_t;


#define SYSCTL_DCGCI2C_OFFSET     (0X0820)
#define SYSCTL_DCGCI2C            (((DCGCI2C_t*)(SYSCTL_BASE+SYSCTL_DCGCI2C_OFFSET )))
#define SYSCTL_DCGCI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCI2C_OFFSET)))

#define SYSCTL_DCGCI2C_R_I2C0    (0x00000001)
#define SYSCTL_DCGCI2C_R_I2C1    (0x00000002)
#define SYSCTL_DCGCI2C_R_I2C2    (0x00000004)
#define SYSCTL_DCGCI2C_R_I2C3    (0x00000008)
#define SYSCTL_DCGCI2C_R_I2C4    (0x00000010)
#define SYSCTL_DCGCI2C_R_I2C5    (0x00000020)



#define SYSCTL_DCGCI2C_I2C0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCI2C_I2C1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32)+(1*4))))
#define SYSCTL_DCGCI2C_I2C2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32)+(2*4))))
#define SYSCTL_DCGCI2C_I2C3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32)+(3*4))))
#define SYSCTL_DCGCI2C_I2C4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32)+(4*4))))
#define SYSCTL_DCGCI2C_I2C5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCI2C_OFFSET)*32)+(5*4))))



******************************************************************************************
************************************98 DCGCUSB *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t USB    :1;
volatile uint32_t res     :31;
}DCGCUSB_t;


#define SYSCTL_DCGCUSB_OFFSET     (0X0828)
#define SYSCTL_DCGCUSB            (((DCGCUSB_t*)(SYSCTL_BASE+SYSCTL_DCGCUSB_OFFSET )))
#define SYSCTL_DCGCUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCUSB_OFFSET)))

#define SYSCTL_DCGCUSB_R_USB   (0x00000001)
#define SYSCTL_DCGCUSB_USB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCUSB_OFFSET)*32)+(0*4))))

******************************************************************************************
************************************99 DCGCCAN *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t CAN0    :1;
volatile uint32_t CAN1    :1;
volatile uint32_t res     :30;
}DCGCCAN_t;


#define SYSCTL_DCGCCAN_OFFSET     (0X0834)
#define SYSCTL_DCGCCAN            (((DCGCCAN_t*)(SYSCTL_BASE+SYSCTL_DCGCCAN_OFFSET )))
#define SYSCTL_DCGCCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCCAN_OFFSET)))

#define SYSCTL_DCGCCAN_R_CAN0   (0x00000001)
#define SYSCTL_DCGCCAN_R_CAN1   (0x00000002)

#define SYSCTL_DCGCCAN_CAN0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCCAN_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCCAN_CAN1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCCAN_OFFSET)*32)+(1*4))))

******************************************************************************************
************************************100 DCGCADC *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t ADC0    :1;
volatile uint32_t ADC1    :1;
volatile uint32_t res     :30;
}DCGCADC_t;


#define SYSCTL_DCGCADC_OFFSET     (0X0838)
#define SYSCTL_DCGCADC            (((DCGCADC_t*)(SYSCTL_BASE+SYSCTL_DCGCADC_OFFSET )))
#define SYSCTL_DCGCADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCADC_OFFSET)))

#define SYSCTL_DCGCADC_R_ADC0   (0x00000001)
#define SYSCTL_DCGCADC_R_ADC1   (0x00000002)
#define SYSCTL_DCGCADC_ADC0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCADC_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCADC_ADC1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCADC_OFFSET)*32)+(1*4))))


******************************************************************************************
************************************101 DCGCACMP *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t ACMP    :1;
volatile uint32_t res     :30;
}DCGCACMP_t;


#define SYSCTL_DCGCACMP_OFFSET     (0X083C)
#define SYSCTL_DCGCACMP            (((DCGCACMP_t*)(SYSCTL_BASE+SYSCTL_DCGCACMP_OFFSET )))
#define SYSCTL_DCGCACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCACMP_OFFSET)))

#define SYSCTL_DCGCACMP_R_ACMP   (0x00000001)
#define SYSCTL_DCGCACMP_ACMP_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCACMP_OFFSET)*32)+(0*4))))

******************************************************************************************
************************************102 DCGCPWM *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t PWM0    :1;
volatile uint32_t PWM1    :1;
volatile uint32_t res     :30;
}DCGCPWM_t;


#define SYSCTL_DCGCPWM_OFFSET     (0X0840)
#define SYSCTL_DCGCPWM            (((DCGCPWM_t*)(SYSCTL_BASE+SYSCTL_DCGCPWM_OFFSET )))
#define SYSCTL_DCGCPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCPWM_OFFSET)))

#define SYSCTL_DCGCPWM_R_PWM0   (0x00000001)
#define SYSCTL_DCGCPWM_R_PWM1   (0x00000002)
#define SYSCTL_DCGCPWM_PWM0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCPWM_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCPWM_PWM1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCPWM_OFFSET)*32)+(1*4))))

******************************************************************************************
************************************103 DCGCQEI *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t QEI0    :1;
volatile uint32_t QEI1    :1;
volatile uint32_t res     :30;
}DCGCQEI_t;


#define SYSCTL_DCGCQEI_OFFSET     (0X0844)
#define SYSCTL_DCGCQEI            (((DCGCQEI_t*)(SYSCTL_BASE+SYSCTL_DCGCQEI_OFFSET )))
#define SYSCTL_DCGCQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCQEI_OFFSET)))

#define SYSCTL_DCGCQEI_R_QEI0   (0x00000001)
#define SYSCTL_DCGCQEI_R_QEI1   (0x00000002)


#define SYSCTL_DCGCQEI_QEI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCQEI_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCQEI_QEI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCQEI_OFFSET)*32)+(1*4))))


******************************************************************************************
************************************104 DCGCEEPROM *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t EEPROM    :1;
volatile uint32_t res     :30;
}DCGCEEPROM_t;


#define SYSCTL_DCGCEEPROM_OFFSET     (0X0858)
#define SYSCTL_DCGCEEPROM            (((DCGCEEPROM_t*)(SYSCTL_BASE+SYSCTL_DCGCEEPROM_OFFSET )))
#define SYSCTL_DCGCEEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCEEPROM_OFFSET)))

#define SYSCTL_DCGCEEPROM_R_EERPOM   (0x00000001)
#define SYSCTL_DCGCEEDCGCOM_EEDCGCOM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCEEDCGCOM_OFFSET)*32)+(0*4))))


******************************************************************************************
************************************105 DCGCWTIMER *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t WTIMER0   :1;
volatile uint32_t WTIMER1   :1;
volatile uint32_t WTIMER2   :1;
volatile uint32_t WTIMER3   :1;
volatile uint32_t WTIMER4   :1;
volatile uint32_t WTIMER5   :1;
volatile uint32_t res      :26;
}DCGCWTIMER_t;


#define SYSCTL_DCGCWTIMER_OFFSET     (0X085C)
#define SYSCTL_DCGCWTIMER            (((DCGCWTIMER_t*)(SYSCTL_BASE+SYSCTL_DCGCWTIMER_OFFSET )))
#define SYSCTL_DCGCWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_DCGCWTIMER_OFFSET)))

#define SYSCTL_DCGCWTIMER_R_WTIMER0     (0x00000001)
#define SYSCTL_DCGCWTIMER_R_WTIMER1     (0x00000002)
#define SYSCTL_DCGCWTIMER_R_WTIMER2     (0x00000004)
#define SYSCTL_DCGCWTIMER_R_WTIMER3     (0x00000008)
#define SYSCTL_DCGCWTIMER_R_WTIMER4     (0x00000010)
#define SYSCTL_DCGCWTIMER_R_WTIMER5     (0x00000020)


#define SYSCTL_DCGCWTIMER_WTIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_DCGCWTIMER_WTIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_DCGCWTIMER_WTIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_DCGCWTIMER_WTIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_DCGCWTIMER_WTIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_DCGCWTIMER_WTIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_DCGCWTIMER_OFFSET)*32)+(5*4))))





******************************************************************************************
************************************106 PRWD *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t WDT0   :1;
volatile uint32_t WDT1   :1;
volatile uint32_t res  :30;
}PRWD_t;


#define SYSCTL_PRWD_OFFSET     (0x0A00)
#define SYSCTL_PRWD            (((PRWD_t*)(SYSCTL_BASE+SYSCTL_PRWD_OFFSET )))
#define SYSCTL_PRWD_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRWD_OFFSET)))

#define SYSCTL_PRWD_R_WDT0     (0x00000001)
#define SYSCTL_PRWD_R_WDT1     (0x00000002)

#define SYSCTL_PRWD_WDT0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRWD_OFFSET)*32)+(0*4))))
#define SYSCTL_PRWD_WDT1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRWD_OFFSET)*32)+(1*4))))


******************************************************************************************
************************************107 PRTIMER *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t TIMER0   :1;
volatile uint32_t TIMER1   :1;
volatile uint32_t TIMER2   :1;
volatile uint32_t TIMER3   :1;
volatile uint32_t TIMER4   :1;
volatile uint32_t TIMER5   :1;
volatile uint32_t res      :26;
}PRTIMER_t;


#define SYSCTL_PRTIMER_OFFSET     (0x0A04)
#define SYSCTL_PRTIMER            (((PRTIMER_t*)(SYSCTL_BASE+SYSCTL_PRTIMER_OFFSET )))
#define SYSCTL_PRTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRTIMER_OFFSET)))

#define SYSCTL_PRTIMER_R_TIMER0     (0x00000001)
#define SYSCTL_PRTIMER_R_TIMER1     (0x00000002)
#define SYSCTL_PRTIMER_R_TIMER2     (0x00000004)
#define SYSCTL_PRTIMER_R_TIMER3     (0x00000008)
#define SYSCTL_PRTIMER_R_TIMER4     (0x00000010)
#define SYSCTL_PRTIMER_R_TIMER5     (0x00000020)

#define SYSCTL_PRTIMER_TIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_PRTIMER_TIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_PRTIMER_TIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_PRTIMER_TIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_PRTIMER_TIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_PRTIMER_TIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRTIMER_OFFSET)*32)+(5*4))))


******************************************************************************************
************************************108 PRGPIO *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t GPIOA   :1;
volatile uint32_t GPIOB   :1;
volatile uint32_t GPIOC   :1;
volatile uint32_t GPIOD   :1;
volatile uint32_t GPIOE   :1;
volatile uint32_t GPIOF   :1;
volatile uint32_t GPIOG   :1;
volatile uint32_t GPIOH   :1;
volatile uint32_t GPIOJ   :1;
volatile uint32_t GPIOK   :1;
volatile uint32_t GPIOL   :1;
volatile uint32_t GPIOM   :1;
volatile uint32_t GPION   :1;
volatile uint32_t GPIOP   :1;
volatile uint32_t GPIOQ   :1;
volatile uint32_t res     :17;
}PRGPIO_t;


#define SYSCTL_PRGPIO_OFFSET     (0x0A08)
#define SYSCTL_PRGPIO            (((PRGPIO_t*)(SYSCTL_BASE+SYSCTL_PRGPIO_OFFSET )))
#define SYSCTL_PRGPIO_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRGPIO_OFFSET)))

#define SYSCTL_PRGPIO_R_GPIOA     (0x00000001)
#define SYSCTL_PRGPIO_R_GPIOB     (0x00000002)
#define SYSCTL_PRGPIO_R_GPIOC     (0x00000004)
#define SYSCTL_PRGPIO_R_GPIOD     (0x00000008)
#define SYSCTL_PRGPIO_R_GPIOE     (0x00000010)
#define SYSCTL_PRGPIO_R_GPIOF     (0x00000020)
#define SYSCTL_PRGPIO_R_GPIOG     (0x00000040)
#define SYSCTL_PRGPIO_R_GPIOH     (0x00000080)
#define SYSCTL_PRGPIO_R_GPIOJ     (0x00000100)
#define SYSCTL_PRGPIO_R_GPIOK     (0x00000200)
#define SYSCTL_PRGPIO_R_GPIOL     (0x00000400)
#define SYSCTL_PRGPIO_R_GPIOM     (0x00000800)
#define SYSCTL_PRGPIO_R_GPION     (0x00001000)
#define SYSCTL_PRGPIO_R_GPIOP     (0x00002000)
#define SYSCTL_PRGPIO_R_GPIOQ     (0x00004000)

#define SYSCTL_PRGPIO_GPIOA_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(0*4))))
#define SYSCTL_PRGPIO_GPIOB_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(1*4))))
#define SYSCTL_PRGPIO_GPIOC_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(2*4))))
#define SYSCTL_PRGPIO_GPIOD_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(3*4))))
#define SYSCTL_PRGPIO_GPIOE_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(4*4))))
#define SYSCTL_PRGPIO_GPIOF_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(5*4))))
#define SYSCTL_PRGPIO_GPIOG_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(6*4))))
#define SYSCTL_PRGPIO_GPIOH_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(7*4))))
#define SYSCTL_PRGPIO_GPIOJ_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(8*4))))
#define SYSCTL_PRGPIO_GPIOK_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(9*4))))
#define SYSCTL_PRGPIO_GPIOL_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(10*4))))
#define SYSCTL_PRGPIO_GPIOM_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(11*4))))
#define SYSCTL_PRGPIO_GPION_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(12*4))))
#define SYSCTL_PRGPIO_GPIOP_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(13*4))))
#define SYSCTL_PRGPIO_GPIOQ_BITBANDING (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRGPIO_OFFSET)*32)+(14*4))))




******************************************************************************************
************************************109 PRDMA *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t UDMA    :1;
volatile uint32_t res     :31;
}PRDMA_t;


#define SYSCTL_PRDMA_OFFSET     (0x0A0C)
#define SYSCTL_PRDMA            (((PRDMA_t*)(SYSCTL_BASE+SYSCTL_PRDMA_OFFSET )))
#define SYSCTL_PRDMA_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRDMA_OFFSET)))

#define SYSCTL_PRDMA_R_UDMA    (0x00000001)
#define SYSCTL_PRDMA_UDMA_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRDMA_OFFSET)*32)+(0*4))))



******************************************************************************************
************************************110 PRHIB *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t HIB    :1;
volatile uint32_t res     :31;
}PRHIB_t;


#define SYSCTL_PRHIB_OFFSET     (0x0A14)
#define SYSCTL_PRHIB            (((PRHIB_t*)(SYSCTL_BASE+SYSCTL_PRHIB_OFFSET )))
#define SYSCTL_PRHIB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRHIB_OFFSET)))

#define SYSCTL_PRHIB_R_HIB    (0x00000001)
#define SYSCTL_PRHIB_HIB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRHIB_OFFSET)*32)+(0*4))))


******************************************************************************************
************************************111 PRUART *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t UART0    :1;
volatile uint32_t UART1    :1;
volatile uint32_t UART2    :1;
volatile uint32_t UART3    :1;
volatile uint32_t UART4    :1;
volatile uint32_t UART5    :1;
volatile uint32_t UART6    :1;
volatile uint32_t UART7    :1;
volatile uint32_t res     :24;
}PRUART_t;


#define SYSCTL_PRUART_OFFSET     (0x0A18)
#define SYSCTL_PRUART            (((PRUART_t*)(SYSCTL_BASE+SYSCTL_PRUART_OFFSET )))
#define SYSCTL_PRUART_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRUART_OFFSET)))

#define SYSCTL_PRUART_R_UART0    (0x00000001)
#define SYSCTL_PRUART_R_UART1    (0x00000002)
#define SYSCTL_PRUART_R_UART2    (0x00000004)
#define SYSCTL_PRUART_R_UART3    (0x00000008)
#define SYSCTL_PRUART_R_UART4    (0x00000010)
#define SYSCTL_PRUART_R_UART5    (0x00000020)
#define SYSCTL_PRUART_R_UART6    (0x00000040)
#define SYSCTL_PRUART_R_UART7    (0x00000080)

#define SYSCTL_PRUART_UART0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(0*4))))
#define SYSCTL_PRUART_UART1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(1*4))))
#define SYSCTL_PRUART_UART2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(2*4))))
#define SYSCTL_PRUART_UART3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(3*4))))
#define SYSCTL_PRUART_UART4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(4*4))))
#define SYSCTL_PRUART_UART5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(5*4))))
#define SYSCTL_PRUART_UART6_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(6*4))))
#define SYSCTL_PRUART_UART7_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRUART_OFFSET)*32)+(7*4))))


******************************************************************************************
************************************112 PRSSI *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t SSI0    :1;
volatile uint32_t SSI1    :1;
volatile uint32_t SSI2    :1;
volatile uint32_t SSI3    :1;
volatile uint32_t res     :28;
}PRSSI_t;


#define SYSCTL_PRSSI_OFFSET     (0x0A1C)
#define SYSCTL_PRSSI            (((PRSSI_t*)(SYSCTL_BASE+SYSCTL_PRSSI_OFFSET )))
#define SYSCTL_PRSSI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRSSI_OFFSET)))

#define SYSCTL_PRSSI_R_SSI0    (0x00000001)
#define SYSCTL_PRSSI_R_SSI1    (0x00000002)
#define SYSCTL_PRSSI_R_SSI2    (0x00000004)
#define SYSCTL_PRSSI_R_SSI3    (0x00000008)


#define SYSCTL_PRSSI_SSI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRSSI_OFFSET)*32)+(0*4))))
#define SYSCTL_PRSSI_SSI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRSSI_OFFSET)*32)+(1*4))))
#define SYSCTL_PRSSI_SSI2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRSSI_OFFSET)*32)+(2*4))))
#define SYSCTL_PRSSI_SSI3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRSSI_OFFSET)*32)+(3*4))))

******************************************************************************************
************************************113 PRI2C *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t I2C0    :1;
volatile uint32_t I2C1    :1;
volatile uint32_t I2C2    :1;
volatile uint32_t I2C3    :1;
volatile uint32_t I2C4    :1;
volatile uint32_t I2C5    :1;
volatile uint32_t res     :26;
}PRI2C_t;


#define SYSCTL_PRI2C_OFFSET     (0x0A20)
#define SYSCTL_PRI2C            (((PRI2C_t*)(SYSCTL_BASE+SYSCTL_PRI2C_OFFSET )))
#define SYSCTL_PRI2C_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRI2C_OFFSET)))

#define SYSCTL_PRI2C_R_I2C0    (0x00000001)
#define SYSCTL_PRI2C_R_I2C1    (0x00000002)
#define SYSCTL_PRI2C_R_I2C2    (0x00000004)
#define SYSCTL_PRI2C_R_I2C3    (0x00000008)
#define SYSCTL_PRI2C_R_I2C4    (0x00000010)
#define SYSCTL_PRI2C_R_I2C5    (0x00000020)


#define SYSCTL_PRI2C_I2C0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32)+(0*4))))
#define SYSCTL_PRI2C_I2C1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32)+(1*4))))
#define SYSCTL_PRI2C_I2C2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32)+(2*4))))
#define SYSCTL_PRI2C_I2C3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32)+(3*4))))
#define SYSCTL_PRI2C_I2C4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32)+(4*4))))
#define SYSCTL_PRI2C_I2C5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRI2C_OFFSET)*32)+(5*4))))



******************************************************************************************
************************************114 PRUSB *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t USB    :1;
volatile uint32_t res     :31;
}PRUSB_t;


#define SYSCTL_PRUSB_OFFSET     (0x0A28)
#define SYSCTL_PRUSB            (((PRUSB_t*)(SYSCTL_BASE+SYSCTL_PRUSB_OFFSET )))
#define SYSCTL_PRUSB_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRUSB_OFFSET)))

#define SYSCTL_PRUSB_R_USB   (0x00000001)
#define SYSCTL_PRUSB_USB_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRUSB_OFFSET)*32)+(0*4))))

******************************************************************************************
************************************115 PRCAN *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t CAN0    :1;
volatile uint32_t CAN1    :1;
volatile uint32_t res     :30;
}PRCAN_t;


#define SYSCTL_PRCAN_OFFSET     (0x0A34)
#define SYSCTL_PRCAN            (((PRCAN_t*)(SYSCTL_BASE+SYSCTL_PRCAN_OFFSET )))
#define SYSCTL_PRCAN_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRCAN_OFFSET)))

#define SYSCTL_PRCAN_R_CAN0   (0x00000001)
#define SYSCTL_PRCAN_R_CAN1   (0x00000002)

#define SYSCTL_PRCAN_CAN0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRCAN_OFFSET)*32)+(0*4))))
#define SYSCTL_PRCAN_CAN1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRCAN_OFFSET)*32)+(1*4))))

******************************************************************************************
************************************116 PRADC *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t ADC0    :1;
volatile uint32_t ADC1    :1;
volatile uint32_t res     :30;
}PRADC_t;


#define SYSCTL_PRADC_OFFSET     (0x0A38)
#define SYSCTL_PRADC            (((PRADC_t*)(SYSCTL_BASE+SYSCTL_PRADC_OFFSET )))
#define SYSCTL_PRADC_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRADC_OFFSET)))

#define SYSCTL_PRADC_R_ADC0   (0x00000001)
#define SYSCTL_PRADC_R_ADC1   (0x00000002)
#define SYSCTL_PRADC_ADC0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRADC_OFFSET)*32)+(0*4))))
#define SYSCTL_PRADC_ADC1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRADC_OFFSET)*32)+(1*4))))


******************************************************************************************
************************************117 PRACMP *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t ACMP    :1;
volatile uint32_t res     :30;
}PRACMP_t;


#define SYSCTL_PRACMP_OFFSET     (0x0A3C)
#define SYSCTL_PRACMP            (((PRACMP_t*)(SYSCTL_BASE+SYSCTL_PRACMP_OFFSET )))
#define SYSCTL_PRACMP_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRACMP_OFFSET)))

#define SYSCTL_PRACMP_R_ACMP   (0x00000001)
#define SYSCTL_PRACMP_ACMP_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRACMP_OFFSET)*32)+(0*4))))

******************************************************************************************
************************************118 PRPWM *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t PWM0    :1;
volatile uint32_t PWM1    :1;
volatile uint32_t res     :30;
}PRPWM_t;


#define SYSCTL_PRPWM_OFFSET     (0x0A40)
#define SYSCTL_PRPWM            (((PRPWM_t*)(SYSCTL_BASE+SYSCTL_PRPWM_OFFSET )))
#define SYSCTL_PRPWM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRPWM_OFFSET)))

#define SYSCTL_PRPWM_R_PWM0   (0x00000001)
#define SYSCTL_PRPWM_R_PWM1   (0x00000002)
#define SYSCTL_PRPWM_PWM0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRPWM_OFFSET)*32)+(0*4))))
#define SYSCTL_PRPWM_PWM1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRPWM_OFFSET)*32)+(1*4))))

******************************************************************************************
************************************119 PRQEI *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t QEI0    :1;
volatile uint32_t QEI1    :1;
volatile uint32_t res     :30;
}PRQEI_t;


#define SYSCTL_PRQEI_OFFSET     (0x0A44)
#define SYSCTL_PRQEI            (((PRQEI_t*)(SYSCTL_BASE+SYSCTL_PRQEI_OFFSET )))
#define SYSCTL_PRQEI_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRQEI_OFFSET)))

#define SYSCTL_PRQEI_R_QEI0   (0x00000001)
#define SYSCTL_PRQEI_R_QEI1   (0x00000002)


#define SYSCTL_PRQEI_QEI0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRQEI_OFFSET)*32)+(0*4))))
#define SYSCTL_PRQEI_QEI1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRQEI_OFFSET)*32)+(1*4))))


******************************************************************************************
************************************120 PREEPROM *********************************************
******************************************************************************************


typedef volatile struct
{
volatile uint32_t EEPROM    :1;
volatile uint32_t res     :30;
}PREEPROM_t;


#define SYSCTL_PREEPROM_OFFSET     (0x0A58)
#define SYSCTL_PREEPROM            (((PREEPROM_t*)(SYSCTL_BASE+SYSCTL_PREEPROM_OFFSET )))
#define SYSCTL_PREEPROM_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PREEPROM_OFFSET)))

#define SYSCTL_PREEPROM_R_EERPOM   (0x00000001)
#define SYSCTL_PREEPROM_EEPROM_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PREEPROM_OFFSET)*32)+(0*4))))


/******************************************************************************************
************************************121 PRWTIMER *********************************************
******************************************************************************************/


typedef volatile struct
{
volatile uint32_t WTIMER0   :1;
volatile uint32_t WTIMER1   :1;
volatile uint32_t WTIMER2   :1;
volatile uint32_t WTIMER3   :1;
volatile uint32_t WTIMER4   :1;
volatile uint32_t WTIMER5   :1;
volatile uint32_t res      :26;
}PRWTIMER_t;


#define SYSCTL_PRWTIMER_OFFSET     (0x0A5C)
#define SYSCTL_PRWTIMER            (((PRWTIMER_t*)(SYSCTL_BASE+SYSCTL_PRWTIMER_OFFSET )))
#define SYSCTL_PRWTIMER_R          (*((volatile uint32_t *)(SYSCTL_BASE+SYSCTL_PRWTIMER_OFFSET)))

#define SYSCTL_PRWTIMER_R_WTIMER0     (0x00000001)
#define SYSCTL_PRWTIMER_R_WTIMER1     (0x00000002)
#define SYSCTL_PRWTIMER_R_WTIMER2     (0x00000004)
#define SYSCTL_PRWTIMER_R_WTIMER3     (0x00000008)
#define SYSCTL_PRWTIMER_R_WTIMER4     (0x00000010)
#define SYSCTL_PRWTIMER_R_WTIMER5     (0x00000020)

#define SYSCTL_PRWTIMER_WTIMER0_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32)+(0*4))))
#define SYSCTL_PRWTIMER_WTIMER1_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32)+(1*4))))
#define SYSCTL_PRWTIMER_WTIMER2_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32)+(2*4))))
#define SYSCTL_PRWTIMER_WTIMER3_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32)+(3*4))))
#define SYSCTL_PRWTIMER_WTIMER4_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32)+(4*4))))
#define SYSCTL_PRWTIMER_WTIMER5_BITBANDING    (*((volatile uint32_t *)(SYSCTL_BASE_BITBANDING+((SYSCTL_OFFSET+SYSCTL_PRWTIMER_OFFSET)*32)+(5*4))))

typedef enum
{
    SYSCTL_enOK=0,
    SYSCTL_enERROR,
}SYSCTL_nSTATUS;

SYSCTL_nSTATUS SYSCTL__enInit(void);
uint32_t SYSCTL__u32GetClock(void);

#endif /* SYSCTL_H_ */
