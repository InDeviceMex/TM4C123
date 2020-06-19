/*
 * FLASH_Register.h
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_REGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_REGISTER_H_

#include <xDriver_MCU/Driver_Header/FLASH/FLASH_Peripheral/FLASH_Struct.h>

#define FLASH_BASE              ((uint32_t)0x400FD000u)
#define FLASH_BITBANDING_BASE   ((uint32_t)0x42000000u)
#define FLASH_OFFSET            ((uint32_t)0x000FD000u)
#define FLASH_ADDRESS_MAX       ((uint32_t)0x00040000u)
#define FLASH_ADDRESS_MIN       ((uint32_t)0x00000000u)
#define FLASH_PAGE_SIZE         ((uint32_t)0x00000400u)
#define FLASH_PAGE_COUNT        (256)
#define FLASH_ERASEWORLD        ((uint32_t)0xFFFFFFFFu)
#define FLASH_ERASEHALFWORLD    ((uint32_t)0xFFFFu)
#define FLASH_ERASEBYTE         ((uint32_t)0xFFu)


#define FLASH                 (((FLASH_TypeDef*)(FLASH_BASE)))
#define FLASH_BITBANDING      (((FLASH_BITBANDING_TypeDef*)(FLASH_BITBANDING_BASE+(FLASH_OFFSET*32))))


#define FLASH_FMA_OFFSET     ((uint32_t)0x0000u)
#define FLASH_FMD_OFFSET     ((uint32_t)0x0004u)
#define FLASH_FMC_OFFSET     ((uint32_t)0x0008u)
#define FLASH_FCRIS_OFFSET   ((uint32_t)0x000Cu)
#define FLASH_FCIM_OFFSET    ((uint32_t)0x0010u)
#define FLASH_FCMISC_OFFSET  ((uint32_t)0x0014u)
#define FLASH_FMC2_OFFSET    ((uint32_t)0x0020u)
#define FLASH_FWBVAL_OFFSET  ((uint32_t)0x0030u)
#define FLASH_FWBn_OFFSET    ((uint32_t)0x0100u)
#define FLASH_FWB0_OFFSET    ((uint32_t)0x0100u)
#define FLASH_FWB1_OFFSET    ((uint32_t)0x0104u)
#define FLASH_FWB2_OFFSET    ((uint32_t)0x0108u)
#define FLASH_FWB3_OFFSET    ((uint32_t)0x010Cu)
#define FLASH_FWB4_OFFSET    ((uint32_t)0x0110u)
#define FLASH_FWB5_OFFSET    ((uint32_t)0x0114u)
#define FLASH_FWB6_OFFSET    ((uint32_t)0x0118u)
#define FLASH_FWB7_OFFSET    ((uint32_t)0x011Cu)
#define FLASH_FWB8_OFFSET    ((uint32_t)0x0120u)
#define FLASH_FWB9_OFFSET    ((uint32_t)0x0124u)
#define FLASH_FWB10_OFFSET   ((uint32_t)0x0128u)
#define FLASH_FWB11_OFFSET   ((uint32_t)0x012Cu)
#define FLASH_FWB12_OFFSET   ((uint32_t)0x0130u)
#define FLASH_FWB13_OFFSET   ((uint32_t)0x0134u)
#define FLASH_FWB14_OFFSET   ((uint32_t)0x0138u)
#define FLASH_FWB15_OFFSET   ((uint32_t)0x013Cu)
#define FLASH_FWB16_OFFSET   ((uint32_t)0x0140u)
#define FLASH_FWB17_OFFSET   ((uint32_t)0x0144u)
#define FLASH_FWB18_OFFSET   ((uint32_t)0x0148u)
#define FLASH_FWB19_OFFSET   ((uint32_t)0x014Cu)
#define FLASH_FWB20_OFFSET   ((uint32_t)0x0150u)
#define FLASH_FWB21_OFFSET   ((uint32_t)0x0154u)
#define FLASH_FWB22_OFFSET   ((uint32_t)0x0158u)
#define FLASH_FWB23_OFFSET   ((uint32_t)0x015Cu)
#define FLASH_FWB24_OFFSET   ((uint32_t)0x0160u)
#define FLASH_FWB25_OFFSET   ((uint32_t)0x0164u)
#define FLASH_FWB26_OFFSET   ((uint32_t)0x0168u)
#define FLASH_FWB27_OFFSET   ((uint32_t)0x016Cu)
#define FLASH_FWB28_OFFSET   ((uint32_t)0x0170u)
#define FLASH_FWB29_OFFSET   ((uint32_t)0x0174u)
#define FLASH_FWB30_OFFSET   ((uint32_t)0x0178u)
#define FLASH_FWB31_OFFSET   ((uint32_t)0x017Cu)
#define FLASH_FSIZE_OFFSET   ((uint32_t)0x0FC0u)
#define FLASH_SSIZE_OFFSET   ((uint32_t)0x0FC4u)
#define FLASH_ROMSWMAP_OFFSET ((uint32_t)0x0FCCu)

/******************************************************************************************
************************************ 1 FMA *********************************************
******************************************************************************************/
#define FLASH_FMA               (((FMA_TypeDef*)(FLASH_BASE+FLASH_FMA_OFFSET )))
#define FLASH_FMA_R             (*((volatile uint32_t *)(FLASH_BASE+FLASH_FMA_OFFSET)))
#define FLASH_BITBANDING_FMA    (((BITBANDING_FMA_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FMA_OFFSET)*32))))

/*----------*/
#define FLASH_FMA_R_OFFSET_MASK     ((uint32_t)0x0003FFFFu)
#define FLASH_FMA_R_OFFSET_BIT      (0)

#define FLASH_FMA_OFFSET_MASK       ((uint32_t)0x0003FFFFu)
/*----------*/

/******************************************************************************************
************************************ 2 FMD *********************************************
******************************************************************************************/
#define FLASH_FMD               (((FMD_TypeDef*)(FLASH_BASE+FLASH_FMD_OFFSET )))
#define FLASH_FMD_R             (*((volatile uint32_t *)(FLASH_BASE+FLASH_FMD_OFFSET)))
#define FLASH_BITBANDING_FMD    (((BITBANDING_FMD_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FMD_OFFSET)*32))))

/*----------*/
#define FLASH_FMD_R_DATA_MASK     ((uint32_t)0xFFFFFFFFu)
#define FLASH_FMD_R_DATA_BIT      (0)

#define FLASH_FMD_DATA_MASK       ((uint32_t)0xFFFFFFFFu)
/*----------*/

/******************************************************************************************
************************************ 3 FMC *********************************************
******************************************************************************************/
#define FLASH_FMC               (((FMC_TypeDef*)(FLASH_BASE+FLASH_FMC_OFFSET )))
#define FLASH_FMC_R             (*((volatile uint32_t *)(FLASH_BASE+FLASH_FMC_OFFSET)))
#define FLASH_BITBANDING_FMC    (((BITBANDING_FMC_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FMC_OFFSET)*32))))


/*----------*/
#define FLASH_FMC_R_WRITE_MASK          ((uint32_t)0x00000001u)
#define FLASH_FMC_R_WRITE_BIT           (0)
#define FLASH_FMC_R_WRITE_COMPLETE      ((uint32_t)0x00000000u)
#define FLASH_FMC_R_WRITE_NOCOMPLETE    ((uint32_t)0x00000001u)
#define FLASH_FMC_R_WRITE_WRITE         ((uint32_t)0x00000001u)

#define FLASH_FMC_WRITE_MASK            ((uint32_t)0x00000001u)
#define FLASH_FMC_WRITE_COMPLETE        ((uint32_t)0x00000000u)
#define FLASH_FMC_WRITE_NOCOMPLETE      ((uint32_t)0x00000001u)
#define FLASH_FMC_WRITE_WRITE           ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FMC_R_ERASE_MASK          ((uint32_t)0x00000002u)
#define FLASH_FMC_R_ERASE_BIT           (1)
#define FLASH_FMC_R_ERASE_COMPLETE      ((uint32_t)0x00000000u)
#define FLASH_FMC_R_ERASE_NOCOMPLETE    ((uint32_t)0x00000002u)
#define FLASH_FMC_R_ERASE_ERASE         ((uint32_t)0x00000002u)

#define FLASH_FMC_ERASE_MASK            ((uint32_t)0x00000001u)
#define FLASH_FMC_ERASE_COMPLETE        ((uint32_t)0x00000000u)
#define FLASH_FMC_ERASE_NOCOMPLETE      ((uint32_t)0x00000001u)
#define FLASH_FMC_ERASE_ERASE           ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FMC_R_MERASE_MASK          ((uint32_t)0x00000004u)
#define FLASH_FMC_R_MERASE_BIT           (2)
#define FLASH_FMC_R_MERASE_COMPLETE      ((uint32_t)0x00000000u)
#define FLASH_FMC_R_MERASE_NOCOMPLETE    ((uint32_t)0x00000004u)
#define FLASH_FMC_R_MERASE_MERASE        ((uint32_t)0x00000004u)

#define FLASH_FMC_MERASE_MASK           ((uint32_t)0x00000001u)
#define FLASH_FMC_MERASE_COMPLETE       ((uint32_t)0x00000000u)
#define FLASH_FMC_MERASE_NOCOMPLETE     ((uint32_t)0x00000001u)
#define FLASH_FMC_MERASE_MERASE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FMC_R_COMT_MASK           ((uint32_t)0x00000008u)
#define FLASH_FMC_R_COMT_BIT            (3)
#define FLASH_FMC_R_COMT_COMPLETE       ((uint32_t)0x00000000u)
#define FLASH_FMC_R_COMT_NOCOMPLETE     ((uint32_t)0x00000008u)
#define FLASH_FMC_R_COMT_WRITE          ((uint32_t)0x00000008u)

#define FLASH_FMC_COMT_MASK             ((uint32_t)0x00000001u)
#define FLASH_FMC_COMT_COMPLETE         ((uint32_t)0x00000000u)
#define FLASH_FMC_COMT_NOCOMPLETE       ((uint32_t)0x00000001u)
#define FLASH_FMC_COMT_WRITE            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FMC_R_WRKEY_MASK          ((uint32_t)0xFFFF0000u)
#define FLASH_FMC_R_WRKEY_BIT           (16)
#define FLASH_FMC_R_WRKEY_KEY1          ((uint32_t)0xA4420000u)
#define FLASH_FMC_R_WRKEY_KEY2          ((uint32_t)0x71D50000u)

#define FLASH_FMC_WRKEY_MASK            ((uint32_t)0x0000FFFFu)
#define FLASH_FMC_WRKEY_KEY1            ((uint32_t)0x0000A442u)
#define FLASH_FMC_WRKEY_KEY2            ((uint32_t)0x000071D5u)
/*----------*/

#define FLASH_BITBANDING_FMC_WRITE     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FMC_OFFSET)*32)+(FLASH_FMC_R_WRITE_BIT*4))))
#define FLASH_BITBANDING_FMC_ERASE     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FMC_OFFSET)*32)+(FLASH_FMC_R_ERASE_BIT*4))))
#define FLASH_BITBANDING_FMC_MERASE    (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FMC_OFFSET)*32)+(FLASH_FMC_R_MERASE_BIT*4))))
#define FLASH_BITBANDING_FMC_COMT      (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FMC_OFFSET)*32)+(FLASH_FMC_R_COMT_BIT*4))))

/******************************************************************************************
************************************ 4 FCRIS *********************************************
******************************************************************************************/
#define FLASH_FCRIS             (((FCRIS_TypeDef*)(FLASH_BASE+FLASH_FCRIS_OFFSET )))
#define FLASH_FCRIS_R           (*((volatile const uint32_t *)(FLASH_BASE+FLASH_FCRIS_OFFSET)))
#define FLASH_BITBANDING_FCRIS  (((BITBANDING_FCRIS_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32))))

/*----------*/
#define FLASH_FCRIS_R_ARIS_MASK         ((uint32_t)0x00000001u)
#define FLASH_FCRIS_R_ARIS_BIT          (0)
#define FLASH_FCRIS_R_ARIS_NOACTIVE     ((uint32_t)0x00000000u)
#define FLASH_FCRIS_R_ARIS_ACTIVE       ((uint32_t)0x00000001u)

#define FLASH_FCRIS_ARIS_MASK           ((uint32_t)0x00000001u)
#define FLASH_FCRIS_ARIS_NOACTIVE       ((uint32_t)0x00000000u)
#define FLASH_FCRIS_ARIS_ACTIVE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FCRIS_R_PRIS_MASK         ((uint32_t)0x00000002u)
#define FLASH_FCRIS_R_PRIS_BIT          (1)
#define FLASH_FCRIS_R_PRIS_NOACTIVE     ((uint32_t)0x00000000u)
#define FLASH_FCRIS_R_PRIS_ACTIVE       ((uint32_t)0x00000002u)

#define FLASH_FCRIS_PRIS_MASK           ((uint32_t)0x00000001u)
#define FLASH_FCRIS_PRIS_NOACTIVE       ((uint32_t)0x00000000u)
#define FLASH_FCRIS_PRIS_ACTIVE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FCRIS_R_ERIS_MASK         ((uint32_t)0x00000004u)
#define FLASH_FCRIS_R_ERIS_BIT          (2)
#define FLASH_FCRIS_R_ERIS_NOACTIVE     ((uint32_t)0x00000000u)
#define FLASH_FCRIS_R_ERIS_ACTIVE       ((uint32_t)0x00000004u)

#define FLASH_FCRIS_ERIS_MASK           ((uint32_t)0x00000001u)
#define FLASH_FCRIS_ERIS_NOACTIVE       ((uint32_t)0x00000000u)
#define FLASH_FCRIS_ERIS_ACTIVE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FCRIS_R_VOLTRIS_MASK      ((uint32_t)0x00000200u)
#define FLASH_FCRIS_R_VOLTRIS_BIT       (9)
#define FLASH_FCRIS_R_VOLTRIS_NOACTIVE  ((uint32_t)0x00000000u)
#define FLASH_FCRIS_R_VOLTRIS_ACTIVE    ((uint32_t)0x00000200u)

#define FLASH_FCRIS_VOLTRIS_MASK        ((uint32_t)0x00000001u)
#define FLASH_FCRIS_VOLTRIS_NOACTIVE    ((uint32_t)0x00000000u)
#define FLASH_FCRIS_VOLTRIS_ACTIVE      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FCRIS_R_INVDRIS_MASK      ((uint32_t)0x00000400u)
#define FLASH_FCRIS_R_INVDRIS_BIT       (10)
#define FLASH_FCRIS_R_INVDRIS_NOACTIVE  ((uint32_t)0x00000000u)
#define FLASH_FCRIS_R_INVDRIS_ACTIVE    ((uint32_t)0x00000400u)

#define FLASH_FCRIS_INVDRIS_MASK        ((uint32_t)0x00000001u)
#define FLASH_FCRIS_INVDRIS_NOACTIVE    ((uint32_t)0x00000000u)
#define FLASH_FCRIS_INVDRIS_ACTIVE      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FCRIS_R_ERRIS_MASK        ((uint32_t)0x00000800u)
#define FLASH_FCRIS_R_ERRIS_BIT         (11)
#define FLASH_FCRIS_R_ERRIS_NOACTIVE    ((uint32_t)0x00000000u)
#define FLASH_FCRIS_R_ERRIS_ACTIVE      ((uint32_t)0x00000800u)

#define FLASH_FCRIS_ERRIS_MASK          ((uint32_t)0x00000001u)
#define FLASH_FCRIS_ERRIS_NOACTIVE      ((uint32_t)0x00000000u)
#define FLASH_FCRIS_ERRIS_ACTIVE        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FCRIS_R_PROGRIS_MASK      ((uint32_t)0x00002000u)
#define FLASH_FCRIS_R_PROGRIS_BIT       (13)
#define FLASH_FCRIS_R_PROGRIS_NOACTIVE  ((uint32_t)0x00000000u)
#define FLASH_FCRIS_R_PROGRIS_ACTIVE    ((uint32_t)0x00002000u)

#define FLASH_FCRIS_PROGRIS_MASK        ((uint32_t)0x00000001u)
#define FLASH_FCRIS_PROGRIS_NOACTIVE    ((uint32_t)0x00000000u)
#define FLASH_FCRIS_PROGRIS_ACTIVE      ((uint32_t)0x00000001u)
/*----------*/

#define FLASH_BITBANDING_FCRIS_ARIS     (*((volatile const uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(FLASH_FCRIS_R_ARIS_BIT*4))))
#define FLASH_BITBANDING_FCRIS_PRIS     (*((volatile const uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(FLASH_FCRIS_R_PRIS_BIT*4))))
#define FLASH_BITBANDING_FCRIS_ERIS     (*((volatile const uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(FLASH_FCRIS_R_ERIS_BIT*4))))
#define FLASH_BITBANDING_FCRIS_VOLTRIS  (*((volatile const uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(FLASH_FCRIS_R_VOLTRIS_BIT*4))))
#define FLASH_BITBANDING_FCRIS_INVDRIS  (*((volatile const uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(FLASH_FCRIS_R_INVDRIS_BIT*4))))
#define FLASH_BITBANDING_FCRIS_ERRIS    (*((volatile const uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(FLASH_FCRIS_R_ERRIS_BIT*4))))
#define FLASH_BITBANDING_FCRIS_PROGRIS  (*((volatile const uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(FLASH_FCRIS_R_PROGRIS_BIT*4))))

/******************************************************************************************
************************************ 5 FCIM *********************************************
******************************************************************************************/
#define FLASH_FCIM            (((FCIM_TypeDef*)(FLASH_BASE+FLASH_FCIM_OFFSET )))
#define FLASH_FCIM_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FCIM_OFFSET)))
#define FLASH_BITBANDING_FCIM  (((BITBANDING_FCIM_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32))))

/*----------*/
#define FLASH_FCIM_R_AMASK_MASK         ((uint32_t)0x00000001u)
#define FLASH_FCIM_R_AMASK_BIT          (0)
#define FLASH_FCIM_R_AMASK_DIS          ((uint32_t)0x00000000u)
#define FLASH_FCIM_R_AMASK_EN           ((uint32_t)0x00000001u)

#define FLASH_FCIM_AMASK_MASK           ((uint32_t)0x00000001u)
#define FLASH_FCIM_AMASK_DIS            ((uint32_t)0x00000000u)
#define FLASH_FCIM_AMASK_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FCIM_R_PMASK_MASK         ((uint32_t)0x00000002u)
#define FLASH_FCIM_R_PMASK_BIT          (1)
#define FLASH_FCIM_R_PMASK_DIS          ((uint32_t)0x00000000u)
#define FLASH_FCIM_R_PMASK_EN           ((uint32_t)0x00000002u)

#define FLASH_FCIM_PMASK_MASK           ((uint32_t)0x00000001u)
#define FLASH_FCIM_PMASK_DIS            ((uint32_t)0x00000000u)
#define FLASH_FCIM_PMASK_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FCIM_R_EMASK_MASK         ((uint32_t)0x00000004u)
#define FLASH_FCIM_R_EMASK_BIT          (2)
#define FLASH_FCIM_R_EMASK_DIS          ((uint32_t)0x00000000u)
#define FLASH_FCIM_R_EMASK_EN           ((uint32_t)0x00000004u)

#define FLASH_FCIM_EMASK_MASK           ((uint32_t)0x00000001u)
#define FLASH_FCIM_EMASK_DIS            ((uint32_t)0x00000000u)
#define FLASH_FCIM_EMASK_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FCIM_R_VOLTMASK_MASK      ((uint32_t)0x00000200u)
#define FLASH_FCIM_R_VOLTMASK_BIT       (9)
#define FLASH_FCIM_R_VOLTMASK_DIS       ((uint32_t)0x00000000u)
#define FLASH_FCIM_R_VOLTMASK_EN        ((uint32_t)0x00000200u)

#define FLASH_FCIM_VOLTMASK_MASK        ((uint32_t)0x00000001u)
#define FLASH_FCIM_VOLTMASK_DIS         ((uint32_t)0x00000000u)
#define FLASH_FCIM_VOLTMASK_EN          ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FCIM_R_INVDMASK_MASK      ((uint32_t)0x00000400u)
#define FLASH_FCIM_R_INVDMASK_BIT       (10)
#define FLASH_FCIM_R_INVDMASK_DIS       ((uint32_t)0x00000000u)
#define FLASH_FCIM_R_INVDMASK_EN        ((uint32_t)0x00000400u)

#define FLASH_FCIM_INVDMASK_MASK        ((uint32_t)0x00000001u)
#define FLASH_FCIM_INVDMASK_DIS         ((uint32_t)0x00000000u)
#define FLASH_FCIM_INVDMASK_EN          ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FCIM_R_ERMASK_MASK        ((uint32_t)0x00000800u)
#define FLASH_FCIM_R_ERMASK_BIT         (11)
#define FLASH_FCIM_R_ERMASK_DIS         ((uint32_t)0x00000000u)
#define FLASH_FCIM_R_ERMASK_EN          ((uint32_t)0x00000800u)

#define FLASH_FCIM_ERMASK_MASK          ((uint32_t)0x00000001u)
#define FLASH_FCIM_ERMASK_DIS           ((uint32_t)0x00000000u)
#define FLASH_FCIM_ERMASK_EN            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FCIM_R_PROGMASK_MASK      ((uint32_t)0x00002000u)
#define FLASH_FCIM_R_PROGMASK_BIT       (13)
#define FLASH_FCIM_R_PROGMASK_DIS       ((uint32_t)0x00000000u)
#define FLASH_FCIM_R_PROGMASK_EN        ((uint32_t)0x00002000u)

#define FLASH_FCIM_PROGMASK_MASK        ((uint32_t)0x00000001u)
#define FLASH_FCIM_PROGMASK_DIS         ((uint32_t)0x00000000u)
#define FLASH_FCIM_PROGMASK_EN          ((uint32_t)0x00000001u)
/*----------*/

#define FLASH_BITBANDING_FCIM_AMASK     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(FLASH_FCIM_R_AMASK_BIT*4))))
#define FLASH_BITBANDING_FCIM_PMASK     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(FLASH_FCIM_R_PMASK_BIT*4))))
#define FLASH_BITBANDING_FCIM_EMASK     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(FLASH_FCIM_R_EMASK_BIT*4))))
#define FLASH_BITBANDING_FCIM_VOLTMASK  (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(FLASH_FCIM_R_VOLTMASK_BIT*4))))
#define FLASH_BITBANDING_FCIM_INVDMASK  (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(FLASH_FCIM_R_INVDMASK_BIT*4))))
#define FLASH_BITBANDING_FCIM_ERMASK    (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(FLASH_FCIM_R_ERMASK_BIT*4))))
#define FLASH_BITBANDING_FCIM_PROGMASK  (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(FLASH_FCIM_R_PROGMASK_BIT*4))))

/******************************************************************************************
************************************ 6 FCMISC *********************************************
******************************************************************************************/
#define FLASH_FCMISC                (((FCMISC_TypeDef*)(FLASH_BASE+FLASH_FCMISC_OFFSET )))
#define FLASH_FCMISC_R              (*((volatile uint32_t *)(FLASH_BASE+FLASH_FCMISC_OFFSET)))
#define FLASH_BITBANDING_FCMISC     (((BITBANDING_FCMISC_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32))))

/*----------*/
#define FLASH_FCMISC_R_AMISC_MASK       ((uint32_t)0x00000001u)
#define FLASH_FCMISC_R_AMISC_BIT        (0)
#define FLASH_FCMISC_R_AMISC_NOOCCUR    ((uint32_t)0x00000000u)
#define FLASH_FCMISC_R_AMISC_OCCUR      ((uint32_t)0x00000001u)
#define FLASH_FCMISC_R_AMISC_CLEAR      ((uint32_t)0x00000001u)

#define FLASH_FCMISC_AMISC_MASK         ((uint32_t)0x00000001u)
#define FLASH_FCMISC_AMISC_NOOCCUR      ((uint32_t)0x00000000u)
#define FLASH_FCMISC_AMISC_OCCUR        ((uint32_t)0x00000001u)
#define FLASH_FCMISC_AMISC_CLEAR        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FCMISC_R_PMISC_MASK       ((uint32_t)0x00000002u)
#define FLASH_FCMISC_R_PMISC_BIT        (1)
#define FLASH_FCMISC_R_PMISC_NOOCCUR    ((uint32_t)0x00000000u)
#define FLASH_FCMISC_R_PMISC_OCCUR      ((uint32_t)0x00000002u)
#define FLASH_FCMISC_R_PMISC_CLEAR      ((uint32_t)0x00000002u)

#define FLASH_FCMISC_PMISC_MASK         ((uint32_t)0x00000001u)
#define FLASH_FCMISC_PMISC_NOOCCUR      ((uint32_t)0x00000000u)
#define FLASH_FCMISC_PMISC_OCCUR        ((uint32_t)0x00000001u)
#define FLASH_FCMISC_PMISC_CLEAR        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FCMISC_R_EMISC_MASK       ((uint32_t)0x00000004u)
#define FLASH_FCMISC_R_EMISC_BIT        (2)
#define FLASH_FCMISC_R_EMISC_NOOCCUR    ((uint32_t)0x00000000u)
#define FLASH_FCMISC_R_EMISC_OCCUR      ((uint32_t)0x00000004u)
#define FLASH_FCMISC_R_EMISC_CLEAR      ((uint32_t)0x00000004u)

#define FLASH_FCMISC_EMISC_MASK         ((uint32_t)0x00000001u)
#define FLASH_FCMISC_EMISC_NOOCCUR      ((uint32_t)0x00000000u)
#define FLASH_FCMISC_EMISC_OCCUR        ((uint32_t)0x00000001u)
#define FLASH_FCMISC_EMISC_CLEAR        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FCMISC_R_VOLTMISC_MASK    ((uint32_t)0x00000200u)
#define FLASH_FCMISC_R_VOLTMISC_BIT     (9)
#define FLASH_FCMISC_R_VOLTMISC_NOOCCUR ((uint32_t)0x00000000u)
#define FLASH_FCMISC_R_VOLTMISC_OCCUR   ((uint32_t)0x00000200u)
#define FLASH_FCMISC_R_VOLTMISC_CLEAR   ((uint32_t)0x00000200u)

#define FLASH_FCMISC_VOLTMISC_MASK      ((uint32_t)0x00000001u)
#define FLASH_FCMISC_VOLTMISC_NOOCCUR   ((uint32_t)0x00000000u)
#define FLASH_FCMISC_VOLTMISC_OCCUR     ((uint32_t)0x00000001u)
#define FLASH_FCMISC_VOLTMISC_CLEAR     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FCMISC_R_INVDMISC_MASK    ((uint32_t)0x00000400u)
#define FLASH_FCMISC_R_INVDMISC_BIT     (10)
#define FLASH_FCMISC_R_INVDMISC_NOOCCUR ((uint32_t)0x00000000u)
#define FLASH_FCMISC_R_INVDMISC_OCCUR   ((uint32_t)0x00000400u)
#define FLASH_FCMISC_R_INVDMISC_CLEAR   ((uint32_t)0x00000400u)

#define FLASH_FCMISC_INVDMISC_MASK      ((uint32_t)0x00000001u)
#define FLASH_FCMISC_INVDMISC_NOOCCUR   ((uint32_t)0x00000000u)
#define FLASH_FCMISC_INVDMISC_OCCUR     ((uint32_t)0x00000001u)
#define FLASH_FCMISC_INVDMISC_CLEAR     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FCMISC_R_ERMISC_MASK      ((uint32_t)0x00000800u)
#define FLASH_FCMISC_R_ERMISC_BIT       (11)
#define FLASH_FCMISC_R_ERMISC_NOOCCUR   ((uint32_t)0x00000000u)
#define FLASH_FCMISC_R_ERMISC_OCCUR     ((uint32_t)0x00000800u)
#define FLASH_FCMISC_R_ERMISC_CLEAR     ((uint32_t)0x00000800u)

#define FLASH_FCMISC_ERMISC_MASK        ((uint32_t)0x00000001u)
#define FLASH_FCMISC_ERMISC_NOOCCUR     ((uint32_t)0x00000000u)
#define FLASH_FCMISC_ERMISC_OCCUR       ((uint32_t)0x00000001u)
#define FLASH_FCMISC_ERMISC_CLEAR       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FCMISC_R_PROGMISC_MASK    ((uint32_t)0x0002000u)
#define FLASH_FCMISC_R_PROGMISC_BIT     (13)
#define FLASH_FCMISC_R_PROGMISC_NOOCCUR ((uint32_t)0x00000000u)
#define FLASH_FCMISC_R_PROGMISC_OCCUR   ((uint32_t)0x00002000u)
#define FLASH_FCMISC_R_PROGMISC_CLEAR   ((uint32_t)0x00002000u)

#define FLASH_FCMISC_PROGMISC_MASK      ((uint32_t)0x00000001u)
#define FLASH_FCMISC_PROGMISC_NOOCCUR   ((uint32_t)0x00000000u)
#define FLASH_FCMISC_PROGMISC_OCCUR     ((uint32_t)0x00000001u)
#define FLASH_FCMISC_PROGMISC_CLEAR     ((uint32_t)0x00000001u)
/*----------*/

#define FLASH_BITBANDING_FCMISC_AMISC     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(FLASH_FCMISC_R_AMISC_BIT*4))))
#define FLASH_BITBANDING_FCMISC_PMISC     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(FLASH_FCMISC_R_PMISC_BIT*4))))
#define FLASH_BITBANDING_FCMISC_EMISC     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(FLASH_FCMISC_R_EMISC_BIT*4))))
#define FLASH_BITBANDING_FCMISC_VOLTMISC  (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(FLASH_FCMISC_R_VOLTMISC_BIT*4))))
#define FLASH_BITBANDING_FCMISC_INVDMISC  (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(FLASH_FCMISC_R_INVDMISC_BIT*4))))
#define FLASH_BITBANDING_FCMISC_ERMISC    (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(FLASH_FCMISC_R_ERMISC_BIT*4))))
#define FLASH_BITBANDING_FCMISC_PROGMISC  (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(FLASH_FCMISC_R_PROGMISC_BIT*4))))

/******************************************************************************************
************************************ 7 FMC2 *********************************************
******************************************************************************************/
#define FLASH_FMC2              (((FMC2_TypeDef*)(FLASH_BASE+FLASH_FMC2_OFFSET )))
#define FLASH_FMC2_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FMC2_OFFSET)))
#define FLASH_BITBANDING_FMC2   (((BITBANDING_FMC2_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FMC2_OFFSET)*32))))

/*----------*/
#define FLASH_FMC2_R_WRBUF_MASK         ((uint32_t)0x00000001u)
#define FLASH_FMC2_R_WRBUF_BIT          (0)
#define FLASH_FMC2_R_WRBUF_COMPLETE     ((uint32_t)0x00000000u)
#define FLASH_FMC2_R_WRBUF_NOCOMPLETE   ((uint32_t)0x00000001u)
#define FLASH_FMC2_R_WRBUF_WRITE        ((uint32_t)0x00000001u)

#define FLASH_FMC2_WRBUF_MASK           ((uint32_t)0x00000001u)
#define FLASH_FMC2_WRBUF_COMPLETE       ((uint32_t)0x00000000u)
#define FLASH_FMC2_WRBUF_NOCOMPLETE     ((uint32_t)0x00000001u)
#define FLASH_FMC2_WRBUF_WRITE          ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FMC2_R_WRKEY_MASK         ((uint32_t)0xFFFF0000u)
#define FLASH_FMC2_R_WRKEY_BIT          (16)
#define FLASH_FMC2_R_WRKEY_KEY1         ((uint32_t)0xA4420000u)
#define FLASH_FMC2_R_WRKEY_KEY2         ((uint32_t)0x71D50000u)

#define FLASH_FMC2_WRKEY_MASK           ((uint32_t)0x0000FFFFu)
#define FLASH_FMC2_WRKEY_KEY1           ((uint32_t)0x0000A442u)
#define FLASH_FMC2_WRKEY_KEY2           ((uint32_t)0x000071D5u)
/*----------*/

#define FLASH_BITBANDING_FMC2_WRBUF     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FMC2_OFFSET)*32)+(FLASH_FMC2_R_WRBUF_BIT*4))))

/******************************************************************************************
************************************ 8 FWBVAL *********************************************
******************************************************************************************/
#define FLASH_FWBVAL            (((FWBVAL_TypeDef*)(FLASH_BASE+FLASH_FWBVAL_OFFSET )))
#define FLASH_FWBVAL_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWBVAL_OFFSET)))
#define FLASH_BITBANDING_FWBVAL   (((BITBANDING_FWBVAL_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32))))

/*----------*/
#define FLASH_FWBVAL_R_FWB0_MASK        ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_R_FWB0_BIT         (0)
#define FLASH_FWBVAL_R_FWB0_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB0_NEWDATA     ((uint32_t)0x00000001u)

#define FLASH_FWBVAL_FWB0_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB0_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB0_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB1_MASK        ((uint32_t)0x00000002u)
#define FLASH_FWBVAL_R_FWB1_BIT         (1)
#define FLASH_FWBVAL_R_FWB1_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB1_NEWDATA     ((uint32_t)0x00000002u)

#define FLASH_FWBVAL_FWB1_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB1_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB1_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB2_MASK        ((uint32_t)0x00000004u)
#define FLASH_FWBVAL_R_FWB2_BIT         (2)
#define FLASH_FWBVAL_R_FWB2_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB2_NEWDATA     ((uint32_t)0x00000004u)

#define FLASH_FWBVAL_FWB2_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB2_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB2_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB3_MASK        ((uint32_t)0x00000008u)
#define FLASH_FWBVAL_R_FWB3_BIT         (3)
#define FLASH_FWBVAL_R_FWB3_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB3_NEWDATA     ((uint32_t)0x00000008u)

#define FLASH_FWBVAL_FWB3_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB3_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB3_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB4_MASK        ((uint32_t)0x00000010u)
#define FLASH_FWBVAL_R_FWB4_BIT         (4)
#define FLASH_FWBVAL_R_FWB4_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB4_NEWDATA     ((uint32_t)0x00000010u)

#define FLASH_FWBVAL_FWB4_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB4_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB4_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB5_MASK        ((uint32_t)0x00000020u)
#define FLASH_FWBVAL_R_FWB5_BIT         (5)
#define FLASH_FWBVAL_R_FWB5_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB5_NEWDATA     ((uint32_t)0x00000020u)

#define FLASH_FWBVAL_FWB5_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB5_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB5_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB6_MASK        ((uint32_t)0x00000040u)
#define FLASH_FWBVAL_R_FWB6_BIT         (6)
#define FLASH_FWBVAL_R_FWB6_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB6_NEWDATA     ((uint32_t)0x00000040u)

#define FLASH_FWBVAL_FWB6_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB6_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB6_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB7_MASK        ((uint32_t)0x00000080u)
#define FLASH_FWBVAL_R_FWB7_BIT         (7)
#define FLASH_FWBVAL_R_FWB7_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB7_NEWDATA     ((uint32_t)0x00000080u)

#define FLASH_FWBVAL_FWB7_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB7_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB7_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB8_MASK        ((uint32_t)0x00000100u)
#define FLASH_FWBVAL_R_FWB8_BIT         (8)
#define FLASH_FWBVAL_R_FWB8_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB8_NEWDATA     ((uint32_t)0x00000100u)

#define FLASH_FWBVAL_FWB8_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB8_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB8_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB9_MASK        ((uint32_t)0x00000200u)
#define FLASH_FWBVAL_R_FWB9_BIT         (9)
#define FLASH_FWBVAL_R_FWB9_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB9_NEWDATA     ((uint32_t)0x00000200u)

#define FLASH_FWBVAL_FWB9_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB9_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB9_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB10_MASK        ((uint32_t)0x00000400u)
#define FLASH_FWBVAL_R_FWB10_BIT         (10)
#define FLASH_FWBVAL_R_FWB10_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB10_NEWDATA     ((uint32_t)0x00000400u)

#define FLASH_FWBVAL_FWB10_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB10_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB10_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB11_MASK        ((uint32_t)0x00000800u)
#define FLASH_FWBVAL_R_FWB11_BIT         (11)
#define FLASH_FWBVAL_R_FWB11_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB11_NEWDATA     ((uint32_t)0x00000800u)

#define FLASH_FWBVAL_FWB11_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB11_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB11_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB12_MASK        ((uint32_t)0x00001000u)
#define FLASH_FWBVAL_R_FWB12_BIT         (12)
#define FLASH_FWBVAL_R_FWB12_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB12_NEWDATA     ((uint32_t)0x00001000u)

#define FLASH_FWBVAL_FWB12_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB12_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB12_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB13_MASK        ((uint32_t)0x00002000u)
#define FLASH_FWBVAL_R_FWB13_BIT         (13)
#define FLASH_FWBVAL_R_FWB13_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB13_NEWDATA     ((uint32_t)0x00002000u)

#define FLASH_FWBVAL_FWB13_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB13_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB13_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB14_MASK        ((uint32_t)0x00004000u)
#define FLASH_FWBVAL_R_FWB14_BIT         (14)
#define FLASH_FWBVAL_R_FWB14_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB14_NEWDATA     ((uint32_t)0x00004000u)

#define FLASH_FWBVAL_FWB14_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB14_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB14_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB15_MASK        ((uint32_t)0x00008000u)
#define FLASH_FWBVAL_R_FWB15_BIT         (15)
#define FLASH_FWBVAL_R_FWB15_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB15_NEWDATA     ((uint32_t)0x00008000u)

#define FLASH_FWBVAL_FWB15_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB15_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB15_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB16_MASK        ((uint32_t)0x00010000u)
#define FLASH_FWBVAL_R_FWB16_BIT         (16)
#define FLASH_FWBVAL_R_FWB16_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB16_NEWDATA     ((uint32_t)0x00010000u)

#define FLASH_FWBVAL_FWB16_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB16_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB16_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB17_MASK        ((uint32_t)0x00020000u)
#define FLASH_FWBVAL_R_FWB17_BIT         (17)
#define FLASH_FWBVAL_R_FWB17_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB17_NEWDATA     ((uint32_t)0x00020000u)

#define FLASH_FWBVAL_FWB17_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB17_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB17_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB18_MASK        ((uint32_t)0x00040000u)
#define FLASH_FWBVAL_R_FWB18_BIT         (18)
#define FLASH_FWBVAL_R_FWB18_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB18_NEWDATA     ((uint32_t)0x00040000u)

#define FLASH_FWBVAL_FWB18_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB18_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB18_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB19_MASK        ((uint32_t)0x00080000u)
#define FLASH_FWBVAL_R_FWB19_BIT         (19)
#define FLASH_FWBVAL_R_FWB19_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB19_NEWDATA     ((uint32_t)0x00080000u)

#define FLASH_FWBVAL_FWB19_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB19_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB19_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB20_MASK        ((uint32_t)0x00100000u)
#define FLASH_FWBVAL_R_FWB20_BIT         (20)
#define FLASH_FWBVAL_R_FWB20_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB20_NEWDATA     ((uint32_t)0x00100000u)

#define FLASH_FWBVAL_FWB20_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB20_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB20_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB21_MASK        ((uint32_t)0x00200000u)
#define FLASH_FWBVAL_R_FWB21_BIT         (21)
#define FLASH_FWBVAL_R_FWB21_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB21_NEWDATA     ((uint32_t)0x00200000u)

#define FLASH_FWBVAL_FWB21_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB21_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB21_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB22_MASK        ((uint32_t)0x00400000u)
#define FLASH_FWBVAL_R_FWB22_BIT         (22)
#define FLASH_FWBVAL_R_FWB22_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB22_NEWDATA     ((uint32_t)0x00400000u)

#define FLASH_FWBVAL_FWB22_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB22_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB22_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB23_MASK        ((uint32_t)0x00800000u)
#define FLASH_FWBVAL_R_FWB23_BIT         (23)
#define FLASH_FWBVAL_R_FWB23_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB23_NEWDATA     ((uint32_t)0x00800000u)

#define FLASH_FWBVAL_FWB23_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB23_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB23_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB24_MASK        ((uint32_t)0x01000000u)
#define FLASH_FWBVAL_R_FWB24_BIT         (24)
#define FLASH_FWBVAL_R_FWB24_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB24_NEWDATA     ((uint32_t)0x01000000u)

#define FLASH_FWBVAL_FWB24_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB24_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB24_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB25_MASK        ((uint32_t)0x02000000u)
#define FLASH_FWBVAL_R_FWB25_BIT         (25)
#define FLASH_FWBVAL_R_FWB25_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB25_NEWDATA     ((uint32_t)0x02000000u)

#define FLASH_FWBVAL_FWB25_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB25_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB25_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB26_MASK        ((uint32_t)0x04000000u)
#define FLASH_FWBVAL_R_FWB26_BIT         (26)
#define FLASH_FWBVAL_R_FWB26_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB26_NEWDATA     ((uint32_t)0x04000000u)

#define FLASH_FWBVAL_FWB26_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB26_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB26_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB27_MASK        ((uint32_t)0x08000000u)
#define FLASH_FWBVAL_R_FWB27_BIT         (27)
#define FLASH_FWBVAL_R_FWB27_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB27_NEWDATA     ((uint32_t)0x08000000u)

#define FLASH_FWBVAL_FWB27_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB27_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB27_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB28_MASK        ((uint32_t)0x10000000u)
#define FLASH_FWBVAL_R_FWB28_BIT         (28)
#define FLASH_FWBVAL_R_FWB28_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB28_NEWDATA     ((uint32_t)0x10000000u)

#define FLASH_FWBVAL_FWB28_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB28_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB28_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB29_MASK        ((uint32_t)0x20000000u)
#define FLASH_FWBVAL_R_FWB29_BIT         (29)
#define FLASH_FWBVAL_R_FWB29_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB29_NEWDATA     ((uint32_t)0x20000000u)

#define FLASH_FWBVAL_FWB29_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB29_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB29_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB30_MASK        ((uint32_t)0x40000000u)
#define FLASH_FWBVAL_R_FWB30_BIT         (30)
#define FLASH_FWBVAL_R_FWB30_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB30_NEWDATA     ((uint32_t)0x40000000u)

#define FLASH_FWBVAL_FWB30_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB30_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB30_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB31_MASK        ((uint32_t)0x80000000u)
#define FLASH_FWBVAL_R_FWB31_BIT         (31)
#define FLASH_FWBVAL_R_FWB31_NODATA      ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_R_FWB31_NEWDATA     ((uint32_t)0x80000000u)

#define FLASH_FWBVAL_FWB31_MASK          ((uint32_t)0x00000001u)
#define FLASH_FWBVAL_FWB31_NODATA        ((uint32_t)0x00000000u)
#define FLASH_FWBVAL_FWB31_NEWDATA       ((uint32_t)0x00000001u)
/*----------*/


#define FLASH_BITBANDING_FWBVAL_FWB0     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB0_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB1     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB1_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB2     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB2_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB3     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB3_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB4     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB4_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB5     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB5_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB6     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB6_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB7     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB7_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB8     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB8_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB9     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB9_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB10     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB10_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB11     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB11_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB12     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB12_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB13     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB13_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB14     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB14_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB15     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB15_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB16     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB16_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB17     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB17_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB18     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB18_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB19     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB19_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB20     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB20_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB21     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB21_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB22     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB22_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB23     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB23_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB24     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB24_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB25     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB25_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB26     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB26_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB27     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB27_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB28     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB28_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB29     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB29_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB30     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB30_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB31     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB31_BIT*4))))


/******************************************************************************************
************************************ 9-40 FWBn *********************************************
******************************************************************************************/
#define FLASH_FWBn              (((FWBn_TypeDef*)(FLASH_BASE+FLASH_FWBn_OFFSET )))
#define FLASH_BITBANDING_FWBn   (((BITBANDING_FWBn_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBn_OFFSET)*32))))

#define FLASH_FWB0              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB0_OFFSET )))
#define FLASH_FWB0_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB0_OFFSET)))
#define FLASH_BITBANDING_FWB0   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB0_OFFSET)*32))))

#define FLASH_FWB1              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB1_OFFSET )))
#define FLASH_FWB1_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB1_OFFSET)))
#define FLASH_BITBANDING_FWB1   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB1_OFFSET)*32))))

#define FLASH_FWB2              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB2_OFFSET )))
#define FLASH_FWB2_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB2_OFFSET)))
#define FLASH_BITBANDING_FWB2   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB2_OFFSET)*32))))

#define FLASH_FWB3              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB3_OFFSET )))
#define FLASH_FWB3_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB3_OFFSET)))
#define FLASH_BITBANDING_FWB3   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB3_OFFSET)*32))))

#define FLASH_FWB4              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB4_OFFSET )))
#define FLASH_FWB4_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB4_OFFSET)))
#define FLASH_BITBANDING_FWB4   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB4_OFFSET)*32))))

#define FLASH_FWB5              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB5_OFFSET )))
#define FLASH_FWB5_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB5_OFFSET)))
#define FLASH_BITBANDING_FWB5   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB5_OFFSET)*32))))

#define FLASH_FWB6              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB6_OFFSET )))
#define FLASH_FWB6_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB6_OFFSET)))
#define FLASH_BITBANDING_FWB6   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB6_OFFSET)*32))))

#define FLASH_FWB7              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB7_OFFSET )))
#define FLASH_FWB7_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB7_OFFSET)))
#define FLASH_BITBANDING_FWB7   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB7_OFFSET)*32))))

#define FLASH_FWB8              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB8_OFFSET )))
#define FLASH_FWB8_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB8_OFFSET)))
#define FLASH_BITBANDING_FWB8   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB8_OFFSET)*32))))

#define FLASH_FWB9              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB9_OFFSET )))
#define FLASH_FWB9_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB9_OFFSET)))
#define FLASH_BITBANDING_FWB9   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB9_OFFSET)*32))))

#define FLASH_FWB10              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB10_OFFSET )))
#define FLASH_FWB10_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB10_OFFSET)))
#define FLASH_BITBANDING_FWB10   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB10_OFFSET)*32))))

#define FLASH_FWB11              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB11_OFFSET )))
#define FLASH_FWB11_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB11_OFFSET)))
#define FLASH_BITBANDING_FWB11   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB11_OFFSET)*32))))

#define FLASH_FWB12              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB12_OFFSET )))
#define FLASH_FWB12_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB12_OFFSET)))
#define FLASH_BITBANDING_FWB12   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB12_OFFSET)*32))))

#define FLASH_FWB13              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB13_OFFSET )))
#define FLASH_FWB13_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB13_OFFSET)))
#define FLASH_BITBANDING_FWB13   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB13_OFFSET)*32))))

#define FLASH_FWB14              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB14_OFFSET )))
#define FLASH_FWB14_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB14_OFFSET)))
#define FLASH_BITBANDING_FWB14   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB14_OFFSET)*32))))

#define FLASH_FWB15              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB15_OFFSET )))
#define FLASH_FWB15_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB15_OFFSET)))
#define FLASH_BITBANDING_FWB15   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB15_OFFSET)*32))))

#define FLASH_FWB16              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB16_OFFSET )))
#define FLASH_FWB16_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB16_OFFSET)))
#define FLASH_BITBANDING_FWB16   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB16_OFFSET)*32))))

#define FLASH_FWB17              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB17_OFFSET )))
#define FLASH_FWB17_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB17_OFFSET)))
#define FLASH_BITBANDING_FWB17   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB17_OFFSET)*32))))

#define FLASH_FWB18              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB18_OFFSET )))
#define FLASH_FWB18_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB18_OFFSET)))
#define FLASH_BITBANDING_FWB18   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB18_OFFSET)*32))))

#define FLASH_FWB19              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB19_OFFSET )))
#define FLASH_FWB19_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB19_OFFSET)))
#define FLASH_BITBANDING_FWB19   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB19_OFFSET)*32))))

#define FLASH_FWB20              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB20_OFFSET )))
#define FLASH_FWB20_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB20_OFFSET)))
#define FLASH_BITBANDING_FWB20   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB20_OFFSET)*32))))

#define FLASH_FWB21              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB21_OFFSET )))
#define FLASH_FWB21_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB21_OFFSET)))
#define FLASH_BITBANDING_FWB21   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB21_OFFSET)*32))))

#define FLASH_FWB22              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB22_OFFSET )))
#define FLASH_FWB22_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB22_OFFSET)))
#define FLASH_BITBANDING_FWB22   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB22_OFFSET)*32))))

#define FLASH_FWB23              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB23_OFFSET )))
#define FLASH_FWB23_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB23_OFFSET)))
#define FLASH_BITBANDING_FWB23   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB23_OFFSET)*32))))

#define FLASH_FWB24              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB24_OFFSET )))
#define FLASH_FWB24_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB24_OFFSET)))
#define FLASH_BITBANDING_FWB24   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB24_OFFSET)*32))))

#define FLASH_FWB25              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB25_OFFSET )))
#define FLASH_FWB25_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB25_OFFSET)))
#define FLASH_BITBANDING_FWB25   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB25_OFFSET)*32))))

#define FLASH_FWB26              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB26_OFFSET )))
#define FLASH_FWB26_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB26_OFFSET)))
#define FLASH_BITBANDING_FWB26   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB26_OFFSET)*32))))

#define FLASH_FWB27              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB27_OFFSET )))
#define FLASH_FWB27_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB27_OFFSET)))
#define FLASH_BITBANDING_FWB27   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB27_OFFSET)*32))))

#define FLASH_FWB28              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB28_OFFSET )))
#define FLASH_FWB28_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB28_OFFSET)))
#define FLASH_BITBANDING_FWB28   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB28_OFFSET)*32))))

#define FLASH_FWB29              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB29_OFFSET )))
#define FLASH_FWB29_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB29_OFFSET)))
#define FLASH_BITBANDING_FWB29   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB29_OFFSET)*32))))

#define FLASH_FWB30              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB30_OFFSET )))
#define FLASH_FWB30_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB30_OFFSET)))
#define FLASH_BITBANDING_FWB30   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB30_OFFSET)*32))))

#define FLASH_FWB31              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB31_OFFSET )))
#define FLASH_FWB31_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB31_OFFSET)))
#define FLASH_BITBANDING_FWB31   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB31_OFFSET)*32))))

/******************************************************************************************
************************************ 41 FSIZE *********************************************
******************************************************************************************/
#define FLASH_FSIZE            (((FSIZE_TypeDef*)(FLASH_BASE+FLASH_FSIZE_OFFSET )))
#define FLASH_FSIZE_R          (*((volatile const uint32_t *)(FLASH_BASE+FLASH_FSIZE_OFFSET)))
#define FLASH_BITBANDING_FSIZE   (((BITBANDING_FSIZE_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FSIZE_OFFSET)*32))))

/*----------*/
#define FLASH_FSIZE_R_SIZE_MASK     ((uint32_t)0x0000FFFFu)
#define FLASH_FSIZE_R_SIZE_BIT      (0)
#define FLASH_FSIZE_R_SIZE_256KB    ((uint32_t)0x0000007Fu)

#define FLASH_FSIZE_SIZE_MASK       ((uint32_t)0x0000FFFFu)
#define FLASH_FSIZE_SIZE_256KB      ((uint32_t)0x0000007Fu)
/*----------*/

/******************************************************************************************
************************************ 42 SSIZE *********************************************
******************************************************************************************/
#define FLASH_SSIZE            (((SSIZE_TypeDef*)(FLASH_BASE+FLASH_SSIZE_OFFSET )))
#define FLASH_SSIZE_R          (*((volatile const uint32_t *)(FLASH_BASE+FLASH_SSIZE_OFFSET)))
#define FLASH_BITBANDING_SSIZE   (((BITBANDING_SSIZE_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_SSIZE_OFFSET)*32))))

/*----------*/
#define FLASH_SSIZE_R_SIZE_MASK     ((uint32_t)0x0000FFFFu)
#define FLASH_SSIZE_R_SIZE_BIT      (0)
#define FLASH_SSIZE_R_SIZE_32KB     ((uint32_t)0x0000007Fu)

#define FLASH_SSIZE_SIZE_MASK       ((uint32_t)0x0000FFFFu)
#define FLASH_SSIZE_SIZE_32KB       ((uint32_t)0x0000007Fu)
/*----------*/

/******************************************************************************************
************************************ 43 ROMSWMAP *********************************************
******************************************************************************************/
#define FLASH_ROMSWMAP              (((ROMSWMAP_TypeDef*)(FLASH_BASE+FLASH_ROMSWMAP_OFFSET )))
#define FLASH_ROMSWMAP_R            (*((volatile const uint32_t *)(FLASH_BASE+FLASH_ROMSWMAP_OFFSET)))
#define FLASH_BITBANDING_ROMSWMAP   (((BITBANDING_ROMSWMAP_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_ROMSWMAP_OFFSET)*32))))

/*----------*/
#define FLASH_ROMSWMAP_R_SAFERTOS_MASK      ((uint32_t)0x00000001u)
#define FLASH_ROMSWMAP_R_SAFERTOS_BIT       (0)
#define FLASH_ROMSWMAP_R_SAFERTOS_NOPRESENT ((uint32_t)0x00000000u)
#define FLASH_ROMSWMAP_R_SAFERTOS_PRESENT   ((uint32_t)0x00000001u)

#define FLASH_ROMSWMAP_SAFERTOS_MASK       ((uint32_t)0x00000001u)
#define FLASH_ROMSWMAP_SAFERTOS_NOPRESENT  ((uint32_t)0x00000000u)
#define FLASH_ROMSWMAP_SAFERTOS_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

#define FLASH_BITBANDING_ROMSWMAP_SAFERTOS     (*((volatile const uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_ROMSWMAP_OFFSET)*32)+(0*4))))


#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_REGISTER_H_ */
