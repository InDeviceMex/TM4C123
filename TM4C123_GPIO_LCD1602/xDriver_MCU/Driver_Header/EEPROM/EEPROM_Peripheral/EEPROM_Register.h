/*
 * EEPROM_Register.h
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_REGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_REGISTER_H_

#include <xDriver_MCU/Driver_Header/EEPROM/EEPROM_Peripheral/EEPROM_Struct.h>


#define EEPROM_BASE            (0x400AF000)
#define EEPROM_BITBANDING_BASE (0x42000000)
#define EEPROM_OFFSET          (0x000AF000)


#define EEPROM                 (((EEPROM_TypeDef*)(EEPPROM_BASE)))
#define EEPROM_BITBANDING      (((EEPROM_BITBANDING_TypeDef*)(EEPROM_BITBANDING_BASE+(EEPROM_OFFSET*32))))


#define EEPROM_EESIZE_OFFSET     (0x0000)
#define EEPROM_EEBLOCK_OFFSET    (0x0004)
#define EEPROM_EEOFFSET_OFFSET   (0x0008)
#define EEPROM_EERDWR_OFFSET     (0x0010)
#define EEPROM_EERDWRINC_OFFSET  (0x0014)
#define EEPROM_EEDONE_OFFSET     (0x0018)
#define EEPROM_EESUPP_OFFSET     (0x001C)
#define EEPROM_EEUNLOCK_OFFSET   (0x0020)
#define EEPROM_EEPROT_OFFSET     (0x0030)
#define EEPROM_EEPASS0_OFFSET    (0x0034)
#define EEPROM_EEPASS1_OFFSET    (0x0038)
#define EEPROM_EEPASS2_OFFSET    (0x003C)
#define EEPROM_EEINT_OFFSET      (0x0040)
#define EEPROM_EEHIDE_OFFSET     (0x0050)
#define EEPROM_EEDBGME_OFFSET    (0x0080)
#define EEPROM_EEPROMPP_OFFSET   (0x0FC0)

/******************************************************************************************
************************************ 1 EESIZE *********************************************
******************************************************************************************/
#define EEPROM_EESIZE            (((EESIZE_TypeDef*)(EEPROM_BASE+EEPROM_EESIZE_OFFSET )))
#define EEPROM_EESIZE_R          (*((volatile const uint32_t *)(EEPROM_BASE+EEPROM_EESIZE_OFFSET)))
#define EEPROM_BITBANDING_EESIZE (((BITBANDING_EESIZE_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EESIZE_OFFSET)*32))))

//--------
#define EEPROM_EESIZE_R_WORDCNT_MASK     (0x0000FFFF)
#define EEPROM_EESIZE_R_WORDCNT_BIT      (0)
#define EEPROM_EESIZE_R_WORDCNT_NUMBER   (0x00000200)

#define EEPROM_EESIZE_WORDCNT_MASK       (0x0000FFFF)
#define EEPROM_EESIZE_WORDCNT_NUMBER     (0x00000200)
//--------

//--------
#define EEPROM_EESIZE_R_BLKCNT_MASK     (0x07FF0000)
#define EEPROM_EESIZE_R_BLKCNT_BIT      (16)
#define EEPROM_EESIZE_R_BLKCNT_NUMBER   (0x00200000)

#define EEPROM_EESIZE_BLKCNT_MASK       (0x000007FF)
#define EEPROM_EESIZE_BLKCNT_NUMBER     (0x00000020)
//--------

/******************************************************************************************
************************************ 2 EEBLOCK *********************************************
******************************************************************************************/
#define EEPROM_EEBLOCK            (((EEBLOCK_TypeDef*)(EEPROM_BASE+EEPROM_EEBLOCK_OFFSET )))
#define EEPROM_EEBLOCK_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEBLOCK_OFFSET)))
#define EEPROM_BITBANDING_EEBLOCK      (((BITBANDING_EEBLOCK_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEBLOCK_OFFSET)*32))))

//--------
#define EEPROM_EEBLOCK_R_BLOCK_MASK     (0x0000FFFF)
#define EEPROM_EEBLOCK_R_BLOCK_BIT      (0)

#define EEPROM_EEBLOCK_BLOCK_MASK       (0x0000FFFF)
//--------

/******************************************************************************************
************************************ 3 EEOFFSET *********************************************
******************************************************************************************/
#define EEPROM_EEOFFSET            (((EEOFFSET_TypeDef*)(EEPROM_BASE+EEPROM_EEOFFSET_OFFSET )))
#define EEPROM_EEOFFSET_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEOFFSET_OFFSET)))
#define EEPROM_BITBANDING_EEOFFSET      (((BITBANDING_EEOFFSET_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEOFFSET_OFFSET)*32))))

//--------
#define EEPROM_EEOFFSET_R_OFFSET_MASK     (0x0000000F)
#define EEPROM_EEOFFSET_R_OFFSET_BIT      (0)

#define EEPROM_EEOFFSET_OFFSET_MASK       (0x0000000F)
//--------

/******************************************************************************************
************************************ 4 EERDWR *********************************************
******************************************************************************************/
#define EEPROM_EERDWR            (((EERDWR_TypeDef*)(EEPROM_BASE+EEPROM_EERDWR_OFFSET )))
#define EEPROM_EERDWR_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EERDWR_OFFSET)))
#define EEPROM_BITBANDING_EERDWR      (((BITBANDING_EERDWR_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EERDWR_OFFSET)*32))))

//--------
#define EEPROM_EERDWR_R_VALUE_MASK     (0xFFFFFFFF)
#define EEPROM_EERDWR_R_VALUE_BIT      (0)

#define EEPROM_EERDWR_VALUE_MASK       (0xFFFFFFFF)
//--------

/******************************************************************************************
************************************ 5 EERDWRINC *********************************************
******************************************************************************************/
#define EEPROM_EERDWRINC            (((EERDWRINC_TypeDef*)(EEPROM_BASE+EEPROM_EERDWRINC_OFFSET )))
#define EEPROM_EERDWRINC_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EERDWRINC_OFFSET)))
#define EEPROM_BITBANDING_EERDWRINC      (((BITBANDING_EERDWRINC_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EERDWRINC_OFFSET)*32))))

//--------
#define EEPROM_EERDWRINC_R_VALUE_MASK     (0xFFFFFFFF)
#define EEPROM_EERDWRINC_R_VALUE_BIT      (0)

#define EEPROM_EERDWRINC_VALUE_MASK       (0xFFFFFFFF)
//--------

/******************************************************************************************
************************************ 6 EEDONE *********************************************
******************************************************************************************/
#define EEPROM_EEDONE            (((EEDONE_TypeDef*)(EEPROM_BASE+EEPROM_EEDONE_OFFSET )))
#define EEPROM_EEDONE_R          (*((volatile const uint32_t *)(EEPROM_BASE+EEPROM_EEDONE_OFFSET)))
#define EEPROM_BITBANDING_EEDONE      (((BITBANDING_EEDONE_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEDONE_OFFSET)*32))))

//--------
#define EEPROM_EEDONE_R_WORKING_MASK     (0x00000001)
#define EEPROM_EEDONE_R_WORKING_BIT      (0)
#define EEPROM_EEDONE_R_WORKING_DIS      (0x00000000)
#define EEPROM_EEDONE_R_WORKING_EN       (0x00000001)

#define EEPROM_EEDONE_WORKING_MASK       (0x00000001)
#define EEPROM_EEDONE_WORKING_DIS        (0x00000000)
#define EEPROM_EEDONE_WORKING_EN         (0x00000001)
//--------

//--------
#define EEPROM_EEDONE_R_WKERASE_MASK     (0x00000004)
#define EEPROM_EEDONE_R_WKERASE_BIT      (2)
#define EEPROM_EEDONE_R_WKERASE_DIS      (0x00000000)
#define EEPROM_EEDONE_R_WKERASE_EN       (0x00000004)

#define EEPROM_EEDONE_WKERASE_MASK       (0x00000001)
#define EEPROM_EEDONE_WKERASE_DIS        (0x00000000)
#define EEPROM_EEDONE_WKERASE_EN         (0x00000001)
//--------

//--------
#define EEPROM_EEDONE_R_WKCOPY_MASK     (0x00000008)
#define EEPROM_EEDONE_R_WKCOPY_BIT      (3)
#define EEPROM_EEDONE_R_WKCOPY_DIS      (0x00000000)
#define EEPROM_EEDONE_R_WKCOPY_EN       (0x00000008)

#define EEPROM_EEDONE_WKCOPY_MASK       (0x00000001)
#define EEPROM_EEDONE_WKCOPY_DIS        (0x00000000)
#define EEPROM_EEDONE_WKCOPY_EN         (0x00000001)
//--------

//--------
#define EEPROM_EEDONE_R_NOPERM_MASK     (0x00000010)
#define EEPROM_EEDONE_R_NOPERM_BIT      (4)
#define EEPROM_EEDONE_R_NOPERM_NOERROR  (0x00000000)
#define EEPROM_EEDONE_R_NOPERM_ERROR    (0x00000010)

#define EEPROM_EEDONE_NOPERM_MASK       (0x00000001)
#define EEPROM_EEDONE_NOPERM_NOERROR    (0x00000000)
#define EEPROM_EEDONE_NOPERM_ERROR      (0x00000001)
//--------

//--------
#define EEPROM_EEDONE_R_WRBUSY_MASK     (0x00000020)
#define EEPROM_EEDONE_R_WRBUSY_BIT      (5)
#define EEPROM_EEDONE_R_WRBUSY_NOERROR  (0x00000000)
#define EEPROM_EEDONE_R_WRBUSY_ERROR    (0x00000020)

#define EEPROM_EEDONE_WRBUSY_MASK       (0x00000001)
#define EEPROM_EEDONE_WRBUSY_NOERROR    (0x00000000)
#define EEPROM_EEDONE_WRBUSY_ERROR      (0x00000001)
//--------

#define EEPROM_BITBANDING_EEDONE_WORKING     (*((volatile const uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEDONE_OFFSET)*32)+(EEPROM_EEDONE_R_WORKING_BIT*4))))
#define EEPROM_BITBANDING_EEDONE_WKERASE     (*((volatile const uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEDONE_OFFSET)*32)+(EEPROM_EEDONE_R_WKERASE_BIT*4))))
#define EEPROM_BITBANDING_EEDONE_WKCOPY      (*((volatile const uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEDONE_OFFSET)*32)+(EEPROM_EEDONE_R_WKCOPY_BIT*4))))
#define EEPROM_BITBANDING_EEDONE_NOPERM      (*((volatile const uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEDONE_OFFSET)*32)+(EEPROM_EEDONE_R_NOPERM_BIT*4))))
#define EEPROM_BITBANDING_EEDONE_WRBUSY      (*((volatile const uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEDONE_OFFSET)*32)+(EEPROM_EEDONE_R_WRBUSY_BIT*4))))

/******************************************************************************************
************************************7 EESUPP *********************************************
******************************************************************************************/
#define EEPROM_EESUPP            (((EESUPP_TypeDef*)(EEPROM_BASE+EEPROM_EESUPP_OFFSET )))
#define EEPROM_EESUPP_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EESUPP_OFFSET)))
#define EEPROM_BITBANDING_EESUPP      (((BITBANDING_EESUPP_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EESUPP_OFFSET)*32))))

//--------
#define EEPROM_EESUPP_R_START_MASK     (0x00000001)
#define EEPROM_EESUPP_R_START_BIT      (0)
#define EEPROM_EESUPP_R_START_DIS      (0x00000000)
#define EEPROM_EESUPP_R_START_EN       (0x00000001)

#define EEPROM_EESUPP_START_MASK       (0x00000001)
#define EEPROM_EESUPP_START_DIS        (0x00000000)
#define EEPROM_EESUPP_START_EN         (0x00000001)
//--------

//--------
#define EEPROM_EESUPP_R_EREQ_MASK     (0x00000002)
#define EEPROM_EESUPP_R_EREQ_BIT      (1)
#define EEPROM_EESUPP_R_EREQ_DIS      (0x00000000)
#define EEPROM_EESUPP_R_EREQ_EN       (0x00000002)

#define EEPROM_EESUPP_EREQ_MASK       (0x00000001)
#define EEPROM_EESUPP_EREQ_DIS        (0x00000000)
#define EEPROM_EESUPP_EREQ_EN         (0x00000001)
//--------

//--------
#define EEPROM_EESUPP_R_ERETRY_MASK     (0x00000004)
#define EEPROM_EESUPP_R_ERETRY_BIT      (2)
#define EEPROM_EESUPP_R_ERETRY_DIS      (0x00000000)
#define EEPROM_EESUPP_R_ERETRY_EN       (0x00000004)

#define EEPROM_EESUPP_ERETRY_MASK       (0x00000001)
#define EEPROM_EESUPP_ERETRY_DIS        (0x00000000)
#define EEPROM_EESUPP_ERETRY_EN         (0x00000001)
//--------

//--------
#define EEPROM_EESUPP_R_PRETRY_MASK     (0x00000008)
#define EEPROM_EESUPP_R_PRETRY_BIT      (3)
#define EEPROM_EESUPP_R_PRETRY_NOERROR  (0x00000000)
#define EEPROM_EESUPP_R_PRETRY_ERROR    (0x00000008)

#define EEPROM_EESUPP_PRETRY_MASK       (0x00000001)
#define EEPROM_EESUPP_PRETRY_NOERROR    (0x00000000)
#define EEPROM_EESUPP_PRETRY_ERROR      (0x00000001)
//--------

#define EEPROM_BITBANDING_EESUPP_START       (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EESUPP_OFFSET)*32)+(EEPROM_EESUPP_R_START_BIT*4))))
#define EEPROM_BITBANDING_EESUPP_EREQ        (*((volatile const uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EESUPP_OFFSET)*32)+(EEPROM_EESUPP_R_EREQ_BIT*4))))
#define EEPROM_BITBANDING_EESUPP_ERETRY      (*((volatile const uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EESUPP_OFFSET)*32)+(EEPROM_EESUPP_R_ERETRY_BIT*4))))
#define EEPROM_BITBANDING_EESUPP_PRETRY      (*((volatile const uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EESUPP_OFFSET)*32)+(EEPROM_EESUPP_R_PRETRY_BIT*4))))

/******************************************************************************************
************************************8 EEUNLOCK *********************************************
******************************************************************************************/
#define EEPROM_EEUNLOCK            (((EEUNLOCK_TypeDef*)(EEPROM_BASE+EEPROM_EEUNLOCK_OFFSET )))
#define EEPROM_EEUNLOCK_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEUNLOCK_OFFSET)))
#define EEPROM_BITBANDING_EEUNLOCK      (((BITBANDING_EEUNLOCK_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEUNLOCK_OFFSET)*32))))

//--------
#define EEPROM_EEUNLOCK_R_UNLOCK_MASK     (0xFFFFFFFF)
#define EEPROM_EEUNLOCK_R_UNLOCK_BIT      (0)

#define EEPROM_EEUNLOCK_UNLOCK_MASK       (0xFFFFFFFF)
//--------

/******************************************************************************************
************************************ 9 EEPROT *********************************************
******************************************************************************************/
#define EEPROM_EEPROT            (((EEPROT_TypeDef*)(EEPROM_BASE+EEPROM_EEPROT_OFFSET )))
#define EEPROM_EEPROT_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEPROT_OFFSET)))
#define EEPROM_BITBANDING_EEPROT      (((BITBANDING_EEPROT_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEPROT_OFFSET)*32))))

//--------
#define EEPROM_EEPROT_R_PROT_MASK           (0x00000007)
#define EEPROM_EEPROT_R_PROT_BIT            (0)
#define EEPROM_EEPROT_R_PROT_NOPASS_RDWR    (0x00000000)
#define EEPROM_EEPROT_R_PROT_PASS_RDWR      (0x00000001)
#define EEPROM_EEPROT_R_PROT_NOPASS_RD      (0x00000002)

#define EEPROM_EEPROT_PROT_MASK           (0x00000007)
#define EEPROM_EEPROT_PROT_NOPASS_RDWR    (0x00000000)
#define EEPROM_EEPROT_PROT_PASS_RDWR      (0x00000001)
#define EEPROM_EEPROT_PROT_NOPASS_RD      (0x00000002)
//--------

//--------
#define EEPROM_EEPROT_R_ACC_MASK           (0x00000008)
#define EEPROM_EEPROT_R_ACC_BIT            (3)
#define EEPROM_EEPROT_R_ACC_BOTH           (0x00000000)
#define EEPROM_EEPROT_R_ACC_SUPERVISOR     (0x00000008)

#define EEPROM_EEPROT_ACC_MASK           (0x00000001)
#define EEPROM_EEPROT_ACC_BOTH           (0x00000000)
#define EEPROM_EEPROT_ACC_SUPERVISOR     (0x00000001)
//--------

#define EEPROM_BITBANDING_EEPROT_ACC       (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEPROT_OFFSET)*32)+(EEPROM_EEPROT_R_ACC_BIT*4))))

/******************************************************************************************
************************************ 10 EEPASS0 *********************************************
******************************************************************************************/
#define EEPROM_EEPASS0            (((EEPASS_TypeDef*)(EEPROM_BASE+EEPROM_EEPASS0_OFFSET )))
#define EEPROM_EEPASS0_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEPASS0_OFFSET)))
#define EEPROM_BITBANDING_EEPASS0      (((BITBANDING_EEPASS_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEPASS0_OFFSET)*32))))

//--------
#define EEPROM_EEPASS0_R_PASS_MASK     (0xFFFFFFFF)
#define EEPROM_EEPASS0_R_PASS_BIT      (0)
#define EEPROM_EEPASS0_R_PASS_NOSET    (0x00000000)
#define EEPROM_EEPASS0_R_PASS_SET      (0x00000001)

#define EEPROM_EEPASS0_PASS_MASK       (0xFFFFFFFF)
#define EEPROM_EEPASS0_PASS_NOSET      (0x00000000)
#define EEPROM_EEPASS0_PASS_SET        (0x00000001)
//--------

/******************************************************************************************
************************************11 EEPASS1 *********************************************
******************************************************************************************/
#define EEPROM_EEPASS1            (((EEPASS_TypeDef*)(EEPROM_BASE+EEPROM_EEPASS1_OFFSET )))
#define EEPROM_EEPASS1_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEPASS1_OFFSET)))
#define EEPROM_BITBANDING_EEPASS1      (((BITBANDING_EEPASS_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEPASS1_OFFSET)*32))))

//--------
#define EEPROM_EEPASS1_R_PASS_MASK     (0xFFFFFFFF)
#define EEPROM_EEPASS1_R_PASS_BIT      (0)
#define EEPROM_EEPASS1_R_PASS_NOSET    (0x00000000)
#define EEPROM_EEPASS1_R_PASS_SET      (0x00000001)

#define EEPROM_EEPASS1_PASS_MASK       (0xFFFFFFFF)
#define EEPROM_EEPASS1_PASS_NOSET      (0x00000000)
#define EEPROM_EEPASS1_PASS_SET        (0x00000001)
//--------

/******************************************************************************************
************************************12 EEPASS2 *********************************************
******************************************************************************************/
#define EEPROM_EEPASS2            (((EEPASS_TypeDef*)(EEPROM_BASE+EEPROM_EEPASS2_OFFSET )))
#define EEPROM_EEPASS2_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEPASS2_OFFSET)))
#define EEPROM_BITBANDING_EEPASS2      (((BITBANDING_EEPASS_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEPASS2_OFFSET)*32))))

//--------
#define EEPROM_EEPASS2_R_PASS_MASK     (0xFFFFFFFF)
#define EEPROM_EEPASS2_R_PASS_BIT      (0)
#define EEPROM_EEPASS2_R_PASS_NOSET    (0x00000000)
#define EEPROM_EEPASS2_R_PASS_SET      (0x00000001)

#define EEPROM_EEPASS2_PASS_MASK       (0xFFFFFFFF)
#define EEPROM_EEPASS2_PASS_NOSET      (0x00000000)
#define EEPROM_EEPASS2_PASS_SET        (0x00000001)
//--------

/******************************************************************************************
************************************13 EEINT *********************************************
******************************************************************************************/
#define EEPROM_EEINT            (((EEINT_TypeDef*)(EEPROM_BASE+EEPROM_EEINT_OFFSET )))
#define EEPROM_EEINT_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEINT_OFFSET)))
#define EEPROM_BITBANDING_EEINT      (((BITBANDING_EEINT_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEINT_OFFSET)*32))))

//--------
#define EEPROM_EEINT_R_INT_MASK       (0x00000001)
#define EEPROM_EEINT_R_INT_BIT        (0)
#define EEPROM_EEINT_R_INT_NOOCCUR    (0x00000000)
#define EEPROM_EEINT_R_INT_OCCUR      (0x00000001)

#define EEPROM_EEINT_INT_MASK         (0x00000001)
#define EEPROM_EEINT_INT_NOOCCUR      (0x00000000)
#define EEPROM_EEINT_INT_OCCUR        (0x00000001)
//--------

#define EEPROM_BITBANDING_EEINT_INT       (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEINT_OFFSET)*32)+(EEPROM_EEINT_R_INT_BIT*4))))

/******************************************************************************************
************************************14 EEHIDE *********************************************
******************************************************************************************/
#define EEPROM_EEHIDE            (((EEHIDE_TypeDef*)(EEPROM_BASE+EEPROM_EEHIDE_OFFSET )))
#define EEPROM_EEHIDE_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEHIDE_OFFSET)))
#define EEPROM_BITBANDING_EEHIDE      (((BITBANDING_EEHIDE_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32))))

//--------
#define EEPROM_EEHIDE_R_H1_MASK       (0x00000002)
#define EEPROM_EEHIDE_R_H1_BIT        (1)
#define EEPROM_EEHIDE_R_H1_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H1_HIDE       (0x00000002)

#define EEPROM_EEHIDE_H1_MASK         (0x00000001)
#define EEPROM_EEHIDE_H1_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H1_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H2_MASK       (0x00000004)
#define EEPROM_EEHIDE_R_H2_BIT        (2)
#define EEPROM_EEHIDE_R_H2_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H2_HIDE       (0x00000004)

#define EEPROM_EEHIDE_H2_MASK         (0x00000001)
#define EEPROM_EEHIDE_H2_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H2_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H3_MASK       (0x00000008)
#define EEPROM_EEHIDE_R_H3_BIT        (3)
#define EEPROM_EEHIDE_R_H3_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H3_HIDE       (0x00000008)

#define EEPROM_EEHIDE_H3_MASK         (0x00000001)
#define EEPROM_EEHIDE_H3_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H3_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H4_MASK       (0x00000010)
#define EEPROM_EEHIDE_R_H4_BIT        (4)
#define EEPROM_EEHIDE_R_H4_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H4_HIDE       (0x000000010)

#define EEPROM_EEHIDE_H4_MASK         (0x00000001)
#define EEPROM_EEHIDE_H4_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H4_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H5_MASK       (0x00000020)
#define EEPROM_EEHIDE_R_H5_BIT        (5)
#define EEPROM_EEHIDE_R_H5_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H5_HIDE       (0x00000020)

#define EEPROM_EEHIDE_H5_MASK         (0x00000001)
#define EEPROM_EEHIDE_H5_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H5_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H6_MASK       (0x00000040)
#define EEPROM_EEHIDE_R_H6_BIT        (6)
#define EEPROM_EEHIDE_R_H6_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H6_HIDE       (0x00000040)

#define EEPROM_EEHIDE_H6_MASK         (0x00000001)
#define EEPROM_EEHIDE_H6_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H6_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H7_MASK       (0x00000080)
#define EEPROM_EEHIDE_R_H7_BIT        (7)
#define EEPROM_EEHIDE_R_H7_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H7_HIDE       (0x00000080)

#define EEPROM_EEHIDE_H7_MASK         (0x00000001)
#define EEPROM_EEHIDE_H7_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H7_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H8_MASK       (0x00000100)
#define EEPROM_EEHIDE_R_H8_BIT        (8)
#define EEPROM_EEHIDE_R_H8_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H8_HIDE       (0x00000100)

#define EEPROM_EEHIDE_H8_MASK         (0x00000001)
#define EEPROM_EEHIDE_H8_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H8_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H9_MASK       (0x00000200)
#define EEPROM_EEHIDE_R_H9_BIT        (9)
#define EEPROM_EEHIDE_R_H9_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H9_HIDE       (0x00000200)

#define EEPROM_EEHIDE_H9_MASK         (0x00000001)
#define EEPROM_EEHIDE_H9_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H9_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H10_MASK       (0x00000400)
#define EEPROM_EEHIDE_R_H10_BIT        (10)
#define EEPROM_EEHIDE_R_H10_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H10_HIDE       (0x00000400)

#define EEPROM_EEHIDE_H10_MASK         (0x00000001)
#define EEPROM_EEHIDE_H10_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H10_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H11_MASK       (0x00000800)
#define EEPROM_EEHIDE_R_H11_BIT        (11)
#define EEPROM_EEHIDE_R_H11_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H11_HIDE       (0x00000800)

#define EEPROM_EEHIDE_H11_MASK         (0x00000001)
#define EEPROM_EEHIDE_H11_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H11_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H12_MASK       (0x00001000)
#define EEPROM_EEHIDE_R_H12_BIT        (12)
#define EEPROM_EEHIDE_R_H12_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H12_HIDE       (0x00001000)

#define EEPROM_EEHIDE_H12_MASK         (0x00000001)
#define EEPROM_EEHIDE_H12_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H12_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H13_MASK       (0x00002000)
#define EEPROM_EEHIDE_R_H13_BIT        (13)
#define EEPROM_EEHIDE_R_H13_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H13_HIDE       (0x00002000)

#define EEPROM_EEHIDE_H13_MASK         (0x00000001)
#define EEPROM_EEHIDE_H13_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H13_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H14_MASK       (0x00004000)
#define EEPROM_EEHIDE_R_H14_BIT        (14)
#define EEPROM_EEHIDE_R_H14_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H14_HIDE       (0x00004000)

#define EEPROM_EEHIDE_H14_MASK         (0x00000001)
#define EEPROM_EEHIDE_H14_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H14_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H15_MASK       (0x00008000)
#define EEPROM_EEHIDE_R_H15_BIT        (15)
#define EEPROM_EEHIDE_R_H15_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H15_HIDE       (0x00008000)

#define EEPROM_EEHIDE_H15_MASK         (0x00000001)
#define EEPROM_EEHIDE_H15_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H15_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H16_MASK       (0x00010000)
#define EEPROM_EEHIDE_R_H16_BIT        (16)
#define EEPROM_EEHIDE_R_H16_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H16_HIDE       (0x00010000)

#define EEPROM_EEHIDE_H16_MASK         (0x00000001)
#define EEPROM_EEHIDE_H16_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H16_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H17_MASK       (0x00020000)
#define EEPROM_EEHIDE_R_H17_BIT        (17)
#define EEPROM_EEHIDE_R_H17_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H17_HIDE       (0x00020000)

#define EEPROM_EEHIDE_H17_MASK         (0x00000001)
#define EEPROM_EEHIDE_H17_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H17_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H18_MASK       (0x00040000)
#define EEPROM_EEHIDE_R_H18_BIT        (18)
#define EEPROM_EEHIDE_R_H18_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H18_HIDE       (0x00040000)

#define EEPROM_EEHIDE_H18_MASK         (0x00000001)
#define EEPROM_EEHIDE_H18_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H18_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H19_MASK       (0x00080000)
#define EEPROM_EEHIDE_R_H19_BIT        (19)
#define EEPROM_EEHIDE_R_H19_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H19_HIDE       (0x00080000)

#define EEPROM_EEHIDE_H19_MASK         (0x00000001)
#define EEPROM_EEHIDE_H19_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H19_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H20_MASK       (0x00100000)
#define EEPROM_EEHIDE_R_H20_BIT        (20)
#define EEPROM_EEHIDE_R_H20_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H20_HIDE       (0x00100000)

#define EEPROM_EEHIDE_H20_MASK         (0x00000001)
#define EEPROM_EEHIDE_H20_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H20_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H21_MASK       (0x00200000)
#define EEPROM_EEHIDE_R_H21_BIT        (21)
#define EEPROM_EEHIDE_R_H21_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H21_HIDE       (0x00200000)

#define EEPROM_EEHIDE_H21_MASK         (0x00000001)
#define EEPROM_EEHIDE_H21_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H21_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H22_MASK       (0x00400000)
#define EEPROM_EEHIDE_R_H22_BIT        (22)
#define EEPROM_EEHIDE_R_H22_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H22_HIDE       (0x00400000)

#define EEPROM_EEHIDE_H22_MASK         (0x00000001)
#define EEPROM_EEHIDE_H22_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H22_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H23_MASK       (0x00800000)
#define EEPROM_EEHIDE_R_H23_BIT        (23)
#define EEPROM_EEHIDE_R_H23_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H23_HIDE       (0x00800000)

#define EEPROM_EEHIDE_H23_MASK         (0x00000001)
#define EEPROM_EEHIDE_H23_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H23_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H24_MASK       (0x01000000)
#define EEPROM_EEHIDE_R_H24_BIT        (24)
#define EEPROM_EEHIDE_R_H24_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H24_HIDE       (0x01000000)

#define EEPROM_EEHIDE_H24_MASK         (0x00000001)
#define EEPROM_EEHIDE_H24_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H24_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H25_MASK       (0x02000000)
#define EEPROM_EEHIDE_R_H25_BIT        (25)
#define EEPROM_EEHIDE_R_H25_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H25_HIDE       (0x02000000)

#define EEPROM_EEHIDE_H25_MASK         (0x00000001)
#define EEPROM_EEHIDE_H25_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H25_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H26_MASK       (0x04000000)
#define EEPROM_EEHIDE_R_H26_BIT        (26)
#define EEPROM_EEHIDE_R_H26_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H26_HIDE       (0x04000000)

#define EEPROM_EEHIDE_H26_MASK         (0x00000001)
#define EEPROM_EEHIDE_H26_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H26_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H27_MASK       (0x08000000)
#define EEPROM_EEHIDE_R_H27_BIT        (27)
#define EEPROM_EEHIDE_R_H27_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H27_HIDE       (0x08000000)

#define EEPROM_EEHIDE_H27_MASK         (0x00000001)
#define EEPROM_EEHIDE_H27_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H27_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H28_MASK       (0x10000000)
#define EEPROM_EEHIDE_R_H28_BIT        (28)
#define EEPROM_EEHIDE_R_H28_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H28_HIDE       (0x10000000)

#define EEPROM_EEHIDE_H28_MASK         (0x00000001)
#define EEPROM_EEHIDE_H28_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H28_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H29_MASK       (0x20000000)
#define EEPROM_EEHIDE_R_H29_BIT        (29)
#define EEPROM_EEHIDE_R_H29_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H29_HIDE       (0x20000000)

#define EEPROM_EEHIDE_H29_MASK         (0x00000001)
#define EEPROM_EEHIDE_H29_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H29_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H30_MASK       (0x40000000)
#define EEPROM_EEHIDE_R_H30_BIT        (30)
#define EEPROM_EEHIDE_R_H30_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H30_HIDE       (0x40000000)

#define EEPROM_EEHIDE_H30_MASK         (0x00000001)
#define EEPROM_EEHIDE_H30_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H30_HIDE         (0x00000001)
//--------

//--------
#define EEPROM_EEHIDE_R_H31_MASK       (0x80000000)
#define EEPROM_EEHIDE_R_H31_BIT        (31)
#define EEPROM_EEHIDE_R_H31_NOHIDE     (0x00000000)
#define EEPROM_EEHIDE_R_H31_HIDE       (0x80000000)

#define EEPROM_EEHIDE_H31_MASK         (0x00000001)
#define EEPROM_EEHIDE_H31_NOHIDE       (0x00000000)
#define EEPROM_EEHIDE_H31_HIDE         (0x00000001)
//--------


#define EEPROM_BITBANDING_EEHIDE_H1       (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H1_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H2       (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H2_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H3       (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H3_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H4       (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H4_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H5       (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H5_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H6       (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H6_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H7       (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H7_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H8       (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H8_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H9       (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H9_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H10      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H10_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H11      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H11_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H12      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H12_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H13      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H13_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H14      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H14_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H15      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H15_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H16      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H16_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H17      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H17_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H18      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H18_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H19      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H19_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H20      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H20_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H21      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H21_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H22      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H22_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H23      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H23_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H24      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H24_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H25      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H25_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H26      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H26_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H27      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H27_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H28      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H28_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H29      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H29_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H30      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H30_BIT*4))))
#define EEPROM_BITBANDING_EEHIDE_H31      (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32)+(EEPROM_EEHIDE_R_H31_BIT*4))))

/******************************************************************************************
************************************15 EEDBGME *********************************************
******************************************************************************************/
#define EEPROM_EEDBGME            (((EEDBGME_TypeDef*)(EEPROM_BASE+EEPROM_EEDBGME_OFFSET )))
#define EEPROM_EEDBGME_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEDBGME_OFFSET)))
#define EEPROM_BITBANDING_EEDBGME (((BITBANDING_EEDBGME_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEDBGME_OFFSET)*32))))

//--------
#define EEPROM_EEDBGME_R_ME_MASK       (0x00000001)
#define EEPROM_EEDBGME_R_ME_BIT        (0)
#define EEPROM_EEDBGME_R_ME_NA         (0x00000000)
#define EEPROM_EEDBGME_R_ME_ERASE      (0x00000001)

#define EEPROM_EEDBGME_ME_MASK         (0x00000001)
#define EEPROM_EEDBGME_ME_NA           (0x00000000)
#define EEPROM_EEDBGME_ME_ERASE        (0x00000001)
//--------

//--------
#define EEPROM_EEDBGME_R_KEY_MASK       (0xFFFF0000)
#define EEPROM_EEDBGME_R_KEY_BIT        (0)
#define EEPROM_EEDBGME_R_KEY_ERASE      (0xE37B0000)

#define EEPROM_EEDBGME_KEY_MASK         (0x0000FFFF)
#define EEPROM_EEDBGME_KEY_ERASE        (0x0000E37B)
//--------

#define EEPROM_BITBANDING_EEDBGME_ME       (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEDBGME_OFFSET)*32)+(EEPROM_EEDBGME_R_ME_BIT*4))))

/******************************************************************************************
************************************16 EEPROMPP *********************************************
******************************************************************************************/
#define EEPROM_EEPROMPP            (((EEPROMPP_TypeDef*)(EEPROM_BASE+EEPROM_EEPROMPP_OFFSET )))
#define EEPROM_EEPROMPP_R          (*((volatile const uint32_t *)(EEPROM_BASE+EEPROM_EEPROMPP_OFFSET)))
#define EEPROM_BITBANDING_EEPROMPP      (((BITBANDING_EEPROMPP_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEPROMPP_OFFSET)*32))))

//--------
#define EEPROM_EEPROMPP_R_SIZE_MASK       (0x0000001F)
#define EEPROM_EEPROMPP_R_SIZE_BIT        (0)
#define EEPROM_EEPROMPP_R_SIZE_2KB        (0x0000001F)

#define EEPROM_EEPROMPP_SIZE_MASK         (0x0000001F)
#define EEPROM_EEPROMPP_SIZE_2KB          (0x0000001F)
//--------


#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_REGISTER_H_ */
