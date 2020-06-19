/*
 * EEPROM_Register.h
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_REGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_REGISTER_H_

#include <xDriver_MCU/Driver_Header/EEPROM/EEPROM_Peripheral/EEPROM_Struct.h>


#define EEPROM_BASE            ((uint32_t)0x400AF000u)
#define EEPROM_BITBANDING_BASE ((uint32_t)0x42000000u)
#define EEPROM_OFFSET          ((uint32_t)0x000AF000u)


#define EEPROM                 (((EEPROM_TypeDef*)(EEPPROM_BASE)))
#define EEPROM_BITBANDING      (((EEPROM_BITBANDING_TypeDef*)(EEPROM_BITBANDING_BASE+(EEPROM_OFFSET*32))))


#define EEPROM_EESIZE_OFFSET     ((uint32_t)0x0000u)
#define EEPROM_EEBLOCK_OFFSET    ((uint32_t)0x0004u)
#define EEPROM_EEOFFSET_OFFSET   ((uint32_t)0x0008u)
#define EEPROM_EERDWR_OFFSET     ((uint32_t)0x0010u)
#define EEPROM_EERDWRINC_OFFSET  ((uint32_t)0x0014u)
#define EEPROM_EEDONE_OFFSET     ((uint32_t)0x0018u)
#define EEPROM_EESUPP_OFFSET     ((uint32_t)0x001Cu)
#define EEPROM_EEUNLOCK_OFFSET   ((uint32_t)0x0020u)
#define EEPROM_EEPROT_OFFSET     ((uint32_t)0x0030u)
#define EEPROM_EEPASS0_OFFSET    ((uint32_t)0x0034u)
#define EEPROM_EEPASS1_OFFSET    ((uint32_t)0x0038u)
#define EEPROM_EEPASS2_OFFSET    ((uint32_t)0x003Cu)
#define EEPROM_EEINT_OFFSET      ((uint32_t)0x0040u)
#define EEPROM_EEHIDE_OFFSET     ((uint32_t)0x0050u)
#define EEPROM_EEDBGME_OFFSET    ((uint32_t)0x0080u)
#define EEPROM_EEPROMPP_OFFSET   ((uint32_t)0x0FC0u)

/******************************************************************************************
************************************ 1 EESIZE *********************************************
******************************************************************************************/
#define EEPROM_EESIZE            (((EESIZE_TypeDef*)(EEPROM_BASE+EEPROM_EESIZE_OFFSET )))
#define EEPROM_EESIZE_R          (*((volatile const uint32_t *)(EEPROM_BASE+EEPROM_EESIZE_OFFSET)))
#define EEPROM_BITBANDING_EESIZE (((BITBANDING_EESIZE_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EESIZE_OFFSET)*32))))

/*----------*/
#define EEPROM_EESIZE_R_WORDCNT_MASK     ((uint32_t)0x0000FFFFu)
#define EEPROM_EESIZE_R_WORDCNT_BIT      (0)
#define EEPROM_EESIZE_R_WORDCNT_NUMBER   ((uint32_t)0x00000200u)

#define EEPROM_EESIZE_WORDCNT_MASK       ((uint32_t)0x0000FFFFu)
#define EEPROM_EESIZE_WORDCNT_NUMBER     ((uint32_t)0x00000200u)
/*----------*/

/*----------*/
#define EEPROM_EESIZE_R_BLKCNT_MASK     ((uint32_t)0x07FF0000u)
#define EEPROM_EESIZE_R_BLKCNT_BIT      (16)
#define EEPROM_EESIZE_R_BLKCNT_NUMBER   ((uint32_t)0x00200000u)

#define EEPROM_EESIZE_BLKCNT_MASK       ((uint32_t)0x000007FFu)
#define EEPROM_EESIZE_BLKCNT_NUMBER     ((uint32_t)0x00000020u)
/*----------*/

/******************************************************************************************
************************************ 2 EEBLOCK *********************************************
******************************************************************************************/
#define EEPROM_EEBLOCK            (((EEBLOCK_TypeDef*)(EEPROM_BASE+EEPROM_EEBLOCK_OFFSET )))
#define EEPROM_EEBLOCK_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEBLOCK_OFFSET)))
#define EEPROM_BITBANDING_EEBLOCK      (((BITBANDING_EEBLOCK_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEBLOCK_OFFSET)*32))))

/*----------*/
#define EEPROM_EEBLOCK_R_BLOCK_MASK     ((uint32_t)0x0000FFFFu)
#define EEPROM_EEBLOCK_R_BLOCK_BIT      (0)

#define EEPROM_EEBLOCK_BLOCK_MASK       ((uint32_t)0x0000FFFFu)
/*----------*/

/******************************************************************************************
************************************ 3 EEOFFSET *********************************************
******************************************************************************************/
#define EEPROM_EEOFFSET            (((EEOFFSET_TypeDef*)(EEPROM_BASE+EEPROM_EEOFFSET_OFFSET )))
#define EEPROM_EEOFFSET_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEOFFSET_OFFSET)))
#define EEPROM_BITBANDING_EEOFFSET      (((BITBANDING_EEOFFSET_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEOFFSET_OFFSET)*32))))

/*----------*/
#define EEPROM_EEOFFSET_R_OFFSET_MASK     ((uint32_t)0x0000000Fu)
#define EEPROM_EEOFFSET_R_OFFSET_BIT      (0)

#define EEPROM_EEOFFSET_OFFSET_MASK       ((uint32_t)0x0000000Fu)
/*----------*/

/******************************************************************************************
************************************ 4 EERDWR *********************************************
******************************************************************************************/
#define EEPROM_EERDWR            (((EERDWR_TypeDef*)(EEPROM_BASE+EEPROM_EERDWR_OFFSET )))
#define EEPROM_EERDWR_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EERDWR_OFFSET)))
#define EEPROM_BITBANDING_EERDWR      (((BITBANDING_EERDWR_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EERDWR_OFFSET)*32))))

/*----------*/
#define EEPROM_EERDWR_R_VALUE_MASK     ((uint32_t)0xFFFFFFFFu)
#define EEPROM_EERDWR_R_VALUE_BIT      (0)

#define EEPROM_EERDWR_VALUE_MASK       ((uint32_t)0xFFFFFFFFu)
/*----------*/

/******************************************************************************************
************************************ 5 EERDWRINC *********************************************
******************************************************************************************/
#define EEPROM_EERDWRINC            (((EERDWRINC_TypeDef*)(EEPROM_BASE+EEPROM_EERDWRINC_OFFSET )))
#define EEPROM_EERDWRINC_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EERDWRINC_OFFSET)))
#define EEPROM_BITBANDING_EERDWRINC      (((BITBANDING_EERDWRINC_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EERDWRINC_OFFSET)*32))))

/*----------*/
#define EEPROM_EERDWRINC_R_VALUE_MASK     ((uint32_t)0xFFFFFFFFu)
#define EEPROM_EERDWRINC_R_VALUE_BIT      (0)

#define EEPROM_EERDWRINC_VALUE_MASK       ((uint32_t)0xFFFFFFFFu)
/*----------*/

/******************************************************************************************
************************************ 6 EEDONE *********************************************
******************************************************************************************/
#define EEPROM_EEDONE            (((EEDONE_TypeDef*)(EEPROM_BASE+EEPROM_EEDONE_OFFSET )))
#define EEPROM_EEDONE_R          (*((volatile const uint32_t *)(EEPROM_BASE+EEPROM_EEDONE_OFFSET)))
#define EEPROM_BITBANDING_EEDONE      (((BITBANDING_EEDONE_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEDONE_OFFSET)*32))))

/*----------*/
#define EEPROM_EEDONE_R_WORKING_MASK     ((uint32_t)0x00000001u)
#define EEPROM_EEDONE_R_WORKING_BIT      (0)
#define EEPROM_EEDONE_R_WORKING_DIS      ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_R_WORKING_EN       ((uint32_t)0x00000001u)

#define EEPROM_EEDONE_WORKING_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EEDONE_WORKING_DIS        ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_WORKING_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEDONE_R_WKERASE_MASK     ((uint32_t)0x00000004u)
#define EEPROM_EEDONE_R_WKERASE_BIT      (2)
#define EEPROM_EEDONE_R_WKERASE_DIS      ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_R_WKERASE_EN       ((uint32_t)0x00000004u)

#define EEPROM_EEDONE_WKERASE_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EEDONE_WKERASE_DIS        ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_WKERASE_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEDONE_R_WKCOPY_MASK     ((uint32_t)0x00000008u)
#define EEPROM_EEDONE_R_WKCOPY_BIT      (3)
#define EEPROM_EEDONE_R_WKCOPY_DIS      ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_R_WKCOPY_EN       ((uint32_t)0x00000008u)

#define EEPROM_EEDONE_WKCOPY_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EEDONE_WKCOPY_DIS        ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_WKCOPY_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEDONE_R_NOPERM_MASK     ((uint32_t)0x00000010u)
#define EEPROM_EEDONE_R_NOPERM_BIT      (4)
#define EEPROM_EEDONE_R_NOPERM_NOERROR  ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_R_NOPERM_ERROR    ((uint32_t)0x00000010u)

#define EEPROM_EEDONE_NOPERM_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EEDONE_NOPERM_NOERROR    ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_NOPERM_ERROR      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEDONE_R_WRBUSY_MASK     ((uint32_t)0x00000020u)
#define EEPROM_EEDONE_R_WRBUSY_BIT      (5)
#define EEPROM_EEDONE_R_WRBUSY_NOERROR  ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_R_WRBUSY_ERROR    ((uint32_t)0x00000020u)

#define EEPROM_EEDONE_WRBUSY_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EEDONE_WRBUSY_NOERROR    ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_WRBUSY_ERROR      ((uint32_t)0x00000001u)
/*----------*/

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

/*----------*/
#define EEPROM_EESUPP_R_START_MASK     ((uint32_t)0x00000001u)
#define EEPROM_EESUPP_R_START_BIT      (0)
#define EEPROM_EESUPP_R_START_DIS      ((uint32_t)0x00000000u)
#define EEPROM_EESUPP_R_START_EN       ((uint32_t)0x00000001u)

#define EEPROM_EESUPP_START_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EESUPP_START_DIS        ((uint32_t)0x00000000u)
#define EEPROM_EESUPP_START_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EESUPP_R_EREQ_MASK     ((uint32_t)0x00000002u)
#define EEPROM_EESUPP_R_EREQ_BIT      (1)
#define EEPROM_EESUPP_R_EREQ_DIS      ((uint32_t)0x00000000u)
#define EEPROM_EESUPP_R_EREQ_EN       ((uint32_t)0x00000002u)

#define EEPROM_EESUPP_EREQ_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EESUPP_EREQ_DIS        ((uint32_t)0x00000000u)
#define EEPROM_EESUPP_EREQ_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EESUPP_R_ERETRY_MASK     ((uint32_t)0x00000004u)
#define EEPROM_EESUPP_R_ERETRY_BIT      (2)
#define EEPROM_EESUPP_R_ERETRY_DIS      ((uint32_t)0x00000000u)
#define EEPROM_EESUPP_R_ERETRY_EN       ((uint32_t)0x00000004u)

#define EEPROM_EESUPP_ERETRY_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EESUPP_ERETRY_DIS        ((uint32_t)0x00000000u)
#define EEPROM_EESUPP_ERETRY_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EESUPP_R_PRETRY_MASK     ((uint32_t)0x00000008u)
#define EEPROM_EESUPP_R_PRETRY_BIT      (3)
#define EEPROM_EESUPP_R_PRETRY_NOERROR  ((uint32_t)0x00000000u)
#define EEPROM_EESUPP_R_PRETRY_ERROR    ((uint32_t)0x00000008u)

#define EEPROM_EESUPP_PRETRY_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EESUPP_PRETRY_NOERROR    ((uint32_t)0x00000000u)
#define EEPROM_EESUPP_PRETRY_ERROR      ((uint32_t)0x00000001u)
/*----------*/

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

/*----------*/
#define EEPROM_EEUNLOCK_R_UNLOCK_MASK     ((uint32_t)0xFFFFFFFFu)
#define EEPROM_EEUNLOCK_R_UNLOCK_BIT      (0)

#define EEPROM_EEUNLOCK_UNLOCK_MASK       ((uint32_t)0xFFFFFFFFu)
/*----------*/

/******************************************************************************************
************************************ 9 EEPROT *********************************************
******************************************************************************************/
#define EEPROM_EEPROT            (((EEPROT_TypeDef*)(EEPROM_BASE+EEPROM_EEPROT_OFFSET )))
#define EEPROM_EEPROT_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEPROT_OFFSET)))
#define EEPROM_BITBANDING_EEPROT      (((BITBANDING_EEPROT_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEPROT_OFFSET)*32))))

/*----------*/
#define EEPROM_EEPROT_R_PROT_MASK           ((uint32_t)0x00000007u)
#define EEPROM_EEPROT_R_PROT_BIT            (0)
#define EEPROM_EEPROT_R_PROT_NOPASS_RDWR    ((uint32_t)0x00000000u)
#define EEPROM_EEPROT_R_PROT_PASS_RDWR      ((uint32_t)0x00000001u)
#define EEPROM_EEPROT_R_PROT_NOPASS_RD      ((uint32_t)0x00000002u)

#define EEPROM_EEPROT_PROT_MASK           ((uint32_t)0x00000007u)
#define EEPROM_EEPROT_PROT_NOPASS_RDWR    ((uint32_t)0x00000000u)
#define EEPROM_EEPROT_PROT_PASS_RDWR      ((uint32_t)0x00000001u)
#define EEPROM_EEPROT_PROT_NOPASS_RD      ((uint32_t)0x00000002u)
/*----------*/

/*----------*/
#define EEPROM_EEPROT_R_ACC_MASK           ((uint32_t)0x00000008u)
#define EEPROM_EEPROT_R_ACC_BIT            (3)
#define EEPROM_EEPROT_R_ACC_BOTH           ((uint32_t)0x00000000u)
#define EEPROM_EEPROT_R_ACC_SUPERVISOR     ((uint32_t)0x00000008u)

#define EEPROM_EEPROT_ACC_MASK           ((uint32_t)0x00000001u)
#define EEPROM_EEPROT_ACC_BOTH           ((uint32_t)0x00000000u)
#define EEPROM_EEPROT_ACC_SUPERVISOR     ((uint32_t)0x00000001u)
/*----------*/

#define EEPROM_BITBANDING_EEPROT_ACC       (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEPROT_OFFSET)*32)+(EEPROM_EEPROT_R_ACC_BIT*4))))

/******************************************************************************************
************************************ 10 EEPASS0 *********************************************
******************************************************************************************/
#define EEPROM_EEPASS0            (((EEPASS_TypeDef*)(EEPROM_BASE+EEPROM_EEPASS0_OFFSET )))
#define EEPROM_EEPASS0_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEPASS0_OFFSET)))
#define EEPROM_BITBANDING_EEPASS0      (((BITBANDING_EEPASS_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEPASS0_OFFSET)*32))))

/*----------*/
#define EEPROM_EEPASS0_R_PASS_MASK     ((uint32_t)0xFFFFFFFFu)
#define EEPROM_EEPASS0_R_PASS_BIT      (0)
#define EEPROM_EEPASS0_R_PASS_NOSET    ((uint32_t)0x00000000u)
#define EEPROM_EEPASS0_R_PASS_SET      ((uint32_t)0x00000001u)

#define EEPROM_EEPASS0_PASS_MASK       ((uint32_t)0xFFFFFFFFu)
#define EEPROM_EEPASS0_PASS_NOSET      ((uint32_t)0x00000000u)
#define EEPROM_EEPASS0_PASS_SET        ((uint32_t)0x00000001u)
/*----------*/

/******************************************************************************************
************************************11 EEPASS1 *********************************************
******************************************************************************************/
#define EEPROM_EEPASS1            (((EEPASS_TypeDef*)(EEPROM_BASE+EEPROM_EEPASS1_OFFSET )))
#define EEPROM_EEPASS1_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEPASS1_OFFSET)))
#define EEPROM_BITBANDING_EEPASS1      (((BITBANDING_EEPASS_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEPASS1_OFFSET)*32))))

/*----------*/
#define EEPROM_EEPASS1_R_PASS_MASK     ((uint32_t)0xFFFFFFFFu)
#define EEPROM_EEPASS1_R_PASS_BIT      (0)
#define EEPROM_EEPASS1_R_PASS_NOSET    ((uint32_t)0x00000000u)
#define EEPROM_EEPASS1_R_PASS_SET      ((uint32_t)0x00000001u)

#define EEPROM_EEPASS1_PASS_MASK       ((uint32_t)0xFFFFFFFFu)
#define EEPROM_EEPASS1_PASS_NOSET      ((uint32_t)0x00000000u)
#define EEPROM_EEPASS1_PASS_SET        ((uint32_t)0x00000001u)
/*----------*/

/******************************************************************************************
************************************12 EEPASS2 *********************************************
******************************************************************************************/
#define EEPROM_EEPASS2            (((EEPASS_TypeDef*)(EEPROM_BASE+EEPROM_EEPASS2_OFFSET )))
#define EEPROM_EEPASS2_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEPASS2_OFFSET)))
#define EEPROM_BITBANDING_EEPASS2      (((BITBANDING_EEPASS_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEPASS2_OFFSET)*32))))

/*----------*/
#define EEPROM_EEPASS2_R_PASS_MASK     ((uint32_t)0xFFFFFFFFu)
#define EEPROM_EEPASS2_R_PASS_BIT      (0)
#define EEPROM_EEPASS2_R_PASS_NOSET    ((uint32_t)0x00000000u)
#define EEPROM_EEPASS2_R_PASS_SET      ((uint32_t)0x00000001u)

#define EEPROM_EEPASS2_PASS_MASK       ((uint32_t)0xFFFFFFFFu)
#define EEPROM_EEPASS2_PASS_NOSET      ((uint32_t)0x00000000u)
#define EEPROM_EEPASS2_PASS_SET        ((uint32_t)0x00000001u)
/*----------*/

/******************************************************************************************
************************************13 EEINT *********************************************
******************************************************************************************/
#define EEPROM_EEINT            (((EEINT_TypeDef*)(EEPROM_BASE+EEPROM_EEINT_OFFSET )))
#define EEPROM_EEINT_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEINT_OFFSET)))
#define EEPROM_BITBANDING_EEINT      (((BITBANDING_EEINT_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEINT_OFFSET)*32))))

/*----------*/
#define EEPROM_EEINT_R_INT_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EEINT_R_INT_BIT        (0)
#define EEPROM_EEINT_R_INT_NOOCCUR    ((uint32_t)0x00000000u)
#define EEPROM_EEINT_R_INT_OCCUR      ((uint32_t)0x00000001u)

#define EEPROM_EEINT_INT_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEINT_INT_NOOCCUR      ((uint32_t)0x00000000u)
#define EEPROM_EEINT_INT_OCCUR        ((uint32_t)0x00000001u)
/*----------*/

#define EEPROM_BITBANDING_EEINT_INT       (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEINT_OFFSET)*32)+(EEPROM_EEINT_R_INT_BIT*4))))

/******************************************************************************************
************************************14 EEHIDE *********************************************
******************************************************************************************/
#define EEPROM_EEHIDE            (((EEHIDE_TypeDef*)(EEPROM_BASE+EEPROM_EEHIDE_OFFSET )))
#define EEPROM_EEHIDE_R          (*((volatile uint32_t *)(EEPROM_BASE+EEPROM_EEHIDE_OFFSET)))
#define EEPROM_BITBANDING_EEHIDE      (((BITBANDING_EEHIDE_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEHIDE_OFFSET)*32))))

/*----------*/
#define EEPROM_EEHIDE_R_H1_MASK       ((uint32_t)0x00000002u)
#define EEPROM_EEHIDE_R_H1_BIT        (1)
#define EEPROM_EEHIDE_R_H1_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H1_HIDE       ((uint32_t)0x00000002u)

#define EEPROM_EEHIDE_H1_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H1_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H1_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H2_MASK       ((uint32_t)0x00000004u)
#define EEPROM_EEHIDE_R_H2_BIT        (2)
#define EEPROM_EEHIDE_R_H2_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H2_HIDE       ((uint32_t)0x00000004u)

#define EEPROM_EEHIDE_H2_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H2_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H2_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H3_MASK       ((uint32_t)0x00000008u)
#define EEPROM_EEHIDE_R_H3_BIT        (3)
#define EEPROM_EEHIDE_R_H3_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H3_HIDE       ((uint32_t)0x00000008u)

#define EEPROM_EEHIDE_H3_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H3_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H3_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H4_MASK       ((uint32_t)0x00000010u)
#define EEPROM_EEHIDE_R_H4_BIT        (4)
#define EEPROM_EEHIDE_R_H4_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H4_HIDE       ((uint32_t)0x000000010u)

#define EEPROM_EEHIDE_H4_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H4_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H4_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H5_MASK       ((uint32_t)0x00000020u)
#define EEPROM_EEHIDE_R_H5_BIT        (5)
#define EEPROM_EEHIDE_R_H5_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H5_HIDE       ((uint32_t)0x00000020u)

#define EEPROM_EEHIDE_H5_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H5_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H5_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H6_MASK       ((uint32_t)0x00000040u)
#define EEPROM_EEHIDE_R_H6_BIT        (6)
#define EEPROM_EEHIDE_R_H6_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H6_HIDE       ((uint32_t)0x00000040u)

#define EEPROM_EEHIDE_H6_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H6_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H6_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H7_MASK       ((uint32_t)0x00000080u)
#define EEPROM_EEHIDE_R_H7_BIT        (7)
#define EEPROM_EEHIDE_R_H7_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H7_HIDE       ((uint32_t)0x00000080u)

#define EEPROM_EEHIDE_H7_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H7_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H7_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H8_MASK       ((uint32_t)0x00000100u)
#define EEPROM_EEHIDE_R_H8_BIT        (8)
#define EEPROM_EEHIDE_R_H8_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H8_HIDE       ((uint32_t)0x00000100u)

#define EEPROM_EEHIDE_H8_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H8_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H8_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H9_MASK       ((uint32_t)0x00000200u)
#define EEPROM_EEHIDE_R_H9_BIT        (9)
#define EEPROM_EEHIDE_R_H9_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H9_HIDE       ((uint32_t)0x00000200u)

#define EEPROM_EEHIDE_H9_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H9_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H9_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H10_MASK       ((uint32_t)0x00000400u)
#define EEPROM_EEHIDE_R_H10_BIT        (10)
#define EEPROM_EEHIDE_R_H10_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H10_HIDE       ((uint32_t)0x00000400u)

#define EEPROM_EEHIDE_H10_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H10_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H10_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H11_MASK       ((uint32_t)0x00000800u)
#define EEPROM_EEHIDE_R_H11_BIT        (11)
#define EEPROM_EEHIDE_R_H11_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H11_HIDE       ((uint32_t)0x00000800u)

#define EEPROM_EEHIDE_H11_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H11_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H11_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H12_MASK       ((uint32_t)0x00001000u)
#define EEPROM_EEHIDE_R_H12_BIT        (12)
#define EEPROM_EEHIDE_R_H12_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H12_HIDE       ((uint32_t)0x00001000u)

#define EEPROM_EEHIDE_H12_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H12_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H12_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H13_MASK       ((uint32_t)0x00002000u)
#define EEPROM_EEHIDE_R_H13_BIT        (13)
#define EEPROM_EEHIDE_R_H13_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H13_HIDE       ((uint32_t)0x00002000u)

#define EEPROM_EEHIDE_H13_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H13_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H13_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H14_MASK       ((uint32_t)0x00004000u)
#define EEPROM_EEHIDE_R_H14_BIT        (14)
#define EEPROM_EEHIDE_R_H14_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H14_HIDE       ((uint32_t)0x00004000u)

#define EEPROM_EEHIDE_H14_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H14_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H14_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H15_MASK       ((uint32_t)0x00008000u)
#define EEPROM_EEHIDE_R_H15_BIT        (15)
#define EEPROM_EEHIDE_R_H15_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H15_HIDE       ((uint32_t)0x00008000u)

#define EEPROM_EEHIDE_H15_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H15_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H15_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H16_MASK       ((uint32_t)0x00010000u)
#define EEPROM_EEHIDE_R_H16_BIT        (16)
#define EEPROM_EEHIDE_R_H16_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H16_HIDE       ((uint32_t)0x00010000u)

#define EEPROM_EEHIDE_H16_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H16_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H16_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H17_MASK       ((uint32_t)0x00020000u)
#define EEPROM_EEHIDE_R_H17_BIT        (17)
#define EEPROM_EEHIDE_R_H17_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H17_HIDE       ((uint32_t)0x00020000u)

#define EEPROM_EEHIDE_H17_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H17_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H17_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H18_MASK       ((uint32_t)0x00040000u)
#define EEPROM_EEHIDE_R_H18_BIT        (18)
#define EEPROM_EEHIDE_R_H18_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H18_HIDE       ((uint32_t)0x00040000u)

#define EEPROM_EEHIDE_H18_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H18_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H18_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H19_MASK       ((uint32_t)0x00080000u)
#define EEPROM_EEHIDE_R_H19_BIT        (19)
#define EEPROM_EEHIDE_R_H19_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H19_HIDE       ((uint32_t)0x00080000u)

#define EEPROM_EEHIDE_H19_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H19_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H19_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H20_MASK       ((uint32_t)0x00100000u)
#define EEPROM_EEHIDE_R_H20_BIT        (20)
#define EEPROM_EEHIDE_R_H20_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H20_HIDE       ((uint32_t)0x00100000u)

#define EEPROM_EEHIDE_H20_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H20_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H20_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H21_MASK       ((uint32_t)0x00200000u)
#define EEPROM_EEHIDE_R_H21_BIT        (21)
#define EEPROM_EEHIDE_R_H21_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H21_HIDE       ((uint32_t)0x00200000u)

#define EEPROM_EEHIDE_H21_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H21_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H21_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H22_MASK       ((uint32_t)0x00400000u)
#define EEPROM_EEHIDE_R_H22_BIT        (22)
#define EEPROM_EEHIDE_R_H22_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H22_HIDE       ((uint32_t)0x00400000u)

#define EEPROM_EEHIDE_H22_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H22_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H22_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H23_MASK       ((uint32_t)0x00800000u)
#define EEPROM_EEHIDE_R_H23_BIT        (23)
#define EEPROM_EEHIDE_R_H23_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H23_HIDE       ((uint32_t)0x00800000u)

#define EEPROM_EEHIDE_H23_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H23_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H23_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H24_MASK       ((uint32_t)0x01000000u)
#define EEPROM_EEHIDE_R_H24_BIT        (24)
#define EEPROM_EEHIDE_R_H24_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H24_HIDE       ((uint32_t)0x01000000u)

#define EEPROM_EEHIDE_H24_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H24_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H24_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H25_MASK       ((uint32_t)0x02000000u)
#define EEPROM_EEHIDE_R_H25_BIT        (25)
#define EEPROM_EEHIDE_R_H25_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H25_HIDE       ((uint32_t)0x02000000u)

#define EEPROM_EEHIDE_H25_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H25_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H25_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H26_MASK       ((uint32_t)0x04000000u)
#define EEPROM_EEHIDE_R_H26_BIT        (26)
#define EEPROM_EEHIDE_R_H26_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H26_HIDE       ((uint32_t)0x04000000u)

#define EEPROM_EEHIDE_H26_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H26_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H26_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H27_MASK       ((uint32_t)0x08000000u)
#define EEPROM_EEHIDE_R_H27_BIT        (27)
#define EEPROM_EEHIDE_R_H27_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H27_HIDE       ((uint32_t)0x08000000u)

#define EEPROM_EEHIDE_H27_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H27_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H27_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H28_MASK       ((uint32_t)0x10000000u)
#define EEPROM_EEHIDE_R_H28_BIT        (28)
#define EEPROM_EEHIDE_R_H28_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H28_HIDE       ((uint32_t)0x10000000u)

#define EEPROM_EEHIDE_H28_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H28_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H28_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H29_MASK       ((uint32_t)0x20000000u)
#define EEPROM_EEHIDE_R_H29_BIT        (29)
#define EEPROM_EEHIDE_R_H29_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H29_HIDE       ((uint32_t)0x20000000u)

#define EEPROM_EEHIDE_H29_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H29_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H29_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H30_MASK       ((uint32_t)0x40000000u)
#define EEPROM_EEHIDE_R_H30_BIT        (30)
#define EEPROM_EEHIDE_R_H30_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H30_HIDE       ((uint32_t)0x40000000u)

#define EEPROM_EEHIDE_H30_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H30_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H30_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H31_MASK       ((uint32_t)0x80000000u)
#define EEPROM_EEHIDE_R_H31_BIT        (31)
#define EEPROM_EEHIDE_R_H31_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H31_HIDE       ((uint32_t)0x80000000u)

#define EEPROM_EEHIDE_H31_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H31_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H31_HIDE         ((uint32_t)0x00000001u)
/*----------*/


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

/*----------*/
#define EEPROM_EEDBGME_R_ME_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EEDBGME_R_ME_BIT        (0)
#define EEPROM_EEDBGME_R_ME_NA         ((uint32_t)0x00000000u)
#define EEPROM_EEDBGME_R_ME_ERASE      ((uint32_t)0x00000001u)

#define EEPROM_EEDBGME_ME_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEDBGME_ME_NA           ((uint32_t)0x00000000u)
#define EEPROM_EEDBGME_ME_ERASE        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEDBGME_R_KEY_MASK       ((uint32_t)0xFFFF0000u)
#define EEPROM_EEDBGME_R_KEY_BIT        (0)
#define EEPROM_EEDBGME_R_KEY_ERASE      ((uint32_t)0xE37B0000u)

#define EEPROM_EEDBGME_KEY_MASK         ((uint32_t)0x0000FFFFu)
#define EEPROM_EEDBGME_KEY_ERASE        ((uint32_t)0x0000E37Bu)
/*----------*/

#define EEPROM_BITBANDING_EEDBGME_ME       (*((volatile uint32_t *)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEDBGME_OFFSET)*32)+(EEPROM_EEDBGME_R_ME_BIT*4))))

/******************************************************************************************
************************************16 EEPROMPP *********************************************
******************************************************************************************/
#define EEPROM_EEPROMPP            (((EEPROMPP_TypeDef*)(EEPROM_BASE+EEPROM_EEPROMPP_OFFSET )))
#define EEPROM_EEPROMPP_R          (*((volatile const uint32_t *)(EEPROM_BASE+EEPROM_EEPROMPP_OFFSET)))
#define EEPROM_BITBANDING_EEPROMPP      (((BITBANDING_EEPROMPP_TypeDef*)(EEPROM_BITBANDING_BASE+((EEPROM_OFFSET+EEPROM_EEPROMPP_OFFSET)*32))))

/*----------*/
#define EEPROM_EEPROMPP_R_SIZE_MASK       ((uint32_t)0x0000001Fu)
#define EEPROM_EEPROMPP_R_SIZE_BIT        (0)
#define EEPROM_EEPROMPP_R_SIZE_2KB        ((uint32_t)0x0000001Fu)

#define EEPROM_EEPROMPP_SIZE_MASK         ((uint32_t)0x0000001Fu)
#define EEPROM_EEPROMPP_SIZE_2KB          ((uint32_t)0x0000001Fu)
/*----------*/


#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_REGISTER_H_ */
